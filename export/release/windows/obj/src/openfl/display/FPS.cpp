#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_CoolUtil
#include <backend/CoolUtil.h>
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
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_system_System
#include <openfl/system/System.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_states_MainMenuState
#include <states/MainMenuState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a7e04a5c6176ce66_28_new,"openfl.display.FPS","new",0xe5d2c231,"openfl.display.FPS.new","openfl/display/FPS.hx",28,0x584764e1)
HX_LOCAL_STACK_FRAME(_hx_pos_a7e04a5c6176ce66_89___enterFrame,"openfl.display.FPS","__enterFrame",0xcd4a4b24,"openfl.display.FPS.__enterFrame","openfl/display/FPS.hx",89,0x584764e1)
HX_LOCAL_STACK_FRAME(_hx_pos_a7e04a5c6176ce66_189_obtainMemory,"openfl.display.FPS","obtainMemory",0x06019215,"openfl.display.FPS.obtainMemory","openfl/display/FPS.hx",189,0x584764e1)
namespace openfl{
namespace display{

void FPS_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_color){
            		Float x = __o_x.Default(10);
            		Float y = __o_y.Default(10);
            		int color = __o_color.Default(0);
            	HX_STACKFRAME(&_hx_pos_a7e04a5c6176ce66_28_new)
HXLINE(  84)		this->fontSize = 14;
HXLINE(  82)		this->skippedFrames = 0;
HXLINE(  73)		int Alpha = 255;
HXDLIN(  73)		int color1 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  73)		{
HXLINE(  73)			color1 = (color1 & -16711681);
HXDLIN(  73)			color1 = (color1 | 9699328);
            		}
HXDLIN(  73)		{
HXLINE(  73)			color1 = (color1 & -65281);
HXDLIN(  73)			color1 = (color1 | 0);
            		}
HXDLIN(  73)		{
HXLINE(  73)			color1 = (color1 & -256);
HXDLIN(  73)			color1 = (color1 | 211);
            		}
HXDLIN(  73)		{
HXLINE(  73)			color1 = (color1 & 16777215);
HXDLIN(  73)			int color2;
HXDLIN(  73)			if ((Alpha > 255)) {
HXLINE(  73)				color2 = 255;
            			}
            			else {
HXLINE(  73)				if ((Alpha < 0)) {
HXLINE(  73)					color2 = 0;
            				}
            				else {
HXLINE(  73)					color2 = Alpha;
            				}
            			}
HXDLIN(  73)			color1 = (color1 | (color2 << 24));
            		}
HXLINE(  74)		int Alpha1 = 255;
HXDLIN(  74)		int color3 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  74)		{
HXLINE(  74)			color3 = (color3 & -16711681);
HXDLIN(  74)			color3 = (color3 | 4915200);
            		}
HXDLIN(  74)		{
HXLINE(  74)			color3 = (color3 & -65281);
HXDLIN(  74)			color3 = (color3 | 0);
            		}
HXDLIN(  74)		{
HXLINE(  74)			color3 = (color3 & -256);
HXDLIN(  74)			color3 = (color3 | 130);
            		}
HXDLIN(  74)		{
HXLINE(  74)			color3 = (color3 & 16777215);
HXDLIN(  74)			int color4;
HXDLIN(  74)			if ((Alpha1 > 255)) {
HXLINE(  74)				color4 = 255;
            			}
            			else {
HXLINE(  74)				if ((Alpha1 < 0)) {
HXLINE(  74)					color4 = 0;
            				}
            				else {
HXLINE(  74)					color4 = Alpha1;
            				}
            			}
HXDLIN(  74)			color3 = (color3 | (color4 << 24));
            		}
HXLINE(  75)		int Alpha2 = 255;
HXDLIN(  75)		int color5 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  75)		{
HXLINE(  75)			color5 = (color5 & -16711681);
HXDLIN(  75)			color5 = (color5 | 0);
            		}
HXDLIN(  75)		{
HXLINE(  75)			color5 = (color5 & -65281);
HXDLIN(  75)			color5 = (color5 | 0);
            		}
HXDLIN(  75)		{
HXLINE(  75)			color5 = (color5 & -256);
HXDLIN(  75)			color5 = (color5 | 255);
            		}
HXDLIN(  75)		{
HXLINE(  75)			color5 = (color5 & 16777215);
HXDLIN(  75)			int color6;
HXDLIN(  75)			if ((Alpha2 > 255)) {
HXLINE(  75)				color6 = 255;
            			}
            			else {
HXLINE(  75)				if ((Alpha2 < 0)) {
HXLINE(  75)					color6 = 0;
            				}
            				else {
HXLINE(  75)					color6 = Alpha2;
            				}
            			}
HXDLIN(  75)			color5 = (color5 | (color6 << 24));
            		}
HXLINE(  76)		int Alpha3 = 255;
HXDLIN(  76)		int color7 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  76)		{
HXLINE(  76)			color7 = (color7 & -16711681);
HXDLIN(  76)			color7 = (color7 | 0);
            		}
HXDLIN(  76)		{
HXLINE(  76)			color7 = (color7 & -65281);
HXDLIN(  76)			color7 = (color7 | 65280);
            		}
HXDLIN(  76)		{
HXLINE(  76)			color7 = (color7 & -256);
HXDLIN(  76)			color7 = (color7 | 0);
            		}
HXDLIN(  76)		{
HXLINE(  76)			color7 = (color7 & 16777215);
HXDLIN(  76)			int color8;
HXDLIN(  76)			if ((Alpha3 > 255)) {
HXLINE(  76)				color8 = 255;
            			}
            			else {
HXLINE(  76)				if ((Alpha3 < 0)) {
HXLINE(  76)					color8 = 0;
            				}
            				else {
HXLINE(  76)					color8 = Alpha3;
            				}
            			}
HXDLIN(  76)			color7 = (color7 | (color8 << 24));
            		}
HXLINE(  77)		int Alpha4 = 255;
HXDLIN(  77)		int color9 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  77)		{
HXLINE(  77)			color9 = (color9 & -16711681);
HXDLIN(  77)			color9 = (color9 | 16711680);
            		}
HXDLIN(  77)		{
HXLINE(  77)			color9 = (color9 & -65281);
HXDLIN(  77)			color9 = (color9 | 65280);
            		}
HXDLIN(  77)		{
HXLINE(  77)			color9 = (color9 & -256);
HXDLIN(  77)			color9 = (color9 | 0);
            		}
HXDLIN(  77)		{
HXLINE(  77)			color9 = (color9 & 16777215);
HXDLIN(  77)			int color10;
HXDLIN(  77)			if ((Alpha4 > 255)) {
HXLINE(  77)				color10 = 255;
            			}
            			else {
HXLINE(  77)				if ((Alpha4 < 0)) {
HXLINE(  77)					color10 = 0;
            				}
            				else {
HXLINE(  77)					color10 = Alpha4;
            				}
            			}
HXDLIN(  77)			color9 = (color9 | (color10 << 24));
            		}
HXLINE(  78)		int Alpha5 = 255;
HXDLIN(  78)		int color11 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  78)		{
HXLINE(  78)			color11 = (color11 & -16711681);
HXDLIN(  78)			color11 = (color11 | 16711680);
            		}
HXDLIN(  78)		{
HXLINE(  78)			color11 = (color11 & -65281);
HXDLIN(  78)			color11 = (color11 | 32512);
            		}
HXDLIN(  78)		{
HXLINE(  78)			color11 = (color11 & -256);
HXDLIN(  78)			color11 = (color11 | 0);
            		}
HXDLIN(  78)		{
HXLINE(  78)			color11 = (color11 & 16777215);
HXDLIN(  78)			int color12;
HXDLIN(  78)			if ((Alpha5 > 255)) {
HXLINE(  78)				color12 = 255;
            			}
            			else {
HXLINE(  78)				if ((Alpha5 < 0)) {
HXLINE(  78)					color12 = 0;
            				}
            				else {
HXLINE(  78)					color12 = Alpha5;
            				}
            			}
HXDLIN(  78)			color11 = (color11 | (color12 << 24));
            		}
HXLINE(  79)		int Alpha6 = 255;
HXDLIN(  79)		int color13 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  79)		{
HXLINE(  79)			color13 = (color13 & -16711681);
HXDLIN(  79)			color13 = (color13 | 16711680);
            		}
HXDLIN(  79)		{
HXLINE(  79)			color13 = (color13 & -65281);
HXDLIN(  79)			color13 = (color13 | 0);
            		}
HXDLIN(  79)		{
HXLINE(  79)			color13 = (color13 & -256);
HXDLIN(  79)			color13 = (color13 | 0);
            		}
HXDLIN(  79)		{
HXLINE(  79)			color13 = (color13 & 16777215);
HXDLIN(  79)			int color14;
HXDLIN(  79)			if ((Alpha6 > 255)) {
HXLINE(  79)				color14 = 255;
            			}
            			else {
HXLINE(  79)				if ((Alpha6 < 0)) {
HXLINE(  79)					color14 = 0;
            				}
            				else {
HXLINE(  79)					color14 = Alpha6;
            				}
            			}
HXDLIN(  79)			color13 = (color13 | (color14 << 24));
            		}
HXLINE(  72)		this->array = ::Array_obj< int >::__new(7)->init(0,color1)->init(1,color3)->init(2,color5)->init(3,color7)->init(4,color9)->init(5,color11)->init(6,color13);
HXLINE(  46)		super::__construct();
HXLINE(  48)		this->set_x(x);
HXLINE(  49)		this->set_y(y);
HXLINE(  51)		this->currentFPS = 0;
HXLINE(  52)		this->set_selectable(false);
HXLINE(  53)		this->mouseEnabled = false;
HXLINE(  55)		this->set_autoSize(1);
HXLINE(  56)		this->set_multiline(true);
HXLINE(  57)		this->set_text(HX_("FPS: ",af,da,2c,83));
HXLINE(  59)		this->cacheCount = 0;
HXLINE(  60)		this->currentTime = ( (Float)(0) );
HXLINE(  61)		this->times = ::Array_obj< Float >::__new(0);
            	}

Dynamic FPS_obj::__CreateEmpty() { return new FPS_obj; }

void *FPS_obj::_hx_vtable = 0;

Dynamic FPS_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FPS_obj > _hx_result = new FPS_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FPS_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x0330636f) {
			if (inClassId<=(int)0x014db497) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x014db497;
			} else {
				return inClassId==(int)0x0330636f;
			}
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		return inClassId==(int)0x6b353933 || inClassId==(int)0x7f0de750;
	}
}

void FPS_obj::_hx___enterFrame(int _tmp_deltaTime){
            	HX_GC_STACKFRAME(&_hx_pos_a7e04a5c6176ce66_89___enterFrame)
HXLINE(  90)		Float deltaTime = ( (Float)(_tmp_deltaTime) );
HXDLIN(  90)		int color = 16777215;
HXLINE(  91)		::String font = HX_("_sans",32,a0,5e,ff);
HXLINE(  93)		int currentCount = this->times->length;
HXLINE(  94)		this->currentlyFPS = ::Math_obj::round((( (Float)((currentCount + this->cacheCount)) ) / ( (Float)(2) )));
HXLINE(  95)		this->totalFPS = ::Math_obj::round((this->currentlyFPS + (( (Float)(currentCount) ) / ( (Float)(8) ))));
HXLINE(  96)		if ((this->currentlyFPS > ::backend::ClientPrefs_obj::data->framerate)) {
HXLINE(  97)			this->currentlyFPS = ::backend::ClientPrefs_obj::data->framerate;
            		}
HXLINE(  98)		if ((this->totalFPS < 10)) {
HXLINE(  99)			this->totalFPS = 0;
            		}
HXLINE( 101)		if ((currentCount != this->cacheCount)) {
HXLINE( 102)			this->set_text((HX_("FPS: ",af,da,2c,83) + this->currentlyFPS));
HXLINE( 104)			this->currentlyMemory = ( (Float)(this->obtainMemory()) );
HXLINE( 105)			if ((this->currentlyMemory >= this->maximumMemory)) {
HXLINE( 106)				this->maximumMemory = this->currentlyMemory;
            			}
            		}
HXLINE( 109)		font = HX_("Comic Sans MS Bold",f7,90,1e,7c);
HXLINE( 110)		this->fontSize = 16;
HXLINE( 112)		 ::openfl::text::TextFormat textFormat =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,font,this->fontSize,color,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 113)		textFormat->align = 3;
HXLINE( 115)		this->set_defaultTextFormat(textFormat);
HXLINE( 116)		this->setTextFormat(textFormat,null(),null());
HXLINE( 118)		 ::openfl::display::FPS _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 118)		_hx_tmp->currentTime = (_hx_tmp->currentTime + deltaTime);
HXLINE( 119)		this->times->push(this->currentTime);
HXLINE( 121)		while((this->times->__get(0) < (this->currentTime - ( (Float)(1000) )))){
HXLINE( 123)			this->times->shift();
            		}
HXLINE( 126)		if (::backend::ClientPrefs_obj::data->rainbowFPS) {
HXLINE( 127)			int _hx_tmp = this->get_textColor();
HXDLIN( 127)			if ((_hx_tmp >= this->array->length)) {
HXLINE( 128)				this->set_textColor(0);
            			}
HXLINE( 129)			this->set_textColor(::Math_obj::round(((( (Float)(this->skippedFrames) ) / (( (Float)(::backend::ClientPrefs_obj::data->framerate) ) / ( (Float)(3) ))) * ( (Float)(this->array->length) ))));
HXLINE( 130)			 ::Main _hx_tmp1 = ::hx::TCast<  ::Main >::cast(::openfl::Lib_obj::get_current()->getChildAt(0));
HXDLIN( 130)			_hx_tmp1->changeFPSColor(this->array->__get(this->get_textColor()));
HXLINE( 131)			this->set_textColor((this->get_textColor() + 1));
HXLINE( 132)			this->skippedFrames++;
HXLINE( 133)			if ((this->skippedFrames > (( (Float)(::backend::ClientPrefs_obj::data->framerate) ) / ( (Float)(3) )))) {
HXLINE( 134)				this->skippedFrames = 0;
            			}
            		}
HXLINE( 137)		int currentCount1 = this->times->length;
HXLINE( 138)		this->currentFPS = ::Math_obj::round((( (Float)((currentCount1 + this->cacheCount)) ) / ( (Float)(2) )));
HXLINE( 139)		if ((this->currentFPS > ::backend::ClientPrefs_obj::data->framerate)) {
HXLINE( 139)			this->currentFPS = ::backend::ClientPrefs_obj::data->framerate;
            		}
HXLINE( 141)		if ((currentCount1 != this->cacheCount)) {
HXLINE( 143)			this->set_text((HX_("FPS: ",af,da,2c,83) + this->currentFPS));
HXLINE( 144)			Float memoryMegas = ( (Float)(0) );
HXLINE( 147)			if (::backend::ClientPrefs_obj::data->memory) {
HXLINE( 148)				memoryMegas = ::Math_obj::abs(::flixel::math::FlxMath_obj::roundDecimal((( (Float)(::openfl::_hx_system::System_obj::get_totalMemory()) ) / ( (Float)(1000000) )),1));
HXLINE( 149)				this->set_text((this->get_text() + ((HX_("\nMemory: \n",d9,f8,81,90) + memoryMegas) + HX_(" MB",75,8b,18,00))));
            			}
HXLINE( 151)			Float memoryMegas1 = ( (Float)(0) );
HXLINE( 152)			if (::backend::ClientPrefs_obj::data->memoryGB) {
HXLINE( 153)				memoryMegas1 = ::Math_obj::abs(::flixel::math::FlxMath_obj::roundDecimal((( (Float)(::openfl::_hx_system::System_obj::get_totalMemory()) ) / ( (Float)(1000000) )),1));
HXLINE( 154)				Float memoryGB = (memoryMegas1 / ( (Float)(1000) ));
HXLINE( 155)				::String _hx_tmp = this->get_text();
HXDLIN( 155)				this->set_text((_hx_tmp + ((HX_("\nMemory: ",11,56,a9,a3) + ::flixel::math::FlxMath_obj::roundDecimal(memoryGB,2)) + HX_(" GB",3b,86,18,00))));
            			}
HXLINE( 158)			if (::backend::ClientPrefs_obj::data->totalMemory) {
HXLINE( 159)				::String _hx_tmp = this->get_text();
HXDLIN( 159)				this->set_text((_hx_tmp + (HX_("\nMemory peak: ",5a,87,16,20) + ::backend::CoolUtil_obj::formatMemory(::Std_obj::_hx_int(this->maximumMemory)))));
            			}
HXLINE( 162)			if (::backend::ClientPrefs_obj::data->engineVersion) {
HXLINE( 163)				::String _hx_tmp = this->get_text();
HXDLIN( 163)				this->set_text((_hx_tmp + ((((HX_("\nCorn engine v",e6,5f,56,1b) + ::states::MainMenuState_obj::cornEngineVersion) + HX_(" (Psych Engine v",65,ba,8d,f4)) + ::states::MainMenuState_obj::psychEngineVersion) + HX_(")",29,00,00,00))));
            			}
HXLINE( 165)			if (::backend::ClientPrefs_obj::data->totalFPS) {
HXLINE( 166)				::String _hx_tmp = this->get_text();
HXDLIN( 166)				this->set_text((_hx_tmp + (HX_("\nTotal FPS: ",69,c5,e6,55) + this->totalFPS)));
            			}
HXLINE( 169)			this->set_textColor(-1);
HXLINE( 170)			bool _hx_tmp;
HXDLIN( 170)			if (!((memoryMegas1 > 3000))) {
HXLINE( 170)				_hx_tmp = (this->currentFPS <= (( (Float)(::backend::ClientPrefs_obj::data->framerate) ) / ( (Float)(2) )));
            			}
            			else {
HXLINE( 170)				_hx_tmp = true;
            			}
HXDLIN( 170)			if (_hx_tmp) {
HXLINE( 172)				this->set_textColor(-65536);
            			}
HXLINE( 182)			this->set_text((this->get_text() + HX_("\n",0a,00,00,00)));
            		}
HXLINE( 185)		this->cacheCount = currentCount1;
            	}


 ::Dynamic FPS_obj::obtainMemory(){
            	HX_STACKFRAME(&_hx_pos_a7e04a5c6176ce66_189_obtainMemory)
HXDLIN( 189)		return ::openfl::_hx_system::System_obj::get_totalMemory();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FPS_obj,obtainMemory,return )


::hx::ObjectPtr< FPS_obj > FPS_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_color) {
	::hx::ObjectPtr< FPS_obj > __this = new FPS_obj();
	__this->__construct(__o_x,__o_y,__o_color);
	return __this;
}

::hx::ObjectPtr< FPS_obj > FPS_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_color) {
	FPS_obj *__this = (FPS_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FPS_obj), true, "openfl.display.FPS"));
	*(void **)__this = FPS_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_color);
	return __this;
}

FPS_obj::FPS_obj()
{
}

void FPS_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FPS);
	HX_MARK_MEMBER_NAME(currentFPS,"currentFPS");
	HX_MARK_MEMBER_NAME(currentlyFPS,"currentlyFPS");
	HX_MARK_MEMBER_NAME(totalFPS,"totalFPS");
	HX_MARK_MEMBER_NAME(cacheCount,"cacheCount");
	HX_MARK_MEMBER_NAME(currentTime,"currentTime");
	HX_MARK_MEMBER_NAME(times,"times");
	HX_MARK_MEMBER_NAME(currentlyMemory,"currentlyMemory");
	HX_MARK_MEMBER_NAME(maximumMemory,"maximumMemory");
	HX_MARK_MEMBER_NAME(array,"array");
	HX_MARK_MEMBER_NAME(skippedFrames,"skippedFrames");
	HX_MARK_MEMBER_NAME(fontSize,"fontSize");
	 ::openfl::text::TextField_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FPS_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentFPS,"currentFPS");
	HX_VISIT_MEMBER_NAME(currentlyFPS,"currentlyFPS");
	HX_VISIT_MEMBER_NAME(totalFPS,"totalFPS");
	HX_VISIT_MEMBER_NAME(cacheCount,"cacheCount");
	HX_VISIT_MEMBER_NAME(currentTime,"currentTime");
	HX_VISIT_MEMBER_NAME(times,"times");
	HX_VISIT_MEMBER_NAME(currentlyMemory,"currentlyMemory");
	HX_VISIT_MEMBER_NAME(maximumMemory,"maximumMemory");
	HX_VISIT_MEMBER_NAME(array,"array");
	HX_VISIT_MEMBER_NAME(skippedFrames,"skippedFrames");
	HX_VISIT_MEMBER_NAME(fontSize,"fontSize");
	 ::openfl::text::TextField_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FPS_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"times") ) { return ::hx::Val( times ); }
		if (HX_FIELD_EQ(inName,"array") ) { return ::hx::Val( array ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"totalFPS") ) { return ::hx::Val( totalFPS ); }
		if (HX_FIELD_EQ(inName,"fontSize") ) { return ::hx::Val( fontSize ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"currentFPS") ) { return ::hx::Val( currentFPS ); }
		if (HX_FIELD_EQ(inName,"cacheCount") ) { return ::hx::Val( cacheCount ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { return ::hx::Val( currentTime ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentlyFPS") ) { return ::hx::Val( currentlyFPS ); }
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return ::hx::Val( _hx___enterFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"obtainMemory") ) { return ::hx::Val( obtainMemory_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"maximumMemory") ) { return ::hx::Val( maximumMemory ); }
		if (HX_FIELD_EQ(inName,"skippedFrames") ) { return ::hx::Val( skippedFrames ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"currentlyMemory") ) { return ::hx::Val( currentlyMemory ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FPS_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"times") ) { times=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"array") ) { array=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"totalFPS") ) { totalFPS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fontSize") ) { fontSize=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"currentFPS") ) { currentFPS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cacheCount") ) { cacheCount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { currentTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentlyFPS") ) { currentlyFPS=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"maximumMemory") ) { maximumMemory=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skippedFrames") ) { skippedFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"currentlyMemory") ) { currentlyMemory=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FPS_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("currentFPS",30,71,28,c7));
	outFields->push(HX_("currentlyFPS",83,50,55,33));
	outFields->push(HX_("totalFPS",85,c2,86,75));
	outFields->push(HX_("cacheCount",2d,ab,1b,8d));
	outFields->push(HX_("currentTime",e6,a4,8e,85));
	outFields->push(HX_("times",c6,bf,35,10));
	outFields->push(HX_("currentlyMemory",a7,82,e1,fc));
	outFields->push(HX_("maximumMemory",01,17,1b,c6));
	outFields->push(HX_("array",99,6d,8f,25));
	outFields->push(HX_("skippedFrames",76,1f,4b,c6));
	outFields->push(HX_("fontSize",30,be,d1,ce));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FPS_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FPS_obj,currentFPS),HX_("currentFPS",30,71,28,c7)},
	{::hx::fsInt,(int)offsetof(FPS_obj,currentlyFPS),HX_("currentlyFPS",83,50,55,33)},
	{::hx::fsInt,(int)offsetof(FPS_obj,totalFPS),HX_("totalFPS",85,c2,86,75)},
	{::hx::fsInt,(int)offsetof(FPS_obj,cacheCount),HX_("cacheCount",2d,ab,1b,8d)},
	{::hx::fsFloat,(int)offsetof(FPS_obj,currentTime),HX_("currentTime",e6,a4,8e,85)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(FPS_obj,times),HX_("times",c6,bf,35,10)},
	{::hx::fsFloat,(int)offsetof(FPS_obj,currentlyMemory),HX_("currentlyMemory",a7,82,e1,fc)},
	{::hx::fsFloat,(int)offsetof(FPS_obj,maximumMemory),HX_("maximumMemory",01,17,1b,c6)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FPS_obj,array),HX_("array",99,6d,8f,25)},
	{::hx::fsInt,(int)offsetof(FPS_obj,skippedFrames),HX_("skippedFrames",76,1f,4b,c6)},
	{::hx::fsInt,(int)offsetof(FPS_obj,fontSize),HX_("fontSize",30,be,d1,ce)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FPS_obj_sStaticStorageInfo = 0;
#endif

static ::String FPS_obj_sMemberFields[] = {
	HX_("currentFPS",30,71,28,c7),
	HX_("currentlyFPS",83,50,55,33),
	HX_("totalFPS",85,c2,86,75),
	HX_("cacheCount",2d,ab,1b,8d),
	HX_("currentTime",e6,a4,8e,85),
	HX_("times",c6,bf,35,10),
	HX_("currentlyMemory",a7,82,e1,fc),
	HX_("maximumMemory",01,17,1b,c6),
	HX_("array",99,6d,8f,25),
	HX_("skippedFrames",76,1f,4b,c6),
	HX_("fontSize",30,be,d1,ce),
	HX_("__enterFrame",15,7f,e3,3a),
	HX_("obtainMemory",06,c6,9a,73),
	::String(null()) };

::hx::Class FPS_obj::__mClass;

void FPS_obj::__register()
{
	FPS_obj _hx_dummy;
	FPS_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.FPS",bf,d5,7f,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FPS_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FPS_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FPS_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FPS_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
