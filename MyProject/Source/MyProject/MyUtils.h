// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EngineUtils.h"

/**
 *
 */
class MYPROJECT_API MyUtils
{
public:
	MyUtils();
	~MyUtils();

	template<typename T>
	static void FindAllActors(UWorld* World, TArray<T*>& Out);

	template<typename T>
	static void FindActor(UWorld* World, T*& Out);
};

template<typename T>
inline void MyUtils::FindAllActors(UWorld* World, TArray<T*>& Out)
{
	for (TActorIterator<T> It(World); It; ++It)
	{
		Out.Add(*It);
	}
}

template<typename T>
inline void MyUtils::FindActor(UWorld* World, T*& Out)
{
	for (TActorIterator<T> It(World); It; ++It)
	{
		Out = *It;
	}
}
