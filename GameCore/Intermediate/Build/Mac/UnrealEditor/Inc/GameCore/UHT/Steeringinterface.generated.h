// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "interfaces/Steeringinterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMECORE_Steeringinterface_generated_h
#error "Steeringinterface.generated.h already included, missing '#pragma once' in Steeringinterface.h"
#endif
#define GAMECORE_Steeringinterface_generated_h

#define FID_UnrealProjects_p2_Plugins_GameCore_Source_GameCore_interfaces_Steeringinterface_h_14_SPARSE_DATA
#define FID_UnrealProjects_p2_Plugins_GameCore_Source_GameCore_interfaces_Steeringinterface_h_14_RPC_WRAPPERS
#define FID_UnrealProjects_p2_Plugins_GameCore_Source_GameCore_interfaces_Steeringinterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_UnrealProjects_p2_Plugins_GameCore_Source_GameCore_interfaces_Steeringinterface_h_14_ACCESSORS
#define FID_UnrealProjects_p2_Plugins_GameCore_Source_GameCore_interfaces_Steeringinterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMECORE_API USteeringinterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteeringinterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMECORE_API, USteeringinterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteeringinterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMECORE_API USteeringinterface(USteeringinterface&&); \
	GAMECORE_API USteeringinterface(const USteeringinterface&); \
public: \
	GAMECORE_API virtual ~USteeringinterface();


#define FID_UnrealProjects_p2_Plugins_GameCore_Source_GameCore_interfaces_Steeringinterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMECORE_API USteeringinterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMECORE_API USteeringinterface(USteeringinterface&&); \
	GAMECORE_API USteeringinterface(const USteeringinterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMECORE_API, USteeringinterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteeringinterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteeringinterface) \
	GAMECORE_API virtual ~USteeringinterface();


#define FID_UnrealProjects_p2_Plugins_GameCore_Source_GameCore_interfaces_Steeringinterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSteeringinterface(); \
	friend struct Z_Construct_UClass_USteeringinterface_Statics; \
public: \
	DECLARE_CLASS(USteeringinterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GameCore"), GAMECORE_API) \
	DECLARE_SERIALIZER(USteeringinterface)


#define FID_UnrealProjects_p2_Plugins_GameCore_Source_GameCore_interfaces_Steeringinterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealProjects_p2_Plugins_GameCore_Source_GameCore_interfaces_Steeringinterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_UnrealProjects_p2_Plugins_GameCore_Source_GameCore_interfaces_Steeringinterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_p2_Plugins_GameCore_Source_GameCore_interfaces_Steeringinterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealProjects_p2_Plugins_GameCore_Source_GameCore_interfaces_Steeringinterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_UnrealProjects_p2_Plugins_GameCore_Source_GameCore_interfaces_Steeringinterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_p2_Plugins_GameCore_Source_GameCore_interfaces_Steeringinterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISteeringinterface() {} \
public: \
	typedef USteeringinterface UClassType; \
	typedef ISteeringinterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealProjects_p2_Plugins_GameCore_Source_GameCore_interfaces_Steeringinterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~ISteeringinterface() {} \
public: \
	typedef USteeringinterface UClassType; \
	typedef ISteeringinterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealProjects_p2_Plugins_GameCore_Source_GameCore_interfaces_Steeringinterface_h_11_PROLOG
#define FID_UnrealProjects_p2_Plugins_GameCore_Source_GameCore_interfaces_Steeringinterface_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_p2_Plugins_GameCore_Source_GameCore_interfaces_Steeringinterface_h_14_SPARSE_DATA \
	FID_UnrealProjects_p2_Plugins_GameCore_Source_GameCore_interfaces_Steeringinterface_h_14_RPC_WRAPPERS \
	FID_UnrealProjects_p2_Plugins_GameCore_Source_GameCore_interfaces_Steeringinterface_h_14_ACCESSORS \
	FID_UnrealProjects_p2_Plugins_GameCore_Source_GameCore_interfaces_Steeringinterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_p2_Plugins_GameCore_Source_GameCore_interfaces_Steeringinterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_p2_Plugins_GameCore_Source_GameCore_interfaces_Steeringinterface_h_14_SPARSE_DATA \
	FID_UnrealProjects_p2_Plugins_GameCore_Source_GameCore_interfaces_Steeringinterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_p2_Plugins_GameCore_Source_GameCore_interfaces_Steeringinterface_h_14_ACCESSORS \
	FID_UnrealProjects_p2_Plugins_GameCore_Source_GameCore_interfaces_Steeringinterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMECORE_API UClass* StaticClass<class USteeringinterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_p2_Plugins_GameCore_Source_GameCore_interfaces_Steeringinterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
