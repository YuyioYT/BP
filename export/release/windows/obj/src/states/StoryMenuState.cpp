#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Controls
#include <backend/Controls.h>
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
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
#endif
#ifndef INCLUDED_backend_Song
#include <backend/Song.h>
#endif
#ifndef INCLUDED_backend_WeekData
#include <backend/WeekData.h>
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
#ifndef INCLUDED_flixel_addons_display_FlxBackdrop
#include <flixel/addons/display/FlxBackdrop.h>
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
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
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
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
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
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_states_LoadingState
#include <states/LoadingState.h>
#endif
#ifndef INCLUDED_states_MainMenuState
#include <states/MainMenuState.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_states_Section2Substate
#include <states/Section2Substate.h>
#endif
#ifndef INCLUDED_states_StoryMenuState
#include <states/StoryMenuState.h>
#endif
#ifndef INCLUDED_substates_GameplayChangersSubstate
#include <substates/GameplayChangersSubstate.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bb97520c7169a052_15_new,"states.StoryMenuState","new",0x0cdc887b,"states.StoryMenuState.new","states/StoryMenuState.hx",15,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_bb97520c7169a052_73_create,"states.StoryMenuState","create",0xa5a271c1,"states.StoryMenuState.create","states/StoryMenuState.hx",73,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_bb97520c7169a052_197_update,"states.StoryMenuState","update",0xb09890ce,"states.StoryMenuState.update","states/StoryMenuState.hx",197,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_bb97520c7169a052_270_startSong,"states.StoryMenuState","startSong",0xf7f1dbb2,"states.StoryMenuState.startSong","states/StoryMenuState.hx",270,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_bb97520c7169a052_264_startSong,"states.StoryMenuState","startSong",0xf7f1dbb2,"states.StoryMenuState.startSong","states/StoryMenuState.hx",264,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_bb97520c7169a052_276_startSong,"states.StoryMenuState","startSong",0xf7f1dbb2,"states.StoryMenuState.startSong","states/StoryMenuState.hx",276,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_bb97520c7169a052_253_startSong,"states.StoryMenuState","startSong",0xf7f1dbb2,"states.StoryMenuState.startSong","states/StoryMenuState.hx",253,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_bb97520c7169a052_251_startSong,"states.StoryMenuState","startSong",0xf7f1dbb2,"states.StoryMenuState.startSong","states/StoryMenuState.hx",251,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_bb97520c7169a052_301_startSong2,"states.StoryMenuState","startSong2",0xfbae6040,"states.StoryMenuState.startSong2","states/StoryMenuState.hx",301,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_bb97520c7169a052_295_startSong2,"states.StoryMenuState","startSong2",0xfbae6040,"states.StoryMenuState.startSong2","states/StoryMenuState.hx",295,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_bb97520c7169a052_307_startSong2,"states.StoryMenuState","startSong2",0xfbae6040,"states.StoryMenuState.startSong2","states/StoryMenuState.hx",307,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_bb97520c7169a052_284_startSong2,"states.StoryMenuState","startSong2",0xfbae6040,"states.StoryMenuState.startSong2","states/StoryMenuState.hx",284,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_bb97520c7169a052_282_startSong2,"states.StoryMenuState","startSong2",0xfbae6040,"states.StoryMenuState.startSong2","states/StoryMenuState.hx",282,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_bb97520c7169a052_332_startSong3,"states.StoryMenuState","startSong3",0xfbae6041,"states.StoryMenuState.startSong3","states/StoryMenuState.hx",332,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_bb97520c7169a052_326_startSong3,"states.StoryMenuState","startSong3",0xfbae6041,"states.StoryMenuState.startSong3","states/StoryMenuState.hx",326,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_bb97520c7169a052_338_startSong3,"states.StoryMenuState","startSong3",0xfbae6041,"states.StoryMenuState.startSong3","states/StoryMenuState.hx",338,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_bb97520c7169a052_315_startSong3,"states.StoryMenuState","startSong3",0xfbae6041,"states.StoryMenuState.startSong3","states/StoryMenuState.hx",315,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_bb97520c7169a052_313_startSong3,"states.StoryMenuState","startSong3",0xfbae6041,"states.StoryMenuState.startSong3","states/StoryMenuState.hx",313,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_bb97520c7169a052_342_weekIsLocked,"states.StoryMenuState","weekIsLocked",0xec61bd2d,"states.StoryMenuState.weekIsLocked","states/StoryMenuState.hx",342,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_bb97520c7169a052_67_randomizeBG,"states.StoryMenuState","randomizeBG",0x34e24c51,"states.StoryMenuState.randomizeBG","states/StoryMenuState.hx",67,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_bb97520c7169a052_33_boot,"states.StoryMenuState","boot",0x2c33e3b7,"states.StoryMenuState.boot","states/StoryMenuState.hx",33,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_bb97520c7169a052_36_boot,"states.StoryMenuState","boot",0x2c33e3b7,"states.StoryMenuState.boot","states/StoryMenuState.hx",36,0xbd7f4e34)
static const ::String _hx_array_data_21422f09_22[] = {
	HX_("backgrounds/arandomguy",31,6c,0a,74),HX_("backgrounds/cesars",bb,1a,0d,24),HX_("backgrounds/cheesedjelly",5b,15,9d,3e),HX_("backgrounds/darealmatt",f9,e0,af,1b),HX_("backgrounds/darlyboxman",87,4f,03,cb),HX_("backgrounds/doodoofeces",a8,45,49,64),HX_("backgrounds/expunged",da,1b,56,ec),HX_("backgrounds/eyes",ac,b2,00,e4),HX_("backgrounds/fast_f00d",77,24,fc,00),HX_("backgrounds/ion",3e,38,33,86),HX_("backgrounds/isaaclul",54,0f,95,76),HX_("backgrounds/kanandraw",7f,8a,e2,58),HX_("backgrounds/mmimim",72,4b,40,b8),HX_("backgrounds/morpho",f1,a5,02,e5),HX_("backgrounds/osp",42,c9,37,86),HX_("backgrounds/Senza_titolo_200_20230711092018",e7,33,2e,cd),HX_("backgrounds/Senza_titolo_201_20230711093117",e5,55,08,95),HX_("backgrounds/slushX",31,fd,f0,92),HX_("backgrounds/spitz",a8,e1,47,a6),HX_("backgrounds/tamrika",e3,04,b8,27),HX_("backgrounds/ultimate poop",05,be,ab,12),HX_("backgrounds/ultimate poop2",8d,86,9a,43),HX_("backgrounds/voltrex",7a,a7,d4,81),HX_("backgrounds/watch_out",54,36,b3,8a),HX_("backgrounds/whatisthis",d6,bd,87,08),HX_("backgrounds/zevisly",58,23,56,e3),
};
namespace states{

void StoryMenuState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_bb97520c7169a052_15_new)
HXLINE(  22)		this->canExit = true;
HXLINE(  21)		this->lol3 = false;
HXLINE(  20)		this->lol2 = false;
HXLINE(  19)		this->lol = false;
HXLINE(  15)		super::__construct(TransIn,TransOut);
            	}

Dynamic StoryMenuState_obj::__CreateEmpty() { return new StoryMenuState_obj; }

void *StoryMenuState_obj::_hx_vtable = 0;

Dynamic StoryMenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StoryMenuState_obj > _hx_result = new StoryMenuState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool StoryMenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x53aaab8a) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x18456883) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x18456883;
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

void StoryMenuState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_bb97520c7169a052_73_create)
HXLINE(  74)		::backend::Paths_obj::clearStoredMemory(null());
HXLINE(  75)		::backend::Paths_obj::clearUnusedMemory();
HXLINE(  77)		this->super::create();
HXLINE(  79)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  81)		this->transIn = ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransIn;
HXLINE(  82)		this->transOut = ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransOut;
HXLINE(  84)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN(  84)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(::states::StoryMenuState_obj::randomizeBG(),null(),null(),null(),null(),null());
HXLINE(  85)		bg1->setGraphicSize(::Std_obj::_hx_int((bg1->get_width() * ((Float)1.175))),null());
HXLINE(  86)		bg1->updateHitbox();
HXLINE(  87)		{
HXLINE(  87)			int axes = 17;
HXDLIN(  87)			bool _hx_tmp;
HXDLIN(  87)			if ((axes != 1)) {
HXLINE(  87)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  87)				_hx_tmp = true;
            			}
HXDLIN(  87)			if (_hx_tmp) {
HXLINE(  87)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  87)				bg1->set_x(((( (Float)(_hx_tmp) ) - bg1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  87)			bool _hx_tmp1;
HXDLIN(  87)			if ((axes != 16)) {
HXLINE(  87)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  87)				_hx_tmp1 = true;
            			}
HXDLIN(  87)			if (_hx_tmp1) {
HXLINE(  87)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  87)				bg1->set_y(((( (Float)(_hx_tmp) ) - bg1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  88)		bg1->set_color(-13762560);
HXLINE(  89)		bg1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  90)		this->add(bg1);
HXLINE(  92)		 ::flixel::addons::display::FlxBackdrop check =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,::backend::Paths_obj::image(HX_("menuimages/check",10,f1,52,ff),null(),null()),null(),0,0);
HXLINE(  93)		{
HXLINE(  93)			 ::flixel::math::FlxBasePoint this1 = check->velocity;
HXDLIN(  93)			this1->set_x(( (Float)(150) ));
HXDLIN(  93)			this1->set_y(( (Float)(150) ));
            		}
HXLINE(  94)		{
HXLINE(  94)			int axes1 = 17;
HXDLIN(  94)			bool _hx_tmp2;
HXDLIN(  94)			if ((axes1 != 1)) {
HXLINE(  94)				_hx_tmp2 = (axes1 == 17);
            			}
            			else {
HXLINE(  94)				_hx_tmp2 = true;
            			}
HXDLIN(  94)			if (_hx_tmp2) {
HXLINE(  94)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  94)				check->set_x(((( (Float)(_hx_tmp) ) - check->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  94)			bool _hx_tmp3;
HXDLIN(  94)			if ((axes1 != 16)) {
HXLINE(  94)				_hx_tmp3 = (axes1 == 17);
            			}
            			else {
HXLINE(  94)				_hx_tmp3 = true;
            			}
HXDLIN(  94)			if (_hx_tmp3) {
HXLINE(  94)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  94)				check->set_y(((( (Float)(_hx_tmp) ) - check->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  95)		this->add(check);
HXLINE(  97)		 ::flixel::FlxSprite glow =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN(  97)		 ::flixel::FlxSprite glow1 = glow->loadGraphic(::backend::Paths_obj::image(HX_("menuimages/glow",45,97,aa,a5),null(),null()),null(),null(),null(),null(),null());
HXLINE(  98)		glow1->setGraphicSize(::Std_obj::_hx_int((glow1->get_width() * ((Float)1.175))),null());
HXLINE(  99)		glow1->updateHitbox();
HXLINE( 100)		{
HXLINE( 100)			int axes2 = 17;
HXDLIN( 100)			bool _hx_tmp4;
HXDLIN( 100)			if ((axes2 != 1)) {
HXLINE( 100)				_hx_tmp4 = (axes2 == 17);
            			}
            			else {
HXLINE( 100)				_hx_tmp4 = true;
            			}
HXDLIN( 100)			if (_hx_tmp4) {
HXLINE( 100)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 100)				glow1->set_x(((( (Float)(_hx_tmp) ) - glow1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 100)			bool _hx_tmp5;
HXDLIN( 100)			if ((axes2 != 16)) {
HXLINE( 100)				_hx_tmp5 = (axes2 == 17);
            			}
            			else {
HXLINE( 100)				_hx_tmp5 = true;
            			}
HXDLIN( 100)			if (_hx_tmp5) {
HXLINE( 100)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 100)				glow1->set_y(((( (Float)(_hx_tmp) ) - glow1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 101)		glow1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 102)		this->add(glow1);
HXLINE( 104)		 ::flixel::FlxSprite gr =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN( 104)		 ::flixel::FlxSprite gr1 = gr->loadGraphic(::backend::Paths_obj::image(HX_("menuimages/purgatorygrad",3f,00,0a,bc),null(),null()),null(),null(),null(),null(),null());
HXLINE( 105)		gr1->setGraphicSize(::Std_obj::_hx_int((gr1->get_width() * ((Float)1.175))),null());
HXLINE( 106)		gr1->updateHitbox();
HXLINE( 107)		{
HXLINE( 107)			int axes3 = 17;
HXDLIN( 107)			bool _hx_tmp6;
HXDLIN( 107)			if ((axes3 != 1)) {
HXLINE( 107)				_hx_tmp6 = (axes3 == 17);
            			}
            			else {
HXLINE( 107)				_hx_tmp6 = true;
            			}
HXDLIN( 107)			if (_hx_tmp6) {
HXLINE( 107)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 107)				gr1->set_x(((( (Float)(_hx_tmp) ) - gr1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 107)			bool _hx_tmp7;
HXDLIN( 107)			if ((axes3 != 16)) {
HXLINE( 107)				_hx_tmp7 = (axes3 == 17);
            			}
            			else {
HXLINE( 107)				_hx_tmp7 = true;
            			}
HXDLIN( 107)			if (_hx_tmp7) {
HXLINE( 107)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 107)				gr1->set_y(((( (Float)(_hx_tmp) ) - gr1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 108)		gr1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 109)		this->add(gr1);
HXLINE( 111)		 ::flixel::FlxSprite line =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN( 111)		 ::flixel::FlxSprite line1 = line->loadGraphic(::backend::Paths_obj::image(HX_("menuimages/line",ac,60,f6,a8),null(),null()),null(),null(),null(),null(),null());
HXLINE( 112)		line1->setGraphicSize(::Std_obj::_hx_int((glow1->get_width() * ((Float)1.175))),null());
HXLINE( 113)		line1->updateHitbox();
HXLINE( 114)		{
HXLINE( 114)			int axes4 = 17;
HXDLIN( 114)			bool _hx_tmp8;
HXDLIN( 114)			if ((axes4 != 1)) {
HXLINE( 114)				_hx_tmp8 = (axes4 == 17);
            			}
            			else {
HXLINE( 114)				_hx_tmp8 = true;
            			}
HXDLIN( 114)			if (_hx_tmp8) {
HXLINE( 114)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 114)				line1->set_x(((( (Float)(_hx_tmp) ) - line1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 114)			bool _hx_tmp9;
HXDLIN( 114)			if ((axes4 != 16)) {
HXLINE( 114)				_hx_tmp9 = (axes4 == 17);
            			}
            			else {
HXLINE( 114)				_hx_tmp9 = true;
            			}
HXDLIN( 114)			if (_hx_tmp9) {
HXLINE( 114)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 114)				line1->set_y(((( (Float)(_hx_tmp) ) - line1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 115)		line1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 116)		this->add(line1);
HXLINE( 118)		 ::flixel::addons::display::FlxBackdrop slidething =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,::backend::Paths_obj::image(HX_("menuimages/hahaslider",8b,40,35,9c),null(),null()),null(),0,10000);
HXLINE( 119)		{
HXLINE( 119)			 ::flixel::math::FlxBasePoint this2 = slidething->velocity;
HXDLIN( 119)			this2->set_x(( (Float)(-14) ));
HXDLIN( 119)			this2->set_y(( (Float)(0) ));
            		}
HXLINE( 120)		slidething->set_y(( (Float)(150) ));
HXLINE( 121)		{
HXLINE( 121)			int axes5 = 1;
HXDLIN( 121)			bool _hx_tmp10;
HXDLIN( 121)			if ((axes5 != 1)) {
HXLINE( 121)				_hx_tmp10 = (axes5 == 17);
            			}
            			else {
HXLINE( 121)				_hx_tmp10 = true;
            			}
HXDLIN( 121)			if (_hx_tmp10) {
HXLINE( 121)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 121)				slidething->set_x(((( (Float)(_hx_tmp) ) - slidething->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 121)			bool _hx_tmp11;
HXDLIN( 121)			if ((axes5 != 16)) {
HXLINE( 121)				_hx_tmp11 = (axes5 == 17);
            			}
            			else {
HXLINE( 121)				_hx_tmp11 = true;
            			}
HXDLIN( 121)			if (_hx_tmp11) {
HXLINE( 121)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 121)				slidething->set_y(((( (Float)(_hx_tmp) ) - slidething->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 122)		slidething->setGraphicSize(::Std_obj::_hx_int((slidething->get_width() * ((Float)0.65))),null());
HXLINE( 123)		this->add(slidething);
HXLINE( 125)		 ::flixel::addons::display::FlxBackdrop spikes =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,::backend::Paths_obj::image(HX_("menuimages/spikeys",68,87,cf,cd),null(),null()),null(),0,10000);
HXLINE( 126)		{
HXLINE( 126)			 ::flixel::math::FlxBasePoint this3 = spikes->velocity;
HXDLIN( 126)			this3->set_x(( (Float)(100) ));
HXDLIN( 126)			this3->set_y(( (Float)(0) ));
            		}
HXLINE( 127)		{
HXLINE( 127)			int axes6 = 17;
HXDLIN( 127)			bool _hx_tmp12;
HXDLIN( 127)			if ((axes6 != 1)) {
HXLINE( 127)				_hx_tmp12 = (axes6 == 17);
            			}
            			else {
HXLINE( 127)				_hx_tmp12 = true;
            			}
HXDLIN( 127)			if (_hx_tmp12) {
HXLINE( 127)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 127)				spikes->set_x(((( (Float)(_hx_tmp) ) - spikes->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 127)			bool _hx_tmp13;
HXDLIN( 127)			if ((axes6 != 16)) {
HXLINE( 127)				_hx_tmp13 = (axes6 == 17);
            			}
            			else {
HXLINE( 127)				_hx_tmp13 = true;
            			}
HXDLIN( 127)			if (_hx_tmp13) {
HXLINE( 127)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 127)				spikes->set_y(((( (Float)(_hx_tmp) ) - spikes->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 128)		this->add(spikes);
HXLINE( 130)		this->menuItems =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 131)		this->add(this->menuItems);
HXLINE( 133)		 ::flixel::FlxSprite _hx_tmp14 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,100,70,null());
HXDLIN( 133)		this->week1 = _hx_tmp14->loadGraphic(::backend::Paths_obj::image(HX_("purgatoryweeks/story1",15,09,d8,22),null(),null()),null(),null(),null(),null(),null());
HXLINE( 134)		{
HXLINE( 134)			 ::flixel::math::FlxBasePoint this4 = this->week1->scale;
HXDLIN( 134)			this4->set_x(((Float)0.8));
HXDLIN( 134)			this4->set_y(((Float)0.8));
            		}
HXLINE( 135)		this->week1->updateHitbox();
HXLINE( 136)		this->week1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 137)		this->menuItems->add(this->week1).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 139)		this->week1text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,80,480,320,(HX_("Rage\n",bd,c3,47,77) + HX_("Week\n",76,05,ec,5a)),null(),null());
HXLINE( 140)		 ::flixel::text::FlxText _hx_tmp15 = this->week1text;
HXDLIN( 140)		::String file = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("comic-sans.ttf",bd,08,d7,96)));
HXDLIN( 140)		::String _hx_tmp16;
HXDLIN( 140)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 140)			_hx_tmp16 = file;
            		}
            		else {
HXLINE( 140)			_hx_tmp16 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("comic-sans.ttf",bd,08,d7,96));
            		}
HXDLIN( 140)		_hx_tmp15->setFormat(_hx_tmp16,50,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 141)		{
HXLINE( 141)			 ::flixel::math::FlxBasePoint this5 = this->week1text->scrollFactor;
HXDLIN( 141)			this5->set_x(( (Float)(0) ));
HXDLIN( 141)			this5->set_y(( (Float)(0) ));
            		}
HXLINE( 142)		this->week1text->set_borderSize(((Float)3.25));
HXLINE( 143)		this->week1text->set_visible(true);
HXLINE( 144)		this->menuItems->add(this->week1text).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 146)		 ::flixel::FlxSprite _hx_tmp17 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,500,70,null());
HXDLIN( 146)		this->week2 = _hx_tmp17->loadGraphic(::backend::Paths_obj::image(HX_("purgatoryweeks/story2",16,09,d8,22),null(),null()),null(),null(),null(),null(),null());
HXLINE( 147)		{
HXLINE( 147)			 ::flixel::math::FlxBasePoint this6 = this->week2->scale;
HXDLIN( 147)			this6->set_x(((Float)0.8));
HXDLIN( 147)			this6->set_y(((Float)0.8));
            		}
HXLINE( 148)		this->week2->updateHitbox();
HXLINE( 149)		this->week2->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 150)		this->menuItems->add(this->week2).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 152)		this->week2text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,480,480,320,(HX_("Hell\n",8d,a2,ee,b7) + HX_("Week\n",76,05,ec,5a)),null(),null());
HXLINE( 153)		 ::flixel::text::FlxText _hx_tmp18 = this->week2text;
HXDLIN( 153)		::String file1 = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("comic-sans.ttf",bd,08,d7,96)));
HXDLIN( 153)		::String _hx_tmp19;
HXDLIN( 153)		if (::sys::FileSystem_obj::exists(file1)) {
HXLINE( 153)			_hx_tmp19 = file1;
            		}
            		else {
HXLINE( 153)			_hx_tmp19 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("comic-sans.ttf",bd,08,d7,96));
            		}
HXDLIN( 153)		_hx_tmp18->setFormat(_hx_tmp19,50,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 154)		{
HXLINE( 154)			 ::flixel::math::FlxBasePoint this7 = this->week2text->scrollFactor;
HXDLIN( 154)			this7->set_x(( (Float)(0) ));
HXDLIN( 154)			this7->set_y(( (Float)(0) ));
            		}
HXLINE( 155)		this->week2text->set_borderSize(((Float)3.25));
HXLINE( 156)		this->week2text->set_visible(true);
HXLINE( 157)		this->menuItems->add(this->week2text).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 159)		 ::flixel::FlxSprite _hx_tmp20 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,900,70,null());
HXDLIN( 159)		this->week3 = _hx_tmp20->loadGraphic(::backend::Paths_obj::image(HX_("purgatoryweeks/story3",17,09,d8,22),null(),null()),null(),null(),null(),null(),null());
HXLINE( 160)		{
HXLINE( 160)			 ::flixel::math::FlxBasePoint this8 = this->week3->scale;
HXDLIN( 160)			this8->set_x(((Float)0.8));
HXDLIN( 160)			this8->set_y(((Float)0.8));
            		}
HXLINE( 161)		this->week3->updateHitbox();
HXLINE( 162)		this->week3->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 163)		this->menuItems->add(this->week3).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 165)		this->week3text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,880,480,320,(HX_("Dave's\n",92,87,7a,08) + HX_("Rematch\n",38,3b,dd,75)),null(),null());
HXLINE( 166)		 ::flixel::text::FlxText _hx_tmp21 = this->week3text;
HXDLIN( 166)		::String file2 = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("comic-sans.ttf",bd,08,d7,96)));
HXDLIN( 166)		::String _hx_tmp22;
HXDLIN( 166)		if (::sys::FileSystem_obj::exists(file2)) {
HXLINE( 166)			_hx_tmp22 = file2;
            		}
            		else {
HXLINE( 166)			_hx_tmp22 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("comic-sans.ttf",bd,08,d7,96));
            		}
HXDLIN( 166)		_hx_tmp21->setFormat(_hx_tmp22,50,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 167)		{
HXLINE( 167)			 ::flixel::math::FlxBasePoint this9 = this->week3text->scrollFactor;
HXDLIN( 167)			this9->set_x(( (Float)(0) ));
HXDLIN( 167)			this9->set_y(( (Float)(0) ));
            		}
HXLINE( 168)		this->week3text->set_borderSize(((Float)3.25));
HXLINE( 169)		this->week3text->set_visible(true);
HXLINE( 170)		this->menuItems->add(this->week3text).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 172)		 ::flixel::FlxSprite textBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,(::flixel::FlxG_obj::height - 46),null())->makeGraphic(::flixel::FlxG_obj::width,56,-16777216,null(),null());
HXLINE( 173)		textBG->set_alpha(((Float)0.6));
HXLINE( 174)		this->menuItems->add(textBG).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 176)		::String leText = HX_("Use your mouse to select a week.",0d,68,93,63);
HXLINE( 177)		this->text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(textBG->x + -10),(textBG->y + 3),::flixel::FlxG_obj::width,leText,21,null());
HXLINE( 178)		 ::flixel::text::FlxText _hx_tmp23 = this->text;
HXDLIN( 178)		::String file3 = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("comic-sans.ttf",bd,08,d7,96)));
HXDLIN( 178)		::String _hx_tmp24;
HXDLIN( 178)		if (::sys::FileSystem_obj::exists(file3)) {
HXLINE( 178)			_hx_tmp24 = file3;
            		}
            		else {
HXLINE( 178)			_hx_tmp24 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("comic-sans.ttf",bd,08,d7,96));
            		}
HXDLIN( 178)		_hx_tmp23->setFormat(_hx_tmp24,18,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 179)		{
HXLINE( 179)			 ::flixel::math::FlxBasePoint this10 = this->text->scrollFactor;
HXDLIN( 179)			this10->set_x(( (Float)(0) ));
HXDLIN( 179)			this10->set_y(( (Float)(0) ));
            		}
HXLINE( 180)		this->menuItems->add(this->text).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 182)		::String leText3 = HX_("Press CTRL to open the Gameplay Modifier Menu",c6,26,dc,73);
HXLINE( 183)		 ::flixel::text::FlxText leText2 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,10,690,0,leText3,21,null());
HXLINE( 184)		::String file4 = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("comic-sans.ttf",bd,08,d7,96)));
HXDLIN( 184)		::String _hx_tmp25;
HXDLIN( 184)		if (::sys::FileSystem_obj::exists(file4)) {
HXLINE( 184)			_hx_tmp25 = file4;
            		}
            		else {
HXLINE( 184)			_hx_tmp25 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("comic-sans.ttf",bd,08,d7,96));
            		}
HXDLIN( 184)		leText2->setFormat(_hx_tmp25,18,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 185)		{
HXLINE( 185)			 ::flixel::math::FlxBasePoint this11 = leText2->scrollFactor;
HXDLIN( 185)			this11->set_x(( (Float)(0) ));
HXDLIN( 185)			this11->set_y(( (Float)(0) ));
            		}
HXLINE( 186)		this->menuItems->add(leText2).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 188)		 ::flixel::FlxSprite arrowshitSub =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN( 188)		 ::flixel::FlxSprite arrowshitSub1 = arrowshitSub->loadGraphic(::backend::Paths_obj::image(HX_("menuimages/stupidarrowsright",a3,66,85,8a),null(),null()),null(),null(),null(),null(),null());
HXLINE( 189)		arrowshitSub1->setGraphicSize(::Std_obj::_hx_int(arrowshitSub1->get_width()),null());
HXLINE( 190)		arrowshitSub1->updateHitbox();
HXLINE( 191)		{
HXLINE( 191)			int axes7 = 17;
HXDLIN( 191)			bool _hx_tmp26;
HXDLIN( 191)			if ((axes7 != 1)) {
HXLINE( 191)				_hx_tmp26 = (axes7 == 17);
            			}
            			else {
HXLINE( 191)				_hx_tmp26 = true;
            			}
HXDLIN( 191)			if (_hx_tmp26) {
HXLINE( 191)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 191)				arrowshitSub1->set_x(((( (Float)(_hx_tmp) ) - arrowshitSub1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 191)			bool _hx_tmp27;
HXDLIN( 191)			if ((axes7 != 16)) {
HXLINE( 191)				_hx_tmp27 = (axes7 == 17);
            			}
            			else {
HXLINE( 191)				_hx_tmp27 = true;
            			}
HXDLIN( 191)			if (_hx_tmp27) {
HXLINE( 191)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 191)				arrowshitSub1->set_y(((( (Float)(_hx_tmp) ) - arrowshitSub1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 192)		arrowshitSub1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 193)		this->menuItems->add(arrowshitSub1).StaticCast<  ::flixel::FlxSprite >();
            	}


void StoryMenuState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_bb97520c7169a052_197_update)
HXLINE( 198)		bool clicked;
HXDLIN( 198)		bool clicked1;
HXDLIN( 198)		if (::flixel::FlxG_obj::mouse->overlaps(this->week1,null())) {
HXLINE( 198)			clicked1 = (::flixel::FlxG_obj::mouse->_leftButton->current == 2);
            		}
            		else {
HXLINE( 198)			clicked1 = false;
            		}
HXDLIN( 198)		if (clicked1) {
HXLINE( 198)			clicked = !(this->lol);
            		}
            		else {
HXLINE( 198)			clicked = false;
            		}
HXLINE( 199)		bool clicked2;
HXDLIN( 199)		bool clicked21;
HXDLIN( 199)		if (::flixel::FlxG_obj::mouse->overlaps(this->week2,null())) {
HXLINE( 199)			clicked21 = (::flixel::FlxG_obj::mouse->_leftButton->current == 2);
            		}
            		else {
HXLINE( 199)			clicked21 = false;
            		}
HXDLIN( 199)		if (clicked21) {
HXLINE( 199)			clicked2 = !(this->lol2);
            		}
            		else {
HXLINE( 199)			clicked2 = false;
            		}
HXLINE( 200)		bool clicked3;
HXDLIN( 200)		bool clicked31;
HXDLIN( 200)		if (::flixel::FlxG_obj::mouse->overlaps(this->week3,null())) {
HXLINE( 200)			clicked31 = (::flixel::FlxG_obj::mouse->_leftButton->current == 2);
            		}
            		else {
HXLINE( 200)			clicked31 = false;
            		}
HXDLIN( 200)		if (clicked31) {
HXLINE( 200)			clicked3 = !(this->lol3);
            		}
            		else {
HXLINE( 200)			clicked3 = false;
            		}
HXLINE( 202)		if (clicked) {
HXLINE( 204)			this->lol = true;
HXLINE( 205)			::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE( 206)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 206)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("menu/confirmMenu",0f,67,5e,6d),null()),null(),null(),null(),null(),null());
HXLINE( 207)			this->startSong(HX_("shattered/shattered-hard",97,6c,53,bc),HX_("fallowed",82,69,46,33),HX_("reality breaking",13,62,18,36));
            		}
HXLINE( 210)		if (clicked2) {
HXLINE( 212)			this->lol2 = true;
HXLINE( 213)			::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE( 214)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 214)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("menu/confirmMenu",0f,67,5e,6d),null()),null(),null(),null(),null(),null());
HXLINE( 215)			this->startSong2(HX_("rebound/rebound-hard",31,f2,55,ae),HX_("disposition",f7,db,d9,c2),HX_("upheaval",38,cb,7f,52));
            		}
HXLINE( 219)		if (clicked3) {
HXLINE( 221)			this->lol3 = true;
HXLINE( 222)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 222)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("menu/confirmMenu",0f,67,5e,6d),null()),null(),null(),null(),null(),null());
HXLINE( 223)			::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE( 224)			this->startSong3(HX_("roundabout/roundabout-hard",e9,5f,1c,ab),HX_("rascal",aa,64,dc,ba),HX_("triple threat",1c,c4,6d,2e));
            		}
HXLINE( 227)		if (this->get_controls()->get_BACK()) {
HXLINE( 229)			::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE( 230)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 230)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("menu/cancelMenu",e9,45,d1,a2),null()),null(),null(),null(),null(),null());
HXLINE( 231)			::backend::MusicBeatState_obj::switchState( ::states::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE( 234)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 234)		if (_this->keyManager->checkStatusUnsafe(17,_this->status)) {
HXLINE( 236)			this->persistentUpdate = false;
HXLINE( 237)			this->openSubState( ::substates::GameplayChangersSubstate_obj::__alloc( HX_CTX ));
            		}
HXLINE( 240)		if (this->get_controls()->get_UI_RIGHT_P()) {
HXLINE( 242)			this->openSubState( ::states::Section2Substate_obj::__alloc( HX_CTX ));
HXLINE( 243)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 243)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("menu/scrollMenu",fc,75,a6,f1),null()),null(),null(),null(),null(),null());
            		}
HXLINE( 247)		this->super::update(elapsed);
            	}


void StoryMenuState_obj::startSong(::String songName1,::String songName2,::String songName3){
            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_3, ::states::StoryMenuState,_gthis,::String,songName2,::String,songName1,::String,songName3) HXARGC(1)
            		void _hx_run( ::flixel::effects::FlxFlicker flick){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::states::StoryMenuState,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::FlxSprite spr){
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::flixel::FlxSprite,spr) HXARGC(1)
            				void _hx_run( ::flixel::tweens::FlxTween twn){
            					HX_STACKFRAME(&_hx_pos_bb97520c7169a052_270_startSong)
HXLINE( 270)					spr->kill();
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_STACKFRAME(&_hx_pos_bb97520c7169a052_264_startSong)
HXLINE( 265)				 ::flixel::FlxCamera _hx_tmp = _gthis->get_camera();
HXDLIN( 265)				::flixel::tweens::FlxTween_obj::tween(_hx_tmp, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.8), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoIn_dyn())));
HXLINE( 266)				::flixel::tweens::FlxTween_obj::tween(spr, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadOut_dyn())
            					->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(spr)))));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_bb97520c7169a052_276_startSong)
HXLINE( 276)				::backend::MusicBeatState_obj::switchState(::states::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::states::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),false));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_bb97520c7169a052_253_startSong)
HXLINE( 254)			::states::PlayState_obj::storyPlaylist = ::Array_obj< ::String >::__new(3)->init(0,songName1)->init(1,songName2)->init(2,songName3);
HXLINE( 255)			::states::PlayState_obj::isStoryMode = true;
HXLINE( 256)			::states::PlayState_obj::storyWeek = 2;
HXLINE( 257)			::states::PlayState_obj::storyDifficulty = 2;
HXLINE( 258)			::states::PlayState_obj::SONG = ::backend::Song_obj::loadFromJson(::states::PlayState_obj::storyPlaylist->__get(0),HX_("",00,00,00,00));
HXLINE( 259)			::states::PlayState_obj::campaignScore = 0;
HXLINE( 260)			::states::PlayState_obj::campaignMisses = 0;
HXLINE( 261)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("zoom",13,a3,f8,50),5)),((Float)0.8), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoIn_dyn())));
HXLINE( 262)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("angle",d3,43,e2,22),365)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoIn_dyn())));
HXLINE( 263)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),0)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoIn_dyn())));
HXLINE( 264)			_gthis->menuItems->forEach( ::Dynamic(new _hx_Closure_1(_gthis)),null());
HXLINE( 274)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_2()),null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_bb97520c7169a052_251_startSong)
HXDLIN( 251)		 ::states::StoryMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 252)		::flixel::effects::FlxFlicker_obj::flicker(this->week1,1,((Float)0.06),false,false, ::Dynamic(new _hx_Closure_3(_gthis,songName2,songName1,songName3)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC3(StoryMenuState_obj,startSong,(void))

void StoryMenuState_obj::startSong2(::String songName1,::String songName2,::String songName3){
            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_3, ::states::StoryMenuState,_gthis,::String,songName2,::String,songName1,::String,songName3) HXARGC(1)
            		void _hx_run( ::flixel::effects::FlxFlicker flick){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::states::StoryMenuState,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::FlxSprite spr){
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::flixel::FlxSprite,spr) HXARGC(1)
            				void _hx_run( ::flixel::tweens::FlxTween twn){
            					HX_STACKFRAME(&_hx_pos_bb97520c7169a052_301_startSong2)
HXLINE( 301)					spr->kill();
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_STACKFRAME(&_hx_pos_bb97520c7169a052_295_startSong2)
HXLINE( 296)				 ::flixel::FlxCamera _hx_tmp = _gthis->get_camera();
HXDLIN( 296)				::flixel::tweens::FlxTween_obj::tween(_hx_tmp, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.8), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoIn_dyn())));
HXLINE( 297)				::flixel::tweens::FlxTween_obj::tween(spr, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadOut_dyn())
            					->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(spr)))));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_bb97520c7169a052_307_startSong2)
HXLINE( 307)				::backend::MusicBeatState_obj::switchState(::states::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::states::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),false));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_bb97520c7169a052_284_startSong2)
HXLINE( 285)			::states::PlayState_obj::storyPlaylist = ::Array_obj< ::String >::__new(3)->init(0,songName1)->init(1,songName2)->init(2,songName3);
HXLINE( 286)			::states::PlayState_obj::isStoryMode = true;
HXLINE( 287)			::states::PlayState_obj::storyWeek = 2;
HXLINE( 288)			::states::PlayState_obj::storyDifficulty = 2;
HXLINE( 289)			::states::PlayState_obj::SONG = ::backend::Song_obj::loadFromJson(::states::PlayState_obj::storyPlaylist->__get(0),HX_("",00,00,00,00));
HXLINE( 290)			::states::PlayState_obj::campaignScore = 0;
HXLINE( 291)			::states::PlayState_obj::campaignMisses = 0;
HXLINE( 292)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("zoom",13,a3,f8,50),5)),((Float)0.8), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoIn_dyn())));
HXLINE( 293)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("angle",d3,43,e2,22),365)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoIn_dyn())));
HXLINE( 294)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),0)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoIn_dyn())));
HXLINE( 295)			_gthis->menuItems->forEach( ::Dynamic(new _hx_Closure_1(_gthis)),null());
HXLINE( 305)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_2()),null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_bb97520c7169a052_282_startSong2)
HXDLIN( 282)		 ::states::StoryMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 283)		::flixel::effects::FlxFlicker_obj::flicker(this->week2,1,((Float)0.06),false,false, ::Dynamic(new _hx_Closure_3(_gthis,songName2,songName1,songName3)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC3(StoryMenuState_obj,startSong2,(void))

void StoryMenuState_obj::startSong3(::String songName1,::String songName2,::String songName3){
            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_3, ::states::StoryMenuState,_gthis,::String,songName2,::String,songName1,::String,songName3) HXARGC(1)
            		void _hx_run( ::flixel::effects::FlxFlicker flick){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::states::StoryMenuState,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::FlxSprite spr){
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::flixel::FlxSprite,spr) HXARGC(1)
            				void _hx_run( ::flixel::tweens::FlxTween twn){
            					HX_STACKFRAME(&_hx_pos_bb97520c7169a052_332_startSong3)
HXLINE( 332)					spr->kill();
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_STACKFRAME(&_hx_pos_bb97520c7169a052_326_startSong3)
HXLINE( 327)				 ::flixel::FlxCamera _hx_tmp = _gthis->get_camera();
HXDLIN( 327)				::flixel::tweens::FlxTween_obj::tween(_hx_tmp, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.8), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoIn_dyn())));
HXLINE( 328)				::flixel::tweens::FlxTween_obj::tween(spr, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadOut_dyn())
            					->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(spr)))));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_bb97520c7169a052_338_startSong3)
HXLINE( 338)				::backend::MusicBeatState_obj::switchState(::states::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::states::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),false));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_bb97520c7169a052_315_startSong3)
HXLINE( 316)			::states::PlayState_obj::storyPlaylist = ::Array_obj< ::String >::__new(3)->init(0,songName1)->init(1,songName2)->init(2,songName3);
HXLINE( 317)			::states::PlayState_obj::isStoryMode = true;
HXLINE( 318)			::states::PlayState_obj::storyWeek = 2;
HXLINE( 319)			::states::PlayState_obj::storyDifficulty = 2;
HXLINE( 320)			::states::PlayState_obj::SONG = ::backend::Song_obj::loadFromJson(::states::PlayState_obj::storyPlaylist->__get(0),HX_("",00,00,00,00));
HXLINE( 321)			::states::PlayState_obj::campaignScore = 0;
HXLINE( 322)			::states::PlayState_obj::campaignMisses = 0;
HXLINE( 323)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("zoom",13,a3,f8,50),5)),((Float)0.8), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoIn_dyn())));
HXLINE( 324)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("angle",d3,43,e2,22),365)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoIn_dyn())));
HXLINE( 325)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),0)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoIn_dyn())));
HXLINE( 326)			_gthis->menuItems->forEach( ::Dynamic(new _hx_Closure_1(_gthis)),null());
HXLINE( 336)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_2()),null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_bb97520c7169a052_313_startSong3)
HXDLIN( 313)		 ::states::StoryMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 314)		::flixel::effects::FlxFlicker_obj::flicker(this->week3,1,((Float)0.06),false,false, ::Dynamic(new _hx_Closure_3(_gthis,songName2,songName1,songName3)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC3(StoryMenuState_obj,startSong3,(void))

bool StoryMenuState_obj::weekIsLocked(int weekNum){
            	HX_STACKFRAME(&_hx_pos_bb97520c7169a052_342_weekIsLocked)
HXLINE( 343)		 ::backend::WeekData leWeek = ( ( ::backend::WeekData)(::backend::WeekData_obj::weeksLoaded->get(::backend::WeekData_obj::weeksList->__get(weekNum))) );
HXLINE( 344)		bool _hx_tmp;
HXDLIN( 344)		if (!(leWeek->startUnlocked)) {
HXLINE( 344)			_hx_tmp = (leWeek->weekBefore.length > 0);
            		}
            		else {
HXLINE( 344)			_hx_tmp = false;
            		}
HXDLIN( 344)		if (_hx_tmp) {
HXLINE( 344)			if (::states::StoryMenuState_obj::weekCompleted->exists(leWeek->weekBefore)) {
HXLINE( 344)				return !(::states::StoryMenuState_obj::weekCompleted->get_bool(leWeek->weekBefore));
            			}
            			else {
HXLINE( 344)				return true;
            			}
            		}
            		else {
HXLINE( 344)			return false;
            		}
HXDLIN( 344)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(StoryMenuState_obj,weekIsLocked,return )

 ::haxe::ds::StringMap StoryMenuState_obj::weekCompleted;

::Array< ::String > StoryMenuState_obj::bgPaths;

 ::Dynamic StoryMenuState_obj::randomizeBG(){
            	HX_STACKFRAME(&_hx_pos_bb97520c7169a052_67_randomizeBG)
HXLINE(  68)		int chance = ::flixel::FlxG_obj::random->_hx_int(0,(::states::StoryMenuState_obj::bgPaths->length - 1),null());
HXLINE(  69)		return ::backend::Paths_obj::image(::states::StoryMenuState_obj::bgPaths->__get(chance),null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(StoryMenuState_obj,randomizeBG,return )


::hx::ObjectPtr< StoryMenuState_obj > StoryMenuState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< StoryMenuState_obj > __this = new StoryMenuState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< StoryMenuState_obj > StoryMenuState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	StoryMenuState_obj *__this = (StoryMenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StoryMenuState_obj), true, "states.StoryMenuState"));
	*(void **)__this = StoryMenuState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

StoryMenuState_obj::StoryMenuState_obj()
{
}

void StoryMenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StoryMenuState);
	HX_MARK_MEMBER_NAME(week1,"week1");
	HX_MARK_MEMBER_NAME(o,"o");
	HX_MARK_MEMBER_NAME(lol,"lol");
	HX_MARK_MEMBER_NAME(lol2,"lol2");
	HX_MARK_MEMBER_NAME(lol3,"lol3");
	HX_MARK_MEMBER_NAME(canExit,"canExit");
	HX_MARK_MEMBER_NAME(week1text,"week1text");
	HX_MARK_MEMBER_NAME(week2text,"week2text");
	HX_MARK_MEMBER_NAME(week2,"week2");
	HX_MARK_MEMBER_NAME(week3,"week3");
	HX_MARK_MEMBER_NAME(week3text,"week3text");
	HX_MARK_MEMBER_NAME(arrowshit,"arrowshit");
	HX_MARK_MEMBER_NAME(menuItems,"menuItems");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(text2,"text2");
	 ::backend::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StoryMenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(week1,"week1");
	HX_VISIT_MEMBER_NAME(o,"o");
	HX_VISIT_MEMBER_NAME(lol,"lol");
	HX_VISIT_MEMBER_NAME(lol2,"lol2");
	HX_VISIT_MEMBER_NAME(lol3,"lol3");
	HX_VISIT_MEMBER_NAME(canExit,"canExit");
	HX_VISIT_MEMBER_NAME(week1text,"week1text");
	HX_VISIT_MEMBER_NAME(week2text,"week2text");
	HX_VISIT_MEMBER_NAME(week2,"week2");
	HX_VISIT_MEMBER_NAME(week3,"week3");
	HX_VISIT_MEMBER_NAME(week3text,"week3text");
	HX_VISIT_MEMBER_NAME(arrowshit,"arrowshit");
	HX_VISIT_MEMBER_NAME(menuItems,"menuItems");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(text2,"text2");
	 ::backend::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val StoryMenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"o") ) { return ::hx::Val( o ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"lol") ) { return ::hx::Val( lol ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"lol2") ) { return ::hx::Val( lol2 ); }
		if (HX_FIELD_EQ(inName,"lol3") ) { return ::hx::Val( lol3 ); }
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"week1") ) { return ::hx::Val( week1 ); }
		if (HX_FIELD_EQ(inName,"week2") ) { return ::hx::Val( week2 ); }
		if (HX_FIELD_EQ(inName,"week3") ) { return ::hx::Val( week3 ); }
		if (HX_FIELD_EQ(inName,"text2") ) { return ::hx::Val( text2 ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"canExit") ) { return ::hx::Val( canExit ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"week1text") ) { return ::hx::Val( week1text ); }
		if (HX_FIELD_EQ(inName,"week2text") ) { return ::hx::Val( week2text ); }
		if (HX_FIELD_EQ(inName,"week3text") ) { return ::hx::Val( week3text ); }
		if (HX_FIELD_EQ(inName,"arrowshit") ) { return ::hx::Val( arrowshit ); }
		if (HX_FIELD_EQ(inName,"menuItems") ) { return ::hx::Val( menuItems ); }
		if (HX_FIELD_EQ(inName,"startSong") ) { return ::hx::Val( startSong_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startSong2") ) { return ::hx::Val( startSong2_dyn() ); }
		if (HX_FIELD_EQ(inName,"startSong3") ) { return ::hx::Val( startSong3_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"weekIsLocked") ) { return ::hx::Val( weekIsLocked_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool StoryMenuState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"bgPaths") ) { outValue = ( bgPaths ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"randomizeBG") ) { outValue = randomizeBG_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"weekCompleted") ) { outValue = ( weekCompleted ); return true; }
	}
	return false;
}

::hx::Val StoryMenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"o") ) { o=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"lol") ) { lol=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"lol2") ) { lol2=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lol3") ) { lol3=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"week1") ) { week1=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"week2") ) { week2=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"week3") ) { week3=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text2") ) { text2=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"canExit") ) { canExit=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"week1text") ) { week1text=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"week2text") ) { week2text=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"week3text") ) { week3text=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arrowshit") ) { arrowshit=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"menuItems") ) { menuItems=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool StoryMenuState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"bgPaths") ) { bgPaths=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"weekCompleted") ) { weekCompleted=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void StoryMenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("week1",bd,95,be,c7));
	outFields->push(HX_("o",6f,00,00,00));
	outFields->push(HX_("lol",89,54,52,00));
	outFields->push(HX_("lol2",89,a3,b7,47));
	outFields->push(HX_("lol3",8a,a3,b7,47));
	outFields->push(HX_("canExit",4e,df,75,61));
	outFields->push(HX_("week1text",ea,84,e2,52));
	outFields->push(HX_("week2text",6b,19,49,e6));
	outFields->push(HX_("week2",be,95,be,c7));
	outFields->push(HX_("week3",bf,95,be,c7));
	outFields->push(HX_("week3text",ec,ad,af,79));
	outFields->push(HX_("arrowshit",09,62,1d,1d));
	outFields->push(HX_("menuItems",e1,15,e5,5c));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("text2",e5,4a,99,0d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StoryMenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(StoryMenuState_obj,week1),HX_("week1",bd,95,be,c7)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(StoryMenuState_obj,o),HX_("o",6f,00,00,00)},
	{::hx::fsBool,(int)offsetof(StoryMenuState_obj,lol),HX_("lol",89,54,52,00)},
	{::hx::fsBool,(int)offsetof(StoryMenuState_obj,lol2),HX_("lol2",89,a3,b7,47)},
	{::hx::fsBool,(int)offsetof(StoryMenuState_obj,lol3),HX_("lol3",8a,a3,b7,47)},
	{::hx::fsBool,(int)offsetof(StoryMenuState_obj,canExit),HX_("canExit",4e,df,75,61)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(StoryMenuState_obj,week1text),HX_("week1text",ea,84,e2,52)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(StoryMenuState_obj,week2text),HX_("week2text",6b,19,49,e6)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(StoryMenuState_obj,week2),HX_("week2",be,95,be,c7)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(StoryMenuState_obj,week3),HX_("week3",bf,95,be,c7)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(StoryMenuState_obj,week3text),HX_("week3text",ec,ad,af,79)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(StoryMenuState_obj,arrowshit),HX_("arrowshit",09,62,1d,1d)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(StoryMenuState_obj,menuItems),HX_("menuItems",e1,15,e5,5c)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(StoryMenuState_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(StoryMenuState_obj,text2),HX_("text2",e5,4a,99,0d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo StoryMenuState_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &StoryMenuState_obj::weekCompleted,HX_("weekCompleted",f7,82,ec,84)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &StoryMenuState_obj::bgPaths,HX_("bgPaths",29,1b,7e,6a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String StoryMenuState_obj_sMemberFields[] = {
	HX_("week1",bd,95,be,c7),
	HX_("o",6f,00,00,00),
	HX_("lol",89,54,52,00),
	HX_("lol2",89,a3,b7,47),
	HX_("lol3",8a,a3,b7,47),
	HX_("canExit",4e,df,75,61),
	HX_("week1text",ea,84,e2,52),
	HX_("week2text",6b,19,49,e6),
	HX_("week2",be,95,be,c7),
	HX_("week3",bf,95,be,c7),
	HX_("week3text",ec,ad,af,79),
	HX_("arrowshit",09,62,1d,1d),
	HX_("menuItems",e1,15,e5,5c),
	HX_("text",ad,cc,f9,4c),
	HX_("text2",e5,4a,99,0d),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("startSong",57,9d,4b,05),
	HX_("startSong2",fb,0e,de,9c),
	HX_("startSong3",fc,0e,de,9c),
	HX_("weekIsLocked",a8,d0,e6,fb),
	::String(null()) };

static void StoryMenuState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StoryMenuState_obj::weekCompleted,"weekCompleted");
	HX_MARK_MEMBER_NAME(StoryMenuState_obj::bgPaths,"bgPaths");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StoryMenuState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StoryMenuState_obj::weekCompleted,"weekCompleted");
	HX_VISIT_MEMBER_NAME(StoryMenuState_obj::bgPaths,"bgPaths");
};

#endif

::hx::Class StoryMenuState_obj::__mClass;

static ::String StoryMenuState_obj_sStaticFields[] = {
	HX_("weekCompleted",f7,82,ec,84),
	HX_("bgPaths",29,1b,7e,6a),
	HX_("randomizeBG",36,81,6b,9d),
	::String(null())
};

void StoryMenuState_obj::__register()
{
	StoryMenuState_obj _hx_dummy;
	StoryMenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.StoryMenuState",09,2f,42,21);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StoryMenuState_obj::__GetStatic;
	__mClass->mSetStaticField = &StoryMenuState_obj::__SetStatic;
	__mClass->mMarkFunc = StoryMenuState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StoryMenuState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StoryMenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StoryMenuState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StoryMenuState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StoryMenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StoryMenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StoryMenuState_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_bb97520c7169a052_33_boot)
HXDLIN(  33)		weekCompleted =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_bb97520c7169a052_36_boot)
HXDLIN(  36)		bgPaths = ::Array_obj< ::String >::fromData( _hx_array_data_21422f09_22,26);
            	}
}

} // end namespace states
