#include <hxcpp.h>

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
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
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
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
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_psychlua_FunkinLua
#include <psychlua/FunkinLua.h>
#endif
#ifndef INCLUDED_psychlua_LuaUtils
#include <psychlua/LuaUtils.h>
#endif
#ifndef INCLUDED_psychlua_TextFunctions
#include <psychlua/TextFunctions.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_substates_GameOverSubstate
#include <substates/GameOverSubstate.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d1b80dbee11791d6_6_implement,"psychlua.TextFunctions","implement",0x3d7094f2,"psychlua.TextFunctions.implement","psychlua/TextFunctions.hx",6,0x166335e2)
HX_LOCAL_STACK_FRAME(_hx_pos_d1b80dbee11791d6_9_implement,"psychlua.TextFunctions","implement",0x3d7094f2,"psychlua.TextFunctions.implement","psychlua/TextFunctions.hx",9,0x166335e2)
HX_LOCAL_STACK_FRAME(_hx_pos_d1b80dbee11791d6_20_implement,"psychlua.TextFunctions","implement",0x3d7094f2,"psychlua.TextFunctions.implement","psychlua/TextFunctions.hx",20,0x166335e2)
HX_LOCAL_STACK_FRAME(_hx_pos_d1b80dbee11791d6_30_implement,"psychlua.TextFunctions","implement",0x3d7094f2,"psychlua.TextFunctions.implement","psychlua/TextFunctions.hx",30,0x166335e2)
HX_LOCAL_STACK_FRAME(_hx_pos_d1b80dbee11791d6_40_implement,"psychlua.TextFunctions","implement",0x3d7094f2,"psychlua.TextFunctions.implement","psychlua/TextFunctions.hx",40,0x166335e2)
HX_LOCAL_STACK_FRAME(_hx_pos_d1b80dbee11791d6_50_implement,"psychlua.TextFunctions","implement",0x3d7094f2,"psychlua.TextFunctions.implement","psychlua/TextFunctions.hx",50,0x166335e2)
HX_LOCAL_STACK_FRAME(_hx_pos_d1b80dbee11791d6_67_implement,"psychlua.TextFunctions","implement",0x3d7094f2,"psychlua.TextFunctions.implement","psychlua/TextFunctions.hx",67,0x166335e2)
HX_LOCAL_STACK_FRAME(_hx_pos_d1b80dbee11791d6_77_implement,"psychlua.TextFunctions","implement",0x3d7094f2,"psychlua.TextFunctions.implement","psychlua/TextFunctions.hx",77,0x166335e2)
HX_LOCAL_STACK_FRAME(_hx_pos_d1b80dbee11791d6_87_implement,"psychlua.TextFunctions","implement",0x3d7094f2,"psychlua.TextFunctions.implement","psychlua/TextFunctions.hx",87,0x166335e2)
HX_LOCAL_STACK_FRAME(_hx_pos_d1b80dbee11791d6_97_implement,"psychlua.TextFunctions","implement",0x3d7094f2,"psychlua.TextFunctions.implement","psychlua/TextFunctions.hx",97,0x166335e2)
HX_LOCAL_STACK_FRAME(_hx_pos_d1b80dbee11791d6_115_implement,"psychlua.TextFunctions","implement",0x3d7094f2,"psychlua.TextFunctions.implement","psychlua/TextFunctions.hx",115,0x166335e2)
HX_LOCAL_STACK_FRAME(_hx_pos_d1b80dbee11791d6_124_implement,"psychlua.TextFunctions","implement",0x3d7094f2,"psychlua.TextFunctions.implement","psychlua/TextFunctions.hx",124,0x166335e2)
HX_LOCAL_STACK_FRAME(_hx_pos_d1b80dbee11791d6_133_implement,"psychlua.TextFunctions","implement",0x3d7094f2,"psychlua.TextFunctions.implement","psychlua/TextFunctions.hx",133,0x166335e2)
HX_LOCAL_STACK_FRAME(_hx_pos_d1b80dbee11791d6_142_implement,"psychlua.TextFunctions","implement",0x3d7094f2,"psychlua.TextFunctions.implement","psychlua/TextFunctions.hx",142,0x166335e2)
HX_LOCAL_STACK_FRAME(_hx_pos_d1b80dbee11791d6_153_implement,"psychlua.TextFunctions","implement",0x3d7094f2,"psychlua.TextFunctions.implement","psychlua/TextFunctions.hx",153,0x166335e2)
HX_LOCAL_STACK_FRAME(_hx_pos_d1b80dbee11791d6_158_implement,"psychlua.TextFunctions","implement",0x3d7094f2,"psychlua.TextFunctions.implement","psychlua/TextFunctions.hx",158,0x166335e2)
namespace psychlua{

void TextFunctions_obj::__construct() { }

Dynamic TextFunctions_obj::__CreateEmpty() { return new TextFunctions_obj; }

void *TextFunctions_obj::_hx_vtable = 0;

Dynamic TextFunctions_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextFunctions_obj > _hx_result = new TextFunctions_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextFunctions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0d8cdead;
}

void TextFunctions_obj::implement( ::psychlua::FunkinLua funk){
            	HX_STACKFRAME(&_hx_pos_d1b80dbee11791d6_6_implement)
HXLINE(   7)		 cpp::Reference<lua_State> lua = funk->lua;
HXLINE(   8)		 ::states::PlayState game = ::states::PlayState_obj::instance;
HXLINE(   9)		{
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::PlayState,game) HXARGC(5)
            			void _hx_run(::String tag,::String text,int width,Float x,Float y){
            				HX_GC_STACKFRAME(&_hx_pos_d1b80dbee11791d6_9_implement)
HXLINE(  10)				tag = ::StringTools_obj::replace(tag,HX_(".",2e,00,00,00),HX_("",00,00,00,00));
HXLINE(  11)				::psychlua::LuaUtils_obj::resetTextTag(tag);
HXLINE(  12)				 ::flixel::text::FlxText leText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,x,y,width,text,16,null());
HXLINE(  13)				::String file = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  13)				::String _hx_tmp;
HXDLIN(  13)				if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  13)					_hx_tmp = file;
            				}
            				else {
HXLINE(  13)					_hx_tmp = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            				}
HXDLIN(  13)				leText->setFormat(_hx_tmp,16,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  14)				leText->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,game->camHUD));
HXLINE(  15)				{
HXLINE(  15)					 ::flixel::math::FlxBasePoint this1 = leText->scrollFactor;
HXDLIN(  15)					this1->set_x(( (Float)(0) ));
HXDLIN(  15)					this1->set_y(( (Float)(0) ));
            				}
HXLINE(  16)				leText->set_borderSize(( (Float)(2) ));
HXLINE(  17)				game->modchartTexts->set(tag,leText);
            			}
            			HX_END_LOCAL_FUNC5((void))

HXLINE(   9)			::llua::Lua_helper_obj::callbacks->set(HX_("makeLuaText",37,b6,8a,a8), ::Dynamic(new _hx_Closure_0(game)));
HXDLIN(   9)			linc::callbacks::add_callback_function(lua,HX_("makeLuaText",37,b6,8a,a8));
            		}
HXLINE(  20)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(2)
            			bool _hx_run(::String tag,::String text){
            				HX_STACKFRAME(&_hx_pos_d1b80dbee11791d6_20_implement)
HXLINE(  21)				 ::flixel::text::FlxText obj;
HXDLIN(  21)				if (::states::PlayState_obj::instance->modchartTexts->exists(tag)) {
HXLINE(  21)					obj = ( ( ::flixel::text::FlxText)(::states::PlayState_obj::instance->modchartTexts->get(tag)) );
            				}
            				else {
HXLINE(  21)					obj = ( ( ::flixel::text::FlxText)(::Reflect_obj::getProperty(::states::PlayState_obj::instance,tag)) );
            				}
HXLINE(  22)				if (::hx::IsNotNull( obj )) {
HXLINE(  24)					obj->set_text(text);
HXLINE(  25)					return true;
            				}
HXLINE(  27)				::psychlua::FunkinLua_obj::luaTrace(((HX_("setTextString: Object ",db,c2,bd,c4) + tag) + HX_(" doesn't exist!",c8,8e,40,5e)),false,false,-65536);
HXLINE(  28)				return false;
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE(  20)			::llua::Lua_helper_obj::callbacks->set(HX_("setTextString",a0,e7,98,e9), ::Dynamic(new _hx_Closure_1()));
HXDLIN(  20)			linc::callbacks::add_callback_function(lua,HX_("setTextString",a0,e7,98,e9));
            		}
HXLINE(  30)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(2)
            			bool _hx_run(::String tag,int size){
            				HX_STACKFRAME(&_hx_pos_d1b80dbee11791d6_30_implement)
HXLINE(  31)				 ::flixel::text::FlxText obj;
HXDLIN(  31)				if (::states::PlayState_obj::instance->modchartTexts->exists(tag)) {
HXLINE(  31)					obj = ( ( ::flixel::text::FlxText)(::states::PlayState_obj::instance->modchartTexts->get(tag)) );
            				}
            				else {
HXLINE(  31)					obj = ( ( ::flixel::text::FlxText)(::Reflect_obj::getProperty(::states::PlayState_obj::instance,tag)) );
            				}
HXLINE(  32)				if (::hx::IsNotNull( obj )) {
HXLINE(  34)					obj->set_size(size);
HXLINE(  35)					return true;
            				}
HXLINE(  37)				::psychlua::FunkinLua_obj::luaTrace(((HX_("setTextSize: Object ",ab,a6,12,0a) + tag) + HX_(" doesn't exist!",c8,8e,40,5e)),false,false,-65536);
HXLINE(  38)				return false;
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE(  30)			::llua::Lua_helper_obj::callbacks->set(HX_("setTextSize",d0,bd,af,7f), ::Dynamic(new _hx_Closure_2()));
HXDLIN(  30)			linc::callbacks::add_callback_function(lua,HX_("setTextSize",d0,bd,af,7f));
            		}
HXLINE(  40)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_3) HXARGC(2)
            			bool _hx_run(::String tag,Float width){
            				HX_STACKFRAME(&_hx_pos_d1b80dbee11791d6_40_implement)
HXLINE(  41)				 ::flixel::text::FlxText obj;
HXDLIN(  41)				if (::states::PlayState_obj::instance->modchartTexts->exists(tag)) {
HXLINE(  41)					obj = ( ( ::flixel::text::FlxText)(::states::PlayState_obj::instance->modchartTexts->get(tag)) );
            				}
            				else {
HXLINE(  41)					obj = ( ( ::flixel::text::FlxText)(::Reflect_obj::getProperty(::states::PlayState_obj::instance,tag)) );
            				}
HXLINE(  42)				if (::hx::IsNotNull( obj )) {
HXLINE(  44)					obj->set_fieldWidth(width);
HXLINE(  45)					return true;
            				}
HXLINE(  47)				::psychlua::FunkinLua_obj::luaTrace(((HX_("setTextWidth: Object ",84,9d,80,ca) + tag) + HX_(" doesn't exist!",c8,8e,40,5e)),false,false,-65536);
HXLINE(  48)				return false;
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE(  40)			::llua::Lua_helper_obj::callbacks->set(HX_("setTextWidth",17,06,a0,87), ::Dynamic(new _hx_Closure_3()));
HXDLIN(  40)			linc::callbacks::add_callback_function(lua,HX_("setTextWidth",17,06,a0,87));
            		}
HXLINE(  50)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_4) HXARGC(3)
            			bool _hx_run(::String tag,int size,::String color){
            				HX_GC_STACKFRAME(&_hx_pos_d1b80dbee11791d6_50_implement)
HXLINE(  51)				 ::flixel::text::FlxText obj;
HXDLIN(  51)				if (::states::PlayState_obj::instance->modchartTexts->exists(tag)) {
HXLINE(  51)					obj = ( ( ::flixel::text::FlxText)(::states::PlayState_obj::instance->modchartTexts->get(tag)) );
            				}
            				else {
HXLINE(  51)					obj = ( ( ::flixel::text::FlxText)(::Reflect_obj::getProperty(::states::PlayState_obj::instance,tag)) );
            				}
HXLINE(  52)				if (::hx::IsNotNull( obj )) {
HXLINE(  54)					if ((size > 0)) {
HXLINE(  56)						obj->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXLINE(  57)						obj->set_borderSize(( (Float)(size) ));
            					}
            					else {
HXLINE(  60)						obj->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::NONE_dyn());
            					}
HXLINE(  61)					 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[\t\n\r]",ac,57,71,6b),HX_("",00,00,00,00));
HXDLIN(  61)					::String color1 = ::StringTools_obj::trim(hideChars->split(color)->join(HX_("",00,00,00,00)));
HXDLIN(  61)					if (::StringTools_obj::startsWith(color1,HX_("0x",48,2a,00,00))) {
HXLINE(  61)						color1 = color1.substring((color1.length - 6),null());
            					}
HXDLIN(  61)					 ::Dynamic colorNum = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(color1);
HXDLIN(  61)					if (::hx::IsNull( colorNum )) {
HXLINE(  61)						colorNum = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString((HX_("#",23,00,00,00) + color1));
            					}
HXDLIN(  61)					int _hx_tmp;
HXDLIN(  61)					if (::hx::IsNotNull( colorNum )) {
HXLINE(  61)						_hx_tmp = ( (int)(colorNum) );
            					}
            					else {
HXLINE(  61)						_hx_tmp = -1;
            					}
HXDLIN(  61)					obj->set_borderColor(_hx_tmp);
HXLINE(  62)					return true;
            				}
HXLINE(  64)				::psychlua::FunkinLua_obj::luaTrace(((HX_("setTextBorder: Object ",60,c3,49,85) + tag) + HX_(" doesn't exist!",c8,8e,40,5e)),false,false,-65536);
HXLINE(  65)				return false;
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE(  50)			::llua::Lua_helper_obj::callbacks->set(HX_("setTextBorder",bb,0b,83,3c), ::Dynamic(new _hx_Closure_4()));
HXDLIN(  50)			linc::callbacks::add_callback_function(lua,HX_("setTextBorder",bb,0b,83,3c));
            		}
HXLINE(  67)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_5) HXARGC(2)
            			bool _hx_run(::String tag,::String color){
            				HX_GC_STACKFRAME(&_hx_pos_d1b80dbee11791d6_67_implement)
HXLINE(  68)				 ::flixel::text::FlxText obj;
HXDLIN(  68)				if (::states::PlayState_obj::instance->modchartTexts->exists(tag)) {
HXLINE(  68)					obj = ( ( ::flixel::text::FlxText)(::states::PlayState_obj::instance->modchartTexts->get(tag)) );
            				}
            				else {
HXLINE(  68)					obj = ( ( ::flixel::text::FlxText)(::Reflect_obj::getProperty(::states::PlayState_obj::instance,tag)) );
            				}
HXLINE(  69)				if (::hx::IsNotNull( obj )) {
HXLINE(  71)					 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[\t\n\r]",ac,57,71,6b),HX_("",00,00,00,00));
HXDLIN(  71)					::String color1 = ::StringTools_obj::trim(hideChars->split(color)->join(HX_("",00,00,00,00)));
HXDLIN(  71)					if (::StringTools_obj::startsWith(color1,HX_("0x",48,2a,00,00))) {
HXLINE(  71)						color1 = color1.substring((color1.length - 6),null());
            					}
HXDLIN(  71)					 ::Dynamic colorNum = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(color1);
HXDLIN(  71)					if (::hx::IsNull( colorNum )) {
HXLINE(  71)						colorNum = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString((HX_("#",23,00,00,00) + color1));
            					}
HXDLIN(  71)					int _hx_tmp;
HXDLIN(  71)					if (::hx::IsNotNull( colorNum )) {
HXLINE(  71)						_hx_tmp = ( (int)(colorNum) );
            					}
            					else {
HXLINE(  71)						_hx_tmp = -1;
            					}
HXDLIN(  71)					obj->set_color(_hx_tmp);
HXLINE(  72)					return true;
            				}
HXLINE(  74)				::psychlua::FunkinLua_obj::luaTrace(((HX_("setTextColor: Object ",87,0e,05,44) + tag) + HX_(" doesn't exist!",c8,8e,40,5e)),false,false,-65536);
HXLINE(  75)				return false;
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE(  67)			::llua::Lua_helper_obj::callbacks->set(HX_("setTextColor",74,c1,99,07), ::Dynamic(new _hx_Closure_5()));
HXDLIN(  67)			linc::callbacks::add_callback_function(lua,HX_("setTextColor",74,c1,99,07));
            		}
HXLINE(  77)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_6) HXARGC(2)
            			bool _hx_run(::String tag,::String newFont){
            				HX_STACKFRAME(&_hx_pos_d1b80dbee11791d6_77_implement)
HXLINE(  78)				 ::flixel::text::FlxText obj;
HXDLIN(  78)				if (::states::PlayState_obj::instance->modchartTexts->exists(tag)) {
HXLINE(  78)					obj = ( ( ::flixel::text::FlxText)(::states::PlayState_obj::instance->modchartTexts->get(tag)) );
            				}
            				else {
HXLINE(  78)					obj = ( ( ::flixel::text::FlxText)(::Reflect_obj::getProperty(::states::PlayState_obj::instance,tag)) );
            				}
HXLINE(  79)				if (::hx::IsNotNull( obj )) {
HXLINE(  81)					::String file = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + newFont));
HXDLIN(  81)					::String _hx_tmp;
HXDLIN(  81)					if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  81)						_hx_tmp = file;
            					}
            					else {
HXLINE(  81)						_hx_tmp = (HX_("assets/fonts/",37,ff,a5,9c) + newFont);
            					}
HXDLIN(  81)					obj->set_font(_hx_tmp);
HXLINE(  82)					return true;
            				}
HXLINE(  84)				::psychlua::FunkinLua_obj::luaTrace(((HX_("setTextFont: Object ",dd,d7,b8,43) + tag) + HX_(" doesn't exist!",c8,8e,40,5e)),false,false,-65536);
HXLINE(  85)				return false;
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE(  77)			::llua::Lua_helper_obj::callbacks->set(HX_("setTextFont",de,7a,1c,77), ::Dynamic(new _hx_Closure_6()));
HXDLIN(  77)			linc::callbacks::add_callback_function(lua,HX_("setTextFont",de,7a,1c,77));
            		}
HXLINE(  87)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_7) HXARGC(2)
            			bool _hx_run(::String tag,bool italic){
            				HX_STACKFRAME(&_hx_pos_d1b80dbee11791d6_87_implement)
HXLINE(  88)				 ::flixel::text::FlxText obj;
HXDLIN(  88)				if (::states::PlayState_obj::instance->modchartTexts->exists(tag)) {
HXLINE(  88)					obj = ( ( ::flixel::text::FlxText)(::states::PlayState_obj::instance->modchartTexts->get(tag)) );
            				}
            				else {
HXLINE(  88)					obj = ( ( ::flixel::text::FlxText)(::Reflect_obj::getProperty(::states::PlayState_obj::instance,tag)) );
            				}
HXLINE(  89)				if (::hx::IsNotNull( obj )) {
HXLINE(  91)					obj->set_italic(italic);
HXLINE(  92)					return true;
            				}
HXLINE(  94)				::psychlua::FunkinLua_obj::luaTrace(((HX_("setTextItalic: Object ",dc,80,dd,90) + tag) + HX_(" doesn't exist!",c8,8e,40,5e)),false,false,-65536);
HXLINE(  95)				return false;
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE(  87)			::llua::Lua_helper_obj::callbacks->set(HX_("setTextItalic",bf,ed,cc,de), ::Dynamic(new _hx_Closure_7()));
HXDLIN(  87)			linc::callbacks::add_callback_function(lua,HX_("setTextItalic",bf,ed,cc,de));
            		}
HXLINE(  97)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_8) HXARGC(2)
            			bool _hx_run(::String tag,::String __o_alignment){
            		::String alignment = __o_alignment;
            		if (::hx::IsNull(__o_alignment)) alignment = HX_("left",07,08,b0,47);
            				HX_STACKFRAME(&_hx_pos_d1b80dbee11791d6_97_implement)
HXLINE(  98)				 ::flixel::text::FlxText obj;
HXDLIN(  98)				if (::states::PlayState_obj::instance->modchartTexts->exists(tag)) {
HXLINE(  98)					obj = ( ( ::flixel::text::FlxText)(::states::PlayState_obj::instance->modchartTexts->get(tag)) );
            				}
            				else {
HXLINE(  98)					obj = ( ( ::flixel::text::FlxText)(::Reflect_obj::getProperty(::states::PlayState_obj::instance,tag)) );
            				}
HXLINE(  99)				if (::hx::IsNotNull( obj )) {
HXLINE( 101)					obj->set_alignment(HX_("left",07,08,b0,47));
HXLINE( 102)					::String _hx_switch_0 = ::StringTools_obj::trim(alignment).toLowerCase();
            					if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 107)						obj->set_alignment(HX_("center",d5,25,db,05));
HXDLIN( 107)						goto _hx_goto_0;
            					}
            					if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 105)						obj->set_alignment(HX_("right",dc,0b,64,e9));
HXDLIN( 105)						goto _hx_goto_0;
            					}
            					_hx_goto_0:;
HXLINE( 109)					return true;
            				}
HXLINE( 111)				::psychlua::FunkinLua_obj::luaTrace(((HX_("setTextAlignment: Object ",87,00,d2,fe) + tag) + HX_(" doesn't exist!",c8,8e,40,5e)),false,false,-65536);
HXLINE( 112)				return false;
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE(  97)			::llua::Lua_helper_obj::callbacks->set(HX_("setTextAlignment",74,0f,33,62), ::Dynamic(new _hx_Closure_8()));
HXDLIN(  97)			linc::callbacks::add_callback_function(lua,HX_("setTextAlignment",74,0f,33,62));
            		}
HXLINE( 115)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_9) HXARGC(1)
            			::String _hx_run(::String tag){
            				HX_STACKFRAME(&_hx_pos_d1b80dbee11791d6_115_implement)
HXLINE( 116)				 ::flixel::text::FlxText obj;
HXDLIN( 116)				if (::states::PlayState_obj::instance->modchartTexts->exists(tag)) {
HXLINE( 116)					obj = ( ( ::flixel::text::FlxText)(::states::PlayState_obj::instance->modchartTexts->get(tag)) );
            				}
            				else {
HXLINE( 116)					obj = ( ( ::flixel::text::FlxText)(::Reflect_obj::getProperty(::states::PlayState_obj::instance,tag)) );
            				}
HXLINE( 117)				bool _hx_tmp;
HXDLIN( 117)				if (::hx::IsNotNull( obj )) {
HXLINE( 117)					_hx_tmp = ::hx::IsNotNull( obj->text );
            				}
            				else {
HXLINE( 117)					_hx_tmp = false;
            				}
HXDLIN( 117)				if (_hx_tmp) {
HXLINE( 119)					return obj->text;
            				}
HXLINE( 121)				::psychlua::FunkinLua_obj::luaTrace(((HX_("getTextString: Object ",67,46,12,91) + tag) + HX_(" doesn't exist!",c8,8e,40,5e)),false,false,-65536);
HXLINE( 122)				return null();
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE( 115)			::llua::Lua_helper_obj::callbacks->set(HX_("getTextString",94,05,93,a4), ::Dynamic(new _hx_Closure_9()));
HXDLIN( 115)			linc::callbacks::add_callback_function(lua,HX_("getTextString",94,05,93,a4));
            		}
HXLINE( 124)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_10) HXARGC(1)
            			int _hx_run(::String tag){
            				HX_STACKFRAME(&_hx_pos_d1b80dbee11791d6_124_implement)
HXLINE( 125)				 ::flixel::text::FlxText obj;
HXDLIN( 125)				if (::states::PlayState_obj::instance->modchartTexts->exists(tag)) {
HXLINE( 125)					obj = ( ( ::flixel::text::FlxText)(::states::PlayState_obj::instance->modchartTexts->get(tag)) );
            				}
            				else {
HXLINE( 125)					obj = ( ( ::flixel::text::FlxText)(::Reflect_obj::getProperty(::states::PlayState_obj::instance,tag)) );
            				}
HXLINE( 126)				if (::hx::IsNotNull( obj )) {
HXLINE( 128)					return ::Std_obj::_hx_int(( (Float)(obj->_defaultFormat->size) ));
            				}
HXLINE( 130)				::psychlua::FunkinLua_obj::luaTrace(((HX_("getTextSize: Object ",37,ef,5a,3d) + tag) + HX_(" doesn't exist!",c8,8e,40,5e)),false,false,-65536);
HXLINE( 131)				return -1;
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE( 124)			::llua::Lua_helper_obj::callbacks->set(HX_("getTextSize",c4,b6,42,75), ::Dynamic(new _hx_Closure_10()));
HXDLIN( 124)			linc::callbacks::add_callback_function(lua,HX_("getTextSize",c4,b6,42,75));
            		}
HXLINE( 133)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_11) HXARGC(1)
            			::String _hx_run(::String tag){
            				HX_STACKFRAME(&_hx_pos_d1b80dbee11791d6_133_implement)
HXLINE( 134)				 ::flixel::text::FlxText obj;
HXDLIN( 134)				if (::states::PlayState_obj::instance->modchartTexts->exists(tag)) {
HXLINE( 134)					obj = ( ( ::flixel::text::FlxText)(::states::PlayState_obj::instance->modchartTexts->get(tag)) );
            				}
            				else {
HXLINE( 134)					obj = ( ( ::flixel::text::FlxText)(::Reflect_obj::getProperty(::states::PlayState_obj::instance,tag)) );
            				}
HXLINE( 135)				if (::hx::IsNotNull( obj )) {
HXLINE( 137)					return obj->_font;
            				}
HXLINE( 139)				::psychlua::FunkinLua_obj::luaTrace(((HX_("getTextFont: Object ",69,20,01,77) + tag) + HX_(" doesn't exist!",c8,8e,40,5e)),false,false,-65536);
HXLINE( 140)				return null();
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE( 133)			::llua::Lua_helper_obj::callbacks->set(HX_("getTextFont",d2,73,af,6c), ::Dynamic(new _hx_Closure_11()));
HXDLIN( 133)			linc::callbacks::add_callback_function(lua,HX_("getTextFont",d2,73,af,6c));
            		}
HXLINE( 142)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_12) HXARGC(1)
            			Float _hx_run(::String tag){
            				HX_STACKFRAME(&_hx_pos_d1b80dbee11791d6_142_implement)
HXLINE( 143)				 ::flixel::text::FlxText obj;
HXDLIN( 143)				if (::states::PlayState_obj::instance->modchartTexts->exists(tag)) {
HXLINE( 143)					obj = ( ( ::flixel::text::FlxText)(::states::PlayState_obj::instance->modchartTexts->get(tag)) );
            				}
            				else {
HXLINE( 143)					obj = ( ( ::flixel::text::FlxText)(::Reflect_obj::getProperty(::states::PlayState_obj::instance,tag)) );
            				}
HXLINE( 144)				if (::hx::IsNotNull( obj )) {
HXLINE( 146)					return obj->get_fieldWidth();
            				}
HXLINE( 148)				::psychlua::FunkinLua_obj::luaTrace(((HX_("getTextWidth: Object ",78,cf,77,76) + tag) + HX_(" doesn't exist!",c8,8e,40,5e)),false,false,-65536);
HXLINE( 149)				return ( (Float)(0) );
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE( 142)			::llua::Lua_helper_obj::callbacks->set(HX_("getTextWidth",a3,e2,a6,72), ::Dynamic(new _hx_Closure_12()));
HXDLIN( 142)			linc::callbacks::add_callback_function(lua,HX_("getTextWidth",a3,e2,a6,72));
            		}
HXLINE( 152)		{
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_13, ::states::PlayState,game) HXARGC(1)
            			void _hx_run(::String tag){
            				HX_STACKFRAME(&_hx_pos_d1b80dbee11791d6_153_implement)
HXLINE( 153)				if (game->modchartTexts->exists(tag)) {
HXLINE( 154)					 ::flixel::text::FlxText shit = ( ( ::flixel::text::FlxText)(game->modchartTexts->get(tag)) );
HXLINE( 155)					 ::flixel::FlxState _hx_tmp;
HXDLIN( 155)					if (::states::PlayState_obj::instance->isDead) {
HXLINE( 155)						_hx_tmp = ::substates::GameOverSubstate_obj::instance;
            					}
            					else {
HXLINE( 155)						_hx_tmp = ::states::PlayState_obj::instance;
            					}
HXDLIN( 155)					_hx_tmp->add(shit).StaticCast<  ::flixel::FlxBasic >();
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 152)			::llua::Lua_helper_obj::callbacks->set(HX_("addLuaText",64,ba,0a,cc), ::Dynamic(new _hx_Closure_13(game)));
HXDLIN( 152)			linc::callbacks::add_callback_function(lua,HX_("addLuaText",64,ba,0a,cc));
            		}
HXLINE( 158)		{
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_14, ::states::PlayState,game) HXARGC(2)
            			void _hx_run(::String tag, ::Dynamic __o_destroy){
            		bool destroy = __o_destroy.Default(true);
            				HX_STACKFRAME(&_hx_pos_d1b80dbee11791d6_158_implement)
HXLINE( 159)				if (!(game->modchartTexts->exists(tag))) {
HXLINE( 160)					return;
            				}
HXLINE( 163)				 ::flixel::text::FlxText pee = ( ( ::flixel::text::FlxText)(game->modchartTexts->get(tag)) );
HXLINE( 164)				if (destroy) {
HXLINE( 165)					pee->kill();
            				}
HXLINE( 168)				 ::flixel::FlxState _hx_tmp;
HXDLIN( 168)				if (::states::PlayState_obj::instance->isDead) {
HXLINE( 168)					_hx_tmp = ::substates::GameOverSubstate_obj::instance;
            				}
            				else {
HXLINE( 168)					_hx_tmp = ::states::PlayState_obj::instance;
            				}
HXDLIN( 168)				_hx_tmp->remove(pee,true).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 169)				if (destroy) {
HXLINE( 170)					pee->destroy();
HXLINE( 171)					game->modchartTexts->remove(tag);
            				}
            			}
            			HX_END_LOCAL_FUNC2((void))

HXLINE( 158)			::llua::Lua_helper_obj::callbacks->set(HX_("removeLuaText",a1,ea,3a,3d), ::Dynamic(new _hx_Closure_14(game)));
HXDLIN( 158)			linc::callbacks::add_callback_function(lua,HX_("removeLuaText",a1,ea,3a,3d));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextFunctions_obj,implement,(void))


TextFunctions_obj::TextFunctions_obj()
{
}

bool TextFunctions_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"implement") ) { outValue = implement_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TextFunctions_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TextFunctions_obj_sStaticStorageInfo = 0;
#endif

::hx::Class TextFunctions_obj::__mClass;

static ::String TextFunctions_obj_sStaticFields[] = {
	HX_("implement",a3,71,3f,af),
	::String(null())
};

void TextFunctions_obj::__register()
{
	TextFunctions_obj _hx_dummy;
	TextFunctions_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("psychlua.TextFunctions",fd,1a,5b,6e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextFunctions_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TextFunctions_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TextFunctions_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextFunctions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextFunctions_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace psychlua
