// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GlobalShader.h"

/**
 * 
 */
class SHADER_API MyShader : public FGlobalShader
{
	DECLARE_EXPORTED_SHADER_TYPE(MyShader, Global, SHADER_API);

	//defalut
	MyShader() {};

public:
	//for serialization
	MyShader(const ShaderMetaType::CompiledShaderInitializerType& Initializer)
		: FGlobalShader(Initializer)
	{
	}

	static bool ShouldCache(EShaderPlatform Platform)
	{
		return true;
	}

};

