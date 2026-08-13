// 创作者: 曦曦(DreamFekk) https://github.com/DreamFekk
// 禁止圈钱盗卖

#pragma once

#include <cstdio>
#include <string>
#include <cstdint>


// Package: CoreUObject
// Enums: 39

// Object: Enum CoreUObject.EAutomationEventType
enum class EAutomationEventType : uint8_t
{
	Info = 0,
	Warning = 1,
	Error = 2,
	EAutomationEventType_MAX = 3
};

// Object: Enum CoreUObject.ERangeBoundTypes
enum class ERangeBoundTypes : uint8_t
{
	Exclusive = 0,
	Inclusive = 1,
	Open = 2,
	ERangeBoundTypes_MAX = 3
};

// Object: Enum CoreUObject.EInterpCurveMode
enum class EInterpCurveMode : uint8_t
{
	CIM_Linear = 0,
	CIM_CurveAuto = 1,
	CIM_Constant = 2,
	CIM_CurveUser = 3,
	CIM_CurveBreak = 4,
	CIM_CurveAutoClamped = 5,
	CIM_MAX = 6
};

// Object: Enum CoreUObject.EInputDeviceConnectionState
enum class EInputDeviceConnectionState : uint8_t
{
	Invalid = 0,
	Unknown = 1,
	Disconnected = 2,
	Connected = 3,
	EInputDeviceConnectionState_MAX = 4
};

// Object: Enum CoreUObject.ELocalizedTextSourceCategory
enum class ELocalizedTextSourceCategory : uint8_t
{
	Game = 0,
	Engine = 1,
	Editor = 2,
	ELocalizedTextSourceCategory_MAX = 3
};

// Object: Enum CoreUObject.ELifetimeCondition
enum class ELifetimeCondition : uint8_t
{
	COND_None = 0,
	COND_InitialOnly = 1,
	COND_OwnerOnly = 2,
	COND_SkipOwner = 3,
	COND_SimulatedOnly = 4,
	COND_AutonomousOnly = 5,
	COND_SimulatedOrPhysics = 6,
	COND_InitialOrOwner = 7,
	COND_Custom = 8,
	COND_ReplayOrOwner = 9,
	COND_ReplayOnly = 10,
	COND_SimulatedOnlyNoReplay = 11,
	COND_SimulatedOrPhysicsNoReplay = 12,
	COND_SkipReplay = 13,
	COND_Dynamic = 14,
	COND_Never = 15,
	COND_NetGroup = 16,
	COND_Max = 17
};

// Object: Enum CoreUObject.EDataValidationUsecase
enum class EDataValidationUsecase : uint8_t
{
	None = 0,
	Manual = 1,
	Commandlet = 2,
	Save = 3,
	PreSubmit = 4,
	Script = 5,
	EDataValidationUsecase_MAX = 6
};

// Object: Enum CoreUObject.EOverriddenState
enum class EOverriddenState : uint8_t
{
	NoOverrides = 0,
	HasOverrides = 1,
	AllOverridden = 2,
	SubObjectsHasOverrides = 3,
	Added = 4,
	EOverriddenState_MAX = 5
};

// Object: Enum CoreUObject.EOverriddenPropertyOperation
enum class EOverriddenPropertyOperation : uint8_t
{
	None = 0,
	Modified = 1,
	Replace = 2,
	Add = 3,
	Remove = 4,
	SubObjectsShadowing = 5,
	EOverriddenPropertyOperation_MAX = 6
};

// Object: Enum CoreUObject.EFallbackEnum
enum class EFallbackEnum : uint8_t
{
	EFallbackEnum_MAX = 1
};

// Object: Enum CoreUObject.EUserDefinedStructureStatus
enum class EUserDefinedStructureStatus : uint8_t
{
	UDSS_UpToDate = 0,
	UDSS_Dirty = 1,
	UDSS_Error = 2,
	UDSS_Duplicate = 3,
	UDSS_MAX = 4
};

// Object: Enum CoreUObject.EVersePackageScope
enum class EVersePackageScope : uint8_t
{
	PublicAPI = 0,
	InternalAPI = 1,
	PublicUser = 2,
	InternalUser = 3,
	EVersePackageScope_MAX = 4
};

// Object: Enum CoreUObject.EVersePackageType
enum class EVersePackageType : uint8_t
{
	VNI = 0,
	Content = 1,
	PublishedContent = 2,
	Assets = 3,
	EVersePackageType_MAX = 4
};

// Object: Enum CoreUObject.EVerseEnumFlags
enum class EVerseEnumFlags : uint8_t
{
	None = 0,
	NativeBound = 1,
	UHTNative = 2,
	EVerseEnumFlags_MAX = 4
};

// Object: Enum CoreUObject.EVerseFalse
enum class EVerseFalse : uint8_t
{
	Value = 0,
	EVerseFalse_MAX = 1
};

// Object: Enum CoreUObject.EVerseTrue
enum class EVerseTrue : uint8_t
{
	Value = 0,
	EVerseTrue_MAX = 1
};

// Object: Enum CoreUObject.EVerseFunctionFlags
enum class EVerseFunctionFlags : uint8_t
{
	None = 0,
	UHTNative = 1,
	EVerseFunctionFlags_MAX = 2
};

// Object: Enum CoreUObject.EPropertyBagPropertyType
enum class EPropertyBagPropertyType : uint8_t
{
	None = 0,
	Bool = 1,
	Byte = 2,
	Int32 = 3,
	Int64 = 4,
	Float = 5,
	Double = 6,
	Name = 7,
	String = 8,
	Text = 9,
	Enum = 10,
	Struct = 11,
	Object = 12,
	SoftObject = 13,
	Class = 14,
	SoftClass = 15,
	UInt32 = 16,
	UInt64 = 17,
	Count = 18,
	EPropertyBagPropertyType_MAX = 19
};

// Object: Enum CoreUObject.EPropertyBagContainerType
enum class EPropertyBagContainerType : uint8_t
{
	None = 0,
	Array = 1,
	Set = 2,
	Count = 3,
	EPropertyBagContainerType_MAX = 4
};

// Object: Enum CoreUObject.EPropertyBagResult
enum class EPropertyBagResult : uint8_t
{
	Success = 0,
	TypeMismatch = 1,
	OutOfBounds = 2,
	PropertyNotFound = 3,
	DuplicatedValue = 4,
	EPropertyBagResult_MAX = 5
};

// Object: Enum CoreUObject.EPropertyBagAlterationResult
enum class EPropertyBagAlterationResult : uint8_t
{
	Success = 0,
	NoOperation = 1,
	InternalError = 2,
	PropertyNameEmpty = 3,
	PropertyNameInvalidCharacters = 4,
	SourcePropertyNotFound = 5,
	TargetPropertyNotFound = 6,
	TargetPropertyAlreadyExists = 7,
	EPropertyBagAlterationResult_MAX = 8
};

// Object: Enum CoreUObject.EPropertyBagMissingEnum
enum class EPropertyBagMissingEnum : uint8_t
{
	Missing = 0,
	EPropertyBagMissingEnum_MAX = 1
};

// Object: Enum CoreUObject.ESearchCase
enum class ESearchCase : uint8_t
{
	CaseSensitive = 0,
	IgnoreCase = 1,
	ESearchCase_MAX = 2
};

// Object: Enum CoreUObject.ESearchDir
enum class ESearchDir : uint8_t
{
	FromStart = 0,
	FromEnd = 1,
	ESearchDir_MAX = 2
};

// Object: Enum CoreUObject.ELogTimes
enum class ELogTimes : uint8_t
{
	None = 0,
	UTC = 1,
	SinceGStartTime = 2,
	Local = 3,
	ELogTimes_MAX = 4
};

// Object: Enum CoreUObject.EAxis
enum class EAxis : uint8_t
{
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	EAxis_MAX = 4
};

// Object: Enum CoreUObject.EAxisList
enum class EAxisList : uint8_t
{
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	Screen = 4,
	XY = 5,
	XZ = 6,
	YZ = 7,
	XYZ = 8,
	All = 9,
	ZRotation = 10,
	Rotate2D = 11,
	Left = 12,
	Up = 13,
	Forward = 14,
	LU = 15,
	LF = 16,
	UF = 17,
	LeftUpForward = 18,
	EAxisList_MAX = 19
};

// Object: Enum CoreUObject.EPixelFormat
enum class EPixelFormat : uint8_t
{
	PF_Unknown = 0,
	PF_A32B32G32R32F = 1,
	PF_B8G8R8A8 = 2,
	PF_G8 = 3,
	PF_G16 = 4,
	PF_DXT1 = 5,
	PF_DXT3 = 6,
	PF_DXT5 = 7,
	PF_UYVY = 8,
	PF_FloatRGB = 9,
	PF_FloatRGBA = 10,
	PF_DepthStencil = 11,
	PF_ShadowDepth = 12,
	PF_R32_FLOAT = 13,
	PF_G16R16 = 14,
	PF_G16R16F = 15,
	PF_G16R16F_FILTER = 16,
	PF_G32R32F = 17,
	PF_A2B10G10R10 = 18,
	PF_A16B16G16R16 = 19,
	PF_D24 = 20,
	PF_R16F = 21,
	PF_R16F_FILTER = 22,
	PF_BC5 = 23,
	PF_V8U8 = 24,
	PF_A1 = 25,
	PF_FloatR11G11B10 = 26,
	PF_A8 = 27,
	PF_R32_UINT = 28,
	PF_R32_SINT = 29,
	PF_PVRTC2 = 30,
	PF_PVRTC4 = 31,
	PF_R16_UINT = 32,
	PF_R16_SINT = 33,
	PF_R16G16B16A16_UINT = 34,
	PF_R16G16B16A16_SINT = 35,
	PF_R5G6B5_UNORM = 36,
	PF_R8G8B8A8 = 37,
	PF_A8R8G8B8 = 38,
	PF_BC4 = 39,
	PF_R8G8 = 40,
	PF_ATC_RGB = 41,
	PF_ATC_RGBA_E = 42,
	PF_ATC_RGBA_I = 43,
	PF_X24_G8 = 44,
	PF_ETC1 = 45,
	PF_ETC2_RGB = 46,
	PF_ETC2_RGBA = 47,
	PF_R32G32B32A32_UINT = 48,
	PF_R16G16_UINT = 49,
	PF_ASTC_4x4 = 50,
	PF_ASTC_6x6 = 51,
	PF_ASTC_8x8 = 52,
	PF_ASTC_10x10 = 53,
	PF_ASTC_12x12 = 54,
	PF_BC6H = 55,
	PF_BC7 = 56,
	PF_R8_UINT = 57,
	PF_L8 = 58,
	PF_XGXR8 = 59,
	PF_R8G8B8A8_UINT = 60,
	PF_R8G8B8A8_SNORM = 61,
	PF_R16G16B16A16_UNORM = 62,
	PF_R16G16B16A16_SNORM = 63,
	PF_PLATFORM_HDR = 64,
	PF_PLATFORM_HDR = 65,
	PF_PLATFORM_HDR = 66,
	PF_NV12 = 67,
	PF_R32G32_UINT = 68,
	PF_ETC2_R11_EAC = 69,
	PF_ETC2_RG11_EAC = 70,
	PF_R8 = 71,
	PF_B5G5R5A1_UNORM = 72,
	PF_ASTC_4x4_HDR = 73,
	PF_ASTC_6x6_HDR = 74,
	PF_ASTC_8x8_HDR = 75,
	PF_ASTC_10x10_HDR = 76,
	PF_ASTC_12x12_HDR = 77,
	PF_G16R16_SNORM = 78,
	PF_R8G8_UINT = 79,
	PF_R32G32B32_UINT = 80,
	PF_R32G32B32_SINT = 81,
	PF_R32G32B32F = 82,
	PF_R8_SINT = 83,
	PF_R64_UINT = 84,
	PF_R9G9B9EXP5 = 85,
	PF_P010 = 86,
	PF_ASTC_4x4_NORM_RG = 87,
	PF_ASTC_6x6_NORM_RG = 88,
	PF_ASTC_8x8_NORM_RG = 89,
	PF_ASTC_10x10_NORM_RG = 90,
	PF_ASTC_12x12_NORM_RG = 91,
	PF_R16G16_SINT = 92,
	PF_MAX = 94
};

// Object: Enum CoreUObject.EMouseCursor
enum class EMouseCursor : uint8_t
{
	None = 0,
	Default = 1,
	TextEditBeam = 2,
	ResizeLeftRight = 3,
	ResizeUpDown = 4,
	ResizeSouthEast = 5,
	ResizeSouthWest = 6,
	CardinalCross = 7,
	Crosshairs = 8,
	Hand = 9,
	GrabHand = 10,
	GrabHandClosed = 11,
	SlashedCircle = 12,
	EyeDropper = 13,
	Custom = 14,
	EMouseCursor_MAX = 15
};

// Object: Enum CoreUObject.EUnit
enum class EUnit : uint8_t
{
	Micrometers = 0,
	Millimeters = 1,
	Centimeters = 2,
	Meters = 3,
	Kilometers = 4,
	Inches = 5,
	Feet = 6,
	Yards = 7,
	Miles = 8,
	Lightyears = 9,
	Degrees = 10,
	Radians = 11,
	CentimetersPerSecond = 12,
	MetersPerSecond = 13,
	KilometersPerHour = 14,
	MilesPerHour = 15,
	DegreesPerSecond = 16,
	RadiansPerSecond = 17,
	CentimetersPerSecondSquared = 18,
	MetersPerSecondSquared = 19,
	Celsius = 20,
	Farenheit = 21,
	Kelvin = 22,
	Micrograms = 23,
	Milligrams = 24,
	Grams = 25,
	Kilograms = 26,
	MetricTons = 27,
	Ounces = 28,
	Pounds = 29,
	Stones = 30,
	GramsPerCubicCentimeter = 31,
	GramsPerCubicMeter = 32,
	KilogramsPerCubicCentimeter = 33,
	KilogramsPerCubicMeter = 34,
	Newtons = 35,
	PoundsForce = 36,
	KilogramsForce = 37,
	KilogramCentimetersPerSecondSquared = 38,
	NewtonMeters = 39,
	KilogramCentimetersSquaredPerSecondSquared = 40,
	NewtonSeconds = 41,
	KilogramCentimeters = 42,
	KilogramMeters = 43,
	Hertz = 44,
	Kilohertz = 45,
	Megahertz = 46,
	Gigahertz = 47,
	RevolutionsPerMinute = 48,
	Bytes = 49,
	Kilobytes = 50,
	Megabytes = 51,
	Gigabytes = 52,
	Terabytes = 53,
	Lumens = 54,
	Candela = 55,
	Lux = 56,
	CandelaPerMeter2 = 57,
	ExposureValue = 59,
	Nanoseconds = 60,
	Microseconds = 61,
	Milliseconds = 62,
	Seconds = 63,
	Minutes = 64,
	Hours = 65,
	Days = 66,
	Months = 67,
	Years = 68,
	PixelsPerInch = 69,
	Percentage = 70,
	Multiplier = 71,
	Pascals = 72,
	KiloPascals = 73,
	MegaPascals = 74,
	GigaPascals = 75,
	Unspecified = 76,
	EUnit_MAX = 77
};

// Object: Enum CoreUObject.EPropertyAccessChangeNotifyMode
enum class EPropertyAccessChangeNotifyMode : uint8_t
{
	Default = 0,
	Never = 1,
	Always = 2,
	EPropertyAccessChangeNotifyMode_MAX = 3
};

// Object: Enum CoreUObject.EAppMsgCategory
enum class EAppMsgCategory : uint8_t
{
	Warning = 0,
	Error = 1,
	Success = 2,
	Info = 3,
	EAppMsgCategory_MAX = 4
};

// Object: Enum CoreUObject.EAppReturnType
enum class EAppReturnType : uint8_t
{
	No = 0,
	Yes = 1,
	YesAll = 2,
	NoAll = 3,
	Cancel = 4,
	Ok = 5,
	Retry = 6,
	Continue = 7,
	EAppReturnType_MAX = 8
};

// Object: Enum CoreUObject.EAppMsgType
enum class EAppMsgType : uint8_t
{
	Ok = 0,
	YesNo = 1,
	OkCancel = 2,
	YesNoCancel = 3,
	CancelRetryContinue = 4,
	YesNoYesAllNoAll = 5,
	YesNoYesAllNoAllCancel = 6,
	YesNoYesAll = 7,
	EAppMsgType_MAX = 8
};

// Object: Enum CoreUObject.EInputDeviceMappingPolicy
enum class EInputDeviceMappingPolicy : uint8_t
{
	Invalid = 0,
	UseManagedPlatformLogin = 1,
	PrimaryUserSharesKeyboardAndFirstGamepad = 2,
	CreateUniquePlatformUserForEachDevice = 3,
	MapAllDevicesToPrimaryUser = 4,
	EInputDeviceMappingPolicy_MAX = 5
};

// Object: Enum CoreUObject.EInputDeviceTriggerMask
enum class EInputDeviceTriggerMask : uint8_t
{
	None = 0,
	Left = 1,
	Right = 2,
	All = 3,
	EInputDeviceTriggerMask_MAX = 4
};

// Object: Enum CoreUObject.EInputDeviceAnalogStickMask
enum class EInputDeviceAnalogStickMask : uint8_t
{
	None = 0,
	Left = 1,
	Right = 2,
	EInputDeviceAnalogStickMask_MAX = 3
};

// Object: Enum CoreUObject.EDataValidationResult
enum class EDataValidationResult : uint8_t
{
	Invalid = 0,
	Valid = 1,
	NotValidated = 2,
	EDataValidationResult_MAX = 3
};

// Object: Enum CoreUObject.EVerseEffectSet
enum class EVerseEffectSet : uint8_t
{
	None = 0,
	Suspends = 1,
	Decides = 2,
	Diverges = 4,
	Reads = 8,
	Writes = 16,
	Allocates = 32,
	NoRollback = 64,
	EVerseEffectSet_MAX = 128
};

// Package: Engine
// Enums: 580

// Object: Enum Engine.ETextGender
enum class ETextGender : uint8_t
{
	Masculine = 0,
	Feminine = 1,
	Neuter = 2,
	ETextGender_MAX = 3
};

// Object: Enum Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8_t
{
	Int = 0,
	UInt = 1,
	Float = 2,
	Double = 3,
	Text = 4,
	Gender = 5,
	EFormatArgumentType_MAX = 6
};

// Object: Enum Engine.EAnimDataModelNotifyType
enum class EAnimDataModelNotifyType : uint8_t
{
	BracketOpened = 0,
	BracketClosed = 1,
	TrackAdded = 2,
	TrackChanged = 3,
	TrackRemoved = 4,
	SequenceLengthChanged = 5,
	FrameRateChanged = 6,
	CurveAdded = 7,
	CurveChanged = 8,
	CurveRemoved = 9,
	CurveFlagsChanged = 10,
	CurveRenamed = 11,
	CurveScaled = 12,
	CurveColorChanged = 13,
	CurveCommentChanged = 14,
	AttributeAdded = 15,
	AttributeRemoved = 16,
	AttributeChanged = 17,
	Populated = 18,
	Reset = 19,
	SkeletonChanged = 20,
	Invalid = 21,
	EAnimDataModelNotifyType_MAX = 22
};

// Object: Enum Engine.EMovementMode
enum class EMovementMode : uint8_t
{
	MOVE_None = 0,
	MOVE_Walking = 1,
	MOVE_NavWalking = 2,
	MOVE_Falling = 3,
	MOVE_Swimming = 4,
	MOVE_Flying = 5,
	MOVE_Custom = 6,
	MOVE_MAX = 7
};

// Object: Enum Engine.EAudioComponentPlayState
enum class EAudioComponentPlayState : uint8_t
{
	Playing = 0,
	Stopped = 1,
	Paused = 2,
	FadingIn = 3,
	FadingOut = 4,
	Count = 5,
	EAudioComponentPlayState_MAX = 6
};

// Object: Enum Engine.EDataLayerRuntimeState
enum class EDataLayerRuntimeState : uint8_t
{
	Unloaded = 0,
	Loaded = 1,
	Activated = 2,
	EDataLayerRuntimeState_MAX = 3
};

// Object: Enum Engine.EQuartzCommandDelegateSubType
enum class EQuartzCommandDelegateSubType : uint8_t
{
	CommandOnFailedToQueue = 0,
	CommandOnQueued = 1,
	CommandOnCanceled = 2,
	CommandOnAboutToStart = 3,
	CommandOnStarted = 4,
	Count = 5,
	EQuartzCommandDelegateSubType_MAX = 6
};

// Object: Enum Engine.EQuartzCommandQuantization
enum class EQuartzCommandQuantization : uint8_t
{
	Bar = 0,
	Beat = 1,
	ThirtySecondNote = 2,
	SixteenthNote = 3,
	EighthNote = 4,
	QuarterNote = 5,
	HalfNote = 6,
	WholeNote = 7,
	DottedSixteenthNote = 8,
	DottedEighthNote = 9,
	DottedQuarterNote = 10,
	DottedHalfNote = 11,
	DottedWholeNote = 12,
	SixteenthNoteTriplet = 13,
	EighthNoteTriplet = 14,
	QuarterNoteTriplet = 15,
	HalfNoteTriplet = 16,
	Tick = 17,
	Count = 18,
	None = 19,
	EQuartzCommandQuantization_MAX = 20
};

// Object: Enum Engine.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : uint8_t
{
	PIDT_None = 0,
	PIDT_Int = 1,
	PIDT_Float = 2,
	PIDT_String = 3,
	PIDT_Object = 4,
	PIDT_Custom = 5,
	PIDT_MAX = 6
};

// Object: Enum Engine.EEndPlayReason
enum class EEndPlayReason : uint8_t
{
	Destroyed = 0,
	LevelTransition = 1,
	EndPlayInEditor = 2,
	RemovedFromWorld = 3,
	Quit = 4,
	EEndPlayReason_MAX = 5
};

// Object: Enum Engine.ETickingGroup
enum class ETickingGroup : uint8_t
{
	TG_PrePhysics = 0,
	TG_StartPhysics = 1,
	TG_DuringPhysics = 2,
	TG_EndPhysics = 3,
	TG_PostPhysics = 4,
	TG_PostUpdateWork = 5,
	TG_LastDemotable = 6,
	TG_NewlySpawned = 7,
	TG_MAX = 8
};

// Object: Enum Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8_t
{
	Native = 0,
	SimpleConstructionScript = 1,
	UserConstructionScript = 2,
	Instance = 3,
	EComponentCreationMethod_MAX = 4
};

// Object: Enum Engine.ETemperatureSeverityType
enum class ETemperatureSeverityType : uint8_t
{
	Unknown = 0,
	Good = 1,
	Bad = 2,
	Serious = 3,
	Critical = 4,
	NumSeverities = 5,
	ETemperatureSeverityType_MAX = 6
};

// Object: Enum Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8_t
{
	Custom = 0,
	X = 1,
	Y = 2,
	Z = 3,
	UseGlobalPhysicsSetting = 4,
	EPlaneConstraintAxisSetting_MAX = 5
};

// Object: Enum Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8_t
{
	OneShot = 0,
	OneShot_Reverse = 1,
	Loop_Reset = 2,
	PingPong = 3,
	EInterpToBehaviourType_MAX = 4
};

// Object: Enum Engine.ETeleportType
enum class ETeleportType : uint8_t
{
	None = 0,
	TeleportPhysics = 1,
	ResetPhysics = 2,
	ETeleportType_MAX = 3
};

// Object: Enum Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8_t
{
	ObjectTypeQuery1 = 0,
	ObjectTypeQuery2 = 1,
	ObjectTypeQuery3 = 2,
	ObjectTypeQuery4 = 3,
	ObjectTypeQuery5 = 4,
	ObjectTypeQuery6 = 5,
	ObjectTypeQuery7 = 6,
	ObjectTypeQuery8 = 7,
	ObjectTypeQuery9 = 8,
	ObjectTypeQuery10 = 9,
	ObjectTypeQuery11 = 10,
	ObjectTypeQuery12 = 11,
	ObjectTypeQuery13 = 12,
	ObjectTypeQuery14 = 13,
	ObjectTypeQuery15 = 14,
	ObjectTypeQuery16 = 15,
	ObjectTypeQuery17 = 16,
	ObjectTypeQuery18 = 17,
	ObjectTypeQuery19 = 18,
	ObjectTypeQuery20 = 19,
	ObjectTypeQuery21 = 20,
	ObjectTypeQuery22 = 21,
	ObjectTypeQuery23 = 22,
	ObjectTypeQuery24 = 23,
	ObjectTypeQuery25 = 24,
	ObjectTypeQuery26 = 25,
	ObjectTypeQuery27 = 26,
	ObjectTypeQuery28 = 27,
	ObjectTypeQuery29 = 28,
	ObjectTypeQuery30 = 29,
	ObjectTypeQuery31 = 30,
	ObjectTypeQuery32 = 31,
	ObjectTypeQuery_MAX = 32,
	EObjectTypeQuery_MAX = 33
};

// Object: Enum Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8_t
{
	None = 0,
	ForOneFrame = 1,
	ForDuration = 2,
	Persistent = 3,
	EDrawDebugTrace_MAX = 4
};

// Object: Enum Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8_t
{
	TraceTypeQuery1 = 0,
	TraceTypeQuery2 = 1,
	TraceTypeQuery3 = 2,
	TraceTypeQuery4 = 3,
	TraceTypeQuery5 = 4,
	TraceTypeQuery6 = 5,
	TraceTypeQuery7 = 6,
	TraceTypeQuery8 = 7,
	TraceTypeQuery9 = 8,
	TraceTypeQuery10 = 9,
	TraceTypeQuery11 = 10,
	TraceTypeQuery12 = 11,
	TraceTypeQuery13 = 12,
	TraceTypeQuery14 = 13,
	TraceTypeQuery15 = 14,
	TraceTypeQuery16 = 15,
	TraceTypeQuery17 = 16,
	TraceTypeQuery18 = 17,
	TraceTypeQuery19 = 18,
	TraceTypeQuery20 = 19,
	TraceTypeQuery21 = 20,
	TraceTypeQuery22 = 21,
	TraceTypeQuery23 = 22,
	TraceTypeQuery24 = 23,
	TraceTypeQuery25 = 24,
	TraceTypeQuery26 = 25,
	TraceTypeQuery27 = 26,
	TraceTypeQuery28 = 27,
	TraceTypeQuery29 = 28,
	TraceTypeQuery30 = 29,
	TraceTypeQuery31 = 30,
	TraceTypeQuery32 = 31,
	TraceTypeQuery_MAX = 32,
	ETraceTypeQuery_MAX = 33
};

// Object: Enum Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8_t
{
	Move = 0,
	Stop = 1,
	Return = 2,
	EMoveComponentAction_MAX = 3
};

// Object: Enum Engine.EQuitPreference
enum class EQuitPreference : uint8_t
{
	Quit = 0,
	Background = 1,
	EQuitPreference_MAX = 2
};

// Object: Enum Engine.ETravelFailure
enum class ETravelFailure : uint8_t
{
	NoLevel = 0,
	LoadMapFailure = 1,
	InvalidURL = 2,
	PackageMissing = 3,
	PackageVersion = 4,
	NoDownload = 5,
	TravelFailure = 6,
	CheatCommands = 7,
	PendingNetGameCreateFailure = 8,
	CloudSaveFailure = 9,
	ServerTravelFailure = 10,
	ClientTravelFailure = 11,
	ETravelFailure_MAX = 12
};

// Object: Enum Engine.EApplicationState
enum class EApplicationState : uint8_t
{
	Unknown = 0,
	Inactive = 1,
	Background = 2,
	Active = 3,
	EApplicationState_MAX = 4
};

// Object: Enum Engine.EScreenOrientation
enum class EScreenOrientation : uint8_t
{
	Unknown = 0,
	Portrait = 1,
	PortraitUpsideDown = 2,
	LandscapeLeft = 3,
	LandscapeRight = 4,
	FaceUp = 5,
	FaceDown = 6,
	PortraitSensor = 7,
	LandscapeSensor = 8,
	FullSensor = 9,
	EScreenOrientation_MAX = 10
};

// Object: Enum Engine.EComponentPhysicsStateChange
enum class EComponentPhysicsStateChange : uint8_t
{
	Created = 0,
	Destroyed = 1,
	EComponentPhysicsStateChange_MAX = 2
};

// Object: Enum Engine.ERelativeTransformSpace
enum class ERelativeTransformSpace : uint8_t
{
	RTS_World = 0,
	RTS_Actor = 1,
	RTS_Component = 2,
	RTS_ParentBoneSpace = 3,
	RTS_MAX = 4
};

// Object: Enum Engine.EAttachLocation
enum class EAttachLocation : uint8_t
{
	KeepRelativeOffset = 0,
	KeepWorldPosition = 1,
	SnapToTarget = 2,
	SnapToTargetIncludingScale = 3,
	EAttachLocation_MAX = 4
};

// Object: Enum Engine.EAttachmentRule
enum class EAttachmentRule : uint8_t
{
	KeepRelative = 0,
	KeepWorld = 1,
	SnapToTarget = 2,
	EAttachmentRule_MAX = 3
};

// Object: Enum Engine.EDetachmentRule
enum class EDetachmentRule : uint8_t
{
	KeepRelative = 0,
	KeepWorld = 1,
	EDetachmentRule_MAX = 2
};

// Object: Enum Engine.EComponentMobility
enum class EComponentMobility : uint8_t
{
	Static = 0,
	Stationary = 1,
	Movable = 2,
	EComponentMobility_MAX = 3
};

// Object: Enum Engine.EDetailMode
enum class EDetailMode : uint8_t
{
	DM_Low = 0,
	DM_Medium = 1,
	DM_High = 2,
	DM_Epic = 3,
	DM_MAX = 4
};

// Object: Enum Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8_t
{
	NoCollision = 0,
	QueryOnly = 1,
	PhysicsOnly = 2,
	QueryAndPhysics = 3,
	ProbeOnly = 4,
	QueryAndProbe = 5,
	ECollisionEnabled_MAX = 6
};

// Object: Enum Engine.ECollisionChannel
enum class ECollisionChannel : uint8_t
{
	ECC_WorldStatic = 0,
	ECC_WorldDynamic = 1,
	ECC_Pawn = 2,
	ECC_Visibility = 3,
	ECC_Camera = 4,
	ECC_PhysicsBody = 5,
	ECC_Vehicle = 6,
	ECC_Destructible = 7,
	ECC_EngineTraceChannel1 = 8,
	ECC_EngineTraceChannel2 = 9,
	ECC_EngineTraceChannel3 = 10,
	ECC_EngineTraceChannel4 = 11,
	ECC_EngineTraceChannel5 = 12,
	ECC_EngineTraceChannel6 = 13,
	ECC_GameTraceChannel1 = 14,
	ECC_GameTraceChannel2 = 15,
	ECC_GameTraceChannel3 = 16,
	ECC_GameTraceChannel4 = 17,
	ECC_GameTraceChannel5 = 18,
	ECC_GameTraceChannel6 = 19,
	ECC_GameTraceChannel7 = 20,
	ECC_GameTraceChannel8 = 21,
	ECC_GameTraceChannel9 = 22,
	ECC_GameTraceChannel10 = 23,
	ECC_GameTraceChannel11 = 24,
	ECC_GameTraceChannel12 = 25,
	ECC_GameTraceChannel13 = 26,
	ECC_GameTraceChannel14 = 27,
	ECC_GameTraceChannel15 = 28,
	ECC_GameTraceChannel16 = 29,
	ECC_GameTraceChannel17 = 30,
	ECC_GameTraceChannel18 = 31,
	ECC_OverlapAll_Deprecated = 32,
	ECC_MAX = 33
};

// Object: Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8_t
{
	ECR_Ignore = 0,
	ECR_Overlap = 1,
	ECR_Block = 2,
	ECR_MAX = 3
};

// Object: Enum Engine.EWalkableSlopeBehavior
enum class EWalkableSlopeBehavior : uint8_t
{
	WalkableSlope_Default = 0,
	WalkableSlope_Increase = 1,
	WalkableSlope_Decrease = 2,
	WalkableSlope_Unwalkable = 3,
	WalkableSlope_Max = 4
};

// Object: Enum Engine.EHLODLevelExclusion
enum class EHLODLevelExclusion : uint8_t
{
	HLOD0 = 1,
	HLOD1 = 2,
	HLOD2 = 4,
	HLOD3 = 8,
	HLOD4 = 16,
	HLOD5 = 32,
	HLOD6 = 64,
	HLOD7 = 128,
	EHLODLevelExclusion_MAX = 129
};

// Object: Enum Engine.EDOFMode
enum class EDOFMode : uint8_t
{
	Default = 0,
	SixDOF = 1,
	YZPlane = 2,
	XZPlane = 3,
	XYPlane = 4,
	CustomPlane = 5,
	None = 6,
	EDOFMode_MAX = 7
};

// Object: Enum Engine.ERendererStencilMask
enum class ERendererStencilMask : uint8_t
{
	ERSM_Default = 0,
	ERSM = 1,
	ERSM = 2,
	ERSM = 3,
	ERSM = 4,
	ERSM = 5,
	ERSM = 6,
	ERSM = 7,
	ERSM = 8,
	ERSM = 9,
	ERSM_MAX = 10
};

// Object: Enum Engine.EFirstPersonPrimitiveType
enum class EFirstPersonPrimitiveType : uint8_t
{
	None = 0,
	FirstPerson = 1,
	WorldSpaceRepresentation = 2,
	EFirstPersonPrimitiveType_MAX = 3
};

// Object: Enum Engine.ERuntimeVirtualTextureMainPassType
enum class ERuntimeVirtualTextureMainPassType : uint8_t
{
	Never = 0,
	Exclusive = 1,
	Always = 2,
	ERuntimeVirtualTextureMainPassType_MAX = 3
};

// Object: Enum Engine.ERayTracingGroupCullingPriority
enum class ERayTracingGroupCullingPriority : uint8_t
{
	CP_0_NEVER_CULL = 0,
	CP = 1,
	CP = 2,
	CP = 3,
	CP_4_DEFAULT = 4,
	CP = 5,
	CP = 6,
	CP = 7,
	CP_8_QUICKLY_CULL = 8,
	CP_MAX = 9
};

// Object: Enum Engine.ECanBeCharacterBase
enum class ECanBeCharacterBase : uint8_t
{
	ECB_No = 0,
	ECB_Yes = 1,
	ECB_Owner = 2,
	ECB_MAX = 3
};

// Object: Enum Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8_t
{
	No = 0,
	Yes = 1,
	EvenIfNotCollidable = 2,
	DontExport = 3,
	EHasCustomNavigableGeometry_MAX = 4
};

// Object: Enum Engine.EShadowCacheInvalidationBehavior
enum class EShadowCacheInvalidationBehavior : uint8_t
{
	Auto = 0,
	Always = 1,
	Rigid = 2,
	Static = 3,
	EShadowCacheInvalidationBehavior_MAX = 4
};

// Object: Enum Engine.EHLODBatchingPolicy
enum class EHLODBatchingPolicy : uint8_t
{
	None = 0,
	MeshSection = 1,
	Instancing = 2,
	EHLODBatchingPolicy_MAX = 3
};

// Object: Enum Engine.ELightmapType
enum class ELightmapType : uint8_t
{
	Default = 0,
	ForceSurface = 1,
	ForceVolumetric = 2,
	ELightmapType_MAX = 3
};

// Object: Enum Engine.EIndirectLightingCacheQuality
enum class EIndirectLightingCacheQuality : uint8_t
{
	ILCQ_Off = 0,
	ILCQ_Point = 1,
	ILCQ_Volume = 2,
	ILCQ_MAX = 3
};

// Object: Enum Engine.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8_t
{
	SDPG_World = 0,
	SDPG_Foreground = 1,
	SDPG_MAX = 2
};

// Object: Enum Engine.EMouseLockMode
enum class EMouseLockMode : uint8_t
{
	DoNotLock = 0,
	LockOnCapture = 1,
	LockAlways = 2,
	LockInFullscreen = 3,
	EMouseLockMode_MAX = 4
};

// Object: Enum Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8_t
{
	Overlay = 0,
	VerticalBox = 1,
	EWindowTitleBarMode_MAX = 2
};

// Object: Enum Engine.AnimationKeyFormat
enum class EAnimationKeyFormat : uint8_t
{
	AKF_ConstantKeyLerp = 0,
	AKF_VariableKeyLerp = 1,
	AKF_PerTrackCompression = 2,
	AKF_MAX = 3
};

// Object: Enum Engine.EAnimCurveType
enum class EAnimCurveType : uint8_t
{
	AttributeCurve = 0,
	MaterialCurve = 1,
	MorphTargetCurve = 2,
	MaxAnimCurveType = 3,
	EAnimCurveType_MAX = 4
};

// Object: Enum Engine.EAnimAssetCurveFlags
enum class EAnimAssetCurveFlags : uint8_t
{
	AACF_NONE = 0,
	AACF_DriveMorphTarget_DEPRECATED = 1,
	AACF_DriveAttribute_DEPRECATED = 2,
	AACF_Editable = 4,
	AACF_DriveMaterial_DEPRECATED = 8,
	AACF_Metadata = 16,
	AACF_DriveTrack = 32,
	AACF_Disabled = 64,
	AACF_MAX = 65
};

// Object: Enum Engine.ERawCurveTrackTypes
enum class ERawCurveTrackTypes : uint8_t
{
	RCT_Float = 0,
	RCT_Vector = 1,
	RCT_Transform = 2,
	RCT_MAX = 3
};

// Object: Enum Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8_t
{
	RefPose = 0,
	AnimFirstFrame = 1,
	Zero = 2,
	ERootMotionRootLock_MAX = 3
};

// Object: Enum Engine.ERootMotionMode
enum class ERootMotionMode : uint8_t
{
	NoRootMotionExtraction = 0,
	IgnoreRootMotion = 1,
	RootMotionFromEverything = 2,
	RootMotionFromMontagesOnly = 3,
	ERootMotionMode_MAX = 4
};

// Object: Enum Engine.EAdditiveBasePoseType
enum class EAdditiveBasePoseType : uint8_t
{
	ABPT_None = 0,
	ABPT_RefPose = 1,
	ABPT_AnimScaled = 2,
	ABPT_AnimFrame = 3,
	ABPT_LocalAnimFrame = 4,
	ABPT_MAX = 5
};

// Object: Enum Engine.AnimationCompressionFormat
enum class EAnimationCompressionFormat : uint8_t
{
	ACF_None = 0,
	ACF_Float96NoW = 1,
	ACF_Fixed48NoW = 2,
	ACF_IntervalFixed32NoW = 3,
	ACF_Fixed32NoW = 4,
	ACF_Float32NoW = 5,
	ACF_Identity = 6,
	ACF_MAX = 7
};

// Object: Enum Engine.EAnimInstanceLocatorFragmentType
enum class EAnimInstanceLocatorFragmentType : uint8_t
{
	AnimInstance = 0,
	PostProcessAnimInstance = 1,
	EAnimInstanceLocatorFragmentType_MAX = 2
};

// Object: Enum Engine.AnimPhysTwistAxis
enum class EAnimPhysTwistAxis : uint8_t
{
	AxisX = 0,
	AxisY = 1,
	AxisZ = 2,
	AnimPhysTwistAxis_MAX = 3
};

// Object: Enum Engine.AnimPhysCollisionType
enum class EAnimPhysCollisionType : uint8_t
{
	CoM = 0,
	CustomSphere = 1,
	InnerSphere = 2,
	OuterSphere = 3,
	AnimPhysCollisionType_MAX = 4
};

// Object: Enum Engine.ETypeAdvanceAnim
enum class ETypeAdvanceAnim : uint8_t
{
	ETAA_Default = 0,
	ETAA_Finished = 1,
	ETAA_Looped = 2,
	ETAA_MAX = 3
};

// Object: Enum Engine.EBoneAxis
enum class EBoneAxis : uint8_t
{
	BA_X = 0,
	BA_Y = 1,
	BA_Z = 2,
	BA_MAX = 3
};

// Object: Enum Engine.EBoneControlSpace
enum class EBoneControlSpace : uint8_t
{
	BCS_WorldSpace = 0,
	BCS_ComponentSpace = 1,
	BCS_ParentBoneSpace = 2,
	BCS_BoneSpace = 3,
	BCS_MAX = 4
};

// Object: Enum Engine.EBoneRotationSource
enum class EBoneRotationSource : uint8_t
{
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation = 1,
	BRS_CopyFromTarget = 2,
	BRS_MAX = 3
};

// Object: Enum Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8_t
{
	Queued = 0,
	BranchingPoint = 1,
	EMontageNotifyTickType_MAX = 2
};

// Object: Enum Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8_t
{
	NoFiltering = 0,
	LOD = 1,
	ENotifyFilterType_MAX = 2
};

// Object: Enum Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8_t
{
	AAT_None = 0,
	AAT_LocalSpaceBase = 1,
	AAT_RotationOffsetMeshSpace = 2,
	AAT_MAX = 3
};

// Object: Enum Engine.ECurveBlendOption
enum class ECurveBlendOption : uint8_t
{
	Override = 0,
	DoNotOverride = 1,
	NormalizeByWeight = 2,
	BlendByWeight = 3,
	UseBasePose = 4,
	UseMaxValue = 5,
	UseMinValue = 6,
	ECurveBlendOption_MAX = 7
};

// Object: Enum Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8_t
{
	Linear = 0,
	Step = 1,
	EAnimInterpolationType_MAX = 2
};

// Object: Enum Engine.EAxisOption
enum class EAxisOption : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	X_Neg = 3,
	Y_Neg = 4,
	Z_Neg = 5,
	Custom = 6,
	EAxisOption_MAX = 7
};

// Object: Enum Engine.EComponentType
enum class EComponentType : uint8_t
{
	None = 0,
	TranslationX = 1,
	TranslationY = 2,
	TranslationZ = 3,
	RotationX = 4,
	RotationY = 5,
	RotationZ = 6,
	Scale = 7,
	ScaleX = 8,
	ScaleY = 9,
	ScaleZ = 10,
	EComponentType_MAX = 11
};

// Object: Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8_t
{
	Speaker = 0,
	Controller = 1,
	ControllerFallbackToSpeaker = 2,
	EAudioOutputTarget_MAX = 3
};

// Object: Enum Engine.EBlendableLocation
enum class EBlendableLocation : uint8_t
{
	BL_SceneColorBeforeDOF = 0,
	BL_SceneColorAfterDOF = 1,
	BL_TranslucencyAfterDOF = 2,
	BL_SSRInput = 3,
	BL_SceneColorBeforeBloom = 4,
	BL_ReplacingTonemapper = 5,
	BL_SceneColorAfterTonemapping = 6,
	BL_MAX = 7,
	BL_BeforeTranslucency = 8,
	BL_BeforeTonemapping = 9,
	BL_AfterTonemapping = 10
};

// Object: Enum Engine.EBlendSpaceAxis
enum class EBlendSpaceAxis : uint8_t
{
	BSA_None = 0,
	BSA_X = 1,
	BSA_Y = 2,
	BSA_MAX = 3
};

// Object: Enum Engine.EPreferredTriangulationDirection
enum class EPreferredTriangulationDirection : uint8_t
{
	None = 0,
	Tangential = 1,
	Radial = 2,
	EPreferredTriangulationDirection_MAX = 3
};

// Object: Enum Engine.EBlendSpacePerBoneBlendMode
enum class EBlendSpacePerBoneBlendMode : uint8_t
{
	ManualPerBoneOverride = 0,
	BlendProfile = 1,
	EBlendSpacePerBoneBlendMode_MAX = 2
};

// Object: Enum Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8_t
{
	AllAnimations = 0,
	HighestWeightedAnimation = 1,
	None = 2,
	ENotifyTriggerMode_MAX = 3
};

// Object: Enum Engine.EBlueprintStatus
enum class EBlueprintStatus : uint8_t
{
	BS_Unknown = 0,
	BS_Dirty = 1,
	BS_Error = 2,
	BS_UpToDate = 3,
	BS_BeingCreated = 4,
	BS_UpToDateWithWarnings = 5,
	BS_MAX = 6
};

// Object: Enum Engine.EBlueprintType
enum class EBlueprintType : uint8_t
{
	BPTYPE_Normal = 0,
	BPTYPE_Const = 1,
	BPTYPE_MacroLibrary = 2,
	BPTYPE_Interface = 3,
	BPTYPE_LevelScript = 4,
	BPTYPE_FunctionLibrary = 5,
	BPTYPE_MAX = 6
};

// Object: Enum Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8_t
{
	Default = 0,
	Development = 1,
	FinalRelease = 2,
	EBlueprintCompileMode_MAX = 3
};

// Object: Enum Engine.EShouldCookBlueprintPropertyGuids
enum class EShouldCookBlueprintPropertyGuids : uint8_t
{
	No = 0,
	Yes = 1,
	Inherit = 2,
	EShouldCookBlueprintPropertyGuids_MAX = 3
};

// Object: Enum Engine.ECsgOper
enum class ECsgOper : uint8_t
{
	CSG_Active = 0,
	CSG_Add = 1,
	CSG_Subtract = 2,
	CSG_Intersect = 3,
	CSG_Deintersect = 4,
	CSG_None = 5,
	CSG_MAX = 6
};

// Object: Enum Engine.EBrushType
enum class EBrushType : uint8_t
{
	Brush_Default = 0,
	Brush_Add = 1,
	Brush_Subtract = 2,
	Brush_MAX = 3
};

// Object: Enum Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8_t
{
	Perspective = 0,
	Orthographic = 1,
	ECameraProjectionMode_MAX = 2
};

// Object: Enum Engine.ECameraShakePlaySpace
enum class ECameraShakePlaySpace : uint8_t
{
	CameraLocal = 0,
	World = 1,
	UserDefined = 2,
	ECameraShakePlaySpace_MAX = 3
};

// Object: Enum Engine.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8_t
{
	CSD_KeyValueReadComplete = 0,
	CSD_KeyValueWriteComplete = 1,
	CSD_ValueChanged = 2,
	CSD_DocumentQueryComplete = 3,
	CSD_DocumentReadComplete = 4,
	CSD_DocumentWriteComplete = 5,
	CSD_DocumentConflictDetected = 6,
	CSD_MAX = 7
};

// Object: Enum Engine.ECollectionScriptingShareType
enum class ECollectionScriptingShareType : uint8_t
{
	Local = 0,
	Private = 1,
	Shared = 2,
	ECollectionScriptingShareType_MAX = 3
};

// Object: Enum Engine.EContentBundleClientState
enum class EContentBundleClientState : uint8_t
{
	Unregistered = 0,
	Registered = 1,
	ContentInjectionRequested = 2,
	ContentRemovalRequested = 3,
	RegistrationFailed = 4,
	EContentBundleClientState_MAX = 5
};

// Object: Enum Engine.EWorldContentState
enum class EWorldContentState : uint8_t
{
	NoContent = 0,
	ContentBundleInjected = 1,
	EWorldContentState_MAX = 2
};

// Object: Enum Engine.EContentBundleStatus
enum class EContentBundleStatus : uint8_t
{
	Registered = 0,
	ReadyToInject = 1,
	FailedToInject = 2,
	ContentInjected = 3,
	Unknown = 4,
	EContentBundleStatus_MAX = 5
};

// Object: Enum Engine.ECustomAttributeBlendType
enum class ECustomAttributeBlendType : uint8_t
{
	Override = 0,
	Blend = 1,
	ECustomAttributeBlendType_MAX = 2
};

// Object: Enum Engine.EDataLayerType
enum class EDataLayerType : uint8_t
{
	Runtime = 0,
	Editor = 1,
	Unknown = 2,
	Size = 3,
	EDataLayerType_MAX = 4
};

// Object: Enum Engine.DistributionParamMode
enum class EDistributionParamMode : uint8_t
{
	DPM_Normal = 0,
	DPM_Abs = 1,
	DPM_Direct = 2,
	DPM_MAX = 3
};

// Object: Enum Engine.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None = 0,
	EDVLF_XY = 1,
	EDVLF_XZ = 2,
	EDVLF_YZ = 3,
	EDVLF_XYZ = 4,
	EDVLF_MAX = 5
};

// Object: Enum Engine.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same = 0,
	EDVMF_Different = 1,
	EDVMF_Mirror = 2,
	EDVMF_MAX = 3
};

// Object: Enum Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8_t
{
	EGPD_Input = 0,
	EGPD_Output = 1,
	EGPD_MAX = 2
};

// Object: Enum Engine.EPinContainerType
enum class EPinContainerType : uint8_t
{
	None = 0,
	Array = 1,
	Set = 2,
	Map = 3,
	EPinContainerType_MAX = 4
};

// Object: Enum Engine.ENodeTitleType
enum class ENodeTitleType : uint8_t
{
	FullTitle = 0,
	ListView = 1,
	EditableTitle = 2,
	MenuTitle = 3,
	MAX_TitleTypes = 4,
	ENodeTitleType_MAX = 5
};

// Object: Enum Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8_t
{
	NoPins = 0,
	Shown = 1,
	Hidden = 2,
	ENodeAdvancedPins_MAX = 3
};

// Object: Enum Engine.ENodeEnabledState
enum class ENodeEnabledState : uint8_t
{
	Enabled = 0,
	Disabled = 1,
	DevelopmentOnly = 2,
	ENodeEnabledState_MAX = 3
};

// Object: Enum Engine.EBlueprintPinStyleType
enum class EBlueprintPinStyleType : uint8_t
{
	BPST_Original = 0,
	BPST_VariantA = 1,
	BPST_MAX = 2
};

// Object: Enum Engine.EGraphType
enum class EGraphType : uint8_t
{
	GT_Function = 0,
	GT_Ubergraph = 1,
	GT_Macro = 2,
	GT_Animation = 3,
	GT_StateMachine = 4,
	GT_MAX = 5
};

// Object: Enum Engine.ECanCreateConnectionResponse
enum class ECanCreateConnectionResponse : uint8_t
{
	CONNECT_RESPONSE_MAKE = 0,
	CONNECT_RESPONSE_DISALLOW = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
	CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
	CONNECT_RESPONSE_MAKE_WITH_PROMOTION = 6,
	CONNECT_RESPONSE_MAX = 7
};

// Object: Enum Engine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8_t
{
	FULLYLOAD_Map = 0,
	FULLYLOAD_Game_PreLoadClass = 1,
	FULLYLOAD_Game_PostLoadClass = 2,
	FULLYLOAD_Always = 3,
	FULLYLOAD_Mutator = 4,
	FULLYLOAD_MAX = 5
};

// Object: Enum Engine.ETransitionType
enum class ETransitionType : uint8_t
{
	None = 0,
	Paused = 1,
	Loading = 2,
	Saving = 3,
	Connecting = 4,
	Precaching = 5,
	WaitingToConnect = 6,
	MAX = 7
};

// Object: Enum Engine.EInputEvent
enum class EInputEvent : uint8_t
{
	IE_Pressed = 0,
	IE_Released = 1,
	IE_Repeat = 2,
	IE_DoubleClick = 3,
	IE_Axis = 4,
	IE_MAX = 5
};

// Object: Enum Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8_t
{
	NoCapture = 0,
	CapturePermanently = 1,
	CapturePermanently_IncludingInitialMouseDown = 2,
	CaptureDuringMouseDown = 3,
	CaptureDuringRightMouseDown = 4,
	EMouseCaptureMode_MAX = 5
};

// Object: Enum Engine.ENetworkLagState
enum class ENetworkLagState : uint8_t
{
	NotLagging = 0,
	Lagging = 1,
	ENetworkLagState_MAX = 2
};

// Object: Enum Engine.ETravelType
enum class ETravelType : uint8_t
{
	TRAVEL_Absolute = 0,
	TRAVEL_Partial = 1,
	TRAVEL_Relative = 2,
	TRAVEL_MAX = 3
};

// Object: Enum Engine.EDemoPlayFailure
enum class EDemoPlayFailure : uint8_t
{
	Generic = 0,
	DemoNotFound = 1,
	Corrupt = 2,
	InvalidVersion = 3,
	InitBase = 4,
	GameSpecificHeader = 5,
	ReplayStreamerInternal = 6,
	LoadMap = 7,
	Serialization = 8,
	EDemoPlayFailure_MAX = 9
};

// Object: Enum Engine.EViewModeIndex
enum class EViewModeIndex : uint8_t
{
	VMI_BrushWireframe = 0,
	VMI_Wireframe = 1,
	VMI_Unlit = 2,
	VMI_Lit = 3,
	VMI_Lit_DetailLighting = 4,
	VMI_LightingOnly = 5,
	VMI_LightComplexity = 6,
	VMI_ShaderComplexity = 8,
	VMI_LightmapDensity = 9,
	VMI_LitLightmapDensity = 10,
	VMI_ReflectionOverride = 11,
	VMI_VisualizeBuffer = 12,
	VMI_StationaryLightOverlap = 14,
	VMI_CollisionPawn = 15,
	VMI_CollisionVisibility = 16,
	VMI_LODColoration = 18,
	VMI_QuadOverdraw = 19,
	VMI_PrimitiveDistanceAccuracy = 20,
	VMI_MeshUVDensityAccuracy = 21,
	VMI_ShaderComplexityWithQuadOverdraw = 22,
	VMI_HLODColoration = 23,
	VMI_GroupLODColoration = 24,
	VMI_MaterialTextureScaleAccuracy = 25,
	VMI_RequiredTextureResolution = 26,
	VMI_PathTracing = 27,
	VMI_RayTracingDebug = 28,
	VMI_VisualizeNanite = 29,
	VMI_VisualizeVirtualTexture = 30,
	VMI_VisualizeLumen = 31,
	VMI_VisualizeVirtualShadowMap = 32,
	VMI_VisualizeGPUSkinCache = 33,
	VMI_VisualizeSubstrate = 34,
	VMI_VisualizeGroom = 35,
	VMI_LWCComplexity = 36,
	VMI_Lit_Wireframe = 37,
	VMI_VisualizeActorColoration = 38,
	VMI_Max = 39,
	VMI_Unknown = 255
};

// Object: Enum Engine.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8_t
{
	FontICS_Default = 0,
	FontICS_Ansi = 1,
	FontICS_Symbol = 2,
	FontICS_MAX = 3
};

// Object: Enum Engine.EStandbyType
enum class EStandbyType : uint8_t
{
	STDBY_Rx = 0,
	STDBY_Tx = 1,
	STDBY_BadPing = 2,
	STDBY_MAX = 3
};

// Object: Enum Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8_t
{
	DoNotTrace = 0,
	TraceFullPath = 1,
	OnlyTraceWhileAscending = 2,
	ESuggestProjVelocityTraceOption_MAX = 3
};

// Object: Enum Engine.EHISMViewRelevanceType
enum class EHISMViewRelevanceType : uint8_t
{
	Grass = 0,
	Foliage = 1,
	HISM = 2,
	EHISMViewRelevanceType_MAX = 3
};

// Object: Enum Engine.EHitProxyPriority
enum class EHitProxyPriority : uint8_t
{
	HPP_World = 0,
	HPP_Wireframe = 1,
	HPP_Foreground = 2,
	HPP_UI = 3,
	HPP_MAX = 4
};

// Object: Enum Engine.EHierarchicalSimplificationMethod
enum class EHierarchicalSimplificationMethod : uint8_t
{
	None = 0,
	Merge = 1,
	Simplify = 2,
	Approximate = 3,
	EHierarchicalSimplificationMethod_MAX = 4
};

// Object: Enum Engine.EDerivativeStatus
enum class EDerivativeStatus : uint8_t
{
	NotAware = 0,
	NotValid = 1,
	Zero = 2,
	Valid = 3,
	EDerivativeStatus_MAX = 4
};

// Object: Enum Engine.EAdManagerDelegate
enum class EAdManagerDelegate : uint8_t
{
	AMD_ClickedBanner = 0,
	AMD_UserClosedAd = 1,
	AMD_MAX = 2
};

// Object: Enum Engine.ERoundingMode
enum class ERoundingMode : uint8_t
{
	HalfToEven = 0,
	HalfFromZero = 1,
	HalfToZero = 2,
	FromZero = 3,
	ToZero = 4,
	ToNegativeInfinity = 5,
	ToPositiveInfinity = 6,
	ERoundingMode_MAX = 7
};

// Object: Enum Engine.EMemoryUnitStandard
enum class EMemoryUnitStandard : uint8_t
{
	IEC = 0,
	SI = 1,
	EMemoryUnitStandard_MAX = 2
};

// Object: Enum Engine.EDateTimeStyle
enum class EDateTimeStyle : uint8_t
{
	Default = 0,
	Short = 1,
	Medium = 2,
	Long = 3,
	Full = 4,
	Custom = 5,
	EDateTimeStyle_MAX = 6
};

// Object: Enum Engine.EViewStatusForScreenPercentage
enum class EViewStatusForScreenPercentage : uint8_t
{
	NonRealtime = 0,
	Desktop = 1,
	Mobile = 2,
	VR = 3,
	PathTracer = 4,
	EViewStatusForScreenPercentage_MAX = 5
};

// Object: Enum Engine.EScreenPercentageMode
enum class EScreenPercentageMode : uint8_t
{
	Manual = 0,
	BasedOnDisplayResolution = 1,
	BasedOnDPIScale = 2,
	EScreenPercentageMode_MAX = 3
};

// Object: Enum Engine.ELevelInstanceRuntimeBehavior
enum class ELevelInstanceRuntimeBehavior : uint8_t
{
	None = 0,
	Embedded_Deprecated = 1,
	Partitioned = 2,
	LevelStreaming = 3,
	ELevelInstanceRuntimeBehavior_MAX = 4
};

// Object: Enum Engine.ELevelInstanceCreationType
enum class ELevelInstanceCreationType : uint8_t
{
	LevelInstance = 0,
	PackedLevelActor = 1,
	ELevelInstanceCreationType_MAX = 2
};

// Object: Enum Engine.ELevelInstancePivotType
enum class ELevelInstancePivotType : uint8_t
{
	CenterMinZ = 0,
	Center = 1,
	Actor = 2,
	WorldOrigin = 3,
	ELevelInstancePivotType_MAX = 4
};

// Object: Enum Engine.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : uint8_t
{
	SVB_Loading = 0,
	SVB_LoadingAndVisibility = 1,
	SVB_VisibilityBlockingOnLoad = 2,
	SVB_BlockingOnLoad = 3,
	SVB_LoadingNotVisible = 4,
	SVB_MAX = 5
};

// Object: Enum Engine.EMaterialDomain
enum class EMaterialDomain : uint8_t
{
	MD_Surface = 0,
	MD_DeferredDecal = 1,
	MD_LightFunction = 2,
	MD_Volume = 3,
	MD_PostProcess = 4,
	MD_UI = 5,
	MD_RuntimeVirtualTexture = 6,
	MD_MAX = 7
};

// Object: Enum Engine.EPositionOrigin
enum class EPositionOrigin : uint8_t
{
	Absolute = 0,
	CameraRelative = 1,
	EPositionOrigin_MAX = 2
};

// Object: Enum Engine.ETextureColorChannel
enum class ETextureColorChannel : uint8_t
{
	TCC_Red = 0,
	TCC_Green = 1,
	TCC_Blue = 2,
	TCC_Alpha = 3,
	TCC_MAX = 4
};

// Object: Enum Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8_t
{
	Blend = 0,
	UseA = 1,
	UseB = 2,
	EMaterialAttributeBlend_MAX = 3
};

// Object: Enum Engine.EMaterialAttributeBlendFunction
enum class EMaterialAttributeBlendFunction : uint8_t
{
	Horizontal = 0,
	Vertical = 1,
	EMaterialAttributeBlendFunction_MAX = 2
};

// Object: Enum Engine.EMaterialExpressionBoundsType
enum class EMaterialExpressionBoundsType : uint8_t
{
	MEILB_InstanceLocal = 0,
	MEILB_ObjectLocal = 1,
	MEILB_PreSkinnedLocal = 2,
	MEILB_MAX = 3
};

// Object: Enum Engine.EChannelMaskParameterColor
enum class EChannelMaskParameterColor : uint8_t
{
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EChannelMaskParameterColor_MAX = 4
};

// Object: Enum Engine.EClampMode
enum class EClampMode : uint8_t
{
	CMODE_Clamp = 0,
	CMODE_ClampMin = 1,
	CMODE_ClampMax = 2,
	CMODE_MAX = 3
};

// Object: Enum Engine.EParameterCollectionTransformType
enum class EParameterCollectionTransformType : uint8_t
{
	Position = 0,
	Vector = 1,
	Projection = 2,
	LocalToWorld = 3,
	WorldToLocal = 4,
	EParameterCollectionTransformType_MAX = 5
};

// Object: Enum Engine.EMaterialExpressionConvertType
enum class EMaterialExpressionConvertType : uint8_t
{
	Scalar = 0,
	Vector2 = 1,
	Vector3 = 2,
	Vector4 = 3,
	EMaterialExpressionConvertType_MAX = 4
};

// Object: Enum Engine.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : uint8_t
{
	CMOT_Float1 = 0,
	CMOT_Float2 = 1,
	CMOT_Float3 = 2,
	CMOT_Float4 = 3,
	CMOT_MaterialAttributes = 4,
	CMOT_MAX = 5
};

// Object: Enum Engine.EDataDrivenShaderPlatformInfoCondition
enum class EDataDrivenShaderPlatformInfoCondition : uint8_t
{
	COND_True = 0,
	COND_False = 1,
	COND_Max = 2
};

// Object: Enum Engine.EDBufferTextureId
enum class EDBufferTextureId : uint8_t
{
	DBT_A = 0,
	DBT_B = 1,
	DBT_C = 2,
	DBT_MAX = 3
};

// Object: Enum Engine.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : uint8_t
{
	TDOF_NearAndFarMask = 0,
	TDOF_NearMask = 1,
	TDOF_FarMask = 2,
	TDOF_CircleOfConfusionRadius = 3,
	TDOF_MAX = 4
};

// Object: Enum Engine.EFloatToIntMode
enum class EFloatToIntMode : uint8_t
{
	Truncate = 0,
	Floor = 1,
	Round = 2,
	Ceil = 3,
	EFloatToIntMode_MAX = 4
};

// Object: Enum Engine.EFunctionInputType
enum class EFunctionInputType : uint8_t
{
	FunctionInput_Scalar = 0,
	FunctionInput_Vector2 = 1,
	FunctionInput_Vector3 = 2,
	FunctionInput_Vector4 = 3,
	FunctionInput_Texture2D = 4,
	FunctionInput_TextureCube = 5,
	FunctionInput_Texture2DArray = 6,
	FunctionInput_VolumeTexture = 7,
	FunctionInput_StaticBool = 8,
	FunctionInput_MaterialAttributes = 9,
	FunctionInput_TextureExternal = 10,
	FunctionInput_Bool = 11,
	FunctionInput_Substrate = 12,
	FunctionInput_MAX = 13
};

// Object: Enum Engine.EPositionIncludedOffsets
enum class EPositionIncludedOffsets : uint8_t
{
	IncludeOffsets = 0,
	ExcludeOffsets = 1,
	EPositionIncludedOffsets_MAX = 2
};

// Object: Enum Engine.ELocalPositionOrigin
enum class ELocalPositionOrigin : uint8_t
{
	Instance = 0,
	InstancePreSkinning = 1,
	Primitive = 2,
	ELocalPositionOrigin_MAX = 3
};

// Object: Enum Engine.ENeuralIndexType
enum class ENeuralIndexType : uint8_t
{
	NIT_TextureIndex = 0,
	NIT_BufferIndex = 1,
	NIT_MAX = 2
};

// Object: Enum Engine.ENoiseFunction
enum class ENoiseFunction : uint8_t
{
	NOISEFUNCTION_SimplexTex = 0,
	NOISEFUNCTION_GradientTex = 1,
	NOISEFUNCTION_GradientTex3D = 2,
	NOISEFUNCTION_GradientALU = 3,
	NOISEFUNCTION_ValueALU = 4,
	NOISEFUNCTION_VoronoiALU = 5,
	NOISEFUNCTION_MAX = 6
};

// Object: Enum Engine.EMaterialExpressionOperatorKind
enum class EMaterialExpressionOperatorKind : uint8_t
{
	BitwiseNot = 0,
	Negate = 1,
	Not = 2,
	Abs = 3,
	ACos = 4,
	ACosh = 5,
	ASin = 6,
	ASinh = 7,
	ATan = 8,
	ATanh = 9,
	Ceil = 10,
	Cos = 11,
	Cosh = 12,
	Exponential = 13,
	Exponential2 = 14,
	Floor = 15,
	Frac = 16,
	IsFinite = 17,
	IsInf = 18,
	IsNan = 19,
	Length = 20,
	Logarithm = 21,
	Logarithm10 = 22,
	Logarithm2 = 23,
	Round = 24,
	Saturate = 25,
	Sign = 26,
	Sin = 27,
	Sinh = 28,
	Sqrt = 29,
	Tan = 30,
	Tanh = 31,
	Truncate = 32,
	Equals = 33,
	GreaterThan = 34,
	GreaterThanOrEquals = 35,
	LessThan = 36,
	LessThanOrEquals = 37,
	NotEquals = 38,
	And = 39,
	Or = 40,
	Add = 41,
	Subtract = 42,
	Multiply = 43,
	Divide = 44,
	Modulo = 45,
	BitwiseAnd = 46,
	BitwiseOr = 47,
	BitShiftLeft = 48,
	BitShiftRight = 49,
	Cross = 50,
	Distance = 51,
	Dot = 52,
	Fmod = 53,
	Max = 54,
	Min = 55,
	Pow = 56,
	Step = 57,
	Clamp = 58,
	Lerp = 59,
	Select = 60,
	Smoothstep = 61
};

// Object: Enum Engine.EPathTracingBufferTextureId
enum class EPathTracingBufferTextureId : uint8_t
{
	PTBT_Radiance = 0,
	PTBT_DenoisedRadiance = 1,
	PTBT_Albedo = 2,
	PTBT_Normal = 3,
	PTBT_Variance = 4,
	PTBT_MAX = 5
};

// Object: Enum Engine.ERuntimeVirtualTextureMipValueMode
enum class ERuntimeVirtualTextureMipValueMode : uint8_t
{
	RVTMVM_None = 0,
	RVTMVM_MipLevel = 1,
	RVTMVM_MipBias = 2,
	RVTMVM_RecalculateDerivatives = 3,
	RVTMVM_DerivativeUV = 4,
	RVTMVM_DerivativeWorld = 5,
	RVTMVM_MAX = 6
};

// Object: Enum Engine.ERuntimeVirtualTextureTextureAddressMode
enum class ERuntimeVirtualTextureTextureAddressMode : uint8_t
{
	RVTTA_Clamp = 0,
	RVTTA_Wrap = 1,
	RVTTA_MAX = 2
};

// Object: Enum Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8_t
{
	Coordinates = 0,
	OffsetFraction = 1,
	EMaterialSceneAttributeInputMode_MAX = 2
};

// Object: Enum Engine.ESpeedTreeGeometryType
enum class ESpeedTreeGeometryType : uint8_t
{
	STG_Branch = 0,
	STG_Frond = 1,
	STG_Leaf = 2,
	STG_FacingLeaf = 3,
	STG_Billboard = 4,
	STG_MAX = 5
};

// Object: Enum Engine.ESpeedTreeWindType
enum class ESpeedTreeWindType : uint8_t
{
	STW_None = 0,
	STW_Fastest = 1,
	STW_Fast = 2,
	STW_Better = 3,
	STW_Best = 4,
	STW_Palm = 5,
	STW_BestPlus = 6,
	STW_MAX = 7
};

// Object: Enum Engine.ESpeedTreeLODType
enum class ESpeedTreeLODType : uint8_t
{
	STLOD_Pop = 0,
	STLOD_Smooth = 1,
	STLOD_MAX = 2
};

// Object: Enum Engine.EMaterialSubSurfaceType
enum class EMaterialSubSurfaceType : uint8_t
{
	MSS_None = 0,
	MSS_Wrap = 1,
	MSS_TwoSidedWrap = 2,
	MSS_Diffusion = 3,
	MSS_DiffusionProfile = 4,
	MSS_SimpleVolume = 5,
	MSS_MAX = 6
};

// Object: Enum Engine.ESwitchMaterialOutputType
enum class ESwitchMaterialOutputType : uint8_t
{
	TMMOT_Float1 = 0,
	TMMOT_Float2 = 1,
	TMMOT_Float3 = 2,
	TMMOT_Float4 = 3,
	TMMOT_MAX = 4
};

// Object: Enum Engine.ETextureCollectionMemberType
enum class ETextureCollectionMemberType : uint8_t
{
	Texture2D = 0,
	TextureCube = 1,
	Texture2DArray = 2,
	TextureCubeArray = 3,
	TextureVolume = 4,
	Max = 5
};

// Object: Enum Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : uint8_t
{
	TMTM_TextureSize = 0,
	TMTM_TexelSize = 1,
	TMTM_MAX = 2
};

// Object: Enum Engine.ETextureGatherMode
enum class ETextureGatherMode : uint8_t
{
	TGM_None = 0,
	TGM_Red = 1,
	TGM_Green = 2,
	TGM_Blue = 3,
	TGM_Alpha = 4,
	TGM_MAX = 5
};

// Object: Enum Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8_t
{
	TRANSFORMSOURCE_Tangent = 0,
	TRANSFORMSOURCE_Local = 1,
	TRANSFORMSOURCE_World = 2,
	TRANSFORMSOURCE_View = 3,
	TRANSFORMSOURCE_Camera = 4,
	TRANSFORMSOURCE_ParticleWorld = 5,
	TRANSFORMSOURCE_Instance = 6,
	TRANSFORMSOURCE_MAX = 7
};

// Object: Enum Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8_t
{
	TRANSFORM_Tangent = 0,
	TRANSFORM_Local = 1,
	TRANSFORM_World = 2,
	TRANSFORM_View = 3,
	TRANSFORM_Camera = 4,
	TRANSFORM_ParticleWorld = 5,
	TRANSFORM_Instance = 6,
	TRANSFORM_MAX = 7
};

// Object: Enum Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8_t
{
	TRANSFORMPOSSOURCE_Local = 0,
	TRANSFORMPOSSOURCE_World = 1,
	TRANSFORMPOSSOURCE_PeriodicWorld = 2,
	TRANSFORMPOSSOURCE_TranslatedWorld = 3,
	TRANSFORMPOSSOURCE_FirstPersonTranslatedWorld = 4,
	TRANSFORMPOSSOURCE_View = 5,
	TRANSFORMPOSSOURCE_Camera = 6,
	TRANSFORMPOSSOURCE_Particle = 7,
	TRANSFORMPOSSOURCE_Instance = 8,
	TRANSFORMPOSSOURCE_MAX = 9
};

// Object: Enum Engine.EVectorNoiseFunction
enum class EVectorNoiseFunction : uint8_t
{
	VNF_CellnoiseALU = 0,
	VNF_VectorALU = 1,
	VNF_GradientALU = 2,
	VNF_CurlALU = 3,
	VNF_VoronoiALU = 4,
	VNF_MAX = 5
};

// Object: Enum Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8_t
{
	MEVP_BufferSize = 0,
	MEVP_FieldOfView = 1,
	MEVP_TanHalfFieldOfView = 2,
	MEVP_ViewSize = 3,
	MEVP_WorldSpaceViewPosition = 4,
	MEVP_WorldSpaceCameraPosition = 5,
	MEVP_ViewportOffset = 6,
	MEVP_TemporalSampleCount = 7,
	MEVP_TemporalSampleIndex = 8,
	MEVP_TemporalSampleOffset = 9,
	MEVP_RuntimeVirtualTextureOutputLevel = 10,
	MEVP_RuntimeVirtualTextureOutputDerivative = 11,
	MEVP_PreExposure = 12,
	MEVP_RuntimeVirtualTextureMaxLevel = 13,
	MEVP_ResolutionFraction = 14,
	MEVP_PostVolumeUserFlags = 15,
	MEVP_FirstPersonFieldOfView = 16,
	MEVP_FirstPersonTanHalfFieldOfView = 17,
	MEVP_FirstPersonScale = 18,
	MEVP_NearPlane = 19,
	MEVP_MAX = 20
};

// Object: Enum Engine.EWorldPositionIncludedOffsets
enum class EWorldPositionIncludedOffsets : uint8_t
{
	WPT_Default = 0,
	WPT_ExcludeAllShaderOffsets = 1,
	WPT_CameraRelative = 2,
	WPT_CameraRelativeNoOffsets = 3,
	WPT_MAX = 4
};

// Object: Enum Engine.EMaterialShaderFrequency
enum class EMaterialShaderFrequency : uint8_t
{
	Vertex = 1,
	Pixel = 8,
	Compute = 32,
	Any = 41,
	EMaterialShaderFrequency_MAX = 42
};

// Object: Enum Engine.EMaterialValueTypeBridge
enum class EMaterialValueTypeBridge : uint8_t
{
	Float1 = 0,
	Float2 = 1,
	Float3 = 2,
	Float4 = 3,
	Texture2D = 4,
	TextureCube = 5,
	Texture2DArray = 6,
	TextureCubeArray = 7,
	VolumeTexture = 8,
	StaticBool = 9,
	Unknown = 10,
	MaterialAttributes = 11,
	TextureExternal = 12,
	TextureVirtual = 13,
	SparseVolumeTexture = 14,
	VTPageTableResult = 15,
	ShadingModel = 16,
	Substrate = 17,
	LWCScalar = 18,
	LWCVector2 = 19,
	LWCVector3 = 20,
	LWCVector4 = 21,
	Execution = 22,
	VoidStatement = 23,
	Bool = 24,
	UInt1 = 25,
	UInt2 = 26,
	UInt3 = 27,
	UInt4 = 28,
	TextureCollection = 29,
	TextureMeshPaint = 30,
	TextureMaterialCache = 31,
	Texture = 32,
	Float = 33,
	UInt = 34,
	LWCType = 35,
	Numeric = 36,
	EMaterialValueTypeBridge_MAX = 37
};

// Object: Enum Engine.EMaterialFunctionUsage
enum class EMaterialFunctionUsage : uint8_t
{
	Default = 0,
	MaterialLayer = 1,
	MaterialLayerBlend = 2,
	EMaterialFunctionUsage_MAX = 3
};

// Object: Enum Engine.EMaterialUsage
enum class EMaterialUsage : uint8_t
{
	MATUSAGE_SkeletalMesh = 0,
	MATUSAGE_ParticleSprites = 1,
	MATUSAGE_BeamTrails = 2,
	MATUSAGE_MeshParticles = 3,
	MATUSAGE_StaticLighting = 4,
	MATUSAGE_MorphTargets = 5,
	MATUSAGE_SplineMesh = 6,
	MATUSAGE_InstancedStaticMeshes = 7,
	MATUSAGE_GeometryCollections = 8,
	MATUSAGE_Clothing = 9,
	MATUSAGE_NiagaraSprites = 10,
	MATUSAGE_NiagaraRibbons = 11,
	MATUSAGE_NiagaraMeshParticles = 12,
	MATUSAGE_GeometryCache = 13,
	MATUSAGE_Water = 14,
	MATUSAGE_HairStrands = 15,
	MATUSAGE_LidarPointCloud = 16,
	MATUSAGE_VirtualHeightfieldMesh = 17,
	MATUSAGE_Nanite = 18,
	MATUSAGE_VolumetricCloud = 19,
	MATUSAGE_HeterogeneousVolumes = 20,
	MATUSAGE_MaterialCache = 21,
	MATUSAGE_StaticMesh = 22,
	MATUSAGE_MAX = 23
};

// Object: Enum Engine.EMaterialLayerLinkState
enum class EMaterialLayerLinkState : uint8_t
{
	Uninitialized = 0,
	LinkedToParent = 1,
	UnlinkedFromParent = 2,
	NotFromParent = 3,
	EMaterialLayerLinkState_MAX = 4
};

// Object: Enum Engine.ETextureSizingType
enum class ETextureSizingType : uint8_t
{
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_AutomaticFromTexelDensity = 4,
	TextureSizingType_AutomaticFromMeshScreenSize = 5,
	TextureSizingType_AutomaticFromMeshDrawDistance = 6,
	TextureSizingType_MAX = 7
};

// Object: Enum Engine.EMaterialMergeType
enum class EMaterialMergeType : uint8_t
{
	MaterialMergeType_Default = 0,
	MaterialMergeType_Simplygon = 1,
	MaterialMergeType_MAX = 2
};

// Object: Enum Engine.ESceneTextureId
enum class ESceneTextureId : uint8_t
{
	PPI_SceneColor = 0,
	PPI_SceneDepth = 1,
	PPI_DiffuseColor = 2,
	PPI_SpecularColor = 3,
	PPI_SubsurfaceColor = 4,
	PPI_BaseColor = 5,
	PPI_Specular = 6,
	PPI_Metallic = 7,
	PPI_WorldNormal = 8,
	PPI_SeparateTranslucency = 9,
	PPI_Opacity = 10,
	PPI_Roughness = 11,
	PPI_MaterialAO = 12,
	PPI_CustomDepth = 13,
	PPI_PostProcessInput0 = 14,
	PPI_PostProcessInput1 = 15,
	PPI_PostProcessInput2 = 16,
	PPI_PostProcessInput3 = 17,
	PPI_PostProcessInput4 = 18,
	PPI_PostProcessInput5 = 19,
	PPI_PostProcessInput6 = 20,
	PPI_DecalMask = 21,
	PPI_ShadingModelColor = 22,
	PPI_ShadingModelID = 23,
	PPI_AmbientOcclusion = 24,
	PPI_CustomStencil = 25,
	PPI_StoredBaseColor = 26,
	PPI_StoredSpecular = 27,
	PPI_Velocity = 28,
	PPI_WorldTangent = 29,
	PPI_Anisotropy = 30,
	PPI_IsFirstPerson = 31,
	PPI_UserSceneTexture0 = 32,
	PPI_UserSceneTexture1 = 33,
	PPI_UserSceneTexture2 = 34,
	PPI_UserSceneTexture3 = 35,
	PPI_UserSceneTexture4 = 36,
	PPI_UserSceneTexture5 = 37,
	PPI_UserSceneTexture6 = 38,
	PPI_MAX = 39
};

// Object: Enum Engine.ELWCFunctionKind
enum class ELWCFunctionKind : uint8_t
{
	Constructor = 0,
	Promote = 1,
	Demote = 2,
	Add = 3,
	Subtract = 4,
	Divide = 5,
	MultiplyVectorVector = 6,
	MultiplyVectorMatrix = 7,
	MultiplyMatrixMatrix = 8,
	Other = 9,
	Max = 10
};

// Object: Enum Engine.EMaterialParameterAssociation
enum class EMaterialParameterAssociation : uint8_t
{
	LayerParameter = 0,
	BlendParameter = 1,
	GlobalParameter = 2,
	EMaterialParameterAssociation_MAX = 3
};

// Object: Enum Engine.EMaterialParameterType
enum class EMaterialParameterType : uint8_t
{
	Scalar = 0,
	Vector = 1,
	DoubleVector = 2,
	Texture = 3,
	TextureCollection = 4,
	Font = 5,
	RuntimeVirtualTexture = 6,
	SparseVolumeTexture = 7,
	StaticSwitch = 8,
	NumRuntime = 9,
	StaticComponentMask = 10,
	Num = 11,
	None = 12,
	EMaterialParameterType_MAX = 13
};

// Object: Enum Engine.EMeshApproximationType
enum class EMeshApproximationType : uint8_t
{
	MeshAndMaterials = 0,
	MeshShapeOnly = 1,
	EMeshApproximationType_MAX = 2
};

// Object: Enum Engine.EMeshApproximationBaseCappingType
enum class EMeshApproximationBaseCappingType : uint8_t
{
	NoBaseCapping = 0,
	ConvexPolygon = 1,
	ConvexSolid = 2,
	EMeshApproximationBaseCappingType_MAX = 3
};

// Object: Enum Engine.EOccludedGeometryFilteringPolicy
enum class EOccludedGeometryFilteringPolicy : uint8_t
{
	NoOcclusionFiltering = 0,
	VisibilityBasedFiltering = 1,
	EOccludedGeometryFilteringPolicy_MAX = 2
};

// Object: Enum Engine.EMeshApproximationSimplificationPolicy
enum class EMeshApproximationSimplificationPolicy : uint8_t
{
	FixedTriangleCount = 0,
	TrianglesPerArea = 1,
	GeometricTolerance = 2,
	EMeshApproximationSimplificationPolicy_MAX = 3
};

// Object: Enum Engine.EMeshApproximationGroundPlaneClippingPolicy
enum class EMeshApproximationGroundPlaneClippingPolicy : uint8_t
{
	NoGroundClipping = 0,
	DiscardWithZPlane = 1,
	CutWithZPlane = 2,
	CutAndFillWithZPlane = 3,
	EMeshApproximationGroundPlaneClippingPolicy_MAX = 4
};

// Object: Enum Engine.EMeshApproximationUVGenerationPolicy
enum class EMeshApproximationUVGenerationPolicy : uint8_t
{
	PreferUVAtlas = 0,
	PreferXAtlas = 1,
	PreferPatchBuilder = 2,
	EMeshApproximationUVGenerationPolicy_MAX = 3
};

// Object: Enum Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8_t
{
	AllLODs = 0,
	SpecificLOD = 1,
	CalculateLOD = 2,
	LowestDetailLOD = 3,
	EMeshLODSelectionType_MAX = 4
};

// Object: Enum Engine.EMeshMergeType
enum class EMeshMergeType : uint8_t
{
	MeshMergeType_Default = 0,
	MeshMergeType_MergeActor = 1,
	MeshMergeType_MAX = 2
};

// Object: Enum Engine.EUVOutput
enum class EUVOutput : uint8_t
{
	DoNotOutputChannel = 0,
	OutputChannel = 1,
	EUVOutput_MAX = 2
};

// Object: Enum Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8_t
{
	High = 0,
	Medium = 1,
	Low = 2,
	ELandscapeCullingPrecision_MAX = 3
};

// Object: Enum Engine.EProxyNormalComputationMethod
enum class EProxyNormalComputationMethod : uint8_t
{
	AngleWeighted = 0,
	AreaWeighted = 1,
	EqualWeighted = 2,
	EProxyNormalComputationMethod_MAX = 3
};

// Object: Enum Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8_t
{
	Off = 0,
	Lowest = 1,
	Low = 2,
	Normal = 3,
	High = 4,
	Highest = 5,
	EMeshFeatureImportance_MAX = 6
};

// Object: Enum Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : uint8_t
{
	Triangles = 0,
	Vertices = 1,
	Any = 2,
	EStaticMeshReductionTerimationCriterion_MAX = 3
};

// Object: Enum Engine.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : uint8_t
{
	MTD_PurchaseQueryComplete = 0,
	MTD_PurchaseComplete = 1,
	MTD_MAX = 2
};

// Object: Enum Engine.EMicroTransactionResult
enum class EMicroTransactionResult : uint8_t
{
	MTR_Succeeded = 0,
	MTR_Failed = 1,
	MTR_Canceled = 2,
	MTR_RestoredFromServer = 3,
	MTR_MAX = 4
};

// Object: Enum Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8_t
{
	Default = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringMode_MAX = 3
};

// Object: Enum Engine.ENavigationDataResolution
enum class ENavigationDataResolution : uint8_t
{
	Low = 0,
	Default = 1,
	High = 2,
	Invalid = 3,
	MAX = 4
};

// Object: Enum Engine.ENavigationInvokerPriority
enum class ENavigationInvokerPriority : uint8_t
{
	VeryLow = 1,
	Low = 2,
	Default = 3,
	High = 4,
	VeryHigh = 5,
	MAX = 6
};

// Object: Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8_t
{
	BothWays = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ENavLinkDirection_MAX = 3
};

// Object: Enum Engine.EPingType
enum class EPingType : uint8_t
{
	None = 0,
	RoundTrip = 1,
	RoundTripExclFrame = 2,
	ICMP = 3,
	UDPQoS = 4,
	Max = 5,
	Count = 6
};

// Object: Enum Engine.EPingAverageType
enum class EPingAverageType : uint8_t
{
	None = 0,
	MovingAverage = 1,
	PlayerStateAvg = 2,
	EPingAverageType_MAX = 3
};

// Object: Enum Engine.EParticleDetailMode
enum class EParticleDetailMode : uint8_t
{
	PDM_Low = 0,
	PDM_Medium = 1,
	PDM_High = 2,
	PDM_Epic = 3,
	PDM_MAX = 4
};

// Object: Enum Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8_t
{
	Low = 0,
	Medium = 1,
	High = 2,
	Critical = 3,
	Num = 4,
	EParticleSignificanceLevel_MAX = 5
};

// Object: Enum Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : uint8_t
{
	Auto = 0,
	Complete = 1,
	DisableTick = 2,
	DisableTickAndKill = 3,
	Num = 4,
	EParticleSystemInsignificanceReaction_MAX = 5
};

// Object: Enum Engine.EModuleType
enum class EModuleType : uint8_t
{
	EPMT_General = 0,
	EPMT_TypeData = 1,
	EPMT_Beam = 2,
	EPMT_Trail = 3,
	EPMT_Spawn = 4,
	EPMT_Required = 5,
	EPMT_Event = 6,
	EPMT_Light = 7,
	EPMT_SubUV = 8,
	EPMT_MAX = 9
};

// Object: Enum Engine.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : uint8_t
{
	EPSSM_Random = 0,
	EPSSM_Sequential = 1,
	EPSSM_MAX = 2
};

// Object: Enum Engine.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8_t
{
	EAPSM_Random = 0,
	EAPSM_Sequential = 1,
	EAPSM_MAX = 2
};

// Object: Enum Engine.Beam2SourceTargetMethod
enum class EBeam2SourceTargetMethod : uint8_t
{
	PEB2STM_Default = 0,
	PEB2STM_UserSet = 1,
	PEB2STM_Emitter = 2,
	PEB2STM_Particle = 3,
	PEB2STM_Actor = 4,
	PEB2STM_MAX = 5
};

// Object: Enum Engine.Beam2SourceTargetTangentMethod
enum class EBeam2SourceTargetTangentMethod : uint8_t
{
	PEB2STTM_Direct = 0,
	PEB2STTM_UserSet = 1,
	PEB2STTM_Distribution = 2,
	PEB2STTM_Emitter = 3,
	PEB2STTM_MAX = 4
};

// Object: Enum Engine.BeamModifierType
enum class EBeamModifierType : uint8_t
{
	PEB2MT_Source = 0,
	PEB2MT_Target = 1,
	PEB2MT_MAX = 2
};

// Object: Enum Engine.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : uint8_t
{
	EPCOUM_DirectSet = 0,
	EPCOUM_Additive = 1,
	EPCOUM_Scalar = 2,
	EPCOUM_MAX = 3
};

// Object: Enum Engine.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8_t
{
	EPCC_Kill = 0,
	EPCC_Freeze = 1,
	EPCC_HaltCollisions = 2,
	EPCC_FreezeTranslation = 3,
	EPCC_FreezeRotation = 4,
	EPCC_FreezeMovement = 5,
	EPCC_MAX = 6
};

// Object: Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8_t
{
	Bounce = 0,
	Stop = 1,
	Kill = 2,
	EParticleCollisionResponse_MAX = 3
};

// Object: Enum Engine.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : uint8_t
{
	BONESOCKETSOURCE_Bones = 0,
	BONESOCKETSOURCE_Sockets = 1,
	BONESOCKETSOURCE_MAX = 2
};

// Object: Enum Engine.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : uint8_t
{
	BONESOCKETSEL_Sequential = 0,
	BONESOCKETSEL_Random = 1,
	BONESOCKETSEL_MAX = 2
};

// Object: Enum Engine.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8_t
{
	ELESM_Random = 0,
	ELESM_Sequential = 1,
	ELESM_MAX = 2
};

// Object: Enum Engine.CylinderHeightAxis
enum class ECylinderHeightAxis : uint8_t
{
	PMLPC_HEIGHTAXIS_X = 0,
	PMLPC_HEIGHTAXIS_Y = 1,
	PMLPC_HEIGHTAXIS_Z = 2,
	PMLPC_HEIGHTAXIS_MAX = 3
};

// Object: Enum Engine.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : uint8_t
{
	VERTSURFACESOURCE_Vert = 0,
	VERTSURFACESOURCE_Surface = 1,
	VERTSURFACESOURCE_MAX = 2
};

// Object: Enum Engine.EOrbitChainMode
enum class EOrbitChainMode : uint8_t
{
	EOChainMode_Add = 0,
	EOChainMode_Scale = 1,
	EOChainMode_Link = 2,
	EOChainMode_MAX = 3
};

// Object: Enum Engine.EParticleAxisLock
enum class EParticleAxisLock : uint8_t
{
	EPAL_NONE = 0,
	EPAL_X = 1,
	EPAL_Y = 2,
	EPAL_Z = 3,
	EPAL_NEGATIVE_X = 4,
	EPAL_NEGATIVE_Y = 5,
	EPAL_NEGATIVE_Z = 6,
	EPAL_ROTATE_X = 7,
	EPAL_ROTATE_Y = 8,
	EPAL_ROTATE_Z = 9,
	EPAL_MAX = 10
};

// Object: Enum Engine.EEmitterDynamicParameterValue
enum class EEmitterDynamicParameterValue : uint8_t
{
	EDPV_UserSet = 0,
	EDPV_AutoSet = 1,
	EDPV_VelocityX = 2,
	EDPV_VelocityY = 3,
	EDPV_VelocityZ = 4,
	EDPV_VelocityMag = 5,
	EDPV_MAX = 6
};

// Object: Enum Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8_t
{
	None = 0,
	FlipUV = 1,
	FlipUOnly = 2,
	FlipVOnly = 3,
	RandomFlipUV = 4,
	RandomFlipUOnly = 5,
	RandomFlipVOnly = 6,
	RandomFlipUVIndependent = 7,
	EParticleUVFlipMode_MAX = 8
};

// Object: Enum Engine.EParticleSortMode
enum class EParticleSortMode : uint8_t
{
	PSORTMODE_None = 0,
	PSORTMODE_ViewProjDepth = 1,
	PSORTMODE_DistanceToView = 2,
	PSORTMODE_Age_OldestFirst = 3,
	PSORTMODE_Age_NewestFirst = 4,
	PSORTMODE_MAX = 5
};

// Object: Enum Engine.EEmitterNormalsMode
enum class EEmitterNormalsMode : uint8_t
{
	ENM_CameraFacing = 0,
	ENM_Spherical = 1,
	ENM_Cylindrical = 2,
	ENM_MAX = 3
};

// Object: Enum Engine.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8_t
{
	PET2SRCM_Default = 0,
	PET2SRCM_Particle = 1,
	PET2SRCM_Actor = 2,
	PET2SRCM_MAX = 3
};

// Object: Enum Engine.EBeam2Method
enum class EBeam2Method : uint8_t
{
	PEB2M_Distance = 0,
	PEB2M_Target = 1,
	PEB2M_Branch = 2,
	PEB2M_MAX = 3
};

// Object: Enum Engine.EBeamTaperMethod
enum class EBeamTaperMethod : uint8_t
{
	PEBTM_None = 0,
	PEBTM_Full = 1,
	PEBTM_Partial = 2,
	PEBTM_MAX = 3
};

// Object: Enum Engine.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8_t
{
	PSMA_MeshFaceCameraWithRoll = 0,
	PSMA_MeshFaceCameraWithSpin = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX = 3
};

// Object: Enum Engine.EMeshCameraFacingUpAxis
enum class EMeshCameraFacingUpAxis : uint8_t
{
	CameraFacing_NoneUP = 0,
	CameraFacing_ZUp = 1,
	CameraFacing_NegativeZUp = 2,
	CameraFacing_YUp = 3,
	CameraFacing_NegativeYUp = 4,
	CameraFacing_MAX = 5
};

// Object: Enum Engine.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : uint8_t
{
	XAxisFacing_NoUp = 0,
	XAxisFacing_ZUp = 1,
	XAxisFacing_NegativeZUp = 2,
	XAxisFacing_YUp = 3,
	XAxisFacing_NegativeYUp = 4,
	LockedAxis_ZAxisFacing = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX = 13
};

// Object: Enum Engine.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : uint8_t
{
	Trails_CameraUp = 0,
	Trails_SourceUp = 1,
	Trails_WorldUp = 2,
	Trails_MAX = 3
};

// Object: Enum Engine.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8_t
{
	PSA_FacingCameraPosition = 0,
	PSA_Square = 1,
	PSA_Rectangle = 2,
	PSA_Velocity = 3,
	PSA_AwayFromCenter = 4,
	PSA_TypeSpecific = 5,
	PSA_FacingCameraDistanceBlend = 6,
	PSA_MAX = 7
};

// Object: Enum Engine.EPhysicsQueryKind
enum class EPhysicsQueryKind : uint8_t
{
	Test = 0,
	Single = 1,
	Multi = 2,
	EPhysicsQueryKind_MAX = 3
};

// Object: Enum Engine.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8_t
{
	VTBlend_Linear = 0,
	VTBlend_Cubic = 1,
	VTBlend_EaseIn = 2,
	VTBlend_EaseOut = 3,
	VTBlend_EaseInOut = 4,
	VTBlend_PreBlended = 5,
	VTBlend_MAX = 6
};

// Object: Enum Engine.EViewTargetBlendOrder
enum class EViewTargetBlendOrder : uint8_t
{
	VTBlendOrder_Base = 0,
	VTBlendOrder_Override = 1,
	VTBlendOrder_MAX = 2
};

// Object: Enum Engine.ERichCurveInterpMode
enum class ERichCurveInterpMode : uint8_t
{
	RCIM_Linear = 0,
	RCIM_Constant = 1,
	RCIM_Cubic = 2,
	RCIM_None = 3,
	RCIM_MAX = 4
};

// Object: Enum Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8_t
{
	RCCE_Cycle = 0,
	RCCE_CycleWithOffset = 1,
	RCCE_Oscillate = 2,
	RCCE_Linear = 3,
	RCCE_Constant = 4,
	RCCE_None = 5,
	RCCE_MAX = 6
};

// Object: Enum Engine.ReverbPreset
enum class EReverbPreset : uint8_t
{
	REVERB_Default = 0,
	REVERB_Bathroom = 1,
	REVERB_StoneRoom = 2,
	REVERB_Auditorium = 3,
	REVERB_ConcertHall = 4,
	REVERB_Cave = 5,
	REVERB_Hallway = 6,
	REVERB_StoneCorridor = 7,
	REVERB_Alley = 8,
	REVERB_Forest = 9,
	REVERB_City = 10,
	REVERB_Mountains = 11,
	REVERB_Quarry = 12,
	REVERB_Plain = 13,
	REVERB_ParkingLot = 14,
	REVERB_SewerPipe = 15,
	REVERB_Underwater = 16,
	REVERB_SmallRoom = 17,
	REVERB_MediumRoom = 18,
	REVERB_LargeRoom = 19,
	REVERB_MediumHall = 20,
	REVERB_LargeHall = 21,
	REVERB_Plate = 22,
	REVERB_MAX = 23
};

// Object: Enum Engine.ERichCurveTangentMode
enum class ERichCurveTangentMode : uint8_t
{
	RCTM_Auto = 0,
	RCTM_User = 1,
	RCTM_Break = 2,
	RCTM_None = 3,
	RCTM_SmartAuto = 4,
	RCTM_MAX = 5
};

// Object: Enum Engine.ERichCurveTangentWeightMode
enum class ERichCurveTangentWeightMode : uint8_t
{
	RCTWM_WeightedNone = 0,
	RCTWM_WeightedArrive = 1,
	RCTWM_WeightedLeave = 2,
	RCTWM_WeightedBoth = 3,
	RCTWM_MAX = 4
};

// Object: Enum Engine.ERichCurveCompressionFormat
enum class ERichCurveCompressionFormat : uint8_t
{
	RCCF_Empty = 0,
	RCCF_Constant = 1,
	RCCF_Linear = 2,
	RCCF_Cubic = 3,
	RCCF_Mixed = 4,
	RCCF_Weighted = 5,
	RCCF_MAX = 6
};

// Object: Enum Engine.ERichCurveKeyTimeCompressionFormat
enum class ERichCurveKeyTimeCompressionFormat : uint8_t
{
	RCKTCF_uint16 = 0,
	RCKTCF_float32 = 1,
	RCKTCF_MAX = 2
};

// Object: Enum Engine.ERuntimePartitionCellBoundsMethod
enum class ERuntimePartitionCellBoundsMethod : uint8_t
{
	UseContent = 0,
	UseCellBounds = 1,
	UseMinContentCellBounds = 2,
	ERuntimePartitionCellBoundsMethod_MAX = 3
};

// Object: Enum Engine.ERuntimeVirtualTextureMaterialType
enum class ERuntimeVirtualTextureMaterialType : uint8_t
{
	BaseColor = 0,
	Mask4 = 1,
	BaseColor_Normal_Roughness = 2,
	BaseColor_Normal_Specular = 3,
	BaseColor_Normal_Specular_YCoCg = 4,
	BaseColor_Normal_Specular_Mask_YCoCg = 5,
	WorldHeight = 6,
	Displacement = 7,
	Count = 8,
	ERuntimeVirtualTextureMaterialType_MAX = 9
};

// Object: Enum Engine.ESceneCaptureUnlitViewmode
enum class ESceneCaptureUnlitViewmode : uint8_t
{
	Disabled = 0,
	Capture = 1,
	CaptureOrCustomRenderPass = 2,
	ESceneCaptureUnlitViewmode_MAX = 3
};

// Object: Enum Engine.EMaterialProperty
enum class EMaterialProperty : uint8_t
{
	MP_EmissiveColor = 0,
	MP_Opacity = 1,
	MP_OpacityMask = 2,
	MP_DiffuseColor = 3,
	MP_SpecularColor = 4,
	MP_BaseColor = 5,
	MP_Metallic = 6,
	MP_Specular = 7,
	MP_Roughness = 8,
	MP_Anisotropy = 9,
	MP_Normal = 10,
	MP_Tangent = 11,
	MP_WorldPositionOffset = 12,
	MP_WorldDisplacement_DEPRECATED = 13,
	MP_TessellationMultiplier_DEPRECATED = 14,
	MP_SubsurfaceColor = 15,
	MP_CustomData0 = 16,
	MP_CustomData1 = 17,
	MP_AmbientOcclusion = 18,
	MP_Refraction = 19,
	MP_CustomizedUVs0 = 20,
	MP_CustomizedUVs1 = 21,
	MP_CustomizedUVs2 = 22,
	MP_CustomizedUVs3 = 23,
	MP_CustomizedUVs4 = 24,
	MP_CustomizedUVs5 = 25,
	MP_CustomizedUVs6 = 26,
	MP_CustomizedUVs7 = 27,
	MP_PixelDepthOffset = 28,
	MP_ShadingModel = 29,
	MP_FrontMaterial = 30,
	MP_SurfaceThickness = 31,
	MP_Displacement = 32,
	MP_MaterialAttributes = 33,
	MP_CustomOutput = 34,
	MP_MAX = 35
};

// Object: Enum Engine.EAntiAliasingMethod
enum class EAntiAliasingMethod : uint8_t
{
	AAM_None = 0,
	AAM_FXAA = 1,
	AAM_TemporalAA = 2,
	AAM_MSAA = 3,
	AAM_TSR = 4,
	AAM_MAX = 5
};

// Object: Enum Engine.EAggCollisionShape
enum class EAggCollisionShape : uint8_t
{
	Sphere = 0,
	Box = 1,
	Sphyl = 2,
	Convex = 3,
	TaperedCapsule = 4,
	LevelSet = 5,
	SkinnedLevelSet = 6,
	MLLevelSet = 7,
	SkinnedTriangleMesh = 8,
	Unknown = 9,
	EAggCollisionShape_MAX = 10
};

// Object: Enum Engine.SkeletalMeshTerminationCriterion
enum class ESkeletalMeshTerminationCriterion : uint8_t
{
	SMTC_NumOfTriangles = 0,
	SMTC_NumOfVerts = 1,
	SMTC_TriangleOrVert = 2,
	SMTC_AbsNumOfTriangles = 3,
	SMTC_AbsNumOfVerts = 4,
	SMTC_AbsTriangleOrVert = 5,
	SMTC_MAX = 6
};

// Object: Enum Engine.SkeletalMeshOptimizationType
enum class ESkeletalMeshOptimizationType : uint8_t
{
	SMOT_NumOfTriangles = 0,
	SMOT_MaxDeviation = 1,
	SMOT_TriangleOrDeviation = 2,
	SMOT_MAX = 3
};

// Object: Enum Engine.SkeletalMeshOptimizationImportance
enum class ESkeletalMeshOptimizationImportance : uint8_t
{
	SMOI_Off = 0,
	SMOI_Lowest = 1,
	SMOI_Low = 2,
	SMOI_Normal = 3,
	SMOI_High = 4,
	SMOI_Highest = 5,
	SMOI_MAX = 6
};

// Object: Enum Engine.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : uint8_t
{
	BVS_HiddenByParent = 0,
	BVS_Visible = 1,
	BVS_ExplicitlyHidden = 2,
	BVS_MAX = 3
};

// Object: Enum Engine.EPhysBodyOp
enum class EPhysBodyOp : uint8_t
{
	PBO_None = 0,
	PBO_Term = 1,
	PBO_MAX = 2
};

// Object: Enum Engine.EVisibilityBasedAnimTickOption
enum class EVisibilityBasedAnimTickOption : uint8_t
{
	AlwaysTickPoseAndRefreshBones = 0,
	AlwaysTickPose = 1,
	OnlyTickMontagesAndRefreshBonesWhenPlayingMontages = 2,
	OnlyTickMontagesWhenNotRendered = 3,
	OnlyTickPoseWhenRendered = 4,
	EVisibilityBasedAnimTickOption_MAX = 5
};

// Object: Enum Engine.EBoneSpaces
enum class EBoneSpaces : uint8_t
{
	WorldSpace = 0,
	ComponentSpace = 1,
	EBoneSpaces_MAX = 2
};

// Object: Enum Engine.ESkinWeightProfileLayer
enum class ESkinWeightProfileLayer : uint8_t
{
	Primary = 0,
	Secondary = 1,
	ESkinWeightProfileLayer_MAX = 2
};

// Object: Enum Engine.ESkyLightSourceType
enum class ESkyLightSourceType : uint8_t
{
	SLS_CapturedScene = 0,
	SLS_SpecifiedCubemap = 1,
	SLS_MAX = 2
};

// Object: Enum Engine.ESoundDistanceCalc
enum class ESoundDistanceCalc : uint8_t
{
	SOUNDDISTANCE_Normal = 0,
	SOUNDDISTANCE_InfiniteXYPlane = 1,
	SOUNDDISTANCE_InfiniteXZPlane = 2,
	SOUNDDISTANCE_InfiniteYZPlane = 3,
	SOUNDDISTANCE_MAX = 4
};

// Object: Enum Engine.ESoundSpatializationAlgorithm
enum class ESoundSpatializationAlgorithm : uint8_t
{
	SPATIALIZATION_Default = 0,
	SPATIALIZATION_HRTF = 1,
	SPATIALIZATION_MAX = 2
};

// Object: Enum Engine.EAirAbsorptionMethod
enum class EAirAbsorptionMethod : uint8_t
{
	Linear = 0,
	CustomCurve = 1,
	EAirAbsorptionMethod_MAX = 2
};

// Object: Enum Engine.EReverbSendMethod
enum class EReverbSendMethod : uint8_t
{
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	EReverbSendMethod_MAX = 3
};

// Object: Enum Engine.EPriorityAttenuationMethod
enum class EPriorityAttenuationMethod : uint8_t
{
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	EPriorityAttenuationMethod_MAX = 3
};

// Object: Enum Engine.ENonSpatializedRadiusSpeakerMapMode
enum class ENonSpatializedRadiusSpeakerMapMode : uint8_t
{
	OmniDirectional = 0,
	Direct2D = 1,
	Surround2D = 2,
	ENonSpatializedRadiusSpeakerMapMode_MAX = 3
};

// Object: Enum Engine.ESoundGroup
enum class ESoundGroup : uint8_t
{
	SOUNDGROUP_Default = 0,
	SOUNDGROUP_Effects = 1,
	SOUNDGROUP_UI = 2,
	SOUNDGROUP_Music = 3,
	SOUNDGROUP_Voice = 4,
	SOUNDGROUP_GameSoundGroup1 = 5,
	SOUNDGROUP_GameSoundGroup2 = 6,
	SOUNDGROUP_GameSoundGroup3 = 7,
	SOUNDGROUP_GameSoundGroup4 = 8,
	SOUNDGROUP_GameSoundGroup5 = 9,
	SOUNDGROUP_GameSoundGroup6 = 10,
	SOUNDGROUP_GameSoundGroup7 = 11,
	SOUNDGROUP_GameSoundGroup8 = 12,
	SOUNDGROUP_GameSoundGroup9 = 13,
	SOUNDGROUP_GameSoundGroup10 = 14,
	SOUNDGROUP_GameSoundGroup11 = 15,
	SOUNDGROUP_GameSoundGroup12 = 16,
	SOUNDGROUP_GameSoundGroup13 = 17,
	SOUNDGROUP_GameSoundGroup14 = 18,
	SOUNDGROUP_GameSoundGroup15 = 19,
	SOUNDGROUP_GameSoundGroup16 = 20,
	SOUNDGROUP_GameSoundGroup17 = 21,
	SOUNDGROUP_GameSoundGroup18 = 22,
	SOUNDGROUP_GameSoundGroup19 = 23,
	SOUNDGROUP_GameSoundGroup20 = 24,
	SOUNDGROUP_MAX = 25
};

// Object: Enum Engine.ModulationParamMode
enum class EModulationParamMode : uint8_t
{
	MPM_Normal = 0,
	MPM_Abs = 1,
	MPM_Direct = 2,
	MPM_MAX = 3
};

// Object: Enum Engine.ESourceBusSendLevelControlMethod
enum class ESourceBusSendLevelControlMethod : uint8_t
{
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESourceBusSendLevelControlMethod_MAX = 3
};

// Object: Enum Engine.EDecompressionType
enum class EDecompressionType : uint8_t
{
	DTYPE_Setup = 0,
	DTYPE_Invalid = 1,
	DTYPE_RealTime = 2,
	DTYPE_Procedural = 3,
	DTYPE_Xenon = 4,
	DTYPE_Streaming = 5,
	DTYPE_MAX = 6
};

// Object: Enum Engine.ESoundWaveCuePointOrigin
enum class ESoundWaveCuePointOrigin : uint8_t
{
	WaveFile = 0,
	MarkerTransformation = 1,
	ESoundWaveCuePointOrigin_MAX = 2
};

// Object: Enum Engine.ESoundWaveFFTSize
enum class ESoundWaveFFTSize : uint8_t
{
	VerySmall = 0,
	Small = 1,
	Medium = 2,
	Large = 3,
	VeryLarge = 4,
	ESoundWaveFFTSize_MAX = 5
};

// Object: Enum Engine.ESoundAssetCompressionType
enum class ESoundAssetCompressionType : uint8_t
{
	BinkAudio = 0,
	ADPCM = 1,
	PCM = 2,
	Opus = 3,
	PlatformSpecific = 4,
	ProjectDefined = 5,
	RADAudio = 6,
	ESoundAssetCompressionType_MAX = 7
};

// Object: Enum Engine.ESoundWaveLoadingBehavior
enum class ESoundWaveLoadingBehavior : uint16_t
{
	Inherited = 0,
	RetainOnLoad = 1,
	PrimeOnLoad = 2,
	LoadOnDemand = 3,
	ForceInline = 4,
	Uninitialized = 255,
	ESoundWaveLoadingBehavior_MAX = 256
};

// Object: Enum Engine.EStereoLayerType
enum class EStereoLayerType : uint8_t
{
	SLT_WorldLocked = 0,
	SLT_TrackerLocked = 1,
	SLT_FaceLocked = 2,
	SLT_MAX = 3
};

// Object: Enum Engine.EStereoLayerShape
enum class EStereoLayerShape : uint8_t
{
	SLSH_QuadLayer = 0,
	SLSH_CylinderLayer = 1,
	SLSH_CubemapLayer = 2,
	SLSH_EquirectLayer = 3,
	SLSH_MAX = 4
};

// Object: Enum Engine.EChunkSeekTableMode
enum class EChunkSeekTableMode : uint8_t
{
	ConstantSamplesPerEntry = 0,
	VariableSamplesPerEntry = 1,
	EChunkSeekTableMode_MAX = 2
};

// Object: Enum Engine.ESubtitleTiming
enum class ESubtitleTiming : uint8_t
{
	InternallyTimed = 0,
	ExternallyTimed = 1,
	ESubtitleTiming_MAX = 2
};

// Object: Enum Engine.ESRB
enum class ESRB : uint8_t
{
	Everyone = 0,
	Everyone10Plus = 1,
	Teen = 2,
	Mature = 3,
	AdultsOnly = 4,
	RatingPending = 5,
	RatingPending17Plus = 6,
	ESRB_MAX = 7
};

// Object: Enum Engine.ESubtitleType
enum class ESubtitleType : uint8_t
{
	Subtitle = 0,
	ClosedCaption = 1,
	AudioDescription = 2,
	ESubtitleType_MAX = 3
};

// Object: Enum Engine.ESubUVBoundingVertexCount
enum class ESubUVBoundingVertexCount : uint8_t
{
	BVC_FourVertices = 0,
	BVC_EightVertices = 1,
	BVC_MAX = 2
};

// Object: Enum Engine.EOpacitySourceMode
enum class EOpacitySourceMode : uint8_t
{
	OSM_Alpha = 0,
	OSM_ColorBrightness = 1,
	OSM_RedChannel = 2,
	OSM_GreenChannel = 3,
	OSM_BlueChannel = 4,
	OSM_MAX = 5
};

// Object: Enum Engine.ESyncPointEventType
enum class ESyncPointEventType : uint8_t
{
	Invalid = 0,
	SimpleEvent = 1,
	GameThreadTask = 2,
	GameThreadTask_HighPriority = 3,
	WorkerThreadTask = 4,
	WorkerThreadTask_HighPriority = 5,
	ESyncPointEventType_MAX = 6
};

// Object: Enum Engine.ESyncPointActivationRules
enum class ESyncPointActivationRules : uint8_t
{
	Invalid = 0,
	AlwaysActivate = 1,
	WaitForTrigger = 2,
	WaitForAllWork = 3,
	ActivateForAnyWork = 4,
	ESyncPointActivationRules_MAX = 5
};

// Object: Enum Engine.ETextImportTestFlags
enum class ETextImportTestFlags : uint8_t
{
	Default = 0,
	FlagA = 1,
	FlagB = 2,
	FlagC = 4,
	FlagD = 8,
	FlagE = 16,
	TestStructDefault = 32,
	ETextImportTestFlags_MAX = 64
};

// Object: Enum Engine.EHorizTextAligment
enum class EHorizTextAligment : uint8_t
{
	EHTA_Left = 0,
	EHTA_Center = 1,
	EHTA_Right = 2,
	EHTA_MAX = 3
};

// Object: Enum Engine.EVerticalTextAligment
enum class EVerticalTextAligment : uint8_t
{
	EVRTA_TextTop = 0,
	EVRTA_TextCenter = 1,
	EVRTA_TextBottom = 2,
	EVRTA_QuadTop = 3,
	EVRTA_MAX = 4
};

// Object: Enum Engine.TextureGroup
enum class ETextureGroup : uint8_t
{
	TEXTUREGROUP_World = 0,
	TEXTUREGROUP_WorldNormalMap = 1,
	TEXTUREGROUP_WorldSpecular = 2,
	TEXTUREGROUP_Character = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon = 6,
	TEXTUREGROUP_WeaponNormalMap = 7,
	TEXTUREGROUP_WeaponSpecular = 8,
	TEXTUREGROUP_Vehicle = 9,
	TEXTUREGROUP_VehicleNormalMap = 10,
	TEXTUREGROUP_VehicleSpecular = 11,
	TEXTUREGROUP_Cinematic = 12,
	TEXTUREGROUP_Effects = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox = 15,
	TEXTUREGROUP_UI = 16,
	TEXTUREGROUP_Lightmap = 17,
	TEXTUREGROUP_RenderTarget = 18,
	TEXTUREGROUP_MobileFlattened = 19,
	TEXTUREGROUP_ProcBuilding_Face = 20,
	TEXTUREGROUP_ProcBuilding_LightMap = 21,
	TEXTUREGROUP_Shadowmap = 22,
	TEXTUREGROUP_ColorLookupTable = 23,
	TEXTUREGROUP_Terrain_Heightmap = 24,
	TEXTUREGROUP_Terrain_Weightmap = 25,
	TEXTUREGROUP_Bokeh = 26,
	TEXTUREGROUP_IESLightProfile = 27,
	TEXTUREGROUP_Pixels2D = 28,
	TEXTUREGROUP_HierarchicalLOD = 29,
	TEXTUREGROUP_Impostor = 30,
	TEXTUREGROUP_ImpostorNormalDepth = 31,
	TEXTUREGROUP_8BitData = 32,
	TEXTUREGROUP_16BitData = 33,
	TEXTUREGROUP_Project01 = 34,
	TEXTUREGROUP_Project02 = 35,
	TEXTUREGROUP_Project03 = 36,
	TEXTUREGROUP_Project04 = 37,
	TEXTUREGROUP_Project05 = 38,
	TEXTUREGROUP_Project06 = 39,
	TEXTUREGROUP_Project07 = 40,
	TEXTUREGROUP_Project08 = 41,
	TEXTUREGROUP_Project09 = 42,
	TEXTUREGROUP_Project10 = 43,
	TEXTUREGROUP_Project11 = 44,
	TEXTUREGROUP_Project12 = 45,
	TEXTUREGROUP_Project13 = 46,
	TEXTUREGROUP_Project14 = 47,
	TEXTUREGROUP_Project15 = 48,
	TEXTUREGROUP_Project16 = 49,
	TEXTUREGROUP_Project17 = 50,
	TEXTUREGROUP_Project18 = 51,
	TEXTUREGROUP_Project19 = 52,
	TEXTUREGROUP_Project20 = 53,
	TEXTUREGROUP_Project21 = 54,
	TEXTUREGROUP_Project22 = 55,
	TEXTUREGROUP_Project23 = 56,
	TEXTUREGROUP_Project24 = 57,
	TEXTUREGROUP_Project25 = 58,
	TEXTUREGROUP_Project26 = 59,
	TEXTUREGROUP_Project27 = 60,
	TEXTUREGROUP_Project28 = 61,
	TEXTUREGROUP_Project29 = 62,
	TEXTUREGROUP_Project30 = 63,
	TEXTUREGROUP_Project31 = 64,
	TEXTUREGROUP_Project32 = 65,
	TEXTUREGROUP_MAX = 66
};

// Object: Enum Engine.TextureMipGenSettings
enum class ETextureMipGenSettings : uint8_t
{
	TMGS_FromTextureGroup = 0,
	TMGS_SimpleAverage = 1,
	TMGS_Sharpen0 = 2,
	TMGS_Sharpen1 = 3,
	TMGS_Sharpen2 = 4,
	TMGS_Sharpen3 = 5,
	TMGS_Sharpen4 = 6,
	TMGS_Sharpen5 = 7,
	TMGS_Sharpen6 = 8,
	TMGS_Sharpen7 = 9,
	TMGS_Sharpen8 = 10,
	TMGS_Sharpen9 = 11,
	TMGS_Sharpen10 = 12,
	TMGS_NoMipmaps = 13,
	TMGS_LeaveExistingMips = 14,
	TMGS_Blur1 = 15,
	TMGS_Blur2 = 16,
	TMGS_Blur3 = 17,
	TMGS_Blur4 = 18,
	TMGS_Blur5 = 19,
	TMGS_Unfiltered = 20,
	TMGS_Angular = 21,
	TMGS_MAX = 22
};

// Object: Enum Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8_t
{
	None = 0,
	PadToPowerOfTwo = 1,
	PadToSquarePowerOfTwo = 2,
	StretchToPowerOfTwo = 3,
	StretchToSquarePowerOfTwo = 4,
	ResizeToSpecificResolution = 5,
	ETexturePowerOfTwoSetting_MAX = 6
};

// Object: Enum Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8_t
{
	Point = 0,
	Bilinear = 1,
	Trilinear = 2,
	AnisotropicPoint = 3,
	AnisotropicLinear = 4,
	ETextureSamplerFilter_MAX = 5
};

// Object: Enum Engine.ETextureMipLoadOptions
enum class ETextureMipLoadOptions : uint8_t
{
	Default = 0,
	AllMips = 1,
	OnlyFirstMip = 2,
	ETextureMipLoadOptions_MAX = 3
};

// Object: Enum Engine.ETextureAvailability
enum class ETextureAvailability : uint8_t
{
	GPU = 0,
	CPU = 1,
	ETextureAvailability_MAX = 2
};

// Object: Enum Engine.ETextureDownscaleOptions
enum class ETextureDownscaleOptions : uint8_t
{
	Default = 0,
	Unfiltered = 1,
	SimpleAverage = 2,
	Sharpen0 = 3,
	Sharpen1 = 4,
	Sharpen2 = 5,
	Sharpen3 = 6,
	Sharpen4 = 7,
	Sharpen5 = 8,
	Sharpen6 = 9,
	Sharpen7 = 10,
	Sharpen8 = 11,
	Sharpen9 = 12,
	Sharpen10 = 13,
	ETextureDownscaleOptions_MAX = 14
};

// Object: Enum Engine.ETextureLossyCompressionAmount
enum class ETextureLossyCompressionAmount : uint8_t
{
	TLCA_Default = 0,
	TLCA_None = 1,
	TLCA_Lowest = 2,
	TLCA_Low = 3,
	TLCA_Medium = 4,
	TLCA_High = 5,
	TLCA_Highest = 6,
	TLCA_MAX = 7
};

// Object: Enum Engine.ETextureEncodeSpeed
enum class ETextureEncodeSpeed : uint8_t
{
	Final = 0,
	FinalIfAvailable = 1,
	Fast = 2,
	ETextureEncodeSpeed_MAX = 3
};

// Object: Enum Engine.ETextureClass
enum class ETextureClass : uint8_t
{
	Invalid = 0,
	TwoD = 1,
	Cube = 2,
	Array = 3,
	CubeArray = 4,
	Volume = 5,
	TwoDDynamic = 6,
	RenderTarget = 7,
	Other2DNoSource = 8,
	OtherUnknown = 9,
	ETextureClass_MAX = 10
};

// Object: Enum Engine.ECompositeTextureMode
enum class ECompositeTextureMode : uint8_t
{
	CTM_Disabled = 0,
	CTM_NormalRoughnessToRed = 1,
	CTM_NormalRoughnessToGreen = 2,
	CTM_NormalRoughnessToBlue = 3,
	CTM_NormalRoughnessToAlpha = 4,
	CTM_MAX = 5
};

// Object: Enum Engine.ETextureSourceCompressionFormat
enum class ETextureSourceCompressionFormat : uint8_t
{
	TSCF_None = 0,
	TSCF_PNG = 1,
	TSCF_JPEG = 2,
	TSCF_UEJPEG = 3,
	TSCF_UEDELTA = 4,
	TSCF_MAX = 5
};

// Object: Enum Engine.ETextureSourceFormat
enum class ETextureSourceFormat : uint8_t
{
	TSF_Invalid = 0,
	TSF_G8 = 1,
	TSF_BGRA8 = 2,
	TSF_BGRE8 = 3,
	TSF_RGBA16 = 4,
	TSF_RGBA16F = 5,
	TSF_RGBA8_DEPRECATED = 6,
	TSF_RGBE8_DEPRECATED = 7,
	TSF_G16 = 8,
	TSF_RGBA32F = 9,
	TSF_R16F = 10,
	TSF_R32F = 11,
	TSF_MAX = 12
};

// Object: Enum Engine.TextureCompressionSettings
enum class ETextureCompressionSettings : uint8_t
{
	TC_Default = 0,
	TC_Normalmap = 1,
	TC_Masks = 2,
	TC_Grayscale = 3,
	TC_Displacementmap = 4,
	TC_VectorDisplacementmap = 5,
	TC_HDR = 6,
	TC_EditorIcon = 7,
	TC_Alpha = 8,
	TC_DistanceFieldFont = 9,
	TC_HDR_Compressed = 10,
	TC_BC7 = 11,
	TC_HalfFloat = 12,
	TC_LQ = 13,
	TC_EncodedReflectionCapture = 14,
	TC_SingleFloat = 15,
	TC_HDR_F32 = 16,
	TC_MAX = 17
};

// Object: Enum Engine.ETextureSourceEncoding
enum class ETextureSourceEncoding : uint8_t
{
	TSE_None = 0,
	TSE_Linear = 1,
	TSE_sRGB = 2,
	TSE_ST2084 = 3,
	TSE_Gamma22 = 4,
	TSE_BT1886 = 5,
	TSE_Gamma26 = 6,
	TSE_Cineon = 7,
	TSE_REDLog = 8,
	TSE_REDLog3G10 = 9,
	TSE_SLog1 = 10,
	TSE_SLog2 = 11,
	TSE_SLog3 = 12,
	TSE_AlexaV3LogC = 13,
	TSE_CanonLog = 14,
	TSE_ProTune = 15,
	TSE_VLog = 16,
	TSE_MAX = 17
};

// Object: Enum Engine.ETextureColorSpace
enum class ETextureColorSpace : uint8_t
{
	TCS_None = 0,
	TCS_sRGB = 1,
	TCS_Rec2020 = 2,
	TCS_ACESAP0 = 3,
	TCS_ACESAP1 = 4,
	TCS_P3DCI = 5,
	TCS_P3D65 = 6,
	TCS_REDWideGamut = 7,
	TCS_SonySGamut3 = 8,
	TCS_SonySGamut3Cine = 9,
	TCS_AlexaWideGamut = 10,
	TCS_CanonCinemaGamut = 11,
	TCS_GoProProtuneNative = 12,
	TCS_PanasonicVGamut = 13,
	TCS_Custom = 99,
	TCS_MAX = 100
};

// Object: Enum Engine.TextureCookPlatformTilingSettings
enum class ETextureCookPlatformTilingSettings : uint8_t
{
	TCPTS_FromTextureGroup = 0,
	TCPTS_Tile = 1,
	TCPTS_DoNotTile = 2,
	TCPTS_MAX = 3
};

// Object: Enum Engine.ETextureChromaticAdaptationMethod
enum class ETextureChromaticAdaptationMethod : uint8_t
{
	TCAM_None = 0,
	TCAM_Bradford = 1,
	TCAM_CAT02 = 2,
	TCAM_MAX = 3
};

// Object: Enum Engine.TextureFilter
enum class ETextureFilter : uint8_t
{
	TF_Nearest = 0,
	TF_Bilinear = 1,
	TF_Trilinear = 2,
	TF_Default = 3,
	TF_MAX = 4
};

// Object: Enum Engine.TextureAddress
enum class ETextureAddress : uint8_t
{
	TA_Wrap = 0,
	TA_Clamp = 1,
	TA_Mirror = 2,
	TA_MAX = 3
};

// Object: Enum Engine.ETextureMipCount
enum class ETextureMipCount : uint8_t
{
	TMC_ResidentMips = 0,
	TMC_AllMips = 1,
	TMC_AllMipsBiased = 2,
	TMC_MAX = 3
};

// Object: Enum Engine.ETextureCompressionQuality
enum class ETextureCompressionQuality : uint8_t
{
	TCQ_Default = 0,
	TCQ_Lowest = 1,
	TCQ_Low = 2,
	TCQ_Medium = 3,
	TCQ_High = 4,
	TCQ_Highest = 5,
	TCQ_MAX = 6
};

// Object: Enum Engine.ETimelineLengthMode
enum class ETimelineLengthMode : uint8_t
{
	TL_TimelineLength = 0,
	TL_LastKeyFrame = 1,
	TL_MAX = 2
};

// Object: Enum Engine.ETimelineDirection
enum class ETimelineDirection : uint8_t
{
	Forward = 0,
	Backward = 1,
	ETimelineDirection_MAX = 2
};

// Object: Enum Engine.ETwitterRequestMethod
enum class ETwitterRequestMethod : uint8_t
{
	TRM_Get = 0,
	TRM_Post = 1,
	TRM_Delete = 2,
	TRM_MAX = 3
};

// Object: Enum Engine.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : uint8_t
{
	TID_AuthorizeComplete = 0,
	TID_TweetUIComplete = 1,
	TID_RequestComplete = 2,
	TID_MAX = 3
};

// Object: Enum Engine.EVectorFieldConstructionOp
enum class EVectorFieldConstructionOp : uint8_t
{
	VFCO_Extrude = 0,
	VFCO_Revolve = 1,
	VFCO_MAX = 2
};

// Object: Enum Engine.ESplitScreenType
enum class ESplitScreenType : uint8_t
{
	None = 0,
	TwoPlayer_Horizontal = 1,
	TwoPlayer_Vertical = 2,
	ThreePlayer_FavorTop = 3,
	ThreePlayer_FavorBottom = 4,
	ThreePlayer_Vertical = 5,
	ThreePlayer_Horizontal = 6,
	FourPlayer_Grid = 7,
	FourPlayer_Vertical = 8,
	FourPlayer_Horizontal = 9,
	SplitTypeCount = 10,
	ESplitScreenType_MAX = 11
};

// Object: Enum Engine.EWindSourceType
enum class EWindSourceType : uint8_t
{
	Directional = 0,
	Point = 1,
	EWindSourceType_MAX = 2
};

// Object: Enum Engine.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : uint8_t
{
	VIS_LeastAggressive = 0,
	VIS_ModeratelyAggressive = 1,
	VIS_MostAggressive = 2,
	VIS_Max = 3
};

// Object: Enum Engine.EVolumeLightingMethod
enum class EVolumeLightingMethod : uint8_t
{
	VLM_VolumetricLightmap = 0,
	VLM_SparseVolumeLightingSamples = 1,
	VLM_MAX = 2
};

// Object: Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV = 0,
	AspectRatio_MaintainXFOV = 1,
	AspectRatio_MajorAxisFOV = 2,
	AspectRatio_MAX = 3
};

// Object: Enum Engine.EOcclusionCombineMode
enum class EOcclusionCombineMode : uint8_t
{
	OCM_Minimum = 0,
	OCM_Multiply = 1,
	OCM_MAX = 2
};

// Object: Enum Engine.EBlendMode
enum class EBlendMode : uint8_t
{
	BLEND_Opaque = 0,
	BLEND_Masked = 1,
	BLEND_Translucent = 2,
	BLEND_Additive = 3,
	BLEND_Modulate = 4,
	BLEND_AlphaComposite = 5,
	BLEND_AlphaHoldout = 6,
	BLEND_TranslucentColoredTransmittance = 7,
	BLEND_MAX = 8,
	BLEND_TranslucentGreyTransmittance = 9,
	BLEND_ColoredTransmittanceOnly = 10
};

// Object: Enum Engine.EMaterialFloatPrecisionMode
enum class EMaterialFloatPrecisionMode : uint8_t
{
	MFPM_Default = 0,
	MFPM_Full_MaterialExpressionOnly = 1,
	MFPM_Full = 2,
	MFPM_Half = 3,
	MFPM_MAX = 4
};

// Object: Enum Engine.ESamplerSourceMode
enum class ESamplerSourceMode : uint8_t
{
	SSM_FromTextureAsset = 0,
	SSM_Wrap_WorldGroupSettings = 1,
	SSM_Clamp_WorldGroupSettings = 2,
	SSM_TerrainWeightmapGroupSettings = 3,
	SSM_MAX = 4
};

// Object: Enum Engine.ETextureMipValueMode
enum class ETextureMipValueMode : uint8_t
{
	TMVM_None = 0,
	TMVM_MipLevel = 1,
	TMVM_MipBias = 2,
	TMVM_Derivative = 3,
	TMVM_MAX = 4
};

// Object: Enum Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8_t
{
	TLM_VolumetricNonDirectional = 0,
	TLM_VolumetricDirectional = 1,
	TLM_VolumetricPerVertexNonDirectional = 2,
	TLM_VolumetricPerVertexDirectional = 3,
	TLM_Surface = 4,
	TLM_SurfacePerPixelLighting = 5,
	TLM_MAX = 6
};

// Object: Enum Engine.ERefractionMode
enum class ERefractionMode : uint8_t
{
	RM_IndexOfRefraction = 0,
	RM_PixelNormalOffset = 1,
	RM_2DOffset = 2,
	RM_None = 3,
	RM_MAX = 4
};

// Object: Enum Engine.ERefractionCoverageMode
enum class ERefractionCoverageMode : uint8_t
{
	RCM_CoverageIgnored = 0,
	RCM_CoverageAccountedFor = 1,
	RCM_MAX = 2
};

// Object: Enum Engine.EPixelDepthOffsetMode
enum class EPixelDepthOffsetMode : uint8_t
{
	PDOM_Legacy = 0,
	PDOM_AlongCameraVector = 1,
	PDOM_MAX = 2
};

// Object: Enum Engine.ETranslucentSortPolicy
enum class ETranslucentSortPolicy : uint8_t
{
	SortByDistance = 0,
	SortByProjectedZ = 1,
	SortAlongAxis = 2,
	ETranslucentSortPolicy_MAX = 3
};

// Object: Enum Engine.EDynamicGlobalIlluminationMethod
enum class EDynamicGlobalIlluminationMethod : uint8_t
{
	None = 0,
	Lumen = 1,
	ScreenSpace = 2,
	Plugin = 3,
	EDynamicGlobalIlluminationMethod_MAX = 4
};

// Object: Enum Engine.EReflectionMethod
enum class EReflectionMethod : uint8_t
{
	None = 0,
	Lumen = 1,
	ScreenSpace = 2,
	EReflectionMethod_MAX = 3
};

// Object: Enum Engine.EShadowMapMethod
enum class EShadowMapMethod : uint8_t
{
	ShadowMaps = 0,
	VirtualShadowMaps = 1,
	EShadowMapMethod_MAX = 2
};

// Object: Enum Engine.ECastRayTracedShadow
enum class ECastRayTracedShadow : uint8_t
{
	Disabled = 0,
	UseProjectSetting = 1,
	Enabled = 2,
	ECastRayTracedShadow_MAX = 3
};

// Object: Enum Engine.EMegaLightsShadowMethod
enum class EMegaLightsShadowMethod : uint8_t
{
	Default = 0,
	RayTracing = 1,
	VirtualShadowMap = 2,
	EMegaLightsShadowMethod_MAX = 3
};

// Object: Enum Engine.ESceneCaptureSource
enum class ESceneCaptureSource : uint8_t
{
	SCS_SceneColorHDR = 0,
	SCS_SceneColorHDRNoAlpha = 1,
	SCS_FinalColorLDR = 2,
	SCS_SceneColorSceneDepth = 3,
	SCS_SceneDepth = 4,
	SCS_DeviceDepth = 5,
	SCS_Normal = 6,
	SCS_BaseColor = 7,
	SCS_FinalColorHDR = 8,
	SCS_FinalToneCurveHDR = 9,
	SCS_MAX = 10
};

// Object: Enum Engine.ESceneCaptureCompositeMode
enum class ESceneCaptureCompositeMode : uint8_t
{
	SCCM_Overwrite = 0,
	SCCM_Additive = 1,
	SCCM_Composite = 2,
	SCCM_MAX = 3
};

// Object: Enum Engine.EGBufferFormat
enum class EGBufferFormat : uint8_t
{
	Force8BitsPerChannel = 0,
	Default = 1,
	HighPrecisionNormals = 3,
	Force16BitsPerChannel = 5,
	EGBufferFormat_MAX = 6
};

// Object: Enum Engine.EMobileLocalLightSetting
enum class EMobileLocalLightSetting : uint8_t
{
	LOCAL_LIGHTS_DISABLED = 0,
	LOCAL_LIGHTS_ENABLED = 1,
	LOCAL_LIGHTS_BUFFER = 2,
	LOCAL_LIGHTS_MAX = 3
};

// Object: Enum Engine.ETrailWidthMode
enum class ETrailWidthMode : uint8_t
{
	ETrailWidthMode_FromCentre = 0,
	ETrailWidthMode_FromFirst = 1,
	ETrailWidthMode_FromSecond = 2,
	ETrailWidthMode_MAX = 3
};

// Object: Enum Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8_t
{
	SceneDepth = 0,
	DistanceField = 1,
	EParticleCollisionMode_MAX = 2
};

// Object: Enum Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8_t
{
	MSM_Unlit = 0,
	MSM_DefaultLit = 1,
	MSM_Subsurface = 2,
	MSM_PreintegratedSkin = 3,
	MSM_ClearCoat = 4,
	MSM_SubsurfaceProfile = 5,
	MSM_TwoSidedFoliage = 6,
	MSM_Hair = 7,
	MSM_Cloth = 8,
	MSM_Eye = 9,
	MSM_SingleLayerWater = 10,
	MSM_ThinTranslucent = 11,
	MSM_Strata = 12,
	MSM_NUM = 13,
	MSM_FromMaterialExpression = 14,
	MSM_MAX = 15
};

// Object: Enum Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8_t
{
	SAMPLERTYPE_Color = 0,
	SAMPLERTYPE_Grayscale = 1,
	SAMPLERTYPE_Alpha = 2,
	SAMPLERTYPE_Normal = 3,
	SAMPLERTYPE_Masks = 4,
	SAMPLERTYPE_DistanceFieldFont = 5,
	SAMPLERTYPE_LinearColor = 6,
	SAMPLERTYPE_LinearGrayscale = 7,
	SAMPLERTYPE_Data = 8,
	SAMPLERTYPE_External = 9,
	SAMPLERTYPE_VirtualColor = 10,
	SAMPLERTYPE_VirtualGrayscale = 11,
	SAMPLERTYPE_VirtualAlpha = 12,
	SAMPLERTYPE_VirtualNormal = 13,
	SAMPLERTYPE_VirtualMasks = 14,
	SAMPLERTYPE_VirtualLinearColor = 15,
	SAMPLERTYPE_VirtualLinearGrayscale = 16,
	SAMPLERTYPE_MAX = 17
};

// Object: Enum Engine.EMaterialStencilCompare
enum class EMaterialStencilCompare : uint8_t
{
	MSC_Less = 0,
	MSC_LessEqual = 1,
	MSC_Greater = 2,
	MSC_GreaterEqual = 3,
	MSC_Equal = 4,
	MSC_NotEqual = 5,
	MSC_Never = 6,
	MSC_Always = 7,
	MSC_Count = 8,
	MSC_MAX = 9
};

// Object: Enum Engine.EMaterialShadingRate
enum class EMaterialShadingRate : uint8_t
{
	MSR_1x1 = 0,
	MSR_2x1 = 1,
	MSR_1x2 = 2,
	MSR_2x2 = 3,
	MSR_4x2 = 4,
	MSR_2x4 = 5,
	MSR_4x4 = 6,
	MSR_Count = 7,
	MSR_MAX = 8
};

// Object: Enum Engine.ELightingBuildQuality
enum class ELightingBuildQuality : uint8_t
{
	Quality_Preview = 0,
	Quality_Medium = 1,
	Quality_High = 2,
	Quality_Production = 3,
	Quality_MAX = 4
};

// Object: Enum Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8_t
{
	Disabled = 0,
	Linear = 1,
	Exponential = 2,
	ENetworkSmoothingMode_MAX = 3
};

// Object: Enum Engine.EOverlapFilterOption
enum class EOverlapFilterOption : uint8_t
{
	OverlapFilter_All = 0,
	OverlapFilter_DynamicOnly = 1,
	OverlapFilter_StaticOnly = 2,
	OverlapFilter_MAX = 3
};

// Object: Enum Engine.EFilterInterpolationType
enum class EFilterInterpolationType : uint8_t
{
	BSIT_Average = 0,
	BSIT_Linear = 1,
	BSIT_Cubic = 2,
	BSIT_EaseInOut = 3,
	BSIT_ExponentialDecay = 4,
	BSIT_SpringDamper = 5,
	BSIT_MAX = 6
};

// Object: Enum Engine.ETimelineSigType
enum class ETimelineSigType : uint8_t
{
	ETS_EventSignature = 0,
	ETS_FloatSignature = 1,
	ETS_VectorSignature = 2,
	ETS_LinearColorSignature = 3,
	ETS_InvalidSignature = 4,
	ETS_MAX = 5
};

// Object: Enum Engine.ELightMapPaddingType
enum class ELightMapPaddingType : uint8_t
{
	LMPT_NormalPadding = 0,
	LMPT_PrePadding = 1,
	LMPT_NoPadding = 2,
	LMPT_MAX = 3
};

// Object: Enum Engine.EShadowMapFlags
enum class EShadowMapFlags : uint8_t
{
	SMF_None = 0,
	SMF_Streamed = 1,
	SMF_MAX = 2
};

// Object: Enum Engine.EUpdateRateShiftBucket
enum class EUpdateRateShiftBucket : uint8_t
{
	ShiftBucket0 = 0,
	ShiftBucket1 = 1,
	ShiftBucket2 = 2,
	ShiftBucket3 = 3,
	ShiftBucket4 = 4,
	ShiftBucket5 = 5,
	ShiftBucketMax = 6,
	EUpdateRateShiftBucket_MAX = 7
};

// Object: Enum Engine.ENaniteGenerateFallback
enum class ENaniteGenerateFallback : uint8_t
{
	PlatformDefault = 0,
	Enabled = 1,
	ENaniteGenerateFallback_MAX = 2
};

// Object: Enum Engine.ENaniteFallbackTarget
enum class ENaniteFallbackTarget : uint8_t
{
	Auto = 0,
	PercentTriangles = 1,
	RelativeError = 2,
	ENaniteFallbackTarget_MAX = 3
};

// Object: Enum Engine.ENetRole
enum class ENetRole : uint8_t
{
	ROLE_None = 0,
	ROLE_SimulatedProxy = 1,
	ROLE_AutonomousProxy = 2,
	ROLE_Authority = 3,
	ROLE_MAX = 4
};

// Object: Enum Engine.ENetDormancy
enum class ENetDormancy : uint8_t
{
	DORM_Never = 0,
	DORM_Awake = 1,
	DORM_DormantAll = 2,
	DORM_DormantPartial = 3,
	DORM_Initial = 4,
	DORM_MAX = 5
};

// Object: Enum Engine.EPhysicsReplicationMode
enum class EPhysicsReplicationMode : uint8_t
{
	Default = 0,
	PredictiveInterpolation = 1,
	Resimulation = 2,
	EPhysicsReplicationMode_MAX = 3
};

// Object: Enum Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8_t
{
	Disabled = 0,
	Player0 = 1,
	Player1 = 2,
	Player2 = 3,
	Player3 = 4,
	Player4 = 5,
	Player5 = 6,
	Player6 = 7,
	Player7 = 8,
	EAutoReceiveInput_MAX = 9
};

// Object: Enum Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8_t
{
	Disabled = 0,
	PlacedInWorld = 1,
	Spawned = 2,
	PlacedInWorldOrSpawned = 3,
	EAutoPossessAI_MAX = 4
};

// Object: Enum Engine.EPhysicalMaterialMaskColor
enum class EPhysicalMaterialMaskColor : uint8_t
{
	Red = 0,
	Green = 1,
	Blue = 2,
	Cyan = 3,
	Magenta = 4,
	Yellow = 5,
	White = 6,
	Black = 7,
	MAX = 8
};

// Object: Enum Engine.EComponentSocketType
enum class EComponentSocketType : uint8_t
{
	Invalid = 0,
	Bone = 1,
	Socket = 2,
	EComponentSocketType_MAX = 3
};

// Object: Enum Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8_t
{
	Undefined = 0,
	AlwaysSpawn = 1,
	AdjustIfPossibleButAlwaysSpawn = 2,
	AdjustIfPossibleButDontSpawnIfColliding = 3,
	DontSpawnIfColliding = 4,
	ESpawnActorCollisionHandlingMethod_MAX = 5
};

// Object: Enum Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8_t
{
	Default = 0,
	ForceCPUAndGPU = 1,
	EMeshBufferAccess_MAX = 2
};

// Object: Enum Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8_t
{
	DOFM_BokehDOF = 0,
	DOFM_Gaussian = 1,
	DOFM_CircleDOF = 2,
	DOFM_MAX = 3
};

// Object: Enum Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8_t
{
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3
};

// Object: Enum Engine.ELocalExposureMethod
enum class ELocalExposureMethod : uint8_t
{
	Bilateral = 0,
	Fusion = 1,
	ELocalExposureMethod_MAX = 2
};

// Object: Enum Engine.EBloomMethod
enum class EBloomMethod : uint8_t
{
	BM_SOG = 0,
	BM_FFT = 1,
	BM_MAX = 2
};

// Object: Enum Engine.ETemperatureMethod
enum class ETemperatureMethod : uint8_t
{
	TEMP_WhiteBalance = 0,
	TEMP_ColorTemperature = 1,
	TEMP_MAX = 2
};

// Object: Enum Engine.ELightUnits
enum class ELightUnits : uint8_t
{
	Unitless = 0,
	Candelas = 1,
	Lumens = 2,
	EV = 3,
	Nits = 4,
	ELightUnits_MAX = 5
};

// Object: Enum Engine.EReflectionsType
enum class EReflectionsType : uint8_t
{
	ScreenSpace = 0,
	RayTracing = 1,
	EReflectionsType_MAX = 2
};

// Object: Enum Engine.ELumenRayLightingModeOverride
enum class ELumenRayLightingModeOverride : uint8_t
{
	Default = 0,
	SurfaceCache = 1,
	HitLightingForReflections = 2,
	HitLighting = 3,
	ELumenRayLightingModeOverride_MAX = 4
};

// Object: Enum Engine.ETranslucencyType
enum class ETranslucencyType : uint8_t
{
	Raster = 0,
	RayTraced_Deprecated = 1,
	RayTracing = 2,
	RayTraced = 3,
	ETranslucencyType_MAX = 4
};

// Object: Enum Engine.EReflectedAndRefractedRayTracedShadows
enum class EReflectedAndRefractedRayTracedShadows : uint8_t
{
	Disabled = 0,
	Hard_shadows = 1,
	Area_shadows = 2,
	EReflectedAndRefractedRayTracedShadows_MAX = 3
};

// Object: Enum Engine.EQuartzTimeSignatureQuantization
enum class EQuartzTimeSignatureQuantization : uint8_t
{
	HalfNote = 0,
	QuarterNote = 1,
	EighthNote = 2,
	SixteenthNote = 3,
	ThirtySecondNote = 4,
	Count = 5,
	EQuartzTimeSignatureQuantization_MAX = 6
};

// Object: Enum Engine.EQuartzDelegateType
enum class EQuartzDelegateType : uint8_t
{
	MetronomeTick = 0,
	CommandEvent = 1,
	Count = 2,
	EQuartzDelegateType_MAX = 3
};

// Object: Enum Engine.EQuarztQuantizationReference
enum class EQuarztQuantizationReference : uint8_t
{
	BarRelative = 0,
	TransportRelative = 1,
	CurrentTimeRelative = 2,
	Count = 3,
	EQuarztQuantizationReference_MAX = 4
};

// Object: Enum Engine.EQuartzCommandType
enum class EQuartzCommandType : uint8_t
{
	PlaySound = 0,
	QueueSoundToPlay = 1,
	RetriggerSound = 2,
	TickRateChange = 3,
	TransportReset = 4,
	StartOtherClock = 5,
	Notify = 6,
	Custom = 7,
	EQuartzCommandType_MAX = 8
};

// Object: Enum Engine.EActorUpdateOverlapsMethod
enum class EActorUpdateOverlapsMethod : uint8_t
{
	UseConfigDefault = 0,
	AlwaysUpdate = 1,
	OnlyUpdateMovable = 2,
	NeverUpdate = 3,
	EActorUpdateOverlapsMethod_MAX = 4
};

// Object: Enum Engine.ESpawnActorScaleMethod
enum class ESpawnActorScaleMethod : uint8_t
{
	OverrideRootScale = 0,
	MultiplyWithRoot = 1,
	SelectDefaultAtRuntime = 2,
	ESpawnActorScaleMethod_MAX = 3
};

// Object: Enum Engine.ELevelInstanceType
enum class ELevelInstanceType : uint8_t
{
	None = 0,
	LevelInstance = 1,
	LevelInstanceEdit = 2,
	LevelInstancePropertyOverride = 3,
	ELevelInstanceType_MAX = 4
};

// Object: Enum Engine.ELevelInstanceFlags
enum class ELevelInstanceFlags : uint8_t
{
	None = 0,
	IsInEditHierarchy = 1,
	HasPropertyOverrides = 2,
	HasEditablePropertyOverrides = 4,
	ELevelInstanceFlags_MAX = 5
};

// Object: Enum Engine.FNavigationSystemRunMode
enum class EFNavigationSystemRunMode : uint8_t
{
	InvalidMode = 0,
	GameMode = 1,
	EditorMode = 2,
	SimulationMode = 3,
	PIEMode = 4,
	InferFromWorldMode = 5,
	EditorWorldPartitionBuildMode = 6,
	FNavigationSystemRunMode_MAX = 7
};

// Object: Enum Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8_t
{
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3
};

// Object: Enum Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8_t
{
	Invalid = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringModeConfig_MAX = 3
};

// Object: Enum Engine.ENavigationSortPendingTilesMethod
enum class ENavigationSortPendingTilesMethod : uint8_t
{
	SortWithSeedLocations = 0,
	SortByPriority = 1,
	None = 2,
	ENavigationSortPendingTilesMethod_MAX = 3
};

// Object: Enum Engine.ENavPathEvent
enum class ENavPathEvent : uint8_t
{
	Cleared = 0,
	NewPath = 1,
	UpdatedDueToGoalMoved = 2,
	UpdatedDueToNavigationChanged = 3,
	Invalidated = 4,
	RePathFailed = 5,
	MetaPathUpdate = 6,
	Custom = 7,
	ENavPathEvent_MAX = 8
};

// Object: Enum Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8_t
{
	Invalid = 0,
	Error = 1,
	Fail = 2,
	Success = 3,
	ENavigationQueryResult_MAX = 4
};

// Object: Enum Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8_t
{
	Linear = 0,
	Cubic = 1,
	HermiteCubic = 2,
	Sinusoidal = 3,
	QuadraticInOut = 4,
	CubicInOut = 5,
	QuarticInOut = 6,
	QuinticInOut = 7,
	CircularIn = 8,
	CircularOut = 9,
	CircularInOut = 10,
	ExpIn = 11,
	ExpOut = 12,
	ExpInOut = 13,
	Custom = 14,
	EAlphaBlendOption_MAX = 15
};

// Object: Enum Engine.EAnimGroupRole
enum class EAnimGroupRole : uint8_t
{
	CanBeLeader = 0,
	AlwaysFollower = 1,
	AlwaysLeader = 2,
	TransitionLeader = 3,
	TransitionFollower = 4,
	ExclusiveAlwaysLeader = 5,
	EAnimGroupRole_MAX = 6
};

// Object: Enum Engine.EAnimSyncGroupScope
enum class EAnimSyncGroupScope : uint8_t
{
	Local = 0,
	Component = 1,
	EAnimSyncGroupScope_MAX = 2
};

// Object: Enum Engine.EAnimSyncMethod
enum class EAnimSyncMethod : uint8_t
{
	DoNotSync = 0,
	SyncGroup = 1,
	Graph = 2,
	EAnimSyncMethod_MAX = 3
};

// Object: Enum Engine.EAnimExecutionContextConversionResult
enum class EAnimExecutionContextConversionResult : uint8_t
{
	Succeeded = 0,
	Failed = 1,
	EAnimExecutionContextConversionResult_MAX = 2
};

// Object: Enum Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8_t
{
	MontageLength = 0,
	Duration = 1,
	EMontagePlayReturnType_MAX = 2
};

// Object: Enum Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8_t
{
	DirectionalArrow = 0,
	Sphere = 1,
	Line = 2,
	OnScreenMessage = 3,
	CoordinateSystem = 4,
	Point = 5,
	Circle = 6,
	Cone = 7,
	InWorldMessage = 8,
	Capsule = 9,
	EDrawDebugItemType_MAX = 10
};

// Object: Enum Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8_t
{
	Absolute = 0,
	Relative = 1,
	Proportional = 2,
	EAnimLinkMethod_MAX = 3
};

// Object: Enum Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8_t
{
	Begin = 0,
	End = 1,
	EAnimNotifyEventType_MAX = 2
};

// Object: Enum Engine.EMontageBlendMode
enum class EMontageBlendMode : uint8_t
{
	Standard = 0,
	Inertialization = 1,
	EMontageBlendMode_MAX = 2
};

// Object: Enum Engine.EMontageSubStepResult
enum class EMontageSubStepResult : uint8_t
{
	Moved = 0,
	NotMoved = 1,
	InvalidSection = 2,
	InvalidMontage = 3,
	EMontageSubStepResult_MAX = 4
};

// Object: Enum Engine.EPinHidingMode
enum class EPinHidingMode : uint8_t
{
	NeverAsPin = 0,
	PinHiddenByDefault = 1,
	PinShownByDefault = 2,
	AlwaysAsPin = 3,
	EPinHidingMode_MAX = 4
};

// Object: Enum Engine.EAnimNodeDataFlags
enum class EAnimNodeDataFlags : uint8_t
{
	None = 0,
	HasInitialUpdateFunction = 1,
	HasBecomeRelevantFunction = 2,
	HasUpdateFunction = 4,
	AllFunctions = 7,
	EAnimNodeDataFlags_MAX = 8
};

// Object: Enum Engine.EAnimNodeReferenceConversionResult
enum class EAnimNodeReferenceConversionResult : uint8_t
{
	Succeeded = 0,
	Failed = 1,
	EAnimNodeReferenceConversionResult_MAX = 2
};

// Object: Enum Engine.EInertializationState
enum class EInertializationState : uint8_t
{
	Inactive = 0,
	Pending = 1,
	Active = 2,
	EInertializationState_MAX = 3
};

// Object: Enum Engine.EInertializationBoneState
enum class EInertializationBoneState : uint8_t
{
	Invalid = 0,
	Valid = 1,
	Excluded = 2,
	EInertializationBoneState_MAX = 3
};

// Object: Enum Engine.EInertializationSpace
enum class EInertializationSpace : uint8_t
{
	Default = 0,
	WorldSpace = 1,
	WorldRotation = 2,
	EInertializationSpace_MAX = 3
};

// Object: Enum Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : uint8_t
{
	EDS_SourcePose = 0,
	EDS_DestinationPose = 1,
	EDS_MAX = 2
};

// Object: Enum Engine.EEvaluatorMode
enum class EEvaluatorMode : uint8_t
{
	EM_Standard = 0,
	EM_Freeze = 1,
	EM_DelayedFreeze = 2,
	EM_MAX = 3
};

// Object: Enum Engine.EStripAnimDataOnDedicatedServerSettings
enum class EStripAnimDataOnDedicatedServerSettings : uint8_t
{
	UseProjectSetting = 0,
	StripAnimDataOnDedicatedServer = 1,
	DoNotStripAnimDataOnDedicatedServer = 2,
	EStripAnimDataOnDedicatedServerSettings_MAX = 3
};

// Object: Enum Engine.ETransitionRequestQueueMode
enum class ETransitionRequestQueueMode : uint8_t
{
	Shared = 0,
	Unique = 1,
	ETransitionRequestQueueMode_MAX = 2
};

// Object: Enum Engine.ETransitionRequestOverwriteMode
enum class ETransitionRequestOverwriteMode : uint8_t
{
	Append = 0,
	Ignore = 1,
	Overwrite = 2,
	ETransitionRequestOverwriteMode_MAX = 3
};

// Object: Enum Engine.ETransitionBlendMode
enum class ETransitionBlendMode : uint8_t
{
	TBM_Linear = 0,
	TBM_Cubic = 1,
	TBM_MAX = 2
};

// Object: Enum Engine.ETransitionLogicType
enum class ETransitionLogicType : uint8_t
{
	TLT_StandardBlend = 0,
	TLT_Inertialization = 1,
	TLT_Custom = 2,
	TLT_MAX = 3
};

// Object: Enum Engine.EAnimPropertyAccessCallSite
enum class EAnimPropertyAccessCallSite : uint8_t
{
	WorkerThread_Unbatched = 0,
	WorkerThread_Batched_PreEventGraph = 1,
	WorkerThread_Batched_PostEventGraph = 2,
	GameThread_Batched_PreEventGraph = 3,
	GameThread_Batched_PostEventGraph = 4,
	EAnimPropertyAccessCallSite_MAX = 5
};

// Object: Enum Engine.EBlendProfileMode
enum class EBlendProfileMode : uint8_t
{
	TimeFactor = 0,
	WeightFactor = 1,
	BlendMask = 2,
	EBlendProfileMode_MAX = 3
};

// Object: Enum Engine.ETransformCurveChannel
enum class ETransformCurveChannel : uint8_t
{
	Position = 0,
	Rotation = 1,
	Scale = 2,
	Invalid = 3,
	ETransformCurveChannel_MAX = 4
};

// Object: Enum Engine.EVectorCurveChannel
enum class EVectorCurveChannel : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	Invalid = 3,
	EVectorCurveChannel_MAX = 4
};

// Object: Enum Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8_t
{
	None = 0,
	LogicalNegateBool = 1,
	EPostCopyOperation_MAX = 2
};

// Object: Enum Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : uint8_t
{
	Float = 0,
	Bool = 1,
	Curve = 2,
	EAnimAlphaInputType_MAX = 3
};

// Object: Enum Engine.EMirrorRowType
enum class EMirrorRowType : uint8_t
{
	Bone = 0,
	AnimationNotify = 1,
	Curve = 2,
	SyncMarker = 3,
	Custom = 4,
	EMirrorRowType_MAX = 5
};

// Object: Enum Engine.EMirrorFindReplaceMethod
enum class EMirrorFindReplaceMethod : uint8_t
{
	Prefix = 0,
	Suffix = 1,
	RegularExpression = 2,
	EMirrorFindReplaceMethod_MAX = 3
};

// Object: Enum Engine.ESkeletalMeshVertexAttributeDataType
enum class ESkeletalMeshVertexAttributeDataType : uint8_t
{
	Float = 0,
	HalfFloat = 1,
	NUInt8 = 2,
	ESkeletalMeshVertexAttributeDataType_MAX = 3
};

// Object: Enum Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8_t
{
	Animation = 0,
	Skeleton = 1,
	AnimationScaled = 2,
	AnimationRelative = 3,
	OrientAndScale = 4,
	EBoneTranslationRetargetingMode_MAX = 5
};

// Object: Enum Engine.ETimeStretchCurveMapping
enum class ETimeStretchCurveMapping : uint8_t
{
	T_Original = 0,
	T_TargetMin = 1,
	T_TargetMax = 2,
	MAX = 3
};

// Object: Enum Engine.EPreviewAnimationBlueprintApplicationMethod
enum class EPreviewAnimationBlueprintApplicationMethod : uint8_t
{
	LinkedLayers = 0,
	LinkedAnimGraph = 1,
	EPreviewAnimationBlueprintApplicationMethod_MAX = 2
};

// Object: Enum Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : uint8_t
{
	Unknown = 0,
	NeverCook = 1,
	ProductionNeverCook = 2,
	DevelopmentCook = 3,
	DevelopmentAlwaysProductionNeverCook = 4,
	DevelopmentAlwaysCook = 5,
	DevelopmentAlwaysProductionUnknownCook = 6,
	AlwaysCook = 7,
	EPrimaryAssetCookRule_MAX = 8
};

// Object: Enum Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8_t
{
	Linear = 0,
	Logarithmic = 1,
	Inverse = 2,
	LogReverse = 3,
	NaturalSound = 4,
	Custom = 5,
	EAttenuationDistanceModel_MAX = 6
};

// Object: Enum Engine.EAttenuationShape
enum class EAttenuationShape : uint8_t
{
	Sphere = 0,
	Capsule = 1,
	Box = 2,
	Cone = 3,
	EAttenuationShape_MAX = 4
};

// Object: Enum Engine.ENaturalSoundFalloffMode
enum class ENaturalSoundFalloffMode : uint8_t
{
	Continues = 0,
	Silent = 1,
	Hold = 2,
	ENaturalSoundFalloffMode_MAX = 3
};

// Object: Enum Engine.EAudioBusChannels
enum class EAudioBusChannels : uint8_t
{
	Mono = 0,
	Stereo = 1,
	Quad = 3,
	FivePointOne = 5,
	SevenPointOne = 7,
	MaxChannelCount = 8,
	EAudioBusChannels_MAX = 9
};

// Object: Enum Engine.EVoiceSampleRate
enum class EVoiceSampleRate : uint16_t
{
	Low16000Hz = 16000,
	Normal24000Hz = 24000,
	EVoiceSampleRate_MAX = 24001
};

// Object: Enum Engine.EPanningMethod
enum class EPanningMethod : uint8_t
{
	Linear = 0,
	EqualPower = 1,
	EPanningMethod_MAX = 2
};

// Object: Enum Engine.EMonoChannelUpmixMethod
enum class EMonoChannelUpmixMethod : uint8_t
{
	Linear = 0,
	EqualPower = 1,
	FullVolume = 2,
	EMonoChannelUpmixMethod_MAX = 3
};

// Object: Enum Engine.EDefaultAudioCompressionType
enum class EDefaultAudioCompressionType : uint8_t
{
	BinkAudio = 0,
	ADPCM = 1,
	PCM = 2,
	Opus = 3,
	PlatformSpecific = 4,
	RADAudio = 5,
	EDefaultAudioCompressionType_MAX = 6
};

// Object: Enum Engine.EAudioVolumeLocationState
enum class EAudioVolumeLocationState : uint8_t
{
	InsideTheVolume = 0,
	OutsideTheVolume = 1,
	EAudioVolumeLocationState_MAX = 2
};

// Object: Enum Engine.EStructUtilsResult
enum class EStructUtilsResult : uint8_t
{
	Valid = 0,
	NotValid = 1,
	EStructUtilsResult_MAX = 2
};

// Object: Enum Engine.EInterfaceValidResult
enum class EInterfaceValidResult : uint8_t
{
	Valid = 0,
	Invalid = 1,
	EInterfaceValidResult_MAX = 2
};

// Object: Enum Engine.ECameraShakePatternUpdateResultFlags
enum class ECameraShakePatternUpdateResultFlags : uint8_t
{
	ApplyAsAbsolute = 0,
	SkipAutoScale = 1,
	SkipAutoPlaySpace = 2,
	Default = 3,
	ECameraShakePatternUpdateResultFlags_MAX = 4
};

// Object: Enum Engine.ECameraShakeDurationType
enum class ECameraShakeDurationType : uint8_t
{
	Fixed = 0,
	Infinite = 1,
	Custom = 2,
	ECameraShakeDurationType_MAX = 3
};

// Object: Enum Engine.ECameraShakeAttenuation
enum class ECameraShakeAttenuation : uint8_t
{
	Linear = 0,
	Quadratic = 1,
	ECameraShakeAttenuation_MAX = 2
};

// Object: Enum Engine.ECameraAlphaBlendMode
enum class ECameraAlphaBlendMode : uint8_t
{
	CABM_Linear = 0,
	CABM_Cubic = 1,
	CABM_MAX = 2
};

// Object: Enum Engine.EAudioFaderCurve
enum class EAudioFaderCurve : uint8_t
{
	Linear = 0,
	Logarithmic = 1,
	SCurve = 2,
	Sin = 3,
	Count = 4,
	EAudioFaderCurve_MAX = 5
};

// Object: Enum Engine.EControllerAnalogStick
enum class EControllerAnalogStick : uint8_t
{
	CAS_LeftStick = 0,
	CAS_RightStick = 1,
	CAS_MAX = 2
};

// Object: Enum Engine.ESyncOption
enum class ESyncOption : uint8_t
{
	Drive = 0,
	Passive = 1,
	Disabled = 2,
	ESyncOption_MAX = 3
};

// Object: Enum Engine.EPhysicsStateAction
enum class EPhysicsStateAction : uint8_t
{
	AddForce = 0,
	AddTorque = 1,
	AddForceAtPosition = 2,
	AddLinearVelocity = 3,
	AddAngularVelocity = 4,
	AddVelocityAtPosition = 5,
	AddLinearImpulse = 6,
	AddAngularImpulse = 7,
	AddImpulseAtPosition = 8,
	AddAcceleration = 9,
	NumActions = 10,
	EPhysicsStateAction_MAX = 11
};

// Object: Enum Engine.EReflectionSourceType
enum class EReflectionSourceType : uint8_t
{
	CapturedScene = 0,
	SpecifiedCubemap = 1,
	EReflectionSourceType_MAX = 2
};

// Object: Enum Engine.ERuntimeVirtualTextureMaterialQuality
enum class ERuntimeVirtualTextureMaterialQuality : uint8_t
{
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	ERuntimeVirtualTextureMaterialQuality_MAX = 4
};

// Object: Enum Engine.ERuntimeVirtualTextureUseStreamingMipsInEditorMode
enum class ERuntimeVirtualTextureUseStreamingMipsInEditorMode : uint8_t
{
	Never = 0,
	PIEOnly = 1,
	Always = 2,
	ERuntimeVirtualTextureUseStreamingMipsInEditorMode_MAX = 3
};

// Object: Enum Engine.ESceneCapturePrimitiveRenderMode
enum class ESceneCapturePrimitiveRenderMode : uint8_t
{
	PRM_LegacySceneCapture = 0,
	PRM_RenderScenePrimitives = 1,
	PRM_UseShowOnlyList = 2,
	PRM_MAX = 3
};

// Object: Enum Engine.ECustomBoneAttributeLookup
enum class ECustomBoneAttributeLookup : uint8_t
{
	BoneOnly = 0,
	ImmediateParent = 1,
	ParentHierarchy = 2,
	ECustomBoneAttributeLookup_MAX = 3
};

// Object: Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8_t
{
	SkipSimulatingBones = 0,
	SkipAllBones = 1,
	EKinematicBonesUpdateToPhysics_MAX = 2
};

// Object: Enum Engine.EAnimationMode
enum class EAnimationMode : uint8_t
{
	AnimationBlueprint = 0,
	AnimationSingleNode = 1,
	AnimationCustomMode = 2,
	EAnimationMode_MAX = 3
};

// Object: Enum Engine.EPhysicsTransformUpdateMode
enum class EPhysicsTransformUpdateMode : uint8_t
{
	SimulationUpatesComponentTransform = 0,
	ComponentTransformIsKinematic = 1,
	EPhysicsTransformUpdateMode_MAX = 2
};

// Object: Enum Engine.ESkyAtmosphereTransformMode
enum class ESkyAtmosphereTransformMode : uint8_t
{
	PlanetTopAtAbsoluteWorldOrigin = 0,
	PlanetTopAtComponentTransform = 1,
	PlanetCenterAtComponentTransform = 2,
	ESkyAtmosphereTransformMode_MAX = 3
};

// Object: Enum Engine.ESplinePointType
enum class ESplinePointType : uint8_t
{
	Linear = 0,
	Curve = 1,
	Constant = 2,
	CurveClamped = 3,
	CurveCustomTangent = 4,
	ESplinePointType_MAX = 5
};

// Object: Enum Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8_t
{
	Local = 0,
	World = 1,
	ESplineCoordinateSpace_MAX = 2
};

// Object: Enum Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	ESplineMeshAxis_MAX = 3
};

// Object: Enum Engine.EVolumetricCloudTracingMaxDistanceMode
enum class EVolumetricCloudTracingMaxDistanceMode : uint8_t
{
	DistanceFromCloudLayerEntryPoint = 0,
	DistanceFromPointOfView = 1,
	EVolumetricCloudTracingMaxDistanceMode_MAX = 2
};

// Object: Enum Engine.ECurveTableMode
enum class ECurveTableMode : uint8_t
{
	Empty = 0,
	SimpleCurves = 1,
	RichCurves = 2,
	ECurveTableMode_MAX = 3
};

// Object: Enum Engine.FDataDrivenCVarType
enum class EFDataDrivenCVarType : uint8_t
{
	CVarFloat = 0,
	CVarInt = 1,
	CVarBool = 2,
	FDataDrivenCVarType_MAX = 3
};

// Object: Enum Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8_t
{
	RowFound = 0,
	RowNotFound = 1,
	EEvaluateCurveTableResult_MAX = 2
};

// Object: Enum Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8_t
{
	Line = 0,
	Dash = 1,
	EReporterLineStyle_MAX = 2
};

// Object: Enum Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8_t
{
	Lines = 0,
	Notches = 1,
	Grid = 2,
	EGraphAxisStyle_MAX = 3
};

// Object: Enum Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8_t
{
	Lines = 0,
	Filled = 1,
	EGraphDataStyle_MAX = 2
};

// Object: Enum Engine.ELegendPosition
enum class ELegendPosition : uint8_t
{
	Outside = 0,
	Inside = 1,
	ELegendPosition_MAX = 2
};

// Object: Enum Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8_t
{
	Neuter = 0,
	Masculine = 1,
	Feminine = 2,
	Mixed = 3,
	EGrammaticalGender_MAX = 4
};

// Object: Enum Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8_t
{
	Singular = 0,
	Plural = 1,
	EGrammaticalNumber_MAX = 2
};

// Object: Enum Engine.ETypedElementWorldType
enum class ETypedElementWorldType : uint8_t
{
	Game = 0,
	Editor = 1,
	ETypedElementWorldType_MAX = 2
};

// Object: Enum Engine.ECustomTimeStepSynchronizationState
enum class ECustomTimeStepSynchronizationState : uint8_t
{
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3,
	ECustomTimeStepSynchronizationState_MAX = 4
};

// Object: Enum Engine.EVectorQuantization
enum class EVectorQuantization : uint8_t
{
	RoundWholeNumber = 0,
	RoundOneDecimal = 1,
	RoundTwoDecimals = 2,
	EVectorQuantization_MAX = 3
};

// Object: Enum Engine.ERotatorQuantization
enum class ERotatorQuantization : uint8_t
{
	ByteComponents = 0,
	ShortComponents = 1,
	ERotatorQuantization_MAX = 2
};

// Object: Enum Engine.ETimecodeProviderSynchronizationState
enum class ETimecodeProviderSynchronizationState : uint8_t
{
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3,
	ETimecodeProviderSynchronizationState_MAX = 4
};

// Object: Enum Engine.EFontCacheType
enum class EFontCacheType : uint8_t
{
	Offline = 0,
	Runtime = 1,
	EFontCacheType_MAX = 2
};

// Object: Enum Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : uint8_t
{
	Override = 0,
	Additive = 1,
	ERootMotionAccumulateMode_MAX = 2
};

// Object: Enum Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : uint8_t
{
	Prepared = 1,
	Finished = 2,
	MarkedForRemoval = 4,
	ERootMotionSourceStatusFlags_MAX = 5
};

// Object: Enum Engine.ERootMotionSourceSettingsFlags
enum class ERootMotionSourceSettingsFlags : uint8_t
{
	UseSensitiveLiftoffCheck = 1,
	DisablePartialEndTick = 2,
	IgnoreZAccumulate = 4,
	ERootMotionSourceSettingsFlags_MAX = 5
};

// Object: Enum Engine.ERootMotionFinishVelocityMode
enum class ERootMotionFinishVelocityMode : uint8_t
{
	MaintainLastRootMotionVelocity = 0,
	SetVelocity = 1,
	ClampVelocity = 2,
	ERootMotionFinishVelocityMode_MAX = 3
};

// Object: Enum Engine.EWindowMode
enum class EWindowMode : uint8_t
{
	Fullscreen = 0,
	WindowedFullscreen = 1,
	Windowed = 2,
	EWindowMode_MAX = 3
};

// Object: Enum Engine.EArraySortOrder
enum class EArraySortOrder : uint8_t
{
	Ascending = 0,
	Descending = 1,
	EArraySortOrder_MAX = 2
};

// Object: Enum Engine.ESlateGesture
enum class ESlateGesture : uint8_t
{
	None = 0,
	Scroll = 1,
	Magnify = 2,
	Swipe = 3,
	Rotate = 4,
	LongPress = 5,
	ESlateGesture_MAX = 6
};

// Object: Enum Engine.EMIDCreationFlags
enum class EMIDCreationFlags : uint8_t
{
	None = 0,
	Transient = 1,
	EMIDCreationFlags_MAX = 2
};

// Object: Enum Engine.EEasingFunc
enum class EEasingFunc : uint8_t
{
	Linear = 0,
	Step = 1,
	SinusoidalIn = 2,
	SinusoidalOut = 3,
	SinusoidalInOut = 4,
	EaseIn = 5,
	EaseOut = 6,
	EaseInOut = 7,
	ExpoIn = 8,
	ExpoOut = 9,
	ExpoInOut = 10,
	CircularIn = 11,
	CircularOut = 12,
	CircularInOut = 13,
	EEasingFunc_MAX = 14
};

// Object: Enum Engine.ELerpInterpolationMode
enum class ELerpInterpolationMode : uint8_t
{
	QuatInterp = 0,
	EulerInterp = 1,
	DualQuatInterp = 2,
	ELerpInterpolationMode_MAX = 3
};

// Object: Enum Engine.EMatrixColumns
enum class EMatrixColumns : uint8_t
{
	First = 0,
	Second = 1,
	Third = 2,
	Fourth = 3,
	EMatrixColumns_MAX = 4
};

// Object: Enum Engine.EEditorPropertyValueState
enum class EEditorPropertyValueState : uint8_t
{
	Default = 0,
	Overridden = 1,
	NotFound = 2,
	AccessDenied = 3,
	EEditorPropertyValueState_MAX = 4
};

// Object: Enum Engine.EImportanceWeight
enum class EImportanceWeight : uint8_t
{
	Luminance = 0,
	Red = 1,
	Green = 2,
	Blue = 3,
	Alpha = 4,
	EImportanceWeight_MAX = 5
};

// Object: Enum Engine.EDecalBlendMode
enum class EDecalBlendMode : uint8_t
{
	DBM_Translucent = 0,
	DBM_Stain = 1,
	DBM_Normal = 2,
	DBM_Emissive = 3,
	DBM_DBuffer_ColorNormalRoughness = 4,
	DBM_DBuffer_Color = 5,
	DBM_DBuffer_ColorNormal = 6,
	DBM_DBuffer_ColorRoughness = 7,
	DBM_DBuffer_Normal = 8,
	DBM_DBuffer_NormalRoughness = 9,
	DBM_DBuffer_Roughness = 10,
	DBM_DBuffer_Emissive = 11,
	DBM_DBuffer_AlphaComposite = 12,
	DBM_DBuffer_EmissiveAlphaComposite = 13,
	DBM_Volumetric_DistanceFunction = 14,
	DBM_AlphaComposite = 15,
	DBM_AmbientOcclusion = 16,
	DBM_MAX = 17
};

// Object: Enum Engine.EMaterialDecalResponse
enum class EMaterialDecalResponse : uint8_t
{
	MDR_None = 0,
	MDR_ColorNormalRoughness = 1,
	MDR_Color = 2,
	MDR_ColorNormal = 3,
	MDR_ColorRoughness = 4,
	MDR_Normal = 5,
	MDR_NormalRoughness = 6,
	MDR_Roughness = 7,
	MDR_MAX = 8
};

// Object: Enum Engine.EMaterialTranslucencyPass
enum class EMaterialTranslucencyPass : uint8_t
{
	MTP_BeforeDOF = 0,
	MTP_AfterDOF = 1,
	MTP_AfterMotionBlur = 2,
	MTP_MAX = 3
};

// Object: Enum Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	EVertexPaintAxis_MAX = 3
};

// Object: Enum Engine.ENetworkMetricEnableMode
enum class ENetworkMetricEnableMode : uint8_t
{
	EnableForAllReplication = 0,
	EnableForIrisOnly = 1,
	EnableForNonIrisOnly = 2,
	ENetworkMetricEnableMode_MAX = 3
};

// Object: Enum Engine.EReplayResult
enum class EReplayResult : uint8_t
{
	Success = 0,
	ReplayNotFound = 1,
	Corrupt = 2,
	UnsupportedCheckpoint = 3,
	GameSpecific = 4,
	InitConnect = 5,
	LoadMap = 6,
	Serialization = 7,
	StreamerError = 8,
	ConnectionClosed = 9,
	MissingArchive = 10,
	Unknown = 11,
	EReplayResult_MAX = 12
};

// Object: Enum Engine.EParticleBurstMethod
enum class EParticleBurstMethod : uint8_t
{
	EPBM_Instant = 0,
	EPBM_Interpolated = 1,
	EPBM_MAX = 2
};

// Object: Enum Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8_t
{
	PSUVIM_None = 0,
	PSUVIM_Linear = 1,
	PSUVIM_Linear_Blend = 2,
	PSUVIM_Random = 3,
	PSUVIM_Random_Blend = 4,
	PSUVIM_MAX = 5
};

// Object: Enum Engine.EEmitterRenderMode
enum class EEmitterRenderMode : uint8_t
{
	ERM_Normal = 0,
	ERM_Point = 1,
	ERM_Cross = 2,
	ERM_LightsOnly = 3,
	ERM_None = 4,
	ERM_MAX = 5
};

// Object: Enum Engine.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8_t
{
	EPSUM_RealTime = 0,
	EPSUM_FixedTime = 1,
	EPSUM_MAX = 2
};

// Object: Enum Engine.ParticleSystemLODMethod
enum class EParticleSystemLODMethod : uint8_t
{
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX = 3
};

// Object: Enum Engine.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : uint8_t
{
	EPSOBM_None = 0,
	EPSOBM_ParticleBounds = 1,
	EPSOBM_CustomBounds = 2,
	EPSOBM_MAX = 3
};

// Object: Enum Engine.EParticleSysParamType
enum class EParticleSysParamType : uint8_t
{
	PSPT_None = 0,
	PSPT_Scalar = 1,
	PSPT_ScalarRand = 2,
	PSPT_Vector = 3,
	PSPT_VectorRand = 4,
	PSPT_Color = 5,
	PSPT_Actor = 6,
	PSPT_Material = 7,
	PSPT_VectorUnitRand = 8,
	PSPT_MAX = 9
};

// Object: Enum Engine.ParticleReplayState
enum class EParticleReplayState : uint8_t
{
	PRS_Disabled = 0,
	PRS_Capturing = 1,
	PRS_Replaying = 2,
	PRS_MAX = 3
};

// Object: Enum Engine.EParticleEventType
enum class EParticleEventType : uint8_t
{
	EPET_Any = 0,
	EPET_Spawn = 1,
	EPET_Death = 2,
	EPET_Collision = 3,
	EPET_Burst = 4,
	EPET_Blueprint = 5,
	EPET_MAX = 6
};

// Object: Enum Engine.EPSCPoolMethod
enum class EPSCPoolMethod : uint8_t
{
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	EPSCPoolMethod_MAX = 5
};

// Object: Enum Engine.EPerQualityLevels
enum class EPerQualityLevels : uint8_t
{
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Cinematic = 4,
	Num = 5,
	EPerQualityLevels_MAX = 6
};

// Object: Enum Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8_t
{
	SLERP = 0,
	TwistAndSwing = 1,
	EAngularDriveMode_MAX = 2
};

// Object: Enum Engine.EConstraintTransformComponentFlags
enum class EConstraintTransformComponentFlags : uint8_t
{
	None = 0,
	ChildPosition = 1,
	ChildRotation = 2,
	ParentPosition = 3,
	ParentRotation = 4,
	AllChild = 5,
	AllParent = 6,
	AllPosition = 7,
	AllRotation = 8,
	All = 9,
	EConstraintTransformComponentFlags_MAX = 10
};

// Object: Enum Engine.EPhysicsAssetSolverType
enum class EPhysicsAssetSolverType : uint8_t
{
	RBAN = 0,
	World = 1,
	EPhysicsAssetSolverType_MAX = 2
};

// Object: Enum Engine.ESettingsDOF
enum class ESettingsDOF : uint8_t
{
	Full3D = 0,
	YZPlane = 1,
	XZPlane = 2,
	XYPlane = 3,
	ESettingsDOF_MAX = 4
};

// Object: Enum Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8_t
{
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	Invalid = 4,
	ESettingsLockedAxis_MAX = 5
};

// Object: Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8_t
{
	Start = 0,
	Update = 1,
	Stop = 2,
	EDynamicForceFeedbackAction_MAX = 3
};

// Object: Enum Engine.EVoiceBlockReasons
enum class EVoiceBlockReasons : uint8_t
{
	None = 0,
	Muted = 1,
	Gameplay = 2,
	Blocked = 4,
	BlockedBy = 8,
	EVoiceBlockReasons_MAX = 9
};

// Object: Enum Engine.EPropertyAccessCopyBatch
enum class EPropertyAccessCopyBatch : uint8_t
{
	InternalUnbatched = 0,
	ExternalUnbatched = 1,
	InternalBatched = 2,
	ExternalBatched = 3,
	Count = 4,
	EPropertyAccessCopyBatch_MAX = 5
};

// Object: Enum Engine.EPropertyAccessIndirectionType
enum class EPropertyAccessIndirectionType : uint8_t
{
	Offset = 0,
	Object = 1,
	Array = 2,
	ScriptFunction = 3,
	NativeFunction = 4,
	EPropertyAccessIndirectionType_MAX = 5
};

// Object: Enum Engine.EPropertyAccessObjectType
enum class EPropertyAccessObjectType : uint8_t
{
	None = 0,
	Object = 1,
	WeakObject = 2,
	SoftObject = 3,
	EPropertyAccessObjectType_MAX = 4
};

// Object: Enum Engine.EPropertyAccessCopyType
enum class EPropertyAccessCopyType : uint8_t
{
	None = 0,
	Plain = 1,
	Complex = 2,
	Bool = 3,
	Struct = 4,
	Object = 5,
	Name = 6,
	Array = 7,
	PromoteBoolToByte = 8,
	PromoteBoolToInt32 = 9,
	PromoteBoolToInt64 = 10,
	PromoteBoolToFloat = 11,
	PromoteBoolToDouble = 12,
	PromoteByteToInt32 = 13,
	PromoteByteToInt64 = 14,
	PromoteByteToFloat = 15,
	PromoteByteToDouble = 16,
	PromoteInt32ToInt64 = 17,
	PromoteInt32ToFloat = 18,
	PromoteInt32ToDouble = 19,
	PromoteFloatToDouble = 20,
	DemoteDoubleToFloat = 21,
	PromoteArrayFloatToDouble = 22,
	DemoteArrayDoubleToFloat = 23,
	PromoteMapValueFloatToDouble = 24,
	DemoteMapValueDoubleToFloat = 25,
	EPropertyAccessCopyType_MAX = 26
};

// Object: Enum Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8_t
{
	NoClear = 0,
	HardwareClear = 1,
	QuadAtMaxZ = 2,
	EClearSceneOptions_MAX = 3
};

// Object: Enum Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8_t
{
	One = 1,
	Two = 2,
	Four = 4,
	Eight = 8,
	ECompositingSampleCount_MAX = 9
};

// Object: Enum Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8_t
{
	Disabled = 0,
	Enabled = 1,
	EnabledOnDemand = 2,
	EnabledWithStencil = 3,
	ECustomDepthStencil_MAX = 4
};

// Object: Enum Engine.EEarlyZPass
enum class EEarlyZPass : uint8_t
{
	None = 0,
	OpaqueOnly = 1,
	OpaqueAndMasked = 2,
	Auto = 3,
	EEarlyZPass_MAX = 4
};

// Object: Enum Engine.EVelocityOutputPass
enum class EVelocityOutputPass : uint8_t
{
	DepthPass = 0,
	BasePass = 1,
	AfterBasePass = 2,
	EVelocityOutputPass_MAX = 3
};

// Object: Enum Engine.EVertexDeformationOutputsVelocity
enum class EVertexDeformationOutputsVelocity : uint8_t
{
	Off = 0,
	On = 1,
	Auto = 2,
	EVertexDeformationOutputsVelocity_MAX = 3
};

// Object: Enum Engine.EAlphaChannelMode
enum class EAlphaChannelMode : uint8_t
{
	Disabled = 0,
	Enabled = 1,
	LinearColorSpaceOnly = 2,
	AllowThroughTonemapper = 3,
	EAlphaChannelMode_MAX = 4
};

// Object: Enum Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8_t
{
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3
};

// Object: Enum Engine.EDefaultBackBufferPixelFormat
enum class EDefaultBackBufferPixelFormat : uint8_t
{
	DBBPF_B8G8R8A8 = 0,
	DBBPF_A16B16G16R16_DEPRECATED = 1,
	DBBPF_FloatRGB_DEPRECATED = 2,
	DBBPF_FloatRGBA = 3,
	DBBPF_A2B10G10R10 = 4,
	DBBPF_MAX = 5
};

// Object: Enum Engine.EFixedFoveationLevels
enum class EFixedFoveationLevels : uint8_t
{
	Disabled = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	HighTop = 4,
	EFixedFoveationLevels_MAX = 5
};

// Object: Enum Engine.EMobileAntiAliasingMethod
enum class EMobileAntiAliasingMethod : uint8_t
{
	None = 0,
	FXAA = 1,
	TemporalAA = 2,
	MSAA = 3,
	EMobileAntiAliasingMethod_MAX = 4
};

// Object: Enum Engine.EMobileFloatPrecisionMode
enum class EMobileFloatPrecisionMode : uint8_t
{
	Half = 0,
	Full_MaterialExpressionOnly = 1,
	Full = 2,
	EMobileFloatPrecisionMode_MAX = 3
};

// Object: Enum Engine.EMobileShadingPath
enum class EMobileShadingPath : uint8_t
{
	Forward = 0,
	Deferred = 1,
	EMobileShadingPath_MAX = 2
};

// Object: Enum Engine.ELightFunctionAtlasPixelFormat
enum class ELightFunctionAtlasPixelFormat : uint8_t
{
	LFAPF_R8 = 0,
	LFAPF_R8G8B8 = 1,
	LFAPF_MAX = 2
};

// Object: Enum Engine.EShaderCompressionFormat
enum class EShaderCompressionFormat : uint8_t
{
	None = 0,
	LZ4 = 1,
	Oodle = 2,
	Zlib = 3,
	EShaderCompressionFormat_MAX = 4
};

// Object: Enum Engine.ELumenSoftwareTracingMode
enum class ELumenSoftwareTracingMode : uint8_t
{
	DetailTracing = 0,
	GlobalTracing = 1,
	ELumenSoftwareTracingMode_MAX = 2
};

// Object: Enum Engine.ELumenRayLightingMode
enum class ELumenRayLightingMode : uint8_t
{
	SurfaceCache = 0,
	HitLightingForReflections = 1,
	HitLighting = 2,
	ELumenRayLightingMode_MAX = 3
};

// Object: Enum Engine.ELumenScreenTracingSource
enum class ELumenScreenTracingSource : uint8_t
{
	SceneColor = 0,
	AntialiasedSceneColorWithTranslucency = 1,
	ELumenScreenTracingSource_MAX = 2
};

// Object: Enum Engine.EWorkingColorSpace
enum class EWorkingColorSpace : uint8_t
{
	sRGB = 1,
	Rec2020 = 2,
	ACESAP0 = 3,
	ACESAP1 = 4,
	P3DCI = 5,
	P3D65 = 6,
	Custom = 7,
	EWorkingColorSpace_MAX = 8
};

// Object: Enum Engine.ENeuralProfileFormat
enum class ENeuralProfileFormat : uint8_t
{
	Type32 = 0,
	Type16 = 1,
	ENeuralProfileFormat_MAX = 2
};

// Object: Enum Engine.ENeuralModelTileType
enum class ENeuralModelTileType : uint8_t
{
	OneByOne = 0,
	TwoByTwo = 1,
	FourByFour = 2,
	EightByEight = 3,
	Auto = 4,
	ENeuralModelTileType_MAX = 5
};

// Object: Enum Engine.ETileOverlapResolveType
enum class ETileOverlapResolveType : uint8_t
{
	Ignore = 0,
	Feathering = 1,
	ETileOverlapResolveType_MAX = 2
};

// Object: Enum Engine.ENeuralProfileRuntimeType
enum class ENeuralProfileRuntimeType : uint8_t
{
	NNERuntimeORTDml = 0,
	NNERuntimeRDGHlsl = 1,
	MAX = 2
};

// Object: Enum Engine.ESpecularProfileFormat
enum class ESpecularProfileFormat : uint8_t
{
	ViewLightVector = 0,
	HalfVector = 1,
	ESpecularProfileFormat_MAX = 2
};

// Object: Enum Engine.ESubsurfaceImplementationTechniqueHint
enum class ESubsurfaceImplementationTechniqueHint : uint8_t
{
	SIH_AFIS = 0,
	SIH_Separable = 1,
	SIH_MAX = 2
};

// Object: Enum Engine.ESkeletalMeshAsyncProperties
enum class ESkeletalMeshAsyncProperties : uint8_t
{
	None = 0,
	Materials = 1,
	Skeleton = 2,
	RefSkeleton = 3,
	RetargetBasePose = 4,
	RefBasesInvMatrix = 5,
	MeshClothingAssets = 6,
	SourceModels = 7,
	HasActiveClothingAssets = 8,
	LODSettings = 9,
	HasVertexColors = 10,
	VertexColorGuid = 11,
	MorphTargets = 12,
	SkeletalMeshRenderData = 13,
	MeshEditorDataObject = 14,
	NeverStream = 15,
	OverrideLODStreamingSettings = 16,
	SupportLODStreaming = 17,
	MaxNumStreamedLODs = 18,
	MaxNumOptionalLODs = 19,
	ImportedModel = 20,
	LODInfo = 21,
	SkinWeightProfiles = 22,
	CachedComposedRefPoseMatrices = 23,
	SamplingInfo = 24,
	NodeMappingData = 25,
	ShadowPhysicsAsset = 26,
	SkelMirrorTable = 27,
	MinLod = 28,
	DisableBelowMinLodStripping = 29,
	SkelMirrorAxis = 30,
	SkelMirrorFlipAxis = 31,
	DefaultAnimationRig = 32,
	NegativeBoundsExtension = 33,
	PositiveBoundsExtension = 34,
	ExtendedBounds = 35,
	EnablePerPolyCollision = 36,
	BodySetup = 37,
	MorphTargetIndexMap = 38,
	FloorOffset = 39,
	ImportedBounds = 40,
	PhysicsAsset = 41,
	AssetImportData = 42,
	ThumbnailInfo = 43,
	HasCustomDefaultEditorCamera = 44,
	DefaultEditorCameraLocation = 45,
	DefaultEditorCameraRotation = 46,
	RequiresLODScreenSizeConversion = 47,
	PostProcessAnimBlueprint = 48,
	DefaultEditorCameraLookAt = 49,
	PreviewAttachedAssetContainer = 50,
	DefaultEditorCameraOrthoZoom = 51,
	RequiresLODHysteresisConversion = 52,
	bSupportRayTracing = 53,
	RayTracingMinLOD = 54,
	ClothLODBiasMode = 55,
	DefaultMeshDeformer = 56,
	OverlayMaterial = 57,
	OverlayMaterialMaxDrawDistance = 58,
	TargetMeshDeformers = 59,
	All = 60,
	ESkeletalMeshAsyncProperties_MAX = 61
};

// Object: Enum Engine.EClothLODBiasMode
enum class EClothLODBiasMode : uint8_t
{
	MappingsToSameLOD = 0,
	MappingsToMinLOD = 1,
	MappingsToAnyLOD = 2,
	EClothLODBiasMode_MAX = 3
};

// Object: Enum Engine.EBoneFilterActionOption
enum class EBoneFilterActionOption : uint8_t
{
	Remove = 0,
	Keep = 1,
	Invalid = 2,
	EBoneFilterActionOption_MAX = 3
};

// Object: Enum Engine.ESkinCacheUsage
enum class ESkinCacheUsage : uint8_t
{
	Auto = 0,
	Disabled = 1,
	Enabled = 2,
	ESkinCacheUsage_MAX = 3
};

// Object: Enum Engine.ESkinCacheDefaultBehavior
enum class ESkinCacheDefaultBehavior : uint8_t
{
	Exclusive = 0,
	Inclusive = 1,
	ESkinCacheDefaultBehavior_MAX = 2
};

// Object: Enum Engine.EVirtualizationMode
enum class EVirtualizationMode : uint8_t
{
	Disabled = 0,
	PlayWhenSilent = 1,
	Restart = 2,
	SeekRestart = 3,
	EVirtualizationMode_MAX = 4
};

// Object: Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8_t
{
	PreventNew = 0,
	StopOldest = 1,
	StopFarthestThenPreventNew = 2,
	StopFarthestThenOldest = 3,
	StopLowestPriority = 4,
	StopQuietest = 5,
	StopLowestPriorityThenPreventNew = 6,
	Count = 7,
	EMaxConcurrentResolutionRule_MAX = 8
};

// Object: Enum Engine.EConcurrencyVolumeScaleMode
enum class EConcurrencyVolumeScaleMode : uint8_t
{
	Default = 0,
	Distance = 1,
	Priority = 2,
	EConcurrencyVolumeScaleMode_MAX = 3
};

// Object: Enum Engine.EModulationRouting
enum class EModulationRouting : uint8_t
{
	Disable = 0,
	Inherit = 1,
	Override = 2,
	Union = 3,
	EModulationRouting_MAX = 4
};

// Object: Enum Engine.EModulationDestination
enum class EModulationDestination : uint8_t
{
	Volume = 0,
	Pitch = 1,
	Lowpass = 2,
	Highpass = 3,
	Count = 4,
	EModulationDestination_MAX = 5
};

// Object: Enum Engine.ESourceBusChannels
enum class ESourceBusChannels : uint8_t
{
	Mono = 0,
	Stereo = 1,
	ESourceBusChannels_MAX = 2
};

// Object: Enum Engine.EFFTSize
enum class EFFTSize : uint8_t
{
	DefaultSize = 0,
	Min = 1,
	Small = 2,
	Medium = 3,
	Large = 4,
	VeryLarge = 5,
	Max = 6
};

// Object: Enum Engine.EFFTPeakInterpolationMethod
enum class EFFTPeakInterpolationMethod : uint8_t
{
	NearestNeighbor = 0,
	Linear = 1,
	Quadratic = 2,
	ConstantQ = 3,
	EFFTPeakInterpolationMethod_MAX = 4
};

// Object: Enum Engine.EFFTWindowType
enum class EFFTWindowType : uint8_t
{
	None = 0,
	Hamming = 1,
	Hann = 2,
	Blackman = 3,
	EFFTWindowType_MAX = 4
};

// Object: Enum Engine.EAudioSpectrumType
enum class EAudioSpectrumType : uint8_t
{
	MagnitudeSpectrum = 0,
	PowerSpectrum = 1,
	Decibel = 2,
	EAudioSpectrumType_MAX = 3
};

// Object: Enum Engine.EGainParamMode
enum class EGainParamMode : uint8_t
{
	Linear = 0,
	Decibels = 1,
	EGainParamMode_MAX = 2
};

// Object: Enum Engine.EAudioSpectrumBandPresetType
enum class EAudioSpectrumBandPresetType : uint8_t
{
	KickDrum = 0,
	SnareDrum = 1,
	Voice = 2,
	Cymbals = 3,
	EAudioSpectrumBandPresetType_MAX = 4
};

// Object: Enum Engine.EAudioRecordingExportType
enum class EAudioRecordingExportType : uint8_t
{
	SoundWave = 0,
	WavFile = 1,
	EAudioRecordingExportType_MAX = 2
};

// Object: Enum Engine.ESendLevelControlMethod
enum class ESendLevelControlMethod : uint8_t
{
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESendLevelControlMethod_MAX = 3
};

// Object: Enum Engine.ESubmixSendStage
enum class ESubmixSendStage : uint8_t
{
	PostDistanceAttenuation = 0,
	PreDistanceAttenuation = 1,
	ESubmixSendStage_MAX = 2
};

// Object: Enum Engine.ENormalMode
enum class ENormalMode : uint8_t
{
	NM_PreserveSmoothingGroups = 0,
	NM_RecalculateNormals = 1,
	NM_RecalculateNormalsSmooth = 2,
	NM_RecalculateNormalsHard = 3,
	TEMP_BROKEN = 4,
	ENormalMode_MAX = 5
};

// Object: Enum Engine.EImportanceLevel
enum class EImportanceLevel : uint8_t
{
	IL_Off = 0,
	IL_Lowest = 1,
	IL_Low = 2,
	IL_Normal = 3,
	IL_High = 4,
	IL_Highest = 5,
	TEMP_BROKEN2 = 6,
	EImportanceLevel_MAX = 7
};

// Object: Enum Engine.EOptimizationType
enum class EOptimizationType : uint8_t
{
	OT_NumOfTriangles = 0,
	OT_MaxDeviation = 1,
	OT_MAX = 2
};

// Object: Enum Engine.EStaticMeshPaintSupport
enum class EStaticMeshPaintSupport : uint8_t
{
	Default = 0,
	Enabled = 1,
	Disabled = 2,
	EStaticMeshPaintSupport_MAX = 3
};

// Object: Enum Engine.ETextureEncodeEffort
enum class ETextureEncodeEffort : uint8_t
{
	Default = 0,
	Low = 10,
	Normal = 20,
	High = 30,
	ETextureEncodeEffort_MAX = 31
};

// Object: Enum Engine.ETextureUniversalTiling
enum class ETextureUniversalTiling : uint8_t
{
	Disabled = 0,
	Enabled_256KB = 1,
	Enabled_64KB = 2,
	ETextureUniversalTiling_MAX = 3
};

// Object: Enum Engine.ETextureEncodeSpeedOverride
enum class ETextureEncodeSpeedOverride : uint8_t
{
	Disabled = 0,
	Final = 1,
	FinalIfAvailable = 2,
	Fast = 3,
	ETextureEncodeSpeedOverride_MAX = 4
};

// Object: Enum Engine.ETextureRenderTargetFormat
enum class ETextureRenderTargetFormat : uint8_t
{
	RTF_R8 = 0,
	RTF_RG8 = 1,
	RTF_RGBA8 = 2,
	RTF_RGBA8_SRGB = 3,
	RTF_R16f = 4,
	RTF_RG16f = 5,
	RTF_RGBA16f = 6,
	RTF_R32f = 7,
	RTF_RG32f = 8,
	RTF_RGBA32f = 9,
	RTF_RGB10A2 = 10,
	RTF_MAX = 11
};

// Object: Enum Engine.ETextureRenderTargetSampleCount
enum class ETextureRenderTargetSampleCount : uint8_t
{
	RTSC = 0,
	RTSC = 1,
	RTSC = 2,
	RTSC = 3,
	RTSC_MAX = 4
};

// Object: Enum Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8_t
{
	Always = 0,
	NonPointer = 1,
	NavigationOnly = 2,
	Never = 3,
	ERenderFocusRule_MAX = 4
};

// Object: Enum Engine.EUIScalingRule
enum class EUIScalingRule : uint8_t
{
	ShortestSide = 0,
	LongestSide = 1,
	Horizontal = 2,
	Vertical = 3,
	ScaleToFit = 4,
	Custom = 5,
	EUIScalingRule_MAX = 6
};

// Object: Enum Engine.EFontDPI
enum class EFontDPI : uint8_t
{
	Standard = 0,
	Unreal = 1,
	Custom = 2,
	EFontDPI_MAX = 3
};

// Object: Enum Engine.EHardwareDeviceSupportedFeatures
enum class EHardwareDeviceSupportedFeatures : uint32_t
{
	Unspecified = 0,
	Keypress = 1,
	Pointer = 2,
	Gamepad = 4,
	Touch = 8,
	Camera = 16,
	MotionTracking = 32,
	Lights = 64,
	TriggerHaptics = 128,
	ForceFeedback = 256,
	AudioBasedVibrations = 512,
	Acceleration = 1024,
	Virtual = 2048,
	Microphone = 4096,
	Orientation = 8192,
	Guitar = 16384,
	Drums = 32768,
	CustomA = 16777216,
	CustomB = 33554432,
	CustomC = 67108864,
	CustomD = 134217728,
	All = 2147483647,
	EHardwareDeviceSupportedFeatures_MAX = 2147483648
};

// Object: Enum Engine.EHardwareDevicePrimaryType
enum class EHardwareDevicePrimaryType : uint8_t
{
	Unspecified = 0,
	KeyboardAndMouse = 1,
	Gamepad = 2,
	Touch = 3,
	MotionTracking = 4,
	RacingWheel = 5,
	FlightStick = 6,
	Camera = 7,
	Instrument = 8,
	CustomTypeA = 9,
	CustomTypeB = 10,
	CustomTypeC = 11,
	CustomTypeD = 12,
	EHardwareDevicePrimaryType_MAX = 13
};

// Object: Enum Engine.EDataLayerState
enum class EDataLayerState : uint8_t
{
	Unloaded = 0,
	Loaded = 1,
	Activated = 2,
	EDataLayerState_MAX = 3
};

// Object: Enum Engine.EDataLayerLoadFilter
enum class EDataLayerLoadFilter : uint8_t
{
	None = 0,
	ClientOnly = 1,
	ServerOnly = 2,
	EDataLayerLoadFilter_MAX = 3
};

// Object: Enum Engine.EOverrideBlockOnSlowStreaming
enum class EOverrideBlockOnSlowStreaming : uint8_t
{
	NoOverride = 0,
	Blocking = 1,
	NotBlocking = 2,
	EOverrideBlockOnSlowStreaming_MAX = 3
};

// Object: Enum Engine.EHLODLayerType
enum class EHLODLayerType : uint8_t
{
	Instancing = 0,
	MeshMerge = 1,
	MeshSimplify = 2,
	MeshApproximate = 3,
	Custom = 4,
	EHLODLayerType_MAX = 5
};

// Object: Enum Engine.EWorldPartitionServerStreamingMode
enum class EWorldPartitionServerStreamingMode : uint8_t
{
	ProjectDefault = 0,
	Disabled = 1,
	Enabled = 2,
	EnabledInPIE = 3,
	EWorldPartitionServerStreamingMode_MAX = 4
};

// Object: Enum Engine.EWorldPartitionServerStreamingOutMode
enum class EWorldPartitionServerStreamingOutMode : uint8_t
{
	ProjectDefault = 0,
	Disabled = 1,
	Enabled = 2,
	EWorldPartitionServerStreamingOutMode_MAX = 3
};

// Object: Enum Engine.EWorldPartitionDataLayersLogicOperator
enum class EWorldPartitionDataLayersLogicOperator : uint8_t
{
	Or = 0,
	And = 1,
	EWorldPartitionDataLayersLogicOperator_MAX = 2
};

// Object: Enum Engine.EWorldPartitionRuntimeCellState
enum class EWorldPartitionRuntimeCellState : uint8_t
{
	Unloaded = 0,
	Loaded = 1,
	Activated = 2,
	EWorldPartitionRuntimeCellState_MAX = 3
};

// Object: Enum Engine.EWorldPartitionStreamingPerformance
enum class EWorldPartitionStreamingPerformance : uint8_t
{
	Good = 0,
	Slow = 1,
	Critical = 2,
	Immediate = 3,
	EWorldPartitionStreamingPerformance_MAX = 4
};

// Object: Enum Engine.EWorldPartitionCVarProjectDefaultOverride
enum class EWorldPartitionCVarProjectDefaultOverride : uint8_t
{
	ProjectDefault = 0,
	Disabled = 1,
	Enabled = 2,
	EWorldPartitionCVarProjectDefaultOverride_MAX = 3
};

// Object: Enum Engine.EStreamingSourceTargetBehavior
enum class EStreamingSourceTargetBehavior : uint8_t
{
	Include = 0,
	Exclude = 1,
	EStreamingSourceTargetBehavior_MAX = 2
};

// Object: Enum Engine.EStreamingSourceTargetState
enum class EStreamingSourceTargetState : uint8_t
{
	Loaded = 0,
	Activated = 1,
	EStreamingSourceTargetState_MAX = 2
};

// Object: Enum Engine.EStreamingSourcePriority
enum class EStreamingSourcePriority : uint8_t
{
	Highest = 0,
	High = 1,
	Normal = 2,
	Low = 3,
	Lowest = 4,
	Default = 5,
	EStreamingSourcePriority_MAX = 6
};

// Package: GameplayAbilities
// Enums: 39

// Object: Enum GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
{
	CancelAbilityImmediately = 0,
	RemoveAbilityOnEnd = 1,
	DoNothing = 2,
	EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
enum class EGameplayEffectAttributeCaptureSource : uint8_t
{
	Source = 0,
	Target = 1,
	EGameplayEffectAttributeCaptureSource_MAX = 2
};

// Object: Enum GameplayAbilities.EGameplayCueEvent
enum class EGameplayCueEvent : uint8_t
{
	OnActive = 0,
	WhileActive = 1,
	Executed = 2,
	Removed = 3,
	EGameplayCueEvent_MAX = 4
};

// Object: Enum GameplayAbilities.EGameplayAbilityActivationMode
enum class EGameplayAbilityActivationMode : uint8_t
{
	Authority = 0,
	NonAuthority = 1,
	Predicting = 2,
	Confirmed = 3,
	Rejected = 4,
	EGameplayAbilityActivationMode_MAX = 5
};

// Object: Enum GameplayAbilities.EAbilityGenericReplicatedEvent
enum class EAbilityGenericReplicatedEvent : uint8_t
{
	GenericConfirm = 0,
	GenericCancel = 1,
	InputPressed = 2,
	InputReleased = 3,
	GenericSignalFromClient = 4,
	GenericSignalFromServer = 5,
	GameCustom1 = 6,
	GameCustom2 = 7,
	GameCustom3 = 8,
	GameCustom4 = 9,
	GameCustom5 = 10,
	GameCustom6 = 11,
	MAX = 12
};

// Object: Enum GameplayAbilities.EGameplayCuePayloadType
enum class EGameplayCuePayloadType : uint8_t
{
	CueParameters = 0,
	FromSpec = 1,
	EGameplayCuePayloadType_MAX = 2
};

// Object: Enum GameplayAbilities.EGameplayAbilityInputBinds
enum class EGameplayAbilityInputBinds : uint8_t
{
	Ability1 = 0,
	Ability2 = 1,
	Ability3 = 2,
	Ability4 = 3,
	Ability5 = 4,
	Ability6 = 5,
	Ability7 = 6,
	Ability8 = 7,
	Ability9 = 8,
	EGameplayAbilityInputBinds_MAX = 9
};

// Object: Enum GameplayAbilities.ETargetDataFilterSelf
enum class ETargetDataFilterSelf : uint8_t
{
	TDFS_Any = 0,
	TDFS_NoSelf = 1,
	TDFS_NoOthers = 2,
	TDFS_MAX = 3
};

// Object: Enum GameplayAbilities.EAbilityTaskWaitState
enum class EAbilityTaskWaitState : uint8_t
{
	WaitingOnGame = 1,
	WaitingOnUser = 2,
	WaitingOnAvatar = 4,
	EAbilityTaskWaitState_MAX = 5
};

// Object: Enum GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
enum class ERootMotionMoveToActorTargetOffsetType : uint8_t
{
	AlignFromTargetToSource = 0,
	AlignToTargetForward = 1,
	AlignToWorldSpace = 2,
	ERootMotionMoveToActorTargetOffsetType_MAX = 3
};

// Object: Enum GameplayAbilities.EAbilityTaskNetSyncType
enum class EAbilityTaskNetSyncType : uint8_t
{
	BothWait = 0,
	OnlyServerWait = 1,
	OnlyClientWait = 2,
	EAbilityTaskNetSyncType_MAX = 3
};

// Object: Enum GameplayAbilities.EWaitAttributeChangeComparison
enum class EWaitAttributeChangeComparison : uint8_t
{
	None = 0,
	GreaterThan = 1,
	LessThan = 2,
	GreaterThanOrEqualTo = 3,
	LessThanOrEqualTo = 4,
	NotEqualTo = 5,
	ExactlyEqualTo = 6,
	MAX = 7
};

// Object: Enum GameplayAbilities.EWaitGameplayTagQueryTriggerCondition
enum class EWaitGameplayTagQueryTriggerCondition : uint8_t
{
	WhenTrue = 0,
	WhenFalse = 1,
	EWaitGameplayTagQueryTriggerCondition_MAX = 2
};

// Object: Enum GameplayAbilities.EGameplayEffectReplicationMode
enum class EGameplayEffectReplicationMode : uint8_t
{
	Minimal = 0,
	Mixed = 1,
	Full = 2,
	EGameplayEffectReplicationMode_MAX = 3
};

// Object: Enum GameplayAbilities.ERepAnimPositionMethod
enum class ERepAnimPositionMethod : uint8_t
{
	Position = 0,
	CurrentSectionId = 1,
	ERepAnimPositionMethod_MAX = 2
};

// Object: Enum GameplayAbilities.EGameplayTargetingConfirmation
enum class EGameplayTargetingConfirmation : uint8_t
{
	Instant = 0,
	UserConfirmed = 1,
	Custom = 2,
	CustomMulti = 3,
	EGameplayTargetingConfirmation_MAX = 4
};

// Object: Enum GameplayAbilities.EGameplayAbilityTargetingLocationType
enum class EGameplayAbilityTargetingLocationType : uint8_t
{
	LiteralTransform = 0,
	ActorTransform = 1,
	SocketTransform = 2,
	EGameplayAbilityTargetingLocationType_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayAbilityInstancingPolicy
enum class EGameplayAbilityInstancingPolicy : uint8_t
{
	NonInstanced = 0,
	InstancedPerActor = 1,
	InstancedPerExecution = 2,
	EGameplayAbilityInstancingPolicy_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
enum class EGameplayAbilityNetExecutionPolicy : uint8_t
{
	LocalPredicted = 0,
	LocalOnly = 1,
	ServerInitiated = 2,
	ServerOnly = 3,
	EGameplayAbilityNetExecutionPolicy_MAX = 4
};

// Object: Enum GameplayAbilities.EGameplayAbilityNetSecurityPolicy
enum class EGameplayAbilityNetSecurityPolicy : uint8_t
{
	ClientOrServer = 0,
	ServerOnlyExecution = 1,
	ServerOnlyTermination = 2,
	ServerOnly = 3,
	EGameplayAbilityNetSecurityPolicy_MAX = 4
};

// Object: Enum GameplayAbilities.EGameplayAbilityReplicationPolicy
enum class EGameplayAbilityReplicationPolicy : uint8_t
{
	ReplicateNo = 0,
	ReplicateYes = 1,
	EGameplayAbilityReplicationPolicy_MAX = 2
};

// Object: Enum GameplayAbilities.EGameplayAbilityTriggerSource
enum class EGameplayAbilityTriggerSource : uint8_t
{
	GameplayEvent = 0,
	OwnedTagAdded = 1,
	OwnedTagPresent = 2,
	EGameplayAbilityTriggerSource_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayCueNotify_EffectPlaySpace
enum class EGameplayCueNotify_EffectPlaySpace : uint8_t
{
	WorldSpace = 0,
	CameraSpace = 1,
	EGameplayCueNotify_MAX = 2
};

// Object: Enum GameplayAbilities.EGameplayCueNotify_LocallyControlledSource
enum class EGameplayCueNotify_LocallyControlledSource : uint8_t
{
	InstigatorActor = 0,
	TargetActor = 1,
	EGameplayCueNotify_MAX = 2
};

// Object: Enum GameplayAbilities.EGameplayCueNotify_LocallyControlledPolicy
enum class EGameplayCueNotify_LocallyControlledPolicy : uint8_t
{
	Always = 0,
	LocalOnly = 1,
	NotLocal = 2,
	EGameplayCueNotify_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayCueNotify_AttachPolicy
enum class EGameplayCueNotify_AttachPolicy : uint8_t
{
	DoNotAttach = 0,
	AttachToTarget = 1,
	EGameplayCueNotify_MAX = 2
};

// Object: Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
enum class EGameplayEffectMagnitudeCalculation : uint8_t
{
	ScalableFloat = 0,
	AttributeBased = 1,
	CustomCalculationClass = 2,
	SetByCaller = 3,
	EGameplayEffectMagnitudeCalculation_MAX = 4
};

// Object: Enum GameplayAbilities.EAttributeBasedFloatCalculationType
enum class EAttributeBasedFloatCalculationType : uint8_t
{
	AttributeMagnitude = 0,
	AttributeBaseValue = 1,
	AttributeBonusMagnitude = 2,
	AttributeMagnitudeEvaluatedUpToChannel = 3,
	EAttributeBasedFloatCalculationType_MAX = 4
};

// Object: Enum GameplayAbilities.EGameplayEffectVersion
enum class EGameplayEffectVersion : uint8_t
{
	Monolithic = 0,
	Modular53 = 1,
	AbilitiesComponent53 = 2,
	Current = 3,
	EGameplayEffectVersion_MAX = 4
};

// Object: Enum GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
enum class EGameplayEffectScopedModifierAggregatorType : uint8_t
{
	CapturedAttributeBacked = 0,
	Transient = 1,
	EGameplayEffectScopedModifierAggregatorType_MAX = 2
};

// Object: Enum GameplayAbilities.EGameplayEffectDurationType
enum class EGameplayEffectDurationType : uint8_t
{
	Instant = 0,
	Infinite = 1,
	HasDuration = 2,
	EGameplayEffectDurationType_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayEffectStackingDurationPolicy
enum class EGameplayEffectStackingDurationPolicy : uint8_t
{
	RefreshOnSuccessfulApplication = 0,
	NeverRefresh = 1,
	EGameplayEffectStackingDurationPolicy_MAX = 2
};

// Object: Enum GameplayAbilities.EGameplayEffectStackingPeriodPolicy
enum class EGameplayEffectStackingPeriodPolicy : uint8_t
{
	ResetOnSuccessfulApplication = 0,
	NeverReset = 1,
	EGameplayEffectStackingPeriodPolicy_MAX = 2
};

// Object: Enum GameplayAbilities.EGameplayEffectStackingExpirationPolicy
enum class EGameplayEffectStackingExpirationPolicy : uint8_t
{
	ClearEntireStack = 0,
	RemoveSingleStackAndRefreshDuration = 1,
	RefreshDuration = 2,
	EGameplayEffectStackingExpirationPolicy_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayEffectPeriodInhibitionRemovedPolicy
enum class EGameplayEffectPeriodInhibitionRemovedPolicy : uint8_t
{
	NeverReset = 0,
	ResetPeriod = 1,
	ExecuteAndResetPeriod = 2,
	EGameplayEffectPeriodInhibitionRemovedPolicy_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayModEvaluationChannel
enum class EGameplayModEvaluationChannel : uint8_t
{
	Channel0 = 0,
	Channel1 = 1,
	Channel2 = 2,
	Channel3 = 3,
	Channel4 = 4,
	Channel5 = 5,
	Channel6 = 6,
	Channel7 = 7,
	Channel8 = 8,
	Channel9 = 9,
	Channel_MAX = 10,
	EGameplayModEvaluationChannel_MAX = 11
};

// Object: Enum GameplayAbilities.EGameplayModOp
enum class EGameplayModOp : uint8_t
{
	AddBase = 0,
	MultiplyAdditive = 1,
	DivideAdditive = 2,
	MultiplyCompound = 3,
	AddFinal = 4,
	Max = 5,
	Additive = 6,
	Multiplicitive = 7,
	Division = 8,
	Override = 9
};

// Object: Enum GameplayAbilities.EGameplayEffectStackingType
enum class EGameplayEffectStackingType : uint8_t
{
	None = 0,
	AggregateBySource = 1,
	AggregateByTarget = 2,
	EGameplayEffectStackingType_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayTagEventType
enum class EGameplayTagEventType : uint8_t
{
	NewOrRemoved = 0,
	AnyCountChange = 1,
	EGameplayTagEventType_MAX = 2
};

// Package: InteractiveToolsFramework
// Enums: 25

// Object: Enum InteractiveToolsFramework.EGizmoElementState
enum class EGizmoElementState : uint8_t
{
	None = 0,
	Visible = 2,
	Hittable = 4,
	VisibleAndHittable = 6,
	EGizmoElementState_MAX = 7
};

// Object: Enum InteractiveToolsFramework.EGizmoElementInteractionState
enum class EGizmoElementInteractionState : uint8_t
{
	None = 0,
	Hovering = 1,
	Interacting = 2,
	EGizmoElementInteractionState_MAX = 3
};

// Object: Enum InteractiveToolsFramework.EGizmoElementViewDependentType
enum class EGizmoElementViewDependentType : uint8_t
{
	None = 0,
	Axis = 1,
	Plane = 2,
	EGizmoElementViewDependentType_MAX = 3
};

// Object: Enum InteractiveToolsFramework.EGizmoElementViewAlignType
enum class EGizmoElementViewAlignType : uint8_t
{
	None = 0,
	PointOnly = 1,
	PointEye = 2,
	PointScreen = 3,
	Axial = 4,
	EGizmoElementViewAlignType_MAX = 5
};

// Object: Enum InteractiveToolsFramework.EGizmoElementPartialType
enum class EGizmoElementPartialType : uint8_t
{
	None = 0,
	Partial = 1,
	PartialViewDependent = 2,
	EGizmoElementPartialType_MAX = 3
};

// Object: Enum InteractiveToolsFramework.EGizmoElementDrawType
enum class EGizmoElementDrawType : uint8_t
{
	None = 0,
	Fill = 2,
	Line = 4,
	FillAndLine = 6,
	EGizmoElementDrawType_MAX = 7
};

// Object: Enum InteractiveToolsFramework.EStandardToolContextMaterials
enum class EStandardToolContextMaterials : uint8_t
{
	VertexColorMaterial = 1,
	EStandardToolContextMaterials_MAX = 2
};

// Object: Enum InteractiveToolsFramework.EToolContextCoordinateSystem
enum class EToolContextCoordinateSystem : uint8_t
{
	World = 0,
	Local = 1,
	Screen = 2,
	EToolContextCoordinateSystem_MAX = 3
};

// Object: Enum InteractiveToolsFramework.EToolContextTransformGizmoMode
enum class EToolContextTransformGizmoMode : uint8_t
{
	NoGizmo = 0,
	Translation = 1,
	Rotation = 2,
	Scale = 3,
	Combined = 8,
	EToolContextTransformGizmoMode_MAX = 9
};

// Object: Enum InteractiveToolsFramework.EToolMessageLevel
enum class EToolMessageLevel : uint8_t
{
	Internal = 0,
	UserMessage = 1,
	UserNotification = 2,
	UserWarning = 3,
	UserError = 4,
	EToolMessageLevel_MAX = 5
};

// Object: Enum InteractiveToolsFramework.ESelectedObjectsModificationType
enum class ESelectedObjectsModificationType : uint8_t
{
	Replace = 0,
	Add = 1,
	Remove = 2,
	Clear = 3,
	ESelectedObjectsModificationType_MAX = 4
};

// Object: Enum InteractiveToolsFramework.EViewInteractionState
enum class EViewInteractionState : uint8_t
{
	None = 0,
	Hovered = 1,
	Focused = 2,
	EViewInteractionState_MAX = 3
};

// Object: Enum InteractiveToolsFramework.EGizmoElementArrowHeadType
enum class EGizmoElementArrowHeadType : uint8_t
{
	Cone = 0,
	Cube = 1,
	EGizmoElementArrowHeadType_MAX = 2
};

// Object: Enum InteractiveToolsFramework.EInputCaptureSide
enum class EInputCaptureSide : uint8_t
{
	None = 0,
	Left = 1,
	Right = 2,
	Both = 3,
	Any = 99,
	EInputCaptureSide_MAX = 100
};

// Object: Enum InteractiveToolsFramework.EInputCaptureRequestType
enum class EInputCaptureRequestType : uint8_t
{
	Begin = 1,
	Ignore = 2,
	EInputCaptureRequestType_MAX = 3
};

// Object: Enum InteractiveToolsFramework.EInputCaptureState
enum class EInputCaptureState : uint8_t
{
	Begin = 1,
	Continue = 2,
	End = 3,
	Ignore = 4,
	EInputCaptureState_MAX = 5
};

// Object: Enum InteractiveToolsFramework.EInputDevices
enum class EInputDevices : uint16_t
{
	None = 0,
	Keyboard = 1,
	Mouse = 2,
	Gamepad = 4,
	OculusTouch = 8,
	HTCViveWands = 16,
	AnySpatialDevice = 24,
	TabletFingers = 1024,
	EInputDevices_MAX = 1025
};

// Object: Enum InteractiveToolsFramework.ETransformGizmoSubElements
enum class ETransformGizmoSubElements : uint32_t
{
	None = 0,
	TranslateAxisX = 2,
	TranslateAxisY = 4,
	TranslateAxisZ = 8,
	TranslateAllAxes = 14,
	TranslatePlaneXY = 16,
	TranslatePlaneXZ = 32,
	TranslatePlaneYZ = 64,
	TranslateAllPlanes = 112,
	RotateAxisX = 128,
	RotateAxisY = 256,
	RotateAxisZ = 512,
	RotateAllAxes = 896,
	ScaleAxisX = 1024,
	ScaleAxisY = 2048,
	ScaleAxisZ = 4096,
	ScaleAllAxes = 7168,
	ScalePlaneYZ = 8192,
	ScalePlaneXZ = 16384,
	ScalePlaneXY = 32768,
	ScaleAllPlanes = 57344,
	ScaleUniform = 65536,
	FreeTranslate = 131072,
	FreeRotate = 262144,
	StandardTranslateRotate = 394238,
	TranslateRotateUniformScale = 459774,
	FullTranslateRotateScale = 524286,
	ETransformGizmoSubElements_MAX = 524287
};

// Object: Enum InteractiveToolsFramework.EToolShutdownType
enum class EToolShutdownType : uint8_t
{
	Completed = 0,
	Accept = 1,
	Cancel = 2,
	EToolShutdownType_MAX = 3
};

// Object: Enum InteractiveToolsFramework.EToolSide
enum class EToolSide : uint8_t
{
	Left = 0,
	Mouse = 1,
	Right = 2,
	EToolSide_MAX = 3
};

// Object: Enum InteractiveToolsFramework.EToolChangeTrackingMode
enum class EToolChangeTrackingMode : uint8_t
{
	NoChangeTracking = 1,
	UndoToExit = 2,
	FullUndoRedo = 3,
	EToolChangeTrackingMode_MAX = 4
};

// Object: Enum InteractiveToolsFramework.EToolManagerToolSwitchMode
enum class EToolManagerToolSwitchMode : uint8_t
{
	AcceptIfAble = 0,
	CancelIfAble = 1,
	CustomizableAcceptIfAble = 2,
	CustomizableCancelIfAble = 3,
	EToolManagerToolSwitchMode_MAX = 4
};

// Object: Enum InteractiveToolsFramework.ESceneSnapQueryType
enum class ESceneSnapQueryType : uint8_t
{
	Position = 1,
	Rotation = 2,
	RotationAngle = 3,
	Scale = 4,
	Transform = 5,
	ESceneSnapQueryType_MAX = 6
};

// Object: Enum InteractiveToolsFramework.ESceneSnapQueryTargetType
enum class ESceneSnapQueryTargetType : uint8_t
{
	None = 0,
	MeshVertex = 1,
	MeshEdge = 2,
	Grid = 4,
	ObjectTransform = 8,
	Custom = 16,
	All = 31,
	ESceneSnapQueryTargetType_MAX = 32
};

// Object: Enum InteractiveToolsFramework.ESceneSnapQueryTargetResult
enum class ESceneSnapQueryTargetResult : uint8_t
{
	NotSnapped = 0,
	Snapped = 1,
	Disabled = 2,
	Unsupported = 3,
	ESceneSnapQueryTargetResult_MAX = 4
};

// Package: ModelingComponents
// Enums: 17

// Object: Enum ModelingComponents.EBakeTextureResolution
enum class EBakeTextureResolution : uint16_t
{
	Resolution16 = 16,
	Resolution32 = 32,
	Resolution64 = 64,
	Resolution128 = 128,
	Resolution256 = 256,
	Resolution512 = 512,
	Resolution1024 = 1024,
	Resolution2048 = 2048,
	Resolution4096 = 4096,
	Resolution8192 = 8192,
	EBakeTextureResolution_MAX = 8193
};

// Object: Enum ModelingComponents.EBakeTextureBitDepth
enum class EBakeTextureBitDepth : uint8_t
{
	ChannelBits8 = 0,
	ChannelBits16 = 1,
	EBakeTextureBitDepth_MAX = 2
};

// Object: Enum ModelingComponents.EBakeTextureSamplesPerPixel
enum class EBakeTextureSamplesPerPixel : uint16_t
{
	Sample1 = 1,
	Sample4 = 4,
	Sample16 = 16,
	Sample64 = 64,
	Sample256 = 256,
	EBakeTextureSamplesPerPixel_MAX = 257
};

// Object: Enum ModelingComponents.EGeometrySelectionElementType
enum class EGeometrySelectionElementType : uint8_t
{
	Vertex = 1,
	Edge = 2,
	Face = 4,
	EGeometrySelectionElementType_MAX = 5
};

// Object: Enum ModelingComponents.EGeometrySelectionTopologyType
enum class EGeometrySelectionTopologyType : uint8_t
{
	Triangle = 1,
	Polygroup = 2,
	EGeometrySelectionTopologyType_MAX = 3
};

// Object: Enum ModelingComponents.EMarqueeSelectionUpdateType
enum class EMarqueeSelectionUpdateType : uint8_t
{
	OnDrag = 0,
	OnTickAndRelease = 1,
	OnRelease = 2,
	EMarqueeSelectionUpdateType_MAX = 3
};

// Object: Enum ModelingComponents.EBaseCreateFromSelectedTargetType
enum class EBaseCreateFromSelectedTargetType : uint8_t
{
	NewObject = 0,
	FirstInputObject = 1,
	LastInputObject = 2,
	EBaseCreateFromSelectedTargetType_MAX = 3
};

// Object: Enum ModelingComponents.EUVLayoutPreviewSide
enum class EUVLayoutPreviewSide : uint8_t
{
	Left = 0,
	Right = 1,
	EUVLayoutPreviewSide_MAX = 2
};

// Object: Enum ModelingComponents.ESpaceCurveControlPointTransformMode
enum class ESpaceCurveControlPointTransformMode : uint8_t
{
	Shared = 0,
	PerVertex = 1,
	ESpaceCurveControlPointTransformMode_MAX = 2
};

// Object: Enum ModelingComponents.ESpaceCurveControlPointOriginMode
enum class ESpaceCurveControlPointOriginMode : uint8_t
{
	Shared = 0,
	First = 1,
	Last = 2,
	ESpaceCurveControlPointOriginMode_MAX = 3
};

// Object: Enum ModelingComponents.ESpaceCurveControlPointFalloffType
enum class ESpaceCurveControlPointFalloffType : uint8_t
{
	Linear = 0,
	Smooth = 1,
	ESpaceCurveControlPointFalloffType_MAX = 2
};

// Object: Enum ModelingComponents.EModelingComponentsPlaneVisualizationMode
enum class EModelingComponentsPlaneVisualizationMode : uint8_t
{
	SimpleGrid = 0,
	HierarchicalGrid = 1,
	FixedScreenAreaGrid = 2,
	EModelingComponentsPlaneVisualizationMode_MAX = 3
};

// Object: Enum ModelingComponents.ECreateModelingObjectResult
enum class ECreateModelingObjectResult : uint8_t
{
	Ok = 0,
	Cancelled = 1,
	Failed_Unknown = 2,
	Failed_NoAPIFound = 3,
	Failed_InvalidWorld = 4,
	Failed_InvalidMesh = 5,
	Failed_InvalidTexture = 6,
	Failed_AssetCreationFailed = 7,
	Failed_ActorCreationFailed = 8,
	Failed_InvalidMaterial = 9,
	Failed_InvalidActor = 10,
	ECreateModelingObjectResult_MAX = 11
};

// Object: Enum ModelingComponents.ECreateMeshObjectSourceMeshType
enum class ECreateMeshObjectSourceMeshType : uint8_t
{
	MeshDescription = 0,
	DynamicMesh = 1,
	ECreateMeshObjectSourceMeshType_MAX = 2
};

// Object: Enum ModelingComponents.ECreateObjectTypeHint
enum class ECreateObjectTypeHint : uint8_t
{
	Undefined = 0,
	StaticMesh = 1,
	Volume = 2,
	DynamicMeshActor = 3,
	ECreateObjectTypeHint_MAX = 4
};

// Object: Enum ModelingComponents.EHandleSourcesMethod
enum class EHandleSourcesMethod : uint8_t
{
	DeleteSources = 0,
	HideSources = 1,
	KeepSources = 2,
	KeepFirstSource = 3,
	KeepLastSource = 4,
	EHandleSourcesMethod_MAX = 5
};

// Object: Enum ModelingComponents.EMultiTransformerMode
enum class EMultiTransformerMode : uint8_t
{
	DefaultGizmo = 1,
	QuickAxisTranslation = 2,
	EMultiTransformerMode_MAX = 3
};

// Package: AnimationCore
// Enums: 3

// Object: Enum AnimationCore.EConstraintType
enum class EConstraintType : uint8_t
{
	Transform = 0,
	Aim = 1,
	MAX = 2
};

// Object: Enum AnimationCore.ETransformConstraintType
enum class ETransformConstraintType : uint8_t
{
	Translation = 0,
	Rotation = 1,
	Scale = 2,
	Parent = 3,
	LookAt = 4,
	ETransformConstraintType_MAX = 5
};

// Object: Enum AnimationCore.EEulerRotationOrder
enum class EEulerRotationOrder : uint8_t
{
	XYZ = 0,
	XZY = 1,
	YXZ = 2,
	YZX = 3,
	ZXY = 4,
	ZYX = 5,
	EEulerRotationOrder_MAX = 6
};

// Package: InputCore
// Enums: 4

// Object: Enum InputCore.ETouchIndex
enum class ETouchIndex : uint8_t
{
	Touch1 = 0,
	Touch2 = 1,
	Touch3 = 2,
	Touch4 = 3,
	Touch5 = 4,
	Touch6 = 5,
	Touch7 = 6,
	Touch8 = 7,
	Touch9 = 8,
	Touch10 = 9,
	CursorPointerIndex = 10,
	MAX_TOUCHES = 11,
	ETouchIndex_MAX = 12
};

// Object: Enum InputCore.EControllerHand
enum class EControllerHand : uint8_t
{
	Left = 0,
	Right = 1,
	AnyHand = 2,
	Pad = 3,
	ExternalCamera = 4,
	Gun = 5,
	HMD = 6,
	Chest = 7,
	LeftShoulder = 8,
	RightShoulder = 9,
	LeftElbow = 10,
	RightElbow = 11,
	Waist = 12,
	LeftKnee = 13,
	RightKnee = 14,
	LeftFoot = 15,
	RightFoot = 16,
	Special = 17,
	ControllerHand_Count = 18,
	EControllerHand_MAX = 19
};

// Object: Enum InputCore.EConsoleForGamepadLabels
enum class EConsoleForGamepadLabels : uint8_t
{
	None = 0,
	XBoxOne = 1,
	PS4 = 2,
	EConsoleForGamepadLabels_MAX = 3
};

// Object: Enum InputCore.ETouchType
enum class ETouchType : uint8_t
{
	Began = 0,
	Moved = 1,
	Stationary = 2,
	ForceChanged = 3,
	FirstMove = 4,
	Ended = 5,
	NumTypes = 6,
	ETouchType_MAX = 7
};

// Package: SlateCore
// Enums: 43

// Object: Enum SlateCore.EFontRasterizationMode
enum class EFontRasterizationMode : uint8_t
{
	Bitmap = 0,
	Msdf = 1,
	Sdf = 2,
	SdfApproximation = 3,
	EFontRasterizationMode_MAX = 4
};

// Object: Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8_t
{
	Escape = 0,
	Explicit = 1,
	Wrap = 2,
	Stop = 3,
	Custom = 4,
	CustomBoundary = 5,
	Invalid = 6,
	EUINavigationRule_MAX = 7
};

// Object: Enum SlateCore.EColorVisionDeficiency
enum class EColorVisionDeficiency : uint8_t
{
	NormalVision = 0,
	Deuteranope = 1,
	Protanope = 2,
	Tritanope = 3,
	EColorVisionDeficiency_MAX = 4
};

// Object: Enum SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8_t
{
	DownAndUp = 0,
	MouseDown = 1,
	MouseUp = 2,
	PreciseClick = 3,
	EButtonClickMethod_MAX = 4
};

// Object: Enum SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8_t
{
	DownAndUp = 0,
	Down = 1,
	PreciseTap = 2,
	EButtonTouchMethod_MAX = 3
};

// Object: Enum SlateCore.EButtonPressMethod
enum class EButtonPressMethod : uint8_t
{
	DownAndUp = 0,
	ButtonPress = 1,
	ButtonRelease = 2,
	EButtonPressMethod_MAX = 3
};

// Object: Enum SlateCore.EUINavigation
enum class EUINavigation : uint8_t
{
	Left = 0,
	Right = 1,
	Up = 2,
	Down = 3,
	Next = 4,
	Previous = 5,
	Num = 6,
	Invalid = 7,
	EUINavigation_MAX = 8
};

// Object: Enum SlateCore.EUINavigationAction
enum class EUINavigationAction : uint8_t
{
	Accept = 0,
	Back = 1,
	Num = 2,
	Invalid = 3,
	EUINavigationAction_MAX = 4
};

// Object: Enum SlateCore.ENavigationSource
enum class ENavigationSource : uint8_t
{
	FocusedWidget = 0,
	WidgetUnderCursor = 1,
	ENavigationSource_MAX = 2
};

// Object: Enum SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8_t
{
	Keyboard = 0,
	Controller = 1,
	User = 2,
	ENavigationGenesis_MAX = 3
};

// Object: Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8_t
{
	HAlign_Fill = 0,
	HAlign_Left = 1,
	HAlign_Center = 2,
	HAlign_Right = 3,
	HAlign_MAX = 4
};

// Object: Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8_t
{
	VAlign_Fill = 0,
	VAlign_Top = 1,
	VAlign_Center = 2,
	VAlign_Bottom = 3,
	VAlign_MAX = 4
};

// Object: Enum SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox = 3,
	MenuPlacement_ComboBoxRight = 4,
	MenuPlacement_MenuRight = 5,
	MenuPlacement_AboveAnchor = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft = 9,
	MenuPlacement_Center = 10,
	MenuPlacement_RightLeftCenter = 11,
	MenuPlacement_MatchBottomLeft = 12,
	MenuPlacement_MAX = 13
};

// Object: Enum SlateCore.EOrientation
enum class EOrientation : uint8_t
{
	Orient_Horizontal = 0,
	Orient_Vertical = 1,
	Orient_MAX = 2
};

// Object: Enum SlateCore.EScrollDirection
enum class EScrollDirection : uint8_t
{
	Scroll_Down = 0,
	Scroll_Up = 1,
	Scroll_MAX = 2
};

// Object: Enum SlateCore.ETextCommit
enum class ETextCommit : uint8_t
{
	Default = 0,
	OnEnter = 1,
	OnUserMovedFocus = 2,
	OnCleared = 3,
	ETextCommit_MAX = 4
};

// Object: Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8_t
{
	OnKeyPress = 0,
	OnNavigation = 1,
	OnMouseClick = 2,
	Direct = 3,
	ESelectInfo_MAX = 4
};

// Object: Enum SlateCore.ESlatePostRT
enum class ESlatePostRT : uint8_t
{
	None = 0,
	ESlatePostRT = 1,
	ESlatePostRT = 2,
	ESlatePostRT = 3,
	ESlatePostRT = 4,
	ESlatePostRT = 5,
	All = 6,
	Num = 7,
	ESlatePostRT_MAX = 8
};

// Object: Enum SlateCore.EWidgetPixelSnapping
enum class EWidgetPixelSnapping : uint8_t
{
	Inherit = 0,
	Disabled = 1,
	SnapToPixel = 2,
	EWidgetPixelSnapping_MAX = 3
};

// Object: Enum SlateCore.ESlateDebuggingInputEvent
enum class ESlateDebuggingInputEvent : uint8_t
{
	MouseMove = 0,
	MouseEnter = 1,
	MouseLeave = 2,
	PreviewMouseButtonDown = 3,
	MouseButtonDown = 4,
	MouseButtonUp = 5,
	MouseButtonDoubleClick = 6,
	MouseWheel = 7,
	TouchStart = 8,
	TouchEnd = 9,
	TouchForceChanged = 10,
	TouchFirstMove = 11,
	TouchMoved = 12,
	DragDetected = 13,
	DragEnter = 14,
	DragLeave = 15,
	DragOver = 16,
	DragDrop = 17,
	DropMessage = 18,
	PreviewKeyDown = 19,
	KeyDown = 20,
	KeyUp = 21,
	KeyChar = 22,
	AnalogInput = 23,
	TouchGesture = 24,
	MotionDetected = 25,
	MAX = 26
};

// Object: Enum SlateCore.ESlateDebuggingStateChangeEvent
enum class ESlateDebuggingStateChangeEvent : uint8_t
{
	MouseCaptureGained = 0,
	MouseCaptureLost = 1,
	ESlateDebuggingStateChangeEvent_MAX = 2
};

// Object: Enum SlateCore.ESlateDebuggingNavigationMethod
enum class ESlateDebuggingNavigationMethod : uint8_t
{
	Unknown = 0,
	Explicit = 1,
	CustomDelegateBound = 2,
	CustomDelegateUnbound = 3,
	NextOrPrevious = 4,
	HitTestGrid = 5,
	ESlateDebuggingNavigationMethod_MAX = 6
};

// Object: Enum SlateCore.ESlateDebuggingFocusEvent
enum class ESlateDebuggingFocusEvent : uint8_t
{
	FocusChanging = 0,
	FocusLost = 1,
	FocusReceived = 2,
	MAX = 3
};

// Object: Enum SlateCore.EFontHinting
enum class EFontHinting : uint8_t
{
	Default = 0,
	Auto = 1,
	AutoLight = 2,
	Monochrome = 3,
	None = 4,
	EFontHinting_MAX = 5
};

// Object: Enum SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8_t
{
	LazyLoad = 0,
	Stream = 1,
	Inline = 2,
	EFontLoadingPolicy_MAX = 3
};

// Object: Enum SlateCore.EFontLayoutMethod
enum class EFontLayoutMethod : uint8_t
{
	Metrics = 0,
	BoundingBox = 1,
	EFontLayoutMethod_MAX = 2
};

// Object: Enum SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8_t
{
	Auto = 0,
	KerningOnly = 1,
	FullShaping = 2,
	ETextShapingMethod_MAX = 3
};

// Object: Enum SlateCore.EFocusCause
enum class EFocusCause : uint8_t
{
	Mouse = 0,
	Navigation = 1,
	SetDirectly = 2,
	Cleared = 3,
	OtherWidgetLostFocus = 4,
	WindowActivate = 5,
	EFocusCause_MAX = 6
};

// Object: Enum SlateCore.EWidgetClipping
enum class EWidgetClipping : uint8_t
{
	Inherit = 0,
	ClipToBounds = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways = 3,
	OnDemand = 4,
	EWidgetClipping_MAX = 5
};

// Object: Enum SlateCore.EFlowDirectionPreference
enum class EFlowDirectionPreference : uint8_t
{
	Inherit = 0,
	Culture = 1,
	LeftToRight = 2,
	RightToLeft = 3,
	EFlowDirectionPreference_MAX = 4
};

// Object: Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8_t
{
	NoDrawType = 0,
	Box = 1,
	Border = 2,
	Image = 3,
	RoundedBox = 4,
	ESlateBrushDrawType_MAX = 5
};

// Object: Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8_t
{
	NoTile = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushTileType_MAX = 4
};

// Object: Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8_t
{
	NoMirror = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushMirrorType_MAX = 4
};

// Object: Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8_t
{
	NoImage = 0,
	FullColor = 1,
	Linear = 2,
	Vector = 3,
	ESlateBrushImageType_MAX = 4
};

// Object: Enum SlateCore.ESlateBrushRoundingType
enum class ESlateBrushRoundingType : uint8_t
{
	FixedRadius = 0,
	HalfHeightRadius = 1,
	ESlateBrushRoundingType_MAX = 2
};

// Object: Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8_t
{
	UseColor_Specified = 0,
	UseColor_ColorTable = 1,
	UseColor_Foreground = 2,
	UseColor_Foreground_Subdued = 3,
	UseColor_UseStyle = 4,
	UseColor_MAX = 5
};

// Object: Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8_t
{
	WhenScrollingPossible = 0,
	Always = 1,
	Never = 2,
	EConsumeMouseWheel_MAX = 3
};

// Object: Enum SlateCore.ESlateParentWindowSearchMethod
enum class ESlateParentWindowSearchMethod : uint8_t
{
	ActiveWindow = 0,
	MainWindow = 1,
	ESlateParentWindowSearchMethod_MAX = 2
};

// Object: Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8_t
{
	CheckBox = 0,
	ToggleButton = 1,
	ESlateCheckBoxType_MAX = 2
};

// Object: Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8_t
{
	Unchecked = 0,
	Checked = 1,
	Undetermined = 2,
	ECheckBoxState_MAX = 3
};

// Object: Enum SlateCore.ETextOverflowPolicy
enum class ETextOverflowPolicy : uint8_t
{
	Clip = 0,
	Ellipsis = 1,
	MultilineEllipsis = 2,
	MiddleEllipsis = 3,
	ETextOverflowPolicy_MAX = 4
};

// Object: Enum SlateCore.ETextTransformPolicy
enum class ETextTransformPolicy : uint8_t
{
	None = 0,
	ToLower = 1,
	ToUpper = 2,
	ETextTransformPolicy_MAX = 3
};

// Object: Enum SlateCore.EStyleColor
enum class EStyleColor : uint8_t
{
	Black = 0,
	Background = 1,
	Title = 2,
	WindowBorder = 3,
	Foldout = 4,
	Input = 5,
	InputOutline = 6,
	Recessed = 7,
	Panel = 8,
	Header = 9,
	Dropdown = 10,
	DropdownOutline = 11,
	Hover = 12,
	Hover2 = 13,
	White = 14,
	White25 = 15,
	Highlight = 16,
	Primary = 17,
	PrimaryHover = 18,
	PrimaryPress = 19,
	Secondary = 20,
	Foreground = 21,
	ForegroundHover = 22,
	ForegroundInverted = 23,
	ForegroundHeader = 24,
	Select = 25,
	SelectInactive = 26,
	SelectParent = 27,
	SelectHover = 28,
	Notifications = 29,
	AccentBlue = 30,
	AccentPurple = 31,
	AccentPink = 32,
	AccentRed = 33,
	AccentOrange = 34,
	AccentYellow = 35,
	AccentGreen = 36,
	AccentBrown = 37,
	AccentBlack = 38,
	AccentGray = 39,
	AccentWhite = 40,
	AccentFolder = 41,
	Warning = 42,
	Error = 43,
	Success = 44,
	User1 = 45,
	User2 = 46,
	User3 = 47,
	User4 = 48,
	User5 = 49,
	User6 = 50,
	User7 = 51,
	User8 = 52,
	User9 = 53,
	User10 = 54,
	User11 = 55,
	User12 = 56,
	User13 = 57,
	User14 = 58,
	User15 = 59,
	User16 = 60,
	MAX = 61
};

// Package: Slate
// Enums: 22

// Object: Enum Slate.EVirtualKeyboardTrigger
enum class EVirtualKeyboardTrigger : uint8_t
{
	OnFocusByPointer = 0,
	OnAllFocusEvents = 1,
	EVirtualKeyboardTrigger_MAX = 2
};

// Object: Enum Slate.EVirtualKeyboardDismissAction
enum class EVirtualKeyboardDismissAction : uint8_t
{
	TextChangeOnDismiss = 0,
	TextCommitOnAccept = 1,
	TextCommitOnDismiss = 2,
	EVirtualKeyboardDismissAction_MAX = 3
};

// Object: Enum Slate.ESelectionMode
enum class ESelectionMode : uint8_t
{
	None = 0,
	Single = 1,
	SingleToggle = 2,
	Multi = 3,
	ESelectionMode_MAX = 4
};

// Object: Enum Slate.ETableViewMode
enum class ETableViewMode : uint8_t
{
	List = 0,
	Tile = 1,
	Tree = 2,
	ETableViewMode_MAX = 3
};

// Object: Enum Slate.EMultiBoxType
enum class EMultiBoxType : uint8_t
{
	MenuBar = 0,
	ToolBar = 1,
	VerticalToolBar = 2,
	SlimHorizontalToolBar = 3,
	UniformToolBar = 4,
	Menu = 5,
	ButtonRow = 6,
	SlimHorizontalUniformToolBar = 7,
	SlimWrappingToolBar = 8,
	EMultiBoxType_MAX = 9
};

// Object: Enum Slate.EMultiBlockType
enum class EMultiBlockType : uint8_t
{
	None = 0,
	ButtonRow = 1,
	EditableText = 2,
	Heading = 3,
	MenuEntry = 4,
	Separator = 5,
	ToolBarButton = 6,
	ToolBarComboButton = 7,
	Widget = 8,
	EMultiBlockType_MAX = 9
};

// Object: Enum Slate.EInputPreProcessorType
enum class EInputPreProcessorType : uint8_t
{
	Overlay = 0,
	PreEngine = 1,
	Engine = 2,
	PreEditor = 3,
	Editor = 4,
	PreGame = 5,
	Game = 6,
	Count = 7,
	EInputPreProcessorType_MAX = 8
};

// Object: Enum Slate.EPopupLayoutMode
enum class EPopupLayoutMode : uint8_t
{
	Menu = 0,
	ToolTip = 1,
	EPopupLayoutMode_MAX = 2
};

// Object: Enum Slate.EDescendantScrollDestination
enum class EDescendantScrollDestination : uint8_t
{
	IntoView = 0,
	TopOrLeft = 1,
	Center = 2,
	BottomOrRight = 3,
	EDescendantScrollDestination_MAX = 4
};

// Object: Enum Slate.EScrollWhenFocusChanges
enum class EScrollWhenFocusChanges : uint8_t
{
	NoScroll = 0,
	InstantScroll = 1,
	AnimatedScroll = 2,
	EScrollWhenFocusChanges_MAX = 3
};

// Object: Enum Slate.ECustomizedToolMenuVisibility
enum class ECustomizedToolMenuVisibility : uint8_t
{
	None = 0,
	Visible = 1,
	Hidden = 2,
	ECustomizedToolMenuVisibility_MAX = 3
};

// Object: Enum Slate.EUserInterfaceActionType
enum class EUserInterfaceActionType : uint8_t
{
	None = 0,
	Button = 1,
	ToggleButton = 2,
	RadioButton = 3,
	Check = 4,
	CollapsedButton = 5,
	EUserInterfaceActionType_MAX = 6
};

// Object: Enum Slate.EMultipleKeyBindingIndex
enum class EMultipleKeyBindingIndex : uint8_t
{
	Primary = 0,
	Secondary = 1,
	NumChords = 2,
	EMultipleKeyBindingIndex_MAX = 3
};

// Object: Enum Slate.ETextJustify
enum class ETextJustify : uint8_t
{
	Left = 0,
	Center = 1,
	Right = 2,
	InvariantLeft = 3,
	InvariantRight = 4,
	ETextJustify_MAX = 5
};

// Object: Enum Slate.ETextWrappingPolicy
enum class ETextWrappingPolicy : uint8_t
{
	DefaultWrapping = 0,
	AllowPerCharacterWrapping = 1,
	ETextWrappingPolicy_MAX = 2
};

// Object: Enum Slate.ETextFlowDirection
enum class ETextFlowDirection : uint8_t
{
	Auto = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	Culture = 3,
	ETextFlowDirection_MAX = 4
};

// Object: Enum Slate.EStretchDirection
enum class EStretchDirection : uint8_t
{
	Both = 0,
	DownOnly = 1,
	UpOnly = 2,
	EStretchDirection_MAX = 3
};

// Object: Enum Slate.EStretch
enum class EStretch : uint8_t
{
	None = 0,
	Fill = 1,
	ScaleToFit = 2,
	ScaleToFitX = 3,
	ScaleToFitY = 4,
	ScaleToFill = 5,
	ScaleBySafeZone = 6,
	UserSpecified = 7,
	UserSpecifiedWithClipping = 8,
	EStretch_MAX = 9
};

// Object: Enum Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8_t
{
	LeftToRight = 0,
	RightToLeft = 1,
	FillFromCenter = 2,
	FillFromCenterHorizontal = 3,
	FillFromCenterVertical = 4,
	TopToBottom = 5,
	BottomToTop = 6,
	EProgressBarFillType_MAX = 7
};

// Object: Enum Slate.EProgressBarFillStyle
enum class EProgressBarFillStyle : uint8_t
{
	Mask = 0,
	Scale = 1,
	EProgressBarFillStyle_MAX = 2
};

// Object: Enum Slate.EListItemAlignment
enum class EListItemAlignment : uint8_t
{
	EvenlyDistributed = 0,
	EvenlySize = 1,
	EvenlyWide = 2,
	LeftAligned = 3,
	RightAligned = 4,
	CenterAligned = 5,
	Fill = 6,
	EListItemAlignment_MAX = 7
};

// Object: Enum Slate.EScrollIntoViewAlignment
enum class EScrollIntoViewAlignment : uint8_t
{
	IntoView = 0,
	TopOrLeft = 1,
	CenterAligned = 2,
	BottomOrRight = 3,
	EScrollIntoViewAlignment_MAX = 4
};

// Package: MaterialShaderQualitySettings
// Enums: 1

// Object: Enum MaterialShaderQualitySettings.EMobileShadowQuality
enum class EMobileShadowQuality : uint8_t
{
	NoFiltering = 0,
	PCF_1x1 = 1,
	PCF_3x3 = 2,
	PCF_5x5 = 3,
	EMobileShadowQuality_MAX = 4
};

// Package: EngineSettings
// Enums: 4

// Object: Enum EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8_t
{
	Horizontal = 0,
	Vertical = 1,
	ETwoPlayerSplitScreenType_MAX = 2
};

// Object: Enum EngineSettings.EThreePlayerSplitScreenType
enum class EThreePlayerSplitScreenType : uint8_t
{
	FavorTop = 0,
	FavorBottom = 1,
	Vertical = 2,
	Horizontal = 3,
	EThreePlayerSplitScreenType_MAX = 4
};

// Object: Enum EngineSettings.EFourPlayerSplitScreenType
enum class EFourPlayerSplitScreenType : uint8_t
{
	Grid = 0,
	Vertical = 1,
	Horizontal = 2,
	EFourPlayerSplitScreenType_MAX = 3
};

// Object: Enum EngineSettings.ESubLevelStripMode
enum class ESubLevelStripMode : uint8_t
{
	ExactClass = 0,
	IsChildOf = 1,
	ESubLevelStripMode_MAX = 2
};

// Package: NNE
// Enums: 1

// Object: Enum NNE.ENNETensorDataType
enum class ENNETensorDataType : uint8_t
{
	None = 0,
	Char = 1,
	Boolean = 2,
	Half = 3,
	Float = 4,
	Double = 5,
	Int8 = 6,
	Int16 = 7,
	Int32 = 8,
	Int64 = 9,
	UInt8 = 10,
	UInt16 = 11,
	UInt32 = 12,
	UInt64 = 13,
	Complex64 = 14,
	Complex128 = 15,
	BFloat16 = 16,
	ENNETensorDataType_MAX = 17
};

// Package: PhysicsCore
// Enums: 12

// Object: Enum PhysicsCore.ECollisionTraceFlag
enum class ECollisionTraceFlag : uint8_t
{
	CTF_UseDefault = 0,
	CTF_UseSimpleAndComplex = 1,
	CTF_UseSimpleAsComplex = 2,
	CTF_UseComplexAsSimple = 3,
	CTF_MAX = 4
};

// Object: Enum PhysicsCore.EPhysicsType
enum class EPhysicsType : uint8_t
{
	PhysType_Default = 0,
	PhysType_Kinematic = 1,
	PhysType_Simulated = 2,
	PhysType_MAX = 3
};

// Object: Enum PhysicsCore.EBodyCollisionResponse
enum class EBodyCollisionResponse : uint8_t
{
	BodyCollision_Enabled = 0,
	BodyCollision_Disabled = 1,
	BodyCollision_MAX = 2
};

// Object: Enum PhysicsCore.EPhysicalSurface
enum class EPhysicalSurface : uint8_t
{
	SurfaceType_Default = 0,
	SurfaceType1 = 1,
	SurfaceType2 = 2,
	SurfaceType3 = 3,
	SurfaceType4 = 4,
	SurfaceType5 = 5,
	SurfaceType6 = 6,
	SurfaceType7 = 7,
	SurfaceType8 = 8,
	SurfaceType9 = 9,
	SurfaceType10 = 10,
	SurfaceType11 = 11,
	SurfaceType12 = 12,
	SurfaceType13 = 13,
	SurfaceType14 = 14,
	SurfaceType15 = 15,
	SurfaceType16 = 16,
	SurfaceType17 = 17,
	SurfaceType18 = 18,
	SurfaceType19 = 19,
	SurfaceType20 = 20,
	SurfaceType21 = 21,
	SurfaceType22 = 22,
	SurfaceType23 = 23,
	SurfaceType24 = 24,
	SurfaceType25 = 25,
	SurfaceType26 = 26,
	SurfaceType27 = 27,
	SurfaceType28 = 28,
	SurfaceType29 = 29,
	SurfaceType30 = 30,
	SurfaceType31 = 31,
	SurfaceType32 = 32,
	SurfaceType33 = 33,
	SurfaceType34 = 34,
	SurfaceType35 = 35,
	SurfaceType36 = 36,
	SurfaceType37 = 37,
	SurfaceType38 = 38,
	SurfaceType39 = 39,
	SurfaceType40 = 40,
	SurfaceType41 = 41,
	SurfaceType42 = 42,
	SurfaceType43 = 43,
	SurfaceType44 = 44,
	SurfaceType45 = 45,
	SurfaceType46 = 46,
	SurfaceType47 = 47,
	SurfaceType48 = 48,
	SurfaceType49 = 49,
	SurfaceType50 = 50,
	SurfaceType51 = 51,
	SurfaceType52 = 52,
	SurfaceType53 = 53,
	SurfaceType54 = 54,
	SurfaceType55 = 55,
	SurfaceType56 = 56,
	SurfaceType57 = 57,
	SurfaceType58 = 58,
	SurfaceType59 = 59,
	SurfaceType60 = 60,
	SurfaceType61 = 61,
	SurfaceType62 = 62,
	SurfaceType_Max = 63,
	EPhysicalSurface_MAX = 64
};

// Object: Enum PhysicsCore.ERadialImpulseFalloff
enum class ERadialImpulseFalloff : uint8_t
{
	RIF_Constant = 0,
	RIF_Linear = 1,
	RIF_MAX = 2
};

// Object: Enum PhysicsCore.ESleepFamily
enum class ESleepFamily : uint8_t
{
	Normal = 0,
	Sensitive = 1,
	Custom = 2,
	ESleepFamily_MAX = 3
};

// Object: Enum PhysicsCore.EAngularConstraintMotion
enum class EAngularConstraintMotion : uint8_t
{
	ACM_Free = 0,
	ACM_Limited = 1,
	ACM_Locked = 2,
	ACM_MAX = 3
};

// Object: Enum PhysicsCore.EConstraintFrame
enum class EConstraintFrame : uint8_t
{
	Frame1 = 0,
	Frame2 = 1,
	EConstraintFrame_MAX = 2
};

// Object: Enum PhysicsCore.EConstraintPlasticityType
enum class EConstraintPlasticityType : uint8_t
{
	CCPT_Free = 0,
	CCPT_Shrink = 1,
	CCPT_Grow = 2,
	CCPT_MAX = 3
};

// Object: Enum PhysicsCore.ELinearConstraintMotion
enum class ELinearConstraintMotion : uint8_t
{
	LCM_Free = 0,
	LCM_Limited = 1,
	LCM_Locked = 2,
	LCM_MAX = 3
};

// Object: Enum PhysicsCore.EFrictionCombineMode
enum class EFrictionCombineMode : uint8_t
{
	Average = 0,
	Min = 1,
	Multiply = 2,
	Max = 3
};

// Object: Enum PhysicsCore.EPhysicalMaterialSoftCollisionMode
enum class EPhysicalMaterialSoftCollisionMode : uint8_t
{
	None = 0,
	RelativeThickness = 1,
	AbsoluteThickess = 2,
	EPhysicalMaterialSoftCollisionMode_MAX = 3
};

// Package: NetCore
// Enums: 4

// Object: Enum NetCore.ENetworkFailure
enum class ENetworkFailure : uint8_t
{
	NetDriverAlreadyExists = 0,
	NetDriverCreateFailure = 1,
	NetDriverListenFailure = 2,
	ConnectionLost = 3,
	ConnectionTimeout = 4,
	FailureReceived = 5,
	OutdatedClient = 6,
	OutdatedServer = 7,
	PendingConnectionFailure = 8,
	NetGuidMismatch = 9,
	NetChecksumMismatch = 10,
	ENetworkFailure_MAX = 11
};

// Object: Enum NetCore.EReplicationSystem
enum class EReplicationSystem : uint8_t
{
	Default = 0,
	Generic = 1,
	Iris = 2,
	EReplicationSystem_MAX = 3
};

// Object: Enum NetCore.ENetCloseResult
enum class ENetCloseResult : uint8_t
{
	NetDriverAlreadyExists = 0,
	NetDriverCreateFailure = 1,
	NetDriverListenFailure = 2,
	ConnectionLost = 3,
	ConnectionTimeout = 4,
	FailureReceived = 5,
	OutdatedClient = 6,
	OutdatedServer = 7,
	PendingConnectionFailure = 8,
	NetGuidMismatch = 9,
	NetChecksumMismatch = 10,
	SecurityMalformedPacket = 11,
	SecurityInvalidData = 12,
	SecurityClosed = 13,
	Unknown = 14,
	Success = 15,
	Extended = 16,
	HostClosedConnection = 17,
	Disconnect = 18,
	Upgrade = 19,
	PreLoginFailure = 20,
	JoinFailure = 21,
	JoinSplitFailure = 22,
	AddressResolutionFailed = 23,
	RPCDoS = 24,
	Cleanup = 25,
	MissingLevelPackage = 26,
	PacketHandlerIncomingError = 27,
	ZeroLastByte = 28,
	ZeroSize = 29,
	ReadHeaderFail = 30,
	ReadHeaderExtraFail = 31,
	AckSequenceMismatch = 32,
	BunchBadChannelIndex = 33,
	BunchChannelNameFail = 34,
	BunchWrongChannelType = 35,
	BunchHeaderOverflow = 36,
	BunchDataOverflow = 37,
	BunchServerPackageMapExports = 38,
	BunchPrematureControlChannel = 39,
	BunchPrematureChannel = 40,
	BunchPrematureControlClose = 41,
	UnknownChannelType = 42,
	PrematureSend = 43,
	CorruptData = 44,
	SocketSendFailure = 45,
	BadChildConnectionIndex = 46,
	LogLimitInstant = 47,
	LogLimitSustained = 48,
	EncryptionFailure = 49,
	EncryptionTokenMissing = 50,
	ReceivedNetGUIDBunchFail = 51,
	ReceivedNetExtBunchFail = 52,
	MaxReliableExceeded = 53,
	ReceivedNextBunchFail = 54,
	ReceivedNextBunchQueueFail = 55,
	PartialInitialReliableDestroy = 56,
	PartialMergeReliableDestroy = 57,
	PartialInitialNonByteAligned = 58,
	PartialNonByteAligned = 59,
	PartialFinalPackageMapExports = 60,
	PartialTooLarge = 61,
	AlreadyOpen = 62,
	ReliableBeforeOpen = 63,
	ReliableBufferOverflow = 64,
	RPCReliableBufferOverflow = 65,
	ControlChannelClose = 66,
	ControlChannelEndianCheck = 67,
	ControlChannelPlayerChannelFail = 68,
	ControlChannelMessageUnknown = 69,
	ControlChannelMessageFail = 70,
	ControlChannelMessagePayloadFail = 71,
	ControlChannelBunchOverflowed = 72,
	ControlChannelQueueBunchOverflowed = 73,
	ClientHasMustBeMappedGUIDs = 74,
	ClientSentDestructionInfo = 75,
	UnregisteredMustBeMappedGUID = 76,
	ObjectReplicatorReceivedBunchFail = 77,
	ContentBlockFail = 78,
	ContentBlockHeaderRepLayoutFail = 79,
	ContentBlockHeaderIsActorFail = 80,
	ContentBlockHeaderObjFail = 81,
	ContentBlockHeaderPrematureEnd = 82,
	ContentBlockHeaderSubObjectActor = 83,
	ContentBlockHeaderBadParent = 84,
	ContentBlockHeaderInvalidCreate = 85,
	ContentBlockHeaderStablyNamedFail = 86,
	ContentBlockHeaderNoSubObjectClass = 87,
	ContentBlockHeaderUObjectSubObject = 88,
	ContentBlockHeaderAActorSubObject = 89,
	ContentBlockHeaderFail = 90,
	ContentBlockPayloadBitsFail = 91,
	FieldHeaderRepIndex = 92,
	FieldHeaderBadRepIndex = 93,
	FieldHeaderPayloadBitsFail = 94,
	FieldPayloadFail = 95,
	ReplicationChannelCountMaxedOut = 96,
	BeaconControlFlowError = 97,
	BeaconUnableToParsePacket = 98,
	BeaconAuthenticationFailure = 99,
	BeaconLoginInvalidIdError = 100,
	BeaconLoginInvalidAuthHandlerError = 101,
	BeaconAuthError = 102,
	BeaconSpawnClientWorldPackageNameError = 103,
	BeaconSpawnExistingActorError = 104,
	BeaconSpawnFailureError = 105,
	BeaconSpawnNetGUIDAckNoActor = 106,
	BeaconSpawnNetGUIDAckNoHost = 107,
	BeaconSpawnUnexpectedError = 108,
	IrisProtocolMismatch = 109,
	IrisNetRefHandleError = 110,
	FaultDisconnect = 111,
	NotRecoverable = 112,
	ENetCloseResult_MAX = 113
};

// Object: Enum NetCore.EFastArraySerializerDeltaFlags
enum class EFastArraySerializerDeltaFlags : uint8_t
{
	None = 0,
	HasBeenSerialized = 1,
	HasDeltaBeenRequested = 2,
	IsUsingDeltaSerialization = 4,
	EFastArraySerializerDeltaFlags_MAX = 5
};

// Package: IrisCore
// Enums: 2

// Object: Enum IrisCore.EDataStreamSendStatus
enum class EDataStreamSendStatus : uint8_t
{
	Pause = 0,
	Send = 1,
	EDataStreamSendStatus_MAX = 2
};

// Object: Enum IrisCore.ENetObjectCountLimiterMode
enum class ENetObjectCountLimiterMode : uint8_t
{
	RoundRobin = 0,
	Fill = 1,
	ENetObjectCountLimiterMode_MAX = 2
};

// Package: MeshDescription
// Enums: 1

// Object: Enum MeshDescription.EComputeNTBsOptions
enum class EComputeNTBsOptions : uint8_t
{
	None = 0,
	Normals = 1,
	Tangents = 2,
	WeightedNTBs = 4,
	EComputeNTBsOptions_MAX = 5
};

// Package: DataflowCore
// Enums: 5

// Object: Enum DataflowCore.EDataflowImageResolution
enum class EDataflowImageResolution : uint16_t
{
	Resolution16 = 16,
	Resolution32 = 32,
	Resolution64 = 64,
	Resolution128 = 128,
	Resolution256 = 256,
	Resolution512 = 512,
	Resolution1024 = 1024,
	Resolution2048 = 2048,
	Resolution4096 = 4096,
	Resolution8192 = 8192,
	EDataflowImageResolution_MAX = 8193
};

// Object: Enum DataflowCore.EDataflowImageChannel
enum class EDataflowImageChannel : uint8_t
{
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EDataflowImageChannel_MAX = 4
};

// Object: Enum DataflowCore.EDataflowImageCombineResolutionOption
enum class EDataflowImageCombineResolutionOption : uint8_t
{
	Lowest = 0,
	Highest = 1,
	UserDefined = 2,
	EDataflowImageCombineResolutionOption_MAX = 3
};

// Object: Enum DataflowCore.EDataflowMathConstantsEnum
enum class EDataflowMathConstantsEnum : uint8_t
{
	Dataflow_Math_Constants_Pi = 0,
	Dataflow_Math_Constants_HalfPi = 1,
	Dataflow_Math_Constants_TwoPi = 2,
	Dataflow_Math_Constants_FourPi = 3,
	Dataflow_Math_Constants_InvPi = 4,
	Dataflow_Math_Constants_InvTwoPi = 5,
	Dataflow_Math_Constants_Sqrt2 = 6,
	Dataflow_Math_Constants_InvSqrt2 = 7,
	Dataflow_Math_Constants_Sqrt3 = 8,
	Dataflow_Math_Constants_InvSqrt3 = 9,
	Dataflow_Math_Constants_E = 10,
	Dataflow_Math_Constants_Gamma = 11,
	Dataflow_Math_Constants_GoldenRatio = 12,
	Dataflow_Math_Constants_Max = 13
};

// Object: Enum DataflowCore.EDataflowSelectionType
enum class EDataflowSelectionType : uint8_t
{
	Transform = 0,
	Vertices = 1,
	Faces = 2,
	Geometry = 3,
	EDataflowSelectionType_MAX = 4
};

// Package: PropertyPath
// Enums: 1

// Object: Enum PropertyPath.EPropertyPathTestEnum
enum class EPropertyPathTestEnum : uint8_t
{
	One = 0,
	Two = 1,
	Three = 2,
	Four = 3,
	EPropertyPathTestEnum_MAX = 4
};

// Package: AudioExtensions
// Enums: 3

// Object: Enum AudioExtensions.ESoundWaveCloudStreamingPlatformProjectEnableType
enum class ESoundWaveCloudStreamingPlatformProjectEnableType : uint8_t
{
	Enabled = 0,
	Disabled = 1,
	ESoundWaveCloudStreamingPlatformProjectEnableType_MAX = 2
};

// Object: Enum AudioExtensions.ESoundWaveCloudStreamingPlatformEnableType
enum class ESoundWaveCloudStreamingPlatformEnableType : uint8_t
{
	Inherited = 0,
	Disabled = 1,
	SWC_MultipleValues = 2,
	ESoundWaveCloudStreamingPlatformEnableType_MAX = 3
};

// Object: Enum AudioExtensions.EAudioParameterType
enum class EAudioParameterType : uint8_t
{
	None = 0,
	Boolean = 1,
	Integer = 2,
	Float = 3,
	String = 4,
	Object = 5,
	NoneArray = 6,
	BooleanArray = 7,
	IntegerArray = 8,
	FloatArray = 9,
	StringArray = 10,
	ObjectArray = 11,
	Trigger = 12,
	COUNT = 13,
	EAudioParameterType_MAX = 14
};

// Package: TypedElementFramework
// Enums: 1

// Object: Enum TypedElementFramework.ESCCModification
enum class ESCCModification : uint8_t
{
	Modified = 0,
	Added = 1,
	Removed = 2,
	Conflicted = 3,
	ESCCModification_MAX = 4
};

// Package: TypedElementRuntime
// Enums: 2

// Object: Enum TypedElementRuntime.ETypedElementChildInclusionMethod
enum class ETypedElementChildInclusionMethod : uint8_t
{
	None = 0,
	Immediate = 1,
	Recursive = 2,
	ETypedElementChildInclusionMethod_MAX = 3
};

// Object: Enum TypedElementRuntime.ETypedElementSelectionMethod
enum class ETypedElementSelectionMethod : uint8_t
{
	Primary = 0,
	Secondary = 1,
	FromSecondary = 2,
	ETypedElementSelectionMethod_MAX = 3
};

// Package: AssetRegistry
// Enums: 1

// Object: Enum AssetRegistry.EAssetRegistrySortOrder
enum class EAssetRegistrySortOrder : uint8_t
{
	Ascending = 0,
	Descending = 1,
	EAssetRegistrySortOrder_MAX = 2
};

// Package: ClothingSystemRuntimeInterface
// Enums: 1

// Object: Enum ClothingSystemRuntimeInterface.EClothingTeleportMode
enum class EClothingTeleportMode : uint8_t
{
	None = 0,
	Teleport = 1,
	TeleportAndReset = 2,
	HardReset = 3,
	EClothingTeleportMode_MAX = 4
};

// Package: ImageWriteQueue
// Enums: 1

// Object: Enum ImageWriteQueue.EDesiredImageFormat
enum class EDesiredImageFormat : uint8_t
{
	PNG = 0,
	JPG = 1,
	BMP = 2,
	EXR = 3,
	EDesiredImageFormat_MAX = 4
};

// Package: HeadMountedDisplay
// Enums: 12

// Object: Enum HeadMountedDisplay.EOrientPositionSelector
enum class EOrientPositionSelector : uint8_t
{
	Orientation = 0,
	Position = 1,
	OrientationAndPosition = 2,
	EOrientPositionSelector_MAX = 3
};

// Object: Enum HeadMountedDisplay.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8_t
{
	View = 0,
	LocalFloor = 1,
	Local = 2,
	Stage = 3,
	CustomOpenXR = 4,
	EHMDTrackingOrigin_MAX = 5
};

// Object: Enum HeadMountedDisplay.EHMDWornState
enum class EHMDWornState : uint8_t
{
	Unknown = 0,
	Worn = 1,
	NotWorn = 2,
	EHMDWornState_MAX = 3
};

// Object: Enum HeadMountedDisplay.EXRDeviceConnectionResult
enum class EXRDeviceConnectionResult : uint8_t
{
	NoTrackingSystem = 0,
	FeatureNotSupported = 1,
	NoValidViewport = 2,
	MiscFailure = 3,
	Success = 4,
	EXRDeviceConnectionResult_MAX = 5
};

// Object: Enum HeadMountedDisplay.EXRSystemFlags
enum class EXRSystemFlags : uint8_t
{
	NoFlags = 0,
	IsAR = 1,
	IsTablet = 2,
	IsHeadMounted = 4,
	SupportsHandTracking = 8,
	EXRSystemFlags_MAX = 9
};

// Object: Enum HeadMountedDisplay.ESpectatorScreenMode
enum class ESpectatorScreenMode : uint8_t
{
	Disabled = 0,
	SingleEyeLetterboxed = 1,
	Undistorted = 2,
	Distorted = 3,
	SingleEye = 4,
	SingleEyeCroppedToFill = 5,
	Texture = 6,
	TexturePlusEye = 7,
	ESpectatorScreenMode_MAX = 8
};

// Object: Enum HeadMountedDisplay.EXRTrackedDeviceType
enum class EXRTrackedDeviceType : uint16_t
{
	HeadMountedDisplay = 0,
	Controller = 1,
	TrackingReference = 2,
	Tracker = 3,
	Other = 4,
	Invalid = 254,
	Any = 255,
	EXRTrackedDeviceType_MAX = 256
};

// Object: Enum HeadMountedDisplay.EHandKeypoint
enum class EHandKeypoint : uint8_t
{
	Palm = 0,
	Wrist = 1,
	ThumbMetacarpal = 2,
	ThumbProximal = 3,
	ThumbDistal = 4,
	ThumbTip = 5,
	IndexMetacarpal = 6,
	IndexProximal = 7,
	IndexIntermediate = 8,
	IndexDistal = 9,
	IndexTip = 10,
	MiddleMetacarpal = 11,
	MiddleProximal = 12,
	MiddleIntermediate = 13,
	MiddleDistal = 14,
	MiddleTip = 15,
	RingMetacarpal = 16,
	RingProximal = 17,
	RingIntermediate = 18,
	RingDistal = 19,
	RingTip = 20,
	LittleMetacarpal = 21,
	LittleProximal = 22,
	LittleIntermediate = 23,
	LittleDistal = 24,
	LittleTip = 25,
	EHandKeypoint_MAX = 26
};

// Object: Enum HeadMountedDisplay.EXRVisualType
enum class EXRVisualType : uint8_t
{
	Controller = 0,
	Hand = 1,
	EXRVisualType_MAX = 2
};

// Object: Enum HeadMountedDisplay.EXRSpaceType
enum class EXRSpaceType : uint8_t
{
	UnrealWorldSpace = 0,
	XRTrackingSpace = 1,
	EXRSpaceType_MAX = 2
};

// Object: Enum HeadMountedDisplay.EXRControllerPoseType
enum class EXRControllerPoseType : uint8_t
{
	Aim = 0,
	Grip = 1,
	Palm = 2,
	EXRControllerPoseType_MAX = 3
};

// Object: Enum HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8_t
{
	NotTracked = 0,
	InertialOnly = 1,
	Tracked = 2,
	ETrackingStatus_MAX = 3
};

// Package: EyeTracker
// Enums: 1

// Object: Enum EyeTracker.EEyeTrackerStatus
enum class EEyeTrackerStatus : uint8_t
{
	NotConnected = 0,
	NotTracking = 1,
	Tracking = 2,
	EEyeTrackerStatus_MAX = 3
};

// Package: Renderer
// Enums: 1

// Object: Enum Renderer.ESparseVolumeTexturePreviewAttribute
enum class ESparseVolumeTexturePreviewAttribute : uint8_t
{
	ESVTPA_AttributesA_R = 0,
	ESVTPA_AttributesA_G = 1,
	ESVTPA_AttributesA_B = 2,
	ESVTPA_AttributesA_A = 3,
	ESVTPA_AttributesB_R = 4,
	ESVTPA_AttributesB_G = 5,
	ESVTPA_AttributesB_B = 6,
	ESVTPA_AttributesB_A = 7,
	ESVTPA_MAX = 8
};

// Package: Foliage
// Enums: 5

// Object: Enum Foliage.FoliageVertexColorMask
enum class EFoliageVertexColorMask : uint8_t
{
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red = 1,
	FOLIAGEVERTEXCOLORMASK_Green = 2,
	FOLIAGEVERTEXCOLORMASK_Blue = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha = 4,
	FOLIAGEVERTEXCOLORMASK_MAX = 5
};

// Object: Enum Foliage.EVertexColorMaskChannel
enum class EVertexColorMaskChannel : uint8_t
{
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	MAX_None = 4,
	EVertexColorMaskChannel_MAX = 5
};

// Object: Enum Foliage.EFoliageScaling
enum class EFoliageScaling : uint8_t
{
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	LockXZ = 3,
	LockYZ = 4,
	EFoliageScaling_MAX = 5
};

// Object: Enum Foliage.ESimulationOverlap
enum class ESimulationOverlap : uint8_t
{
	CollisionOverlap = 0,
	ShadeOverlap = 1,
	None = 2,
	ESimulationOverlap_MAX = 3
};

// Object: Enum Foliage.ESimulationQuery
enum class ESimulationQuery : uint8_t
{
	None = 0,
	CollisionOverlap = 1,
	ShadeOverlap = 2,
	AnyOverlap = 3,
	ESimulationQuery_MAX = 4
};

// Package: Landscape
// Enums: 24

// Object: Enum Landscape.ERTDrawingType
enum class ERTDrawingType : uint8_t
{
	RTAtlas = 0,
	RTAtlasToNonAtlas = 1,
	RTNonAtlasToAtlas = 2,
	RTNonAtlas = 3,
	RTMips = 4,
	ERTDrawingType_MAX = 5
};

// Object: Enum Landscape.EHeightmapRTType
enum class EHeightmapRTType : uint8_t
{
	HeightmapRT_CombinedAtlas = 0,
	HeightmapRT_CombinedNonAtlas = 1,
	HeightmapRT_Scratch1 = 2,
	HeightmapRT_Scratch2 = 3,
	HeightmapRT_Scratch3 = 4,
	HeightmapRT_Mip1 = 5,
	HeightmapRT_Mip2 = 6,
	HeightmapRT_Mip3 = 7,
	HeightmapRT_Mip4 = 8,
	HeightmapRT_Mip5 = 9,
	HeightmapRT_Mip6 = 10,
	HeightmapRT_Mip7 = 11,
	HeightmapRT_Count = 12,
	HeightmapRT_MAX = 13
};

// Object: Enum Landscape.EWeightmapRTType
enum class EWeightmapRTType : uint8_t
{
	WeightmapRT_Scratch_RGBA = 0,
	WeightmapRT_Scratch1 = 1,
	WeightmapRT_Scratch2 = 2,
	WeightmapRT_Scratch3 = 3,
	WeightmapRT_Mip0 = 4,
	WeightmapRT_Mip1 = 5,
	WeightmapRT_Mip2 = 6,
	WeightmapRT_Mip3 = 7,
	WeightmapRT_Mip4 = 8,
	WeightmapRT_Mip5 = 9,
	WeightmapRT_Mip6 = 10,
	WeightmapRT_Mip7 = 11,
	WeightmapRT_Count = 12,
	WeightmapRT_MAX = 13
};

// Object: Enum Landscape.ELandscapeBlendMode
enum class ELandscapeBlendMode : uint8_t
{
	LSBM_AdditiveBlend = 0,
	LSBM_AlphaBlend = 1,
	LSBM_MAX = 2
};

// Object: Enum Landscape.ELandscapeClearMode
enum class ELandscapeClearMode : uint8_t
{
	Clear_Weightmap = 1,
	Clear_Heightmap = 2,
	Clear_All = 3,
	Clear_MAX = 4
};

// Object: Enum Landscape.ELandscapeToolTargetType
enum class ELandscapeToolTargetType : uint8_t
{
	Heightmap = 0,
	Weightmap = 1,
	Visibility = 2,
	Invalid = 3,
	Count = 4,
	ELandscapeToolTargetType_MAX = 5
};

// Object: Enum Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8_t
{
	LGT_None = 0,
	LGT_Height = 1,
	LGT_Weight = 2,
	LGT_MAX = 3
};

// Object: Enum Landscape.ELandscapeGizmoSnapType
enum class ELandscapeGizmoSnapType : uint8_t
{
	None = 0,
	Component = 1,
	Texel = 2,
	ELandscapeGizmoSnapType_MAX = 3
};

// Object: Enum Landscape.EGrassScaling
enum class EGrassScaling : uint8_t
{
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	EGrassScaling_MAX = 3
};

// Object: Enum Landscape.ESplineModulationColorMask
enum class ESplineModulationColorMask : uint8_t
{
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	ESplineModulationColorMask_MAX = 4
};

// Object: Enum Landscape.ELandscapeDirtyingMode
enum class ELandscapeDirtyingMode : uint8_t
{
	Auto = 0,
	InLandscapeModeOnly = 1,
	InLandscapeModeAndUserTriggeredChanges = 2,
	ELandscapeDirtyingMode_MAX = 3
};

// Object: Enum Landscape.LandscapeSplineMeshOrientation
enum class ELandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp = 0,
	LSMO_YUp = 1,
	LSMO_MAX = 2
};

// Object: Enum Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend = 0,
	LB_AlphaBlend = 1,
	LB_HeightBlend = 2,
	LB_MAX = 3
};

// Object: Enum Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto = 0,
	TCMT_XY = 1,
	TCMT_XZ = 2,
	TCMT_YZ = 3,
	TCMT_MAX = 4
};

// Object: Enum Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None = 0,
	LCCT_CustomUV0 = 1,
	LCCT_CustomUV1 = 2,
	LCCT_CustomUV2 = 3,
	LCCT_WeightMapUV = 4,
	LCCT_MAX = 5
};

// Object: Enum Landscape.ELandscapeResizeMode
enum class ELandscapeResizeMode : uint8_t
{
	Resample = 0,
	Clip = 1,
	Expand = 2,
	ELandscapeResizeMode_MAX = 3
};

// Object: Enum Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8_t
{
	Additive = 0,
	Layered = 1,
	ELandscapeImportAlphamapType_MAX = 2
};

// Object: Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8_t
{
	None = 0,
	UseMaxLayers = 1,
	ExistingOnly = 2,
	UseComponentAllowList = 3,
	ELandscapeLayerPaintingRestriction_MAX = 4
};

// Object: Enum Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8_t
{
	Default = 0,
	Alphabetical = 1,
	UserSpecific = 2,
	ELandscapeLayerDisplayMode_MAX = 3
};

// Object: Enum Landscape.ELandscapeHLODTextureSizePolicy
enum class ELandscapeHLODTextureSizePolicy : uint8_t
{
	AutomaticSize = 0,
	SpecificSize = 1,
	ELandscapeHLODTextureSizePolicy_MAX = 2
};

// Object: Enum Landscape.ELandscapeHLODMeshSourceLODPolicy
enum class ELandscapeHLODMeshSourceLODPolicy : uint8_t
{
	AutomaticLOD = 0,
	SpecificLOD = 1,
	LowestDetailLOD = 2,
	ELandscapeHLODMeshSourceLODPolicy_MAX = 3
};

// Object: Enum Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8_t
{
	Linear = 0,
	SquareRoot = 1,
	ELandscapeLODFalloff_MAX = 2
};

// Object: Enum Landscape.ELandscapeTextureType
enum class ELandscapeTextureType : uint8_t
{
	Unknown = 0,
	Heightmap = 1,
	Weightmap = 2,
	ELandscapeTextureType_MAX = 3
};

// Object: Enum Landscape.ELandscapeTextureUsage
enum class ELandscapeTextureUsage : uint8_t
{
	Unknown = 0,
	EditLayerData = 1,
	FinalData = 2,
	ELandscapeTextureUsage_MAX = 3
};

// Package: TimeManagement
// Enums: 3

// Object: Enum TimeManagement.EFrameNumberDisplayFormats
enum class EFrameNumberDisplayFormats : uint8_t
{
	NonDropFrameTimecode = 0,
	DropFrameTimecode = 1,
	Seconds = 2,
	Frames = 3,
	Custom = 4,
	MAX_Count = 5,
	EFrameNumberDisplayFormats_MAX = 6
};

// Object: Enum TimeManagement.ETimedDataInputEvaluationType
enum class ETimedDataInputEvaluationType : uint8_t
{
	None = 0,
	Timecode = 1,
	PlatformTime = 2,
	ETimedDataInputEvaluationType_MAX = 3
};

// Object: Enum TimeManagement.ETimedDataInputState
enum class ETimedDataInputState : uint8_t
{
	Connected = 0,
	Unresponsive = 1,
	Disconnected = 2,
	ETimedDataInputState_MAX = 3
};

// Package: MovieScene
// Enums: 25

// Object: Enum MovieScene.ENavigationToolItemFlags
enum class ENavigationToolItemFlags : uint8_t
{
	None = 0,
	IgnorePendingKill = 1,
	PendingRemoval = 2,
	Expanded = 4,
	ENavigationToolItemFlags_MAX = 5
};

// Object: Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8_t
{
	Auto = 0,
	User = 1,
	Break = 2,
	Linear = 3,
	Constant = 4,
	SmartAuto = 5,
	EMovieSceneKeyInterpolation_MAX = 6
};

// Object: Enum MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8_t
{
	KeepState = 0,
	RestoreState = 1,
	ProjectDefault = 2,
	EMovieSceneCompletionMode_MAX = 3
};

// Object: Enum MovieScene.EMovieSceneConditionScope
enum class EMovieSceneConditionScope : uint8_t
{
	Global = 0,
	Binding = 1,
	OwnerObject = 2,
	EMovieSceneConditionScope_MAX = 3
};

// Object: Enum MovieScene.EMovieSceneConditionCheckFrequency
enum class EMovieSceneConditionCheckFrequency : uint8_t
{
	Once = 0,
	OnTick = 1,
	EMovieSceneConditionCheckFrequency_MAX = 2
};

// Object: Enum MovieScene.EMovieScenePlayerStatus
enum class EMovieScenePlayerStatus : uint8_t
{
	Stopped = 0,
	Playing = 1,
	Scrubbing = 2,
	Jumping = 3,
	Stepping = 4,
	Paused = 5,
	MAX = 6
};

// Object: Enum MovieScene.EMovieSceneEvaluationType
enum class EMovieSceneEvaluationType : uint8_t
{
	FrameLocked = 0,
	WithSubFrames = 1,
	EMovieSceneEvaluationType_MAX = 2
};

// Object: Enum MovieScene.EUpdateClockSource
enum class EUpdateClockSource : uint8_t
{
	Tick = 0,
	Platform = 1,
	Audio = 2,
	RelativeTimecode = 3,
	Timecode = 4,
	PlayEveryFrame = 5,
	Custom = 6,
	EUpdateClockSource_MAX = 7
};

// Object: Enum MovieScene.EMovieSceneSequenceFlags
enum class EMovieSceneSequenceFlags : uint8_t
{
	None = 0,
	Volatile = 1,
	BlockingEvaluation = 2,
	DynamicWeighting = 3,
	InheritedFlags = 4,
	EMovieSceneSequenceFlags_MAX = 5
};

// Object: Enum MovieScene.EMovieSceneServerClientMask
enum class EMovieSceneServerClientMask : uint8_t
{
	None = 0,
	Server = 1,
	Client = 2,
	All = 3,
	EMovieSceneServerClientMask_MAX = 4
};

// Object: Enum MovieScene.EMovieSceneGroupConditionOperator
enum class EMovieSceneGroupConditionOperator : uint8_t
{
	And = 0,
	Or = 1,
	Xor = 2,
	EMovieSceneGroupConditionOperator_MAX = 3
};

// Object: Enum MovieScene.EMovieSceneSubSectionFlags
enum class EMovieSceneSubSectionFlags : uint8_t
{
	None = 0,
	OverrideKeepState = 1,
	OverrideRestoreState = 2,
	IgnoreHierarchicalBias = 3,
	BlendHierarchicalBias = 4,
	AnyRestoreStateOverride = 5,
	EMovieSceneSubSectionFlags_MAX = 6
};

// Object: Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8_t
{
	None = 0,
	PreRoll = 1,
	PostRoll = 2,
	ForceKeepState = 4,
	ForceRestoreState = 8,
	ESectionEvaluationFlags_MAX = 9
};

// Object: Enum MovieScene.EMovieSceneCompletionModeOverride
enum class EMovieSceneCompletionModeOverride : uint8_t
{
	None = 0,
	ForceKeepState = 1,
	ForceRestoreState = 2,
	EMovieSceneCompletionModeOverride_MAX = 3
};

// Object: Enum MovieScene.EMovieSceneTimeUnit
enum class EMovieSceneTimeUnit : uint8_t
{
	DisplayRate = 0,
	TickResolution = 1,
	EMovieSceneTimeUnit_MAX = 2
};

// Object: Enum MovieScene.EMovieSceneTimeWarpType
enum class EMovieSceneTimeWarpType : uint8_t
{
	FixedPlayRate = 0,
	Custom = 1,
	FixedTime = 2,
	FrameRate = 3,
	Loop = 4,
	Clamp = 5,
	LoopFloat = 6,
	ClampFloat = 7,
	EMovieSceneTimeWarpType_MAX = 8
};

// Object: Enum MovieScene.EMovieSceneSequenceCompilerMask
enum class EMovieSceneSequenceCompilerMask : uint8_t
{
	Hierarchy = 0,
	EvaluationTemplate = 1,
	EvaluationTemplateField = 2,
	EntityComponentField = 3,
	None = 4,
	EMovieSceneSequenceCompilerMask_MAX = 5
};

// Object: Enum MovieScene.EMovieSceneBlendType
enum class EMovieSceneBlendType : uint8_t
{
	Invalid = 0,
	Absolute = 1,
	Additive = 2,
	Relative = 4,
	AdditiveFromBase = 8,
	Override = 16,
	EMovieSceneBlendType_MAX = 17
};

// Object: Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8_t
{
	Static = 0,
	Swept = 1,
	EEvaluationMethod_MAX = 2
};

// Object: Enum MovieScene.EMovieSceneBreadcrumbMode
enum class EMovieSceneBreadcrumbMode : uint8_t
{
	Sparse = 0,
	Dense = 1,
	EMovieSceneBreadcrumbMode_MAX = 2
};

// Object: Enum MovieScene.EMovieSceneBuiltInEasing
enum class EMovieSceneBuiltInEasing : uint8_t
{
	Linear = 0,
	SinIn = 1,
	SinOut = 2,
	SinInOut = 3,
	QuadIn = 4,
	QuadOut = 5,
	QuadInOut = 6,
	Cubic = 7,
	CubicIn = 8,
	CubicOut = 9,
	CubicInOut = 10,
	HermiteCubicInOut = 11,
	QuartIn = 12,
	QuartOut = 13,
	QuartInOut = 14,
	QuintIn = 15,
	QuintOut = 16,
	QuintInOut = 17,
	ExpoIn = 18,
	ExpoOut = 19,
	ExpoInOut = 20,
	CircIn = 21,
	CircOut = 22,
	CircInOut = 23,
	Custom = 24,
	EMovieSceneBuiltInEasing_MAX = 25
};

// Object: Enum MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8_t
{
	Local = 0,
	Root = 1,
	Unused = 2,
	EMovieSceneObjectBindingSpace_MAX = 3
};

// Object: Enum MovieScene.EUpdatePositionMethod
enum class EUpdatePositionMethod : uint8_t
{
	Play = 0,
	Jump = 1,
	Scrub = 2,
	EUpdatePositionMethod_MAX = 3
};

// Object: Enum MovieScene.EMovieScenePositionType
enum class EMovieScenePositionType : uint8_t
{
	Frame = 0,
	Time = 1,
	MarkedFrame = 2,
	Timecode = 3,
	EMovieScenePositionType_MAX = 4
};

// Object: Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8_t
{
	InnerSequence = 0,
	RootSequence = 1,
	External = 2,
	ESpawnOwnership_MAX = 3
};

// Package: DataflowEngine
// Enums: 3

// Object: Enum DataflowEngine.EDataflowDebugDrawRenderType
enum class EDataflowDebugDrawRenderType : uint8_t
{
	Wireframe = 0,
	Shaded = 1,
	EDataflowDebugDrawRenderType_MAX = 2
};

// Object: Enum DataflowEngine.EDataflowSphereCoveringColorMethod
enum class EDataflowSphereCoveringColorMethod : uint8_t
{
	Single = 0,
	ColorByRadius = 1,
	Random = 2,
	EDataflowSphereCoveringColorMethod_MAX = 3
};

// Object: Enum DataflowEngine.EDataflowType
enum class EDataflowType : uint8_t
{
	Construction = 0,
	Simulation = 1,
	EDataflowType_MAX = 2
};

// Package: ChaosSolverEngine
// Enums: 3

// Object: Enum ChaosSolverEngine.EChaosVDRemoteSessionAttributes
enum class EChaosVDRemoteSessionAttributes : uint8_t
{
	None = 0,
	SupportsDataChannelChange = 1,
	CanExpire = 2,
	IsMultiSessionWrapper = 4,
	EChaosVDRemoteSessionAttributes_MAX = 5
};

// Object: Enum ChaosSolverEngine.EChaosVDRemoteSessionReadyState
enum class EChaosVDRemoteSessionReadyState : uint8_t
{
	Ready = 0,
	Busy = 1,
	EChaosVDRemoteSessionReadyState_MAX = 2
};

// Object: Enum ChaosSolverEngine.EClusterConnectionTypeEnum
enum class EClusterConnectionTypeEnum : uint8_t
{
	Chaos_PointImplicit = 0,
	Chaos_DelaunayTriangulation = 1,
	Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
	Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
	Chaos_BoundsOverlapFilteredDelaunayTriangulation = 4,
	Chaos_None = 5,
	Chaos_EClsuterCreationParameters_Max = 6,
	Chaos_MAX = 7
};

// Package: GeometryCollectionEngine
// Enums: 7

// Object: Enum GeometryCollectionEngine.ECollectionAttributeEnum
enum class ECollectionAttributeEnum : uint8_t
{
	Chaos_Active = 0,
	Chaos_DynamicState = 1,
	Chaos_CollisionGroup = 2,
	Chaos_Max = 3
};

// Object: Enum GeometryCollectionEngine.ECollectionGroupEnum
enum class ECollectionGroupEnum : uint8_t
{
	Chaos_Traansform = 0,
	Chaos_Max = 1
};

// Object: Enum GeometryCollectionEngine.EChaosBreakingSortMethod
enum class EChaosBreakingSortMethod : uint8_t
{
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosBreakingSortMethod_MAX = 5
};

// Object: Enum GeometryCollectionEngine.EChaosCollisionSortMethod
enum class EChaosCollisionSortMethod : uint8_t
{
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByHighestImpulse = 3,
	SortByNearestFirst = 4,
	Count = 5,
	EChaosCollisionSortMethod_MAX = 6
};

// Object: Enum GeometryCollectionEngine.EChaosRemovalSortMethod
enum class EChaosRemovalSortMethod : uint8_t
{
	SortNone = 0,
	SortByHighestMass = 1,
	SortByNearestFirst = 2,
	Count = 3,
	EChaosRemovalSortMethod_MAX = 4
};

// Object: Enum GeometryCollectionEngine.EChaosTrailingSortMethod
enum class EChaosTrailingSortMethod : uint8_t
{
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosTrailingSortMethod_MAX = 5
};

// Object: Enum GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t
{
	HideNone = 0,
	HideWithCollision = 1,
	HideSelected = 2,
	HideWholeCollection = 3,
	HideAll = 4,
	EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5
};

// Package: AnimGraphRuntime
// Enums: 34

// Object: Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8_t
{
	BMM_Ignore = 0,
	BMM_Replace = 1,
	BMM_Additive = 2,
	BMM_MAX = 3
};

// Object: Enum AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : uint8_t
{
	EIT_LocalSpace = 0,
	EIT_Additive = 1,
	EIT_MAX = 2
};

// Object: Enum AnimGraphRuntime.EEasingFuncType
enum class EEasingFuncType : uint8_t
{
	Linear = 0,
	Sinusoidal = 1,
	Cubic = 2,
	QuadraticInOut = 3,
	CubicInOut = 4,
	HermiteCubic = 5,
	QuarticInOut = 6,
	QuinticInOut = 7,
	CircularIn = 8,
	CircularOut = 9,
	CircularInOut = 10,
	ExpIn = 11,
	ExpOut = 12,
	ExpInOut = 13,
	CustomCurve = 14,
	EEasingFuncType_MAX = 15
};

// Object: Enum AnimGraphRuntime.ERotationComponent
enum class ERotationComponent : uint8_t
{
	EulerX = 0,
	EulerY = 1,
	EulerZ = 2,
	QuaternionAngle = 3,
	SwingAngle = 4,
	TwistAngle = 5,
	ERotationComponent_MAX = 6
};

// Object: Enum AnimGraphRuntime.EBlendListTransitionType
enum class EBlendListTransitionType : uint8_t
{
	StandardBlend = 0,
	Inertialization = 1,
	EBlendListTransitionType_MAX = 2
};

// Object: Enum AnimGraphRuntime.EBlendListChildUpdateMode
enum class EBlendListChildUpdateMode : uint8_t
{
	Default = 0,
	ResetChildOnActivate = 1,
	AlwaysTickChildren = 2,
	EBlendListChildUpdateMode_MAX = 3
};

// Object: Enum AnimGraphRuntime.EAnimFunctionCallSite
enum class EAnimFunctionCallSite : uint8_t
{
	OnInitialize = 0,
	OnUpdate = 1,
	OnBecomeRelevant = 2,
	OnEvaluate = 3,
	OnInitializePostRecursion = 4,
	OnUpdatePostRecursion = 5,
	OnBecomeRelevantPostRecursion = 6,
	OnEvaluatePostRecursion = 7,
	OnStartedBlendingOut = 8,
	OnStartedBlendingIn = 9,
	OnFinishedBlendingOut = 10,
	OnFinishedBlendingIn = 11,
	EAnimFunctionCallSite_MAX = 12
};

// Object: Enum AnimGraphRuntime.ELayeredBoneBlendMode
enum class ELayeredBoneBlendMode : uint8_t
{
	BranchFilter = 0,
	BlendMask = 1,
	ELayeredBoneBlendMode_MAX = 2
};

// Object: Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : uint8_t
{
	Add = 0,
	Scale = 1,
	Blend = 2,
	WeightedMovingAverage = 3,
	RemapCurve = 4,
	EModifyCurveApplyMode_MAX = 5
};

// Object: Enum AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8_t
{
	SwingAndTwist = 0,
	SwingOnly = 1,
	Translation = 2,
	EPoseDriverType_MAX = 3
};

// Object: Enum AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource : uint8_t
{
	Rotation = 0,
	Translation = 1,
	EPoseDriverSource_MAX = 2
};

// Object: Enum AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput : uint8_t
{
	DrivePoses = 0,
	DriveCurves = 1,
	EPoseDriverOutput_MAX = 2
};

// Object: Enum AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : uint8_t
{
	NamedSnapshot = 0,
	SnapshotPin = 1,
	ESnapshotSourceMode_MAX = 2
};

// Object: Enum AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8_t
{
	NoReset = 0,
	StartPosition = 1,
	ExplicitTime = 2,
	ESequenceEvalReinit_MAX = 3
};

// Object: Enum AnimGraphRuntime.ESwapRootBone
enum class ESwapRootBone : uint8_t
{
	SwapRootBone_Component = 0,
	SwapRootBone_Actor = 1,
	SwapRootBone_None = 2,
	SwapRootBone_MAX = 3
};

// Object: Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class EAnimPhysAngularConstraintType : uint8_t
{
	Angular = 0,
	Cone = 1,
	AnimPhysAngularConstraintType_MAX = 2
};

// Object: Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class EAnimPhysLinearConstraintType : uint8_t
{
	Free = 0,
	Limited = 1,
	AnimPhysLinearConstraintType_MAX = 2
};

// Object: Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class EAnimPhysSimSpaceType : uint8_t
{
	Component = 0,
	Actor = 1,
	World = 2,
	RootRelative = 3,
	BoneRelative = 4,
	AnimPhysSimSpaceType_MAX = 5
};

// Object: Enum AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8_t
{
	Inner = 0,
	Outer = 1,
	ESphericalLimitType_MAX = 2
};

// Object: Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8_t
{
	AddToInput = 0,
	ReplaceComponent = 1,
	AddToRefPose = 2,
	EDrivenBoneModificationMode_MAX = 3
};

// Object: Enum AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8_t
{
	Bone = 0,
	MorphTarget = 1,
	MaterialParameter = 2,
	EDrivenDestinationMode_MAX = 3
};

// Object: Enum AnimGraphRuntime.EConstraintOffsetOption
enum class EConstraintOffsetOption : uint8_t
{
	None = 0,
	Offset_RefPose = 1,
	EConstraintOffsetOption_MAX = 2
};

// Object: Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class ECopyBoneDeltaMode : uint8_t
{
	Accumulate = 0,
	Copy = 1,
	CopyBoneDeltaMode_MAX = 2
};

// Object: Enum AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8_t
{
	Linear = 0,
	Cubic = 1,
	Sinusoidal = 2,
	EaseInOutExponent2 = 3,
	EaseInOutExponent3 = 4,
	EaseInOutExponent4 = 5,
	EaseInOutExponent5 = 6,
	MAX = 7
};

// Object: Enum AnimGraphRuntime.ESimulationSpace
enum class ESimulationSpace : uint8_t
{
	ComponentSpace = 0,
	WorldSpace = 1,
	BaseBoneSpace = 2,
	ESimulationSpace_MAX = 3
};

// Object: Enum AnimGraphRuntime.ESimulationTiming
enum class ESimulationTiming : uint8_t
{
	Default = 0,
	Synchronous = 1,
	Deferred = 2,
	ESimulationTiming_MAX = 3
};

// Object: Enum AnimGraphRuntime.EScaleChainInitialLength
enum class EScaleChainInitialLength : uint8_t
{
	FixedDefaultLengthValue = 0,
	Distance = 1,
	ChainLength = 2,
	EScaleChainInitialLength_MAX = 3
};

// Object: Enum AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis : uint8_t
{
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	ESplineBoneAxis_MAX = 4
};

// Object: Enum AnimGraphRuntime.EWarpingEvaluationMode
enum class EWarpingEvaluationMode : uint8_t
{
	Manual = 0,
	Graph = 1,
	EWarpingEvaluationMode_MAX = 2
};

// Object: Enum AnimGraphRuntime.EWarpingVectorMode
enum class EWarpingVectorMode : uint8_t
{
	ComponentSpaceVector = 0,
	ActorSpaceVector = 1,
	WorldSpaceVector = 2,
	IKFootRootLocalSpaceVector = 3,
	EWarpingVectorMode_MAX = 4
};

// Object: Enum AnimGraphRuntime.ERBFSolverType
enum class ERBFSolverType : uint8_t
{
	Additive = 0,
	Interpolative = 1,
	ERBFSolverType_MAX = 2
};

// Object: Enum AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType : uint8_t
{
	Gaussian = 0,
	Exponential = 1,
	Linear = 2,
	Cubic = 3,
	Quintic = 4,
	DefaultFunction = 5,
	ERBFFunctionType_MAX = 6
};

// Object: Enum AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : uint8_t
{
	Euclidean = 0,
	Quaternion = 1,
	SwingAngle = 2,
	TwistAngle = 3,
	DefaultMethod = 4,
	ERBFDistanceMethod_MAX = 5
};

// Object: Enum AnimGraphRuntime.ERBFNormalizeMethod
enum class ERBFNormalizeMethod : uint8_t
{
	OnlyNormalizeAboveOne = 0,
	AlwaysNormalize = 1,
	NormalizeWithinMedian = 2,
	NoNormalization = 3,
	ERBFNormalizeMethod_MAX = 4
};

// Package: Constraints
// Enums: 1

// Object: Enum Constraints.EHandleEvent
enum class EHandleEvent : uint8_t
{
	LocalTransformUpdated = 0,
	GlobalTransformUpdated = 1,
	ComponentUpdated = 2,
	UpperDependencyUpdated = 3,
	Max = 4
};

// Package: AudioMixer
// Enums: 12

// Object: Enum AudioMixer.EAudioDeviceChangedRole
enum class EAudioDeviceChangedRole : uint8_t
{
	Invalid = 0,
	Console = 1,
	Multimedia = 2,
	Communications = 3,
	Count = 4,
	EAudioDeviceChangedRole_MAX = 5
};

// Object: Enum AudioMixer.EAudioDeviceChangedState
enum class EAudioDeviceChangedState : uint8_t
{
	Invalid = 0,
	Active = 1,
	Disabled = 2,
	NotPresent = 3,
	Unplugged = 4,
	Count = 5,
	EAudioDeviceChangedState_MAX = 6
};

// Object: Enum AudioMixer.EAudioMixerChannelType
enum class EAudioMixerChannelType : uint8_t
{
	FrontLeft = 0,
	FrontRight = 1,
	FrontCenter = 2,
	LowFrequency = 3,
	BackLeft = 4,
	BackRight = 5,
	FrontLeftOfCenter = 6,
	FrontRightOfCenter = 7,
	BackCenter = 8,
	SideLeft = 9,
	SideRight = 10,
	TopCenter = 11,
	TopFrontLeft = 12,
	TopFrontCenter = 13,
	TopFrontRight = 14,
	TopBackLeft = 15,
	TopBackCenter = 16,
	TopBackRight = 17,
	Unknown = 18,
	ChannelTypeCount = 19,
	DefaultChannel = 20,
	EAudioMixerChannelType_MAX = 21
};

// Object: Enum AudioMixer.EAudioMixerStreamDataFormatType
enum class EAudioMixerStreamDataFormatType : uint8_t
{
	Unknown = 0,
	Float = 1,
	Int16 = 2,
	Unsupported = 3,
	EAudioMixerStreamDataFormatType_MAX = 4
};

// Object: Enum AudioMixer.ESwapAudioOutputDeviceResultState
enum class ESwapAudioOutputDeviceResultState : uint8_t
{
	Failure = 0,
	Success = 1,
	None = 2,
	ESwapAudioOutputDeviceResultState_MAX = 3
};

// Object: Enum AudioMixer.ERequiredSubmixes
enum class ERequiredSubmixes : uint8_t
{
	Main = 0,
	BaseDefault = 1,
	Reverb = 2,
	EQ = 3,
	Count = 4,
	ERequiredSubmixes_MAX = 5
};

// Object: Enum AudioMixer.ESourceManagerRenderThreadPhase
enum class ESourceManagerRenderThreadPhase : uint8_t
{
	Begin = 0,
	PumpMpscCmds = 1,
	PumpCmds = 2,
	ProcessModulators = 3,
	UpdatePendingReleaseData = 4,
	GenerateSrcAudio_WithBusses = 5,
	ComputeBusses = 6,
	GenerateSrcAudio_WithoutBusses = 7,
	UpdateBusses = 8,
	SpatialInterface_OnAllSourcesProcessed = 9,
	SourceDataOverride_OnAllSourcesProcessed = 10,
	UpdateGameThreadCopies = 11,
	Finished = 12,
	ESourceManagerRenderThreadPhase_MAX = 13
};

// Object: Enum AudioMixer.EMusicalNoteName
enum class EMusicalNoteName : uint8_t
{
	C = 0,
	Db = 1,
	D = 2,
	Eb = 3,
	E = 4,
	F = 5,
	Gb = 6,
	G = 7,
	Ab = 8,
	A = 9,
	Bb = 10,
	B = 11,
	EMusicalNoteName_MAX = 12
};

// Object: Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8_t
{
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	UpwardsCompressor = 4,
	Count = 5,
	ESubmixEffectDynamicsProcessorType_MAX = 6
};

// Object: Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8_t
{
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsPeakMode_MAX = 4
};

// Object: Enum AudioMixer.ESubmixEffectDynamicsChannelLinkMode
enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t
{
	Disabled = 0,
	Average = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsChannelLinkMode_MAX = 4
};

// Object: Enum AudioMixer.ESubmixEffectDynamicsKeySource
enum class ESubmixEffectDynamicsKeySource : uint8_t
{
	Default = 0,
	AudioBus = 1,
	Submix = 2,
	Count = 3,
	ESubmixEffectDynamicsKeySource_MAX = 4
};

// Package: MovieSceneTracks
// Enums: 8

// Object: Enum MovieSceneTracks.EMovieSceneScalabilityConditionGroup
enum class EMovieSceneScalabilityConditionGroup : uint8_t
{
	ViewDistance = 0,
	AntiAliasing = 1,
	Shadow = 2,
	GlobalIllumination = 3,
	Reflection = 4,
	PostProcess = 5,
	Texture = 6,
	Effects = 7,
	Foliage = 8,
	Shading = 9,
	Landscape = 10,
	EMovieSceneScalabilityConditionGroup_MAX = 11
};

// Object: Enum MovieSceneTracks.EMovieSceneScalabilityConditionOperator
enum class EMovieSceneScalabilityConditionOperator : uint8_t
{
	LessThan = 0,
	LessThanOrEqualTo = 1,
	EqualTo = 2,
	GreaterThanOrEqualTo = 3,
	GreaterThan = 4,
	EMovieSceneScalabilityConditionOperator_MAX = 5
};

// Object: Enum MovieSceneTracks.EMovieSceneScalabilityConditionLevel
enum class EMovieSceneScalabilityConditionLevel : uint8_t
{
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Cinematic = 4,
	EMovieSceneScalabilityConditionLevel_MAX = 5
};

// Object: Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class EMovieScene3DPathSection_Axis : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	NEG_X = 3,
	NEG_Y = 4,
	NEG_Z = 5,
	MovieScene3DPathSection_MAX = 6
};

// Object: Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8_t
{
	Visible = 0,
	Hidden = 1,
	ELevelVisibility_MAX = 2
};

// Object: Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8_t
{
	Activate = 0,
	Deactivate = 1,
	Trigger = 2,
	EParticleKey_MAX = 3
};

// Object: Enum MovieSceneTracks.EFireEventsAtPosition
enum class EFireEventsAtPosition : uint8_t
{
	AtStartOfEvaluation = 0,
	AtEndOfEvaluation = 1,
	AfterSpawn = 2,
	EFireEventsAtPosition_MAX = 3
};

// Object: Enum MovieSceneTracks.EComponentMaterialType
enum class EComponentMaterialType : uint8_t
{
	Empty = 0,
	IndexedMaterial = 1,
	OverlayMaterial = 2,
	DecalMaterial = 3,
	VolumetricCloudMaterial = 4,
	EComponentMaterialType_MAX = 5
};

// Package: UMG
// Enums: 18

// Object: Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8_t
{
	Visible = 0,
	Collapsed = 1,
	Hidden = 2,
	HitTestInvisible = 3,
	SelfHitTestInvisible = 4,
	ESlateVisibility_MAX = 5
};

// Object: Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8_t
{
	Default = 0,
	Number = 1,
	Web = 2,
	Email = 3,
	Password = 4,
	AlphaNumeric = 5,
	EVirtualKeyboardType_MAX = 6
};

// Object: Enum UMG.ESlateAccessibleBehavior
enum class ESlateAccessibleBehavior : uint8_t
{
	NotAccessible = 0,
	Auto = 1,
	Summary = 2,
	Custom = 3,
	ToolTip = 4,
	ESlateAccessibleBehavior_MAX = 5
};

// Object: Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8_t
{
	Automatic = 0,
	Fill = 1,
	ESlateSizeRule_MAX = 2
};

// Object: Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8_t
{
	Forward = 0,
	Reverse = 1,
	PingPong = 2,
	EUMGSequencePlayMode_MAX = 3
};

// Object: Enum UMG.EDynamicBoxType
enum class EDynamicBoxType : uint8_t
{
	Horizontal = 0,
	Vertical = 1,
	Wrap = 2,
	VerticalWrap = 3,
	Radial = 4,
	Overlay = 5,
	EDynamicBoxType_MAX = 6
};

// Object: Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8_t
{
	None = 0,
	Designing = 1,
	ShowOutline = 2,
	ExecutePreConstruct = 4,
	Previewing = 8,
	EWidgetDesignFlags_MAX = 9
};

// Object: Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8_t
{
	World = 0,
	Screen = 1,
	EWidgetSpace_MAX = 2
};

// Object: Enum UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8_t
{
	RealTime = 0,
	GameTime = 1,
	EWidgetTimingPolicy_MAX = 2
};

// Object: Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8_t
{
	Opaque = 0,
	Masked = 1,
	Transparent = 2,
	EWidgetBlendMode_MAX = 3
};

// Object: Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8_t
{
	Plane = 0,
	Cylinder = 1,
	EWidgetGeometryMode_MAX = 2
};

// Object: Enum UMG.EWindowVisibility
enum class EWindowVisibility : uint8_t
{
	Visible = 0,
	SelfHitTestInvisible = 1,
	EWindowVisibility_MAX = 2
};

// Object: Enum UMG.ETickMode
enum class ETickMode : uint8_t
{
	Disabled = 0,
	Enabled = 1,
	Automatic = 2,
	ETickMode_MAX = 3
};

// Object: Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8_t
{
	World = 0,
	Mouse = 1,
	CenterScreen = 2,
	Custom = 3,
	EWidgetInteractionSource_MAX = 4
};

// Object: Enum UMG.EDragPivot
enum class EDragPivot : uint8_t
{
	MouseDown = 0,
	TopLeft = 1,
	TopCenter = 2,
	TopRight = 3,
	CenterLeft = 4,
	CenterCenter = 5,
	CenterRight = 6,
	BottomLeft = 7,
	BottomCenter = 8,
	BottomRight = 9,
	EDragPivot_MAX = 10
};

// Object: Enum UMG.EWidgetTickFrequency
enum class EWidgetTickFrequency : uint8_t
{
	Never = 0,
	Auto = 1,
	EWidgetTickFrequency_MAX = 2
};

// Object: Enum UMG.EWidgetAnimationEvent
enum class EWidgetAnimationEvent : uint8_t
{
	Started = 0,
	Finished = 1,
	EWidgetAnimationEvent_MAX = 2
};

// Object: Enum UMG.EBindingKind
enum class EBindingKind : uint8_t
{
	Function = 0,
	Property = 1,
	EBindingKind_MAX = 2
};

// Package: CinematicCamera
// Enums: 1

// Object: Enum CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod : uint8_t
{
	DoNotOverride = 0,
	Manual = 1,
	Tracking = 2,
	Disable = 3,
	MAX = 4
};

// Package: GameplayTags
// Enums: 4

// Object: Enum GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8_t
{
	Any = 0,
	All = 1,
	EGameplayContainerMatchType_MAX = 2
};

// Object: Enum GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8_t
{
	Undefined = 0,
	AnyTagsMatch = 1,
	AllTagsMatch = 2,
	NoTagsMatch = 3,
	AnyExprMatch = 4,
	AllExprMatch = 5,
	NoExprMatch = 6,
	EGameplayTagQueryExprType_MAX = 7
};

// Object: Enum GameplayTags.EGameplayTagSourceType
enum class EGameplayTagSourceType : uint8_t
{
	Native = 0,
	DefaultTagList = 1,
	TagList = 2,
	RestrictedTagList = 3,
	DataTable = 4,
	Invalid = 5,
	EGameplayTagSourceType_MAX = 6
};

// Object: Enum GameplayTags.EGameplayTagSelectionType
enum class EGameplayTagSelectionType : uint8_t
{
	None = 0,
	NonRestrictedOnly = 1,
	RestrictedOnly = 2,
	All = 3,
	EGameplayTagSelectionType_MAX = 4
};

// Package: MovieSceneCapture
// Enums: 2

// Object: Enum MovieSceneCapture.EHDRCaptureGamut
enum class EHDRCaptureGamut : uint8_t
{
	HCGM_Rec709 = 0,
	HCGM_P3DCI = 1,
	HCGM_Rec2020 = 2,
	HCGM_ACES = 3,
	HCGM_ACEScg = 4,
	HCGM_Linear = 5,
	HCGM_MAX = 6
};

// Object: Enum MovieSceneCapture.EMovieSceneCaptureProtocolState
enum class EMovieSceneCaptureProtocolState : uint8_t
{
	Idle = 0,
	Initialized = 1,
	Capturing = 2,
	Finalizing = 3,
	EMovieSceneCaptureProtocolState_MAX = 4
};

// Package: MediaAssets
// Enums: 9

// Object: Enum MediaAssets.MediaTextureOrientation
enum class EMediaTextureOrientation : uint8_t
{
	MTORI_Original = 0,
	MTORI_CW90 = 1,
	MTORI_CW180 = 2,
	MTORI_CW270 = 3,
	MTORI_MAX = 4
};

// Object: Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8_t
{
	Audio = 0,
	Caption = 1,
	Metadata = 2,
	Script = 3,
	Subtitle = 4,
	Text = 5,
	Video = 6,
	EMediaPlayerTrack_MAX = 7
};

// Object: Enum MediaAssets.EMediaTimeRangeBPType
enum class EMediaTimeRangeBPType : uint8_t
{
	Absolute = 0,
	Current = 1,
	EMediaTimeRangeBPType_MAX = 2
};

// Object: Enum MediaAssets.EMediaSoundChannels
enum class EMediaSoundChannels : uint8_t
{
	Mono = 0,
	Stereo = 1,
	Surround = 2,
	EMediaSoundChannels_MAX = 3
};

// Object: Enum MediaAssets.EMediaSoundComponentFFTSize
enum class EMediaSoundComponentFFTSize : uint8_t
{
	Min = 0,
	Small = 1,
	Medium = 2,
	Large = 3,
	EMediaSoundComponentFFTSize_MAX = 4
};

// Object: Enum MediaAssets.EMediaTextureVisibleMipsTiles
enum class EMediaTextureVisibleMipsTiles : uint8_t
{
	None = 0,
	Plane = 1,
	Sphere = 2,
	EMediaTextureVisibleMipsTiles_MAX = 3
};

// Object: Enum MediaAssets.EMediaAudioCaptureDeviceFilter
enum class EMediaAudioCaptureDeviceFilter : uint8_t
{
	None = 0,
	Card = 1,
	Microphone = 2,
	Software = 4,
	Unknown = 8,
	EMediaAudioCaptureDeviceFilter_MAX = 9
};

// Object: Enum MediaAssets.EMediaVideoCaptureDeviceFilter
enum class EMediaVideoCaptureDeviceFilter : uint8_t
{
	None = 0,
	Card = 1,
	Software = 2,
	Unknown = 4,
	Webcam = 8,
	EMediaVideoCaptureDeviceFilter_MAX = 9
};

// Object: Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
enum class EMediaWebcamCaptureDeviceFilter : uint8_t
{
	None = 0,
	DepthSensor = 1,
	Front = 2,
	Rear = 4,
	Unknown = 8,
	EMediaWebcamCaptureDeviceFilter_MAX = 9
};

// Package: MRMesh
// Enums: 1

// Object: Enum MRMesh.EMeshTrackerVertexColorMode
enum class EMeshTrackerVertexColorMode : uint8_t
{
	None = 0,
	Confidence = 1,
	Block = 2,
	EMeshTrackerVertexColorMode_MAX = 3
};

// Package: MoviePlayer
// Enums: 1

// Object: Enum MoviePlayer.EMoviePlaybackType
enum class EMoviePlaybackType : uint8_t
{
	MT_Normal = 0,
	MT_Looped = 1,
	MT_LoadingLoop = 2,
	MT_MAX = 3
};

// Package: MassEntity
// Enums: 8

// Object: Enum MassEntity.EMassCommandOperationType
enum class EMassCommandOperationType : uint8_t
{
	None = 0,
	Create = 1,
	Add = 2,
	Remove = 3,
	ChangeComposition = 4,
	Set = 5,
	Destroy = 6,
	MAX = 7
};

// Object: Enum MassEntity.EMassObservedOperation
enum class EMassObservedOperation : uint8_t
{
	Add = 0,
	Remove = 1,
	MAX = 2
};

// Object: Enum MassEntity.EProcessorExecutionFlags
enum class EProcessorExecutionFlags : uint8_t
{
	None = 0,
	Standalone = 1,
	Server = 2,
	Client = 3,
	Editor = 4,
	EditorWorld = 5,
	AllNetModes = 6,
	AllWorldModes = 7,
	All = 8,
	EProcessorExecutionFlags_MAX = 9
};

// Object: Enum MassEntity.EMassProcessingPhase
enum class EMassProcessingPhase : uint8_t
{
	PrePhysics = 0,
	StartPhysics = 1,
	DuringPhysics = 2,
	EndPhysics = 3,
	PostPhysics = 4,
	FrameEnd = 5,
	MAX = 6
};

// Object: Enum MassEntity.EActivationState
enum class EActivationState : uint8_t
{
	Inactive = 0,
	Active = 1,
	OneShot = 2,
	EActivationState_MAX = 3
};

// Object: Enum MassEntity.EMassQueryBasedPruning
enum class EMassQueryBasedPruning : uint8_t
{
	Prune = 0,
	Never = 1,
	Default = 2,
	EMassQueryBasedPruning_MAX = 3
};

// Object: Enum MassEntity.EMassFragmentAccess
enum class EMassFragmentAccess : uint8_t
{
	None = 0,
	ReadOnly = 1,
	ReadWrite = 2,
	MAX = 3
};

// Object: Enum MassEntity.EMassFragmentPresence
enum class EMassFragmentPresence : uint8_t
{
	All = 0,
	Any = 1,
	None = 2,
	Optional = 3,
	MAX = 4
};

// Package: ClothingSystemRuntimeCommon
// Enums: 3

// Object: Enum ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
enum class EClothingWindMethod_Legacy : uint8_t
{
	Legacy = 0,
	Accurate = 1,
	EClothingWindMethod_MAX = 2
};

// Object: Enum ClothingSystemRuntimeCommon.EWeightMapTargetCommon
enum class EWeightMapTargetCommon : uint8_t
{
	None = 0,
	MaxDistance = 1,
	BackstopDistance = 2,
	BackstopRadius = 3,
	AnimDriveStiffness = 4,
	AnimDriveDamping_DEPRECATED = 5,
	FirstUserTarget = 6,
	LastUserTarget = 200,
	TetherEndsMask = 201,
	EWeightMapTargetCommon_MAX = 202
};

// Object: Enum ClothingSystemRuntimeCommon.EClothMassMode
enum class EClothMassMode : uint8_t
{
	UniformMass = 0,
	TotalMass = 1,
	Density = 2,
	MaxClothMassMode = 3,
	EClothMassMode_MAX = 4
};

// Package: ClothingSystemRuntimeNv
// Enums: 1

// Object: Enum ClothingSystemRuntimeNv.EClothingWindMethodNv
enum class EClothingWindMethodNv : uint8_t
{
	Legacy = 0,
	Accurate = 1,
	EClothingWindMethodNv_MAX = 2
};

// Package: AndroidRuntimeSettings
// Enums: 9

// Object: Enum AndroidRuntimeSettings.EAndroidScreenOrientation
enum class EAndroidScreenOrientation : uint8_t
{
	Portrait = 0,
	ReversePortrait = 1,
	SensorPortrait = 2,
	Landscape = 3,
	ReverseLandscape = 4,
	SensorLandscape = 5,
	Sensor = 6,
	FullSensor = 7,
	EAndroidScreenOrientation_MAX = 8
};

// Object: Enum AndroidRuntimeSettings.EAndroidDepthBufferPreference
enum class EAndroidDepthBufferPreference : uint8_t
{
	Default = 0,
	Bits16 = 16,
	Bits24 = 24,
	Bits32 = 32,
	EAndroidDepthBufferPreference_MAX = 33
};

// Object: Enum AndroidRuntimeSettings.EAndroidInstallLocation
enum class EAndroidInstallLocation : uint8_t
{
	InternalOnly = 0,
	PreferExternal = 1,
	Auto = 2,
	EAndroidInstallLocation_MAX = 3
};

// Object: Enum AndroidRuntimeSettings.EOculusMobileDevice
enum class EOculusMobileDevice : uint8_t
{
	Quest = 1,
	Quest2 = 2,
	EOculusMobileDevice_MAX = 3
};

// Object: Enum AndroidRuntimeSettings.ETagForChildDirectedTreatment
enum class ETagForChildDirectedTreatment : uint8_t
{
	TAG_FOR_CHILD_DIRECTED_TREATMENT_UNSPECIFIED = 0,
	TAG_FOR_CHILD_DIRECTED_TREATMENT_TRUE = 1,
	TAG_FOR_CHILD_DIRECTED_TREATMENT_FALSE = 2,
	TAG_FOR_CHILD_DIRECTED_TREATMENT_MAX = 3
};

// Object: Enum AndroidRuntimeSettings.ETagForUnderAgeOfConsent
enum class ETagForUnderAgeOfConsent : uint8_t
{
	TAG_FOR_UNDER_AGE_OF_CONSENT_UNSPECIFIED = 0,
	TAG_FOR_UNDER_AGE_OF_CONSENT_TRUE = 1,
	TAG_FOR_UNDER_AGE_OF_CONSENT_FALSE = 2,
	TAG_FOR_UNDER_AGE_OF_CONSENT_MAX = 3
};

// Object: Enum AndroidRuntimeSettings.EMaxAdContentRating
enum class EMaxAdContentRating : uint8_t
{
	MAX_AD_CONTENT_RATING_G = 0,
	MAX_AD_CONTENT_RATING_PG = 1,
	MAX_AD_CONTENT_RATING_T = 2,
	MAX_AD_CONTENT_RATING_MA = 3,
	MAX_AD_CONTENT_RATING_MAX = 4
};

// Object: Enum AndroidRuntimeSettings.EAndroidAudio
enum class EAndroidAudio : uint8_t
{
	Default = 0,
	OGG = 1,
	ADPCM = 2,
	EAndroidAudio_MAX = 3
};

// Object: Enum AndroidRuntimeSettings.EAndroidGraphicsDebugger
enum class EAndroidGraphicsDebugger : uint8_t
{
	None = 0,
	Mali = 1,
	Adreno = 2,
	EAndroidGraphicsDebugger_MAX = 3
};

// Package: NiagaraCore
// Enums: 2

// Object: Enum NiagaraCore.ENiagaraParameterAccessLevel
enum class ENiagaraParameterAccessLevel : uint8_t
{
	Private = 0,
	Public = 1,
	ENiagaraParameterAccessLevel_MAX = 2
};

// Object: Enum NiagaraCore.ENiagaraIterationSource
enum class ENiagaraIterationSource : uint8_t
{
	Particles = 0,
	DataInterface = 1,
	DirectSet = 2,
	ENiagaraIterationSource_MAX = 3
};

// Package: NiagaraShader
// Enums: 6

// Object: Enum NiagaraShader.ENiagaraMipMapGenerationType
enum class ENiagaraMipMapGenerationType : uint8_t
{
	Unfiltered = 0,
	Linear = 1,
	Blur1 = 2,
	Blur2 = 3,
	Blur3 = 4,
	Blur4 = 5,
	ENiagaraMipMapGenerationType_MAX = 6
};

// Object: Enum NiagaraShader.ENiagaraGpuDispatchType
enum class ENiagaraGpuDispatchType : uint8_t
{
	OneD = 0,
	TwoD = 1,
	ThreeD = 2,
	Custom = 3,
	ENiagaraGpuDispatchType_MAX = 4
};

// Object: Enum NiagaraShader.ENiagaraDirectDispatchElementType
enum class ENiagaraDirectDispatchElementType : uint8_t
{
	NumThreads = 0,
	NumThreadsNoClipping = 1,
	NumGroups = 2,
	ENiagaraDirectDispatchElementType_MAX = 3
};

// Object: Enum NiagaraShader.ENiagaraSimStageExecuteBehavior
enum class ENiagaraSimStageExecuteBehavior : uint8_t
{
	Always = 0,
	OnSimulationReset = 1,
	NotOnSimulationReset = 2,
	ENiagaraSimStageExecuteBehavior_MAX = 3
};

// Object: Enum NiagaraShader.FNiagaraCompileEventSeverity
enum class EFNiagaraCompileEventSeverity : uint8_t
{
	Log = 0,
	Display = 1,
	Warning = 2,
	Error = 3,
	FNiagaraCompileEventSeverity_MAX = 4
};

// Object: Enum NiagaraShader.FNiagaraCompileEventSource
enum class EFNiagaraCompileEventSource : uint8_t
{
	Unset = 0,
	ScriptDependency = 1,
	FNiagaraCompileEventSource_MAX = 2
};

// Package: Niagara
// Enums: 137

// Object: Enum Niagara.ENiagaraSimCacheAttributeCaptureMode
enum class ENiagaraSimCacheAttributeCaptureMode : uint8_t
{
	All = 0,
	RenderingOnly = 1,
	ExplicitAttributes = 2,
	ENiagaraSimCacheAttributeCaptureMode_MAX = 3
};

// Object: Enum Niagara.ENiagaraAssetLibraryAssetTypes
enum class ENiagaraAssetLibraryAssetTypes : uint8_t
{
	Emitters = 1,
	Systems = 2,
	Scripts = 4,
	ENiagaraAssetLibraryAssetTypes_MAX = 5
};

// Object: Enum Niagara.ENiagaraAssetTagDefinitionImportance
enum class ENiagaraAssetTagDefinitionImportance : uint8_t
{
	Primary = 0,
	Secondary = 1,
	Internal = 2,
	ENiagaraAssetTagDefinitionImportance_MAX = 3
};

// Object: Enum Niagara.ENiagaraCollisionMode
enum class ENiagaraCollisionMode : uint8_t
{
	None = 0,
	SceneGeometry = 1,
	DepthBuffer = 2,
	DistanceField = 3,
	ENiagaraCollisionMode_MAX = 4
};

// Object: Enum Niagara.ENiagaraBaseTypes
enum class ENiagaraBaseTypes : uint8_t
{
	Half = 0,
	Float = 1,
	Int32 = 2,
	Bool = 3,
	Max = 4
};

// Object: Enum Niagara.ENiagaraGpuBufferFormat
enum class ENiagaraGpuBufferFormat : uint8_t
{
	Float = 0,
	HalfFloat = 1,
	UnsignedNormalizedByte = 2,
	Max = 3
};

// Object: Enum Niagara.ENiagaraGpuSyncMode
enum class ENiagaraGpuSyncMode : uint8_t
{
	None = 0,
	SyncCpuToGpu = 1,
	SyncGpuToCpu = 2,
	SyncBoth = 3,
	ENiagaraGpuSyncMode_MAX = 4
};

// Object: Enum Niagara.ENiagaraMipMapGeneration
enum class ENiagaraMipMapGeneration : uint8_t
{
	Disabled = 0,
	PostStage = 1,
	PostSimulate = 2,
	ENiagaraMipMapGeneration_MAX = 3
};

// Object: Enum Niagara.ENiagaraDefaultMode
enum class ENiagaraDefaultMode : uint8_t
{
	Value = 0,
	Binding = 1,
	Custom = 2,
	FailIfPreviouslyNotSet = 3,
	ENiagaraDefaultMode_MAX = 4
};

// Object: Enum Niagara.ENiagaraDefaultRendererMotionVectorSetting
enum class ENiagaraDefaultRendererMotionVectorSetting : uint8_t
{
	Precise = 0,
	Approximate = 1,
	ENiagaraDefaultRendererMotionVectorSetting_MAX = 2
};

// Object: Enum Niagara.ENiagaraRendererMotionVectorSetting
enum class ENiagaraRendererMotionVectorSetting : uint8_t
{
	AutoDetect = 0,
	Precise = 1,
	Approximate = 2,
	Disable = 3,
	ENiagaraRendererMotionVectorSetting_MAX = 4
};

// Object: Enum Niagara.ENiagaraSimTarget
enum class ENiagaraSimTarget : uint8_t
{
	CPUSim = 0,
	GPUComputeSim = 1,
	ENiagaraSimTarget_MAX = 2
};

// Object: Enum Niagara.ENiagaraAgeUpdateMode
enum class ENiagaraAgeUpdateMode : uint8_t
{
	TickDeltaTime = 0,
	DesiredAge = 1,
	DesiredAgeNoSeek = 2,
	ENiagaraAgeUpdateMode_MAX = 3
};

// Object: Enum Niagara.ENiagaraStatEvaluationType
enum class ENiagaraStatEvaluationType : uint8_t
{
	Average = 0,
	Maximum = 1,
	ENiagaraStatEvaluationType_MAX = 2
};

// Object: Enum Niagara.ENiagaraStatDisplayMode
enum class ENiagaraStatDisplayMode : uint8_t
{
	Percent = 0,
	Absolute = 1,
	ENiagaraStatDisplayMode_MAX = 2
};

// Object: Enum Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType : uint8_t
{
	ParticleData = 0,
	Shared = 1,
	Event = 2,
	ENiagaraDataSetType_MAX = 3
};

// Object: Enum Niagara.ENiagaraInputNodeUsage
enum class ENiagaraInputNodeUsage : uint8_t
{
	Undefined = 0,
	Parameter = 1,
	Attribute = 2,
	SystemConstant = 3,
	TranslatorConstant = 4,
	RapidIterationParameter = 5,
	ENiagaraInputNodeUsage_MAX = 6
};

// Object: Enum Niagara.ENiagaraInterpolatedSpawnMode
enum class ENiagaraInterpolatedSpawnMode : uint8_t
{
	NoInterpolation = 0,
	RunUpdateScript = 1,
	Interpolation = 2,
	ENiagaraInterpolatedSpawnMode_MAX = 3
};

// Object: Enum Niagara.ENiagaraScriptCompileStatus
enum class ENiagaraScriptCompileStatus : uint8_t
{
	NCS_Unknown = 0,
	NCS_Dirty = 1,
	NCS_Error = 2,
	NCS_UpToDate = 3,
	NCS_BeingCreated = 4,
	NCS_UpToDateWithWarnings = 5,
	NCS_ComputeUpToDateWithWarnings = 6,
	NCS_MAX = 7
};

// Object: Enum Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage : uint8_t
{
	Function = 0,
	Module = 1,
	DynamicInput = 2,
	ParticleSpawnScript = 3,
	ParticleSpawnScriptInterpolated = 4,
	ParticleUpdateScript = 5,
	ParticleEventScript = 6,
	ParticleSimulationStageScript = 7,
	ParticleGPUComputeScript = 8,
	EmitterSpawnScript = 9,
	EmitterUpdateScript = 10,
	SystemSpawnScript = 11,
	SystemUpdateScript = 12,
	ENiagaraScriptUsage_MAX = 13
};

// Object: Enum Niagara.ENiagaraCompileUsageStaticSwitch
enum class ENiagaraCompileUsageStaticSwitch : uint8_t
{
	Spawn = 0,
	Update = 1,
	Event = 2,
	SimulationStage = 3,
	Default = 4,
	ENiagaraCompileUsageStaticSwitch_MAX = 5
};

// Object: Enum Niagara.ENiagaraScriptContextStaticSwitch
enum class ENiagaraScriptContextStaticSwitch : uint8_t
{
	System = 0,
	Emitter = 1,
	Particle = 2,
	ENiagaraScriptContextStaticSwitch_MAX = 3
};

// Object: Enum Niagara.ENiagaraScriptGroup
enum class ENiagaraScriptGroup : uint8_t
{
	Particle = 0,
	Emitter = 1,
	System = 2,
	Max = 3
};

// Object: Enum Niagara.ENiagaraBindingSource
enum class ENiagaraBindingSource : uint8_t
{
	ImplicitFromSource = 0,
	ExplicitParticles = 1,
	ExplicitEmitter = 2,
	ExplicitSystem = 3,
	ExplicitUser = 4,
	MaxBindingSource = 5,
	ENiagaraBindingSource_MAX = 6
};

// Object: Enum Niagara.ENiagaraRendererSourceDataMode
enum class ENiagaraRendererSourceDataMode : uint8_t
{
	Particles = 0,
	Emitter = 1,
	ENiagaraRendererSourceDataMode_MAX = 2
};

// Object: Enum Niagara.ENiagaraLegacyTrailWidthMode
enum class ENiagaraLegacyTrailWidthMode : uint8_t
{
	FromCentre = 0,
	FromFirst = 1,
	FromSecond = 2,
	ENiagaraLegacyTrailWidthMode_MAX = 3
};

// Object: Enum Niagara.ENiagaraSystemInstanceState
enum class ENiagaraSystemInstanceState : uint8_t
{
	None = 0,
	PendingSpawn = 1,
	PendingSpawnPaused = 2,
	Spawning = 3,
	Running = 4,
	Paused = 5,
	Num = 6,
	ENiagaraSystemInstanceState_MAX = 7
};

// Object: Enum Niagara.ENiagaraFunctionDebugState
enum class ENiagaraFunctionDebugState : uint8_t
{
	NoDebug = 0,
	Basic = 1,
	ENiagaraFunctionDebugState_MAX = 2
};

// Object: Enum Niagara.ENiagaraGpuComputeTickStage
enum class ENiagaraGpuComputeTickStage : uint8_t
{
	PreInitViews = 0,
	PostInitViews = 1,
	PostOpaqueRender = 2,
	Max = 3,
	First = 4,
	Last = 5
};

// Object: Enum Niagara.ENiagaraConditionalOperator
enum class ENiagaraConditionalOperator : uint8_t
{
	Equals = 0,
	NotEqual = 1,
	LessThan = 2,
	LessThanOrEqual = 3,
	GreaterThan = 4,
	GreaterThanOrEqual = 5,
	Max = 6
};

// Object: Enum Niagara.ENCPoolMethod
enum class ENCPoolMethod : uint8_t
{
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	ENCPoolMethod_MAX = 5
};

// Object: Enum Niagara.ENiagraDataChannel_IslandMode
enum class ENiagraDataChannel_IslandMode : uint8_t
{
	AlignedStatic = 0,
	Dynamic = 1,
	ENiagraDataChannel_MAX = 2
};

// Object: Enum Niagara.ENiagaraDataChannelAllocationMode
enum class ENiagaraDataChannelAllocationMode : uint8_t
{
	Static = 0,
	Dynamic = 1,
	ENiagaraDataChannelAllocationMode_MAX = 2
};

// Object: Enum Niagara.ENDIDataChannelSpawnMode
enum class ENDIDataChannelSpawnMode : uint8_t
{
	Override = 0,
	Accumulate = 1,
	None = 2,
	Max = 3
};

// Object: Enum Niagara.ENDIDataChannelSpawnScaleMode
enum class ENDIDataChannelSpawnScaleMode : uint8_t
{
	Override = 0,
	Scale = 1,
	Max = 2
};

// Object: Enum Niagara.ENiagaraSortMode
enum class ENiagaraSortMode : uint8_t
{
	None = 0,
	ViewDepth = 1,
	ViewDistance = 2,
	CustomAscending = 3,
	CustomDecending = 4,
	ENiagaraSortMode_MAX = 5
};

// Object: Enum Niagara.ENiagaraMeshPivotOffsetSpace
enum class ENiagaraMeshPivotOffsetSpace : uint8_t
{
	Mesh = 0,
	Simulation = 1,
	World = 2,
	Local = 3,
	ENiagaraMeshPivotOffsetSpace_MAX = 4
};

// Object: Enum Niagara.ENiagaraMeshLODMode
enum class ENiagaraMeshLODMode : uint8_t
{
	LODLevel = 0,
	LODBias = 1,
	ByComponentBounds = 2,
	ComponentOrigin = 3,
	PerParticle = 4,
	ENiagaraMeshLODMode_MAX = 5
};

// Object: Enum Niagara.ENDISkelMesh_GpuMaxInfluences
enum class ENDISkelMesh_GpuMaxInfluences : uint8_t
{
	AllowMax4 = 0,
	AllowMax8 = 1,
	Unlimited = 2,
	ENDISkelMesh_MAX = 3
};

// Object: Enum Niagara.ENDISkelMesh_GpuUniformSamplingFormat
enum class ENDISkelMesh_GpuUniformSamplingFormat : uint8_t
{
	Full = 0,
	Limited_24 = 1,
	Limited_23 = 2,
	ENDISkelMesh_MAX = 3
};

// Object: Enum Niagara.ENDISkelMesh_AdjacencyTriangleIndexFormat
enum class ENDISkelMesh_AdjacencyTriangleIndexFormat : uint8_t
{
	Full = 0,
	Half = 1,
	ENDISkelMesh_MAX = 2
};

// Object: Enum Niagara.ENiagaraDefaultRendererPixelCoverageMode
enum class ENiagaraDefaultRendererPixelCoverageMode : uint8_t
{
	Enabled = 0,
	Disabled = 1,
	ENiagaraDefaultRendererPixelCoverageMode_MAX = 2
};

// Object: Enum Niagara.ENiagaraDefaultSortPrecision
enum class ENiagaraDefaultSortPrecision : uint8_t
{
	Low = 0,
	High = 1,
	ENiagaraDefaultSortPrecision_MAX = 2
};

// Object: Enum Niagara.ENiagaraDefaultGpuTranslucentLatency
enum class ENiagaraDefaultGpuTranslucentLatency : uint8_t
{
	Immediate = 0,
	Latent = 1,
	ENiagaraDefaultGpuTranslucentLatency_MAX = 2
};

// Object: Enum Niagara.ENiagaraCompileErrorSeverity
enum class ENiagaraCompileErrorSeverity : uint8_t
{
	Ignore = 0,
	LogOnly = 1,
	Warning = 2,
	Error = 3,
	ENiagaraCompileErrorSeverity_MAX = 4
};

// Object: Enum Niagara.ENDICollisionQuery_AsyncGpuTraceProvider
enum class ENDICollisionQuery_AsyncGpuTraceProvider : uint8_t
{
	Default = 0,
	HWRT = 1,
	GSDF = 2,
	None = 3,
	ENDICollisionQuery_MAX = 4
};

// Object: Enum Niagara.ENiagaraStripScriptByteCodeOption
enum class ENiagaraStripScriptByteCodeOption : uint8_t
{
	Default = 0,
	Strip_Original = 1,
	Strip_Experimental = 2,
	ENiagaraStripScriptByteCodeOption_MAX = 3
};

// Object: Enum Niagara.ENiagaraStatelessFeatureMask
enum class ENiagaraStatelessFeatureMask : uint8_t
{
	ExecuteGPU = 0,
	ExecuteCPU = 1,
	None = 2,
	ExecuteAll = 3,
	All = 4,
	ENiagaraStatelessFeatureMask_MAX = 5
};

// Object: Enum Niagara.ENiagaraDistributionMode
enum class ENiagaraDistributionMode : uint8_t
{
	Binding = 0,
	Expression = 1,
	UniformConstant = 2,
	NonUniformConstant = 3,
	UniformRange = 4,
	NonUniformRange = 5,
	UniformCurve = 6,
	NonUniformCurve = 7,
	ColorGradient = 8,
	ENiagaraDistributionMode_MAX = 9
};

// Object: Enum Niagara.ENSM_VelocityType
enum class ENSM_VelocityType : uint8_t
{
	Linear = 0,
	FromPoint = 1,
	InCone = 2,
	ENSM_MAX = 3
};

// Object: Enum Niagara.ENSMInitialMeshOrientationMode
enum class ENSMInitialMeshOrientationMode : uint8_t
{
	None = 0,
	Random = 1,
	OrientToAxis = 2,
	ENSMInitialMeshOrientationMode_MAX = 3
};

// Object: Enum Niagara.ENSM_ShapePrimitive
enum class ENSM_ShapePrimitive : uint8_t
{
	Box = 0,
	Cylinder = 1,
	Plane = 2,
	Ring = 3,
	Sphere = 4,
	Max = 5
};

// Object: Enum Niagara.ENSM_SurfaceExpansionMode
enum class ENSM_SurfaceExpansionMode : uint8_t
{
	Inner = 0,
	Centered = 1,
	Outside = 2,
	ENSM_MAX = 3
};

// Object: Enum Niagara.ENSMSubUVAnimation_Mode
enum class ENSMSubUVAnimation_Mode : uint8_t
{
	DirectSet = 0,
	InfiniteLoop = 1,
	Linear = 2,
	Random = 3,
	ENSMSubUVAnimation_MAX = 4
};

// Object: Enum Niagara.ENiagaraStatelessSpawnInfoType
enum class ENiagaraStatelessSpawnInfoType : uint8_t
{
	Burst = 0,
	Rate = 1,
	ENiagaraStatelessSpawnInfoType_MAX = 2
};

// Object: Enum Niagara.ENiagaraSystemInactiveResponse
enum class ENiagaraSystemInactiveResponse : uint8_t
{
	Complete = 0,
	Kill = 1,
	ENiagaraSystemInactiveResponse_MAX = 2
};

// Object: Enum Niagara.ENiagaraEmitterInactiveResponse
enum class ENiagaraEmitterInactiveResponse : uint8_t
{
	Complete = 0,
	Kill = 1,
	ENiagaraEmitterInactiveResponse_MAX = 2
};

// Object: Enum Niagara.ENiagaraLoopBehavior
enum class ENiagaraLoopBehavior : uint8_t
{
	Infinite = 0,
	Multiple = 1,
	Once = 2,
	ENiagaraLoopBehavior_MAX = 3
};

// Object: Enum Niagara.ENiagaraLoopDurationMode
enum class ENiagaraLoopDurationMode : uint8_t
{
	Fixed = 0,
	Infinite = 1,
	ENiagaraLoopDurationMode_MAX = 2
};

// Object: Enum Niagara.ENiagaraTickBehavior
enum class ENiagaraTickBehavior : uint8_t
{
	UsePrereqs = 0,
	UseComponentTickGroup = 1,
	ForceTickFirst = 2,
	ForceTickLast = 3,
	ENiagaraTickBehavior_MAX = 4
};

// Object: Enum Niagara.ENiagaraInputWidgetType
enum class ENiagaraInputWidgetType : uint8_t
{
	Default = 0,
	Slider = 1,
	Volume = 2,
	NumericDropdown = 3,
	EnumStyle = 4,
	SegmentedButtons = 5,
	ENiagaraInputWidgetType_MAX = 6
};

// Object: Enum Niagara.ENiagaraBoolDisplayMode
enum class ENiagaraBoolDisplayMode : uint8_t
{
	DisplayAlways = 0,
	DisplayIfTrue = 1,
	DisplayIfFalse = 2,
	ENiagaraBoolDisplayMode_MAX = 3
};

// Object: Enum Niagara.ENDIActorComponentSourceMode
enum class ENDIActorComponentSourceMode : uint8_t
{
	Default = 0,
	AttachParent = 1,
	LocalPlayer = 2,
	ENDIActorComponentSourceMode_MAX = 3
};

// Object: Enum Niagara.ENDISceneCapture2DSourceMode
enum class ENDISceneCapture2DSourceMode : uint8_t
{
	UserParameterThenAttachParent = 0,
	UserParameterOnly = 1,
	AttachParentOnly = 2,
	Managed = 3,
	ENDISceneCapture2DSourceMode_MAX = 4
};

// Object: Enum Niagara.ENDISceneCapture2DOffsetMode
enum class ENDISceneCapture2DOffsetMode : uint8_t
{
	Disabled = 0,
	RelativeLocal = 1,
	RelativeWorld = 2,
	AbsoluteWorld = 3,
	ENDISceneCapture2DOffsetMode_MAX = 4
};

// Object: Enum Niagara.ENDISocketReaderSourceMode
enum class ENDISocketReaderSourceMode : uint8_t
{
	Default = 0,
	ParameterBindingOnly = 1,
	AttachedParentOnly = 2,
	SourceOnly = 3,
	ENDISocketReaderSourceMode_MAX = 4
};

// Object: Enum Niagara.ENDIStaticMesh_SourceMode
enum class ENDIStaticMesh_SourceMode : uint8_t
{
	Default = 0,
	Source = 1,
	AttachParent = 2,
	DefaultMeshOnly = 3,
	MeshParameterBinding = 4,
	ENDIStaticMesh_MAX = 5
};

// Object: Enum Niagara.ENDIObjectPropertyReaderSourceMode
enum class ENDIObjectPropertyReaderSourceMode : uint8_t
{
	Binding = 0,
	AttachParentActor = 1,
	BindingThenAttachParentActor = 2,
	AttachParent = 3,
	BindingThenAttachParent = 4,
	ENDIObjectPropertyReaderSourceMode_MAX = 5
};

// Object: Enum Niagara.ENiagaraSystemSpawnSectionStartBehavior
enum class ENiagaraSystemSpawnSectionStartBehavior : uint8_t
{
	Activate = 0,
	ENiagaraSystemSpawnSectionStartBehavior_MAX = 1
};

// Object: Enum Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t
{
	ActivateIfInactive = 0,
	None = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2
};

// Object: Enum Niagara.ENiagaraSystemSpawnSectionEndBehavior
enum class ENiagaraSystemSpawnSectionEndBehavior : uint8_t
{
	SetSystemInactive = 0,
	Deactivate = 1,
	None = 2,
	ENiagaraSystemSpawnSectionEndBehavior_MAX = 3
};

// Object: Enum Niagara.ENiagaraCompilationState
enum class ENiagaraCompilationState : uint8_t
{
	CheckDDC = 0,
	Precompile = 1,
	StartCompileJob = 2,
	AwaitResult = 3,
	OptimizeByteCode = 4,
	ProcessResult = 5,
	PutToDDC = 6,
	Finished = 7,
	Aborted = 8,
	ENiagaraCompilationState_MAX = 9
};

// Object: Enum Niagara.ENiagaraBakerViewMode
enum class ENiagaraBakerViewMode : uint8_t
{
	Perspective = 0,
	OrthoFront = 1,
	OrthoBack = 2,
	OrthoLeft = 3,
	OrthoRight = 4,
	OrthoTop = 5,
	OrthoBottom = 6,
	Num = 7,
	ENiagaraBakerViewMode_MAX = 8
};

// Object: Enum Niagara.ENiagaraOcclusionQueryMode
enum class ENiagaraOcclusionQueryMode : uint8_t
{
	Default = 0,
	AlwaysEnabled = 1,
	AlwaysDisabled = 2,
	ENiagaraOcclusionQueryMode_MAX = 3
};

// Object: Enum Niagara.ENiagartaDataChannelReadResult
enum class ENiagartaDataChannelReadResult : uint8_t
{
	Success = 0,
	Failure = 1,
	ENiagartaDataChannelReadResult_MAX = 2
};

// Object: Enum Niagara.ENiagaraDataInterfaceEmitterBindingMode
enum class ENiagaraDataInterfaceEmitterBindingMode : uint8_t
{
	Self = 0,
	Other = 1,
	ENiagaraDataInterfaceEmitterBindingMode_MAX = 2
};

// Object: Enum Niagara.ENDIExport_GPUAllocationMode
enum class ENDIExport_GPUAllocationMode : uint8_t
{
	FixedSize = 0,
	PerParticle = 1,
	ENDIExport_MAX = 2
};

// Object: Enum Niagara.ENDILandscape_SourceMode
enum class ENDILandscape_SourceMode : uint8_t
{
	Default = 0,
	Source = 1,
	AttachParent = 2,
	ENDILandscape_MAX = 3
};

// Object: Enum Niagara.ESetResolutionMethod
enum class ESetResolutionMethod : uint8_t
{
	Independent = 0,
	MaxAxis = 1,
	CellSize = 2,
	ESetResolutionMethod_MAX = 3
};

// Object: Enum Niagara.ENDISkeletalMesh_SourceMode
enum class ENDISkeletalMesh_SourceMode : uint8_t
{
	Default = 0,
	Source = 1,
	AttachParent = 2,
	DefaultMeshOnly = 3,
	ENDISkeletalMesh_MAX = 4
};

// Object: Enum Niagara.ENDISkeletalMesh_SkinningMode
enum class ENDISkeletalMesh_SkinningMode : uint8_t
{
	Invalid = 0,
	None = 1,
	SkinOnTheFly = 2,
	PreSkin = 3,
	ENDISkeletalMesh_MAX = 4
};

// Object: Enum Niagara.ENiagaraDebugPlaybackMode
enum class ENiagaraDebugPlaybackMode : uint8_t
{
	Play = 0,
	Loop = 1,
	Paused = 2,
	Step = 3,
	ENiagaraDebugPlaybackMode_MAX = 4
};

// Object: Enum Niagara.ENiagaraDebugHudHAlign
enum class ENiagaraDebugHudHAlign : uint8_t
{
	Left = 0,
	Center = 1,
	Right = 2,
	ENiagaraDebugHudHAlign_MAX = 3
};

// Object: Enum Niagara.ENiagaraDebugHudVAlign
enum class ENiagaraDebugHudVAlign : uint8_t
{
	Top = 0,
	Center = 1,
	Bottom = 2,
	ENiagaraDebugHudVAlign_MAX = 3
};

// Object: Enum Niagara.ENiagaraDebugHudFont
enum class ENiagaraDebugHudFont : uint8_t
{
	Small = 0,
	Normal = 1,
	ENiagaraDebugHudFont_MAX = 2
};

// Object: Enum Niagara.ENiagaraDebugHudVerbosity
enum class ENiagaraDebugHudVerbosity : uint8_t
{
	None = 0,
	Basic = 1,
	Verbose = 2,
	ENiagaraDebugHudVerbosity_MAX = 3
};

// Object: Enum Niagara.ENiagaraDebugHUDOverviewMode
enum class ENiagaraDebugHUDOverviewMode : uint8_t
{
	Overview = 0,
	Scalability = 1,
	Performance = 2,
	PerformanceGraph = 3,
	GpuComputePerformance = 4,
	ENiagaraDebugHUDOverviewMode_MAX = 5
};

// Object: Enum Niagara.ENiagaraDebugHUDPerfGraphMode
enum class ENiagaraDebugHUDPerfGraphMode : uint8_t
{
	GameThread = 0,
	RenderThread = 1,
	GPU = 2,
	ENiagaraDebugHUDPerfGraphMode_MAX = 3
};

// Object: Enum Niagara.ENiagaraDebugHUDPerfSampleMode
enum class ENiagaraDebugHUDPerfSampleMode : uint8_t
{
	FrameTotal = 0,
	PerInstanceAverage = 1,
	ENiagaraDebugHUDPerfSampleMode_MAX = 2
};

// Object: Enum Niagara.ENiagaraDebugHUDPerfUnits
enum class ENiagaraDebugHUDPerfUnits : uint8_t
{
	Microseconds = 0,
	Milliseconds = 1,
	ENiagaraDebugHUDPerfUnits_MAX = 2
};

// Object: Enum Niagara.ENiagaraDebugHUDDOverviewSort
enum class ENiagaraDebugHUDDOverviewSort : uint8_t
{
	Name = 0,
	NumberRegistered = 1,
	NumberActive = 2,
	NumberScalability = 3,
	MemoryUsage = 4,
	RecentlyVisibilty = 5,
	ENiagaraDebugHUDDOverviewSort_MAX = 6
};

// Object: Enum Niagara.ENiagaraCullReaction
enum class ENiagaraCullReaction : uint8_t
{
	Deactivate = 0,
	DeactivateImmediate = 1,
	DeactivateResume = 2,
	DeactivateImmediateResume = 3,
	PauseResume = 4,
	ENiagaraCullReaction_MAX = 5
};

// Object: Enum Niagara.ENiagaraScalabilityUpdateFrequency
enum class ENiagaraScalabilityUpdateFrequency : uint8_t
{
	SpawnOnly = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Continuous = 4,
	ENiagaraScalabilityUpdateFrequency_MAX = 5
};

// Object: Enum Niagara.ENiagaraCullProxyMode
enum class ENiagaraCullProxyMode : uint8_t
{
	None = 0,
	Instanced_Rendered = 1,
	ENiagaraCullProxyMode_MAX = 2
};

// Object: Enum Niagara.EScriptExecutionMode
enum class EScriptExecutionMode : uint8_t
{
	EveryParticle = 0,
	SpawnedParticles = 1,
	SingleParticle = 2,
	EScriptExecutionMode_MAX = 3
};

// Object: Enum Niagara.EParticleAllocationMode
enum class EParticleAllocationMode : uint8_t
{
	AutomaticEstimate = 0,
	ManualEstimate = 1,
	FixedCount = 2,
	EParticleAllocationMode_MAX = 3
};

// Object: Enum Niagara.ENiagaraEmitterCalculateBoundMode
enum class ENiagaraEmitterCalculateBoundMode : uint8_t
{
	Dynamic = 0,
	Fixed = 1,
	Programmable = 2,
	ENiagaraEmitterCalculateBoundMode_MAX = 3
};

// Object: Enum Niagara.ENiagaraEmitterMode
enum class ENiagaraEmitterMode : uint8_t
{
	Standard = 0,
	Stateless = 1,
	ENiagaraEmitterMode_MAX = 2
};

// Object: Enum Niagara.ENiagaraMeshFacingMode
enum class ENiagaraMeshFacingMode : uint8_t
{
	Default = 0,
	Velocity = 1,
	CameraPosition = 2,
	CameraPlane = 3,
	ENiagaraMeshFacingMode_MAX = 4
};

// Object: Enum Niagara.ENiagaraMeshLockedAxisSpace
enum class ENiagaraMeshLockedAxisSpace : uint8_t
{
	Simulation = 0,
	World = 1,
	Local = 2,
	ENiagaraMeshLockedAxisSpace_MAX = 3
};

// Object: Enum Niagara.ENiagaraPlatformSelectionState
enum class ENiagaraPlatformSelectionState : uint8_t
{
	Default = 0,
	Enabled = 1,
	Disabled = 2,
	ENiagaraPlatformSelectionState_MAX = 3
};

// Object: Enum Niagara.ENiagaraPlatformSetState
enum class ENiagaraPlatformSetState : uint8_t
{
	Disabled = 0,
	Enabled = 1,
	Active = 2,
	Unknown = 3,
	ENiagaraPlatformSetState_MAX = 4
};

// Object: Enum Niagara.ENiagaraCVarConditionResponse
enum class ENiagaraCVarConditionResponse : uint8_t
{
	None = 0,
	Enable = 1,
	Disable = 2,
	ENiagaraCVarConditionResponse_MAX = 3
};

// Object: Enum Niagara.ENiagaraDeviceProfileRedirectMode
enum class ENiagaraDeviceProfileRedirectMode : uint8_t
{
	CVar = 0,
	DeviceProfile = 1,
	ENiagaraDeviceProfileRedirectMode_MAX = 2
};

// Object: Enum Niagara.ENiagaraPreviewGridResetMode
enum class ENiagaraPreviewGridResetMode : uint8_t
{
	Never = 0,
	Individual = 1,
	All = 2,
	ENiagaraPreviewGridResetMode_MAX = 3
};

// Object: Enum Niagara.ENiagaraRendererSortPrecision
enum class ENiagaraRendererSortPrecision : uint8_t
{
	Default = 0,
	Low = 1,
	High = 2,
	ENiagaraRendererSortPrecision_MAX = 3
};

// Object: Enum Niagara.ENiagaraRendererGpuTranslucentLatency
enum class ENiagaraRendererGpuTranslucentLatency : uint8_t
{
	ProjectDefault = 0,
	Immediate = 1,
	Latent = 2,
	ENiagaraRendererGpuTranslucentLatency_MAX = 3
};

// Object: Enum Niagara.ENiagaraRibbonFacingMode
enum class ENiagaraRibbonFacingMode : uint8_t
{
	Screen = 0,
	Custom = 1,
	CustomSideVector = 2,
	ENiagaraRibbonFacingMode_MAX = 3
};

// Object: Enum Niagara.ENiagaraRibbonAgeOffsetMode
enum class ENiagaraRibbonAgeOffsetMode : uint8_t
{
	Scale = 0,
	Clip = 1,
	ENiagaraRibbonAgeOffsetMode_MAX = 2
};

// Object: Enum Niagara.ENiagaraRibbonDrawDirection
enum class ENiagaraRibbonDrawDirection : uint8_t
{
	FrontToBack = 0,
	BackToFront = 1,
	ENiagaraRibbonDrawDirection_MAX = 2
};

// Object: Enum Niagara.ENiagaraRibbonShapeMode
enum class ENiagaraRibbonShapeMode : uint8_t
{
	Plane = 0,
	MultiPlane = 1,
	Tube = 2,
	Custom = 3,
	ENiagaraRibbonShapeMode_MAX = 4
};

// Object: Enum Niagara.ENiagaraRibbonTessellationMode
enum class ENiagaraRibbonTessellationMode : uint8_t
{
	Automatic = 0,
	Custom = 1,
	Disabled = 2,
	ENiagaraRibbonTessellationMode_MAX = 3
};

// Object: Enum Niagara.ENiagaraRibbonUVEdgeMode
enum class ENiagaraRibbonUVEdgeMode : uint8_t
{
	SmoothTransition = 0,
	Locked = 1,
	ENiagaraRibbonUVEdgeMode_MAX = 2
};

// Object: Enum Niagara.ENiagaraRibbonUVDistributionMode
enum class ENiagaraRibbonUVDistributionMode : uint8_t
{
	ScaledUniformly = 0,
	ScaledUsingRibbonSegmentLength = 1,
	TiledOverRibbonLength = 2,
	TiledFromStartOverRibbonLength = 3,
	ENiagaraRibbonUVDistributionMode_MAX = 4
};

// Object: Enum Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour : uint8_t
{
	Copy = 0,
	Zero = 1,
	None = 2,
	MarkInvalid = 3,
	PassThrough = 4,
	EUnusedAttributeBehaviour_MAX = 5
};

// Object: Enum Niagara.ENiagaraModuleDependencyType
enum class ENiagaraModuleDependencyType : uint8_t
{
	PreDependency = 0,
	PostDependency = 1,
	ENiagaraModuleDependencyType_MAX = 2
};

// Object: Enum Niagara.ENiagaraModuleDependencyScriptConstraint
enum class ENiagaraModuleDependencyScriptConstraint : uint8_t
{
	SameScript = 0,
	AllScripts = 1,
	ENiagaraModuleDependencyScriptConstraint_MAX = 2
};

// Object: Enum Niagara.ENiagaraScriptLibraryVisibility
enum class ENiagaraScriptLibraryVisibility : uint8_t
{
	Invalid = 0,
	Unexposed = 1,
	Library = 2,
	Hidden = 3,
	ENiagaraScriptLibraryVisibility_MAX = 4
};

// Object: Enum Niagara.ENiagaraScriptTemplateSpecification
enum class ENiagaraScriptTemplateSpecification : uint8_t
{
	None = 0,
	Template = 1,
	Behavior = 2,
	ENiagaraScriptTemplateSpecification_MAX = 3
};

// Object: Enum Niagara.ENiagaraEmitterDefaultSummaryState
enum class ENiagaraEmitterDefaultSummaryState : uint8_t
{
	Default = 0,
	Summary = 1,
	ENiagaraEmitterDefaultSummaryState_MAX = 2
};

// Object: Enum Niagara.ENiagaraModuleDependencyUsage
enum class ENiagaraModuleDependencyUsage : uint8_t
{
	None = 0,
	Spawn = 1,
	Update = 2,
	Event = 3,
	SimulationStage = 4,
	ENiagaraModuleDependencyUsage_MAX = 5
};

// Object: Enum Niagara.ENiagaraInlineDynamicInputFormatTokenUsage
enum class ENiagaraInlineDynamicInputFormatTokenUsage : uint8_t
{
	Input = 0,
	Decorator = 1,
	LineBreak = 2,
	ENiagaraInlineDynamicInputFormatTokenUsage_MAX = 3
};

// Object: Enum Niagara.ENiagaraSpriteAlignment
enum class ENiagaraSpriteAlignment : uint8_t
{
	Unaligned = 0,
	VelocityAligned = 1,
	CustomAlignment = 2,
	Automatic = 3,
	ENiagaraSpriteAlignment_MAX = 4
};

// Object: Enum Niagara.ENiagaraSpriteFacingMode
enum class ENiagaraSpriteFacingMode : uint8_t
{
	FaceCamera = 0,
	FaceCameraPlane = 1,
	CustomFacingVector = 2,
	FaceCameraPosition = 3,
	FaceCameraDistanceBlend = 4,
	Automatic = 5,
	ENiagaraSpriteFacingMode_MAX = 6
};

// Object: Enum Niagara.ENiagaraRendererPixelCoverageMode
enum class ENiagaraRendererPixelCoverageMode : uint8_t
{
	Automatic = 0,
	Disabled = 1,
	Enabled = 2,
	Enabled_RGBA = 3,
	Enabled_RGB = 4,
	Enabled_A = 5,
	ENiagaraRendererPixelCoverageMode_MAX = 6
};

// Object: Enum Niagara.ENiagaraLwcTileUpdateMode
enum class ENiagaraLwcTileUpdateMode : uint8_t
{
	ResetSimulation = 0,
	Rebase = 1,
	RebaseOrResetSimulation = 2,
	ENiagaraLwcTileUpdateMode_MAX = 3
};

// Object: Enum Niagara.ENiagaraStructConversionType
enum class ENiagaraStructConversionType : uint8_t
{
	CopyOnly = 0,
	DoubleToFloat = 1,
	Vector2 = 2,
	Vector3 = 3,
	Vector4 = 4,
	Quat = 5,
	ENiagaraStructConversionType_MAX = 6
};

// Object: Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	None = 0,
	Largest = 1,
	Smallest = 2,
	Scalar = 3,
	Custom = 4,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 5
};

// Object: Enum Niagara.ENiagaraExecutionStateSource
enum class ENiagaraExecutionStateSource : uint8_t
{
	Scalability = 0,
	Internal = 1,
	Owner = 2,
	InternalCompletion = 3,
	ENiagaraExecutionStateSource_MAX = 4
};

// Object: Enum Niagara.ENiagaraExecutionState
enum class ENiagaraExecutionState : uint8_t
{
	Active = 0,
	Inactive = 1,
	InactiveClear = 2,
	Complete = 3,
	Disabled = 4,
	Num = 5,
	ENiagaraExecutionState_MAX = 6
};

// Object: Enum Niagara.ENiagaraExecutionStateManagement
enum class ENiagaraExecutionStateManagement : uint8_t
{
	Awaken = 0,
	SleepAndLetParticlesFinish = 1,
	SleepAndClearParticles = 2,
	KillImmediately = 3,
	KillAfterParticlesFinish = 4,
	Num = 5,
	ENiagaraExecutionStateManagement_MAX = 6
};

// Object: Enum Niagara.ENiagaraCoordinateSpace
enum class ENiagaraCoordinateSpace : uint8_t
{
	Simulation = 0,
	World = 1,
	Local = 2,
	ENiagaraCoordinateSpace_MAX = 3
};

// Object: Enum Niagara.ENiagaraPythonUpdateScriptReference
enum class ENiagaraPythonUpdateScriptReference : uint8_t
{
	None = 0,
	ScriptAsset = 1,
	DirectTextEntry = 2,
	ENiagaraPythonUpdateScriptReference_MAX = 3
};

// Object: Enum Niagara.ENiagaraOrientationAxis
enum class ENiagaraOrientationAxis : uint8_t
{
	XAxis = 0,
	YAxis = 1,
	ZAxis = 2,
	ENiagaraOrientationAxis_MAX = 3
};

// Object: Enum Niagara.ENiagaraValidationSeverity
enum class ENiagaraValidationSeverity : uint8_t
{
	Info = 0,
	Warning = 1,
	Error = 2,
	ENiagaraValidationSeverity_MAX = 3
};

// Object: Enum Niagara.ENiagaraVariantMode
enum class ENiagaraVariantMode : uint8_t
{
	None = 0,
	Object = 1,
	DataInterface = 2,
	Bytes = 3,
	ENiagaraVariantMode_MAX = 4
};

// Object: Enum Niagara.EVolumeCacheType
enum class EVolumeCacheType : uint8_t
{
	OpenVDB = 0,
	EVolumeCacheType_MAX = 1
};

// Package: DataRegistry
// Enums: 4

// Object: Enum DataRegistry.EDataRegistryAcquireStatus
enum class EDataRegistryAcquireStatus : uint8_t
{
	NotStarted = 0,
	WaitingForInitialAcquire = 1,
	InitialAcquireFinished = 2,
	WaitingForResources = 3,
	AcquireFinished = 4,
	AcquireError = 5,
	DoesNotExist = 6,
	EDataRegistryAcquireStatus_MAX = 7
};

// Object: Enum DataRegistry.EMetaDataRegistrySourceAssetUsage
enum class EMetaDataRegistrySourceAssetUsage : uint8_t
{
	NoAssets = 0,
	SearchAssets = 1,
	RegisterAssets = 2,
	SearchAndRegisterAssets = 3,
	EMetaDataRegistrySourceAssetUsage_MAX = 4
};

// Object: Enum DataRegistry.EDataRegistrySubsystemGetItemResult
enum class EDataRegistrySubsystemGetItemResult : uint8_t
{
	Found = 0,
	NotFound = 1,
	EDataRegistrySubsystemGetItemResult_MAX = 2
};

// Object: Enum DataRegistry.EDataRegistryAvailability
enum class EDataRegistryAvailability : uint8_t
{
	DoesNotExist = 0,
	Unknown = 1,
	Remote = 2,
	OnDisk = 3,
	LocalAsset = 4,
	PreCached = 5,
	EDataRegistryAvailability_MAX = 6
};

// Package: GameplayTasks
// Enums: 3

// Object: Enum GameplayTasks.ETaskResourceOverlapPolicy
enum class ETaskResourceOverlapPolicy : uint8_t
{
	StartOnTop = 0,
	StartAtEnd = 1,
	RequestCancelAndStartOnTop = 2,
	RequestCancelAndStartAtEnd = 3,
	ETaskResourceOverlapPolicy_MAX = 4
};

// Object: Enum GameplayTasks.EGameplayTaskState
enum class EGameplayTaskState : uint8_t
{
	Uninitialized = 0,
	AwaitingActivation = 1,
	Paused = 2,
	Active = 3,
	Finished = 4,
	EGameplayTaskState_MAX = 5
};

// Object: Enum GameplayTasks.EGameplayTaskRunResult
enum class EGameplayTaskRunResult : uint8_t
{
	Error = 0,
	Failed = 1,
	Success_Paused = 2,
	Success_Active = 3,
	Success_Finished = 4,
	EGameplayTaskRunResult_MAX = 5
};

// Package: ModularGameplay
// Enums: 1

// Object: Enum ModularGameplay.EGameFrameworkAddComponentFlags
enum class EGameFrameworkAddComponentFlags : uint8_t
{
	None = 0,
	AddUnique = 1,
	AddIfNotChild = 2,
	UseAutoGeneratedName = 4,
	EGameFrameworkAddComponentFlags_MAX = 5
};

// Package: GameFeatures
// Enums: 1

// Object: Enum GameFeatures.EGameFeatureTargetState
enum class EGameFeatureTargetState : uint8_t
{
	Installed = 0,
	Registered = 1,
	Loaded = 2,
	Active = 3,
	Count = 4,
	EGameFeatureTargetState_MAX = 5
};

// Package: NavigationSystem
// Enums: 9

// Object: Enum NavigationSystem.ENavLinkBuilderFlags
enum class ENavLinkBuilderFlags : uint8_t
{
	CreateCenterPointLink = 1,
	CreateExtremityLink = 2,
	ENavLinkBuilderFlags_MAX = 3
};

// Object: Enum NavigationSystem.ELinkGenerationDebugFlags
enum class ELinkGenerationDebugFlags : uint16_t
{
	WalkableSurface = 1,
	WalkableBorders = 2,
	SelectedEdge = 4,
	SelectedEdgeTrajectory = 8,
	SelectedEdgeLandingSamples = 16,
	SelectedEdgeCollisions = 32,
	SelectedEdgeCollisionsSamples = 64,
	Links = 128,
	FilteredLinks = 256,
	ELinkGenerationDebugFlags_MAX = 257
};

// Object: Enum NavigationSystem.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8_t
{
	Static = 0,
	DynamicModifiersOnly = 1,
	Dynamic = 2,
	LegacyGeneration = 3,
	ERuntimeGenerationType_MAX = 4
};

// Object: Enum NavigationSystem.ENavCostDisplay
enum class ENavCostDisplay : uint8_t
{
	TotalCost = 0,
	HeuristicOnly = 1,
	RealCostOnly = 2,
	ENavCostDisplay_MAX = 3
};

// Object: Enum NavigationSystem.ERecastPartitioning
enum class ERecastPartitioning : uint8_t
{
	Monotone = 0,
	Watershed = 1,
	ChunkyMonotone = 2,
	ERecastPartitioning_MAX = 3
};

// Object: Enum NavigationSystem.ENavigationLedgeSlopeFilterMode
enum class ENavigationLedgeSlopeFilterMode : uint8_t
{
	Recast = 0,
	None = 1,
	UseStepHeightFromAgentMaxSlope = 2,
	ENavigationLedgeSlopeFilterMode_MAX = 3
};

// Object: Enum NavigationSystem.EHeightFieldRenderMode
enum class EHeightFieldRenderMode : uint8_t
{
	Solid = 0,
	Walkable = 1,
	EHeightFieldRenderMode_MAX = 2
};

// Object: Enum NavigationSystem.ENavSystemOverridePolicy
enum class ENavSystemOverridePolicy : uint8_t
{
	Override = 0,
	Append = 1,
	Skip = 2,
	ENavSystemOverridePolicy_MAX = 3
};

// Object: Enum NavigationSystem.ESubdivisionLOD
enum class ESubdivisionLOD : uint8_t
{
	Low = 0,
	Medium = 1,
	High = 2,
	Ultra = 3,
	ESubdivisionLOD_MAX = 4
};

// Package: AIModule
// Enums: 46

// Object: Enum AIModule.EPathFollowingResult
enum class EPathFollowingResult : uint8_t
{
	Success = 0,
	Blocked = 1,
	OffPath = 2,
	Aborted = 3,
	Skipped_DEPRECATED = 4,
	Invalid = 5,
	EPathFollowingResult_MAX = 6
};

// Object: Enum AIModule.EEnvQueryStatus
enum class EEnvQueryStatus : uint8_t
{
	Processing = 0,
	Success = 1,
	Failed = 2,
	Aborted = 3,
	OwnerLost = 4,
	MissingParam = 5,
	EEnvQueryStatus_MAX = 6
};

// Object: Enum AIModule.EAIOptionFlag
enum class EAIOptionFlag : uint8_t
{
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3
};

// Object: Enum AIModule.FAIDistanceType
enum class EFAIDistanceType : uint8_t
{
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	MAX = 3
};

// Object: Enum AIModule.EAIRequestPriority
enum class EAIRequestPriority : uint8_t
{
	SoftScript = 0,
	Logic = 1,
	HardScript = 2,
	Reaction = 3,
	Ultimate = 4,
	MAX = 5
};

// Object: Enum AIModule.EAILockSource
enum class EAILockSource : uint8_t
{
	Animation = 0,
	Logic = 1,
	Script = 2,
	Gameplay = 3,
	MAX = 4
};

// Object: Enum AIModule.EGenericAICheck
enum class EGenericAICheck : uint8_t
{
	Less = 0,
	LessOrEqual = 1,
	Equal = 2,
	NotEqual = 3,
	GreaterOrEqual = 4,
	Greater = 5,
	IsTrue = 6,
	MAX = 7
};

// Object: Enum AIModule.EBasicKeyOperation
enum class EBasicKeyOperation : uint8_t
{
	Set = 0,
	NotSet = 1,
	EBasicKeyOperation_MAX = 2
};

// Object: Enum AIModule.EArithmeticKeyOperation
enum class EArithmeticKeyOperation : uint8_t
{
	Equal = 0,
	NotEqual = 1,
	Less = 2,
	LessOrEqual = 3,
	Greater = 4,
	GreaterOrEqual = 5,
	EArithmeticKeyOperation_MAX = 6
};

// Object: Enum AIModule.ETextKeyOperation
enum class ETextKeyOperation : uint8_t
{
	Equal = 0,
	NotEqual = 1,
	Contain = 2,
	NotContain = 3,
	ETextKeyOperation_MAX = 4
};

// Object: Enum AIModule.EEnvTestPurpose
enum class EEnvTestPurpose : uint8_t
{
	Filter = 0,
	Score = 1,
	FilterAndScore = 2,
	EEnvTestPurpose_MAX = 3
};

// Object: Enum AIModule.EEnvTestFilterType
enum class EEnvTestFilterType : uint8_t
{
	Minimum = 0,
	Maximum = 1,
	Range = 2,
	Match = 3,
	EEnvTestFilterType_MAX = 4
};

// Object: Enum AIModule.EEnvTestScoreEquation
enum class EEnvTestScoreEquation : uint8_t
{
	Linear = 0,
	Square = 1,
	InverseLinear = 2,
	SquareRoot = 3,
	Constant = 4,
	EEnvTestScoreEquation_MAX = 5
};

// Object: Enum AIModule.EEnvTestWeight
enum class EEnvTestWeight : uint8_t
{
	None = 0,
	Square = 1,
	Inverse = 2,
	Unused = 3,
	Constant = 4,
	Skip = 5,
	EEnvTestWeight_MAX = 6
};

// Object: Enum AIModule.EEnvTestCost
enum class EEnvTestCost : uint8_t
{
	Low = 0,
	Medium = 1,
	High = 2,
	EEnvTestCost_MAX = 3
};

// Object: Enum AIModule.EEnvTestFilterOperator
enum class EEnvTestFilterOperator : uint8_t
{
	AllPass = 0,
	AnyPass = 1,
	EEnvTestFilterOperator_MAX = 2
};

// Object: Enum AIModule.EEnvTestScoreOperator
enum class EEnvTestScoreOperator : uint8_t
{
	AverageScore = 0,
	MinScore = 1,
	MaxScore = 2,
	Multiply = 3,
	EEnvTestScoreOperator_MAX = 4
};

// Object: Enum AIModule.EEnvQueryRunMode
enum class EEnvQueryRunMode : uint8_t
{
	SingleResult = 0,
	RandomBest5Pct = 1,
	RandomBest25Pct = 2,
	AllMatching = 3,
	EEnvQueryRunMode_MAX = 4
};

// Object: Enum AIModule.EEnvQueryParam
enum class EEnvQueryParam : uint8_t
{
	Float = 0,
	Int = 1,
	Bool = 2,
	EEnvQueryParam_MAX = 3
};

// Object: Enum AIModule.EAIParamType
enum class EAIParamType : uint8_t
{
	Float = 0,
	Int = 1,
	Bool = 2,
	MAX = 3
};

// Object: Enum AIModule.EEnvQueryTrace
enum class EEnvQueryTrace : uint8_t
{
	None = 0,
	Navigation = 1,
	GeometryByChannel = 2,
	GeometryByProfile = 3,
	NavigationOverLedges = 4,
	EEnvQueryTrace_MAX = 5
};

// Object: Enum AIModule.EEnvTraceShape
enum class EEnvTraceShape : uint8_t
{
	Line = 0,
	Box = 1,
	Sphere = 2,
	Capsule = 3,
	EEnvTraceShape_MAX = 4
};

// Object: Enum AIModule.EEnvOverlapShape
enum class EEnvOverlapShape : uint8_t
{
	Box = 0,
	Sphere = 1,
	Capsule = 2,
	EEnvOverlapShape_MAX = 3
};

// Object: Enum AIModule.EEnvDirection
enum class EEnvDirection : uint8_t
{
	TwoPoints = 0,
	Rotation = 1,
	EEnvDirection_MAX = 2
};

// Object: Enum AIModule.EEnvQueryTestClamping
enum class EEnvQueryTestClamping : uint8_t
{
	None = 0,
	SpecifiedValue = 1,
	FilterThreshold = 2,
	EEnvQueryTestClamping_MAX = 3
};

// Object: Enum AIModule.ETeamAttitude
enum class ETeamAttitude : uint8_t
{
	Friendly = 0,
	Neutral = 1,
	Hostile = 2,
	ETeamAttitude_MAX = 3
};

// Object: Enum AIModule.EPawnActionMoveMode
enum class EPawnActionMoveMode : uint8_t
{
	UsePathfinding = 0,
	StraightLine = 1,
	EPawnActionMoveMode_MAX = 2
};

// Object: Enum AIModule.EBTNodeResult
enum class EBTNodeResult : uint8_t
{
	Succeeded = 0,
	Failed = 1,
	Aborted = 2,
	InProgress = 3,
	EBTNodeResult_MAX = 4
};

// Object: Enum AIModule.EBTFlowAbortMode
enum class EBTFlowAbortMode : uint8_t
{
	None = 0,
	LowerPriority = 1,
	Self = 2,
	Both = 3,
	EBTFlowAbortMode_MAX = 4
};

// Object: Enum AIModule.EBTChildIndex
enum class EBTChildIndex : uint8_t
{
	FirstNode = 0,
	TaskNode = 1,
	EBTChildIndex_MAX = 2
};

// Object: Enum AIModule.EBTDecoratorLogic
enum class EBTDecoratorLogic : uint8_t
{
	Invalid = 0,
	Test = 1,
	And = 2,
	Or = 3,
	Not = 4,
	EBTDecoratorLogic_MAX = 5
};

// Object: Enum AIModule.EBTParallelMode
enum class EBTParallelMode : uint8_t
{
	AbortBackground = 0,
	WaitForBackground = 1,
	EBTParallelMode_MAX = 2
};

// Object: Enum AIModule.EBTBlackboardRestart
enum class EBTBlackboardRestart : uint8_t
{
	ValueChange = 0,
	ResultChange = 1,
	EBTBlackboardRestart_MAX = 2
};

// Object: Enum AIModule.EBlackBoardEntryComparison
enum class EBlackBoardEntryComparison : uint8_t
{
	Equal = 0,
	NotEqual = 1,
	EBlackBoardEntryComparison_MAX = 2
};

// Object: Enum AIModule.EPathExistanceQueryType
enum class EPathExistanceQueryType : uint8_t
{
	NavmeshRaycast2D = 0,
	HierarchicalQuery = 1,
	RegularPathFinding = 2,
	EPathExistanceQueryType_MAX = 3
};

// Object: Enum AIModule.EEQSNormalizationType
enum class EEQSNormalizationType : uint8_t
{
	Absolute = 0,
	RelativeToScores = 1,
	EEQSNormalizationType_MAX = 2
};

// Object: Enum AIModule.EEnvQueryHightlightMode
enum class EEnvQueryHightlightMode : uint8_t
{
	All = 0,
	Best5Pct = 1,
	Best25Pct = 2,
	EEnvQueryHightlightMode_MAX = 3
};

// Object: Enum AIModule.EPointOnCircleSpacingMethod
enum class EPointOnCircleSpacingMethod : uint8_t
{
	BySpaceBetween = 0,
	ByNumberOfPoints = 1,
	EPointOnCircleSpacingMethod_MAX = 2
};

// Object: Enum AIModule.EEnvTestDistance
enum class EEnvTestDistance : uint8_t
{
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	DistanceAbsoluteZ = 3,
	EEnvTestDistance_MAX = 4
};

// Object: Enum AIModule.EEnvTestDot
enum class EEnvTestDot : uint8_t
{
	Dot3D = 0,
	Dot2D = 1,
	EEnvTestDot_MAX = 2
};

// Object: Enum AIModule.EEnvTestPathfinding
enum class EEnvTestPathfinding : uint8_t
{
	PathExist = 0,
	PathCost = 1,
	PathLength = 2,
	EEnvTestPathfinding_MAX = 3
};

// Object: Enum AIModule.EPathFollowingStatus
enum class EPathFollowingStatus : uint8_t
{
	Idle = 0,
	Waiting = 1,
	Paused = 2,
	Moving = 3,
	EPathFollowingStatus_MAX = 4
};

// Object: Enum AIModule.EPathFollowingAction
enum class EPathFollowingAction : uint8_t
{
	Error = 0,
	NoMove = 1,
	DirectMove = 2,
	PartialPath = 3,
	PathToGoal = 4,
	EPathFollowingAction_MAX = 5
};

// Object: Enum AIModule.EPathFollowingRequestResult
enum class EPathFollowingRequestResult : uint8_t
{
	Failed = 0,
	AlreadyAtGoal = 1,
	RequestSuccessful = 2,
	EPathFollowingRequestResult_MAX = 3
};

// Object: Enum AIModule.EAISenseNotifyType
enum class EAISenseNotifyType : uint8_t
{
	OnEveryPerception = 0,
	OnPerceptionChange = 1,
	EAISenseNotifyType_MAX = 2
};

// Object: Enum AIModule.EAITaskPriority
enum class EAITaskPriority : uint8_t
{
	Lowest = 0,
	Low = 64,
	AutonomousAI = 127,
	High = 192,
	Ultimate = 254,
	EAITaskPriority_MAX = 255
};

// Package: EnhancedInput
// Enums: 17

// Object: Enum EnhancedInput.EPlayerMappableKeySlot
enum class EPlayerMappableKeySlot : uint8_t
{
	First = 0,
	Second = 1,
	Third = 2,
	Fourth = 3,
	Fifth = 4,
	Sixth = 5,
	Seventh = 6,
	Unspecified = 7,
	Max = 8
};

// Object: Enum EnhancedInput.EInputActionValueType
enum class EInputActionValueType : uint8_t
{
	Boolean = 0,
	Axis1D = 1,
	Axis2D = 2,
	Axis3D = 3,
	EInputActionValueType_MAX = 4
};

// Object: Enum EnhancedInput.EMappingQueryResult
enum class EMappingQueryResult : uint8_t
{
	Error_EnhancedInputNotEnabled = 0,
	Error_InputContextNotInActiveContexts = 1,
	Error_InvalidAction = 2,
	NotMappable = 3,
	MappingAvailable = 4,
	EMappingQueryResult_MAX = 5
};

// Object: Enum EnhancedInput.EMappingQueryIssue
enum class EMappingQueryIssue : uint8_t
{
	NoIssue = 0,
	ReservedByAction = 1,
	HidesExistingMapping = 2,
	HiddenByExistingMapping = 4,
	CollisionWithMappingInSameContext = 8,
	ForcesTypePromotion = 16,
	ForcesTypeDemotion = 32,
	EMappingQueryIssue_MAX = 33
};

// Object: Enum EnhancedInput.EPlayerMappableKeySettingBehaviors
enum class EPlayerMappableKeySettingBehaviors : uint8_t
{
	InheritSettingsFromAction = 0,
	OverrideSettings = 1,
	IgnoreSettings = 2,
	EPlayerMappableKeySettingBehaviors_MAX = 3
};

// Object: Enum EnhancedInput.EInputMappingRebuildType
enum class EInputMappingRebuildType : uint8_t
{
	None = 0,
	Rebuild = 1,
	RebuildWithFlush = 2,
	EInputMappingRebuildType_MAX = 3
};

// Object: Enum EnhancedInput.EInputActionAccumulationBehavior
enum class EInputActionAccumulationBehavior : uint8_t
{
	TakeHighestAbsoluteValue = 0,
	Cumulative = 1,
	EInputActionAccumulationBehavior_MAX = 2
};

// Object: Enum EnhancedInput.EMappingContextInputModeFilterOptions
enum class EMappingContextInputModeFilterOptions : uint8_t
{
	UseProjectDefaultQuery = 0,
	UseCustomQuery = 1,
	DoNotFilter = 2,
	EMappingContextInputModeFilterOptions_MAX = 3
};

// Object: Enum EnhancedInput.EMappingContextRegistrationTrackingMode
enum class EMappingContextRegistrationTrackingMode : uint8_t
{
	Untracked = 0,
	CountRegistrations = 1,
	EMappingContextRegistrationTrackingMode_MAX = 2
};

// Object: Enum EnhancedInput.ENormalizeInputSmoothingType
enum class ENormalizeInputSmoothingType : uint8_t
{
	None = 0,
	Lerp = 1,
	Interp_To = 2,
	Interp_Constant_To = 3,
	Interp_Circular_In = 4,
	Interp_Circular_Out = 5,
	Interp_Circular_In_Out = 6,
	Interp_Ease_In = 7,
	Interp_Ease_Out = 8,
	Interp_Ease_In_Out = 9,
	Interp_Expo_In = 10,
	Interp_Expo_Out = 11,
	Interp_Expo_In_Out = 12,
	Interp_Sin_In = 13,
	Interp_Sin_Out = 14,
	Interp_Sin_In_Out = 15,
	ENormalizeInputSmoothingType_MAX = 16
};

// Object: Enum EnhancedInput.EDeadZoneType
enum class EDeadZoneType : uint8_t
{
	Axial = 0,
	Radial = 1,
	UnscaledRadial = 2,
	EDeadZoneType_MAX = 3
};

// Object: Enum EnhancedInput.EFOVScalingType
enum class EFOVScalingType : uint8_t
{
	Standard = 0,
	UE4_BackCompat = 1,
	EFOVScalingType_MAX = 2
};

// Object: Enum EnhancedInput.EInputAxisSwizzle
enum class EInputAxisSwizzle : uint8_t
{
	YXZ = 0,
	ZYX = 1,
	XZY = 2,
	YZX = 3,
	ZXY = 4,
	EInputAxisSwizzle_MAX = 5
};

// Object: Enum EnhancedInput.ETriggerState
enum class ETriggerState : uint8_t
{
	None = 0,
	Ongoing = 1,
	Triggered = 2,
	ETriggerState_MAX = 3
};

// Object: Enum EnhancedInput.ETriggerEvent
enum class ETriggerEvent : uint8_t
{
	None = 0,
	Triggered = 1,
	Started = 2,
	Ongoing = 4,
	Canceled = 8,
	Completed = 16,
	ETriggerEvent_MAX = 17
};

// Object: Enum EnhancedInput.ETriggerType
enum class ETriggerType : uint8_t
{
	Explicit = 0,
	Implicit = 1,
	Blocker = 2,
	ETriggerType_MAX = 3
};

// Object: Enum EnhancedInput.ETriggerEventsSupported
enum class ETriggerEventsSupported : uint8_t
{
	None = 0,
	Instant = 1,
	Uninterruptible = 2,
	Ongoing = 4,
	All = 7,
	ETriggerEventsSupported_MAX = 8
};

// Package: CommonInput
// Enums: 3

// Object: Enum CommonInput.ECommonInputType
enum class ECommonInputType : uint8_t
{
	MouseAndKeyboard = 0,
	Gamepad = 1,
	Touch = 2,
	Count = 3,
	ECommonInputType_MAX = 4
};

// Object: Enum CommonInput.ECommonInputMode
enum class ECommonInputMode : uint8_t
{
	Menu = 0,
	Game = 1,
	All = 2,
	MAX = 3
};

// Object: Enum CommonInput.ECommonInputEventFlowBehavior
enum class ECommonInputEventFlowBehavior : uint8_t
{
	BlockIfActive = 0,
	BlockIfHandled = 1,
	NeverBlock = 2,
	ECommonInputEventFlowBehavior_MAX = 3
};

// Package: CommonUI
// Enums: 8

// Object: Enum CommonUI.ERotatorDirection
enum class ERotatorDirection : uint8_t
{
	Right = 0,
	Left = 1,
	ERotatorDirection_MAX = 2
};

// Object: Enum CommonUI.ECommonNumericType
enum class ECommonNumericType : uint8_t
{
	Number = 0,
	Percentage = 1,
	Seconds = 2,
	Distance = 3,
	ECommonNumericType_MAX = 4
};

// Object: Enum CommonUI.ERichTextInlineIconDisplayMode
enum class ERichTextInlineIconDisplayMode : uint8_t
{
	IconOnly = 0,
	TextOnly = 1,
	IconAndText = 2,
	MAX = 3
};

// Object: Enum CommonUI.ECommonButtonAcceptKeyHandling
enum class ECommonButtonAcceptKeyHandling : uint8_t
{
	Ignore = 0,
	TriggerClick = 1,
	ECommonButtonAcceptKeyHandling_MAX = 2
};

// Object: Enum CommonUI.EInputActionState
enum class EInputActionState : uint8_t
{
	Enabled = 0,
	Disabled = 1,
	Hidden = 2,
	HiddenAndDisabled = 3,
	EInputActionState_MAX = 4
};

// Object: Enum CommonUI.ECommonSwitcherTransition
enum class ECommonSwitcherTransition : uint8_t
{
	FadeOnly = 0,
	Horizontal = 1,
	Vertical = 2,
	Zoom = 3,
	ECommonSwitcherTransition_MAX = 4
};

// Object: Enum CommonUI.ETransitionCurve
enum class ETransitionCurve : uint8_t
{
	Linear = 0,
	QuadIn = 1,
	QuadOut = 2,
	QuadInOut = 3,
	CubicIn = 4,
	CubicOut = 5,
	CubicInOut = 6,
	ETransitionCurve_MAX = 7
};

// Object: Enum CommonUI.ECommonSwitcherTransitionFallbackStrategy
enum class ECommonSwitcherTransitionFallbackStrategy : uint8_t
{
	None = 0,
	Previous = 1,
	Next = 2,
	First = 3,
	Last = 4,
	ECommonSwitcherTransitionFallbackStrategy_MAX = 5
};

// Package: OnlineSubsystem
// Enums: 2

// Object: Enum OnlineSubsystem.EInAppPurchaseState
enum class EInAppPurchaseState : uint8_t
{
	Unknown = 0,
	Success = 1,
	Failed = 2,
	Cancelled = 3,
	Invalid = 4,
	NotAllowed = 5,
	Restored = 6,
	AlreadyOwned = 7,
	EInAppPurchaseState_MAX = 8
};

// Object: Enum OnlineSubsystem.EMPMatchOutcome
enum class EMPMatchOutcome : uint8_t
{
	None = 0,
	Quit = 1,
	Won = 2,
	Lost = 3,
	Tied = 4,
	TimeExpired = 5,
	First = 6,
	Second = 7,
	Third = 8,
	Fourth = 9,
	EMPMatchOutcome_MAX = 10
};

// Package: OnlineSubsystemUtils
// Enums: 7

// Object: Enum OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
enum class EOnlineProxyStoreOfferDiscountType : uint8_t
{
	NotOnSale = 0,
	Percentage = 1,
	DiscountAmount = 2,
	PayAmount = 3,
	EOnlineProxyStoreOfferDiscountType_MAX = 4
};

// Object: Enum OnlineSubsystemUtils.EInAppPurchaseStatus
enum class EInAppPurchaseStatus : uint8_t
{
	Invalid = 0,
	Failed = 1,
	Deferred = 2,
	Canceled = 3,
	Purchased = 4,
	Restored = 5,
	EInAppPurchaseStatus_MAX = 6
};

// Object: Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8_t
{
	Invalid = 0,
	Closed = 1,
	Pending = 2,
	Open = 3,
	EBeaconConnectionState_MAX = 4
};

// Object: Enum OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8_t
{
	NonePending = 0,
	ExistingSessionReservation = 1,
	ReservationUpdate = 2,
	EmptyServerReservation = 3,
	Reconnect = 4,
	Abandon = 5,
	ReservationRemoveMembers = 6,
	AddOrUpdateReservation = 7,
	EClientRequestType_MAX = 8
};

// Object: Enum OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8_t
{
	NoResult = 0,
	RequestPending = 1,
	GeneralError = 2,
	PartyLimitReached = 3,
	IncorrectPlayerCount = 4,
	RequestTimedOut = 5,
	ReservationDuplicate = 6,
	ReservationNotFound = 7,
	ReservationAccepted = 8,
	ReservationDenied = 9,
	ReservationDenied_CrossPlayRestriction = 10,
	ReservationDenied_Banned = 11,
	ReservationRequestCanceled = 12,
	ReservationInvalid = 13,
	BadSessionId = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	ReservationDenied_ValidationFailed = 16,
	EPartyReservationResult_MAX = 17
};

// Object: Enum OnlineSubsystemUtils.ESpectatorClientRequestType
enum class ESpectatorClientRequestType : uint8_t
{
	NonePending = 0,
	ExistingSessionReservation = 1,
	ReservationUpdate = 2,
	EmptyServerReservation = 3,
	Reconnect = 4,
	Abandon = 5,
	ESpectatorClientRequestType_MAX = 6
};

// Object: Enum OnlineSubsystemUtils.ESpectatorReservationResult
enum class ESpectatorReservationResult : uint8_t
{
	NoResult = 0,
	RequestPending = 1,
	GeneralError = 2,
	SpectatorLimitReached = 3,
	IncorrectPlayerCount = 4,
	RequestTimedOut = 5,
	ReservationDuplicate = 6,
	ReservationNotFound = 7,
	ReservationAccepted = 8,
	ReservationDenied = 9,
	ReservationDenied_CrossPlayRestriction = 10,
	ReservationDenied_Banned = 11,
	ReservationRequestCanceled = 12,
	ReservationInvalid = 13,
	BadSessionId = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	ESpectatorReservationResult_MAX = 16
};

// Package: CommonUser
// Enums: 7

// Object: Enum CommonUser.ECommonSessionInformationState
enum class ECommonSessionInformationState : uint8_t
{
	OutOfGame = 0,
	Matchmaking = 1,
	InGame = 2,
	ECommonSessionInformationState_MAX = 3
};

// Object: Enum CommonUser.ECommonUserAvailability
enum class ECommonUserAvailability : uint8_t
{
	Unknown = 0,
	NowAvailable = 1,
	PossiblyAvailable = 2,
	CurrentlyUnavailable = 3,
	AlwaysUnavailable = 4,
	Invalid = 5,
	ECommonUserAvailability_MAX = 6
};

// Object: Enum CommonUser.ECommonUserPrivilege
enum class ECommonUserPrivilege : uint8_t
{
	CanPlay = 0,
	CanPlayOnline = 1,
	CanCommunicateViaTextOnline = 2,
	CanCommunicateViaVoiceOnline = 3,
	CanUseUserGeneratedContent = 4,
	CanUseCrossPlay = 5,
	Invalid_Count = 6,
	ECommonUserPrivilege_MAX = 7
};

// Object: Enum CommonUser.ECommonUserOnlineContext
enum class ECommonUserOnlineContext : uint8_t
{
	Game = 0,
	Default = 1,
	Service = 2,
	ServiceOrDefault = 3,
	Platform = 4,
	PlatformOrDefault = 5,
	Invalid = 6,
	ECommonUserOnlineContext_MAX = 7
};

// Object: Enum CommonUser.ECommonUserInitializationState
enum class ECommonUserInitializationState : uint8_t
{
	Unknown = 0,
	DoingInitialLogin = 1,
	DoingNetworkLogin = 2,
	FailedtoLogin = 3,
	LoggedInOnline = 4,
	LoggedInLocalOnly = 5,
	Invalid = 6,
	ECommonUserInitializationState_MAX = 7
};

// Object: Enum CommonUser.ECommonUserPrivilegeResult
enum class ECommonUserPrivilegeResult : uint8_t
{
	Unknown = 0,
	Available = 1,
	UserNotLoggedIn = 2,
	LicenseInvalid = 3,
	VersionOutdated = 4,
	NetworkConnectionUnavailable = 5,
	AgeRestricted = 6,
	AccountTypeRestricted = 7,
	AccountUseRestricted = 8,
	PlatformFailure = 9,
	ECommonUserPrivilegeResult_MAX = 10
};

// Object: Enum CommonUser.ECommonSessionOnlineMode
enum class ECommonSessionOnlineMode : uint8_t
{
	Offline = 0,
	LAN = 1,
	Online = 2,
	ECommonSessionOnlineMode_MAX = 3
};

// Package: CommonGame
// Enums: 3

// Object: Enum CommonGame.ECommonMessagingResult
enum class ECommonMessagingResult : uint8_t
{
	Confirmed = 0,
	Declined = 1,
	Cancelled = 2,
	Killed = 3,
	Unknown = 4,
	ECommonMessagingResult_MAX = 5
};

// Object: Enum CommonGame.ECommonKeybindForcedHoldStatus
enum class ECommonKeybindForcedHoldStatus : uint8_t
{
	NoForcedHold = 0,
	ForcedHold = 1,
	NeverShowHold = 2,
	ECommonKeybindForcedHoldStatus_MAX = 3
};

// Object: Enum CommonGame.ELocalMultiplayerInteractionMode
enum class ELocalMultiplayerInteractionMode : uint8_t
{
	PrimaryOnly = 0,
	SingleToggle = 1,
	Simultaneous = 2,
	ELocalMultiplayerInteractionMode_MAX = 3
};

// Package: Hotfix
// Enums: 3

// Object: Enum Hotfix.EHotfixResult
enum class EHotfixResult : uint8_t
{
	Failed = 0,
	Success = 1,
	SuccessNoChange = 2,
	SuccessNeedsReload = 3,
	SuccessNeedsRelaunch = 4,
	EHotfixResult_MAX = 5
};

// Object: Enum Hotfix.EUpdateState
enum class EUpdateState : uint8_t
{
	UpdateIdle = 0,
	UpdatePending = 1,
	CheckingForPatch = 2,
	CheckingForHotfix = 3,
	WaitingOnInitialLoad = 4,
	InitialLoadComplete = 5,
	UpdateComplete = 6,
	EUpdateState_MAX = 7
};

// Object: Enum Hotfix.EUpdateCompletionStatus
enum class EUpdateCompletionStatus : uint8_t
{
	UpdateUnknown = 0,
	UpdateSuccess = 1,
	UpdateSuccess_NoChange = 2,
	UpdateSuccess_NeedsReload = 3,
	UpdateSuccess_NeedsRelaunch = 4,
	UpdateSuccess_NeedsPatch = 5,
	UpdateFailure_PatchCheck = 6,
	UpdateFailure_HotfixCheck = 7,
	UpdateFailure_NotLoggedIn = 8,
	EUpdateCompletionStatus_MAX = 9
};

// Package: GameSubtitles
// Enums: 4

// Object: Enum GameSubtitles.ESubtitleDisplayTextSize
enum class ESubtitleDisplayTextSize : uint8_t
{
	ExtraSmall = 0,
	Small = 1,
	Medium = 2,
	Large = 3,
	ExtraLarge = 4,
	ESubtitleDisplayTextSize_MAX = 5
};

// Object: Enum GameSubtitles.ESubtitleDisplayTextColor
enum class ESubtitleDisplayTextColor : uint8_t
{
	White = 0,
	Yellow = 1,
	ESubtitleDisplayTextColor_MAX = 2
};

// Object: Enum GameSubtitles.ESubtitleDisplayTextBorder
enum class ESubtitleDisplayTextBorder : uint8_t
{
	None = 0,
	Outline = 1,
	DropShadow = 2,
	ESubtitleDisplayTextBorder_MAX = 3
};

// Object: Enum GameSubtitles.ESubtitleDisplayBackgroundOpacity
enum class ESubtitleDisplayBackgroundOpacity : uint8_t
{
	Clear = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Solid = 4,
	ESubtitleDisplayBackgroundOpacity_MAX = 5
};

// Package: UIExtension
// Enums: 2

// Object: Enum UIExtension.EUIExtensionAction
enum class EUIExtensionAction : uint8_t
{
	Added = 0,
	Removed = 1,
	EUIExtensionAction_MAX = 2
};

// Object: Enum UIExtension.EUIExtensionPointMatch
enum class EUIExtensionPointMatch : uint8_t
{
	ExactMatch = 0,
	PartialMatch = 1,
	EUIExtensionPointMatch_MAX = 2
};

// Package: MetasoundFrontend
// Enums: 6

// Object: Enum MetasoundFrontend.ESetParamResult
enum class ESetParamResult : uint8_t
{
	Succeeded = 0,
	Failed = 1,
	ESetParamResult_MAX = 2
};

// Object: Enum MetasoundFrontend.EMetasoundFrontendVertexAccessType
enum class EMetasoundFrontendVertexAccessType : uint8_t
{
	Reference = 0,
	Value = 1,
	Unset = 2,
	EMetasoundFrontendVertexAccessType_MAX = 3
};

// Object: Enum MetasoundFrontend.EMetasoundFrontendClassType
enum class EMetasoundFrontendClassType : uint8_t
{
	External = 0,
	Graph = 1,
	Input = 2,
	Output = 3,
	Literal = 4,
	Variable = 5,
	VariableDeferredAccessor = 6,
	VariableAccessor = 7,
	VariableMutator = 8,
	Template = 9,
	Invalid = 10,
	EMetasoundFrontendClassType_MAX = 11
};

// Object: Enum MetasoundFrontend.EMetaSoundFrontendGraphCommentMoveMode
enum class EMetaSoundFrontendGraphCommentMoveMode : uint8_t
{
	GroupMovement = 0,
	NoGroupMovement = 1,
	EMetaSoundFrontendGraphCommentMoveMode_MAX = 2
};

// Object: Enum MetasoundFrontend.EMetasoundFrontendNodeStyleDisplayVisibility
enum class EMetasoundFrontendNodeStyleDisplayVisibility : uint8_t
{
	Visible = 0,
	Hidden = 1,
	EMetasoundFrontendNodeStyleDisplayVisibility_MAX = 2
};

// Object: Enum MetasoundFrontend.EMetasoundFrontendLiteralType
enum class EMetasoundFrontendLiteralType : uint8_t
{
	None = 0,
	Boolean = 1,
	Integer = 2,
	Float = 3,
	String = 4,
	UObject = 5,
	NoneArray = 6,
	BooleanArray = 7,
	IntegerArray = 8,
	FloatArray = 9,
	StringArray = 10,
	UObjectArray = 11,
	Invalid = 12,
	EMetasoundFrontendLiteralType_MAX = 13
};

// Package: WaveTable
// Enums: 4

// Object: Enum WaveTable.EWaveTableBitDepth
enum class EWaveTableBitDepth : uint8_t
{
	PCM = 0,
	IEEE_Float = 1,
	COUNT = 2,
	EWaveTableBitDepth_MAX = 3
};

// Object: Enum WaveTable.EWaveTableResolution
enum class EWaveTableResolution : uint8_t
{
	None = 0,
	Res = 1,
	Res = 2,
	Res = 3,
	Res = 4,
	Res = 5,
	Res = 6,
	Res = 7,
	Res = 8,
	Res = 9,
	Res = 10,
	Res_Max = 11,
	Maximum = 12,
	EWaveTableResolution_MAX = 13
};

// Object: Enum WaveTable.EWaveTableSamplingMode
enum class EWaveTableSamplingMode : uint8_t
{
	FixedSampleRate = 0,
	FixedResolution = 1,
	COUNT = 2,
	EWaveTableSamplingMode_MAX = 3
};

// Object: Enum WaveTable.EWaveTableCurve
enum class EWaveTableCurve : uint8_t
{
	Linear = 0,
	Linear_Inv = 1,
	Exp = 2,
	Exp_Inverse = 3,
	Log = 4,
	Sin = 5,
	Sin_Full = 6,
	SCurve = 7,
	Shared = 8,
	Custom = 9,
	File = 10,
	Count = 11,
	EWaveTableCurve_MAX = 12
};

// Package: MetasoundEngine
// Enums: 3

// Object: Enum MetasoundEngine.EMetaSoundMessageLevel
enum class EMetaSoundMessageLevel : uint8_t
{
	Error = 0,
	Warning = 1,
	Info = 2,
	EMetaSoundMessageLevel_MAX = 3
};

// Object: Enum MetasoundEngine.EMetaSoundOutputAudioFormat
enum class EMetaSoundOutputAudioFormat : uint8_t
{
	Mono = 0,
	Stereo = 1,
	Quad = 2,
	FiveDotOne = 3,
	SevenDotOne = 4,
	COUNT = 5,
	EMetaSoundOutputAudioFormat_MAX = 6
};

// Object: Enum MetasoundEngine.EMetaSoundBuilderResult
enum class EMetaSoundBuilderResult : uint8_t
{
	Succeeded = 0,
	Failed = 1,
	EMetaSoundBuilderResult_MAX = 2
};

// Package: GameplayMessageRuntime
// Enums: 1

// Object: Enum GameplayMessageRuntime.EGameplayMessageMatch
enum class EGameplayMessageMatch : uint8_t
{
	ExactMatch = 0,
	PartialMatch = 1,
	EGameplayMessageMatch_MAX = 2
};

// Package: AudioModulation
// Enums: 1

// Object: Enum AudioModulation.ESoundModulationLFOShape
enum class ESoundModulationLFOShape : uint8_t
{
	Sine = 0,
	UpSaw = 1,
	DownSaw = 2,
	Square = 3,
	Triangle = 4,
	Exponential = 5,
	RandomSampleHold = 6,
	COUNT = 7,
	ESoundModulationLFOShape_MAX = 8
};

// Package: FirebaseGoodies
// Enums: 13

// Object: Enum FirebaseGoodies.EValueType
enum class EValueType : uint8_t
{
	Null = 0,
	Integer = 1,
	Float = 2,
	Bool = 3,
	String = 4,
	Array = 5,
	Map = 6,
	Timestamp = 7,
	ServerTimestamp = 8,
	EValueType_MAX = 9
};

// Object: Enum FirebaseGoodies.EFirestoreErrorCode
enum class EFirestoreErrorCode : uint8_t
{
	Ok = 0,
	Cancelled = 1,
	Unknown = 2,
	InvalidArgument = 3,
	DeadlineExceeded = 4,
	NotFound = 5,
	AlreadyExists = 6,
	PermissionDenied = 7,
	ResourceExhausted = 8,
	FailedPrecondition = 9,
	Aborted = 10,
	OutOfRange = 11,
	Unimplemented = 12,
	Internal = 13,
	Unavailable = 14,
	DataLoss = 15,
	Unauthenticated = 16,
	EFirestoreErrorCode_MAX = 17
};

// Object: Enum FirebaseGoodies.EChileEventType
enum class EChileEventType : uint8_t
{
	Added = 0,
	Changed = 1,
	Removed = 2,
	Moved = 3,
	EChileEventType_MAX = 4
};

// Object: Enum FirebaseGoodies.EParameterType
enum class EParameterType : uint8_t
{
	Undefined = 0,
	Integer = 1,
	Float = 2,
	String = 3,
	EParameterType_MAX = 4
};

// Object: Enum FirebaseGoodies.EAndroidStorageLocation
enum class EAndroidStorageLocation : uint8_t
{
	Music = 0,
	Podcasts = 1,
	Ringtones = 2,
	Alarms = 3,
	Notifications = 4,
	Pictures = 5,
	Movies = 6,
	Downloads = 7,
	DCIM = 8,
	Documents = 9,
	Audiobooks = 10,
	EAndroidStorageLocation_MAX = 11
};

// Object: Enum FirebaseGoodies.EDynamicLinksMatchType
enum class EDynamicLinksMatchType : uint8_t
{
	None = 0,
	Weak = 1,
	Default = 2,
	Unique = 3,
	EDynamicLinksMatchType_MAX = 4
};

// Object: Enum FirebaseGoodies.EFirestoreSourceType
enum class EFirestoreSourceType : uint8_t
{
	Default = 0,
	Server = 1,
	Cache = 2,
	EFirestoreSourceType_MAX = 3
};

// Object: Enum FirebaseGoodies.EDocumentSetOptions
enum class EDocumentSetOptions : uint8_t
{
	Overwrite = 0,
	Merge = 1,
	EDocumentSetOptions_MAX = 2
};

// Object: Enum FirebaseGoodies.EFirestoreListenerExecutorType
enum class EFirestoreListenerExecutorType : uint8_t
{
	Default = 0,
	Direct = 1,
	Background = 2,
	EFirestoreListenerExecutorType_MAX = 3
};

// Object: Enum FirebaseGoodies.ERemoteConfigParameterValueType
enum class ERemoteConfigParameterValueType : uint8_t
{
	Null = 0,
	Long = 1,
	Float = 2,
	Bool = 3,
	String = 4,
	ERemoteConfigParameterValueType_MAX = 5
};

// Object: Enum FirebaseGoodies.EFGRemoteMessagePriority
enum class EFGRemoteMessagePriority : uint8_t
{
	Unknown = 0,
	High = 1,
	Normal = 2,
	EFGRemoteMessagePriority_MAX = 3
};

// Object: Enum FirebaseGoodies.ETransactionResult
enum class ETransactionResult : uint8_t
{
	Success = 0,
	Abort = 1,
	ETransactionResult_MAX = 2
};

// Object: Enum FirebaseGoodies.EVariantGetExec
enum class EVariantGetExec : uint8_t
{
	Then = 0,
	Failed = 1,
	EVariantGetExec_MAX = 2
};

// Package: EasyAds
// Enums: 5

// Object: Enum EasyAds.ConsentStatus
enum class EConsentStatus : uint8_t
{
	INVALID = 0,
	UNKNOWN = 1,
	NON_PERSONALIZED = 2,
	PERSONALIZED = 3,
	ConsentStatus_MAX = 4
};

// Object: Enum EasyAds.AdNetworks
enum class EAdNetworks : uint8_t
{
	Admob = 0,
	Unity = 1,
	Chartboost = 2,
	Vungle = 3,
	Applovin = 4,
	Facebook = 5,
	Adcolony = 6,
	Ironsource = 7,
	Inmobi = 8,
	Tapjoy = 9,
	Imobile = 10,
	Mintegral = 11,
	AdNetworks_MAX = 12
};

// Object: Enum EasyAds.ChildDirectedTreatment
enum class EChildDirectedTreatment : uint8_t
{
	TAG_FOR_CHILD_DIRECTED_TREATMENT_UNSPECIFIED = 0,
	TAG_FOR_CHILD_DIRECTED_TREATMENT_FALSE = 1,
	TAG_FOR_CHILD_DIRECTED_TREATMENT_TRUE = 2,
	TAG_FOR_CHILD_DIRECTED_TREATMENT_MAX = 3
};

// Object: Enum EasyAds.MaxAdContentRating
enum class EMaxAdContentRating : uint8_t
{
	MAX_AD_CONTENT_RATING_G = 0,
	MAX_AD_CONTENT_RATING_PG = 1,
	MAX_AD_CONTENT_RATING_T = 2,
	MAX_AD_CONTENT_RATING_MA = 3,
	MAX_AD_CONTENT_RATING_MAX = 4
};

// Object: Enum EasyAds.UnderAgeOfConsent
enum class EUnderAgeOfConsent : uint8_t
{
	TAG_FOR_UNDER_AGE_OF_CONSENT_TRUE = 0,
	TAG_FOR_UNDER_AGE_OF_CONSENT_FALSE = 1,
	TAG_FOR_UNDER_AGE_OF_CONSENT_UNSPECIFIED = 2,
	TAG_FOR_UNDER_AGE_OF_CONSENT_MAX = 3
};

// Package: LyraGame
// Enums: 25

// Object: Enum LyraGame.ECharacterCustomizationCollisionMode
enum class ECharacterCustomizationCollisionMode : uint8_t
{
	NoCollision = 0,
	UseCollisionFromCharacterPart = 1,
	ECharacterCustomizationCollisionMode_MAX = 2
};

// Object: Enum LyraGame.EEffectsContextMatchType
enum class EEffectsContextMatchType : uint8_t
{
	ExactMatch = 0,
	BestMatch = 1,
	EEffectsContextMatchType_MAX = 2
};

// Object: Enum LyraGame.ELyraStatDisplayMode
enum class ELyraStatDisplayMode : uint8_t
{
	Hidden = 0,
	TextOnly = 1,
	GraphOnly = 2,
	TextAndGraph = 3,
	ELyraStatDisplayMode_MAX = 4
};

// Object: Enum LyraGame.ELyraDisplayablePerformanceStat
enum class ELyraDisplayablePerformanceStat : uint8_t
{
	ClientFPS = 0,
	ServerFPS = 1,
	IdleTime = 2,
	FrameTime = 3,
	FrameTime_GameThread = 4,
	FrameTime_RenderThread = 5,
	FrameTime_RHIThread = 6,
	FrameTime_GPU = 7,
	Ping = 8,
	PacketLoss_Incoming = 9,
	PacketLoss_Outgoing = 10,
	PacketRate_Incoming = 11,
	PacketRate_Outgoing = 12,
	PacketSize_Incoming = 13,
	PacketSize_Outgoing = 14,
	Latency_Total = 15,
	Latency_Game = 16,
	Latency_Render = 17,
	Count = 18,
	ELyraDisplayablePerformanceStat_MAX = 19
};

// Object: Enum LyraGame.EClassRepNodeMapping
enum class EClassRepNodeMapping : uint8_t
{
	NotRouted = 0,
	RelevantAllConnections = 1,
	Spatialize_Static = 2,
	Spatialize_Dynamic = 3,
	Spatialize_Dormancy = 4,
	EClassRepNodeMapping_MAX = 5
};

// Object: Enum LyraGame.ELyraAbilityActivationPolicy
enum class ELyraAbilityActivationPolicy : uint8_t
{
	OnInputTriggered = 0,
	WhileInputActive = 1,
	OnSpawn = 2,
	ELyraAbilityActivationPolicy_MAX = 3
};

// Object: Enum LyraGame.ELyraAbilityActivationGroup
enum class ELyraAbilityActivationGroup : uint8_t
{
	Independent = 0,
	Exclusive_Replaceable = 1,
	Exclusive_Blocking = 2,
	MAX = 3
};

// Object: Enum LyraGame.EPhaseTagMatchType
enum class EPhaseTagMatchType : uint8_t
{
	ExactMatch = 0,
	PartialMatch = 1,
	EPhaseTagMatchType_MAX = 2
};

// Object: Enum LyraGame.ELyraCameraModeBlendFunction
enum class ELyraCameraModeBlendFunction : uint8_t
{
	Linear = 0,
	EaseIn = 1,
	EaseOut = 2,
	EaseInOut = 3,
	COUNT = 4,
	ELyraCameraModeBlendFunction_MAX = 5
};

// Object: Enum LyraGame.ELyraDeathState
enum class ELyraDeathState : uint8_t
{
	NotDead = 0,
	DeathStarted = 1,
	DeathFinished = 2,
	ELyraDeathState_MAX = 3
};

// Object: Enum LyraGame.ECosmeticCheatMode
enum class ECosmeticCheatMode : uint8_t
{
	ReplaceParts = 0,
	AddParts = 1,
	ECosmeticCheatMode_MAX = 2
};

// Object: Enum LyraGame.ECheatExecutionTime
enum class ECheatExecutionTime : uint8_t
{
	OnCheatManagerCreated = 0,
	OnPlayerPawnPossession = 1,
	ECheatExecutionTime_MAX = 2
};

// Object: Enum LyraGame.EContextEffectsLibraryLoadState
enum class EContextEffectsLibraryLoadState : uint8_t
{
	Unloaded = 0,
	Loading = 1,
	Loaded = 2,
	EContextEffectsLibraryLoadState_MAX = 3
};

// Object: Enum LyraGame.EDeadzoneStick
enum class EDeadzoneStick : uint8_t
{
	MoveStick = 0,
	LookStick = 1,
	EDeadzoneStick_MAX = 2
};

// Object: Enum LyraGame.ELyraTargetingType
enum class ELyraTargetingType : uint8_t
{
	Normal = 0,
	ADS = 1,
	ELyraTargetingType_MAX = 2
};

// Object: Enum LyraGame.ELyraFramePacingMode
enum class ELyraFramePacingMode : uint8_t
{
	DesktopStyle = 0,
	ConsoleStyle = 1,
	MobileStyle = 2,
	ELyraFramePacingMode_MAX = 3
};

// Object: Enum LyraGame.ELyraPlayerConnectionType
enum class ELyraPlayerConnectionType : uint8_t
{
	Player = 0,
	LiveSpectator = 1,
	ReplaySpectator = 2,
	InactivePlayer = 3,
	ELyraPlayerConnectionType_MAX = 4
};

// Object: Enum LyraGame.EColorBlindMode
enum class EColorBlindMode : uint8_t
{
	Off = 0,
	Deuteranope = 1,
	Protanope = 2,
	Tritanope = 3,
	EColorBlindMode_MAX = 4
};

// Object: Enum LyraGame.ELyraAllowBackgroundAudioSetting
enum class ELyraAllowBackgroundAudioSetting : uint8_t
{
	Off = 0,
	AllSounds = 1,
	Num = 2,
	ELyraAllowBackgroundAudioSetting_MAX = 3
};

// Object: Enum LyraGame.ELyraGamepadSensitivity
enum class ELyraGamepadSensitivity : uint8_t
{
	Invalid = 0,
	Slow = 1,
	SlowPlus = 2,
	SlowPlusPlus = 3,
	Normal = 4,
	NormalPlus = 5,
	NormalPlusPlus = 6,
	Fast = 7,
	FastPlus = 8,
	FastPlusPlus = 9,
	Insane = 10,
	MAX = 11
};

// Object: Enum LyraGame.EBlueprintExposedNetMode
enum class EBlueprintExposedNetMode : uint8_t
{
	Standalone = 0,
	DedicatedServer = 1,
	ListenServer = 2,
	Client = 3,
	EBlueprintExposedNetMode_MAX = 4
};

// Object: Enum LyraGame.ELyraTeamComparison
enum class ELyraTeamComparison : uint8_t
{
	OnSameTeam = 0,
	DifferentTeams = 1,
	InvalidArgument = 2,
	ELyraTeamComparison_MAX = 3
};

// Object: Enum LyraGame.EActorCanvasProjectionMode
enum class EActorCanvasProjectionMode : uint8_t
{
	ComponentPoint = 0,
	ComponentBoundingBox = 1,
	ComponentScreenBoundingBox = 2,
	ActorBoundingBox = 3,
	ActorScreenBoundingBox = 4,
	EActorCanvasProjectionMode_MAX = 5
};

// Object: Enum LyraGame.ELyraWidgetInputMode
enum class ELyraWidgetInputMode : uint8_t
{
	Default = 0,
	GameAndMenu = 1,
	Game = 2,
	Menu = 3,
	ELyraWidgetInputMode_MAX = 4
};

// Object: Enum LyraGame.ELyraAbilityTargetingSource
enum class ELyraAbilityTargetingSource : uint8_t
{
	CameraTowardsFocus = 0,
	PawnForward = 1,
	PawnTowardsFocus = 2,
	WeaponForward = 3,
	WeaponTowardsFocus = 4,
	Custom = 5,
	ELyraAbilityTargetingSource_MAX = 6
};

// Package: CommonConversationRuntime
// Enums: 3

// Object: Enum CommonConversationRuntime.EConversationTaskResultType
enum class EConversationTaskResultType : uint8_t
{
	Invalid = 0,
	AbortConversation = 1,
	AdvanceConversation = 2,
	AdvanceConversationWithChoice = 3,
	PauseConversationAndSendClientChoices = 4,
	ReturnToLastClientChoice = 5,
	ReturnToCurrentClientChoice = 6,
	ReturnToConversationStart = 7,
	EConversationTaskResultType_MAX = 8
};

// Object: Enum CommonConversationRuntime.EConversationRequirementResult
enum class EConversationRequirementResult : uint8_t
{
	Passed = 0,
	FailedButVisible = 1,
	FailedAndHidden = 2,
	EConversationRequirementResult_MAX = 3
};

// Object: Enum CommonConversationRuntime.EConversationChoiceType
enum class EConversationChoiceType : uint8_t
{
	ServerOnly = 0,
	UserChoiceAvailable = 1,
	UserChoiceUnavailable = 2,
	EConversationChoiceType_MAX = 3
};

// Package: Water
// Enums: 6

// Object: Enum Water.EBuoyancyEvent
enum class EBuoyancyEvent : uint8_t
{
	EnteredWaterBody = 0,
	ExitedWaterBody = 1,
	EBuoyancyEvent_MAX = 2
};

// Object: Enum Water.EWaveSpectrumType
enum class EWaveSpectrumType : uint8_t
{
	Phillips = 0,
	PiersonMoskowitz = 1,
	JONSWAP = 2,
	EWaveSpectrumType_MAX = 3
};

// Object: Enum Water.EWaterExclusionMode
enum class EWaterExclusionMode : uint8_t
{
	AddWaterBodiesListToExclusion = 0,
	RemoveWaterBodiesListFromExclusion = 1,
	EWaterExclusionMode_MAX = 2
};

// Object: Enum Water.EWaterBrushBlendType
enum class EWaterBrushBlendType : uint8_t
{
	AlphaBlend = 0,
	Min = 1,
	Max = 2,
	Additive = 3
};

// Object: Enum Water.EWaterBodyType
enum class EWaterBodyType : uint8_t
{
	River = 0,
	Lake = 1,
	Ocean = 2,
	Transition = 3,
	Num = 4,
	EWaterBodyType_MAX = 5
};

// Object: Enum Water.EWaterBrushFalloffMode
enum class EWaterBrushFalloffMode : uint8_t
{
	Angle = 0,
	Width = 1,
	EWaterBrushFalloffMode_MAX = 2
};

// Package: Qos
// Enums: 3

// Object: Enum Qos.EQosResponseType
enum class EQosResponseType : uint8_t
{
	NoResponse = 0,
	Success = 1,
	Failure = 2,
	EQosResponseType_MAX = 3
};

// Object: Enum Qos.EQosDatacenterResult
enum class EQosDatacenterResult : uint8_t
{
	Invalid = 0,
	Success = 1,
	Incomplete = 2,
	EQosDatacenterResult_MAX = 3
};

// Object: Enum Qos.EQosCompletionResult
enum class EQosCompletionResult : uint8_t
{
	Invalid = 0,
	Success = 1,
	Failure = 2,
	Canceled = 3,
	EQosCompletionResult_MAX = 4
};

// Package: Party
// Enums: 11

// Object: Enum Party.ESocialChannelType
enum class ESocialChannelType : uint8_t
{
	General = 0,
	Founder = 1,
	Party = 2,
	Team = 3,
	System = 4,
	Private = 5,
	ESocialChannelType_MAX = 6
};

// Object: Enum Party.EPartyType
enum class EPartyType : uint8_t
{
	Public = 0,
	FriendsOnly = 1,
	Private = 2,
	EPartyType_MAX = 3
};

// Object: Enum Party.EPartyInviteRestriction
enum class EPartyInviteRestriction : uint8_t
{
	AnyMember = 0,
	LeaderOnly = 1,
	NoInvites = 2,
	EPartyInviteRestriction_MAX = 3
};

// Object: Enum Party.EPartyJoinDenialReason
enum class EPartyJoinDenialReason : uint8_t
{
	NoReason = 0,
	JoinAttemptAborted = 1,
	Busy = 2,
	OssUnavailable = 3,
	PartyFull = 4,
	GameFull = 5,
	NotPartyLeader = 6,
	PartyPrivate = 7,
	JoinerCrossplayRestricted = 8,
	MemberCrossplayRestricted = 9,
	GameModeRestricted = 10,
	Banned = 11,
	NotLoggedIn = 12,
	CheckingForRejoin = 13,
	TargetUserMissingPresence = 14,
	TargetUserUnjoinable = 15,
	TargetUserAway = 16,
	AlreadyLeaderInPlatformSession = 17,
	TargetUserPlayingDifferentGame = 18,
	TargetUserMissingPlatformSession = 19,
	PlatformSessionMissingJoinInfo = 20,
	FailedToStartFindConsoleSession = 21,
	MissingPartyClassForTypeId = 22,
	TargetUserBlocked = 23,
	InvalidJoinInfo = 24,
	NotFriends = 25,
	CustomReason0 = 26,
	CustomReason1 = 27,
	CustomReason2 = 28,
	CustomReason3 = 29,
	CustomReason4 = 30,
	CustomReason5 = 31,
	CustomReason6 = 32,
	CustomReason7 = 33,
	CustomReason8 = 34,
	CustomReason9 = 35,
	CustomReason10 = 36,
	CustomReason11 = 37,
	CustomReason12 = 38,
	CustomReason13 = 39,
	CustomReason14 = 40,
	CustomReason15 = 41,
	CustomReason16 = 42,
	CustomReason17 = 43,
	CustomReason18 = 44,
	CustomReason19 = 45,
	CustomReason20 = 46,
	CustomReason21 = 47,
	CustomReason22 = 48,
	CustomReason23 = 49,
	CustomReason24 = 50,
	CustomReason25 = 51,
	CustomReason26 = 52,
	CustomReason27 = 53,
	CustomReason28 = 54,
	CustomReason29 = 55,
	CustomReason30 = 56,
	CustomReason31 = 57,
	CustomReason32 = 58,
	CustomReason33 = 59,
	CustomReason34 = 60,
	CustomReason35 = 61,
	CustomReason36 = 62,
	CustomReason37 = 63,
	CustomReason38 = 64,
	CustomReason39 = 65,
	MAX = 66
};

// Object: Enum Party.EApprovalAction
enum class EApprovalAction : uint8_t
{
	Approve = 0,
	Enqueue = 1,
	EnqueueAndStartBeacon = 2,
	Deny = 3,
	EApprovalAction_MAX = 4
};

// Object: Enum Party.ESocialPartyInviteMethod
enum class ESocialPartyInviteMethod : uint8_t
{
	Other = 0,
	Notification = 1,
	AcceptRequestToJoin = 2,
	Custom0 = 3,
	Custom1 = 4,
	Custom2 = 5,
	Custom3 = 6,
	Custom4 = 7,
	Custom5 = 8,
	Custom6 = 9,
	Custom7 = 10,
	Custom8 = 11,
	Custom9 = 12,
	MAX = 13
};

// Object: Enum Party.ESocialPartyInviteFailureReason
enum class ESocialPartyInviteFailureReason : uint8_t
{
	Success = 0,
	NotOnline = 1,
	NotAcceptingMembers = 2,
	NotFriends = 3,
	AlreadyInParty = 4,
	OssValidationFailed = 5,
	PlatformInviteFailed = 6,
	PartyInviteFailed = 7,
	InviteRateLimitExceeded = 8,
	ESocialPartyInviteFailureReason_MAX = 9
};

// Object: Enum Party.ESocialSubsystem
enum class ESocialSubsystem : uint8_t
{
	Primary = 0,
	Platform = 1,
	MAX = 2
};

// Object: Enum Party.ESocialRelationship
enum class ESocialRelationship : uint8_t
{
	Any = 0,
	FriendInviteReceived = 1,
	FriendInviteSent = 2,
	PartyInvite = 3,
	Friend = 4,
	BlockedPlayer = 5,
	SuggestedFriend = 6,
	RecentPlayer = 7,
	JoinRequest = 8,
	ESocialRelationship_MAX = 9
};

// Object: Enum Party.ECrossplayPreference
enum class ECrossplayPreference : uint8_t
{
	NoSelection = 0,
	OptedIn = 1,
	OptedOut = 2,
	OptedOutRestricted = 3,
	ECrossplayPreference_MAX = 4
};

// Object: Enum Party.EPlatformIconDisplayRule
enum class EPlatformIconDisplayRule : uint8_t
{
	Always = 0,
	AlwaysIfDifferent = 1,
	AlwaysWhenInCrossplayParty = 2,
	AlwaysIfDifferentWhenInCrossplayParty = 3,
	Never = 4,
	EPlatformIconDisplayRule_MAX = 5
};

// Package: Lobby
// Enums: 1

// Object: Enum Lobby.ELobbyBeaconJoinState
enum class ELobbyBeaconJoinState : uint8_t
{
	None = 0,
	SentJoinRequest = 1,
	JoinRequestAcknowledged = 2,
	ELobbyBeaconJoinState_MAX = 3
};

// Package: Rejoin
// Enums: 1

// Object: Enum Rejoin.ERejoinStatus
enum class ERejoinStatus : uint8_t
{
	NoMatchToRejoin = 0,
	RejoinAvailable = 1,
	UpdatingStatus = 2,
	NeedsRecheck = 3,
	NoMatchToRejoin_MatchEnded = 4,
	ERejoinStatus_MAX = 5
};

// Package: AudioSynesthesia
// Enums: 5

// Object: Enum AudioSynesthesia.EConstantQNormalizationEnum
enum class EConstantQNormalizationEnum : uint8_t
{
	EqualEuclideanNorm = 0,
	EqualEnergy = 1,
	EqualAmplitude = 2,
	EConstantQNormalizationEnum_MAX = 3
};

// Object: Enum AudioSynesthesia.EConstantQFFTSizeEnum
enum class EConstantQFFTSizeEnum : uint8_t
{
	Min = 0,
	XXSmall = 1,
	XSmall = 2,
	Small = 3,
	Medium = 4,
	Large = 5,
	XLarge = 6,
	XXLarge = 7,
	Max = 8
};

// Object: Enum AudioSynesthesia.ELoudnessCurveTypeEnum
enum class ELoudnessCurveTypeEnum : uint8_t
{
	A = 0,
	B = 1,
	C = 2,
	D = 3,
	K = 4,
	None = 5,
	ELoudnessCurveTypeEnum_MAX = 6
};

// Object: Enum AudioSynesthesia.ELoudnessNRTCurveTypeEnum
enum class ELoudnessNRTCurveTypeEnum : uint8_t
{
	A = 0,
	B = 1,
	C = 2,
	D = 3,
	K = 4,
	None = 5,
	ELoudnessNRTCurveTypeEnum_MAX = 6
};

// Object: Enum AudioSynesthesia.EMeterPeakType
enum class EMeterPeakType : uint8_t
{
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	EMeterPeakType_MAX = 4
};

// Package: AudioWidgets
// Enums: 15

// Object: Enum AudioWidgets.EAudioPanelLayoutType
enum class EAudioPanelLayoutType : uint8_t
{
	Basic = 0,
	Advanced = 1,
	EAudioPanelLayoutType_MAX = 2
};

// Object: Enum AudioWidgets.EAudioOscilloscopeTriggerMode
enum class EAudioOscilloscopeTriggerMode : uint8_t
{
	None = 0,
	Rising = 1,
	Falling = 2,
	EAudioOscilloscopeTriggerMode_MAX = 3
};

// Object: Enum AudioWidgets.EYAxisLabelsUnit
enum class EYAxisLabelsUnit : uint8_t
{
	Linear = 0,
	Db = 1,
	EYAxisLabelsUnit_MAX = 2
};

// Object: Enum AudioWidgets.EXAxisLabelsUnit
enum class EXAxisLabelsUnit : uint8_t
{
	Samples = 0,
	Seconds = 1,
	EXAxisLabelsUnit_MAX = 2
};

// Object: Enum AudioWidgets.EAudioColorGradient
enum class EAudioColorGradient : uint8_t
{
	BlackToWhite = 0,
	WhiteToBlack = 1,
	EAudioColorGradient_MAX = 2
};

// Object: Enum AudioWidgets.EAudioMaterialEnvelopeType
enum class EAudioMaterialEnvelopeType : uint8_t
{
	AD = 0,
	ADSR = 1,
	EAudioMaterialEnvelopeType_MAX = 2
};

// Object: Enum AudioWidgets.EAudioSpectrogramFrequencyAxisScale
enum class EAudioSpectrogramFrequencyAxisScale : uint8_t
{
	Linear = 0,
	Logarithmic = 1,
	EAudioSpectrogramFrequencyAxisScale_MAX = 2
};

// Object: Enum AudioWidgets.EAudioSpectrogramFrequencyAxisPixelBucketMode
enum class EAudioSpectrogramFrequencyAxisPixelBucketMode : uint8_t
{
	Sample = 0,
	Peak = 1,
	Average = 2,
	EAudioSpectrogramFrequencyAxisPixelBucketMode_MAX = 3
};

// Object: Enum AudioWidgets.EAudioSpectrumAnalyzerBallistics
enum class EAudioSpectrumAnalyzerBallistics : uint8_t
{
	Analog = 0,
	Digital = 1,
	EAudioSpectrumAnalyzerBallistics_MAX = 2
};

// Object: Enum AudioWidgets.EAudioSpectrumAnalyzerType
enum class EAudioSpectrumAnalyzerType : uint8_t
{
	FFT = 0,
	CQT = 1,
	EAudioSpectrumAnalyzerType_MAX = 2
};

// Object: Enum AudioWidgets.EAudioUnitsValueType
enum class EAudioUnitsValueType : uint8_t
{
	Linear = 0,
	Frequency = 1,
	Volume = 2,
	EAudioUnitsValueType_MAX = 3
};

// Object: Enum AudioWidgets.EAudioRadialSliderLayout
enum class EAudioRadialSliderLayout : uint8_t
{
	Layout_LabelTop = 0,
	Layout_LabelCenter = 1,
	Layout_LabelBottom = 2,
	Layout_MAX = 3
};

// Object: Enum AudioWidgets.EAudioSpectrumPlotTilt
enum class EAudioSpectrumPlotTilt : uint8_t
{
	NoTilt = 0,
	Plus1_5dBPerOctave = 1,
	Plus3dBPerOctave = 2,
	Plus4_5dBPerOctave = 3,
	Plus6dBPerOctave = 4,
	EAudioSpectrumPlotTilt_MAX = 5
};

// Object: Enum AudioWidgets.EAudioSpectrumPlotFrequencyAxisScale
enum class EAudioSpectrumPlotFrequencyAxisScale : uint8_t
{
	Linear = 0,
	Logarithmic = 1,
	EAudioSpectrumPlotFrequencyAxisScale_MAX = 2
};

// Object: Enum AudioWidgets.EAudioSpectrumPlotFrequencyAxisPixelBucketMode
enum class EAudioSpectrumPlotFrequencyAxisPixelBucketMode : uint8_t
{
	Sample = 0,
	Peak = 1,
	Average = 2,
	EAudioSpectrumPlotFrequencyAxisPixelBucketMode_MAX = 3
};

// Package: TextureUtilitiesCommon
// Enums: 2

// Object: Enum TextureUtilitiesCommon.ETextureImportFloatingPointFormat
enum class ETextureImportFloatingPointFormat : uint8_t
{
	HDR_F16 = 0,
	HDRCompressed_BC6 = 1,
	HDR_F32_or_F16 = 2,
	PreviousDefault = 3,
	ETextureImportFloatingPointFormat_MAX = 4
};

// Object: Enum TextureUtilitiesCommon.ETextureImportPNGInfill
enum class ETextureImportPNGInfill : uint8_t
{
	Default = 0,
	Never = 1,
	OnlyOnBinaryTransparency = 2,
	Always = 3,
	ETextureImportPNGInfill_MAX = 4
};

// Package: ModelingOperators
// Enums: 22

// Object: Enum ModelingOperators.ERecomputeUVsPropertiesUnwrapType
enum class ERecomputeUVsPropertiesUnwrapType : uint8_t
{
	ExpMap = 0,
	Conformal = 1,
	SpectralConformal = 2,
	IslandMerging = 3,
	ERecomputeUVsPropertiesUnwrapType_MAX = 4
};

// Object: Enum ModelingOperators.ERecomputeUVsPropertiesIslandMode
enum class ERecomputeUVsPropertiesIslandMode : uint8_t
{
	PolyGroups = 0,
	ExistingUVs = 1,
	ERecomputeUVsPropertiesIslandMode_MAX = 2
};

// Object: Enum ModelingOperators.ERecomputeUVsToolOrientationMode
enum class ERecomputeUVsToolOrientationMode : uint8_t
{
	None = 0,
	MinBounds = 1,
	ERecomputeUVsToolOrientationMode_MAX = 2
};

// Object: Enum ModelingOperators.ERecomputeUVsPropertiesLayoutType
enum class ERecomputeUVsPropertiesLayoutType : uint8_t
{
	None = 0,
	Repack = 1,
	NormalizeToExistingBounds = 2,
	NormalizeToBounds = 3,
	NormalizeToWorld = 4,
	ERecomputeUVsPropertiesLayoutType_MAX = 5
};

// Object: Enum ModelingOperators.EFlattenCurveMethod
enum class EFlattenCurveMethod : uint8_t
{
	DoNotFlatten = 0,
	ToBestFitPlane = 1,
	AlongX = 2,
	AlongY = 3,
	AlongZ = 4,
	EFlattenCurveMethod_MAX = 5
};

// Object: Enum ModelingOperators.ECombineCurvesMethod
enum class ECombineCurvesMethod : uint8_t
{
	LeaveSeparate = 0,
	Union = 1,
	Intersect = 2,
	Difference = 3,
	ExclusiveOr = 4,
	ECombineCurvesMethod_MAX = 5
};

// Object: Enum ModelingOperators.EOffsetClosedCurvesMethod
enum class EOffsetClosedCurvesMethod : uint8_t
{
	DoNotOffset = 0,
	OffsetOuterSide = 1,
	OffsetBothSides = 2,
	EOffsetClosedCurvesMethod_MAX = 3
};

// Object: Enum ModelingOperators.EOffsetOpenCurvesMethod
enum class EOffsetOpenCurvesMethod : uint8_t
{
	TreatAsClosed = 0,
	Offset = 1,
	EOffsetOpenCurvesMethod_MAX = 2
};

// Object: Enum ModelingOperators.EOffsetJoinMethod
enum class EOffsetJoinMethod : uint8_t
{
	Square = 0,
	Miter = 1,
	Round = 2,
	EOffsetJoinMethod_MAX = 3
};

// Object: Enum ModelingOperators.EOpenCurveEndShapes
enum class EOpenCurveEndShapes : uint8_t
{
	Square = 0,
	Round = 1,
	Butt = 2,
	EOpenCurveEndShapes_MAX = 3
};

// Object: Enum ModelingOperators.EUVLayoutType
enum class EUVLayoutType : uint8_t
{
	Transform = 0,
	Stack = 1,
	Repack = 2,
	Normalize = 3,
	EUVLayoutType_MAX = 4
};

// Object: Enum ModelingOperators.ENormalCalculationMethod
enum class ENormalCalculationMethod : uint8_t
{
	AreaWeighted = 0,
	AngleWeighted = 1,
	AreaAngleWeighting = 2,
	ENormalCalculationMethod_MAX = 3
};

// Object: Enum ModelingOperators.ESplitNormalMethod
enum class ESplitNormalMethod : uint8_t
{
	UseExistingTopology = 0,
	FaceNormalThreshold = 1,
	FaceGroupID = 2,
	PerTriangle = 3,
	PerVertex = 4,
	ESplitNormalMethod_MAX = 5
};

// Object: Enum ModelingOperators.EHoleFillOpFillType
enum class EHoleFillOpFillType : uint8_t
{
	TriangleFan = 0,
	PolygonEarClipping = 1,
	Planar = 2,
	Minimal = 3,
	Smooth = 4,
	EHoleFillOpFillType_MAX = 5
};

// Object: Enum ModelingOperators.ERemeshType
enum class ERemeshType : uint8_t
{
	Standard = 0,
	FullPass = 1,
	NormalFlow = 2,
	ERemeshType_MAX = 3
};

// Object: Enum ModelingOperators.ERemeshSmoothingType
enum class ERemeshSmoothingType : uint8_t
{
	Uniform = 0,
	Cotangent = 1,
	MeanValue = 2,
	ERemeshSmoothingType_MAX = 3
};

// Object: Enum ModelingOperators.ECSGOperation
enum class ECSGOperation : uint8_t
{
	DifferenceAB = 0,
	DifferenceBA = 1,
	Intersect = 2,
	Union = 3,
	ECSGOperation_MAX = 4
};

// Object: Enum ModelingOperators.ETrimOperation
enum class ETrimOperation : uint8_t
{
	TrimA = 0,
	TrimB = 1,
	ETrimOperation_MAX = 2
};

// Object: Enum ModelingOperators.ETrimSide
enum class ETrimSide : uint8_t
{
	RemoveInside = 0,
	RemoveOutside = 1,
	ETrimSide_MAX = 2
};

// Object: Enum ModelingOperators.EMorphologyOperation
enum class EMorphologyOperation : uint8_t
{
	Dilate = 0,
	Contract = 1,
	Close = 2,
	Open = 3,
	EMorphologyOperation_MAX = 4
};

// Object: Enum ModelingOperators.ETexelDensityToolMode
enum class ETexelDensityToolMode : uint8_t
{
	ApplyToIslands = 0,
	ApplyToWhole = 1,
	Normalize = 2,
	ETexelDensityToolMode_MAX = 3
};

// Object: Enum ModelingOperators.EUVProjectionMethod
enum class EUVProjectionMethod : uint8_t
{
	Box = 0,
	Cylinder = 1,
	Plane = 2,
	ExpMap = 3,
	EUVProjectionMethod_MAX = 4
};

// Package: GeometryFramework
// Enums: 8

// Object: Enum GeometryFramework.EDynamicMeshComponentTangentsMode
enum class EDynamicMeshComponentTangentsMode : uint16_t
{
	NoTangents = 0,
	AutoCalculated = 1,
	ExternallyProvided = 2,
	Default = 255,
	EDynamicMeshComponentTangentsMode_MAX = 256
};

// Object: Enum GeometryFramework.EDynamicMeshComponentColorOverrideMode
enum class EDynamicMeshComponentColorOverrideMode : uint8_t
{
	None = 0,
	VertexColors = 1,
	Polygroups = 2,
	Constant = 3,
	EDynamicMeshComponentColorOverrideMode_MAX = 4
};

// Object: Enum GeometryFramework.EDynamicMeshDrawPath
enum class EDynamicMeshDrawPath : uint8_t
{
	DynamicDraw = 0,
	StaticDraw = 1,
	EDynamicMeshDrawPath_MAX = 2
};

// Object: Enum GeometryFramework.EDynamicMeshComponentDistanceFieldMode
enum class EDynamicMeshComponentDistanceFieldMode : uint8_t
{
	NoDistanceField = 0,
	AsyncCPUDistanceField = 1,
	EDynamicMeshComponentDistanceFieldMode_MAX = 2
};

// Object: Enum GeometryFramework.EDynamicMeshVertexColorTransformMode
enum class EDynamicMeshVertexColorTransformMode : uint8_t
{
	NoTransform = 0,
	LinearToSRGB = 1,
	SRGBToLinear = 2,
	EDynamicMeshVertexColorTransformMode_MAX = 3
};

// Object: Enum GeometryFramework.EDynamicMeshComponentRenderUpdateMode
enum class EDynamicMeshComponentRenderUpdateMode : uint8_t
{
	NoUpdate = 0,
	FullUpdate = 1,
	FastUpdate = 2,
	EDynamicMeshComponentRenderUpdateMode_MAX = 3
};

// Object: Enum GeometryFramework.EDynamicMeshChangeType
enum class EDynamicMeshChangeType : uint8_t
{
	GeneralEdit = 0,
	MeshChange = 1,
	MeshReplacementChange = 2,
	MeshVertexChange = 3,
	DeformationEdit = 4,
	AttributeEdit = 5,
	EDynamicMeshChangeType_MAX = 6
};

// Object: Enum GeometryFramework.EDynamicMeshAttributeChangeFlags
enum class EDynamicMeshAttributeChangeFlags : uint8_t
{
	Unknown = 0,
	MeshTopology = 1,
	VertexPositions = 2,
	NormalsTangents = 4,
	VertexColors = 8,
	UVs = 16,
	TriangleGroups = 32,
	EDynamicMeshAttributeChangeFlags_MAX = 33
};

// Package: GeometryScriptingCore
// Enums: 79

// Object: Enum GeometryScriptingCore.EGeometryScriptOutcomePins
enum class EGeometryScriptOutcomePins : uint8_t
{
	Failure = 0,
	Success = 1,
	EGeometryScriptOutcomePins_MAX = 2
};

// Object: Enum GeometryScriptingCore.EGeometryScriptSearchOutcomePins
enum class EGeometryScriptSearchOutcomePins : uint8_t
{
	Found = 0,
	NotFound = 1,
	EGeometryScriptSearchOutcomePins_MAX = 2
};

// Object: Enum GeometryScriptingCore.EGeometryScriptContainmentOutcomePins
enum class EGeometryScriptContainmentOutcomePins : uint8_t
{
	Inside = 0,
	Outside = 1,
	EGeometryScriptContainmentOutcomePins_MAX = 2
};

// Object: Enum GeometryScriptingCore.EGeometryScriptLODType
enum class EGeometryScriptLODType : uint8_t
{
	MaxAvailable = 0,
	HiResSourceModel = 1,
	SourceModel = 2,
	RenderData = 3,
	EGeometryScriptLODType_MAX = 4
};

// Object: Enum GeometryScriptingCore.EGeometryScriptAxis
enum class EGeometryScriptAxis : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	EGeometryScriptAxis_MAX = 3
};

// Object: Enum GeometryScriptingCore.EGeometryScriptCoordinateSpace
enum class EGeometryScriptCoordinateSpace : uint8_t
{
	Local = 0,
	World = 1,
	EGeometryScriptCoordinateSpace_MAX = 2
};

// Object: Enum GeometryScriptingCore.EGeometryScriptIndexType
enum class EGeometryScriptIndexType : uint8_t
{
	Any = 0,
	Triangle = 1,
	Edge = 2,
	Vertex = 3,
	MaterialID = 4,
	PolygroupID = 5,
	EGeometryScriptIndexType_MAX = 6
};

// Object: Enum GeometryScriptingCore.EGeometryScriptDebugMessageType
enum class EGeometryScriptDebugMessageType : uint8_t
{
	ErrorMessage = 0,
	WarningMessage = 1,
	EGeometryScriptDebugMessageType_MAX = 2
};

// Object: Enum GeometryScriptingCore.EGeometryScriptErrorType
enum class EGeometryScriptErrorType : uint8_t
{
	NoError = 0,
	UnknownError = 1,
	InvalidInputs = 2,
	OperationFailed = 3,
	EGeometryScriptErrorType_MAX = 4
};

// Object: Enum GeometryScriptingCore.EGeometryScriptCollisionGenerationMethod
enum class EGeometryScriptCollisionGenerationMethod : uint8_t
{
	AlignedBoxes = 0,
	OrientedBoxes = 1,
	MinimalSpheres = 2,
	Capsules = 3,
	ConvexHulls = 4,
	SweptHulls = 5,
	MinVolumeShapes = 6,
	LevelSets = 7,
	EGeometryScriptCollisionGenerationMethod_MAX = 8
};

// Object: Enum GeometryScriptingCore.EGeometryScriptSweptHullAxis
enum class EGeometryScriptSweptHullAxis : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	SmallestBoxDimension = 3,
	SmallestVolume = 4,
	EGeometryScriptSweptHullAxis_MAX = 5
};

// Object: Enum GeometryScriptingCore.ENegativeSpaceSampleMethod
enum class ENegativeSpaceSampleMethod : uint8_t
{
	Uniform = 0,
	VoxelSearch = 1,
	NavigableVoxelSearch = 2,
	ENegativeSpaceSampleMethod_MAX = 3
};

// Object: Enum GeometryScriptingCore.EGeometryScriptConvexHullSimplifyMethod
enum class EGeometryScriptConvexHullSimplifyMethod : uint8_t
{
	MeshQSlim = 0,
	AngleTolerance = 1,
	EGeometryScriptConvexHullSimplifyMethod_MAX = 2
};

// Object: Enum GeometryScriptingCore.EGeometryScriptMeshSelectionType
enum class EGeometryScriptMeshSelectionType : uint8_t
{
	Vertices = 0,
	Edges = 1,
	Triangles = 2,
	Polygroups = 3,
	EGeometryScriptMeshSelectionType_MAX = 4
};

// Object: Enum GeometryScriptingCore.EGeometryScriptMeshSelectionConversionType
enum class EGeometryScriptMeshSelectionConversionType : uint8_t
{
	NoConversion = 0,
	ToVertices = 1,
	ToTriangles = 2,
	ToPolygroups = 3,
	EGeometryScriptMeshSelectionConversionType_MAX = 4
};

// Object: Enum GeometryScriptingCore.EGeometryScriptCombineSelectionMode
enum class EGeometryScriptCombineSelectionMode : uint8_t
{
	Add = 0,
	Subtract = 1,
	Intersection = 2,
	EGeometryScriptCombineSelectionMode_MAX = 3
};

// Object: Enum GeometryScriptingCore.EGeometryScriptEmptySelectionBehavior
enum class EGeometryScriptEmptySelectionBehavior : uint8_t
{
	FullMeshSelection = 0,
	EmptySelection = 1,
	EGeometryScriptEmptySelectionBehavior_MAX = 2
};

// Object: Enum GeometryScriptingCore.EGeometryScriptBoneHierarchyMismatchHandling
enum class EGeometryScriptBoneHierarchyMismatchHandling : uint8_t
{
	DoNothing = 0,
	RemapGeometryToReferenceSkeleton = 1,
	CreateNewReferenceSkeleton = 2,
	EGeometryScriptBoneHierarchyMismatchHandling_MAX = 3
};

// Object: Enum GeometryScriptingCore.EGeometryScriptGenerateLightmapUVOptions
enum class EGeometryScriptGenerateLightmapUVOptions : uint8_t
{
	MatchTargetLODSetting = 0,
	GenerateLightmapUVs = 1,
	DoNotGenerateLightmapUVs = 2,
	EGeometryScriptGenerateLightmapUVOptions_MAX = 3
};

// Object: Enum GeometryScriptingCore.EGeometryScriptBakeResolution
enum class EGeometryScriptBakeResolution : uint8_t
{
	Resolution16 = 0,
	Resolution32 = 1,
	Resolution64 = 2,
	Resolution128 = 3,
	Resolution256 = 4,
	Resolution512 = 5,
	Resolution1024 = 6,
	Resolution2048 = 7,
	Resolution4096 = 8,
	Resolution8192 = 9,
	EGeometryScriptBakeResolution_MAX = 10
};

// Object: Enum GeometryScriptingCore.EGeometryScriptBakeBitDepth
enum class EGeometryScriptBakeBitDepth : uint8_t
{
	ChannelBits8 = 0,
	ChannelBits16 = 1,
	EGeometryScriptBakeBitDepth_MAX = 2
};

// Object: Enum GeometryScriptingCore.EGeometryScriptBakeSamplesPerPixel
enum class EGeometryScriptBakeSamplesPerPixel : uint8_t
{
	Sample1 = 0,
	Sample4 = 1,
	Sample16 = 2,
	Sample64 = 3,
	Samples256 = 4,
	EGeometryScriptBakeSamplesPerPixel_MAX = 5
};

// Object: Enum GeometryScriptingCore.EGeometryScriptBakeFilteringType
enum class EGeometryScriptBakeFilteringType : uint8_t
{
	BSpline = 0,
	Box = 1,
	EGeometryScriptBakeFilteringType_MAX = 2
};

// Object: Enum GeometryScriptingCore.EGeometryScriptBakeTypes
enum class EGeometryScriptBakeTypes : uint8_t
{
	None = 0,
	TangentSpaceNormal = 1,
	ObjectSpaceNormal = 2,
	FaceNormal = 3,
	BentNormal = 4,
	Position = 5,
	Curvature = 6,
	AmbientOcclusion = 7,
	Texture = 8,
	MultiTexture = 9,
	VertexColor = 10,
	MaterialID = 11,
	Constant = 12,
	UVShell = 13,
	Height = 14,
	EGeometryScriptBakeTypes_MAX = 15
};

// Object: Enum GeometryScriptingCore.EGeometryScriptBakeOutputMode
enum class EGeometryScriptBakeOutputMode : uint8_t
{
	RGBA = 0,
	PerChannel = 1,
	EGeometryScriptBakeOutputMode_MAX = 2
};

// Object: Enum GeometryScriptingCore.EGeometryScriptBakeNormalSpace
enum class EGeometryScriptBakeNormalSpace : uint8_t
{
	Tangent = 0,
	Object = 1,
	EGeometryScriptBakeNormalSpace_MAX = 2
};

// Object: Enum GeometryScriptingCore.EGeometryScriptBakeVertexTopology
enum class EGeometryScriptBakeVertexTopology : uint8_t
{
	CreateNew = 0,
	UseExisting = 1,
	EGeometryScriptBakeVertexTopology_MAX = 2
};

// Object: Enum GeometryScriptingCore.EGeometryScriptBakeCurvatureTypeMode
enum class EGeometryScriptBakeCurvatureTypeMode : uint8_t
{
	Mean = 0,
	Max = 1,
	Min = 2,
	Gaussian = 3
};

// Object: Enum GeometryScriptingCore.EGeometryScriptBakeCurvatureColorMode
enum class EGeometryScriptBakeCurvatureColorMode : uint8_t
{
	Grayscale = 0,
	RedBlue = 1,
	RedGreenBlue = 2,
	EGeometryScriptBakeCurvatureColorMode_MAX = 3
};

// Object: Enum GeometryScriptingCore.EGeometryScriptBakeCurvatureClampMode
enum class EGeometryScriptBakeCurvatureClampMode : uint8_t
{
	None = 0,
	OnlyPositive = 1,
	OnlyNegative = 2,
	EGeometryScriptBakeCurvatureClampMode_MAX = 3
};

// Object: Enum GeometryScriptingCore.EGeometryScriptBakeHeightRangeMode
enum class EGeometryScriptBakeHeightRangeMode : uint8_t
{
	Absolute = 0,
	RelativeBounds = 1,
	EGeometryScriptBakeHeightRangeMode_MAX = 2
};

// Object: Enum GeometryScriptingCore.EGeometryScriptCombineAttributesMode
enum class EGeometryScriptCombineAttributesMode : uint8_t
{
	EnableAllMatching = 0,
	UseTarget = 1,
	UseSource = 2,
	EGeometryScriptCombineAttributesMode_MAX = 3
};

// Object: Enum GeometryScriptingCore.EGeometryScriptPruneBoneWeightsAssignmentType
enum class EGeometryScriptPruneBoneWeightsAssignmentType : uint8_t
{
	RenormalizeRemaining = 0,
	ReassignToParent = 1,
	EGeometryScriptPruneBoneWeightsAssignmentType_MAX = 2
};

// Object: Enum GeometryScriptingCore.EGeometryScriptSmoothBoneWeightsType
enum class EGeometryScriptSmoothBoneWeightsType : uint8_t
{
	DirectDistance = 0,
	GeodesicVoxel = 1,
	EGeometryScriptSmoothBoneWeightsType_MAX = 2
};

// Object: Enum GeometryScriptingCore.ETransferBoneWeightsMethod
enum class ETransferBoneWeightsMethod : uint8_t
{
	ClosestPointOnSurface = 0,
	InpaintWeights = 1,
	ETransferBoneWeightsMethod_MAX = 2
};

// Object: Enum GeometryScriptingCore.EOutputTargetMeshBones
enum class EOutputTargetMeshBones : uint8_t
{
	SourceBones = 0,
	TargetBones = 1,
	EOutputTargetMeshBones_MAX = 2
};

// Object: Enum GeometryScriptingCore.EBonesToCopyFromSource
enum class EBonesToCopyFromSource : uint8_t
{
	AllBones = 0,
	OnlyBoundAndParents = 1,
	OnlyBoundAndRoot = 2,
	EBonesToCopyFromSource_MAX = 3
};

// Object: Enum GeometryScriptingCore.EGeometryScriptBooleanOperation
enum class EGeometryScriptBooleanOperation : uint8_t
{
	Union = 0,
	Intersection = 1,
	Subtract = 2,
	TrimInside = 3,
	TrimOutside = 4,
	NewPolyGroupInside = 5,
	NewPolyGroupOutside = 6,
	EGeometryScriptBooleanOperation_MAX = 7
};

// Object: Enum GeometryScriptingCore.EGeometryScriptBooleanOutputSpace
enum class EGeometryScriptBooleanOutputSpace : uint8_t
{
	TargetTransformSpace = 0,
	ToolTransformSpace = 1,
	SharedTransformSpace = 2,
	EGeometryScriptBooleanOutputSpace_MAX = 3
};

// Object: Enum GeometryScriptingCore.EGeometryScriptMeshDifferenceReason
enum class EGeometryScriptMeshDifferenceReason : uint8_t
{
	Unknown = 0,
	VertexCount = 1,
	TriangleCount = 2,
	EdgeCount = 3,
	Vertex = 4,
	Triangle = 5,
	Edge = 6,
	Connectivity = 7,
	Normal = 8,
	Color = 9,
	UV = 10,
	Group = 11,
	Attribute = 12,
	EGeometryScriptMeshDifferenceReason_MAX = 13
};

// Object: Enum GeometryScriptingCore.EGeometryScriptFlareType
enum class EGeometryScriptFlareType : uint8_t
{
	SinMode = 0,
	SinSquaredMode = 1,
	TriangleMode = 2,
	EGeometryScriptFlareType_MAX = 3
};

// Object: Enum GeometryScriptingCore.EGeometryScriptMathWarpType
enum class EGeometryScriptMathWarpType : uint8_t
{
	SinWave1D = 0,
	SinWave2D = 1,
	SinWave3D = 2,
	EGeometryScriptMathWarpType_MAX = 3
};

// Object: Enum GeometryScriptingCore.EGeometryScriptMeshEditPolygroupMode
enum class EGeometryScriptMeshEditPolygroupMode : uint8_t
{
	PreserveExisting = 0,
	AutoGenerateNew = 1,
	SetConstant = 2,
	EGeometryScriptMeshEditPolygroupMode_MAX = 3
};

// Object: Enum GeometryScriptingCore.EGeometryScriptPolyOperationArea
enum class EGeometryScriptPolyOperationArea : uint8_t
{
	EntireSelection = 0,
	PerPolygroup = 1,
	PerTriangle = 2,
	EGeometryScriptPolyOperationArea_MAX = 3
};

// Object: Enum GeometryScriptingCore.EGeometryScriptLinearExtrudeDirection
enum class EGeometryScriptLinearExtrudeDirection : uint8_t
{
	FixedDirection = 0,
	AverageFaceNormal = 1,
	EGeometryScriptLinearExtrudeDirection_MAX = 2
};

// Object: Enum GeometryScriptingCore.EGeometryScriptOffsetFacesType
enum class EGeometryScriptOffsetFacesType : uint8_t
{
	VertexNormal = 0,
	FaceNormal = 1,
	ParallelFaceOffset = 2,
	EGeometryScriptOffsetFacesType_MAX = 3
};

// Object: Enum GeometryScriptingCore.EGeometryScriptMeshBevelSelectionMode
enum class EGeometryScriptMeshBevelSelectionMode : uint8_t
{
	TriangleArea = 0,
	AllPolygroupEdges = 1,
	SharedPolygroupEdges = 2,
	SelectedEdges = 3,
	EGeometryScriptMeshBevelSelectionMode_MAX = 4
};

// Object: Enum GeometryScriptingCore.EGeometryScriptTangentTypes
enum class EGeometryScriptTangentTypes : uint8_t
{
	FastMikkT = 0,
	PerTriangle = 1,
	EGeometryScriptTangentTypes_MAX = 2
};

// Object: Enum GeometryScriptingCore.EGeometryScriptPrimitivePolygroupMode
enum class EGeometryScriptPrimitivePolygroupMode : uint8_t
{
	SingleGroup = 0,
	PerFace = 1,
	PerQuad = 2,
	EGeometryScriptPrimitivePolygroupMode_MAX = 3
};

// Object: Enum GeometryScriptingCore.EGeometryScriptPrimitiveOriginMode
enum class EGeometryScriptPrimitiveOriginMode : uint8_t
{
	Center = 0,
	Base = 1,
	EGeometryScriptPrimitiveOriginMode_MAX = 2
};

// Object: Enum GeometryScriptingCore.EGeometryScriptPrimitiveUVMode
enum class EGeometryScriptPrimitiveUVMode : uint8_t
{
	Uniform = 0,
	ScaleToFill = 1,
	EGeometryScriptPrimitiveUVMode_MAX = 2
};

// Object: Enum GeometryScriptingCore.EGeometryScriptPolygonFillMode
enum class EGeometryScriptPolygonFillMode : uint8_t
{
	All = 0,
	Solid = 1,
	PositiveWinding = 2,
	NonZeroWinding = 3,
	NegativeWinding = 4,
	OddWinding = 5,
	EGeometryScriptPolygonFillMode_MAX = 6
};

// Object: Enum GeometryScriptingCore.EGeometryScriptUniformRemeshTargetType
enum class EGeometryScriptUniformRemeshTargetType : uint8_t
{
	TriangleCount = 0,
	TargetEdgeLength = 1,
	EGeometryScriptUniformRemeshTargetType_MAX = 2
};

// Object: Enum GeometryScriptingCore.EGeometryScriptRemeshEdgeConstraintType
enum class EGeometryScriptRemeshEdgeConstraintType : uint8_t
{
	Fixed = 0,
	Refine = 1,
	Free = 2,
	Ignore = 3,
	EGeometryScriptRemeshEdgeConstraintType_MAX = 4
};

// Object: Enum GeometryScriptingCore.EGeometryScriptRemeshSmoothingType
enum class EGeometryScriptRemeshSmoothingType : uint8_t
{
	Uniform = 0,
	UVPreserving = 1,
	Mixed = 2,
	EGeometryScriptRemeshSmoothingType_MAX = 3
};

// Object: Enum GeometryScriptingCore.EGeometryScriptFillHolesMethod
enum class EGeometryScriptFillHolesMethod : uint8_t
{
	Automatic = 0,
	MinimalFill = 1,
	PolygonTriangulation = 2,
	TriangleFan = 3,
	PlanarProjection = 4,
	EGeometryScriptFillHolesMethod_MAX = 5
};

// Object: Enum GeometryScriptingCore.EGeometryScriptRemoveHiddenTrianglesMethod
enum class EGeometryScriptRemoveHiddenTrianglesMethod : uint8_t
{
	FastWindingNumber = 0,
	RaycastOcclusionTest = 1,
	EGeometryScriptRemoveHiddenTrianglesMethod_MAX = 2
};

// Object: Enum GeometryScriptingCore.EGeometryScriptRepairMeshMode
enum class EGeometryScriptRepairMeshMode : uint8_t
{
	DeleteOnly = 0,
	RepairOrDelete = 1,
	RepairOrSkip = 2,
	EGeometryScriptRepairMeshMode_MAX = 3
};

// Object: Enum GeometryScriptingCore.EGeometryScriptSamplingWeightMode
enum class EGeometryScriptSamplingWeightMode : uint8_t
{
	WeightToRadius = 0,
	FilledWeightToRadius = 1,
	WeightedRandom = 2,
	EGeometryScriptSamplingWeightMode_MAX = 3
};

// Object: Enum GeometryScriptingCore.EGeometryScriptSamplingDistributionMode
enum class EGeometryScriptSamplingDistributionMode : uint8_t
{
	Uniform = 0,
	Smaller = 1,
	Larger = 2,
	EGeometryScriptSamplingDistributionMode_MAX = 3
};

// Object: Enum GeometryScriptingCore.EGeometryScriptTopologyConnectionType
enum class EGeometryScriptTopologyConnectionType : uint8_t
{
	Geometric = 0,
	Polygroup = 1,
	MaterialID = 2,
	EGeometryScriptTopologyConnectionType_MAX = 3
};

// Object: Enum GeometryScriptingCore.EGeometryScriptRemoveMeshSimplificationType
enum class EGeometryScriptRemoveMeshSimplificationType : uint8_t
{
	StandardQEM = 0,
	VolumePreserving = 1,
	AttributeAware = 2,
	EGeometryScriptRemoveMeshSimplificationType_MAX = 3
};

// Object: Enum GeometryScriptingCore.ESelectiveTessellatePatternType
enum class ESelectiveTessellatePatternType : uint8_t
{
	ConcentricRings = 0,
	ESelectiveTessellatePatternType_MAX = 1
};

// Object: Enum GeometryScriptingCore.EGeometryScriptUVLayoutType
enum class EGeometryScriptUVLayoutType : uint8_t
{
	Transform = 0,
	Stack = 1,
	Repack = 2,
	Normalize = 3,
	EGeometryScriptUVLayoutType_MAX = 4
};

// Object: Enum GeometryScriptingCore.EGeometryScriptUVFlattenMethod
enum class EGeometryScriptUVFlattenMethod : uint8_t
{
	ExpMap = 0,
	Conformal = 1,
	SpectralConformal = 2,
	EGeometryScriptUVFlattenMethod_MAX = 3
};

// Object: Enum GeometryScriptingCore.EGeometryScriptUVIslandSource
enum class EGeometryScriptUVIslandSource : uint8_t
{
	PolyGroups = 0,
	UVIslands = 1,
	EGeometryScriptUVIslandSource_MAX = 2
};

// Object: Enum GeometryScriptingCore.EGeometryScriptTexelDensityMode
enum class EGeometryScriptTexelDensityMode : uint8_t
{
	ApplyToIslands = 0,
	ApplyToWhole = 1,
	Normalize = 2,
	EGeometryScriptTexelDensityMode_MAX = 3
};

// Object: Enum GeometryScriptingCore.EGeometryScriptBlurColorMode
enum class EGeometryScriptBlurColorMode : uint8_t
{
	Uniform = 0,
	EdgeLength = 1,
	CotanWeights = 2,
	EGeometryScriptBlurColorMode_MAX = 3
};

// Object: Enum GeometryScriptingCore.ETransferVertexColorMethod
enum class ETransferVertexColorMethod : uint8_t
{
	ClosestPointOnSurface = 0,
	Inpaint = 1,
	ETransferVertexColorMethod_MAX = 2
};

// Object: Enum GeometryScriptingCore.EGeometryScriptGridSizingMethod
enum class EGeometryScriptGridSizingMethod : uint8_t
{
	GridCellSize = 0,
	GridResolution = 1,
	EGeometryScriptGridSizingMethod_MAX = 2
};

// Object: Enum GeometryScriptingCore.EGeometryScriptMorphologicalOpType
enum class EGeometryScriptMorphologicalOpType : uint8_t
{
	Dilate = 0,
	Contract = 1,
	Close = 2,
	Open = 3,
	EGeometryScriptMorphologicalOpType_MAX = 4
};

// Object: Enum GeometryScriptingCore.EGeometryScriptInitKMeansMethod
enum class EGeometryScriptInitKMeansMethod : uint8_t
{
	Random = 0,
	UniformSpacing = 1,
	EGeometryScriptInitKMeansMethod_MAX = 2
};

// Object: Enum GeometryScriptingCore.EGeometryScriptPolyOffsetJoinType
enum class EGeometryScriptPolyOffsetJoinType : uint8_t
{
	Square = 0,
	Round = 1,
	Miter = 2,
	EGeometryScriptPolyOffsetJoinType_MAX = 3
};

// Object: Enum GeometryScriptingCore.EGeometryScriptPathOffsetEndType
enum class EGeometryScriptPathOffsetEndType : uint8_t
{
	Butt = 0,
	Square = 1,
	Round = 2,
	EGeometryScriptPathOffsetEndType_MAX = 3
};

// Object: Enum GeometryScriptingCore.EGeometryScriptSampleSpacing
enum class EGeometryScriptSampleSpacing : uint8_t
{
	UniformDistance = 0,
	UniformTime = 1,
	ErrorTolerance = 2,
	EGeometryScriptSampleSpacing_MAX = 3
};

// Object: Enum GeometryScriptingCore.EGeometryScriptEvaluateSplineRange
enum class EGeometryScriptEvaluateSplineRange : uint8_t
{
	FullSpline = 0,
	DistanceRange = 1,
	TimeRange_ConstantSpeed = 2,
	TimeRange_VariableSpeed = 3,
	EGeometryScriptEvaluateSplineRange_MAX = 4
};

// Object: Enum GeometryScriptingCore.EGeometryScriptPixelSamplingMethod
enum class EGeometryScriptPixelSamplingMethod : uint8_t
{
	Bilinear = 0,
	Nearest = 1,
	EGeometryScriptPixelSamplingMethod_MAX = 2
};

// Object: Enum GeometryScriptingCore.EDistanceFieldComputeMode
enum class EDistanceFieldComputeMode : uint8_t
{
	NarrowBand = 0,
	FullGrid = 1,
	EDistanceFieldComputeMode_MAX = 2
};

// Object: Enum GeometryScriptingCore.EDistanceFieldUnits
enum class EDistanceFieldUnits : uint8_t
{
	NumberOfVoxels = 0,
	Distance = 1,
	EDistanceFieldUnits_MAX = 2
};

// Package: MeshModelingTools
// Enums: 77

// Object: Enum MeshModelingTools.EPlaneBrushSideMode
enum class EPlaneBrushSideMode : uint8_t
{
	BothSides = 0,
	PushDown = 1,
	PullTowards = 2,
	EPlaneBrushSideMode_MAX = 3
};

// Object: Enum MeshModelingTools.EVertexColorPaintBrushOpBlendMode
enum class EVertexColorPaintBrushOpBlendMode : uint8_t
{
	Lerp = 0,
	Mix = 1,
	Multiply = 2,
	EVertexColorPaintBrushOpBlendMode_MAX = 3
};

// Object: Enum MeshModelingTools.EPolyEditExtrudeEdgeDirectionMode
enum class EPolyEditExtrudeEdgeDirectionMode : uint8_t
{
	LocalExtrudeFrames = 0,
	SingleDirection = 1,
	EPolyEditExtrudeEdgeDirectionMode_MAX = 2
};

// Object: Enum MeshModelingTools.EPolyEditExtrudeEdgeDistanceMode
enum class EPolyEditExtrudeEdgeDistanceMode : uint8_t
{
	Fixed = 0,
	Gizmo = 1,
	EPolyEditExtrudeEdgeDistanceMode_MAX = 2
};

// Object: Enum MeshModelingTools.EMeshBoundaryConstraint
enum class EMeshBoundaryConstraint : uint8_t
{
	Fixed = 0,
	Refine = 1,
	Free = 2,
	EMeshBoundaryConstraint_MAX = 3
};

// Object: Enum MeshModelingTools.EGroupBoundaryConstraint
enum class EGroupBoundaryConstraint : uint8_t
{
	Fixed = 0,
	Refine = 1,
	Free = 2,
	Ignore = 3,
	EGroupBoundaryConstraint_MAX = 4
};

// Object: Enum MeshModelingTools.EMaterialBoundaryConstraint
enum class EMaterialBoundaryConstraint : uint8_t
{
	Fixed = 0,
	Refine = 1,
	Free = 2,
	Ignore = 3,
	EMaterialBoundaryConstraint_MAX = 4
};

// Object: Enum MeshModelingTools.EMakeMeshPlacementType
enum class EMakeMeshPlacementType : uint8_t
{
	GroundPlane = 0,
	OnScene = 1,
	AtOrigin = 2,
	EMakeMeshPlacementType_MAX = 3
};

// Object: Enum MeshModelingTools.EMakeMeshPivotLocation
enum class EMakeMeshPivotLocation : uint8_t
{
	Base = 0,
	Centered = 1,
	Top = 2,
	EMakeMeshPivotLocation_MAX = 3
};

// Object: Enum MeshModelingTools.EMakeMeshPolygroupMode
enum class EMakeMeshPolygroupMode : uint8_t
{
	PerShape = 0,
	PerFace = 1,
	PerQuad = 2,
	EMakeMeshPolygroupMode_MAX = 3
};

// Object: Enum MeshModelingTools.EProceduralRectType
enum class EProceduralRectType : uint8_t
{
	Rectangle = 0,
	RoundedRectangle = 1,
	EProceduralRectType_MAX = 2
};

// Object: Enum MeshModelingTools.EProceduralDiscType
enum class EProceduralDiscType : uint8_t
{
	Disc = 0,
	PuncturedDisc = 1,
	EProceduralDiscType_MAX = 2
};

// Object: Enum MeshModelingTools.EProceduralSphereType
enum class EProceduralSphereType : uint8_t
{
	LatLong = 0,
	Box = 1,
	EProceduralSphereType_MAX = 2
};

// Object: Enum MeshModelingTools.EProceduralStairsType
enum class EProceduralStairsType : uint8_t
{
	Linear = 0,
	Floating = 1,
	Curved = 2,
	Spiral = 3,
	EProceduralStairsType_MAX = 4
};

// Object: Enum MeshModelingTools.EConvertToPolygonsMode
enum class EConvertToPolygonsMode : uint8_t
{
	FaceNormalDeviation = 0,
	FindPolygons = 1,
	FromMaterialIDs = 2,
	FromUVIslands = 3,
	FromNormalSeams = 4,
	FromConnectedTris = 5,
	FromFurthestPointSampling = 6,
	CopyFromLayer = 7,
	EConvertToPolygonsMode_MAX = 8
};

// Object: Enum MeshModelingTools.EGroupTopologyDeformationStrategy
enum class EGroupTopologyDeformationStrategy : uint8_t
{
	Linear = 0,
	Laplacian = 1,
	EGroupTopologyDeformationStrategy_MAX = 2
};

// Object: Enum MeshModelingTools.EWeightScheme
enum class EWeightScheme : uint8_t
{
	Uniform = 0,
	Umbrella = 1,
	Valence = 2,
	MeanValue = 3,
	Cotangent = 4,
	ClampedCotangent = 5,
	IDTCotangent = 6,
	EWeightScheme_MAX = 7
};

// Object: Enum MeshModelingTools.EQuickTransformerMode
enum class EQuickTransformerMode : uint8_t
{
	AxisTranslation = 0,
	AxisRotation = 1,
	EQuickTransformerMode_MAX = 2
};

// Object: Enum MeshModelingTools.EDisplaceMeshToolDisplaceType
enum class EDisplaceMeshToolDisplaceType : uint8_t
{
	Constant = 0,
	DisplacementMap = 1,
	RandomNoise = 2,
	PerlinNoise = 3,
	SineWave = 4,
	EDisplaceMeshToolDisplaceType_MAX = 5
};

// Object: Enum MeshModelingTools.EDisplaceMeshToolSubdivisionType
enum class EDisplaceMeshToolSubdivisionType : uint8_t
{
	Flat = 0,
	PNTriangles = 1,
	EDisplaceMeshToolSubdivisionType_MAX = 2
};

// Object: Enum MeshModelingTools.EDisplaceMeshToolTriangleSelectionType
enum class EDisplaceMeshToolTriangleSelectionType : uint8_t
{
	None = 0,
	Material = 1,
	EDisplaceMeshToolTriangleSelectionType_MAX = 2
};

// Object: Enum MeshModelingTools.EDisplaceMeshToolChannelType
enum class EDisplaceMeshToolChannelType : uint8_t
{
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EDisplaceMeshToolChannelType_MAX = 4
};

// Object: Enum MeshModelingTools.EDrawPolygonDrawMode
enum class EDrawPolygonDrawMode : uint8_t
{
	Freehand = 0,
	Circle = 1,
	Square = 2,
	Rectangle = 3,
	RoundedRectangle = 4,
	Ring = 5,
	EDrawPolygonDrawMode_MAX = 6
};

// Object: Enum MeshModelingTools.EDrawPolygonExtrudeMode
enum class EDrawPolygonExtrudeMode : uint8_t
{
	Flat = 0,
	Fixed = 1,
	Interactive = 2,
	EDrawPolygonExtrudeMode_MAX = 3
};

// Object: Enum MeshModelingTools.EDynamicMeshSculptBrushType
enum class EDynamicMeshSculptBrushType : uint8_t
{
	Move = 0,
	PullKelvin = 1,
	PullSharpKelvin = 2,
	Smooth = 3,
	Offset = 4,
	SculptView = 5,
	SculptMax = 6,
	Inflate = 7,
	ScaleKelvin = 8,
	Pinch = 9,
	TwistKelvin = 10,
	Flatten = 11,
	Plane = 12,
	PlaneViewAligned = 13,
	FixedPlane = 14,
	Resample = 15,
	LastValue = 16,
	EDynamicMeshSculptBrushType_MAX = 17
};

// Object: Enum MeshModelingTools.ELocalFrameMode
enum class ELocalFrameMode : uint8_t
{
	FromObject = 0,
	FromGeometry = 1,
	ELocalFrameMode_MAX = 2
};

// Object: Enum MeshModelingTools.EEditMeshPolygonsToolActions
enum class EEditMeshPolygonsToolActions : uint8_t
{
	NoAction = 0,
	AcceptCurrent = 1,
	CancelCurrent = 2,
	Extrude = 3,
	PushPull = 4,
	Offset = 5,
	Inset = 6,
	Outset = 7,
	BevelFaces = 8,
	InsertEdge = 9,
	InsertEdgeLoop = 10,
	Complete = 11,
	PlaneCut = 12,
	Merge = 13,
	Delete = 14,
	CutFaces = 15,
	RecalculateNormals = 16,
	FlipNormals = 17,
	Retriangulate = 18,
	Decompose = 19,
	Disconnect = 20,
	Duplicate = 21,
	CollapseEdge = 22,
	WeldEdges = 23,
	WeldEdgesCentered = 24,
	StraightenEdge = 25,
	FillHole = 26,
	BridgeEdges = 27,
	ExtrudeEdges = 28,
	BevelEdges = 29,
	SimplifyAlongEdges = 30,
	PlanarProjectionUV = 31,
	SimplifyByGroups = 32,
	RegenerateExtraCorners = 33,
	PokeSingleFace = 34,
	SplitSingleEdge = 35,
	FlipSingleEdge = 36,
	CollapseSingleEdge = 37,
	BevelAuto = 38,
	EEditMeshPolygonsToolActions_MAX = 39
};

// Object: Enum MeshModelingTools.EEditMeshPolygonsToolSelectionMode
enum class EEditMeshPolygonsToolSelectionMode : uint8_t
{
	Faces = 0,
	Edges = 1,
	Vertices = 2,
	Loops = 3,
	Rings = 4,
	FacesEdgesVertices = 5,
	EEditMeshPolygonsToolSelectionMode_MAX = 6
};

// Object: Enum MeshModelingTools.EHoleFillToolActions
enum class EHoleFillToolActions : uint8_t
{
	NoAction = 0,
	SelectAll = 1,
	ClearSelection = 2,
	EHoleFillToolActions_MAX = 3
};

// Object: Enum MeshModelingTools.ELatticeInterpolationType
enum class ELatticeInterpolationType : uint8_t
{
	Linear = 0,
	Cubic = 1,
	ELatticeInterpolationType_MAX = 2
};

// Object: Enum MeshModelingTools.ELatticeDeformerToolAction
enum class ELatticeDeformerToolAction : uint8_t
{
	NoAction = 0,
	Constrain = 1,
	ClearConstraints = 2,
	ELatticeDeformerToolAction_MAX = 3
};

// Object: Enum MeshModelingTools.EBrushActionMode
enum class EBrushActionMode : uint8_t
{
	Paint = 0,
	FloodFill = 1,
	EBrushActionMode_MAX = 2
};

// Object: Enum MeshModelingTools.EMeshAttributePaintToolActions
enum class EMeshAttributePaintToolActions : uint8_t
{
	NoAction = 0,
	EMeshAttributePaintToolActions_MAX = 1
};

// Object: Enum MeshModelingTools.EMeshGroupPaintInteractionType
enum class EMeshGroupPaintInteractionType : uint8_t
{
	Brush = 0,
	Fill = 1,
	GroupFill = 2,
	PolyLasso = 3,
	LastValue = 4,
	EMeshGroupPaintInteractionType_MAX = 5
};

// Object: Enum MeshModelingTools.EMeshGroupPaintBrushType
enum class EMeshGroupPaintBrushType : uint8_t
{
	Paint = 0,
	Erase = 1,
	LastValue = 2,
	EMeshGroupPaintBrushType_MAX = 3
};

// Object: Enum MeshModelingTools.EMeshGroupPaintBrushAreaType
enum class EMeshGroupPaintBrushAreaType : uint8_t
{
	Connected = 0,
	Volumetric = 1,
	EMeshGroupPaintBrushAreaType_MAX = 2
};

// Object: Enum MeshModelingTools.EMeshGroupPaintVisibilityType
enum class EMeshGroupPaintVisibilityType : uint8_t
{
	None = 0,
	FrontFacing = 1,
	Unoccluded = 2,
	EMeshGroupPaintVisibilityType_MAX = 3
};

// Object: Enum MeshModelingTools.EMeshGroupPaintToolActions
enum class EMeshGroupPaintToolActions : uint8_t
{
	NoAction = 0,
	ClearFrozen = 1,
	FreezeCurrent = 2,
	FreezeOthers = 3,
	GrowCurrent = 4,
	ShrinkCurrent = 5,
	ClearCurrent = 6,
	FloodFillCurrent = 7,
	ClearAll = 8,
	EMeshGroupPaintToolActions_MAX = 9
};

// Object: Enum MeshModelingTools.ENonlinearOperationType
enum class ENonlinearOperationType : uint8_t
{
	Bend = 0,
	Flare = 1,
	Twist = 2,
	ENonlinearOperationType_MAX = 3
};

// Object: Enum MeshModelingTools.EFlareProfileType
enum class EFlareProfileType : uint8_t
{
	SinMode = 0,
	SinSquaredMode = 1,
	TriangleMode = 2,
	EFlareProfileType_MAX = 3
};

// Object: Enum MeshModelingTools.EMeshSpaceDeformerToolAction
enum class EMeshSpaceDeformerToolAction : uint8_t
{
	NoAction = 0,
	ShiftToCenter = 1,
	EMeshSpaceDeformerToolAction_MAX = 2
};

// Object: Enum MeshModelingTools.EMeshVertexPaintInteractionType
enum class EMeshVertexPaintInteractionType : uint8_t
{
	Brush = 0,
	TriFill = 1,
	Fill = 2,
	GroupFill = 3,
	PolyLasso = 4,
	LastValue = 5,
	EMeshVertexPaintInteractionType_MAX = 6
};

// Object: Enum MeshModelingTools.EMeshVertexPaintColorChannel
enum class EMeshVertexPaintColorChannel : uint8_t
{
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EMeshVertexPaintColorChannel_MAX = 4
};

// Object: Enum MeshModelingTools.EMeshVertexPaintColorBlendMode
enum class EMeshVertexPaintColorBlendMode : uint8_t
{
	Lerp = 0,
	Mix = 1,
	Multiply = 2,
	EMeshVertexPaintColorBlendMode_MAX = 3
};

// Object: Enum MeshModelingTools.EMeshVertexPaintBrushType
enum class EMeshVertexPaintBrushType : uint8_t
{
	Paint = 0,
	Erase = 1,
	Soften = 2,
	Smooth = 3,
	LastValue = 4,
	EMeshVertexPaintBrushType_MAX = 5
};

// Object: Enum MeshModelingTools.EMeshVertexPaintSecondaryActionType
enum class EMeshVertexPaintSecondaryActionType : uint8_t
{
	Erase = 0,
	Soften = 1,
	Smooth = 2,
	EMeshVertexPaintSecondaryActionType_MAX = 3
};

// Object: Enum MeshModelingTools.EMeshVertexPaintBrushAreaType
enum class EMeshVertexPaintBrushAreaType : uint8_t
{
	Connected = 0,
	Volumetric = 1,
	EMeshVertexPaintBrushAreaType_MAX = 2
};

// Object: Enum MeshModelingTools.EMeshVertexPaintVisibilityType
enum class EMeshVertexPaintVisibilityType : uint8_t
{
	None = 0,
	FrontFacing = 1,
	Unoccluded = 2,
	EMeshVertexPaintVisibilityType_MAX = 3
};

// Object: Enum MeshModelingTools.EMeshVertexPaintMaterialMode
enum class EMeshVertexPaintMaterialMode : uint8_t
{
	LitVertexColor = 0,
	UnlitVertexColor = 1,
	OriginalMaterial = 2,
	EMeshVertexPaintMaterialMode_MAX = 3
};

// Object: Enum MeshModelingTools.EMeshVertexPaintToolActions
enum class EMeshVertexPaintToolActions : uint8_t
{
	NoAction = 0,
	PaintAll = 1,
	EraseAll = 2,
	FillBlack = 3,
	FillWhite = 4,
	ApplyCurrentUtility = 5,
	EMeshVertexPaintToolActions_MAX = 6
};

// Object: Enum MeshModelingTools.EMeshVertexPaintToolUtilityOperations
enum class EMeshVertexPaintToolUtilityOperations : uint8_t
{
	BlendAllSeams = 0,
	FillChannels = 1,
	InvertChannels = 2,
	CopyChannelToChannel = 3,
	SwapChannels = 4,
	CopyFromWeightMap = 5,
	CopyToOtherLODs = 6,
	CopyToSingleLOD = 7,
	EMeshVertexPaintToolUtilityOperations_MAX = 8
};

// Object: Enum MeshModelingTools.EMeshVertexSculptBrushType
enum class EMeshVertexSculptBrushType : uint8_t
{
	Move = 0,
	PullKelvin = 1,
	PullSharpKelvin = 2,
	Smooth = 3,
	SmoothFill = 4,
	Offset = 5,
	SculptView = 6,
	SculptMax = 7,
	Inflate = 8,
	ScaleKelvin = 9,
	Pinch = 10,
	TwistKelvin = 11,
	Flatten = 12,
	Plane = 13,
	PlaneViewAligned = 14,
	FixedPlane = 15,
	EraseSculptLayer = 16,
	LastValue = 17,
	EMeshVertexSculptBrushType_MAX = 18
};

// Object: Enum MeshModelingTools.EMeshVertexSculptBrushFilterType
enum class EMeshVertexSculptBrushFilterType : uint8_t
{
	None = 0,
	Component = 1,
	PolyGroup = 2,
	EMeshVertexSculptBrushFilterType_MAX = 3
};

// Object: Enum MeshModelingTools.EOffsetMeshToolOffsetType
enum class EOffsetMeshToolOffsetType : uint8_t
{
	Iterative = 0,
	Implicit = 1,
	EOffsetMeshToolOffsetType_MAX = 2
};

// Object: Enum MeshModelingTools.ESetMeshMaterialMode
enum class ESetMeshMaterialMode : uint8_t
{
	Original = 0,
	Checkerboard = 1,
	Override = 2,
	ESetMeshMaterialMode_MAX = 3
};

// Object: Enum MeshModelingTools.EMeshEditingMaterialModes
enum class EMeshEditingMaterialModes : uint8_t
{
	ExistingMaterial = 0,
	Diffuse = 1,
	Grey = 2,
	Soft = 3,
	Transparent = 4,
	TangentNormal = 5,
	VertexColor = 6,
	CustomImage = 7,
	Custom = 8,
	EMeshEditingMaterialModes_MAX = 9
};

// Object: Enum MeshModelingTools.ERevolvePropertiesCapFillMode
enum class ERevolvePropertiesCapFillMode : uint8_t
{
	None = 0,
	CenterFan = 1,
	Delaunay = 2,
	EarClipping = 3,
	ERevolvePropertiesCapFillMode_MAX = 4
};

// Object: Enum MeshModelingTools.ERevolvePropertiesPolygroupMode
enum class ERevolvePropertiesPolygroupMode : uint8_t
{
	PerShape = 0,
	PerFace = 1,
	PerRevolveStep = 2,
	PerPathSegment = 3,
	ERevolvePropertiesPolygroupMode_MAX = 4
};

// Object: Enum MeshModelingTools.ERevolvePropertiesQuadSplit
enum class ERevolvePropertiesQuadSplit : uint8_t
{
	Uniform = 0,
	Compact = 1,
	ERevolvePropertiesQuadSplit_MAX = 2
};

// Object: Enum MeshModelingTools.EOcclusionTriangleSamplingUIMode
enum class EOcclusionTriangleSamplingUIMode : uint8_t
{
	Vertices = 0,
	VerticesAndCentroids = 1,
	EOcclusionTriangleSamplingUIMode_MAX = 2
};

// Object: Enum MeshModelingTools.EOcclusionCalculationUIMode
enum class EOcclusionCalculationUIMode : uint8_t
{
	GeneralizedWindingNumber = 0,
	RaycastOcclusionSamples = 1,
	EOcclusionCalculationUIMode_MAX = 2
};

// Object: Enum MeshModelingTools.EOccludedAction
enum class EOccludedAction : uint8_t
{
	Remove = 0,
	SetNewGroup = 1,
	EOccludedAction_MAX = 2
};

// Object: Enum MeshModelingTools.EBrushToolSizeType
enum class EBrushToolSizeType : uint8_t
{
	Adaptive = 0,
	World = 1,
	EBrushToolSizeType_MAX = 2
};

// Object: Enum MeshModelingTools.EMeshSculptFalloffType
enum class EMeshSculptFalloffType : uint8_t
{
	Smooth = 0,
	Linear = 1,
	Inverse = 2,
	Round = 3,
	BoxSmooth = 4,
	BoxLinear = 5,
	BoxInverse = 6,
	BoxRound = 7,
	LastValue = 8,
	EMeshSculptFalloffType_MAX = 9
};

// Object: Enum MeshModelingTools.ESmoothMeshToolSmoothType
enum class ESmoothMeshToolSmoothType : uint8_t
{
	Iterative = 0,
	Implicit = 1,
	Diffusion = 2,
	ESmoothMeshToolSmoothType_MAX = 3
};

// Object: Enum MeshModelingTools.EPolyEditCutPlaneOrientation
enum class EPolyEditCutPlaneOrientation : uint8_t
{
	FaceNormals = 0,
	ViewDirection = 1,
	EPolyEditCutPlaneOrientation_MAX = 2
};

// Object: Enum MeshModelingTools.EPolyEditExtrudeDirection
enum class EPolyEditExtrudeDirection : uint8_t
{
	SelectionNormal = 0,
	WorldX = 1,
	WorldY = 2,
	WorldZ = 3,
	LocalX = 4,
	LocalY = 5,
	LocalZ = 6,
	EPolyEditExtrudeDirection_MAX = 7
};

// Object: Enum MeshModelingTools.EPolyEditExtrudeDistanceMode
enum class EPolyEditExtrudeDistanceMode : uint8_t
{
	ClickInViewport = 0,
	Fixed = 1,
	EPolyEditExtrudeDistanceMode_MAX = 2
};

// Object: Enum MeshModelingTools.EPolyEditExtrudeModeOptions
enum class EPolyEditExtrudeModeOptions : uint8_t
{
	SingleDirection = 0,
	SelectedTriangleNormals = 1,
	SelectedTriangleNormalsEven = 2,
	EPolyEditExtrudeModeOptions_MAX = 3
};

// Object: Enum MeshModelingTools.EPolyEditOffsetModeOptions
enum class EPolyEditOffsetModeOptions : uint8_t
{
	VertexNormals = 0,
	SelectedTriangleNormals = 1,
	SelectedTriangleNormalsEven = 2,
	EPolyEditOffsetModeOptions_MAX = 3
};

// Object: Enum MeshModelingTools.EPolyEditPushPullModeOptions
enum class EPolyEditPushPullModeOptions : uint8_t
{
	SelectedTriangleNormals = 0,
	SelectedTriangleNormalsEven = 1,
	SingleDirection = 2,
	VertexNormals = 3,
	EPolyEditPushPullModeOptions_MAX = 4
};

// Object: Enum MeshModelingTools.EGroupEdgeInsertionMode
enum class EGroupEdgeInsertionMode : uint8_t
{
	Retriangulate = 0,
	PlaneCut = 1,
	EGroupEdgeInsertionMode_MAX = 2
};

// Object: Enum MeshModelingTools.EEdgeLoopPositioningMode
enum class EEdgeLoopPositioningMode : uint8_t
{
	Even = 0,
	ProportionOffset = 1,
	DistanceOffset = 2,
	EEdgeLoopPositioningMode_MAX = 3
};

// Object: Enum MeshModelingTools.EEdgeLoopInsertionMode
enum class EEdgeLoopInsertionMode : uint8_t
{
	Retriangulate = 0,
	PlaneCut = 1,
	EEdgeLoopInsertionMode_MAX = 2
};

// Object: Enum MeshModelingTools.EUVProjectionToolActions
enum class EUVProjectionToolActions : uint8_t
{
	NoAction = 0,
	AutoFit = 1,
	AutoFitAlign = 2,
	Reset = 3,
	EUVProjectionToolActions_MAX = 4
};

// Object: Enum MeshModelingTools.EUVProjectionToolInitializationMode
enum class EUVProjectionToolInitializationMode : uint8_t
{
	Default = 0,
	UsePrevious = 1,
	AutoFit = 2,
	AutoFitAlign = 3,
	EUVProjectionToolInitializationMode_MAX = 4
};

// Object: Enum MeshModelingTools.EWeldMeshEdgesAttributeUIMode
enum class EWeldMeshEdgesAttributeUIMode : uint8_t
{
	None = 0,
	OnWeldedMeshEdgesOnly = 1,
	OnFullMesh = 2,
	EWeldMeshEdgesAttributeUIMode_MAX = 3
};

// Package: AnimationWarpingRuntime
// Enums: 6

// Object: Enum AnimationWarpingRuntime.EFootPlacementLockType
enum class EFootPlacementLockType : uint8_t
{
	Unlocked = 0,
	PivotAroundBall = 1,
	PivotAroundAnkle = 2,
	LockRotation = 3,
	EFootPlacementLockType_MAX = 4
};

// Object: Enum AnimationWarpingRuntime.EPelvisHeightMode
enum class EPelvisHeightMode : uint8_t
{
	AllLegs = 0,
	AllPlantedFeet = 1,
	FrontPlantedFeetUphill_FrontFeetDownhill = 2,
	EPelvisHeightMode_MAX = 3
};

// Object: Enum AnimationWarpingRuntime.EActorMovementCompensationMode
enum class EActorMovementCompensationMode : uint8_t
{
	ComponentSpace = 0,
	WorldSpace = 1,
	SuddenMotionOnly = 2,
	EActorMovementCompensationMode_MAX = 3
};

// Object: Enum AnimationWarpingRuntime.EOffsetRootBoneMode
enum class EOffsetRootBoneMode : uint8_t
{
	Accumulate = 0,
	Interpolate = 1,
	LockOffsetAndConsumeAnimation = 2,
	LockOffsetIncreaseAndConsumeAnimation = 3,
	LockOffsetAndIgnoreAnimation = 4,
	Release = 5,
	EOffsetRootBoneMode_MAX = 6
};

// Object: Enum AnimationWarpingRuntime.EOffsetRootBone_CollisionTestingMode
enum class EOffsetRootBone_CollisionTestingMode : uint8_t
{
	Disabled = 0,
	ShrinkMaxTranslation = 1,
	PlanarCollision = 2,
	EOffsetRootBone_MAX = 3
};

// Object: Enum AnimationWarpingRuntime.EOrientationWarpingSpace
enum class EOrientationWarpingSpace : uint8_t
{
	ComponentTransform = 0,
	RootBoneTransform = 1,
	CustomTransform = 2,
	EOrientationWarpingSpace_MAX = 3
};

// Package: SequencerScripting
// Enums: 1

// Object: Enum SequencerScripting.ESequenceTimeUnit
enum class ESequenceTimeUnit : uint8_t
{
	DisplayRate = 0,
	TickResolution = 1,
	ESequenceTimeUnit_MAX = 2
};

// Package: OpenColorIO
// Enums: 1

// Object: Enum OpenColorIO.EOpenColorIOViewTransformDirection
enum class EOpenColorIOViewTransformDirection : uint8_t
{
	Forward = 0,
	Inverse = 1,
	EOpenColorIOViewTransformDirection_MAX = 2
};

// Package: ChaosCaching
// Enums: 3

// Object: Enum ChaosCaching.EChaosCacheInterpolationMode
enum class EChaosCacheInterpolationMode : uint8_t
{
	QuatInterp = 0,
	EulerInterp = 1,
	DualQuatInterp = 2,
	EChaosCacheInterpolationMode_MAX = 3
};

// Object: Enum ChaosCaching.ECacheMode
enum class ECacheMode : uint8_t
{
	None = 0,
	Play = 1,
	Record = 2,
	ECacheMode_MAX = 3
};

// Object: Enum ChaosCaching.EStartMode
enum class EStartMode : uint8_t
{
	Timed = 0,
	Triggered = 1,
	EStartMode_MAX = 2
};

// Package: ChaosCloth
// Enums: 2

// Object: Enum ChaosCloth.EChaosWeightMapTarget
enum class EChaosWeightMapTarget : uint8_t
{
	None = 0,
	MaxDistance = 1,
	BackstopDistance = 2,
	BackstopRadius = 3,
	AnimDriveStiffness = 4,
	TetherEndsMask = 5,
	AnimDriveDamping = 6,
	TetherStiffness = 7,
	TetherScale = 8,
	Drag = 9,
	Lift = 10,
	EdgeStiffness = 11,
	BendingStiffness = 12,
	AreaStiffness = 13,
	BucklingStiffness = 14,
	Pressure = 15,
	FlatnessRatio = 16,
	OuterDrag = 17,
	OuterLift = 18,
	MAX = 19
};

// Object: Enum ChaosCloth.EChaosClothTetherMode
enum class EChaosClothTetherMode : uint8_t
{
	FastTetherFastLength = 0,
	AccurateTetherFastLength = 1,
	AccurateTetherAccurateLength = 2,
	MaxChaosClothTetherMode = 3,
	EChaosClothTetherMode_MAX = 4
};

// Package: ChaosClothAssetEngine
// Enums: 1

// Object: Enum ChaosClothAssetEngine.EClothAssetAsyncProperties
enum class EClothAssetAsyncProperties : uint64_t
{
	None = 0,
	RenderData = 1,
	ThumbnailInfo = 2,
	ImportedModel = 4,
	ClothCollection = 8,
	RefSkeleton = 16,
	All = 4294967295,
	EClothAssetAsyncProperties_MAX = 4294967296
};

// Package: ProceduralMeshComponent
// Enums: 1

// Object: Enum ProceduralMeshComponent.EProcMeshSliceCapOption
enum class EProcMeshSliceCapOption : uint8_t
{
	NoCap = 0,
	CreateNewSectionForCap = 1,
	UseLastSectionForCap = 2,
	EProcMeshSliceCapOption_MAX = 3
};

// Package: PropertyBindingUtils
// Enums: 3

// Object: Enum PropertyBindingUtils.EPropertyBindingAccessType
enum class EPropertyBindingAccessType : uint8_t
{
	Offset = 0,
	Object = 1,
	WeakObject = 2,
	SoftObject = 3,
	ObjectInstance = 4,
	StructInstance = 5,
	IndexArray = 6,
	EPropertyBindingAccessType_MAX = 7
};

// Object: Enum PropertyBindingUtils.EPropertyBindingPropertyAccessType
enum class EPropertyBindingPropertyAccessType : uint8_t
{
	Offset = 0,
	Object = 1,
	WeakObject = 2,
	SoftObject = 3,
	ObjectInstance = 4,
	StructInstance = 5,
	IndexArray = 6,
	SharedStruct = 7,
	StructInstanceContainer = 8,
	Unset = 9,
	EPropertyBindingPropertyAccessType_MAX = 10
};

// Object: Enum PropertyBindingUtils.EPropertyCopyType
enum class EPropertyCopyType : uint8_t
{
	None = 0,
	CopyPlain = 1,
	CopyComplex = 2,
	CopyBool = 3,
	CopyStruct = 4,
	CopyObject = 5,
	CopyName = 6,
	CopyFixedArray = 7,
	StructReference = 8,
	PromoteBoolToByte = 9,
	PromoteBoolToInt32 = 10,
	PromoteBoolToUInt32 = 11,
	PromoteBoolToInt64 = 12,
	PromoteBoolToFloat = 13,
	PromoteBoolToDouble = 14,
	PromoteByteToInt32 = 15,
	PromoteByteToUInt32 = 16,
	PromoteByteToInt64 = 17,
	PromoteByteToFloat = 18,
	PromoteByteToDouble = 19,
	PromoteInt32ToInt64 = 20,
	PromoteInt32ToFloat = 21,
	PromoteInt32ToDouble = 22,
	PromoteUInt32ToInt64 = 23,
	PromoteUInt32ToFloat = 24,
	PromoteUInt32ToDouble = 25,
	PromoteFloatToInt32 = 26,
	PromoteFloatToInt64 = 27,
	PromoteFloatToDouble = 28,
	DemoteDoubleToInt32 = 29,
	DemoteDoubleToInt64 = 30,
	DemoteDoubleToFloat = 31,
	EPropertyCopyType_MAX = 32
};

// Package: StateTreeModule
// Enums: 28

// Object: Enum StateTreeModule.EStateTreeBreakpointType
enum class EStateTreeBreakpointType : uint8_t
{
	Unset = 0,
	OnEnter = 1,
	OnExit = 2,
	OnTransition = 3,
	EStateTreeBreakpointType_MAX = 4
};

// Object: Enum StateTreeModule.EStateTreeUpdatePhase
enum class EStateTreeUpdatePhase : uint8_t
{
	Unset = 0,
	StartTree = 1,
	StopTree = 2,
	StartGlobalTasks = 3,
	StartGlobalTasksForSelection = 4,
	StopGlobalTasks = 5,
	StopGlobalTasksForSelection = 6,
	TickStateTree = 7,
	ApplyTransitions = 8,
	TickTransitions = 9,
	TriggerTransitions = 10,
	TickingGlobalTasks = 11,
	TickingTasks = 12,
	TransitionConditions = 13,
	StateSelection = 14,
	TrySelectBehavior = 15,
	EnterConditions = 16,
	EnterStates = 17,
	ExitStates = 18,
	StateCompleted = 19,
	EStateTreeUpdatePhase_MAX = 20
};

// Object: Enum StateTreeModule.EStateTreeRunStatus
enum class EStateTreeRunStatus : uint8_t
{
	Running = 0,
	Stopped = 1,
	Succeeded = 2,
	Failed = 3,
	Unset = 4,
	EStateTreeRunStatus_MAX = 5
};

// Object: Enum StateTreeModule.EStateTreeFinishTaskType
enum class EStateTreeFinishTaskType : uint8_t
{
	Failed = 0,
	Succeeded = 1,
	EStateTreeFinishTaskType_MAX = 2
};

// Object: Enum StateTreeModule.EStateTreeStateChangeType
enum class EStateTreeStateChangeType : uint8_t
{
	None = 0,
	Changed = 1,
	Sustained = 2,
	EStateTreeStateChangeType_MAX = 3
};

// Object: Enum StateTreeModule.EStateTreeConditionEvaluationMode
enum class EStateTreeConditionEvaluationMode : uint8_t
{
	Evaluated = 0,
	ForcedTrue = 1,
	ForcedFalse = 2,
	EStateTreeConditionEvaluationMode_MAX = 3
};

// Object: Enum StateTreeModule.EStateTreeTransitionSourceType
enum class EStateTreeTransitionSourceType : uint8_t
{
	Unset = 0,
	Asset = 1,
	ExternalRequest = 2,
	Internal = 3,
	EStateTreeTransitionSourceType_MAX = 4
};

// Object: Enum StateTreeModule.EStateTreeRecordTransitions
enum class EStateTreeRecordTransitions : uint8_t
{
	No = 0,
	Yes = 1,
	EStateTreeRecordTransitions_MAX = 2
};

// Object: Enum StateTreeModule.EStateTreeLinkerStatus
enum class EStateTreeLinkerStatus : uint8_t
{
	Succeeded = 0,
	Failed = 1,
	EStateTreeLinkerStatus_MAX = 2
};

// Object: Enum StateTreeModule.EStateTreeNodeFormatting
enum class EStateTreeNodeFormatting : uint8_t
{
	RichText = 0,
	Text = 1,
	EStateTreeNodeFormatting_MAX = 2
};

// Object: Enum StateTreeModule.EStateTreePropertyRefType
enum class EStateTreePropertyRefType : uint8_t
{
	None = 0,
	Bool = 1,
	Byte = 2,
	Int32 = 3,
	Int64 = 4,
	Float = 5,
	Double = 6,
	Name = 7,
	String = 8,
	Text = 9,
	Enum = 10,
	Struct = 11,
	Object = 12,
	SoftObject = 13,
	Class = 14,
	SoftClass = 15,
	EStateTreePropertyRefType_MAX = 16
};

// Object: Enum StateTreeModule.EStateTreeTraceStatus
enum class EStateTreeTraceStatus : uint8_t
{
	TracesStarted = 0,
	StoppingTrace = 1,
	TracesStopped = 2,
	EStateTreeTraceStatus_MAX = 3
};

// Object: Enum StateTreeModule.EStateTreeTraceEventType
enum class EStateTreeTraceEventType : uint8_t
{
	Unset = 0,
	OnEntering = 1,
	OnEntered = 2,
	OnExiting = 3,
	OnExited = 4,
	Push = 5,
	Pop = 6,
	OnStateSelected = 7,
	OnStateCompleted = 8,
	OnTicking = 9,
	OnTaskCompleted = 10,
	OnTicked = 11,
	Passed = 12,
	Failed = 13,
	ForcedSuccess = 14,
	ForcedFailure = 15,
	InternalForcedFailure = 16,
	OnRequesting = 17,
	OnEvaluating = 18,
	OnTransition = 19,
	OnTreeStarted = 20,
	OnTreeStopped = 21,
	EStateTreeTraceEventType_MAX = 22
};

// Object: Enum StateTreeModule.EStateTreeBlueprintPropertyCategory
enum class EStateTreeBlueprintPropertyCategory : uint8_t
{
	NotSet = 0,
	Input = 1,
	Parameter = 2,
	Output = 3,
	ContextObject = 4,
	EStateTreeBlueprintPropertyCategory_MAX = 5
};

// Object: Enum StateTreeModule.EStateTreeLoopEvents
enum class EStateTreeLoopEvents : uint8_t
{
	Next = 0,
	Break = 1,
	Consume = 2,
	EStateTreeLoopEvents_MAX = 3
};

// Object: Enum StateTreeModule.EStateTreeBindableStructSource
enum class EStateTreeBindableStructSource : uint8_t
{
	Context = 0,
	Parameter = 1,
	Evaluator = 2,
	GlobalTask = 3,
	StateParameter = 4,
	Task = 5,
	Condition = 6,
	Consideration = 7,
	TransitionEvent = 8,
	StateEvent = 9,
	PropertyFunction = 10,
	Transition = 11,
	EStateTreeBindableStructSource_MAX = 12
};

// Object: Enum StateTreeModule.EStateTreeTaskCompletionType
enum class EStateTreeTaskCompletionType : uint8_t
{
	All = 0,
	Any = 1,
	EStateTreeTaskCompletionType_MAX = 2
};

// Object: Enum StateTreeModule.EStateTreeTransitionType
enum class EStateTreeTransitionType : uint8_t
{
	None = 0,
	Succeeded = 1,
	Failed = 2,
	GotoState = 3,
	NextState = 4,
	NextSelectableState = 5,
	NotSet = 6,
	EStateTreeTransitionType_MAX = 7
};

// Object: Enum StateTreeModule.EStateTreeExpressionOperand
enum class EStateTreeExpressionOperand : uint8_t
{
	Copy = 0,
	And = 1,
	Or = 2,
	EStateTreeExpressionOperand_MAX = 3
};

// Object: Enum StateTreeModule.EStateTreeStateType
enum class EStateTreeStateType : uint8_t
{
	State = 0,
	Group = 1,
	Linked = 2,
	LinkedAsset = 3,
	Subtree = 4,
	EStateTreeStateType_MAX = 5
};

// Object: Enum StateTreeModule.EStateTreeStateSelectionBehavior
enum class EStateTreeStateSelectionBehavior : uint8_t
{
	None = 0,
	TryEnterState = 1,
	TrySelectChildrenInOrder = 2,
	TrySelectChildrenAtRandom = 3,
	TrySelectChildrenWithHighestUtility = 4,
	TrySelectChildrenAtRandomWeightedByUtility = 5,
	TryFollowTransitions = 6,
	TrySelectChildrenAtUniformRandom = 7,
	TrySelectChildrenBasedOnRelativeUtility = 8,
	EStateTreeStateSelectionBehavior_MAX = 9
};

// Object: Enum StateTreeModule.EStateTreeTransitionTrigger
enum class EStateTreeTransitionTrigger : uint8_t
{
	None = 0,
	OnStateCompleted = 1,
	OnStateSucceeded = 2,
	OnStateFailed = 3,
	OnTick = 4,
	OnEvent = 5,
	OnDelegate = 6,
	MAX = 7
};

// Object: Enum StateTreeModule.EStateTreeTransitionPriority
enum class EStateTreeTransitionPriority : uint8_t
{
	None = 0,
	Low = 1,
	Normal = 2,
	Medium = 3,
	High = 4,
	Critical = 5,
	EStateTreeTransitionPriority_MAX = 6
};

// Object: Enum StateTreeModule.EStateTreeDataSourceType
enum class EStateTreeDataSourceType : uint8_t
{
	None = 0,
	GlobalInstanceData = 1,
	GlobalInstanceDataObject = 2,
	ActiveInstanceData = 3,
	ActiveInstanceDataObject = 4,
	SharedInstanceData = 5,
	SharedInstanceDataObject = 6,
	ContextData = 7,
	ExternalData = 8,
	GlobalParameterData = 9,
	SubtreeParameterData = 10,
	StateParameterData = 11,
	TransitionEvent = 12,
	StateEvent = 13,
	ExternalGlobalParameterData = 14,
	EStateTreeDataSourceType_MAX = 15
};

// Object: Enum StateTreeModule.EStateTreeParameterDataType
enum class EStateTreeParameterDataType : uint8_t
{
	GlobalParameterData = 0,
	ExternalGlobalParameterData = 1,
	EStateTreeParameterDataType_MAX = 2
};

// Object: Enum StateTreeModule.EStateTreeSelectionFallback
enum class EStateTreeSelectionFallback : uint8_t
{
	None = 0,
	NextSelectableSibling = 1,
	EStateTreeSelectionFallback_MAX = 2
};

// Object: Enum StateTreeModule.EStateTreeExternalDataRequirement
enum class EStateTreeExternalDataRequirement : uint8_t
{
	Required = 0,
	Optional = 1,
	EStateTreeExternalDataRequirement_MAX = 2
};

// Object: Enum StateTreeModule.EStateTreePropertyUsage
enum class EStateTreePropertyUsage : uint8_t
{
	Invalid = 0,
	Context = 1,
	Input = 2,
	Parameter = 3,
	Output = 4,
	EStateTreePropertyUsage_MAX = 5
};

// Package: TargetingSystem
// Enums: 2

// Object: Enum TargetingSystem.ETargetingAOEShape
enum class ETargetingAOEShape : uint8_t
{
	Box = 0,
	Cylinder = 1,
	Sphere = 2,
	Capsule = 3,
	SourceComponent = 4,
	ETargetingAOEShape_MAX = 5
};

// Object: Enum TargetingSystem.ETargetingTraceType
enum class ETargetingTraceType : uint8_t
{
	Line = 0,
	Sphere = 1,
	Capsule = 2,
	Box = 3,
	ETargetingTraceType_MAX = 4
};

// Package: WorldConditions
// Enums: 3

// Object: Enum WorldConditions.EWorldConditionResultValue
enum class EWorldConditionResultValue : uint8_t
{
	IsFalse = 0,
	IsTrue = 1,
	Invalid = 2,
	EWorldConditionResultValue_MAX = 3
};

// Object: Enum WorldConditions.EWorldConditionOperator
enum class EWorldConditionOperator : uint8_t
{
	And = 0,
	Or = 1,
	Copy = 2,
	EWorldConditionOperator_MAX = 3
};

// Object: Enum WorldConditions.EWorldConditionContextDataType
enum class EWorldConditionContextDataType : uint8_t
{
	Dynamic = 0,
	Persistent = 1,
	EWorldConditionContextDataType_MAX = 2
};

// Package: SmartObjectsModule
// Enums: 12

// Object: Enum SmartObjectsModule.ESmartObjectChangeReason
enum class ESmartObjectChangeReason : uint8_t
{
	None = 0,
	OnEvent = 1,
	OnTagAdded = 2,
	OnTagRemoved = 3,
	OnClaimed = 4,
	OnOccupied = 5,
	OnReleased = 6,
	OnSlotEnabled = 7,
	OnSlotDisabled = 8,
	OnObjectEnabled = 9,
	OnObjectDisabled = 10,
	OnComponentBound = 11,
	OnComponentUnbound = 12,
	ESmartObjectChangeReason_MAX = 13
};

// Object: Enum SmartObjectsModule.ESmartObjectEntrancePriority
enum class ESmartObjectEntrancePriority : uint8_t
{
	Lowest = 0,
	Lower = 1,
	Low = 2,
	BelowNormal = 3,
	Normal = 4,
	AboveNormal = 5,
	High = 6,
	Higher = 7,
	Highest = 8,
	MIN = 9,
	MAX = 10
};

// Object: Enum SmartObjectsModule.ESmartObjectSlotShape
enum class ESmartObjectSlotShape : uint8_t
{
	Circle = 0,
	Rectangle = 1,
	ESmartObjectSlotShape_MAX = 2
};

// Object: Enum SmartObjectsModule.ESmartObjectSlotState
enum class ESmartObjectSlotState : uint8_t
{
	Invalid = 0,
	Free = 1,
	Claimed = 2,
	Occupied = 3,
	Disabled = 4,
	ESmartObjectSlotState_MAX = 5
};

// Object: Enum SmartObjectsModule.ETrySpawnActorIfDehydrated
enum class ETrySpawnActorIfDehydrated : uint8_t
{
	No = 0,
	Yes = 1,
	ETrySpawnActorIfDehydrated_MAX = 2
};

// Object: Enum SmartObjectsModule.FSmartObjectSlotEntrySelectionMethod
enum class EFSmartObjectSlotEntrySelectionMethod : uint8_t
{
	First = 0,
	NearestToSearchLocation = 1,
	FSmartObjectSlotEntrySelectionMethod_MAX = 2
};

// Object: Enum SmartObjectsModule.ESmartObjectCollectionRegistrationResult
enum class ESmartObjectCollectionRegistrationResult : uint8_t
{
	Failed_InvalidCollection = 0,
	Failed_AlreadyRegistered = 1,
	Failed_NotFromPersistentLevel = 2,
	Succeeded = 3,
	ESmartObjectCollectionRegistrationResult_MAX = 4
};

// Object: Enum SmartObjectsModule.ESmartObjectTagMergingPolicy
enum class ESmartObjectTagMergingPolicy : uint8_t
{
	Combine = 0,
	Override = 1,
	ESmartObjectTagMergingPolicy_MAX = 2
};

// Object: Enum SmartObjectsModule.ESmartObjectTagFilteringPolicy
enum class ESmartObjectTagFilteringPolicy : uint8_t
{
	NoFilter = 0,
	Combine = 1,
	Override = 2,
	ESmartObjectTagFilteringPolicy_MAX = 3
};

// Object: Enum SmartObjectsModule.ESmartObjectSlotNavigationLocationType
enum class ESmartObjectSlotNavigationLocationType : uint8_t
{
	Entry = 0,
	Exit = 1,
	ESmartObjectSlotNavigationLocationType_MAX = 2
};

// Object: Enum SmartObjectsModule.ESmartObjectClaimPriority
enum class ESmartObjectClaimPriority : uint8_t
{
	None = 0,
	Low = 1,
	BelowNormal = 2,
	Normal = 3,
	AboveNormal = 4,
	High = 5,
	MIN = 6,
	MAX = 7
};

// Object: Enum SmartObjectsModule.ESmartObjectTraceType
enum class ESmartObjectTraceType : uint8_t
{
	ByChannel = 0,
	ByProfile = 1,
	ByObjectTypes = 2,
	ESmartObjectTraceType_MAX = 3
};

// Package: MotionWarping
// Enums: 11

// Object: Enum MotionWarping.ESwitchOffConditionEffect
enum class ESwitchOffConditionEffect : uint8_t
{
	CancelFollow = 0,
	CancelWarping = 1,
	PauseWarping = 2,
	PauseRootMotion = 3,
	ESwitchOffConditionEffect_MAX = 4
};

// Object: Enum MotionWarping.ESwitchOffConditionDistanceOp
enum class ESwitchOffConditionDistanceOp : uint8_t
{
	LessThan = 0,
	GreaterThan = 1,
	ESwitchOffConditionDistanceOp_MAX = 2
};

// Object: Enum MotionWarping.ESwitchOffConditionDistanceAxesType
enum class ESwitchOffConditionDistanceAxesType : uint8_t
{
	AllAxes = 0,
	IgnoreZAxis = 1,
	OnlyZAxis = 2,
	ESwitchOffConditionDistanceAxesType_MAX = 3
};

// Object: Enum MotionWarping.ESwitchOffConditionAngleOp
enum class ESwitchOffConditionAngleOp : uint8_t
{
	LessThan = 0,
	GreaterThan = 1,
	ESwitchOffConditionAngleOp_MAX = 2
};

// Object: Enum MotionWarping.ESwitchOffConditionCompositeOp
enum class ESwitchOffConditionCompositeOp : uint8_t
{
	Or = 0,
	And = 1,
	ESwitchOffConditionCompositeOp_MAX = 2
};

// Object: Enum MotionWarping.EAttributeBasedRootMotionMode
enum class EAttributeBasedRootMotionMode : uint8_t
{
	ApplyDelta = 0,
	ApplyVelocity = 1,
	EAttributeBasedRootMotionMode_MAX = 2
};

// Object: Enum MotionWarping.ERootMotionModifierState
enum class ERootMotionModifierState : uint8_t
{
	Waiting = 0,
	Active = 1,
	MarkedForRemoval = 2,
	Disabled = 3,
	ERootMotionModifierState_MAX = 4
};

// Object: Enum MotionWarping.EWarpTargetLocationOffsetDirection
enum class EWarpTargetLocationOffsetDirection : uint8_t
{
	TargetsForwardVector = 0,
	VectorFromTargetToOwner = 1,
	WorldSpace = 2,
	EWarpTargetLocationOffsetDirection_MAX = 3
};

// Object: Enum MotionWarping.EMotionWarpRotationType
enum class EMotionWarpRotationType : uint8_t
{
	Default = 0,
	Facing = 1,
	OppositeDefault = 2,
	EMotionWarpRotationType_MAX = 3
};

// Object: Enum MotionWarping.EMotionWarpRotationMethod
enum class EMotionWarpRotationMethod : uint8_t
{
	Slerp = 0,
	SlerpWithClampedRate = 1,
	ConstantRate = 2,
	Scale = 3,
	EMotionWarpRotationMethod_MAX = 4
};

// Object: Enum MotionWarping.EWarpPointAnimProvider
enum class EWarpPointAnimProvider : uint8_t
{
	None = 0,
	Static = 1,
	Bone = 2,
	EWarpPointAnimProvider_MAX = 3
};

// Package: RigVM
// Enums: 20

// Object: Enum RigVM.ERigVMPinDirection
enum class ERigVMPinDirection : uint8_t
{
	Input = 0,
	Output = 1,
	IO = 2,
	Visible = 3,
	Hidden = 4,
	Invalid = 5,
	ERigVMPinDirection_MAX = 6
};

// Object: Enum RigVM.ERigVMFunctionArgumentDirection
enum class ERigVMFunctionArgumentDirection : uint8_t
{
	Input = 0,
	Output = 1,
	Invalid = 2,
	ERigVMFunctionArgumentDirection_MAX = 3
};

// Object: Enum RigVM.ERigVMTransformSpace
enum class ERigVMTransformSpace : uint8_t
{
	LocalSpace = 0,
	GlobalSpace = 1,
	Max = 2
};

// Object: Enum RigVM.ERigVMClampSpatialMode
enum class ERigVMClampSpatialMode : uint8_t
{
	Plane = 0,
	Cylinder = 1,
	Sphere = 2,
	Capsule = 3,
	ERigVMClampSpatialMode_MAX = 4
};

// Object: Enum RigVM.ERigVMParameterType
enum class ERigVMParameterType : uint8_t
{
	Input = 0,
	Output = 1,
	Invalid = 2,
	ERigVMParameterType_MAX = 3
};

// Object: Enum RigVM.ERigVMOpCode
enum class ERigVMOpCode : uint8_t
{
	Execute_0_Operands = 0,
	Execute_1_Operands = 1,
	Execute_2_Operands = 2,
	Execute_3_Operands = 3,
	Execute_4_Operands = 4,
	Execute_5_Operands = 5,
	Execute_6_Operands = 6,
	Execute_7_Operands = 7,
	Execute_8_Operands = 8,
	Execute_9_Operands = 9,
	Execute_10_Operands = 10,
	Execute_11_Operands = 11,
	Execute_12_Operands = 12,
	Execute_13_Operands = 13,
	Execute_14_Operands = 14,
	Execute_15_Operands = 15,
	Execute_16_Operands = 16,
	Execute_17_Operands = 17,
	Execute_18_Operands = 18,
	Execute_19_Operands = 19,
	Execute_20_Operands = 20,
	Execute_21_Operands = 21,
	Execute_22_Operands = 22,
	Execute_23_Operands = 23,
	Execute_24_Operands = 24,
	Execute_25_Operands = 25,
	Execute_26_Operands = 26,
	Execute_27_Operands = 27,
	Execute_28_Operands = 28,
	Execute_29_Operands = 29,
	Execute_30_Operands = 30,
	Execute_31_Operands = 31,
	Execute_32_Operands = 32,
	Execute_33_Operands = 33,
	Execute_34_Operands = 34,
	Execute_35_Operands = 35,
	Execute_36_Operands = 36,
	Execute_37_Operands = 37,
	Execute_38_Operands = 38,
	Execute_39_Operands = 39,
	Execute_40_Operands = 40,
	Execute_41_Operands = 41,
	Execute_42_Operands = 42,
	Execute_43_Operands = 43,
	Execute_44_Operands = 44,
	Execute_45_Operands = 45,
	Execute_46_Operands = 46,
	Execute_47_Operands = 47,
	Execute_48_Operands = 48,
	Execute_49_Operands = 49,
	Execute_50_Operands = 50,
	Execute_51_Operands = 51,
	Execute_52_Operands = 52,
	Execute_53_Operands = 53,
	Execute_54_Operands = 54,
	Execute_55_Operands = 55,
	Execute_56_Operands = 56,
	Execute_57_Operands = 57,
	Execute_58_Operands = 58,
	Execute_59_Operands = 59,
	Execute_60_Operands = 60,
	Execute_61_Operands = 61,
	Execute_62_Operands = 62,
	Execute_63_Operands = 63,
	Execute_64_Operands = 64,
	Zero = 65,
	BoolFalse = 66,
	BoolTrue = 67,
	Copy = 68,
	Increment = 69,
	Decrement = 70,
	Equals = 71,
	NotEquals = 72,
	JumpAbsolute = 73,
	JumpForward = 74,
	JumpBackward = 75,
	JumpAbsoluteIf = 76,
	JumpForwardIf = 77,
	JumpBackwardIf = 78,
	ChangeType = 79,
	Exit = 80,
	BeginBlock = 81,
	EndBlock = 82,
	ArrayReset = 83,
	ArrayGetNum = 84,
	ArraySetNum = 85,
	ArrayGetAtIndex = 86,
	ArraySetAtIndex = 87,
	ArrayAdd = 88,
	ArrayInsert = 89,
	ArrayRemove = 90,
	ArrayFind = 91,
	ArrayAppend = 92,
	ArrayClone = 93,
	ArrayIterator = 94,
	ArrayUnion = 95,
	ArrayDifference = 96,
	ArrayIntersection = 97,
	ArrayReverse = 98,
	InvokeEntry = 99,
	JumpToBranch = 100,
	Execute = 101,
	RunInstructions = 102,
	SetupTraits = 103,
	Invalid = 104,
	FirstArrayOpCode = 105,
	LastArrayOpCode = 106,
	ERigVMOpCode_MAX = 107
};

// Object: Enum RigVM.ERigVMCopyType
enum class ERigVMCopyType : uint8_t
{
	Default = 0,
	FloatToDouble = 1,
	DoubleToFloat = 2,
	ERigVMCopyType_MAX = 3
};

// Object: Enum RigVM.ERigVMBreakpointAction
enum class ERigVMBreakpointAction : uint8_t
{
	None = 0,
	Resume = 1,
	StepOver = 2,
	StepInto = 3,
	StepOut = 4,
	Max = 5
};

// Object: Enum RigVM.ERigVMDrawSettings
enum class ERigVMDrawSettings : uint8_t
{
	Points = 0,
	Lines = 1,
	LineStrip = 2,
	DynamicMesh = 3,
	ERigVMDrawSettings_MAX = 4
};

// Object: Enum RigVM.ERigVMMemoryType
enum class ERigVMMemoryType : uint8_t
{
	Work = 0,
	Literal = 1,
	External = 2,
	Debug = 3,
	Invalid = 4,
	ERigVMMemoryType_MAX = 5
};

// Object: Enum RigVM.ERigVMRegisterType
enum class ERigVMRegisterType : uint8_t
{
	Plain = 0,
	String = 1,
	Name = 2,
	Struct = 3,
	Invalid = 4,
	ERigVMRegisterType_MAX = 5
};

// Object: Enum RigVM.ERigVMUserWorkflowType
enum class ERigVMUserWorkflowType : uint8_t
{
	Invalid = 0,
	NodeContext = 1,
	PinContext = 2,
	OnPinDefaultChanged = 4,
	NodeContextButton = 8,
	All = 15,
	ERigVMUserWorkflowType_MAX = 16
};

// Object: Enum RigVM.ERigUnitDebugPointMode
enum class ERigUnitDebugPointMode : uint8_t
{
	Point = 0,
	Vector = 1,
	Max = 2
};

// Object: Enum RigVM.ERigUnitDebugTransformMode
enum class ERigUnitDebugTransformMode : uint8_t
{
	Point = 0,
	Axes = 1,
	Box = 2,
	Max = 3
};

// Object: Enum RigVM.ERigUnitVisualDebugPointMode
enum class ERigUnitVisualDebugPointMode : uint8_t
{
	Point = 0,
	Vector = 1,
	Max = 2
};

// Object: Enum RigVM.ERBFKernelType
enum class ERBFKernelType : uint8_t
{
	Gaussian = 0,
	Exponential = 1,
	Linear = 2,
	Cubic = 3,
	Quintic = 4,
	ERBFKernelType_MAX = 5
};

// Object: Enum RigVM.ERBFQuatDistanceType
enum class ERBFQuatDistanceType : uint8_t
{
	Euclidean = 0,
	ArcLength = 1,
	SwingAngle = 2,
	TwistAngle = 3,
	ERBFQuatDistanceType_MAX = 4
};

// Object: Enum RigVM.ERBFVectorDistanceType
enum class ERBFVectorDistanceType : uint8_t
{
	Euclidean = 0,
	Manhattan = 1,
	ArcLength = 2,
	ERBFVectorDistanceType_MAX = 3
};

// Object: Enum RigVM.ERigVMAnimEasingType
enum class ERigVMAnimEasingType : uint8_t
{
	Linear = 0,
	QuadraticEaseIn = 1,
	QuadraticEaseOut = 2,
	QuadraticEaseInOut = 3,
	CubicEaseIn = 4,
	CubicEaseOut = 5,
	CubicEaseInOut = 6,
	QuarticEaseIn = 7,
	QuarticEaseOut = 8,
	QuarticEaseInOut = 9,
	QuinticEaseIn = 10,
	QuinticEaseOut = 11,
	QuinticEaseInOut = 12,
	SineEaseIn = 13,
	SineEaseOut = 14,
	SineEaseInOut = 15,
	CircularEaseIn = 16,
	CircularEaseOut = 17,
	CircularEaseInOut = 18,
	ExponentialEaseIn = 19,
	ExponentialEaseOut = 20,
	ExponentialEaseInOut = 21,
	ElasticEaseIn = 22,
	ElasticEaseOut = 23,
	ElasticEaseInOut = 24,
	BackEaseIn = 25,
	BackEaseOut = 26,
	BackEaseInOut = 27,
	BounceEaseIn = 28,
	BounceEaseOut = 29,
	BounceEaseInOut = 30,
	ERigVMAnimEasingType_MAX = 31
};

// Object: Enum RigVM.ERigVMSimPointIntegrateType
enum class ERigVMSimPointIntegrateType : uint8_t
{
	Verlet = 0,
	SemiExplicitEuler = 1,
	ERigVMSimPointIntegrateType_MAX = 2
};

// Package: ControlRig
// Enums: 42

// Object: Enum ControlRig.ERigElementType
enum class ERigElementType : uint8_t
{
	None = 0,
	Bone = 1,
	Null = 2,
	Space = 3,
	Control = 4,
	Curve = 5,
	Physics = 6,
	Reference = 7,
	Connector = 8,
	Socket = 9,
	First = 10,
	Last = 11,
	All = 12,
	ToResetAfterConstructionEvent = 13,
	ERigElementType_MAX = 14
};

// Object: Enum ControlRig.ERigHierarchyNotification
enum class ERigHierarchyNotification : uint8_t
{
	ElementAdded = 0,
	ElementRemoved = 1,
	ElementRenamed = 2,
	ElementSelected = 3,
	ElementDeselected = 4,
	ParentChanged = 5,
	HierarchyReset = 6,
	ControlSettingChanged = 7,
	ControlVisibilityChanged = 8,
	ControlDrivenListChanged = 9,
	ControlShapeTransformChanged = 10,
	ParentWeightsChanged = 11,
	InteractionBracketOpened = 12,
	InteractionBracketClosed = 13,
	ElementReordered = 14,
	ConnectorSettingChanged = 15,
	SocketColorChanged = 16,
	SocketDescriptionChanged = 17,
	SocketDesiredParentChanged = 18,
	HierarchyCopied = 19,
	ComponentAdded = 20,
	ComponentRemoved = 21,
	ComponentContentChanged = 22,
	ComponentSelected = 23,
	ComponentDeselected = 24,
	ComponentRenamed = 25,
	ComponentReparented = 26,
	ShortNameChanged = 27,
	Max = 28
};

// Object: Enum ControlRig.ERigControlTransformChannel
enum class ERigControlTransformChannel : uint8_t
{
	TranslationX = 0,
	TranslationY = 1,
	TranslationZ = 2,
	Pitch = 3,
	Yaw = 4,
	Roll = 5,
	ScaleX = 6,
	ScaleY = 7,
	ScaleZ = 8,
	ERigControlTransformChannel_MAX = 9
};

// Object: Enum ControlRig.ERigControlVisibility
enum class ERigControlVisibility : uint8_t
{
	UserDefined = 0,
	BasedOnSelection = 1,
	ERigControlVisibility_MAX = 2
};

// Object: Enum ControlRig.ERigControlAxis
enum class ERigControlAxis : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	ERigControlAxis_MAX = 3
};

// Object: Enum ControlRig.ERigControlType
enum class ERigControlType : uint8_t
{
	Bool = 0,
	Float = 1,
	Integer = 2,
	Vector2D = 3,
	Position = 4,
	Scale = 5,
	Rotator = 6,
	Transform = 7,
	TransformNoScale = 8,
	EulerTransform = 9,
	ScaleFloat = 10,
	ERigControlType_MAX = 11
};

// Object: Enum ControlRig.ERigControlAnimationType
enum class ERigControlAnimationType : uint8_t
{
	AnimationControl = 0,
	AnimationChannel = 1,
	ProxyControl = 2,
	VisualCue = 3,
	ERigControlAnimationType_MAX = 4
};

// Object: Enum ControlRig.EConnectorType
enum class EConnectorType : uint8_t
{
	Primary = 0,
	Secondary = 1,
	EConnectorType_MAX = 2
};

// Object: Enum ControlRig.EElementNameDisplayMode
enum class EElementNameDisplayMode : uint8_t
{
	AssetDefault = 0,
	Auto = 1,
	ForceShort = 2,
	ForceLong = 3,
	EElementNameDisplayMode_MAX = 4
};

// Object: Enum ControlRig.ERigExecutionType
enum class ERigExecutionType : uint8_t
{
	Runtime = 0,
	Editing = 1,
	Max = 2
};

// Object: Enum ControlRig.EControlRigVectorKind
enum class EControlRigVectorKind : uint8_t
{
	Direction = 0,
	Location = 1,
	EControlRigVectorKind_MAX = 2
};

// Object: Enum ControlRig.ERigTransformStackEntryType
enum class ERigTransformStackEntryType : uint8_t
{
	TransformPose = 0,
	ControlOffset = 1,
	ControlShape = 2,
	CurveValue = 3,
	ERigTransformStackEntryType_MAX = 4
};

// Object: Enum ControlRig.EControlRigComponentSpace
enum class EControlRigComponentSpace : uint8_t
{
	WorldSpace = 0,
	ActorSpace = 1,
	ComponentSpace = 2,
	RigSpace = 3,
	LocalSpace = 4,
	Max = 5
};

// Object: Enum ControlRig.EControlRigComponentMapDirection
enum class EControlRigComponentMapDirection : uint8_t
{
	Input = 0,
	Output = 1,
	EControlRigComponentMapDirection_MAX = 2
};

// Object: Enum ControlRig.ETransformSpaceMode
enum class ETransformSpaceMode : uint8_t
{
	LocalSpace = 0,
	GlobalSpace = 1,
	BaseSpace = 2,
	BaseJoint = 3,
	Max = 4
};

// Object: Enum ControlRig.ETransformGetterType
enum class ETransformGetterType : uint8_t
{
	Initial = 0,
	Current = 1,
	Max = 2
};

// Object: Enum ControlRig.EControlRigReplayPlaybackMode
enum class EControlRigReplayPlaybackMode : uint8_t
{
	Live = 0,
	ReplayInputs = 1,
	GroundTruth = 2,
	Max = 3
};

// Object: Enum ControlRig.ECRSimConstraintType
enum class ECRSimConstraintType : uint8_t
{
	Distance = 0,
	DistanceFromA = 1,
	DistanceFromB = 2,
	Plane = 3,
	ECRSimConstraintType_MAX = 4
};

// Object: Enum ControlRig.ECRSimPointForceType
enum class ECRSimPointForceType : uint8_t
{
	Direction = 0,
	ECRSimPointForceType_MAX = 1
};

// Object: Enum ControlRig.ECRSimSoftCollisionType
enum class ECRSimSoftCollisionType : uint8_t
{
	Plane = 0,
	Sphere = 1,
	Cone = 2,
	ECRSimSoftCollisionType_MAX = 3
};

// Object: Enum ControlRig.EModularRigNotification
enum class EModularRigNotification : uint8_t
{
	ModuleAdded = 0,
	ModuleRenamed = 1,
	ModuleRemoved = 2,
	ModuleReparented = 3,
	ConnectionChanged = 4,
	ModuleConfigValueChanged = 5,
	ModuleShortNameChanged = 6,
	InteractionBracketOpened = 7,
	InteractionBracketClosed = 8,
	InteractionBracketCanceled = 9,
	ModuleClassChanged = 10,
	ModuleSelected = 11,
	ModuleDeselected = 12,
	Max = 13
};

// Object: Enum ControlRig.EControlRigFKRigExecuteMode
enum class EControlRigFKRigExecuteMode : uint8_t
{
	Replace = 0,
	Additive = 1,
	Direct = 2,
	Max = 3
};

// Object: Enum ControlRig.ERigBoneType
enum class ERigBoneType : uint8_t
{
	Imported = 0,
	User = 1,
	ERigBoneType_MAX = 2
};

// Object: Enum ControlRig.ERigMetadataType
enum class ERigMetadataType : uint8_t
{
	Bool = 0,
	BoolArray = 1,
	Float = 2,
	FloatArray = 3,
	Int32 = 4,
	Int32Array = 5,
	Name = 6,
	NameArray = 7,
	Vector = 8,
	VectorArray = 9,
	Rotator = 10,
	RotatorArray = 11,
	Quat = 12,
	QuatArray = 13,
	Transform = 14,
	TransformArray = 15,
	LinearColor = 16,
	LinearColorArray = 17,
	RigElementKey = 18,
	RigElementKeyArray = 19,
	Invalid = 20,
	ERigMetadataType_MAX = 21
};

// Object: Enum ControlRig.ERigEvent
enum class ERigEvent : uint8_t
{
	None = 0,
	RequestAutoKey = 1,
	OpenUndoBracket = 2,
	CloseUndoBracket = 3,
	Max = 4
};

// Object: Enum ControlRig.EControlRigSetKey
enum class EControlRigSetKey : uint8_t
{
	DoNotCare = 0,
	Always = 1,
	Never = 2,
	EControlRigSetKey_MAX = 3
};

// Object: Enum ControlRig.ERigControlValueType
enum class ERigControlValueType : uint8_t
{
	Initial = 0,
	Current = 1,
	Minimum = 2,
	Maximum = 3,
	ERigControlValueType_MAX = 4
};

// Object: Enum ControlRig.ERigElementResolveState
enum class ERigElementResolveState : uint8_t
{
	Unknown = 0,
	InvalidTarget = 1,
	PossibleTarget = 2,
	DefaultTarget = 3,
	Max = 4
};

// Object: Enum ControlRig.EModularRigResolveState
enum class EModularRigResolveState : uint8_t
{
	Success = 0,
	Error = 1,
	Max = 2
};

// Object: Enum ControlRig.ERigTransformType
enum class ERigTransformType : uint8_t
{
	InitialLocal = 0,
	CurrentLocal = 1,
	InitialGlobal = 2,
	CurrentGlobal = 3,
	NumTransformTypes = 4,
	ERigTransformType_MAX = 5
};

// Object: Enum ControlRig.ERigTransformStorageType
enum class ERigTransformStorageType : uint8_t
{
	Pose = 0,
	Offset = 1,
	Shape = 2,
	NumStorageTypes = 3,
	ERigTransformStorageType_MAX = 4
};

// Object: Enum ControlRig.ERigSpaceType
enum class ERigSpaceType : uint8_t
{
	Global = 0,
	Bone = 1,
	Control = 2,
	Space = 3,
	ERigSpaceType_MAX = 4
};

// Object: Enum ControlRig.EMovieSceneControlRigSpaceType
enum class EMovieSceneControlRigSpaceType : uint8_t
{
	Parent = 0,
	World = 1,
	ControlRig = 2,
	EMovieSceneControlRigSpaceType_MAX = 3
};

// Object: Enum ControlRig.EControlRigDrawHierarchyMode
enum class EControlRigDrawHierarchyMode : uint8_t
{
	Axes = 0,
	Max = 1
};

// Object: Enum ControlRig.EAimMode
enum class EAimMode : uint8_t
{
	AimAtTarget = 0,
	OrientToTarget = 1,
	MAX = 2
};

// Object: Enum ControlRig.EApplyTransformMode
enum class EApplyTransformMode : uint8_t
{
	Override = 0,
	Additive = 1,
	Max = 2
};

// Object: Enum ControlRig.ERigSwitchParentMode
enum class ERigSwitchParentMode : uint8_t
{
	World = 0,
	DefaultParent = 1,
	ParentItem = 2,
	ERigSwitchParentMode_MAX = 3
};

// Object: Enum ControlRig.EControlRigCurveAlignment
enum class EControlRigCurveAlignment : uint8_t
{
	Front = 0,
	Stretched = 1,
	EControlRigCurveAlignment_MAX = 2
};

// Object: Enum ControlRig.EControlRigModifyBoneMode
enum class EControlRigModifyBoneMode : uint8_t
{
	OverrideLocal = 0,
	OverrideGlobal = 1,
	AdditiveLocal = 2,
	AdditiveGlobal = 3,
	Max = 4
};

// Object: Enum ControlRig.EConstraintInterpType
enum class EConstraintInterpType : uint8_t
{
	Average = 0,
	Shortest = 1,
	Max = 2
};

// Object: Enum ControlRig.EControlRigInteractionType
enum class EControlRigInteractionType : uint8_t
{
	None = 0,
	Translate = 1,
	Rotate = 2,
	Scale = 4,
	All = 7,
	EControlRigInteractionType_MAX = 8
};

// Object: Enum ControlRig.ERigMetaDataNameSpace
enum class ERigMetaDataNameSpace : uint8_t
{
	None = 0,
	Self = 1,
	Parent = 2,
	Root = 3,
	Last = 4,
	ERigMetaDataNameSpace_MAX = 5
};

// Package: IKRig
// Enums: 17

// Object: Enum IKRig.EFKChainTranslationMode
enum class EFKChainTranslationMode : uint8_t
{
	None = 0,
	GloballyScaled = 1,
	Absolute = 2,
	StretchBoneLengthUniformly = 3,
	StretchBoneLengthNonUniformly = 4,
	EFKChainTranslationMode_MAX = 5
};

// Object: Enum IKRig.EFKChainRotationMode
enum class EFKChainRotationMode : uint8_t
{
	Interpolated = 0,
	OneToOne = 1,
	OneToOneReversed = 2,
	MatchChain = 3,
	MatchScaledChain = 4,
	None = 5,
	EFKChainRotationMode_MAX = 6
};

// Object: Enum IKRig.EAutoMapChainType
enum class EAutoMapChainType : uint8_t
{
	Exact = 0,
	Fuzzy = 1,
	Clear = 2,
	EAutoMapChainType_MAX = 3
};

// Object: Enum IKRig.ERetargetTranslationMode
enum class ERetargetTranslationMode : uint8_t
{
	None = 0,
	GloballyScaled = 1,
	Absolute = 2,
	StretchBoneLengthUniformly = 3,
	StretchBoneLengthNonUniformly = 4,
	ERetargetTranslationMode_MAX = 5
};

// Object: Enum IKRig.ERetargetRotationMode
enum class ERetargetRotationMode : uint8_t
{
	Interpolated = 0,
	OneToOne = 1,
	OneToOneReversed = 2,
	MatchChain = 3,
	MatchScaledChain = 4,
	None = 5,
	ERetargetRotationMode_MAX = 6
};

// Object: Enum IKRig.ECopyOpSettingsContext
enum class ECopyOpSettingsContext : uint8_t
{
	PreInitialize = 0,
	Runtime = 1,
	ECopyOpSettingsContext_MAX = 2
};

// Object: Enum IKRig.EPinBoneType
enum class EPinBoneType : uint8_t
{
	FullTransform = 0,
	TranslateOnly = 1,
	RotateOnly = 2,
	ScaleOnly = 3,
	EPinBoneType_MAX = 4
};

// Object: Enum IKRig.EPinBoneTranslationMode
enum class EPinBoneTranslationMode : uint8_t
{
	CopyGlobalPosition = 0,
	CopyLocalPosition = 1,
	CopyLocalPositionRelativeOffset = 2,
	CopyLocalPositionRelativeScaled = 3,
	CopyGlobalPositionAndMaintainOffset = 4,
	EPinBoneTranslationMode_MAX = 5
};

// Object: Enum IKRig.EPinBoneRotationMode
enum class EPinBoneRotationMode : uint8_t
{
	CopyGlobalRotation = 0,
	MaintainOffsetFromBoneToCopyFrom = 1,
	EPinBoneRotationMode_MAX = 2
};

// Object: Enum IKRig.ERootMotionSource
enum class ERootMotionSource : uint8_t
{
	CopyFromSourceRoot = 0,
	GenerateFromTargetPelvis = 1,
	ERootMotionSource_MAX = 2
};

// Object: Enum IKRig.ERootMotionHeightSource
enum class ERootMotionHeightSource : uint8_t
{
	CopyHeightFromSource = 0,
	SnapToGround = 1,
	ERootMotionHeightSource_MAX = 2
};

// Object: Enum IKRig.EWarpingDirectionSource
enum class EWarpingDirectionSource : uint8_t
{
	Goals = 0,
	Chain = 1,
	RootBone = 2,
	EWarpingDirectionSource_MAX = 3
};

// Object: Enum IKRig.ERetargetSourceMode
enum class ERetargetSourceMode : uint8_t
{
	ParentSkeletalMeshComponent = 0,
	CustomSkeletalMeshComponent = 1,
	SourcePosePin = 2,
	ERetargetSourceMode_MAX = 3
};

// Object: Enum IKRig.ERetargetSourceOrTarget
enum class ERetargetSourceOrTarget : uint8_t
{
	Source = 0,
	Target = 1,
	ERetargetSourceOrTarget_MAX = 2
};

// Object: Enum IKRig.EBasicAxis
enum class EBasicAxis : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	NegX = 3,
	NegY = 4,
	NegZ = 5,
	EBasicAxis_MAX = 6
};

// Object: Enum IKRig.EIKRigGoalSpace
enum class EIKRigGoalSpace : uint8_t
{
	Component = 0,
	Additive = 1,
	World = 2,
	EIKRigGoalSpace_MAX = 3
};

// Object: Enum IKRig.EIKRigGoalTransformSource
enum class EIKRigGoalTransformSource : uint8_t
{
	Manual = 0,
	Bone = 1,
	ActorComponent = 2,
	EIKRigGoalTransformSource_MAX = 3
};

// Package: ContextualAnimation
// Enums: 11

// Object: Enum ContextualAnimation.EContextualAnimCollisionBehavior
enum class EContextualAnimCollisionBehavior : uint8_t
{
	None = 0,
	IgnoreActorWhenMoving = 1,
	IgnoreChannels = 2,
	EContextualAnimCollisionBehavior_MAX = 3
};

// Object: Enum ContextualAnimation.EContextualAnimPointType
enum class EContextualAnimPointType : uint8_t
{
	FirstFrame = 0,
	SyncFrame = 1,
	LastFrame = 2,
	EContextualAnimPointType_MAX = 3
};

// Object: Enum ContextualAnimation.EContextualAnimCriterionToConsider
enum class EContextualAnimCriterionToConsider : uint8_t
{
	All = 0,
	Spatial = 1,
	Other = 2,
	EContextualAnimCriterionToConsider_MAX = 3
};

// Object: Enum ContextualAnimation.EContextualAnimActorPreviewType
enum class EContextualAnimActorPreviewType : uint8_t
{
	SkeletalMesh = 0,
	StaticMesh = 1,
	Actor = 2,
	None = 3,
	EContextualAnimActorPreviewType_MAX = 4
};

// Object: Enum ContextualAnimation.EContextualAnimCriterionType
enum class EContextualAnimCriterionType : uint8_t
{
	Spatial = 0,
	Other = 1,
	EContextualAnimCriterionType_MAX = 2
};

// Object: Enum ContextualAnimation.EContextualAnimCriterionConeMode
enum class EContextualAnimCriterionConeMode : uint8_t
{
	ToPrimary = 0,
	FromPrimary = 1,
	EContextualAnimCriterionConeMode_MAX = 2
};

// Object: Enum ContextualAnimation.EContextualAnimCriterionDistanceMode
enum class EContextualAnimCriterionDistanceMode : uint8_t
{
	Distance_3D = 0,
	Distance_2D = 1,
	Distance_MAX = 2
};

// Object: Enum ContextualAnimation.EContextualAnimJoinRule
enum class EContextualAnimJoinRule : uint8_t
{
	Default = 0,
	Late = 1,
	EContextualAnimJoinRule_MAX = 2
};

// Object: Enum ContextualAnimation.EContextualAnimIKTargetProvider
enum class EContextualAnimIKTargetProvider : uint8_t
{
	Autogenerated = 0,
	Bone = 1,
	EContextualAnimIKTargetProvider_MAX = 2
};

// Object: Enum ContextualAnimation.EContextualAnimIKTargetAlphaProvider
enum class EContextualAnimIKTargetAlphaProvider : uint8_t
{
	AnimNotifyState = 0,
	Curve = 1,
	None = 2,
	EContextualAnimIKTargetAlphaProvider_MAX = 3
};

// Object: Enum ContextualAnimation.EContextualAnimWarpPointDefinitionMode
enum class EContextualAnimWarpPointDefinitionMode : uint8_t
{
	PrimaryActor = 0,
	Socket = 1,
	Custom = 2,
	EContextualAnimWarpPointDefinitionMode_MAX = 3
};

// Package: GameplayStateTreeModule
// Enums: 1

// Object: Enum GameplayStateTreeModule.EStateTreeComponentSchemaScheduledTickPolicy
enum class EStateTreeComponentSchemaScheduledTickPolicy : uint8_t
{
	Default = 0,
	Allowed = 1,
	Denied = 2,
	EStateTreeComponentSchemaScheduledTickPolicy_MAX = 3
};

// Package: GameplayInteractionsModule
// Enums: 9

// Object: Enum GameplayInteractionsModule.EGameplayTaskActuationResult
enum class EGameplayTaskActuationResult : uint8_t
{
	None = 0,
	RequestFailed = 1,
	Failed = 2,
	Succeeded = 3,
	EGameplayTaskActuationResult_MAX = 4
};

// Object: Enum GameplayInteractionsModule.EGameplayInteractionAbortReason
enum class EGameplayInteractionAbortReason : uint8_t
{
	Unset = 0,
	ExternalAbort = 1,
	InternalAbort = 2,
	EGameplayInteractionAbortReason_MAX = 3
};

// Object: Enum GameplayInteractionsModule.EGameplayInteractionModifyGameplayTagOperation
enum class EGameplayInteractionModifyGameplayTagOperation : uint8_t
{
	Add = 0,
	Remove = 1,
	EGameplayInteractionModifyGameplayTagOperation_MAX = 2
};

// Object: Enum GameplayInteractionsModule.EGameplayInteractionTaskModify
enum class EGameplayInteractionTaskModify : uint8_t
{
	OnEnterStateUndoOnExitState = 0,
	OnEnterState = 1,
	OnExitState = 2,
	OnExitStateFailed = 3,
	OnExitStateSucceeded = 4,
	EGameplayInteractionTaskModify_MAX = 5
};

// Object: Enum GameplayInteractionsModule.EGameplayInteractionTaskTrigger
enum class EGameplayInteractionTaskTrigger : uint8_t
{
	OnEnterState = 0,
	OnExitState = 1,
	OnExitStateFailed = 2,
	OnExitStateSucceeded = 3,
	EGameplayInteractionTaskTrigger_MAX = 4
};

// Object: Enum GameplayInteractionsModule.EGameplayInteractionMatchSlotTagSource
enum class EGameplayInteractionMatchSlotTagSource : uint8_t
{
	ActivityTags = 0,
	RuntimeTags = 1,
	EGameplayInteractionMatchSlotTagSource_MAX = 2
};

// Object: Enum GameplayInteractionsModule.EGameplayInteractionSlotReferenceType
enum class EGameplayInteractionSlotReferenceType : uint8_t
{
	ByActivityTag = 0,
	ByLinkTag = 1,
	EGameplayInteractionSlotReferenceType_MAX = 2
};

// Object: Enum GameplayInteractionsModule.EGameplayInteractionSyncSlotTransitionState
enum class EGameplayInteractionSyncSlotTransitionState : uint8_t
{
	WaitingForFromTag = 0,
	WaitingForToTag = 1,
	Completed = 2,
	EGameplayInteractionSyncSlotTransitionState_MAX = 3
};

// Object: Enum GameplayInteractionsModule.EPlayContextualAnimExecutionMethod
enum class EPlayContextualAnimExecutionMethod : uint8_t
{
	StartInteraction = 0,
	JoinInteraction = 1,
	TransitionAllActors = 2,
	TransitionSingleActor = 3,
	EPlayContextualAnimExecutionMethod_MAX = 4
};

// Package: GameplayBehaviorsModule
// Enums: 1

// Object: Enum GameplayBehaviorsModule.EGameplayBehaviorInstantiationPolicy
enum class EGameplayBehaviorInstantiationPolicy : uint8_t
{
	Instantiate = 0,
	ConditionallyInstantiate = 1,
	DontInstantiate = 2,
	EGameplayBehaviorInstantiationPolicy_MAX = 3
};

// Package: HttpBlueprint
// Enums: 2

// Object: Enum HttpBlueprint.EHttpVerbs
enum class EHttpVerbs : uint8_t
{
	Post = 0,
	Put = 1,
	Delete = 2,
	Patch = 3,
	Get = 4,
	MAX = 255
};

// Object: Enum HttpBlueprint.ERequestPresets
enum class ERequestPresets : uint8_t
{
	Json = 0,
	Http = 1,
	Url = 2,
	Custom = 3,
	ERequestPresets_MAX = 4
};

// Package: AugmentedReality
// Enums: 42

// Object: Enum AugmentedReality.EARTrackingState
enum class EARTrackingState : uint8_t
{
	Unknown = 0,
	Tracking = 1,
	NotTracking = 2,
	StoppedTracking = 3,
	EARTrackingState_MAX = 4
};

// Object: Enum AugmentedReality.EARSessionConfigFlags
enum class EARSessionConfigFlags : uint8_t
{
	None = 0,
	GenerateMeshData = 1,
	RenderMeshDataInWireframe = 2,
	GenerateCollisionForMeshData = 4,
	GenerateNavMeshForMeshData = 8,
	UseMeshDataForOcclusion = 16,
	EARSessionConfigFlags_MAX = 17
};

// Object: Enum AugmentedReality.EPlaneComponentDebugMode
enum class EPlaneComponentDebugMode : uint8_t
{
	None = 0,
	ShowNetworkRole = 1,
	ShowClassification = 2,
	EPlaneComponentDebugMode_MAX = 3
};

// Object: Enum AugmentedReality.EFaceComponentDebugMode
enum class EFaceComponentDebugMode : uint8_t
{
	None = 0,
	ShowEyeVectors = 1,
	ShowFaceMesh = 2,
	EFaceComponentDebugMode_MAX = 3
};

// Object: Enum AugmentedReality.EARFaceTransformMixing
enum class EARFaceTransformMixing : uint8_t
{
	ComponentOnly = 0,
	ComponentLocationTrackedRotation = 1,
	ComponentWithTracked = 2,
	TrackingOnly = 3,
	EARFaceTransformMixing_MAX = 4
};

// Object: Enum AugmentedReality.EImageComponentDebugMode
enum class EImageComponentDebugMode : uint8_t
{
	None = 0,
	ShowDetectedImage = 1,
	EImageComponentDebugMode_MAX = 2
};

// Object: Enum AugmentedReality.EQRCodeComponentDebugMode
enum class EQRCodeComponentDebugMode : uint8_t
{
	None = 0,
	ShowQRCode = 1,
	EQRCodeComponentDebugMode_MAX = 2
};

// Object: Enum AugmentedReality.EPoseComponentDebugMode
enum class EPoseComponentDebugMode : uint8_t
{
	None = 0,
	ShowSkeleton = 1,
	EPoseComponentDebugMode_MAX = 2
};

// Object: Enum AugmentedReality.EGeoAnchorComponentDebugMode
enum class EGeoAnchorComponentDebugMode : uint8_t
{
	None = 0,
	ShowGeoData = 1,
	EGeoAnchorComponentDebugMode_MAX = 2
};

// Object: Enum AugmentedReality.EARServiceAvailability
enum class EARServiceAvailability : uint8_t
{
	UnknownError = 0,
	UnknownChecking = 1,
	UnknownTimedOut = 2,
	UnsupportedDeviceNotCapable = 3,
	SupportedNotInstalled = 4,
	SupportedVersionTooOld = 5,
	SupportedInstalled = 6,
	EARServiceAvailability_MAX = 7
};

// Object: Enum AugmentedReality.EARServiceInstallRequestResult
enum class EARServiceInstallRequestResult : uint8_t
{
	Installed = 0,
	DeviceNotCompatible = 1,
	UserDeclinedInstallation = 2,
	FatalError = 3,
	EARServiceInstallRequestResult_MAX = 4
};

// Object: Enum AugmentedReality.EARServicePermissionRequestResult
enum class EARServicePermissionRequestResult : uint8_t
{
	Granted = 0,
	Denied = 1,
	EARServicePermissionRequestResult_MAX = 2
};

// Object: Enum AugmentedReality.EARGeoTrackingState
enum class EARGeoTrackingState : uint8_t
{
	Initializing = 0,
	Localized = 1,
	Localizing = 2,
	NotAvailable = 3,
	EARGeoTrackingState_MAX = 4
};

// Object: Enum AugmentedReality.EARGeoTrackingStateReason
enum class EARGeoTrackingStateReason : uint8_t
{
	None = 0,
	NotAvailableAtLocation = 1,
	NeedLocationPermissions = 2,
	DevicePointedTooLow = 3,
	WorldTrackingUnstable = 4,
	WaitingForLocation = 5,
	GeoDataNotLoaded = 6,
	VisualLocalizationFailed = 7,
	WaitingForAvailabilityCheck = 8,
	EARGeoTrackingStateReason_MAX = 9
};

// Object: Enum AugmentedReality.EARGeoTrackingAccuracy
enum class EARGeoTrackingAccuracy : uint8_t
{
	Undetermined = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	EARGeoTrackingAccuracy_MAX = 4
};

// Object: Enum AugmentedReality.EARWorldAlignment
enum class EARWorldAlignment : uint8_t
{
	Gravity = 0,
	GravityAndHeading = 1,
	Camera = 2,
	EARWorldAlignment_MAX = 3
};

// Object: Enum AugmentedReality.EARSessionType
enum class EARSessionType : uint8_t
{
	None = 0,
	Orientation = 1,
	World = 2,
	Face = 3,
	Image = 4,
	ObjectScanning = 5,
	PoseTracking = 6,
	GeoTracking = 7,
	EARSessionType_MAX = 8
};

// Object: Enum AugmentedReality.EARPlaneDetectionMode
enum class EARPlaneDetectionMode : uint8_t
{
	None = 0,
	HorizontalPlaneDetection = 1,
	VerticalPlaneDetection = 2,
	EARPlaneDetectionMode_MAX = 3
};

// Object: Enum AugmentedReality.EARLightEstimationMode
enum class EARLightEstimationMode : uint8_t
{
	None = 0,
	AmbientLightEstimate = 1,
	DirectionalLightEstimate = 2,
	EARLightEstimationMode_MAX = 3
};

// Object: Enum AugmentedReality.EARFrameSyncMode
enum class EARFrameSyncMode : uint8_t
{
	SyncTickWithCameraImage = 0,
	SyncTickWithoutCameraImage = 1,
	EARFrameSyncMode_MAX = 2
};

// Object: Enum AugmentedReality.EAREnvironmentCaptureProbeType
enum class EAREnvironmentCaptureProbeType : uint8_t
{
	None = 0,
	Manual = 1,
	Automatic = 2,
	EAREnvironmentCaptureProbeType_MAX = 3
};

// Object: Enum AugmentedReality.EARFaceTrackingUpdate
enum class EARFaceTrackingUpdate : uint8_t
{
	CurvesAndGeo = 0,
	CurvesOnly = 1,
	EARFaceTrackingUpdate_MAX = 2
};

// Object: Enum AugmentedReality.EARSessionTrackingFeature
enum class EARSessionTrackingFeature : uint8_t
{
	None = 0,
	PoseDetection2D = 1,
	PersonSegmentation = 2,
	PersonSegmentationWithDepth = 3,
	SceneDepth = 4,
	SmoothedSceneDepth = 5,
	EARSessionTrackingFeature_MAX = 6
};

// Object: Enum AugmentedReality.EARSceneReconstruction
enum class EARSceneReconstruction : uint8_t
{
	None = 0,
	MeshOnly = 1,
	MeshWithClassification = 2,
	EARSceneReconstruction_MAX = 3
};

// Object: Enum AugmentedReality.EARTextureType
enum class EARTextureType : uint8_t
{
	Unknown = 0,
	CameraImage = 1,
	CameraDepth = 2,
	EnvironmentCapture = 3,
	PersonSegmentationImage = 4,
	PersonSegmentationDepth = 5,
	SceneDepthMap = 6,
	SceneDepthConfidenceMap = 7,
	EARTextureType_MAX = 8
};

// Object: Enum AugmentedReality.EARDepthQuality
enum class EARDepthQuality : uint8_t
{
	Unkown = 0,
	Low = 1,
	High = 2,
	EARDepthQuality_MAX = 3
};

// Object: Enum AugmentedReality.EARDepthAccuracy
enum class EARDepthAccuracy : uint8_t
{
	Unkown = 0,
	Approximate = 1,
	Accurate = 2,
	EARDepthAccuracy_MAX = 3
};

// Object: Enum AugmentedReality.EARFaceTrackingDirection
enum class EARFaceTrackingDirection : uint8_t
{
	FaceRelative = 0,
	FaceMirrored = 1,
	EARFaceTrackingDirection_MAX = 2
};

// Object: Enum AugmentedReality.EARFaceBlendShape
enum class EARFaceBlendShape : uint8_t
{
	EyeBlinkLeft = 0,
	EyeLookDownLeft = 1,
	EyeLookInLeft = 2,
	EyeLookOutLeft = 3,
	EyeLookUpLeft = 4,
	EyeSquintLeft = 5,
	EyeWideLeft = 6,
	EyeBlinkRight = 7,
	EyeLookDownRight = 8,
	EyeLookInRight = 9,
	EyeLookOutRight = 10,
	EyeLookUpRight = 11,
	EyeSquintRight = 12,
	EyeWideRight = 13,
	JawForward = 14,
	JawLeft = 15,
	JawRight = 16,
	JawOpen = 17,
	MouthClose = 18,
	MouthFunnel = 19,
	MouthPucker = 20,
	MouthLeft = 21,
	MouthRight = 22,
	MouthSmileLeft = 23,
	MouthSmileRight = 24,
	MouthFrownLeft = 25,
	MouthFrownRight = 26,
	MouthDimpleLeft = 27,
	MouthDimpleRight = 28,
	MouthStretchLeft = 29,
	MouthStretchRight = 30,
	MouthRollLower = 31,
	MouthRollUpper = 32,
	MouthShrugLower = 33,
	MouthShrugUpper = 34,
	MouthPressLeft = 35,
	MouthPressRight = 36,
	MouthLowerDownLeft = 37,
	MouthLowerDownRight = 38,
	MouthUpperUpLeft = 39,
	MouthUpperUpRight = 40,
	BrowDownLeft = 41,
	BrowDownRight = 42,
	BrowInnerUp = 43,
	BrowOuterUpLeft = 44,
	BrowOuterUpRight = 45,
	CheekPuff = 46,
	CheekSquintLeft = 47,
	CheekSquintRight = 48,
	NoseSneerLeft = 49,
	NoseSneerRight = 50,
	TongueOut = 51,
	HeadYaw = 52,
	HeadPitch = 53,
	HeadRoll = 54,
	LeftEyeYaw = 55,
	LeftEyePitch = 56,
	LeftEyeRoll = 57,
	RightEyeYaw = 58,
	RightEyePitch = 59,
	RightEyeRoll = 60,
	MAX = 61
};

// Object: Enum AugmentedReality.EAREye
enum class EAREye : uint8_t
{
	LeftEye = 0,
	RightEye = 1,
	EAREye_MAX = 2
};

// Object: Enum AugmentedReality.EARCaptureType
enum class EARCaptureType : uint8_t
{
	Camera = 0,
	QRCode = 1,
	SpatialMapping = 2,
	SceneUnderstanding = 3,
	HandMesh = 4,
	EARCaptureType_MAX = 5
};

// Object: Enum AugmentedReality.EARLineTraceChannels
enum class EARLineTraceChannels : uint8_t
{
	None = 0,
	FeaturePoint = 1,
	GroundPlane = 2,
	PlaneUsingExtent = 4,
	PlaneUsingBoundaryPolygon = 8,
	EARLineTraceChannels_MAX = 9
};

// Object: Enum AugmentedReality.EARTrackingQuality
enum class EARTrackingQuality : uint8_t
{
	NotTracking = 0,
	OrientationOnly = 1,
	OrientationAndPosition = 2,
	EARTrackingQuality_MAX = 3
};

// Object: Enum AugmentedReality.EARTrackingQualityReason
enum class EARTrackingQualityReason : uint8_t
{
	None = 0,
	Initializing = 1,
	Relocalizing = 2,
	ExcessiveMotion = 3,
	InsufficientFeatures = 4,
	InsufficientLight = 5,
	BadState = 6,
	EARTrackingQualityReason_MAX = 7
};

// Object: Enum AugmentedReality.EARSessionStatus
enum class EARSessionStatus : uint8_t
{
	NotStarted = 0,
	Running = 1,
	NotSupported = 2,
	FatalError = 3,
	PermissionNotGranted = 4,
	UnsupportedConfiguration = 5,
	Other = 6,
	EARSessionStatus_MAX = 7
};

// Object: Enum AugmentedReality.EARWorldMappingState
enum class EARWorldMappingState : uint8_t
{
	NotAvailable = 0,
	StillMappingNotRelocalizable = 1,
	StillMappingRelocalizable = 2,
	Mapped = 3,
	EARWorldMappingState_MAX = 4
};

// Object: Enum AugmentedReality.EARPlaneOrientation
enum class EARPlaneOrientation : uint8_t
{
	Horizontal = 0,
	Vertical = 1,
	Diagonal = 2,
	EARPlaneOrientation_MAX = 3
};

// Object: Enum AugmentedReality.EARObjectClassification
enum class EARObjectClassification : uint8_t
{
	NotApplicable = 0,
	Unknown = 1,
	Wall = 2,
	Ceiling = 3,
	Floor = 4,
	Table = 5,
	Seat = 6,
	Face = 7,
	Image = 8,
	World = 9,
	SceneObject = 10,
	HandMesh = 11,
	Door = 12,
	Window = 13,
	EARObjectClassification_MAX = 14
};

// Object: Enum AugmentedReality.EARSpatialMeshUsageFlags
enum class EARSpatialMeshUsageFlags : uint8_t
{
	NotApplicable = 0,
	Visible = 1,
	Collision = 2,
	EARSpatialMeshUsageFlags_MAX = 3
};

// Object: Enum AugmentedReality.EARJointTransformSpace
enum class EARJointTransformSpace : uint8_t
{
	Model = 0,
	ParentJoint = 1,
	EARJointTransformSpace_MAX = 2
};

// Object: Enum AugmentedReality.EARAltitudeSource
enum class EARAltitudeSource : uint8_t
{
	Precise = 0,
	Coarse = 1,
	UserDefined = 2,
	Unknown = 3,
	EARAltitudeSource_MAX = 4
};

// Object: Enum AugmentedReality.EARCandidateImageOrientation
enum class EARCandidateImageOrientation : uint8_t
{
	Landscape = 0,
	Portrait = 1,
	EARCandidateImageOrientation_MAX = 2
};

// Package: AppleImageUtils
// Enums: 2

// Object: Enum AppleImageUtils.ETextureRotationDirection
enum class ETextureRotationDirection : uint8_t
{
	None = 0,
	Left = 1,
	Right = 2,
	Down = 3,
	LeftMirrored = 4,
	RightMirrored = 5,
	DownMirrored = 6,
	UpMirrored = 7,
	ETextureRotationDirection_MAX = 8
};

// Object: Enum AppleImageUtils.EAppleTextureType
enum class EAppleTextureType : uint8_t
{
	Unknown = 0,
	Image = 1,
	PixelBuffer = 2,
	Surface = 3,
	MetalTexture = 4,
	EAppleTextureType_MAX = 5
};

// Package: LiveLinkInterface
// Enums: 3

// Object: Enum LiveLinkInterface.ELiveLinkSubjectState
enum class ELiveLinkSubjectState : uint8_t
{
	Connected = 0,
	Unresponsive = 1,
	Disconnected = 2,
	InvalidOrDisabled = 3,
	Paused = 4,
	Unknown = 5,
	ELiveLinkSubjectState_MAX = 6
};

// Object: Enum LiveLinkInterface.ELiveLinkCameraProjectionMode
enum class ELiveLinkCameraProjectionMode : uint8_t
{
	Perspective = 0,
	Orthographic = 1,
	ELiveLinkCameraProjectionMode_MAX = 2
};

// Object: Enum LiveLinkInterface.ELiveLinkSourceMode
enum class ELiveLinkSourceMode : uint8_t
{
	Latest = 0,
	EngineTime = 1,
	Timecode = 2,
	ELiveLinkSourceMode_MAX = 3
};

// Package: ARUtilities
// Enums: 1

// Object: Enum ARUtilities.EARLiveLinkSourceType
enum class EARLiveLinkSourceType : uint8_t
{
	None = 0,
	ARKitPoseTracking = 1,
	EARLiveLinkSourceType_MAX = 2
};

// Package: AppleARKit
// Enums: 3

// Object: Enum AppleARKit.EARFaceTrackingFileWriterType
enum class EARFaceTrackingFileWriterType : uint8_t
{
	None = 0,
	CSV = 1,
	JSON = 2,
	EARFaceTrackingFileWriterType_MAX = 3
};

// Object: Enum AppleARKit.ELivelinkTrackingType
enum class ELivelinkTrackingType : uint8_t
{
	FaceTracking = 0,
	PoseTracking = 1,
	ELivelinkTrackingType_MAX = 2
};

// Object: Enum AppleARKit.EARKitTextureType
enum class EARKitTextureType : uint8_t
{
	TextureY = 0,
	TextureCbCr = 1,
	EARKitTextureType_MAX = 2
};

// Package: LiveLink
// Enums: 3

// Object: Enum LiveLink.EBoneTransformResolution
enum class EBoneTransformResolution : uint8_t
{
	KeepParent = 0,
	KeepChild = 1,
	Combine = 2,
	EBoneTransformResolution_MAX = 3
};

// Object: Enum LiveLink.ELiveLinkTimecodeProviderEvaluationType
enum class ELiveLinkTimecodeProviderEvaluationType : uint8_t
{
	Lerp = 0,
	Nearest = 1,
	Latest = 2,
	ELiveLinkTimecodeProviderEvaluationType_MAX = 3
};

// Object: Enum LiveLink.ELiveLinkAxis
enum class ELiveLinkAxis : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	XNeg = 3,
	YNeg = 4,
	ZNeg = 5,
	ELiveLinkAxis_MAX = 6
};

// Package: Paper2D
// Enums: 7

// Object: Enum Paper2D.ESpriteCollisionMode
enum class ESpriteCollisionMode : uint8_t
{
	None = 0,
	Use2DPhysics = 1,
	Use3DPhysics = 2,
	ESpriteCollisionMode_MAX = 3
};

// Object: Enum Paper2D.ESpriteShapeType
enum class ESpriteShapeType : uint8_t
{
	Box = 0,
	Circle = 1,
	Polygon = 2,
	ESpriteShapeType_MAX = 3
};

// Object: Enum Paper2D.ESpritePolygonMode
enum class ESpritePolygonMode : uint8_t
{
	SourceBoundingBox = 0,
	TightBoundingBox = 1,
	ShrinkWrapped = 2,
	FullyCustom = 3,
	Diced = 4,
	ESpritePolygonMode_MAX = 5
};

// Object: Enum Paper2D.ESpritePivotMode
enum class ESpritePivotMode : uint8_t
{
	Top_Left = 0,
	Top_Center = 1,
	Top_Right = 2,
	Center_Left = 3,
	Center_Center = 4,
	Center_Right = 5,
	Bottom_Left = 6,
	Bottom_Center = 7,
	Bottom_Right = 8,
	Custom = 9,
	ESpritePivotMode_MAX = 10
};

// Object: Enum Paper2D.EFlipbookCollisionMode
enum class EFlipbookCollisionMode : uint8_t
{
	NoCollision = 0,
	FirstFrameCollision = 1,
	EachFrameCollision = 2,
	EFlipbookCollisionMode_MAX = 3
};

// Object: Enum Paper2D.EPaperSpriteAtlasPadding
enum class EPaperSpriteAtlasPadding : uint8_t
{
	DilateBorder = 0,
	PadWithZero = 1,
	EPaperSpriteAtlasPadding_MAX = 2
};

// Object: Enum Paper2D.ETileMapProjectionMode
enum class ETileMapProjectionMode : uint8_t
{
	Orthogonal = 0,
	IsometricDiamond = 1,
	IsometricStaggered = 2,
	HexagonalStaggered = 3,
	ETileMapProjectionMode_MAX = 4
};

// Package: ACLPlugin
// Enums: 5

// Object: Enum ACLPlugin.ACLRotationFormat
enum class EACLRotationFormat : uint8_t
{
	ACLRF_Quat = 0,
	ACLRF_QuatDropW = 1,
	ACLRF_QuatDropW_Variable = 2,
	ACLRF_MAX = 3
};

// Object: Enum ACLPlugin.ACLVectorFormat
enum class EACLVectorFormat : uint8_t
{
	ACLVF_Vector3 = 0,
	ACLVF_Vector3_Variable = 1,
	ACLVF_Vector3_MAX = 2
};

// Object: Enum ACLPlugin.ACLCompressionLevel
enum class EACLCompressionLevel : uint8_t
{
	ACLCL_Lowest = 0,
	ACLCL_Low = 1,
	ACLCL_Medium = 2,
	ACLCL_High = 3,
	ACLCL_Highest = 4,
	ACLCL_Automatic = 5,
	ACLCL_MAX = 6
};

// Object: Enum ACLPlugin.ACLVisualFidelity
enum class EACLVisualFidelity : uint8_t
{
	Highest = 0,
	Medium = 1,
	Lowest = 2,
	ACLVisualFidelity_MAX = 3
};

// Object: Enum ACLPlugin.ACLVisualFidelityChangeResult
enum class EACLVisualFidelityChangeResult : uint8_t
{
	Dispatched = 0,
	Completed = 1,
	Failed = 2,
	ACLVisualFidelityChangeResult_MAX = 3
};

// Package: MetaHumanSDKRuntime
// Enums: 5

// Object: Enum MetaHumanSDKRuntime.EMetaHumanBodyType
enum class EMetaHumanBodyType : uint8_t
{
	f_med_nrw = 0,
	f_med_ovw = 1,
	f_med_unw = 2,
	f_srt_nrw = 3,
	f_srt_ovw = 4,
	f_srt_unw = 5,
	f_tal_nrw = 6,
	f_tal_ovw = 7,
	f_tal_unw = 8,
	m_med_nrw = 9,
	m_med_ovw = 10,
	m_med_unw = 11,
	m_srt_nrw = 12,
	m_srt_ovw = 13,
	m_srt_unw = 14,
	m_tal_nrw = 15,
	m_tal_ovw = 16,
	m_tal_unw = 17,
	BlendableBody = 18,
	Count = 19,
	EMetaHumanBodyType_MAX = 20
};

// Object: Enum MetaHumanSDKRuntime.EMetaHumanBodyBodyPartIndex
enum class EMetaHumanBodyBodyPartIndex : uint8_t
{
	Body = 0,
	Face = 1,
	Torso = 2,
	Legs = 3,
	Feet = 4,
	Count = 5,
	EMetaHumanBodyBodyPartIndex_MAX = 6
};

// Object: Enum MetaHumanSDKRuntime.EFaceTextureType
enum class EFaceTextureType : uint8_t
{
	Basecolor = 0,
	Basecolor_Animated_CM1 = 1,
	Basecolor_Animated_CM2 = 2,
	Basecolor_Animated_CM3 = 3,
	Normal = 4,
	Normal_Animated_WM1 = 5,
	Normal_Animated_WM2 = 6,
	Normal_Animated_WM3 = 7,
	Cavity = 8,
	Count = 9,
	EFaceTextureType_MAX = 10
};

// Object: Enum MetaHumanSDKRuntime.EBodyTextureType
enum class EBodyTextureType : uint8_t
{
	Body_Basecolor = 0,
	Body_Normal = 1,
	Body_Cavity = 2,
	Body_Underwear_Basecolor = 3,
	Body_Underwear_Normal = 4,
	Body_Underwear_Mask = 5,
	Chest_Basecolor = 6,
	Chest_Normal = 7,
	Chest_Cavity = 8,
	Chest_Underwear_Basecolor = 9,
	Chest_Underwear_Normal = 10,
	Count = 11,
	EBodyTextureType_MAX = 12
};

// Object: Enum MetaHumanSDKRuntime.EMetaHumanQualityLevel
enum class EMetaHumanQualityLevel : uint8_t
{
	Low = 0,
	Medium = 1,
	High = 2,
	Cinematic = 3,
	Count = 4,
	EMetaHumanQualityLevel_MAX = 5
};

// Package: HairStrandsCore
// Enums: 27

// Object: Enum HairStrandsCore.EGroomBindingAssetBuildResult
enum class EGroomBindingAssetBuildResult : uint8_t
{
	Succeeded = 0,
	Failed = 1,
	EGroomBindingAssetBuildResult_MAX = 2
};

// Object: Enum HairStrandsCore.EGroomCacheImportType
enum class EGroomCacheImportType : uint8_t
{
	None = 0,
	Strands = 1,
	Guides = 2,
	All = 3,
	EGroomCacheImportType_MAX = 4
};

// Object: Enum HairStrandsCore.EHairAtlasTextureType
enum class EHairAtlasTextureType : uint8_t
{
	Depth = 0,
	Tangent = 1,
	Attribute = 2,
	Coverage = 3,
	AuxilaryData = 4,
	Material = 5,
	EHairAtlasTextureType_MAX = 6
};

// Object: Enum HairStrandsCore.EHairCardsSourceType
enum class EHairCardsSourceType : uint8_t
{
	Procedural = 0,
	Imported = 1,
	EHairCardsSourceType_MAX = 2
};

// Object: Enum HairStrandsCore.EHairCardsGuideType
enum class EHairCardsGuideType : uint8_t
{
	Generated = 0,
	GuideBased = 1,
	EHairCardsGuideType_MAX = 2
};

// Object: Enum HairStrandsCore.EHairTextureLayout
enum class EHairTextureLayout : uint8_t
{
	Layout0 = 0,
	Layout1 = 1,
	Layout2 = 2,
	Layout3 = 3,
	EHairTextureLayout_MAX = 4
};

// Object: Enum HairStrandsCore.EHairInterpolationQuality
enum class EHairInterpolationQuality : uint8_t
{
	Low = 0,
	Medium = 1,
	High = 2,
	Unknown = 3,
	EHairInterpolationQuality_MAX = 4
};

// Object: Enum HairStrandsCore.EHairInterpolationWeight
enum class EHairInterpolationWeight : uint8_t
{
	Parametric = 0,
	Root = 1,
	Index = 2,
	Distance = 3,
	Unknown = 4,
	EHairInterpolationWeight_MAX = 5
};

// Object: Enum HairStrandsCore.EGroomGeometryType
enum class EGroomGeometryType : uint8_t
{
	Strands = 0,
	Cards = 1,
	Meshes = 2,
	EGroomGeometryType_MAX = 3
};

// Object: Enum HairStrandsCore.EGroomBindingType
enum class EGroomBindingType : uint8_t
{
	NoneBinding = 0,
	Rigid = 1,
	Skinning = 2,
	EGroomBindingType_MAX = 3
};

// Object: Enum HairStrandsCore.EGroomOverrideType
enum class EGroomOverrideType : uint8_t
{
	Auto = 0,
	Enable = 1,
	Disable = 2,
	EGroomOverrideType_MAX = 3
};

// Object: Enum HairStrandsCore.EGroomGuideType
enum class EGroomGuideType : uint8_t
{
	Imported = 0,
	Generated = 1,
	Rigged = 2,
	EGroomGuideType_MAX = 3
};

// Object: Enum HairStrandsCore.EGroomLODMode
enum class EGroomLODMode : uint8_t
{
	Default = 0,
	Manual = 1,
	Auto = 2,
	EGroomLODMode_MAX = 3
};

// Object: Enum HairStrandsCore.EGroomNiagaraSolvers
enum class EGroomNiagaraSolvers : uint8_t
{
	None = 0,
	CosseratRods = 2,
	AngularSprings = 4,
	CustomSolver = 8,
	EGroomNiagaraSolvers_MAX = 9
};

// Object: Enum HairStrandsCore.EGroomStrandsSize
enum class EGroomStrandsSize : uint8_t
{
	None = 0,
	Size2 = 2,
	Size4 = 4,
	Size8 = 8,
	Size16 = 16,
	Size32 = 32,
	EGroomStrandsSize_MAX = 33
};

// Object: Enum HairStrandsCore.EGroomInterpolationType
enum class EGroomInterpolationType : uint8_t
{
	None = 0,
	RigidTransform = 2,
	OffsetTransform = 4,
	SmoothTransform = 8,
	EGroomInterpolationType_MAX = 9
};

// Object: Enum HairStrandsCore.EGroomBindingMeshType
enum class EGroomBindingMeshType : uint8_t
{
	SkeletalMesh = 0,
	GeometryCache = 1,
	EGroomBindingMeshType_MAX = 2
};

// Object: Enum HairStrandsCore.EGroomBindingAsyncProperties
enum class EGroomBindingAsyncProperties : uint8_t
{
	None = 0,
	GroomBindingType = 1,
	Groom = 2,
	SourceSkeletalMesh = 3,
	SourceMeshRequestedLOD = 4,
	SourceMeshUsedLOD = 5,
	TargetSkeletalMesh = 6,
	TargetMeshRequestedMinLOD = 7,
	TargetMeshUsedMinLOD = 8,
	SourceGeometryCache = 9,
	TargetGeometryCache = 10,
	NumInterpolationPoints = 11,
	MatchingSection = 12,
	GroupInfos = 13,
	HairGroupResources = 14,
	HairGroupPlatformData = 15,
	TargetBindingAttribute = 16,
	All = 17,
	EGroomBindingAsyncProperties_MAX = 18
};

// Object: Enum HairStrandsCore.EGroomCacheAttributes
enum class EGroomCacheAttributes : uint8_t
{
	None = 0,
	Position = 1,
	Width = 2,
	Color = 3,
	PositionWidth = 4,
	PositionColor = 5,
	WidthColor = 6,
	PositionWidthColor = 7,
	EGroomCacheAttributes_MAX = 8
};

// Object: Enum HairStrandsCore.EGroomCacheType
enum class EGroomCacheType : uint8_t
{
	None = 0,
	Strands = 1,
	Guides = 2,
	EGroomCacheType_MAX = 3
};

// Object: Enum HairStrandsCore.EGroomBasisType
enum class EGroomBasisType : uint8_t
{
	NoBasis = 0,
	BezierBasis = 1,
	BsplineBasis = 2,
	CatmullromBasis = 3,
	HermiteBasis = 4,
	PowerBasis = 5,
	EGroomBasisType_MAX = 6
};

// Object: Enum HairStrandsCore.EGroomCurveType
enum class EGroomCurveType : uint8_t
{
	Cubic = 0,
	Linear = 1,
	VariableOrder = 2,
	EGroomCurveType_MAX = 3
};

// Object: Enum HairStrandsCore.EFollicleMaskChannel
enum class EFollicleMaskChannel : uint8_t
{
	R = 0,
	G = 1,
	B = 2,
	A = 3,
	EFollicleMaskChannel_MAX = 4
};

// Object: Enum HairStrandsCore.EStrandsTexturesTraceType
enum class EStrandsTexturesTraceType : uint8_t
{
	TraceInside = 0,
	TraceOuside = 1,
	TraceBidirectional = 2,
	EStrandsTexturesTraceType_MAX = 3
};

// Object: Enum HairStrandsCore.EStrandsTexturesMeshType
enum class EStrandsTexturesMeshType : uint8_t
{
	Static = 0,
	Skeletal = 1,
	EStrandsTexturesMeshType_MAX = 2
};

// Object: Enum HairStrandsCore.EGroomInterpolationQuality
enum class EGroomInterpolationQuality : uint8_t
{
	Low = 0,
	Medium = 1,
	High = 2,
	Unknown = 3,
	EGroomInterpolationQuality_MAX = 4
};

// Object: Enum HairStrandsCore.EGroomInterpolationWeight
enum class EGroomInterpolationWeight : uint8_t
{
	Parametric = 0,
	Root = 1,
	Index = 2,
	Unknown = 3,
	EGroomInterpolationWeight_MAX = 4
};

// Package: ComputeFramework
// Enums: 6

// Object: Enum ComputeFramework.EComputeKernelFlags
enum class EComputeKernelFlags : uint8_t
{
	IsDefaultKernel = 1,
	IsolatedMemoryWrites = 2,
	EComputeKernelFlags_MAX = 3
};

// Object: Enum ComputeFramework.EShaderFundamentalType
enum class EShaderFundamentalType : uint16_t
{
	Bool = 0,
	Int = 1,
	Uint = 2,
	Float = 3,
	Struct = 4,
	None = 255,
	EShaderFundamentalType_MAX = 256
};

// Object: Enum ComputeFramework.EShaderFundamentalDimensionType
enum class EShaderFundamentalDimensionType : uint8_t
{
	Scalar = 0,
	Vector = 1,
	Matrix = 2,
	EShaderFundamentalDimensionType_MAX = 3
};

// Object: Enum ComputeFramework.EShaderParamBindingType
enum class EShaderParamBindingType : uint8_t
{
	None = 0,
	ConstantParameter = 1,
	ReadOnlyResource = 2,
	ReadWriteResource = 3,
	EShaderParamBindingType_MAX = 4
};

// Object: Enum ComputeFramework.EShaderResourceType
enum class EShaderResourceType : uint8_t
{
	None = 0,
	Texture1D = 1,
	Texture2D = 2,
	Texture3D = 3,
	TextureCube = 4,
	Buffer = 5,
	StructuredBuffer = 6,
	ByteAddressBuffer = 7,
	EShaderResourceType_MAX = 8
};

// Object: Enum ComputeFramework.EShaderParamModifier
enum class EShaderParamModifier : uint8_t
{
	None = 0,
	In = 1,
	Out = 2,
	InOut = 3,
	EShaderParamModifier_MAX = 4
};

// Package: OptimusSettings
// Enums: 1

// Object: Enum OptimusSettings.EOptimusDefaultDeformerMode
enum class EOptimusDefaultDeformerMode : uint8_t
{
	Never = 0,
	OptIn = 1,
	Always = 2,
	EOptimusDefaultDeformerMode_MAX = 3
};

// Package: OptimusCore
// Enums: 17

// Object: Enum OptimusCore.EOptimusPinMutability
enum class EOptimusPinMutability : uint8_t
{
	Undefined = 0,
	Immutable = 1,
	Mutable = 2,
	EOptimusPinMutability_MAX = 3
};

// Object: Enum OptimusCore.EOptimusConstantType
enum class EOptimusConstantType : uint8_t
{
	Input = 0,
	Output = 1,
	EOptimusConstantType_MAX = 2
};

// Object: Enum OptimusCore.EOptimusDeformerExecutionPhase
enum class EOptimusDeformerExecutionPhase : uint8_t
{
	AfterDefaultDeformer = 0,
	OverrideDefaultDeformer = 1,
	BeforeDefaultDeformer = 2,
	EOptimusDeformerExecutionPhase_MAX = 3
};

// Object: Enum OptimusCore.EOptimusDiagnosticLevel
enum class EOptimusDiagnosticLevel : uint8_t
{
	None = 0,
	Info = 1,
	Warning = 2,
	Error = 3,
	EOptimusDiagnosticLevel_MAX = 4
};

// Object: Enum OptimusCore.EOptimusValueUsage
enum class EOptimusValueUsage : uint8_t
{
	None = 0,
	CPU = 1,
	GPU = 2,
	EOptimusValueUsage_MAX = 3
};

// Object: Enum OptimusCore.EOptimusValueType
enum class EOptimusValueType : uint8_t
{
	Invalid = 0,
	Constant = 1,
	Variable = 2,
	EOptimusValueType_MAX = 3
};

// Object: Enum OptimusCore.EOptimusBufferWriteType
enum class EOptimusBufferWriteType : uint8_t
{
	Write = 0,
	WriteAtomicAdd = 1,
	WriteAtomicMin = 2,
	WriteAtomicMax = 3,
	Count = 4,
	EOptimusBufferWriteType_MAX = 5
};

// Object: Enum OptimusCore.EOptimusSkinnedMeshExecDomain
enum class EOptimusSkinnedMeshExecDomain : uint8_t
{
	None = 0,
	Vertex = 1,
	Triangle = 2,
	EOptimusSkinnedMeshExecDomain_MAX = 3
};

// Object: Enum OptimusCore.EOptimusTerminalType
enum class EOptimusTerminalType : uint8_t
{
	Unknown = 0,
	Entry = 1,
	Return = 2,
	EOptimusTerminalType_MAX = 3
};

// Object: Enum OptimusCore.EOptimusDataDomainType
enum class EOptimusDataDomainType : uint8_t
{
	Dimensional = 0,
	Expression = 1,
	EOptimusDataDomainType_MAX = 2
};

// Object: Enum OptimusCore.EOptimusDataTypeUsageFlags
enum class EOptimusDataTypeUsageFlags : uint8_t
{
	None = 0,
	Resource = 1,
	Variable = 2,
	AnimAttributes = 4,
	DataInterfaceOutput = 8,
	PinType = 16,
	PerBoneAnimAttribute = 32,
	Property = 64,
	EOptimusDataTypeUsageFlags_MAX = 65
};

// Object: Enum OptimusCore.EOptimusDataTypeFlags
enum class EOptimusDataTypeFlags : uint8_t
{
	None = 0,
	IsStructType = 1,
	ShowElements = 2,
	EOptimusDataTypeFlags_MAX = 3
};

// Object: Enum OptimusCore.EOptimusDeformerStatus
enum class EOptimusDeformerStatus : uint8_t
{
	Compiled = 0,
	CompiledWithWarnings = 1,
	Modified = 2,
	HasErrors = 3,
	EOptimusDeformerStatus_MAX = 4
};

// Object: Enum OptimusCore.EOptimusExecutionDomainType
enum class EOptimusExecutionDomainType : uint8_t
{
	DomainName = 0,
	Expression = 1,
	EOptimusExecutionDomainType_MAX = 2
};

// Object: Enum OptimusCore.EOptimusNodeGraphType
enum class EOptimusNodeGraphType : uint8_t
{
	Setup = 0,
	Update = 1,
	ExternalTrigger = 2,
	Function = 3,
	SubGraph = 4,
	Transient = 5,
	EOptimusNodeGraphType_MAX = 6
};

// Object: Enum OptimusCore.EOptimusNodePinStorageType
enum class EOptimusNodePinStorageType : uint8_t
{
	Value = 0,
	Resource = 1,
	EOptimusNodePinStorageType_MAX = 2
};

// Object: Enum OptimusCore.EOptimusNodePinDirection
enum class EOptimusNodePinDirection : uint8_t
{
	Unknown = 0,
	Input = 1,
	Output = 2,
	EOptimusNodePinDirection_MAX = 3
};

// Package: RigLogicModule
// Enums: 18

// Object: Enum RigLogicModule.EArchetype
enum class EArchetype : uint8_t
{
	Asian = 0,
	Black = 1,
	Caucasian = 2,
	Hispanic = 3,
	Alien = 4,
	Other = 5,
	EArchetype_MAX = 6
};

// Object: Enum RigLogicModule.EGender
enum class EGender : uint8_t
{
	Male = 0,
	Female = 1,
	Other = 2,
	EGender_MAX = 3
};

// Object: Enum RigLogicModule.ETranslationUnit
enum class ETranslationUnit : uint8_t
{
	CM = 0,
	M = 1,
	ETranslationUnit_MAX = 2
};

// Object: Enum RigLogicModule.ERotationUnit
enum class ERotationUnit : uint8_t
{
	Degrees = 0,
	Radians = 1,
	ERotationUnit_MAX = 2
};

// Object: Enum RigLogicModule.EDirection
enum class EDirection : uint8_t
{
	Left = 0,
	Right = 1,
	Up = 2,
	Down = 3,
	Front = 4,
	Back = 5,
	EDirection_MAX = 6
};

// Object: Enum RigLogicModule.ETranslationRepresentation
enum class ETranslationRepresentation : uint8_t
{
	Vector = 0,
	ETranslationRepresentation_MAX = 1
};

// Object: Enum RigLogicModule.ERotationRepresentation
enum class ERotationRepresentation : uint8_t
{
	EulerAngles = 0,
	Quaternion = 1,
	ERotationRepresentation_MAX = 2
};

// Object: Enum RigLogicModule.EScaleRepresentation
enum class EScaleRepresentation : uint8_t
{
	Vector = 0,
	EScaleRepresentation_MAX = 1
};

// Object: Enum RigLogicModule.EAutomaticRadius
enum class EAutomaticRadius : uint8_t
{
	On = 0,
	Off = 1,
	EAutomaticRadius_MAX = 2
};

// Object: Enum RigLogicModule.ETwistAxis
enum class ETwistAxis : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	ETwistAxis_MAX = 3
};

// Object: Enum RigLogicModule.EDNADataLayer
enum class EDNADataLayer : uint8_t
{
	None = 0,
	Descriptor = 1,
	Definition = 3,
	Behavior = 7,
	Geometry = 11,
	GeometryWithoutBlendShapes = 19,
	MachineLearnedBehavior = 35,
	RBFBehavior = 71,
	All = 111,
	EDNADataLayer_MAX = 112
};

// Object: Enum RigLogicModule.EActivationFunction
enum class EActivationFunction : uint8_t
{
	Linear = 0,
	ReLU = 1,
	LeakyReLU = 2,
	Tanh = 3,
	Sigmoid = 4,
	EActivationFunction_MAX = 5
};

// Object: Enum RigLogicModule.ERigLogicCalculationType
enum class ERigLogicCalculationType : uint8_t
{
	Scalar = 0,
	SSE = 1,
	AVX = 2,
	NEON = 3,
	AnyVector = 4,
	ERigLogicCalculationType_MAX = 5
};

// Object: Enum RigLogicModule.ERigLogicTranslationType
enum class ERigLogicTranslationType : uint8_t
{
	None = 0,
	Vector = 3,
	ERigLogicTranslationType_MAX = 4
};

// Object: Enum RigLogicModule.ERigLogicRotationType
enum class ERigLogicRotationType : uint8_t
{
	None = 0,
	EulerAngles = 3,
	Quaternions = 4,
	ERigLogicRotationType_MAX = 5
};

// Object: Enum RigLogicModule.ERigLogicRotationOrder
enum class ERigLogicRotationOrder : uint8_t
{
	XYZ = 0,
	XZY = 1,
	YXZ = 2,
	YZX = 3,
	ZXY = 4,
	ZYX = 5,
	ERigLogicRotationOrder_MAX = 6
};

// Object: Enum RigLogicModule.ERigLogicScaleType
enum class ERigLogicScaleType : uint8_t
{
	None = 0,
	Vector = 3,
	ERigLogicScaleType_MAX = 4
};

// Object: Enum RigLogicModule.ELodUpdateOption
enum class ELodUpdateOption : uint8_t
{
	LOD0Only = 0,
	LOD1AndHigher = 1,
	All = 2,
	ELodUpdateOption_MAX = 3
};

// Package: CameraCalibrationCore
// Enums: 6

// Object: Enum CameraCalibrationCore.ECalibratedMapPixelOrigin
enum class ECalibratedMapPixelOrigin : uint8_t
{
	TopLeft = 0,
	BottomLeft = 1,
	MAX = 2
};

// Object: Enum CameraCalibrationCore.ECalibratedMapChannels
enum class ECalibratedMapChannels : uint8_t
{
	RG = 0,
	BA = 1,
	None = 2,
	MAX = 3
};

// Object: Enum CameraCalibrationCore.ECalibrationPointVisualization
enum class ECalibrationPointVisualization : uint8_t
{
	CalibrationPointVisualizationCube = 0,
	CalibrationPointVisualizationPyramid = 1,
	ECalibrationPointVisualization_MAX = 2
};

// Object: Enum CameraCalibrationCore.ELensDisplayUnit
enum class ELensDisplayUnit : uint8_t
{
	Millimeters = 0,
	Pixels = 1,
	Normalized = 2,
	ELensDisplayUnit_MAX = 3
};

// Object: Enum CameraCalibrationCore.ELensDataMode
enum class ELensDataMode : uint8_t
{
	Parameters = 0,
	STMap = 1,
	ELensDataMode_MAX = 2
};

// Object: Enum CameraCalibrationCore.ELensDataCategory
enum class ELensDataCategory : uint8_t
{
	Focus = 0,
	Iris = 1,
	Zoom = 2,
	Distortion = 3,
	ImageCenter = 4,
	STMap = 5,
	NodalOffset = 6,
	ELensDataCategory_MAX = 7
};

// Package: TemplateSequence
// Enums: 1

// Object: Enum TemplateSequence.ETemplateSectionPropertyScaleType
enum class ETemplateSectionPropertyScaleType : uint8_t
{
	FloatProperty = 0,
	TransformPropertyLocationOnly = 1,
	TransformPropertyRotationOnly = 2,
	ETemplateSectionPropertyScaleType_MAX = 3
};

// Package: GameplayCameras
// Enums: 23

// Object: Enum GameplayCameras.EBuiltInDoubleCameraVariable
enum class EBuiltInDoubleCameraVariable : uint8_t
{
	None = 0,
	Yaw = 1,
	Pitch = 2,
	Roll = 3,
	Zoom = 4,
	EBuiltInDoubleCameraVariable_MAX = 5
};

// Object: Enum GameplayCameras.EBuiltInVector2dCameraVariable
enum class EBuiltInVector2dCameraVariable : uint8_t
{
	None = 0,
	YawPitch = 1,
	EBuiltInVector2dCameraVariable_MAX = 2
};

// Object: Enum GameplayCameras.EBuiltInRotator3dCameraVariable
enum class EBuiltInRotator3dCameraVariable : uint8_t
{
	None = 0,
	ControlRotation = 1,
	EBuiltInRotator3dCameraVariable_MAX = 2
};

// Object: Enum GameplayCameras.ECameraTargetShape
enum class ECameraTargetShape : uint8_t
{
	Point = 0,
	AutomaticBounds = 1,
	ManualBounds = 2,
	ECameraTargetShape_MAX = 3
};

// Object: Enum GameplayCameras.ECameraBuildStatus
enum class ECameraBuildStatus : uint8_t
{
	Clean = 0,
	CleanWithWarnings = 1,
	WithErrors = 2,
	Dirty = 3,
	ECameraBuildStatus_MAX = 4
};

// Object: Enum GameplayCameras.ECameraContextDataType
enum class ECameraContextDataType : uint8_t
{
	Name = 0,
	String = 1,
	Enum = 2,
	Struct = 3,
	Object = 4,
	Class = 5,
	Count = 6,
	ECameraContextDataType_MAX = 7
};

// Object: Enum GameplayCameras.ECameraContextDataContainerType
enum class ECameraContextDataContainerType : uint8_t
{
	None = 0,
	Array = 1,
	ECameraContextDataContainerType_MAX = 2
};

// Object: Enum GameplayCameras.ECameraEvaluationDataCondition
enum class ECameraEvaluationDataCondition : uint8_t
{
	ActiveCameraRig = 0,
	ECameraEvaluationDataCondition_MAX = 1
};

// Object: Enum GameplayCameras.ECameraNodeOriginPosition
enum class ECameraNodeOriginPosition : uint8_t
{
	CameraPose = 0,
	ActiveContext = 1,
	OwningContext = 2,
	Pivot = 3,
	Pawn = 4,
	ECameraNodeOriginPosition_MAX = 5
};

// Object: Enum GameplayCameras.ECameraNodeSpace
enum class ECameraNodeSpace : uint8_t
{
	CameraPose = 0,
	ActiveContext = 1,
	OwningContext = 2,
	Pivot = 3,
	Pawn = 4,
	World = 5,
	ECameraNodeSpace_MAX = 6
};

// Object: Enum GameplayCameras.ECameraObjectInterfaceParameterType
enum class ECameraObjectInterfaceParameterType : uint8_t
{
	Blendable = 0,
	Data = 1,
	ECameraObjectInterfaceParameterType_MAX = 2
};

// Object: Enum GameplayCameras.ECameraRigLayer
enum class ECameraRigLayer : uint8_t
{
	None = 0,
	Base = 1,
	Main = 2,
	Global = 3,
	Visual = 4,
	ECameraRigLayer_MAX = 5
};

// Object: Enum GameplayCameras.ECameraVariableSetterBlendType
enum class ECameraVariableSetterBlendType : uint8_t
{
	None = 0,
	Linear = 1,
	SmoothStep = 2,
	SmootherStep = 3,
	ECameraVariableSetterBlendType_MAX = 4
};

// Object: Enum GameplayCameras.ECameraVariableType
enum class ECameraVariableType : uint8_t
{
	Boolean = 0,
	Integer32 = 1,
	Float = 2,
	Double = 3,
	Vector2f = 4,
	Vector2d = 5,
	Vector3f = 6,
	Vector3d = 7,
	Vector4f = 8,
	Vector4d = 9,
	Rotator3f = 10,
	Rotator3d = 11,
	Transform3f = 12,
	Transform3d = 13,
	BlendableStruct = 14,
	ECameraVariableType_MAX = 15
};

// Object: Enum GameplayCameras.EGameplayCamerasViewRotationMode
enum class EGameplayCamerasViewRotationMode : uint8_t
{
	None = 0,
	PreviewUpdate = 1,
	EGameplayCamerasViewRotationMode_MAX = 2
};

// Object: Enum GameplayCameras.ECameraBlendStackType
enum class ECameraBlendStackType : uint8_t
{
	IsolatedTransient = 0,
	AdditivePersistent = 1,
	ECameraBlendStackType_MAX = 2
};

// Object: Enum GameplayCameras.ECameraRigInitialOrientation
enum class ECameraRigInitialOrientation : uint8_t
{
	None = 0,
	ContextYawPitch = 1,
	PreviousYawPitch = 2,
	PreviousAbsoluteTarget = 3,
	PreviousRelativeTarget = 4,
	ECameraRigInitialOrientation_MAX = 5
};

// Object: Enum GameplayCameras.EGameplayCameraComponentActivationMode
enum class EGameplayCameraComponentActivationMode : uint8_t
{
	Push = 0,
	PushAndInsert = 1,
	InsertOrPush = 2,
	EGameplayCameraComponentActivationMode_MAX = 3
};

// Object: Enum GameplayCameras.ESmoothCameraBlendType
enum class ESmoothCameraBlendType : uint8_t
{
	SmoothStep = 0,
	SmootherStep = 1,
	ESmoothCameraBlendType_MAX = 2
};

// Object: Enum GameplayCameras.ECollisionSafePosition
enum class ECollisionSafePosition : uint8_t
{
	ActiveContext = 0,
	OwningContext = 1,
	Pivot = 2,
	Pawn = 3,
	ECollisionSafePosition_MAX = 4
};

// Object: Enum GameplayCameras.ECollisionSafePositionOffsetSpace
enum class ECollisionSafePositionOffsetSpace : uint8_t
{
	ActiveContext = 0,
	OwningContext = 1,
	Pivot = 2,
	CameraPose = 3,
	Pawn = 4,
	ECollisionSafePositionOffsetSpace_MAX = 5
};

// Object: Enum GameplayCameras.ECameraAutoRotateDirection
enum class ECameraAutoRotateDirection : uint8_t
{
	Facing = 0,
	Movement = 1,
	MovementOrFacing = 2,
	ECameraAutoRotateDirection_MAX = 3
};

// Object: Enum GameplayCameras.ECameraShakeEvaluationMode
enum class ECameraShakeEvaluationMode : uint8_t
{
	Inline = 0,
	VisualLayer = 1,
	ECameraShakeEvaluationMode_MAX = 2
};

// Package: EngineCameras
// Enums: 5

// Object: Enum EngineCameras.EOscillatorWaveform
enum class EOscillatorWaveform : uint8_t
{
	SineWave = 0,
	PerlinNoise = 1,
	EOscillatorWaveform_MAX = 2
};

// Object: Enum EngineCameras.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom = 0,
	EOO_OffsetZero = 1,
	EOO_MAX = 2
};

// Object: Enum EngineCameras.ECameraAnimationPlaySpace
enum class ECameraAnimationPlaySpace : uint8_t
{
	CameraLocal = 0,
	World = 1,
	UserDefined = 2,
	ECameraAnimationPlaySpace_MAX = 3
};

// Object: Enum EngineCameras.ECameraAnimationEasingType
enum class ECameraAnimationEasingType : uint8_t
{
	Linear = 0,
	Sinusoidal = 1,
	Quadratic = 2,
	Cubic = 3,
	Quartic = 4,
	Quintic = 5,
	Exponential = 6,
	Circular = 7,
	ECameraAnimationEasingType_MAX = 8
};

// Object: Enum EngineCameras.EInitialWaveOscillatorOffsetType
enum class EInitialWaveOscillatorOffsetType : uint8_t
{
	Random = 0,
	Zero = 1,
	EInitialWaveOscillatorOffsetType_MAX = 2
};

// Package: OodleNetworkHandlerComponent
// Enums: 2

// Object: Enum OodleNetworkHandlerComponent.EOodleNetworkEnableMode
enum class EOodleNetworkEnableMode : uint8_t
{
	AlwaysEnabled = 0,
	WhenCompressedPacketReceived = 1,
	EOodleNetworkEnableMode_MAX = 2
};

// Object: Enum OodleNetworkHandlerComponent.EOodleNetResult
enum class EOodleNetResult : uint8_t
{
	Unknown = 0,
	Success = 1,
	OodleDecodeFailed = 2,
	OodleSerializePayloadFail = 3,
	OodleBadDecompressedLength = 4,
	OodleNoDictionary = 5,
	EOodleNetResult_MAX = 6
};

// Package: VariantManagerContent
// Enums: 1

// Object: Enum VariantManagerContent.EPropertyValueCategory
enum class EPropertyValueCategory : uint8_t
{
	Undefined = 0,
	Generic = 1,
	RelativeLocation = 2,
	RelativeRotation = 4,
	RelativeScale3D = 8,
	Visibility = 16,
	Material = 32,
	Color = 64,
	Option = 128,
	EPropertyValueCategory_MAX = 129
};

// Package: DatasmithContent
// Enums: 11

// Object: Enum DatasmithContent.EDatasmithAreaLightActorShape
enum class EDatasmithAreaLightActorShape : uint8_t
{
	Rectangle = 0,
	Disc = 1,
	Sphere = 2,
	Cylinder = 3,
	None = 4,
	EDatasmithAreaLightActorShape_MAX = 5
};

// Object: Enum DatasmithContent.EDatasmithAreaLightActorType
enum class EDatasmithAreaLightActorType : uint8_t
{
	Point = 0,
	Spot = 1,
	IES_DEPRECATED = 2,
	Rect = 3,
	EDatasmithAreaLightActorType_MAX = 4
};

// Object: Enum DatasmithContent.EDatasmithImportSearchPackagePolicy
enum class EDatasmithImportSearchPackagePolicy : uint8_t
{
	Current = 0,
	All = 1,
	EDatasmithImportSearchPackagePolicy_MAX = 2
};

// Object: Enum DatasmithContent.EDatasmithImportAssetConflictPolicy
enum class EDatasmithImportAssetConflictPolicy : uint8_t
{
	Replace = 0,
	Update = 1,
	Use = 2,
	Ignore = 3,
	EDatasmithImportAssetConflictPolicy_MAX = 4
};

// Object: Enum DatasmithContent.EDatasmithImportActorPolicy
enum class EDatasmithImportActorPolicy : uint8_t
{
	Update = 0,
	Full = 1,
	Ignore = 2,
	EDatasmithImportActorPolicy_MAX = 3
};

// Object: Enum DatasmithContent.EDatasmithImportMaterialQuality
enum class EDatasmithImportMaterialQuality : uint8_t
{
	UseNoFresnelCurves = 0,
	UseSimplifierFresnelCurves = 1,
	UseRealFresnelCurves = 2,
	EDatasmithImportMaterialQuality_MAX = 3
};

// Object: Enum DatasmithContent.EDatasmithImportLightmapMin
enum class EDatasmithImportLightmapMin : uint8_t
{
	LIGHTMAP = 0,
	LIGHTMAP = 1,
	LIGHTMAP = 2,
	LIGHTMAP = 3,
	LIGHTMAP = 4,
	LIGHTMAP = 5,
	LIGHTMAP_MAX = 6
};

// Object: Enum DatasmithContent.EDatasmithImportLightmapMax
enum class EDatasmithImportLightmapMax : uint8_t
{
	LIGHTMAP = 0,
	LIGHTMAP = 1,
	LIGHTMAP = 2,
	LIGHTMAP = 3,
	LIGHTMAP = 4,
	LIGHTMAP = 5,
	LIGHTMAP = 6,
	LIGHTMAP_MAX = 7
};

// Object: Enum DatasmithContent.EDatasmithImportScene
enum class EDatasmithImportScene : uint8_t
{
	NewLevel = 0,
	CurrentLevel = 1,
	AssetsOnly = 2,
	EDatasmithImportScene_MAX = 3
};

// Object: Enum DatasmithContent.EDatasmithCADStitchingTechnique
enum class EDatasmithCADStitchingTechnique : uint8_t
{
	StitchingNone = 0,
	StitchingHeal = 1,
	StitchingSew = 2,
	EDatasmithCADStitchingTechnique_MAX = 3
};

// Object: Enum DatasmithContent.EDatasmithCADRetessellationRule
enum class EDatasmithCADRetessellationRule : uint8_t
{
	All = 0,
	SkipDeletedSurfaces = 1,
	EDatasmithCADRetessellationRule_MAX = 2
};

// Package: ChaosNiagara
// Enums: 9

// Object: Enum ChaosNiagara.EDataSortTypeEnum
enum class EDataSortTypeEnum : uint8_t
{
	ChaosNiagara_DataSortType_NoSorting = 0,
	ChaosNiagara_DataSortType_RandomShuffle = 1,
	ChaosNiagara_DataSortType_SortByMassMaxToMin = 2,
	ChaosNiagara_DataSortType_SortByMassMinToMax = 3,
	ChaosNiagara_Max = 4
};

// Object: Enum ChaosNiagara.ERandomVelocityGenerationTypeEnum
enum class ERandomVelocityGenerationTypeEnum : uint8_t
{
	ChaosNiagara_RandomVelocityGenerationType_RandomDistribution = 0,
	ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers = 1,
	ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased = 2,
	ChaosNiagara_Max = 3
};

// Object: Enum ChaosNiagara.EDebugTypeEnum
enum class EDebugTypeEnum : uint8_t
{
	ChaosNiagara_DebugType_NoDebug = 0,
	ChaosNiagara_DebugType_ColorBySolver = 1,
	ChaosNiagara_DebugType_ColorByParticleIndex = 2,
	ChaosNiagara_Max = 3
};

// Object: Enum ChaosNiagara.EDataSourceTypeEnum
enum class EDataSourceTypeEnum : uint8_t
{
	ChaosNiagara_DataSourceType_Collision = 0,
	ChaosNiagara_DataSourceType_Breaking = 1,
	ChaosNiagara_DataSourceType_Trailing = 2,
	ChaosNiagara_Max = 3
};

// Object: Enum ChaosNiagara.ELocationFilteringModeEnum
enum class ELocationFilteringModeEnum : uint8_t
{
	ChaosNiagara_LocationFilteringMode_Inclusive = 0,
	ChaosNiagara_LocationFilteringMode_Exclusive = 1,
	ChaosNiagara_Max = 2
};

// Object: Enum ChaosNiagara.ELocationXToSpawnEnum
enum class ELocationXToSpawnEnum : uint8_t
{
	ChaosNiagara_LocationXToSpawn_None = 0,
	ChaosNiagara_LocationXToSpawn_Min = 1,
	ChaosNiagara_LocationXToSpawn_Max = 2,
	ChaosNiagara_LocationXToSpawn_MinMax = 3,
	ChaosNiagara_Max = 4
};

// Object: Enum ChaosNiagara.ELocationYToSpawnEnum
enum class ELocationYToSpawnEnum : uint8_t
{
	ChaosNiagara_LocationYToSpawn_None = 0,
	ChaosNiagara_LocationYToSpawn_Min = 1,
	ChaosNiagara_LocationYToSpawn_Max = 2,
	ChaosNiagara_LocationYToSpawn_MinMax = 3,
	ChaosNiagara_Max = 4
};

// Object: Enum ChaosNiagara.ELocationZToSpawnEnum
enum class ELocationZToSpawnEnum : uint8_t
{
	ChaosNiagara_LocationZToSpawn_None = 0,
	ChaosNiagara_LocationZToSpawn_Min = 1,
	ChaosNiagara_LocationZToSpawn_Max = 2,
	ChaosNiagara_LocationZToSpawn_MinMax = 3,
	ChaosNiagara_Max = 4
};

// Object: Enum ChaosNiagara.ENDIGeometryCollection_SourceMode
enum class ENDIGeometryCollection_SourceMode : uint8_t
{
	Default = 0,
	Source = 1,
	AttachParent = 2,
	DefaultCollectionOnly = 3,
	ParameterBinding = 4,
	ENDIGeometryCollection_MAX = 5
};

// Package: NiagaraSimCaching
// Enums: 2

// Object: Enum NiagaraSimCaching.ENiagaraSimCacheSectionPlayMode
enum class ENiagaraSimCacheSectionPlayMode : uint8_t
{
	SimWithoutCache = 0,
	DisplayCacheOnly = 1,
	ENiagaraSimCacheSectionPlayMode_MAX = 2
};

// Object: Enum NiagaraSimCaching.ENiagaraSimCacheSectionStretchMode
enum class ENiagaraSimCacheSectionStretchMode : uint8_t
{
	Repeat = 0,
	TimeDilate = 1,
	ENiagaraSimCacheSectionStretchMode_MAX = 2
};

// Package: ImgMedia
// Enums: 1

// Object: Enum ImgMedia.EMediaSourceEncoding
enum class EMediaSourceEncoding : uint8_t
{
	MSE_None = 0,
	MSE_Linear = 1,
	MSE_sRGB = 2,
	MSE_ST2084 = 3,
	MSE_SLog3 = 12,
	MSE_MAX = 13
};

// Package: CompositeCore
// Enums: 1

// Object: Enum CompositeCore.ECompositeCoreMergeOp
enum class ECompositeCoreMergeOp : uint8_t
{
	None = 0,
	Over = 1,
	Add = 2,
	Multiply = 3,
	Divide = 4,
	ECompositeCoreMergeOp_MAX = 5
};

// Package: MediaPlate
// Enums: 2

// Object: Enum MediaPlate.EMediaPlateResourceType
enum class EMediaPlateResourceType : uint8_t
{
	Playlist = 0,
	External = 1,
	Asset = 2,
	EMediaPlateResourceType_MAX = 3
};

// Object: Enum MediaPlate.EMediaPlateEventState
enum class EMediaPlateEventState : uint8_t
{
	Play = 0,
	Open = 1,
	Close = 2,
	Pause = 3,
	Reverse = 4,
	Forward = 5,
	Rewind = 6,
	Next = 7,
	Previous = 8,
	MAX = 9
};

// Package: UdpMessaging
// Enums: 1

// Object: Enum UdpMessaging.EUdpMessageFormat
enum class EUdpMessageFormat : uint8_t
{
	None = 0,
	Json = 1,
	TaggedProperty = 2,
	CborPlatformEndianness = 3,
	CborStandardEndianness = 4,
	EUdpMessageFormat_MAX = 5
};

// Package: ActorSequence
// Enums: 1

// Object: Enum ActorSequence.EActorSequenceObjectReferenceType
enum class EActorSequenceObjectReferenceType : uint8_t
{
	ContextActor = 0,
	ExternalActor = 1,
	Component = 2,
	EActorSequenceObjectReferenceType_MAX = 3
};

// Package: AndroidDeviceProfileSelector
// Enums: 2

// Object: Enum AndroidDeviceProfileSelector.ECompareType
enum class ECompareType : uint8_t
{
	CMP_Equal = 0,
	CMP_Less = 1,
	CMP_LessEqual = 2,
	CMP_Greater = 3,
	CMP_GreaterEqual = 4,
	CMP_NotEqual = 5,
	CMP_Regex = 6,
	CMP_EqualIgnore = 7,
	CMP_LessIgnore = 8,
	CMP_LessEqualIgnore = 9,
	CMP_GreaterIgnore = 10,
	CMP_GreaterEqualIgnore = 11,
	CMP_NotEqualIgnore = 12,
	CMP_Hash = 13,
	CMP_MAX = 14
};

// Object: Enum AndroidDeviceProfileSelector.ESourceType
enum class ESourceType : uint8_t
{
	SRC_PreviousRegexMatch = 0,
	SRC_GPUFamily = 1,
	SRC_GLVersion = 2,
	SRC_AndroidVersion = 3,
	SRC_DeviceMake = 4,
	SRC_DeviceModel = 5,
	SRC_DeviceBuildNumber = 6,
	SRC_VulkanVersion = 7,
	SRC_UsingHoudini = 8,
	SRC_VulkanAvailable = 9,
	SRC_CommandLine = 10,
	SRC_Hardware = 11,
	SRC_Chipset = 12,
	SRC_ConfigRuleVar = 13,
	SRC_HMDSystemName = 14,
	SRC_SM5Available = 15,
	SRC_MAX = 16
};

// Package: AndroidFileServer
// Enums: 1

// Object: Enum AndroidFileServer.EAFSActiveType
enum class EAFSActiveType : uint8_t
{
	None = 0,
	USBOnly = 1,
	NetworkOnly = 2,
	Combined = 3,
	EAFSActiveType_MAX = 4
};

// Package: GooglePAD
// Enums: 5

// Object: Enum GooglePAD.EGooglePADErrorCode
enum class EGooglePADErrorCode : uint8_t
{
	AssetPack_NO_ERROR = 0,
	AssetPack_APP_UNAVAILABLE = 1,
	AssetPack_UNAVAILABLE = 2,
	AssetPack_INVALID_REQUEST = 3,
	AssetPack_DOWNLOAD_NOT_FOUND = 4,
	AssetPack_API_NOT_AVAILABLE = 5,
	AssetPack_NETWORK_ERROR = 6,
	AssetPack_ACCESS_DENIED = 7,
	AssetPack_INSUFFICIENT_STORAGE = 8,
	AssetPack_PLAY_STORE_NOT_FOUND = 9,
	AssetPack_NETWORK_UNRESTRICTED = 10,
	AssetPack_INTERNAL_ERROR = 11,
	AssetPack_INITIALIZATION_NEEDED = 12,
	AssetPack_INITIALIZATION_FAILED = 13,
	AssetPack_APP_NOT_OWNED = 14,
	AssetPack_CONFIRMATION_NOT_REQUIRED = 15,
	AssetPack_UNRECOGNIZED_INSTALLATION = 16,
	AssetPack_MAX = 17
};

// Object: Enum GooglePAD.EGooglePADDownloadStatus
enum class EGooglePADDownloadStatus : uint8_t
{
	AssetPack_UNKNOWN = 0,
	AssetPack_DOWNLOAD_PENDING = 1,
	AssetPack_DOWNLOADING = 2,
	AssetPack_TRANSFERRING = 3,
	AssetPack_DOWNLOAD_COMPLETED = 4,
	AssetPack_DOWNLOAD_FAILED = 5,
	AssetPack_DOWNLOAD_CANCELED = 6,
	AssetPack_WAITING_FOR_WIFI = 7,
	AssetPack_NOT_INSTALLED = 8,
	AssetPack_INFO_PENDING = 9,
	AssetPack_INFO_FAILED = 10,
	AssetPack_REMOVAL_PENDING = 11,
	AssetPack_REMOVAL_FAILED = 12,
	AssetPack_REQUIRES_USER_CONFIRMATION = 13,
	AssetPack_MAX = 14
};

// Object: Enum GooglePAD.EGooglePADStorageMethod
enum class EGooglePADStorageMethod : uint8_t
{
	AssetPack_STORAGE_FILES = 0,
	AssetPack_STORAGE_APK = 1,
	AssetPack_STORAGE_UNKNOWN = 2,
	AssetPack_STORAGE_NOT_INSTALLED = 3,
	AssetPack_STORAGE_MAX = 4
};

// Object: Enum GooglePAD.EGooglePADCellularDataConfirmStatus
enum class EGooglePADCellularDataConfirmStatus : uint8_t
{
	AssetPack_CONFIRM_UNKNOWN = 0,
	AssetPack_CONFIRM_PENDING = 1,
	AssetPack_CONFIRM_USER_APPROVED = 2,
	AssetPack_CONFIRM_USER_CANCELED = 3,
	AssetPack_CONFIRM_MAX = 4
};

// Object: Enum GooglePAD.EGooglePADConfirmationDialogStatus
enum class EGooglePADConfirmationDialogStatus : uint8_t
{
	AssetPack_CONFIRMATION_DIALOG_UNKNOWN = 0,
	AssetPack_CONFIRMATION_DIALOG_PENDING = 1,
	AssetPack_CONFIRMATION_DIALOG_APPROVED = 2,
	AssetPack_CONFIRMATION_DIALOG_CANCELED = 3,
	AssetPack_CONFIRMATION_DIALOG_MAX = 4
};

// Package: LocationServicesBPLibrary
// Enums: 1

// Object: Enum LocationServicesBPLibrary.ELocationAccuracy
enum class ELocationAccuracy : uint8_t
{
	LA_ThreeKilometers = 0,
	LA_OneKilometer = 1,
	LA_HundredMeters = 2,
	LA_TenMeters = 3,
	LA_Best = 4,
	LA_Navigation = 5,
	LA_MAX = 6
};

// Package: ResonanceAudio
// Enums: 5

// Object: Enum ResonanceAudio.ERaQualityMode
enum class ERaQualityMode : uint8_t
{
	STEREO_PANNING = 0,
	BINAURAL_LOW = 1,
	BINAURAL_MEDIUM = 2,
	BINAURAL_HIGH = 3,
	ERaQualityMode_MAX = 4
};

// Object: Enum ResonanceAudio.ERaSpatializationMethod
enum class ERaSpatializationMethod : uint8_t
{
	STEREO_PANNING = 0,
	HRTF = 1,
	ERaSpatializationMethod_MAX = 2
};

// Object: Enum ResonanceAudio.ERaDistanceRolloffModel
enum class ERaDistanceRolloffModel : uint8_t
{
	LOGARITHMIC = 0,
	LINEAR = 1,
	NONE = 2,
	ERaDistanceRolloffModel_MAX = 3
};

// Object: Enum ResonanceAudio.ERaMaterialName
enum class ERaMaterialName : uint8_t
{
	TRANSPARENT = 0,
	ACOUSTIC_CEILING_TILES = 1,
	BRICK_BARE = 2,
	BRICK_PAINTED = 3,
	CONCRETE_BLOCK_COARSE = 4,
	CONCRETE_BLOCK_PAINTED = 5,
	CURTAIN_HEAVY = 6,
	FIBER_GLASS_INSULATION = 7,
	GLASS_THIN = 8,
	GLASS_THICK = 9,
	GRASS = 10,
	LINOLEUM_ON_CONCRETE = 11,
	MARBLE = 12,
	METAL = 13,
	PARQUET_ONCONCRETE = 14,
	PLASTER_ROUGH = 15,
	PLASTER_SMOOTH = 16,
	PLYWOOD_PANEL = 17,
	POLISHED_CONCRETE_OR_TILE = 18,
	SHEETROCK = 19,
	WATER_OR_ICE_SURFACE = 20,
	WOOD_CEILING = 21,
	WOOD_PANEL = 22,
	UNIFORM = 23,
	ERaMaterialName_MAX = 24
};

// Object: Enum ResonanceAudio.EResonanceRenderMode
enum class EResonanceRenderMode : uint8_t
{
	StereoPanning = 0,
	BinauralLowQuality = 1,
	BinauralMediumQuality = 2,
	BinauralHighQuality = 3,
	RoomEffectsOnly = 4,
	EResonanceRenderMode_MAX = 5
};

// Package: Synthesis
// Enums: 38

// Object: Enum Synthesis.ESynth1OscType
enum class ESynth1OscType : uint8_t
{
	Sine = 0,
	Saw = 1,
	Triangle = 2,
	Square = 3,
	Noise = 4,
	Count = 5,
	ESynth1OscType_MAX = 6
};

// Object: Enum Synthesis.ESynthLFOType
enum class ESynthLFOType : uint8_t
{
	Sine = 0,
	UpSaw = 1,
	DownSaw = 2,
	Square = 3,
	Triangle = 4,
	Exponential = 5,
	RandomSampleHold = 6,
	Count = 7,
	ESynthLFOType_MAX = 8
};

// Object: Enum Synthesis.ESynthLFOMode
enum class ESynthLFOMode : uint8_t
{
	Sync = 0,
	OneShot = 1,
	Free = 2,
	Count = 3,
	ESynthLFOMode_MAX = 4
};

// Object: Enum Synthesis.ESynthLFOPatchType
enum class ESynthLFOPatchType : uint8_t
{
	PatchToNone = 0,
	PatchToGain = 1,
	PatchToOscFreq = 2,
	PatchToFilterFreq = 3,
	PatchToFilterQ = 4,
	PatchToOscPulseWidth = 5,
	PatchToOscPan = 6,
	PatchLFO1ToLFO2Frequency = 7,
	PatchLFO1ToLFO2Gain = 8,
	Count = 9,
	ESynthLFOPatchType_MAX = 10
};

// Object: Enum Synthesis.ESynthModEnvPatch
enum class ESynthModEnvPatch : uint8_t
{
	PatchToNone = 0,
	PatchToOscFreq = 1,
	PatchToFilterFreq = 2,
	PatchToFilterQ = 3,
	PatchToLFO1Gain = 4,
	PatchToLFO2Gain = 5,
	PatchToLFO1Freq = 6,
	PatchToLFO2Freq = 7,
	Count = 8,
	ESynthModEnvPatch_MAX = 9
};

// Object: Enum Synthesis.ESynthModEnvBiasPatch
enum class ESynthModEnvBiasPatch : uint8_t
{
	PatchToNone = 0,
	PatchToOscFreq = 1,
	PatchToFilterFreq = 2,
	PatchToFilterQ = 3,
	PatchToLFO1Gain = 4,
	PatchToLFO2Gain = 5,
	PatchToLFO1Freq = 6,
	PatchToLFO2Freq = 7,
	Count = 8,
	ESynthModEnvBiasPatch_MAX = 9
};

// Object: Enum Synthesis.ESynthFilterType
enum class ESynthFilterType : uint8_t
{
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESynthFilterType_MAX = 5
};

// Object: Enum Synthesis.ESynthFilterAlgorithm
enum class ESynthFilterAlgorithm : uint8_t
{
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESynthFilterAlgorithm_MAX = 4
};

// Object: Enum Synthesis.ESynthStereoDelayMode
enum class ESynthStereoDelayMode : uint8_t
{
	Normal = 0,
	Cross = 1,
	PingPong = 2,
	Count = 3,
	ESynthStereoDelayMode_MAX = 4
};

// Object: Enum Synthesis.ESynth1PatchSource
enum class ESynth1PatchSource : uint8_t
{
	LFO1 = 0,
	LFO2 = 1,
	Envelope = 2,
	BiasEnvelope = 3,
	Count = 4,
	ESynth1PatchSource_MAX = 5
};

// Object: Enum Synthesis.ESynth1PatchDestination
enum class ESynth1PatchDestination : uint8_t
{
	Osc1Gain = 0,
	Osc1Frequency = 1,
	Osc1Pulsewidth = 2,
	Osc2Gain = 3,
	Osc2Frequency = 4,
	Osc2Pulsewidth = 5,
	FilterFrequency = 6,
	FilterQ = 7,
	Gain = 8,
	Pan = 9,
	LFO1Frequency = 10,
	LFO1Gain = 11,
	LFO2Frequency = 12,
	LFO2Gain = 13,
	Count = 14,
	ESynth1PatchDestination_MAX = 15
};

// Object: Enum Synthesis.ESubmixEffectConvolutionReverbBlockSize
enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t
{
	BlockSize256 = 0,
	BlockSize512 = 1,
	BlockSize1024 = 2,
	ESubmixEffectConvolutionReverbBlockSize_MAX = 3
};

// Object: Enum Synthesis.ESourceEffectDynamicsProcessorType
enum class ESourceEffectDynamicsProcessorType : uint8_t
{
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	UpwardsCompressor = 4,
	Count = 5,
	ESourceEffectDynamicsProcessorType_MAX = 6
};

// Object: Enum Synthesis.ESourceEffectDynamicsPeakMode
enum class ESourceEffectDynamicsPeakMode : uint8_t
{
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ESourceEffectDynamicsPeakMode_MAX = 4
};

// Object: Enum Synthesis.EEnvelopeFollowerPeakMode
enum class EEnvelopeFollowerPeakMode : uint8_t
{
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	EEnvelopeFollowerPeakMode_MAX = 4
};

// Object: Enum Synthesis.ESourceEffectFilterCircuit
enum class ESourceEffectFilterCircuit : uint8_t
{
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESourceEffectFilterCircuit_MAX = 4
};

// Object: Enum Synthesis.ESourceEffectFilterType
enum class ESourceEffectFilterType : uint8_t
{
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESourceEffectFilterType_MAX = 5
};

// Object: Enum Synthesis.ESourceEffectFilterParam
enum class ESourceEffectFilterParam : uint8_t
{
	FilterFrequency = 0,
	FilterResonance = 1,
	Count = 2,
	ESourceEffectFilterParam_MAX = 3
};

// Object: Enum Synthesis.EStereoChannelMode
enum class EStereoChannelMode : uint8_t
{
	MidSide = 0,
	LeftRight = 1,
	count = 2,
	EStereoChannelMode_MAX = 3
};

// Object: Enum Synthesis.ESourceEffectMotionFilterModSource
enum class ESourceEffectMotionFilterModSource : uint8_t
{
	DistanceFromListener = 0,
	SpeedRelativeToListener = 1,
	SpeedOfSourceEmitter = 2,
	SpeedOfListener = 3,
	SpeedOfAngleDelta = 4,
	Count = 5,
	ESourceEffectMotionFilterModSource_MAX = 6
};

// Object: Enum Synthesis.ESourceEffectMotionFilterModDestination
enum class ESourceEffectMotionFilterModDestination : uint8_t
{
	FilterACutoffFrequency = 0,
	FilterAResonance = 1,
	FilterAOutputVolumeDB = 2,
	FilterBCutoffFrequency = 3,
	FilterBResonance = 4,
	FilterBOutputVolumeDB = 5,
	FilterMix = 6,
	Count = 7,
	ESourceEffectMotionFilterModDestination_MAX = 8
};

// Object: Enum Synthesis.ESourceEffectMotionFilterTopology
enum class ESourceEffectMotionFilterTopology : uint8_t
{
	SerialMode = 0,
	ParallelMode = 1,
	Count = 2,
	ESourceEffectMotionFilterTopology_MAX = 3
};

// Object: Enum Synthesis.ESourceEffectMotionFilterCircuit
enum class ESourceEffectMotionFilterCircuit : uint8_t
{
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESourceEffectMotionFilterCircuit_MAX = 4
};

// Object: Enum Synthesis.ESourceEffectMotionFilterType
enum class ESourceEffectMotionFilterType : uint8_t
{
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESourceEffectMotionFilterType_MAX = 5
};

// Object: Enum Synthesis.EPhaserLFOType
enum class EPhaserLFOType : uint8_t
{
	Sine = 0,
	UpSaw = 1,
	DownSaw = 2,
	Square = 3,
	Triangle = 4,
	Exponential = 5,
	RandomSampleHold = 6,
	Count = 7,
	EPhaserLFOType_MAX = 8
};

// Object: Enum Synthesis.ERingModulatorTypeSourceEffect
enum class ERingModulatorTypeSourceEffect : uint8_t
{
	Sine = 0,
	Saw = 1,
	Triangle = 2,
	Square = 3,
	Count = 4,
	ERingModulatorTypeSourceEffect_MAX = 5
};

// Object: Enum Synthesis.EStereoDelaySourceEffect
enum class EStereoDelaySourceEffect : uint8_t
{
	Normal = 0,
	Cross = 1,
	PingPong = 2,
	Count = 3,
	EStereoDelaySourceEffect_MAX = 4
};

// Object: Enum Synthesis.EStereoDelayFiltertype
enum class EStereoDelayFiltertype : uint8_t
{
	Lowpass = 0,
	Highpass = 1,
	Bandpass = 2,
	Notch = 3,
	Count = 4,
	EStereoDelayFiltertype_MAX = 5
};

// Object: Enum Synthesis.ESubmixFilterType
enum class ESubmixFilterType : uint8_t
{
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESubmixFilterType_MAX = 5
};

// Object: Enum Synthesis.ESubmixFilterAlgorithm
enum class ESubmixFilterAlgorithm : uint8_t
{
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESubmixFilterAlgorithm_MAX = 4
};

// Object: Enum Synthesis.ETapLineMode
enum class ETapLineMode : uint8_t
{
	SendToChannel = 0,
	Panning = 1,
	Disabled = 2,
	ETapLineMode_MAX = 3
};

// Object: Enum Synthesis.EGranularSynthEnvelopeType
enum class EGranularSynthEnvelopeType : uint8_t
{
	Rectangular = 0,
	Triangle = 1,
	DownwardTriangle = 2,
	UpwardTriangle = 3,
	ExponentialDecay = 4,
	ExponentialIncrease = 5,
	Gaussian = 6,
	Hanning = 7,
	Lanczos = 8,
	Cosine = 9,
	CosineSquared = 10,
	Welch = 11,
	Blackman = 12,
	BlackmanHarris = 13,
	Count = 14,
	EGranularSynthEnvelopeType_MAX = 15
};

// Object: Enum Synthesis.EGranularSynthSeekType
enum class EGranularSynthSeekType : uint8_t
{
	FromBeginning = 0,
	FromCurrentPosition = 1,
	Count = 2,
	EGranularSynthSeekType_MAX = 3
};

// Object: Enum Synthesis.CurveInterpolationType
enum class ECurveInterpolationType : uint8_t
{
	AUTOINTERP = 0,
	LINEAR = 1,
	CONSTANT = 2,
	CurveInterpolationType_MAX = 3
};

// Object: Enum Synthesis.ESamplePlayerSeekType
enum class ESamplePlayerSeekType : uint8_t
{
	FromBeginning = 0,
	FromCurrentPosition = 1,
	FromEnd = 2,
	Count = 3,
	ESamplePlayerSeekType_MAX = 4
};

// Object: Enum Synthesis.ESynthKnobSize
enum class ESynthKnobSize : uint8_t
{
	Medium = 0,
	Large = 1,
	Count = 2,
	ESynthKnobSize_MAX = 3
};

// Object: Enum Synthesis.ESynthSlateSizeType
enum class ESynthSlateSizeType : uint8_t
{
	Small = 0,
	Medium = 1,
	Large = 2,
	Count = 3,
	ESynthSlateSizeType_MAX = 4
};

// Object: Enum Synthesis.ESynthSlateColorStyle
enum class ESynthSlateColorStyle : uint8_t
{
	Light = 0,
	Dark = 1,
	Count = 2,
	ESynthSlateColorStyle_MAX = 3
};

// Package: RenderCore
// Enums: 2

// Object: Enum RenderCore.EVTProducerPriority
enum class EVTProducerPriority : uint8_t
{
	Lowest = 0,
	Lower = 1,
	Low = 2,
	BelowNormal = 3,
	Normal = 4,
	AboveNormal = 5,
	High = 6,
	Highest = 7,
	Count = 8,
	EVTProducerPriority_MAX = 9
};

// Object: Enum RenderCore.EVTInvalidatePriority
enum class EVTInvalidatePriority : uint8_t
{
	Normal = 0,
	High = 1,
	Count = 2,
	EVTInvalidatePriority_MAX = 3
};

// Package: ChaosVDRuntime
// Enums: 33

// Object: Enum ChaosVDRuntime.EChaosVDAABBTreeNodeFlags
enum class EChaosVDAABBTreeNodeFlags : uint8_t
{
	None = 0,
	IsLeaf = 1,
	IsDirty = 2,
	EChaosVDAABBTreeNodeFlags_MAX = 3
};

// Object: Enum ChaosVDRuntime.EChaosVDAccelerationStructureType
enum class EChaosVDAccelerationStructureType : uint8_t
{
	BoundingVolume = 0,
	AABBTree = 1,
	AABBTreeBV = 2,
	Collection = 3,
	Unknown = 4,
	EChaosVDAccelerationStructureType_MAX = 5
};

// Object: Enum ChaosVDRuntime.EChaosVDContactShapesType
enum class EChaosVDContactShapesType : uint8_t
{
	Unknown = 0,
	SphereSphere = 1,
	SphereCapsule = 2,
	SphereBox = 3,
	SphereConvex = 4,
	SphereTriMesh = 5,
	SphereHeightField = 6,
	SpherePlane = 7,
	CapsuleCapsule = 8,
	CapsuleBox = 9,
	CapsuleConvex = 10,
	CapsuleTriMesh = 11,
	CapsuleHeightField = 12,
	BoxBox = 13,
	BoxConvex = 14,
	BoxTriMesh = 15,
	BoxHeightField = 16,
	BoxPlane = 17,
	ConvexConvex = 18,
	ConvexTriMesh = 19,
	ConvexHeightField = 20,
	GenericConvexConvex = 21,
	LevelSetLevelSet = 22,
	NumShapesTypes = 23,
	EChaosVDContactShapesType_MAX = 24
};

// Object: Enum ChaosVDRuntime.EChaosVDContactPointType
enum class EChaosVDContactPointType : uint8_t
{
	Unknown = 0,
	VertexPlane = 1,
	EdgeEdge = 2,
	PlaneVertex = 3,
	VertexVertex = 4,
	EChaosVDContactPointType_MAX = 5
};

// Object: Enum ChaosVDRuntime.EChaosVDManifoldPointFlags
enum class EChaosVDManifoldPointFlags : uint8_t
{
	None = 0,
	Disabled = 1,
	WasRestored = 2,
	WasReplaced = 4,
	HasStaticFrictionAnchor = 8,
	IsValid = 16,
	InsideStaticFrictionCone = 32,
	EChaosVDManifoldPointFlags_MAX = 33
};

// Object: Enum ChaosVDRuntime.EChaosVDConstraintFlags
enum class EChaosVDConstraintFlags : uint16_t
{
	None = 0,
	IsCurrent = 1,
	Disabled = 2,
	UseManifold = 4,
	UseIncrementalManifold = 8,
	CanRestoreManifold = 16,
	WasManifoldRestored = 32,
	IsQuadratic0 = 64,
	IsQuadratic1 = 128,
	IsProbe = 256,
	CCDEnabled = 512,
	CCDSweepEnabled = 1024,
	ModifierApplied = 2048,
	MaterialSet = 4096,
	EChaosVDConstraintFlags_MAX = 4097
};

// Object: Enum ChaosVDRuntime.EChaosVDMidPhaseFlags
enum class EChaosVDMidPhaseFlags : uint8_t
{
	None = 0,
	IsActive = 1,
	IsCCD = 2,
	IsCCDActive = 4,
	IsSleeping = 8,
	IsModified = 16,
	EChaosVDMidPhaseFlags_MAX = 17
};

// Object: Enum ChaosVDRuntime.EChaosVDMidPhaseType
enum class EChaosVDMidPhaseType : uint8_t
{
	Generic = 0,
	ShapePair = 1,
	SphereApproximation = 2,
	Unknown = 3,
	EChaosVDMidPhaseType_MAX = 4
};

// Object: Enum ChaosVDRuntime.EChaosVDCollisionTraceFlag
enum class EChaosVDCollisionTraceFlag : uint8_t
{
	UseDefault = 0,
	UseSimpleAndComplex = 1,
	UseSimpleAsComplex = 2,
	UseComplexAsSimple = 3,
	MAX = 4
};

// Object: Enum ChaosVDRuntime.EChaosVDCollisionShapeDataFlags
enum class EChaosVDCollisionShapeDataFlags : uint8_t
{
	None = 0,
	SimCollision = 1,
	QueryCollision = 2,
	IsProbe = 4,
	EChaosVDCollisionShapeDataFlags_MAX = 5
};

// Object: Enum ChaosVDRuntime.EChaosVDJointReSimType
enum class EChaosVDJointReSimType : uint8_t
{
	FullResim = 0,
	ResimAsFollower = 1,
	EChaosVDJointReSimType_MAX = 2
};

// Object: Enum ChaosVDRuntime.EChaosVDJointSyncType
enum class EChaosVDJointSyncType : uint8_t
{
	InSync = 0,
	HardDesync = 1,
	EChaosVDJointSyncType_MAX = 2
};

// Object: Enum ChaosVDRuntime.EChaosVDJointStateFlags
enum class EChaosVDJointStateFlags : uint8_t
{
	None = 0,
	Disabled = 1,
	Broken = 2,
	Breaking = 4,
	DriveTargetChanged = 8,
	EnabledDuringResim = 16,
	EChaosVDJointStateFlags_MAX = 17
};

// Object: Enum ChaosVDRuntime.EChaosVDGTJointStateFlags
enum class EChaosVDGTJointStateFlags : uint8_t
{
	None = 0,
	IsBreaking = 1,
	IsBroken = 2,
	DriveTargetChanged = 4,
	IsViolating = 8,
	EChaosVDGTJointStateFlags_MAX = 9
};

// Object: Enum ChaosVDRuntime.EChaosVDJointSolverSettingsFlags
enum class EChaosVDJointSolverSettingsFlags : uint8_t
{
	None = 0,
	UseLinearSolver = 1,
	SortEnabled = 2,
	SolvePositionLast = 4,
	UsePositionBasedDrives = 8,
	EnableTwistLimits = 16,
	EnableSwingLimits = 32,
	EnableDrives = 64,
	EChaosVDJointSolverSettingsFlags_MAX = 65
};

// Object: Enum ChaosVDRuntime.EChaosVDJointMotionType
enum class EChaosVDJointMotionType : uint8_t
{
	Free = 0,
	Limited = 1,
	Locked = 2,
	EChaosVDJointMotionType_MAX = 3
};

// Object: Enum ChaosVDRuntime.EChaosVDJointForceMode
enum class EChaosVDJointForceMode : uint8_t
{
	Acceleration = 0,
	Force = 1,
	EChaosVDJointForceMode_MAX = 2
};

// Object: Enum ChaosVDRuntime.EChaosVDPlasticityType
enum class EChaosVDPlasticityType : uint8_t
{
	Free = 0,
	Shrink = 1,
	Grow = 2,
	EChaosVDPlasticityType_MAX = 3
};

// Object: Enum ChaosVDRuntime.EChaosVDJointSettingsFlags
enum class EChaosVDJointSettingsFlags : uint32_t
{
	None = 0,
	CollisionEnabled = 1,
	MassConditioningEnabled = 2,
	AngularSLerpPositionDriveEnabled = 4,
	AngularSLerpVelocityDriveEnabled = 8,
	AngularTwistPositionDriveEnabled = 16,
	AngularTwistVelocityDriveEnabled = 32,
	AngularSwingPositionDriveEnabled = 64,
	AngularSwingVelocityDriveEnabled = 128,
	SoftLinearLimitsEnabled = 256,
	SoftTwistLimitsEnabled = 512,
	SoftSwingLimitsEnabled = 1024,
	LinearPositionDriveEnabled0 = 2048,
	LinearPositionDriveEnable1 = 4096,
	LinearPositionDriveEnable2 = 8192,
	LinearVelocityDriveEnabled0 = 16384,
	LinearVelocityDriveEnabled1 = 32768,
	LinearVelocityDriveEnabled2 = 65536,
	UseLinearSolver = 131072,
	EChaosVDJointSettingsFlags_MAX = 131073
};

// Object: Enum ChaosVDRuntime.EChaosVDParticleType
enum class EChaosVDParticleType : uint8_t
{
	Static = 0,
	Kinematic = 1,
	Rigid = 2,
	Clustered = 3,
	StaticMesh = 4,
	SkeletalMesh = 5,
	GeometryCollection = 6,
	Unknown = 7,
	EChaosVDParticleType_MAX = 8
};

// Object: Enum ChaosVDRuntime.EChaosVDSleepType
enum class EChaosVDSleepType : uint8_t
{
	MaterialSleep = 0,
	NeverSleep = 1,
	EChaosVDSleepType_MAX = 2
};

// Object: Enum ChaosVDRuntime.EChaosVDObjectStateType
enum class EChaosVDObjectStateType : uint8_t
{
	Uninitialized = 0,
	Sleeping = 1,
	Kinematic = 2,
	Static = 3,
	Dynamic = 4,
	Count = 5,
	EChaosVDObjectStateType_MAX = 6
};

// Object: Enum ChaosVDRuntime.EChaosVDParticleContext
enum class EChaosVDParticleContext : uint8_t
{
	Invalid = 0,
	GameThread = 1,
	PhysicsThread = 2,
	EChaosVDParticleContext_MAX = 3
};

// Object: Enum ChaosVDRuntime.EChaosVDKinematicTargetMode
enum class EChaosVDKinematicTargetMode : uint8_t
{
	None = 0,
	Reset = 1,
	Position = 2,
	Velocity = 3,
	EChaosVDKinematicTargetMode_MAX = 4
};

// Object: Enum ChaosVDRuntime.EChaosVDSceneQueryType
enum class EChaosVDSceneQueryType : uint8_t
{
	Invalid = 0,
	Sweep = 1,
	Overlap = 2,
	RayCast = 3,
	EChaosVDSceneQueryType_MAX = 4
};

// Object: Enum ChaosVDRuntime.EChaosVDSceneQueryMode
enum class EChaosVDSceneQueryMode : uint8_t
{
	Single = 0,
	Multi = 1,
	Test = 2,
	Invalid = 3,
	EChaosVDSceneQueryMode_MAX = 4
};

// Object: Enum ChaosVDRuntime.EChaosVDCollisionQueryParamsFlags
enum class EChaosVDCollisionQueryParamsFlags : uint16_t
{
	None = 0,
	TraceComplex = 1,
	FindInitialOverlaps = 2,
	ReturnFaceIndex = 4,
	ReturnPhysicalMaterial = 8,
	IgnoreBlocks = 16,
	IgnoreTouches = 32,
	SkipNarrowPhase = 64,
	TraceIntoSubComponents = 128,
	ReplaceHitWithSubComponents = 256,
	EChaosVDCollisionQueryParamsFlags_MAX = 257
};

// Object: Enum ChaosVDRuntime.EChaosVDQueryFastDataParallelFlags
enum class EChaosVDQueryFastDataParallelFlags : uint8_t
{
	None = 0,
	Parallel0 = 1,
	Parallel1 = 2,
	Parallel2 = 4,
	EChaosVDQueryFastDataParallelFlags_MAX = 5
};

// Object: Enum ChaosVDRuntime.EChaosVDSQHitFlags
enum class EChaosVDSQHitFlags : uint16_t
{
	None = 0,
	Position = 1,
	Normal = 2,
	Distance = 4,
	UV = 8,
	MTD = 512,
	FaceIndex = 1024,
	EChaosVDSQHitFlags_MAX = 1025
};

// Object: Enum ChaosVDRuntime.EChaosVDCollisionQueryHitType
enum class EChaosVDCollisionQueryHitType : uint8_t
{
	None = 0,
	Touch = 1,
	Block = 2,
	EChaosVDCollisionQueryHitType_MAX = 3
};

// Object: Enum ChaosVDRuntime.EChaosVDSQVisitRejectReason
enum class EChaosVDSQVisitRejectReason : uint8_t
{
	None = 0,
	NoHit = 1,
	PreFilter = 2,
	PostFilter = 3,
	ColocatedHitHasWorseNormal = 4,
	FailedFastBoundTest = 5,
	EChaosVDSQVisitRejectReason_MAX = 6
};

// Object: Enum ChaosVDRuntime.EChaosVDSceneQueryVisitorType
enum class EChaosVDSceneQueryVisitorType : uint8_t
{
	Invalid = 0,
	BroadPhase = 1,
	NarrowPhase = 2,
	EChaosVDSceneQueryVisitorType_MAX = 3
};

// Object: Enum ChaosVDRuntime.EChaosVDRecordingMode
enum class EChaosVDRecordingMode : uint8_t
{
	Invalid = 0,
	Live = 1,
	File = 2,
	EChaosVDRecordingMode_MAX = 3
};

// Package: Chaos
// Enums: 36

// Object: Enum Chaos.ChaosDeformableSimSpace
enum class EChaosDeformableSimSpace : uint8_t
{
	World = 0,
	ComponentXf = 1,
	bone = 2,
	ChaosDeformableSimSpace_MAX = 3
};

// Object: Enum Chaos.ESetMaskConditionType
enum class ESetMaskConditionType : uint8_t
{
	Field_Set_Always = 0,
	Field_Set_IFF_NOT_Interior = 1,
	Field_Set_IFF_NOT_Exterior = 2,
	Field_MaskCondition_Max = 3,
	Field_MAX = 4
};

// Object: Enum Chaos.EWaveFunctionType
enum class EWaveFunctionType : uint8_t
{
	Field_Wave_Cosine = 0,
	Field_Wave_Gaussian = 1,
	Field_Wave_Falloff = 2,
	Field_Wave_Decay = 3,
	Field_Wave_Max = 4
};

// Object: Enum Chaos.EFieldOperationType
enum class EFieldOperationType : uint8_t
{
	Field_Multiply = 0,
	Field_Divide = 1,
	Field_Add = 2,
	Field_Substract = 3,
	Field_Operation_Max = 4
};

// Object: Enum Chaos.EFieldCullingOperationType
enum class EFieldCullingOperationType : uint8_t
{
	Field_Culling_Inside = 0,
	Field_Culling_Outside = 1,
	Field_Culling_Operation_Max = 2,
	Field_Culling_MAX = 3
};

// Object: Enum Chaos.EFieldResolutionType
enum class EFieldResolutionType : uint8_t
{
	Field_Resolution_Minimal = 0,
	Field_Resolution_DisabledParents = 1,
	Field_Resolution_Maximum = 2,
	Field_Resolution_Max = 3
};

// Object: Enum Chaos.EFieldFilterType
enum class EFieldFilterType : uint8_t
{
	Field_Filter_Dynamic = 0,
	Field_Filter_Kinematic = 1,
	Field_Filter_Static = 2,
	Field_Filter_All = 3,
	Field_Filter_Sleeping = 4,
	Field_Filter_Disabled = 5,
	Field_Filter_Max = 6
};

// Object: Enum Chaos.EFieldObjectType
enum class EFieldObjectType : uint8_t
{
	Field_Object_Rigid = 0,
	Field_Object_Cloth = 1,
	Field_Object_Destruction = 2,
	Field_Object_Character = 3,
	Field_Object_All = 4,
	Field_Object_Max = 5
};

// Object: Enum Chaos.EFieldPositionType
enum class EFieldPositionType : uint8_t
{
	Field_Position_CenterOfMass = 0,
	Field_Position_PivotPoint = 1,
	Field_Position_Max = 2
};

// Object: Enum Chaos.EFieldFalloffType
enum class EFieldFalloffType : uint8_t
{
	Field_FallOff_None = 0,
	Field_Falloff_Linear = 1,
	Field_Falloff_Inverse = 2,
	Field_Falloff_Squared = 3,
	Field_Falloff_Logarithmic = 4,
	Field_Falloff_Max = 5
};

// Object: Enum Chaos.EFieldPhysicsType
enum class EFieldPhysicsType : uint8_t
{
	Field_None = 0,
	Field_DynamicState = 1,
	Field_LinearForce = 2,
	Field_ExternalClusterStrain = 3,
	Field_Kill = 4,
	Field_LinearVelocity = 5,
	Field_AngularVelociy = 6,
	Field_AngularTorque = 7,
	Field_InternalClusterStrain = 8,
	Field_DisableThreshold = 9,
	Field_SleepingThreshold = 10,
	Field_PositionStatic = 11,
	Field_PositionAnimated = 12,
	Field_PositionTarget = 13,
	Field_DynamicConstraint = 14,
	Field_CollisionGroup = 15,
	Field_ActivateDisabled = 16,
	Field_InitialLinearVelocity = 17,
	Field_InitialAngularVelocity = 18,
	Field_LinearImpulse = 19,
	Field_PhysicsType_Max = 20
};

// Object: Enum Chaos.EFieldVectorType
enum class EFieldVectorType : uint8_t
{
	Vector_LinearForce = 0,
	Vector_LinearVelocity = 1,
	Vector_AngularVelocity = 2,
	Vector_AngularTorque = 3,
	Vector_PositionTarget = 4,
	Vector_InitialLinearVelocity = 5,
	Vector_InitialAngularVelocity = 6,
	Vector_LinearImpulse = 7,
	Vector_TargetMax = 8,
	Vector_MAX = 9
};

// Object: Enum Chaos.EFieldScalarType
enum class EFieldScalarType : uint8_t
{
	Scalar_ExternalClusterStrain = 0,
	Scalar_Kill = 1,
	Scalar_DisableThreshold = 2,
	Scalar_SleepingThreshold = 3,
	Scalar_InternalClusterStrain = 4,
	Scalar_DynamicConstraint = 5,
	Scalar_TargetMax = 6,
	Scalar_MAX = 7
};

// Object: Enum Chaos.EFieldIntegerType
enum class EFieldIntegerType : uint8_t
{
	Integer_DynamicState = 0,
	Integer_ActivateDisabled = 1,
	Integer_CollisionGroup = 2,
	Integer_PositionAnimated = 3,
	Integer_PositionStatic = 4,
	Integer_TargetMax = 5,
	Integer_MAX = 6
};

// Object: Enum Chaos.EFieldOutputType
enum class EFieldOutputType : uint8_t
{
	Field_Output_Vector = 0,
	Field_Output_Scalar = 1,
	Field_Output_Integer = 2,
	Field_Output_Max = 3
};

// Object: Enum Chaos.EFieldPhysicsDefaultFields
enum class EFieldPhysicsDefaultFields : uint8_t
{
	Field_RadialIntMask = 0,
	Field_RadialFalloff = 1,
	Field_UniformVector = 2,
	Field_RadialVector = 3,
	Field_RadialVectorFalloff = 4,
	Field_EFieldPhysicsDefaultFields_Max = 5
};

// Object: Enum Chaos.EConvexOverlapRemoval
enum class EConvexOverlapRemoval : uint8_t
{
	None = 0,
	All = 1,
	OnlyClusters = 2,
	OnlyClustersVsClusters = 3,
	EConvexOverlapRemoval_MAX = 4
};

// Object: Enum Chaos.EGenerateConvexMethod
enum class EGenerateConvexMethod : uint8_t
{
	ExternalCollision = 0,
	ComputedFromGeometry = 1,
	IntersectExternalWithComputed = 2,
	EGenerateConvexMethod_MAX = 3
};

// Object: Enum Chaos.EAllowConvexMergeMethod
enum class EAllowConvexMergeMethod : uint8_t
{
	ByProximity = 0,
	Any = 1,
	EAllowConvexMergeMethod_MAX = 2
};

// Object: Enum Chaos.EConvexHullProximityFilter
enum class EConvexHullProximityFilter : uint8_t
{
	None = 0,
	BoundingBox = 1,
	EConvexHullProximityFilter_MAX = 2
};

// Object: Enum Chaos.EProximityMethod
enum class EProximityMethod : uint8_t
{
	Precise = 0,
	ConvexHull = 1,
	EProximityMethod_MAX = 2
};

// Object: Enum Chaos.EProximityContactMethod
enum class EProximityContactMethod : uint8_t
{
	MinOverlapInProjectionToMajorAxes = 0,
	ConvexHullSharpContact = 1,
	ConvexHullAreaContact = 2,
	EProximityContactMethod_MAX = 3
};

// Object: Enum Chaos.EConnectionContactMethod
enum class EConnectionContactMethod : uint8_t
{
	None = 0,
	ConvexHullContactArea = 1,
	EConnectionContactMethod_MAX = 2
};

// Object: Enum Chaos.ECollisionTypeEnum
enum class ECollisionTypeEnum : uint8_t
{
	Chaos_Volumetric = 0,
	Chaos_Surface_Volumetric = 1,
	Chaos_Max = 2
};

// Object: Enum Chaos.EImplicitTypeEnum
enum class EImplicitTypeEnum : uint8_t
{
	Chaos_Implicit_Box = 0,
	Chaos_Implicit_Sphere = 1,
	Chaos_Implicit_Capsule = 2,
	Chaos_Implicit_LevelSet = 3,
	Chaos_Implicit_None = 4,
	Chaos_Implicit_Convex = 5,
	Chaos_Max = 6
};

// Object: Enum Chaos.EObjectStateTypeEnum
enum class EObjectStateTypeEnum : uint8_t
{
	Chaos_NONE = 0,
	Chaos_Object_Sleeping = 1,
	Chaos_Object_Kinematic = 2,
	Chaos_Object_Static = 3,
	Chaos_Object_Dynamic = 4,
	Chaos_Object_UserDefined = 100,
	Chaos_Max = 101
};

// Object: Enum Chaos.EGeometryCollectionPhysicsTypeEnum
enum class EGeometryCollectionPhysicsTypeEnum : uint8_t
{
	Chaos_AngularVelocity = 0,
	Chaos_DynamicState = 1,
	Chaos_LinearVelocity = 2,
	Chaos_InitialAngularVelocity = 3,
	Chaos_InitialLinearVelocity = 4,
	Chaos_CollisionGroup = 5,
	Chaos_LinearForce = 6,
	Chaos_AngularTorque = 7,
	Chaos_DisableThreshold = 8,
	Chaos_SleepingThreshold = 9,
	Chaos_ExternalClusterStrain = 10,
	Chaos_InternalClusterStrain = 11,
	Chaos_LinearImpulse = 12,
	Chaos_Max = 13
};

// Object: Enum Chaos.EInitialVelocityTypeEnum
enum class EInitialVelocityTypeEnum : uint8_t
{
	Chaos_Initial_Velocity_User_Defined = 0,
	Chaos_Initial_Velocity_None = 1,
	Chaos_Max = 2
};

// Object: Enum Chaos.EEmissionPatternTypeEnum
enum class EEmissionPatternTypeEnum : uint8_t
{
	Chaos_Emission_Pattern_First_Frame = 0,
	Chaos_Emission_Pattern_On_Demand = 1,
	Chaos_Max = 2
};

// Object: Enum Chaos.EDamageModelTypeEnum
enum class EDamageModelTypeEnum : uint8_t
{
	Chaos_Damage_Model_UserDefined_Damage_Threshold = 0,
	Chaos_Damage_Model_Material_Strength_And_Connectivity_DamageThreshold = 1,
	Chaos_Max = 2
};

// Object: Enum Chaos.EChaosSolverTickMode
enum class EChaosSolverTickMode : uint8_t
{
	Fixed = 0,
	Variable = 1,
	VariableCapped = 2,
	VariableCappedWithTarget = 3,
	EChaosSolverTickMode_MAX = 4
};

// Object: Enum Chaos.EChaosThreadingMode
enum class EChaosThreadingMode : uint8_t
{
	DedicatedThread = 0,
	TaskGraph = 1,
	SingleThread = 2,
	Num = 3,
	Invalid = 4,
	EChaosThreadingMode_MAX = 5
};

// Object: Enum Chaos.EChaosBufferMode
enum class EChaosBufferMode : uint8_t
{
	Double = 0,
	Triple = 1,
	Num = 2,
	Invalid = 3,
	EChaosBufferMode_MAX = 4
};

// Object: Enum Chaos.EChaosSoftsSimulationSpace
enum class EChaosSoftsSimulationSpace : uint8_t
{
	WorldSpace = 0,
	ComponentSpace = 1,
	ReferenceBoneSpace = 2,
	EChaosSoftsSimulationSpace_MAX = 3
};

// Object: Enum Chaos.EClusterUnionMethod
enum class EClusterUnionMethod : uint8_t
{
	PointImplicit = 0,
	DelaunayTriangulation = 1,
	MinimalSpanningSubsetDelaunayTriangulation = 2,
	PointImplicitAugmentedWithMinimalDelaunay = 3,
	BoundsOverlapFilteredDelaunayTriangulation = 4,
	None = 5,
	EClusterUnionMethod_MAX = 6
};

// Object: Enum Chaos.EGeometryCollectionCacheType
enum class EGeometryCollectionCacheType : uint8_t
{
	None = 0,
	Record = 1,
	Play = 2,
	RecordAndPlay = 3,
	EGeometryCollectionCacheType_MAX = 4
};

// Package: UniversalObjectLocator
// Enums: 1

// Object: Enum UniversalObjectLocator.ELocatorResolveFlags
enum class ELocatorResolveFlags : uint8_t
{
	None = 0,
	Load = 1,
	Unload = 2,
	Async = 4,
	WillWait = 8,
	AsyncWait = 12,
	ELocatorResolveFlags_MAX = 13
};

// Package: AudioPlatformConfiguration
// Enums: 1

// Object: Enum AudioPlatformConfiguration.ESoundwaveSampleRateSettings
enum class ESoundwaveSampleRateSettings : uint8_t
{
	Max = 0,
	High = 1,
	Medium = 2,
	Low = 3,
	Min = 4
};

// Package: CoreOnline
// Enums: 1

// Object: Enum CoreOnline.ECoreOnlineDummy
enum class ECoreOnlineDummy : uint8_t
{
	Dummy = 0,
	ECoreOnlineDummy_MAX = 1
};

// Package: MediaUtils
// Enums: 3

// Object: Enum MediaUtils.EMediaPlayerOptionBooleanOverride
enum class EMediaPlayerOptionBooleanOverride : uint8_t
{
	UseMediaPlayerSetting = 0,
	Enabled = 1,
	Disabled = 2,
	EMediaPlayerOptionBooleanOverride_MAX = 3
};

// Object: Enum MediaUtils.EMediaPlayerOptionSeekTimeType
enum class EMediaPlayerOptionSeekTimeType : uint8_t
{
	Ignored = 0,
	RelativeToStartTime = 1,
	EMediaPlayerOptionSeekTimeType_MAX = 2
};

// Object: Enum MediaUtils.EMediaPlayerOptionTrackSelectMode
enum class EMediaPlayerOptionTrackSelectMode : uint8_t
{
	UseMediaPlayerDefaults = 0,
	UseTrackOptionIndices = 1,
	UseLanguageCodes = 2,
	EMediaPlayerOptionTrackSelectMode_MAX = 3
};

// Package: LocalFileNetworkReplayStreaming
// Enums: 1

// Object: Enum LocalFileNetworkReplayStreaming.ELocalFileReplayResult
enum class ELocalFileReplayResult : uint8_t
{
	Success = 0,
	InvalidReplayInfo = 1,
	StreamChunkIndexMismatch = 2,
	DecompressBuffer = 3,
	CompressionNotSupported = 4,
	DecryptBuffer = 5,
	EncryptionNotSupported = 6,
	EncryptBuffer = 7,
	CompressBuffer = 8,
	InvalidName = 9,
	FileWriter = 10,
	Unknown = 11,
	ELocalFileReplayResult_MAX = 12
};

// Package: HttpNetworkReplayStreaming
// Enums: 1

// Object: Enum HttpNetworkReplayStreaming.EHttpReplayResult
enum class EHttpReplayResult : uint8_t
{
	Success = 0,
	FailedJsonParse = 1,
	DataUnavailable = 2,
	InvalidHttpResponse = 3,
	CompressionFailed = 4,
	DecompressionFailed = 5,
	InvalidPayload = 6,
	Unknown = 7,
	EHttpReplayResult_MAX = 8
};

// Package: VectorVM
// Enums: 2

// Object: Enum VectorVM.EVectorVMBaseTypes
enum class EVectorVMBaseTypes : uint8_t
{
	Float = 0,
	Int = 1,
	Bool = 2,
	Num = 3,
	EVectorVMBaseTypes_MAX = 4
};

// Object: Enum VectorVM.EVectorVMOperandLocation
enum class EVectorVMOperandLocation : uint8_t
{
	Register = 0,
	Constant = 1,
	Num = 2,
	EVectorVMOperandLocation_MAX = 3
};

// Package: AESGCMHandlerComponent
// Enums: 1

// Object: Enum AESGCMHandlerComponent.EAESGCMNetResult
enum class EAESGCMNetResult : uint8_t
{
	Unknown = 0,
	Success = 1,
	AESMissingIV = 2,
	AESMissingAuthTag = 3,
	AESMissingPayload = 4,
	AESDecryptionFailed = 5,
	AESZeroLastByte = 6,
	EAESGCMNetResult_MAX = 7
};

// Package: Landmass
// Enums: 2

// Object: Enum Landmass.EBrushFalloffMode
enum class EBrushFalloffMode : uint8_t
{
	Angle = 0,
	Width = 1,
	EBrushFalloffMode_MAX = 2
};

// Object: Enum Landmass.EBrushBlendType
enum class EBrushBlendType : uint8_t
{
	AlphaBlend = 0,
	Min = 1,
	Max = 2,
	Additive = 3
};

// Package: DataflowNodes
// Enums: 1

// Object: Enum DataflowNodes.EDataflowWeightMapOverrideType
enum class EDataflowWeightMapOverrideType : uint8_t
{
	ReplaceAll = 0,
	AddDifference = 1,
	ReplaceChanged = 2,
	EDataflowWeightMapOverrideType_MAX = 3
};

// Package: PBIK
// Enums: 2

// Object: Enum PBIK.EPBIKLimitType
enum class EPBIKLimitType : uint8_t
{
	Free = 0,
	Limited = 1,
	Locked = 2,
	EPBIKLimitType_MAX = 3
};

// Object: Enum PBIK.EPBIKRootBehavior
enum class EPBIKRootBehavior : uint8_t
{
	PrePull = 0,
	PinToInput = 1,
	Free = 2,
	EPBIKRootBehavior_MAX = 3
};

// Package: FullBodyIK
// Enums: 2

// Object: Enum FullBodyIK.EFBIKBoneLimitType
enum class EFBIKBoneLimitType : uint8_t
{
	Free = 0,
	Limit = 1,
	Locked = 2,
	EFBIKBoneLimitType_MAX = 3
};

// Object: Enum FullBodyIK.EPoleVectorOption
enum class EPoleVectorOption : uint8_t
{
	Direction = 0,
	Location = 1,
	EPoleVectorOption_MAX = 2
};

// Package: LiveLinkMessageBusFramework
// Enums: 5

// Object: Enum LiveLinkMessageBusFramework.ELiveLinkCompressionMethod
enum class ELiveLinkCompressionMethod : uint8_t
{
	Uncompressed = 0,
	Oodle = 1,
	Zlib = 2,
	ELiveLinkCompressionMethod_MAX = 3
};

// Object: Enum LiveLinkMessageBusFramework.ELiveLinkCompressionBias
enum class ELiveLinkCompressionBias : uint8_t
{
	None = 0,
	Size = 1,
	Speed = 2,
	ELiveLinkCompressionBias_MAX = 3
};

// Object: Enum LiveLinkMessageBusFramework.ELiveLinkPayloadSerializationMethod
enum class ELiveLinkPayloadSerializationMethod : uint8_t
{
	Standard = 0,
	Cbor = 1,
	ELiveLinkPayloadSerializationMethod_MAX = 2
};

// Object: Enum LiveLinkMessageBusFramework.ELiveLinkPayloadCompressionType
enum class ELiveLinkPayloadCompressionType : uint8_t
{
	None = 0,
	Heuristic = 1,
	Always = 2,
	ELiveLinkPayloadCompressionType_MAX = 3
};

// Object: Enum LiveLinkMessageBusFramework.ELiveLinkTopologyMode
enum class ELiveLinkTopologyMode : uint8_t
{
	Hub = 0,
	Spoke = 1,
	UnrealClient = 2,
	External = 3,
	ELiveLinkTopologyMode_MAX = 4
};

// Package: ControlRigSpline
// Enums: 1

// Object: Enum ControlRigSpline.ESplineType
enum class ESplineType : uint8_t
{
	BSpline = 0,
	Hermite = 1,
	Max = 2
};

// Package: GeometryDataflowNodes
// Enums: 1

// Object: Enum GeometryDataflowNodes.EMeshBooleanOperationEnum
enum class EMeshBooleanOperationEnum : uint8_t
{
	Dataflow_MeshBoolean_Union = 0,
	Dataflow_MeshBoolean_Intersect = 1,
	Dataflow_MeshBoolean_Difference = 2,
	Dataflow_Max = 3
};

// Package: FractureEngine
// Enums: 10

// Object: Enum FractureEngine.EConvexHullSimplifyMethod
enum class EConvexHullSimplifyMethod : uint8_t
{
	MeshQSlim = 0,
	AngleTolerance = 1,
	EConvexHullSimplifyMethod_MAX = 2
};

// Object: Enum FractureEngine.EFractureBrickBondEnum
enum class EFractureBrickBondEnum : uint8_t
{
	Dataflow_FractureBrickBond_Stretcher = 0,
	Dataflow_FractureBrickBond_Stack = 1,
	Dataflow_FractureBrickBond_English = 2,
	Dataflow_FractureBrickBond_Header = 3,
	Dataflow_FractureBrickBond_Flemish = 4,
	Dataflow_FractureBrickBond_MAX = 5
};

// Object: Enum FractureEngine.EMeshCutterCutDistribution
enum class EMeshCutterCutDistribution : uint8_t
{
	SingleCut = 0,
	UniformRandom = 1,
	Grid = 2,
	EMeshCutterCutDistribution_MAX = 3
};

// Object: Enum FractureEngine.EMeshCutterPerCutMeshSelection
enum class EMeshCutterPerCutMeshSelection : uint8_t
{
	All = 0,
	Random = 1,
	Sequential = 2,
	EMeshCutterPerCutMeshSelection_MAX = 3
};

// Object: Enum FractureEngine.ENonUniformSamplingDistributionMode
enum class ENonUniformSamplingDistributionMode : uint8_t
{
	ENonUniformSamplingDistributionMode_Uniform = 0,
	ENonUniformSamplingDistributionMode_Smaller = 1,
	ENonUniformSamplingDistributionMode_Larger = 2,
	ENonUniformSamplingDistributionMode_MAX = 3
};

// Object: Enum FractureEngine.ENonUniformSamplingWeightMode
enum class ENonUniformSamplingWeightMode : uint8_t
{
	ENonUniformSamplingWeightMode_WeightToRadius = 0,
	ENonUniformSamplingWeightMode_FilledWeightToRadius = 1,
	ENonUniformSamplingWeightMode_WeightedRandom = 2,
	ENonUniformSamplingWeightMode_MAX = 3
};

// Object: Enum FractureEngine.EFixTinyGeoMergeType
enum class EFixTinyGeoMergeType : uint8_t
{
	MergeGeometry = 0,
	MergeClusters = 1,
	EFixTinyGeoMergeType_MAX = 2
};

// Object: Enum FractureEngine.EFixTinyGeoNeighborSelectionMethod
enum class EFixTinyGeoNeighborSelectionMethod : uint8_t
{
	LargestNeighbor = 0,
	NearestCenter = 1,
	EFixTinyGeoNeighborSelectionMethod_MAX = 2
};

// Object: Enum FractureEngine.EFixTinyGeoUseBoneSelection
enum class EFixTinyGeoUseBoneSelection : uint8_t
{
	NoEffect = 0,
	AlsoMergeSelected = 1,
	OnlyMergeSelected = 2,
	EFixTinyGeoUseBoneSelection_MAX = 3
};

// Object: Enum FractureEngine.EFixTinyGeoGeometrySelectionMethod
enum class EFixTinyGeoGeometrySelectionMethod : uint8_t
{
	VolumeCubeRoot = 0,
	RelativeVolume = 1,
	EFixTinyGeoGeometrySelectionMethod_MAX = 2
};

// Package: GeometryCollectionNodes
// Enums: 44

// Object: Enum GeometryCollectionNodes.EFloatArrayToIntArrayFunctionEnum
enum class EFloatArrayToIntArrayFunctionEnum : uint8_t
{
	Dataflow_FloatToInt_Function_Floor = 0,
	Dataflow_FloatToInt_Function_Ceil = 1,
	Dataflow_FloatToInt_Function_Round = 2,
	Dataflow_FloatToInt_Function_Truncate = 3,
	Dataflow_FloatToInt_NonZeroToIndex = 4,
	Dataflow_FloatToInt_ZeroToIndex = 5,
	Dataflow_Max = 6
};

// Object: Enum GeometryCollectionNodes.ECompareOperation1Enum
enum class ECompareOperation1Enum : uint8_t
{
	Dataflow_Compare_Equal = 0,
	Dataflow_Compare_Smaller = 1,
	Dataflow_Compare_SmallerOrEqual = 2,
	Dataflow_Compare_Greater = 3,
	Dataflow_Compare_GreaterOrEqual = 4,
	Dataflow_Max = 5
};

// Object: Enum GeometryCollectionNodes.EStatisticsOperationEnum
enum class EStatisticsOperationEnum : uint8_t
{
	Dataflow_EStatisticsOperationEnum_Min = 0,
	Dataflow_EStatisticsOperationEnum_Max = 1,
	Dataflow_EStatisticsOperationEnum_Mean = 2,
	Dataflow_EStatisticsOperationEnum_Median = 3,
	Dataflow_EStatisticsOperationEnum_Mode = 4,
	Dataflow_EStatisticsOperationEnum_Sum = 5,
	Dataflow_Max = 6
};

// Object: Enum GeometryCollectionNodes.EDataflowFieldFalloffType
enum class EDataflowFieldFalloffType : uint8_t
{
	Dataflow_FieldFalloffType_None = 0,
	Dataflow_FieldFalloffType_Linear = 1,
	Dataflow_FieldFalloffType_Inverse = 2,
	Dataflow_FieldFalloffType_Squared = 3,
	Dataflow_FieldFalloffType_Logarithmic = 4,
	Dataflow_Max = 5
};

// Object: Enum GeometryCollectionNodes.EDataflowSetMaskConditionType
enum class EDataflowSetMaskConditionType : uint8_t
{
	Dataflow_SetMaskConditionType_Always = 0,
	Dataflow_SetMaskConditionType_IFF_NOT_Interior = 1,
	Dataflow_SetMaskConditionType_IFF_NOT_Exterior = 2,
	Dataflow_Max = 3
};

// Object: Enum GeometryCollectionNodes.EDataflowWaveFunctionType
enum class EDataflowWaveFunctionType : uint8_t
{
	Dataflow_WaveFunctionType_Cosine = 0,
	Dataflow_WaveFunctionType_Gaussian = 1,
	Dataflow_WaveFunctionType_Falloff = 2,
	Dataflow_WaveFunctionType_Decay = 3,
	Dataflow_Max = 4
};

// Object: Enum GeometryCollectionNodes.EDataflowFloatFieldOperationType
enum class EDataflowFloatFieldOperationType : uint8_t
{
	Dataflow_FloatFieldOperationType_Multiply = 0,
	Dataflow_FloatFieldFalloffType_Divide = 1,
	Dataflow_FloatFieldFalloffType_Add = 2,
	Dataflow_FloatFieldFalloffType_Substract = 3,
	Dataflow_FloatFieldFalloffType_Min = 4,
	Dataflow_FloatFieldFalloffType_Max = 5,
	Dataflow_Max = 6
};

// Object: Enum GeometryCollectionNodes.EDataflowVectorFieldOperationType
enum class EDataflowVectorFieldOperationType : uint8_t
{
	Dataflow_VectorFieldOperationType_Multiply = 0,
	Dataflow_VectorFieldFalloffType_Divide = 1,
	Dataflow_VectorFieldFalloffType_Add = 2,
	Dataflow_VectorFieldFalloffType_Substract = 3,
	Dataflow_VectorFieldFalloffType_CrossProduct = 4,
	Dataflow_Max = 5
};

// Object: Enum GeometryCollectionNodes.ESetMaterialOperationTypeEnum
enum class ESetMaterialOperationTypeEnum : uint8_t
{
	Dataflow_SetMaterialOperationType_Add = 0,
	Dataflow_SetMaterialOperationType_Insert = 1,
	Dataflow_Max = 2
};

// Object: Enum GeometryCollectionNodes.ECollectionBakeTextureAttribute
enum class ECollectionBakeTextureAttribute : uint8_t
{
	None = 0,
	DistanceToExternal = 1,
	AmbientOcclusion = 2,
	Curvature = 3,
	NormalX = 4,
	NormalY = 5,
	NormalZ = 6,
	PositionX = 7,
	PositionY = 8,
	PositionZ = 9,
	ECollectionBakeTextureAttribute_MAX = 10
};

// Object: Enum GeometryCollectionNodes.EClusterSizeMethodEnum
enum class EClusterSizeMethodEnum : uint8_t
{
	Dataflow_ClusterSizeMethod_ByNumber = 0,
	Dataflow_ClusterSizeMethod_ByFractionOfInput = 1,
	Dataflow_ClusterSizeMethod_BySize = 2,
	Dataflow_ClusterSizeMethod_ByGrid = 3,
	Dataflow_Max = 4
};

// Object: Enum GeometryCollectionNodes.EClusterNeighborSelectionMethodEnum
enum class EClusterNeighborSelectionMethodEnum : uint8_t
{
	Dataflow_ClusterNeighborSelectionMethod_LargestNeighbor = 0,
	Dataflow_ClusterNeighborSelectionMethod_NearestCenter = 1,
	Dataflow_ClusterNeighborSelectionMethod_MAX = 2
};

// Object: Enum GeometryCollectionNodes.EFloatToIntFunctionEnum
enum class EFloatToIntFunctionEnum : uint8_t
{
	Dataflow_FloatToInt_Function_Floor = 0,
	Dataflow_FloatToInt_Function_Ceil = 1,
	Dataflow_FloatToInt_Function_Round = 2,
	Dataflow_FloatToInt_Function_Truncate = 3,
	Dataflow_Max = 4
};

// Object: Enum GeometryCollectionNodes.EVisibiltyOptionsEnum
enum class EVisibiltyOptionsEnum : uint8_t
{
	Dataflow_VisibilityOptions_Visible = 0,
	Dataflow_VisibilityOptions_Invisible = 1,
	Dataflow_Max = 2
};

// Object: Enum GeometryCollectionNodes.EDataflowVisualizeFractureColoringType
enum class EDataflowVisualizeFractureColoringType : uint8_t
{
	ColorByParent = 0,
	ColorByLevel = 1,
	ColorByCluster = 2,
	ColorByLeafLevel = 3,
	ColorByLeaf = 4,
	ColorByAttr = 5,
	EDataflowVisualizeFractureColoringType_MAX = 6
};

// Object: Enum GeometryCollectionNodes.EDataflowSetFloatArrayMethod
enum class EDataflowSetFloatArrayMethod : uint8_t
{
	Random = 0,
	Noise = 1,
	ByBoundingBox = 2,
	EDataflowSetFloatArrayMethod_MAX = 3
};

// Object: Enum GeometryCollectionNodes.EMakeBoxDataTypeEnum
enum class EMakeBoxDataTypeEnum : uint8_t
{
	Dataflow_MakeBox_DataType_MinMax = 0,
	Dataflow_MakeBox_DataType_CenterSize = 1,
	Dataflow_Max = 2
};

// Object: Enum GeometryCollectionNodes.EMakeMeshTypeEnum
enum class EMakeMeshTypeEnum : uint8_t
{
	Sphere = 0,
	Capsule = 1,
	Cylinder = 2,
	EMakeMeshTypeEnum_MAX = 3
};

// Object: Enum GeometryCollectionNodes.EDataflowStairTypeEnum
enum class EDataflowStairTypeEnum : uint8_t
{
	Linear = 0,
	Floating = 1,
	Curved = 2,
	Spiral = 3,
	EDataflowStairTypeEnum_MAX = 4
};

// Object: Enum GeometryCollectionNodes.EMathConstantsEnum
enum class EMathConstantsEnum : uint8_t
{
	Dataflow_MathConstants_Pi = 0,
	Dataflow_MathConstants_HalfPi = 1,
	Dataflow_MathConstants_TwoPi = 2,
	Dataflow_MathConstants_FourPi = 3,
	Dataflow_MathConstants_InvPi = 4,
	Dataflow_MathConstants_InvTwoPi = 5,
	Dataflow_MathConstants_Sqrt2 = 6,
	Dataflow_MathConstants_InvSqrt2 = 7,
	Dataflow_MathConstants_Sqrt3 = 8,
	Dataflow_MathConstants_InvSqrt3 = 9,
	Dataflow_FloatToInt_Function_E = 10,
	Dataflow_FloatToInt_Function_Gamma = 11,
	Dataflow_FloatToInt_Function_GoldenRatio = 12,
	Dataflow_FloatToInt_Function_ZeroTolerance = 13,
	Dataflow_Max = 14
};

// Object: Enum GeometryCollectionNodes.EDataflowMeshSplitIslandsMethod
enum class EDataflowMeshSplitIslandsMethod : uint8_t
{
	NoSplit = 0,
	ByMeshTopology = 1,
	ByVertexOverlap = 2,
	EDataflowMeshSplitIslandsMethod_MAX = 3
};

// Object: Enum GeometryCollectionNodes.EBoxLengthMeasurementMethod
enum class EBoxLengthMeasurementMethod : uint8_t
{
	XAxis = 0,
	YAxis = 1,
	ZAxis = 2,
	ShortestAxis = 3,
	LongestAxis = 4,
	Diagonal = 5,
	EBoxLengthMeasurementMethod_MAX = 6
};

// Object: Enum GeometryCollectionNodes.ERotationOrderEnum
enum class ERotationOrderEnum : uint8_t
{
	Dataflow_RotationOrder_XYZ = 0,
	Dataflow_RotationOrder_YZX = 1,
	Dataflow_RotationOrder_ZXY = 2,
	Dataflow_RotationOrder_XZY = 3,
	Dataflow_RotationOrder_YXZ = 4,
	Dataflow_RotationOrder_ZYX = 5,
	Dataflow_Max = 6
};

// Object: Enum GeometryCollectionNodes.ECompareOperationEnum
enum class ECompareOperationEnum : uint8_t
{
	Dataflow_Compare_Equal = 0,
	Dataflow_Compare_Smaller = 1,
	Dataflow_Compare_SmallerOrEqual = 2,
	Dataflow_Compare_Greater = 3,
	Dataflow_Compare_GreaterOrEqual = 4,
	Dataflow_Compare_NotEqual = 5,
	Dataflow_Max = 6
};

// Object: Enum GeometryCollectionNodes.EBooleanOperationEnum
enum class EBooleanOperationEnum : uint8_t
{
	Dataflow_And = 0,
	Dataflow_Or = 1,
	Dataflow_Not = 2,
	Dataflow_Max = 3
};

// Object: Enum GeometryCollectionNodes.EAnchorStateEnum
enum class EAnchorStateEnum : uint8_t
{
	Dataflow_AnchorState_Anchored = 0,
	Dataflow_AnchorState_NotAnchored = 1,
	Dataflow_Max = 2
};

// Object: Enum GeometryCollectionNodes.EDataflowGeometryCollectionDynamicState
enum class EDataflowGeometryCollectionDynamicState : uint8_t
{
	None = 0,
	Dynamic = 1,
	Kinematic = 2,
	Static = 3,
	EDataflowGeometryCollectionDynamicState_MAX = 4
};

// Object: Enum GeometryCollectionNodes.EProximityMethodEnum
enum class EProximityMethodEnum : uint8_t
{
	Dataflow_ProximityMethod_Precise = 0,
	Dataflow_ProximityMethod_ConvexHull = 1,
	Dataflow_Max = 2
};

// Object: Enum GeometryCollectionNodes.EProximityContactFilteringMethodEnum
enum class EProximityContactFilteringMethodEnum : uint8_t
{
	Dataflow_ProximityContactFilteringMethod_ProjectedBoundsOverlap = 0,
	Dataflow_ProximityContactFilteringMethod_ConvexHullSharp = 1,
	Dataflow_ProximityContactFilteringMethod_ConvexHullArea = 2,
	Dataflow_Max = 3
};

// Object: Enum GeometryCollectionNodes.EConnectionContactAreaMethodEnum
enum class EConnectionContactAreaMethodEnum : uint8_t
{
	Dataflow_ConnectionContactAreaMethod_None = 0,
	Dataflow_ProximityContactFilteringMethod_ConvexHullArea = 1,
	Dataflow_Max = 2
};

// Object: Enum GeometryCollectionNodes.EStandardGroupNameEnum
enum class EStandardGroupNameEnum : uint8_t
{
	Dataflow_EStandardGroupNameEnum_Transform = 0,
	Dataflow_EStandardGroupNameEnum_Geometry = 1,
	Dataflow_EStandardGroupNameEnum_Faces = 2,
	Dataflow_EStandardGroupNameEnum_Vertices = 3,
	Dataflow_EStandardGroupNameEnum_Material = 4,
	Dataflow_EStandardGroupNameEnum_Breaking = 5,
	Dataflow_EStandardGroupNameEnum_Custom = 6,
	Dataflow_Max = 7
};

// Object: Enum GeometryCollectionNodes.ECustomAttributeTypeEnum
enum class ECustomAttributeTypeEnum : uint8_t
{
	Dataflow_CustomAttributeType_UInt8 = 0,
	Dataflow_CustomAttributeType_Int32 = 1,
	Dataflow_CustomAttributeType_Float = 2,
	Dataflow_CustomAttributeType_Double = 3,
	Dataflow_CustomAttributeType_Bool = 4,
	Dataflow_CustomAttributeType_String = 5,
	Dataflow_CustomAttributeType_Vector2f = 6,
	Dataflow_CustomAttributeType_Vector3f = 7,
	Dataflow_CustomAttributeType_Vector3d = 8,
	Dataflow_CustomAttributeType_Vector4f = 9,
	Dataflow_CustomAttributeType_LinearColor = 10,
	Dataflow_CustomAttributeType_Transform = 11,
	Dataflow_CustomAttributeType_Quat4f = 12,
	Dataflow_CustomAttributeType_Box = 13,
	Dataflow_CustomAttributeType_Guid = 14,
	Dataflow_CustomAttributeType_Int32Set = 15,
	Dataflow_CustomAttributeType_Int32Array = 16,
	Dataflow_CustomAttributeType_IntVector = 17,
	Dataflow_CustomAttributeType_IntVector2 = 18,
	Dataflow_CustomAttributeType_IntVector4 = 19,
	Dataflow_CustomAttributeType_IntVector2Array = 20,
	Dataflow_CustomAttributeType_FloatArray = 21,
	Dataflow_CustomAttributeType_Vector2fArray = 22,
	Dataflow_CustomAttributeType_FVector3fArray = 23,
	Dataflow_Max = 24
};

// Object: Enum GeometryCollectionNodes.ESetOperationEnum
enum class ESetOperationEnum : uint8_t
{
	Dataflow_SetOperation_AND = 0,
	Dataflow_SetOperation_OR = 1,
	Dataflow_SetOperation_XOR = 2,
	Dataflow_SetOperation_Subtract = 3,
	Dataflow_Max = 4
};

// Object: Enum GeometryCollectionNodes.ERangeSettingEnum
enum class ERangeSettingEnum : uint8_t
{
	Dataflow_RangeSetting_InsideRange = 0,
	Dataflow_RangeSetting_OutsideRange = 1,
	Dataflow_Max = 2
};

// Object: Enum GeometryCollectionNodes.ESelectSubjectTypeEnum
enum class ESelectSubjectTypeEnum : uint8_t
{
	Dataflow_SelectSubjectType_Vertices = 0,
	Dataflow_SelectSubjectType_BoundingBox = 1,
	Dataflow_SelectSubjectType_Centroid = 2,
	Dataflow_Max = 3
};

// Object: Enum GeometryCollectionNodes.ESelectionByAttrGroup
enum class ESelectionByAttrGroup : uint8_t
{
	Vertices = 0,
	Faces = 1,
	Transform = 2,
	Geometry = 3,
	Material = 4,
	ESelectionByAttrGroup_MAX = 5
};

// Object: Enum GeometryCollectionNodes.ESelectionByAttrOperation
enum class ESelectionByAttrOperation : uint8_t
{
	Equal = 0,
	NotEqual = 1,
	Greater = 2,
	GreaterOrEqual = 3,
	Smaller = 4,
	SmallerOrEqual = 5,
	Maximum = 6,
	Minimum = 7,
	ESelectionByAttrOperation_MAX = 8
};

// Object: Enum GeometryCollectionNodes.EDataflowTransferVertexAttributeNodeFalloff
enum class EDataflowTransferVertexAttributeNodeFalloff : uint8_t
{
	Squared = 0,
	Linear = 1,
	None = 2,
	Dataflow_Max = 3,
	EDataflowTransferVertexAttributeNodeFalloff_MAX = 4
};

// Object: Enum GeometryCollectionNodes.EDataflowTransferVertexAttributeNodeSourceScale
enum class EDataflowTransferVertexAttributeNodeSourceScale : uint8_t
{
	Component_Edge = 0,
	Asset_Edge = 1,
	Asset_Bound = 2,
	Dataflow_Max = 3,
	EDataflowTransferVertexAttributeNodeSourceScale_MAX = 4
};

// Object: Enum GeometryCollectionNodes.EDataflowTransferVertexAttributeNodeBoundingVolume
enum class EDataflowTransferVertexAttributeNodeBoundingVolume : uint8_t
{
	Vertex = 0,
	Triangle = 1,
	Dataflow_Max = 2,
	EDataflowTransferVertexAttributeNodeBoundingVolume_MAX = 3
};

// Object: Enum GeometryCollectionNodes.EDataflowTransferVertexAttributeNodeTransferMethod
enum class EDataflowTransferVertexAttributeNodeTransferMethod : uint8_t
{
	Component = 0,
	Global = 1,
	None = 2,
	Dataflow_Max = 3,
	EDataflowTransferVertexAttributeNodeTransferMethod_MAX = 4
};

// Object: Enum GeometryCollectionNodes.ESetKinematicVertexSelectionKinematicValue
enum class ESetKinematicVertexSelectionKinematicValue : uint8_t
{
	SetKinematic = 0,
	SetNonKinematic = 1,
	ESetKinematicVertexSelectionKinematicValue_MAX = 2
};

// Object: Enum GeometryCollectionNodes.EConvexOverlapRemovalMethodEnum
enum class EConvexOverlapRemovalMethodEnum : uint8_t
{
	Dataflow_EConvexOverlapRemovalMethod_None = 0,
	Dataflow_EConvexOverlapRemovalMethod_All = 1,
	Dataflow_EConvexOverlapRemovalMethod_OnlyClusters = 2,
	Dataflow_EConvexOverlapRemovalMethod_OnlyClustersVsClusters = 3,
	Dataflow_Max = 4
};

// Object: Enum GeometryCollectionNodes.ENegativeSpaceSampleMethodDataflowEnum
enum class ENegativeSpaceSampleMethodDataflowEnum : uint8_t
{
	Uniform = 0,
	VoxelSearch = 1,
	NavigableVoxelSearch = 2,
	ENegativeSpaceSampleMethodDataflowEnum_MAX = 3
};

// Package: GeometryCollectionDepNodes
// Enums: 3

// Object: Enum GeometryCollectionDepNodes.EDataflowTransferNodeFalloff
enum class EDataflowTransferNodeFalloff : uint8_t
{
	Dataflow_Transfer_Squared = 0,
	Dataflow_Transfer_Linear = 1,
	Dataflow_Transfer_None = 2,
	Dataflow_Transfer_Dataflow_Max = 3,
	Dataflow_Transfer_MAX = 4
};

// Object: Enum GeometryCollectionDepNodes.EDataflowTransferNodeSampleScale
enum class EDataflowTransferNodeSampleScale : uint8_t
{
	Dataflow_Transfer_Component_Edge = 0,
	Dataflow_Transfer_Asset_Edge = 1,
	Dataflow_Transfer_Asset_Bound = 2,
	Dataflow_Transfer_Dataflow_Max = 3,
	Dataflow_Transfer_MAX = 4
};

// Object: Enum GeometryCollectionDepNodes.EDataflowTransferNodeBoundingVolume
enum class EDataflowTransferNodeBoundingVolume : uint8_t
{
	Dataflow_Transfer_Vertex = 0,
	Dataflow_Transfer_Triangle = 1,
	Dataflow_Transfer_Dataflow_Max = 2,
	Dataflow_Transfer_MAX = 3
};

// Package: AnimEnum_RootYawOffsetMode
// Enums: 1

// Object: UserDefinedEnum AnimEnum_RootYawOffsetMode.AnimEnum_RootYawOffsetMode
enum class EAnimEnum_RootYawOffsetMode : uint8_t
{
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator2 = 2,
	AnimEnum_MAX = 3
};

// Package: AnimEnum_CardinalDirection
// Enums: 1

// Object: UserDefinedEnum AnimEnum_CardinalDirection.AnimEnum_CardinalDirection
enum class EAnimEnum_CardinalDirection : uint8_t
{
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator2 = 2,
	NewEnumerator3 = 3,
	AnimEnum_MAX = 4
};

