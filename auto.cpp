// ============================================================
// 文件名: auto.cpp
// 功能: 子弹磁力追踪（使用绝对地址 GWorld）
// 编译: clang++ -std=c++17 -pthread -O2 auto.cpp -o pmagnet
// ============================================================
#include <iostream>
#include <vector>
#include <cmath>
#include <thread>
#include <chrono>
#include <fstream>
#include <string>
#include <dirent.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/uio.h>

// ==================== 用户可调参数 ====================
const float AIM_UP_OFFSET = 100.0f;
const float FOV_ANGLE    = 60.0f;
const float SPEED_THRESHOLD = 50.0f;
// =====================================================

namespace Offsets {
    // 注意：这里直接填你 Dump 出的 GWorld 绝对地址
    constexpr uintptr_t GWorld = 0xb7e6538;  // 直接绝对地址

    constexpr uintptr_t UWorld_PersistentLevel = 0x30;
    constexpr uintptr_t ULevel_Actors_Data  = 0xA0;
    constexpr uintptr_t ULevel_Actors_Count = 0xA8;
    constexpr uintptr_t AActor_RootComponent = 0x1B8;
    constexpr uintptr_t AActor_MovementComponent = 0x168;
    constexpr uintptr_t USceneComponent_RelativeLocation = 0x140;
    constexpr uintptr_t USceneComponent_ComponentVelocity = 0x188;
    constexpr uintptr_t UMovementComponent_Velocity = 0xD0;
    constexpr uintptr_t UWorld_GameInstance = 0x190;
    constexpr uintptr_t UGameInstance_LocalPlayers = 0x38;
    constexpr uintptr_t ULocalPlayer_PlayerController = 0x30;
    constexpr uintptr_t APlayerController_AcknowledgedPawn = 0x330;
    constexpr uintptr_t APlayerController_ControlRotation = 0x440;
}

struct FVector { float X, Y, Z; };
struct FRotator { float Pitch, Yaw, Roll; };

inline FVector operator-(const FVector& a, const FVector& b) { return {a.X-b.X, a.Y-b.Y, a.Z-b.Z}; }
inline float Length(const FVector& v) { return sqrtf(v.X*v.X + v.Y*v.Y + v.Z*v.Z); }
inline FVector Normalize(const FVector& v) { float l=Length(v); if(l<1e-6f)return v; return {v.X/l, v.Y/l, v.Z/l}; }
inline float Dot(const FVector& a, const FVector& b) { return a.X*b.X + a.Y*b.Y + a.Z*b.Z; }

inline FVector GetForwardVector(const FRotator& rot) {
    float pitch = rot.Pitch * 3.14159265f / 180.0f;
    float yaw   = rot.Yaw   * 3.14159265f / 180.0f;
    return { cosf(pitch)*cosf(yaw), cosf(pitch)*sinf(yaw), sinf(pitch) };
}

int mem_fd = -1;
bool AttachProcess(pid_t pid) { char path[64]; sprintf(path,"/proc/%d/mem",pid); mem_fd=open(path,O_RDWR); return mem_fd!=-1; }
template<typename T> T ReadMem(uintptr_t addr) { T val{}; if(mem_fd==-1)return val; lseek(mem_fd,addr,SEEK_SET); read(mem_fd,&val,sizeof(T)); return val; }
template<typename T> void WriteMem(uintptr_t addr, T val) { if(mem_fd==-1)return; lseek(mem_fd,addr,SEEK_SET); write(mem_fd,&val,sizeof(T)); }

uintptr_t GetLibUE4Base(pid_t pid) {
    // 不再使用此函数，保留空实现
    return 0;
}

uintptr_t GetLocalPlayerController(uintptr_t World) {
    uintptr_t GI = ReadMem<uintptr_t>(World + Offsets::UWorld_GameInstance);
    if(!GI) return 0;
    uintptr_t LPtr = ReadMem<uintptr_t>(GI + Offsets::UGameInstance_LocalPlayers);
    if(!LPtr) return 0;
    uintptr_t LPlayer = ReadMem<uintptr_t>(LPtr);
    if(!LPlayer) return 0;
    return ReadMem<uintptr_t>(LPlayer + Offsets::ULocalPlayer_PlayerController);
}

uintptr_t GetLocalPawn(uintptr_t World) {
    uintptr_t PC = GetLocalPlayerController(World);
    if(!PC) return 0;
    return ReadMem<uintptr_t>(PC + Offsets::APlayerController_AcknowledgedPawn);
}

void RunProjectileMagnet() {
    // 直接使用绝对地址读取 GWorld
    uintptr_t World = ReadMem<uintptr_t>(Offsets::GWorld);
    if (!World) {
        static bool warned=false; if(!warned){std::cerr<<"[-] GWorld=0\n"; warned=true;}
        return;
    }

    uintptr_t LocalPC = GetLocalPlayerController(World);
    if (!LocalPC) return;
    FRotator ControlRot = ReadMem<FRotator>(LocalPC + Offsets::APlayerController_ControlRotation);
    FVector Forward = GetForwardVector(ControlRot);
    
    uintptr_t LocalPawn = GetLocalPawn(World);
    FVector LocalPos{0,0,0};
    if (LocalPawn) {
        uintptr_t LRoot = ReadMem<uintptr_t>(LocalPawn + Offsets::AActor_RootComponent);
        if (LRoot) LocalPos = ReadMem<FVector>(LRoot + Offsets::USceneComponent_RelativeLocation);
    }

    uintptr_t Level = ReadMem<uintptr_t>(World + Offsets::UWorld_PersistentLevel);
    if (!Level) return;
    uintptr_t ActorsData = ReadMem<uintptr_t>(Level + Offsets::ULevel_Actors_Data);
    int32_t ActorCount = ReadMem<int32_t>(Level + Offsets::ULevel_Actors_Count);
    if (ActorsData == 0 || ActorCount <= 0 || ActorCount > 100000) {
        ActorsData = ReadMem<uintptr_t>(Level + 0xE0);
        ActorCount = ReadMem<int32_t>(Level + 0xE8);
        if (ActorCount <= 0 || ActorCount > 100000) return;
    }
    if (!ActorsData || ActorCount <= 0) return;

    uintptr_t TargetActor = 0;
    FVector TargetPos{0,0,0};
    float MinDist = 1e9f;
    float CosAngle = cosf(FOV_ANGLE * 3.14159265f / 180.0f);

    for (int i=0; i<ActorCount; ++i) {
        uintptr_t Actor = ReadMem<uintptr_t>(ActorsData + i*8);
        if (!Actor || Actor == LocalPawn) continue;
        uintptr_t Root = ReadMem<uintptr_t>(Actor + Offsets::AActor_RootComponent);
        if (!Root) continue;
        FVector Pos = ReadMem<FVector>(Root + Offsets::USceneComponent_RelativeLocation);
        FVector Delta = Pos - LocalPos;
        float dist = Length(Delta);
        if (dist < 100.0f || dist > 15000.0f) continue;
        FVector Dir = Normalize(Delta);
        float dot = Dot(Dir, Forward);
        if (dot < CosAngle) continue;
        if (dist < MinDist) {
            MinDist = dist;
            TargetActor = Actor;
            TargetPos = Pos;
        }
    }
    if (!TargetActor) return;

    FVector AimPos = TargetPos;
    AimPos.Z += AIM_UP_OFFSET;

    static int frame = 0;
    int modified = 0;

    for (int i=0; i<ActorCount; ++i) {
        uintptr_t Actor = ReadMem<uintptr_t>(ActorsData + i*8);
        if (!Actor || Actor == LocalPawn || Actor == TargetActor) continue;

        uintptr_t MovComp = ReadMem<uintptr_t>(Actor + Offsets::AActor_MovementComponent);
        uintptr_t Root = ReadMem<uintptr_t>(Actor + Offsets::AActor_RootComponent);
        if (!Root) continue;

        FVector Vel{0,0,0};
        if (MovComp) {
            Vel = ReadMem<FVector>(MovComp + Offsets::UMovementComponent_Velocity);
        } else {
            Vel = ReadMem<FVector>(Root + Offsets::USceneComponent_ComponentVelocity);
        }

        float speed = Length(Vel);
        if (speed < SPEED_THRESHOLD) continue;

        FVector BulletPos = ReadMem<FVector>(Root + Offsets::USceneComponent_RelativeLocation);
        FVector Dir = Normalize(AimPos - BulletPos);
        FVector NewVel = {Dir.X * speed, Dir.Y * speed, Dir.Z * speed};

        if (MovComp) {
            WriteMem<FVector>(MovComp + Offsets::UMovementComponent_Velocity, NewVel);
            modified++;
        } else {
            WriteMem<FVector>(Root + Offsets::USceneComponent_ComponentVelocity, NewVel);
            modified++;
        }
    }

    if (++frame % 60 == 0) {
        std::cout << "[帧" << frame << "] 距离:" << (int)MinDist << "cm 修正:" << modified << "颗\n";
    }
}

int main() {
    std::cout << "[ARM64] 子弹追踪 (绝对地址版)\n";

    DIR* dir = opendir("/proc");
    struct dirent* entry;
    pid_t pid = 0;
    while ((entry = readdir(dir)) != nullptr) {
        if (entry->d_type != DT_DIR) continue;
        pid_t p = atoi(entry->d_name);
        if (p <= 0) continue;
        char cmdline[256]; sprintf(cmdline,"/proc/%d/cmdline",p);
        std::ifstream cmd(cmdline); std::string name; std::getline(cmd, name);
        if (name.find("UE4") != std::string::npos || name.find("Game") != std::string::npos) {
            pid = p; break;
        }
    }
    closedir(dir);

    if (!pid) { std::cerr << "未找到游戏进程\n"; return 1; }
    if (!AttachProcess(pid)) { std::cerr << "打开mem失败，需Root\n"; return 1; }

    // 不再需要 lib_base
    std::cout << "已附加进程 PID: " << pid << "\n";
    std::cout << "GWorld 绝对地址: 0x" << std::hex << Offsets::GWorld << std::dec << "\n";
    std::cout << "视野角度: " << FOV_ANGLE << "°  抬高量: " << AIM_UP_OFFSET << "cm\n";

    while (true) {
        RunProjectileMagnet();
        std::this_thread::sleep_for(std::chrono::milliseconds(16));
    }

    close(mem_fd);
    return 0;
}