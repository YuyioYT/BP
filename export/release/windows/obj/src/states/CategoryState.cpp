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
#ifndef INCLUDED_backend_Highscore
#include <backend/Highscore.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_states_CategoryState
#include <states/CategoryState.h>
#endif
#ifndef INCLUDED_states_FreeplayState
#include <states/FreeplayState.h>
#endif
#ifndef INCLUDED_states_MainMenuState
#include <states/MainMenuState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ad189f15c61207ca_33_new,"states.CategoryState","new",0x72be5659,"states.CategoryState.new","states/CategoryState.hx",33,0x40e24938)
static const ::String _hx_array_data_2bb435e7_1[] = {
	HX_("story",f5,13,16,84),HX_("extras",e3,a3,24,c7),
};
HX_LOCAL_STACK_FRAME(_hx_pos_ad189f15c61207ca_90_create,"states.CategoryState","create",0x75dc22a3,"states.CategoryState.create","states/CategoryState.hx",90,0x40e24938)
HX_LOCAL_STACK_FRAME(_hx_pos_ad189f15c61207ca_142_LoadProperPack,"states.CategoryState","LoadProperPack",0x233f1256,"states.CategoryState.LoadProperPack","states/CategoryState.hx",142,0x40e24938)
HX_LOCAL_STACK_FRAME(_hx_pos_ad189f15c61207ca_163_UpdatePackSelection,"states.CategoryState","UpdatePackSelection",0x36611643,"states.CategoryState.UpdatePackSelection","states/CategoryState.hx",163,0x40e24938)
HX_LOCAL_STACK_FRAME(_hx_pos_ad189f15c61207ca_208_update,"states.CategoryState","update",0x80d241b0,"states.CategoryState.update","states/CategoryState.hx",208,0x40e24938)
HX_LOCAL_STACK_FRAME(_hx_pos_ad189f15c61207ca_234_update,"states.CategoryState","update",0x80d241b0,"states.CategoryState.update","states/CategoryState.hx",234,0x40e24938)
HX_LOCAL_STACK_FRAME(_hx_pos_ad189f15c61207ca_229_update,"states.CategoryState","update",0x80d241b0,"states.CategoryState.update","states/CategoryState.hx",229,0x40e24938)
HX_LOCAL_STACK_FRAME(_hx_pos_ad189f15c61207ca_260_randomizeBG,"states.CategoryState","randomizeBG",0x2232282f,"states.CategoryState.randomizeBG","states/CategoryState.hx",260,0x40e24938)
HX_LOCAL_STACK_FRAME(_hx_pos_ad189f15c61207ca_53_boot,"states.CategoryState","boot",0xebe63819,"states.CategoryState.boot","states/CategoryState.hx",53,0x40e24938)
static const ::String _hx_array_data_2bb435e7_20[] = {
	HX_("backgrounds/arandomguy",31,6c,0a,74),HX_("backgrounds/cesars",bb,1a,0d,24),HX_("backgrounds/cheesedjelly",5b,15,9d,3e),HX_("backgrounds/darealmatt",f9,e0,af,1b),HX_("backgrounds/darlyboxman",87,4f,03,cb),HX_("backgrounds/doodoofeces",a8,45,49,64),HX_("backgrounds/expunged",da,1b,56,ec),HX_("backgrounds/eyes",ac,b2,00,e4),HX_("backgrounds/fast_f00d",77,24,fc,00),HX_("backgrounds/ion",3e,38,33,86),HX_("backgrounds/isaaclul",54,0f,95,76),HX_("backgrounds/kanandraw",7f,8a,e2,58),HX_("backgrounds/mmimim",72,4b,40,b8),HX_("backgrounds/morpho",f1,a5,02,e5),HX_("backgrounds/osp",42,c9,37,86),HX_("backgrounds/Senza_titolo_200_20230711092018",e7,33,2e,cd),HX_("backgrounds/Senza_titolo_201_20230711093117",e5,55,08,95),HX_("backgrounds/slushX",31,fd,f0,92),HX_("backgrounds/spitz",a8,e1,47,a6),HX_("backgrounds/tamrika",e3,04,b8,27),HX_("backgrounds/ultimate poop",05,be,ab,12),HX_("backgrounds/ultimate poop2",8d,86,9a,43),HX_("backgrounds/voltrex",7a,a7,d4,81),HX_("backgrounds/watch_out",54,36,b3,8a),HX_("backgrounds/whatisthis",d6,bd,87,08),HX_("backgrounds/zevisly",58,23,56,e3),
};
HX_LOCAL_STACK_FRAME(_hx_pos_ad189f15c61207ca_83_boot,"states.CategoryState","boot",0xebe63819,"states.CategoryState.boot","states/CategoryState.hx",83,0x40e24938)
namespace states{

void CategoryState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_GC_STACKFRAME(&_hx_pos_ad189f15c61207ca_33_new)
HXLINE(  87)		this->categoryIcons = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  50)		this->loadingPack = false;
HXLINE(  48)		this->bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  46)		this->CurrentPack = 0;
HXLINE(  44)		this->AllPossibleSongs = ::Array_obj< ::String >::fromData( _hx_array_data_2bb435e7_1,2);
HXLINE(  42)		this->titles = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  41)		this->icons = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  37)		this->InMainFreeplayState = false;
HXLINE(  33)		super::__construct(TransIn,TransOut);
            	}

Dynamic CategoryState_obj::__CreateEmpty() { return new CategoryState_obj; }

void *CategoryState_obj::_hx_vtable = 0;

Dynamic CategoryState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CategoryState_obj > _hx_result = new CategoryState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CategoryState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x53aaab8a) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x20c9d5c9) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x20c9d5c9;
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

void CategoryState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_ad189f15c61207ca_90_create)
HXLINE(  91)		::backend::DiscordClient_obj::changePresence(HX_("In the Freeplay Menus",7e,3c,7a,72),null(),null(),null(),null());
HXLINE(  94)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  94)		this->bg = _hx_tmp->loadGraphic(::states::CategoryState_obj::randomizeBG(),null(),null(),null(),null(),null());
HXLINE(  95)		this->bg->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  96)		{
HXLINE(  96)			 ::flixel::FlxSprite _this = this->bg;
HXDLIN(  96)			int axes = 17;
HXDLIN(  96)			bool _hx_tmp1;
HXDLIN(  96)			if ((axes != 1)) {
HXLINE(  96)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  96)				_hx_tmp1 = true;
            			}
HXDLIN(  96)			if (_hx_tmp1) {
HXLINE(  96)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  96)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  96)			bool _hx_tmp2;
HXDLIN(  96)			if ((axes != 16)) {
HXLINE(  96)				_hx_tmp2 = (axes == 17);
            			}
            			else {
HXLINE(  96)				_hx_tmp2 = true;
            			}
HXDLIN(  96)			if (_hx_tmp2) {
HXLINE(  96)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  96)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  97)		this->bg->set_color(-13762560);
HXLINE(  98)		this->add(this->bg);
HXLINE( 100)		this->check =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,::backend::Paths_obj::image(HX_("menuimages/check",10,f1,52,ff),null(),null()),null(),0,0);
HXLINE( 101)		{
HXLINE( 101)			 ::flixel::math::FlxBasePoint this1 = this->check->velocity;
HXDLIN( 101)			this1->set_x(( (Float)(150) ));
HXDLIN( 101)			this1->set_y(( (Float)(150) ));
            		}
HXLINE( 102)		{
HXLINE( 102)			 ::flixel::FlxSprite _this1 = this->check;
HXDLIN( 102)			int axes1 = 17;
HXDLIN( 102)			bool _hx_tmp3;
HXDLIN( 102)			if ((axes1 != 1)) {
HXLINE( 102)				_hx_tmp3 = (axes1 == 17);
            			}
            			else {
HXLINE( 102)				_hx_tmp3 = true;
            			}
HXDLIN( 102)			if (_hx_tmp3) {
HXLINE( 102)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 102)				_this1->set_x(((( (Float)(_hx_tmp) ) - _this1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 102)			bool _hx_tmp4;
HXDLIN( 102)			if ((axes1 != 16)) {
HXLINE( 102)				_hx_tmp4 = (axes1 == 17);
            			}
            			else {
HXLINE( 102)				_hx_tmp4 = true;
            			}
HXDLIN( 102)			if (_hx_tmp4) {
HXLINE( 102)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 102)				_this1->set_y(((( (Float)(_hx_tmp) ) - _this1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 103)		{
HXLINE( 103)			 ::flixel::math::FlxBasePoint this2 = this->check->scrollFactor;
HXDLIN( 103)			this2->set_x(( (Float)(0) ));
HXDLIN( 103)			this2->set_y(( (Float)(0) ));
            		}
HXLINE( 104)		this->add(this->check);
HXLINE( 106)		 ::flixel::FlxSprite glow =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN( 106)		 ::flixel::FlxSprite glow1 = glow->loadGraphic(::backend::Paths_obj::image(HX_("menuimages/glow",45,97,aa,a5),null(),null()),null(),null(),null(),null(),null());
HXLINE( 107)		glow1->setGraphicSize(::Std_obj::_hx_int((glow1->get_width() * ((Float)1.175))),null());
HXLINE( 108)		glow1->updateHitbox();
HXLINE( 109)		{
HXLINE( 109)			int axes2 = 17;
HXDLIN( 109)			bool _hx_tmp5;
HXDLIN( 109)			if ((axes2 != 1)) {
HXLINE( 109)				_hx_tmp5 = (axes2 == 17);
            			}
            			else {
HXLINE( 109)				_hx_tmp5 = true;
            			}
HXDLIN( 109)			if (_hx_tmp5) {
HXLINE( 109)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 109)				glow1->set_x(((( (Float)(_hx_tmp) ) - glow1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 109)			bool _hx_tmp6;
HXDLIN( 109)			if ((axes2 != 16)) {
HXLINE( 109)				_hx_tmp6 = (axes2 == 17);
            			}
            			else {
HXLINE( 109)				_hx_tmp6 = true;
            			}
HXDLIN( 109)			if (_hx_tmp6) {
HXLINE( 109)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 109)				glow1->set_y(((( (Float)(_hx_tmp) ) - glow1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 110)		glow1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 111)		{
HXLINE( 111)			 ::flixel::math::FlxBasePoint this3 = glow1->scrollFactor;
HXDLIN( 111)			this3->set_x(( (Float)(0) ));
HXDLIN( 111)			this3->set_y(( (Float)(0) ));
            		}
HXLINE( 112)		this->add(glow1);
HXLINE( 114)		this->spikes =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,::backend::Paths_obj::image(HX_("menuimages/spikeys",68,87,cf,cd),null(),null()),null(),0,10000);
HXLINE( 115)		{
HXLINE( 115)			 ::flixel::math::FlxBasePoint this4 = this->spikes->velocity;
HXDLIN( 115)			this4->set_x(( (Float)(100) ));
HXDLIN( 115)			this4->set_y(( (Float)(0) ));
            		}
HXLINE( 116)		{
HXLINE( 116)			 ::flixel::FlxSprite _this2 = this->spikes;
HXDLIN( 116)			int axes3 = 17;
HXDLIN( 116)			bool _hx_tmp7;
HXDLIN( 116)			if ((axes3 != 1)) {
HXLINE( 116)				_hx_tmp7 = (axes3 == 17);
            			}
            			else {
HXLINE( 116)				_hx_tmp7 = true;
            			}
HXDLIN( 116)			if (_hx_tmp7) {
HXLINE( 116)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 116)				_this2->set_x(((( (Float)(_hx_tmp) ) - _this2->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 116)			bool _hx_tmp8;
HXDLIN( 116)			if ((axes3 != 16)) {
HXLINE( 116)				_hx_tmp8 = (axes3 == 17);
            			}
            			else {
HXLINE( 116)				_hx_tmp8 = true;
            			}
HXDLIN( 116)			if (_hx_tmp8) {
HXLINE( 116)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 116)				_this2->set_y(((( (Float)(_hx_tmp) ) - _this2->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 117)		this->add(this->spikes);
HXLINE( 118)		{
HXLINE( 118)			 ::flixel::math::FlxBasePoint this5 = this->spikes->scrollFactor;
HXDLIN( 118)			this5->set_x(( (Float)(0) ));
HXDLIN( 118)			this5->set_y(( (Float)(0) ));
            		}
HXLINE( 120)		{
HXLINE( 120)			int _g = 0;
HXDLIN( 120)			int _g1 = this->AllPossibleSongs->length;
HXDLIN( 120)			while((_g < _g1)){
HXLINE( 120)				_g = (_g + 1);
HXDLIN( 120)				int i = (_g - 1);
HXLINE( 122)				::backend::Highscore_obj::load();
HXLINE( 124)				 ::flixel::FlxSprite categoryIcon =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN( 124)				 ::flixel::FlxSprite categoryIcon1 = categoryIcon->loadGraphic(::backend::Paths_obj::image((HX_("freelaycategories/menu_",65,92,b8,3c) + this->AllPossibleSongs->__get(i).toLowerCase()),null(),null()),null(),null(),null(),null(),null());
HXLINE( 125)				categoryIcon1->setGraphicSize(::Std_obj::_hx_int((categoryIcon1->get_width() * ((Float)0.7))),null());
HXLINE( 126)				categoryIcon1->updateHitbox();
HXLINE( 127)				{
HXLINE( 127)					int axes = 17;
HXDLIN( 127)					bool _hx_tmp;
HXDLIN( 127)					if ((axes != 1)) {
HXLINE( 127)						_hx_tmp = (axes == 17);
            					}
            					else {
HXLINE( 127)						_hx_tmp = true;
            					}
HXDLIN( 127)					if (_hx_tmp) {
HXLINE( 127)						int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 127)						categoryIcon1->set_x(((( (Float)(_hx_tmp) ) - categoryIcon1->get_width()) / ( (Float)(2) )));
            					}
HXDLIN( 127)					bool _hx_tmp1;
HXDLIN( 127)					if ((axes != 16)) {
HXLINE( 127)						_hx_tmp1 = (axes == 17);
            					}
            					else {
HXLINE( 127)						_hx_tmp1 = true;
            					}
HXDLIN( 127)					if (_hx_tmp1) {
HXLINE( 127)						int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 127)						categoryIcon1->set_y(((( (Float)(_hx_tmp) ) - categoryIcon1->get_height()) / ( (Float)(2) )));
            					}
            				}
HXLINE( 128)				categoryIcon1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 129)				categoryIcon1->set_x((categoryIcon1->x + (i * 1280)));
HXLINE( 130)				this->add(categoryIcon1);
HXLINE( 131)				this->categoryIcons->push(categoryIcon1);
            			}
            		}
HXLINE( 134)		Float scale = ( (Float)(1) );
HXLINE( 136)		this->UpdatePackSelection(0);
HXLINE( 137)		this->super::create();
            	}


void CategoryState_obj::LoadProperPack(){
            	HX_GC_STACKFRAME(&_hx_pos_ad189f15c61207ca_142_LoadProperPack)
HXDLIN( 142)		::String _hx_switch_0 = this->AllPossibleSongs->__get(this->CurrentPack).toLowerCase();
            		if (  (_hx_switch_0==HX_("extras",e3,a3,24,c7)) ){
HXLINE( 148)			::backend::MusicBeatState_obj::switchState( ::states::FreeplayState_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 149)			::states::CategoryState_obj::categorySelected = HX_("extras",e3,a3,24,c7);
HXLINE( 147)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("old",a7,98,54,00)) ){
HXLINE( 157)			::backend::MusicBeatState_obj::switchState( ::states::FreeplayState_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 158)			::states::CategoryState_obj::categorySelected = HX_("old",a7,98,54,00);
HXLINE( 156)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("remixes",77,5c,0a,ef)) ){
HXLINE( 151)			::backend::MusicBeatState_obj::switchState( ::states::FreeplayState_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 152)			::states::CategoryState_obj::categorySelected = HX_("remixes",77,5c,0a,ef);
HXLINE( 150)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("secret",70,0e,4a,64)) ){
HXLINE( 154)			::backend::MusicBeatState_obj::switchState( ::states::FreeplayState_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 155)			::states::CategoryState_obj::categorySelected = HX_("secret",70,0e,4a,64);
HXLINE( 153)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("story",f5,13,16,84)) ){
HXLINE( 145)			::backend::MusicBeatState_obj::switchState( ::states::FreeplayState_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 146)			::states::CategoryState_obj::categorySelected = HX_("story",f5,13,16,84);
HXLINE( 144)			goto _hx_goto_4;
            		}
            		_hx_goto_4:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CategoryState_obj,LoadProperPack,(void))

void CategoryState_obj::UpdatePackSelection(int change){
            	HX_STACKFRAME(&_hx_pos_ad189f15c61207ca_163_UpdatePackSelection)
HXLINE( 164)		 ::states::CategoryState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 164)		_hx_tmp->CurrentPack = (_hx_tmp->CurrentPack + change);
HXLINE( 165)		if ((this->CurrentPack == -1)) {
HXLINE( 167)			this->CurrentPack = (this->AllPossibleSongs->length - 1);
HXLINE( 168)			{
HXLINE( 168)				int _g = 0;
HXDLIN( 168)				::Array< ::Dynamic> _g1 = this->categoryIcons;
HXDLIN( 168)				while((_g < _g1->length)){
HXLINE( 168)					 ::flixel::FlxSprite icon = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 168)					_g = (_g + 1);
HXLINE( 170)					int _hx_tmp = (this->AllPossibleSongs->length - 1);
HXDLIN( 170)					int _hx_tmp1 = ((_hx_tmp - this->categoryIcons->indexOf(icon,null())) * -1280);
HXDLIN( 170)					int _hx_tmp2 = ::flixel::FlxG_obj::width;
HXDLIN( 170)					Float _hx_tmp3 = (_hx_tmp1 + ((( (Float)(_hx_tmp2) ) - icon->get_width()) / ( (Float)(2) )));
HXDLIN( 170)					::flixel::tweens::FlxTween_obj::tween(icon, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("x",78,00,00,00),_hx_tmp3)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeInOut_dyn())));
            				}
            			}
            		}
HXLINE( 175)		if ((this->CurrentPack == this->AllPossibleSongs->length)) {
HXLINE( 177)			this->CurrentPack = 0;
HXLINE( 178)			{
HXLINE( 178)				int _g = 0;
HXDLIN( 178)				::Array< ::Dynamic> _g1 = this->categoryIcons;
HXDLIN( 178)				while((_g < _g1->length)){
HXLINE( 178)					 ::flixel::FlxSprite icon = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 178)					_g = (_g + 1);
HXLINE( 180)					int _hx_tmp = (this->categoryIcons->indexOf(icon,null()) * 1280);
HXDLIN( 180)					int _hx_tmp1 = ::flixel::FlxG_obj::width;
HXDLIN( 180)					Float _hx_tmp2 = (_hx_tmp + ((( (Float)(_hx_tmp1) ) - icon->get_width()) / ( (Float)(2) )));
HXDLIN( 180)					::flixel::tweens::FlxTween_obj::tween(icon, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("x",78,00,00,00),_hx_tmp2)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeInOut_dyn())));
            				}
            			}
            		}
HXLINE( 185)		if ((change != 0)) {
HXLINE( 187)			if ((change < 0)) {
HXLINE( 189)				int _g = 0;
HXDLIN( 189)				::Array< ::Dynamic> _g1 = this->categoryIcons;
HXDLIN( 189)				while((_g < _g1->length)){
HXLINE( 189)					 ::flixel::FlxSprite icon = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 189)					_g = (_g + 1);
HXLINE( 191)					int _hx_tmp = this->CurrentPack;
HXDLIN( 191)					int _hx_tmp1 = ((_hx_tmp - this->categoryIcons->indexOf(icon,null())) * -1280);
HXDLIN( 191)					int _hx_tmp2 = ::flixel::FlxG_obj::width;
HXDLIN( 191)					Float _hx_tmp3 = (_hx_tmp1 + ((( (Float)(_hx_tmp2) ) - icon->get_width()) / ( (Float)(2) )));
HXDLIN( 191)					::flixel::tweens::FlxTween_obj::tween(icon, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("x",78,00,00,00),_hx_tmp3)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeInOut_dyn())));
            				}
            			}
            			else {
HXLINE( 198)				int _g = 0;
HXDLIN( 198)				::Array< ::Dynamic> _g1 = this->categoryIcons;
HXDLIN( 198)				while((_g < _g1->length)){
HXLINE( 198)					 ::flixel::FlxSprite icon = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 198)					_g = (_g + 1);
HXLINE( 200)					int _hx_tmp = this->categoryIcons->indexOf(icon,null());
HXDLIN( 200)					int _hx_tmp1 = ((_hx_tmp - this->CurrentPack) * 1280);
HXDLIN( 200)					int _hx_tmp2 = ::flixel::FlxG_obj::width;
HXDLIN( 200)					Float _hx_tmp3 = (_hx_tmp1 + ((( (Float)(_hx_tmp2) ) - icon->get_width()) / ( (Float)(2) )));
HXDLIN( 200)					::flixel::tweens::FlxTween_obj::tween(icon, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("x",78,00,00,00),_hx_tmp3)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeInOut_dyn())));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CategoryState_obj,UpdatePackSelection,(void))

void CategoryState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_ad189f15c61207ca_208_update)
HXDLIN( 208)		 ::states::CategoryState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 209)		this->super::update(elapsed);
HXLINE( 211)		if (!(this->InMainFreeplayState)) {
HXLINE( 213)			if (!(::states::CategoryState_obj::loadingCategory)) {
HXLINE( 215)				if (this->get_controls()->get_UI_LEFT_P()) {
HXLINE( 217)					this->UpdatePackSelection(-1);
            				}
HXLINE( 219)				if (this->get_controls()->get_UI_RIGHT_P()) {
HXLINE( 221)					this->UpdatePackSelection(1);
            				}
HXLINE( 223)				bool _hx_tmp;
HXDLIN( 223)				if (this->get_controls()->get_ACCEPT()) {
HXLINE( 223)					_hx_tmp = !(this->loadingPack);
            				}
            				else {
HXLINE( 223)					_hx_tmp = false;
            				}
HXDLIN( 223)				if (_hx_tmp) {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::states::CategoryState,_gthis) HXARGC(1)
            					void _hx_run( ::flixel::util::FlxTimer Dumbshit){
            						HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::CategoryState,_gthis) HXARGC(1)
            						void _hx_run( ::flixel::util::FlxTimer Dumbshit){
            							HX_GC_STACKFRAME(&_hx_pos_ad189f15c61207ca_234_update)
HXLINE( 235)							{
HXLINE( 235)								int _g = 0;
HXDLIN( 235)								::Array< ::Dynamic> _g1 = _gthis->icons;
HXDLIN( 235)								while((_g < _g1->length)){
HXLINE( 235)									 ::flixel::FlxSprite item = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 235)									_g = (_g + 1);
HXDLIN( 235)									item->set_visible(false);
            								}
            							}
HXLINE( 236)							{
HXLINE( 236)								int _g2 = 0;
HXDLIN( 236)								::Array< ::Dynamic> _g3 = _gthis->titles;
HXDLIN( 236)								while((_g2 < _g3->length)){
HXLINE( 236)									 ::flixel::FlxSprite item = _g3->__get(_g2).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 236)									_g2 = (_g2 + 1);
HXDLIN( 236)									item->set_visible(false);
            								}
            							}
HXLINE( 238)							_gthis->LoadProperPack();
HXLINE( 239)							::states::CategoryState_obj::loadingCategory = false;
            						}
            						HX_END_LOCAL_FUNC1((void))

            						HX_GC_STACKFRAME(&_hx_pos_ad189f15c61207ca_229_update)
HXLINE( 230)						{
HXLINE( 230)							int _g = 0;
HXDLIN( 230)							::Array< ::Dynamic> _g1 = _gthis->icons;
HXDLIN( 230)							while((_g < _g1->length)){
HXLINE( 230)								 ::flixel::FlxSprite item = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 230)								_g = (_g + 1);
HXDLIN( 230)								::flixel::tweens::FlxTween_obj::tween(item, ::Dynamic(::hx::Anon_obj::Create(2)
            									->setFixed(0,HX_("y",79,00,00,00),(item->y - ( (Float)(200) )))
            									->setFixed(1,HX_("alpha",5e,a7,96,21),0)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            									->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeInOut_dyn())));
            							}
            						}
HXLINE( 231)						{
HXLINE( 231)							int _g2 = 0;
HXDLIN( 231)							::Array< ::Dynamic> _g3 = _gthis->titles;
HXDLIN( 231)							while((_g2 < _g3->length)){
HXLINE( 231)								 ::flixel::FlxSprite item = _g3->__get(_g2).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 231)								_g2 = (_g2 + 1);
HXDLIN( 231)								::flixel::tweens::FlxTween_obj::tween(item, ::Dynamic(::hx::Anon_obj::Create(2)
            									->setFixed(0,HX_("y",79,00,00,00),(item->y - ( (Float)(200) )))
            									->setFixed(1,HX_("alpha",5e,a7,96,21),0)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            									->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeInOut_dyn())));
            							}
            						}
HXLINE( 232)						 ::flixel::FlxCamera _hx_tmp = _gthis->get_camera();
HXDLIN( 232)						::flixel::tweens::FlxTween_obj::tween(_hx_tmp, ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeInOut_dyn())));
HXLINE( 233)						 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.7), ::Dynamic(new _hx_Closure_0(_gthis)),null());
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 225)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 225)					_hx_tmp->play(::backend::Paths_obj::sound(HX_("menu/confirmMenu",0f,67,5e,6d),null()),((Float)0.7),null(),null(),null(),null());
HXLINE( 226)					::states::CategoryState_obj::loadingCategory = true;
HXLINE( 228)					 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.2), ::Dynamic(new _hx_Closure_1(_gthis)),null());
            				}
HXLINE( 243)				if (this->get_controls()->get_BACK()) {
HXLINE( 245)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 245)					_hx_tmp->play(::backend::Paths_obj::sound(HX_("menu/cancelMenu",e9,45,d1,a2),null()),null(),null(),null(),null(),null());
HXLINE( 246)					::backend::MusicBeatState_obj::switchState( ::states::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            				}
HXLINE( 249)				return;
            			}
            		}
HXLINE( 254)		if ((::flixel::FlxG_obj::sound->music->_volume < ((Float)0.7))) {
HXLINE( 256)			 ::flixel::sound::FlxSound fh = ::flixel::FlxG_obj::sound->music;
HXDLIN( 256)			fh->set_volume((fh->_volume + (((Float)0.5) * ::flixel::FlxG_obj::elapsed)));
            		}
            	}


::String CategoryState_obj::categorySelected;

::Array< ::String > CategoryState_obj::bgPaths;

bool CategoryState_obj::loadingCategory;

 ::Dynamic CategoryState_obj::randomizeBG(){
            	HX_STACKFRAME(&_hx_pos_ad189f15c61207ca_260_randomizeBG)
HXLINE( 261)		int chance = ::flixel::FlxG_obj::random->_hx_int(0,(::states::CategoryState_obj::bgPaths->length - 1),null());
HXLINE( 262)		return ::backend::Paths_obj::image(::states::CategoryState_obj::bgPaths->__get(chance),null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CategoryState_obj,randomizeBG,return )


::hx::ObjectPtr< CategoryState_obj > CategoryState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< CategoryState_obj > __this = new CategoryState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< CategoryState_obj > CategoryState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	CategoryState_obj *__this = (CategoryState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CategoryState_obj), true, "states.CategoryState"));
	*(void **)__this = CategoryState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

CategoryState_obj::CategoryState_obj()
{
}

void CategoryState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CategoryState);
	HX_MARK_MEMBER_NAME(InMainFreeplayState,"InMainFreeplayState");
	HX_MARK_MEMBER_NAME(CurrentSongIcon,"CurrentSongIcon");
	HX_MARK_MEMBER_NAME(icons,"icons");
	HX_MARK_MEMBER_NAME(titles,"titles");
	HX_MARK_MEMBER_NAME(AllPossibleSongs,"AllPossibleSongs");
	HX_MARK_MEMBER_NAME(CurrentPack,"CurrentPack");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(loadingPack,"loadingPack");
	HX_MARK_MEMBER_NAME(check,"check");
	HX_MARK_MEMBER_NAME(glow,"glow");
	HX_MARK_MEMBER_NAME(spikes,"spikes");
	HX_MARK_MEMBER_NAME(categoryIcons,"categoryIcons");
	 ::backend::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CategoryState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(InMainFreeplayState,"InMainFreeplayState");
	HX_VISIT_MEMBER_NAME(CurrentSongIcon,"CurrentSongIcon");
	HX_VISIT_MEMBER_NAME(icons,"icons");
	HX_VISIT_MEMBER_NAME(titles,"titles");
	HX_VISIT_MEMBER_NAME(AllPossibleSongs,"AllPossibleSongs");
	HX_VISIT_MEMBER_NAME(CurrentPack,"CurrentPack");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(loadingPack,"loadingPack");
	HX_VISIT_MEMBER_NAME(check,"check");
	HX_VISIT_MEMBER_NAME(glow,"glow");
	HX_VISIT_MEMBER_NAME(spikes,"spikes");
	HX_VISIT_MEMBER_NAME(categoryIcons,"categoryIcons");
	 ::backend::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CategoryState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"glow") ) { return ::hx::Val( glow ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"icons") ) { return ::hx::Val( icons ); }
		if (HX_FIELD_EQ(inName,"check") ) { return ::hx::Val( check ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"titles") ) { return ::hx::Val( titles ); }
		if (HX_FIELD_EQ(inName,"spikes") ) { return ::hx::Val( spikes ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"CurrentPack") ) { return ::hx::Val( CurrentPack ); }
		if (HX_FIELD_EQ(inName,"loadingPack") ) { return ::hx::Val( loadingPack ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"categoryIcons") ) { return ::hx::Val( categoryIcons ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"LoadProperPack") ) { return ::hx::Val( LoadProperPack_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"CurrentSongIcon") ) { return ::hx::Val( CurrentSongIcon ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"AllPossibleSongs") ) { return ::hx::Val( AllPossibleSongs ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"InMainFreeplayState") ) { return ::hx::Val( InMainFreeplayState ); }
		if (HX_FIELD_EQ(inName,"UpdatePackSelection") ) { return ::hx::Val( UpdatePackSelection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool CategoryState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"bgPaths") ) { outValue = ( bgPaths ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"randomizeBG") ) { outValue = randomizeBG_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadingCategory") ) { outValue = ( loadingCategory ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"categorySelected") ) { outValue = ( categorySelected ); return true; }
	}
	return false;
}

::hx::Val CategoryState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"glow") ) { glow=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"icons") ) { icons=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"check") ) { check=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"titles") ) { titles=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spikes") ) { spikes=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"CurrentPack") ) { CurrentPack=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loadingPack") ) { loadingPack=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"categoryIcons") ) { categoryIcons=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"CurrentSongIcon") ) { CurrentSongIcon=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"AllPossibleSongs") ) { AllPossibleSongs=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"InMainFreeplayState") ) { InMainFreeplayState=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CategoryState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"bgPaths") ) { bgPaths=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadingCategory") ) { loadingCategory=ioValue.Cast< bool >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"categorySelected") ) { categorySelected=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void CategoryState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("InMainFreeplayState",93,e3,e1,a9));
	outFields->push(HX_("CurrentSongIcon",27,07,69,68));
	outFields->push(HX_("icons",da,a2,d7,b6));
	outFields->push(HX_("titles",db,cf,77,23));
	outFields->push(HX_("AllPossibleSongs",0c,bd,68,8d));
	outFields->push(HX_("CurrentPack",92,47,16,67));
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("loadingPack",75,bf,4c,90));
	outFields->push(HX_("check",c8,98,b6,45));
	outFields->push(HX_("glow",8d,4e,67,44));
	outFields->push(HX_("spikes",ed,67,a4,bd));
	outFields->push(HX_("categoryIcons",fc,4e,e6,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CategoryState_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(CategoryState_obj,InMainFreeplayState),HX_("InMainFreeplayState",93,e3,e1,a9)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CategoryState_obj,CurrentSongIcon),HX_("CurrentSongIcon",27,07,69,68)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CategoryState_obj,icons),HX_("icons",da,a2,d7,b6)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CategoryState_obj,titles),HX_("titles",db,cf,77,23)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(CategoryState_obj,AllPossibleSongs),HX_("AllPossibleSongs",0c,bd,68,8d)},
	{::hx::fsInt,(int)offsetof(CategoryState_obj,CurrentPack),HX_("CurrentPack",92,47,16,67)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CategoryState_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsBool,(int)offsetof(CategoryState_obj,loadingPack),HX_("loadingPack",75,bf,4c,90)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CategoryState_obj,check),HX_("check",c8,98,b6,45)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CategoryState_obj,glow),HX_("glow",8d,4e,67,44)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CategoryState_obj,spikes),HX_("spikes",ed,67,a4,bd)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CategoryState_obj,categoryIcons),HX_("categoryIcons",fc,4e,e6,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo CategoryState_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &CategoryState_obj::categorySelected,HX_("categorySelected",79,3f,4b,6b)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &CategoryState_obj::bgPaths,HX_("bgPaths",29,1b,7e,6a)},
	{::hx::fsBool,(void *) &CategoryState_obj::loadingCategory,HX_("loadingCategory",9a,91,7d,41)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String CategoryState_obj_sMemberFields[] = {
	HX_("InMainFreeplayState",93,e3,e1,a9),
	HX_("CurrentSongIcon",27,07,69,68),
	HX_("icons",da,a2,d7,b6),
	HX_("titles",db,cf,77,23),
	HX_("AllPossibleSongs",0c,bd,68,8d),
	HX_("CurrentPack",92,47,16,67),
	HX_("bg",c5,55,00,00),
	HX_("loadingPack",75,bf,4c,90),
	HX_("check",c8,98,b6,45),
	HX_("glow",8d,4e,67,44),
	HX_("spikes",ed,67,a4,bd),
	HX_("categoryIcons",fc,4e,e6,00),
	HX_("create",fc,66,0f,7c),
	HX_("LoadProperPack",af,d7,43,8a),
	HX_("UpdatePackSelection",4a,4e,b5,c4),
	HX_("update",09,86,05,87),
	::String(null()) };

static void CategoryState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CategoryState_obj::categorySelected,"categorySelected");
	HX_MARK_MEMBER_NAME(CategoryState_obj::bgPaths,"bgPaths");
	HX_MARK_MEMBER_NAME(CategoryState_obj::loadingCategory,"loadingCategory");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CategoryState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CategoryState_obj::categorySelected,"categorySelected");
	HX_VISIT_MEMBER_NAME(CategoryState_obj::bgPaths,"bgPaths");
	HX_VISIT_MEMBER_NAME(CategoryState_obj::loadingCategory,"loadingCategory");
};

#endif

::hx::Class CategoryState_obj::__mClass;

static ::String CategoryState_obj_sStaticFields[] = {
	HX_("categorySelected",79,3f,4b,6b),
	HX_("bgPaths",29,1b,7e,6a),
	HX_("loadingCategory",9a,91,7d,41),
	HX_("randomizeBG",36,81,6b,9d),
	::String(null())
};

void CategoryState_obj::__register()
{
	CategoryState_obj _hx_dummy;
	CategoryState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.CategoryState",e7,35,b4,2b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CategoryState_obj::__GetStatic;
	__mClass->mSetStaticField = &CategoryState_obj::__SetStatic;
	__mClass->mMarkFunc = CategoryState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CategoryState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CategoryState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CategoryState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CategoryState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CategoryState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CategoryState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CategoryState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ad189f15c61207ca_53_boot)
HXDLIN(  53)		bgPaths = ::Array_obj< ::String >::fromData( _hx_array_data_2bb435e7_20,26);
            	}
{
            	HX_STACKFRAME(&_hx_pos_ad189f15c61207ca_83_boot)
HXDLIN(  83)		loadingCategory = false;
            	}
}

} // end namespace states
