#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_backend_Controls
#include <backend/Controls.h>
#endif
#ifndef INCLUDED_backend_CustomFadeTransition
#include <backend/CustomFadeTransition.h>
#endif
#ifndef INCLUDED_backend_DiscordClient
#include <backend/DiscordClient.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_MusicBeatSubstate
#include <backend/MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxBackdrop
#include <flixel/addons/display/FlxBackdrop.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxGridOverlay
#include <flixel/addons/display/FlxGridOverlay.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxInputText
#include <flixel/addons/ui/FlxInputText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUI
#include <flixel/addons/ui/FlxUI.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUICheckBox
#include <flixel/addons/ui/FlxUICheckBox.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIInputText
#include <flixel/addons/ui/FlxUIInputText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITabMenu
#include <flixel/addons/ui/FlxUITabMenu.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFireTongue
#include <flixel/addons/ui/interfaces/IFireTongue.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ILabeled
#include <flixel/addons/ui/interfaces/ILabeled.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSound
#include <flixel/sound/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeWindow
#include <lime/_internal/backend/native/NativeWindow.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_objects_Alignment
#include <objects/Alignment.h>
#endif
#ifndef INCLUDED_objects_Alphabet
#include <objects/Alphabet.h>
#endif
#ifndef INCLUDED_objects_AttachedSprite
#include <objects/AttachedSprite.h>
#endif
#ifndef INCLUDED_objects_HealthIcon
#include <objects/HealthIcon.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Application
#include <openfl/display/Application.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_net_FileFilter
#include <openfl/net/FileFilter.h>
#endif
#ifndef INCLUDED_openfl_net_FileReference
#include <openfl/net/FileReference.h>
#endif
#ifndef INCLUDED_states_MainMenuState
#include <states/MainMenuState.h>
#endif
#ifndef INCLUDED_states_editors_CreditsEditorState
#include <states/editors/CreditsEditorState.h>
#endif
#ifndef INCLUDED_states_editors_MasterEditorMenu
#include <states/editors/MasterEditorMenu.h>
#endif
#ifndef INCLUDED_substates_Prompt
#include <substates/Prompt.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5bb599625acdd1fd_40_new,"states.editors.CreditsEditorState","new",0x670b9e30,"states.editors.CreditsEditorState.new","states/editors/CreditsEditorState.hx",40,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_67_create,"states.editors.CreditsEditorState","create",0xebf21b2c,"states.editors.CreditsEditorState.create","states/editors/CreditsEditorState.hx",67,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_203_addCreditsUI,"states.editors.CreditsEditorState","addCreditsUI",0x99cdacbd,"states.editors.CreditsEditorState.addCreditsUI","states/editors/CreditsEditorState.hx",203,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_211_addCreditsUI,"states.editors.CreditsEditorState","addCreditsUI",0x99cdacbd,"states.editors.CreditsEditorState.addCreditsUI","states/editors/CreditsEditorState.hx",211,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_215_addCreditsUI,"states.editors.CreditsEditorState","addCreditsUI",0x99cdacbd,"states.editors.CreditsEditorState.addCreditsUI","states/editors/CreditsEditorState.hx",215,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_221_addCreditsUI,"states.editors.CreditsEditorState","addCreditsUI",0x99cdacbd,"states.editors.CreditsEditorState.addCreditsUI","states/editors/CreditsEditorState.hx",221,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_223_addCreditsUI,"states.editors.CreditsEditorState","addCreditsUI",0x99cdacbd,"states.editors.CreditsEditorState.addCreditsUI","states/editors/CreditsEditorState.hx",223,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_226_addCreditsUI,"states.editors.CreditsEditorState","addCreditsUI",0x99cdacbd,"states.editors.CreditsEditorState.addCreditsUI","states/editors/CreditsEditorState.hx",226,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_228_addCreditsUI,"states.editors.CreditsEditorState","addCreditsUI",0x99cdacbd,"states.editors.CreditsEditorState.addCreditsUI","states/editors/CreditsEditorState.hx",228,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_230_addCreditsUI,"states.editors.CreditsEditorState","addCreditsUI",0x99cdacbd,"states.editors.CreditsEditorState.addCreditsUI","states/editors/CreditsEditorState.hx",230,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_233_addCreditsUI,"states.editors.CreditsEditorState","addCreditsUI",0x99cdacbd,"states.editors.CreditsEditorState.addCreditsUI","states/editors/CreditsEditorState.hx",233,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_252_addCreditsUI,"states.editors.CreditsEditorState","addCreditsUI",0x99cdacbd,"states.editors.CreditsEditorState.addCreditsUI","states/editors/CreditsEditorState.hx",252,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_263_addCreditsUI,"states.editors.CreditsEditorState","addCreditsUI",0x99cdacbd,"states.editors.CreditsEditorState.addCreditsUI","states/editors/CreditsEditorState.hx",263,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_274_addCreditsUI,"states.editors.CreditsEditorState","addCreditsUI",0x99cdacbd,"states.editors.CreditsEditorState.addCreditsUI","states/editors/CreditsEditorState.hx",274,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_278_addCreditsUI,"states.editors.CreditsEditorState","addCreditsUI",0x99cdacbd,"states.editors.CreditsEditorState.addCreditsUI","states/editors/CreditsEditorState.hx",278,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_200_addCreditsUI,"states.editors.CreditsEditorState","addCreditsUI",0x99cdacbd,"states.editors.CreditsEditorState.addCreditsUI","states/editors/CreditsEditorState.hx",200,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_314_updateCreditObjects,"states.editors.CreditsEditorState","updateCreditObjects",0xb28a3ba2,"states.editors.CreditsEditorState.updateCreditObjects","states/editors/CreditsEditorState.hx",314,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_366_addCredit,"states.editors.CreditsEditorState","addCredit",0x77b5e30a,"states.editors.CreditsEditorState.addCredit","states/editors/CreditsEditorState.hx",366,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_380_addTitle,"states.editors.CreditsEditorState","addTitle",0xbeb45be7,"states.editors.CreditsEditorState.addTitle","states/editors/CreditsEditorState.hx",380,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_395_dataGoToInputs,"states.editors.CreditsEditorState","dataGoToInputs",0xedd4c246,"states.editors.CreditsEditorState.dataGoToInputs","states/editors/CreditsEditorState.hx",395,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_408_cleanInputs,"states.editors.CreditsEditorState","cleanInputs",0xb4771562,"states.editors.CreditsEditorState.cleanInputs","states/editors/CreditsEditorState.hx",408,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_420_setItemData,"states.editors.CreditsEditorState","setItemData",0xfab2b46f,"states.editors.CreditsEditorState.setItemData","states/editors/CreditsEditorState.hx",420,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_440_deleteSelItem,"states.editors.CreditsEditorState","deleteSelItem",0x30aa26b2,"states.editors.CreditsEditorState.deleteSelItem","states/editors/CreditsEditorState.hx",440,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_473_templateArray,"states.editors.CreditsEditorState","templateArray",0x899014cf,"states.editors.CreditsEditorState.templateArray","states/editors/CreditsEditorState.hx",473,0x1795c2fe)
static const ::String _hx_array_data_2b7d063e_34[] = {
	HX_("Title",78,85,68,a3),
};
static const ::String _hx_array_data_2b7d063e_35[] = {
	HX_("User",6b,be,86,38),HX_("",00,00,00,00),HX_("Description here...",ba,8e,0b,27),HX_("",00,00,00,00),HX_("e1e1e1",84,f1,95,db),
};
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_479_pushAtPos,"states.editors.CreditsEditorState","pushAtPos",0xae638bf7,"states.editors.CreditsEditorState.pushAtPos","states/editors/CreditsEditorState.hx",479,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_496_update,"states.editors.CreditsEditorState","update",0xf6e83a39,"states.editors.CreditsEditorState.update","states/editors/CreditsEditorState.hx",496,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_560_changeSelection,"states.editors.CreditsEditorState","changeSelection",0x36d2de8c,"states.editors.CreditsEditorState.changeSelection","states/editors/CreditsEditorState.hx",560,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_583_changeSelection,"states.editors.CreditsEditorState","changeSelection",0x36d2de8c,"states.editors.CreditsEditorState.changeSelection","states/editors/CreditsEditorState.hx",583,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_617_unselectableCheck,"states.editors.CreditsEditorState","unselectableCheck",0xbe24b1e9,"states.editors.CreditsEditorState.unselectableCheck","states/editors/CreditsEditorState.hx",617,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_619_nullCheck,"states.editors.CreditsEditorState","nullCheck",0x9dc66a91,"states.editors.CreditsEditorState.nullCheck","states/editors/CreditsEditorState.hx",619,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_624_getCurrentBGColor,"states.editors.CreditsEditorState","getCurrentBGColor",0x5076734b,"states.editors.CreditsEditorState.getCurrentBGColor","states/editors/CreditsEditorState.hx",624,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_632_makeSquareBorder,"states.editors.CreditsEditorState","makeSquareBorder",0x0d9918a7,"states.editors.CreditsEditorState.makeSquareBorder","states/editors/CreditsEditorState.hx",632,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_641_showIconExist,"states.editors.CreditsEditorState","showIconExist",0x030d4991,"states.editors.CreditsEditorState.showIconExist","states/editors/CreditsEditorState.hx",641,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_652_iconColorShow,"states.editors.CreditsEditorState","iconColorShow",0xb50f5317,"states.editors.CreditsEditorState.iconColorShow","states/editors/CreditsEditorState.hx",652,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_667_getEvent,"states.editors.CreditsEditorState","getEvent",0x0ab7f7d4,"states.editors.CreditsEditorState.getEvent","states/editors/CreditsEditorState.hx",667,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_680_onSaveComplete,"states.editors.CreditsEditorState","onSaveComplete",0x293a1105,"states.editors.CreditsEditorState.onSaveComplete","states/editors/CreditsEditorState.hx",680,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_689_onSaveCancel,"states.editors.CreditsEditorState","onSaveCancel",0x421912c6,"states.editors.CreditsEditorState.onSaveCancel","states/editors/CreditsEditorState.hx",689,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_697_onSaveError,"states.editors.CreditsEditorState","onSaveError",0x4f0bd3fc,"states.editors.CreditsEditorState.onSaveError","states/editors/CreditsEditorState.hx",697,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_705_saveCredits,"states.editors.CreditsEditorState","saveCredits",0x97f05a2d,"states.editors.CreditsEditorState.saveCredits","states/editors/CreditsEditorState.hx",705,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_723_loadCredits,"states.editors.CreditsEditorState","loadCredits",0x0eedea64,"states.editors.CreditsEditorState.loadCredits","states/editors/CreditsEditorState.hx",723,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_734_onLoadComplete,"states.editors.CreditsEditorState","onLoadComplete",0xd01ab0ee,"states.editors.CreditsEditorState.onLoadComplete","states/editors/CreditsEditorState.hx",734,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_768_onLoadCancel,"states.editors.CreditsEditorState","onLoadCancel",0xae8ab66f,"states.editors.CreditsEditorState.onLoadCancel","states/editors/CreditsEditorState.hx",768,0x1795c2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_5bb599625acdd1fd_777_onLoadError,"states.editors.CreditsEditorState","onLoadError",0xdb961873,"states.editors.CreditsEditorState.onLoadError","states/editors/CreditsEditorState.hx",777,0x1795c2fe)
namespace states{
namespace editors{

void CreditsEditorState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_5bb599625acdd1fd_40_new)
HXLINE( 732)		this->loadError = false;
HXLINE( 558)		this->curSelIsTitle = false;
HXLINE( 557)		this->moveTween = null();
HXLINE( 494)		this->holdTime = ((Float)0);
HXLINE( 493)		this->quitting = false;
HXLINE(  64)		this->text = HX_("",00,00,00,00);
HXLINE(  62)		this->offsetThing = ((Float)-75);
HXLINE(  48)		this->ignoreWarnings = false;
HXLINE(  47)		this->blockPressWhileTypingOn = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  46)		this->creditsStuff = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  45)		this->iconArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  42)		this->currentlySelected = -1;
HXLINE(  40)		super::__construct(TransIn,TransOut);
            	}

Dynamic CreditsEditorState_obj::__CreateEmpty() { return new CreditsEditorState_obj; }

void *CreditsEditorState_obj::_hx_vtable = 0;

Dynamic CreditsEditorState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CreditsEditorState_obj > _hx_result = new CreditsEditorState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CreditsEditorState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x53aaab8a || inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x685a7d2e || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void CreditsEditorState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_5bb599625acdd1fd_67_create)
HXLINE(  68)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  68)		::String library = null();
HXDLIN(  68)		 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("offsetSong",08,ad,6f,48),library);
HXDLIN(  68)		_hx_tmp->playMusic(file,((Float)0.5),null(),null());
HXLINE(  69)		::backend::Paths_obj::clearStoredMemory(null());
HXLINE(  72)		::backend::DiscordClient_obj::changePresence(HX_("Credits Editor Menu",cc,1d,7f,60),null(),null(),null(),null());
HXLINE(  75)		this->persistentUpdate = true;
HXLINE(  76)		 ::flixel::FlxSprite _hx_tmp1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  76)		this->background = _hx_tmp1->loadGraphic(::backend::Paths_obj::image(HX_("menuBG/menuDesat",3b,4d,f5,8e),null(),null()),null(),null(),null(),null(),null());
HXLINE(  77)		this->add(this->background);
HXLINE(  78)		{
HXLINE(  78)			 ::flixel::FlxSprite _this = this->background;
HXDLIN(  78)			int axes = 17;
HXDLIN(  78)			bool _hx_tmp2;
HXDLIN(  78)			if ((axes != 1)) {
HXLINE(  78)				_hx_tmp2 = (axes == 17);
            			}
            			else {
HXLINE(  78)				_hx_tmp2 = true;
            			}
HXDLIN(  78)			if (_hx_tmp2) {
HXLINE(  78)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  78)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  78)			bool _hx_tmp3;
HXDLIN(  78)			if ((axes != 16)) {
HXLINE(  78)				_hx_tmp3 = (axes == 17);
            			}
            			else {
HXLINE(  78)				_hx_tmp3 = true;
            			}
HXDLIN(  78)			if (_hx_tmp3) {
HXLINE(  78)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  78)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  80)		this->velocityBackground =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,::flixel::addons::display::FlxGridOverlay_obj::createGrid(30,30,60,60,true,991303986,0),17,null(),null());
HXLINE(  81)		{
HXLINE(  81)			 ::flixel::math::FlxBasePoint this1 = this->velocityBackground->velocity;
HXDLIN(  81)			Float x;
HXDLIN(  81)			if ((::flixel::FlxG_obj::random->_hx_float(0,100,null()) < 50)) {
HXLINE(  81)				x = ( (Float)(90) );
            			}
            			else {
HXLINE(  81)				x = ( (Float)(-90) );
            			}
HXDLIN(  81)			Float y;
HXDLIN(  81)			if ((::flixel::FlxG_obj::random->_hx_float(0,100,null()) < 50)) {
HXLINE(  81)				y = ( (Float)(90) );
            			}
            			else {
HXLINE(  81)				y = ( (Float)(-90) );
            			}
HXDLIN(  81)			this1->set_x(x);
HXDLIN(  81)			this1->set_y(y);
            		}
HXLINE(  83)		this->add(this->velocityBackground);
HXLINE(  84)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  86)		this->groupOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  87)		this->add(this->groupOptions);
HXLINE(  89)		this->camGame =  ::flixel::FlxCamera_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null());
HXLINE(  90)		this->camUI =  ::flixel::FlxCamera_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null());
HXLINE(  91)		this->camOther =  ::flixel::FlxCamera_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null());
HXLINE(  92)		{
HXLINE(  92)			 ::flixel::FlxCamera _hx_tmp4 = this->camUI;
HXDLIN(  92)			_hx_tmp4->bgColor = (_hx_tmp4->bgColor & 16777215);
HXDLIN(  92)			 ::flixel::FlxCamera _hx_tmp5 = this->camUI;
HXDLIN(  92)			_hx_tmp5->bgColor = (_hx_tmp5->bgColor | 0);
            		}
HXLINE(  93)		{
HXLINE(  93)			 ::flixel::FlxCamera _hx_tmp6 = this->camOther;
HXDLIN(  93)			_hx_tmp6->bgColor = (_hx_tmp6->bgColor & 16777215);
HXDLIN(  93)			 ::flixel::FlxCamera _hx_tmp7 = this->camOther;
HXDLIN(  93)			_hx_tmp7->bgColor = (_hx_tmp7->bgColor | 0);
            		}
HXLINE(  95)		::flixel::FlxG_obj::cameras->reset(this->camGame);
HXLINE(  96)		::flixel::FlxG_obj::cameras->add(this->camUI,false).StaticCast<  ::flixel::FlxCamera >();
HXLINE(  97)		::flixel::FlxG_obj::cameras->add(this->camOther,false).StaticCast<  ::flixel::FlxCamera >();
HXLINE(  98)		::flixel::FlxG_obj::cameras->setDefaultDrawTarget(this->camGame,true);
HXLINE(  99)		::backend::CustomFadeTransition_obj::nextCamera = this->camOther;
HXLINE( 101)		::Array< ::Dynamic> tabs = ::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("name",4b,72,ff,48),HX_("Credits",fa,35,af,e0))
            			->setFixed(1,HX_("label",f4,0d,af,6f),HX_("Credits",fa,35,af,e0))));
HXLINE( 105)		this->UI_box =  ::flixel::addons::ui::FlxUITabMenu_obj::__alloc( HX_CTX ,null(),null(),tabs,null(),true,null(),null());
HXLINE( 106)		this->UI_box->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,this->camUI));
HXLINE( 107)		this->UI_box->resize(( (Float)(270) ),( (Float)(380) ));
HXLINE( 108)		this->UI_box->set_x(( (Float)(940) ));
HXLINE( 109)		this->UI_box->set_y(( (Float)(25) ));
HXLINE( 110)		{
HXLINE( 110)			 ::flixel::math::FlxBasePoint this2 = this->UI_box->scrollFactor;
HXDLIN( 110)			this2->set_x(( (Float)(0) ));
HXDLIN( 110)			this2->set_y(( (Float)(0) ));
            		}
HXLINE( 111)		this->add(this->UI_box);
HXLINE( 112)		this->UI_box->set_selected_tab(0);
HXLINE( 115)		this->text = HX_("W/S or Up/Down - Change selected item\n\t\t\nEnter - Apply changes\n\t\t\nSpace - Get selected item data\n\t\t\nDelete - Delete selected item\n\t\t\nR - Reset inputs\n\t\t\n1 - Add title\n\t\t\n2 - Add credit",6c,54,e1,fe);
HXLINE( 132)		::Array< ::String > tipTextArray = this->text.split(HX_("\n",0a,00,00,00));
HXLINE( 133)		{
HXLINE( 133)			int _g = 0;
HXDLIN( 133)			int _g1 = tipTextArray->length;
HXDLIN( 133)			while((_g < _g1)){
HXLINE( 133)				_g = (_g + 1);
HXDLIN( 133)				int i = (_g - 1);
HXLINE( 134)				Float tipText = this->UI_box->x;
HXDLIN( 134)				Float tipText1 = this->UI_box->y;
HXDLIN( 134)				Float tipText2 = ((tipText1 + this->UI_box->get_height()) + 8);
HXDLIN( 134)				 ::flixel::text::FlxText tipText3 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,tipText,tipText2,0,tipTextArray->__get(i),14,null());
HXLINE( 135)				tipText3->set_y((tipText3->y + (i * 9)));
HXLINE( 137)				tipText3->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),14,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 140)				tipText3->set_borderSize(( (Float)(1) ));
HXLINE( 141)				{
HXLINE( 141)					 ::flixel::math::FlxBasePoint this1 = tipText3->scrollFactor;
HXDLIN( 141)					this1->set_x(( (Float)(0) ));
HXDLIN( 141)					this1->set_y(( (Float)(0) ));
            				}
HXLINE( 142)				this->add(tipText3);
HXLINE( 143)				tipText3->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,this->camUI));
            			}
            		}
HXLINE( 146)		this->addCreditsUI();
HXLINE( 148)		this->creditsStuff = this->templateArray();
HXLINE( 150)		this->descriptionBox =  ::objects::AttachedSprite_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 156)		this->descriptionBox->makeGraphic(1,1,-16777216,null(),null());
HXLINE( 158)		this->descriptionBox->xAdd = ( (Float)(-10) );
HXLINE( 159)		this->descriptionBox->yAdd = ( (Float)(-10) );
HXLINE( 160)		this->descriptionBox->alphaMult = ((Float)0.6);
HXLINE( 161)		this->descriptionBox->set_alpha(((Float)0.6));
HXLINE( 162)		this->add(this->descriptionBox);
HXLINE( 164)		this->descriptionText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,50,((::flixel::FlxG_obj::height + this->offsetThing) - ( (Float)(25) )),1180,HX_("",00,00,00,00),32,null());
HXLINE( 166)		this->descriptionText->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),32,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 169)		{
HXLINE( 169)			 ::flixel::math::FlxBasePoint this3 = this->descriptionText->scrollFactor;
HXDLIN( 169)			this3->set_x(( (Float)(0) ));
HXDLIN( 169)			this3->set_y(( (Float)(0) ));
            		}
HXLINE( 171)		this->descriptionBox->sprTracker = this->descriptionText;
HXLINE( 172)		this->add(this->descriptionText);
HXLINE( 174)		::backend::Paths_obj::clearUnusedMemory();
HXLINE( 175)		this->descriptionBox->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,this->camUI));
HXLINE( 176)		this->descriptionText->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,this->camUI));
HXLINE( 178)		this->updateCreditObjects();
HXLINE( 180)		 ::flixel::FlxSprite _hx_tmp8 = this->background;
HXDLIN( 180)		_hx_tmp8->set_color(( (int)(this->getCurrentBGColor()) ));
HXLINE( 181)		this->intendedColor = this->background->color;
HXLINE( 182)		this->changeSelection(null(),null());
HXLINE( 184)		this->super::create();
            	}


void CreditsEditorState_obj::addCreditsUI(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_5bb599625acdd1fd_203_addCreditsUI)
HXLINE( 203)			::openfl::Lib_obj::get_current()->stage->window->_hx___backend->setTextInputEnabled(true);
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::states::editors::CreditsEditorState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_5bb599625acdd1fd_211_addCreditsUI)
HXLINE( 211)			::flixel::FlxG_obj::save->data->__SetField(HX_("jumpTitle",ca,21,08,9c),_gthis->titleJump->checked,::hx::paccDynamic);
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::states::editors::CreditsEditorState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_5bb599625acdd1fd_215_addCreditsUI)
HXLINE( 215)			_gthis->addTitle();
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_3) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_5bb599625acdd1fd_221_addCreditsUI)
HXLINE( 221)			::openfl::Lib_obj::get_current()->stage->window->_hx___backend->setTextInputEnabled(true);
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_4) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_5bb599625acdd1fd_223_addCreditsUI)
HXLINE( 223)			::openfl::Lib_obj::get_current()->stage->window->_hx___backend->setTextInputEnabled(true);
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_5) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_5bb599625acdd1fd_226_addCreditsUI)
HXLINE( 226)			::openfl::Lib_obj::get_current()->stage->window->_hx___backend->setTextInputEnabled(true);
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_6) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_5bb599625acdd1fd_228_addCreditsUI)
HXLINE( 228)			::openfl::Lib_obj::get_current()->stage->window->_hx___backend->setTextInputEnabled(true);
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_7) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_5bb599625acdd1fd_230_addCreditsUI)
HXLINE( 230)			::openfl::Lib_obj::get_current()->stage->window->_hx___backend->setTextInputEnabled(true);
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_8, ::states::editors::CreditsEditorState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_5bb599625acdd1fd_233_addCreditsUI)
HXLINE( 234)			::String icon;
HXLINE( 235)			bool getIconColor;
HXDLIN( 235)			if (::hx::IsNotNull( _gthis->iconInput->text )) {
HXLINE( 235)				getIconColor = (_gthis->iconInput->text.length > 0);
            			}
            			else {
HXLINE( 235)				getIconColor = false;
            			}
HXDLIN( 235)			if (getIconColor) {
HXLINE( 235)				icon = _gthis->iconInput->text;
            			}
            			else {
HXLINE( 236)				icon = _gthis->creditsStuff->__get(_gthis->currentlySelected).StaticCast< ::Array< ::String > >()->__get(1);
            			}
HXLINE( 238)			::String pathIcon;
HXLINE( 239)			if (::backend::Paths_obj::fileExists(((HX_("images/credits/",4c,68,6a,b3) + icon) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),null(),null())) {
HXLINE( 239)				pathIcon = (HX_("credits/",d5,48,ee,de) + icon);
            			}
            			else {
HXLINE( 240)				pathIcon = HX_("credits/unknownIcon",6e,b1,0d,be);
            			}
HXLINE( 242)			 ::flixel::FlxSprite iconSprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN( 242)			 ::flixel::FlxSprite iconSprite1 = iconSprite->loadGraphic(::backend::Paths_obj::image(pathIcon,null(),null()),null(),null(),null(),null(),null());
HXLINE( 243)			 ::haxe::ds::IntMap countByColor =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXDLIN( 243)			{
HXLINE( 243)				int _g = 0;
HXDLIN( 243)				int _g1 = iconSprite1->frameWidth;
HXDLIN( 243)				while((_g < _g1)){
HXLINE( 243)					_g = (_g + 1);
HXDLIN( 243)					int col = (_g - 1);
HXDLIN( 243)					{
HXLINE( 243)						int _g1 = 0;
HXDLIN( 243)						int _g2 = iconSprite1->frameHeight;
HXDLIN( 243)						while((_g1 < _g2)){
HXLINE( 243)							_g1 = (_g1 + 1);
HXDLIN( 243)							int row = (_g1 - 1);
HXDLIN( 243)							int colorOfThisPixel = iconSprite1->get_pixels()->getPixel32(col,row);
HXDLIN( 243)							if ((colorOfThisPixel != 0)) {
HXLINE( 243)								if (countByColor->exists(colorOfThisPixel)) {
HXLINE( 243)									int v = (countByColor->get(colorOfThisPixel) + 1);
HXDLIN( 243)									countByColor->set(colorOfThisPixel,v);
            								}
            								else {
HXLINE( 243)									if (::hx::IsNotEq( countByColor->get(colorOfThisPixel),-13520687 )) {
HXLINE( 243)										countByColor->set(colorOfThisPixel,1);
            									}
            								}
            							}
            						}
            					}
            				}
            			}
HXDLIN( 243)			int maxCount = 0;
HXDLIN( 243)			int maxKey = 0;
HXDLIN( 243)			countByColor->set(-16777216,0);
HXDLIN( 243)			{
HXLINE( 243)				 ::Dynamic key = countByColor->keys();
HXDLIN( 243)				while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 243)					int key1 = ( (int)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 243)					if (::hx::IsGreaterEq( countByColor->get(key1),maxCount )) {
HXLINE( 243)						maxCount = ( (int)(countByColor->get(key1)) );
HXDLIN( 243)						maxKey = key1;
            					}
            				}
            			}
HXDLIN( 243)			countByColor =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXDLIN( 243)			::String daColor = ::StringTools_obj::hex(maxKey,null()).substring(2,_gthis->length);
HXLINE( 244)			_gthis->colorInput->set_text(daColor);
HXLINE( 246)			iconSprite1->kill();
HXLINE( 247)			iconSprite1 = null();
HXLINE( 248)			_gthis->iconColorShow();
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_9, ::states::editors::CreditsEditorState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_5bb599625acdd1fd_252_addCreditsUI)
HXLINE( 252)			_gthis->addCredit();
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_11, ::states::editors::CreditsEditorState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_10, ::states::editors::CreditsEditorState,_gthis) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_5bb599625acdd1fd_263_addCreditsUI)
HXLINE( 264)				_gthis->creditsStuff = _gthis->templateArray();
HXLINE( 265)				_gthis->updateCreditObjects();
HXLINE( 266)				_gthis->currentlySelected = 1;
HXLINE( 267)				_gthis->changeSelection(null(),null());
            			}
            			HX_END_LOCAL_FUNC0((void))

            			HX_GC_STACKFRAME(&_hx_pos_5bb599625acdd1fd_263_addCreditsUI)
HXLINE( 263)			 ::states::editors::CreditsEditorState _gthis1 = _gthis;
HXDLIN( 263)			_gthis1->openSubState( ::substates::Prompt_obj::__alloc( HX_CTX ,HX_("This action will clear current progress.\n\nProceed?",52,45,0c,9c),0, ::Dynamic(new _hx_Closure_10(_gthis)),null(),_gthis->ignoreWarnings,null(),null()));
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_12, ::states::editors::CreditsEditorState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_5bb599625acdd1fd_274_addCreditsUI)
HXLINE( 274)			_gthis->loadCredits();
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_13, ::states::editors::CreditsEditorState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_5bb599625acdd1fd_278_addCreditsUI)
HXLINE( 278)			_gthis->saveCredits();
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_5bb599625acdd1fd_200_addCreditsUI)
HXDLIN( 200)		 ::states::editors::CreditsEditorState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 201)		Float yDist = ( (Float)(20) );
HXLINE( 202)		this->titleInput =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,60,20,180,HX_("",00,00,00,00),8,null(),null(),null());
HXLINE( 203)		this->titleInput->focusGained =  ::Dynamic(new _hx_Closure_0());
HXLINE( 204)		this->titleJump =  ::flixel::addons::ui::FlxUICheckBox_obj::__alloc( HX_CTX ,20,(this->titleInput->y + yDist),null(),null(),HX_("Space betwen titles",f2,ba,97,00),110,null(),null());
HXLINE( 205)		 ::flixel::addons::ui::FlxUICheckBox fh = this->titleJump;
HXDLIN( 205)		fh->set_textX((fh->textX + 3));
HXLINE( 206)		 ::flixel::addons::ui::FlxUICheckBox fh1 = this->titleJump;
HXDLIN( 206)		fh1->set_textY((fh1->textY + 4));
HXLINE( 207)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("jumpTitle",ca,21,08,9c),::hx::paccDynamic) )) {
HXLINE( 207)			::flixel::FlxG_obj::save->data->__SetField(HX_("jumpTitle",ca,21,08,9c),true,::hx::paccDynamic);
            		}
HXLINE( 208)		this->titleJump->set_checked(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("jumpTitle",ca,21,08,9c),::hx::paccDynamic)) ));
HXLINE( 209)		this->titleJump->callback =  ::Dynamic(new _hx_Closure_1(_gthis));
HXLINE( 213)		 ::flixel::ui::FlxButton titleAdd =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,20,((this->titleJump->y + yDist) + 10),HX_("Add Title",19,b2,36,94), ::Dynamic(new _hx_Closure_2(_gthis)));
HXLINE( 218)		this->blockPressWhileTypingOn->push(this->titleInput);
HXLINE( 220)		this->creditNameInput =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,60,(this->titleInput->y + 100),180,HX_("",00,00,00,00),8,null(),null(),null());
HXLINE( 221)		this->creditNameInput->focusGained =  ::Dynamic(new _hx_Closure_3());
HXLINE( 222)		this->iconInput =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,60,(this->creditNameInput->y + yDist),155,HX_("",00,00,00,00),8,null(),null(),null());
HXLINE( 223)		this->iconInput->focusGained =  ::Dynamic(new _hx_Closure_4());
HXLINE( 224)		this->iconExistCheck =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(this->iconInput->x + 165),this->iconInput->y,null())->makeGraphic(15,15,-1,null(),null());
HXLINE( 225)		this->descInput =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,100,(this->iconInput->y + yDist),140,HX_("",00,00,00,00),8,null(),null(),null());
HXLINE( 226)		this->descInput->focusGained =  ::Dynamic(new _hx_Closure_5());
HXLINE( 227)		this->linkInput =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,60,(this->descInput->y + yDist),180,HX_("",00,00,00,00),8,null(),null(),null());
HXLINE( 228)		this->linkInput->focusGained =  ::Dynamic(new _hx_Closure_6());
HXLINE( 229)		this->colorInput =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,60,(this->linkInput->y + yDist),70,HX_("",00,00,00,00),8,null(),null(),null());
HXLINE( 230)		this->colorInput->focusGained =  ::Dynamic(new _hx_Closure_7());
HXLINE( 231)		this->colorSquare =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(this->colorInput->x + 80),this->colorInput->y,null())->makeGraphic(15,15,-1,null(),null());
HXLINE( 232)		 ::flixel::ui::FlxButton getIconColor =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,(this->colorSquare->x + 23),(this->colorSquare->y - ( (Float)(2) )),HX_("Get Icon Color",e6,70,34,26), ::Dynamic(new _hx_Closure_8(_gthis)));
HXLINE( 250)		 ::flixel::ui::FlxButton creditAdd =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,20,((this->colorInput->y + yDist) + 10),HX_("Add credit",78,84,aa,3f), ::Dynamic(new _hx_Closure_9(_gthis)));
HXLINE( 255)		this->blockPressWhileTypingOn->push(this->creditNameInput);
HXLINE( 256)		this->blockPressWhileTypingOn->push(this->iconInput);
HXLINE( 257)		this->blockPressWhileTypingOn->push(this->linkInput);
HXLINE( 258)		this->blockPressWhileTypingOn->push(this->descInput);
HXLINE( 259)		this->blockPressWhileTypingOn->push(this->colorInput);
HXLINE( 261)		 ::flixel::ui::FlxButton resetAll =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,50,300,HX_("Reset all",30,8a,56,12), ::Dynamic(new _hx_Closure_11(_gthis)));
HXLINE( 270)		resetAll->set_color(-65536);
HXLINE( 271)		resetAll->label->set_color(-1);
HXLINE( 272)		 ::flixel::ui::FlxButton loadFile =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,resetAll->x,(resetAll->y + 25),HX_("Load Credits",20,f6,c6,ae), ::Dynamic(new _hx_Closure_12(_gthis)));
HXLINE( 276)		 ::flixel::ui::FlxButton saveFile =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,(loadFile->x + 90),loadFile->y,HX_("Save Credits",37,56,e6,07), ::Dynamic(new _hx_Closure_13(_gthis)));
HXLINE( 281)		 ::flixel::addons::ui::FlxUI tab_group_credits =  ::flixel::addons::ui::FlxUI_obj::__alloc( HX_CTX ,null(),this->UI_box,null(),null(),null(),null());
HXLINE( 282)		tab_group_credits->name = HX_("Credits",fa,35,af,e0);
HXLINE( 284)		tab_group_credits->add(this->titleInput).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 285)		tab_group_credits->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(this->titleInput->x - ( (Float)(40) )),this->titleInput->y,0,HX_("Title:",c2,43,0c,58),null(),null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 286)		tab_group_credits->add(this->titleJump).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 288)		tab_group_credits->add(this->creditNameInput).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 289)		tab_group_credits->add(this->iconInput).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 290)		tab_group_credits->add(this->makeSquareBorder(this->iconExistCheck,18)).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 291)		tab_group_credits->add(this->iconExistCheck).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 292)		tab_group_credits->add(this->descInput).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 293)		tab_group_credits->add(this->linkInput).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 294)		tab_group_credits->add(this->colorInput).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 295)		tab_group_credits->add(this->makeSquareBorder(this->colorSquare,18)).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 296)		tab_group_credits->add(this->colorSquare).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 297)		tab_group_credits->add(getIconColor).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 298)		tab_group_credits->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(this->creditNameInput->x - ( (Float)(40) )),this->creditNameInput->y,0,HX_("Name:",6f,ff,b1,29),null(),null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 299)		tab_group_credits->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(this->iconInput->x - ( (Float)(40) )),this->iconInput->y,0,HX_("Icon:",81,12,05,4a),null(),null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 300)		tab_group_credits->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(this->descInput->x - ( (Float)(80) )),this->descInput->y,0,HX_("Description:",de,1f,5d,a2),null(),null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 301)		tab_group_credits->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(this->linkInput->x - ( (Float)(40) )),this->linkInput->y,0,HX_("Link:",e0,52,2f,08),null(),null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 302)		tab_group_credits->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(this->colorInput->x - ( (Float)(40) )),this->colorInput->y,0,HX_("Color:",97,39,1b,fb),null(),null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 303)		tab_group_credits->add(titleAdd).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 304)		tab_group_credits->add(creditAdd).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 306)		tab_group_credits->add(loadFile).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 307)		tab_group_credits->add(saveFile).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 308)		tab_group_credits->add(resetAll).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 310)		this->UI_box->addGroup(tab_group_credits);
HXLINE( 311)		this->showIconExist(this->iconInput->text);
            	}


HX_DEFINE_DYNAMIC_FUNC0(CreditsEditorState_obj,addCreditsUI,(void))

void CreditsEditorState_obj::updateCreditObjects(){
            	HX_GC_STACKFRAME(&_hx_pos_5bb599625acdd1fd_314_updateCreditObjects)
HXLINE( 315)		bool _hx_tmp;
HXDLIN( 315)		if (::hx::IsNotNull( this->creditsStuff )) {
HXLINE( 315)			_hx_tmp = (this->creditsStuff->length > 0);
            		}
            		else {
HXLINE( 315)			_hx_tmp = false;
            		}
HXDLIN( 315)		if (_hx_tmp) {
HXLINE( 316)			{
HXLINE( 316)				int _g = 0;
HXDLIN( 316)				int _g1 = this->iconArray->length;
HXDLIN( 316)				while((_g < _g1)){
HXLINE( 316)					_g = (_g + 1);
HXDLIN( 316)					int i = (_g - 1);
HXLINE( 317)					this->iconArray->__get(i).StaticCast<  ::objects::HealthIcon >()->kill();
            				}
            			}
HXLINE( 319)			this->iconArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 320)			{
HXLINE( 320)				 ::Dynamic filter = null();
HXDLIN( 320)				 ::flixel::group::FlxTypedGroupIterator option =  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->groupOptions->members,filter);
HXDLIN( 320)				while(option->hasNext()){
HXLINE( 320)					 ::objects::Alphabet option1 = option->next().StaticCast<  ::objects::Alphabet >();
HXLINE( 321)					option1->kill();
            				}
            			}
HXLINE( 323)			this->groupOptions->clear();
            		}
HXLINE( 326)		{
HXLINE( 326)			int _g = 0;
HXDLIN( 326)			int _g1 = this->creditsStuff->length;
HXDLIN( 326)			while((_g < _g1)){
HXLINE( 326)				_g = (_g + 1);
HXDLIN( 326)				int i = (_g - 1);
HXLINE( 328)				bool isSelectable = !(this->unselectableCheck(i));
HXLINE( 329)				 ::objects::Alphabet optionText =  ::objects::Alphabet_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )),( (Float)(300) ),this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >()->__get(0),!(isSelectable));
HXLINE( 330)				optionText->isMenuItem = true;
HXLINE( 331)				optionText->targetY = (i - this->currentlySelected);
HXLINE( 333)				optionText->ID = i;
HXLINE( 334)				optionText->changeX = false;
HXLINE( 335)				optionText->snapToPosition();
HXLINE( 336)				this->groupOptions->add(optionText).StaticCast<  ::objects::Alphabet >();
HXLINE( 338)				if (isSelectable) {
HXLINE( 339)					if (::hx::IsNotNull( this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >()->__get(5) )) {
HXLINE( 341)						::backend::Paths_obj::currentModDirectory = this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >()->__get(5);
            					}
HXLINE( 344)					 ::objects::HealthIcon icon;
HXLINE( 345)					if (::backend::Paths_obj::fileExists(((HX_("images/credits/",4c,68,6a,b3) + this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >()->__get(1)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),null(),null())) {
HXLINE( 345)						icon =  ::objects::HealthIcon_obj::__alloc( HX_CTX ,(HX_("credits/",d5,48,ee,de) + this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >()->__get(1)),null(),null());
            					}
            					else {
HXLINE( 347)						icon =  ::objects::HealthIcon_obj::__alloc( HX_CTX ,HX_("credits/unknownIcon",6e,b1,0d,be),null(),null());
HXLINE( 348)						bool _hx_tmp;
HXDLIN( 348)						if (::hx::IsNotNull( this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >()->__get(1) )) {
HXLINE( 348)							_hx_tmp = (this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >()->__get(1) == HX_("",00,00,00,00));
            						}
            						else {
HXLINE( 348)							_hx_tmp = true;
            						}
HXDLIN( 348)						if (_hx_tmp) {
HXLINE( 348)							icon =  ::objects::HealthIcon_obj::__alloc( HX_CTX ,HX_("credits/unknownIcon",6e,b1,0d,be),null(),null());
            						}
            					}
HXLINE( 351)					icon->set_x((optionText->get_width() + 10));
HXLINE( 352)					icon->set_y((optionText->get_width() + 10));
HXLINE( 353)					icon->sprTracker = optionText;
HXLINE( 356)					this->iconArray->push(icon);
HXLINE( 357)					this->add(icon);
HXLINE( 358)					::backend::Paths_obj::currentModDirectory = HX_("",00,00,00,00);
HXLINE( 360)					if ((this->currentlySelected == -1)) {
HXLINE( 360)						this->currentlySelected = i;
            					}
            				}
            				else {
HXLINE( 362)					optionText->set_alignment(::objects::Alignment_obj::CENTERED_dyn());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CreditsEditorState_obj,updateCreditObjects,(void))

void CreditsEditorState_obj::addCredit(){
            	HX_STACKFRAME(&_hx_pos_5bb599625acdd1fd_366_addCredit)
HXLINE( 367)		::Array< ::String > daData = ::Array_obj< ::String >::__new(0);
HXLINE( 368)		daData->push(HX_("User",6b,be,86,38));
HXLINE( 369)		daData->push(HX_("",00,00,00,00));
HXLINE( 370)		daData->push(HX_("Description here...",ba,8e,0b,27));
HXLINE( 371)		daData->push(HX_("",00,00,00,00));
HXLINE( 372)		daData->push(HX_("e1e1e1",84,f1,95,db));
HXLINE( 374)		this->pushAtPos((this->currentlySelected + 1),daData);
HXLINE( 376)		this->updateCreditObjects();
HXLINE( 377)		this->changeSelection(null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(CreditsEditorState_obj,addCredit,(void))

void CreditsEditorState_obj::addTitle(){
            	HX_STACKFRAME(&_hx_pos_5bb599625acdd1fd_380_addTitle)
HXLINE( 381)		::Array< ::String > daData = ::Array_obj< ::String >::__new(0);
HXLINE( 382)		daData->push(HX_("Title",78,85,68,a3));
HXLINE( 383)		this->pushAtPos((this->currentlySelected + 1),daData);
HXLINE( 385)		if (this->titleJump->checked) {
HXLINE( 386)			::Array< ::String > daData = ::Array_obj< ::String >::__new(0);
HXLINE( 387)			this->pushAtPos((this->currentlySelected + 1),daData);
            		}
HXLINE( 390)		this->updateCreditObjects();
HXLINE( 391)		this->changeSelection(null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(CreditsEditorState_obj,addTitle,(void))

void CreditsEditorState_obj::dataGoToInputs(){
            	HX_STACKFRAME(&_hx_pos_5bb599625acdd1fd_395_dataGoToInputs)
HXDLIN( 395)		if (this->curSelIsTitle) {
HXLINE( 396)			this->titleInput->set_text(this->creditsStuff->__get(this->currentlySelected).StaticCast< ::Array< ::String > >()->__get(0));
            		}
            		else {
HXLINE( 398)			this->creditNameInput->set_text(this->creditsStuff->__get(this->currentlySelected).StaticCast< ::Array< ::String > >()->__get(0));
HXLINE( 399)			this->iconInput->set_text(this->creditsStuff->__get(this->currentlySelected).StaticCast< ::Array< ::String > >()->__get(1));
HXLINE( 400)			this->descInput->set_text(this->creditsStuff->__get(this->currentlySelected).StaticCast< ::Array< ::String > >()->__get(2));
HXLINE( 401)			this->linkInput->set_text(this->creditsStuff->__get(this->currentlySelected).StaticCast< ::Array< ::String > >()->__get(3));
HXLINE( 402)			this->colorInput->set_text(this->creditsStuff->__get(this->currentlySelected).StaticCast< ::Array< ::String > >()->__get(4));
HXLINE( 403)			this->showIconExist(this->iconInput->text);
HXLINE( 404)			this->iconColorShow();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CreditsEditorState_obj,dataGoToInputs,(void))

void CreditsEditorState_obj::cleanInputs(){
            	HX_STACKFRAME(&_hx_pos_5bb599625acdd1fd_408_cleanInputs)
HXLINE( 409)		this->titleInput->set_text(HX_("",00,00,00,00));
HXLINE( 410)		this->creditNameInput->set_text(HX_("",00,00,00,00));
HXLINE( 411)		this->iconInput->set_text(HX_("",00,00,00,00));
HXLINE( 412)		this->descInput->set_text(HX_("",00,00,00,00));
HXLINE( 413)		this->linkInput->set_text(HX_("",00,00,00,00));
HXLINE( 414)		this->colorInput->set_text(HX_("",00,00,00,00));
HXLINE( 415)		this->showIconExist(this->iconInput->text);
HXLINE( 416)		this->iconColorShow();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CreditsEditorState_obj,cleanInputs,(void))

void CreditsEditorState_obj::setItemData(){
            	HX_STACKFRAME(&_hx_pos_5bb599625acdd1fd_420_setItemData)
HXDLIN( 420)		if (this->curSelIsTitle) {
HXLINE( 421)			bool _hx_tmp;
HXDLIN( 421)			if (::hx::IsNotNull( this->titleInput->text )) {
HXLINE( 421)				_hx_tmp = (this->titleInput->text.length > 0);
            			}
            			else {
HXLINE( 421)				_hx_tmp = false;
            			}
HXDLIN( 421)			if (_hx_tmp) {
HXLINE( 421)				this->creditsStuff->__get(this->currentlySelected).StaticCast< ::Array< ::String > >()[0] = this->titleInput->text;
            			}
            			else {
HXLINE( 422)				this->creditsStuff->__get(this->currentlySelected).StaticCast< ::Array< ::String > >()[0] = HX_("Title",78,85,68,a3);
            			}
            		}
            		else {
HXLINE( 424)			bool _hx_tmp;
HXDLIN( 424)			if (::hx::IsNotNull( this->creditNameInput->text )) {
HXLINE( 424)				_hx_tmp = (this->creditNameInput->text.length > 0);
            			}
            			else {
HXLINE( 424)				_hx_tmp = false;
            			}
HXDLIN( 424)			if (_hx_tmp) {
HXLINE( 424)				this->creditsStuff->__get(this->currentlySelected).StaticCast< ::Array< ::String > >()[0] = this->creditNameInput->text;
            			}
            			else {
HXLINE( 425)				this->creditsStuff->__get(this->currentlySelected).StaticCast< ::Array< ::String > >()[0] = HX_("User",6b,be,86,38);
            			}
HXLINE( 427)			this->creditsStuff->__get(this->currentlySelected).StaticCast< ::Array< ::String > >()[1] = this->iconInput->text;
HXLINE( 429)			bool _hx_tmp1;
HXDLIN( 429)			if (::hx::IsNotNull( this->descInput->text )) {
HXLINE( 429)				_hx_tmp1 = (this->descInput->text.length > 0);
            			}
            			else {
HXLINE( 429)				_hx_tmp1 = false;
            			}
HXDLIN( 429)			if (_hx_tmp1) {
HXLINE( 429)				this->creditsStuff->__get(this->currentlySelected).StaticCast< ::Array< ::String > >()[2] = this->descInput->text;
            			}
            			else {
HXLINE( 430)				this->creditsStuff->__get(this->currentlySelected).StaticCast< ::Array< ::String > >()[2] = HX_("Description here...",ba,8e,0b,27);
            			}
HXLINE( 432)			this->creditsStuff->__get(this->currentlySelected).StaticCast< ::Array< ::String > >()[3] = this->linkInput->text;
HXLINE( 434)			bool _hx_tmp2;
HXDLIN( 434)			if (::hx::IsNotNull( this->colorInput->text )) {
HXLINE( 434)				_hx_tmp2 = (this->colorInput->text.length > 0);
            			}
            			else {
HXLINE( 434)				_hx_tmp2 = false;
            			}
HXDLIN( 434)			if (_hx_tmp2) {
HXLINE( 435)				this->creditsStuff->__get(this->currentlySelected).StaticCast< ::Array< ::String > >()[4] = this->colorInput->text;
            			}
            			else {
HXLINE( 436)				this->creditsStuff->__get(this->currentlySelected).StaticCast< ::Array< ::String > >()[4] = HX_("e1e1e1",84,f1,95,db);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CreditsEditorState_obj,setItemData,(void))

void CreditsEditorState_obj::deleteSelItem(){
            	HX_STACKFRAME(&_hx_pos_5bb599625acdd1fd_440_deleteSelItem)
HXLINE( 441)		bool _hx_tmp;
HXDLIN( 441)		if ((this->currentlySelected != 0)) {
HXLINE( 441)			_hx_tmp = (this->creditsStuff->length <= 1);
            		}
            		else {
HXLINE( 441)			_hx_tmp = true;
            		}
HXDLIN( 441)		if (_hx_tmp) {
HXLINE( 441)			return;
            		}
HXLINE( 442)		::Array< ::Dynamic> daStuff = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 443)		{
HXLINE( 443)			int _g = 0;
HXDLIN( 443)			int _g1 = this->creditsStuff->length;
HXDLIN( 443)			while((_g < _g1)){
HXLINE( 443)				_g = (_g + 1);
HXDLIN( 443)				int i = (_g - 1);
HXLINE( 444)				if (!(this->unselectableCheck(this->currentlySelected))) {
HXLINE( 445)					if ((i != this->currentlySelected)) {
HXLINE( 446)						daStuff->push(this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >());
            					}
            				}
            				else {
HXLINE( 449)					bool creditThing = true;
HXLINE( 450)					if (this->nullCheck((this->currentlySelected - 1))) {
HXLINE( 451)						int u = (this->currentlySelected - 1);
HXLINE( 452)						if ((i == u)) {
HXLINE( 452)							creditThing = false;
            						}
            					}
HXLINE( 455)					bool _hx_tmp;
HXDLIN( 455)					if ((i != this->currentlySelected)) {
HXLINE( 455)						_hx_tmp = creditThing;
            					}
            					else {
HXLINE( 455)						_hx_tmp = false;
            					}
HXDLIN( 455)					if (_hx_tmp) {
HXLINE( 456)						daStuff->push(this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >());
            					}
            				}
            			}
            		}
HXLINE( 460)		this->creditsStuff = daStuff;
HXLINE( 462)		if ((this->currentlySelected > (this->creditsStuff->length - 1))) {
HXLINE( 462)			this->currentlySelected = this->creditsStuff->length;
            		}
HXLINE( 463)		while(true){
HXLINE( 464)			 ::states::editors::CreditsEditorState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 464)			_hx_tmp->currentlySelected = (_hx_tmp->currentlySelected - 1);
HXLINE( 463)			if (!(this->nullCheck(this->currentlySelected))) {
HXLINE( 463)				goto _hx_goto_31;
            			}
            		}
            		_hx_goto_31:;
HXLINE( 467)		 ::states::editors::CreditsEditorState _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 467)		_hx_tmp1->currentlySelected = (_hx_tmp1->currentlySelected + 1);
HXLINE( 468)		this->updateCreditObjects();
HXLINE( 469)		this->changeSelection(-1,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(CreditsEditorState_obj,deleteSelItem,(void))

::Array< ::Dynamic> CreditsEditorState_obj::templateArray(){
            	HX_STACKFRAME(&_hx_pos_5bb599625acdd1fd_473_templateArray)
HXDLIN( 473)		return ::Array_obj< ::Dynamic>::__new(2)->init(0,::Array_obj< ::String >::fromData( _hx_array_data_2b7d063e_34,1))->init(1,::Array_obj< ::String >::fromData( _hx_array_data_2b7d063e_35,5));
            	}


HX_DEFINE_DYNAMIC_FUNC0(CreditsEditorState_obj,templateArray,return )

void CreditsEditorState_obj::pushAtPos(int pos,::Array< ::String > data){
            	HX_STACKFRAME(&_hx_pos_5bb599625acdd1fd_479_pushAtPos)
HXLINE( 480)		::Array< ::Dynamic> daStuff = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 481)		{
HXLINE( 481)			int _g = 0;
HXDLIN( 481)			int _g1 = this->creditsStuff->length;
HXDLIN( 481)			while((_g < _g1)){
HXLINE( 481)				_g = (_g + 1);
HXDLIN( 481)				int i = (_g - 1);
HXLINE( 482)				if ((i == pos)) {
HXLINE( 483)					daStuff->push(data);
            				}
HXLINE( 485)				daStuff->push(this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >());
            			}
            		}
HXLINE( 487)		if ((pos == this->creditsStuff->length)) {
HXLINE( 488)			daStuff->push(data);
            		}
HXLINE( 490)		this->creditsStuff = daStuff;
            	}


HX_DEFINE_DYNAMIC_FUNC2(CreditsEditorState_obj,pushAtPos,(void))

void CreditsEditorState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_5bb599625acdd1fd_496_update)
HXLINE( 497)		if ((::flixel::FlxG_obj::sound->music->_volume < ((Float)0.7))) {
HXLINE( 499)			 ::flixel::sound::FlxSound fh = ::flixel::FlxG_obj::sound->music;
HXDLIN( 499)			fh->set_volume((fh->_volume + (((Float)0.5) * ::flixel::FlxG_obj::elapsed)));
            		}
HXLINE( 502)		bool blockInput = false;
HXLINE( 503)		{
HXLINE( 503)			int _g = 0;
HXDLIN( 503)			::Array< ::Dynamic> _g1 = this->blockPressWhileTypingOn;
HXDLIN( 503)			while((_g < _g1->length)){
HXLINE( 503)				 ::flixel::addons::ui::FlxUIInputText inputText = _g1->__get(_g).StaticCast<  ::flixel::addons::ui::FlxUIInputText >();
HXDLIN( 503)				_g = (_g + 1);
HXLINE( 504)				if (inputText->hasFocus) {
HXLINE( 505)					::flixel::FlxG_obj::sound->muteKeys = ::Array_obj< int >::__new(0);
HXLINE( 506)					::flixel::FlxG_obj::sound->volumeDownKeys = ::Array_obj< int >::__new(0);
HXLINE( 507)					::flixel::FlxG_obj::sound->volumeUpKeys = ::Array_obj< int >::__new(0);
HXLINE( 508)					blockInput = true;
HXLINE( 509)					goto _hx_goto_38;
            				}
            			}
            			_hx_goto_38:;
            		}
HXLINE( 513)		bool _hx_tmp;
HXDLIN( 513)		if (!(this->quitting)) {
HXLINE( 513)			_hx_tmp = !(blockInput);
            		}
            		else {
HXLINE( 513)			_hx_tmp = false;
            		}
HXDLIN( 513)		if (_hx_tmp) {
HXLINE( 515)			if (this->get_controls()->get_UI_UP_P()) {
HXLINE( 517)				this->changeSelection(-1,null());
            			}
HXLINE( 519)			if (this->get_controls()->get_UI_DOWN_P()) {
HXLINE( 521)				this->changeSelection(1,null());
            			}
HXLINE( 524)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 524)			if (_this->keyManager->checkStatusUnsafe(8,_this->status)) {
HXLINE( 526)				if (::hx::IsNotNull( this->colorTween )) {
HXLINE( 527)					this->colorTween->cancel();
            				}
HXLINE( 529)				::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE( 530)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 530)				_hx_tmp->play(::backend::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 531)				::backend::MusicBeatState_obj::switchState( ::states::editors::MasterEditorMenu_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 532)				 ::lime::ui::Window _hx_tmp1 = ::openfl::Lib_obj::get_application()->_hx___window;
HXDLIN( 532)				_hx_tmp1->set_title(((HX_("Friday Night Funkin': SB Engine v",f6,d1,31,c8) + ::states::MainMenuState_obj::cornEngineVersion) + HX_(" - Mod Maker Menu",2c,b4,32,e1)));
HXLINE( 533)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp2 = ::flixel::FlxG_obj::sound;
HXDLIN( 533)				::String library = null();
HXDLIN( 533)				 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("menu/Gates of the hell",0d,b1,f8,c4),library);
HXDLIN( 533)				_hx_tmp2->playMusic(file,null(),null(),null());
HXLINE( 534)				this->quitting = true;
            			}
            		}
HXLINE( 537)		if (blockInput) {
HXLINE( 538)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 538)			if (_this->keyManager->checkStatusUnsafe(13,_this->status)) {
HXLINE( 539)				int _g = 0;
HXDLIN( 539)				int _g1 = this->blockPressWhileTypingOn->length;
HXDLIN( 539)				while((_g < _g1)){
HXLINE( 539)					_g = (_g + 1);
HXDLIN( 539)					int i = (_g - 1);
HXLINE( 540)					if (this->blockPressWhileTypingOn->__get(i).StaticCast<  ::flixel::addons::ui::FlxUIInputText >()->hasFocus) {
HXLINE( 541)						this->blockPressWhileTypingOn->__get(i).StaticCast<  ::flixel::addons::ui::FlxUIInputText >()->set_hasFocus(false);
            					}
            				}
            			}
            		}
HXLINE( 547)		{
HXLINE( 547)			int _g2 = 0;
HXDLIN( 547)			::Array< ::Dynamic> _g3 = this->groupOptions->members;
HXDLIN( 547)			while((_g2 < _g3->length)){
HXLINE( 547)				 ::objects::Alphabet item = _g3->__get(_g2).StaticCast<  ::objects::Alphabet >();
HXDLIN( 547)				_g2 = (_g2 + 1);
HXLINE( 549)				if (!(item->bold)) {
HXLINE( 551)					item->set_x(( (Float)(200) ));
            				}
            			}
            		}
HXLINE( 554)		this->super::update(elapsed);
            	}


void CreditsEditorState_obj::changeSelection(::hx::Null< int >  __o_change,::hx::Null< bool >  __o_playSound){
            		int change = __o_change.Default(0);
            		bool playSound = __o_playSound.Default(true);
            	HX_STACKFRAME(&_hx_pos_5bb599625acdd1fd_560_changeSelection)
HXDLIN( 560)		 ::states::editors::CreditsEditorState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 561)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 561)		_hx_tmp->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 563)		 ::states::editors::CreditsEditorState _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 563)		_hx_tmp1->currentlySelected = (_hx_tmp1->currentlySelected + change);
HXLINE( 564)		if ((this->currentlySelected < 0)) {
HXLINE( 565)			this->currentlySelected = (this->creditsStuff->length - 1);
            		}
HXLINE( 566)		if ((this->currentlySelected >= this->creditsStuff->length)) {
HXLINE( 567)			this->currentlySelected = 0;
            		}
HXLINE( 569)		if (this->unselectableCheck(this->currentlySelected)) {
HXLINE( 569)			this->curSelIsTitle = true;
            		}
            		else {
HXLINE( 570)			this->curSelIsTitle = false;
            		}
HXLINE( 572)		int newColor;
HXLINE( 573)		if (this->unselectableCheck(this->currentlySelected)) {
HXLINE( 573)			newColor = ( (int)(::Std_obj::parseInt(HX_("0xFFe1e1e1",0c,51,5f,cd))) );
            		}
            		else {
HXLINE( 574)			newColor = ( (int)(this->getCurrentBGColor()) );
            		}
HXLINE( 576)		if ((newColor != this->intendedColor)) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::editors::CreditsEditorState,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween twn){
            				HX_STACKFRAME(&_hx_pos_5bb599625acdd1fd_583_changeSelection)
HXLINE( 583)				_gthis->colorTween = null();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 577)			if (::hx::IsNotNull( this->colorTween )) {
HXLINE( 578)				this->colorTween->cancel();
            			}
HXLINE( 580)			this->intendedColor = newColor;
HXLINE( 581)			this->colorTween = ::flixel::tweens::FlxTween_obj::color(this->background,1,this->background->color,this->intendedColor, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
            		}
HXLINE( 588)		int alphabetValue = 0;
HXLINE( 589)		{
HXLINE( 589)			int _g = 0;
HXDLIN( 589)			::Array< ::Dynamic> _g1 = this->groupOptions->members;
HXDLIN( 589)			while((_g < _g1->length)){
HXLINE( 589)				 ::objects::Alphabet item = _g1->__get(_g).StaticCast<  ::objects::Alphabet >();
HXDLIN( 589)				_g = (_g + 1);
HXLINE( 591)				item->targetY = (alphabetValue - this->currentlySelected);
HXLINE( 592)				alphabetValue = (alphabetValue + 1);
HXLINE( 594)				if (!(this->nullCheck((alphabetValue - 1)))) {
HXLINE( 595)					item->set_alpha(((Float)0.6));
HXLINE( 596)					if ((item->targetY == 0)) {
HXLINE( 597)						item->set_alpha(( (Float)(1) ));
            					}
            				}
            			}
            		}
HXLINE( 602)		this->descriptionText->set_text(this->creditsStuff->__get(this->currentlySelected).StaticCast< ::Array< ::String > >()->__get(2));
HXLINE( 603)		 ::objects::AttachedSprite _hx_tmp2 = this->descriptionBox;
HXDLIN( 603)		_hx_tmp2->set_visible(!(this->unselectableCheck(this->currentlySelected)));
HXLINE( 604)		 ::flixel::text::FlxText _hx_tmp3 = this->descriptionText;
HXDLIN( 604)		_hx_tmp3->set_visible(!(this->unselectableCheck(this->currentlySelected)));
HXLINE( 606)		if ((change != 0)) {
HXLINE( 607)			 ::flixel::text::FlxText _hx_tmp = this->descriptionText;
HXDLIN( 607)			int _hx_tmp1 = ::flixel::FlxG_obj::height;
HXDLIN( 607)			Float _hx_tmp2 = (( (Float)(_hx_tmp1) ) - this->descriptionText->get_height());
HXDLIN( 607)			_hx_tmp->set_y(((_hx_tmp2 + this->offsetThing) - ( (Float)(60) )));
HXLINE( 608)			if (::hx::IsNotNull( this->moveTween )) {
HXLINE( 608)				this->moveTween->cancel();
            			}
HXLINE( 609)			this->moveTween = ::flixel::tweens::FlxTween_obj::tween(this->descriptionText, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("y",79,00,00,00),(this->descriptionText->y + 75))),((Float)0.9), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::sineOut_dyn())));
            		}
HXLINE( 612)		 ::objects::AttachedSprite _hx_tmp4 = this->descriptionBox;
HXDLIN( 612)		int _hx_tmp5 = ::Std_obj::_hx_int((this->descriptionText->get_width() + 20));
HXDLIN( 612)		_hx_tmp4->setGraphicSize(_hx_tmp5,::Std_obj::_hx_int((this->descriptionText->get_height() + 25)));
HXLINE( 613)		this->descriptionBox->updateHitbox();
            	}


HX_DEFINE_DYNAMIC_FUNC2(CreditsEditorState_obj,changeSelection,(void))

bool CreditsEditorState_obj::unselectableCheck(int num){
            	HX_STACKFRAME(&_hx_pos_5bb599625acdd1fd_617_unselectableCheck)
HXDLIN( 617)		return (this->creditsStuff->__get(num).StaticCast< ::Array< ::String > >()->length <= 1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CreditsEditorState_obj,unselectableCheck,return )

bool CreditsEditorState_obj::nullCheck(int num){
            	HX_STACKFRAME(&_hx_pos_5bb599625acdd1fd_619_nullCheck)
HXLINE( 620)		bool _hx_tmp;
HXDLIN( 620)		if ((this->creditsStuff->__get(num).StaticCast< ::Array< ::String > >()->length <= 1)) {
HXLINE( 620)			_hx_tmp = (this->creditsStuff->__get(num).StaticCast< ::Array< ::String > >()->__get(0).length <= 0);
            		}
            		else {
HXLINE( 620)			_hx_tmp = false;
            		}
HXDLIN( 620)		if (_hx_tmp) {
HXLINE( 620)			return true;
            		}
HXLINE( 621)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CreditsEditorState_obj,nullCheck,return )

 ::Dynamic CreditsEditorState_obj::getCurrentBGColor(){
            	HX_STACKFRAME(&_hx_pos_5bb599625acdd1fd_624_getCurrentBGColor)
HXLINE( 625)		::String backgroundColor = this->creditsStuff->__get(this->currentlySelected).StaticCast< ::Array< ::String > >()->__get(4);
HXLINE( 626)		if (!(::StringTools_obj::startsWith(backgroundColor,HX_("0x",48,2a,00,00)))) {
HXLINE( 627)			backgroundColor = (HX_("0xFF",88,89,15,20) + backgroundColor);
            		}
HXLINE( 629)		return ::Std_obj::parseInt(backgroundColor);
            	}


HX_DEFINE_DYNAMIC_FUNC0(CreditsEditorState_obj,getCurrentBGColor,return )

 ::flixel::FlxSprite CreditsEditorState_obj::makeSquareBorder( ::flixel::FlxSprite object,int size){
            	HX_GC_STACKFRAME(&_hx_pos_5bb599625acdd1fd_632_makeSquareBorder)
HXLINE( 633)		Float x = object->x;
HXLINE( 634)		Float y = object->y;
HXLINE( 635)		Float offset = ((Float)1.5);
HXLINE( 637)		 ::flixel::FlxSprite border =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(x - offset),(y - offset),null())->makeGraphic(size,size,-16777216,null(),null());
HXLINE( 638)		return border;
            	}


HX_DEFINE_DYNAMIC_FUNC2(CreditsEditorState_obj,makeSquareBorder,return )

void CreditsEditorState_obj::showIconExist(::String text){
            	HX_STACKFRAME(&_hx_pos_5bb599625acdd1fd_641_showIconExist)
HXLINE( 642)		int daColor;
HXLINE( 643)		if ((text.length == 0)) {
HXLINE( 644)			daColor = ( (int)(::Std_obj::parseInt(HX_("0xFFFFC31E",4c,66,41,69))) );
            		}
            		else {
HXLINE( 646)			if (!(::backend::Paths_obj::fileExists(((HX_("images/credits/",4c,68,6a,b3) + text) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),null(),null()))) {
HXLINE( 646)				daColor = ( (int)(::Std_obj::parseInt(HX_("0xFFFF004C",57,14,b0,5c))) );
            			}
            			else {
HXLINE( 647)				daColor = ( (int)(::Std_obj::parseInt(HX_("0xFF00FF37",6c,c3,a0,f4))) );
            			}
            		}
HXLINE( 649)		this->iconExistCheck->set_color(daColor);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CreditsEditorState_obj,showIconExist,(void))

void CreditsEditorState_obj::iconColorShow(){
            	HX_STACKFRAME(&_hx_pos_5bb599625acdd1fd_652_iconColorShow)
HXLINE( 653)		if ((this->colorInput->text.length > 10)) {
HXLINE( 653)			return;
            		}
HXLINE( 654)		int daColor;
HXLINE( 655)		bool _hx_tmp;
HXDLIN( 655)		if (::hx::IsNotNull( this->colorInput->text )) {
HXLINE( 655)			_hx_tmp = (this->colorInput->text.length > 0);
            		}
            		else {
HXLINE( 655)			_hx_tmp = false;
            		}
HXDLIN( 655)		if (_hx_tmp) {
HXLINE( 657)			if (!(::StringTools_obj::startsWith(this->colorInput->text,HX_("0xFF",88,89,15,20)))) {
HXLINE( 658)				daColor = ( (int)(::Std_obj::parseInt((HX_("0xFF",88,89,15,20) + this->colorInput->text))) );
            			}
            			else {
HXLINE( 659)				daColor = ( (int)(::Std_obj::parseInt(this->colorInput->text)) );
            			}
            		}
            		else {
HXLINE( 661)			daColor = ( (int)(::Std_obj::parseInt(HX_("0xFFe1e1e1",0c,51,5f,cd))) );
            		}
HXLINE( 662)		this->colorSquare->set_color(daColor);
            	}


HX_DEFINE_DYNAMIC_FUNC0(CreditsEditorState_obj,iconColorShow,(void))

void CreditsEditorState_obj::getEvent(::String id, ::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params){
            	HX_STACKFRAME(&_hx_pos_5bb599625acdd1fd_667_getEvent)
HXDLIN( 667)		bool _hx_tmp;
HXDLIN( 667)		if ((id == HX_("change_input_text",f1,11,47,68))) {
HXDLIN( 667)			_hx_tmp = ::Std_obj::isOfType(sender,::hx::ClassOf< ::flixel::addons::ui::FlxUIInputText >());
            		}
            		else {
HXDLIN( 667)			_hx_tmp = false;
            		}
HXDLIN( 667)		if (_hx_tmp) {
HXLINE( 668)			if (::hx::IsInstanceEq( sender,this->iconInput )) {
HXLINE( 669)				this->showIconExist(this->iconInput->text);
            			}
HXLINE( 671)			if (::hx::IsInstanceEq( sender,this->colorInput )) {
HXLINE( 672)				this->iconColorShow();
            			}
            		}
            	}


void CreditsEditorState_obj::onSaveComplete( ::openfl::events::Event _){
            	HX_STACKFRAME(&_hx_pos_5bb599625acdd1fd_680_onSaveComplete)
HXLINE( 681)		this->_file->removeEventListener(HX_("complete",b9,00,c8,7f),this->onSaveComplete_dyn(),null());
HXLINE( 682)		this->_file->removeEventListener(HX_("cancel",7a,ed,33,b8),this->onSaveCancel_dyn(),null());
HXLINE( 683)		this->_file->removeEventListener(HX_("ioError",02,fe,41,76),this->onSaveError_dyn(),null());
HXLINE( 684)		this->_file = null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CreditsEditorState_obj,onSaveComplete,(void))

void CreditsEditorState_obj::onSaveCancel( ::openfl::events::Event _){
            	HX_STACKFRAME(&_hx_pos_5bb599625acdd1fd_689_onSaveCancel)
HXLINE( 690)		this->_file->removeEventListener(HX_("complete",b9,00,c8,7f),this->onSaveComplete_dyn(),null());
HXLINE( 691)		this->_file->removeEventListener(HX_("cancel",7a,ed,33,b8),this->onSaveCancel_dyn(),null());
HXLINE( 692)		this->_file->removeEventListener(HX_("ioError",02,fe,41,76),this->onSaveError_dyn(),null());
HXLINE( 693)		this->_file = null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CreditsEditorState_obj,onSaveCancel,(void))

void CreditsEditorState_obj::onSaveError( ::openfl::events::IOErrorEvent _){
            	HX_STACKFRAME(&_hx_pos_5bb599625acdd1fd_697_onSaveError)
HXLINE( 698)		this->_file->removeEventListener(HX_("complete",b9,00,c8,7f),this->onSaveComplete_dyn(),null());
HXLINE( 699)		this->_file->removeEventListener(HX_("cancel",7a,ed,33,b8),this->onSaveCancel_dyn(),null());
HXLINE( 700)		this->_file->removeEventListener(HX_("ioError",02,fe,41,76),this->onSaveError_dyn(),null());
HXLINE( 701)		this->_file = null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CreditsEditorState_obj,onSaveError,(void))

void CreditsEditorState_obj::saveCredits(){
            	HX_GC_STACKFRAME(&_hx_pos_5bb599625acdd1fd_705_saveCredits)
HXLINE( 706)		::Array< ::String > daStuff = ::Array_obj< ::String >::__new(0);
HXLINE( 707)		{
HXLINE( 707)			int _g = 0;
HXDLIN( 707)			int _g1 = this->creditsStuff->length;
HXDLIN( 707)			while((_g < _g1)){
HXLINE( 707)				_g = (_g + 1);
HXDLIN( 707)				int i = (_g - 1);
HXLINE( 708)				daStuff->push(this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >()->join(HX_("::",c0,32,00,00)));
            			}
            		}
HXLINE( 711)		::String data = daStuff->join(HX_("\n",0a,00,00,00));
HXLINE( 713)		if ((data.length > 0)) {
HXLINE( 715)			this->_file =  ::openfl::net::FileReference_obj::__alloc( HX_CTX );
HXLINE( 716)			this->_file->addEventListener(HX_("complete",b9,00,c8,7f),this->onSaveComplete_dyn(),null(),null(),null());
HXLINE( 717)			this->_file->addEventListener(HX_("cancel",7a,ed,33,b8),this->onSaveCancel_dyn(),null(),null(),null());
HXLINE( 718)			this->_file->addEventListener(HX_("ioError",02,fe,41,76),this->onSaveError_dyn(),null(),null(),null());
HXLINE( 719)			this->_file->save(data,HX_("credits.txt",1c,62,a8,cd));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CreditsEditorState_obj,saveCredits,(void))

void CreditsEditorState_obj::loadCredits(){
            	HX_GC_STACKFRAME(&_hx_pos_5bb599625acdd1fd_723_loadCredits)
HXLINE( 724)		 ::openfl::net::FileFilter txtFilter =  ::openfl::net::FileFilter_obj::__alloc( HX_CTX ,HX_("TXT",50,0a,40,00),HX_("txt",70,6e,58,00),null());
HXLINE( 725)		this->_file =  ::openfl::net::FileReference_obj::__alloc( HX_CTX );
HXLINE( 726)		this->_file->addEventListener(HX_("select",fc,1a,33,6a),this->onLoadComplete_dyn(),null(),null(),null());
HXLINE( 727)		this->_file->addEventListener(HX_("cancel",7a,ed,33,b8),this->onLoadCancel_dyn(),null(),null(),null());
HXLINE( 728)		this->_file->addEventListener(HX_("ioError",02,fe,41,76),this->onLoadError_dyn(),null(),null(),null());
HXLINE( 729)		this->_file->browse(::Array_obj< ::Dynamic>::__new(1)->init(0,txtFilter));
            	}


HX_DEFINE_DYNAMIC_FUNC0(CreditsEditorState_obj,loadCredits,(void))

void CreditsEditorState_obj::onLoadComplete( ::openfl::events::Event _){
            	HX_STACKFRAME(&_hx_pos_5bb599625acdd1fd_734_onLoadComplete)
HXLINE( 735)		this->_file->removeEventListener(HX_("select",fc,1a,33,6a),this->onLoadComplete_dyn(),null());
HXLINE( 736)		this->_file->removeEventListener(HX_("cancel",7a,ed,33,b8),this->onLoadCancel_dyn(),null());
HXLINE( 737)		this->_file->removeEventListener(HX_("ioError",02,fe,41,76),this->onLoadError_dyn(),null());
HXLINE( 740)		::String fullPath = null();
HXLINE( 742)		if (::hx::IsNotNull( this->_file->_hx___path )) {
HXLINE( 742)			fullPath = this->_file->_hx___path;
            		}
HXLINE( 744)		if (::hx::IsNotNull( fullPath )) {
HXLINE( 745)			::String rawTxt = ::sys::io::File_obj::getContent(fullPath);
HXLINE( 746)			if (::hx::IsNotNull( rawTxt )) {
HXLINE( 747)				this->creditsStuff = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 748)				::Array< ::String > firstarray = rawTxt.split(HX_("\n",0a,00,00,00));
HXLINE( 749)				{
HXLINE( 749)					int _g = 0;
HXDLIN( 749)					while((_g < firstarray->length)){
HXLINE( 749)						::String i = firstarray->__get(_g);
HXDLIN( 749)						_g = (_g + 1);
HXLINE( 751)						::Array< ::String > arr = ::StringTools_obj::replace(i,HX_("\\n",92,50,00,00),HX_("\n",0a,00,00,00)).split(HX_("::",c0,32,00,00));
HXLINE( 752)						this->creditsStuff->push(arr);
            					}
            				}
HXLINE( 755)				this->updateCreditObjects();
HXLINE( 756)				this->changeSelection(null(),null());
HXLINE( 757)				return;
            			}
            		}
HXLINE( 760)		this->loadError = true;
HXLINE( 761)		this->_file = null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CreditsEditorState_obj,onLoadComplete,(void))

void CreditsEditorState_obj::onLoadCancel( ::openfl::events::Event _){
            	HX_STACKFRAME(&_hx_pos_5bb599625acdd1fd_768_onLoadCancel)
HXLINE( 769)		this->_file->removeEventListener(HX_("select",fc,1a,33,6a),this->onLoadComplete_dyn(),null());
HXLINE( 770)		this->_file->removeEventListener(HX_("cancel",7a,ed,33,b8),this->onLoadCancel_dyn(),null());
HXLINE( 771)		this->_file->removeEventListener(HX_("ioError",02,fe,41,76),this->onLoadError_dyn(),null());
HXLINE( 772)		this->_file = null();
HXLINE( 773)		::haxe::Log_obj::trace(HX_("Cancelled file loading.",67,56,c5,a3),::hx::SourceInfo(HX_("source/states/editors/CreditsEditorState.hx",f2,ab,3b,42),773,HX_("states.editors.CreditsEditorState",3e,06,7d,2b),HX_("onLoadCancel",3f,be,a2,45)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(CreditsEditorState_obj,onLoadCancel,(void))

void CreditsEditorState_obj::onLoadError( ::openfl::events::IOErrorEvent _){
            	HX_STACKFRAME(&_hx_pos_5bb599625acdd1fd_777_onLoadError)
HXLINE( 778)		this->_file->removeEventListener(HX_("select",fc,1a,33,6a),this->onLoadComplete_dyn(),null());
HXLINE( 779)		this->_file->removeEventListener(HX_("cancel",7a,ed,33,b8),this->onLoadCancel_dyn(),null());
HXLINE( 780)		this->_file->removeEventListener(HX_("ioError",02,fe,41,76),this->onLoadError_dyn(),null());
HXLINE( 781)		this->_file = null();
HXLINE( 782)		::haxe::Log_obj::trace(HX_("Problem loading file",21,8c,56,d8),::hx::SourceInfo(HX_("source/states/editors/CreditsEditorState.hx",f2,ab,3b,42),782,HX_("states.editors.CreditsEditorState",3e,06,7d,2b),HX_("onLoadError",a3,fa,a3,b0)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(CreditsEditorState_obj,onLoadError,(void))


::hx::ObjectPtr< CreditsEditorState_obj > CreditsEditorState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< CreditsEditorState_obj > __this = new CreditsEditorState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< CreditsEditorState_obj > CreditsEditorState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	CreditsEditorState_obj *__this = (CreditsEditorState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CreditsEditorState_obj), true, "states.editors.CreditsEditorState"));
	*(void **)__this = CreditsEditorState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

CreditsEditorState_obj::CreditsEditorState_obj()
{
}

void CreditsEditorState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CreditsEditorState);
	HX_MARK_MEMBER_NAME(currentlySelected,"currentlySelected");
	HX_MARK_MEMBER_NAME(groupOptions,"groupOptions");
	HX_MARK_MEMBER_NAME(iconArray,"iconArray");
	HX_MARK_MEMBER_NAME(creditsStuff,"creditsStuff");
	HX_MARK_MEMBER_NAME(blockPressWhileTypingOn,"blockPressWhileTypingOn");
	HX_MARK_MEMBER_NAME(ignoreWarnings,"ignoreWarnings");
	HX_MARK_MEMBER_NAME(camGame,"camGame");
	HX_MARK_MEMBER_NAME(camUI,"camUI");
	HX_MARK_MEMBER_NAME(camOther,"camOther");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(velocityBackground,"velocityBackground");
	HX_MARK_MEMBER_NAME(descriptionText,"descriptionText");
	HX_MARK_MEMBER_NAME(intendedColor,"intendedColor");
	HX_MARK_MEMBER_NAME(colorTween,"colorTween");
	HX_MARK_MEMBER_NAME(descriptionBox,"descriptionBox");
	HX_MARK_MEMBER_NAME(UI_box,"UI_box");
	HX_MARK_MEMBER_NAME(offsetThing,"offsetThing");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(titleInput,"titleInput");
	HX_MARK_MEMBER_NAME(titleJump,"titleJump");
	HX_MARK_MEMBER_NAME(creditNameInput,"creditNameInput");
	HX_MARK_MEMBER_NAME(iconInput,"iconInput");
	HX_MARK_MEMBER_NAME(iconExistCheck,"iconExistCheck");
	HX_MARK_MEMBER_NAME(descInput,"descInput");
	HX_MARK_MEMBER_NAME(linkInput,"linkInput");
	HX_MARK_MEMBER_NAME(colorInput,"colorInput");
	HX_MARK_MEMBER_NAME(colorSquare,"colorSquare");
	HX_MARK_MEMBER_NAME(quitting,"quitting");
	HX_MARK_MEMBER_NAME(holdTime,"holdTime");
	HX_MARK_MEMBER_NAME(moveTween,"moveTween");
	HX_MARK_MEMBER_NAME(curSelIsTitle,"curSelIsTitle");
	HX_MARK_MEMBER_NAME(_file,"_file");
	HX_MARK_MEMBER_NAME(loadError,"loadError");
	 ::backend::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CreditsEditorState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentlySelected,"currentlySelected");
	HX_VISIT_MEMBER_NAME(groupOptions,"groupOptions");
	HX_VISIT_MEMBER_NAME(iconArray,"iconArray");
	HX_VISIT_MEMBER_NAME(creditsStuff,"creditsStuff");
	HX_VISIT_MEMBER_NAME(blockPressWhileTypingOn,"blockPressWhileTypingOn");
	HX_VISIT_MEMBER_NAME(ignoreWarnings,"ignoreWarnings");
	HX_VISIT_MEMBER_NAME(camGame,"camGame");
	HX_VISIT_MEMBER_NAME(camUI,"camUI");
	HX_VISIT_MEMBER_NAME(camOther,"camOther");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(velocityBackground,"velocityBackground");
	HX_VISIT_MEMBER_NAME(descriptionText,"descriptionText");
	HX_VISIT_MEMBER_NAME(intendedColor,"intendedColor");
	HX_VISIT_MEMBER_NAME(colorTween,"colorTween");
	HX_VISIT_MEMBER_NAME(descriptionBox,"descriptionBox");
	HX_VISIT_MEMBER_NAME(UI_box,"UI_box");
	HX_VISIT_MEMBER_NAME(offsetThing,"offsetThing");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(titleInput,"titleInput");
	HX_VISIT_MEMBER_NAME(titleJump,"titleJump");
	HX_VISIT_MEMBER_NAME(creditNameInput,"creditNameInput");
	HX_VISIT_MEMBER_NAME(iconInput,"iconInput");
	HX_VISIT_MEMBER_NAME(iconExistCheck,"iconExistCheck");
	HX_VISIT_MEMBER_NAME(descInput,"descInput");
	HX_VISIT_MEMBER_NAME(linkInput,"linkInput");
	HX_VISIT_MEMBER_NAME(colorInput,"colorInput");
	HX_VISIT_MEMBER_NAME(colorSquare,"colorSquare");
	HX_VISIT_MEMBER_NAME(quitting,"quitting");
	HX_VISIT_MEMBER_NAME(holdTime,"holdTime");
	HX_VISIT_MEMBER_NAME(moveTween,"moveTween");
	HX_VISIT_MEMBER_NAME(curSelIsTitle,"curSelIsTitle");
	HX_VISIT_MEMBER_NAME(_file,"_file");
	HX_VISIT_MEMBER_NAME(loadError,"loadError");
	 ::backend::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CreditsEditorState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"camUI") ) { return ::hx::Val( camUI ); }
		if (HX_FIELD_EQ(inName,"_file") ) { return ::hx::Val( _file ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"UI_box") ) { return ::hx::Val( UI_box ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"camGame") ) { return ::hx::Val( camGame ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"camOther") ) { return ::hx::Val( camOther ); }
		if (HX_FIELD_EQ(inName,"addTitle") ) { return ::hx::Val( addTitle_dyn() ); }
		if (HX_FIELD_EQ(inName,"quitting") ) { return ::hx::Val( quitting ); }
		if (HX_FIELD_EQ(inName,"holdTime") ) { return ::hx::Val( holdTime ); }
		if (HX_FIELD_EQ(inName,"getEvent") ) { return ::hx::Val( getEvent_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"iconArray") ) { return ::hx::Val( iconArray ); }
		if (HX_FIELD_EQ(inName,"titleJump") ) { return ::hx::Val( titleJump ); }
		if (HX_FIELD_EQ(inName,"iconInput") ) { return ::hx::Val( iconInput ); }
		if (HX_FIELD_EQ(inName,"descInput") ) { return ::hx::Val( descInput ); }
		if (HX_FIELD_EQ(inName,"linkInput") ) { return ::hx::Val( linkInput ); }
		if (HX_FIELD_EQ(inName,"addCredit") ) { return ::hx::Val( addCredit_dyn() ); }
		if (HX_FIELD_EQ(inName,"pushAtPos") ) { return ::hx::Val( pushAtPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveTween") ) { return ::hx::Val( moveTween ); }
		if (HX_FIELD_EQ(inName,"nullCheck") ) { return ::hx::Val( nullCheck_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadError") ) { return ::hx::Val( loadError ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return ::hx::Val( background ); }
		if (HX_FIELD_EQ(inName,"colorTween") ) { return ::hx::Val( colorTween ); }
		if (HX_FIELD_EQ(inName,"titleInput") ) { return ::hx::Val( titleInput ); }
		if (HX_FIELD_EQ(inName,"colorInput") ) { return ::hx::Val( colorInput ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"offsetThing") ) { return ::hx::Val( offsetThing ); }
		if (HX_FIELD_EQ(inName,"colorSquare") ) { return ::hx::Val( colorSquare ); }
		if (HX_FIELD_EQ(inName,"cleanInputs") ) { return ::hx::Val( cleanInputs_dyn() ); }
		if (HX_FIELD_EQ(inName,"setItemData") ) { return ::hx::Val( setItemData_dyn() ); }
		if (HX_FIELD_EQ(inName,"onSaveError") ) { return ::hx::Val( onSaveError_dyn() ); }
		if (HX_FIELD_EQ(inName,"saveCredits") ) { return ::hx::Val( saveCredits_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadCredits") ) { return ::hx::Val( loadCredits_dyn() ); }
		if (HX_FIELD_EQ(inName,"onLoadError") ) { return ::hx::Val( onLoadError_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"groupOptions") ) { return ::hx::Val( groupOptions ); }
		if (HX_FIELD_EQ(inName,"creditsStuff") ) { return ::hx::Val( creditsStuff ); }
		if (HX_FIELD_EQ(inName,"addCreditsUI") ) { return ::hx::Val( addCreditsUI_dyn() ); }
		if (HX_FIELD_EQ(inName,"onSaveCancel") ) { return ::hx::Val( onSaveCancel_dyn() ); }
		if (HX_FIELD_EQ(inName,"onLoadCancel") ) { return ::hx::Val( onLoadCancel_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"intendedColor") ) { return ::hx::Val( intendedColor ); }
		if (HX_FIELD_EQ(inName,"deleteSelItem") ) { return ::hx::Val( deleteSelItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"templateArray") ) { return ::hx::Val( templateArray_dyn() ); }
		if (HX_FIELD_EQ(inName,"curSelIsTitle") ) { return ::hx::Val( curSelIsTitle ); }
		if (HX_FIELD_EQ(inName,"showIconExist") ) { return ::hx::Val( showIconExist_dyn() ); }
		if (HX_FIELD_EQ(inName,"iconColorShow") ) { return ::hx::Val( iconColorShow_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ignoreWarnings") ) { return ::hx::Val( ignoreWarnings ); }
		if (HX_FIELD_EQ(inName,"descriptionBox") ) { return ::hx::Val( descriptionBox ); }
		if (HX_FIELD_EQ(inName,"iconExistCheck") ) { return ::hx::Val( iconExistCheck ); }
		if (HX_FIELD_EQ(inName,"dataGoToInputs") ) { return ::hx::Val( dataGoToInputs_dyn() ); }
		if (HX_FIELD_EQ(inName,"onSaveComplete") ) { return ::hx::Val( onSaveComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"onLoadComplete") ) { return ::hx::Val( onLoadComplete_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"descriptionText") ) { return ::hx::Val( descriptionText ); }
		if (HX_FIELD_EQ(inName,"creditNameInput") ) { return ::hx::Val( creditNameInput ); }
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"makeSquareBorder") ) { return ::hx::Val( makeSquareBorder_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentlySelected") ) { return ::hx::Val( currentlySelected ); }
		if (HX_FIELD_EQ(inName,"unselectableCheck") ) { return ::hx::Val( unselectableCheck_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCurrentBGColor") ) { return ::hx::Val( getCurrentBGColor_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"velocityBackground") ) { return ::hx::Val( velocityBackground ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateCreditObjects") ) { return ::hx::Val( updateCreditObjects_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"blockPressWhileTypingOn") ) { return ::hx::Val( blockPressWhileTypingOn ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CreditsEditorState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"camUI") ) { camUI=inValue.Cast<  ::flixel::FlxCamera >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_file") ) { _file=inValue.Cast<  ::openfl::net::FileReference >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"UI_box") ) { UI_box=inValue.Cast<  ::flixel::addons::ui::FlxUITabMenu >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"camGame") ) { camGame=inValue.Cast<  ::flixel::FlxCamera >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"camOther") ) { camOther=inValue.Cast<  ::flixel::FlxCamera >(); return inValue; }
		if (HX_FIELD_EQ(inName,"quitting") ) { quitting=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdTime") ) { holdTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"iconArray") ) { iconArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"titleJump") ) { titleJump=inValue.Cast<  ::flixel::addons::ui::FlxUICheckBox >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iconInput") ) { iconInput=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"descInput") ) { descInput=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"linkInput") ) { linkInput=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moveTween") ) { moveTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loadError") ) { loadError=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorTween") ) { colorTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		if (HX_FIELD_EQ(inName,"titleInput") ) { titleInput=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorInput") ) { colorInput=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"offsetThing") ) { offsetThing=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorSquare") ) { colorSquare=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"groupOptions") ) { groupOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"creditsStuff") ) { creditsStuff=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"intendedColor") ) { intendedColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curSelIsTitle") ) { curSelIsTitle=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ignoreWarnings") ) { ignoreWarnings=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"descriptionBox") ) { descriptionBox=inValue.Cast<  ::objects::AttachedSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iconExistCheck") ) { iconExistCheck=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"descriptionText") ) { descriptionText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"creditNameInput") ) { creditNameInput=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentlySelected") ) { currentlySelected=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"velocityBackground") ) { velocityBackground=inValue.Cast<  ::flixel::addons::display::FlxBackdrop >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"blockPressWhileTypingOn") ) { blockPressWhileTypingOn=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CreditsEditorState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("currentlySelected",81,97,28,3f));
	outFields->push(HX_("groupOptions",df,1d,11,53));
	outFields->push(HX_("iconArray",60,3f,53,5f));
	outFields->push(HX_("creditsStuff",7a,9a,7e,73));
	outFields->push(HX_("blockPressWhileTypingOn",71,5f,34,ba));
	outFields->push(HX_("ignoreWarnings",c9,0d,e8,46));
	outFields->push(HX_("camGame",a1,47,50,cf));
	outFields->push(HX_("camUI",23,20,1c,41));
	outFields->push(HX_("camOther",41,4c,ae,3e));
	outFields->push(HX_("background",ee,93,1d,26));
	outFields->push(HX_("velocityBackground",6b,40,55,7b));
	outFields->push(HX_("descriptionText",c9,2f,0e,37));
	outFields->push(HX_("intendedColor",b8,fb,ff,5a));
	outFields->push(HX_("colorTween",08,c2,dc,3d));
	outFields->push(HX_("descriptionBox",6f,32,7c,21));
	outFields->push(HX_("UI_box",60,07,ac,43));
	outFields->push(HX_("offsetThing",5b,0b,0a,a8));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("titleInput",52,d7,02,d0));
	outFields->push(HX_("titleJump",a6,b2,14,6a));
	outFields->push(HX_("creditNameInput",46,fe,d3,d8));
	outFields->push(HX_("iconInput",d1,95,e1,f7));
	outFields->push(HX_("iconExistCheck",6a,eb,74,c7));
	outFields->push(HX_("descInput",f9,4f,f8,8b));
	outFields->push(HX_("linkInput",b0,f1,3c,6b));
	outFields->push(HX_("colorInput",a7,db,89,e2));
	outFields->push(HX_("colorSquare",60,92,1a,13));
	outFields->push(HX_("quitting",3d,a0,84,53));
	outFields->push(HX_("holdTime",ec,cc,bf,3e));
	outFields->push(HX_("moveTween",9a,79,37,d7));
	outFields->push(HX_("curSelIsTitle",74,b6,b6,95));
	outFields->push(HX_("_file",5b,ea,cc,f6));
	outFields->push(HX_("loadError",c2,17,61,8e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CreditsEditorState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(CreditsEditorState_obj,currentlySelected),HX_("currentlySelected",81,97,28,3f)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(CreditsEditorState_obj,groupOptions),HX_("groupOptions",df,1d,11,53)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CreditsEditorState_obj,iconArray),HX_("iconArray",60,3f,53,5f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CreditsEditorState_obj,creditsStuff),HX_("creditsStuff",7a,9a,7e,73)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CreditsEditorState_obj,blockPressWhileTypingOn),HX_("blockPressWhileTypingOn",71,5f,34,ba)},
	{::hx::fsBool,(int)offsetof(CreditsEditorState_obj,ignoreWarnings),HX_("ignoreWarnings",c9,0d,e8,46)},
	{::hx::fsObject /*  ::flixel::FlxCamera */ ,(int)offsetof(CreditsEditorState_obj,camGame),HX_("camGame",a1,47,50,cf)},
	{::hx::fsObject /*  ::flixel::FlxCamera */ ,(int)offsetof(CreditsEditorState_obj,camUI),HX_("camUI",23,20,1c,41)},
	{::hx::fsObject /*  ::flixel::FlxCamera */ ,(int)offsetof(CreditsEditorState_obj,camOther),HX_("camOther",41,4c,ae,3e)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CreditsEditorState_obj,background),HX_("background",ee,93,1d,26)},
	{::hx::fsObject /*  ::flixel::addons::display::FlxBackdrop */ ,(int)offsetof(CreditsEditorState_obj,velocityBackground),HX_("velocityBackground",6b,40,55,7b)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CreditsEditorState_obj,descriptionText),HX_("descriptionText",c9,2f,0e,37)},
	{::hx::fsInt,(int)offsetof(CreditsEditorState_obj,intendedColor),HX_("intendedColor",b8,fb,ff,5a)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(CreditsEditorState_obj,colorTween),HX_("colorTween",08,c2,dc,3d)},
	{::hx::fsObject /*  ::objects::AttachedSprite */ ,(int)offsetof(CreditsEditorState_obj,descriptionBox),HX_("descriptionBox",6f,32,7c,21)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUITabMenu */ ,(int)offsetof(CreditsEditorState_obj,UI_box),HX_("UI_box",60,07,ac,43)},
	{::hx::fsFloat,(int)offsetof(CreditsEditorState_obj,offsetThing),HX_("offsetThing",5b,0b,0a,a8)},
	{::hx::fsString,(int)offsetof(CreditsEditorState_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(CreditsEditorState_obj,titleInput),HX_("titleInput",52,d7,02,d0)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUICheckBox */ ,(int)offsetof(CreditsEditorState_obj,titleJump),HX_("titleJump",a6,b2,14,6a)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(CreditsEditorState_obj,creditNameInput),HX_("creditNameInput",46,fe,d3,d8)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(CreditsEditorState_obj,iconInput),HX_("iconInput",d1,95,e1,f7)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CreditsEditorState_obj,iconExistCheck),HX_("iconExistCheck",6a,eb,74,c7)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(CreditsEditorState_obj,descInput),HX_("descInput",f9,4f,f8,8b)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(CreditsEditorState_obj,linkInput),HX_("linkInput",b0,f1,3c,6b)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(CreditsEditorState_obj,colorInput),HX_("colorInput",a7,db,89,e2)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CreditsEditorState_obj,colorSquare),HX_("colorSquare",60,92,1a,13)},
	{::hx::fsBool,(int)offsetof(CreditsEditorState_obj,quitting),HX_("quitting",3d,a0,84,53)},
	{::hx::fsFloat,(int)offsetof(CreditsEditorState_obj,holdTime),HX_("holdTime",ec,cc,bf,3e)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(CreditsEditorState_obj,moveTween),HX_("moveTween",9a,79,37,d7)},
	{::hx::fsBool,(int)offsetof(CreditsEditorState_obj,curSelIsTitle),HX_("curSelIsTitle",74,b6,b6,95)},
	{::hx::fsObject /*  ::openfl::net::FileReference */ ,(int)offsetof(CreditsEditorState_obj,_file),HX_("_file",5b,ea,cc,f6)},
	{::hx::fsBool,(int)offsetof(CreditsEditorState_obj,loadError),HX_("loadError",c2,17,61,8e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CreditsEditorState_obj_sStaticStorageInfo = 0;
#endif

static ::String CreditsEditorState_obj_sMemberFields[] = {
	HX_("currentlySelected",81,97,28,3f),
	HX_("groupOptions",df,1d,11,53),
	HX_("iconArray",60,3f,53,5f),
	HX_("creditsStuff",7a,9a,7e,73),
	HX_("blockPressWhileTypingOn",71,5f,34,ba),
	HX_("ignoreWarnings",c9,0d,e8,46),
	HX_("camGame",a1,47,50,cf),
	HX_("camUI",23,20,1c,41),
	HX_("camOther",41,4c,ae,3e),
	HX_("background",ee,93,1d,26),
	HX_("velocityBackground",6b,40,55,7b),
	HX_("descriptionText",c9,2f,0e,37),
	HX_("intendedColor",b8,fb,ff,5a),
	HX_("colorTween",08,c2,dc,3d),
	HX_("descriptionBox",6f,32,7c,21),
	HX_("UI_box",60,07,ac,43),
	HX_("offsetThing",5b,0b,0a,a8),
	HX_("text",ad,cc,f9,4c),
	HX_("create",fc,66,0f,7c),
	HX_("titleInput",52,d7,02,d0),
	HX_("titleJump",a6,b2,14,6a),
	HX_("creditNameInput",46,fe,d3,d8),
	HX_("iconInput",d1,95,e1,f7),
	HX_("iconExistCheck",6a,eb,74,c7),
	HX_("descInput",f9,4f,f8,8b),
	HX_("linkInput",b0,f1,3c,6b),
	HX_("colorInput",a7,db,89,e2),
	HX_("colorSquare",60,92,1a,13),
	HX_("addCreditsUI",8d,b4,e5,30),
	HX_("updateCreditObjects",d2,cd,8d,88),
	HX_("addCredit",3a,d9,35,34),
	HX_("addTitle",b7,3b,98,89),
	HX_("dataGoToInputs",16,5e,da,80),
	HX_("cleanInputs",92,f7,84,89),
	HX_("setItemData",9f,96,c0,cf),
	HX_("deleteSelItem",e2,f4,98,ce),
	HX_("templateArray",ff,e2,7e,27),
	HX_("pushAtPos",27,82,e3,6a),
	HX_("quitting",3d,a0,84,53),
	HX_("holdTime",ec,cc,bf,3e),
	HX_("update",09,86,05,87),
	HX_("moveTween",9a,79,37,d7),
	HX_("curSelIsTitle",74,b6,b6,95),
	HX_("changeSelection",bc,98,b5,48),
	HX_("unselectableCheck",19,58,ce,19),
	HX_("nullCheck",c1,60,46,5a),
	HX_("getCurrentBGColor",7b,19,20,ac),
	HX_("makeSquareBorder",77,48,19,a2),
	HX_("showIconExist",c1,17,fc,a0),
	HX_("iconColorShow",47,21,fe,52),
	HX_("getEvent",a4,d7,9b,d5),
	HX_("_file",5b,ea,cc,f6),
	HX_("onSaveComplete",d5,ac,3f,bc),
	HX_("onSaveCancel",96,1a,31,d9),
	HX_("onSaveError",2c,b6,19,24),
	HX_("saveCredits",5d,3c,fe,6c),
	HX_("loadCredits",94,cc,fb,e3),
	HX_("loadError",c2,17,61,8e),
	HX_("onLoadComplete",be,4c,20,63),
	HX_("onLoadCancel",3f,be,a2,45),
	HX_("onLoadError",a3,fa,a3,b0),
	::String(null()) };

::hx::Class CreditsEditorState_obj::__mClass;

void CreditsEditorState_obj::__register()
{
	CreditsEditorState_obj _hx_dummy;
	CreditsEditorState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.editors.CreditsEditorState",3e,06,7d,2b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CreditsEditorState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CreditsEditorState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CreditsEditorState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CreditsEditorState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
} // end namespace editors
