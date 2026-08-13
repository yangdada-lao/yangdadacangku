// 创作者: 曦曦(DreamFekk) https://github.com/DreamFekk
// 禁止圈钱盗卖

#pragma once

#include <cstdint>


namespace UEOffsets
{

namespace Config
{
    constexpr bool isUsingCasePreservingName = false;
    constexpr bool IsUsingFNamePool = true;
    constexpr bool isUsingOutlineNumberName = true;
}

namespace FName
{
    constexpr uintptr_t ComparisonIndex = 0x0;
    constexpr uintptr_t Number = 0x0;
    constexpr uintptr_t DisplayIndex = 0x0;
    constexpr uintptr_t Size = 0x4;
}

namespace FNameEntry
{
    constexpr uintptr_t Index = 0x0;
    constexpr uintptr_t Name = 0x0;
}

namespace FNamePool
{
    constexpr int32_t Stride = 2;
    constexpr int32_t BlocksBit = 16;
    constexpr uintptr_t BlocksOff = 0x40;
}

namespace FNamePoolEntry
{
    constexpr uintptr_t Header = 0x0;
}

namespace FUObjectArray
{
    constexpr uintptr_t ObjObjects = 0x10;
}

namespace TUObjectArray
{
    constexpr uintptr_t Objects = 0x0;
    constexpr uintptr_t NumElements = 0x10;
    constexpr uintptr_t NumElementsPerChunk = 0x10000;
}

namespace FUObjectItem
{
    constexpr uintptr_t Object = 0x0;
    constexpr uintptr_t Size = 0x18;
}

namespace UObject
{
    constexpr uintptr_t ObjectFlags = 0x8;
    constexpr uintptr_t InternalIndex = 0xc;
    constexpr uintptr_t ClassPrivate = 0x10;
    constexpr uintptr_t NamePrivate = 0x18;
    constexpr uintptr_t OuterPrivate = 0x20;
}

namespace UField
{
    constexpr uintptr_t Next = 0x28;
}

namespace UEnum
{
    constexpr uintptr_t Names = 0x40;
}

namespace UStruct
{
    constexpr uintptr_t SuperStruct = 0x40;
    constexpr uintptr_t Children = 0x48;
    constexpr uintptr_t ChildProperties = 0x50;
    constexpr uintptr_t PropertiesSize = 0x58;
    constexpr uintptr_t MinAlignment = 0x5c;
}

namespace UClass
{
    constexpr uintptr_t ClassDefaultObject = 0x110;
    constexpr uintptr_t ImplementedInterfaces = 0x238;
    constexpr uintptr_t CastFlags = 0xd8;
    constexpr uintptr_t ClassFlags = 0xe0;
}

namespace UScriptStruct
{
    constexpr uintptr_t StructFlags = 0x0;
}

namespace UFunction
{
    constexpr uintptr_t EFunctionFlags = 0xb0;
    constexpr uintptr_t NumParams = 0xb7;
    constexpr uintptr_t ParamSize = 0xba;
    constexpr uintptr_t Func = 0xd8;
}

namespace UProperty
{
    constexpr uintptr_t ArrayDim = 0x0;
    constexpr uintptr_t ElementSize = 0x0;
    constexpr uintptr_t PropertyFlags = 0x0;
    constexpr uintptr_t Offset_Internal = 0x0;
    constexpr uintptr_t Size = 0x0;
}

namespace FField
{
    constexpr uintptr_t ClassPrivate = 0x8;
    constexpr uintptr_t Owner = 0x10;
    constexpr uintptr_t Next = 0x18;
    constexpr uintptr_t NamePrivate = 0x20;
    constexpr uintptr_t FlagsPrivate = 0x24;
}

namespace FFieldClass
{
    constexpr uintptr_t Name = 0x0;
    constexpr uintptr_t SuperClass = 0x8;
    constexpr uintptr_t CastFlags = 0x10;
}

namespace FProperty
{
    constexpr uintptr_t ArrayDim = 0x2c;
    constexpr uintptr_t ElementSize = 0x30;
    constexpr uintptr_t PropertyFlags = 0x34;
    constexpr uintptr_t Offset_Internal = 0x44;
    constexpr uintptr_t Size = 0x70;
}

namespace ObjectProperty
{
    constexpr uintptr_t PropertyClass = 0x70;
}

namespace StructProperty
{
    constexpr uintptr_t Struct = 0x70;
}

namespace ByteProperty
{
    constexpr uintptr_t Enum = 0x70;
}

namespace BoolProperty
{
    constexpr uintptr_t Base = 0x70;
}

namespace EnumProperty
{
    constexpr uintptr_t UnderlayingProp = 0x70;
    constexpr uintptr_t Enum = 0x78;
}

namespace DelegateProperty
{
    constexpr uintptr_t SignatureFunction = 0x70;
}

namespace ArrayProperty
{
    constexpr uintptr_t Inner = 0x78;
}

namespace SetProperty
{
    constexpr uintptr_t ElementProp = 0x70;
}

namespace MapProperty
{
    constexpr uintptr_t KeyProp = 0x70;
    constexpr uintptr_t ValueProp = 0x78;
}

namespace ClassProperty
{
    constexpr uintptr_t MetaClass = 0x78;
}

namespace InterfaceProperty
{
    constexpr uintptr_t InterfaceClass = 0x70;
}

namespace ULevel
{
    constexpr uintptr_t Actors = 0xa0;
}

namespace UDataTable
{
    constexpr uintptr_t RowMap = 0x11c0011;
}


}

namespace UEPointers
{
    constexpr uintptr_t Names = 0xb6606c0;
    constexpr uintptr_t UObjectArray = 0xb6b9ed8;
    constexpr uintptr_t ObjObjects = 0xb6b9ee8;
    constexpr uintptr_t Engine = 0xb84f190;
    constexpr uintptr_t World = 0xb7e6538;
    constexpr uintptr_t Matrix = 0x0;
    constexpr uintptr_t Physx = 0x0;
    constexpr uintptr_t FrameCount = 0x0;
    constexpr uintptr_t StaticFindObject = 0x0;
    constexpr uintptr_t NativeAndroidApp = 0xb857658;
    constexpr uintptr_t ProcessEvent = 0x0;
    constexpr uintptr_t ProcessEventIdx = 0x0;
}