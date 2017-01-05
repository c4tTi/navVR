// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPInteractionSettings;
struct FVector;
struct FTransform;
#ifdef VREXPANSIONPLUGIN_GrippableSphereComponent_generated_h
#error "GrippableSphereComponent.generated.h already included, missing '#pragma once' in GrippableSphereComponent.h"
#endif
#define VREXPANSIONPLUGIN_GrippableSphereComponent_generated_h

#define mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableSphereComponent_h_16_RPC_WRAPPERS \
	virtual FBPInteractionSettings GetInteractionSettings_Implementation(); \
	virtual bool IsInteractible_Implementation(); \
	virtual void ClosestPrimarySlotInRange_Implementation(FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform); \
	virtual void ClosestSecondarySlotInRange_Implementation(FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform); \
	virtual float GripBreakDistance_Implementation(); \
	virtual float GripDamping_Implementation(); \
	virtual float GripStiffness_Implementation(); \
	virtual EGripLateUpdateSettings GripLateUpdateSetting_Implementation(); \
	virtual EGripMovementReplicationSettings GripMovementReplicationType_Implementation(); \
	virtual bool CanHaveDoubleGrip_Implementation(); \
	virtual EGripCollisionType FreeGripType_Implementation(); \
	virtual EGripCollisionType SlotGripType_Implementation(); \
	virtual void ObjectType_Implementation(uint8& ObjectType); \
	virtual bool SimulateOnDrop_Implementation(); \
	virtual EGripInterfaceTeleportBehavior TeleportBehavior_Implementation(); \
	virtual bool DenyGripping_Implementation(); \
 \
	DECLARE_FUNCTION(execGetInteractionSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBPInteractionSettings*)Z_Param__Result=this->GetInteractionSettings_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInteractible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsInteractible_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestPrimarySlotInRange) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClosestPrimarySlotInRange_Implementation(Z_Param_WorldLocation,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestSecondarySlotInRange) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClosestSecondarySlotInRange_Implementation(Z_Param_WorldLocation,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripBreakDistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GripBreakDistance_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripDamping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GripDamping_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripStiffness) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GripStiffness_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripLateUpdateSetting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGripLateUpdateSettings>*)Z_Param__Result=this->GripLateUpdateSetting_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripMovementReplicationType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGripMovementReplicationSettings>*)Z_Param__Result=this->GripMovementReplicationType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanHaveDoubleGrip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanHaveDoubleGrip_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFreeGripType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGripCollisionType>*)Z_Param__Result=this->FreeGripType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlotGripType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGripCollisionType>*)Z_Param__Result=this->SlotGripType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execObjectType) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_ObjectType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ObjectType_Implementation(Z_Param_Out_ObjectType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimulateOnDrop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SimulateOnDrop_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportBehavior) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGripInterfaceTeleportBehavior>*)Z_Param__Result=this->TeleportBehavior_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDenyGripping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DenyGripping_Implementation(); \
		P_NATIVE_END; \
	}


#define mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableSphereComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FBPInteractionSettings GetInteractionSettings_Implementation(); \
	virtual bool IsInteractible_Implementation(); \
	virtual void ClosestPrimarySlotInRange_Implementation(FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform); \
	virtual void ClosestSecondarySlotInRange_Implementation(FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform); \
	virtual float GripBreakDistance_Implementation(); \
	virtual float GripDamping_Implementation(); \
	virtual float GripStiffness_Implementation(); \
	virtual EGripLateUpdateSettings GripLateUpdateSetting_Implementation(); \
	virtual EGripMovementReplicationSettings GripMovementReplicationType_Implementation(); \
	virtual bool CanHaveDoubleGrip_Implementation(); \
	virtual EGripCollisionType FreeGripType_Implementation(); \
	virtual EGripCollisionType SlotGripType_Implementation(); \
	virtual void ObjectType_Implementation(uint8& ObjectType); \
	virtual bool SimulateOnDrop_Implementation(); \
	virtual EGripInterfaceTeleportBehavior TeleportBehavior_Implementation(); \
	virtual bool DenyGripping_Implementation(); \
 \
	DECLARE_FUNCTION(execGetInteractionSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBPInteractionSettings*)Z_Param__Result=this->GetInteractionSettings_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInteractible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsInteractible_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestPrimarySlotInRange) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClosestPrimarySlotInRange_Implementation(Z_Param_WorldLocation,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestSecondarySlotInRange) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClosestSecondarySlotInRange_Implementation(Z_Param_WorldLocation,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripBreakDistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GripBreakDistance_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripDamping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GripDamping_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripStiffness) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GripStiffness_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripLateUpdateSetting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGripLateUpdateSettings>*)Z_Param__Result=this->GripLateUpdateSetting_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripMovementReplicationType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGripMovementReplicationSettings>*)Z_Param__Result=this->GripMovementReplicationType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanHaveDoubleGrip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanHaveDoubleGrip_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFreeGripType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGripCollisionType>*)Z_Param__Result=this->FreeGripType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlotGripType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGripCollisionType>*)Z_Param__Result=this->SlotGripType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execObjectType) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_ObjectType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ObjectType_Implementation(Z_Param_Out_ObjectType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimulateOnDrop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SimulateOnDrop_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportBehavior) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGripInterfaceTeleportBehavior>*)Z_Param__Result=this->TeleportBehavior_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDenyGripping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DenyGripping_Implementation(); \
		P_NATIVE_END; \
	}


#define mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableSphereComponent_h_16_EVENT_PARMS \
	struct GrippableSphereComponent_eventCanHaveDoubleGrip_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableSphereComponent_eventCanHaveDoubleGrip_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GrippableSphereComponent_eventClosestPrimarySlotInRange_Parms \
	{ \
		FVector WorldLocation; \
		bool bHadSlotInRange; \
		FTransform SlotWorldTransform; \
	}; \
	struct GrippableSphereComponent_eventClosestSecondarySlotInRange_Parms \
	{ \
		FVector WorldLocation; \
		bool bHadSlotInRange; \
		FTransform SlotWorldTransform; \
	}; \
	struct GrippableSphereComponent_eventDenyGripping_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableSphereComponent_eventDenyGripping_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GrippableSphereComponent_eventFreeGripType_Parms \
	{ \
		TEnumAsByte<EGripCollisionType> ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableSphereComponent_eventFreeGripType_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct GrippableSphereComponent_eventGetInteractionSettings_Parms \
	{ \
		FBPInteractionSettings ReturnValue; \
	}; \
	struct GrippableSphereComponent_eventGripBreakDistance_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableSphereComponent_eventGripBreakDistance_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct GrippableSphereComponent_eventGripDamping_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableSphereComponent_eventGripDamping_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct GrippableSphereComponent_eventGripLateUpdateSetting_Parms \
	{ \
		TEnumAsByte<EGripLateUpdateSettings> ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableSphereComponent_eventGripLateUpdateSetting_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct GrippableSphereComponent_eventGripMovementReplicationType_Parms \
	{ \
		TEnumAsByte<EGripMovementReplicationSettings> ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableSphereComponent_eventGripMovementReplicationType_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct GrippableSphereComponent_eventGripStiffness_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableSphereComponent_eventGripStiffness_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct GrippableSphereComponent_eventIsInteractible_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableSphereComponent_eventIsInteractible_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GrippableSphereComponent_eventObjectType_Parms \
	{ \
		uint8 ObjectType; \
	}; \
	struct GrippableSphereComponent_eventSimulateOnDrop_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableSphereComponent_eventSimulateOnDrop_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GrippableSphereComponent_eventSlotGripType_Parms \
	{ \
		TEnumAsByte<EGripCollisionType> ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableSphereComponent_eventSlotGripType_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct GrippableSphereComponent_eventTeleportBehavior_Parms \
	{ \
		TEnumAsByte<EGripInterfaceTeleportBehavior> ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableSphereComponent_eventTeleportBehavior_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_CanHaveDoubleGrip;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_ClosestPrimarySlotInRange;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_ClosestSecondarySlotInRange;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_DenyGripping;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_FreeGripType;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_GetInteractionSettings;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_GripBreakDistance;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_GripDamping;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_GripLateUpdateSetting;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_GripMovementReplicationType;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_GripStiffness;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_IsInteractible;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_ObjectType;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_SimulateOnDrop;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_SlotGripType;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_TeleportBehavior;
#define mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableSphereComponent_h_16_CALLBACK_WRAPPERS
#define mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableSphereComponent_h_16_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUGrippableSphereComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UGrippableSphereComponent(); \
	public: \
	DECLARE_CLASS(UGrippableSphereComponent, USphereComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGrippableSphereComponent) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UGrippableSphereComponent*>(this); }


#define mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableSphereComponent_h_16_INCLASS \
	private: \
	static void StaticRegisterNativesUGrippableSphereComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UGrippableSphereComponent(); \
	public: \
	DECLARE_CLASS(UGrippableSphereComponent, USphereComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGrippableSphereComponent) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UGrippableSphereComponent*>(this); }


#define mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableSphereComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrippableSphereComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrippableSphereComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrippableSphereComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrippableSphereComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrippableSphereComponent(UGrippableSphereComponent&&); \
	NO_API UGrippableSphereComponent(const UGrippableSphereComponent&); \
public:


#define mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableSphereComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrippableSphereComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrippableSphereComponent(UGrippableSphereComponent&&); \
	NO_API UGrippableSphereComponent(const UGrippableSphereComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrippableSphereComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrippableSphereComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrippableSphereComponent)


#define mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableSphereComponent_h_16_PRIVATE_PROPERTY_OFFSET
#define mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableSphereComponent_h_13_PROLOG \
	mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableSphereComponent_h_16_EVENT_PARMS


#define mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableSphereComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableSphereComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableSphereComponent_h_16_RPC_WRAPPERS \
	mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableSphereComponent_h_16_CALLBACK_WRAPPERS \
	mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableSphereComponent_h_16_INCLASS \
	mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableSphereComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableSphereComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableSphereComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableSphereComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableSphereComponent_h_16_CALLBACK_WRAPPERS \
	mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableSphereComponent_h_16_INCLASS_NO_PURE_DECLS \
	mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableSphereComponent_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GrippableSphereComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID mordentral_vrexppluginexample_3b63c607efdf_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GrippableSphereComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
