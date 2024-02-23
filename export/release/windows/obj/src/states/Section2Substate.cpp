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
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
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
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
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
#ifndef INCLUDED_shaders_BlockedGlitchEffect
#include <shaders/BlockedGlitchEffect.h>
#endif
#ifndef INCLUDED_shaders_BlockedGlitchShader
#include <shaders/BlockedGlitchShader.h>
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
#ifndef INCLUDED_substates_GameplayChangersSubstate
#include <substates/GameplayChangersSubstate.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a03029f7f5045b85_348_new,"states.Section2Substate","new",0xcbc6e31c,"states.Section2Substate.new","states/StoryMenuState.hx",348,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_a03029f7f5045b85_515_update,"states.Section2Substate","update",0x878dd0cd,"states.Section2Substate.update","states/StoryMenuState.hx",515,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_a03029f7f5045b85_597_startSong4,"states.Section2Substate","startSong4",0x02dd0bc1,"states.Section2Substate.startSong4","states/StoryMenuState.hx",597,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_a03029f7f5045b85_591_startSong4,"states.Section2Substate","startSong4",0x02dd0bc1,"states.Section2Substate.startSong4","states/StoryMenuState.hx",591,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_a03029f7f5045b85_603_startSong4,"states.Section2Substate","startSong4",0x02dd0bc1,"states.Section2Substate.startSong4","states/StoryMenuState.hx",603,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_a03029f7f5045b85_580_startSong4,"states.Section2Substate","startSong4",0x02dd0bc1,"states.Section2Substate.startSong4","states/StoryMenuState.hx",580,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_a03029f7f5045b85_578_startSong4,"states.Section2Substate","startSong4",0x02dd0bc1,"states.Section2Substate.startSong4","states/StoryMenuState.hx",578,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_a03029f7f5045b85_628_startSong5,"states.Section2Substate","startSong5",0x02dd0bc2,"states.Section2Substate.startSong5","states/StoryMenuState.hx",628,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_a03029f7f5045b85_622_startSong5,"states.Section2Substate","startSong5",0x02dd0bc2,"states.Section2Substate.startSong5","states/StoryMenuState.hx",622,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_a03029f7f5045b85_634_startSong5,"states.Section2Substate","startSong5",0x02dd0bc2,"states.Section2Substate.startSong5","states/StoryMenuState.hx",634,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_a03029f7f5045b85_611_startSong5,"states.Section2Substate","startSong5",0x02dd0bc2,"states.Section2Substate.startSong5","states/StoryMenuState.hx",611,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_a03029f7f5045b85_609_startSong5,"states.Section2Substate","startSong5",0x02dd0bc2,"states.Section2Substate.startSong5","states/StoryMenuState.hx",609,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_a03029f7f5045b85_659_startSong6,"states.Section2Substate","startSong6",0x02dd0bc3,"states.Section2Substate.startSong6","states/StoryMenuState.hx",659,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_a03029f7f5045b85_653_startSong6,"states.Section2Substate","startSong6",0x02dd0bc3,"states.Section2Substate.startSong6","states/StoryMenuState.hx",653,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_a03029f7f5045b85_665_startSong6,"states.Section2Substate","startSong6",0x02dd0bc3,"states.Section2Substate.startSong6","states/StoryMenuState.hx",665,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_a03029f7f5045b85_642_startSong6,"states.Section2Substate","startSong6",0x02dd0bc3,"states.Section2Substate.startSong6","states/StoryMenuState.hx",642,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_a03029f7f5045b85_640_startSong6,"states.Section2Substate","startSong6",0x02dd0bc3,"states.Section2Substate.startSong6","states/StoryMenuState.hx",640,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_a03029f7f5045b85_670_weekIsLocked,"states.Section2Substate","weekIsLocked",0x1d31866c,"states.Section2Substate.weekIsLocked","states/StoryMenuState.hx",670,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_a03029f7f5045b85_395_randomizeBG,"states.Section2Substate","randomizeBG",0x7689aff2,"states.Section2Substate.randomizeBG","states/StoryMenuState.hx",395,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_a03029f7f5045b85_366_boot,"states.Section2Substate","boot",0x7a58d5f6,"states.Section2Substate.boot","states/StoryMenuState.hx",366,0xbd7f4e34)
HX_LOCAL_STACK_FRAME(_hx_pos_a03029f7f5045b85_369_boot,"states.Section2Substate","boot",0x7a58d5f6,"states.Section2Substate.boot","states/StoryMenuState.hx",369,0xbd7f4e34)
static const ::String _hx_array_data_b5a0652a_21[] = {
	HX_("backgrounds/arandomguy",31,6c,0a,74),HX_("backgrounds/cesars",bb,1a,0d,24),HX_("backgrounds/cheesedjelly",5b,15,9d,3e),HX_("backgrounds/darealmatt",f9,e0,af,1b),HX_("backgrounds/darlyboxman",87,4f,03,cb),HX_("backgrounds/doodoofeces",a8,45,49,64),HX_("backgrounds/fast_f00d",77,24,fc,00),HX_("backgrounds/ion",3e,38,33,86),HX_("backgrounds/isaaclul",54,0f,95,76),HX_("backgrounds/kanandraw",7f,8a,e2,58),HX_("backgrounds/mmimim",72,4b,40,b8),HX_("backgrounds/osp",42,c9,37,86),HX_("backgrounds/Senza_titolo_200_20230711092018",e7,33,2e,cd),HX_("backgrounds/Senza_titolo_201_20230711093117",e5,55,08,95),HX_("backgrounds/slushX",31,fd,f0,92),HX_("backgrounds/spitz",a8,e1,47,a6),HX_("backgrounds/tamrika",e3,04,b8,27),HX_("backgrounds/sultimate poop",06,b5,fc,47),HX_("backgrounds/ultimate poop2",8d,86,9a,43),HX_("backgrounds/voltrex",7a,a7,d4,81),HX_("backgrounds/watch_out",54,36,b3,8a),HX_("backgrounds/zevisly",58,23,56,e3),
};
namespace states{

void Section2Substate_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_a03029f7f5045b85_348_new)
HXLINE( 355)		this->lol6 = false;
HXLINE( 354)		this->lol5 = false;
HXLINE( 353)		this->lol4 = false;
HXLINE( 401)		super::__construct();
HXLINE( 403)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN( 403)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(::states::Section2Substate_obj::randomizeBG(),null(),null(),null(),null(),null());
HXLINE( 404)		bg1->setGraphicSize(::Std_obj::_hx_int((bg1->get_width() * ((Float)1.175))),null());
HXLINE( 405)		bg1->updateHitbox();
HXLINE( 406)		{
HXLINE( 406)			int axes = 17;
HXDLIN( 406)			bool _hx_tmp;
HXDLIN( 406)			if ((axes != 1)) {
HXLINE( 406)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE( 406)				_hx_tmp = true;
            			}
HXDLIN( 406)			if (_hx_tmp) {
HXLINE( 406)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 406)				bg1->set_x(((( (Float)(_hx_tmp) ) - bg1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 406)			bool _hx_tmp1;
HXDLIN( 406)			if ((axes != 16)) {
HXLINE( 406)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE( 406)				_hx_tmp1 = true;
            			}
HXDLIN( 406)			if (_hx_tmp1) {
HXLINE( 406)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 406)				bg1->set_y(((( (Float)(_hx_tmp) ) - bg1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 407)		bg1->set_color(-13762560);
HXLINE( 408)		bg1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 409)		this->add(bg1);
HXLINE( 411)		 ::flixel::addons::display::FlxBackdrop check =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,::backend::Paths_obj::image(HX_("menuimages/check",10,f1,52,ff),null(),null()),null(),0,0);
HXLINE( 412)		{
HXLINE( 412)			 ::flixel::math::FlxBasePoint this1 = check->velocity;
HXDLIN( 412)			this1->set_x(( (Float)(150) ));
HXDLIN( 412)			this1->set_y(( (Float)(150) ));
            		}
HXLINE( 413)		{
HXLINE( 413)			int axes1 = 17;
HXDLIN( 413)			bool _hx_tmp2;
HXDLIN( 413)			if ((axes1 != 1)) {
HXLINE( 413)				_hx_tmp2 = (axes1 == 17);
            			}
            			else {
HXLINE( 413)				_hx_tmp2 = true;
            			}
HXDLIN( 413)			if (_hx_tmp2) {
HXLINE( 413)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 413)				check->set_x(((( (Float)(_hx_tmp) ) - check->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 413)			bool _hx_tmp3;
HXDLIN( 413)			if ((axes1 != 16)) {
HXLINE( 413)				_hx_tmp3 = (axes1 == 17);
            			}
            			else {
HXLINE( 413)				_hx_tmp3 = true;
            			}
HXDLIN( 413)			if (_hx_tmp3) {
HXLINE( 413)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 413)				check->set_y(((( (Float)(_hx_tmp) ) - check->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 414)		this->add(check);
HXLINE( 416)		 ::flixel::FlxSprite glow =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN( 416)		 ::flixel::FlxSprite glow1 = glow->loadGraphic(::backend::Paths_obj::image(HX_("menuimages/glow",45,97,aa,a5),null(),null()),null(),null(),null(),null(),null());
HXLINE( 417)		glow1->setGraphicSize(::Std_obj::_hx_int((glow1->get_width() * ((Float)1.175))),null());
HXLINE( 418)		glow1->updateHitbox();
HXLINE( 419)		{
HXLINE( 419)			int axes2 = 17;
HXDLIN( 419)			bool _hx_tmp4;
HXDLIN( 419)			if ((axes2 != 1)) {
HXLINE( 419)				_hx_tmp4 = (axes2 == 17);
            			}
            			else {
HXLINE( 419)				_hx_tmp4 = true;
            			}
HXDLIN( 419)			if (_hx_tmp4) {
HXLINE( 419)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 419)				glow1->set_x(((( (Float)(_hx_tmp) ) - glow1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 419)			bool _hx_tmp5;
HXDLIN( 419)			if ((axes2 != 16)) {
HXLINE( 419)				_hx_tmp5 = (axes2 == 17);
            			}
            			else {
HXLINE( 419)				_hx_tmp5 = true;
            			}
HXDLIN( 419)			if (_hx_tmp5) {
HXLINE( 419)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 419)				glow1->set_y(((( (Float)(_hx_tmp) ) - glow1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 420)		glow1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 421)		this->add(glow1);
HXLINE( 423)		 ::flixel::FlxSprite gr =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN( 423)		 ::flixel::FlxSprite gr1 = gr->loadGraphic(::backend::Paths_obj::image(HX_("menuimages/purgatorygrad",3f,00,0a,bc),null(),null()),null(),null(),null(),null(),null());
HXLINE( 424)		gr1->setGraphicSize(::Std_obj::_hx_int((gr1->get_width() * ((Float)1.175))),null());
HXLINE( 425)		gr1->updateHitbox();
HXLINE( 426)		{
HXLINE( 426)			int axes3 = 17;
HXDLIN( 426)			bool _hx_tmp6;
HXDLIN( 426)			if ((axes3 != 1)) {
HXLINE( 426)				_hx_tmp6 = (axes3 == 17);
            			}
            			else {
HXLINE( 426)				_hx_tmp6 = true;
            			}
HXDLIN( 426)			if (_hx_tmp6) {
HXLINE( 426)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 426)				gr1->set_x(((( (Float)(_hx_tmp) ) - gr1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 426)			bool _hx_tmp7;
HXDLIN( 426)			if ((axes3 != 16)) {
HXLINE( 426)				_hx_tmp7 = (axes3 == 17);
            			}
            			else {
HXLINE( 426)				_hx_tmp7 = true;
            			}
HXDLIN( 426)			if (_hx_tmp7) {
HXLINE( 426)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 426)				gr1->set_y(((( (Float)(_hx_tmp) ) - gr1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 427)		gr1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 428)		this->add(gr1);
HXLINE( 430)		 ::flixel::FlxSprite line =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN( 430)		 ::flixel::FlxSprite line1 = line->loadGraphic(::backend::Paths_obj::image(HX_("menuimages/line",ac,60,f6,a8),null(),null()),null(),null(),null(),null(),null());
HXLINE( 431)		line1->setGraphicSize(::Std_obj::_hx_int((glow1->get_width() * ((Float)1.175))),null());
HXLINE( 432)		line1->updateHitbox();
HXLINE( 433)		{
HXLINE( 433)			int axes4 = 17;
HXDLIN( 433)			bool _hx_tmp8;
HXDLIN( 433)			if ((axes4 != 1)) {
HXLINE( 433)				_hx_tmp8 = (axes4 == 17);
            			}
            			else {
HXLINE( 433)				_hx_tmp8 = true;
            			}
HXDLIN( 433)			if (_hx_tmp8) {
HXLINE( 433)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 433)				line1->set_x(((( (Float)(_hx_tmp) ) - line1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 433)			bool _hx_tmp9;
HXDLIN( 433)			if ((axes4 != 16)) {
HXLINE( 433)				_hx_tmp9 = (axes4 == 17);
            			}
            			else {
HXLINE( 433)				_hx_tmp9 = true;
            			}
HXDLIN( 433)			if (_hx_tmp9) {
HXLINE( 433)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 433)				line1->set_y(((( (Float)(_hx_tmp) ) - line1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 434)		line1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 435)		this->add(line1);
HXLINE( 437)		 ::flixel::addons::display::FlxBackdrop slidething =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,::backend::Paths_obj::image(HX_("menuimages/hahaslider",8b,40,35,9c),null(),null()),null(),0,10000);
HXLINE( 438)		{
HXLINE( 438)			 ::flixel::math::FlxBasePoint this2 = slidething->velocity;
HXDLIN( 438)			this2->set_x(( (Float)(-14) ));
HXDLIN( 438)			this2->set_y(( (Float)(0) ));
            		}
HXLINE( 439)		slidething->set_y(( (Float)(150) ));
HXLINE( 440)		{
HXLINE( 440)			int axes5 = 1;
HXDLIN( 440)			bool _hx_tmp10;
HXDLIN( 440)			if ((axes5 != 1)) {
HXLINE( 440)				_hx_tmp10 = (axes5 == 17);
            			}
            			else {
HXLINE( 440)				_hx_tmp10 = true;
            			}
HXDLIN( 440)			if (_hx_tmp10) {
HXLINE( 440)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 440)				slidething->set_x(((( (Float)(_hx_tmp) ) - slidething->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 440)			bool _hx_tmp11;
HXDLIN( 440)			if ((axes5 != 16)) {
HXLINE( 440)				_hx_tmp11 = (axes5 == 17);
            			}
            			else {
HXLINE( 440)				_hx_tmp11 = true;
            			}
HXDLIN( 440)			if (_hx_tmp11) {
HXLINE( 440)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 440)				slidething->set_y(((( (Float)(_hx_tmp) ) - slidething->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 441)		slidething->setGraphicSize(::Std_obj::_hx_int((slidething->get_width() * ((Float)0.65))),null());
HXLINE( 442)		this->add(slidething);
HXLINE( 444)		 ::flixel::addons::display::FlxBackdrop spikes =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,::backend::Paths_obj::image(HX_("menuimages/spikeys",68,87,cf,cd),null(),null()),null(),0,10000);
HXLINE( 445)		{
HXLINE( 445)			 ::flixel::math::FlxBasePoint this3 = spikes->velocity;
HXDLIN( 445)			this3->set_x(( (Float)(100) ));
HXDLIN( 445)			this3->set_y(( (Float)(0) ));
            		}
HXLINE( 446)		{
HXLINE( 446)			int axes6 = 17;
HXDLIN( 446)			bool _hx_tmp12;
HXDLIN( 446)			if ((axes6 != 1)) {
HXLINE( 446)				_hx_tmp12 = (axes6 == 17);
            			}
            			else {
HXLINE( 446)				_hx_tmp12 = true;
            			}
HXDLIN( 446)			if (_hx_tmp12) {
HXLINE( 446)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 446)				spikes->set_x(((( (Float)(_hx_tmp) ) - spikes->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 446)			bool _hx_tmp13;
HXDLIN( 446)			if ((axes6 != 16)) {
HXLINE( 446)				_hx_tmp13 = (axes6 == 17);
            			}
            			else {
HXLINE( 446)				_hx_tmp13 = true;
            			}
HXDLIN( 446)			if (_hx_tmp13) {
HXLINE( 446)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 446)				spikes->set_y(((( (Float)(_hx_tmp) ) - spikes->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 447)		this->add(spikes);
HXLINE( 449)		this->menuItemsSub =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 450)		this->add(this->menuItemsSub);
HXLINE( 452)		 ::flixel::FlxSprite _hx_tmp14 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,100,70,null());
HXDLIN( 452)		this->week4 = _hx_tmp14->loadGraphic(::backend::Paths_obj::image(HX_("purgatoryweeks/story4",18,09,d8,22),null(),null()),null(),null(),null(),null(),null());
HXLINE( 453)		{
HXLINE( 453)			 ::flixel::math::FlxBasePoint this4 = this->week4->scale;
HXDLIN( 453)			this4->set_x(((Float)0.8));
HXDLIN( 453)			this4->set_y(((Float)0.8));
            		}
HXLINE( 454)		this->week4->updateHitbox();
HXLINE( 455)		this->week4->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 456)		this->menuItemsSub->add(this->week4).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 458)		this->week4text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,80,480,320,(HX_("Crusti and\n",91,78,d4,f5) + HX_("Bambi Minion Week\n",77,51,63,5d)),null(),null());
HXLINE( 459)		 ::flixel::text::FlxText _hx_tmp15 = this->week4text;
HXDLIN( 459)		::String file = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("comic-sans.ttf",bd,08,d7,96)));
HXDLIN( 459)		::String _hx_tmp16;
HXDLIN( 459)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 459)			_hx_tmp16 = file;
            		}
            		else {
HXLINE( 459)			_hx_tmp16 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("comic-sans.ttf",bd,08,d7,96));
            		}
HXDLIN( 459)		_hx_tmp15->setFormat(_hx_tmp16,50,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 460)		{
HXLINE( 460)			 ::flixel::math::FlxBasePoint this5 = this->week4text->scrollFactor;
HXDLIN( 460)			this5->set_x(( (Float)(0) ));
HXDLIN( 460)			this5->set_y(( (Float)(0) ));
            		}
HXLINE( 461)		this->week4text->set_borderSize(((Float)3.25));
HXLINE( 462)		this->week4text->set_visible(true);
HXLINE( 463)		this->menuItemsSub->add(this->week4text).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 465)		 ::flixel::FlxSprite _hx_tmp17 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,500,70,null());
HXDLIN( 465)		this->week5 = _hx_tmp17->loadGraphic(::backend::Paths_obj::image(HX_("purgatoryweeks/story5",19,09,d8,22),null(),null()),null(),null(),null(),null(),null());
HXLINE( 466)		{
HXLINE( 466)			 ::flixel::math::FlxBasePoint this6 = this->week5->scale;
HXDLIN( 466)			this6->set_x(((Float)0.8));
HXDLIN( 466)			this6->set_y(((Float)0.8));
            		}
HXLINE( 467)		this->week5->updateHitbox();
HXLINE( 468)		this->week5->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 469)		this->menuItemsSub->add(this->week5).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 471)		this->week5text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,480,480,320,(HX_("The\n",99,2e,d5,37) + HX_("Trio Week\n",5a,f5,c6,ab)),null(),null());
HXLINE( 472)		 ::flixel::text::FlxText _hx_tmp18 = this->week5text;
HXDLIN( 472)		::String file1 = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("comic-sans.ttf",bd,08,d7,96)));
HXDLIN( 472)		::String _hx_tmp19;
HXDLIN( 472)		if (::sys::FileSystem_obj::exists(file1)) {
HXLINE( 472)			_hx_tmp19 = file1;
            		}
            		else {
HXLINE( 472)			_hx_tmp19 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("comic-sans.ttf",bd,08,d7,96));
            		}
HXDLIN( 472)		_hx_tmp18->setFormat(_hx_tmp19,50,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 473)		{
HXLINE( 473)			 ::flixel::math::FlxBasePoint this7 = this->week5text->scrollFactor;
HXDLIN( 473)			this7->set_x(( (Float)(0) ));
HXDLIN( 473)			this7->set_y(( (Float)(0) ));
            		}
HXLINE( 474)		this->week5text->set_borderSize(((Float)3.25));
HXLINE( 475)		this->week5text->set_visible(true);
HXLINE( 476)		this->menuItemsSub->add(this->week5text).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 478)		 ::flixel::FlxSprite _hx_tmp20 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,900,70,null());
HXDLIN( 478)		this->week6 = _hx_tmp20->loadGraphic(::backend::Paths_obj::image(HX_("purgatoryweeks/story6",1a,09,d8,22),null(),null()),null(),null(),null(),null(),null());
HXLINE( 479)		{
HXLINE( 479)			 ::flixel::math::FlxBasePoint this8 = this->week6->scale;
HXDLIN( 479)			this8->set_x(((Float)0.8));
HXDLIN( 479)			this8->set_y(((Float)0.8));
            		}
HXLINE( 480)		this->week6->updateHitbox();
HXLINE( 481)		this->week6->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 482)		this->menuItemsSub->add(this->week6).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 484)		this->week6text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,880,480,320,(HX_("Vs\n",0d,a6,41,00) + HX_("???\n",0b,76,d4,29)),null(),null());
HXLINE( 485)		 ::flixel::text::FlxText _hx_tmp21 = this->week6text;
HXDLIN( 485)		::String file2 = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("comic-sans.ttf",bd,08,d7,96)));
HXDLIN( 485)		::String _hx_tmp22;
HXDLIN( 485)		if (::sys::FileSystem_obj::exists(file2)) {
HXLINE( 485)			_hx_tmp22 = file2;
            		}
            		else {
HXLINE( 485)			_hx_tmp22 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("comic-sans.ttf",bd,08,d7,96));
            		}
HXDLIN( 485)		_hx_tmp21->setFormat(_hx_tmp22,50,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 486)		{
HXLINE( 486)			 ::flixel::math::FlxBasePoint this9 = this->week6text->scrollFactor;
HXDLIN( 486)			this9->set_x(( (Float)(0) ));
HXDLIN( 486)			this9->set_y(( (Float)(0) ));
            		}
HXLINE( 487)		this->week6text->set_borderSize(((Float)3.25));
HXLINE( 488)		this->week6text->set_visible(true);
HXLINE( 489)		this->menuItemsSub->add(this->week6text).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 491)		 ::flixel::FlxSprite textBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,(::flixel::FlxG_obj::height - 46),null())->makeGraphic(::flixel::FlxG_obj::width,56,-16777216,null(),null());
HXLINE( 492)		textBG->set_alpha(((Float)0.6));
HXLINE( 493)		this->menuItemsSub->add(textBG).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 494)		::String leText = HX_("Use your mouse to select a week.",0d,68,93,63);
HXLINE( 495)		this->text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(textBG->x + -10),(textBG->y + 3),::flixel::FlxG_obj::width,leText,21,null());
HXLINE( 496)		 ::flixel::text::FlxText _hx_tmp23 = this->text;
HXDLIN( 496)		::String file3 = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("comic-sans.ttf",bd,08,d7,96)));
HXDLIN( 496)		::String _hx_tmp24;
HXDLIN( 496)		if (::sys::FileSystem_obj::exists(file3)) {
HXLINE( 496)			_hx_tmp24 = file3;
            		}
            		else {
HXLINE( 496)			_hx_tmp24 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("comic-sans.ttf",bd,08,d7,96));
            		}
HXDLIN( 496)		_hx_tmp23->setFormat(_hx_tmp24,18,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 497)		{
HXLINE( 497)			 ::flixel::math::FlxBasePoint this10 = this->text->scrollFactor;
HXDLIN( 497)			this10->set_x(( (Float)(0) ));
HXDLIN( 497)			this10->set_y(( (Float)(0) ));
            		}
HXLINE( 498)		this->menuItemsSub->add(this->text).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 500)		::String leText2 = HX_("Press CTRL to open the Gameplay Modifier Menu",c6,26,dc,73);
HXLINE( 501)		this->text2 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,10,690,0,leText2,21,null());
HXLINE( 502)		 ::flixel::text::FlxText _hx_tmp25 = this->text2;
HXDLIN( 502)		::String file4 = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("comic-sans.ttf",bd,08,d7,96)));
HXDLIN( 502)		::String _hx_tmp26;
HXDLIN( 502)		if (::sys::FileSystem_obj::exists(file4)) {
HXLINE( 502)			_hx_tmp26 = file4;
            		}
            		else {
HXLINE( 502)			_hx_tmp26 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("comic-sans.ttf",bd,08,d7,96));
            		}
HXDLIN( 502)		_hx_tmp25->setFormat(_hx_tmp26,18,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 503)		{
HXLINE( 503)			 ::flixel::math::FlxBasePoint this11 = this->text2->scrollFactor;
HXDLIN( 503)			this11->set_x(( (Float)(0) ));
HXDLIN( 503)			this11->set_y(( (Float)(0) ));
            		}
HXLINE( 504)		this->menuItemsSub->add(this->text2).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 506)		 ::flixel::FlxSprite _hx_tmp27 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN( 506)		this->arrowshitSub = _hx_tmp27->loadGraphic(::backend::Paths_obj::image(HX_("menuimages/stupidarrowsleft",20,63,1e,27),null(),null()),null(),null(),null(),null(),null());
HXLINE( 507)		 ::flixel::FlxSprite _hx_tmp28 = this->arrowshitSub;
HXDLIN( 507)		_hx_tmp28->setGraphicSize(::Std_obj::_hx_int(this->arrowshitSub->get_width()),null());
HXLINE( 508)		this->arrowshitSub->updateHitbox();
HXLINE( 509)		{
HXLINE( 509)			 ::flixel::FlxSprite _this = this->arrowshitSub;
HXDLIN( 509)			int axes7 = 17;
HXDLIN( 509)			bool _hx_tmp29;
HXDLIN( 509)			if ((axes7 != 1)) {
HXLINE( 509)				_hx_tmp29 = (axes7 == 17);
            			}
            			else {
HXLINE( 509)				_hx_tmp29 = true;
            			}
HXDLIN( 509)			if (_hx_tmp29) {
HXLINE( 509)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 509)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 509)			bool _hx_tmp30;
HXDLIN( 509)			if ((axes7 != 16)) {
HXLINE( 509)				_hx_tmp30 = (axes7 == 17);
            			}
            			else {
HXLINE( 509)				_hx_tmp30 = true;
            			}
HXDLIN( 509)			if (_hx_tmp30) {
HXLINE( 509)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 509)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 510)		this->arrowshitSub->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 511)		this->menuItemsSub->add(this->arrowshitSub).StaticCast<  ::flixel::FlxSprite >();
            	}

Dynamic Section2Substate_obj::__CreateEmpty() { return new Section2Substate_obj; }

void *Section2Substate_obj::_hx_vtable = 0;

Dynamic Section2Substate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Section2Substate_obj > _hx_result = new Section2Substate_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Section2Substate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5661ffbf) {
		if (inClassId<=(int)0x3c0818b8) {
			if (inClassId<=(int)0x09fa5e88) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x09fa5e88;
			} else {
				return inClassId==(int)0x3c0818b8;
			}
		} else {
			return inClassId==(int)0x5661ffbf;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void Section2Substate_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_a03029f7f5045b85_515_update)
HXLINE( 516)		if (::backend::ClientPrefs_obj::data->shaders) {
HXLINE( 518)			 ::shaders::BlockedGlitchEffect testshader =  ::shaders::BlockedGlitchEffect_obj::__alloc( HX_CTX );
HXLINE( 519)			testshader->set_Enabled(true);
HXLINE( 520)			testshader->update(elapsed);
HXLINE( 522)			this->week6text->shader = testshader->shader;
            		}
HXLINE( 525)		bool clicked4;
HXDLIN( 525)		bool clicked41;
HXDLIN( 525)		if (::flixel::FlxG_obj::mouse->overlaps(this->week4,null())) {
HXLINE( 525)			clicked41 = (::flixel::FlxG_obj::mouse->_leftButton->current == 2);
            		}
            		else {
HXLINE( 525)			clicked41 = false;
            		}
HXDLIN( 525)		if (clicked41) {
HXLINE( 525)			clicked4 = !(this->lol4);
            		}
            		else {
HXLINE( 525)			clicked4 = false;
            		}
HXLINE( 526)		bool clicked5;
HXDLIN( 526)		bool clicked51;
HXDLIN( 526)		if (::flixel::FlxG_obj::mouse->overlaps(this->week5,null())) {
HXLINE( 526)			clicked51 = (::flixel::FlxG_obj::mouse->_leftButton->current == 2);
            		}
            		else {
HXLINE( 526)			clicked51 = false;
            		}
HXDLIN( 526)		if (clicked51) {
HXLINE( 526)			clicked5 = !(this->lol5);
            		}
            		else {
HXLINE( 526)			clicked5 = false;
            		}
HXLINE( 527)		bool clicked6;
HXDLIN( 527)		bool clicked61;
HXDLIN( 527)		if (::flixel::FlxG_obj::mouse->overlaps(this->week6,null())) {
HXLINE( 527)			clicked61 = (::flixel::FlxG_obj::mouse->_leftButton->current == 2);
            		}
            		else {
HXLINE( 527)			clicked61 = false;
            		}
HXDLIN( 527)		if (clicked61) {
HXLINE( 527)			clicked6 = !(this->lol6);
            		}
            		else {
HXLINE( 527)			clicked6 = false;
            		}
HXLINE( 529)		if (clicked4) {
HXLINE( 531)			this->lol4 = true;
HXLINE( 532)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 532)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("menu/confirmMenu",0f,67,5e,6d),null()),null(),null(),null(),null(),null());
HXLINE( 533)			::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE( 534)			this->startSong4(HX_("delivery/delivery-hard",89,46,8f,d8),HX_("acquaintance",43,59,59,c9),HX_("Double Act",c3,08,16,05));
            		}
HXLINE( 538)		if (clicked5) {
HXLINE( 540)			this->lol5 = true;
HXLINE( 541)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 541)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("menu/confirmMenu",0f,67,5e,6d),null()),null(),null(),null(),null(),null());
HXLINE( 542)			::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE( 543)			this->startSong5(HX_("beefin'/beefin-hard",9e,c2,75,19),HX_("Technology",2c,d7,5b,81));
            		}
HXLINE( 547)		if (clicked6) {
HXLINE( 549)			this->lol6 = true;
HXLINE( 550)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 550)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("menu/confirmMenu",0f,67,5e,6d),null()),null(),null(),null(),null(),null());
HXLINE( 551)			::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE( 552)			this->startSong6(HX_("Tyranny/Tyranny-hard",bd,22,e3,43),HX_("Cataclysmic",59,00,19,13),HX_("Antagonism",f7,5a,63,84));
            		}
HXLINE( 555)		if (::backend::Controls_obj::instance->get_UI_LEFT_P()) {
HXLINE( 557)			this->close();
HXLINE( 558)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 558)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("menu/scrollMenu",fc,75,a6,f1),null()),null(),null(),null(),null(),null());
            		}
HXLINE( 561)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 561)		if (_this->keyManager->checkStatusUnsafe(17,_this->status)) {
HXLINE( 563)			this->persistentUpdate = false;
HXLINE( 564)			this->openSubState( ::substates::GameplayChangersSubstate_obj::__alloc( HX_CTX ));
            		}
HXLINE( 567)		if (::backend::Controls_obj::instance->get_BACK()) {
HXLINE( 569)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 569)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("menu/cancelMenu",e9,45,d1,a2),null()),null(),null(),null(),null(),null());
HXLINE( 570)			::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE( 571)			::backend::MusicBeatState_obj::switchState( ::states::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE( 574)		this->super::update(elapsed);
            	}


void Section2Substate_obj::startSong4(::String songName1,::String songName2,::String songName3){
            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_3, ::states::Section2Substate,_gthis,::String,songName2,::String,songName1,::String,songName3) HXARGC(1)
            		void _hx_run( ::flixel::effects::FlxFlicker flick){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::states::Section2Substate,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::FlxSprite spr){
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::flixel::FlxSprite,spr) HXARGC(1)
            				void _hx_run( ::flixel::tweens::FlxTween twn){
            					HX_STACKFRAME(&_hx_pos_a03029f7f5045b85_597_startSong4)
HXLINE( 597)					spr->kill();
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_STACKFRAME(&_hx_pos_a03029f7f5045b85_591_startSong4)
HXLINE( 592)				 ::flixel::FlxCamera _hx_tmp = _gthis->get_camera();
HXDLIN( 592)				::flixel::tweens::FlxTween_obj::tween(_hx_tmp, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.8), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoIn_dyn())));
HXLINE( 593)				::flixel::tweens::FlxTween_obj::tween(spr, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadOut_dyn())
            					->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(spr)))));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_a03029f7f5045b85_603_startSong4)
HXLINE( 603)				::backend::MusicBeatState_obj::switchState(::states::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::states::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),false));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_a03029f7f5045b85_580_startSong4)
HXLINE( 581)			::states::PlayState_obj::storyPlaylist = ::Array_obj< ::String >::__new(3)->init(0,songName1)->init(1,songName2)->init(2,songName3);
HXLINE( 582)			::states::PlayState_obj::isStoryMode = true;
HXLINE( 583)			::states::PlayState_obj::storyWeek = 2;
HXLINE( 584)			::states::PlayState_obj::storyDifficulty = 2;
HXLINE( 585)			::states::PlayState_obj::SONG = ::backend::Song_obj::loadFromJson(::states::PlayState_obj::storyPlaylist->__get(0),HX_("",00,00,00,00));
HXLINE( 586)			::states::PlayState_obj::campaignScore = 0;
HXLINE( 587)			::states::PlayState_obj::campaignMisses = 0;
HXLINE( 588)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("zoom",13,a3,f8,50),5)),((Float)0.8), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoIn_dyn())));
HXLINE( 589)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("angle",d3,43,e2,22),365)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoIn_dyn())));
HXLINE( 590)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),0)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoIn_dyn())));
HXLINE( 591)			_gthis->menuItemsSub->forEach( ::Dynamic(new _hx_Closure_1(_gthis)),null());
HXLINE( 601)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_2()),null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_a03029f7f5045b85_578_startSong4)
HXDLIN( 578)		 ::states::Section2Substate _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 579)		::flixel::effects::FlxFlicker_obj::flicker(this->week4,1,((Float)0.06),false,false, ::Dynamic(new _hx_Closure_3(_gthis,songName2,songName1,songName3)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC3(Section2Substate_obj,startSong4,(void))

void Section2Substate_obj::startSong5(::String songName1,::String songName2){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_3, ::states::Section2Substate,_gthis,::String,songName2,::String,songName1) HXARGC(1)
            		void _hx_run( ::flixel::effects::FlxFlicker flick){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::states::Section2Substate,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::FlxSprite spr){
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::flixel::FlxSprite,spr) HXARGC(1)
            				void _hx_run( ::flixel::tweens::FlxTween twn){
            					HX_STACKFRAME(&_hx_pos_a03029f7f5045b85_628_startSong5)
HXLINE( 628)					spr->kill();
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_STACKFRAME(&_hx_pos_a03029f7f5045b85_622_startSong5)
HXLINE( 623)				 ::flixel::FlxCamera _hx_tmp = _gthis->get_camera();
HXDLIN( 623)				::flixel::tweens::FlxTween_obj::tween(_hx_tmp, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.8), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoIn_dyn())));
HXLINE( 624)				::flixel::tweens::FlxTween_obj::tween(spr, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadOut_dyn())
            					->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(spr)))));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_a03029f7f5045b85_634_startSong5)
HXLINE( 634)				::backend::MusicBeatState_obj::switchState(::states::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::states::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),false));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_a03029f7f5045b85_611_startSong5)
HXLINE( 612)			::states::PlayState_obj::storyPlaylist = ::Array_obj< ::String >::__new(2)->init(0,songName1)->init(1,songName2);
HXLINE( 613)			::states::PlayState_obj::isStoryMode = true;
HXLINE( 614)			::states::PlayState_obj::storyWeek = 2;
HXLINE( 615)			::states::PlayState_obj::storyDifficulty = 2;
HXLINE( 616)			::states::PlayState_obj::SONG = ::backend::Song_obj::loadFromJson(::states::PlayState_obj::storyPlaylist->__get(0),HX_("",00,00,00,00));
HXLINE( 617)			::states::PlayState_obj::campaignScore = 0;
HXLINE( 618)			::states::PlayState_obj::campaignMisses = 0;
HXLINE( 619)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("zoom",13,a3,f8,50),5)),((Float)0.8), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoIn_dyn())));
HXLINE( 620)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("angle",d3,43,e2,22),365)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoIn_dyn())));
HXLINE( 621)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),0)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoIn_dyn())));
HXLINE( 622)			_gthis->menuItemsSub->forEach( ::Dynamic(new _hx_Closure_1(_gthis)),null());
HXLINE( 632)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_2()),null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_a03029f7f5045b85_609_startSong5)
HXDLIN( 609)		 ::states::Section2Substate _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 610)		::flixel::effects::FlxFlicker_obj::flicker(this->week5,1,((Float)0.06),false,false, ::Dynamic(new _hx_Closure_3(_gthis,songName2,songName1)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Section2Substate_obj,startSong5,(void))

void Section2Substate_obj::startSong6(::String songName1,::String songName2,::String songName3){
            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_3, ::states::Section2Substate,_gthis,::String,songName2,::String,songName1,::String,songName3) HXARGC(1)
            		void _hx_run( ::flixel::effects::FlxFlicker flick){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::states::Section2Substate,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::FlxSprite spr){
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::flixel::FlxSprite,spr) HXARGC(1)
            				void _hx_run( ::flixel::tweens::FlxTween twn){
            					HX_STACKFRAME(&_hx_pos_a03029f7f5045b85_659_startSong6)
HXLINE( 659)					spr->kill();
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_STACKFRAME(&_hx_pos_a03029f7f5045b85_653_startSong6)
HXLINE( 654)				 ::flixel::FlxCamera _hx_tmp = _gthis->get_camera();
HXDLIN( 654)				::flixel::tweens::FlxTween_obj::tween(_hx_tmp, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.8), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoIn_dyn())));
HXLINE( 655)				::flixel::tweens::FlxTween_obj::tween(spr, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadOut_dyn())
            					->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(spr)))));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_a03029f7f5045b85_665_startSong6)
HXLINE( 665)				::backend::MusicBeatState_obj::switchState(::states::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::states::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),false));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_a03029f7f5045b85_642_startSong6)
HXLINE( 643)			::states::PlayState_obj::storyPlaylist = ::Array_obj< ::String >::__new(3)->init(0,songName1)->init(1,songName2)->init(2,songName3);
HXLINE( 644)			::states::PlayState_obj::isStoryMode = true;
HXLINE( 645)			::states::PlayState_obj::storyWeek = 2;
HXLINE( 646)			::states::PlayState_obj::storyDifficulty = 2;
HXLINE( 647)			::states::PlayState_obj::SONG = ::backend::Song_obj::loadFromJson(::states::PlayState_obj::storyPlaylist->__get(0),HX_("",00,00,00,00));
HXLINE( 648)			::states::PlayState_obj::campaignScore = 0;
HXLINE( 649)			::states::PlayState_obj::campaignMisses = 0;
HXLINE( 650)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("zoom",13,a3,f8,50),5)),((Float)0.8), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoIn_dyn())));
HXLINE( 651)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("angle",d3,43,e2,22),365)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoIn_dyn())));
HXLINE( 652)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),0)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoIn_dyn())));
HXLINE( 653)			_gthis->menuItemsSub->forEach( ::Dynamic(new _hx_Closure_1(_gthis)),null());
HXLINE( 663)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_2()),null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_a03029f7f5045b85_640_startSong6)
HXDLIN( 640)		 ::states::Section2Substate _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 641)		::flixel::effects::FlxFlicker_obj::flicker(this->week6,1,((Float)0.06),false,false, ::Dynamic(new _hx_Closure_3(_gthis,songName2,songName1,songName3)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC3(Section2Substate_obj,startSong6,(void))

bool Section2Substate_obj::weekIsLocked(int weekNum){
            	HX_STACKFRAME(&_hx_pos_a03029f7f5045b85_670_weekIsLocked)
HXLINE( 671)		 ::backend::WeekData leWeek = ( ( ::backend::WeekData)(::backend::WeekData_obj::weeksLoaded->get(::backend::WeekData_obj::weeksList->__get(weekNum))) );
HXLINE( 672)		bool _hx_tmp;
HXDLIN( 672)		if (!(leWeek->startUnlocked)) {
HXLINE( 672)			_hx_tmp = (leWeek->weekBefore.length > 0);
            		}
            		else {
HXLINE( 672)			_hx_tmp = false;
            		}
HXDLIN( 672)		if (_hx_tmp) {
HXLINE( 672)			if (::states::Section2Substate_obj::weekCompleted->exists(leWeek->weekBefore)) {
HXLINE( 672)				return !(::states::Section2Substate_obj::weekCompleted->get_bool(leWeek->weekBefore));
            			}
            			else {
HXLINE( 672)				return true;
            			}
            		}
            		else {
HXLINE( 672)			return false;
            		}
HXDLIN( 672)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Section2Substate_obj,weekIsLocked,return )

 ::haxe::ds::StringMap Section2Substate_obj::weekCompleted;

::Array< ::String > Section2Substate_obj::bgPaths;

 ::Dynamic Section2Substate_obj::randomizeBG(){
            	HX_STACKFRAME(&_hx_pos_a03029f7f5045b85_395_randomizeBG)
HXLINE( 396)		int chance = ::flixel::FlxG_obj::random->_hx_int(0,(::states::Section2Substate_obj::bgPaths->length - 1),null());
HXLINE( 397)		return ::backend::Paths_obj::image(::states::Section2Substate_obj::bgPaths->__get(chance),null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Section2Substate_obj,randomizeBG,return )


::hx::ObjectPtr< Section2Substate_obj > Section2Substate_obj::__new() {
	::hx::ObjectPtr< Section2Substate_obj > __this = new Section2Substate_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Section2Substate_obj > Section2Substate_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Section2Substate_obj *__this = (Section2Substate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Section2Substate_obj), true, "states.Section2Substate"));
	*(void **)__this = Section2Substate_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Section2Substate_obj::Section2Substate_obj()
{
}

void Section2Substate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Section2Substate);
	HX_MARK_MEMBER_NAME(arrowshitSub,"arrowshitSub");
	HX_MARK_MEMBER_NAME(menuItemsSub,"menuItemsSub");
	HX_MARK_MEMBER_NAME(lol4,"lol4");
	HX_MARK_MEMBER_NAME(lol5,"lol5");
	HX_MARK_MEMBER_NAME(lol6,"lol6");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(text2,"text2");
	HX_MARK_MEMBER_NAME(menuItems,"menuItems");
	HX_MARK_MEMBER_NAME(week4,"week4");
	HX_MARK_MEMBER_NAME(week5,"week5");
	HX_MARK_MEMBER_NAME(week4text,"week4text");
	HX_MARK_MEMBER_NAME(week5text,"week5text");
	HX_MARK_MEMBER_NAME(week6,"week6");
	HX_MARK_MEMBER_NAME(week6text,"week6text");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Section2Substate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(arrowshitSub,"arrowshitSub");
	HX_VISIT_MEMBER_NAME(menuItemsSub,"menuItemsSub");
	HX_VISIT_MEMBER_NAME(lol4,"lol4");
	HX_VISIT_MEMBER_NAME(lol5,"lol5");
	HX_VISIT_MEMBER_NAME(lol6,"lol6");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(text2,"text2");
	HX_VISIT_MEMBER_NAME(menuItems,"menuItems");
	HX_VISIT_MEMBER_NAME(week4,"week4");
	HX_VISIT_MEMBER_NAME(week5,"week5");
	HX_VISIT_MEMBER_NAME(week4text,"week4text");
	HX_VISIT_MEMBER_NAME(week5text,"week5text");
	HX_VISIT_MEMBER_NAME(week6,"week6");
	HX_VISIT_MEMBER_NAME(week6text,"week6text");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Section2Substate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lol4") ) { return ::hx::Val( lol4 ); }
		if (HX_FIELD_EQ(inName,"lol5") ) { return ::hx::Val( lol5 ); }
		if (HX_FIELD_EQ(inName,"lol6") ) { return ::hx::Val( lol6 ); }
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"text2") ) { return ::hx::Val( text2 ); }
		if (HX_FIELD_EQ(inName,"week4") ) { return ::hx::Val( week4 ); }
		if (HX_FIELD_EQ(inName,"week5") ) { return ::hx::Val( week5 ); }
		if (HX_FIELD_EQ(inName,"week6") ) { return ::hx::Val( week6 ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { return ::hx::Val( menuItems ); }
		if (HX_FIELD_EQ(inName,"week4text") ) { return ::hx::Val( week4text ); }
		if (HX_FIELD_EQ(inName,"week5text") ) { return ::hx::Val( week5text ); }
		if (HX_FIELD_EQ(inName,"week6text") ) { return ::hx::Val( week6text ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startSong4") ) { return ::hx::Val( startSong4_dyn() ); }
		if (HX_FIELD_EQ(inName,"startSong5") ) { return ::hx::Val( startSong5_dyn() ); }
		if (HX_FIELD_EQ(inName,"startSong6") ) { return ::hx::Val( startSong6_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"arrowshitSub") ) { return ::hx::Val( arrowshitSub ); }
		if (HX_FIELD_EQ(inName,"menuItemsSub") ) { return ::hx::Val( menuItemsSub ); }
		if (HX_FIELD_EQ(inName,"weekIsLocked") ) { return ::hx::Val( weekIsLocked_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Section2Substate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val Section2Substate_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lol4") ) { lol4=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lol5") ) { lol5=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lol6") ) { lol6=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"text2") ) { text2=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"week4") ) { week4=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"week5") ) { week5=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"week6") ) { week6=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { menuItems=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"week4text") ) { week4text=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"week5text") ) { week5text=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"week6text") ) { week6text=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"arrowshitSub") ) { arrowshitSub=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"menuItemsSub") ) { menuItemsSub=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Section2Substate_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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

void Section2Substate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("arrowshitSub",f7,2a,1e,00));
	outFields->push(HX_("menuItemsSub",1f,6e,ae,76));
	outFields->push(HX_("lol4",8b,a3,b7,47));
	outFields->push(HX_("lol5",8c,a3,b7,47));
	outFields->push(HX_("lol6",8d,a3,b7,47));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("text2",e5,4a,99,0d));
	outFields->push(HX_("menuItems",e1,15,e5,5c));
	outFields->push(HX_("week4",c0,95,be,c7));
	outFields->push(HX_("week5",c1,95,be,c7));
	outFields->push(HX_("week4text",6d,42,16,0d));
	outFields->push(HX_("week5text",ee,d6,7c,a0));
	outFields->push(HX_("week6",c2,95,be,c7));
	outFields->push(HX_("week6text",6f,6b,e3,33));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Section2Substate_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Section2Substate_obj,arrowshitSub),HX_("arrowshitSub",f7,2a,1e,00)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(Section2Substate_obj,menuItemsSub),HX_("menuItemsSub",1f,6e,ae,76)},
	{::hx::fsBool,(int)offsetof(Section2Substate_obj,lol4),HX_("lol4",8b,a3,b7,47)},
	{::hx::fsBool,(int)offsetof(Section2Substate_obj,lol5),HX_("lol5",8c,a3,b7,47)},
	{::hx::fsBool,(int)offsetof(Section2Substate_obj,lol6),HX_("lol6",8d,a3,b7,47)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(Section2Substate_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(Section2Substate_obj,text2),HX_("text2",e5,4a,99,0d)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(Section2Substate_obj,menuItems),HX_("menuItems",e1,15,e5,5c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Section2Substate_obj,week4),HX_("week4",c0,95,be,c7)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Section2Substate_obj,week5),HX_("week5",c1,95,be,c7)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(Section2Substate_obj,week4text),HX_("week4text",6d,42,16,0d)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(Section2Substate_obj,week5text),HX_("week5text",ee,d6,7c,a0)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Section2Substate_obj,week6),HX_("week6",c2,95,be,c7)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(Section2Substate_obj,week6text),HX_("week6text",6f,6b,e3,33)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Section2Substate_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Section2Substate_obj::weekCompleted,HX_("weekCompleted",f7,82,ec,84)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Section2Substate_obj::bgPaths,HX_("bgPaths",29,1b,7e,6a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Section2Substate_obj_sMemberFields[] = {
	HX_("arrowshitSub",f7,2a,1e,00),
	HX_("menuItemsSub",1f,6e,ae,76),
	HX_("lol4",8b,a3,b7,47),
	HX_("lol5",8c,a3,b7,47),
	HX_("lol6",8d,a3,b7,47),
	HX_("text",ad,cc,f9,4c),
	HX_("text2",e5,4a,99,0d),
	HX_("menuItems",e1,15,e5,5c),
	HX_("week4",c0,95,be,c7),
	HX_("week5",c1,95,be,c7),
	HX_("week4text",6d,42,16,0d),
	HX_("week5text",ee,d6,7c,a0),
	HX_("week6",c2,95,be,c7),
	HX_("week6text",6f,6b,e3,33),
	HX_("update",09,86,05,87),
	HX_("startSong4",fd,0e,de,9c),
	HX_("startSong5",fe,0e,de,9c),
	HX_("startSong6",ff,0e,de,9c),
	HX_("weekIsLocked",a8,d0,e6,fb),
	::String(null()) };

static void Section2Substate_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Section2Substate_obj::weekCompleted,"weekCompleted");
	HX_MARK_MEMBER_NAME(Section2Substate_obj::bgPaths,"bgPaths");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Section2Substate_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Section2Substate_obj::weekCompleted,"weekCompleted");
	HX_VISIT_MEMBER_NAME(Section2Substate_obj::bgPaths,"bgPaths");
};

#endif

::hx::Class Section2Substate_obj::__mClass;

static ::String Section2Substate_obj_sStaticFields[] = {
	HX_("weekCompleted",f7,82,ec,84),
	HX_("bgPaths",29,1b,7e,6a),
	HX_("randomizeBG",36,81,6b,9d),
	::String(null())
};

void Section2Substate_obj::__register()
{
	Section2Substate_obj _hx_dummy;
	Section2Substate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.Section2Substate",2a,65,a0,b5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Section2Substate_obj::__GetStatic;
	__mClass->mSetStaticField = &Section2Substate_obj::__SetStatic;
	__mClass->mMarkFunc = Section2Substate_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Section2Substate_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Section2Substate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Section2Substate_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Section2Substate_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Section2Substate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Section2Substate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Section2Substate_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_a03029f7f5045b85_366_boot)
HXDLIN( 366)		weekCompleted =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_a03029f7f5045b85_369_boot)
HXDLIN( 369)		bgPaths = ::Array_obj< ::String >::fromData( _hx_array_data_b5a0652a_21,22);
            	}
}

} // end namespace states
