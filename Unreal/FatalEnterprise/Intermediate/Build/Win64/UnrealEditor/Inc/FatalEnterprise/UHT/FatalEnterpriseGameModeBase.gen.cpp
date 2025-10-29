// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FatalEnterprise/FatalEnterpriseGameModeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFatalEnterpriseGameModeBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FATALENTERPRISE_API UClass* Z_Construct_UClass_AFatalEnterpriseGameModeBase();
FATALENTERPRISE_API UClass* Z_Construct_UClass_AFatalEnterpriseGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_FatalEnterprise();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFatalEnterpriseGameModeBase *********************************************
void AFatalEnterpriseGameModeBase::StaticRegisterNativesAFatalEnterpriseGameModeBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFatalEnterpriseGameModeBase;
UClass* AFatalEnterpriseGameModeBase::GetPrivateStaticClass()
{
	using TClass = AFatalEnterpriseGameModeBase;
	if (!Z_Registration_Info_UClass_AFatalEnterpriseGameModeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FatalEnterpriseGameModeBase"),
			Z_Registration_Info_UClass_AFatalEnterpriseGameModeBase.InnerSingleton,
			StaticRegisterNativesAFatalEnterpriseGameModeBase,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AFatalEnterpriseGameModeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AFatalEnterpriseGameModeBase_NoRegister()
{
	return AFatalEnterpriseGameModeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFatalEnterpriseGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FatalEnterpriseGameModeBase.h" },
		{ "ModuleRelativePath", "FatalEnterpriseGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFatalEnterpriseGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFatalEnterpriseGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FatalEnterprise,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFatalEnterpriseGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFatalEnterpriseGameModeBase_Statics::ClassParams = {
	&AFatalEnterpriseGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFatalEnterpriseGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AFatalEnterpriseGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFatalEnterpriseGameModeBase()
{
	if (!Z_Registration_Info_UClass_AFatalEnterpriseGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFatalEnterpriseGameModeBase.OuterSingleton, Z_Construct_UClass_AFatalEnterpriseGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFatalEnterpriseGameModeBase.OuterSingleton;
}
AFatalEnterpriseGameModeBase::AFatalEnterpriseGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFatalEnterpriseGameModeBase);
AFatalEnterpriseGameModeBase::~AFatalEnterpriseGameModeBase() {}
// ********** End Class AFatalEnterpriseGameModeBase ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Fatal_Enterprise_Unreal_FatalEnterprise_Source_FatalEnterprise_FatalEnterpriseGameModeBase_h__Script_FatalEnterprise_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFatalEnterpriseGameModeBase, AFatalEnterpriseGameModeBase::StaticClass, TEXT("AFatalEnterpriseGameModeBase"), &Z_Registration_Info_UClass_AFatalEnterpriseGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFatalEnterpriseGameModeBase), 1477477585U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Fatal_Enterprise_Unreal_FatalEnterprise_Source_FatalEnterprise_FatalEnterpriseGameModeBase_h__Script_FatalEnterprise_2199882345(TEXT("/Script/FatalEnterprise"),
	Z_CompiledInDeferFile_FID_Fatal_Enterprise_Unreal_FatalEnterprise_Source_FatalEnterprise_FatalEnterpriseGameModeBase_h__Script_FatalEnterprise_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Fatal_Enterprise_Unreal_FatalEnterprise_Source_FatalEnterprise_FatalEnterpriseGameModeBase_h__Script_FatalEnterprise_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
