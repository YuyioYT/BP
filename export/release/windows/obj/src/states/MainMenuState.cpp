#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_Achievements
#include <backend/Achievements.h>
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
#ifndef INCLUDED_backend_Mods
#include <backend/Mods.h>
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
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
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
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
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
#ifndef INCLUDED_objects_AchievementPopup
#include <objects/AchievementPopup.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_options_OptionsState
#include <options/OptionsState.h>
#endif
#ifndef INCLUDED_states_AchievementsMenuState
#include <states/AchievementsMenuState.h>
#endif
#ifndef INCLUDED_states_CategoryState
#include <states/CategoryState.h>
#endif
#ifndef INCLUDED_states_CreditsState
#include <states/CreditsState.h>
#endif
#ifndef INCLUDED_states_FreeplayState
#include <states/FreeplayState.h>
#endif
#ifndef INCLUDED_states_GalleryState
#include <states/GalleryState.h>
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
#ifndef INCLUDED_states_StoryMenuState
#include <states/StoryMenuState.h>
#endif
#ifndef INCLUDED_states_TitleState
#include <states/TitleState.h>
#endif
#ifndef INCLUDED_states_editors_MasterEditorMenu
#include <states/editors/MasterEditorMenu.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_89e648ab22b7047a_19_new,"states.MainMenuState","new",0x55e2079f,"states.MainMenuState.new","states/MainMenuState.hx",19,0x1c04e2b2)
static const ::String _hx_array_data_36084c2d_1[] = {
	HX_("story_mode",2d,63,e6,a4),HX_("freeplay",a0,90,86,22),HX_("options",5e,33,fe,df),HX_("credits",1a,0e,5e,13),HX_("gallery",92,80,b7,fa),HX_("awards",b6,92,c1,8d),
};
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_93_create,"states.MainMenuState","create",0x17a2011d,"states.MainMenuState.create","states/MainMenuState.hx",93,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_261_giveAchievement,"states.MainMenuState","giveAchievement",0x1c6783dd,"states.MainMenuState.giveAchievement","states/MainMenuState.hx",261,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_271_update,"states.MainMenuState","update",0x2298202a,"states.MainMenuState.update","states/MainMenuState.hx",271,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_329_update,"states.MainMenuState","update",0x2298202a,"states.MainMenuState.update","states/MainMenuState.hx",329,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_332_update,"states.MainMenuState","update",0x2298202a,"states.MainMenuState.update","states/MainMenuState.hx",332,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_336_update,"states.MainMenuState","update",0x2298202a,"states.MainMenuState.update","states/MainMenuState.hx",336,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_339_update,"states.MainMenuState","update",0x2298202a,"states.MainMenuState.update","states/MainMenuState.hx",339,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_344_update,"states.MainMenuState","update",0x2298202a,"states.MainMenuState.update","states/MainMenuState.hx",344,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_398_changeItem,"states.MainMenuState","changeItem",0xa229b944,"states.MainMenuState.changeItem","states/MainMenuState.hx",398,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_388_changeItem,"states.MainMenuState","changeItem",0xa229b944,"states.MainMenuState.changeItem","states/MainMenuState.hx",388,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_87_randomizeBG,"states.MainMenuState","randomizeBG",0xf7f18f75,"states.MainMenuState.randomizeBG","states/MainMenuState.hx",87,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_21_boot,"states.MainMenuState","boot",0xc7fda413,"states.MainMenuState.boot","states/MainMenuState.hx",21,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_22_boot,"states.MainMenuState","boot",0xc7fda413,"states.MainMenuState.boot","states/MainMenuState.hx",22,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_23_boot,"states.MainMenuState","boot",0xc7fda413,"states.MainMenuState.boot","states/MainMenuState.hx",23,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_24_boot,"states.MainMenuState","boot",0xc7fda413,"states.MainMenuState.boot","states/MainMenuState.hx",24,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_25_boot,"states.MainMenuState","boot",0xc7fda413,"states.MainMenuState.boot","states/MainMenuState.hx",25,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_40_boot,"states.MainMenuState","boot",0xc7fda413,"states.MainMenuState.boot","states/MainMenuState.hx",40,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_42_boot,"states.MainMenuState","boot",0xc7fda413,"states.MainMenuState.boot","states/MainMenuState.hx",42,0x1c04e2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_89e648ab22b7047a_57_boot,"states.MainMenuState","boot",0xc7fda413,"states.MainMenuState.boot","states/MainMenuState.hx",57,0x1c04e2b2)
static const ::String _hx_array_data_36084c2d_27[] = {
	HX_("backgrounds/arandomguy",31,6c,0a,74),HX_("backgrounds/cesars",bb,1a,0d,24),HX_("backgrounds/cheesedjelly",5b,15,9d,3e),HX_("backgrounds/darealmatt",f9,e0,af,1b),HX_("backgrounds/darlyboxman",87,4f,03,cb),HX_("backgrounds/doodoofeces",a8,45,49,64),HX_("backgrounds/expunged",da,1b,56,ec),HX_("backgrounds/eyes",ac,b2,00,e4),HX_("backgrounds/fast_f00d",77,24,fc,00),HX_("backgrounds/ion",3e,38,33,86),HX_("backgrounds/isaaclul",54,0f,95,76),HX_("backgrounds/kanandraw",7f,8a,e2,58),HX_("backgrounds/mmimim",72,4b,40,b8),HX_("backgrounds/morpho",f1,a5,02,e5),HX_("backgrounds/osp",42,c9,37,86),HX_("backgrounds/Senza_titolo_200_20230711092018",e7,33,2e,cd),HX_("backgrounds/Senza_titolo_201_20230711093117",e5,55,08,95),HX_("backgrounds/slushX",31,fd,f0,92),HX_("backgrounds/spitz",a8,e1,47,a6),HX_("backgrounds/tamrika",e3,04,b8,27),HX_("backgrounds/ultimate poop",05,be,ab,12),HX_("backgrounds/ultimate poop2",8d,86,9a,43),HX_("backgrounds/voltrex",7a,a7,d4,81),HX_("backgrounds/watch_out",54,36,b3,8a),HX_("backgrounds/whatisthis",d6,bd,87,08),HX_("backgrounds/zevisly",58,23,56,e3),
};
namespace states{

void MainMenuState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_19_new)
HXLINE( 268)		this->selectedSomethin = false;
HXLINE(  47)		this->optionShit = ::Array_obj< ::String >::fromData( _hx_array_data_36084c2d_1,6);
HXLINE(  19)		super::__construct(TransIn,TransOut);
            	}

Dynamic MainMenuState_obj::__CreateEmpty() { return new MainMenuState_obj; }

void *MainMenuState_obj::_hx_vtable = 0;

Dynamic MainMenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MainMenuState_obj > _hx_result = new MainMenuState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MainMenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x53aaab8a) {
		if (inClassId<=(int)0x2b1dec0f) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2b1dec0f;
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

void MainMenuState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_93_create)
HXLINE(  95)		{
HXLINE(  95)			::backend::Mods_obj::globalMods = ::Array_obj< ::String >::__new(0);
HXDLIN(  95)			{
HXLINE(  95)				int _g = 0;
HXDLIN(  95)				if (!(::backend::Mods_obj::updatedOnState)) {
HXLINE(  95)					::backend::Mods_obj::updateModList();
            				}
HXDLIN(  95)				::Array< ::String > list_enabled = ::Array_obj< ::String >::__new(0);
HXDLIN(  95)				::Array< ::String > list_disabled = ::Array_obj< ::String >::__new(0);
HXDLIN(  95)				::Array< ::String > list_all = ::Array_obj< ::String >::__new(0);
HXDLIN(  95)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  95)					int _g = 0;
HXDLIN(  95)					::String path = HX_("modsList.txt",f1,ca,08,ac);
HXDLIN(  95)					::String daList = null();
HXDLIN(  95)					::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXLINE(  73)					path = formatted->__get((formatted->length - 1));
HXLINE(  95)					if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  74)						daList = ::sys::io::File_obj::getContent(path);
            					}
HXLINE(  95)					::Array< ::String > _g1;
HXDLIN(  95)					if (::hx::IsNotNull( daList )) {
HXLINE(  95)						::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXLINE( 145)						daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXLINE(  95)						{
HXLINE(  95)							int _g = 0;
HXDLIN(  95)							int _g2 = daList1->length;
HXDLIN(  95)							while((_g < _g2)){
HXLINE(  95)								_g = (_g + 1);
HXDLIN(  95)								int i = (_g - 1);
HXDLIN(  95)								daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            							}
            						}
HXDLIN(  95)						_g1 = daList1;
            					}
            					else {
HXLINE(  95)						_g1 = ::Array_obj< ::String >::__new(0);
            					}
HXDLIN(  95)					while((_g < _g1->length)){
HXLINE(  95)						::String mod = _g1->__get(_g);
HXDLIN(  95)						_g = (_g + 1);
HXDLIN(  95)						if ((::StringTools_obj::trim(mod).length < 1)) {
HXLINE(  95)							continue;
            						}
HXDLIN(  95)						::Array< ::String > dat = mod.split(HX_("|",7c,00,00,00));
HXDLIN(  95)						list_all->push(dat->__get(0));
HXDLIN(  95)						if ((dat->__get(1) == HX_("1",31,00,00,00))) {
HXLINE(  95)							list_enabled->push(dat->__get(0));
            						}
            						else {
HXLINE(  95)							list_disabled->push(dat->__get(0));
            						}
            					}
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 172)						 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE(  95)						::haxe::Log_obj::trace(e,::hx::SourceInfo(HX_("source/backend/Mods.hx",1e,5b,8b,ff),173,HX_("backend.Mods",2b,aa,ba,a1),HX_("parseList",31,6e,59,cf)));
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXDLIN(  95)				::Array< ::String > _g1 = list_enabled;
HXDLIN(  95)				while((_g < _g1->length)){
HXLINE(  95)					::String mod = _g1->__get(_g);
HXDLIN(  95)					_g = (_g + 1);
HXDLIN(  95)					 ::Dynamic pack = ::backend::Mods_obj::getPack(mod);
HXDLIN(  95)					bool _hx_tmp;
HXDLIN(  95)					if (::hx::IsNotNull( pack )) {
HXLINE(  95)						_hx_tmp = ( (bool)(pack->__Field(HX_("runsGlobally",98,2d,b5,06),::hx::paccDynamic)) );
            					}
            					else {
HXLINE(  95)						_hx_tmp = false;
            					}
HXDLIN(  95)					if (_hx_tmp) {
HXLINE(  95)						::backend::Mods_obj::globalMods->push(mod);
            					}
            				}
            			}
            		}
HXLINE(  97)		::backend::Mods_obj::loadTopMod();
HXLINE( 101)		::backend::DiscordClient_obj::changePresence(HX_("In the Menus",0a,c1,ad,c6),null(),null(),null(),null());
HXLINE( 104)		this->camGame =  ::flixel::FlxCamera_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null());
HXLINE( 105)		this->camAchievement =  ::flixel::FlxCamera_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null());
HXLINE( 106)		{
HXLINE( 106)			 ::flixel::FlxCamera _hx_tmp = this->camAchievement;
HXDLIN( 106)			_hx_tmp->bgColor = (_hx_tmp->bgColor & 16777215);
HXDLIN( 106)			 ::flixel::FlxCamera _hx_tmp1 = this->camAchievement;
HXDLIN( 106)			_hx_tmp1->bgColor = (_hx_tmp1->bgColor | 0);
            		}
HXLINE( 108)		::flixel::FlxG_obj::cameras->reset(this->camGame);
HXLINE( 109)		::flixel::FlxG_obj::cameras->add(this->camAchievement,false).StaticCast<  ::flixel::FlxCamera >();
HXLINE( 110)		::flixel::FlxG_obj::cameras->setDefaultDrawTarget(this->camGame,true);
HXLINE( 112)		this->transIn = ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransIn;
HXLINE( 113)		this->transOut = ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransOut;
HXLINE( 115)		this->persistentUpdate = (this->persistentDraw = true);
HXLINE( 116)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE( 118)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN( 118)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(::states::MainMenuState_obj::randomizeBG(),null(),null(),null(),null(),null());
HXLINE( 119)		bg1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 120)		bg1->setGraphicSize(::Std_obj::_hx_int((bg1->get_width() * ((Float)1.175))),null());
HXLINE( 121)		bg1->updateHitbox();
HXLINE( 122)		{
HXLINE( 122)			int axes = 17;
HXDLIN( 122)			bool _hx_tmp2;
HXDLIN( 122)			if ((axes != 1)) {
HXLINE( 122)				_hx_tmp2 = (axes == 17);
            			}
            			else {
HXLINE( 122)				_hx_tmp2 = true;
            			}
HXDLIN( 122)			if (_hx_tmp2) {
HXLINE( 122)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 122)				bg1->set_x(((( (Float)(_hx_tmp) ) - bg1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 122)			bool _hx_tmp3;
HXDLIN( 122)			if ((axes != 16)) {
HXLINE( 122)				_hx_tmp3 = (axes == 17);
            			}
            			else {
HXLINE( 122)				_hx_tmp3 = true;
            			}
HXDLIN( 122)			if (_hx_tmp3) {
HXLINE( 122)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 122)				bg1->set_y(((( (Float)(_hx_tmp) ) - bg1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 123)		{
HXLINE( 123)			 ::flixel::math::FlxBasePoint this1 = bg1->scrollFactor;
HXDLIN( 123)			this1->set_x(( (Float)(0) ));
HXDLIN( 123)			this1->set_y(( (Float)(0) ));
            		}
HXLINE( 124)		bg1->set_color(-13762560);
HXLINE( 125)		this->add(bg1);
HXLINE( 127)		this->check =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,::backend::Paths_obj::image(HX_("menuimages/check",10,f1,52,ff),null(),null()),null(),0,0);
HXLINE( 128)		{
HXLINE( 128)			 ::flixel::math::FlxBasePoint this2 = this->check->velocity;
HXDLIN( 128)			this2->set_x(( (Float)(150) ));
HXDLIN( 128)			this2->set_y(( (Float)(150) ));
            		}
HXLINE( 129)		{
HXLINE( 129)			 ::flixel::FlxSprite _this = this->check;
HXDLIN( 129)			int axes1 = 17;
HXDLIN( 129)			bool _hx_tmp4;
HXDLIN( 129)			if ((axes1 != 1)) {
HXLINE( 129)				_hx_tmp4 = (axes1 == 17);
            			}
            			else {
HXLINE( 129)				_hx_tmp4 = true;
            			}
HXDLIN( 129)			if (_hx_tmp4) {
HXLINE( 129)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 129)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 129)			bool _hx_tmp5;
HXDLIN( 129)			if ((axes1 != 16)) {
HXLINE( 129)				_hx_tmp5 = (axes1 == 17);
            			}
            			else {
HXLINE( 129)				_hx_tmp5 = true;
            			}
HXDLIN( 129)			if (_hx_tmp5) {
HXLINE( 129)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 129)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 130)		{
HXLINE( 130)			 ::flixel::math::FlxBasePoint this3 = this->check->scrollFactor;
HXDLIN( 130)			this3->set_x(( (Float)(0) ));
HXDLIN( 130)			this3->set_y(( (Float)(0) ));
            		}
HXLINE( 131)		this->add(this->check);
HXLINE( 133)		 ::flixel::FlxSprite glow =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN( 133)		 ::flixel::FlxSprite glow1 = glow->loadGraphic(::backend::Paths_obj::image(HX_("menuimages/glow",45,97,aa,a5),null(),null()),null(),null(),null(),null(),null());
HXLINE( 134)		glow1->setGraphicSize(::Std_obj::_hx_int((glow1->get_width() * ((Float)1.175))),null());
HXLINE( 135)		glow1->updateHitbox();
HXLINE( 136)		{
HXLINE( 136)			int axes2 = 17;
HXDLIN( 136)			bool _hx_tmp6;
HXDLIN( 136)			if ((axes2 != 1)) {
HXLINE( 136)				_hx_tmp6 = (axes2 == 17);
            			}
            			else {
HXLINE( 136)				_hx_tmp6 = true;
            			}
HXDLIN( 136)			if (_hx_tmp6) {
HXLINE( 136)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 136)				glow1->set_x(((( (Float)(_hx_tmp) ) - glow1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 136)			bool _hx_tmp7;
HXDLIN( 136)			if ((axes2 != 16)) {
HXLINE( 136)				_hx_tmp7 = (axes2 == 17);
            			}
            			else {
HXLINE( 136)				_hx_tmp7 = true;
            			}
HXDLIN( 136)			if (_hx_tmp7) {
HXLINE( 136)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 136)				glow1->set_y(((( (Float)(_hx_tmp) ) - glow1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 137)		glow1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 138)		{
HXLINE( 138)			 ::flixel::math::FlxBasePoint this4 = glow1->scrollFactor;
HXDLIN( 138)			this4->set_x(( (Float)(0) ));
HXDLIN( 138)			this4->set_y(( (Float)(0) ));
            		}
HXLINE( 139)		this->add(glow1);
HXLINE( 141)		 ::flixel::FlxSprite line =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN( 141)		 ::flixel::FlxSprite line1 = line->loadGraphic(::backend::Paths_obj::image(HX_("menuimages/line",ac,60,f6,a8),null(),null()),null(),null(),null(),null(),null());
HXLINE( 142)		line1->setGraphicSize(::Std_obj::_hx_int((glow1->get_width() * ((Float)1.175))),null());
HXLINE( 143)		line1->updateHitbox();
HXLINE( 144)		{
HXLINE( 144)			int axes3 = 17;
HXDLIN( 144)			bool _hx_tmp8;
HXDLIN( 144)			if ((axes3 != 1)) {
HXLINE( 144)				_hx_tmp8 = (axes3 == 17);
            			}
            			else {
HXLINE( 144)				_hx_tmp8 = true;
            			}
HXDLIN( 144)			if (_hx_tmp8) {
HXLINE( 144)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 144)				line1->set_x(((( (Float)(_hx_tmp) ) - line1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 144)			bool _hx_tmp9;
HXDLIN( 144)			if ((axes3 != 16)) {
HXLINE( 144)				_hx_tmp9 = (axes3 == 17);
            			}
            			else {
HXLINE( 144)				_hx_tmp9 = true;
            			}
HXDLIN( 144)			if (_hx_tmp9) {
HXLINE( 144)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 144)				line1->set_y(((( (Float)(_hx_tmp) ) - line1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 145)		line1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 146)		{
HXLINE( 146)			 ::flixel::math::FlxBasePoint this5 = line1->scrollFactor;
HXDLIN( 146)			this5->set_x(( (Float)(0) ));
HXDLIN( 146)			this5->set_y(( (Float)(0) ));
            		}
HXLINE( 147)		this->add(line1);
HXLINE( 149)		this->slidething =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,::backend::Paths_obj::image(HX_("menuimages/hahaslider",8b,40,35,9c),null(),null()),null(),0,10000);
HXLINE( 150)		{
HXLINE( 150)			 ::flixel::math::FlxBasePoint this6 = this->slidething->velocity;
HXDLIN( 150)			this6->set_x(( (Float)(-14) ));
HXDLIN( 150)			this6->set_y(( (Float)(0) ));
            		}
HXLINE( 151)		this->slidething->set_y(( (Float)(150) ));
HXLINE( 152)		{
HXLINE( 152)			 ::flixel::addons::display::FlxBackdrop _this1 = this->slidething;
HXDLIN( 152)			int axes4 = 1;
HXDLIN( 152)			bool _hx_tmp10;
HXDLIN( 152)			if ((axes4 != 1)) {
HXLINE( 152)				_hx_tmp10 = (axes4 == 17);
            			}
            			else {
HXLINE( 152)				_hx_tmp10 = true;
            			}
HXDLIN( 152)			if (_hx_tmp10) {
HXLINE( 152)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 152)				_this1->set_x(((( (Float)(_hx_tmp) ) - _this1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 152)			bool _hx_tmp11;
HXDLIN( 152)			if ((axes4 != 16)) {
HXLINE( 152)				_hx_tmp11 = (axes4 == 17);
            			}
            			else {
HXLINE( 152)				_hx_tmp11 = true;
            			}
HXDLIN( 152)			if (_hx_tmp11) {
HXLINE( 152)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 152)				_this1->set_y(((( (Float)(_hx_tmp) ) - _this1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 153)		 ::flixel::addons::display::FlxBackdrop _hx_tmp12 = this->slidething;
HXDLIN( 153)		_hx_tmp12->setGraphicSize(::Std_obj::_hx_int((this->slidething->get_width() * ((Float)0.65))),null());
HXLINE( 154)		this->add(this->slidething);
HXLINE( 155)		{
HXLINE( 155)			 ::flixel::math::FlxBasePoint this7 = this->slidething->scrollFactor;
HXDLIN( 155)			this7->set_x(( (Float)(0) ));
HXDLIN( 155)			this7->set_y(( (Float)(0) ));
            		}
HXLINE( 157)		this->spikes =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,::backend::Paths_obj::image(HX_("menuimages/spikeys",68,87,cf,cd),null(),null()),null(),0,10000);
HXLINE( 158)		{
HXLINE( 158)			 ::flixel::math::FlxBasePoint this8 = this->spikes->velocity;
HXDLIN( 158)			this8->set_x(( (Float)(100) ));
HXDLIN( 158)			this8->set_y(( (Float)(0) ));
            		}
HXLINE( 159)		{
HXLINE( 159)			 ::flixel::FlxSprite _this2 = this->spikes;
HXDLIN( 159)			int axes5 = 17;
HXDLIN( 159)			bool _hx_tmp13;
HXDLIN( 159)			if ((axes5 != 1)) {
HXLINE( 159)				_hx_tmp13 = (axes5 == 17);
            			}
            			else {
HXLINE( 159)				_hx_tmp13 = true;
            			}
HXDLIN( 159)			if (_hx_tmp13) {
HXLINE( 159)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 159)				_this2->set_x(((( (Float)(_hx_tmp) ) - _this2->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 159)			bool _hx_tmp14;
HXDLIN( 159)			if ((axes5 != 16)) {
HXLINE( 159)				_hx_tmp14 = (axes5 == 17);
            			}
            			else {
HXLINE( 159)				_hx_tmp14 = true;
            			}
HXDLIN( 159)			if (_hx_tmp14) {
HXLINE( 159)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 159)				_this2->set_y(((( (Float)(_hx_tmp) ) - _this2->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 160)		this->add(this->spikes);
HXLINE( 161)		{
HXLINE( 161)			 ::flixel::math::FlxBasePoint this9 = this->spikes->scrollFactor;
HXDLIN( 161)			this9->set_x(( (Float)(0) ));
HXDLIN( 161)			this9->set_y(( (Float)(0) ));
            		}
HXLINE( 163)		 ::flixel::FlxSprite _hx_tmp15 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN( 163)		this->gr = _hx_tmp15->loadGraphic(::backend::Paths_obj::image(HX_("menuimages/funny",92,52,25,c2),null(),null()),null(),null(),null(),null(),null());
HXLINE( 164)		 ::flixel::FlxSprite _hx_tmp16 = this->gr;
HXDLIN( 164)		_hx_tmp16->setGraphicSize(::Std_obj::_hx_int((this->gr->get_width() * ((Float)1.175))),null());
HXLINE( 165)		this->gr->updateHitbox();
HXLINE( 166)		{
HXLINE( 166)			 ::flixel::FlxSprite _this3 = this->gr;
HXDLIN( 166)			int axes6 = 17;
HXDLIN( 166)			bool _hx_tmp17;
HXDLIN( 166)			if ((axes6 != 1)) {
HXLINE( 166)				_hx_tmp17 = (axes6 == 17);
            			}
            			else {
HXLINE( 166)				_hx_tmp17 = true;
            			}
HXDLIN( 166)			if (_hx_tmp17) {
HXLINE( 166)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 166)				_this3->set_x(((( (Float)(_hx_tmp) ) - _this3->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 166)			bool _hx_tmp18;
HXDLIN( 166)			if ((axes6 != 16)) {
HXLINE( 166)				_hx_tmp18 = (axes6 == 17);
            			}
            			else {
HXLINE( 166)				_hx_tmp18 = true;
            			}
HXDLIN( 166)			if (_hx_tmp18) {
HXLINE( 166)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 166)				_this3->set_y(((( (Float)(_hx_tmp) ) - _this3->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 167)		this->gr->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 168)		{
HXLINE( 168)			 ::flixel::math::FlxBasePoint this10 = this->gr->scrollFactor;
HXDLIN( 168)			this10->set_x(( (Float)(0) ));
HXDLIN( 168)			this10->set_y(( (Float)(0) ));
            		}
HXLINE( 169)		this->add(this->gr);
HXLINE( 171)		this->camFollow =  ::flixel::FlxObject_obj::__alloc( HX_CTX ,0,0,1,1);
HXLINE( 172)		this->add(this->camFollow);
HXLINE( 174)		this->menuItems =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 175)		this->add(this->menuItems);
HXLINE( 177)		this->menuItemms =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 178)		this->add(this->menuItemms);
HXLINE( 180)		Float scale = ( (Float)(1) );
HXLINE( 182)		{
HXLINE( 182)			int _g2 = 0;
HXDLIN( 182)			int _g3 = this->optionShit->length;
HXDLIN( 182)			while((_g2 < _g3)){
HXLINE( 182)				_g2 = (_g2 + 1);
HXDLIN( 182)				int i = (_g2 - 1);
HXLINE( 186)				Float xPosition;
HXLINE( 187)				Float yPosition;
HXLINE( 189)				 ::flixel::FlxSprite menuItem =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 190)				menuItem->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 191)				menuItem->scale->set_x(scale);
HXLINE( 192)				menuItem->scale->set_y(scale);
HXLINE( 193)				::String key;
HXDLIN( 193)				if ((::backend::ClientPrefs_obj::data->Lenguage == HX_W(u"Espa\u00f1ol",14aa,3bff))) {
HXLINE( 193)					key = HX_("_spanish",35,ea,b8,d2);
            				}
            				else {
HXLINE( 193)					key = HX_("",00,00,00,00);
            				}
HXDLIN( 193)				::String key1 = (HX_("mainmenu/menu_",a9,7b,4b,27) + (this->optionShit->__get(i) + key));
HXDLIN( 193)				::String library = null();
HXDLIN( 193)				 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(key1,null(),true);
HXDLIN( 193)				bool xmlExists = false;
HXDLIN( 193)				::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key1) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 193)				if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 390)					xmlExists = true;
            				}
HXLINE( 193)				 ::Dynamic _hx_tmp;
HXDLIN( 193)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 193)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE( 193)					_hx_tmp = ::backend::Paths_obj::image(key1,library,true);
            				}
HXDLIN( 193)				::String _hx_tmp1;
HXDLIN( 193)				if (xmlExists) {
HXLINE( 193)					_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            				}
            				else {
HXLINE( 193)					_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key1) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            				}
HXDLIN( 193)				menuItem->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 194)				menuItem->animation->addByPrefix(HX_("idle",14,a7,b3,45),(this->optionShit->__get(i) + HX_(" basic",8e,b6,25,79)),24,null(),null(),null());
HXLINE( 195)				menuItem->animation->addByPrefix(HX_("selected",5b,2a,6d,b1),(this->optionShit->__get(i) + HX_(" white",89,d6,28,95)),24,null(),null(),null());
HXLINE( 196)				menuItem->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 197)				menuItem->ID = i;
HXLINE( 198)				this->menuItems->add(menuItem).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 199)				{
HXLINE( 199)					 ::flixel::math::FlxBasePoint this1 = menuItem->scrollFactor;
HXDLIN( 199)					this1->set_x(( (Float)(0) ));
HXDLIN( 199)					this1->set_y(( (Float)(0) ));
            				}
HXLINE( 200)				menuItem->updateHitbox();
HXLINE( 202)				bool _hx_tmp2;
HXDLIN( 202)				if ((i > 2)) {
HXLINE( 202)					_hx_tmp2 = (i < 5);
            				}
            				else {
HXLINE( 202)					_hx_tmp2 = false;
            				}
HXDLIN( 202)				if (_hx_tmp2) {
HXLINE( 203)					xPosition = ( (Float)(((i * 150) + 430)) );
HXLINE( 204)					yPosition = ( (Float)(500) );
            				}
            				else {
HXLINE( 205)					if ((i == 5)) {
HXLINE( 206)						xPosition = ( (Float)(((i * 150) + 400)) );
HXLINE( 207)						yPosition = ( (Float)(500) );
            					}
            					else {
HXLINE( 209)						xPosition = ( (Float)(((i * 50) + 720)) );
HXLINE( 210)						yPosition = ( (Float)(((i * 110) + 200)) );
            					}
            				}
HXLINE( 213)				menuItem->setPosition(xPosition,yPosition);
            			}
            		}
HXLINE( 216)		 ::flixel::FlxSprite _hx_tmp19 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,600,-100,null());
HXDLIN( 216)		this->logo = _hx_tmp19->loadGraphic(::backend::Paths_obj::image(HX_("menuimages/logo",23,e8,fa,a8),null(),null()),null(),null(),null(),null(),null());
HXLINE( 217)		this->logo->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 218)		this->logo->updateHitbox();
HXLINE( 219)		this->logo->scale->set_x(((Float)0.6));
HXLINE( 220)		this->logo->scale->set_y(((Float)0.6));
HXLINE( 221)		{
HXLINE( 221)			 ::flixel::math::FlxBasePoint this11 = this->logo->scrollFactor;
HXDLIN( 221)			this11->set_x(( (Float)(0) ));
HXDLIN( 221)			this11->set_y(( (Float)(0) ));
            		}
HXLINE( 222)		this->add(this->logo);
HXLINE( 224)		::flixel::FlxG_obj::camera->follow(this->camFollow,null(),0);
HXLINE( 226)		 ::flixel::text::FlxText versionShit =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,12,(::flixel::FlxG_obj::height - 64),0,(HX_("Bambi's Purgatory v",20,aa,0e,0b) + ::states::MainMenuState_obj::bpEngineVersion),12,null());
HXLINE( 227)		{
HXLINE( 227)			 ::flixel::math::FlxBasePoint this12 = versionShit->scrollFactor;
HXDLIN( 227)			this12->set_x(( (Float)(0) ));
HXDLIN( 227)			this12->set_y(( (Float)(0) ));
            		}
HXLINE( 228)		versionShit->setFormat(HX_("fsb.otf",28,19,99,18),16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 229)		this->add(versionShit);
HXLINE( 230)		 ::flixel::text::FlxText versionShit1 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,12,(::flixel::FlxG_obj::height - 44),0,(HX_("Corn Engine v",50,da,42,5a) + ::states::MainMenuState_obj::cornEngineVersion),12,null());
HXLINE( 231)		{
HXLINE( 231)			 ::flixel::math::FlxBasePoint this13 = versionShit1->scrollFactor;
HXDLIN( 231)			this13->set_x(( (Float)(0) ));
HXDLIN( 231)			this13->set_y(( (Float)(0) ));
            		}
HXLINE( 232)		versionShit1->setFormat(HX_("fsb.otf",28,19,99,18),16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 233)		this->add(versionShit1);
HXLINE( 234)		 ::flixel::text::FlxText versionShit2 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,12,(::flixel::FlxG_obj::height - 24),0,(HX_("Friday Night Funkin' v",03,65,b0,2f) + ::states::MainMenuState_obj::fnfEngineVersion),12,null());
HXLINE( 235)		{
HXLINE( 235)			 ::flixel::math::FlxBasePoint this14 = versionShit2->scrollFactor;
HXDLIN( 235)			this14->set_x(( (Float)(0) ));
HXDLIN( 235)			this14->set_y(( (Float)(0) ));
            		}
HXLINE( 236)		versionShit2->setFormat(HX_("fsb.otf",28,19,99,18),16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 237)		this->add(versionShit2);
HXLINE( 241)		this->changeItem(null());
HXLINE( 244)		::backend::Achievements_obj::loadAchievements();
HXLINE( 245)		 ::Date leDate = ::Date_obj::now();
HXLINE( 246)		bool _hx_tmp20;
HXDLIN( 246)		if ((leDate->getDay() == 5)) {
HXLINE( 246)			_hx_tmp20 = (leDate->getHours() >= 18);
            		}
            		else {
HXLINE( 246)			_hx_tmp20 = false;
            		}
HXDLIN( 246)		if (_hx_tmp20) {
HXLINE( 247)			int achieveID = ::backend::Achievements_obj::getAchievementIndex(HX_("friday_night_play",9b,1f,4e,c7));
HXLINE( 248)			if (!(::backend::Achievements_obj::isAchievementUnlocked(( (::String)(::backend::Achievements_obj::achievementsStuff->__get(achieveID)->__GetItem(2)) )))) {
HXLINE( 249)				::backend::Achievements_obj::achievementsMap->set(( (::String)(::backend::Achievements_obj::achievementsStuff->__get(achieveID)->__GetItem(2)) ),true);
HXLINE( 250)				this->giveAchievement();
HXLINE( 251)				::backend::ClientPrefs_obj::saveSettings();
            			}
            		}
HXLINE( 256)		this->super::create();
            	}


void MainMenuState_obj::giveAchievement(){
            	HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_261_giveAchievement)
HXLINE( 262)		this->add( ::objects::AchievementPopup_obj::__alloc( HX_CTX ,HX_("friday_night_play",9b,1f,4e,c7),this->camAchievement));
HXLINE( 263)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 263)		_hx_tmp->play(::backend::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),((Float)0.7),null(),null(),null(),null());
HXLINE( 264)		::haxe::Log_obj::trace(HX_("Giving achievement \"friday_night_play\"",e6,1b,7d,1f),::hx::SourceInfo(HX_("source/states/MainMenuState.hx",3e,32,23,ea),264,HX_("states.MainMenuState",2d,4c,08,36),HX_("giveAchievement",1e,ea,83,24)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MainMenuState_obj,giveAchievement,(void))

void MainMenuState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_271_update)
HXDLIN( 271)		 ::states::MainMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 272)		if ((::flixel::FlxG_obj::sound->music->_volume < ((Float)0.8))) {
HXLINE( 274)			 ::flixel::sound::FlxSound fh = ::flixel::FlxG_obj::sound->music;
HXDLIN( 274)			fh->set_volume((fh->_volume + (((Float)0.5) * elapsed)));
HXLINE( 275)			if (::hx::IsNotNull( ::states::FreeplayState_obj::vocals )) {
HXLINE( 275)				 ::flixel::sound::FlxSound fh = ::states::FreeplayState_obj::vocals;
HXDLIN( 275)				fh->set_volume((fh->_volume + (((Float)0.5) * elapsed)));
            			}
            		}
HXLINE( 277)		Float Value = ((elapsed * ( (Float)(9) )) / (( (Float)(::flixel::FlxG_obj::updateFramerate) ) / ( (Float)(60) )));
HXDLIN( 277)		Float lowerBound;
HXDLIN( 277)		if ((Value < 0)) {
HXLINE( 277)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 277)			lowerBound = Value;
            		}
HXDLIN( 277)		Float _hx_tmp;
HXDLIN( 277)		if ((lowerBound > 1)) {
HXLINE( 277)			_hx_tmp = ( (Float)(1) );
            		}
            		else {
HXLINE( 277)			_hx_tmp = lowerBound;
            		}
HXDLIN( 277)		::flixel::FlxG_obj::camera->set_followLerp(_hx_tmp);
HXLINE( 279)		if (!(this->selectedSomethin)) {
HXLINE( 281)			 ::flixel::input::mouse::FlxMouse _this = ::flixel::FlxG_obj::mouse;
HXDLIN( 281)			bool _hx_tmp;
HXDLIN( 281)			if ((_this->_prevX == _this->x)) {
HXLINE( 281)				_hx_tmp = (_this->_prevY != _this->y);
            			}
            			else {
HXLINE( 281)				_hx_tmp = true;
            			}
HXDLIN( 281)			if (_hx_tmp) {
HXLINE( 282)				 ::Dynamic filter = null();
HXDLIN( 282)				 ::flixel::group::FlxTypedGroupIterator menuItem =  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->menuItems->members,filter);
HXDLIN( 282)				while(menuItem->hasNext()){
HXLINE( 282)					 ::flixel::FlxSprite menuItem1 = menuItem->next().StaticCast<  ::flixel::FlxSprite >();
HXLINE( 284)					if (::flixel::FlxG_obj::mouse->overlaps(menuItem1,null())) {
HXLINE( 286)						if ((::states::MainMenuState_obj::curSelected == menuItem1->ID)) {
HXLINE( 287)							goto _hx_goto_8;
            						}
HXLINE( 288)						::states::MainMenuState_obj::curSelected = menuItem1->ID;
HXLINE( 289)						this->changeItem(null());
HXLINE( 290)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 290)						_hx_tmp->play(::backend::Paths_obj::sound(HX_("Menu/scrollMenu",dc,7d,32,52),null()),null(),null(),null(),null(),null());
HXLINE( 291)						goto _hx_goto_8;
            					}
            				}
            				_hx_goto_8:;
            			}
HXLINE( 295)			if (this->get_controls()->get_UI_UP_P()) {
HXLINE( 297)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 297)				_hx_tmp->play(::backend::Paths_obj::sound(HX_("Menu/scrollMenu",dc,7d,32,52),null()),null(),null(),null(),null(),null());
HXLINE( 298)				this->changeItem(-1);
            			}
HXLINE( 301)			if (this->get_controls()->get_UI_DOWN_P()) {
HXLINE( 303)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 303)				_hx_tmp->play(::backend::Paths_obj::sound(HX_("Menu/scrollMenu",dc,7d,32,52),null()),null(),null(),null(),null(),null());
HXLINE( 304)				this->changeItem(1);
            			}
HXLINE( 307)			if (this->get_controls()->get_BACK()) {
HXLINE( 309)				this->selectedSomethin = true;
HXLINE( 310)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 310)				_hx_tmp->play(::backend::Paths_obj::sound(HX_("Menu/cancelMenu",c9,4d,5d,03),null()),null(),null(),null(),null(),null());
HXLINE( 311)				::backend::MusicBeatState_obj::switchState( ::states::TitleState_obj::__alloc( HX_CTX ,null(),null()));
            			}
HXLINE( 314)			bool _hx_tmp1;
HXDLIN( 314)			if (!(this->get_controls()->get_ACCEPT())) {
HXLINE( 314)				_hx_tmp1 = (::flixel::FlxG_obj::mouse->_leftButton->current == 2);
            			}
            			else {
HXLINE( 314)				_hx_tmp1 = true;
            			}
HXDLIN( 314)			if (_hx_tmp1) {
HXLINE( 316)				if ((this->optionShit->__get(::states::MainMenuState_obj::curSelected) == HX_("donate",6f,f1,29,2e))) {
HXLINE( 318)					::String prefix = HX_("",00,00,00,00);
HXDLIN( 318)					if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("^https?://",48,ee,dd,38),HX_("",00,00,00,00))->match(HX_("https://ninja-muffin24.itch.io/funkin",69,b0,72,92)))) {
HXLINE( 318)						prefix = HX_("http://",52,75,cd,5a);
            					}
HXDLIN( 318)					::openfl::Lib_obj::getURL( ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,(prefix + HX_("https://ninja-muffin24.itch.io/funkin",69,b0,72,92))),HX_("_blank",95,26,d9,b0));
            				}
            				else {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::MainMenuState,_gthis) HXARGC(1)
            					void _hx_run( ::flixel::tweens::FlxTween twn){
            						HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_329_update)
HXLINE( 329)						_gthis->gr->kill();
            					}
            					HX_END_LOCAL_FUNC1((void))

            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::states::MainMenuState,_gthis) HXARGC(1)
            					void _hx_run( ::flixel::tweens::FlxTween twn){
            						HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_332_update)
HXLINE( 332)						_gthis->logo->kill();
            					}
            					HX_END_LOCAL_FUNC1((void))

            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_4, ::states::MainMenuState,_gthis) HXARGC(1)
            					void _hx_run( ::flixel::FlxSprite spr){
            						HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_336_update)
HXLINE( 336)						if ((::states::MainMenuState_obj::curSelected != spr->ID)) {
            							HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::flixel::FlxSprite,spr) HXARGC(1)
            							void _hx_run( ::flixel::tweens::FlxTween twn){
            								HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_339_update)
HXLINE( 339)								spr->kill();
            							}
            							HX_END_LOCAL_FUNC1((void))

HXLINE( 338)							::flixel::tweens::FlxTween_obj::tween(spr, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("x",78,00,00,00),1000)),((Float)1.4), ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circInOut_dyn())));
HXLINE( 339)							::flixel::tweens::FlxTween_obj::tween(spr, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoOut_dyn())
            								->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_2(spr)))));
            						}
            						else {
            							HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::states::MainMenuState,_gthis) HXARGC(1)
            							void _hx_run( ::flixel::effects::FlxFlicker flick){
            								HX_GC_STACKFRAME(&_hx_pos_89e648ab22b7047a_344_update)
HXLINE( 345)								::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE( 346)								::String daChoice = _gthis->optionShit->__get(::states::MainMenuState_obj::curSelected);
HXLINE( 348)								::String _hx_switch_0 = daChoice;
            								if (  (_hx_switch_0==HX_("awards",b6,92,c1,8d)) ){
HXLINE( 355)									::backend::MusicBeatState_obj::switchState( ::states::AchievementsMenuState_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN( 355)									goto _hx_goto_9;
            								}
            								if (  (_hx_switch_0==HX_("credits",1a,0e,5e,13)) ){
HXLINE( 357)									::backend::MusicBeatState_obj::switchState( ::states::CreditsState_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN( 357)									goto _hx_goto_9;
            								}
            								if (  (_hx_switch_0==HX_("freeplay",a0,90,86,22)) ){
HXLINE( 353)									::backend::MusicBeatState_obj::switchState( ::states::CategoryState_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN( 353)									goto _hx_goto_9;
            								}
            								if (  (_hx_switch_0==HX_("gallery",92,80,b7,fa)) ){
HXLINE( 359)									::backend::MusicBeatState_obj::switchState( ::states::GalleryState_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN( 359)									goto _hx_goto_9;
            								}
            								if (  (_hx_switch_0==HX_("options",5e,33,fe,df)) ){
HXLINE( 361)									::backend::MusicBeatState_obj::switchState(::states::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::options::OptionsState_obj::__alloc( HX_CTX ,null(),null())) ),false));
HXLINE( 362)									::options::OptionsState_obj::onPlayState = false;
HXLINE( 363)									if (::hx::IsNotNull( ::states::PlayState_obj::SONG )) {
HXLINE( 365)										::states::PlayState_obj::SONG->__SetField(HX_("arrowSkin",e6,d4,f8,07),null(),::hx::paccDynamic);
HXLINE( 366)										::states::PlayState_obj::SONG->__SetField(HX_("splashSkin",84,03,e1,a1),null(),::hx::paccDynamic);
            									}
HXLINE( 360)									goto _hx_goto_9;
            								}
            								if (  (_hx_switch_0==HX_("story_mode",2d,63,e6,a4)) ){
HXLINE( 351)									::backend::MusicBeatState_obj::switchState( ::states::StoryMenuState_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN( 351)									goto _hx_goto_9;
            								}
            								_hx_goto_9:;
            							}
            							HX_END_LOCAL_FUNC1((void))

HXLINE( 343)							::flixel::effects::FlxFlicker_obj::flicker(spr,1,((Float)0.06),false,false, ::Dynamic(new _hx_Closure_3(_gthis)),null());
            						}
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 322)					this->selectedSomethin = true;
HXLINE( 323)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 323)					_hx_tmp->play(::backend::Paths_obj::sound(HX_("Menu/confirmMenu",2f,43,59,87),null()),null(),null(),null(),null(),null());
HXLINE( 326)					::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("zoom",13,a3,f8,50),((Float)1.35))),((Float)1.45), ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoIn_dyn())));
HXLINE( 328)					::flixel::tweens::FlxTween_obj::tween(this->gr, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("x",78,00,00,00),1000)),2, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circInOut_dyn())));
HXLINE( 329)					::flixel::tweens::FlxTween_obj::tween(this->gr, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("alpha",5e,a7,96,21),0)),2, ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoOut_dyn())
            						->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
HXLINE( 331)					::flixel::tweens::FlxTween_obj::tween(this->logo, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("x",78,00,00,00),1000)),5, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circInOut_dyn())));
HXLINE( 332)					::flixel::tweens::FlxTween_obj::tween(this->logo, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)1.5), ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoOut_dyn())
            						->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_1(_gthis)))));
HXLINE( 334)					this->menuItems->forEach( ::Dynamic(new _hx_Closure_4(_gthis)),null());
            				}
            			}
            			else {
HXLINE( 375)				if (this->get_controls()->justPressed(HX_("debug_1",05,20,57,5b))) {
HXLINE( 377)					this->selectedSomethin = true;
HXLINE( 378)					::backend::MusicBeatState_obj::switchState( ::states::editors::MasterEditorMenu_obj::__alloc( HX_CTX ,null(),null()));
            				}
            			}
            		}
HXLINE( 383)		this->super::update(elapsed);
            	}


void MainMenuState_obj::changeItem(::hx::Null< int >  __o_huh){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::MainMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite spr){
            			HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_398_changeItem)
HXLINE( 399)			spr->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 400)			spr->updateHitbox();
HXLINE( 402)			if ((spr->ID == ::states::MainMenuState_obj::curSelected)) {
HXLINE( 404)				spr->animation->play(HX_("selected",5b,2a,6d,b1),null(),null(),null());
HXLINE( 405)				Float add = ( (Float)(0) );
HXLINE( 406)				if ((_gthis->menuItems->length > 4)) {
HXLINE( 407)					add = ( (Float)((_gthis->menuItems->length * 8)) );
            				}
HXLINE( 409)				 ::flixel::FlxObject _gthis1 = _gthis->camFollow;
HXDLIN( 409)				Float _hx_tmp = spr->getGraphicMidpoint(null())->x;
HXDLIN( 409)				_gthis1->setPosition(_hx_tmp,(spr->getGraphicMidpoint(null())->y - add));
HXLINE( 410)				spr->centerOffsets(null());
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		int huh = __o_huh.Default(0);
            	HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_388_changeItem)
HXDLIN( 388)		 ::states::MainMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 389)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::states::MainMenuState >();
HXDLIN( 389)		::states::MainMenuState_obj::curSelected = (::states::MainMenuState_obj::curSelected + huh);
HXLINE( 391)		if ((::states::MainMenuState_obj::curSelected >= this->menuItems->length)) {
HXLINE( 392)			::states::MainMenuState_obj::curSelected = 0;
            		}
HXLINE( 393)		if ((::states::MainMenuState_obj::curSelected < 0)) {
HXLINE( 394)			::states::MainMenuState_obj::curSelected = (this->menuItems->length - 1);
            		}
HXLINE( 397)		this->menuItems->forEach( ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainMenuState_obj,changeItem,(void))

::String MainMenuState_obj::psychEngineVersion;

::String MainMenuState_obj::bpEngineVersion;

::String MainMenuState_obj::fnfEngineVersion;

::String MainMenuState_obj::cornEngineVersion;

int MainMenuState_obj::curSelected;

bool MainMenuState_obj::firstStart;

bool MainMenuState_obj::finishedFunnyMove;

::Array< ::String > MainMenuState_obj::bgPaths;

 ::Dynamic MainMenuState_obj::randomizeBG(){
            	HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_87_randomizeBG)
HXLINE(  88)		int chance = ::flixel::FlxG_obj::random->_hx_int(0,(::states::MainMenuState_obj::bgPaths->length - 1),null());
HXLINE(  89)		return ::backend::Paths_obj::image(::states::MainMenuState_obj::bgPaths->__get(chance),null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MainMenuState_obj,randomizeBG,return )


::hx::ObjectPtr< MainMenuState_obj > MainMenuState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< MainMenuState_obj > __this = new MainMenuState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< MainMenuState_obj > MainMenuState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	MainMenuState_obj *__this = (MainMenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MainMenuState_obj), true, "states.MainMenuState"));
	*(void **)__this = MainMenuState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

MainMenuState_obj::MainMenuState_obj()
{
}

void MainMenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainMenuState);
	HX_MARK_MEMBER_NAME(menuItems,"menuItems");
	HX_MARK_MEMBER_NAME(menuItemms,"menuItemms");
	HX_MARK_MEMBER_NAME(camGame,"camGame");
	HX_MARK_MEMBER_NAME(camAchievement,"camAchievement");
	HX_MARK_MEMBER_NAME(gr,"gr");
	HX_MARK_MEMBER_NAME(glow,"glow");
	HX_MARK_MEMBER_NAME(spikes,"spikes");
	HX_MARK_MEMBER_NAME(check,"check");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(logo,"logo");
	HX_MARK_MEMBER_NAME(slidething,"slidething");
	HX_MARK_MEMBER_NAME(camFollow,"camFollow");
	HX_MARK_MEMBER_NAME(optionShit,"optionShit");
	HX_MARK_MEMBER_NAME(selectedSomethin,"selectedSomethin");
	 ::backend::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainMenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(menuItems,"menuItems");
	HX_VISIT_MEMBER_NAME(menuItemms,"menuItemms");
	HX_VISIT_MEMBER_NAME(camGame,"camGame");
	HX_VISIT_MEMBER_NAME(camAchievement,"camAchievement");
	HX_VISIT_MEMBER_NAME(gr,"gr");
	HX_VISIT_MEMBER_NAME(glow,"glow");
	HX_VISIT_MEMBER_NAME(spikes,"spikes");
	HX_VISIT_MEMBER_NAME(check,"check");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(logo,"logo");
	HX_VISIT_MEMBER_NAME(slidething,"slidething");
	HX_VISIT_MEMBER_NAME(camFollow,"camFollow");
	HX_VISIT_MEMBER_NAME(optionShit,"optionShit");
	HX_VISIT_MEMBER_NAME(selectedSomethin,"selectedSomethin");
	 ::backend::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MainMenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gr") ) { return ::hx::Val( gr ); }
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"glow") ) { return ::hx::Val( glow ); }
		if (HX_FIELD_EQ(inName,"logo") ) { return ::hx::Val( logo ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { return ::hx::Val( check ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"spikes") ) { return ::hx::Val( spikes ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"camGame") ) { return ::hx::Val( camGame ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { return ::hx::Val( menuItems ); }
		if (HX_FIELD_EQ(inName,"camFollow") ) { return ::hx::Val( camFollow ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"menuItemms") ) { return ::hx::Val( menuItemms ); }
		if (HX_FIELD_EQ(inName,"slidething") ) { return ::hx::Val( slidething ); }
		if (HX_FIELD_EQ(inName,"optionShit") ) { return ::hx::Val( optionShit ); }
		if (HX_FIELD_EQ(inName,"changeItem") ) { return ::hx::Val( changeItem_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"camAchievement") ) { return ::hx::Val( camAchievement ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"giveAchievement") ) { return ::hx::Val( giveAchievement_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"selectedSomethin") ) { return ::hx::Val( selectedSomethin ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MainMenuState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"bgPaths") ) { outValue = ( bgPaths ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"firstStart") ) { outValue = ( firstStart ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
		if (HX_FIELD_EQ(inName,"randomizeBG") ) { outValue = randomizeBG_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bpEngineVersion") ) { outValue = ( bpEngineVersion ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fnfEngineVersion") ) { outValue = ( fnfEngineVersion ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"cornEngineVersion") ) { outValue = ( cornEngineVersion ); return true; }
		if (HX_FIELD_EQ(inName,"finishedFunnyMove") ) { outValue = ( finishedFunnyMove ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"psychEngineVersion") ) { outValue = ( psychEngineVersion ); return true; }
	}
	return false;
}

::hx::Val MainMenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gr") ) { gr=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"glow") ) { glow=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"logo") ) { logo=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { check=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"spikes") ) { spikes=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"camGame") ) { camGame=inValue.Cast<  ::flixel::FlxCamera >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { menuItems=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camFollow") ) { camFollow=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"menuItemms") ) { menuItemms=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"slidething") ) { slidething=inValue.Cast<  ::flixel::addons::display::FlxBackdrop >(); return inValue; }
		if (HX_FIELD_EQ(inName,"optionShit") ) { optionShit=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"camAchievement") ) { camAchievement=inValue.Cast<  ::flixel::FlxCamera >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"selectedSomethin") ) { selectedSomethin=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MainMenuState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"bgPaths") ) { bgPaths=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"firstStart") ) { firstStart=ioValue.Cast< bool >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bpEngineVersion") ) { bpEngineVersion=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fnfEngineVersion") ) { fnfEngineVersion=ioValue.Cast< ::String >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"cornEngineVersion") ) { cornEngineVersion=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"finishedFunnyMove") ) { finishedFunnyMove=ioValue.Cast< bool >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"psychEngineVersion") ) { psychEngineVersion=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void MainMenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("menuItems",e1,15,e5,5c));
	outFields->push(HX_("menuItemms",38,0a,8e,eb));
	outFields->push(HX_("camGame",a1,47,50,cf));
	outFields->push(HX_("camAchievement",a0,d0,67,f8));
	outFields->push(HX_("gr",2b,5a,00,00));
	outFields->push(HX_("glow",8d,4e,67,44));
	outFields->push(HX_("spikes",ed,67,a4,bd));
	outFields->push(HX_("check",c8,98,b6,45));
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("logo",6b,9f,b7,47));
	outFields->push(HX_("slidething",1d,51,f4,84));
	outFields->push(HX_("camFollow",e0,6e,47,22));
	outFields->push(HX_("optionShit",d5,2d,ee,91));
	outFields->push(HX_("selectedSomethin",c8,ec,fb,99));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MainMenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(MainMenuState_obj,menuItems),HX_("menuItems",e1,15,e5,5c)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(MainMenuState_obj,menuItemms),HX_("menuItemms",38,0a,8e,eb)},
	{::hx::fsObject /*  ::flixel::FlxCamera */ ,(int)offsetof(MainMenuState_obj,camGame),HX_("camGame",a1,47,50,cf)},
	{::hx::fsObject /*  ::flixel::FlxCamera */ ,(int)offsetof(MainMenuState_obj,camAchievement),HX_("camAchievement",a0,d0,67,f8)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,gr),HX_("gr",2b,5a,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,glow),HX_("glow",8d,4e,67,44)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,spikes),HX_("spikes",ed,67,a4,bd)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,check),HX_("check",c8,98,b6,45)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,logo),HX_("logo",6b,9f,b7,47)},
	{::hx::fsObject /*  ::flixel::addons::display::FlxBackdrop */ ,(int)offsetof(MainMenuState_obj,slidething),HX_("slidething",1d,51,f4,84)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(MainMenuState_obj,camFollow),HX_("camFollow",e0,6e,47,22)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(MainMenuState_obj,optionShit),HX_("optionShit",d5,2d,ee,91)},
	{::hx::fsBool,(int)offsetof(MainMenuState_obj,selectedSomethin),HX_("selectedSomethin",c8,ec,fb,99)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MainMenuState_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &MainMenuState_obj::psychEngineVersion,HX_("psychEngineVersion",3b,61,cc,fc)},
	{::hx::fsString,(void *) &MainMenuState_obj::bpEngineVersion,HX_("bpEngineVersion",c8,14,38,78)},
	{::hx::fsString,(void *) &MainMenuState_obj::fnfEngineVersion,HX_("fnfEngineVersion",78,b2,6e,36)},
	{::hx::fsString,(void *) &MainMenuState_obj::cornEngineVersion,HX_("cornEngineVersion",ee,74,c3,44)},
	{::hx::fsInt,(void *) &MainMenuState_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsBool,(void *) &MainMenuState_obj::firstStart,HX_("firstStart",12,be,e9,c1)},
	{::hx::fsBool,(void *) &MainMenuState_obj::finishedFunnyMove,HX_("finishedFunnyMove",a9,44,72,47)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &MainMenuState_obj::bgPaths,HX_("bgPaths",29,1b,7e,6a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MainMenuState_obj_sMemberFields[] = {
	HX_("menuItems",e1,15,e5,5c),
	HX_("menuItemms",38,0a,8e,eb),
	HX_("camGame",a1,47,50,cf),
	HX_("camAchievement",a0,d0,67,f8),
	HX_("gr",2b,5a,00,00),
	HX_("glow",8d,4e,67,44),
	HX_("spikes",ed,67,a4,bd),
	HX_("check",c8,98,b6,45),
	HX_("bg",c5,55,00,00),
	HX_("logo",6b,9f,b7,47),
	HX_("slidething",1d,51,f4,84),
	HX_("camFollow",e0,6e,47,22),
	HX_("optionShit",d5,2d,ee,91),
	HX_("create",fc,66,0f,7c),
	HX_("giveAchievement",1e,ea,83,24),
	HX_("selectedSomethin",c8,ec,fb,99),
	HX_("update",09,86,05,87),
	HX_("changeItem",a3,fa,08,20),
	::String(null()) };

static void MainMenuState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainMenuState_obj::psychEngineVersion,"psychEngineVersion");
	HX_MARK_MEMBER_NAME(MainMenuState_obj::bpEngineVersion,"bpEngineVersion");
	HX_MARK_MEMBER_NAME(MainMenuState_obj::fnfEngineVersion,"fnfEngineVersion");
	HX_MARK_MEMBER_NAME(MainMenuState_obj::cornEngineVersion,"cornEngineVersion");
	HX_MARK_MEMBER_NAME(MainMenuState_obj::curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(MainMenuState_obj::firstStart,"firstStart");
	HX_MARK_MEMBER_NAME(MainMenuState_obj::finishedFunnyMove,"finishedFunnyMove");
	HX_MARK_MEMBER_NAME(MainMenuState_obj::bgPaths,"bgPaths");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MainMenuState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainMenuState_obj::psychEngineVersion,"psychEngineVersion");
	HX_VISIT_MEMBER_NAME(MainMenuState_obj::bpEngineVersion,"bpEngineVersion");
	HX_VISIT_MEMBER_NAME(MainMenuState_obj::fnfEngineVersion,"fnfEngineVersion");
	HX_VISIT_MEMBER_NAME(MainMenuState_obj::cornEngineVersion,"cornEngineVersion");
	HX_VISIT_MEMBER_NAME(MainMenuState_obj::curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(MainMenuState_obj::firstStart,"firstStart");
	HX_VISIT_MEMBER_NAME(MainMenuState_obj::finishedFunnyMove,"finishedFunnyMove");
	HX_VISIT_MEMBER_NAME(MainMenuState_obj::bgPaths,"bgPaths");
};

#endif

::hx::Class MainMenuState_obj::__mClass;

static ::String MainMenuState_obj_sStaticFields[] = {
	HX_("psychEngineVersion",3b,61,cc,fc),
	HX_("bpEngineVersion",c8,14,38,78),
	HX_("fnfEngineVersion",78,b2,6e,36),
	HX_("cornEngineVersion",ee,74,c3,44),
	HX_("curSelected",fb,eb,ab,32),
	HX_("firstStart",12,be,e9,c1),
	HX_("finishedFunnyMove",a9,44,72,47),
	HX_("bgPaths",29,1b,7e,6a),
	HX_("randomizeBG",36,81,6b,9d),
	::String(null())
};

void MainMenuState_obj::__register()
{
	MainMenuState_obj _hx_dummy;
	MainMenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.MainMenuState",2d,4c,08,36);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MainMenuState_obj::__GetStatic;
	__mClass->mSetStaticField = &MainMenuState_obj::__SetStatic;
	__mClass->mMarkFunc = MainMenuState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MainMenuState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MainMenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MainMenuState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MainMenuState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainMenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainMenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MainMenuState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_21_boot)
HXDLIN(  21)		psychEngineVersion = HX_("0.7.1h",ec,cf,0d,d2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_22_boot)
HXDLIN(  22)		bpEngineVersion = HX_("1.0",b3,56,25,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_23_boot)
HXDLIN(  23)		fnfEngineVersion = HX_("0.2.8",be,c1,c9,c1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_24_boot)
HXDLIN(  24)		cornEngineVersion = HX_("1.0",b3,56,25,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_25_boot)
HXDLIN(  25)		curSelected = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_40_boot)
HXDLIN(  40)		firstStart = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_42_boot)
HXDLIN(  42)		finishedFunnyMove = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_89e648ab22b7047a_57_boot)
HXDLIN(  57)		bgPaths = ::Array_obj< ::String >::fromData( _hx_array_data_36084c2d_27,26);
            	}
}

} // end namespace states
