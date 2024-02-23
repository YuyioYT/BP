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
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
#endif
#ifndef INCLUDED_backend_StageData
#include <backend/StageData.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_objects_Alphabet
#include <objects/Alphabet.h>
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
#ifndef INCLUDED_options_BaseOptionsMenu
#include <options/BaseOptionsMenu.h>
#endif
#ifndef INCLUDED_options_CameraSettingsState
#include <options/CameraSettingsState.h>
#endif
#ifndef INCLUDED_options_ControlsSubState
#include <options/ControlsSubState.h>
#endif
#ifndef INCLUDED_options_FpsSettingsState
#include <options/FpsSettingsState.h>
#endif
#ifndef INCLUDED_options_GameplaySettingsSubState
#include <options/GameplaySettingsSubState.h>
#endif
#ifndef INCLUDED_options_GraphicsSettingsSubState
#include <options/GraphicsSettingsSubState.h>
#endif
#ifndef INCLUDED_options_HealthBarSettingsState
#include <options/HealthBarSettingsState.h>
#endif
#ifndef INCLUDED_options_NoteOffsetState
#include <options/NoteOffsetState.h>
#endif
#ifndef INCLUDED_options_NotesSubState
#include <options/NotesSubState.h>
#endif
#ifndef INCLUDED_options_OptionsState
#include <options/OptionsState.h>
#endif
#ifndef INCLUDED_options_TimeBarSettingsState
#include <options/TimeBarSettingsState.h>
#endif
#ifndef INCLUDED_options_VisualsMusicSubState
#include <options/VisualsMusicSubState.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_bddb8806f8971119_9_new,"options.OptionsState","new",0xe72cff75,"options.OptionsState.new","options/OptionsState.hx",9,0xaa608eba)
static const ::String _hx_array_data_14992103_1[] = {
	HX_("Note Colors",1e,54,23,f8),HX_("Controls",96,42,6e,11),HX_("Adjust Delay and Combo",b7,c9,c3,05),HX_("Graphics",eb,b4,19,ec),HX_("Fps",c9,7f,35,00),HX_("HealthBar",77,6a,65,e4),HX_("TimeBar",a6,0b,26,a6),HX_("Visuals and Music",af,41,50,dd),HX_("Camera",c5,ba,20,ec),HX_("Gameplay",06,bf,58,a5),
};
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_21_openSelectedSubstate,"options.OptionsState","openSelectedSubstate",0x28c3b341,"options.OptionsState.openSelectedSubstate","options/OptionsState.hx",21,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_84_create,"options.OptionsState","create",0xc1bf1307,"options.OptionsState.create","options/OptionsState.hx",84,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_146_closeSubState,"options.OptionsState","closeSubState",0xbc3ad39e,"options.OptionsState.closeSubState","options/OptionsState.hx",146,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_151_update,"options.OptionsState","update",0xccb53214,"options.OptionsState.update","options/OptionsState.hx",151,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_175_changeSelection,"options.OptionsState","changeSelection",0xa0e39351,"options.OptionsState.changeSelection","options/OptionsState.hx",175,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_220_destroy,"options.OptionsState","destroy",0xd88d0a8f,"options.OptionsState.destroy","options/OptionsState.hx",220,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_79_randomizeBG,"options.OptionsState","randomizeBG",0x25594d4b,"options.OptionsState.randomizeBG","options/OptionsState.hx",79,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_14_boot,"options.OptionsState","boot",0x584b877d,"options.OptionsState.boot","options/OptionsState.hx",14,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_16_boot,"options.OptionsState","boot",0x584b877d,"options.OptionsState.boot","options/OptionsState.hx",16,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_49_boot,"options.OptionsState","boot",0x584b877d,"options.OptionsState.boot","options/OptionsState.hx",49,0xaa608eba)
static const ::String _hx_array_data_14992103_15[] = {
	HX_("backgrounds/arandomguy",31,6c,0a,74),HX_("backgrounds/cesars",bb,1a,0d,24),HX_("backgrounds/cheesedjelly",5b,15,9d,3e),HX_("backgrounds/darealmatt",f9,e0,af,1b),HX_("backgrounds/darlyboxman",87,4f,03,cb),HX_("backgrounds/doodoofeces",a8,45,49,64),HX_("backgrounds/expunged",da,1b,56,ec),HX_("backgrounds/eyes",ac,b2,00,e4),HX_("backgrounds/fast_f00d",77,24,fc,00),HX_("backgrounds/ion",3e,38,33,86),HX_("backgrounds/isaaclul",54,0f,95,76),HX_("backgrounds/kanandraw",7f,8a,e2,58),HX_("backgrounds/mmimim",72,4b,40,b8),HX_("backgrounds/morpho",f1,a5,02,e5),HX_("backgrounds/osp",42,c9,37,86),HX_("backgrounds/Senza_titolo_200_20230711092018",e7,33,2e,cd),HX_("backgrounds/Senza_titolo_201_20230711093117",e5,55,08,95),HX_("backgrounds/slushX",31,fd,f0,92),HX_("backgrounds/spitz",a8,e1,47,a6),HX_("backgrounds/tamrika",e3,04,b8,27),HX_("backgrounds/ultimate poop",05,be,ab,12),HX_("backgrounds/ultimate poop2",8d,86,9a,43),HX_("backgrounds/voltrex",7a,a7,d4,81),HX_("backgrounds/watch_out",54,36,b3,8a),HX_("backgrounds/whatisthis",d6,bd,87,08),HX_("backgrounds/zevisly",58,23,56,e3),
};
namespace options{

void OptionsState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_9_new)
HXLINE(  11)		this->options = ::Array_obj< ::String >::fromData( _hx_array_data_14992103_1,10);
HXLINE(   9)		super::__construct(TransIn,TransOut);
            	}

Dynamic OptionsState_obj::__CreateEmpty() { return new OptionsState_obj; }

void *OptionsState_obj::_hx_vtable = 0;

Dynamic OptionsState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OptionsState_obj > _hx_result = new OptionsState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool OptionsState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x53aaab8a) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3b1d59ed || inClassId==(int)0x53aaab8a;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void OptionsState_obj::openSelectedSubstate(::String label){
            	HX_GC_STACKFRAME(&_hx_pos_bddb8806f8971119_21_openSelectedSubstate)
HXDLIN(  21)		::String _hx_switch_0 = label;
            		if (  (_hx_switch_0==HX_("Adjust Delay and Combo",b7,c9,c3,05)) ){
HXLINE(  41)			::backend::MusicBeatState_obj::switchState( ::options::NoteOffsetState_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN(  41)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Camera",c5,ba,20,ec)) ){
HXLINE(  37)			this->openSubState( ::options::CameraSettingsState_obj::__alloc( HX_CTX ));
HXDLIN(  37)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Controls",96,42,6e,11)) ){
HXLINE(  25)			this->openSubState( ::options::ControlsSubState_obj::__alloc( HX_CTX ));
HXDLIN(  25)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Fps",c9,7f,35,00)) ){
HXLINE(  29)			this->openSubState( ::options::FpsSettingsState_obj::__alloc( HX_CTX ));
HXDLIN(  29)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Gameplay",06,bf,58,a5)) ){
HXLINE(  39)			this->openSubState( ::options::GameplaySettingsSubState_obj::__alloc( HX_CTX ));
HXDLIN(  39)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Graphics",eb,b4,19,ec)) ){
HXLINE(  27)			this->openSubState( ::options::GraphicsSettingsSubState_obj::__alloc( HX_CTX ));
HXDLIN(  27)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("HealthBar",77,6a,65,e4)) ){
HXLINE(  31)			this->openSubState( ::options::HealthBarSettingsState_obj::__alloc( HX_CTX ));
HXDLIN(  31)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Note Colors",1e,54,23,f8)) ){
HXLINE(  23)			this->openSubState( ::options::NotesSubState_obj::__alloc( HX_CTX ));
HXDLIN(  23)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("TimeBar",a6,0b,26,a6)) ){
HXLINE(  33)			this->openSubState( ::options::TimeBarSettingsState_obj::__alloc( HX_CTX ));
HXDLIN(  33)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Visuals and Music",af,41,50,dd)) ){
HXLINE(  35)			this->openSubState( ::options::VisualsMusicSubState_obj::__alloc( HX_CTX ));
HXDLIN(  35)			goto _hx_goto_2;
            		}
            		_hx_goto_2:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionsState_obj,openSelectedSubstate,(void))

void OptionsState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_bddb8806f8971119_84_create)
HXLINE(  86)		::backend::DiscordClient_obj::changePresence(HX_("Options Menu",e1,25,4c,98),null(),null(),null(),null());
HXLINE(  89)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  91)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  91)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(::options::OptionsState_obj::randomizeBG(),null(),null(),null(),null(),null());
HXLINE(  92)		bg1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  93)		bg1->updateHitbox();
HXLINE(  95)		{
HXLINE(  95)			int axes = 17;
HXDLIN(  95)			bool _hx_tmp;
HXDLIN(  95)			if ((axes != 1)) {
HXLINE(  95)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  95)				_hx_tmp = true;
            			}
HXDLIN(  95)			if (_hx_tmp) {
HXLINE(  95)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  95)				bg1->set_x(((( (Float)(_hx_tmp) ) - bg1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  95)			bool _hx_tmp1;
HXDLIN(  95)			if ((axes != 16)) {
HXLINE(  95)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  95)				_hx_tmp1 = true;
            			}
HXDLIN(  95)			if (_hx_tmp1) {
HXLINE(  95)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  95)				bg1->set_y(((( (Float)(_hx_tmp) ) - bg1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  96)		this->add(bg1);
HXLINE(  98)		 ::flixel::addons::display::FlxBackdrop check =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,::backend::Paths_obj::image(HX_("menuimages/check",10,f1,52,ff),null(),null()),null(),0,0);
HXLINE(  99)		{
HXLINE(  99)			 ::flixel::math::FlxBasePoint this1 = check->velocity;
HXDLIN(  99)			this1->set_x(( (Float)(150) ));
HXDLIN(  99)			this1->set_y(( (Float)(150) ));
            		}
HXLINE( 100)		{
HXLINE( 100)			int axes1 = 17;
HXDLIN( 100)			bool _hx_tmp2;
HXDLIN( 100)			if ((axes1 != 1)) {
HXLINE( 100)				_hx_tmp2 = (axes1 == 17);
            			}
            			else {
HXLINE( 100)				_hx_tmp2 = true;
            			}
HXDLIN( 100)			if (_hx_tmp2) {
HXLINE( 100)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 100)				check->set_x(((( (Float)(_hx_tmp) ) - check->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 100)			bool _hx_tmp3;
HXDLIN( 100)			if ((axes1 != 16)) {
HXLINE( 100)				_hx_tmp3 = (axes1 == 17);
            			}
            			else {
HXLINE( 100)				_hx_tmp3 = true;
            			}
HXDLIN( 100)			if (_hx_tmp3) {
HXLINE( 100)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 100)				check->set_y(((( (Float)(_hx_tmp) ) - check->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 101)		{
HXLINE( 101)			 ::flixel::math::FlxBasePoint this2 = check->scrollFactor;
HXDLIN( 101)			this2->set_x(( (Float)(0) ));
HXDLIN( 101)			this2->set_y(( (Float)(0) ));
            		}
HXLINE( 102)		this->add(check);
HXLINE( 104)		 ::flixel::FlxSprite glow =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN( 104)		 ::flixel::FlxSprite glow1 = glow->loadGraphic(::backend::Paths_obj::image(HX_("menuimages/glow",45,97,aa,a5),null(),null()),null(),null(),null(),null(),null());
HXLINE( 105)		glow1->setGraphicSize(::Std_obj::_hx_int((glow1->get_width() * ((Float)1.175))),null());
HXLINE( 106)		glow1->updateHitbox();
HXLINE( 107)		{
HXLINE( 107)			int axes2 = 17;
HXDLIN( 107)			bool _hx_tmp4;
HXDLIN( 107)			if ((axes2 != 1)) {
HXLINE( 107)				_hx_tmp4 = (axes2 == 17);
            			}
            			else {
HXLINE( 107)				_hx_tmp4 = true;
            			}
HXDLIN( 107)			if (_hx_tmp4) {
HXLINE( 107)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 107)				glow1->set_x(((( (Float)(_hx_tmp) ) - glow1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 107)			bool _hx_tmp5;
HXDLIN( 107)			if ((axes2 != 16)) {
HXLINE( 107)				_hx_tmp5 = (axes2 == 17);
            			}
            			else {
HXLINE( 107)				_hx_tmp5 = true;
            			}
HXDLIN( 107)			if (_hx_tmp5) {
HXLINE( 107)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 107)				glow1->set_y(((( (Float)(_hx_tmp) ) - glow1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 108)		glow1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 109)		{
HXLINE( 109)			 ::flixel::math::FlxBasePoint this3 = glow1->scrollFactor;
HXDLIN( 109)			this3->set_x(( (Float)(0) ));
HXDLIN( 109)			this3->set_y(( (Float)(0) ));
            		}
HXLINE( 110)		this->add(glow1);
HXLINE( 112)		 ::flixel::addons::display::FlxBackdrop spikes =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,::backend::Paths_obj::image(HX_("menuimages/spikeys",68,87,cf,cd),null(),null()),null(),0,10000);
HXLINE( 113)		{
HXLINE( 113)			 ::flixel::math::FlxBasePoint this4 = spikes->velocity;
HXDLIN( 113)			this4->set_x(( (Float)(100) ));
HXDLIN( 113)			this4->set_y(( (Float)(0) ));
            		}
HXLINE( 114)		{
HXLINE( 114)			int axes3 = 17;
HXDLIN( 114)			bool _hx_tmp6;
HXDLIN( 114)			if ((axes3 != 1)) {
HXLINE( 114)				_hx_tmp6 = (axes3 == 17);
            			}
            			else {
HXLINE( 114)				_hx_tmp6 = true;
            			}
HXDLIN( 114)			if (_hx_tmp6) {
HXLINE( 114)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 114)				spikes->set_x(((( (Float)(_hx_tmp) ) - spikes->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 114)			bool _hx_tmp7;
HXDLIN( 114)			if ((axes3 != 16)) {
HXLINE( 114)				_hx_tmp7 = (axes3 == 17);
            			}
            			else {
HXLINE( 114)				_hx_tmp7 = true;
            			}
HXDLIN( 114)			if (_hx_tmp7) {
HXLINE( 114)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 114)				spikes->set_y(((( (Float)(_hx_tmp) ) - spikes->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 115)		this->add(spikes);
HXLINE( 116)		{
HXLINE( 116)			 ::flixel::math::FlxBasePoint this5 = spikes->scrollFactor;
HXDLIN( 116)			this5->set_x(( (Float)(0) ));
HXDLIN( 116)			this5->set_y(( (Float)(0) ));
            		}
HXLINE( 118)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 119)		this->add(this->grpOptions);
HXLINE( 121)		this->grpSpritesOptions =  ::flixel::group::FlxTypedSpriteGroup_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 122)		this->add(this->grpSpritesOptions);
HXLINE( 124)		this->selectorLeft =  ::objects::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_(">",3e,00,00,00),true);
HXLINE( 125)		this->add(this->selectorLeft);
HXLINE( 126)		this->selectorRight =  ::objects::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_("<",3c,00,00,00),true);
HXLINE( 127)		this->add(this->selectorRight);
HXLINE( 129)		{
HXLINE( 129)			int _g = 0;
HXDLIN( 129)			int _g1 = this->options->length;
HXDLIN( 129)			while((_g < _g1)){
HXLINE( 129)				_g = (_g + 1);
HXDLIN( 129)				int i = (_g - 1);
HXLINE( 131)				 ::flixel::FlxSprite optionSprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,300,0,null());
HXDLIN( 131)				::String optionSprite1;
HXDLIN( 131)				if ((::backend::ClientPrefs_obj::data->Lenguage == HX_W(u"Espa\u00f1ol",14aa,3bff))) {
HXLINE( 131)					optionSprite1 = HX_("_spanish",35,ea,b8,d2);
            				}
            				else {
HXLINE( 131)					optionSprite1 = HX_("",00,00,00,00);
            				}
HXDLIN( 131)				 ::flixel::FlxSprite optionSprite2 = optionSprite->loadGraphic(::backend::Paths_obj::image((HX_("opcionMenu/",ea,a0,12,a6) + (this->options->__get(i) + optionSprite1)),null(),null()),null(),null(),null(),null(),null());
HXLINE( 132)				optionSprite2->scale->set_x(((Float)0.3));
HXLINE( 133)				optionSprite2->scale->set_y(((Float)0.3));
HXLINE( 134)				{
HXLINE( 134)					int axes = 17;
HXDLIN( 134)					bool _hx_tmp;
HXDLIN( 134)					if ((axes != 1)) {
HXLINE( 134)						_hx_tmp = (axes == 17);
            					}
            					else {
HXLINE( 134)						_hx_tmp = true;
            					}
HXDLIN( 134)					if (_hx_tmp) {
HXLINE( 134)						int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 134)						optionSprite2->set_x(((( (Float)(_hx_tmp) ) - optionSprite2->get_width()) / ( (Float)(2) )));
            					}
HXDLIN( 134)					bool _hx_tmp1;
HXDLIN( 134)					if ((axes != 16)) {
HXLINE( 134)						_hx_tmp1 = (axes == 17);
            					}
            					else {
HXLINE( 134)						_hx_tmp1 = true;
            					}
HXDLIN( 134)					if (_hx_tmp1) {
HXLINE( 134)						int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 134)						optionSprite2->set_y(((( (Float)(_hx_tmp) ) - optionSprite2->get_height()) / ( (Float)(2) )));
            					}
            				}
HXLINE( 135)				optionSprite2->set_x(optionSprite2->x);
HXLINE( 136)				optionSprite2->set_y(optionSprite2->y);
HXLINE( 137)				this->grpSpritesOptions->add(optionSprite2).StaticCast<  ::flixel::FlxSprite >();
            			}
            		}
HXLINE( 140)		this->changeSelection(null());
HXLINE( 141)		::backend::ClientPrefs_obj::saveSettings();
HXLINE( 143)		this->super::create();
            	}


void OptionsState_obj::closeSubState(){
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_146_closeSubState)
HXLINE( 147)		this->super::closeSubState();
HXLINE( 148)		::backend::ClientPrefs_obj::saveSettings();
            	}


void OptionsState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_bddb8806f8971119_151_update)
HXLINE( 152)		this->super::update(elapsed);
HXLINE( 154)		if (this->get_controls()->get_UI_LEFT_P()) {
HXLINE( 155)			this->changeSelection(-1);
            		}
HXLINE( 157)		if (this->get_controls()->get_UI_RIGHT_P()) {
HXLINE( 158)			this->changeSelection(1);
            		}
HXLINE( 161)		if (this->get_controls()->get_BACK()) {
HXLINE( 162)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 162)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("Menu/cancelMenu",c9,4d,5d,03),null()),null(),null(),null(),null(),null());
HXLINE( 163)			if (::options::OptionsState_obj::onPlayState) {
HXLINE( 165)				::backend::StageData_obj::loadDirectory(::states::PlayState_obj::SONG);
HXLINE( 166)				::backend::MusicBeatState_obj::switchState(::states::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::states::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),false));
HXLINE( 167)				::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
            			}
            			else {
HXLINE( 169)				::backend::MusicBeatState_obj::switchState( ::states::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            			}
            		}
            		else {
HXLINE( 171)			if (this->get_controls()->get_ACCEPT()) {
HXLINE( 171)				this->openSelectedSubstate(this->options->__get(::options::OptionsState_obj::curSelected));
            			}
            			else {
HXLINE( 172)				if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 172)					this->openSelectedSubstate(this->options->__get(::options::OptionsState_obj::curSelected));
            				}
            			}
            		}
            	}


void OptionsState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_175_changeSelection)
HXLINE( 176)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::options::OptionsState >();
HXDLIN( 176)		::options::OptionsState_obj::curSelected = (::options::OptionsState_obj::curSelected + change);
HXLINE( 177)		if ((::options::OptionsState_obj::curSelected < 0)) {
HXLINE( 178)			::options::OptionsState_obj::curSelected = (this->options->length - 1);
            		}
HXLINE( 179)		if ((::options::OptionsState_obj::curSelected >= this->options->length)) {
HXLINE( 180)			::options::OptionsState_obj::curSelected = 0;
            		}
HXLINE( 182)		int bullShit = 0;
HXLINE( 198)		{
HXLINE( 198)			int _g = 0;
HXDLIN( 198)			int _g1 = this->grpSpritesOptions->group->members->get_length();
HXDLIN( 198)			while((_g < _g1)){
HXLINE( 198)				_g = (_g + 1);
HXDLIN( 198)				int i = (_g - 1);
HXLINE( 199)				 ::flixel::FlxSprite item = Dynamic( this->grpSpritesOptions->group->members->__get(i)).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 201)				Float newY = ( (Float)((bullShit - ::options::OptionsState_obj::curSelected)) );
HXLINE( 202)				bullShit = (bullShit + 1);
HXLINE( 204)				if ((i == ::options::OptionsState_obj::curSelected)) {
HXLINE( 205)					item->set_alpha(( (Float)(1) ));
HXLINE( 206)					this->selectorLeft->set_x((item->x + -50));
HXLINE( 207)					this->selectorLeft->set_y(item->y);
HXLINE( 208)					 ::objects::Alphabet _hx_tmp = this->selectorRight;
HXDLIN( 208)					Float item1 = item->x;
HXDLIN( 208)					_hx_tmp->set_x((item1 + item->get_width()));
HXLINE( 209)					this->selectorRight->set_y(item->y);
            				}
            				else {
HXLINE( 211)					item->set_alpha(( (Float)(0) ));
            				}
            			}
            		}
HXLINE( 215)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 215)		_hx_tmp1->play(::backend::Paths_obj::sound(HX_("Menu/scrollMenu",dc,7d,32,52),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionsState_obj,changeSelection,(void))

void OptionsState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_220_destroy)
HXLINE( 221)		::backend::ClientPrefs_obj::loadPrefs();
HXLINE( 222)		this->super::destroy();
            	}


int OptionsState_obj::curSelected;

 ::flixel::FlxSprite OptionsState_obj::menuBG;

bool OptionsState_obj::onPlayState;

::Array< ::String > OptionsState_obj::bgPaths;

 ::Dynamic OptionsState_obj::randomizeBG(){
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_79_randomizeBG)
HXLINE(  80)		int chance = ::flixel::FlxG_obj::random->_hx_int(0,(::options::OptionsState_obj::bgPaths->length - 1),null());
HXLINE(  81)		return ::backend::Paths_obj::image(::options::OptionsState_obj::bgPaths->__get(chance),null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(OptionsState_obj,randomizeBG,return )


::hx::ObjectPtr< OptionsState_obj > OptionsState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< OptionsState_obj > __this = new OptionsState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< OptionsState_obj > OptionsState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	OptionsState_obj *__this = (OptionsState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OptionsState_obj), true, "options.OptionsState"));
	*(void **)__this = OptionsState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

OptionsState_obj::OptionsState_obj()
{
}

void OptionsState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionsState);
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(grpSpritesOptions,"grpSpritesOptions");
	HX_MARK_MEMBER_NAME(opcionSprite,"opcionSprite");
	HX_MARK_MEMBER_NAME(selectorLeft,"selectorLeft");
	HX_MARK_MEMBER_NAME(selectorRight,"selectorRight");
	 ::backend::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OptionsState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(grpSpritesOptions,"grpSpritesOptions");
	HX_VISIT_MEMBER_NAME(opcionSprite,"opcionSprite");
	HX_VISIT_MEMBER_NAME(selectorLeft,"selectorLeft");
	HX_VISIT_MEMBER_NAME(selectorRight,"selectorRight");
	 ::backend::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val OptionsState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return ::hx::Val( options ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"opcionSprite") ) { return ::hx::Val( opcionSprite ); }
		if (HX_FIELD_EQ(inName,"selectorLeft") ) { return ::hx::Val( selectorLeft ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectorRight") ) { return ::hx::Val( selectorRight ); }
		if (HX_FIELD_EQ(inName,"closeSubState") ) { return ::hx::Val( closeSubState_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"grpSpritesOptions") ) { return ::hx::Val( grpSpritesOptions ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"openSelectedSubstate") ) { return ::hx::Val( openSelectedSubstate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool OptionsState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"menuBG") ) { outValue = ( menuBG ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgPaths") ) { outValue = ( bgPaths ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
		if (HX_FIELD_EQ(inName,"onPlayState") ) { outValue = ( onPlayState ); return true; }
		if (HX_FIELD_EQ(inName,"randomizeBG") ) { outValue = randomizeBG_dyn(); return true; }
	}
	return false;
}

::hx::Val OptionsState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"opcionSprite") ) { opcionSprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectorLeft") ) { selectorLeft=inValue.Cast<  ::objects::Alphabet >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectorRight") ) { selectorRight=inValue.Cast<  ::objects::Alphabet >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"grpSpritesOptions") ) { grpSpritesOptions=inValue.Cast<  ::flixel::group::FlxTypedSpriteGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool OptionsState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"menuBG") ) { menuBG=ioValue.Cast<  ::flixel::FlxSprite >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgPaths") ) { bgPaths=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"onPlayState") ) { onPlayState=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void OptionsState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("grpSpritesOptions",f5,ce,78,10));
	outFields->push(HX_("opcionSprite",8b,b3,62,68));
	outFields->push(HX_("selectorLeft",c6,e2,77,e7));
	outFields->push(HX_("selectorRight",3d,98,7b,18));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OptionsState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(OptionsState_obj,options),HX_("options",5e,33,fe,df)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(OptionsState_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedSpriteGroup */ ,(int)offsetof(OptionsState_obj,grpSpritesOptions),HX_("grpSpritesOptions",f5,ce,78,10)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(OptionsState_obj,opcionSprite),HX_("opcionSprite",8b,b3,62,68)},
	{::hx::fsObject /*  ::objects::Alphabet */ ,(int)offsetof(OptionsState_obj,selectorLeft),HX_("selectorLeft",c6,e2,77,e7)},
	{::hx::fsObject /*  ::objects::Alphabet */ ,(int)offsetof(OptionsState_obj,selectorRight),HX_("selectorRight",3d,98,7b,18)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo OptionsState_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &OptionsState_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(void *) &OptionsState_obj::menuBG,HX_("menuBG",24,65,6d,05)},
	{::hx::fsBool,(void *) &OptionsState_obj::onPlayState,HX_("onPlayState",5e,86,32,c7)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &OptionsState_obj::bgPaths,HX_("bgPaths",29,1b,7e,6a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String OptionsState_obj_sMemberFields[] = {
	HX_("options",5e,33,fe,df),
	HX_("grpOptions",f9,45,d8,00),
	HX_("grpSpritesOptions",f5,ce,78,10),
	HX_("opcionSprite",8b,b3,62,68),
	HX_("openSelectedSubstate",f6,29,af,78),
	HX_("selectorLeft",c6,e2,77,e7),
	HX_("selectorRight",3d,98,7b,18),
	HX_("create",fc,66,0f,7c),
	HX_("closeSubState",49,18,32,04),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

static void OptionsState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OptionsState_obj::curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(OptionsState_obj::menuBG,"menuBG");
	HX_MARK_MEMBER_NAME(OptionsState_obj::onPlayState,"onPlayState");
	HX_MARK_MEMBER_NAME(OptionsState_obj::bgPaths,"bgPaths");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OptionsState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OptionsState_obj::curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(OptionsState_obj::menuBG,"menuBG");
	HX_VISIT_MEMBER_NAME(OptionsState_obj::onPlayState,"onPlayState");
	HX_VISIT_MEMBER_NAME(OptionsState_obj::bgPaths,"bgPaths");
};

#endif

::hx::Class OptionsState_obj::__mClass;

static ::String OptionsState_obj_sStaticFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("menuBG",24,65,6d,05),
	HX_("onPlayState",5e,86,32,c7),
	HX_("bgPaths",29,1b,7e,6a),
	HX_("randomizeBG",36,81,6b,9d),
	::String(null())
};

void OptionsState_obj::__register()
{
	OptionsState_obj _hx_dummy;
	OptionsState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.OptionsState",03,21,99,14);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OptionsState_obj::__GetStatic;
	__mClass->mSetStaticField = &OptionsState_obj::__SetStatic;
	__mClass->mMarkFunc = OptionsState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OptionsState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OptionsState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OptionsState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OptionsState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionsState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionsState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void OptionsState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_14_boot)
HXDLIN(  14)		curSelected = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_16_boot)
HXDLIN(  16)		onPlayState = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_49_boot)
HXDLIN(  49)		bgPaths = ::Array_obj< ::String >::fromData( _hx_array_data_14992103_15,26);
            	}
}

} // end namespace options
