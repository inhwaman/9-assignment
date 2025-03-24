// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CTBlueprintFunctionLibrary.generated.h"

UCLASS()
class UCTBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable,Category="NumberBaseball")
    static TArray<int32> GenerateRandomNumbers();

    UFUNCTION(BlueprintCallable, Category = "NumberBaseball")
    static void CompareNumbers(const TArray<int32>& Answer, const TArray<int32>& Guess,int32& Strikes,int32& Balls);
};