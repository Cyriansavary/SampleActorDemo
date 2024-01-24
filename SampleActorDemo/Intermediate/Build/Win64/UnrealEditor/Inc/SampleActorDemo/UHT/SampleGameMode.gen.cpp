// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleActorDemo/SampleGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSampleGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SAMPLEACTORDEMO_API UClass* Z_Construct_UClass_ASampleGameMode();
	SAMPLEACTORDEMO_API UClass* Z_Construct_UClass_ASampleGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SampleActorDemo();
// End Cross Module References
	DEFINE_FUNCTION(ASampleGameMode::execAddScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddScore();
		P_NATIVE_END;
	}
	static FName NAME_ASampleGameMode_OnPointIncrease = FName(TEXT("OnPointIncrease"));
	void ASampleGameMode::OnPointIncrease()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASampleGameMode_OnPointIncrease),NULL);
	}
	static FName NAME_ASampleGameMode_OnWin = FName(TEXT("OnWin"));
	void ASampleGameMode::OnWin()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASampleGameMode_OnWin),NULL);
	}
	void ASampleGameMode::StaticRegisterNativesASampleGameMode()
	{
		UClass* Class = ASampleGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddScore", &ASampleGameMode::execAddScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASampleGameMode_AddScore_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASampleGameMode_AddScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SampleGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASampleGameMode_AddScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASampleGameMode, nullptr, "AddScore", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASampleGameMode_AddScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASampleGameMode_AddScore_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASampleGameMode_AddScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASampleGameMode_AddScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASampleGameMode_OnPointIncrease_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASampleGameMode_OnPointIncrease_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SampleGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASampleGameMode_OnPointIncrease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASampleGameMode, nullptr, "OnPointIncrease", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASampleGameMode_OnPointIncrease_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASampleGameMode_OnPointIncrease_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASampleGameMode_OnPointIncrease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASampleGameMode_OnPointIncrease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASampleGameMode_OnWin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASampleGameMode_OnWin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SampleGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASampleGameMode_OnWin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASampleGameMode, nullptr, "OnWin", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASampleGameMode_OnWin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASampleGameMode_OnWin_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASampleGameMode_OnWin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASampleGameMode_OnWin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASampleGameMode);
	UClass* Z_Construct_UClass_ASampleGameMode_NoRegister()
	{
		return ASampleGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASampleGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointToWin_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointToWin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerScore_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerScore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASampleGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SampleActorDemo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASampleGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASampleGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASampleGameMode_AddScore, "AddScore" }, // 2958733336
		{ &Z_Construct_UFunction_ASampleGameMode_OnPointIncrease, "OnPointIncrease" }, // 4022280062
		{ &Z_Construct_UFunction_ASampleGameMode_OnWin, "OnWin" }, // 3552045756
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASampleGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASampleGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SampleGameMode.h" },
		{ "ModuleRelativePath", "SampleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASampleGameMode_Statics::NewProp_PointToWin_MetaData[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "SampleGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASampleGameMode_Statics::NewProp_PointToWin = { "PointToWin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASampleGameMode, PointToWin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASampleGameMode_Statics::NewProp_PointToWin_MetaData), Z_Construct_UClass_ASampleGameMode_Statics::NewProp_PointToWin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASampleGameMode_Statics::NewProp_PlayerScore_MetaData[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "SampleGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASampleGameMode_Statics::NewProp_PlayerScore = { "PlayerScore", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASampleGameMode, PlayerScore), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASampleGameMode_Statics::NewProp_PlayerScore_MetaData), Z_Construct_UClass_ASampleGameMode_Statics::NewProp_PlayerScore_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASampleGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASampleGameMode_Statics::NewProp_PointToWin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASampleGameMode_Statics::NewProp_PlayerScore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASampleGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASampleGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASampleGameMode_Statics::ClassParams = {
		&ASampleGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASampleGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASampleGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASampleGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASampleGameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASampleGameMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASampleGameMode()
	{
		if (!Z_Registration_Info_UClass_ASampleGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASampleGameMode.OuterSingleton, Z_Construct_UClass_ASampleGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASampleGameMode.OuterSingleton;
	}
	template<> SAMPLEACTORDEMO_API UClass* StaticClass<ASampleGameMode>()
	{
		return ASampleGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASampleGameMode);
	ASampleGameMode::~ASampleGameMode() {}
	struct Z_CompiledInDeferFile_FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_SampleGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_SampleGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASampleGameMode, ASampleGameMode::StaticClass, TEXT("ASampleGameMode"), &Z_Registration_Info_UClass_ASampleGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASampleGameMode), 3959542539U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_SampleGameMode_h_746514077(TEXT("/Script/SampleActorDemo"),
		Z_CompiledInDeferFile_FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_SampleGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_SampleGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
