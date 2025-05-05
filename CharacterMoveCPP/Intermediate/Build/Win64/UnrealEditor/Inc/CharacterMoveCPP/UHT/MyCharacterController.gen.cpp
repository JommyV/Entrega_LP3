// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharacterMoveCPP/MyCharacterController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacterController() {}

// Begin Cross Module References
CHARACTERMOVECPP_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
CHARACTERMOVECPP_API UClass* Z_Construct_UClass_AMyCharacterController();
CHARACTERMOVECPP_API UClass* Z_Construct_UClass_AMyCharacterController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_CharacterMoveCPP();
// End Cross Module References

// Begin Class AMyCharacterController
void AMyCharacterController::StaticRegisterNativesAMyCharacterController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCharacterController);
UClass* Z_Construct_UClass_AMyCharacterController_NoRegister()
{
	return AMyCharacterController::StaticClass();
}
struct Z_Construct_UClass_AMyCharacterController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MyCharacterController.h" },
		{ "ModuleRelativePath", "MyCharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionMove_MetaData[] = {
		{ "Category", "Player Input|Character Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Input Action to map to movement.\n" },
#endif
		{ "ModuleRelativePath", "MyCharacterController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Input Action to map to movement." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionJump_MetaData[] = {
		{ "Category", "Player Input|Character Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Input Action to map to jumping.\n" },
#endif
		{ "ModuleRelativePath", "MyCharacterController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Input Action to map to jumping." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionLook_MetaData[] = {
		{ "Category", "Player Input|Character Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Input Action to map to looking\n" },
#endif
		{ "ModuleRelativePath", "MyCharacterController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Input Action to map to looking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionInteract_MetaData[] = {
		{ "Category", "Player Input|Character Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//OpenDoorButton\n" },
#endif
		{ "ModuleRelativePath", "MyCharacterController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "OpenDoorButton" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContent_MetaData[] = {
		{ "Category", "Player Input|Character Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Input Mapping Context to use.\n" },
#endif
		{ "ModuleRelativePath", "MyCharacterController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Input Mapping Context to use." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnhancedInputComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used to store a reference to the InputComponent cast to an EnhancedInputComponent.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacterController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to store a reference to the InputComponent cast to an EnhancedInputComponent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used to store a reference to the pawn we are controlling.\n" },
#endif
		{ "ModuleRelativePath", "MyCharacterController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to store a reference to the pawn we are controlling." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionMove;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionJump;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionLook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionInteract;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnhancedInputComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacterController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterController_Statics::NewProp_ActionMove = { "ActionMove", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacterController, ActionMove), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionMove_MetaData), NewProp_ActionMove_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterController_Statics::NewProp_ActionJump = { "ActionJump", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacterController, ActionJump), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionJump_MetaData), NewProp_ActionJump_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterController_Statics::NewProp_ActionLook = { "ActionLook", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacterController, ActionLook), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionLook_MetaData), NewProp_ActionLook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterController_Statics::NewProp_ActionInteract = { "ActionInteract", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacterController, ActionInteract), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionInteract_MetaData), NewProp_ActionInteract_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterController_Statics::NewProp_InputMappingContent = { "InputMappingContent", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacterController, InputMappingContent), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContent_MetaData), NewProp_InputMappingContent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterController_Statics::NewProp_EnhancedInputComponent = { "EnhancedInputComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacterController, EnhancedInputComponent), Z_Construct_UClass_UEnhancedInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnhancedInputComponent_MetaData), NewProp_EnhancedInputComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterController_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacterController, PlayerCharacter), Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacter_MetaData), NewProp_PlayerCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCharacterController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterController_Statics::NewProp_ActionMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterController_Statics::NewProp_ActionJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterController_Statics::NewProp_ActionLook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterController_Statics::NewProp_ActionInteract,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterController_Statics::NewProp_InputMappingContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterController_Statics::NewProp_EnhancedInputComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterController_Statics::NewProp_PlayerCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyCharacterController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_CharacterMoveCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacterController_Statics::ClassParams = {
	&AMyCharacterController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyCharacterController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterController_Statics::PropPointers),
	0,
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCharacterController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyCharacterController()
{
	if (!Z_Registration_Info_UClass_AMyCharacterController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCharacterController.OuterSingleton, Z_Construct_UClass_AMyCharacterController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyCharacterController.OuterSingleton;
}
template<> CHARACTERMOVECPP_API UClass* StaticClass<AMyCharacterController>()
{
	return AMyCharacterController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacterController);
AMyCharacterController::~AMyCharacterController() {}
// End Class AMyCharacterController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_MyCharacterController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyCharacterController, AMyCharacterController::StaticClass, TEXT("AMyCharacterController"), &Z_Registration_Info_UClass_AMyCharacterController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCharacterController), 3646890768U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_MyCharacterController_h_1408491625(TEXT("/Script/CharacterMoveCPP"),
	Z_CompiledInDeferFile_FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_MyCharacterController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_MyCharacterController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
