// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Door.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHARACTERMOVECPP_Door_generated_h
#error "Door.generated.h already included, missing '#pragma once' in Door.h"
#endif
#define CHARACTERMOVECPP_Door_generated_h

#define FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_Door_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNewOpenDoor);


#define FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_Door_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CharacterMoveCPP"), NO_API) \
	DECLARE_SERIALIZER(ADoor) \
	virtual UObject* _getUObject() const override { return const_cast<ADoor*>(this); }


#define FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_Door_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADoor(ADoor&&); \
	ADoor(const ADoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoor) \
	NO_API virtual ~ADoor();


#define FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_Door_h_12_PROLOG
#define FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_Door_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_Door_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_Door_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_Door_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHARACTERMOVECPP_API UClass* StaticClass<class ADoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_Door_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
