// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
struct FVector;
#ifdef VREXPANSIONPLUGIN_VRRootComponent_generated_h
#error "VRRootComponent.generated.h already included, missing '#pragma once' in VRRootComponent.h"
#endif
#define VREXPANSIONPLUGIN_VRRootComponent_generated_h

#define mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVRRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->GetVRRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetVRLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRUpVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetVRUpVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRRightVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetVRRightVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRForwardVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetVRForwardVector(); \
		P_NATIVE_END; \
	}


#define mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVRRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->GetVRRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetVRLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRUpVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetVRUpVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRRightVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetVRRightVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRForwardVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetVRForwardVector(); \
		P_NATIVE_END; \
	}


#define mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_16_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUVRRootComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UVRRootComponent(); \
	public: \
	DECLARE_CLASS(UVRRootComponent, UCapsuleComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRRootComponent) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_16_INCLASS \
	private: \
	static void StaticRegisterNativesUVRRootComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UVRRootComponent(); \
	public: \
	DECLARE_CLASS(UVRRootComponent, UCapsuleComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRRootComponent) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRRootComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRRootComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRRootComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRRootComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRRootComponent(UVRRootComponent&&); \
	NO_API UVRRootComponent(const UVRRootComponent&); \
public:


#define mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRRootComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRRootComponent(UVRRootComponent&&); \
	NO_API UVRRootComponent(const UVRRootComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRRootComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRRootComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRRootComponent)


#define mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_16_PRIVATE_PROPERTY_OFFSET
#define mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_13_PROLOG
#define mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_16_RPC_WRAPPERS \
	mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_16_INCLASS \
	mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_16_INCLASS_NO_PURE_DECLS \
	mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VRRootComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRRootComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
