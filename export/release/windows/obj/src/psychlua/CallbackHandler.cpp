#include <hxcpp.h>

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
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
#ifndef INCLUDED_llua_Convert
#include <llua/Convert.h>
#endif
#ifndef INCLUDED_llua_Lua_helper
#include <llua/Lua_helper.h>
#endif
#ifndef INCLUDED_psychlua_CallbackHandler
#include <psychlua/CallbackHandler.h>
#endif
#ifndef INCLUDED_psychlua_FunkinLua
#include <psychlua/FunkinLua.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8c23355a5004e66e_6_call,"psychlua.CallbackHandler","call",0x834f29f8,"psychlua.CallbackHandler.call","psychlua/CallbackHandler.hx",6,0x0ea7962b)
namespace psychlua{

void CallbackHandler_obj::__construct() { }

Dynamic CallbackHandler_obj::__CreateEmpty() { return new CallbackHandler_obj; }

void *CallbackHandler_obj::_hx_vtable = 0;

Dynamic CallbackHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CallbackHandler_obj > _hx_result = new CallbackHandler_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CallbackHandler_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x588512e8;
}

int CallbackHandler_obj::call( cpp::Reference<lua_State> l,::String fname){
            	HX_STACKFRAME(&_hx_pos_8c23355a5004e66e_6_call)
HXLINE(   7)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  10)			 ::Dynamic cbf = ::llua::Lua_helper_obj::callbacks->get(fname);
HXLINE(  15)			if (::hx::IsNull( cbf )) {
HXLINE(  18)				int _g = 0;
HXDLIN(  18)				::Array< ::Dynamic> _g1 = ::states::PlayState_obj::instance->luaArray;
HXDLIN(  18)				while((_g < _g1->length)){
HXLINE(  18)					 ::psychlua::FunkinLua script = _g1->__get(_g).StaticCast<  ::psychlua::FunkinLua >();
HXDLIN(  18)					_g = (_g + 1);
HXLINE(  19)					bool _hx_tmp;
HXDLIN(  19)					if (::hx::IsNotNull( script )) {
HXLINE(  19)						_hx_tmp = ::hx::IsInstanceEq( script->lua,l );
            					}
            					else {
HXLINE(  19)						_hx_tmp = false;
            					}
HXDLIN(  19)					if (_hx_tmp) {
HXLINE(  22)						cbf = script->callbacks->get(fname);
HXLINE(  23)						goto _hx_goto_0;
            					}
            				}
            				_hx_goto_0:;
            			}
HXLINE(  27)			if (::hx::IsNull( cbf )) {
HXLINE(  27)				return 0;
            			}
HXLINE(  29)			int nparams = lua_gettop(l);
HXLINE(  30)			::cpp::VirtualArray args = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  32)			{
HXLINE(  32)				int _g = 0;
HXDLIN(  32)				int _g1 = nparams;
HXDLIN(  32)				while((_g < _g1)){
HXLINE(  32)					_g = (_g + 1);
HXDLIN(  32)					int i = (_g - 1);
HXLINE(  33)					args->set(i,::llua::Convert_obj::fromLua(l,(i + 1)));
            				}
            			}
HXLINE(  36)			 ::Dynamic ret = null();
HXLINE(  39)			ret = ::Reflect_obj::callMethod(null(),cbf,args);
HXLINE(  41)			if (::hx::IsNotNull( ret )) {
HXLINE(  42)				::llua::Convert_obj::toLua(l,ret);
HXLINE(  43)				return 1;
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  46)				{
HXLINE(  46)					null();
            				}
HXDLIN(  46)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE(  48)				if (::llua::Lua_helper_obj::sendErrorsToLua) {
HXLINE(  48)					::String _hx_tmp;
HXDLIN(  48)					if (::hx::IsNotNull( e->__Field(HX_("message",c7,35,11,9a),::hx::paccDynamic) )) {
HXLINE(  48)						_hx_tmp = ( (::String)(e->__Field(HX_("message",c7,35,11,9a),::hx::paccDynamic)) );
            					}
            					else {
HXLINE(  48)						_hx_tmp = ( (::String)(e) );
            					}
HXDLIN(  48)					linc::lual::error(l,(HX_("CALLBACK ERROR! ",2c,95,4f,d2) + _hx_tmp));
HXDLIN(  48)					return 0;
            				}
HXLINE(  49)				::haxe::Log_obj::trace(e,::hx::SourceInfo(HX_("source/psychlua/CallbackHandler.hx",b7,9b,b2,87),49,HX_("psychlua.CallbackHandler",54,cd,4c,a6),HX_("call",9e,18,ba,41)));
HXLINE(  50)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  52)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CallbackHandler_obj,call,return )


CallbackHandler_obj::CallbackHandler_obj()
{
}

bool CallbackHandler_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { outValue = call_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CallbackHandler_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CallbackHandler_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CallbackHandler_obj::__mClass;

static ::String CallbackHandler_obj_sStaticFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null())
};

void CallbackHandler_obj::__register()
{
	CallbackHandler_obj _hx_dummy;
	CallbackHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("psychlua.CallbackHandler",54,cd,4c,a6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CallbackHandler_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CallbackHandler_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CallbackHandler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CallbackHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CallbackHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace psychlua
