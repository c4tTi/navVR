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
#ifdef VREXPANSIONPLUGIN_GrippableBoxComponent_generated_h
#error "GrippableBoxComponent.generated.h already included, missing '#pragma once' in GrippableBoxComponent.h"
#endif
#define VREXPANSIONPLUGIN_GrippableBoxComponent_generated_h

#define VRReal_Plugins_mordentral_vrexpansionplugin_c3213dd8ce1e_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_16_RPC_WRAPPERS \
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


#define VRReal_Plugins_mordentral_vrexpansionplugin_c3213dd8ce1e_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define VRReal_Plugins_mordentral_vrexpansionplugin_c3213dd8ce1e_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_16_EVENT_PARMS \
	struct GrippableBoxComponent_eventCanHaveDoubleGrip_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableBoxComponent_eventCanHaveDoubleGrip_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GrippableBoxComponent_eventClosestPrimarySlotInRange_Parms \
	{ \
		FVector WorldLocation; \
		bool bHadSlotInRange; \
		FTransform SlotWorldTransform; \
	}; \
	struct GrippableBoxComponent_eventClosestSecondarySlotInRange_Parms \
	{ \
		FVector WorldLocation; \
		bool bHadSlotInRange; \
		FTransform SlotWorldTransform; \
	}; \
	struct GrippableBoxComponent_eventDenyGripping_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableBoxComponent_eventDenyGripping_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GrippableBoxComponent_eventFreeGripType_Parms \
	{ \
		TEnumAsByte<EGripCollisionType> ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableBoxComponent_eventFreeGripType_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct GrippableBoxComponent_eventGetInteractionSettings_Parms \
	{ \
		FBPInteractionSettings ReturnValue; \
	}; \
	struct GrippableBoxComponent_eventGripBreakDistance_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableBoxComponent_eventGripBreakDistance_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct GrippableBoxComponent_eventGripDamping_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableBoxComponent_eventGripDamping_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct GrippableBoxComponent_eventGripLateUpdateSetting_Parms \
	{ \
		TEnumAsByte<EGripLateUpdateSettings> ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableBoxComponent_eventGripLateUpdateSetting_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct GrippableBoxComponent_eventGripMovementReplicationType_Parms \
	{ \
		TEnumAsByte<EGripMovementReplicationSettings> ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableBoxComponent_eventGripMovementReplicationType_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct GrippableBoxComponent_eventGripStiffness_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableBoxComponent_eventGripStiffness_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct GrippableBoxComponent_eventIsInteractible_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableBoxComponent_eventIsInteractible_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GrippableBoxComponent_eventObjectType_Parms \
	{ \
		uint8 ObjectType; \
	}; \
	struct GrippableBoxComponent_eventSimulateOnDrop_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableBoxComponent_eventSimulateOnDrop_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GrippableBoxComponent_eventSlotGripType_Parms \
	{ \
		TEnumAsByte<EGripCollisionType> ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableBoxComponent_eventSlotGripType_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct GrippableBoxComponent_eventTeleportBehavior_Parms \
	{ \
		TEnumAsByte<EGripInterfaceTeleportBehavior> ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableBoxComponent_eventTeleportBehavior_Parms() \
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
#define VRReal_Plugins_mordentral_vrexpansionplugin_c3213dd8ce1e_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_16_CALLBACK_WRAPPERS
#define VRReal_Plugins_mordentral_vrexpansionplugin_c3213dd8ce1e_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_16_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUGrippableBoxComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UGrippableBoxComponent(); \
	public: \
	DECLARE_CLASS(UGrippableBoxComponent, UBoxComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGrippableBoxComponent) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UGrippableBoxComponent*>(this); }


#define VRReal_Plugins_mordentral_vrexpansionplugin_c3213dd8ce1e_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_16_INCLASS \
	private: \
	static void StaticRegisterNativesUGrippableBoxComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UGrippableBoxComponent(); \
	public: \
	DECLARE_CLASS(UGrippableBoxComponent, UBoxComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGrippableBoxComponent) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UGrippableBoxComponent*>(this); }


#define VRReal_Plugins_mordentral_vrexpansionplugin_c3213dd8ce1e_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrippableBoxComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrippableBoxComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrippableBoxComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrippableBoxComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrippableBoxComponent(UGrippableBoxComponent&&); \
	NO_API UGrippableBoxComponent(const UGrippableBoxComponent&); \
public:


#define VRReal_Plugins_mordentral_vrexpansionplugin_c3213dd8ce1e_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrippableBoxComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrippableBoxComponent(UGrippableBoxComponent&&); \
	NO_API UGrippableBoxComponent(const UGrippableBoxComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrippableBoxComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrippableBoxComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrippableBoxComponent)


#define VRReal_Plugins_mordentral_vrexpansionplugin_c3213dd8ce1e_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_16_PRIVATE_PROPERTY_OFFSET
#define VRReal_Plugins_mordentral_vrexpansionplugin_c3213dd8ce1e_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_13_PROLOG \
	VRReal_Plugins_mordentral_vrexpansionplugin_c3213dd8ce1e_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_16_EVENT_PARMS


#define VRReal_Plugins_mordentral_vrexpansionplugin_c3213dd8ce1e_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRReal_Plugins_mordentral_vrexpansionplugin_c3213dd8ce1e_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	VRReal_Plugins_mordentral_vrexpansionplugin_c3213dd8ce1e_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_16_RPC_WRAPPERS \
	VRReal_Plugins_mordentral_vrexpansionplugin_c3213dd8ce1e_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_16_CALLBACK_WRAPPERS \
	VRReal_Plugins_mordentral_vrexpansionplugin_c3213dd8ce1e_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_16_INCLASS \
	VRReal_Plugins_mordentral_vrexpansionplugin_c3213dd8ce1e_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRReal_Plugins_mordentral_vrexpansionplugin_c3213dd8ce1e_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRReal_Plugins_mordentral_vrexpansionplugin_c3213dd8ce1e_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	VRReal_Plugins_mordentral_vrexpansionplugin_c3213dd8ce1e_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	VRReal_Plugins_mordentral_vrexpansionplugin_c3213dd8ce1e_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_16_CALLBACK_WRAPPERS \
	VRReal_Plugins_mordentral_vrexpansionplugin_c3213dd8ce1e_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_16_INCLASS_NO_PURE_DECLS \
	VRReal_Plugins_mordentral_vrexpansionplugin_c3213dd8ce1e_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GrippableBoxComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRReal_Plugins_mordentral_vrexpansionplugin_c3213dd8ce1e_Source_VRExpansionPlugin_Public_GrippableBoxComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
