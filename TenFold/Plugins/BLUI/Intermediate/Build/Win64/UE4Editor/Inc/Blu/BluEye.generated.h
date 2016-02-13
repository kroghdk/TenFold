// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
struct FCharacterEvent;
struct FKeyEvent;
struct FVector2D;
class UMaterialInstanceDynamic;
#ifdef BLU_BluEye_generated_h
#error "BluEye.generated.h already included, missing '#pragma once' in BluEye.h"
#endif
#define BLU_BluEye_generated_h

#define TenFold_Plugins_BLUI_Source_Blu_Public_BluEye_h_7_DELEGATE \
struct _Script_Blu_eventScriptEvent_Parms \
{ \
	FString EventName; \
	FString EventMessage; \
}; \
static inline void FScriptEvent_DelegateWrapper(const FMulticastScriptDelegate& ScriptEvent, const FString& EventName, const FString& EventMessage) \
{ \
	_Script_Blu_eventScriptEvent_Parms Parms; \
	Parms.EventName=EventName; \
	Parms.EventMessage=EventMessage; \
	ScriptEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}




#define TenFold_Plugins_BLUI_Source_Blu_Public_BluEye_h_54_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResizeBrowser) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewWidth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewHeight); \
		P_FINISH; \
		*(UTexture2D**)Z_Param__Result=this->ResizeBrowser(Z_Param_NewWidth,Z_Param_NewHeight); \
	} \
 \
	DECLARE_FUNCTION(execNavForward) \
	{ \
		P_FINISH; \
		this->NavForward(); \
	} \
 \
	DECLARE_FUNCTION(execNavBack) \
	{ \
		P_FINISH; \
		this->NavBack(); \
	} \
 \
	DECLARE_FUNCTION(execReloadBrowser) \
	{ \
		P_GET_UBOOL(Z_Param_IgnoreCache); \
		P_FINISH; \
		this->ReloadBrowser(Z_Param_IgnoreCache); \
	} \
 \
	DECLARE_FUNCTION(execIsBrowserLoading) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsBrowserLoading(); \
	} \
 \
	DECLARE_FUNCTION(execCloseBrowser) \
	{ \
		P_FINISH; \
		this->CloseBrowser(); \
	} \
 \
	DECLARE_FUNCTION(execSpecialKeyPress) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_key); \
		P_GET_UBOOL(Z_Param_LeftShiftDown); \
		P_GET_UBOOL(Z_Param_RightShiftDown); \
		P_GET_UBOOL(Z_Param_LeftControlDown); \
		P_GET_UBOOL(Z_Param_RightControlDown); \
		P_GET_UBOOL(Z_Param_LeftAltDown); \
		P_GET_UBOOL(Z_Param_RightAltDown); \
		P_GET_UBOOL(Z_Param_LeftCommandDown); \
		P_GET_UBOOL(Z_Param_RightCommandDown); \
		P_GET_UBOOL(Z_Param_CapsLocksOn); \
		P_FINISH; \
		this->SpecialKeyPress(EBluSpecialKeys(Z_Param_key),Z_Param_LeftShiftDown,Z_Param_RightShiftDown,Z_Param_LeftControlDown,Z_Param_RightControlDown,Z_Param_LeftAltDown,Z_Param_RightAltDown,Z_Param_LeftCommandDown,Z_Param_RightCommandDown,Z_Param_CapsLocksOn); \
	} \
 \
	DECLARE_FUNCTION(execRawCharKeyPress) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_charToPress); \
		P_GET_UBOOL(Z_Param_isRepeat); \
		P_GET_UBOOL(Z_Param_LeftShiftDown); \
		P_GET_UBOOL(Z_Param_RightShiftDown); \
		P_GET_UBOOL(Z_Param_LeftControlDown); \
		P_GET_UBOOL(Z_Param_RightControlDown); \
		P_GET_UBOOL(Z_Param_LeftAltDown); \
		P_GET_UBOOL(Z_Param_RightAltDown); \
		P_GET_UBOOL(Z_Param_LeftCommandDown); \
		P_GET_UBOOL(Z_Param_RightCommandDown); \
		P_GET_UBOOL(Z_Param_CapsLocksOn); \
		P_FINISH; \
		this->RawCharKeyPress(Z_Param_charToPress,Z_Param_isRepeat,Z_Param_LeftShiftDown,Z_Param_RightShiftDown,Z_Param_LeftControlDown,Z_Param_RightControlDown,Z_Param_LeftAltDown,Z_Param_RightAltDown,Z_Param_LeftCommandDown,Z_Param_RightCommandDown,Z_Param_CapsLocksOn); \
	} \
 \
	DECLARE_FUNCTION(execCharKeyPress) \
	{ \
		P_GET_STRUCT(FCharacterEvent,Z_Param_CharEvent); \
		P_FINISH; \
		this->CharKeyPress(Z_Param_CharEvent); \
	} \
 \
	DECLARE_FUNCTION(execKeyPress) \
	{ \
		P_GET_STRUCT(FKeyEvent,Z_Param_InKey); \
		P_FINISH; \
		this->KeyPress(Z_Param_InKey); \
	} \
 \
	DECLARE_FUNCTION(execKeyUp) \
	{ \
		P_GET_STRUCT(FKeyEvent,Z_Param_InKey); \
		P_FINISH; \
		this->KeyUp(Z_Param_InKey); \
	} \
 \
	DECLARE_FUNCTION(execKeyDown) \
	{ \
		P_GET_STRUCT(FKeyEvent,Z_Param_InKey); \
		P_FINISH; \
		this->KeyDown(Z_Param_InKey); \
	} \
 \
	DECLARE_FUNCTION(execTriggerMouseWheel) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MouseWheelDelta); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_pos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_scale); \
		P_FINISH; \
		this->TriggerMouseWheel(Z_Param_MouseWheelDelta,Z_Param_Out_pos,Z_Param_scale); \
	} \
 \
	DECLARE_FUNCTION(execTriggerMouseMove) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_pos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_scale); \
		P_FINISH; \
		this->TriggerMouseMove(Z_Param_Out_pos,Z_Param_scale); \
	} \
 \
	DECLARE_FUNCTION(execTriggerRightMouseUp) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_pos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_scale); \
		P_FINISH; \
		this->TriggerRightMouseUp(Z_Param_Out_pos,Z_Param_scale); \
	} \
 \
	DECLARE_FUNCTION(execTriggerLeftMouseUp) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_pos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_scale); \
		P_FINISH; \
		this->TriggerLeftMouseUp(Z_Param_Out_pos,Z_Param_scale); \
	} \
 \
	DECLARE_FUNCTION(execTriggerRightMouseDown) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_pos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_scale); \
		P_FINISH; \
		this->TriggerRightMouseDown(Z_Param_Out_pos,Z_Param_scale); \
	} \
 \
	DECLARE_FUNCTION(execTriggerLeftMouseDown) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_pos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_scale); \
		P_FINISH; \
		this->TriggerLeftMouseDown(Z_Param_Out_pos,Z_Param_scale); \
	} \
 \
	DECLARE_FUNCTION(execTriggerRightClick) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_pos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_scale); \
		P_FINISH; \
		this->TriggerRightClick(Z_Param_Out_pos,Z_Param_scale); \
	} \
 \
	DECLARE_FUNCTION(execTriggerLeftClick) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_pos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_scale); \
		P_FINISH; \
		this->TriggerLeftClick(Z_Param_Out_pos,Z_Param_scale); \
	} \
 \
	DECLARE_FUNCTION(execLoadURL) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_newURL); \
		P_FINISH; \
		this->LoadURL(Z_Param_newURL); \
	} \
 \
	DECLARE_FUNCTION(execExecuteJSMethodWithParams) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_methodName); \
		P_GET_TARRAY(FString,Z_Param_params); \
		P_FINISH; \
		this->ExecuteJSMethodWithParams(Z_Param_methodName,Z_Param_params); \
	} \
 \
	DECLARE_FUNCTION(execExecuteJS) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_code); \
		P_FINISH; \
		this->ExecuteJS(Z_Param_code); \
	} \
 \
	DECLARE_FUNCTION(execGetMaterialInstance) \
	{ \
		P_FINISH; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=this->GetMaterialInstance(); \
	} \
 \
	DECLARE_FUNCTION(execGetTexture) \
	{ \
		P_FINISH; \
		*(UTexture2D**)Z_Param__Result=this->GetTexture(); \
	} \
 \
	DECLARE_FUNCTION(execinit) \
	{ \
		P_FINISH; \
		this->init(); \
	}


#define TenFold_Plugins_BLUI_Source_Blu_Public_BluEye_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResizeBrowser) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewWidth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewHeight); \
		P_FINISH; \
		*(UTexture2D**)Z_Param__Result=this->ResizeBrowser(Z_Param_NewWidth,Z_Param_NewHeight); \
	} \
 \
	DECLARE_FUNCTION(execNavForward) \
	{ \
		P_FINISH; \
		this->NavForward(); \
	} \
 \
	DECLARE_FUNCTION(execNavBack) \
	{ \
		P_FINISH; \
		this->NavBack(); \
	} \
 \
	DECLARE_FUNCTION(execReloadBrowser) \
	{ \
		P_GET_UBOOL(Z_Param_IgnoreCache); \
		P_FINISH; \
		this->ReloadBrowser(Z_Param_IgnoreCache); \
	} \
 \
	DECLARE_FUNCTION(execIsBrowserLoading) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsBrowserLoading(); \
	} \
 \
	DECLARE_FUNCTION(execCloseBrowser) \
	{ \
		P_FINISH; \
		this->CloseBrowser(); \
	} \
 \
	DECLARE_FUNCTION(execSpecialKeyPress) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_key); \
		P_GET_UBOOL(Z_Param_LeftShiftDown); \
		P_GET_UBOOL(Z_Param_RightShiftDown); \
		P_GET_UBOOL(Z_Param_LeftControlDown); \
		P_GET_UBOOL(Z_Param_RightControlDown); \
		P_GET_UBOOL(Z_Param_LeftAltDown); \
		P_GET_UBOOL(Z_Param_RightAltDown); \
		P_GET_UBOOL(Z_Param_LeftCommandDown); \
		P_GET_UBOOL(Z_Param_RightCommandDown); \
		P_GET_UBOOL(Z_Param_CapsLocksOn); \
		P_FINISH; \
		this->SpecialKeyPress(EBluSpecialKeys(Z_Param_key),Z_Param_LeftShiftDown,Z_Param_RightShiftDown,Z_Param_LeftControlDown,Z_Param_RightControlDown,Z_Param_LeftAltDown,Z_Param_RightAltDown,Z_Param_LeftCommandDown,Z_Param_RightCommandDown,Z_Param_CapsLocksOn); \
	} \
 \
	DECLARE_FUNCTION(execRawCharKeyPress) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_charToPress); \
		P_GET_UBOOL(Z_Param_isRepeat); \
		P_GET_UBOOL(Z_Param_LeftShiftDown); \
		P_GET_UBOOL(Z_Param_RightShiftDown); \
		P_GET_UBOOL(Z_Param_LeftControlDown); \
		P_GET_UBOOL(Z_Param_RightControlDown); \
		P_GET_UBOOL(Z_Param_LeftAltDown); \
		P_GET_UBOOL(Z_Param_RightAltDown); \
		P_GET_UBOOL(Z_Param_LeftCommandDown); \
		P_GET_UBOOL(Z_Param_RightCommandDown); \
		P_GET_UBOOL(Z_Param_CapsLocksOn); \
		P_FINISH; \
		this->RawCharKeyPress(Z_Param_charToPress,Z_Param_isRepeat,Z_Param_LeftShiftDown,Z_Param_RightShiftDown,Z_Param_LeftControlDown,Z_Param_RightControlDown,Z_Param_LeftAltDown,Z_Param_RightAltDown,Z_Param_LeftCommandDown,Z_Param_RightCommandDown,Z_Param_CapsLocksOn); \
	} \
 \
	DECLARE_FUNCTION(execCharKeyPress) \
	{ \
		P_GET_STRUCT(FCharacterEvent,Z_Param_CharEvent); \
		P_FINISH; \
		this->CharKeyPress(Z_Param_CharEvent); \
	} \
 \
	DECLARE_FUNCTION(execKeyPress) \
	{ \
		P_GET_STRUCT(FKeyEvent,Z_Param_InKey); \
		P_FINISH; \
		this->KeyPress(Z_Param_InKey); \
	} \
 \
	DECLARE_FUNCTION(execKeyUp) \
	{ \
		P_GET_STRUCT(FKeyEvent,Z_Param_InKey); \
		P_FINISH; \
		this->KeyUp(Z_Param_InKey); \
	} \
 \
	DECLARE_FUNCTION(execKeyDown) \
	{ \
		P_GET_STRUCT(FKeyEvent,Z_Param_InKey); \
		P_FINISH; \
		this->KeyDown(Z_Param_InKey); \
	} \
 \
	DECLARE_FUNCTION(execTriggerMouseWheel) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MouseWheelDelta); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_pos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_scale); \
		P_FINISH; \
		this->TriggerMouseWheel(Z_Param_MouseWheelDelta,Z_Param_Out_pos,Z_Param_scale); \
	} \
 \
	DECLARE_FUNCTION(execTriggerMouseMove) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_pos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_scale); \
		P_FINISH; \
		this->TriggerMouseMove(Z_Param_Out_pos,Z_Param_scale); \
	} \
 \
	DECLARE_FUNCTION(execTriggerRightMouseUp) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_pos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_scale); \
		P_FINISH; \
		this->TriggerRightMouseUp(Z_Param_Out_pos,Z_Param_scale); \
	} \
 \
	DECLARE_FUNCTION(execTriggerLeftMouseUp) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_pos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_scale); \
		P_FINISH; \
		this->TriggerLeftMouseUp(Z_Param_Out_pos,Z_Param_scale); \
	} \
 \
	DECLARE_FUNCTION(execTriggerRightMouseDown) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_pos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_scale); \
		P_FINISH; \
		this->TriggerRightMouseDown(Z_Param_Out_pos,Z_Param_scale); \
	} \
 \
	DECLARE_FUNCTION(execTriggerLeftMouseDown) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_pos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_scale); \
		P_FINISH; \
		this->TriggerLeftMouseDown(Z_Param_Out_pos,Z_Param_scale); \
	} \
 \
	DECLARE_FUNCTION(execTriggerRightClick) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_pos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_scale); \
		P_FINISH; \
		this->TriggerRightClick(Z_Param_Out_pos,Z_Param_scale); \
	} \
 \
	DECLARE_FUNCTION(execTriggerLeftClick) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_pos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_scale); \
		P_FINISH; \
		this->TriggerLeftClick(Z_Param_Out_pos,Z_Param_scale); \
	} \
 \
	DECLARE_FUNCTION(execLoadURL) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_newURL); \
		P_FINISH; \
		this->LoadURL(Z_Param_newURL); \
	} \
 \
	DECLARE_FUNCTION(execExecuteJSMethodWithParams) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_methodName); \
		P_GET_TARRAY(FString,Z_Param_params); \
		P_FINISH; \
		this->ExecuteJSMethodWithParams(Z_Param_methodName,Z_Param_params); \
	} \
 \
	DECLARE_FUNCTION(execExecuteJS) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_code); \
		P_FINISH; \
		this->ExecuteJS(Z_Param_code); \
	} \
 \
	DECLARE_FUNCTION(execGetMaterialInstance) \
	{ \
		P_FINISH; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=this->GetMaterialInstance(); \
	} \
 \
	DECLARE_FUNCTION(execGetTexture) \
	{ \
		P_FINISH; \
		*(UTexture2D**)Z_Param__Result=this->GetTexture(); \
	} \
 \
	DECLARE_FUNCTION(execinit) \
	{ \
		P_FINISH; \
		this->init(); \
	}


#define TenFold_Plugins_BLUI_Source_Blu_Public_BluEye_h_54_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUBluEye(); \
	friend BLU_API class UClass* Z_Construct_UClass_UBluEye(); \
	public: \
	DECLARE_CLASS(UBluEye, UObject, COMPILED_IN_FLAGS(0), 0, Blu, NO_API) \
	DECLARE_SERIALIZER(UBluEye) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UBluEye*>(this); }


#define TenFold_Plugins_BLUI_Source_Blu_Public_BluEye_h_54_INCLASS \
	private: \
	static void StaticRegisterNativesUBluEye(); \
	friend BLU_API class UClass* Z_Construct_UClass_UBluEye(); \
	public: \
	DECLARE_CLASS(UBluEye, UObject, COMPILED_IN_FLAGS(0), 0, Blu, NO_API) \
	DECLARE_SERIALIZER(UBluEye) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UBluEye*>(this); }


#define TenFold_Plugins_BLUI_Source_Blu_Public_BluEye_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBluEye(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBluEye) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBluEye); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBluEye); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UBluEye(const UBluEye& InCopy); \
public:


#define TenFold_Plugins_BLUI_Source_Blu_Public_BluEye_h_54_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UBluEye(const UBluEye& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBluEye); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBluEye); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBluEye)


#define TenFold_Plugins_BLUI_Source_Blu_Public_BluEye_h_50_PROLOG
#define TenFold_Plugins_BLUI_Source_Blu_Public_BluEye_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TenFold_Plugins_BLUI_Source_Blu_Public_BluEye_h_54_RPC_WRAPPERS \
	TenFold_Plugins_BLUI_Source_Blu_Public_BluEye_h_54_INCLASS \
	TenFold_Plugins_BLUI_Source_Blu_Public_BluEye_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TenFold_Plugins_BLUI_Source_Blu_Public_BluEye_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TenFold_Plugins_BLUI_Source_Blu_Public_BluEye_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	TenFold_Plugins_BLUI_Source_Blu_Public_BluEye_h_54_INCLASS_NO_PURE_DECLS \
	TenFold_Plugins_BLUI_Source_Blu_Public_BluEye_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TenFold_Plugins_BLUI_Source_Blu_Public_BluEye_h


#define FOREACH_ENUM_EBLUSPECIALKEYS(op) \
	op(backspacekey) \
	op(tabkey) \
	op(enterkey) \
	op(pausekey) \
	op(escapekey) \
	op(pageupkey) \
	op(pagedownkey) \
	op(endkey) \
	op(homekey) \
	op(leftarrowkey) \
	op(rightarrowkey) \
	op(downarrowkey) \
	op(uparrowkey) \
	op(insertkey) \
	op(deletekey) \
	op(numlockkey) \
	op(scrolllockkey) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
