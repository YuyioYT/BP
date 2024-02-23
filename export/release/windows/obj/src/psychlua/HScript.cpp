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
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Conductor
#include <backend/Conductor.h>
#endif
#ifndef INCLUDED_backend_Countdown
#include <backend/Countdown.h>
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
#ifndef INCLUDED_flixel_addons_display_FlxRuntimeShader
#include <flixel/addons/display/FlxRuntimeShader.h>
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
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
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
#ifndef INCLUDED_llua_Lua_helper
#include <llua/Lua_helper.h>
#endif
#ifndef INCLUDED_objects_Alphabet
#include <objects/Alphabet.h>
#endif
#ifndef INCLUDED_objects_Character
#include <objects/Character.h>
#endif
#ifndef INCLUDED_objects_Note
#include <objects/Note.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_ShaderFilter
#include <openfl/filters/ShaderFilter.h>
#endif
#ifndef INCLUDED_psychlua_CustomFlxColor
#include <psychlua/CustomFlxColor.h>
#endif
#ifndef INCLUDED_psychlua_CustomSubstate
#include <psychlua/CustomSubstate.h>
#endif
#ifndef INCLUDED_psychlua_FunkinLua
#include <psychlua/FunkinLua.h>
#endif
#ifndef INCLUDED_psychlua_HScript
#include <psychlua/HScript.h>
#endif
#ifndef INCLUDED_psychlua_LuaUtils
#include <psychlua/LuaUtils.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_tea_SScript
#include <tea/SScript.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_22ae5a7ed167d885_38_new,"psychlua.HScript","new",0xc5b53054,"psychlua.HScript.new","psychlua/HScript.hx",38,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_83_preset,"psychlua.HScript","preset",0x288cc3eb,"psychlua.HScript.preset","psychlua/HScript.hx",83,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_86_preset,"psychlua.HScript","preset",0x288cc3eb,"psychlua.HScript.preset","psychlua/HScript.hx",86,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_92_preset,"psychlua.HScript","preset",0x288cc3eb,"psychlua.HScript.preset","psychlua/HScript.hx",92,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_100_preset,"psychlua.HScript","preset",0x288cc3eb,"psychlua.HScript.preset","psychlua/HScript.hx",100,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_109_preset,"psychlua.HScript","preset",0x288cc3eb,"psychlua.HScript.preset","psychlua/HScript.hx",109,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_120_preset,"psychlua.HScript","preset",0x288cc3eb,"psychlua.HScript.preset","psychlua/HScript.hx",120,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_128_preset,"psychlua.HScript","preset",0x288cc3eb,"psychlua.HScript.preset","psychlua/HScript.hx",128,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_159_preset,"psychlua.HScript","preset",0x288cc3eb,"psychlua.HScript.preset","psychlua/HScript.hx",159,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_160_preset,"psychlua.HScript","preset",0x288cc3eb,"psychlua.HScript.preset","psychlua/HScript.hx",160,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_161_preset,"psychlua.HScript","preset",0x288cc3eb,"psychlua.HScript.preset","psychlua/HScript.hx",161,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_162_preset,"psychlua.HScript","preset",0x288cc3eb,"psychlua.HScript.preset","psychlua/HScript.hx",162,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_163_preset,"psychlua.HScript","preset",0x288cc3eb,"psychlua.HScript.preset","psychlua/HScript.hx",163,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_164_preset,"psychlua.HScript","preset",0x288cc3eb,"psychlua.HScript.preset","psychlua/HScript.hx",164,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_53_preset,"psychlua.HScript","preset",0x288cc3eb,"psychlua.HScript.preset","psychlua/HScript.hx",53,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_169_executeCode,"psychlua.HScript","executeCode",0x3ba519f6,"psychlua.HScript.executeCode","psychlua/HScript.hx",169,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_195_executeFunction,"psychlua.HScript","executeFunction",0xe611ac61,"psychlua.HScript.executeFunction","psychlua/HScript.hx",195,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_287_destroy,"psychlua.HScript","destroy",0x3d4896ee,"psychlua.HScript.destroy","psychlua/HScript.hx",287,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_17_initHaxeModule,"psychlua.HScript","initHaxeModule",0xf5eaad2e,"psychlua.HScript.initHaxeModule","psychlua/HScript.hx",17,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_28_initHaxeModuleCode,"psychlua.HScript","initHaxeModuleCode",0x2e51b97b,"psychlua.HScript.initHaxeModuleCode","psychlua/HScript.hx",28,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_205_implement,"psychlua.HScript","implement",0x4ce74097,"psychlua.HScript.implement","psychlua/HScript.hx",205,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_236_implement,"psychlua.HScript","implement",0x4ce74097,"psychlua.HScript.implement","psychlua/HScript.hx",236,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_253_implement,"psychlua.HScript","implement",0x4ce74097,"psychlua.HScript.implement","psychlua/HScript.hx",253,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_203_implement,"psychlua.HScript","implement",0x4ce74097,"psychlua.HScript.implement","psychlua/HScript.hx",203,0x619ca0dd)
namespace psychlua{

void HScript_obj::__construct( ::psychlua::FunkinLua parent,::String file){
            	HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_38_new)
HXLINE(  39)		if (::hx::IsNull( file )) {
HXLINE(  40)			file = HX_("",00,00,00,00);
            		}
HXLINE(  42)		super::__construct(file,false,false);
HXLINE(  43)		this->parentLua = parent;
HXLINE(  44)		if (::hx::IsNotNull( parent )) {
HXLINE(  45)			this->origin = parent->scriptName;
            		}
HXLINE(  46)		bool _hx_tmp;
HXDLIN(  46)		if (::hx::IsNotNull( this->scriptFile )) {
HXLINE(  46)			_hx_tmp = (this->scriptFile.length > 0);
            		}
            		else {
HXLINE(  46)			_hx_tmp = false;
            		}
HXDLIN(  46)		if (_hx_tmp) {
HXLINE(  47)			this->origin = this->scriptFile;
            		}
HXLINE(  48)		this->preset();
HXLINE(  49)		this->execute();
            	}

Dynamic HScript_obj::__CreateEmpty() { return new HScript_obj; }

void *HScript_obj::_hx_vtable = 0;

Dynamic HScript_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HScript_obj > _hx_result = new HScript_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool HScript_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f20a2ee) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1f20a2ee;
	} else {
		return inClassId==(int)0x7f75c5ee;
	}
}

void HScript_obj::preset(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		void _hx_run(::String name, ::Dynamic value){
            			HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_83_preset)
HXLINE(  83)			::states::PlayState_obj::instance->variables->set(name,value);
            		}
            		HX_END_LOCAL_FUNC2((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		 ::Dynamic _hx_run(::String name){
            			HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_86_preset)
HXLINE(  87)			 ::Dynamic result = null();
HXLINE(  88)			if (::states::PlayState_obj::instance->variables->exists(name)) {
HXLINE(  88)				result = ::states::PlayState_obj::instance->variables->get(name);
            			}
HXLINE(  89)			return result;
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            		bool _hx_run(::String name){
            			HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_92_preset)
HXLINE(  93)			if (::states::PlayState_obj::instance->variables->exists(name)) {
HXLINE(  95)				::states::PlayState_obj::instance->variables->remove(name);
HXLINE(  96)				return true;
            			}
HXLINE(  98)			return false;
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_3) HXARGC(2)
            		void _hx_run(::String text, ::Dynamic color){
            			HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_100_preset)
HXLINE( 101)			if (::hx::IsNull( color )) {
HXLINE( 101)				color = -1;
            			}
HXLINE( 102)			::states::PlayState_obj::instance->addTextToDebug(text,( (int)(color) ));
            		}
            		HX_END_LOCAL_FUNC2((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_4) HXARGC(2)
            		void _hx_run(::String name, ::Dynamic func){
            			HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_109_preset)
HXLINE( 111)			{
HXLINE( 111)				int _g = 0;
HXDLIN( 111)				::Array< ::Dynamic> _g1 = ::states::PlayState_obj::instance->luaArray;
HXDLIN( 111)				while((_g < _g1->length)){
HXLINE( 111)					 ::psychlua::FunkinLua script = _g1->__get(_g).StaticCast<  ::psychlua::FunkinLua >();
HXDLIN( 111)					_g = (_g + 1);
HXLINE( 112)					bool _hx_tmp;
HXDLIN( 112)					bool _hx_tmp1;
HXDLIN( 112)					if (::hx::IsNotNull( script )) {
HXLINE( 112)						_hx_tmp1 = ::hx::IsNotNull( script->lua );
            					}
            					else {
HXLINE( 112)						_hx_tmp1 = false;
            					}
HXDLIN( 112)					if (_hx_tmp1) {
HXLINE( 112)						_hx_tmp = !(script->closed);
            					}
            					else {
HXLINE( 112)						_hx_tmp = false;
            					}
HXDLIN( 112)					if (_hx_tmp) {
HXLINE( 113)						 cpp::Reference<lua_State> l = script->lua;
HXDLIN( 113)						::llua::Lua_helper_obj::callbacks->set(name,func);
HXDLIN( 113)						linc::callbacks::add_callback_function(l,name);
            					}
            				}
            			}
HXLINE( 115)			::psychlua::FunkinLua_obj::customFunctions->set(name,func);
            		}
            		HX_END_LOCAL_FUNC2((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_5, ::psychlua::HScript,_gthis) HXARGC(3)
            		void _hx_run(::String name, ::Dynamic func, ::psychlua::FunkinLua funk){
            			HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_120_preset)
HXLINE( 121)			if (::hx::IsNull( funk )) {
HXLINE( 121)				funk = _gthis->parentLua;
            			}
HXLINE( 123)			if (::hx::IsNotNull( _gthis->parentLua )) {
HXLINE( 123)				funk->addLocalCallback(name,func);
            			}
            			else {
HXLINE( 124)				::psychlua::FunkinLua_obj::luaTrace(((HX_("createCallback (",29,ef,61,76) + name) + HX_("): 3rd argument is null",44,8a,de,61)),false,false,-65536);
            			}
            		}
            		HX_END_LOCAL_FUNC3((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_6, ::psychlua::HScript,_gthis) HXARGC(2)
            		void _hx_run(::String libName,::String __o_libPackage){
            		::String libPackage = __o_libPackage;
            		if (::hx::IsNull(__o_libPackage)) libPackage = HX_("",00,00,00,00);
            			HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_128_preset)
HXLINE( 128)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 129)				::String str = HX_("",00,00,00,00);
HXLINE( 130)				if ((libPackage.length > 0)) {
HXLINE( 131)					str = (libPackage + HX_(".",2e,00,00,00));
            				}
HXLINE( 133)				 ::psychlua::HScript _gthis1 = _gthis;
HXDLIN( 133)				_gthis1->set(libName,::Type_obj::resolveClass((str + libName)));
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 135)					{
HXLINE( 135)						null();
            					}
HXDLIN( 135)					 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXDLIN( 135)					{
HXLINE( 136)						 ::Dynamic e1 =  ::Dynamic( ::Dynamic(e->__Field(HX_("message",c7,35,11,9a),::hx::paccDynamic))->__Field(HX_("substr",31,ef,0a,9a),::hx::paccDynamic));
HXDLIN( 136)						::String msg = ( (::String)(e1(0, ::Dynamic(e->__Field(HX_("message",c7,35,11,9a),::hx::paccDynamic))->__Field(HX_("indexOf",c9,48,bf,e0),::hx::paccDynamic)(HX_("\n",0a,00,00,00)))) );
HXLINE( 137)						if (::hx::IsNotNull( _gthis->parentLua )) {
HXLINE( 139)							::psychlua::FunkinLua_obj::lastCalledScript = _gthis->parentLua;
HXLINE( 140)							msg = ((((_gthis->origin + HX_(":",3a,00,00,00)) + _gthis->parentLua->lastCalledFunction) + HX_(" - ",73,6f,18,00)) + msg);
            						}
            						else {
HXLINE( 142)							msg = (((HX_("",00,00,00,00) + _gthis->origin) + HX_(" - ",73,6f,18,00)) + msg);
            						}
HXLINE( 143)						::psychlua::FunkinLua_obj::luaTrace(msg,::hx::IsNull( _gthis->parentLua ),false,-65536);
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC2((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_7) HXARGC(1)
            		void _hx_run( ::flixel::FlxBasic obj){
            			HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_159_preset)
HXLINE( 159)			::states::PlayState_obj::instance->add(obj).StaticCast<  ::flixel::FlxBasic >();
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_8) HXARGC(1)
            		void _hx_run( ::flixel::FlxBasic obj){
            			HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_160_preset)
HXLINE( 160)			::states::PlayState_obj::instance->addBehindGF(obj);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_9) HXARGC(1)
            		void _hx_run( ::flixel::FlxBasic obj){
            			HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_161_preset)
HXLINE( 161)			::states::PlayState_obj::instance->addBehindDad(obj);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_10) HXARGC(1)
            		void _hx_run( ::flixel::FlxBasic obj){
            			HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_162_preset)
HXLINE( 162)			::states::PlayState_obj::instance->addBehindBF(obj);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_11) HXARGC(2)
            		void _hx_run(int pos, ::flixel::FlxBasic obj){
            			HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_163_preset)
HXLINE( 163)			::states::PlayState_obj::instance->insert(pos,obj).StaticCast<  ::flixel::FlxBasic >();
            		}
            		HX_END_LOCAL_FUNC2((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_12) HXARGC(2)
            		void _hx_run( ::flixel::FlxBasic obj, ::Dynamic __o_splice){
            		bool splice = __o_splice.Default(false);
            			HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_164_preset)
HXLINE( 164)			::states::PlayState_obj::instance->remove(obj,splice).StaticCast<  ::flixel::FlxBasic >();
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_53_preset)
HXDLIN(  53)		 ::psychlua::HScript _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  55)		this->super::preset();
HXLINE(  58)		this->set(HX_("FlxG",b5,4b,97,2e),::hx::ClassOf< ::flixel::FlxG >());
HXLINE(  59)		this->set(HX_("FlxSprite",f7,d5,84,45),::hx::ClassOf< ::flixel::FlxSprite >());
HXLINE(  60)		this->set(HX_("FlxCamera",97,40,7b,39),::hx::ClassOf< ::flixel::FlxCamera >());
HXLINE(  61)		this->set(HX_("FlxTimer",13,ca,0f,cd),::hx::ClassOf< ::flixel::util::FlxTimer >());
HXLINE(  62)		this->set(HX_("FlxTween",b9,b4,4a,d6),::hx::ClassOf< ::flixel::tweens::FlxTween >());
HXLINE(  63)		this->set(HX_("FlxEase",60,c5,64,d3),::hx::ClassOf< ::flixel::tweens::FlxEase >());
HXLINE(  64)		this->set(HX_("FlxColor",b1,7b,36,07),::hx::ClassOf< ::psychlua::CustomFlxColor >());
HXLINE(  65)		this->set(HX_("PlayState",5d,83,c2,46),::hx::ClassOf< ::states::PlayState >());
HXLINE(  66)		this->set(HX_("Paths",0e,7b,84,50),::hx::ClassOf< ::backend::Paths >());
HXLINE(  67)		this->set(HX_("Conductor",c7,77,a1,7b),::hx::ClassOf< ::backend::Conductor >());
HXLINE(  68)		this->set(HX_("ClientPrefs",c5,55,e0,8a),::hx::ClassOf< ::backend::ClientPrefs >());
HXLINE(  69)		this->set(HX_("Character",89,bb,a4,e3),::hx::ClassOf< ::objects::Character >());
HXLINE(  70)		this->set(HX_("Alphabet",d3,38,ea,fa),::hx::ClassOf< ::objects::Alphabet >());
HXLINE(  71)		this->set(HX_("Note",12,44,e3,33),::hx::ClassOf< ::objects::Note >());
HXLINE(  72)		this->set(HX_("CustomSubstate",82,cd,df,32),::hx::ClassOf< ::psychlua::CustomSubstate >());
HXLINE(  73)		this->set(HX_("Countdown",91,30,88,0b),::hx::ClassOf< ::backend::Countdown >());
HXLINE(  75)		this->set(HX_("FlxRuntimeShader",6b,22,33,11),::hx::ClassOf< ::flixel::addons::display::FlxRuntimeShader >());
HXLINE(  77)		this->set(HX_("ShaderFilter",dd,08,30,bd),::hx::ClassOf< ::openfl::filters::ShaderFilter >());
HXLINE(  78)		this->set(HX_("StringTools",6a,db,63,03),::hx::ClassOf< ::StringTools >());
HXLINE(  81)		this->set(HX_("setVar",65,6c,71,6f), ::Dynamic(new _hx_Closure_0()));
HXLINE(  85)		this->set(HX_("getVar",f1,17,29,a3), ::Dynamic(new _hx_Closure_1()));
HXLINE(  91)		this->set(HX_("removeVar",03,fd,f4,ca), ::Dynamic(new _hx_Closure_2()));
HXLINE( 100)		this->set(HX_("debugPrint",da,28,6f,c7), ::Dynamic(new _hx_Closure_3()));
HXLINE( 108)		this->set(HX_("createGlobalCallback",64,de,db,36), ::Dynamic(new _hx_Closure_4()));
HXLINE( 119)		this->set(HX_("createCallback",e1,18,41,d1), ::Dynamic(new _hx_Closure_5(_gthis)));
HXLINE( 127)		this->set(HX_("addHaxeLibrary",d4,92,3b,4b), ::Dynamic(new _hx_Closure_6(_gthis)));
HXLINE( 146)		this->set(HX_("parentLua",ae,22,50,7f),this->parentLua);
HXLINE( 147)		this->set(HX_("this",5e,06,fc,4c),::hx::ObjectPtr<OBJ_>(this));
HXLINE( 148)		this->set(HX_("game",f2,f3,5e,44),::states::PlayState_obj::instance);
HXLINE( 149)		this->set(HX_("buildTarget",1f,d9,5d,d7),::psychlua::FunkinLua_obj::getBuildTarget());
HXLINE( 150)		this->set(HX_("customSubstate",62,39,8a,88),::psychlua::CustomSubstate_obj::instance);
HXLINE( 151)		this->set(HX_("customSubstateName",cd,30,b8,0d),::psychlua::CustomSubstate_obj::name);
HXLINE( 153)		this->set(HX_("Function_Stop",c9,a5,e8,d3),::psychlua::FunkinLua_obj::Function_Stop);
HXLINE( 154)		this->set(HX_("Function_Continue",ae,85,11,8b),::psychlua::FunkinLua_obj::Function_Continue);
HXLINE( 155)		this->set(HX_("Function_StopLua",6f,6f,62,22),::psychlua::FunkinLua_obj::Function_StopLua);
HXLINE( 156)		this->set(HX_("Function_StopHScript",ca,bd,3f,93),::psychlua::FunkinLua_obj::Function_StopHScript);
HXLINE( 157)		this->set(HX_("Function_StopAll",d8,0e,5a,22),::psychlua::FunkinLua_obj::Function_StopAll);
HXLINE( 159)		this->set(HX_("add",21,f2,49,00), ::Dynamic(new _hx_Closure_7()));
HXLINE( 160)		this->set(HX_("addBehindGF",9a,c8,d5,d1), ::Dynamic(new _hx_Closure_8()));
HXLINE( 161)		this->set(HX_("addBehindDad",4c,8f,37,c9), ::Dynamic(new _hx_Closure_9()));
HXLINE( 162)		this->set(HX_("addBehindBF",3f,c4,d5,d1), ::Dynamic(new _hx_Closure_10()));
HXLINE( 163)		this->set(HX_("insert",39,43,dd,9d), ::Dynamic(new _hx_Closure_11()));
HXLINE( 164)		this->set(HX_("remove",44,9c,88,04), ::Dynamic(new _hx_Closure_12()));
            	}


 ::Dynamic HScript_obj::executeCode(::String funcToRun,::cpp::VirtualArray funcArgs){
            	HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_169_executeCode)
HXLINE( 170)		if (::hx::IsNull( funcToRun )) {
HXLINE( 170)			return null();
            		}
HXLINE( 172)		if (!(this->exists(funcToRun))) {
HXLINE( 174)			::psychlua::FunkinLua_obj::luaTrace((this->origin + (HX_(" - No HScript function named: ",f0,de,a1,db) + funcToRun)),false,false,-65536);
HXLINE( 175)			return null();
            		}
HXLINE( 178)		 ::Dynamic callValue = this->call(funcToRun,funcArgs,null());
HXLINE( 179)		if (!(( (bool)(callValue->__Field(HX_("succeeded",61,56,29,fb),::hx::paccDynamic)) ))) {
HXLINE( 181)			 ::haxe::Exception e = Dynamic(  ::Dynamic(callValue->__Field(HX_("exceptions",44,35,34,1d),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::haxe::Exception >();
HXLINE( 182)			if (::hx::IsNotNull( e )) {
HXLINE( 184)				::String msg = e->toString();
HXLINE( 185)				if (::hx::IsNotNull( this->parentLua )) {
HXLINE( 185)					msg = ((((this->origin + HX_(":",3a,00,00,00)) + this->parentLua->lastCalledFunction) + HX_(" - ",73,6f,18,00)) + msg);
            				}
            				else {
HXLINE( 186)					msg = (((HX_("",00,00,00,00) + this->origin) + HX_(" - ",73,6f,18,00)) + msg);
            				}
HXLINE( 187)				::psychlua::FunkinLua_obj::luaTrace(msg,::hx::IsNull( this->parentLua ),false,-65536);
            			}
HXLINE( 189)			return null();
            		}
HXLINE( 191)		return callValue;
            	}


HX_DEFINE_DYNAMIC_FUNC2(HScript_obj,executeCode,return )

 ::Dynamic HScript_obj::executeFunction(::String funcToRun,::cpp::VirtualArray funcArgs){
            	HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_195_executeFunction)
HXLINE( 196)		if (::hx::IsNull( funcToRun )) {
HXLINE( 197)			return null();
            		}
HXLINE( 199)		return this->call(funcToRun,funcArgs,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(HScript_obj,executeFunction,return )

void HScript_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_287_destroy)
HXLINE( 288)		this->origin = null();
HXLINE( 289)		this->parentLua = null();
HXLINE( 291)		this->super::destroy();
            	}


void HScript_obj::initHaxeModule( ::psychlua::FunkinLua parent){
            	HX_GC_STACKFRAME(&_hx_pos_22ae5a7ed167d885_17_initHaxeModule)
HXDLIN(  17)		if (::hx::IsNull( parent->hscript )) {
HXLINE(  19)			::haxe::Log_obj::trace((HX_("initializing haxe interp for: ",8a,18,b6,6f) + parent->scriptName),::hx::SourceInfo(HX_("source/psychlua/HScript.hx",69,3a,e1,52),19,HX_("psychlua.HScript",62,b6,a1,67),HX_("initHaxeModule",a2,30,89,5d)));
HXLINE(  20)			parent->hscript =  ::psychlua::HScript_obj::__alloc( HX_CTX ,parent,null());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HScript_obj,initHaxeModule,(void))

void HScript_obj::initHaxeModuleCode( ::psychlua::FunkinLua parent,::String code){
            	HX_GC_STACKFRAME(&_hx_pos_22ae5a7ed167d885_28_initHaxeModuleCode)
HXDLIN(  28)		if (::hx::IsNull( parent->hscript )) {
HXLINE(  30)			::haxe::Log_obj::trace((HX_("initializing haxe interp for: ",8a,18,b6,6f) + parent->scriptName),::hx::SourceInfo(HX_("source/psychlua/HScript.hx",69,3a,e1,52),30,HX_("psychlua.HScript",62,b6,a1,67),HX_("initHaxeModuleCode",ef,06,69,05)));
HXLINE(  31)			parent->hscript =  ::psychlua::HScript_obj::__alloc( HX_CTX ,parent,code);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HScript_obj,initHaxeModuleCode,(void))

void HScript_obj::implement( ::psychlua::FunkinLua funk){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::psychlua::FunkinLua,funk) HXARGC(4)
            		 ::Dynamic _hx_run(::String codeToRun, ::Dynamic varsToBring,::String funcToRun,::cpp::VirtualArray funcArgs){
            			HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_205_implement)
HXLINE( 206)			 ::Dynamic retVal = null();
HXLINE( 208)			::psychlua::HScript_obj::initHaxeModuleCode(funk,codeToRun);
HXLINE( 209)			if (::hx::IsNotNull( varsToBring )) {
HXLINE( 211)				int _g = 0;
HXDLIN( 211)				::Array< ::String > _g1 = ::Reflect_obj::fields(varsToBring);
HXDLIN( 211)				while((_g < _g1->length)){
HXLINE( 211)					::String key = _g1->__get(_g);
HXDLIN( 211)					_g = (_g + 1);
HXLINE( 214)					 ::psychlua::HScript funk1 = funk->hscript;
HXDLIN( 214)					funk1->set(key,::Reflect_obj::field(varsToBring,key));
            				}
            			}
HXLINE( 217)			retVal = funk->hscript->executeCode(funcToRun,funcArgs);
HXLINE( 218)			if (::hx::IsNotNull( retVal )) {
HXLINE( 220)				if (( (bool)(retVal->__Field(HX_("succeeded",61,56,29,fb),::hx::paccDynamic)) )) {
HXLINE( 221)					bool _hx_tmp;
HXDLIN( 221)					if (::hx::IsNotNull( retVal->__Field(HX_("returnValue",a1,4c,95,3e),::hx::paccDynamic) )) {
HXLINE( 221)						_hx_tmp = ::psychlua::LuaUtils_obj::isOfTypes( ::Dynamic(retVal->__Field(HX_("returnValue",a1,4c,95,3e),::hx::paccDynamic)),::cpp::VirtualArray_obj::__new(5)->init(0,::hx::ClassOf< bool >())->init(1,::hx::ClassOf< int >())->init(2,::hx::ClassOf< ::Float >())->init(3,::hx::ClassOf< ::String >())->init(4,::hx::ArrayBase::__mClass));
            					}
            					else {
HXLINE( 221)						_hx_tmp = true;
            					}
HXDLIN( 221)					if (_hx_tmp) {
HXLINE( 221)						return  ::Dynamic(retVal->__Field(HX_("returnValue",a1,4c,95,3e),::hx::paccDynamic));
            					}
            					else {
HXLINE( 221)						return null();
            					}
            				}
HXLINE( 223)				 ::haxe::Exception e = Dynamic(  ::Dynamic(retVal->__Field(HX_("exceptions",44,35,34,1d),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::haxe::Exception >();
HXLINE( 224)				if (::hx::IsNotNull( e )) {
HXLINE( 225)					::String _hx_tmp = (((funk->hscript->origin + HX_(":",3a,00,00,00)) + funk->lastCalledFunction) + HX_(" - ",73,6f,18,00));
HXDLIN( 225)					::psychlua::FunkinLua_obj::luaTrace((_hx_tmp + ::Std_obj::string(e)),false,false,-65536);
            				}
HXLINE( 226)				return null();
            			}
            			else {
HXLINE( 228)				if (::hx::IsNotNull( funk->hscript->returnValue )) {
HXLINE( 229)					return funk->hscript->returnValue;
            				}
            			}
HXLINE( 233)			return null();
            		}
            		HX_END_LOCAL_FUNC4(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::psychlua::FunkinLua,funk) HXARGC(2)
            		 ::Dynamic _hx_run(::String funcToRun,::cpp::VirtualArray funcArgs){
            			HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_236_implement)
HXLINE( 238)			 ::Dynamic callValue = funk->hscript->executeFunction(funcToRun,funcArgs);
HXLINE( 239)			if (!(( (bool)(callValue->__Field(HX_("succeeded",61,56,29,fb),::hx::paccDynamic)) ))) {
HXLINE( 241)				 ::haxe::Exception e = Dynamic(  ::Dynamic(callValue->__Field(HX_("exceptions",44,35,34,1d),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::haxe::Exception >();
HXLINE( 242)				if (::hx::IsNotNull( e )) {
HXLINE( 243)					::String _hx_tmp = ( (::String)(((((HX_("ERROR (",b0,59,de,69) + funk->hscript->origin) + HX_(": ",a6,32,00,00)) + callValue->__Field(HX_("calledFunction",b5,00,41,03),::hx::paccDynamic)) + HX_(") - ",ea,2e,32,1b))) );
HXDLIN( 243)					::String _hx_tmp1 = e->get_message();
HXDLIN( 243)					::psychlua::FunkinLua_obj::luaTrace((_hx_tmp + _hx_tmp1.substr(0,e->get_message().indexOf(HX_("\n",0a,00,00,00),null()))),false,false,-65536);
            				}
HXLINE( 244)				return null();
            			}
            			else {
HXLINE( 247)				return  ::Dynamic(callValue->__Field(HX_("returnValue",a1,4c,95,3e),::hx::paccDynamic));
            			}
HXLINE( 239)			return null();
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::psychlua::FunkinLua,funk) HXARGC(2)
            		void _hx_run(::String libName,::String __o_libPackage){
            		::String libPackage = __o_libPackage;
            		if (::hx::IsNull(__o_libPackage)) libPackage = HX_("",00,00,00,00);
            			HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_253_implement)
HXLINE( 254)			::String str = HX_("",00,00,00,00);
HXLINE( 255)			if ((libPackage.length > 0)) {
HXLINE( 256)				str = (libPackage + HX_(".",2e,00,00,00));
            			}
            			else {
HXLINE( 257)				if (::hx::IsNull( libName )) {
HXLINE( 258)					libName = HX_("",00,00,00,00);
            				}
            			}
HXLINE( 260)			::hx::Class c = ::Type_obj::resolveClass((str + libName));
HXLINE( 263)			if (::hx::IsNotNull( c )) {
HXLINE( 264)				::tea::SScript_obj::globalVariables->set(libName,( ( ::Dynamic)(c) ));
            			}
HXLINE( 268)			if (::hx::IsNotNull( funk->hscript )) {
HXLINE( 270)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 271)					if (::hx::IsNotNull( c )) {
HXLINE( 272)						funk->hscript->set(libName,c);
            					}
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 274)						{
HXLINE( 274)							null();
            						}
HXDLIN( 274)						 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 275)						{
HXLINE( 275)							::String _hx_tmp = (((funk->hscript->origin + HX_(":",3a,00,00,00)) + funk->lastCalledFunction) + HX_(" - ",73,6f,18,00));
HXDLIN( 275)							::psychlua::FunkinLua_obj::luaTrace((_hx_tmp + ::Std_obj::string(e)),false,false,-65536);
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_203_implement)
HXLINE( 205)		funk->addLocalCallback(HX_("runHaxeCode",de,82,8b,0f), ::Dynamic(new _hx_Closure_0(funk)));
HXLINE( 236)		funk->addLocalCallback(HX_("runHaxeFunction",49,a9,42,e6), ::Dynamic(new _hx_Closure_1(funk)));
HXLINE( 253)		funk->addLocalCallback(HX_("addHaxeLibrary",d4,92,3b,4b), ::Dynamic(new _hx_Closure_2(funk)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HScript_obj,implement,(void))


::hx::ObjectPtr< HScript_obj > HScript_obj::__new( ::psychlua::FunkinLua parent,::String file) {
	::hx::ObjectPtr< HScript_obj > __this = new HScript_obj();
	__this->__construct(parent,file);
	return __this;
}

::hx::ObjectPtr< HScript_obj > HScript_obj::__alloc(::hx::Ctx *_hx_ctx, ::psychlua::FunkinLua parent,::String file) {
	HScript_obj *__this = (HScript_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HScript_obj), true, "psychlua.HScript"));
	*(void **)__this = HScript_obj::_hx_vtable;
	__this->__construct(parent,file);
	return __this;
}

HScript_obj::HScript_obj()
{
}

void HScript_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HScript);
	HX_MARK_MEMBER_NAME(parentLua,"parentLua");
	HX_MARK_MEMBER_NAME(origin,"origin");
	 ::tea::SScript_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HScript_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parentLua,"parentLua");
	HX_VISIT_MEMBER_NAME(origin,"origin");
	 ::tea::SScript_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HScript_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { return ::hx::Val( origin ); }
		if (HX_FIELD_EQ(inName,"preset") ) { return ::hx::Val( preset_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"parentLua") ) { return ::hx::Val( parentLua ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"executeCode") ) { return ::hx::Val( executeCode_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"executeFunction") ) { return ::hx::Val( executeFunction_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool HScript_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"implement") ) { outValue = implement_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initHaxeModule") ) { outValue = initHaxeModule_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"initHaxeModuleCode") ) { outValue = initHaxeModuleCode_dyn(); return true; }
	}
	return false;
}

::hx::Val HScript_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"parentLua") ) { parentLua=inValue.Cast<  ::psychlua::FunkinLua >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HScript_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("parentLua",ae,22,50,7f));
	outFields->push(HX_("origin",e6,19,01,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HScript_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::psychlua::FunkinLua */ ,(int)offsetof(HScript_obj,parentLua),HX_("parentLua",ae,22,50,7f)},
	{::hx::fsString,(int)offsetof(HScript_obj,origin),HX_("origin",e6,19,01,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HScript_obj_sStaticStorageInfo = 0;
#endif

static ::String HScript_obj_sMemberFields[] = {
	HX_("parentLua",ae,22,50,7f),
	HX_("origin",e6,19,01,4b),
	HX_("preset",5f,b3,c0,ae),
	HX_("executeCode",02,a6,34,09),
	HX_("executeFunction",6d,2e,26,29),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

::hx::Class HScript_obj::__mClass;

static ::String HScript_obj_sStaticFields[] = {
	HX_("initHaxeModule",a2,30,89,5d),
	HX_("initHaxeModuleCode",ef,06,69,05),
	HX_("implement",a3,71,3f,af),
	::String(null())
};

void HScript_obj::__register()
{
	HScript_obj _hx_dummy;
	HScript_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("psychlua.HScript",62,b6,a1,67);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HScript_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HScript_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HScript_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HScript_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HScript_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HScript_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace psychlua
