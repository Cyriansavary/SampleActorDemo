// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSampleActorDemo_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SampleActorDemo;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SampleActorDemo()
	{
		if (!Z_Registration_Info_UPackage__Script_SampleActorDemo.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SampleActorDemo",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xE7C1A5C7,
				0x391F8BBF,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SampleActorDemo.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SampleActorDemo.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SampleActorDemo(Z_Construct_UPackage__Script_SampleActorDemo, TEXT("/Script/SampleActorDemo"), Z_Registration_Info_UPackage__Script_SampleActorDemo, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE7C1A5C7, 0x391F8BBF));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
