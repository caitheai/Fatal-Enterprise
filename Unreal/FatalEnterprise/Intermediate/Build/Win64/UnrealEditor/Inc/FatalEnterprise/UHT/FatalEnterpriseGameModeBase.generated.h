// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FatalEnterpriseGameModeBase.h"

#ifdef FATALENTERPRISE_FatalEnterpriseGameModeBase_generated_h
#error "FatalEnterpriseGameModeBase.generated.h already included, missing '#pragma once' in FatalEnterpriseGameModeBase.h"
#endif
#define FATALENTERPRISE_FatalEnterpriseGameModeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFatalEnterpriseGameModeBase *********************************************
FATALENTERPRISE_API UClass* Z_Construct_UClass_AFatalEnterpriseGameModeBase_NoRegister();

#define FID_Fatal_Enterprise_Unreal_FatalEnterprise_Source_FatalEnterprise_FatalEnterpriseGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFatalEnterpriseGameModeBase(); \
	friend struct Z_Construct_UClass_AFatalEnterpriseGameModeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FATALENTERPRISE_API UClass* Z_Construct_UClass_AFatalEnterpriseGameModeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AFatalEnterpriseGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FatalEnterprise"), Z_Construct_UClass_AFatalEnterpriseGameModeBase_NoRegister) \
	DECLARE_SERIALIZER(AFatalEnterpriseGameModeBase)


#define FID_Fatal_Enterprise_Unreal_FatalEnterprise_Source_FatalEnterprise_FatalEnterpriseGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFatalEnterpriseGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFatalEnterpriseGameModeBase(AFatalEnterpriseGameModeBase&&) = delete; \
	AFatalEnterpriseGameModeBase(const AFatalEnterpriseGameModeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFatalEnterpriseGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFatalEnterpriseGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFatalEnterpriseGameModeBase) \
	NO_API virtual ~AFatalEnterpriseGameModeBase();


#define FID_Fatal_Enterprise_Unreal_FatalEnterprise_Source_FatalEnterprise_FatalEnterpriseGameModeBase_h_12_PROLOG
#define FID_Fatal_Enterprise_Unreal_FatalEnterprise_Source_FatalEnterprise_FatalEnterpriseGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Fatal_Enterprise_Unreal_FatalEnterprise_Source_FatalEnterprise_FatalEnterpriseGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Fatal_Enterprise_Unreal_FatalEnterprise_Source_FatalEnterprise_FatalEnterpriseGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFatalEnterpriseGameModeBase;

// ********** End Class AFatalEnterpriseGameModeBase ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Fatal_Enterprise_Unreal_FatalEnterprise_Source_FatalEnterprise_FatalEnterpriseGameModeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
