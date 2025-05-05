// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef CHARACTERMOVECPP_InteractInterface_generated_h
#error "InteractInterface.generated.h already included, missing '#pragma once' in InteractInterface.h"
#endif
#define CHARACTERMOVECPP_InteractInterface_generated_h

#define FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_InteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OpenDoor_Implementation(AActor* Interactor) {}; \
	DECLARE_FUNCTION(execOpenDoor);


#define FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_InteractInterface_h_13_CALLBACK_WRAPPERS
#define FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_InteractInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHARACTERMOVECPP_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractInterface(UInteractInterface&&); \
	UInteractInterface(const UInteractInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHARACTERMOVECPP_API, UInteractInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface) \
	CHARACTERMOVECPP_API virtual ~UInteractInterface();


#define FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractInterface(); \
	friend struct Z_Construct_UClass_UInteractInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CharacterMoveCPP"), CHARACTERMOVECPP_API) \
	DECLARE_SERIALIZER(UInteractInterface)


#define FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_InteractInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_InteractInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_InteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	static void Execute_OpenDoor(UObject* O, AActor* Interactor); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_InteractInterface_h_10_PROLOG
#define FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_InteractInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_InteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_InteractInterface_h_13_CALLBACK_WRAPPERS \
	FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_InteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHARACTERMOVECPP_API UClass* StaticClass<class UInteractInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_CharacterMoveCPP_Source_CharacterMoveCPP_InteractInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
