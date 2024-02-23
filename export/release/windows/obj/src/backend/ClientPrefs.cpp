#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_backend_Achievements
#include <backend/Achievements.h>
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
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_FPS
#include <openfl/display/FPS.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_states_TitleState
#include <states/TitleState.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f803784cd60a57bc_173_resetKeys,"backend.ClientPrefs","resetKeys",0xb0375ba0,"backend.ClientPrefs.resetKeys","backend/ClientPrefs.hx",173,0x8f1e64f4)
HX_LOCAL_STACK_FRAME(_hx_pos_f803784cd60a57bc_192_clearInvalidKeys,"backend.ClientPrefs","clearInvalidKeys",0x38cf1961,"backend.ClientPrefs.clearInvalidKeys","backend/ClientPrefs.hx",192,0x8f1e64f4)
HX_LOCAL_STACK_FRAME(_hx_pos_f803784cd60a57bc_199_loadDefaultKeys,"backend.ClientPrefs","loadDefaultKeys",0x97d31acc,"backend.ClientPrefs.loadDefaultKeys","backend/ClientPrefs.hx",199,0x8f1e64f4)
HX_LOCAL_STACK_FRAME(_hx_pos_f803784cd60a57bc_204_saveSettings,"backend.ClientPrefs","saveSettings",0x0d395d23,"backend.ClientPrefs.saveSettings","backend/ClientPrefs.hx",204,0x8f1e64f4)
HX_LOCAL_STACK_FRAME(_hx_pos_f803784cd60a57bc_222_loadPrefs,"backend.ClientPrefs","loadPrefs",0x07040467,"backend.ClientPrefs.loadPrefs","backend/ClientPrefs.hx",222,0x8f1e64f4)
HX_LOCAL_STACK_FRAME(_hx_pos_f803784cd60a57bc_286_getGameplaySetting,"backend.ClientPrefs","getGameplaySetting",0x319a8f77,"backend.ClientPrefs.getGameplaySetting","backend/ClientPrefs.hx",286,0x8f1e64f4)
HX_LOCAL_STACK_FRAME(_hx_pos_f803784cd60a57bc_291_reloadVolumeKeys,"backend.ClientPrefs","reloadVolumeKeys",0x7b6e4f0a,"backend.ClientPrefs.reloadVolumeKeys","backend/ClientPrefs.hx",291,0x8f1e64f4)
HX_LOCAL_STACK_FRAME(_hx_pos_f803784cd60a57bc_298_toggleVolumeKeys,"backend.ClientPrefs","toggleVolumeKeys",0x34547305,"backend.ClientPrefs.toggleVolumeKeys","backend/ClientPrefs.hx",298,0x8f1e64f4)
HX_LOCAL_STACK_FRAME(_hx_pos_f803784cd60a57bc_125_boot,"backend.ClientPrefs","boot",0xd846fd15,"backend.ClientPrefs.boot","backend/ClientPrefs.hx",125,0x8f1e64f4)
HX_LOCAL_STACK_FRAME(_hx_pos_f803784cd60a57bc_126_boot,"backend.ClientPrefs","boot",0xd846fd15,"backend.ClientPrefs.boot","backend/ClientPrefs.hx",126,0x8f1e64f4)
HX_LOCAL_STACK_FRAME(_hx_pos_f803784cd60a57bc_129_boot,"backend.ClientPrefs","boot",0xd846fd15,"backend.ClientPrefs.boot","backend/ClientPrefs.hx",129,0x8f1e64f4)
static const int _hx_array_data_d481926b_20[] = {
	(int)87,(int)38,
};
static const int _hx_array_data_d481926b_21[] = {
	(int)65,(int)37,
};
static const int _hx_array_data_d481926b_22[] = {
	(int)83,(int)40,
};
static const int _hx_array_data_d481926b_23[] = {
	(int)68,(int)39,
};
static const int _hx_array_data_d481926b_24[] = {
	(int)87,(int)38,
};
static const int _hx_array_data_d481926b_25[] = {
	(int)65,(int)37,
};
static const int _hx_array_data_d481926b_26[] = {
	(int)83,(int)40,
};
static const int _hx_array_data_d481926b_27[] = {
	(int)68,(int)39,
};
static const int _hx_array_data_d481926b_28[] = {
	(int)32,(int)13,
};
static const int _hx_array_data_d481926b_29[] = {
	(int)8,(int)27,
};
static const int _hx_array_data_d481926b_30[] = {
	(int)13,(int)27,
};
static const int _hx_array_data_d481926b_31[] = {
	(int)82,
};
static const int _hx_array_data_d481926b_32[] = {
	(int)48,
};
static const int _hx_array_data_d481926b_33[] = {
	(int)107,(int)187,
};
static const int _hx_array_data_d481926b_34[] = {
	(int)109,(int)189,
};
static const int _hx_array_data_d481926b_35[] = {
	(int)55,
};
static const int _hx_array_data_d481926b_36[] = {
	(int)56,
};
HX_LOCAL_STACK_FRAME(_hx_pos_f803784cd60a57bc_153_boot,"backend.ClientPrefs","boot",0xd846fd15,"backend.ClientPrefs.boot","backend/ClientPrefs.hx",153,0x8f1e64f4)
static const int _hx_array_data_d481926b_39[] = {
	(int)11,(int)3,
};
static const int _hx_array_data_d481926b_40[] = {
	(int)13,(int)2,
};
static const int _hx_array_data_d481926b_41[] = {
	(int)12,(int)0,
};
static const int _hx_array_data_d481926b_42[] = {
	(int)14,(int)1,
};
static const int _hx_array_data_d481926b_43[] = {
	(int)11,(int)34,
};
static const int _hx_array_data_d481926b_44[] = {
	(int)13,(int)37,
};
static const int _hx_array_data_d481926b_45[] = {
	(int)12,(int)36,
};
static const int _hx_array_data_d481926b_46[] = {
	(int)14,(int)35,
};
static const int _hx_array_data_d481926b_47[] = {
	(int)0,(int)7,
};
static const int _hx_array_data_d481926b_48[] = {
	(int)1,
};
static const int _hx_array_data_d481926b_49[] = {
	(int)7,
};
static const int _hx_array_data_d481926b_50[] = {
	(int)6,
};
HX_LOCAL_STACK_FRAME(_hx_pos_f803784cd60a57bc_169_boot,"backend.ClientPrefs","boot",0xd846fd15,"backend.ClientPrefs.boot","backend/ClientPrefs.hx",169,0x8f1e64f4)
HX_LOCAL_STACK_FRAME(_hx_pos_f803784cd60a57bc_170_boot,"backend.ClientPrefs","boot",0xd846fd15,"backend.ClientPrefs.boot","backend/ClientPrefs.hx",170,0x8f1e64f4)
namespace backend{

void ClientPrefs_obj::__construct() { }

Dynamic ClientPrefs_obj::__CreateEmpty() { return new ClientPrefs_obj; }

void *ClientPrefs_obj::_hx_vtable = 0;

Dynamic ClientPrefs_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ClientPrefs_obj > _hx_result = new ClientPrefs_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ClientPrefs_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a517989;
}

 ::backend::SaveVariables ClientPrefs_obj::data;

 ::backend::SaveVariables ClientPrefs_obj::defaultData;

 ::haxe::ds::StringMap ClientPrefs_obj::keyBinds;

 ::haxe::ds::StringMap ClientPrefs_obj::gamepadBinds;

 ::haxe::ds::StringMap ClientPrefs_obj::defaultKeys;

 ::haxe::ds::StringMap ClientPrefs_obj::defaultButtons;

void ClientPrefs_obj::resetKeys( ::Dynamic controller){
            	HX_STACKFRAME(&_hx_pos_f803784cd60a57bc_173_resetKeys)
HXLINE( 174)		if (::hx::IsNotEq( controller,true )) {
HXLINE( 176)			 ::Dynamic key = ::backend::ClientPrefs_obj::keyBinds->keys();
HXDLIN( 176)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 176)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 178)				if (::backend::ClientPrefs_obj::defaultKeys->exists(key1)) {
HXLINE( 179)					::Dynamic this1 = ::backend::ClientPrefs_obj::keyBinds;
HXDLIN( 179)					( ( ::haxe::ds::StringMap)(this1) )->set(key1,( (::Array< int >)(::backend::ClientPrefs_obj::defaultKeys->get(key1)) )->copy());
            				}
            			}
            		}
HXLINE( 182)		if (::hx::IsNotEq( controller,false )) {
HXLINE( 184)			 ::Dynamic button = ::backend::ClientPrefs_obj::gamepadBinds->keys();
HXDLIN( 184)			while(( (bool)(button->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 184)				::String button1 = ( (::String)(button->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 186)				if (::backend::ClientPrefs_obj::defaultButtons->exists(button1)) {
HXLINE( 187)					::Dynamic this1 = ::backend::ClientPrefs_obj::gamepadBinds;
HXDLIN( 187)					( ( ::haxe::ds::StringMap)(this1) )->set(button1,( (::Array< int >)(::backend::ClientPrefs_obj::defaultButtons->get(button1)) )->copy());
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ClientPrefs_obj,resetKeys,(void))

void ClientPrefs_obj::clearInvalidKeys(::String key){
            	HX_STACKFRAME(&_hx_pos_f803784cd60a57bc_192_clearInvalidKeys)
HXLINE( 193)		::Array< int > keyBind = ( (::Array< int >)(::backend::ClientPrefs_obj::keyBinds->get(key)) );
HXLINE( 194)		::Array< int > gamepadBind = ( (::Array< int >)(::backend::ClientPrefs_obj::gamepadBinds->get(key)) );
HXLINE( 195)		while(true){
HXLINE( 195)			bool _hx_tmp;
HXDLIN( 195)			if (::hx::IsNotNull( keyBind )) {
HXLINE( 195)				_hx_tmp = keyBind->contains(-1);
            			}
            			else {
HXLINE( 195)				_hx_tmp = false;
            			}
HXDLIN( 195)			if (!(_hx_tmp)) {
HXLINE( 195)				goto _hx_goto_3;
            			}
HXDLIN( 195)			keyBind->remove(-1);
            		}
            		_hx_goto_3:;
HXLINE( 196)		while(true){
HXLINE( 196)			bool _hx_tmp;
HXDLIN( 196)			if (::hx::IsNotNull( gamepadBind )) {
HXLINE( 196)				_hx_tmp = gamepadBind->contains(-1);
            			}
            			else {
HXLINE( 196)				_hx_tmp = false;
            			}
HXDLIN( 196)			if (!(_hx_tmp)) {
HXLINE( 196)				goto _hx_goto_4;
            			}
HXDLIN( 196)			gamepadBind->remove(-1);
            		}
            		_hx_goto_4:;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ClientPrefs_obj,clearInvalidKeys,(void))

void ClientPrefs_obj::loadDefaultKeys(){
            	HX_STACKFRAME(&_hx_pos_f803784cd60a57bc_199_loadDefaultKeys)
HXLINE( 200)		::backend::ClientPrefs_obj::defaultKeys = ::backend::ClientPrefs_obj::keyBinds->copy();
HXLINE( 201)		::backend::ClientPrefs_obj::defaultButtons = ::backend::ClientPrefs_obj::gamepadBinds->copy();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ClientPrefs_obj,loadDefaultKeys,(void))

void ClientPrefs_obj::saveSettings(){
            	HX_GC_STACKFRAME(&_hx_pos_f803784cd60a57bc_204_saveSettings)
HXLINE( 205)		{
HXLINE( 205)			int _g = 0;
HXDLIN( 205)			::Array< ::String > _g1 = ::Reflect_obj::fields(::backend::ClientPrefs_obj::data);
HXDLIN( 205)			while((_g < _g1->length)){
HXLINE( 205)				::String key = _g1->__get(_g);
HXDLIN( 205)				_g = (_g + 1);
HXLINE( 207)				 ::Dynamic _hx_tmp = ::flixel::FlxG_obj::save->data;
HXDLIN( 207)				::Reflect_obj::setField(_hx_tmp,key,::Reflect_obj::field(::backend::ClientPrefs_obj::data,key));
            			}
            		}
HXLINE( 209)		::flixel::FlxG_obj::save->data->__SetField(HX_("achievementsMap",d8,6f,d5,91),::backend::Achievements_obj::achievementsMap,::hx::paccDynamic);
HXLINE( 210)		::flixel::FlxG_obj::save->data->__SetField(HX_("henchmenDeath",f4,76,2a,dd),::backend::Achievements_obj::henchmenDeath,::hx::paccDynamic);
HXLINE( 211)		::flixel::FlxG_obj::save->flush(null());
HXLINE( 214)		 ::flixel::util::FlxSave save =  ::flixel::util::FlxSave_obj::__alloc( HX_CTX );
HXLINE( 215)		::String _hx_tmp = (::openfl::Lib_obj::get_current()->stage->application->meta->get(HX_("company",3d,15,69,83)) + HX_("/",2f,00,00,00));
HXDLIN( 215)		save->bind(HX_("controls_v3",66,e4,a2,26),(_hx_tmp + ::flixel::util::FlxSave_obj::validate(::openfl::Lib_obj::get_current()->stage->application->meta->get_string(HX_("file",7c,ce,bb,43)))));
HXLINE( 216)		save->data->__SetField(HX_("keyboard",a7,bc,29,68),::backend::ClientPrefs_obj::keyBinds,::hx::paccDynamic);
HXLINE( 217)		save->data->__SetField(HX_("gamepad",a1,e0,85,89),::backend::ClientPrefs_obj::gamepadBinds,::hx::paccDynamic);
HXLINE( 218)		save->flush(null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ClientPrefs_obj,saveSettings,(void))

void ClientPrefs_obj::loadPrefs(){
            	HX_GC_STACKFRAME(&_hx_pos_f803784cd60a57bc_222_loadPrefs)
HXLINE( 223)		if (::hx::IsNull( ::backend::ClientPrefs_obj::data )) {
HXLINE( 223)			::backend::ClientPrefs_obj::data =  ::backend::SaveVariables_obj::__alloc( HX_CTX );
            		}
HXLINE( 224)		if (::hx::IsNull( ::backend::ClientPrefs_obj::defaultData )) {
HXLINE( 224)			::backend::ClientPrefs_obj::defaultData =  ::backend::SaveVariables_obj::__alloc( HX_CTX );
            		}
HXLINE( 226)		{
HXLINE( 226)			int _g = 0;
HXDLIN( 226)			::Array< ::String > _g1 = ::Reflect_obj::fields(::backend::ClientPrefs_obj::data);
HXDLIN( 226)			while((_g < _g1->length)){
HXLINE( 226)				::String key = _g1->__get(_g);
HXDLIN( 226)				_g = (_g + 1);
HXLINE( 227)				bool _hx_tmp;
HXDLIN( 227)				if ((key != HX_("gameplaySettings",e9,91,4c,17))) {
HXLINE( 227)					_hx_tmp = ::Reflect_obj::hasField(::flixel::FlxG_obj::save->data,key);
            				}
            				else {
HXLINE( 227)					_hx_tmp = false;
            				}
HXDLIN( 227)				if (_hx_tmp) {
HXLINE( 229)					 ::backend::SaveVariables _hx_tmp = ::backend::ClientPrefs_obj::data;
HXDLIN( 229)					::Reflect_obj::setField(_hx_tmp,key,::Reflect_obj::field(::flixel::FlxG_obj::save->data,key));
            				}
            			}
            		}
HXLINE( 233)		if (::hx::IsNotNull( ::Main_obj::fpsVar )) {
HXLINE( 234)			::Main_obj::fpsVar->set_visible(::backend::ClientPrefs_obj::data->showFPS);
            		}
HXLINE( 238)		::flixel::FlxG_obj::autoPause = ::backend::ClientPrefs_obj::data->autoPause;
HXLINE( 241)		if ((::backend::ClientPrefs_obj::data->framerate > ::flixel::FlxG_obj::drawFramerate)) {
HXLINE( 242)			::flixel::FlxG_obj::set_updateFramerate(::backend::ClientPrefs_obj::data->framerate);
HXLINE( 243)			::flixel::FlxG_obj::set_drawFramerate(::backend::ClientPrefs_obj::data->framerate);
            		}
            		else {
HXLINE( 245)			::flixel::FlxG_obj::set_drawFramerate(::backend::ClientPrefs_obj::data->framerate);
HXLINE( 246)			::flixel::FlxG_obj::set_updateFramerate(::backend::ClientPrefs_obj::data->framerate);
            		}
HXLINE( 249)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("gameplaySettings",e9,91,4c,17),::hx::paccDynamic) )) {
HXLINE( 250)			 ::haxe::ds::StringMap savedMap = ( ( ::haxe::ds::StringMap)(::flixel::FlxG_obj::save->data->__Field(HX_("gameplaySettings",e9,91,4c,17),::hx::paccDynamic)) );
HXLINE( 251)			{
HXLINE( 251)				::Dynamic map = savedMap;
HXDLIN( 251)				::Dynamic _g2_map = map;
HXDLIN( 251)				 ::Dynamic _g2_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 251)				while(( (bool)(_g2_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 251)					::String key = ( (::String)(_g2_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 251)					 ::Dynamic _g3_value = ::haxe::IMap_obj::get(_g2_map,key);
HXDLIN( 251)					::String _g3_key = key;
HXDLIN( 251)					::String name = _g3_key;
HXDLIN( 251)					 ::Dynamic value = _g3_value;
HXLINE( 252)					::backend::ClientPrefs_obj::data->gameplaySettings->set(name,value);
            				}
            			}
            		}
HXLINE( 256)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("volume",da,29,53,5f),::hx::paccDynamic) )) {
HXLINE( 257)			::flixel::FlxG_obj::sound->set_volume(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("volume",da,29,53,5f),::hx::paccDynamic)) ));
            		}
HXLINE( 258)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("mute",d9,6e,65,48),::hx::paccDynamic) )) {
HXLINE( 259)			::flixel::FlxG_obj::sound->muted = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("mute",d9,6e,65,48),::hx::paccDynamic)) );
            		}
HXLINE( 262)		::backend::DiscordClient_obj::check();
HXLINE( 266)		 ::flixel::util::FlxSave save =  ::flixel::util::FlxSave_obj::__alloc( HX_CTX );
HXLINE( 267)		::String _hx_tmp = (::openfl::Lib_obj::get_current()->stage->application->meta->get(HX_("company",3d,15,69,83)) + HX_("/",2f,00,00,00));
HXDLIN( 267)		save->bind(HX_("controls_v3",66,e4,a2,26),(_hx_tmp + ::flixel::util::FlxSave_obj::validate(::openfl::Lib_obj::get_current()->stage->application->meta->get_string(HX_("file",7c,ce,bb,43)))));
HXLINE( 268)		if (::hx::IsNotNull( save )) {
HXLINE( 270)			if (::hx::IsNotNull( save->data->__Field(HX_("keyboard",a7,bc,29,68),::hx::paccDynamic) )) {
HXLINE( 271)				 ::haxe::ds::StringMap loadedControls = ( ( ::haxe::ds::StringMap)(save->data->__Field(HX_("keyboard",a7,bc,29,68),::hx::paccDynamic)) );
HXLINE( 272)				{
HXLINE( 272)					::Dynamic map = loadedControls;
HXDLIN( 272)					::Dynamic _g2_map = map;
HXDLIN( 272)					 ::Dynamic _g2_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 272)					while(( (bool)(_g2_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 272)						::String key = ( (::String)(_g2_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 272)						::Array< int > _g3_value = ( (::Array< int >)(::haxe::IMap_obj::get(_g2_map,key)) );
HXDLIN( 272)						::String _g3_key = key;
HXDLIN( 272)						::String control = _g3_key;
HXDLIN( 272)						::Array< int > keys = _g3_value;
HXLINE( 273)						if (::backend::ClientPrefs_obj::keyBinds->exists(control)) {
HXLINE( 273)							::backend::ClientPrefs_obj::keyBinds->set(control,keys);
            						}
            					}
            				}
            			}
HXLINE( 276)			if (::hx::IsNotNull( save->data->__Field(HX_("gamepad",a1,e0,85,89),::hx::paccDynamic) )) {
HXLINE( 277)				 ::haxe::ds::StringMap loadedControls = ( ( ::haxe::ds::StringMap)(save->data->__Field(HX_("gamepad",a1,e0,85,89),::hx::paccDynamic)) );
HXLINE( 278)				{
HXLINE( 278)					::Dynamic map = loadedControls;
HXDLIN( 278)					::Dynamic _g2_map = map;
HXDLIN( 278)					 ::Dynamic _g2_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 278)					while(( (bool)(_g2_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 278)						::String key = ( (::String)(_g2_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 278)						::Array< int > _g3_value = ( (::Array< int >)(::haxe::IMap_obj::get(_g2_map,key)) );
HXDLIN( 278)						::String _g3_key = key;
HXDLIN( 278)						::String control = _g3_key;
HXDLIN( 278)						::Array< int > keys = _g3_value;
HXLINE( 279)						if (::backend::ClientPrefs_obj::gamepadBinds->exists(control)) {
HXLINE( 279)							::backend::ClientPrefs_obj::gamepadBinds->set(control,keys);
            						}
            					}
            				}
            			}
HXLINE( 282)			::backend::ClientPrefs_obj::reloadVolumeKeys();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ClientPrefs_obj,loadPrefs,(void))

 ::Dynamic ClientPrefs_obj::getGameplaySetting(::String name, ::Dynamic defaultValue, ::Dynamic __o_customDefaultValue){
            		 ::Dynamic customDefaultValue = __o_customDefaultValue;
            		if (::hx::IsNull(__o_customDefaultValue)) customDefaultValue = false;
            	HX_STACKFRAME(&_hx_pos_f803784cd60a57bc_286_getGameplaySetting)
HXLINE( 287)		if (!(( (bool)(customDefaultValue) ))) {
HXLINE( 287)			defaultValue = ::backend::ClientPrefs_obj::defaultData->gameplaySettings->get(name);
            		}
HXLINE( 288)		if (::backend::ClientPrefs_obj::data->gameplaySettings->exists(name)) {
HXLINE( 288)			return ::backend::ClientPrefs_obj::data->gameplaySettings->get(name);
            		}
            		else {
HXLINE( 288)			return defaultValue;
            		}
HXDLIN( 288)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ClientPrefs_obj,getGameplaySetting,return )

void ClientPrefs_obj::reloadVolumeKeys(){
            	HX_STACKFRAME(&_hx_pos_f803784cd60a57bc_291_reloadVolumeKeys)
HXLINE( 292)		::states::TitleState_obj::muteKeys = ( (::Array< int >)(::backend::ClientPrefs_obj::keyBinds->get(HX_("volume_mute",9e,6a,db,fa))) )->copy();
HXLINE( 293)		::states::TitleState_obj::volumeDownKeys = ( (::Array< int >)(::backend::ClientPrefs_obj::keyBinds->get(HX_("volume_down",27,f4,e3,f4))) )->copy();
HXLINE( 294)		::states::TitleState_obj::volumeUpKeys = ( (::Array< int >)(::backend::ClientPrefs_obj::keyBinds->get(HX_("volume_up",e0,76,ad,60))) )->copy();
HXLINE( 295)		::backend::ClientPrefs_obj::toggleVolumeKeys(true);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ClientPrefs_obj,reloadVolumeKeys,(void))

void ClientPrefs_obj::toggleVolumeKeys(bool turnOn){
            	HX_STACKFRAME(&_hx_pos_f803784cd60a57bc_298_toggleVolumeKeys)
HXDLIN( 298)		if (turnOn) {
HXLINE( 300)			::flixel::FlxG_obj::sound->muteKeys = ::states::TitleState_obj::muteKeys;
HXLINE( 301)			::flixel::FlxG_obj::sound->volumeDownKeys = ::states::TitleState_obj::volumeDownKeys;
HXLINE( 302)			::flixel::FlxG_obj::sound->volumeUpKeys = ::states::TitleState_obj::volumeUpKeys;
            		}
            		else {
HXLINE( 306)			::flixel::FlxG_obj::sound->muteKeys = ::Array_obj< int >::__new(0);
HXLINE( 307)			::flixel::FlxG_obj::sound->volumeDownKeys = ::Array_obj< int >::__new(0);
HXLINE( 308)			::flixel::FlxG_obj::sound->volumeUpKeys = ::Array_obj< int >::__new(0);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ClientPrefs_obj,toggleVolumeKeys,(void))


ClientPrefs_obj::ClientPrefs_obj()
{
}

bool ClientPrefs_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { outValue = ( data ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"keyBinds") ) { outValue = ( keyBinds ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resetKeys") ) { outValue = resetKeys_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadPrefs") ) { outValue = loadPrefs_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultData") ) { outValue = ( defaultData ); return true; }
		if (HX_FIELD_EQ(inName,"defaultKeys") ) { outValue = ( defaultKeys ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"gamepadBinds") ) { outValue = ( gamepadBinds ); return true; }
		if (HX_FIELD_EQ(inName,"saveSettings") ) { outValue = saveSettings_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultButtons") ) { outValue = ( defaultButtons ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadDefaultKeys") ) { outValue = loadDefaultKeys_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"clearInvalidKeys") ) { outValue = clearInvalidKeys_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"reloadVolumeKeys") ) { outValue = reloadVolumeKeys_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toggleVolumeKeys") ) { outValue = toggleVolumeKeys_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getGameplaySetting") ) { outValue = getGameplaySetting_dyn(); return true; }
	}
	return false;
}

bool ClientPrefs_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=ioValue.Cast<  ::backend::SaveVariables >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"keyBinds") ) { keyBinds=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultData") ) { defaultData=ioValue.Cast<  ::backend::SaveVariables >(); return true; }
		if (HX_FIELD_EQ(inName,"defaultKeys") ) { defaultKeys=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"gamepadBinds") ) { gamepadBinds=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultButtons") ) { defaultButtons=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ClientPrefs_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ClientPrefs_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::backend::SaveVariables */ ,(void *) &ClientPrefs_obj::data,HX_("data",2a,56,63,42)},
	{::hx::fsObject /*  ::backend::SaveVariables */ ,(void *) &ClientPrefs_obj::defaultData,HX_("defaultData",8b,4f,22,14)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &ClientPrefs_obj::keyBinds,HX_("keyBinds",f7,b5,69,f7)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &ClientPrefs_obj::gamepadBinds,HX_("gamepadBinds",b5,b7,d0,6a)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &ClientPrefs_obj::defaultKeys,HX_("defaultKeys",55,db,c5,18)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &ClientPrefs_obj::defaultButtons,HX_("defaultButtons",80,ab,b5,f9)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ClientPrefs_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::data,"data");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::defaultData,"defaultData");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::keyBinds,"keyBinds");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::gamepadBinds,"gamepadBinds");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::defaultKeys,"defaultKeys");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::defaultButtons,"defaultButtons");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ClientPrefs_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::data,"data");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::defaultData,"defaultData");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::keyBinds,"keyBinds");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::gamepadBinds,"gamepadBinds");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::defaultKeys,"defaultKeys");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::defaultButtons,"defaultButtons");
};

#endif

::hx::Class ClientPrefs_obj::__mClass;

static ::String ClientPrefs_obj_sStaticFields[] = {
	HX_("data",2a,56,63,42),
	HX_("defaultData",8b,4f,22,14),
	HX_("keyBinds",f7,b5,69,f7),
	HX_("gamepadBinds",b5,b7,d0,6a),
	HX_("defaultKeys",55,db,c5,18),
	HX_("defaultButtons",80,ab,b5,f9),
	HX_("resetKeys",63,eb,f2,8c),
	HX_("clearInvalidKeys",fe,57,a0,f8),
	HX_("loadDefaultKeys",cf,5e,fd,5c),
	HX_("saveSettings",40,c9,c5,9d),
	HX_("loadPrefs",2a,94,bf,e3),
	HX_("getGameplaySetting",54,6f,2e,77),
	HX_("reloadVolumeKeys",a7,8d,3f,3b),
	HX_("toggleVolumeKeys",a2,b1,25,f4),
	::String(null())
};

void ClientPrefs_obj::__register()
{
	ClientPrefs_obj _hx_dummy;
	ClientPrefs_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.ClientPrefs",6b,92,81,d4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ClientPrefs_obj::__GetStatic;
	__mClass->mSetStaticField = &ClientPrefs_obj::__SetStatic;
	__mClass->mMarkFunc = ClientPrefs_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ClientPrefs_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ClientPrefs_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ClientPrefs_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ClientPrefs_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ClientPrefs_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ClientPrefs_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f803784cd60a57bc_125_boot)
HXDLIN( 125)		data = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_f803784cd60a57bc_126_boot)
HXDLIN( 126)		defaultData = null();
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::haxe::ds::StringMap _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_f803784cd60a57bc_129_boot)
HXDLIN( 129)			 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 129)			_g->set(HX_("note_up",c8,67,5c,4d),::Array_obj< int >::fromData( _hx_array_data_d481926b_20,2));
HXDLIN( 129)			_g->set(HX_("note_left",b4,fe,20,a5),::Array_obj< int >::fromData( _hx_array_data_d481926b_21,2));
HXDLIN( 129)			_g->set(HX_("note_down",0f,ef,de,9f),::Array_obj< int >::fromData( _hx_array_data_d481926b_22,2));
HXDLIN( 129)			_g->set(HX_("note_right",8f,ec,ca,4e),::Array_obj< int >::fromData( _hx_array_data_d481926b_23,2));
HXDLIN( 129)			_g->set(HX_("ui_up",a6,c2,91,a3),::Array_obj< int >::fromData( _hx_array_data_d481926b_24,2));
HXDLIN( 129)			_g->set(HX_("ui_left",12,4d,89,f7),::Array_obj< int >::fromData( _hx_array_data_d481926b_25,2));
HXDLIN( 129)			_g->set(HX_("ui_down",6d,3d,47,f2),::Array_obj< int >::fromData( _hx_array_data_d481926b_26,2));
HXDLIN( 129)			_g->set(HX_("ui_right",71,30,a7,17),::Array_obj< int >::fromData( _hx_array_data_d481926b_27,2));
HXDLIN( 129)			_g->set(HX_("accept",08,93,06,0b),::Array_obj< int >::fromData( _hx_array_data_d481926b_28,2));
HXDLIN( 129)			_g->set(HX_("back",27,da,10,41),::Array_obj< int >::fromData( _hx_array_data_d481926b_29,2));
HXDLIN( 129)			_g->set(HX_("pause",f6,d6,57,bd),::Array_obj< int >::fromData( _hx_array_data_d481926b_30,2));
HXDLIN( 129)			_g->set(HX_("reset",cf,49,c8,e6),::Array_obj< int >::fromData( _hx_array_data_d481926b_31,1));
HXDLIN( 129)			_g->set(HX_("volume_mute",9e,6a,db,fa),::Array_obj< int >::fromData( _hx_array_data_d481926b_32,1));
HXDLIN( 129)			_g->set(HX_("volume_up",e0,76,ad,60),::Array_obj< int >::fromData( _hx_array_data_d481926b_33,2));
HXDLIN( 129)			_g->set(HX_("volume_down",27,f4,e3,f4),::Array_obj< int >::fromData( _hx_array_data_d481926b_34,2));
HXDLIN( 129)			_g->set(HX_("debug_1",05,20,57,5b),::Array_obj< int >::fromData( _hx_array_data_d481926b_35,1));
HXDLIN( 129)			_g->set(HX_("debug_2",06,20,57,5b),::Array_obj< int >::fromData( _hx_array_data_d481926b_36,1));
HXDLIN( 129)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_f803784cd60a57bc_129_boot)
HXDLIN( 129)		keyBinds = ( ( ::haxe::ds::StringMap)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::haxe::ds::StringMap _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_f803784cd60a57bc_153_boot)
HXDLIN( 153)			 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 153)			_g->set(HX_("note_up",c8,67,5c,4d),::Array_obj< int >::fromData( _hx_array_data_d481926b_39,2));
HXDLIN( 153)			_g->set(HX_("note_left",b4,fe,20,a5),::Array_obj< int >::fromData( _hx_array_data_d481926b_40,2));
HXDLIN( 153)			_g->set(HX_("note_down",0f,ef,de,9f),::Array_obj< int >::fromData( _hx_array_data_d481926b_41,2));
HXDLIN( 153)			_g->set(HX_("note_right",8f,ec,ca,4e),::Array_obj< int >::fromData( _hx_array_data_d481926b_42,2));
HXDLIN( 153)			_g->set(HX_("ui_up",a6,c2,91,a3),::Array_obj< int >::fromData( _hx_array_data_d481926b_43,2));
HXDLIN( 153)			_g->set(HX_("ui_left",12,4d,89,f7),::Array_obj< int >::fromData( _hx_array_data_d481926b_44,2));
HXDLIN( 153)			_g->set(HX_("ui_down",6d,3d,47,f2),::Array_obj< int >::fromData( _hx_array_data_d481926b_45,2));
HXDLIN( 153)			_g->set(HX_("ui_right",71,30,a7,17),::Array_obj< int >::fromData( _hx_array_data_d481926b_46,2));
HXDLIN( 153)			_g->set(HX_("accept",08,93,06,0b),::Array_obj< int >::fromData( _hx_array_data_d481926b_47,2));
HXDLIN( 153)			_g->set(HX_("back",27,da,10,41),::Array_obj< int >::fromData( _hx_array_data_d481926b_48,1));
HXDLIN( 153)			_g->set(HX_("pause",f6,d6,57,bd),::Array_obj< int >::fromData( _hx_array_data_d481926b_49,1));
HXDLIN( 153)			_g->set(HX_("reset",cf,49,c8,e6),::Array_obj< int >::fromData( _hx_array_data_d481926b_50,1));
HXDLIN( 153)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_f803784cd60a57bc_153_boot)
HXDLIN( 153)		gamepadBinds = ( ( ::haxe::ds::StringMap)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            	HX_STACKFRAME(&_hx_pos_f803784cd60a57bc_169_boot)
HXDLIN( 169)		defaultKeys = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_f803784cd60a57bc_170_boot)
HXDLIN( 170)		defaultButtons = null();
            	}
}

} // end namespace backend
