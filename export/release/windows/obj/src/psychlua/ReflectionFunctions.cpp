#include <hxcpp.h>

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_MusicBeatSubstate
#include <backend/MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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
#ifndef INCLUDED_llua_Lua_helper
#include <llua/Lua_helper.h>
#endif
#ifndef INCLUDED_objects_Character
#include <objects/Character.h>
#endif
#ifndef INCLUDED_psychlua_FunkinLua
#include <psychlua/FunkinLua.h>
#endif
#ifndef INCLUDED_psychlua_LuaUtils
#include <psychlua/LuaUtils.h>
#endif
#ifndef INCLUDED_psychlua_ReflectionFunctions
#include <psychlua/ReflectionFunctions.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_substates_GameOverSubstate
#include <substates/GameOverSubstate.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0bdd6de38e5581b0_16_implement,"psychlua.ReflectionFunctions","implement",0x9729eff4,"psychlua.ReflectionFunctions.implement","psychlua/ReflectionFunctions.hx",16,0x2ed48560)
HX_LOCAL_STACK_FRAME(_hx_pos_0bdd6de38e5581b0_18_implement,"psychlua.ReflectionFunctions","implement",0x9729eff4,"psychlua.ReflectionFunctions.implement","psychlua/ReflectionFunctions.hx",18,0x2ed48560)
HX_LOCAL_STACK_FRAME(_hx_pos_0bdd6de38e5581b0_24_implement,"psychlua.ReflectionFunctions","implement",0x9729eff4,"psychlua.ReflectionFunctions.implement","psychlua/ReflectionFunctions.hx",24,0x2ed48560)
HX_LOCAL_STACK_FRAME(_hx_pos_0bdd6de38e5581b0_33_implement,"psychlua.ReflectionFunctions","implement",0x9729eff4,"psychlua.ReflectionFunctions.implement","psychlua/ReflectionFunctions.hx",33,0x2ed48560)
HX_LOCAL_STACK_FRAME(_hx_pos_0bdd6de38e5581b0_51_implement,"psychlua.ReflectionFunctions","implement",0x9729eff4,"psychlua.ReflectionFunctions.implement","psychlua/ReflectionFunctions.hx",51,0x2ed48560)
HX_LOCAL_STACK_FRAME(_hx_pos_0bdd6de38e5581b0_71_implement,"psychlua.ReflectionFunctions","implement",0x9729eff4,"psychlua.ReflectionFunctions.implement","psychlua/ReflectionFunctions.hx",71,0x2ed48560)
HX_LOCAL_STACK_FRAME(_hx_pos_0bdd6de38e5581b0_97_implement,"psychlua.ReflectionFunctions","implement",0x9729eff4,"psychlua.ReflectionFunctions.implement","psychlua/ReflectionFunctions.hx",97,0x2ed48560)
HX_LOCAL_STACK_FRAME(_hx_pos_0bdd6de38e5581b0_120_implement,"psychlua.ReflectionFunctions","implement",0x9729eff4,"psychlua.ReflectionFunctions.implement","psychlua/ReflectionFunctions.hx",120,0x2ed48560)
HX_LOCAL_STACK_FRAME(_hx_pos_0bdd6de38e5581b0_135_implement,"psychlua.ReflectionFunctions","implement",0x9729eff4,"psychlua.ReflectionFunctions.implement","psychlua/ReflectionFunctions.hx",135,0x2ed48560)
HX_LOCAL_STACK_FRAME(_hx_pos_0bdd6de38e5581b0_139_implement,"psychlua.ReflectionFunctions","implement",0x9729eff4,"psychlua.ReflectionFunctions.implement","psychlua/ReflectionFunctions.hx",139,0x2ed48560)
HX_LOCAL_STACK_FRAME(_hx_pos_0bdd6de38e5581b0_142_implement,"psychlua.ReflectionFunctions","implement",0x9729eff4,"psychlua.ReflectionFunctions.implement","psychlua/ReflectionFunctions.hx",142,0x2ed48560)
HX_LOCAL_STACK_FRAME(_hx_pos_0bdd6de38e5581b0_167_implement,"psychlua.ReflectionFunctions","implement",0x9729eff4,"psychlua.ReflectionFunctions.implement","psychlua/ReflectionFunctions.hx",167,0x2ed48560)
HX_LOCAL_STACK_FRAME(_hx_pos_0bdd6de38e5581b0_185_callMethodFromObject,"psychlua.ReflectionFunctions","callMethodFromObject",0x9b57c417,"psychlua.ReflectionFunctions.callMethodFromObject","psychlua/ReflectionFunctions.hx",185,0x2ed48560)
namespace psychlua{

void ReflectionFunctions_obj::__construct() { }

Dynamic ReflectionFunctions_obj::__CreateEmpty() { return new ReflectionFunctions_obj; }

void *ReflectionFunctions_obj::_hx_vtable = 0;

Dynamic ReflectionFunctions_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ReflectionFunctions_obj > _hx_result = new ReflectionFunctions_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ReflectionFunctions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5fe99f13;
}

void ReflectionFunctions_obj::implement( ::psychlua::FunkinLua funk){
            	HX_STACKFRAME(&_hx_pos_0bdd6de38e5581b0_16_implement)
HXLINE(  17)		 cpp::Reference<lua_State> lua = funk->lua;
HXLINE(  18)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            			 ::Dynamic _hx_run(::String variable, ::Dynamic __o_allowMaps){
            		 ::Dynamic allowMaps = __o_allowMaps;
            		if (::hx::IsNull(__o_allowMaps)) allowMaps = false;
            				HX_STACKFRAME(&_hx_pos_0bdd6de38e5581b0_18_implement)
HXLINE(  19)				::Array< ::String > split = variable.split(HX_(".",2e,00,00,00));
HXLINE(  20)				if ((split->length > 1)) {
HXLINE(  21)					 ::Dynamic _hx_tmp = ::psychlua::LuaUtils_obj::getPropertyLoop(split,true,true,allowMaps);
HXDLIN(  21)					return ::psychlua::LuaUtils_obj::getVarInArray(_hx_tmp,split->__get((split->length - 1)),allowMaps);
            				}
HXLINE(  22)				 ::flixel::FlxState _hx_tmp;
HXDLIN(  22)				if (::states::PlayState_obj::instance->isDead) {
HXLINE(  22)					_hx_tmp = ::substates::GameOverSubstate_obj::instance;
            				}
            				else {
HXLINE(  22)					_hx_tmp = ::states::PlayState_obj::instance;
            				}
HXDLIN(  22)				return ::psychlua::LuaUtils_obj::getVarInArray(_hx_tmp,variable,allowMaps);
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE(  18)			::llua::Lua_helper_obj::callbacks->set(HX_("getProperty",0b,0b,2c,d2), ::Dynamic(new _hx_Closure_0()));
HXDLIN(  18)			linc::callbacks::add_callback_function(lua,HX_("getProperty",0b,0b,2c,d2));
            		}
HXLINE(  24)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(3)
            			bool _hx_run(::String variable, ::Dynamic value, ::Dynamic __o_allowMaps){
            		bool allowMaps = __o_allowMaps.Default(false);
            				HX_STACKFRAME(&_hx_pos_0bdd6de38e5581b0_24_implement)
HXLINE(  25)				::Array< ::String > split = variable.split(HX_(".",2e,00,00,00));
HXLINE(  26)				if ((split->length > 1)) {
HXLINE(  27)					 ::Dynamic _hx_tmp = ::psychlua::LuaUtils_obj::getPropertyLoop(split,true,true,allowMaps);
HXDLIN(  27)					::psychlua::LuaUtils_obj::setVarInArray(_hx_tmp,split->__get((split->length - 1)),value,allowMaps);
HXLINE(  28)					return true;
            				}
HXLINE(  30)				 ::flixel::FlxState _hx_tmp;
HXDLIN(  30)				if (::states::PlayState_obj::instance->isDead) {
HXLINE(  30)					_hx_tmp = ::substates::GameOverSubstate_obj::instance;
            				}
            				else {
HXLINE(  30)					_hx_tmp = ::states::PlayState_obj::instance;
            				}
HXDLIN(  30)				::psychlua::LuaUtils_obj::setVarInArray(_hx_tmp,variable,value,allowMaps);
HXLINE(  31)				return true;
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE(  24)			::llua::Lua_helper_obj::callbacks->set(HX_("setProperty",17,12,99,dc), ::Dynamic(new _hx_Closure_1()));
HXDLIN(  24)			linc::callbacks::add_callback_function(lua,HX_("setProperty",17,12,99,dc));
            		}
HXLINE(  33)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(3)
            			 ::Dynamic _hx_run(::String classVar,::String variable, ::Dynamic __o_allowMaps){
            		 ::Dynamic allowMaps = __o_allowMaps;
            		if (::hx::IsNull(__o_allowMaps)) allowMaps = false;
            				HX_STACKFRAME(&_hx_pos_0bdd6de38e5581b0_33_implement)
HXLINE(  34)				 ::Dynamic myClass = ::Type_obj::resolveClass(classVar);
HXLINE(  35)				if (::hx::IsNull( myClass )) {
HXLINE(  37)					::psychlua::FunkinLua_obj::luaTrace(((HX_("getPropertyFromClass: Class ",11,f9,f8,68) + classVar) + HX_(" not found",55,f3,a5,21)),false,false,-65536);
HXLINE(  38)					return null();
            				}
HXLINE(  41)				::Array< ::String > split = variable.split(HX_(".",2e,00,00,00));
HXLINE(  42)				if ((split->length > 1)) {
HXLINE(  43)					 ::Dynamic obj = ::psychlua::LuaUtils_obj::getVarInArray(myClass,split->__get(0),allowMaps);
HXLINE(  44)					{
HXLINE(  44)						int _g = 1;
HXDLIN(  44)						int _g1 = (split->length - 1);
HXDLIN(  44)						while((_g < _g1)){
HXLINE(  44)							_g = (_g + 1);
HXDLIN(  44)							int i = (_g - 1);
HXLINE(  45)							obj = ::psychlua::LuaUtils_obj::getVarInArray(obj,split->__get(i),allowMaps);
            						}
            					}
HXLINE(  47)					return ::psychlua::LuaUtils_obj::getVarInArray(obj,split->__get((split->length - 1)),allowMaps);
            				}
HXLINE(  49)				return ::psychlua::LuaUtils_obj::getVarInArray(myClass,variable,allowMaps);
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE(  33)			::llua::Lua_helper_obj::callbacks->set(HX_("getPropertyFromClass",e3,fd,61,9d), ::Dynamic(new _hx_Closure_2()));
HXDLIN(  33)			linc::callbacks::add_callback_function(lua,HX_("getPropertyFromClass",e3,fd,61,9d));
            		}
HXLINE(  51)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_3) HXARGC(4)
            			 ::Dynamic _hx_run(::String classVar,::String variable, ::Dynamic value, ::Dynamic __o_allowMaps){
            		 ::Dynamic allowMaps = __o_allowMaps;
            		if (::hx::IsNull(__o_allowMaps)) allowMaps = false;
            				HX_STACKFRAME(&_hx_pos_0bdd6de38e5581b0_51_implement)
HXLINE(  52)				 ::Dynamic myClass = ::Type_obj::resolveClass(classVar);
HXLINE(  53)				if (::hx::IsNull( myClass )) {
HXLINE(  55)					::psychlua::FunkinLua_obj::luaTrace(((HX_("getPropertyFromClass: Class ",11,f9,f8,68) + classVar) + HX_(" not found",55,f3,a5,21)),false,false,-65536);
HXLINE(  56)					return null();
            				}
HXLINE(  59)				::Array< ::String > split = variable.split(HX_(".",2e,00,00,00));
HXLINE(  60)				if ((split->length > 1)) {
HXLINE(  61)					 ::Dynamic obj = ::psychlua::LuaUtils_obj::getVarInArray(myClass,split->__get(0),allowMaps);
HXLINE(  62)					{
HXLINE(  62)						int _g = 1;
HXDLIN(  62)						int _g1 = (split->length - 1);
HXDLIN(  62)						while((_g < _g1)){
HXLINE(  62)							_g = (_g + 1);
HXDLIN(  62)							int i = (_g - 1);
HXLINE(  63)							obj = ::psychlua::LuaUtils_obj::getVarInArray(obj,split->__get(i),allowMaps);
            						}
            					}
HXLINE(  65)					::psychlua::LuaUtils_obj::setVarInArray(obj,split->__get((split->length - 1)),value,allowMaps);
HXLINE(  66)					return value;
            				}
HXLINE(  68)				::psychlua::LuaUtils_obj::setVarInArray(myClass,variable,value,allowMaps);
HXLINE(  69)				return value;
            			}
            			HX_END_LOCAL_FUNC4(return)

HXLINE(  51)			::llua::Lua_helper_obj::callbacks->set(HX_("setPropertyFromClass",57,b5,19,6a), ::Dynamic(new _hx_Closure_3()));
HXDLIN(  51)			linc::callbacks::add_callback_function(lua,HX_("setPropertyFromClass",57,b5,19,6a));
            		}
HXLINE(  71)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_4) HXARGC(4)
            			 ::Dynamic _hx_run(::String obj,int index, ::Dynamic variable, ::Dynamic __o_allowMaps){
            		 ::Dynamic allowMaps = __o_allowMaps;
            		if (::hx::IsNull(__o_allowMaps)) allowMaps = false;
            				HX_STACKFRAME(&_hx_pos_0bdd6de38e5581b0_71_implement)
HXLINE(  72)				::Array< ::String > split = obj.split(HX_(".",2e,00,00,00));
HXLINE(  73)				 ::Dynamic realObject = null();
HXLINE(  74)				if ((split->length > 1)) {
HXLINE(  75)					realObject = ::psychlua::LuaUtils_obj::getPropertyLoop(split,true,false,allowMaps);
            				}
            				else {
HXLINE(  77)					 ::flixel::FlxState realObject1;
HXDLIN(  77)					if (::states::PlayState_obj::instance->isDead) {
HXLINE(  77)						realObject1 = ::substates::GameOverSubstate_obj::instance;
            					}
            					else {
HXLINE(  77)						realObject1 = ::states::PlayState_obj::instance;
            					}
HXDLIN(  77)					realObject = ::Reflect_obj::getProperty(realObject1,obj);
            				}
HXLINE(  79)				if (::Std_obj::isOfType(realObject,::hx::ClassOf< ::flixel::group::FlxTypedGroup >())) {
HXLINE(  81)					 ::Dynamic result = ::psychlua::LuaUtils_obj::getGroupStuff( ::Dynamic(realObject->__Field(HX_("members",d9,2c,70,1a),::hx::paccDynamic))->__GetItem(index),( (::String)(variable) ),allowMaps);
HXLINE(  82)					return result;
            				}
HXLINE(  85)				 ::Dynamic leArray = realObject->__GetItem(index);
HXLINE(  86)				if (::hx::IsNotNull( leArray )) {
HXLINE(  87)					 ::Dynamic result = null();
HXLINE(  88)					if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(variable),::ValueType_obj::TInt_dyn() )) {
HXLINE(  89)						result = leArray->__GetItem(( (int)(variable) ));
            					}
            					else {
HXLINE(  91)						result = ::psychlua::LuaUtils_obj::getGroupStuff(leArray,( (::String)(variable) ),allowMaps);
            					}
HXLINE(  92)					return result;
            				}
HXLINE(  94)				::psychlua::FunkinLua_obj::luaTrace(((((HX_("getPropertyFromGroup: Object #",b2,4e,2c,97) + index) + HX_(" from group: ",0f,87,ba,2b)) + obj) + HX_(" doesn't exist!",c8,8e,40,5e)),false,false,-65536);
HXLINE(  95)				return null();
            			}
            			HX_END_LOCAL_FUNC4(return)

HXLINE(  71)			::llua::Lua_helper_obj::callbacks->set(HX_("getPropertyFromGroup",ea,38,fe,ee), ::Dynamic(new _hx_Closure_4()));
HXDLIN(  71)			linc::callbacks::add_callback_function(lua,HX_("getPropertyFromGroup",ea,38,fe,ee));
            		}
HXLINE(  97)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_5) HXARGC(5)
            			 ::Dynamic _hx_run(::String obj,int index, ::Dynamic variable, ::Dynamic value, ::Dynamic __o_allowMaps){
            		 ::Dynamic allowMaps = __o_allowMaps;
            		if (::hx::IsNull(__o_allowMaps)) allowMaps = false;
            				HX_STACKFRAME(&_hx_pos_0bdd6de38e5581b0_97_implement)
HXLINE(  98)				::Array< ::String > split = obj.split(HX_(".",2e,00,00,00));
HXLINE(  99)				 ::Dynamic realObject = null();
HXLINE( 100)				if ((split->length > 1)) {
HXLINE( 101)					realObject = ::psychlua::LuaUtils_obj::getPropertyLoop(split,true,false,allowMaps);
            				}
            				else {
HXLINE( 103)					 ::flixel::FlxState realObject1;
HXDLIN( 103)					if (::states::PlayState_obj::instance->isDead) {
HXLINE( 103)						realObject1 = ::substates::GameOverSubstate_obj::instance;
            					}
            					else {
HXLINE( 103)						realObject1 = ::states::PlayState_obj::instance;
            					}
HXDLIN( 103)					realObject = ::Reflect_obj::getProperty(realObject1,obj);
            				}
HXLINE( 105)				if (::Std_obj::isOfType(realObject,::hx::ClassOf< ::flixel::group::FlxTypedGroup >())) {
HXLINE( 106)					::psychlua::LuaUtils_obj::setGroupStuff( ::Dynamic(realObject->__Field(HX_("members",d9,2c,70,1a),::hx::paccDynamic))->__GetItem(index),( (::String)(variable) ),value,allowMaps);
HXLINE( 107)					return value;
            				}
HXLINE( 110)				 ::Dynamic leArray = realObject->__GetItem(index);
HXLINE( 111)				if (::hx::IsNotNull( leArray )) {
HXLINE( 112)					if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(variable),::ValueType_obj::TInt_dyn() )) {
HXLINE( 113)						leArray->__SetItem(( (int)(variable) ),value);
HXLINE( 114)						return value;
            					}
HXLINE( 116)					::psychlua::LuaUtils_obj::setGroupStuff(leArray,( (::String)(variable) ),value,allowMaps);
            				}
HXLINE( 118)				return value;
            			}
            			HX_END_LOCAL_FUNC5(return)

HXLINE(  97)			::llua::Lua_helper_obj::callbacks->set(HX_("setPropertyFromGroup",5e,f0,b5,bb), ::Dynamic(new _hx_Closure_5()));
HXDLIN(  97)			linc::callbacks::add_callback_function(lua,HX_("setPropertyFromGroup",5e,f0,b5,bb));
            		}
HXLINE( 120)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_6) HXARGC(3)
            			void _hx_run(::String obj,int index, ::Dynamic __o_dontDestroy){
            		bool dontDestroy = __o_dontDestroy.Default(false);
            				HX_STACKFRAME(&_hx_pos_0bdd6de38e5581b0_120_implement)
HXLINE( 121)				 ::flixel::FlxState groupOrArray;
HXDLIN( 121)				if (::states::PlayState_obj::instance->isDead) {
HXLINE( 121)					groupOrArray = ::substates::GameOverSubstate_obj::instance;
            				}
            				else {
HXLINE( 121)					groupOrArray = ::states::PlayState_obj::instance;
            				}
HXDLIN( 121)				 ::Dynamic groupOrArray1 = ::Reflect_obj::getProperty(groupOrArray,obj);
HXLINE( 122)				if (::Std_obj::isOfType(groupOrArray1,::hx::ClassOf< ::flixel::group::FlxTypedGroup >())) {
HXLINE( 123)					 ::Dynamic sex =  ::Dynamic(groupOrArray1->__Field(HX_("members",d9,2c,70,1a),::hx::paccDynamic))->__GetItem(index);
HXLINE( 124)					if (!(dontDestroy)) {
HXLINE( 125)						sex->__Field(HX_("kill",9e,df,09,47),::hx::paccDynamic)();
            					}
HXLINE( 126)					groupOrArray1->__Field(HX_("remove",44,9c,88,04),::hx::paccDynamic)(sex,true);
HXLINE( 127)					if (!(dontDestroy)) {
HXLINE( 128)						sex->__Field(HX_("destroy",fa,2c,86,24),::hx::paccDynamic)();
            					}
HXLINE( 129)					return;
            				}
HXLINE( 131)				groupOrArray1->__Field(HX_("remove",44,9c,88,04),::hx::paccDynamic)(groupOrArray1->__GetItem(index));
            			}
            			HX_END_LOCAL_FUNC3((void))

HXLINE( 120)			::llua::Lua_helper_obj::callbacks->set(HX_("removeFromGroup",91,38,9c,8f), ::Dynamic(new _hx_Closure_6()));
HXDLIN( 120)			linc::callbacks::add_callback_function(lua,HX_("removeFromGroup",91,38,9c,8f));
            		}
HXLINE( 134)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_7) HXARGC(2)
            			 ::Dynamic _hx_run(::String funcToRun,::cpp::VirtualArray args){
            				HX_STACKFRAME(&_hx_pos_0bdd6de38e5581b0_135_implement)
HXLINE( 135)				return ::psychlua::ReflectionFunctions_obj::callMethodFromObject(::states::PlayState_obj::instance,funcToRun,args);
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE( 134)			::llua::Lua_helper_obj::callbacks->set(HX_("callMethod",1f,ce,8a,34), ::Dynamic(new _hx_Closure_7()));
HXDLIN( 134)			linc::callbacks::add_callback_function(lua,HX_("callMethod",1f,ce,8a,34));
            		}
HXLINE( 138)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_8) HXARGC(3)
            			 ::Dynamic _hx_run(::String className,::String funcToRun,::cpp::VirtualArray args){
            				HX_STACKFRAME(&_hx_pos_0bdd6de38e5581b0_139_implement)
HXLINE( 139)				return ::psychlua::ReflectionFunctions_obj::callMethodFromObject(::Type_obj::resolveClass(className),funcToRun,args);
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE( 138)			::llua::Lua_helper_obj::callbacks->set(HX_("callMethodFromClass",4f,38,64,be), ::Dynamic(new _hx_Closure_8()));
HXDLIN( 138)			linc::callbacks::add_callback_function(lua,HX_("callMethodFromClass",4f,38,64,be));
            		}
HXLINE( 142)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_9) HXARGC(3)
            			bool _hx_run(::String variableToSave,::String className,::cpp::VirtualArray args){
            				HX_STACKFRAME(&_hx_pos_0bdd6de38e5581b0_142_implement)
HXLINE( 143)				variableToSave = ::StringTools_obj::replace(::StringTools_obj::trim(variableToSave),HX_(".",2e,00,00,00),HX_("",00,00,00,00));
HXLINE( 144)				if (!(::states::PlayState_obj::instance->variables->exists(variableToSave))) {
HXLINE( 146)					if (::hx::IsNull( args )) {
HXLINE( 146)						args = ::cpp::VirtualArray_obj::__new(0);
            					}
HXLINE( 147)					 ::Dynamic myType = ::Type_obj::resolveClass(className);
HXLINE( 149)					if (::hx::IsNull( myType )) {
HXLINE( 151)						::psychlua::FunkinLua_obj::luaTrace(((HX_("createInstance: Variable ",cd,f7,b0,5e) + variableToSave) + HX_(" is already being used and cannot be replaced!",04,3c,54,b7)),false,false,-65536);
HXLINE( 152)						return false;
            					}
HXLINE( 155)					 ::Dynamic obj = ::Type_obj::createInstance(myType,args);
HXLINE( 156)					if (::hx::IsNotNull( obj )) {
HXLINE( 157)						::states::PlayState_obj::instance->variables->set(variableToSave,obj);
            					}
            					else {
HXLINE( 159)						::psychlua::FunkinLua_obj::luaTrace(((HX_("createInstance: Failed to create ",eb,a9,51,2f) + variableToSave) + HX_(", arguments are possibly wrong.",12,b8,b6,e3)),false,false,-65536);
            					}
HXLINE( 161)					return ::hx::IsNotNull( obj );
            				}
            				else {
HXLINE( 163)					::psychlua::FunkinLua_obj::luaTrace(((HX_("createInstance: Variable ",cd,f7,b0,5e) + variableToSave) + HX_(" is already being used and cannot be replaced!",04,3c,54,b7)),false,false,-65536);
            				}
HXLINE( 164)				return false;
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE( 142)			::llua::Lua_helper_obj::callbacks->set(HX_("createInstance",b1,9e,1b,ac), ::Dynamic(new _hx_Closure_9()));
HXDLIN( 142)			linc::callbacks::add_callback_function(lua,HX_("createInstance",b1,9e,1b,ac));
            		}
HXLINE( 166)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_10) HXARGC(2)
            			void _hx_run(::String objectName, ::Dynamic __o_inFront){
            		 ::Dynamic inFront = __o_inFront;
            		if (::hx::IsNull(__o_inFront)) inFront = false;
            				HX_STACKFRAME(&_hx_pos_0bdd6de38e5581b0_167_implement)
HXLINE( 167)				if (::states::PlayState_obj::instance->variables->exists(objectName)) {
HXLINE( 169)					 ::Dynamic obj = ::states::PlayState_obj::instance->variables->get(objectName);
HXLINE( 170)					if (( (bool)(inFront) )) {
HXLINE( 171)						 ::flixel::FlxState _hx_tmp;
HXDLIN( 171)						if (::states::PlayState_obj::instance->isDead) {
HXLINE( 171)							_hx_tmp = ::substates::GameOverSubstate_obj::instance;
            						}
            						else {
HXLINE( 171)							_hx_tmp = ::states::PlayState_obj::instance;
            						}
HXDLIN( 171)						_hx_tmp->add(obj).StaticCast<  ::flixel::FlxBasic >();
            					}
            					else {
HXLINE( 174)						if (!(::states::PlayState_obj::instance->isDead)) {
HXLINE( 175)							 ::states::PlayState _hx_tmp = ::states::PlayState_obj::instance;
HXDLIN( 175)							::Array< ::Dynamic> _hx_tmp1 = ::states::PlayState_obj::instance->members;
HXDLIN( 175)							 ::flixel::group::FlxTypedSpriteGroup group = ::states::PlayState_obj::instance->gfGroup;
HXDLIN( 175)							int pos = ::states::PlayState_obj::instance->members->indexOf(group,null());
HXDLIN( 175)							int newPos = ::states::PlayState_obj::instance->members->indexOf(::states::PlayState_obj::instance->boyfriendGroup,null());
HXDLIN( 175)							if ((newPos < pos)) {
HXLINE( 175)								group = ::states::PlayState_obj::instance->boyfriendGroup;
HXDLIN( 175)								pos = newPos;
            							}
HXDLIN( 175)							newPos = ::states::PlayState_obj::instance->members->indexOf(::states::PlayState_obj::instance->dadGroup,null());
HXDLIN( 175)							if ((newPos < pos)) {
HXLINE( 175)								group = ::states::PlayState_obj::instance->dadGroup;
HXDLIN( 175)								pos = newPos;
            							}
HXDLIN( 175)							_hx_tmp->insert(_hx_tmp1->indexOf(group,null()),obj).StaticCast<  ::flixel::FlxBasic >();
            						}
            						else {
HXLINE( 177)							 ::substates::GameOverSubstate _hx_tmp = ::substates::GameOverSubstate_obj::instance;
HXDLIN( 177)							_hx_tmp->insert(::substates::GameOverSubstate_obj::instance->members->indexOf(::substates::GameOverSubstate_obj::instance->boyfriend,null()),obj).StaticCast<  ::flixel::FlxBasic >();
            						}
            					}
            				}
            				else {
HXLINE( 180)					::psychlua::FunkinLua_obj::luaTrace(((HX_("addInstance: Can't add what doesn't exist~ (",6b,4c,da,1e) + objectName) + HX_(")",29,00,00,00)),false,false,-65536);
            				}
            			}
            			HX_END_LOCAL_FUNC2((void))

HXLINE( 166)			::llua::Lua_helper_obj::callbacks->set(HX_("addInstance",d6,56,3d,8b), ::Dynamic(new _hx_Closure_10()));
HXDLIN( 166)			linc::callbacks::add_callback_function(lua,HX_("addInstance",d6,56,3d,8b));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ReflectionFunctions_obj,implement,(void))

 ::Dynamic ReflectionFunctions_obj::callMethodFromObject( ::Dynamic classObj,::String funcStr,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_0bdd6de38e5581b0_185_callMethodFromObject)
HXLINE( 186)		if (::hx::IsNull( args )) {
HXLINE( 186)			args = ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE( 188)		::Array< ::String > split = funcStr.split(HX_(".",2e,00,00,00));
HXLINE( 189)		 ::Dynamic funcToRun = null();
HXLINE( 190)		 ::Dynamic obj = classObj;
HXLINE( 192)		if (::hx::IsNull( obj )) {
HXLINE( 194)			return null();
            		}
HXLINE( 197)		{
HXLINE( 197)			int _g = 0;
HXDLIN( 197)			int _g1 = split->length;
HXDLIN( 197)			while((_g < _g1)){
HXLINE( 197)				_g = (_g + 1);
HXDLIN( 197)				int i = (_g - 1);
HXLINE( 199)				obj = ::psychlua::LuaUtils_obj::getVarInArray(obj,::StringTools_obj::trim(split->__get(i)),null());
            			}
            		}
HXLINE( 203)		funcToRun = obj;
HXLINE( 205)		if (::hx::IsNotNull( funcToRun )) {
HXLINE( 205)			return ::Reflect_obj::callMethod(obj,funcToRun,args);
            		}
            		else {
HXLINE( 205)			return null();
            		}
HXDLIN( 205)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ReflectionFunctions_obj,callMethodFromObject,return )


ReflectionFunctions_obj::ReflectionFunctions_obj()
{
}

bool ReflectionFunctions_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"implement") ) { outValue = implement_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"callMethodFromObject") ) { outValue = callMethodFromObject_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ReflectionFunctions_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ReflectionFunctions_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ReflectionFunctions_obj::__mClass;

static ::String ReflectionFunctions_obj_sStaticFields[] = {
	HX_("implement",a3,71,3f,af),
	HX_("callMethodFromObject",c8,d2,7b,e9),
	::String(null())
};

void ReflectionFunctions_obj::__register()
{
	ReflectionFunctions_obj _hx_dummy;
	ReflectionFunctions_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("psychlua.ReflectionFunctions",7f,ff,5c,54);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ReflectionFunctions_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ReflectionFunctions_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ReflectionFunctions_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ReflectionFunctions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ReflectionFunctions_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace psychlua
