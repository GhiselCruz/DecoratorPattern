// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DecoratorPattern/IDecorador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIDecorador() {}
// Cross Module References
	DECORATORPATTERN_API UClass* Z_Construct_UClass_UIDecorador_NoRegister();
	DECORATORPATTERN_API UClass* Z_Construct_UClass_UIDecorador();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DecoratorPattern();
// End Cross Module References
	void UIDecorador::StaticRegisterNativesUIDecorador()
	{
	}
	UClass* Z_Construct_UClass_UIDecorador_NoRegister()
	{
		return UIDecorador::StaticClass();
	}
	struct Z_Construct_UClass_UIDecorador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIDecorador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DecoratorPattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIDecorador_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IDecorador.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIDecorador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIDecorador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIDecorador_Statics::ClassParams = {
		&UIDecorador::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIDecorador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIDecorador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIDecorador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIDecorador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIDecorador, 2979894606);
	template<> DECORATORPATTERN_API UClass* StaticClass<UIDecorador>()
	{
		return UIDecorador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIDecorador(Z_Construct_UClass_UIDecorador, &UIDecorador::StaticClass, TEXT("/Script/DecoratorPattern"), TEXT("UIDecorador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIDecorador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
