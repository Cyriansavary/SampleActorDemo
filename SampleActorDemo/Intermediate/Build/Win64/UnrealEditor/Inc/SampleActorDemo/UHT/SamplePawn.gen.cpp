// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleActorDemo/SamplePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSamplePawn() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	SAMPLEACTORDEMO_API UClass* Z_Construct_UClass_ABullet_NoRegister();
	SAMPLEACTORDEMO_API UClass* Z_Construct_UClass_ASamplePawn();
	SAMPLEACTORDEMO_API UClass* Z_Construct_UClass_ASamplePawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SampleActorDemo();
// End Cross Module References
	void ASamplePawn::StaticRegisterNativesASamplePawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASamplePawn);
	UClass* Z_Construct_UClass_ASamplePawn_NoRegister()
	{
		return ASamplePawn::StaticClass();
	}
	struct Z_Construct_UClass_ASamplePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BulletClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletSpawnOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletSpawnOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASamplePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SampleActorDemo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASamplePawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASamplePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SamplePawn.h" },
		{ "ModuleRelativePath", "SamplePawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASamplePawn_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "SamplePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SamplePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASamplePawn_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASamplePawn, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASamplePawn_Statics::NewProp_StaticMesh_MetaData), Z_Construct_UClass_ASamplePawn_Statics::NewProp_StaticMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASamplePawn_Statics::NewProp_PawnMovement_MetaData[] = {
		{ "Category", "SamplePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SamplePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASamplePawn_Statics::NewProp_PawnMovement = { "PawnMovement", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASamplePawn, PawnMovement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASamplePawn_Statics::NewProp_PawnMovement_MetaData), Z_Construct_UClass_ASamplePawn_Statics::NewProp_PawnMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASamplePawn_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "SamplePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SamplePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASamplePawn_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASamplePawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASamplePawn_Statics::NewProp_Camera_MetaData), Z_Construct_UClass_ASamplePawn_Statics::NewProp_Camera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASamplePawn_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "SamplePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SamplePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASamplePawn_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASamplePawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASamplePawn_Statics::NewProp_SpringArm_MetaData), Z_Construct_UClass_ASamplePawn_Statics::NewProp_SpringArm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASamplePawn_Statics::NewProp_BulletClass_MetaData[] = {
		{ "Category", "SamplePawn" },
		{ "ModuleRelativePath", "SamplePawn.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASamplePawn_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASamplePawn, BulletClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ABullet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASamplePawn_Statics::NewProp_BulletClass_MetaData), Z_Construct_UClass_ASamplePawn_Statics::NewProp_BulletClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASamplePawn_Statics::NewProp_BulletSpawnOffset_MetaData[] = {
		{ "Category", "SamplePawn" },
		{ "ModuleRelativePath", "SamplePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASamplePawn_Statics::NewProp_BulletSpawnOffset = { "BulletSpawnOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASamplePawn, BulletSpawnOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASamplePawn_Statics::NewProp_BulletSpawnOffset_MetaData), Z_Construct_UClass_ASamplePawn_Statics::NewProp_BulletSpawnOffset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASamplePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASamplePawn_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASamplePawn_Statics::NewProp_PawnMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASamplePawn_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASamplePawn_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASamplePawn_Statics::NewProp_BulletClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASamplePawn_Statics::NewProp_BulletSpawnOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASamplePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASamplePawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASamplePawn_Statics::ClassParams = {
		&ASamplePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASamplePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASamplePawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASamplePawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ASamplePawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASamplePawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASamplePawn()
	{
		if (!Z_Registration_Info_UClass_ASamplePawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASamplePawn.OuterSingleton, Z_Construct_UClass_ASamplePawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASamplePawn.OuterSingleton;
	}
	template<> SAMPLEACTORDEMO_API UClass* StaticClass<ASamplePawn>()
	{
		return ASamplePawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASamplePawn);
	ASamplePawn::~ASamplePawn() {}
	struct Z_CompiledInDeferFile_FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_SamplePawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_SamplePawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASamplePawn, ASamplePawn::StaticClass, TEXT("ASamplePawn"), &Z_Registration_Info_UClass_ASamplePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASamplePawn), 3016151629U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_SamplePawn_h_2975064066(TEXT("/Script/SampleActorDemo"),
		Z_CompiledInDeferFile_FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_SamplePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_SamplePawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
