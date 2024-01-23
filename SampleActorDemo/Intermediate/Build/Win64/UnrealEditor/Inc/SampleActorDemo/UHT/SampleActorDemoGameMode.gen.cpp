// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleActorDemo/SampleActorDemoGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSampleActorDemoGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SAMPLEACTORDEMO_API UClass* Z_Construct_UClass_ASampleActorDemoGameMode();
	SAMPLEACTORDEMO_API UClass* Z_Construct_UClass_ASampleActorDemoGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SampleActorDemo();
// End Cross Module References
	void ASampleActorDemoGameMode::StaticRegisterNativesASampleActorDemoGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASampleActorDemoGameMode);
	UClass* Z_Construct_UClass_ASampleActorDemoGameMode_NoRegister()
	{
		return ASampleActorDemoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASampleActorDemoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASampleActorDemoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SampleActorDemo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASampleActorDemoGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASampleActorDemoGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SampleActorDemoGameMode.h" },
		{ "ModuleRelativePath", "SampleActorDemoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASampleActorDemoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASampleActorDemoGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASampleActorDemoGameMode_Statics::ClassParams = {
		&ASampleActorDemoGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASampleActorDemoGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASampleActorDemoGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASampleActorDemoGameMode()
	{
		if (!Z_Registration_Info_UClass_ASampleActorDemoGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASampleActorDemoGameMode.OuterSingleton, Z_Construct_UClass_ASampleActorDemoGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASampleActorDemoGameMode.OuterSingleton;
	}
	template<> SAMPLEACTORDEMO_API UClass* StaticClass<ASampleActorDemoGameMode>()
	{
		return ASampleActorDemoGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASampleActorDemoGameMode);
	ASampleActorDemoGameMode::~ASampleActorDemoGameMode() {}
	struct Z_CompiledInDeferFile_FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_SampleActorDemoGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_SampleActorDemoGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASampleActorDemoGameMode, ASampleActorDemoGameMode::StaticClass, TEXT("ASampleActorDemoGameMode"), &Z_Registration_Info_UClass_ASampleActorDemoGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASampleActorDemoGameMode), 3232958860U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_SampleActorDemoGameMode_h_903192573(TEXT("/Script/SampleActorDemo"),
		Z_CompiledInDeferFile_FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_SampleActorDemoGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_SampleActorDemoGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
