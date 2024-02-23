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
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_DiscordClient
#include <backend/DiscordClient.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxUINumericStepper
#include <flixel/addons/ui/FlxUINumericStepper.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITabMenu
#include <flixel/addons/ui/FlxUITabMenu.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
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
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif
#ifndef INCLUDED_objects_MenuCharacter
#include <objects/MenuCharacter.h>
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
#ifndef INCLUDED_states_editors_MasterEditorMenu
#include <states/editors/MasterEditorMenu.h>
#endif
#ifndef INCLUDED_states_editors_MenuCharacterEditorState
#include <states/editors/MenuCharacterEditorState.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_tjson_TJSON
#include <tjson/TJSON.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b3dbc1f8e1f84a09_20_new,"states.editors.MenuCharacterEditorState","new",0x11f0d740,"states.editors.MenuCharacterEditorState.new","states/editors/MenuCharacterEditorState.hx",20,0x4e9ebe6e)
static const ::String _hx_array_data_74ec774e_1[] = {
	HX_("dad",47,36,4c,00),HX_("bf",c4,55,00,00),HX_("gf",1f,5a,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b3dbc1f8e1f84a09_27_create,"states.editors.MenuCharacterEditorState","create",0x15e9ec1c,"states.editors.MenuCharacterEditorState.create","states/editors/MenuCharacterEditorState.hx",27,0x4e9ebe6e)
static const int _hx_array_data_74ec774e_3[] = {
	(int)0,(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_b3dbc1f8e1f84a09_99_addEditorBox,"states.editors.MenuCharacterEditorState","addEditorBox",0x87bcfd1d,"states.editors.MenuCharacterEditorState.addEditorBox","states/editors/MenuCharacterEditorState.hx",99,0x4e9ebe6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b3dbc1f8e1f84a09_106_addEditorBox,"states.editors.MenuCharacterEditorState","addEditorBox",0x87bcfd1d,"states.editors.MenuCharacterEditorState.addEditorBox","states/editors/MenuCharacterEditorState.hx",106,0x4e9ebe6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b3dbc1f8e1f84a09_75_addEditorBox,"states.editors.MenuCharacterEditorState","addEditorBox",0x87bcfd1d,"states.editors.MenuCharacterEditorState.addEditorBox","states/editors/MenuCharacterEditorState.hx",75,0x4e9ebe6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b3dbc1f8e1f84a09_123_addTypeUI,"states.editors.MenuCharacterEditorState","addTypeUI",0x9848836f,"states.editors.MenuCharacterEditorState.addTypeUI","states/editors/MenuCharacterEditorState.hx",123,0x4e9ebe6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b3dbc1f8e1f84a09_130_addTypeUI,"states.editors.MenuCharacterEditorState","addTypeUI",0x9848836f,"states.editors.MenuCharacterEditorState.addTypeUI","states/editors/MenuCharacterEditorState.hx",130,0x4e9ebe6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b3dbc1f8e1f84a09_137_addTypeUI,"states.editors.MenuCharacterEditorState","addTypeUI",0x9848836f,"states.editors.MenuCharacterEditorState.addTypeUI","states/editors/MenuCharacterEditorState.hx",137,0x4e9ebe6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b3dbc1f8e1f84a09_117_addTypeUI,"states.editors.MenuCharacterEditorState","addTypeUI",0x9848836f,"states.editors.MenuCharacterEditorState.addTypeUI","states/editors/MenuCharacterEditorState.hx",117,0x4e9ebe6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b3dbc1f8e1f84a09_166_addCharacterUI,"states.editors.MenuCharacterEditorState","addCharacterUI",0x222acebc,"states.editors.MenuCharacterEditorState.addCharacterUI","states/editors/MenuCharacterEditorState.hx",166,0x4e9ebe6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b3dbc1f8e1f84a09_172_addCharacterUI,"states.editors.MenuCharacterEditorState","addCharacterUI",0x222acebc,"states.editors.MenuCharacterEditorState.addCharacterUI","states/editors/MenuCharacterEditorState.hx",172,0x4e9ebe6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b3dbc1f8e1f84a09_153_addCharacterUI,"states.editors.MenuCharacterEditorState","addCharacterUI",0x222acebc,"states.editors.MenuCharacterEditorState.addCharacterUI","states/editors/MenuCharacterEditorState.hx",153,0x4e9ebe6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b3dbc1f8e1f84a09_191_updateCharTypeBox,"states.editors.MenuCharacterEditorState","updateCharTypeBox",0x90f45e92,"states.editors.MenuCharacterEditorState.updateCharTypeBox","states/editors/MenuCharacterEditorState.hx",191,0x4e9ebe6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b3dbc1f8e1f84a09_208_updateCharacters,"states.editors.MenuCharacterEditorState","updateCharacters",0x779a5533,"states.editors.MenuCharacterEditorState.updateCharacters","states/editors/MenuCharacterEditorState.hx",208,0x4e9ebe6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b3dbc1f8e1f84a09_218_reloadSelectedCharacter,"states.editors.MenuCharacterEditorState","reloadSelectedCharacter",0xb52fbd15,"states.editors.MenuCharacterEditorState.reloadSelectedCharacter","states/editors/MenuCharacterEditorState.hx",218,0x4e9ebe6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b3dbc1f8e1f84a09_239_getEvent,"states.editors.MenuCharacterEditorState","getEvent",0x7ef9e4c4,"states.editors.MenuCharacterEditorState.getEvent","states/editors/MenuCharacterEditorState.hx",239,0x4e9ebe6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b3dbc1f8e1f84a09_255_update,"states.editors.MenuCharacterEditorState","update",0x20e00b29,"states.editors.MenuCharacterEditorState.update","states/editors/MenuCharacterEditorState.hx",255,0x4e9ebe6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b3dbc1f8e1f84a09_307_updateOffset,"states.editors.MenuCharacterEditorState","updateOffset",0xb2be5b9c,"states.editors.MenuCharacterEditorState.updateOffset","states/editors/MenuCharacterEditorState.hx",307,0x4e9ebe6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b3dbc1f8e1f84a09_314_loadCharacter,"states.editors.MenuCharacterEditorState","loadCharacter",0xd5360b83,"states.editors.MenuCharacterEditorState.loadCharacter","states/editors/MenuCharacterEditorState.hx",314,0x4e9ebe6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b3dbc1f8e1f84a09_324_onLoadComplete,"states.editors.MenuCharacterEditorState","onLoadComplete",0x30b4f1de,"states.editors.MenuCharacterEditorState.onLoadComplete","states/editors/MenuCharacterEditorState.hx",324,0x4e9ebe6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b3dbc1f8e1f84a09_364_onLoadCancel,"states.editors.MenuCharacterEditorState","onLoadCancel",0x985ddb5f,"states.editors.MenuCharacterEditorState.onLoadCancel","states/editors/MenuCharacterEditorState.hx",364,0x4e9ebe6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b3dbc1f8e1f84a09_376_onLoadError,"states.editors.MenuCharacterEditorState","onLoadError",0x62f2e183,"states.editors.MenuCharacterEditorState.onLoadError","states/editors/MenuCharacterEditorState.hx",376,0x4e9ebe6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b3dbc1f8e1f84a09_384_saveCharacter,"states.editors.MenuCharacterEditorState","saveCharacter",0x778abf8c,"states.editors.MenuCharacterEditorState.saveCharacter","states/editors/MenuCharacterEditorState.hx",384,0x4e9ebe6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b3dbc1f8e1f84a09_400_onSaveComplete,"states.editors.MenuCharacterEditorState","onSaveComplete",0x89d451f5,"states.editors.MenuCharacterEditorState.onSaveComplete","states/editors/MenuCharacterEditorState.hx",400,0x4e9ebe6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b3dbc1f8e1f84a09_412_onSaveCancel,"states.editors.MenuCharacterEditorState","onSaveCancel",0x2bec37b6,"states.editors.MenuCharacterEditorState.onSaveCancel","states/editors/MenuCharacterEditorState.hx",412,0x4e9ebe6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b3dbc1f8e1f84a09_423_onSaveError,"states.editors.MenuCharacterEditorState","onSaveError",0xd6689d0c,"states.editors.MenuCharacterEditorState.onSaveError","states/editors/MenuCharacterEditorState.hx",423,0x4e9ebe6e)
namespace states{
namespace editors{

void MenuCharacterEditorState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_b3dbc1f8e1f84a09_20_new)
HXLINE( 313)		this->_file = null();
HXLINE( 116)		this->curTypeSelected = 0;
HXLINE(  74)		this->blockPressWhileTypingOn = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  25)		this->defaultCharacters = ::Array_obj< ::String >::fromData( _hx_array_data_74ec774e_1,3);
HXLINE(  23)		this->characterFile = null();
HXLINE(  20)		super::__construct(TransIn,TransOut);
            	}

Dynamic MenuCharacterEditorState_obj::__CreateEmpty() { return new MenuCharacterEditorState_obj; }

void *MenuCharacterEditorState_obj::_hx_vtable = 0;

Dynamic MenuCharacterEditorState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuCharacterEditorState_obj > _hx_result = new MenuCharacterEditorState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MenuCharacterEditorState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x53aaab8a) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x1665c23e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1665c23e;
			} else {
				return inClassId==(int)0x23a57bae;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x53aaab8a;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void MenuCharacterEditorState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_b3dbc1f8e1f84a09_27_create)
HXLINE(  28)		this->characterFile =  ::Dynamic(::hx::Anon_obj::Create(6)
            			->setFixed(0,HX_("idle_anim",5c,d2,54,bd),HX_("M Dad Idle",00,f6,aa,c0))
            			->setFixed(1,HX_("image",5b,1f,69,bd),HX_("Menu_Dad",67,f0,46,34))
            			->setFixed(2,HX_("position",a9,a0,fa,ca),::Array_obj< int >::fromData( _hx_array_data_74ec774e_3,2))
            			->setFixed(3,HX_("flipX",0b,45,92,02),false)
            			->setFixed(4,HX_("scale",8a,ce,ce,78),( (Float)(1) ))
            			->setFixed(5,HX_("confirm_anim",f0,e4,4f,7c),HX_("M Dad Idle",00,f6,aa,c0)));
HXLINE(  38)		::backend::DiscordClient_obj::changePresence(HX_("Menu Character Editor",05,2d,60,f9),( (::String)((HX_("Editting: ",be,88,46,a7) + this->characterFile->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic))) ),null(),null(),null());
HXLINE(  41)		this->grpWeekCharacters =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  42)		{
HXLINE(  43)			{
HXLINE(  44)				 ::objects::MenuCharacter weekCharacterThing =  ::objects::MenuCharacter_obj::__alloc( HX_CTX ,((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.25)) - ( (Float)(150) )),this->defaultCharacters->__get(0));
HXLINE(  45)				weekCharacterThing->set_y((weekCharacterThing->y + 70));
HXLINE(  46)				weekCharacterThing->set_alpha(((Float)0.2));
HXLINE(  47)				this->grpWeekCharacters->add(weekCharacterThing).StaticCast<  ::objects::MenuCharacter >();
            			}
HXLINE(  43)			{
HXLINE(  44)				 ::objects::MenuCharacter weekCharacterThing1 =  ::objects::MenuCharacter_obj::__alloc( HX_CTX ,(((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.25)) * ( (Float)(2) )) - ( (Float)(150) )),this->defaultCharacters->__get(1));
HXLINE(  45)				weekCharacterThing1->set_y((weekCharacterThing1->y + 70));
HXLINE(  46)				weekCharacterThing1->set_alpha(((Float)0.2));
HXLINE(  47)				this->grpWeekCharacters->add(weekCharacterThing1).StaticCast<  ::objects::MenuCharacter >();
            			}
HXLINE(  43)			{
HXLINE(  44)				 ::objects::MenuCharacter weekCharacterThing2 =  ::objects::MenuCharacter_obj::__alloc( HX_CTX ,(((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.25)) * ( (Float)(3) )) - ( (Float)(150) )),this->defaultCharacters->__get(2));
HXLINE(  45)				weekCharacterThing2->set_y((weekCharacterThing2->y + 70));
HXLINE(  46)				weekCharacterThing2->set_alpha(((Float)0.2));
HXLINE(  47)				this->grpWeekCharacters->add(weekCharacterThing2).StaticCast<  ::objects::MenuCharacter >();
            			}
            		}
HXLINE(  50)		this->add( ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,56,null())->makeGraphic(::flixel::FlxG_obj::width,386,-405679,null(),null()));
HXLINE(  51)		this->add(this->grpWeekCharacters);
HXLINE(  53)		this->txtOffsets =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,10,0,HX_("[0, 0]",96,83,e3,22),32,null());
HXLINE(  54)		this->txtOffsets->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),32,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  55)		this->txtOffsets->set_alpha(((Float)0.7));
HXLINE(  56)		this->add(this->txtOffsets);
HXLINE(  58)		 ::flixel::text::FlxText tipText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,540,::flixel::FlxG_obj::width,HX_("Arrow Keys - Change Offset (Hold shift for 10x speed)\n\t\t\t\nSpace - Play \"Start Press\" animation (Boyfriend Character Type)",67,59,5a,b5),16,null());
HXLINE(  61)		::String file = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  61)		::String _hx_tmp;
HXDLIN(  61)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  61)			_hx_tmp = file;
            		}
            		else {
HXLINE(  61)			_hx_tmp = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  61)		tipText->setFormat(_hx_tmp,16,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  62)		{
HXLINE(  62)			 ::flixel::math::FlxBasePoint this1 = tipText->scrollFactor;
HXDLIN(  62)			this1->set_x(( (Float)(0) ));
HXDLIN(  62)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  63)		this->add(tipText);
HXLINE(  65)		this->addEditorBox();
HXLINE(  66)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  67)		this->updateCharTypeBox();
HXLINE(  69)		this->super::create();
            	}


void MenuCharacterEditorState_obj::addEditorBox(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::editors::MenuCharacterEditorState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_b3dbc1f8e1f84a09_99_addEditorBox)
HXLINE(  99)			_gthis->loadCharacter();
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::states::editors::MenuCharacterEditorState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_b3dbc1f8e1f84a09_106_addEditorBox)
HXLINE( 106)			_gthis->saveCharacter();
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_b3dbc1f8e1f84a09_75_addEditorBox)
HXDLIN(  75)		 ::states::editors::MenuCharacterEditorState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  76)		::Array< ::Dynamic> tabs = ::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("name",4b,72,ff,48),HX_("Character Type",d1,82,ee,91))
            			->setFixed(1,HX_("label",f4,0d,af,6f),HX_("Character Type",d1,82,ee,91))));
HXLINE(  79)		this->UI_typebox =  ::flixel::addons::ui::FlxUITabMenu_obj::__alloc( HX_CTX ,null(),null(),tabs,null(),true,null(),null());
HXLINE(  80)		this->UI_typebox->resize(( (Float)(120) ),( (Float)(180) ));
HXLINE(  81)		this->UI_typebox->set_x(( (Float)(100) ));
HXLINE(  82)		 ::flixel::addons::ui::FlxUITabMenu _hx_tmp = this->UI_typebox;
HXDLIN(  82)		int _hx_tmp1 = ::flixel::FlxG_obj::height;
HXDLIN(  82)		_hx_tmp->set_y(((( (Float)(_hx_tmp1) ) - this->UI_typebox->get_height()) - ( (Float)(50) )));
HXLINE(  83)		{
HXLINE(  83)			 ::flixel::math::FlxBasePoint this1 = this->UI_typebox->scrollFactor;
HXDLIN(  83)			this1->set_x(( (Float)(0) ));
HXDLIN(  83)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  84)		this->addTypeUI();
HXLINE(  85)		this->add(this->UI_typebox);
HXLINE(  87)		::Array< ::Dynamic> tabs1 = ::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("name",4b,72,ff,48),HX_("Character",89,bb,a4,e3))
            			->setFixed(1,HX_("label",f4,0d,af,6f),HX_("Character",89,bb,a4,e3))));
HXLINE(  90)		this->UI_mainbox =  ::flixel::addons::ui::FlxUITabMenu_obj::__alloc( HX_CTX ,null(),null(),tabs1,null(),true,null(),null());
HXLINE(  91)		this->UI_mainbox->resize(( (Float)(240) ),( (Float)(180) ));
HXLINE(  92)		 ::flixel::addons::ui::FlxUITabMenu _hx_tmp2 = this->UI_mainbox;
HXDLIN(  92)		int _hx_tmp3 = ::flixel::FlxG_obj::width;
HXDLIN(  92)		_hx_tmp2->set_x(((( (Float)(_hx_tmp3) ) - this->UI_mainbox->get_width()) - ( (Float)(100) )));
HXLINE(  93)		 ::flixel::addons::ui::FlxUITabMenu _hx_tmp4 = this->UI_mainbox;
HXDLIN(  93)		int _hx_tmp5 = ::flixel::FlxG_obj::height;
HXDLIN(  93)		_hx_tmp4->set_y(((( (Float)(_hx_tmp5) ) - this->UI_mainbox->get_height()) - ( (Float)(50) )));
HXLINE(  94)		{
HXLINE(  94)			 ::flixel::math::FlxBasePoint this2 = this->UI_mainbox->scrollFactor;
HXDLIN(  94)			this2->set_x(( (Float)(0) ));
HXDLIN(  94)			this2->set_y(( (Float)(0) ));
            		}
HXLINE(  95)		this->addCharacterUI();
HXLINE(  96)		this->add(this->UI_mainbox);
HXLINE(  98)		 ::flixel::ui::FlxButton loadButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,480,HX_("Load Character",2f,51,49,37), ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE( 101)		{
HXLINE( 101)			int axes = 1;
HXDLIN( 101)			bool _hx_tmp6;
HXDLIN( 101)			if ((axes != 1)) {
HXLINE( 101)				_hx_tmp6 = (axes == 17);
            			}
            			else {
HXLINE( 101)				_hx_tmp6 = true;
            			}
HXDLIN( 101)			if (_hx_tmp6) {
HXLINE( 101)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 101)				loadButton->set_x(((( (Float)(_hx_tmp) ) - loadButton->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 101)			bool _hx_tmp7;
HXDLIN( 101)			if ((axes != 16)) {
HXLINE( 101)				_hx_tmp7 = (axes == 17);
            			}
            			else {
HXLINE( 101)				_hx_tmp7 = true;
            			}
HXDLIN( 101)			if (_hx_tmp7) {
HXLINE( 101)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 101)				loadButton->set_y(((( (Float)(_hx_tmp) ) - loadButton->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 102)		loadButton->set_x((loadButton->x - ( (Float)(60) )));
HXLINE( 103)		this->add(loadButton);
HXLINE( 105)		 ::flixel::ui::FlxButton saveButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,480,HX_("Save Character",06,25,12,9f), ::Dynamic(new _hx_Closure_1(_gthis)));
HXLINE( 108)		{
HXLINE( 108)			int axes1 = 1;
HXDLIN( 108)			bool _hx_tmp8;
HXDLIN( 108)			if ((axes1 != 1)) {
HXLINE( 108)				_hx_tmp8 = (axes1 == 17);
            			}
            			else {
HXLINE( 108)				_hx_tmp8 = true;
            			}
HXDLIN( 108)			if (_hx_tmp8) {
HXLINE( 108)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 108)				saveButton->set_x(((( (Float)(_hx_tmp) ) - saveButton->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 108)			bool _hx_tmp9;
HXDLIN( 108)			if ((axes1 != 16)) {
HXLINE( 108)				_hx_tmp9 = (axes1 == 17);
            			}
            			else {
HXLINE( 108)				_hx_tmp9 = true;
            			}
HXDLIN( 108)			if (_hx_tmp9) {
HXLINE( 108)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 108)				saveButton->set_y(((( (Float)(_hx_tmp) ) - saveButton->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 109)		saveButton->set_x((saveButton->x + 60));
HXLINE( 110)		this->add(saveButton);
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuCharacterEditorState_obj,addEditorBox,(void))

void MenuCharacterEditorState_obj::addTypeUI(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::editors::MenuCharacterEditorState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_b3dbc1f8e1f84a09_123_addTypeUI)
HXLINE( 124)			_gthis->curTypeSelected = 0;
HXLINE( 125)			_gthis->updateCharTypeBox();
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::states::editors::MenuCharacterEditorState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_b3dbc1f8e1f84a09_130_addTypeUI)
HXLINE( 131)			_gthis->curTypeSelected = 1;
HXLINE( 132)			_gthis->updateCharTypeBox();
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::states::editors::MenuCharacterEditorState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_b3dbc1f8e1f84a09_137_addTypeUI)
HXLINE( 138)			_gthis->curTypeSelected = 2;
HXLINE( 139)			_gthis->updateCharTypeBox();
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_b3dbc1f8e1f84a09_117_addTypeUI)
HXDLIN( 117)		 ::states::editors::MenuCharacterEditorState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 118)		 ::flixel::addons::ui::FlxUI tab_group =  ::flixel::addons::ui::FlxUI_obj::__alloc( HX_CTX ,null(),this->UI_typebox,null(),null(),null(),null());
HXLINE( 119)		tab_group->name = HX_("Character Type",d1,82,ee,91);
HXLINE( 121)		this->opponentCheckbox =  ::flixel::addons::ui::FlxUICheckBox_obj::__alloc( HX_CTX ,10,20,null(),null(),HX_("Opponent",bd,75,6a,d2),100,null(),null());
HXLINE( 122)		this->opponentCheckbox->callback =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 128)		this->boyfriendCheckbox =  ::flixel::addons::ui::FlxUICheckBox_obj::__alloc( HX_CTX ,this->opponentCheckbox->x,(this->opponentCheckbox->y + 40),null(),null(),HX_("Boyfriend",4a,09,8b,88),100,null(),null());
HXLINE( 129)		this->boyfriendCheckbox->callback =  ::Dynamic(new _hx_Closure_1(_gthis));
HXLINE( 135)		this->girlfriendCheckbox =  ::flixel::addons::ui::FlxUICheckBox_obj::__alloc( HX_CTX ,this->boyfriendCheckbox->x,(this->boyfriendCheckbox->y + 40),null(),null(),HX_("Girlfriend",da,95,f9,8e),100,null(),null());
HXLINE( 136)		this->girlfriendCheckbox->callback =  ::Dynamic(new _hx_Closure_2(_gthis));
HXLINE( 142)		tab_group->add(this->opponentCheckbox).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 143)		tab_group->add(this->boyfriendCheckbox).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 144)		tab_group->add(this->girlfriendCheckbox).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 145)		this->UI_typebox->addGroup(tab_group);
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuCharacterEditorState_obj,addTypeUI,(void))

void MenuCharacterEditorState_obj::addCharacterUI(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::editors::MenuCharacterEditorState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_b3dbc1f8e1f84a09_166_addCharacterUI)
HXLINE( 167)			Dynamic( _gthis->grpWeekCharacters->members->__get(_gthis->curTypeSelected)).StaticCast<  ::objects::MenuCharacter >()->set_flipX(_gthis->flipXCheckbox->checked);
HXLINE( 168)			_gthis->characterFile->__SetField(HX_("flipX",0b,45,92,02),_gthis->flipXCheckbox->checked,::hx::paccDynamic);
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::states::editors::MenuCharacterEditorState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_b3dbc1f8e1f84a09_172_addCharacterUI)
HXLINE( 172)			_gthis->reloadSelectedCharacter();
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_b3dbc1f8e1f84a09_153_addCharacterUI)
HXDLIN( 153)		 ::states::editors::MenuCharacterEditorState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 154)		 ::flixel::addons::ui::FlxUI tab_group =  ::flixel::addons::ui::FlxUI_obj::__alloc( HX_CTX ,null(),this->UI_mainbox,null(),null(),null(),null());
HXLINE( 155)		tab_group->name = HX_("Character",89,bb,a4,e3);
HXLINE( 157)		this->imageInputText =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,10,20,80,( (::String)(this->characterFile->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic)) ),8,null(),null(),null());
HXLINE( 158)		this->blockPressWhileTypingOn->push(this->imageInputText);
HXLINE( 159)		this->idleInputText =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,10,(this->imageInputText->y + 35),100,( (::String)(this->characterFile->__Field(HX_("idle_anim",5c,d2,54,bd),::hx::paccDynamic)) ),8,null(),null(),null());
HXLINE( 160)		this->blockPressWhileTypingOn->push(this->idleInputText);
HXLINE( 161)		this->confirmInputText =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,10,(this->idleInputText->y + 35),100,( (::String)(this->characterFile->__Field(HX_("confirm_anim",f0,e4,4f,7c),::hx::paccDynamic)) ),8,null(),null(),null());
HXLINE( 162)		this->blockPressWhileTypingOn->push(this->confirmInputText);
HXLINE( 164)		this->flipXCheckbox =  ::flixel::addons::ui::FlxUICheckBox_obj::__alloc( HX_CTX ,10,(this->confirmInputText->y + 30),null(),null(),HX_("Flip X",45,68,fe,71),100,null(),null());
HXLINE( 165)		this->flipXCheckbox->callback =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 171)		 ::flixel::ui::FlxButton reloadImageButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,140,(this->confirmInputText->y + 30),HX_("Reload Char",fd,9c,14,46), ::Dynamic(new _hx_Closure_1(_gthis)));
HXLINE( 175)		this->scaleStepper =  ::flixel::addons::ui::FlxUINumericStepper_obj::__alloc( HX_CTX ,140,this->imageInputText->y,((Float)0.05),1,((Float)0.1),30,2,null(),null(),null(),null(),null());
HXLINE( 177)		 ::flixel::text::FlxText confirmDescText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,10,(this->confirmInputText->y - ( (Float)(18) )),0,HX_("Start Press animation on the .XML:",f8,8c,5f,fb),null(),null());
HXLINE( 178)		tab_group->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,10,(this->imageInputText->y - ( (Float)(18) )),0,HX_("Image file name:",b0,6b,31,2a),null(),null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 179)		tab_group->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,10,(this->idleInputText->y - ( (Float)(18) )),0,HX_("Idle animation on the .XML:",a9,f0,45,8f),null(),null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 180)		tab_group->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->scaleStepper->x,(this->scaleStepper->y - ( (Float)(18) )),0,HX_("Scale:",90,5e,ba,70),null(),null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 181)		tab_group->add(this->flipXCheckbox).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 182)		tab_group->add(reloadImageButton).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 183)		tab_group->add(confirmDescText).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 184)		tab_group->add(this->imageInputText).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 185)		tab_group->add(this->idleInputText).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 186)		tab_group->add(this->confirmInputText).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 187)		tab_group->add(this->scaleStepper).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 188)		this->UI_mainbox->addGroup(tab_group);
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuCharacterEditorState_obj,addCharacterUI,(void))

void MenuCharacterEditorState_obj::updateCharTypeBox(){
            	HX_STACKFRAME(&_hx_pos_b3dbc1f8e1f84a09_191_updateCharTypeBox)
HXLINE( 192)		this->opponentCheckbox->set_checked(false);
HXLINE( 193)		this->boyfriendCheckbox->set_checked(false);
HXLINE( 194)		this->girlfriendCheckbox->set_checked(false);
HXLINE( 196)		switch((int)(this->curTypeSelected)){
            			case (int)0: {
HXLINE( 198)				this->opponentCheckbox->set_checked(true);
            			}
            			break;
            			case (int)1: {
HXLINE( 200)				this->boyfriendCheckbox->set_checked(true);
            			}
            			break;
            			case (int)2: {
HXLINE( 202)				this->girlfriendCheckbox->set_checked(true);
            			}
            			break;
            		}
HXLINE( 205)		this->updateCharacters();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuCharacterEditorState_obj,updateCharTypeBox,(void))

void MenuCharacterEditorState_obj::updateCharacters(){
            	HX_STACKFRAME(&_hx_pos_b3dbc1f8e1f84a09_208_updateCharacters)
HXLINE( 209)		{
HXLINE( 209)			{
HXLINE( 210)				 ::objects::MenuCharacter _hx_char = Dynamic( this->grpWeekCharacters->members->__get(0)).StaticCast<  ::objects::MenuCharacter >();
HXLINE( 211)				_hx_char->set_alpha(((Float)0.2));
HXLINE( 212)				_hx_char->character = HX_("",00,00,00,00);
HXLINE( 213)				_hx_char->changeCharacter(this->defaultCharacters->__get(0));
            			}
HXLINE( 209)			{
HXLINE( 210)				 ::objects::MenuCharacter char1 = Dynamic( this->grpWeekCharacters->members->__get(1)).StaticCast<  ::objects::MenuCharacter >();
HXLINE( 211)				char1->set_alpha(((Float)0.2));
HXLINE( 212)				char1->character = HX_("",00,00,00,00);
HXLINE( 213)				char1->changeCharacter(this->defaultCharacters->__get(1));
            			}
HXLINE( 209)			{
HXLINE( 210)				 ::objects::MenuCharacter char2 = Dynamic( this->grpWeekCharacters->members->__get(2)).StaticCast<  ::objects::MenuCharacter >();
HXLINE( 211)				char2->set_alpha(((Float)0.2));
HXLINE( 212)				char2->character = HX_("",00,00,00,00);
HXLINE( 213)				char2->changeCharacter(this->defaultCharacters->__get(2));
            			}
            		}
HXLINE( 215)		this->reloadSelectedCharacter();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuCharacterEditorState_obj,updateCharacters,(void))

void MenuCharacterEditorState_obj::reloadSelectedCharacter(){
            	HX_STACKFRAME(&_hx_pos_b3dbc1f8e1f84a09_218_reloadSelectedCharacter)
HXLINE( 219)		 ::objects::MenuCharacter _hx_char = Dynamic( this->grpWeekCharacters->members->__get(this->curTypeSelected)).StaticCast<  ::objects::MenuCharacter >();
HXLINE( 221)		_hx_char->set_alpha(( (Float)(1) ));
HXLINE( 222)		::String key = ( (::String)((HX_("menucharacters/",06,2d,77,01) + this->characterFile->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic))) );
HXDLIN( 222)		::String library = null();
HXDLIN( 222)		 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(key,null(),true);
HXDLIN( 222)		bool xmlExists = false;
HXDLIN( 222)		::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 222)		if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 222)			xmlExists = true;
            		}
HXDLIN( 222)		 ::Dynamic _hx_tmp;
HXDLIN( 222)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 222)			_hx_tmp = imageLoaded;
            		}
            		else {
HXLINE( 222)			_hx_tmp = ::backend::Paths_obj::image(key,library,true);
            		}
HXDLIN( 222)		::String _hx_tmp1;
HXDLIN( 222)		if (xmlExists) {
HXLINE( 222)			_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            		}
            		else {
HXLINE( 222)			_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            		}
HXDLIN( 222)		_hx_char->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 223)		_hx_char->animation->addByPrefix(HX_("idle",14,a7,b3,45),( (::String)(this->characterFile->__Field(HX_("idle_anim",5c,d2,54,bd),::hx::paccDynamic)) ),24,null(),null(),null());
HXLINE( 224)		if ((this->curTypeSelected == 1)) {
HXLINE( 224)			_hx_char->animation->addByPrefix(HX_("confirm",00,9d,39,10),( (::String)(this->characterFile->__Field(HX_("confirm_anim",f0,e4,4f,7c),::hx::paccDynamic)) ),24,false,null(),null());
            		}
HXLINE( 225)		_hx_char->set_flipX(::hx::IsEq( this->characterFile->__Field(HX_("flipX",0b,45,92,02),::hx::paccDynamic),true ));
HXLINE( 227)		{
HXLINE( 227)			 ::flixel::math::FlxBasePoint this1 = _hx_char->scale;
HXDLIN( 227)			Float y = ( (Float)(this->characterFile->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic)) );
HXDLIN( 227)			this1->set_x(( (Float)(this->characterFile->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic)) ));
HXDLIN( 227)			this1->set_y(y);
            		}
HXLINE( 228)		_hx_char->updateHitbox();
HXLINE( 229)		_hx_char->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 230)		this->updateOffset();
HXLINE( 234)		::backend::DiscordClient_obj::changePresence(HX_("Menu Character Editor",05,2d,60,f9),( (::String)((HX_("Editting: ",be,88,46,a7) + this->characterFile->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic))) ),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuCharacterEditorState_obj,reloadSelectedCharacter,(void))

void MenuCharacterEditorState_obj::getEvent(::String id, ::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params){
            	HX_STACKFRAME(&_hx_pos_b3dbc1f8e1f84a09_239_getEvent)
HXDLIN( 239)		bool _hx_tmp;
HXDLIN( 239)		if ((id == HX_("change_input_text",f1,11,47,68))) {
HXDLIN( 239)			_hx_tmp = ::Std_obj::isOfType(sender,::hx::ClassOf< ::flixel::addons::ui::FlxUIInputText >());
            		}
            		else {
HXDLIN( 239)			_hx_tmp = false;
            		}
HXDLIN( 239)		if (_hx_tmp) {
HXLINE( 240)			if (::hx::IsInstanceEq( sender,this->imageInputText )) {
HXLINE( 241)				this->characterFile->__SetField(HX_("image",5b,1f,69,bd),this->imageInputText->text,::hx::paccDynamic);
            			}
            			else {
HXLINE( 242)				if (::hx::IsInstanceEq( sender,this->idleInputText )) {
HXLINE( 243)					this->characterFile->__SetField(HX_("idle_anim",5c,d2,54,bd),this->idleInputText->text,::hx::paccDynamic);
            				}
            				else {
HXLINE( 244)					if (::hx::IsInstanceEq( sender,this->confirmInputText )) {
HXLINE( 245)						this->characterFile->__SetField(HX_("confirm_anim",f0,e4,4f,7c),this->confirmInputText->text,::hx::paccDynamic);
            					}
            				}
            			}
            		}
            		else {
HXLINE( 247)			bool _hx_tmp;
HXDLIN( 247)			if ((id == HX_("change_numeric_stepper",50,0a,cc,bb))) {
HXLINE( 247)				_hx_tmp = ::Std_obj::isOfType(sender,::hx::ClassOf< ::flixel::addons::ui::FlxUINumericStepper >());
            			}
            			else {
HXLINE( 247)				_hx_tmp = false;
            			}
HXDLIN( 247)			if (_hx_tmp) {
HXLINE( 248)				if (::hx::IsInstanceEq( sender,this->scaleStepper )) {
HXLINE( 249)					this->characterFile->__SetField(HX_("scale",8a,ce,ce,78),this->scaleStepper->value,::hx::paccDynamic);
HXLINE( 250)					this->reloadSelectedCharacter();
            				}
            			}
            		}
            	}


void MenuCharacterEditorState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_b3dbc1f8e1f84a09_255_update)
HXLINE( 256)		bool blockInput = false;
HXLINE( 257)		{
HXLINE( 257)			int _g = 0;
HXDLIN( 257)			::Array< ::Dynamic> _g1 = this->blockPressWhileTypingOn;
HXDLIN( 257)			while((_g < _g1->length)){
HXLINE( 257)				 ::flixel::addons::ui::FlxUIInputText inputText = _g1->__get(_g).StaticCast<  ::flixel::addons::ui::FlxUIInputText >();
HXDLIN( 257)				_g = (_g + 1);
HXLINE( 258)				if (inputText->hasFocus) {
HXLINE( 259)					::backend::ClientPrefs_obj::toggleVolumeKeys(false);
HXLINE( 260)					blockInput = true;
HXLINE( 262)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 262)					if (_this->keyManager->checkStatusUnsafe(13,_this->status)) {
HXLINE( 262)						inputText->set_hasFocus(false);
            					}
HXLINE( 263)					goto _hx_goto_18;
            				}
            			}
            			_hx_goto_18:;
            		}
HXLINE( 267)		if (!(blockInput)) {
HXLINE( 268)			::backend::ClientPrefs_obj::toggleVolumeKeys(true);
HXLINE( 269)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 269)			if (_this->keyManager->checkStatusUnsafe(27,_this->status)) {
HXLINE( 270)				::backend::MusicBeatState_obj::switchState( ::states::editors::MasterEditorMenu_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 271)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 271)				::String library = null();
HXDLIN( 271)				 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("menu/Gates of the hell",0d,b1,f8,c4),library);
HXDLIN( 271)				_hx_tmp->playMusic(file,null(),null(),null());
            			}
HXLINE( 274)			int shiftMult = 1;
HXLINE( 275)			 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 275)			if (_this1->keyManager->checkStatusUnsafe(16,_this1->status)) {
HXLINE( 275)				shiftMult = 10;
            			}
HXLINE( 277)			 ::flixel::input::keyboard::FlxKeyList _this2 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 277)			if (_this2->keyManager->checkStatusUnsafe(37,_this2->status)) {
HXLINE( 278)				::Array< int > base = ( (::Array< int >)(this->characterFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic)) );
HXDLIN( 278)				int _hx_tmp = 0;
HXDLIN( 278)				base[_hx_tmp] = (base->__get(_hx_tmp) + shiftMult);
HXLINE( 279)				this->updateOffset();
            			}
HXLINE( 281)			 ::flixel::input::keyboard::FlxKeyList _this3 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 281)			if (_this3->keyManager->checkStatusUnsafe(39,_this3->status)) {
HXLINE( 282)				::Array< int > base = ( (::Array< int >)(this->characterFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic)) );
HXDLIN( 282)				int _hx_tmp = 0;
HXDLIN( 282)				base[_hx_tmp] = (base->__get(_hx_tmp) - shiftMult);
HXLINE( 283)				this->updateOffset();
            			}
HXLINE( 285)			 ::flixel::input::keyboard::FlxKeyList _this4 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 285)			if (_this4->keyManager->checkStatusUnsafe(38,_this4->status)) {
HXLINE( 286)				::Array< int > base = ( (::Array< int >)(this->characterFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic)) );
HXDLIN( 286)				int _hx_tmp = 1;
HXDLIN( 286)				base[_hx_tmp] = (base->__get(_hx_tmp) + shiftMult);
HXLINE( 287)				this->updateOffset();
            			}
HXLINE( 289)			 ::flixel::input::keyboard::FlxKeyList _this5 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 289)			if (_this5->keyManager->checkStatusUnsafe(40,_this5->status)) {
HXLINE( 290)				::Array< int > base = ( (::Array< int >)(this->characterFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic)) );
HXDLIN( 290)				int _hx_tmp = 1;
HXDLIN( 290)				base[_hx_tmp] = (base->__get(_hx_tmp) - shiftMult);
HXLINE( 291)				this->updateOffset();
            			}
HXLINE( 294)			bool _hx_tmp;
HXDLIN( 294)			 ::flixel::input::keyboard::FlxKeyList _this6 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 294)			if (_this6->keyManager->checkStatusUnsafe(32,_this6->status)) {
HXLINE( 294)				_hx_tmp = (this->curTypeSelected == 1);
            			}
            			else {
HXLINE( 294)				_hx_tmp = false;
            			}
HXDLIN( 294)			if (_hx_tmp) {
HXLINE( 295)				Dynamic( this->grpWeekCharacters->members->__get(this->curTypeSelected)).StaticCast<  ::objects::MenuCharacter >()->animation->play(HX_("confirm",00,9d,39,10),true,null(),null());
            			}
            		}
HXLINE( 299)		 ::objects::MenuCharacter _hx_char = Dynamic( this->grpWeekCharacters->members->__get(1)).StaticCast<  ::objects::MenuCharacter >();
HXLINE( 300)		bool _hx_tmp;
HXDLIN( 300)		bool _hx_tmp1;
HXDLIN( 300)		if (::hx::IsNotNull( _hx_char->animation->_curAnim )) {
HXLINE( 300)			_hx_tmp1 = (_hx_char->animation->_curAnim->name == HX_("confirm",00,9d,39,10));
            		}
            		else {
HXLINE( 300)			_hx_tmp1 = false;
            		}
HXDLIN( 300)		if (_hx_tmp1) {
HXLINE( 300)			_hx_tmp = _hx_char->animation->_curAnim->finished;
            		}
            		else {
HXLINE( 300)			_hx_tmp = false;
            		}
HXDLIN( 300)		if (_hx_tmp) {
HXLINE( 301)			_hx_char->animation->play(HX_("idle",14,a7,b3,45),true,null(),null());
            		}
HXLINE( 304)		this->super::update(elapsed);
            	}


void MenuCharacterEditorState_obj::updateOffset(){
            	HX_STACKFRAME(&_hx_pos_b3dbc1f8e1f84a09_307_updateOffset)
HXLINE( 308)		 ::objects::MenuCharacter _hx_char = Dynamic( this->grpWeekCharacters->members->__get(this->curTypeSelected)).StaticCast<  ::objects::MenuCharacter >();
HXLINE( 309)		{
HXLINE( 309)			 ::flixel::math::FlxBasePoint this1 = _hx_char->offset;
HXDLIN( 309)			Float y = ( (Float)( ::Dynamic(this->characterFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(1)) );
HXDLIN( 309)			this1->set_x(( (Float)( ::Dynamic(this->characterFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(0)) ));
HXDLIN( 309)			this1->set_y(y);
            		}
HXLINE( 310)		 ::flixel::text::FlxText _hx_tmp = this->txtOffsets;
HXDLIN( 310)		_hx_tmp->set_text((HX_("",00,00,00,00) + ::Std_obj::string( ::Dynamic(this->characterFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic)))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuCharacterEditorState_obj,updateOffset,(void))

void MenuCharacterEditorState_obj::loadCharacter(){
            	HX_GC_STACKFRAME(&_hx_pos_b3dbc1f8e1f84a09_314_loadCharacter)
HXLINE( 315)		 ::openfl::net::FileFilter jsonFilter =  ::openfl::net::FileFilter_obj::__alloc( HX_CTX ,HX_("JSON",28,0a,29,31),HX_("json",28,42,68,46),null());
HXLINE( 316)		this->_file =  ::openfl::net::FileReference_obj::__alloc( HX_CTX );
HXLINE( 317)		this->_file->addEventListener(HX_("select",fc,1a,33,6a),this->onLoadComplete_dyn(),null(),null(),null());
HXLINE( 318)		this->_file->addEventListener(HX_("cancel",7a,ed,33,b8),this->onLoadCancel_dyn(),null(),null(),null());
HXLINE( 319)		this->_file->addEventListener(HX_("ioError",02,fe,41,76),this->onLoadError_dyn(),null(),null(),null());
HXLINE( 320)		this->_file->browse(::Array_obj< ::Dynamic>::__new(1)->init(0,jsonFilter));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuCharacterEditorState_obj,loadCharacter,(void))

void MenuCharacterEditorState_obj::onLoadComplete( ::openfl::events::Event _){
            	HX_STACKFRAME(&_hx_pos_b3dbc1f8e1f84a09_324_onLoadComplete)
HXLINE( 325)		this->_file->removeEventListener(HX_("select",fc,1a,33,6a),this->onLoadComplete_dyn(),null());
HXLINE( 326)		this->_file->removeEventListener(HX_("cancel",7a,ed,33,b8),this->onLoadCancel_dyn(),null());
HXLINE( 327)		this->_file->removeEventListener(HX_("ioError",02,fe,41,76),this->onLoadError_dyn(),null());
HXLINE( 330)		::String fullPath = null();
HXLINE( 332)		if (::hx::IsNotNull( this->_file->_hx___path )) {
HXLINE( 332)			fullPath = this->_file->_hx___path;
            		}
HXLINE( 334)		if (::hx::IsNotNull( fullPath )) {
HXLINE( 335)			::String rawJson = ::sys::io::File_obj::getContent(fullPath);
HXLINE( 336)			if (::hx::IsNotNull( rawJson )) {
HXLINE( 337)				 ::Dynamic loadedChar = ::tjson::TJSON_obj::parse(rawJson,null(),null());
HXLINE( 338)				bool _hx_tmp;
HXDLIN( 338)				if (::hx::IsNotNull( loadedChar->__Field(HX_("idle_anim",5c,d2,54,bd),::hx::paccDynamic) )) {
HXLINE( 338)					_hx_tmp = ::hx::IsNotNull( loadedChar->__Field(HX_("confirm_anim",f0,e4,4f,7c),::hx::paccDynamic) );
            				}
            				else {
HXLINE( 338)					_hx_tmp = false;
            				}
HXDLIN( 338)				if (_hx_tmp) {
HXLINE( 340)					::String cutName = this->_file->get_name();
HXDLIN( 340)					::String cutName1 = cutName.substr(0,(this->_file->get_name().length - 5));
HXLINE( 341)					::haxe::Log_obj::trace((HX_("Successfully loaded file: ",84,24,61,ed) + cutName1),::hx::SourceInfo(HX_("source/states/editors/MenuCharacterEditorState.hx",62,d6,17,99),341,HX_("states.editors.MenuCharacterEditorState",4e,77,ec,74),HX_("onLoadComplete",be,4c,20,63)));
HXLINE( 342)					this->characterFile = loadedChar;
HXLINE( 343)					this->reloadSelectedCharacter();
HXLINE( 344)					this->imageInputText->set_text(( (::String)(this->characterFile->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic)) ));
HXLINE( 345)					this->idleInputText->set_text(( (::String)(this->characterFile->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic)) ));
HXLINE( 346)					this->confirmInputText->set_text(( (::String)(this->characterFile->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic)) ));
HXLINE( 347)					this->scaleStepper->set_value(( (Float)(this->characterFile->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic)) ));
HXLINE( 348)					this->updateOffset();
HXLINE( 349)					this->_file = null();
HXLINE( 350)					return;
            				}
            			}
            		}
HXLINE( 354)		this->_file = null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuCharacterEditorState_obj,onLoadComplete,(void))

void MenuCharacterEditorState_obj::onLoadCancel( ::openfl::events::Event _){
            	HX_STACKFRAME(&_hx_pos_b3dbc1f8e1f84a09_364_onLoadCancel)
HXLINE( 365)		this->_file->removeEventListener(HX_("select",fc,1a,33,6a),this->onLoadComplete_dyn(),null());
HXLINE( 366)		this->_file->removeEventListener(HX_("cancel",7a,ed,33,b8),this->onLoadCancel_dyn(),null());
HXLINE( 367)		this->_file->removeEventListener(HX_("ioError",02,fe,41,76),this->onLoadError_dyn(),null());
HXLINE( 368)		this->_file = null();
HXLINE( 369)		::haxe::Log_obj::trace(HX_("Cancelled file loading.",67,56,c5,a3),::hx::SourceInfo(HX_("source/states/editors/MenuCharacterEditorState.hx",62,d6,17,99),369,HX_("states.editors.MenuCharacterEditorState",4e,77,ec,74),HX_("onLoadCancel",3f,be,a2,45)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuCharacterEditorState_obj,onLoadCancel,(void))

void MenuCharacterEditorState_obj::onLoadError( ::openfl::events::IOErrorEvent _){
            	HX_STACKFRAME(&_hx_pos_b3dbc1f8e1f84a09_376_onLoadError)
HXLINE( 377)		this->_file->removeEventListener(HX_("select",fc,1a,33,6a),this->onLoadComplete_dyn(),null());
HXLINE( 378)		this->_file->removeEventListener(HX_("cancel",7a,ed,33,b8),this->onLoadCancel_dyn(),null());
HXLINE( 379)		this->_file->removeEventListener(HX_("ioError",02,fe,41,76),this->onLoadError_dyn(),null());
HXLINE( 380)		this->_file = null();
HXLINE( 381)		::haxe::Log_obj::trace(HX_("Problem loading file",21,8c,56,d8),::hx::SourceInfo(HX_("source/states/editors/MenuCharacterEditorState.hx",62,d6,17,99),381,HX_("states.editors.MenuCharacterEditorState",4e,77,ec,74),HX_("onLoadError",a3,fa,a3,b0)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuCharacterEditorState_obj,onLoadError,(void))

void MenuCharacterEditorState_obj::saveCharacter(){
            	HX_GC_STACKFRAME(&_hx_pos_b3dbc1f8e1f84a09_384_saveCharacter)
HXLINE( 385)		 ::Dynamic replacer = null();
HXDLIN( 385)		::String data = ::haxe::format::JsonPrinter_obj::print(this->characterFile,replacer,HX_("\t",09,00,00,00));
HXLINE( 386)		if ((data.length > 0)) {
HXLINE( 388)			::Array< ::String > splittedImage = ::StringTools_obj::trim(this->imageInputText->text).split(HX_("_",5f,00,00,00));
HXLINE( 389)			::String characterName = ::StringTools_obj::replace(splittedImage->__get((splittedImage->length - 1)).toLowerCase(),HX_(" ",20,00,00,00),HX_("",00,00,00,00));
HXLINE( 391)			this->_file =  ::openfl::net::FileReference_obj::__alloc( HX_CTX );
HXLINE( 392)			this->_file->addEventListener(HX_("complete",b9,00,c8,7f),this->onSaveComplete_dyn(),null(),null(),null());
HXLINE( 393)			this->_file->addEventListener(HX_("cancel",7a,ed,33,b8),this->onSaveCancel_dyn(),null(),null(),null());
HXLINE( 394)			this->_file->addEventListener(HX_("ioError",02,fe,41,76),this->onSaveError_dyn(),null(),null(),null());
HXLINE( 395)			this->_file->save(data,(characterName + HX_(".json",56,f1,d6,c2)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuCharacterEditorState_obj,saveCharacter,(void))

void MenuCharacterEditorState_obj::onSaveComplete( ::openfl::events::Event _){
            	HX_STACKFRAME(&_hx_pos_b3dbc1f8e1f84a09_400_onSaveComplete)
HXLINE( 401)		this->_file->removeEventListener(HX_("complete",b9,00,c8,7f),this->onSaveComplete_dyn(),null());
HXLINE( 402)		this->_file->removeEventListener(HX_("cancel",7a,ed,33,b8),this->onSaveCancel_dyn(),null());
HXLINE( 403)		this->_file->removeEventListener(HX_("ioError",02,fe,41,76),this->onSaveError_dyn(),null());
HXLINE( 404)		this->_file = null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuCharacterEditorState_obj,onSaveComplete,(void))

void MenuCharacterEditorState_obj::onSaveCancel( ::openfl::events::Event _){
            	HX_STACKFRAME(&_hx_pos_b3dbc1f8e1f84a09_412_onSaveCancel)
HXLINE( 413)		this->_file->removeEventListener(HX_("complete",b9,00,c8,7f),this->onSaveComplete_dyn(),null());
HXLINE( 414)		this->_file->removeEventListener(HX_("cancel",7a,ed,33,b8),this->onSaveCancel_dyn(),null());
HXLINE( 415)		this->_file->removeEventListener(HX_("ioError",02,fe,41,76),this->onSaveError_dyn(),null());
HXLINE( 416)		this->_file = null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuCharacterEditorState_obj,onSaveCancel,(void))

void MenuCharacterEditorState_obj::onSaveError( ::openfl::events::IOErrorEvent _){
            	HX_STACKFRAME(&_hx_pos_b3dbc1f8e1f84a09_423_onSaveError)
HXLINE( 424)		this->_file->removeEventListener(HX_("complete",b9,00,c8,7f),this->onSaveComplete_dyn(),null());
HXLINE( 425)		this->_file->removeEventListener(HX_("cancel",7a,ed,33,b8),this->onSaveCancel_dyn(),null());
HXLINE( 426)		this->_file->removeEventListener(HX_("ioError",02,fe,41,76),this->onSaveError_dyn(),null());
HXLINE( 427)		this->_file = null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuCharacterEditorState_obj,onSaveError,(void))


::hx::ObjectPtr< MenuCharacterEditorState_obj > MenuCharacterEditorState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< MenuCharacterEditorState_obj > __this = new MenuCharacterEditorState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< MenuCharacterEditorState_obj > MenuCharacterEditorState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	MenuCharacterEditorState_obj *__this = (MenuCharacterEditorState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuCharacterEditorState_obj), true, "states.editors.MenuCharacterEditorState"));
	*(void **)__this = MenuCharacterEditorState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

MenuCharacterEditorState_obj::MenuCharacterEditorState_obj()
{
}

void MenuCharacterEditorState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuCharacterEditorState);
	HX_MARK_MEMBER_NAME(grpWeekCharacters,"grpWeekCharacters");
	HX_MARK_MEMBER_NAME(characterFile,"characterFile");
	HX_MARK_MEMBER_NAME(txtOffsets,"txtOffsets");
	HX_MARK_MEMBER_NAME(defaultCharacters,"defaultCharacters");
	HX_MARK_MEMBER_NAME(UI_typebox,"UI_typebox");
	HX_MARK_MEMBER_NAME(UI_mainbox,"UI_mainbox");
	HX_MARK_MEMBER_NAME(blockPressWhileTypingOn,"blockPressWhileTypingOn");
	HX_MARK_MEMBER_NAME(opponentCheckbox,"opponentCheckbox");
	HX_MARK_MEMBER_NAME(boyfriendCheckbox,"boyfriendCheckbox");
	HX_MARK_MEMBER_NAME(girlfriendCheckbox,"girlfriendCheckbox");
	HX_MARK_MEMBER_NAME(curTypeSelected,"curTypeSelected");
	HX_MARK_MEMBER_NAME(imageInputText,"imageInputText");
	HX_MARK_MEMBER_NAME(idleInputText,"idleInputText");
	HX_MARK_MEMBER_NAME(confirmInputText,"confirmInputText");
	HX_MARK_MEMBER_NAME(scaleStepper,"scaleStepper");
	HX_MARK_MEMBER_NAME(flipXCheckbox,"flipXCheckbox");
	HX_MARK_MEMBER_NAME(_file,"_file");
	 ::backend::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuCharacterEditorState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(grpWeekCharacters,"grpWeekCharacters");
	HX_VISIT_MEMBER_NAME(characterFile,"characterFile");
	HX_VISIT_MEMBER_NAME(txtOffsets,"txtOffsets");
	HX_VISIT_MEMBER_NAME(defaultCharacters,"defaultCharacters");
	HX_VISIT_MEMBER_NAME(UI_typebox,"UI_typebox");
	HX_VISIT_MEMBER_NAME(UI_mainbox,"UI_mainbox");
	HX_VISIT_MEMBER_NAME(blockPressWhileTypingOn,"blockPressWhileTypingOn");
	HX_VISIT_MEMBER_NAME(opponentCheckbox,"opponentCheckbox");
	HX_VISIT_MEMBER_NAME(boyfriendCheckbox,"boyfriendCheckbox");
	HX_VISIT_MEMBER_NAME(girlfriendCheckbox,"girlfriendCheckbox");
	HX_VISIT_MEMBER_NAME(curTypeSelected,"curTypeSelected");
	HX_VISIT_MEMBER_NAME(imageInputText,"imageInputText");
	HX_VISIT_MEMBER_NAME(idleInputText,"idleInputText");
	HX_VISIT_MEMBER_NAME(confirmInputText,"confirmInputText");
	HX_VISIT_MEMBER_NAME(scaleStepper,"scaleStepper");
	HX_VISIT_MEMBER_NAME(flipXCheckbox,"flipXCheckbox");
	HX_VISIT_MEMBER_NAME(_file,"_file");
	 ::backend::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MenuCharacterEditorState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_file") ) { return ::hx::Val( _file ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getEvent") ) { return ::hx::Val( getEvent_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addTypeUI") ) { return ::hx::Val( addTypeUI_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"txtOffsets") ) { return ::hx::Val( txtOffsets ); }
		if (HX_FIELD_EQ(inName,"UI_typebox") ) { return ::hx::Val( UI_typebox ); }
		if (HX_FIELD_EQ(inName,"UI_mainbox") ) { return ::hx::Val( UI_mainbox ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onLoadError") ) { return ::hx::Val( onLoadError_dyn() ); }
		if (HX_FIELD_EQ(inName,"onSaveError") ) { return ::hx::Val( onSaveError_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addEditorBox") ) { return ::hx::Val( addEditorBox_dyn() ); }
		if (HX_FIELD_EQ(inName,"scaleStepper") ) { return ::hx::Val( scaleStepper ); }
		if (HX_FIELD_EQ(inName,"updateOffset") ) { return ::hx::Val( updateOffset_dyn() ); }
		if (HX_FIELD_EQ(inName,"onLoadCancel") ) { return ::hx::Val( onLoadCancel_dyn() ); }
		if (HX_FIELD_EQ(inName,"onSaveCancel") ) { return ::hx::Val( onSaveCancel_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"characterFile") ) { return ::hx::Val( characterFile ); }
		if (HX_FIELD_EQ(inName,"idleInputText") ) { return ::hx::Val( idleInputText ); }
		if (HX_FIELD_EQ(inName,"flipXCheckbox") ) { return ::hx::Val( flipXCheckbox ); }
		if (HX_FIELD_EQ(inName,"loadCharacter") ) { return ::hx::Val( loadCharacter_dyn() ); }
		if (HX_FIELD_EQ(inName,"saveCharacter") ) { return ::hx::Val( saveCharacter_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"imageInputText") ) { return ::hx::Val( imageInputText ); }
		if (HX_FIELD_EQ(inName,"addCharacterUI") ) { return ::hx::Val( addCharacterUI_dyn() ); }
		if (HX_FIELD_EQ(inName,"onLoadComplete") ) { return ::hx::Val( onLoadComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"onSaveComplete") ) { return ::hx::Val( onSaveComplete_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"curTypeSelected") ) { return ::hx::Val( curTypeSelected ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opponentCheckbox") ) { return ::hx::Val( opponentCheckbox ); }
		if (HX_FIELD_EQ(inName,"confirmInputText") ) { return ::hx::Val( confirmInputText ); }
		if (HX_FIELD_EQ(inName,"updateCharacters") ) { return ::hx::Val( updateCharacters_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"grpWeekCharacters") ) { return ::hx::Val( grpWeekCharacters ); }
		if (HX_FIELD_EQ(inName,"defaultCharacters") ) { return ::hx::Val( defaultCharacters ); }
		if (HX_FIELD_EQ(inName,"boyfriendCheckbox") ) { return ::hx::Val( boyfriendCheckbox ); }
		if (HX_FIELD_EQ(inName,"updateCharTypeBox") ) { return ::hx::Val( updateCharTypeBox_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"girlfriendCheckbox") ) { return ::hx::Val( girlfriendCheckbox ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"blockPressWhileTypingOn") ) { return ::hx::Val( blockPressWhileTypingOn ); }
		if (HX_FIELD_EQ(inName,"reloadSelectedCharacter") ) { return ::hx::Val( reloadSelectedCharacter_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MenuCharacterEditorState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_file") ) { _file=inValue.Cast<  ::openfl::net::FileReference >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"txtOffsets") ) { txtOffsets=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UI_typebox") ) { UI_typebox=inValue.Cast<  ::flixel::addons::ui::FlxUITabMenu >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UI_mainbox") ) { UI_mainbox=inValue.Cast<  ::flixel::addons::ui::FlxUITabMenu >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scaleStepper") ) { scaleStepper=inValue.Cast<  ::flixel::addons::ui::FlxUINumericStepper >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"characterFile") ) { characterFile=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"idleInputText") ) { idleInputText=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipXCheckbox") ) { flipXCheckbox=inValue.Cast<  ::flixel::addons::ui::FlxUICheckBox >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"imageInputText") ) { imageInputText=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"curTypeSelected") ) { curTypeSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opponentCheckbox") ) { opponentCheckbox=inValue.Cast<  ::flixel::addons::ui::FlxUICheckBox >(); return inValue; }
		if (HX_FIELD_EQ(inName,"confirmInputText") ) { confirmInputText=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"grpWeekCharacters") ) { grpWeekCharacters=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultCharacters") ) { defaultCharacters=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"boyfriendCheckbox") ) { boyfriendCheckbox=inValue.Cast<  ::flixel::addons::ui::FlxUICheckBox >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"girlfriendCheckbox") ) { girlfriendCheckbox=inValue.Cast<  ::flixel::addons::ui::FlxUICheckBox >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"blockPressWhileTypingOn") ) { blockPressWhileTypingOn=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuCharacterEditorState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("grpWeekCharacters",83,fc,76,59));
	outFields->push(HX_("characterFile",c5,5e,a8,3c));
	outFields->push(HX_("txtOffsets",f0,70,79,92));
	outFields->push(HX_("defaultCharacters",cb,10,30,2c));
	outFields->push(HX_("UI_typebox",66,d3,1f,32));
	outFields->push(HX_("UI_mainbox",47,c7,9d,74));
	outFields->push(HX_("blockPressWhileTypingOn",71,5f,34,ba));
	outFields->push(HX_("opponentCheckbox",00,ad,4e,ca));
	outFields->push(HX_("boyfriendCheckbox",cd,31,26,e7));
	outFields->push(HX_("girlfriendCheckbox",1d,6a,cf,a6));
	outFields->push(HX_("curTypeSelected",d5,34,20,07));
	outFields->push(HX_("imageInputText",fc,06,6b,e2));
	outFields->push(HX_("idleInputText",23,40,e8,3b));
	outFields->push(HX_("confirmInputText",b7,2c,22,02));
	outFields->push(HX_("scaleStepper",a7,a3,a9,18));
	outFields->push(HX_("flipXCheckbox",6e,56,e6,8c));
	outFields->push(HX_("_file",5b,ea,cc,f6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MenuCharacterEditorState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(MenuCharacterEditorState_obj,grpWeekCharacters),HX_("grpWeekCharacters",83,fc,76,59)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MenuCharacterEditorState_obj,characterFile),HX_("characterFile",c5,5e,a8,3c)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(MenuCharacterEditorState_obj,txtOffsets),HX_("txtOffsets",f0,70,79,92)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(MenuCharacterEditorState_obj,defaultCharacters),HX_("defaultCharacters",cb,10,30,2c)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUITabMenu */ ,(int)offsetof(MenuCharacterEditorState_obj,UI_typebox),HX_("UI_typebox",66,d3,1f,32)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUITabMenu */ ,(int)offsetof(MenuCharacterEditorState_obj,UI_mainbox),HX_("UI_mainbox",47,c7,9d,74)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(MenuCharacterEditorState_obj,blockPressWhileTypingOn),HX_("blockPressWhileTypingOn",71,5f,34,ba)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUICheckBox */ ,(int)offsetof(MenuCharacterEditorState_obj,opponentCheckbox),HX_("opponentCheckbox",00,ad,4e,ca)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUICheckBox */ ,(int)offsetof(MenuCharacterEditorState_obj,boyfriendCheckbox),HX_("boyfriendCheckbox",cd,31,26,e7)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUICheckBox */ ,(int)offsetof(MenuCharacterEditorState_obj,girlfriendCheckbox),HX_("girlfriendCheckbox",1d,6a,cf,a6)},
	{::hx::fsInt,(int)offsetof(MenuCharacterEditorState_obj,curTypeSelected),HX_("curTypeSelected",d5,34,20,07)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(MenuCharacterEditorState_obj,imageInputText),HX_("imageInputText",fc,06,6b,e2)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(MenuCharacterEditorState_obj,idleInputText),HX_("idleInputText",23,40,e8,3b)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(MenuCharacterEditorState_obj,confirmInputText),HX_("confirmInputText",b7,2c,22,02)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUINumericStepper */ ,(int)offsetof(MenuCharacterEditorState_obj,scaleStepper),HX_("scaleStepper",a7,a3,a9,18)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUICheckBox */ ,(int)offsetof(MenuCharacterEditorState_obj,flipXCheckbox),HX_("flipXCheckbox",6e,56,e6,8c)},
	{::hx::fsObject /*  ::openfl::net::FileReference */ ,(int)offsetof(MenuCharacterEditorState_obj,_file),HX_("_file",5b,ea,cc,f6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MenuCharacterEditorState_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuCharacterEditorState_obj_sMemberFields[] = {
	HX_("grpWeekCharacters",83,fc,76,59),
	HX_("characterFile",c5,5e,a8,3c),
	HX_("txtOffsets",f0,70,79,92),
	HX_("defaultCharacters",cb,10,30,2c),
	HX_("create",fc,66,0f,7c),
	HX_("UI_typebox",66,d3,1f,32),
	HX_("UI_mainbox",47,c7,9d,74),
	HX_("blockPressWhileTypingOn",71,5f,34,ba),
	HX_("addEditorBox",fd,df,01,35),
	HX_("opponentCheckbox",00,ad,4e,ca),
	HX_("boyfriendCheckbox",cd,31,26,e7),
	HX_("girlfriendCheckbox",1d,6a,cf,a6),
	HX_("curTypeSelected",d5,34,20,07),
	HX_("addTypeUI",8f,14,5b,0f),
	HX_("imageInputText",fc,06,6b,e2),
	HX_("idleInputText",23,40,e8,3b),
	HX_("confirmInputText",b7,2c,22,02),
	HX_("scaleStepper",a7,a3,a9,18),
	HX_("flipXCheckbox",6e,56,e6,8c),
	HX_("addCharacterUI",9c,29,96,54),
	HX_("updateCharTypeBox",b2,0f,ad,84),
	HX_("updateCharacters",13,28,ba,9f),
	HX_("reloadSelectedCharacter",35,06,b2,cc),
	HX_("getEvent",a4,d7,9b,d5),
	HX_("update",09,86,05,87),
	HX_("updateOffset",7c,3e,03,60),
	HX_("_file",5b,ea,cc,f6),
	HX_("loadCharacter",a3,ac,37,c4),
	HX_("onLoadComplete",be,4c,20,63),
	HX_("onLoadCancel",3f,be,a2,45),
	HX_("onLoadError",a3,fa,a3,b0),
	HX_("saveCharacter",ac,60,8c,66),
	HX_("onSaveComplete",d5,ac,3f,bc),
	HX_("onSaveCancel",96,1a,31,d9),
	HX_("onSaveError",2c,b6,19,24),
	::String(null()) };

::hx::Class MenuCharacterEditorState_obj::__mClass;

void MenuCharacterEditorState_obj::__register()
{
	MenuCharacterEditorState_obj _hx_dummy;
	MenuCharacterEditorState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.editors.MenuCharacterEditorState",4e,77,ec,74);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuCharacterEditorState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuCharacterEditorState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuCharacterEditorState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuCharacterEditorState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
} // end namespace editors
