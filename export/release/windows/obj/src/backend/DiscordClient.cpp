#include <hxcpp.h>

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
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
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
#endif
#ifndef INCLUDED_discord_rpc_DiscordRpc
#include <discord_rpc/DiscordRpc.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_llua_Lua_helper
#include <llua/Lua_helper.h>
#endif
#ifndef INCLUDED_states_MainMenuState
#include <states/MainMenuState.h>
#endif
#ifndef INCLUDED_sys_thread__Thread_HaxeThread
#include <sys/thread/_Thread/HaxeThread.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eb10ff3c4d95691e_24_new,"backend.DiscordClient","new",0x58c3f68f,"backend.DiscordClient.new","backend/Discord.hx",24,0xbaede60d)
HX_LOCAL_STACK_FRAME(_hx_pos_eb10ff3c4d95691e_47_check,"backend.DiscordClient","check",0xb71fe8b7,"backend.DiscordClient.check","backend/Discord.hx",47,0xbaede60d)
HX_LOCAL_STACK_FRAME(_hx_pos_eb10ff3c4d95691e_57_start,"backend.DiscordClient","start",0xf574c451,"backend.DiscordClient.start","backend/Discord.hx",57,0xbaede60d)
HX_LOCAL_STACK_FRAME(_hx_pos_eb10ff3c4d95691e_60_start,"backend.DiscordClient","start",0xf574c451,"backend.DiscordClient.start","backend/Discord.hx",60,0xbaede60d)
HX_LOCAL_STACK_FRAME(_hx_pos_eb10ff3c4d95691e_67_shutdown,"backend.DiscordClient","shutdown",0xd7180c07,"backend.DiscordClient.shutdown","backend/Discord.hx",67,0xbaede60d)
HX_LOCAL_STACK_FRAME(_hx_pos_eb10ff3c4d95691e_72_onReady,"backend.DiscordClient","onReady",0x1748a873,"backend.DiscordClient.onReady","backend/Discord.hx",72,0xbaede60d)
HX_LOCAL_STACK_FRAME(_hx_pos_eb10ff3c4d95691e_76_set_clientID,"backend.DiscordClient","set_clientID",0x54a96654,"backend.DiscordClient.set_clientID","backend/Discord.hx",76,0xbaede60d)
HX_LOCAL_STACK_FRAME(_hx_pos_eb10ff3c4d95691e_92_onError,"backend.DiscordClient","onError",0xa3b7d3d8,"backend.DiscordClient.onError","backend/Discord.hx",92,0xbaede60d)
HX_LOCAL_STACK_FRAME(_hx_pos_eb10ff3c4d95691e_97_onDisconnected,"backend.DiscordClient","onDisconnected",0xd255a5ab,"backend.DiscordClient.onDisconnected","backend/Discord.hx",97,0xbaede60d)
HX_LOCAL_STACK_FRAME(_hx_pos_eb10ff3c4d95691e_105_initialize,"backend.DiscordClient","initialize",0x7f7ebf01,"backend.DiscordClient.initialize","backend/Discord.hx",105,0xbaede60d)
HX_LOCAL_STACK_FRAME(_hx_pos_eb10ff3c4d95691e_101_initialize,"backend.DiscordClient","initialize",0x7f7ebf01,"backend.DiscordClient.initialize","backend/Discord.hx",101,0xbaede60d)
HX_LOCAL_STACK_FRAME(_hx_pos_eb10ff3c4d95691e_112_changePresence,"backend.DiscordClient","changePresence",0xda0d49fc,"backend.DiscordClient.changePresence","backend/Discord.hx",112,0xbaede60d)
HX_LOCAL_STACK_FRAME(_hx_pos_eb10ff3c4d95691e_131_resetClientID,"backend.DiscordClient","resetClientID",0x375fb6c4,"backend.DiscordClient.resetClientID","backend/Discord.hx",131,0xbaede60d)
HX_LOCAL_STACK_FRAME(_hx_pos_eb10ff3c4d95691e_135_loadModRPC,"backend.DiscordClient","loadModRPC",0x08a749ba,"backend.DiscordClient.loadModRPC","backend/Discord.hx",135,0xbaede60d)
HX_LOCAL_STACK_FRAME(_hx_pos_eb10ff3c4d95691e_146_addLuaCallbacks,"backend.DiscordClient","addLuaCallbacks",0xeeeb1ea6,"backend.DiscordClient.addLuaCallbacks","backend/Discord.hx",146,0xbaede60d)
HX_LOCAL_STACK_FRAME(_hx_pos_eb10ff3c4d95691e_148_addLuaCallbacks,"backend.DiscordClient","addLuaCallbacks",0xeeeb1ea6,"backend.DiscordClient.addLuaCallbacks","backend/Discord.hx",148,0xbaede60d)
HX_LOCAL_STACK_FRAME(_hx_pos_eb10ff3c4d95691e_151_addLuaCallbacks,"backend.DiscordClient","addLuaCallbacks",0xeeeb1ea6,"backend.DiscordClient.addLuaCallbacks","backend/Discord.hx",151,0xbaede60d)
HX_LOCAL_STACK_FRAME(_hx_pos_eb10ff3c4d95691e_9_boot,"backend.DiscordClient","boot",0x4accc723,"backend.DiscordClient.boot","backend/Discord.hx",9,0xbaede60d)
HX_LOCAL_STACK_FRAME(_hx_pos_eb10ff3c4d95691e_10_boot,"backend.DiscordClient","boot",0x4accc723,"backend.DiscordClient.boot","backend/Discord.hx",10,0xbaede60d)
HX_LOCAL_STACK_FRAME(_hx_pos_eb10ff3c4d95691e_11_boot,"backend.DiscordClient","boot",0x4accc723,"backend.DiscordClient.boot","backend/Discord.hx",11,0xbaede60d)
HX_LOCAL_STACK_FRAME(_hx_pos_eb10ff3c4d95691e_13_boot,"backend.DiscordClient","boot",0x4accc723,"backend.DiscordClient.boot","backend/Discord.hx",13,0xbaede60d)
namespace backend{

void DiscordClient_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_eb10ff3c4d95691e_24_new)
HXLINE(  25)		::haxe::Log_obj::trace(HX_("Discord Client starting...",0d,5b,39,a8),::hx::SourceInfo(HX_("source/backend/Discord.hx",01,c2,09,02),25,HX_("backend.DiscordClient",1d,03,ac,0d),HX_("new",60,d0,53,00)));
HXLINE(  26)		::discord_rpc::DiscordRpc_obj::start( ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("onDisconnected",7a,eb,5a,b8),::backend::DiscordClient_obj::onDisconnected_dyn())
            			->setFixed(1,HX_("onError",29,6a,67,09),::backend::DiscordClient_obj::onError_dyn())
            			->setFixed(2,HX_("clientID",e6,72,8f,15),HX_("1185357530185072640",fb,54,c6,2a))
            			->setFixed(3,HX_("onReady",c4,3e,f8,7c),::backend::DiscordClient_obj::onReady_dyn())));
HXLINE(  32)		::haxe::Log_obj::trace(HX_("Discord Client started.",8e,09,8e,36),::hx::SourceInfo(HX_("source/backend/Discord.hx",01,c2,09,02),32,HX_("backend.DiscordClient",1d,03,ac,0d),HX_("new",60,d0,53,00)));
HXLINE(  34)		::String localID = ::backend::DiscordClient_obj::clientID;
HXLINE(  35)		while((localID == ::backend::DiscordClient_obj::clientID)){
HXLINE(  37)			::discord_rpc::DiscordRpc_obj::process();
HXLINE(  38)			::Sys_obj::sleep(( (Float)(2) ));
            		}
            	}

Dynamic DiscordClient_obj::__CreateEmpty() { return new DiscordClient_obj; }

void *DiscordClient_obj::_hx_vtable = 0;

Dynamic DiscordClient_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DiscordClient_obj > _hx_result = new DiscordClient_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DiscordClient_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1ba82363;
}

bool DiscordClient_obj::isInitialized;

::String DiscordClient_obj::_defaultID;

::String DiscordClient_obj::clientID;

 ::Dynamic DiscordClient_obj::_options;

void DiscordClient_obj::check(){
            	HX_STACKFRAME(&_hx_pos_eb10ff3c4d95691e_47_check)
HXDLIN(  47)		if (!(::backend::ClientPrefs_obj::data->discordRPC)) {
HXLINE(  49)			if (::backend::DiscordClient_obj::isInitialized) {
HXLINE(  49)				::backend::DiscordClient_obj::shutdown();
            			}
HXLINE(  50)			::backend::DiscordClient_obj::isInitialized = false;
            		}
            		else {
HXLINE(  52)			::backend::DiscordClient_obj::start();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DiscordClient_obj,check,(void))

void DiscordClient_obj::start(){
            	HX_STACKFRAME(&_hx_pos_eb10ff3c4d95691e_57_start)
HXDLIN(  57)		bool _hx_tmp;
HXDLIN(  57)		if (!(::backend::DiscordClient_obj::isInitialized)) {
HXDLIN(  57)			_hx_tmp = ::backend::ClientPrefs_obj::data->discordRPC;
            		}
            		else {
HXDLIN(  57)			_hx_tmp = false;
            		}
HXDLIN(  57)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_eb10ff3c4d95691e_60_start)
HXLINE(  60)				::backend::DiscordClient_obj::shutdown();
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE(  58)			::backend::DiscordClient_obj::initialize();
HXLINE(  59)			::lime::app::Application_obj::current->_hx___window->onClose->add( ::Dynamic(new _hx_Closure_0()),null(),null());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DiscordClient_obj,start,(void))

void DiscordClient_obj::shutdown(){
            	HX_STACKFRAME(&_hx_pos_eb10ff3c4d95691e_67_shutdown)
HXDLIN(  67)		::discord_rpc::DiscordRpc_obj::shutdown();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DiscordClient_obj,shutdown,(void))

void DiscordClient_obj::onReady(){
            	HX_STACKFRAME(&_hx_pos_eb10ff3c4d95691e_72_onReady)
HXDLIN(  72)		::discord_rpc::DiscordRpc_obj::presence(::backend::DiscordClient_obj::_options);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DiscordClient_obj,onReady,(void))

::String DiscordClient_obj::set_clientID(::String newID){
            	HX_STACKFRAME(&_hx_pos_eb10ff3c4d95691e_76_set_clientID)
HXLINE(  77)		bool change = (::backend::DiscordClient_obj::clientID != newID);
HXLINE(  78)		::backend::DiscordClient_obj::clientID = newID;
HXLINE(  80)		bool _hx_tmp;
HXDLIN(  80)		if (change) {
HXLINE(  80)			_hx_tmp = ::backend::DiscordClient_obj::isInitialized;
            		}
            		else {
HXLINE(  80)			_hx_tmp = false;
            		}
HXDLIN(  80)		if (_hx_tmp) {
HXLINE(  82)			::backend::DiscordClient_obj::shutdown();
HXLINE(  83)			::backend::DiscordClient_obj::isInitialized = false;
HXLINE(  84)			::backend::DiscordClient_obj::start();
HXLINE(  85)			::discord_rpc::DiscordRpc_obj::process();
            		}
HXLINE(  87)		return newID;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DiscordClient_obj,set_clientID,return )

void DiscordClient_obj::onError(int _code,::String _message){
            	HX_STACKFRAME(&_hx_pos_eb10ff3c4d95691e_92_onError)
HXDLIN(  92)		::haxe::Log_obj::trace((((HX_("Error! ",87,92,5b,b7) + _code) + HX_(" : ",c6,7a,18,00)) + _message),::hx::SourceInfo(HX_("source/backend/Discord.hx",01,c2,09,02),92,HX_("backend.DiscordClient",1d,03,ac,0d),HX_("onError",29,6a,67,09)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DiscordClient_obj,onError,(void))

void DiscordClient_obj::onDisconnected(int _code,::String _message){
            	HX_STACKFRAME(&_hx_pos_eb10ff3c4d95691e_97_onDisconnected)
HXDLIN(  97)		::haxe::Log_obj::trace((((HX_("Disconnected! ",7a,e1,87,53) + _code) + HX_(" : ",c6,7a,18,00)) + _message),::hx::SourceInfo(HX_("source/backend/Discord.hx",01,c2,09,02),97,HX_("backend.DiscordClient",1d,03,ac,0d),HX_("onDisconnected",7a,eb,5a,b8)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DiscordClient_obj,onDisconnected,(void))

void DiscordClient_obj::initialize(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_eb10ff3c4d95691e_105_initialize)
HXLINE( 105)			 ::backend::DiscordClient_obj::__alloc( HX_CTX );
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_eb10ff3c4d95691e_101_initialize)
HXLINE( 103)		 ::sys::thread::_Thread::HaxeThread DiscordDaemon = ::sys::thread::_Thread::HaxeThread_obj::create( ::Dynamic(new _hx_Closure_0()),false);
HXLINE( 107)		::haxe::Log_obj::trace(HX_("Discord Client initialized",f3,a9,32,06),::hx::SourceInfo(HX_("source/backend/Discord.hx",01,c2,09,02),107,HX_("backend.DiscordClient",1d,03,ac,0d),HX_("initialize",50,31,bb,ec)));
HXLINE( 108)		::backend::DiscordClient_obj::isInitialized = true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DiscordClient_obj,initialize,(void))

void DiscordClient_obj::changePresence(::String __o_details,::String __o_state,::String __o_smallImageKey, ::Dynamic hasStartTimestamp, ::Dynamic endTimestamp){
            		::String details = __o_details;
            		if (::hx::IsNull(__o_details)) details = HX_("No leaks",71,fa,eb,b2);
            		::String state = __o_state;
            		if (::hx::IsNull(__o_state)) state = HX_("No leaks",71,fa,eb,b2);
            		::String smallImageKey = __o_smallImageKey;
            		if (::hx::IsNull(__o_smallImageKey)) smallImageKey = HX_("icon",79,e7,b2,45);
            	HX_STACKFRAME(&_hx_pos_eb10ff3c4d95691e_112_changePresence)
HXLINE( 113)		Float startTimestamp = ( (Float)(0) );
HXLINE( 114)		if (( (bool)(hasStartTimestamp) )) {
HXLINE( 114)			startTimestamp = ::Date_obj::now()->getTime();
            		}
HXLINE( 115)		if (::hx::IsGreater( endTimestamp,0 )) {
HXLINE( 115)			endTimestamp = (startTimestamp + endTimestamp);
            		}
HXLINE( 117)		::backend::DiscordClient_obj::_options->__SetField(HX_("details",c2,dc,56,ab),details,::hx::paccDynamic);
HXLINE( 118)		::backend::DiscordClient_obj::_options->__SetField(HX_("state",11,76,0b,84),state,::hx::paccDynamic);
HXLINE( 119)		::backend::DiscordClient_obj::_options->__SetField(HX_("largeImageKey",df,8f,e3,ae),HX_("icon",79,e7,b2,45),::hx::paccDynamic);
HXLINE( 120)		::backend::DiscordClient_obj::_options->__SetField(HX_("largeImageText",6d,3e,2d,5e),(HX_("Engine Version: ",e0,15,79,71) + ::states::MainMenuState_obj::cornEngineVersion),::hx::paccDynamic);
HXLINE( 121)		::backend::DiscordClient_obj::_options->__SetField(HX_("smallImageKey",eb,38,69,a3),smallImageKey,::hx::paccDynamic);
HXLINE( 123)		::backend::DiscordClient_obj::_options->__SetField(HX_("startTimestamp",14,a4,09,c5),::Std_obj::_hx_int((startTimestamp / ( (Float)(1000) ))),::hx::paccDynamic);
HXLINE( 124)		::backend::DiscordClient_obj::_options->__SetField(HX_("endTimestamp",7b,dd,d0,b4),::Std_obj::_hx_int((( (Float)(endTimestamp) ) / ( (Float)(1000) ))),::hx::paccDynamic);
HXLINE( 125)		::discord_rpc::DiscordRpc_obj::presence(::backend::DiscordClient_obj::_options);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(DiscordClient_obj,changePresence,(void))

void DiscordClient_obj::resetClientID(){
            	HX_STACKFRAME(&_hx_pos_eb10ff3c4d95691e_131_resetClientID)
HXDLIN( 131)		::backend::DiscordClient_obj::set_clientID(::backend::DiscordClient_obj::_defaultID);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DiscordClient_obj,resetClientID,(void))

void DiscordClient_obj::loadModRPC(){
            	HX_STACKFRAME(&_hx_pos_eb10ff3c4d95691e_135_loadModRPC)
HXLINE( 136)		 ::Dynamic pack = ::backend::Mods_obj::getPack(null());
HXLINE( 137)		bool _hx_tmp;
HXDLIN( 137)		bool _hx_tmp1;
HXDLIN( 137)		if (::hx::IsNotNull( pack )) {
HXLINE( 137)			_hx_tmp1 = ::hx::IsNotNull( pack->__Field(HX_("discordRPC",99,18,34,b0),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 137)			_hx_tmp1 = false;
            		}
HXDLIN( 137)		if (_hx_tmp1) {
HXLINE( 137)			_hx_tmp = ::hx::IsNotEq( pack->__Field(HX_("discordRPC",99,18,34,b0),::hx::paccDynamic),::backend::DiscordClient_obj::clientID );
            		}
            		else {
HXLINE( 137)			_hx_tmp = false;
            		}
HXDLIN( 137)		if (_hx_tmp) {
HXLINE( 139)			::backend::DiscordClient_obj::set_clientID(( (::String)(pack->__Field(HX_("discordRPC",99,18,34,b0),::hx::paccDynamic)) ));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DiscordClient_obj,loadModRPC,(void))

void DiscordClient_obj::addLuaCallbacks( cpp::Reference<lua_State> lua){
            	HX_STACKFRAME(&_hx_pos_eb10ff3c4d95691e_146_addLuaCallbacks)
HXLINE( 147)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(5)
            			void _hx_run(::String details,::String state,::String smallImageKey, ::Dynamic hasStartTimestamp, ::Dynamic endTimestamp){
            				HX_STACKFRAME(&_hx_pos_eb10ff3c4d95691e_148_addLuaCallbacks)
HXLINE( 148)				::backend::DiscordClient_obj::changePresence(details,state,smallImageKey,hasStartTimestamp,endTimestamp);
            			}
            			HX_END_LOCAL_FUNC5((void))

HXLINE( 147)			::llua::Lua_helper_obj::callbacks->set(HX_("changeDiscordPresence",77,e8,07,3c), ::Dynamic(new _hx_Closure_0()));
HXDLIN( 147)			linc::callbacks::add_callback_function(lua,HX_("changeDiscordPresence",77,e8,07,3c));
            		}
HXLINE( 151)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            			void _hx_run(::String newID){
            				HX_STACKFRAME(&_hx_pos_eb10ff3c4d95691e_151_addLuaCallbacks)
HXLINE( 152)				if (::hx::IsNull( newID )) {
HXLINE( 152)					newID = ::backend::DiscordClient_obj::_defaultID;
            				}
HXLINE( 153)				::backend::DiscordClient_obj::set_clientID(newID);
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 151)			::llua::Lua_helper_obj::callbacks->set(HX_("changeDiscordClientID",22,09,c0,ea), ::Dynamic(new _hx_Closure_1()));
HXDLIN( 151)			linc::callbacks::add_callback_function(lua,HX_("changeDiscordClientID",22,09,c0,ea));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DiscordClient_obj,addLuaCallbacks,(void))


::hx::ObjectPtr< DiscordClient_obj > DiscordClient_obj::__new() {
	::hx::ObjectPtr< DiscordClient_obj > __this = new DiscordClient_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DiscordClient_obj > DiscordClient_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DiscordClient_obj *__this = (DiscordClient_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DiscordClient_obj), false, "backend.DiscordClient"));
	*(void **)__this = DiscordClient_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DiscordClient_obj::DiscordClient_obj()
{
}

bool DiscordClient_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { outValue = check_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"start") ) { outValue = start_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onReady") ) { outValue = onReady_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"onError") ) { outValue = onError_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clientID") ) { outValue = ( clientID ); return true; }
		if (HX_FIELD_EQ(inName,"_options") ) { outValue = ( _options ); return true; }
		if (HX_FIELD_EQ(inName,"shutdown") ) { outValue = shutdown_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_defaultID") ) { outValue = ( _defaultID ); return true; }
		if (HX_FIELD_EQ(inName,"initialize") ) { outValue = initialize_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadModRPC") ) { outValue = loadModRPC_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_clientID") ) { outValue = set_clientID_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isInitialized") ) { outValue = ( isInitialized ); return true; }
		if (HX_FIELD_EQ(inName,"resetClientID") ) { outValue = resetClientID_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onDisconnected") ) { outValue = onDisconnected_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"changePresence") ) { outValue = changePresence_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"addLuaCallbacks") ) { outValue = addLuaCallbacks_dyn(); return true; }
	}
	return false;
}

bool DiscordClient_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"clientID") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_clientID(ioValue.Cast< ::String >()) ); else clientID=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"_options") ) { _options=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_defaultID") ) { _defaultID=ioValue.Cast< ::String >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isInitialized") ) { isInitialized=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DiscordClient_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo DiscordClient_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &DiscordClient_obj::isInitialized,HX_("isInitialized",4a,45,34,40)},
	{::hx::fsString,(void *) &DiscordClient_obj::_defaultID,HX_("_defaultID",9d,06,9f,52)},
	{::hx::fsString,(void *) &DiscordClient_obj::clientID,HX_("clientID",e6,72,8f,15)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &DiscordClient_obj::_options,HX_("_options",df,8c,b6,19)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void DiscordClient_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DiscordClient_obj::isInitialized,"isInitialized");
	HX_MARK_MEMBER_NAME(DiscordClient_obj::_defaultID,"_defaultID");
	HX_MARK_MEMBER_NAME(DiscordClient_obj::clientID,"clientID");
	HX_MARK_MEMBER_NAME(DiscordClient_obj::_options,"_options");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DiscordClient_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DiscordClient_obj::isInitialized,"isInitialized");
	HX_VISIT_MEMBER_NAME(DiscordClient_obj::_defaultID,"_defaultID");
	HX_VISIT_MEMBER_NAME(DiscordClient_obj::clientID,"clientID");
	HX_VISIT_MEMBER_NAME(DiscordClient_obj::_options,"_options");
};

#endif

::hx::Class DiscordClient_obj::__mClass;

static ::String DiscordClient_obj_sStaticFields[] = {
	HX_("isInitialized",4a,45,34,40),
	HX_("_defaultID",9d,06,9f,52),
	HX_("clientID",e6,72,8f,15),
	HX_("_options",df,8c,b6,19),
	HX_("check",c8,98,b6,45),
	HX_("start",62,74,0b,84),
	HX_("shutdown",96,fc,0b,6b),
	HX_("onReady",c4,3e,f8,7c),
	HX_("set_clientID",63,4a,a2,df),
	HX_("onError",29,6a,67,09),
	HX_("onDisconnected",7a,eb,5a,b8),
	HX_("initialize",50,31,bb,ec),
	HX_("changePresence",cb,8f,12,c0),
	HX_("resetClientID",d5,5f,2e,46),
	HX_("loadModRPC",09,bc,e3,75),
	HX_("addLuaCallbacks",f7,ed,82,4d),
	::String(null())
};

void DiscordClient_obj::__register()
{
	DiscordClient_obj _hx_dummy;
	DiscordClient_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.DiscordClient",1d,03,ac,0d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DiscordClient_obj::__GetStatic;
	__mClass->mSetStaticField = &DiscordClient_obj::__SetStatic;
	__mClass->mMarkFunc = DiscordClient_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DiscordClient_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DiscordClient_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DiscordClient_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DiscordClient_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DiscordClient_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DiscordClient_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_eb10ff3c4d95691e_9_boot)
HXDLIN(   9)		isInitialized = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_eb10ff3c4d95691e_10_boot)
HXDLIN(  10)		_defaultID = HX_("1185357530185072640",fb,54,c6,2a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_eb10ff3c4d95691e_11_boot)
HXDLIN(  11)		clientID = ::backend::DiscordClient_obj::_defaultID;
            	}
{
            	HX_STACKFRAME(&_hx_pos_eb10ff3c4d95691e_13_boot)
HXDLIN(  13)		_options =  ::Dynamic(::hx::Anon_obj::Create(7)
            			->setFixed(0,HX_("state",11,76,0b,84),null())
            			->setFixed(1,HX_("smallImageKey",eb,38,69,a3),HX_("icon",79,e7,b2,45))
            			->setFixed(2,HX_("details",c2,dc,56,ab),HX_("In the Menus",0a,c1,ad,c6))
            			->setFixed(3,HX_("largeImageKey",df,8f,e3,ae),HX_("icon",79,e7,b2,45))
            			->setFixed(4,HX_("endTimestamp",7b,dd,d0,b4),null())
            			->setFixed(5,HX_("startTimestamp",14,a4,09,c5),null())
            			->setFixed(6,HX_("largeImageText",6d,3e,2d,5e),HX_("Bambi's Purgatory",4a,a7,9e,a8)));
            	}
}

} // end namespace backend
