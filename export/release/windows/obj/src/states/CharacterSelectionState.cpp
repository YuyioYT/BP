#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_backend_Conductor
#include <backend/Conductor.h>
#endif
#ifndef INCLUDED_backend_Controls
#include <backend/Controls.h>
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
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
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
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
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
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
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
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_objects_Character
#include <objects/Character.h>
#endif
#ifndef INCLUDED_objects_Note
#include <objects/Note.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_states_CharacterSelectionState
#include <states/CharacterSelectionState.h>
#endif
#ifndef INCLUDED_states_LoadingState
#include <states/LoadingState.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_64a1aaa3ba147e38_20_new,"states.CharacterSelectionState","new",0xb9a93654,"states.CharacterSelectionState.new","states/CharacterSelectionState.hx",20,0x0339acdd)
HX_LOCAL_STACK_FRAME(_hx_pos_64a1aaa3ba147e38_61_create,"states.CharacterSelectionState","create",0xe9af3188,"states.CharacterSelectionState.create","states/CharacterSelectionState.hx",61,0x0339acdd)
static const Float _hx_array_data_039abc62_2[] = {
	(Float)1,(Float)1,(Float)1,(Float)1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_64a1aaa3ba147e38_199_spawnArrows,"states.CharacterSelectionState","spawnArrows",0x360d8119,"states.CharacterSelectionState.spawnArrows","states/CharacterSelectionState.hx",199,0x0339acdd)
HX_LOCAL_STACK_FRAME(_hx_pos_64a1aaa3ba147e38_259_spawnSelection,"states.CharacterSelectionState","spawnSelection",0x166c511d,"states.CharacterSelectionState.spawnSelection","states/CharacterSelectionState.hx",259,0x0339acdd)
HX_LOCAL_STACK_FRAME(_hx_pos_64a1aaa3ba147e38_298_checkPreview,"states.CharacterSelectionState","checkPreview",0xc5b1d3ac,"states.CharacterSelectionState.checkPreview","states/CharacterSelectionState.hx",298,0x0339acdd)
HX_LOCAL_STACK_FRAME(_hx_pos_64a1aaa3ba147e38_308_update,"states.CharacterSelectionState","update",0xf4a55095,"states.CharacterSelectionState.update","states/CharacterSelectionState.hx",308,0x0339acdd)
HX_LOCAL_STACK_FRAME(_hx_pos_64a1aaa3ba147e38_462_changeCharacter,"states.CharacterSelectionState","changeCharacter",0x4e3d000d,"states.CharacterSelectionState.changeCharacter","states/CharacterSelectionState.hx",462,0x0339acdd)
static const Float _hx_array_data_039abc62_12[] = {
	(Float)0,(Float)0,(Float)0,(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_64a1aaa3ba147e38_521_changeForm,"states.CharacterSelectionState","changeForm",0xd46f9760,"states.CharacterSelectionState.changeForm","states/CharacterSelectionState.hx",521,0x0339acdd)
HX_LOCAL_STACK_FRAME(_hx_pos_64a1aaa3ba147e38_548_reloadCharacter,"states.CharacterSelectionState","reloadCharacter",0x3c773904,"states.CharacterSelectionState.reloadCharacter","states/CharacterSelectionState.hx",548,0x0339acdd)
HX_LOCAL_STACK_FRAME(_hx_pos_64a1aaa3ba147e38_581_acceptCharacter,"states.CharacterSelectionState","acceptCharacter",0x5ed80b75,"states.CharacterSelectionState.acceptCharacter","states/CharacterSelectionState.hx",581,0x0339acdd)
HX_LOCAL_STACK_FRAME(_hx_pos_64a1aaa3ba147e38_596_acceptCharacter,"states.CharacterSelectionState","acceptCharacter",0x5ed80b75,"states.CharacterSelectionState.acceptCharacter","states/CharacterSelectionState.hx",596,0x0339acdd)
HX_LOCAL_STACK_FRAME(_hx_pos_64a1aaa3ba147e38_22_boot,"states.CharacterSelectionState","boot",0xb27f53be,"states.CharacterSelectionState.boot","states/CharacterSelectionState.hx",22,0x0339acdd)
HX_LOCAL_STACK_FRAME(_hx_pos_64a1aaa3ba147e38_33_boot,"states.CharacterSelectionState","boot",0xb27f53be,"states.CharacterSelectionState.boot","states/CharacterSelectionState.hx",33,0x0339acdd)
HX_LOCAL_STACK_FRAME(_hx_pos_64a1aaa3ba147e38_49_boot,"states.CharacterSelectionState","boot",0xb27f53be,"states.CharacterSelectionState.boot","states/CharacterSelectionState.hx",49,0x0339acdd)
HX_LOCAL_STACK_FRAME(_hx_pos_64a1aaa3ba147e38_55_boot,"states.CharacterSelectionState","boot",0xb27f53be,"states.CharacterSelectionState.boot","states/CharacterSelectionState.hx",55,0x0339acdd)
static const Float _hx_array_data_039abc62_22[] = {
	(Float)1,(Float)1,(Float)1,(Float)1,
};
namespace states{

void CharacterSelectionState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_GC_STACKFRAME(&_hx_pos_64a1aaa3ba147e38_20_new)
HXLINE( 195)		this->selectionStart = false;
HXLINE(  53)		this->scoreMultipliersText =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  51)		this->arrowStrums =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  47)		this->unlocked = true;
HXLINE(  46)		this->previewMode = false;
HXLINE(  41)		this->entering = false;
HXLINE(  37)		this->curSelectedForm = 0;
HXLINE(  36)		this->curSelected = 0;
HXLINE(  35)		this->nightColor = -7895161;
HXLINE(  20)		super::__construct(TransIn,TransOut);
            	}

Dynamic CharacterSelectionState_obj::__CreateEmpty() { return new CharacterSelectionState_obj; }

void *CharacterSelectionState_obj::_hx_vtable = 0;

Dynamic CharacterSelectionState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CharacterSelectionState_obj > _hx_result = new CharacterSelectionState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CharacterSelectionState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x53aaab8a) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x0f6a11e0) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0f6a11e0;
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

void CharacterSelectionState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_64a1aaa3ba147e38_61_create)
HXLINE(  62)		this->camGame =  ::flixel::FlxCamera_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null());
HXLINE(  63)		this->camHUD =  ::flixel::FlxCamera_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null());
HXLINE(  64)		{
HXLINE(  64)			 ::flixel::FlxCamera _hx_tmp = this->camHUD;
HXDLIN(  64)			_hx_tmp->bgColor = (_hx_tmp->bgColor & 16777215);
HXDLIN(  64)			 ::flixel::FlxCamera _hx_tmp1 = this->camHUD;
HXDLIN(  64)			_hx_tmp1->bgColor = (_hx_tmp1->bgColor | 0);
            		}
HXLINE(  65)		::flixel::FlxG_obj::cameras->reset(this->camGame);
HXLINE(  66)		::flixel::FlxG_obj::cameras->setDefaultDrawTarget(this->camGame,true);
HXLINE(  67)		::flixel::FlxG_obj::cameras->add(this->camHUD,null()).StaticCast<  ::flixel::FlxCamera >();
HXLINE(  68)		::states::CharacterSelectionState_obj::scoreMultipliers = ::Array_obj< Float >::fromData( _hx_array_data_039abc62_2,4);
HXLINE(  69)		::states::CharacterSelectionState_obj::characterFile = HX_("bf",c4,55,00,00);
HXLINE(  70)		::states::CharacterSelectionState_obj::notBF = false;
HXLINE(  71)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp2 = ::flixel::FlxG_obj::sound;
HXDLIN(  71)		::String library = null();
HXDLIN(  71)		 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("good-ending",37,c0,f6,51),library);
HXDLIN(  71)		_hx_tmp2->playMusic(file,null(),null(),null());
HXLINE(  72)		::backend::Conductor_obj::set_bpm(( (Float)(110) ));
HXLINE(  74)		if ((::states::PlayState_obj::isStoryMode = false)) {
HXLINE(  76)			 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-600,-200,null());
HXDLIN(  76)			 ::flixel::FlxSprite bg1 = bg->loadGraphic(::backend::Paths_obj::image(HX_("dave/sky_night",97,f9,2a,d7),null(),null()),null(),null(),null(),null(),null());
HXLINE(  77)			bg1->set_antialiasing(true);
HXLINE(  78)			{
HXLINE(  78)				 ::flixel::math::FlxBasePoint this1 = bg1->scrollFactor;
HXDLIN(  78)				this1->set_x(((Float)0.9));
HXDLIN(  78)				this1->set_y(((Float)0.9));
            			}
HXLINE(  79)			bg1->set_active(false);
HXLINE(  80)			this->add(bg1);
HXLINE(  82)			 ::flixel::FlxSprite stageHills =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-225,-125,null());
HXDLIN(  82)			 ::flixel::FlxSprite stageHills1 = stageHills->loadGraphic(::backend::Paths_obj::image(HX_("dave/hills_night",48,32,ff,32),null(),null()),null(),null(),null(),null(),null());
HXLINE(  83)			stageHills1->setGraphicSize(::Std_obj::_hx_int((stageHills1->get_width() * ((Float)1.25))),null());
HXLINE(  84)			stageHills1->updateHitbox();
HXLINE(  85)			stageHills1->set_antialiasing(true);
HXLINE(  86)			{
HXLINE(  86)				 ::flixel::math::FlxBasePoint this2 = stageHills1->scrollFactor;
HXDLIN(  86)				this2->set_x(( (Float)(1) ));
HXDLIN(  86)				this2->set_y(( (Float)(1) ));
            			}
HXLINE(  87)			stageHills1->set_active(false);
HXLINE(  88)			this->add(stageHills1);
HXLINE(  90)			 ::flixel::FlxSprite gate =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-225,-125,null());
HXDLIN(  90)			 ::flixel::FlxSprite gate1 = gate->loadGraphic(::backend::Paths_obj::image(HX_("dave/gate_night",e7,5d,00,ec),null(),null()),null(),null(),null(),null(),null());
HXLINE(  91)			gate1->setGraphicSize(::Std_obj::_hx_int((gate1->get_width() * ((Float)1.2))),null());
HXLINE(  92)			gate1->updateHitbox();
HXLINE(  93)			gate1->set_antialiasing(true);
HXLINE(  94)			{
HXLINE(  94)				 ::flixel::math::FlxBasePoint this3 = gate1->scrollFactor;
HXDLIN(  94)				this3->set_x(((Float)0.925));
HXDLIN(  94)				this3->set_y(((Float)0.925));
            			}
HXLINE(  95)			gate1->set_active(false);
HXLINE(  96)			this->add(gate1);
HXLINE(  98)			 ::flixel::FlxSprite stageFront =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-225,-125,null());
HXDLIN(  98)			 ::flixel::FlxSprite stageFront1 = stageFront->loadGraphic(::backend::Paths_obj::image(HX_("dave/grass_night",ac,99,c0,f4),null(),null()),null(),null(),null(),null(),null());
HXLINE(  99)			stageFront1->setGraphicSize(::Std_obj::_hx_int((stageFront1->get_width() * ((Float)1.2))),null());
HXLINE( 100)			stageFront1->updateHitbox();
HXLINE( 101)			stageFront1->set_antialiasing(true);
HXLINE( 102)			{
HXLINE( 102)				 ::flixel::math::FlxBasePoint this4 = stageFront1->scrollFactor;
HXDLIN( 102)				this4->set_x(((Float)0.9));
HXDLIN( 102)				this4->set_y(((Float)0.9));
            			}
HXLINE( 103)			stageFront1->set_active(false);
HXLINE( 104)			this->add(stageFront1);
            		}
            		else {
HXLINE( 108)			 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-600,-400,null());
HXDLIN( 108)			 ::flixel::FlxSprite bg1 = bg->loadGraphic(::backend::Paths_obj::image(HX_("dave/sky_night",97,f9,2a,d7),null(),null()),null(),null(),null(),null(),null());
HXLINE( 109)			bg1->set_antialiasing(true);
HXLINE( 110)			{
HXLINE( 110)				 ::flixel::math::FlxBasePoint this1 = bg1->scrollFactor;
HXDLIN( 110)				this1->set_x(((Float)0.2));
HXDLIN( 110)				this1->set_y(((Float)0.2));
            			}
HXLINE( 111)			bg1->set_active(true);
HXLINE( 113)			 ::flixel::FlxSprite hills =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-300,110,null());
HXDLIN( 113)			 ::flixel::FlxSprite hills1 = hills->loadGraphic(::backend::Paths_obj::image(HX_("bambi/orangey hills",c3,a1,a0,c6),null(),null()),null(),null(),null(),null(),null());
HXLINE( 114)			hills1->set_antialiasing(true);
HXLINE( 115)			{
HXLINE( 115)				 ::flixel::math::FlxBasePoint this2 = hills1->scrollFactor;
HXDLIN( 115)				this2->set_x(((Float)0.5));
HXDLIN( 115)				this2->set_y(((Float)0.5));
            			}
HXLINE( 116)			hills1->set_active(true);
HXLINE( 118)			 ::flixel::FlxSprite farm =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,150,200,null());
HXDLIN( 118)			 ::flixel::FlxSprite farm1 = farm->loadGraphic(::backend::Paths_obj::image(HX_("bambi/funfarmhouse",85,98,f9,dc),null(),null()),null(),null(),null(),null(),null());
HXLINE( 119)			farm1->set_antialiasing(true);
HXLINE( 120)			{
HXLINE( 120)				 ::flixel::math::FlxBasePoint this3 = farm1->scrollFactor;
HXDLIN( 120)				this3->set_x(((Float)0.65));
HXDLIN( 120)				this3->set_y(((Float)0.65));
            			}
HXLINE( 121)			farm1->set_active(true);
HXLINE( 123)			 ::flixel::FlxSprite foreground =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-400,600,null());
HXDLIN( 123)			 ::flixel::FlxSprite foreground1 = foreground->loadGraphic(::backend::Paths_obj::image(HX_("bambi/grass lands",44,25,3c,41),null(),null()),null(),null(),null(),null(),null());
HXLINE( 124)			foreground1->set_antialiasing(true);
HXLINE( 125)			{
HXLINE( 125)				 ::flixel::math::FlxBasePoint this4 = foreground1->scrollFactor;
HXDLIN( 125)				this4->set_x(( (Float)(1) ));
HXDLIN( 125)				this4->set_y(( (Float)(1) ));
            			}
HXLINE( 126)			foreground1->set_active(true);
HXLINE( 128)			 ::flixel::FlxSprite cornSet =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-350,325,null());
HXDLIN( 128)			 ::flixel::FlxSprite cornSet1 = cornSet->loadGraphic(::backend::Paths_obj::image(HX_("bambi/Cornys",5c,38,e1,b6),null(),null()),null(),null(),null(),null(),null());
HXLINE( 129)			cornSet1->set_antialiasing(true);
HXLINE( 130)			{
HXLINE( 130)				 ::flixel::math::FlxBasePoint this5 = cornSet1->scrollFactor;
HXDLIN( 130)				this5->set_x(( (Float)(1) ));
HXDLIN( 130)				this5->set_y(( (Float)(1) ));
            			}
HXLINE( 131)			cornSet1->set_active(true);
HXLINE( 133)			 ::flixel::FlxSprite cornSet2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,1050,325,null());
HXDLIN( 133)			 ::flixel::FlxSprite cornSet21 = cornSet2->loadGraphic(::backend::Paths_obj::image(HX_("bambi/Cornys",5c,38,e1,b6),null(),null()),null(),null(),null(),null(),null());
HXLINE( 134)			cornSet21->set_antialiasing(true);
HXLINE( 135)			{
HXLINE( 135)				 ::flixel::math::FlxBasePoint this6 = cornSet21->scrollFactor;
HXDLIN( 135)				this6->set_x(( (Float)(1) ));
HXDLIN( 135)				this6->set_y(( (Float)(1) ));
            			}
HXLINE( 136)			cornSet21->set_active(true);
HXLINE( 138)			 ::flixel::FlxSprite fence =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-350,450,null());
HXDLIN( 138)			 ::flixel::FlxSprite fence1 = fence->loadGraphic(::backend::Paths_obj::image(HX_("bambi/crazy fences",4b,a5,a4,cf),null(),null()),null(),null(),null(),null(),null());
HXLINE( 139)			fence1->set_antialiasing(true);
HXLINE( 140)			{
HXLINE( 140)				 ::flixel::math::FlxBasePoint this7 = fence1->scrollFactor;
HXDLIN( 140)				this7->set_x(((Float)0.98));
HXDLIN( 140)				this7->set_y(((Float)0.98));
            			}
HXLINE( 141)			fence1->set_active(true);
HXLINE( 143)			 ::flixel::FlxSprite sign =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,500,null());
HXDLIN( 143)			 ::flixel::FlxSprite sign1 = sign->loadGraphic(::backend::Paths_obj::image(HX_("bambi/sign",b7,70,4e,27),null(),null()),null(),null(),null(),null(),null());
HXLINE( 144)			sign1->set_antialiasing(true);
HXLINE( 145)			{
HXLINE( 145)				 ::flixel::math::FlxBasePoint this8 = sign1->scrollFactor;
HXDLIN( 145)				this8->set_x(( (Float)(1) ));
HXDLIN( 145)				this8->set_y(( (Float)(1) ));
            			}
HXLINE( 146)			sign1->set_active(true);
HXLINE( 148)			hills1->set_color(-7895161);
HXLINE( 149)			farm1->set_color(-7895161);
HXLINE( 150)			foreground1->set_color(-7895161);
HXLINE( 151)			cornSet1->set_color(-7895161);
HXLINE( 152)			cornSet21->set_color(-7895161);
HXLINE( 153)			fence1->set_color(-7895161);
HXLINE( 154)			sign1->set_color(-7895161);
HXLINE( 156)			this->add(bg1);
HXLINE( 157)			this->add(hills1);
HXLINE( 158)			this->add(farm1);
HXLINE( 159)			this->add(foreground1);
HXLINE( 160)			this->add(cornSet1);
HXLINE( 161)			this->add(cornSet21);
HXLINE( 162)			this->add(fence1);
HXLINE( 163)			this->add(sign1);
            		}
HXLINE( 166)		::flixel::FlxG_obj::camera->set_zoom(((Float)0.75));
HXLINE( 167)		this->camHUD->set_zoom(((Float)0.75));
HXLINE( 169)		if (::hx::IsNotEq( ::states::PlayState_obj::SONG->__Field(HX_("player1",b0,09,15,8a),::hx::paccDynamic),HX_("bf",c4,55,00,00) )) {
HXLINE( 171)			this->otherText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,10,150,0,HX_("This song does not use BF as the player,\nor a different version of BF is used.\nDo you want to continue without changing character?\n",dc,73,96,0c),20,null());
HXLINE( 172)			 ::flixel::text::FlxText _hx_tmp = this->otherText;
HXDLIN( 172)			::String file = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("comic-sans.ttf",bd,08,d7,96)));
HXDLIN( 172)			::String _hx_tmp1;
HXDLIN( 172)			if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 172)				_hx_tmp1 = file;
            			}
            			else {
HXLINE( 172)				_hx_tmp1 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("comic-sans.ttf",bd,08,d7,96));
            			}
HXDLIN( 172)			_hx_tmp->setFormat(_hx_tmp1,20,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 173)			this->otherText->set_size(55);
HXLINE( 174)			{
HXLINE( 174)				 ::flixel::text::FlxText _this = this->otherText;
HXDLIN( 174)				int axes = 1;
HXDLIN( 174)				bool _hx_tmp2;
HXDLIN( 174)				if ((axes != 1)) {
HXLINE( 174)					_hx_tmp2 = (axes == 17);
            				}
            				else {
HXLINE( 174)					_hx_tmp2 = true;
            				}
HXDLIN( 174)				if (_hx_tmp2) {
HXLINE( 174)					int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 174)					_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            				}
HXDLIN( 174)				bool _hx_tmp3;
HXDLIN( 174)				if ((axes != 16)) {
HXLINE( 174)					_hx_tmp3 = (axes == 17);
            				}
            				else {
HXLINE( 174)					_hx_tmp3 = true;
            				}
HXDLIN( 174)				if (_hx_tmp3) {
HXLINE( 174)					int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 174)					_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            				}
            			}
HXLINE( 175)			this->add(this->otherText);
HXLINE( 176)			this->yesText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(4) )),400,0,HX_("Yes",07,e1,43,00),20,null());
HXLINE( 177)			 ::flixel::text::FlxText _hx_tmp4 = this->yesText;
HXDLIN( 177)			::String file1 = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("comic-sans.ttf",bd,08,d7,96)));
HXDLIN( 177)			::String _hx_tmp5;
HXDLIN( 177)			if (::sys::FileSystem_obj::exists(file1)) {
HXLINE( 177)				_hx_tmp5 = file1;
            			}
            			else {
HXLINE( 177)				_hx_tmp5 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("comic-sans.ttf",bd,08,d7,96));
            			}
HXDLIN( 177)			_hx_tmp4->setFormat(_hx_tmp5,20,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 178)			this->yesText->set_size(55);
HXLINE( 179)			this->add(this->yesText);
HXLINE( 180)			this->noText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) / ((Float)1.5)),400,0,HX_("No",61,44,00,00),20,null());
HXLINE( 181)			 ::flixel::text::FlxText _hx_tmp6 = this->noText;
HXDLIN( 181)			::String file2 = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("comic-sans.ttf",bd,08,d7,96)));
HXDLIN( 181)			::String _hx_tmp7;
HXDLIN( 181)			if (::sys::FileSystem_obj::exists(file2)) {
HXLINE( 181)				_hx_tmp7 = file2;
            			}
            			else {
HXLINE( 181)				_hx_tmp7 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("comic-sans.ttf",bd,08,d7,96));
            			}
HXDLIN( 181)			_hx_tmp6->setFormat(_hx_tmp7,20,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 182)			this->noText->set_size(55);
HXLINE( 183)			this->add(this->noText);
HXLINE( 184)			this->otherText->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,this->camHUD));
HXLINE( 185)			this->yesText->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,this->camHUD));
HXLINE( 186)			this->noText->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,this->camHUD));
            		}
            		else {
HXLINE( 189)			this->spawnSelection();
            		}
HXLINE( 192)		this->super::create();
            	}


void CharacterSelectionState_obj::spawnArrows(){
            	HX_GC_STACKFRAME(&_hx_pos_64a1aaa3ba147e38_199_spawnArrows)
HXDLIN( 199)		int _g = 0;
HXDLIN( 199)		while((_g < 4)){
HXDLIN( 199)			_g = (_g + 1);
HXDLIN( 199)			int i = (_g - 1);
HXLINE( 202)			 ::flixel::FlxSprite babyArrow =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXLINE( 204)			::String library = null();
HXDLIN( 204)			 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(HX_("NOTE_assets",70,3c,09,f7),null(),true);
HXDLIN( 204)			bool xmlExists = false;
HXDLIN( 204)			::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 204)			if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 204)				xmlExists = true;
            			}
HXDLIN( 204)			 ::Dynamic _hx_tmp;
HXDLIN( 204)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 204)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE( 204)				_hx_tmp = ::backend::Paths_obj::image(HX_("NOTE_assets",70,3c,09,f7),library,true);
            			}
HXDLIN( 204)			::String _hx_tmp1;
HXDLIN( 204)			if (xmlExists) {
HXLINE( 204)				_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            			}
            			else {
HXLINE( 204)				_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            			}
HXDLIN( 204)			babyArrow->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 205)			babyArrow->animation->addByPrefix(HX_("green",c3,0e,ed,99),HX_("arrowUP",64,88,b8,43),null(),null(),null(),null());
HXLINE( 206)			babyArrow->animation->addByPrefix(HX_("blue",9a,42,19,41),HX_("arrowDOWN",ab,52,f9,fd),null(),null(),null(),null());
HXLINE( 207)			babyArrow->animation->addByPrefix(HX_("purple",3c,f6,89,71),HX_("arrowLEFT",50,62,3b,03),null(),null(),null(),null());
HXLINE( 208)			babyArrow->animation->addByPrefix(HX_("red",51,d9,56,00),HX_("arrowRIGHT",53,b1,c7,47),null(),null(),null(),null());
HXLINE( 210)			babyArrow->setGraphicSize(::Std_obj::_hx_int((babyArrow->get_width() * ((Float)0.7))),null());
HXLINE( 212)			Float _hx_switch_0 = ::Math_obj::abs(( (Float)(i) ));
            			if (  (_hx_switch_0==( (Float)(0) )) ){
HXLINE( 215)				babyArrow->set_x((babyArrow->x + (::objects::Note_obj::swagWidth * ( (Float)(0) ))));
HXLINE( 216)				babyArrow->animation->addByPrefix(HX_("static",ae,dc,fb,05),HX_("arrowLEFT",50,62,3b,03),null(),null(),null(),null());
HXLINE( 217)				babyArrow->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("left press",aa,26,70,8e),24,false,null(),null());
HXLINE( 218)				babyArrow->animation->addByPrefix(HX_("confirm",00,9d,39,10),HX_("left confirm",e7,c7,19,fe),24,false,null(),null());
HXLINE( 214)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==( (Float)(1) )) ){
HXLINE( 220)				babyArrow->set_x((babyArrow->x + ::objects::Note_obj::swagWidth));
HXLINE( 221)				babyArrow->animation->addByPrefix(HX_("static",ae,dc,fb,05),HX_("arrowDOWN",ab,52,f9,fd),null(),null(),null(),null());
HXLINE( 222)				babyArrow->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("down press",45,4d,63,9c),24,false,null(),null());
HXLINE( 223)				babyArrow->animation->addByPrefix(HX_("confirm",00,9d,39,10),HX_("down confirm",42,0b,18,cc),24,false,null(),null());
HXLINE( 219)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==( (Float)(2) )) ){
HXLINE( 225)				babyArrow->set_x((babyArrow->x + (::objects::Note_obj::swagWidth * ( (Float)(2) ))));
HXLINE( 226)				babyArrow->animation->addByPrefix(HX_("static",ae,dc,fb,05),HX_("arrowUP",64,88,b8,43),null(),null(),null(),null());
HXLINE( 227)				babyArrow->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("up press",fe,fb,65,e9),24,false,null(),null());
HXLINE( 228)				babyArrow->animation->addByPrefix(HX_("confirm",00,9d,39,10),HX_("up confirm",3b,9a,2e,62),24,false,null(),null());
HXLINE( 224)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==( (Float)(3) )) ){
HXLINE( 230)				babyArrow->set_x((babyArrow->x + (::objects::Note_obj::swagWidth * ( (Float)(3) ))));
HXLINE( 231)				babyArrow->animation->addByPrefix(HX_("static",ae,dc,fb,05),HX_("arrowRIGHT",53,b1,c7,47),null(),null(),null(),null());
HXLINE( 232)				babyArrow->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("right press",3f,38,e4,c8),24,false,null(),null());
HXLINE( 233)				babyArrow->animation->addByPrefix(HX_("confirm",00,9d,39,10),HX_("right confirm",bc,28,e5,ca),24,false,null(),null());
HXLINE( 229)				goto _hx_goto_4;
            			}
            			_hx_goto_4:;
HXLINE( 235)			babyArrow->updateHitbox();
HXLINE( 236)			{
HXLINE( 236)				 ::flixel::math::FlxBasePoint this1 = babyArrow->scrollFactor;
HXDLIN( 236)				this1->set_x(( (Float)(0) ));
HXDLIN( 236)				this1->set_y(( (Float)(0) ));
            			}
HXLINE( 237)			babyArrow->ID = i;
HXLINE( 239)			babyArrow->animation->play(HX_("static",ae,dc,fb,05),null(),null(),null());
HXLINE( 240)			babyArrow->set_x((babyArrow->x + 50));
HXLINE( 241)			babyArrow->set_x((babyArrow->x + (( (Float)(::flixel::FlxG_obj::width) ) / ((Float)3.5))));
HXLINE( 242)			babyArrow->set_x((babyArrow->x - ( (Float)(10) )));
HXLINE( 243)			babyArrow->set_y(babyArrow->y);
HXLINE( 244)			this->arrowStrums->add(babyArrow).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 247)			Float scoreMulti = (( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(4) ));
HXLINE( 245)			 ::flixel::text::FlxText scoreMulti1 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,scoreMulti,350,0,(HX_("x",78,00,00,00) + ::flixel::util::FlxStringUtil_obj::formatMoney(( (Float)(::states::CharacterSelectionState_obj::characterData->__get(this->curSelected)->__GetItem(2)->__GetItem(i)) ),null(),null())),20,null());
HXLINE( 248)			::String file = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("comic-sans.ttf",bd,08,d7,96)));
HXDLIN( 248)			::String _hx_tmp2;
HXDLIN( 248)			if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 248)				_hx_tmp2 = file;
            			}
            			else {
HXLINE( 248)				_hx_tmp2 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("comic-sans.ttf",bd,08,d7,96));
            			}
HXDLIN( 248)			scoreMulti1->setFormat(_hx_tmp2,20,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 249)			scoreMulti1->set_size(20);
HXLINE( 250)			scoreMulti1->set_x(babyArrow->x);
HXLINE( 251)			scoreMulti1->set_y(babyArrow->y);
HXLINE( 252)			scoreMulti1->set_x((scoreMulti1->x + 20));
HXLINE( 253)			scoreMulti1->set_y((scoreMulti1->y + 20));
HXLINE( 254)			this->scoreMultipliersText->add(scoreMulti1).StaticCast<  ::flixel::text::FlxText >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CharacterSelectionState_obj,spawnArrows,(void))

void CharacterSelectionState_obj::spawnSelection(){
            	HX_GC_STACKFRAME(&_hx_pos_64a1aaa3ba147e38_259_spawnSelection)
HXLINE( 260)		this->selectionStart = true;
HXLINE( 261)		 ::flixel::FlxSprite tutorialThing =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-125,-100,null());
HXDLIN( 261)		 ::flixel::FlxSprite tutorialThing1 = tutorialThing->loadGraphic(::backend::Paths_obj::image(HX_("charSelectGuide",ea,5a,70,42),null(),null()),null(),null(),null(),null(),null());
HXLINE( 262)		tutorialThing1->setGraphicSize(::Std_obj::_hx_int((tutorialThing1->get_width() * ((Float)1.25))),null());
HXLINE( 263)		tutorialThing1->set_antialiasing(true);
HXLINE( 264)		this->add(tutorialThing1);
HXLINE( 266)		this->curText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,-100,0,( (::String)(::states::CharacterSelectionState_obj::characterData->__get(this->curSelected)->__GetItem(1)->__GetItem(0)->__GetItem(0)) ),20,null());
HXLINE( 267)		 ::flixel::text::FlxText _hx_tmp = this->curText;
HXDLIN( 267)		::String file = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("comic-sans.ttf",bd,08,d7,96)));
HXDLIN( 267)		::String _hx_tmp1;
HXDLIN( 267)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 267)			_hx_tmp1 = file;
            		}
            		else {
HXLINE( 267)			_hx_tmp1 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("comic-sans.ttf",bd,08,d7,96));
            		}
HXDLIN( 267)		_hx_tmp->setFormat(_hx_tmp1,20,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 268)		this->curText->set_size(50);
HXLINE( 270)		this->controlsText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,-125,125,0,HX_("Press P to enter preview mode.",53,55,74,5c),20,null());
HXLINE( 271)		 ::flixel::text::FlxText _hx_tmp2 = this->controlsText;
HXDLIN( 271)		::String file1 = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("comic-sans.ttf",bd,08,d7,96)));
HXDLIN( 271)		::String _hx_tmp3;
HXDLIN( 271)		if (::sys::FileSystem_obj::exists(file1)) {
HXLINE( 271)			_hx_tmp3 = file1;
            		}
            		else {
HXLINE( 271)			_hx_tmp3 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("comic-sans.ttf",bd,08,d7,96));
            		}
HXDLIN( 271)		_hx_tmp2->setFormat(_hx_tmp3,20,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 272)		this->controlsText->set_size(20);
HXLINE( 274)		this->spawnArrows();
HXLINE( 275)		this->add(this->arrowStrums);
HXLINE( 276)		this->add(this->scoreMultipliersText);
HXLINE( 278)		this->characterSprite =  ::objects::Character_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_("bf",c4,55,00,00),null());
HXLINE( 279)		this->add(this->characterSprite);
HXLINE( 280)		this->characterSprite->dance();
HXLINE( 281)		{
HXLINE( 281)			 ::objects::Character _this = this->characterSprite;
HXDLIN( 281)			int axes = 17;
HXDLIN( 281)			bool _hx_tmp4;
HXDLIN( 281)			if ((axes != 1)) {
HXLINE( 281)				_hx_tmp4 = (axes == 17);
            			}
            			else {
HXLINE( 281)				_hx_tmp4 = true;
            			}
HXDLIN( 281)			if (_hx_tmp4) {
HXLINE( 281)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 281)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 281)			bool _hx_tmp5;
HXDLIN( 281)			if ((axes != 16)) {
HXLINE( 281)				_hx_tmp5 = (axes == 17);
            			}
            			else {
HXLINE( 281)				_hx_tmp5 = true;
            			}
HXDLIN( 281)			if (_hx_tmp5) {
HXLINE( 281)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 281)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 282)		 ::objects::Character fh = this->characterSprite;
HXDLIN( 282)		fh->set_y((fh->y + 250));
HXLINE( 284)		this->add(this->curText);
HXLINE( 285)		this->add(this->controlsText);
HXLINE( 286)		this->curText->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,this->camHUD));
HXLINE( 287)		this->controlsText->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,this->camHUD));
HXLINE( 288)		tutorialThing1->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,this->camHUD));
HXLINE( 289)		this->arrowStrums->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,this->camHUD));
HXLINE( 290)		this->scoreMultipliersText->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,this->camHUD));
HXLINE( 292)		{
HXLINE( 292)			 ::flixel::text::FlxText _this1 = this->curText;
HXDLIN( 292)			int axes1 = 1;
HXDLIN( 292)			bool _hx_tmp6;
HXDLIN( 292)			if ((axes1 != 1)) {
HXLINE( 292)				_hx_tmp6 = (axes1 == 17);
            			}
            			else {
HXLINE( 292)				_hx_tmp6 = true;
            			}
HXDLIN( 292)			if (_hx_tmp6) {
HXLINE( 292)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 292)				_this1->set_x(((( (Float)(_hx_tmp) ) - _this1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 292)			bool _hx_tmp7;
HXDLIN( 292)			if ((axes1 != 16)) {
HXLINE( 292)				_hx_tmp7 = (axes1 == 17);
            			}
            			else {
HXLINE( 292)				_hx_tmp7 = true;
            			}
HXDLIN( 292)			if (_hx_tmp7) {
HXLINE( 292)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 292)				_this1->set_y(((( (Float)(_hx_tmp) ) - _this1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 293)		this->changeCharacter(0,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(CharacterSelectionState_obj,spawnSelection,(void))

void CharacterSelectionState_obj::checkPreview(){
            	HX_STACKFRAME(&_hx_pos_64a1aaa3ba147e38_298_checkPreview)
HXDLIN( 298)		if (this->previewMode) {
HXLINE( 300)			this->controlsText->set_text(HX_("PREVIEW MODE\nPress I to play idle animation.\nPress your controls to play an animation.\n",0c,1f,64,35));
            		}
            		else {
HXLINE( 303)			this->controlsText->set_text(HX_("Press P to enter preview mode.",53,55,74,5c));
HXLINE( 304)			this->characterSprite->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CharacterSelectionState_obj,checkPreview,(void))

void CharacterSelectionState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_64a1aaa3ba147e38_308_update)
HXLINE( 309)		bool _hx_tmp;
HXDLIN( 309)		bool _hx_tmp1;
HXDLIN( 309)		bool _hx_tmp2;
HXDLIN( 309)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 309)		if (_this->keyManager->checkStatusUnsafe(80,_this->status)) {
HXLINE( 309)			_hx_tmp2 = this->selectionStart;
            		}
            		else {
HXLINE( 309)			_hx_tmp2 = false;
            		}
HXDLIN( 309)		if (_hx_tmp2) {
HXLINE( 309)			_hx_tmp1 = this->unlocked;
            		}
            		else {
HXLINE( 309)			_hx_tmp1 = false;
            		}
HXDLIN( 309)		if (_hx_tmp1) {
HXLINE( 309)			_hx_tmp = !(this->entering);
            		}
            		else {
HXLINE( 309)			_hx_tmp = false;
            		}
HXDLIN( 309)		if (_hx_tmp) {
HXLINE( 311)			this->previewMode = !(this->previewMode);
HXLINE( 312)			this->checkPreview();
            		}
HXLINE( 314)		bool _hx_tmp3;
HXDLIN( 314)		if (this->selectionStart) {
HXLINE( 314)			_hx_tmp3 = !(this->previewMode);
            		}
            		else {
HXLINE( 314)			_hx_tmp3 = false;
            		}
HXDLIN( 314)		if (_hx_tmp3) {
HXLINE( 316)			if (this->get_controls()->get_UI_RIGHT_P()) {
HXLINE( 318)				this->changeCharacter(1,null());
            			}
HXLINE( 320)			if (this->get_controls()->get_UI_LEFT_P()) {
HXLINE( 322)				this->changeCharacter(-1,null());
            			}
HXLINE( 324)			bool _hx_tmp;
HXDLIN( 324)			if (this->get_controls()->get_UI_DOWN_P()) {
HXLINE( 324)				_hx_tmp = this->unlocked;
            			}
            			else {
HXLINE( 324)				_hx_tmp = false;
            			}
HXDLIN( 324)			if (_hx_tmp) {
HXLINE( 326)				this->changeForm(1);
            			}
HXLINE( 328)			bool _hx_tmp1;
HXDLIN( 328)			if (this->get_controls()->get_UI_UP_P()) {
HXLINE( 328)				_hx_tmp1 = this->unlocked;
            			}
            			else {
HXLINE( 328)				_hx_tmp1 = false;
            			}
HXDLIN( 328)			if (_hx_tmp1) {
HXLINE( 330)				this->changeForm(-1);
            			}
HXLINE( 332)			bool _hx_tmp2;
HXDLIN( 332)			if (this->get_controls()->get_ACCEPT()) {
HXLINE( 332)				_hx_tmp2 = this->unlocked;
            			}
            			else {
HXLINE( 332)				_hx_tmp2 = false;
            			}
HXDLIN( 332)			if (_hx_tmp2) {
HXLINE( 334)				this->acceptCharacter();
            			}
            		}
            		else {
HXLINE( 337)			if (!(this->previewMode)) {
HXLINE( 339)				if (this->get_controls()->get_UI_RIGHT_P()) {
HXLINE( 341)					 ::states::CharacterSelectionState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 341)					_hx_tmp->curSelected = (_hx_tmp->curSelected + 1);
HXLINE( 342)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 342)					_hx_tmp1->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            				}
HXLINE( 344)				if (this->get_controls()->get_UI_LEFT_P()) {
HXLINE( 346)					this->curSelected = -1;
HXLINE( 347)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 347)					_hx_tmp->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            				}
HXLINE( 349)				if ((this->curSelected < 0)) {
HXLINE( 351)					this->curSelected = 0;
            				}
HXLINE( 353)				if ((this->curSelected >= 2)) {
HXLINE( 355)					this->curSelected = 0;
            				}
HXLINE( 357)				switch((int)(this->curSelected)){
            					case (int)0: {
HXLINE( 360)						this->yesText->set_alpha(( (Float)(1) ));
HXLINE( 361)						this->noText->set_alpha(((Float)0.5));
            					}
            					break;
            					case (int)1: {
HXLINE( 363)						this->noText->set_alpha(( (Float)(1) ));
HXLINE( 364)						this->yesText->set_alpha(((Float)0.5));
            					}
            					break;
            				}
HXLINE( 366)				if (this->get_controls()->get_ACCEPT()) {
HXLINE( 368)					switch((int)(this->curSelected)){
            						case (int)0: {
HXLINE( 371)							{
HXLINE( 371)								 ::flixel::sound::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 371)								_this->cleanup(_this->autoDestroy,true);
            							}
HXLINE( 372)							::backend::MusicBeatState_obj::switchState(::states::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::states::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),false));
            						}
            						break;
            						case (int)1: {
HXLINE( 374)							this->noText->set_alpha(( (Float)(0) ));
HXLINE( 375)							this->yesText->set_alpha(( (Float)(0) ));
HXLINE( 376)							this->otherText->set_alpha(( (Float)(0) ));
HXLINE( 377)							this->curSelected = 0;
HXLINE( 378)							::states::CharacterSelectionState_obj::notBF = true;
HXLINE( 379)							this->spawnSelection();
            						}
            						break;
            					}
            				}
            			}
            			else {
HXLINE( 386)				if (this->get_controls()->get_NOTE_LEFT_P()) {
HXLINE( 388)					if (this->characterSprite->animOffsets->exists(HX_("singLEFT",d6,39,ef,3b))) {
HXLINE( 390)						Dynamic( this->arrowStrums->members->__get(0)).StaticCast<  ::flixel::FlxSprite >()->animation->play(HX_("confirm",00,9d,39,10),null(),null(),null());
HXLINE( 391)						Dynamic( this->arrowStrums->members->__get(0)).StaticCast<  ::flixel::FlxSprite >()->centerOffsets(null());
HXLINE( 392)						 ::flixel::FlxSprite fh = Dynamic( this->arrowStrums->members->__get(0)).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 392)						fh->offset->set_x((fh->offset->x - ( (Float)(13) )));
HXLINE( 393)						 ::flixel::FlxSprite fh1 = Dynamic( this->arrowStrums->members->__get(0)).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 393)						fh1->offset->set_y((fh1->offset->y - ( (Float)(13) )));
HXLINE( 394)						this->characterSprite->playAnim(HX_("singLEFT",d6,39,ef,3b),null(),null(),null());
            					}
            				}
HXLINE( 397)				if (this->get_controls()->get_NOTE_DOWN_P()) {
HXLINE( 399)					if (this->characterSprite->animOffsets->exists(HX_("singDOWN",31,2a,ad,36))) {
HXLINE( 401)						Dynamic( this->arrowStrums->members->__get(1)).StaticCast<  ::flixel::FlxSprite >()->animation->play(HX_("confirm",00,9d,39,10),null(),null(),null());
HXLINE( 402)						Dynamic( this->arrowStrums->members->__get(1)).StaticCast<  ::flixel::FlxSprite >()->centerOffsets(null());
HXLINE( 403)						 ::flixel::FlxSprite fh = Dynamic( this->arrowStrums->members->__get(1)).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 403)						fh->offset->set_x((fh->offset->x - ( (Float)(13) )));
HXLINE( 404)						 ::flixel::FlxSprite fh1 = Dynamic( this->arrowStrums->members->__get(1)).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 404)						fh1->offset->set_y((fh1->offset->y - ( (Float)(13) )));
HXLINE( 405)						this->characterSprite->playAnim(HX_("singDOWN",31,2a,ad,36),null(),null(),null());
            					}
            				}
HXLINE( 408)				if (this->get_controls()->get_NOTE_UP_P()) {
HXLINE( 410)					if (this->characterSprite->animOffsets->exists(HX_("singUP",6a,52,21,b9))) {
HXLINE( 412)						Dynamic( this->arrowStrums->members->__get(2)).StaticCast<  ::flixel::FlxSprite >()->animation->play(HX_("confirm",00,9d,39,10),null(),null(),null());
HXLINE( 413)						Dynamic( this->arrowStrums->members->__get(2)).StaticCast<  ::flixel::FlxSprite >()->centerOffsets(null());
HXLINE( 414)						 ::flixel::FlxSprite fh = Dynamic( this->arrowStrums->members->__get(2)).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 414)						fh->offset->set_x((fh->offset->x - ( (Float)(13) )));
HXLINE( 415)						 ::flixel::FlxSprite fh1 = Dynamic( this->arrowStrums->members->__get(2)).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 415)						fh1->offset->set_y((fh1->offset->y - ( (Float)(13) )));
HXLINE( 416)						this->characterSprite->playAnim(HX_("singUP",6a,52,21,b9),null(),null(),null());
            					}
            				}
HXLINE( 419)				if (this->get_controls()->get_NOTE_RIGHT_P()) {
HXLINE( 421)					if (this->characterSprite->animOffsets->exists(HX_("singRIGHT",0d,6f,70,ac))) {
HXLINE( 423)						Dynamic( this->arrowStrums->members->__get(3)).StaticCast<  ::flixel::FlxSprite >()->animation->play(HX_("confirm",00,9d,39,10),null(),null(),null());
HXLINE( 424)						Dynamic( this->arrowStrums->members->__get(3)).StaticCast<  ::flixel::FlxSprite >()->centerOffsets(null());
HXLINE( 425)						 ::flixel::FlxSprite fh = Dynamic( this->arrowStrums->members->__get(3)).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 425)						fh->offset->set_x((fh->offset->x - ( (Float)(13) )));
HXLINE( 426)						 ::flixel::FlxSprite fh1 = Dynamic( this->arrowStrums->members->__get(3)).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 426)						fh1->offset->set_y((fh1->offset->y - ( (Float)(13) )));
HXLINE( 427)						this->characterSprite->playAnim(HX_("singRIGHT",0d,6f,70,ac),null(),null(),null());
            					}
            				}
HXLINE( 430)				if (this->get_controls()->get_NOTE_LEFT_R()) {
HXLINE( 432)					Dynamic( this->arrowStrums->members->__get(0)).StaticCast<  ::flixel::FlxSprite >()->animation->play(HX_("static",ae,dc,fb,05),null(),null(),null());
HXLINE( 433)					Dynamic( this->arrowStrums->members->__get(0)).StaticCast<  ::flixel::FlxSprite >()->centerOffsets(null());
            				}
HXLINE( 435)				if (this->get_controls()->get_NOTE_DOWN_R()) {
HXLINE( 437)					Dynamic( this->arrowStrums->members->__get(1)).StaticCast<  ::flixel::FlxSprite >()->animation->play(HX_("static",ae,dc,fb,05),null(),null(),null());
HXLINE( 438)					Dynamic( this->arrowStrums->members->__get(1)).StaticCast<  ::flixel::FlxSprite >()->centerOffsets(null());
            				}
HXLINE( 440)				if (this->get_controls()->get_NOTE_UP_R()) {
HXLINE( 442)					Dynamic( this->arrowStrums->members->__get(2)).StaticCast<  ::flixel::FlxSprite >()->animation->play(HX_("static",ae,dc,fb,05),null(),null(),null());
HXLINE( 443)					Dynamic( this->arrowStrums->members->__get(2)).StaticCast<  ::flixel::FlxSprite >()->centerOffsets(null());
            				}
HXLINE( 445)				if (this->get_controls()->get_NOTE_RIGHT_R()) {
HXLINE( 447)					Dynamic( this->arrowStrums->members->__get(3)).StaticCast<  ::flixel::FlxSprite >()->animation->play(HX_("static",ae,dc,fb,05),null(),null(),null());
HXLINE( 448)					Dynamic( this->arrowStrums->members->__get(3)).StaticCast<  ::flixel::FlxSprite >()->centerOffsets(null());
            				}
HXLINE( 450)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 450)				if (_this->keyManager->checkStatusUnsafe(73,_this->status)) {
HXLINE( 452)					this->characterSprite->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
            				}
            			}
            		}
HXLINE( 455)		this->super::update(elapsed);
            	}


void CharacterSelectionState_obj::changeCharacter(int change,::hx::Null< bool >  __o_playSound){
            		bool playSound = __o_playSound.Default(true);
            	HX_STACKFRAME(&_hx_pos_64a1aaa3ba147e38_462_changeCharacter)
HXDLIN( 462)		if (!(this->entering)) {
HXLINE( 464)			if (playSound) {
HXLINE( 466)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 466)				_hx_tmp->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 468)			this->curSelectedForm = 0;
HXLINE( 469)			 ::states::CharacterSelectionState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 469)			_hx_tmp->curSelected = (_hx_tmp->curSelected + change);
HXLINE( 471)			if ((this->curSelected < 0)) {
HXLINE( 473)				this->curSelected = (::states::CharacterSelectionState_obj::characterData->get_length() - 1);
            			}
HXLINE( 475)			if ((this->curSelected >= ::states::CharacterSelectionState_obj::characterData->get_length())) {
HXLINE( 477)				this->curSelected = 0;
            			}
HXLINE( 479)			if (( (bool)( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("unlockedCharacters",ad,3a,3f,52),::hx::paccDynamic))->__Field(HX_("contains",1f,5a,7b,2c),::hx::paccDynamic)(::states::CharacterSelectionState_obj::characterData->__get(this->curSelected)->__GetItem(0))) )) {
HXLINE( 481)				this->unlocked = true;
            			}
            			else {
HXLINE( 485)				this->unlocked = false;
            			}
HXLINE( 488)			::states::CharacterSelectionState_obj::characterFile = ( (::String)(::states::CharacterSelectionState_obj::characterData->__get(this->curSelected)->__GetItem(1)->__GetItem(0)->__GetItem(1)) );
HXLINE( 490)			if (this->unlocked) {
HXLINE( 492)				this->curText->set_text(( (::String)(::states::CharacterSelectionState_obj::characterData->__get(this->curSelected)->__GetItem(1)->__GetItem(0)->__GetItem(0)) ));
HXLINE( 493)				::states::CharacterSelectionState_obj::scoreMultipliers = ( (::Array< Float >)(::states::CharacterSelectionState_obj::characterData->__get(this->curSelected)->__GetItem(2)) );
HXLINE( 494)				{
HXLINE( 494)					int _g = 0;
HXDLIN( 494)					int _g1 = ( (int)(::states::CharacterSelectionState_obj::characterData->__get(this->curSelected)->__GetItem(2)->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic)) );
HXDLIN( 494)					while((_g < _g1)){
HXLINE( 494)						_g = (_g + 1);
HXDLIN( 494)						int i = (_g - 1);
HXLINE( 496)						 ::flixel::text::FlxText _hx_tmp = Dynamic( this->scoreMultipliersText->members->__get(i)).StaticCast<  ::flixel::text::FlxText >();
HXDLIN( 496)						_hx_tmp->set_text((HX_("x",78,00,00,00) + ::flixel::util::FlxStringUtil_obj::formatMoney(( (Float)(::states::CharacterSelectionState_obj::characterData->__get(this->curSelected)->__GetItem(2)->__GetItem(i)) ),null(),null())));
            					}
            				}
HXLINE( 498)				this->reloadCharacter();
            			}
            			else {
HXLINE( 500)				if (!(( (bool)(::states::CharacterSelectionState_obj::characterData->__get(this->curSelected)->__GetItem(3)) ))) {
HXLINE( 502)					this->curText->set_text(HX_("???",1f,05,30,00));
HXLINE( 503)					::states::CharacterSelectionState_obj::scoreMultipliers = ::Array_obj< Float >::fromData( _hx_array_data_039abc62_12,4);
HXLINE( 504)					{
HXLINE( 504)						int _g = 0;
HXDLIN( 504)						int _g1 = ( (int)(::states::CharacterSelectionState_obj::characterData->__get(this->curSelected)->__GetItem(2)->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic)) );
HXDLIN( 504)						while((_g < _g1)){
HXLINE( 504)							_g = (_g + 1);
HXDLIN( 504)							int i = (_g - 1);
HXLINE( 506)							Dynamic( this->scoreMultipliersText->members->__get(i)).StaticCast<  ::flixel::text::FlxText >()->set_text(HX_("x?.??",67,2c,dd,41));
            						}
            					}
HXLINE( 508)					this->reloadCharacter();
            				}
            				else {
HXLINE( 512)					this->changeCharacter(change,false);
            				}
            			}
HXLINE( 515)			{
HXLINE( 515)				 ::flixel::text::FlxText _this = this->curText;
HXDLIN( 515)				int axes = 1;
HXDLIN( 515)				bool _hx_tmp1;
HXDLIN( 515)				if ((axes != 1)) {
HXLINE( 515)					_hx_tmp1 = (axes == 17);
            				}
            				else {
HXLINE( 515)					_hx_tmp1 = true;
            				}
HXDLIN( 515)				if (_hx_tmp1) {
HXLINE( 515)					int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 515)					_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            				}
HXDLIN( 515)				bool _hx_tmp2;
HXDLIN( 515)				if ((axes != 16)) {
HXLINE( 515)					_hx_tmp2 = (axes == 17);
            				}
            				else {
HXLINE( 515)					_hx_tmp2 = true;
            				}
HXDLIN( 515)				if (_hx_tmp2) {
HXLINE( 515)					int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 515)					_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(CharacterSelectionState_obj,changeCharacter,(void))

void CharacterSelectionState_obj::changeForm(int change){
            	HX_STACKFRAME(&_hx_pos_64a1aaa3ba147e38_521_changeForm)
HXDLIN( 521)		if (!(this->entering)) {
HXLINE( 523)			if (::hx::IsGreaterEq( ::states::CharacterSelectionState_obj::characterData->__get(this->curSelected)->__GetItem(1)->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic),2 )) {
HXLINE( 525)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 525)				_hx_tmp->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 526)				 ::states::CharacterSelectionState _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 526)				_hx_tmp1->curSelectedForm = (_hx_tmp1->curSelectedForm + change);
HXLINE( 528)				if ((this->curSelectedForm < 0)) {
HXLINE( 530)					this->curSelectedForm = ( (int)(::states::CharacterSelectionState_obj::characterData->__get(this->curSelected)->__GetItem(1)->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic)) );
HXLINE( 531)					this->curSelectedForm = (this->curSelectedForm - 1);
            				}
HXLINE( 533)				if (::hx::IsGreaterEq( this->curSelectedForm,::states::CharacterSelectionState_obj::characterData->__get(this->curSelected)->__GetItem(1)->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic) )) {
HXLINE( 535)					this->curSelectedForm = 0;
            				}
HXLINE( 537)				this->curText->set_text(( (::String)(::states::CharacterSelectionState_obj::characterData->__get(this->curSelected)->__GetItem(1)->__GetItem(this->curSelectedForm)->__GetItem(0)) ));
HXLINE( 538)				::states::CharacterSelectionState_obj::characterFile = ( (::String)(::states::CharacterSelectionState_obj::characterData->__get(this->curSelected)->__GetItem(1)->__GetItem(this->curSelectedForm)->__GetItem(1)) );
HXLINE( 540)				this->reloadCharacter();
HXLINE( 542)				{
HXLINE( 542)					 ::flixel::text::FlxText _this = this->curText;
HXDLIN( 542)					int axes = 1;
HXDLIN( 542)					bool _hx_tmp2;
HXDLIN( 542)					if ((axes != 1)) {
HXLINE( 542)						_hx_tmp2 = (axes == 17);
            					}
            					else {
HXLINE( 542)						_hx_tmp2 = true;
            					}
HXDLIN( 542)					if (_hx_tmp2) {
HXLINE( 542)						int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 542)						_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            					}
HXDLIN( 542)					bool _hx_tmp3;
HXDLIN( 542)					if ((axes != 16)) {
HXLINE( 542)						_hx_tmp3 = (axes == 17);
            					}
            					else {
HXLINE( 542)						_hx_tmp3 = true;
            					}
HXDLIN( 542)					if (_hx_tmp3) {
HXLINE( 542)						int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 542)						_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CharacterSelectionState_obj,changeForm,(void))

void CharacterSelectionState_obj::reloadCharacter(){
            	HX_GC_STACKFRAME(&_hx_pos_64a1aaa3ba147e38_548_reloadCharacter)
HXLINE( 549)		this->characterSprite->destroy();
HXLINE( 550)		this->characterSprite =  ::objects::Character_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),::states::CharacterSelectionState_obj::characterFile,null());
HXLINE( 551)		this->add(this->characterSprite);
HXLINE( 552)		this->characterSprite->updateHitbox();
HXLINE( 553)		this->characterSprite->dance();
HXLINE( 555)		{
HXLINE( 555)			 ::objects::Character _this = this->characterSprite;
HXDLIN( 555)			int axes = 17;
HXDLIN( 555)			bool _hx_tmp;
HXDLIN( 555)			if ((axes != 1)) {
HXLINE( 555)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE( 555)				_hx_tmp = true;
            			}
HXDLIN( 555)			if (_hx_tmp) {
HXLINE( 555)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 555)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 555)			bool _hx_tmp1;
HXDLIN( 555)			if ((axes != 16)) {
HXLINE( 555)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE( 555)				_hx_tmp1 = true;
            			}
HXDLIN( 555)			if (_hx_tmp1) {
HXLINE( 555)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 555)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 556)		 ::objects::Character fh = this->characterSprite;
HXDLIN( 556)		fh->set_y((fh->y + 250));
HXLINE( 557)		if (!(this->unlocked)) {
HXLINE( 559)			this->characterSprite->set_color(-16777216);
            		}
HXLINE( 561)		::String _hx_switch_0 = ( (::String)(::states::CharacterSelectionState_obj::characterData->__get(this->curSelected)->__GetItem(0)) );
            		if (  (_hx_switch_0==HX_("3D Dave",db,45,1a,13)) ){
HXLINE( 568)			 ::objects::Character fh = this->characterSprite;
HXDLIN( 568)			fh->set_y((fh->y - ( (Float)(110) )));
HXLINE( 567)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Bambi",f5,06,e3,40)) ){
HXLINE( 564)			 ::objects::Character fh = this->characterSprite;
HXDLIN( 564)			fh->set_y((fh->y + 50));
HXLINE( 563)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Dave",0c,84,3c,2d)) ){
HXLINE( 566)			 ::objects::Character fh = this->characterSprite;
HXDLIN( 566)			fh->set_y((fh->y - ( (Float)(80) )));
HXLINE( 565)			goto _hx_goto_14;
            		}
            		_hx_goto_14:;
HXLINE( 570)		if (::hx::IsEq( ::states::CharacterSelectionState_obj::characterData->__get(this->curSelected)->__GetItem(1)->__GetItem(this->curSelectedForm)->__GetItem(0),HX_("3D Dave (Old)",e5,81,75,46) )) {
HXLINE( 573)			 ::objects::Character fh = this->characterSprite;
HXDLIN( 573)			fh->set_x((fh->x - ( (Float)(60) )));
HXLINE( 574)			 ::objects::Character fh1 = this->characterSprite;
HXDLIN( 574)			fh1->set_y((fh1->y - ( (Float)(120) )));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CharacterSelectionState_obj,reloadCharacter,(void))

void CharacterSelectionState_obj::acceptCharacter(){
            	HX_GC_STACKFRAME(&_hx_pos_64a1aaa3ba147e38_581_acceptCharacter)
HXDLIN( 581)		if (!(this->entering)) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_64a1aaa3ba147e38_596_acceptCharacter)
HXLINE( 597)				{
HXLINE( 597)					 ::flixel::sound::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 597)					_this->cleanup(_this->autoDestroy,true);
            				}
HXLINE( 598)				::states::PlayState_obj::SONG->__SetField(HX_("player1",b0,09,15,8a),::states::CharacterSelectionState_obj::characterFile,::hx::paccDynamic);
HXLINE( 599)				::backend::MusicBeatState_obj::switchState(::states::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::states::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),false));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 583)			this->entering = true;
HXLINE( 584)			if (::hx::IsNotEq( ::states::CharacterSelectionState_obj::characterData->__get(this->curSelected)->__GetItem(1)->__GetItem(0)->__GetItem(0),HX_("Boyfriend",4a,09,8b,88) )) {
HXLINE( 585)				::states::CharacterSelectionState_obj::notBF = true;
            			}
HXLINE( 586)			bool _hx_tmp;
HXDLIN( 586)			if (this->characterSprite->animOffsets->exists(HX_("hey",dc,42,4f,00))) {
HXLINE( 586)				_hx_tmp = ::hx::IsNotNull( this->characterSprite->animation->_animations->get(HX_("hey",dc,42,4f,00)) );
            			}
            			else {
HXLINE( 586)				_hx_tmp = false;
            			}
HXDLIN( 586)			if (_hx_tmp) {
HXLINE( 588)				this->characterSprite->playAnim(HX_("hey",dc,42,4f,00),null(),null(),null());
            			}
            			else {
HXLINE( 592)				this->characterSprite->playAnim(HX_("singUP",6a,52,21,b9),null(),null(),null());
            			}
HXLINE( 594)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 594)			::String library = null();
HXDLIN( 594)			 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("gameOverEnd",15,2d,a9,8d),library);
HXDLIN( 594)			_hx_tmp1->playMusic(file,null(),null(),null());
HXLINE( 595)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(3, ::Dynamic(new _hx_Closure_0()),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CharacterSelectionState_obj,acceptCharacter,(void))

::cpp::VirtualArray CharacterSelectionState_obj::characterData;

::String CharacterSelectionState_obj::characterFile;

bool CharacterSelectionState_obj::notBF;

::Array< Float > CharacterSelectionState_obj::scoreMultipliers;


::hx::ObjectPtr< CharacterSelectionState_obj > CharacterSelectionState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< CharacterSelectionState_obj > __this = new CharacterSelectionState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< CharacterSelectionState_obj > CharacterSelectionState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	CharacterSelectionState_obj *__this = (CharacterSelectionState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CharacterSelectionState_obj), true, "states.CharacterSelectionState"));
	*(void **)__this = CharacterSelectionState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

CharacterSelectionState_obj::CharacterSelectionState_obj()
{
}

void CharacterSelectionState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CharacterSelectionState);
	HX_MARK_MEMBER_NAME(characterSprite,"characterSprite");
	HX_MARK_MEMBER_NAME(nightColor,"nightColor");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(curSelectedForm,"curSelectedForm");
	HX_MARK_MEMBER_NAME(curText,"curText");
	HX_MARK_MEMBER_NAME(controlsText,"controlsText");
	HX_MARK_MEMBER_NAME(formText,"formText");
	HX_MARK_MEMBER_NAME(entering,"entering");
	HX_MARK_MEMBER_NAME(otherText,"otherText");
	HX_MARK_MEMBER_NAME(yesText,"yesText");
	HX_MARK_MEMBER_NAME(noText,"noText");
	HX_MARK_MEMBER_NAME(previewMode,"previewMode");
	HX_MARK_MEMBER_NAME(unlocked,"unlocked");
	HX_MARK_MEMBER_NAME(arrowStrums,"arrowStrums");
	HX_MARK_MEMBER_NAME(scoreMultipliersText,"scoreMultipliersText");
	HX_MARK_MEMBER_NAME(camGame,"camGame");
	HX_MARK_MEMBER_NAME(camHUD,"camHUD");
	HX_MARK_MEMBER_NAME(selectionStart,"selectionStart");
	 ::backend::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CharacterSelectionState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(characterSprite,"characterSprite");
	HX_VISIT_MEMBER_NAME(nightColor,"nightColor");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(curSelectedForm,"curSelectedForm");
	HX_VISIT_MEMBER_NAME(curText,"curText");
	HX_VISIT_MEMBER_NAME(controlsText,"controlsText");
	HX_VISIT_MEMBER_NAME(formText,"formText");
	HX_VISIT_MEMBER_NAME(entering,"entering");
	HX_VISIT_MEMBER_NAME(otherText,"otherText");
	HX_VISIT_MEMBER_NAME(yesText,"yesText");
	HX_VISIT_MEMBER_NAME(noText,"noText");
	HX_VISIT_MEMBER_NAME(previewMode,"previewMode");
	HX_VISIT_MEMBER_NAME(unlocked,"unlocked");
	HX_VISIT_MEMBER_NAME(arrowStrums,"arrowStrums");
	HX_VISIT_MEMBER_NAME(scoreMultipliersText,"scoreMultipliersText");
	HX_VISIT_MEMBER_NAME(camGame,"camGame");
	HX_VISIT_MEMBER_NAME(camHUD,"camHUD");
	HX_VISIT_MEMBER_NAME(selectionStart,"selectionStart");
	 ::backend::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CharacterSelectionState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"noText") ) { return ::hx::Val( noText ); }
		if (HX_FIELD_EQ(inName,"camHUD") ) { return ::hx::Val( camHUD ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curText") ) { return ::hx::Val( curText ); }
		if (HX_FIELD_EQ(inName,"yesText") ) { return ::hx::Val( yesText ); }
		if (HX_FIELD_EQ(inName,"camGame") ) { return ::hx::Val( camGame ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"formText") ) { return ::hx::Val( formText ); }
		if (HX_FIELD_EQ(inName,"entering") ) { return ::hx::Val( entering ); }
		if (HX_FIELD_EQ(inName,"unlocked") ) { return ::hx::Val( unlocked ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"otherText") ) { return ::hx::Val( otherText ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nightColor") ) { return ::hx::Val( nightColor ); }
		if (HX_FIELD_EQ(inName,"changeForm") ) { return ::hx::Val( changeForm_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"previewMode") ) { return ::hx::Val( previewMode ); }
		if (HX_FIELD_EQ(inName,"arrowStrums") ) { return ::hx::Val( arrowStrums ); }
		if (HX_FIELD_EQ(inName,"spawnArrows") ) { return ::hx::Val( spawnArrows_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"controlsText") ) { return ::hx::Val( controlsText ); }
		if (HX_FIELD_EQ(inName,"checkPreview") ) { return ::hx::Val( checkPreview_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"selectionStart") ) { return ::hx::Val( selectionStart ); }
		if (HX_FIELD_EQ(inName,"spawnSelection") ) { return ::hx::Val( spawnSelection_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"characterSprite") ) { return ::hx::Val( characterSprite ); }
		if (HX_FIELD_EQ(inName,"curSelectedForm") ) { return ::hx::Val( curSelectedForm ); }
		if (HX_FIELD_EQ(inName,"changeCharacter") ) { return ::hx::Val( changeCharacter_dyn() ); }
		if (HX_FIELD_EQ(inName,"reloadCharacter") ) { return ::hx::Val( reloadCharacter_dyn() ); }
		if (HX_FIELD_EQ(inName,"acceptCharacter") ) { return ::hx::Val( acceptCharacter_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"scoreMultipliersText") ) { return ::hx::Val( scoreMultipliersText ); }
	}
	return super::__Field(inName,inCallProp);
}

bool CharacterSelectionState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"notBF") ) { outValue = ( notBF ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"characterData") ) { outValue = ( characterData ); return true; }
		if (HX_FIELD_EQ(inName,"characterFile") ) { outValue = ( characterFile ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"scoreMultipliers") ) { outValue = ( scoreMultipliers ); return true; }
	}
	return false;
}

::hx::Val CharacterSelectionState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"noText") ) { noText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camHUD") ) { camHUD=inValue.Cast<  ::flixel::FlxCamera >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curText") ) { curText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yesText") ) { yesText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camGame") ) { camGame=inValue.Cast<  ::flixel::FlxCamera >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"formText") ) { formText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"entering") ) { entering=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"unlocked") ) { unlocked=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"otherText") ) { otherText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nightColor") ) { nightColor=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"previewMode") ) { previewMode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arrowStrums") ) { arrowStrums=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"controlsText") ) { controlsText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"selectionStart") ) { selectionStart=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"characterSprite") ) { characterSprite=inValue.Cast<  ::objects::Character >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curSelectedForm") ) { curSelectedForm=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"scoreMultipliersText") ) { scoreMultipliersText=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CharacterSelectionState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"notBF") ) { notBF=ioValue.Cast< bool >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"characterData") ) { characterData=ioValue.Cast< ::cpp::VirtualArray >(); return true; }
		if (HX_FIELD_EQ(inName,"characterFile") ) { characterFile=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"scoreMultipliers") ) { scoreMultipliers=ioValue.Cast< ::Array< Float > >(); return true; }
	}
	return false;
}

void CharacterSelectionState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("characterSprite",8e,d0,fd,3c));
	outFields->push(HX_("nightColor",6b,78,f7,4b));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("curSelectedForm",df,92,aa,42));
	outFields->push(HX_("curText",4d,3e,0f,b8));
	outFields->push(HX_("controlsText",43,f2,92,a0));
	outFields->push(HX_("formText",11,4c,17,61));
	outFields->push(HX_("entering",ca,de,a8,43));
	outFields->push(HX_("otherText",9d,07,cd,83));
	outFields->push(HX_("yesText",74,41,98,78));
	outFields->push(HX_("noText",8e,0d,8f,1c));
	outFields->push(HX_("previewMode",8b,83,39,c1));
	outFields->push(HX_("unlocked",23,34,0e,5c));
	outFields->push(HX_("arrowStrums",b3,2d,18,cc));
	outFields->push(HX_("scoreMultipliersText",6d,14,ec,ae));
	outFields->push(HX_("camGame",a1,47,50,cf));
	outFields->push(HX_("camHUD",e8,2b,76,b7));
	outFields->push(HX_("selectionStart",76,58,7a,0f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CharacterSelectionState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::objects::Character */ ,(int)offsetof(CharacterSelectionState_obj,characterSprite),HX_("characterSprite",8e,d0,fd,3c)},
	{::hx::fsInt,(int)offsetof(CharacterSelectionState_obj,nightColor),HX_("nightColor",6b,78,f7,4b)},
	{::hx::fsInt,(int)offsetof(CharacterSelectionState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsInt,(int)offsetof(CharacterSelectionState_obj,curSelectedForm),HX_("curSelectedForm",df,92,aa,42)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CharacterSelectionState_obj,curText),HX_("curText",4d,3e,0f,b8)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CharacterSelectionState_obj,controlsText),HX_("controlsText",43,f2,92,a0)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CharacterSelectionState_obj,formText),HX_("formText",11,4c,17,61)},
	{::hx::fsBool,(int)offsetof(CharacterSelectionState_obj,entering),HX_("entering",ca,de,a8,43)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CharacterSelectionState_obj,otherText),HX_("otherText",9d,07,cd,83)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CharacterSelectionState_obj,yesText),HX_("yesText",74,41,98,78)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CharacterSelectionState_obj,noText),HX_("noText",8e,0d,8f,1c)},
	{::hx::fsBool,(int)offsetof(CharacterSelectionState_obj,previewMode),HX_("previewMode",8b,83,39,c1)},
	{::hx::fsBool,(int)offsetof(CharacterSelectionState_obj,unlocked),HX_("unlocked",23,34,0e,5c)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(CharacterSelectionState_obj,arrowStrums),HX_("arrowStrums",b3,2d,18,cc)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(CharacterSelectionState_obj,scoreMultipliersText),HX_("scoreMultipliersText",6d,14,ec,ae)},
	{::hx::fsObject /*  ::flixel::FlxCamera */ ,(int)offsetof(CharacterSelectionState_obj,camGame),HX_("camGame",a1,47,50,cf)},
	{::hx::fsObject /*  ::flixel::FlxCamera */ ,(int)offsetof(CharacterSelectionState_obj,camHUD),HX_("camHUD",e8,2b,76,b7)},
	{::hx::fsBool,(int)offsetof(CharacterSelectionState_obj,selectionStart),HX_("selectionStart",76,58,7a,0f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo CharacterSelectionState_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(void *) &CharacterSelectionState_obj::characterData,HX_("characterData",73,e6,4f,3b)},
	{::hx::fsString,(void *) &CharacterSelectionState_obj::characterFile,HX_("characterFile",c5,5e,a8,3c)},
	{::hx::fsBool,(void *) &CharacterSelectionState_obj::notBF,HX_("notBF",97,bd,ca,9f)},
	{::hx::fsObject /* ::Array< Float > */ ,(void *) &CharacterSelectionState_obj::scoreMultipliers,HX_("scoreMultipliers",a0,cb,3a,5a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String CharacterSelectionState_obj_sMemberFields[] = {
	HX_("characterSprite",8e,d0,fd,3c),
	HX_("nightColor",6b,78,f7,4b),
	HX_("curSelected",fb,eb,ab,32),
	HX_("curSelectedForm",df,92,aa,42),
	HX_("curText",4d,3e,0f,b8),
	HX_("controlsText",43,f2,92,a0),
	HX_("formText",11,4c,17,61),
	HX_("entering",ca,de,a8,43),
	HX_("otherText",9d,07,cd,83),
	HX_("yesText",74,41,98,78),
	HX_("noText",8e,0d,8f,1c),
	HX_("previewMode",8b,83,39,c1),
	HX_("unlocked",23,34,0e,5c),
	HX_("arrowStrums",b3,2d,18,cc),
	HX_("scoreMultipliersText",6d,14,ec,ae),
	HX_("camGame",a1,47,50,cf),
	HX_("camHUD",e8,2b,76,b7),
	HX_("create",fc,66,0f,7c),
	HX_("selectionStart",76,58,7a,0f),
	HX_("spawnArrows",25,07,33,53),
	HX_("spawnSelection",91,1a,ed,98),
	HX_("checkPreview",20,98,61,29),
	HX_("update",09,86,05,87),
	HX_("changeCharacter",19,7c,6c,fc),
	HX_("changeForm",d4,96,09,1e),
	HX_("reloadCharacter",10,b5,a6,ea),
	HX_("acceptCharacter",81,87,07,0d),
	::String(null()) };

static void CharacterSelectionState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CharacterSelectionState_obj::characterData,"characterData");
	HX_MARK_MEMBER_NAME(CharacterSelectionState_obj::characterFile,"characterFile");
	HX_MARK_MEMBER_NAME(CharacterSelectionState_obj::notBF,"notBF");
	HX_MARK_MEMBER_NAME(CharacterSelectionState_obj::scoreMultipliers,"scoreMultipliers");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CharacterSelectionState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CharacterSelectionState_obj::characterData,"characterData");
	HX_VISIT_MEMBER_NAME(CharacterSelectionState_obj::characterFile,"characterFile");
	HX_VISIT_MEMBER_NAME(CharacterSelectionState_obj::notBF,"notBF");
	HX_VISIT_MEMBER_NAME(CharacterSelectionState_obj::scoreMultipliers,"scoreMultipliers");
};

#endif

::hx::Class CharacterSelectionState_obj::__mClass;

static ::String CharacterSelectionState_obj_sStaticFields[] = {
	HX_("characterData",73,e6,4f,3b),
	HX_("characterFile",c5,5e,a8,3c),
	HX_("notBF",97,bd,ca,9f),
	HX_("scoreMultipliers",a0,cb,3a,5a),
	::String(null())
};

void CharacterSelectionState_obj::__register()
{
	CharacterSelectionState_obj _hx_dummy;
	CharacterSelectionState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.CharacterSelectionState",62,bc,9a,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CharacterSelectionState_obj::__GetStatic;
	__mClass->mSetStaticField = &CharacterSelectionState_obj::__SetStatic;
	__mClass->mMarkFunc = CharacterSelectionState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CharacterSelectionState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CharacterSelectionState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CharacterSelectionState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CharacterSelectionState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CharacterSelectionState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CharacterSelectionState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CharacterSelectionState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_64a1aaa3ba147e38_22_boot)
HXDLIN(  22)		characterData = ::cpp::VirtualArray_obj::__new(7)->init(0,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Boyfriend",4a,09,8b,88))->init(1,::cpp::VirtualArray_obj::__new(1)->init(0,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Boyfriend",4a,09,8b,88))->init(1,HX_("bf",c4,55,00,00))))->init(2,::cpp::VirtualArray_obj::__new(4)->init(0,1)->init(1,1)->init(2,1)->init(3,1))->init(3,false))->init(1,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Dave",0c,84,3c,2d))->init(1,::cpp::VirtualArray_obj::__new(4)->init(0,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Dave",0c,84,3c,2d))->init(1,HX_("dave",ec,57,63,42)))->init(1,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Dave (Insanity)",62,3b,4d,62))->init(1,HX_("dave-insanity",74,e3,e7,f2)))->init(2,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Dave (Splitathon)",db,ec,79,c6))->init(1,HX_("dave-splitathon",5b,c1,37,17)))->init(3,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Dave (Old)",d6,fa,75,ce))->init(1,HX_("dave-older",73,f6,00,ff))))->init(2,::cpp::VirtualArray_obj::__new(4)->init(0,((Float)0.25))->init(1,2)->init(2,2)->init(3,((Float)0.25)))->init(3,false))->init(2,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("3D Dave",db,45,1a,13))->init(1,::cpp::VirtualArray_obj::__new(2)->init(0,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("3D Dave",db,45,1a,13))->init(1,HX_("dave-3d",d2,b5,2d,3b)))->init(1,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("3D Dave (Old)",e5,81,75,46))->init(1,HX_("dave-insanity3d",45,d5,3e,67))))->init(2,::cpp::VirtualArray_obj::__new(4)->init(0,2)->init(1,((Float)0.25))->init(2,((Float)0.25))->init(3,2))->init(3,false))->init(3,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Bambi",f5,06,e3,40))->init(1,::cpp::VirtualArray_obj::__new(4)->init(0,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Bambi",f5,06,e3,40))->init(1,HX_("bambi",15,97,b5,ad)))->init(1,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Bambi (Old)",7f,12,f3,e1))->init(1,HX_("bambi-old",2f,78,4a,e3)))->init(2,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Bambi (Splitathon)",52,0c,2b,17))->init(1,HX_("bambi-splitathon",d2,70,c8,4c)))->init(3,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Bambi (Angry)",05,7e,bd,22))->init(1,HX_("bambi-mad",18,ea,48,e3))))->init(2,::cpp::VirtualArray_obj::__new(4)->init(0,0)->init(1,0)->init(2,3)->init(3,0))->init(3,false))->init(4,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Tristan",59,e6,28,fb))->init(1,::cpp::VirtualArray_obj::__new(1)->init(0,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Tristan",59,e6,28,fb))->init(1,HX_("tristan",79,be,d7,2d))))->init(2,::cpp::VirtualArray_obj::__new(4)->init(0,2)->init(1,((Float)0.5))->init(2,((Float)0.5))->init(3,((Float)0.5)))->init(3,false))->init(5,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Drip Dave",f7,e8,eb,f0))->init(1,::cpp::VirtualArray_obj::__new(1)->init(0,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Drip Dave",f7,e8,eb,f0))->init(1,HX_("dave-drip",36,be,d2,ca))))->init(2,::cpp::VirtualArray_obj::__new(4)->init(0,((Float)0.42))->init(1,((Float)0.69))->init(2,((Float)0.42))->init(3,((Float)0.69)))->init(3,true))->init(6,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Expunged",30,ae,86,57))->init(1,::cpp::VirtualArray_obj::__new(2)->init(0,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("3D Bambi",46,da,0e,7d))->init(1,HX_("bambi-3d",49,96,a6,ee)))->init(1,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Unfair Bambi",72,4b,d4,c5))->init(1,HX_("bambi-unfair",35,46,2f,c6))))->init(2,::cpp::VirtualArray_obj::__new(4)->init(0,0)->init(1,0)->init(2,0)->init(3,3))->init(3,false));
            	}
{
            	HX_STACKFRAME(&_hx_pos_64a1aaa3ba147e38_33_boot)
HXDLIN(  33)		characterFile = HX_("bf",c4,55,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_64a1aaa3ba147e38_49_boot)
HXDLIN(  49)		notBF = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_64a1aaa3ba147e38_55_boot)
HXDLIN(  55)		scoreMultipliers = ::Array_obj< Float >::fromData( _hx_array_data_039abc62_22,4);
            	}
}

} // end namespace states
