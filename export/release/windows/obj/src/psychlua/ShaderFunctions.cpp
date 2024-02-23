#include <hxcpp.h>

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxRuntimeShader
#include <flixel/addons/display/FlxRuntimeShader.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
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
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_psychlua_FunkinLua
#include <psychlua/FunkinLua.h>
#endif
#ifndef INCLUDED_psychlua_LuaUtils
#include <psychlua/LuaUtils.h>
#endif
#ifndef INCLUDED_psychlua_ShaderFunctions
#include <psychlua/ShaderFunctions.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_15_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",15,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_26_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",26,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_12_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",12,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_52_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",52,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_67_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",67,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_81_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",81,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_95_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",95,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_109_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",109,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_123_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",123,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_137_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",137,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_153_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",153,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_168_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",168,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_183_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",183,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_198_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",198,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_213_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",213,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_228_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",228,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_245_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",245,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_273_getShader,"psychlua.ShaderFunctions","getShader",0x9d51b5f2,"psychlua.ShaderFunctions.getShader","psychlua/ShaderFunctions.hx",273,0xccd4b4da)
namespace psychlua{

void ShaderFunctions_obj::__construct() { }

Dynamic ShaderFunctions_obj::__CreateEmpty() { return new ShaderFunctions_obj; }

void *ShaderFunctions_obj::_hx_vtable = 0;

Dynamic ShaderFunctions_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShaderFunctions_obj > _hx_result = new ShaderFunctions_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ShaderFunctions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6c3c4af5;
}

void ShaderFunctions_obj::implement( ::psychlua::FunkinLua funk){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::psychlua::FunkinLua,funk) HXARGC(2)
            		bool _hx_run(::String name, ::Dynamic __o_glslVersion){
            		 ::Dynamic glslVersion = __o_glslVersion;
            		if (::hx::IsNull(__o_glslVersion)) glslVersion = 120;
            			HX_STACKFRAME(&_hx_pos_929905dd20ad7486_15_implement)
HXLINE(  16)			if (!(::backend::ClientPrefs_obj::data->shaders)) {
HXLINE(  16)				return false;
            			}
HXLINE(  19)			return funk->initLuaShader(name,glslVersion);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::psychlua::FunkinLua,funk) HXARGC(2)
            		bool _hx_run(::String obj,::String shader){
            			HX_GC_STACKFRAME(&_hx_pos_929905dd20ad7486_26_implement)
HXLINE(  27)			if (!(::backend::ClientPrefs_obj::data->shaders)) {
HXLINE(  27)				return false;
            			}
HXLINE(  30)			bool _hx_tmp;
HXDLIN(  30)			if (!(funk->runtimeShaders->exists(shader))) {
HXLINE(  30)				_hx_tmp = !(funk->initLuaShader(shader,null()));
            			}
            			else {
HXLINE(  30)				_hx_tmp = false;
            			}
HXDLIN(  30)			if (_hx_tmp) {
HXLINE(  32)				::psychlua::FunkinLua_obj::luaTrace(((HX_("setSpriteShader: Shader ",09,aa,37,9c) + shader) + HX_(" is missing!",d1,64,6b,b3)),false,false,-65536);
HXLINE(  33)				return false;
            			}
HXLINE(  36)			::Array< ::String > split = obj.split(HX_(".",2e,00,00,00));
HXLINE(  37)			 ::flixel::FlxSprite leObj = ( ( ::flixel::FlxSprite)(::psychlua::LuaUtils_obj::getObjectDirectly(split->__get(0),null(),null())) );
HXLINE(  38)			if ((split->length > 1)) {
HXLINE(  39)				 ::Dynamic this1 = ::psychlua::LuaUtils_obj::getPropertyLoop(split,null(),null(),null());
HXDLIN(  39)				leObj = ( ( ::flixel::FlxSprite)(::psychlua::LuaUtils_obj::getVarInArray(this1,split->__get((split->length - 1)),null())) );
            			}
HXLINE(  42)			if (::hx::IsNotNull( leObj )) {
HXLINE(  43)				::Array< ::String > arr = ( (::Array< ::String >)(funk->runtimeShaders->get(shader)) );
HXLINE(  44)				leObj->shader =  ::flixel::addons::display::FlxRuntimeShader_obj::__alloc( HX_CTX ,arr->__get(0),arr->__get(1),null());
HXLINE(  45)				return true;
            			}
HXLINE(  50)			return false;
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_929905dd20ad7486_12_implement)
HXLINE(  13)		 cpp::Reference<lua_State> lua = funk->lua;
HXLINE(  15)		funk->addLocalCallback(HX_("initLuaShader",cd,69,3d,b0), ::Dynamic(new _hx_Closure_0(funk)));
HXLINE(  26)		funk->addLocalCallback(HX_("setSpriteShader",cc,33,b9,d3), ::Dynamic(new _hx_Closure_1(funk)));
HXLINE(  52)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            			bool _hx_run(::String obj){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_52_implement)
HXLINE(  53)				::Array< ::String > split = obj.split(HX_(".",2e,00,00,00));
HXLINE(  54)				 ::flixel::FlxSprite leObj = ( ( ::flixel::FlxSprite)(::psychlua::LuaUtils_obj::getObjectDirectly(split->__get(0),null(),null())) );
HXLINE(  55)				if ((split->length > 1)) {
HXLINE(  56)					 ::Dynamic this1 = ::psychlua::LuaUtils_obj::getPropertyLoop(split,null(),null(),null());
HXDLIN(  56)					leObj = ( ( ::flixel::FlxSprite)(::psychlua::LuaUtils_obj::getVarInArray(this1,split->__get((split->length - 1)),null())) );
            				}
HXLINE(  59)				if (::hx::IsNotNull( leObj )) {
HXLINE(  60)					leObj->shader = null();
HXLINE(  61)					return true;
            				}
HXLINE(  63)				return false;
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE(  52)			::llua::Lua_helper_obj::callbacks->set(HX_("removeSpriteShader",6e,9f,39,01), ::Dynamic(new _hx_Closure_2()));
HXDLIN(  52)			linc::callbacks::add_callback_function(lua,HX_("removeSpriteShader",6e,9f,39,01));
            		}
HXLINE(  67)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_3) HXARGC(2)
            			 ::Dynamic _hx_run(::String obj,::String prop){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_67_implement)
HXLINE(  69)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE(  70)				if (::hx::IsNull( shader )) {
HXLINE(  72)					::psychlua::FunkinLua_obj::luaTrace(HX_("getShaderBool: Shader is not FlxRuntimeShader!",e3,10,46,bd),false,false,-65536);
HXLINE(  73)					return null();
            				}
HXLINE(  75)				return shader->getBool(prop);
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE(  67)			::llua::Lua_helper_obj::callbacks->set(HX_("getShaderBool",25,c2,26,8c), ::Dynamic(new _hx_Closure_3()));
HXDLIN(  67)			linc::callbacks::add_callback_function(lua,HX_("getShaderBool",25,c2,26,8c));
            		}
HXLINE(  81)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_4) HXARGC(2)
            			::Array< bool > _hx_run(::String obj,::String prop){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_81_implement)
HXLINE(  83)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE(  84)				if (::hx::IsNull( shader )) {
HXLINE(  86)					::psychlua::FunkinLua_obj::luaTrace(HX_("getShaderBoolArray: Shader is not FlxRuntimeShader!",f4,2e,54,2b),false,false,-65536);
HXLINE(  87)					return null();
            				}
HXLINE(  89)				return shader->getBoolArray(prop);
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE(  81)			::llua::Lua_helper_obj::callbacks->set(HX_("getShaderBoolArray",34,35,0b,6a), ::Dynamic(new _hx_Closure_4()));
HXDLIN(  81)			linc::callbacks::add_callback_function(lua,HX_("getShaderBoolArray",34,35,0b,6a));
            		}
HXLINE(  95)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_5) HXARGC(2)
            			 ::Dynamic _hx_run(::String obj,::String prop){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_95_implement)
HXLINE(  97)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE(  98)				if (::hx::IsNull( shader )) {
HXLINE( 100)					::psychlua::FunkinLua_obj::luaTrace(HX_("getShaderInt: Shader is not FlxRuntimeShader!",d4,d8,ca,ab),false,false,-65536);
HXLINE( 101)					return null();
            				}
HXLINE( 103)				return shader->getInt(prop);
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE(  95)			::llua::Lua_helper_obj::callbacks->set(HX_("getShaderInt",54,e7,a3,3e), ::Dynamic(new _hx_Closure_5()));
HXDLIN(  95)			linc::callbacks::add_callback_function(lua,HX_("getShaderInt",54,e7,a3,3e));
            		}
HXLINE( 109)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_6) HXARGC(2)
            			::Array< int > _hx_run(::String obj,::String prop){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_109_implement)
HXLINE( 111)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 112)				if (::hx::IsNull( shader )) {
HXLINE( 114)					::psychlua::FunkinLua_obj::luaTrace(HX_("getShaderIntArray: Shader is not FlxRuntimeShader!",63,fd,1f,7f),false,false,-65536);
HXLINE( 115)					return null();
            				}
HXLINE( 117)				return shader->getIntArray(prop);
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE( 109)			::llua::Lua_helper_obj::callbacks->set(HX_("getShaderIntArray",a5,e5,8d,91), ::Dynamic(new _hx_Closure_6()));
HXDLIN( 109)			linc::callbacks::add_callback_function(lua,HX_("getShaderIntArray",a5,e5,8d,91));
            		}
HXLINE( 123)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_7) HXARGC(2)
            			 ::Dynamic _hx_run(::String obj,::String prop){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_123_implement)
HXLINE( 125)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 126)				if (::hx::IsNull( shader )) {
HXLINE( 128)					::psychlua::FunkinLua_obj::luaTrace(HX_("getShaderFloat: Shader is not FlxRuntimeShader!",47,18,f4,13),false,false,-65536);
HXLINE( 129)					return null();
            				}
HXLINE( 131)				return shader->getFloat(prop);
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE( 123)			::llua::Lua_helper_obj::callbacks->set(HX_("getShaderFloat",41,c3,61,61), ::Dynamic(new _hx_Closure_7()));
HXDLIN( 123)			linc::callbacks::add_callback_function(lua,HX_("getShaderFloat",41,c3,61,61));
            		}
HXLINE( 137)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_8) HXARGC(2)
            			::Array< Float > _hx_run(::String obj,::String prop){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_137_implement)
HXLINE( 139)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 140)				if (::hx::IsNull( shader )) {
HXLINE( 142)					::psychlua::FunkinLua_obj::luaTrace(HX_("getShaderFloatArray: Shader is not FlxRuntimeShader!",10,dd,1c,59),false,false,-65536);
HXLINE( 143)					return null();
            				}
HXLINE( 145)				return shader->getFloatArray(prop);
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE( 137)			::llua::Lua_helper_obj::callbacks->set(HX_("getShaderFloatArray",98,ae,4a,4c), ::Dynamic(new _hx_Closure_8()));
HXDLIN( 137)			linc::callbacks::add_callback_function(lua,HX_("getShaderFloatArray",98,ae,4a,4c));
            		}
HXLINE( 153)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_9) HXARGC(3)
            			bool _hx_run(::String obj,::String prop,bool value){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_153_implement)
HXLINE( 155)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 156)				if (::hx::IsNull( shader )) {
HXLINE( 158)					::psychlua::FunkinLua_obj::luaTrace(HX_("setShaderBool: Shader is not FlxRuntimeShader!",57,49,cc,f1),false,false,-65536);
HXLINE( 159)					return false;
            				}
HXLINE( 161)				shader->setBool(prop,value);
HXLINE( 162)				return true;
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE( 153)			::llua::Lua_helper_obj::callbacks->set(HX_("setShaderBool",31,a4,2c,d1), ::Dynamic(new _hx_Closure_9()));
HXDLIN( 153)			linc::callbacks::add_callback_function(lua,HX_("setShaderBool",31,a4,2c,d1));
            		}
HXLINE( 168)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_10) HXARGC(3)
            			bool _hx_run(::String obj,::String prop, ::Dynamic values){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_168_implement)
HXLINE( 170)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 171)				if (::hx::IsNull( shader )) {
HXLINE( 173)					::psychlua::FunkinLua_obj::luaTrace(HX_("setShaderBoolArray: Shader is not FlxRuntimeShader!",00,d2,a8,2e),false,false,-65536);
HXLINE( 174)					return false;
            				}
HXLINE( 176)				shader->setBoolArray(prop,( (::Array< bool >)(values) ));
HXLINE( 177)				return true;
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE( 168)			::llua::Lua_helper_obj::callbacks->set(HX_("setShaderBoolArray",a8,67,ba,46), ::Dynamic(new _hx_Closure_10()));
HXDLIN( 168)			linc::callbacks::add_callback_function(lua,HX_("setShaderBoolArray",a8,67,ba,46));
            		}
HXLINE( 183)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_11) HXARGC(3)
            			bool _hx_run(::String obj,::String prop,int value){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_183_implement)
HXLINE( 185)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 186)				if (::hx::IsNull( shader )) {
HXLINE( 188)					::psychlua::FunkinLua_obj::luaTrace(HX_("setShaderInt: Shader is not FlxRuntimeShader!",e0,6a,a4,15),false,false,-65536);
HXLINE( 189)					return false;
            				}
HXLINE( 191)				shader->setInt(prop,value);
HXLINE( 192)				return true;
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE( 183)			::llua::Lua_helper_obj::callbacks->set(HX_("setShaderInt",c8,0a,9d,53), ::Dynamic(new _hx_Closure_11()));
HXDLIN( 183)			linc::callbacks::add_callback_function(lua,HX_("setShaderInt",c8,0a,9d,53));
            		}
HXLINE( 198)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_12) HXARGC(3)
            			bool _hx_run(::String obj,::String prop, ::Dynamic values){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_198_implement)
HXLINE( 200)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 201)				if (::hx::IsNull( shader )) {
HXLINE( 203)					::psychlua::FunkinLua_obj::luaTrace(HX_("setShaderIntArray: Shader is not FlxRuntimeShader!",d7,7f,9d,a9),false,false,-65536);
HXLINE( 204)					return false;
            				}
HXLINE( 206)				shader->setIntArray(prop,( (::Array< int >)(values) ));
HXLINE( 207)				return true;
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE( 198)			::llua::Lua_helper_obj::callbacks->set(HX_("setShaderIntArray",b1,bd,fb,b4), ::Dynamic(new _hx_Closure_12()));
HXDLIN( 198)			linc::callbacks::add_callback_function(lua,HX_("setShaderIntArray",b1,bd,fb,b4));
            		}
HXLINE( 213)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_13) HXARGC(3)
            			bool _hx_run(::String obj,::String prop,Float value){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_213_implement)
HXLINE( 215)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 216)				if (::hx::IsNull( shader )) {
HXLINE( 218)					::psychlua::FunkinLua_obj::luaTrace(HX_("setShaderFloat: Shader is not FlxRuntimeShader!",53,45,df,d4),false,false,-65536);
HXLINE( 219)					return false;
            				}
HXLINE( 221)				shader->setFloat(prop,value);
HXLINE( 222)				return true;
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE( 213)			::llua::Lua_helper_obj::callbacks->set(HX_("setShaderFloat",b5,ab,81,81), ::Dynamic(new _hx_Closure_13()));
HXDLIN( 213)			linc::callbacks::add_callback_function(lua,HX_("setShaderFloat",b5,ab,81,81));
            		}
HXLINE( 228)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_14) HXARGC(3)
            			bool _hx_run(::String obj,::String prop, ::Dynamic values){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_228_implement)
HXLINE( 230)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 231)				if (::hx::IsNull( shader )) {
HXLINE( 233)					::psychlua::FunkinLua_obj::luaTrace(HX_("setShaderFloatArray: Shader is not FlxRuntimeShader!",84,e4,d6,3f),false,false,-65536);
HXLINE( 234)					return false;
            				}
HXLINE( 237)				shader->setFloatArray(prop,( (::Array< Float >)(values) ));
HXLINE( 238)				return true;
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE( 228)			::llua::Lua_helper_obj::callbacks->set(HX_("setShaderFloatArray",a4,a1,e7,88), ::Dynamic(new _hx_Closure_14()));
HXDLIN( 228)			linc::callbacks::add_callback_function(lua,HX_("setShaderFloatArray",a4,a1,e7,88));
            		}
HXLINE( 245)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_15) HXARGC(3)
            			bool _hx_run(::String obj,::String prop,::String bitmapdataPath){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_245_implement)
HXLINE( 247)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 248)				if (::hx::IsNull( shader )) {
HXLINE( 250)					::psychlua::FunkinLua_obj::luaTrace(HX_("setShaderSampler2D: Shader is not FlxRuntimeShader!",d5,95,42,9d),false,false,-65536);
HXLINE( 251)					return false;
            				}
HXLINE( 255)				 ::flixel::graphics::FlxGraphic value = ::backend::Paths_obj::image(bitmapdataPath,null(),null());
HXLINE( 256)				bool _hx_tmp;
HXDLIN( 256)				if (::hx::IsNotNull( value )) {
HXLINE( 256)					_hx_tmp = ::hx::IsNotNull( value->bitmap );
            				}
            				else {
HXLINE( 256)					_hx_tmp = false;
            				}
HXDLIN( 256)				if (_hx_tmp) {
HXLINE( 259)					shader->setSampler2D(prop,value->bitmap);
HXLINE( 260)					return true;
            				}
HXLINE( 262)				return false;
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE( 245)			::llua::Lua_helper_obj::callbacks->set(HX_("setShaderSampler2D",73,a9,e5,27), ::Dynamic(new _hx_Closure_15()));
HXDLIN( 245)			linc::callbacks::add_callback_function(lua,HX_("setShaderSampler2D",73,a9,e5,27));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ShaderFunctions_obj,implement,(void))

 ::flixel::addons::display::FlxRuntimeShader ShaderFunctions_obj::getShader(::String obj){
            	HX_STACKFRAME(&_hx_pos_929905dd20ad7486_273_getShader)
HXLINE( 274)		::Array< ::String > split = obj.split(HX_(".",2e,00,00,00));
HXLINE( 275)		 ::flixel::FlxSprite target = null();
HXLINE( 276)		if ((split->length > 1)) {
HXLINE( 276)			 ::Dynamic this1 = ::psychlua::LuaUtils_obj::getPropertyLoop(split,null(),null(),null());
HXDLIN( 276)			target = ( ( ::flixel::FlxSprite)(::psychlua::LuaUtils_obj::getVarInArray(this1,split->__get((split->length - 1)),null())) );
            		}
            		else {
HXLINE( 277)			target = ( ( ::flixel::FlxSprite)(::psychlua::LuaUtils_obj::getObjectDirectly(split->__get(0),null(),null())) );
            		}
HXLINE( 279)		if (::hx::IsNull( target )) {
HXLINE( 281)			::psychlua::FunkinLua_obj::luaTrace(((HX_("Error on getting shader: Object ",91,06,1d,aa) + obj) + HX_(" not found",55,f3,a5,21)),false,false,-65536);
HXLINE( 282)			return null();
            		}
HXLINE( 284)		return ::hx::TCast<  ::flixel::addons::display::FlxRuntimeShader >::cast(target->shader);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ShaderFunctions_obj,getShader,return )


ShaderFunctions_obj::ShaderFunctions_obj()
{
}

bool ShaderFunctions_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"implement") ) { outValue = implement_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getShader") ) { outValue = getShader_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ShaderFunctions_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ShaderFunctions_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ShaderFunctions_obj::__mClass;

static ::String ShaderFunctions_obj_sStaticFields[] = {
	HX_("implement",a3,71,3f,af),
	HX_("getShader",5b,48,77,99),
	::String(null())
};

void ShaderFunctions_obj::__register()
{
	ShaderFunctions_obj _hx_dummy;
	ShaderFunctions_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("psychlua.ShaderFunctions",45,3b,4e,4a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ShaderFunctions_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ShaderFunctions_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ShaderFunctions_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderFunctions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderFunctions_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace psychlua
