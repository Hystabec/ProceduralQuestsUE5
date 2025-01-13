// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyFileUtils.generated.h"

/**
 * 
 */
UCLASS()
class PROCEDURALQUESTS_API UMyFileUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "File Utils")
	static FString LoadFileToString(FString fileName);

	UFUNCTION(BlueprintCallable, Category = "File Utils")
	static TArray<FString> BreakStringInArrayOnNewLine(FString stringToBreak);
};
