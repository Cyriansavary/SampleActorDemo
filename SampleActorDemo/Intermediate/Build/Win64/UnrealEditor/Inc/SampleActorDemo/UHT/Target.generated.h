// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Target.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FHitResult;
#ifdef SAMPLEACTORDEMO_Target_generated_h
#error "Target.generated.h already included, missing '#pragma once' in Target.h"
#endif
#define SAMPLEACTORDEMO_Target_generated_h

#define FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_Target_h_12_SPARSE_DATA
#define FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_Target_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_Target_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_Target_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_Target_h_12_ACCESSORS
#define FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_Target_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATarget(); \
	friend struct Z_Construct_UClass_ATarget_Statics; \
public: \
	DECLARE_CLASS(ATarget, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SampleActorDemo"), NO_API) \
	DECLARE_SERIALIZER(ATarget)


#define FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_Target_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATarget(ATarget&&); \
	NO_API ATarget(const ATarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATarget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATarget) \
	NO_API virtual ~ATarget();


#define FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_Target_h_9_PROLOG
#define FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_Target_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_Target_h_12_SPARSE_DATA \
	FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_Target_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_Target_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_Target_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_Target_h_12_ACCESSORS \
	FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_Target_h_12_INCLASS_NO_PURE_DECLS \
	FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_Target_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLEACTORDEMO_API UClass* StaticClass<class ATarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_dev_SampleActorDemo_SampleActorDemo_Source_SampleActorDemo_Target_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
