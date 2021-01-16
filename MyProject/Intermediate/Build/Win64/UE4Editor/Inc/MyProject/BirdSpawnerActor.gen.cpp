// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/BirdSpawnerActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBirdSpawnerActor() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_ABirdSpawnerActor_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ABirdSpawnerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MYPROJECT_API UClass* Z_Construct_UClass_ABirdActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABirdSpawnerActor::execSpawnBird)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnBird();
		P_NATIVE_END;
	}
	void ABirdSpawnerActor::StaticRegisterNativesABirdSpawnerActor()
	{
		UClass* Class = ABirdSpawnerActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnBird", &ABirdSpawnerActor::execSpawnBird },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABirdSpawnerActor_SpawnBird_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABirdSpawnerActor_SpawnBird_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BirdSpawnerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABirdSpawnerActor_SpawnBird_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABirdSpawnerActor, nullptr, "SpawnBird", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABirdSpawnerActor_SpawnBird_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABirdSpawnerActor_SpawnBird_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABirdSpawnerActor_SpawnBird()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABirdSpawnerActor_SpawnBird_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABirdSpawnerActor_NoRegister()
	{
		return ABirdSpawnerActor::StaticClass();
	}
	struct Z_Construct_UClass_ABirdSpawnerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BirdActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BirdActorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABirdSpawnerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABirdSpawnerActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABirdSpawnerActor_SpawnBird, "SpawnBird" }, // 700821943
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABirdSpawnerActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BirdSpawnerActor.h" },
		{ "ModuleRelativePath", "BirdSpawnerActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABirdSpawnerActor_Statics::NewProp_BirdActorClass_MetaData[] = {
		{ "Category", "Bird" },
		{ "ModuleRelativePath", "BirdSpawnerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABirdSpawnerActor_Statics::NewProp_BirdActorClass = { "BirdActorClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABirdSpawnerActor, BirdActorClass), Z_Construct_UClass_ABirdActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABirdSpawnerActor_Statics::NewProp_BirdActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABirdSpawnerActor_Statics::NewProp_BirdActorClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABirdSpawnerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABirdSpawnerActor_Statics::NewProp_BirdActorClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABirdSpawnerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABirdSpawnerActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABirdSpawnerActor_Statics::ClassParams = {
		&ABirdSpawnerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABirdSpawnerActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABirdSpawnerActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABirdSpawnerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABirdSpawnerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABirdSpawnerActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABirdSpawnerActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABirdSpawnerActor, 3121504866);
	template<> MYPROJECT_API UClass* StaticClass<ABirdSpawnerActor>()
	{
		return ABirdSpawnerActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABirdSpawnerActor(Z_Construct_UClass_ABirdSpawnerActor, &ABirdSpawnerActor::StaticClass, TEXT("/Script/MyProject"), TEXT("ABirdSpawnerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABirdSpawnerActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
