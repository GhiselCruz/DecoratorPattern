// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DECORATORPATTERN_IDecorador_generated_h
#error "IDecorador.generated.h already included, missing '#pragma once' in IDecorador.h"
#endif
#define DECORATORPATTERN_IDecorador_generated_h

#define DecoratorPattern_Source_DecoratorPattern_IDecorador_h_13_SPARSE_DATA
#define DecoratorPattern_Source_DecoratorPattern_IDecorador_h_13_RPC_WRAPPERS
#define DecoratorPattern_Source_DecoratorPattern_IDecorador_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define DecoratorPattern_Source_DecoratorPattern_IDecorador_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DECORATORPATTERN_API UIDecorador(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIDecorador) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DECORATORPATTERN_API, UIDecorador); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIDecorador); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DECORATORPATTERN_API UIDecorador(UIDecorador&&); \
	DECORATORPATTERN_API UIDecorador(const UIDecorador&); \
public:


#define DecoratorPattern_Source_DecoratorPattern_IDecorador_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DECORATORPATTERN_API UIDecorador(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DECORATORPATTERN_API UIDecorador(UIDecorador&&); \
	DECORATORPATTERN_API UIDecorador(const UIDecorador&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DECORATORPATTERN_API, UIDecorador); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIDecorador); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIDecorador)


#define DecoratorPattern_Source_DecoratorPattern_IDecorador_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIDecorador(); \
	friend struct Z_Construct_UClass_UIDecorador_Statics; \
public: \
	DECLARE_CLASS(UIDecorador, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DecoratorPattern"), DECORATORPATTERN_API) \
	DECLARE_SERIALIZER(UIDecorador)


#define DecoratorPattern_Source_DecoratorPattern_IDecorador_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DecoratorPattern_Source_DecoratorPattern_IDecorador_h_13_GENERATED_UINTERFACE_BODY() \
	DecoratorPattern_Source_DecoratorPattern_IDecorador_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DecoratorPattern_Source_DecoratorPattern_IDecorador_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DecoratorPattern_Source_DecoratorPattern_IDecorador_h_13_GENERATED_UINTERFACE_BODY() \
	DecoratorPattern_Source_DecoratorPattern_IDecorador_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DecoratorPattern_Source_DecoratorPattern_IDecorador_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIDecorador() {} \
public: \
	typedef UIDecorador UClassType; \
	typedef IIDecorador ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DecoratorPattern_Source_DecoratorPattern_IDecorador_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIDecorador() {} \
public: \
	typedef UIDecorador UClassType; \
	typedef IIDecorador ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DecoratorPattern_Source_DecoratorPattern_IDecorador_h_10_PROLOG
#define DecoratorPattern_Source_DecoratorPattern_IDecorador_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DecoratorPattern_Source_DecoratorPattern_IDecorador_h_13_SPARSE_DATA \
	DecoratorPattern_Source_DecoratorPattern_IDecorador_h_13_RPC_WRAPPERS \
	DecoratorPattern_Source_DecoratorPattern_IDecorador_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DecoratorPattern_Source_DecoratorPattern_IDecorador_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DecoratorPattern_Source_DecoratorPattern_IDecorador_h_13_SPARSE_DATA \
	DecoratorPattern_Source_DecoratorPattern_IDecorador_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DecoratorPattern_Source_DecoratorPattern_IDecorador_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DECORATORPATTERN_API UClass* StaticClass<class UIDecorador>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DecoratorPattern_Source_DecoratorPattern_IDecorador_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
