// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFileUtils.h"

FString UMyFileUtils::LoadFileToString(FString fileName)
{
	FString dir = FPaths::GameSourceDir();
	FString result;
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();

	if (file.CreateDirectory(*dir))
	{
		FString myFile = dir + "/" + fileName;
		FFileHelper::LoadFileToString(result, *myFile);
	}

	return result;
}
