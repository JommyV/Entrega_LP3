// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharacterMoveCPP/Door.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoor() {}

// Begin Cross Module References
CHARACTERMOVECPP_API UClass* Z_Construct_UClass_ADoor();
CHARACTERMOVECPP_API UClass* Z_Construct_UClass_ADoor_NoRegister();
CHARACTERMOVECPP_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CharacterMoveCPP();
// End Cross Module References

// Begin Class ADoor Function NewOpenDoor
struct Z_Construct_UFunction_ADoor_NewOpenDoor_Statics
{
	struct Door_eventNewOpenDoor_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Door.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADoor_NewOpenDoor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Door_eventNewOpenDoor_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoor_NewOpenDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoor_NewOpenDoor_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_NewOpenDoor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_NewOpenDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "NewOpenDoor", nullptr, nullptr, Z_Construct_UFunction_ADoor_NewOpenDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_NewOpenDoor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADoor_NewOpenDoor_Statics::Door_eventNewOpenDoor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_NewOpenDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoor_NewOpenDoor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADoor_NewOpenDoor_Statics::Door_eventNewOpenDoor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADoor_NewOpenDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoor_NewOpenDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADoor::execNewOpenDoor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NewOpenDoor(Z_Param_Value);
	P_NATIVE_END;
}
// End Class ADoor Function NewOpenDoor

// Begin Class ADoor
void ADoor::StaticRegisterNativesADoor()
{
	UClass* Class = ADoor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "NewOpenDoor", &ADoor::execNewOpenDoor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoor);
UClass* Z_Construct_UClass_ADoor_NoRegister()
{
	return ADoor::StaticClass();
}
struct Z_Construct_UClass_ADoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Door.h" },
		{ "ModuleRelativePath", "Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Anchor_MetaData[] = {
		{ "Category", "Door" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09UPROPERTY(EditAnywhere)\n\x09UStaticMeshComponent* Door;\n\n\x09UPROPERTY(EditAnywhere)\n\x09UStaticMeshComponent* DoorFrame;\n\x09*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Door.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere)\nUStaticMeshComponent* Door;\n\nUPROPERTY(EditAnywhere)\nUStaticMeshComponent* DoorFrame;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComp_MetaData[] = {
		{ "Category", "Door" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorRotateAngle_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Door.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Anchor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloatCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DoorRotateAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADoor_NewOpenDoor, "NewOpenDoor" }, // 810596256
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, Anchor), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Anchor_MetaData), NewProp_Anchor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_BoxComp = { "BoxComp", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, BoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComp_MetaData), NewProp_BoxComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_FloatCurve = { "FloatCurve", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, FloatCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatCurve_MetaData), NewProp_FloatCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_DoorRotateAngle = { "DoorRotateAngle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, DoorRotateAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorRotateAngle_MetaData), NewProp_DoorRotateAngle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_Anchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_BoxComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_FloatCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_DoorRotateAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADoor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CharacterMoveCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADoor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(ADoor, IInteractInterface), false },  // 3526433112
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoor_Statics::ClassParams = {
	&ADoor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADoor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADoor()
{
	if (!Z_Registration_Info_UClass_ADoor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoor.OuterSingleton, Z_Construct_UClass_ADoor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADoor.OuterSingleton;
}
template<> CHARACTERMOVECPP_API UClass* StaticClass<ADoor>()
{
	return ADoor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADoor);
ADoor::~ADoor() {}
// End Class ADoor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_Door_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADoor, ADoor::StaticClass, TEXT("ADoor"), &Z_Registration_Info_UClass_ADoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoor), 3920114989U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_Door_h_1587142081(TEXT("/Script/CharacterMoveCPP"),
	Z_CompiledInDeferFile_FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_Door_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_Door_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
