// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/BirdActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBirdActor() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_ABirdActor_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ABirdActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ABirdActor::StaticRegisterNativesABirdActor()
	{
	}
	UClass* Z_Construct_UClass_ABirdActor_NoRegister()
	{
		return ABirdActor::StaticClass();
	}
	struct Z_Construct_UClass_ABirdActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BirdMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BirdMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BirdMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BirdMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeparationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeparationRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeparationScalar_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeparationScalar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlignmentScalar_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlignmentScalar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CohesionScalar_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CohesionScalar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedScalar_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedScalar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationScalar_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationScalar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABirdActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABirdActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BirdActor.h" },
		{ "ModuleRelativePath", "BirdActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABirdActor_Statics::NewProp_BirdMeshComponent_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "// Bird mesh\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BirdActor.h" },
		{ "ToolTip", "Bird mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABirdActor_Statics::NewProp_BirdMeshComponent = { "BirdMeshComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABirdActor, BirdMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABirdActor_Statics::NewProp_BirdMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABirdActor_Statics::NewProp_BirdMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABirdActor_Statics::NewProp_BirdMaterialInstance_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "// Bird material\n" },
		{ "ModuleRelativePath", "BirdActor.h" },
		{ "ToolTip", "Bird material" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABirdActor_Statics::NewProp_BirdMaterialInstance = { "BirdMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABirdActor, BirdMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABirdActor_Statics::NewProp_BirdMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABirdActor_Statics::NewProp_BirdMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABirdActor_Statics::NewProp_MaxVelocity_MetaData[] = {
		{ "Category", "Boids" },
		{ "ModuleRelativePath", "BirdActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABirdActor_Statics::NewProp_MaxVelocity = { "MaxVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABirdActor, MaxVelocity), METADATA_PARAMS(Z_Construct_UClass_ABirdActor_Statics::NewProp_MaxVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABirdActor_Statics::NewProp_MaxVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABirdActor_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Boids" },
		{ "ModuleRelativePath", "BirdActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABirdActor_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABirdActor, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABirdActor_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABirdActor_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABirdActor_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Boids" },
		{ "ModuleRelativePath", "BirdActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABirdActor_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABirdActor, Radius), METADATA_PARAMS(Z_Construct_UClass_ABirdActor_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABirdActor_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABirdActor_Statics::NewProp_SeparationRadius_MetaData[] = {
		{ "Category", "Boids" },
		{ "ModuleRelativePath", "BirdActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABirdActor_Statics::NewProp_SeparationRadius = { "SeparationRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABirdActor, SeparationRadius), METADATA_PARAMS(Z_Construct_UClass_ABirdActor_Statics::NewProp_SeparationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABirdActor_Statics::NewProp_SeparationRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABirdActor_Statics::NewProp_SeparationScalar_MetaData[] = {
		{ "Category", "Boids" },
		{ "ModuleRelativePath", "BirdActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABirdActor_Statics::NewProp_SeparationScalar = { "SeparationScalar", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABirdActor, SeparationScalar), METADATA_PARAMS(Z_Construct_UClass_ABirdActor_Statics::NewProp_SeparationScalar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABirdActor_Statics::NewProp_SeparationScalar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABirdActor_Statics::NewProp_AlignmentScalar_MetaData[] = {
		{ "Category", "Boids" },
		{ "ModuleRelativePath", "BirdActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABirdActor_Statics::NewProp_AlignmentScalar = { "AlignmentScalar", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABirdActor, AlignmentScalar), METADATA_PARAMS(Z_Construct_UClass_ABirdActor_Statics::NewProp_AlignmentScalar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABirdActor_Statics::NewProp_AlignmentScalar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABirdActor_Statics::NewProp_CohesionScalar_MetaData[] = {
		{ "Category", "Boids" },
		{ "ModuleRelativePath", "BirdActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABirdActor_Statics::NewProp_CohesionScalar = { "CohesionScalar", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABirdActor, CohesionScalar), METADATA_PARAMS(Z_Construct_UClass_ABirdActor_Statics::NewProp_CohesionScalar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABirdActor_Statics::NewProp_CohesionScalar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABirdActor_Statics::NewProp_SpeedScalar_MetaData[] = {
		{ "Category", "Boids" },
		{ "ModuleRelativePath", "BirdActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABirdActor_Statics::NewProp_SpeedScalar = { "SpeedScalar", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABirdActor, SpeedScalar), METADATA_PARAMS(Z_Construct_UClass_ABirdActor_Statics::NewProp_SpeedScalar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABirdActor_Statics::NewProp_SpeedScalar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABirdActor_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Boids" },
		{ "ModuleRelativePath", "BirdActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABirdActor_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABirdActor, Speed), METADATA_PARAMS(Z_Construct_UClass_ABirdActor_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABirdActor_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABirdActor_Statics::NewProp_RotationScalar_MetaData[] = {
		{ "Category", "Boids" },
		{ "ModuleRelativePath", "BirdActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABirdActor_Statics::NewProp_RotationScalar = { "RotationScalar", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABirdActor, RotationScalar), METADATA_PARAMS(Z_Construct_UClass_ABirdActor_Statics::NewProp_RotationScalar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABirdActor_Statics::NewProp_RotationScalar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABirdActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABirdActor_Statics::NewProp_BirdMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABirdActor_Statics::NewProp_BirdMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABirdActor_Statics::NewProp_MaxVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABirdActor_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABirdActor_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABirdActor_Statics::NewProp_SeparationRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABirdActor_Statics::NewProp_SeparationScalar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABirdActor_Statics::NewProp_AlignmentScalar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABirdActor_Statics::NewProp_CohesionScalar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABirdActor_Statics::NewProp_SpeedScalar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABirdActor_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABirdActor_Statics::NewProp_RotationScalar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABirdActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABirdActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABirdActor_Statics::ClassParams = {
		&ABirdActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABirdActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABirdActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABirdActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABirdActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABirdActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABirdActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABirdActor, 850836145);
	template<> MYPROJECT_API UClass* StaticClass<ABirdActor>()
	{
		return ABirdActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABirdActor(Z_Construct_UClass_ABirdActor, &ABirdActor::StaticClass, TEXT("/Script/MyProject"), TEXT("ABirdActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABirdActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
