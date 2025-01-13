// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFileUtils.h"

FString UMyFileUtils::LoadFileToString(FString fileName)
{
	FString dir = FPaths::ProjectDir();
	FString result;
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();

	if (file.CreateDirectory(*dir))
	{
		FString myFile = dir + "/" + fileName;
		FFileHelper::LoadFileToString(result, *myFile);
	}

	return result;
}

TArray<FString> UMyFileUtils::BreakStringInArrayOnNewLine(FString stringToBreak)
{
	TArray<FString> returnArray = {};
	FString current;

	for (int i = 0; i < stringToBreak.Len(); i++)
	{
		if (stringToBreak[i] == '\n')
		{
			returnArray.Add(current);
			current.Empty();
		}
		else if(stringToBreak[i] == '\r')
		{
			continue;
		}
		else
		{
			current.AppendChar(stringToBreak[i]);
		}
	}

	return returnArray;
}