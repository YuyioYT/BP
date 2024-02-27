#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_backend_CoolUtil
#include <backend/CoolUtil.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
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
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
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
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
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
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_25_getDifficultyFilePath,"backend.CoolUtil","getDifficultyFilePath",0x3680c1c9,"backend.CoolUtil.getDifficultyFilePath","backend/CoolUtil.hx",25,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_42_difficultyString,"backend.CoolUtil","difficultyString",0x939f18d5,"backend.CoolUtil.difficultyString","backend/CoolUtil.hx",42,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_46_getSizeLabel,"backend.CoolUtil","getSizeLabel",0x05df44e6,"backend.CoolUtil.getSizeLabel","backend/CoolUtil.hx",46,0x2a74e258)
static const ::String _hx_array_data_42409325_4[] = {
	HX_("B",42,00,00,00),HX_("KB",97,41,00,00),HX_("MB",55,43,00,00),HX_("GB",1b,3e,00,00),HX_("TB",6e,49,00,00),HX_("PB",f2,45,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_61_getMinAndMax,"backend.CoolUtil","getMinAndMax",0x51e7aab2,"backend.CoolUtil.getMinAndMax","backend/CoolUtil.hx",61,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_73_quantize,"backend.CoolUtil","quantize",0x96fb8b1a,"backend.CoolUtil.quantize","backend/CoolUtil.hx",73,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_81_capitalize,"backend.CoolUtil","capitalize",0xdbf07455,"backend.CoolUtil.capitalize","backend/CoolUtil.hx",81,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_84_coolTextFile,"backend.CoolUtil","coolTextFile",0x5446309b,"backend.CoolUtil.coolTextFile","backend/CoolUtil.hx",84,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_96_formatMemory,"backend.CoolUtil","formatMemory",0xca17b881,"backend.CoolUtil.formatMemory","backend/CoolUtil.hx",96,0x2a74e258)
static const ::String _hx_array_data_42409325_12[] = {
	HX_("B",42,00,00,00),HX_("KB",97,41,00,00),HX_("MB",55,43,00,00),HX_("GB",1b,3e,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_110_formatAccuracy,"backend.CoolUtil","formatAccuracy",0xbd1353b9,"backend.CoolUtil.formatAccuracy","backend/CoolUtil.hx",110,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_147_colorFromString,"backend.CoolUtil","colorFromString",0x1f97add5,"backend.CoolUtil.colorFromString","backend/CoolUtil.hx",147,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_158_listFromString,"backend.CoolUtil","listFromString",0x72882302,"backend.CoolUtil.listFromString","backend/CoolUtil.hx",158,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_169_floorDecimal,"backend.CoolUtil","floorDecimal",0x1bf0430e,"backend.CoolUtil.floorDecimal","backend/CoolUtil.hx",169,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_182_dominantColor,"backend.CoolUtil","dominantColor",0x9df067da,"backend.CoolUtil.dominantColor","backend/CoolUtil.hx",182,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_210_numberArray,"backend.CoolUtil","numberArray",0xbca10747,"backend.CoolUtil.numberArray","backend/CoolUtil.hx",210,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_221_browserLoad,"backend.CoolUtil","browserLoad",0xf9659f25,"backend.CoolUtil.browserLoad","backend/CoolUtil.hx",221,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_232_getSavePath,"backend.CoolUtil","getSavePath",0x33882b6f,"backend.CoolUtil.getSavePath","backend/CoolUtil.hx",232,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_238_boundTo,"backend.CoolUtil","boundTo",0xd9384710,"backend.CoolUtil.boundTo","backend/CoolUtil.hx",238,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_15_boot,"backend.CoolUtil","boot",0x94891a1b,"backend.CoolUtil.boot","backend/CoolUtil.hx",15,0x2a74e258)
static const ::String _hx_array_data_42409325_31[] = {
	HX_("Hard",0b,5b,e1,2f),HX_("Insane",ca,aa,6e,d2),
};
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_20_boot,"backend.CoolUtil","boot",0x94891a1b,"backend.CoolUtil.boot","backend/CoolUtil.hx",20,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_22_boot,"backend.CoolUtil","boot",0x94891a1b,"backend.CoolUtil.boot","backend/CoolUtil.hx",22,0x2a74e258)
namespace backend{

void CoolUtil_obj::__construct() { }

Dynamic CoolUtil_obj::__CreateEmpty() { return new CoolUtil_obj; }

void *CoolUtil_obj::_hx_vtable = 0;

Dynamic CoolUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CoolUtil_obj > _hx_result = new CoolUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CoolUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2704589f;
}

::Array< ::String > CoolUtil_obj::defaultDifficulties;

::Array< ::String > CoolUtil_obj::difficulties;

::String CoolUtil_obj::defaultDifficulty;

::String CoolUtil_obj::getDifficultyFilePath( ::Dynamic num){
            	HX_GC_STACKFRAME(&_hx_pos_2eed4b4541010048_25_getDifficultyFilePath)
HXLINE(  26)		if (::hx::IsNull( num )) {
HXLINE(  26)			num = ::states::PlayState_obj::storyDifficulty;
            		}
HXLINE(  28)		::String fileSuffix = ::backend::CoolUtil_obj::difficulties->__get(( (int)(num) ));
HXLINE(  29)		bool _hx_tmp;
HXDLIN(  29)		if ((fileSuffix != ::backend::CoolUtil_obj::defaultDifficulty)) {
HXLINE(  29)			_hx_tmp = ::hx::IsNotNull( fileSuffix );
            		}
            		else {
HXLINE(  29)			_hx_tmp = false;
            		}
HXDLIN(  29)		if (_hx_tmp) {
HXLINE(  31)			fileSuffix = (HX_("-",2d,00,00,00) + fileSuffix);
            		}
            		else {
HXLINE(  35)			fileSuffix = HX_("-hard",98,49,10,2e);
            		}
HXLINE(  37)		 ::EReg invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXDLIN(  37)		 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXDLIN(  37)		::String path = invalidChars->split(::StringTools_obj::replace(fileSuffix,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXDLIN(  37)		return hideChars->split(path)->join(HX_("",00,00,00,00)).toLowerCase();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,getDifficultyFilePath,return )

::String CoolUtil_obj::difficultyString(){
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_42_difficultyString)
HXDLIN(  42)		return ::backend::CoolUtil_obj::difficulties->__get(::states::PlayState_obj::storyDifficulty).toUpperCase();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CoolUtil_obj,difficultyString,return )

::String CoolUtil_obj::getSizeLabel(int num){
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_46_getSizeLabel)
HXLINE(  47)		Float size;
HXDLIN(  47)		int _hx_int = num;
HXDLIN(  47)		if ((_hx_int < 0)) {
HXLINE(  47)			size = (((Float)4294967296.0) + _hx_int);
            		}
            		else {
HXLINE(  47)			size = (_hx_int + ((Float)0.0));
            		}
HXLINE(  48)		int data = 0;
HXLINE(  49)		::Array< ::String > dataTexts = ::Array_obj< ::String >::fromData( _hx_array_data_42409325_4,6);
HXLINE(  50)		while(true){
HXLINE(  50)			bool _hx_tmp;
HXDLIN(  50)			if ((size > 1024)) {
HXLINE(  50)				_hx_tmp = (data < (dataTexts->length - 1));
            			}
            			else {
HXLINE(  50)				_hx_tmp = false;
            			}
HXDLIN(  50)			if (!(_hx_tmp)) {
HXLINE(  50)				goto _hx_goto_2;
            			}
HXLINE(  51)			data = (data + 1);
HXLINE(  52)			size = (size / ( (Float)(1024) ));
            		}
            		_hx_goto_2:;
HXLINE(  55)		size = (( (Float)(::Math_obj::round((size * ( (Float)(100) )))) ) / ( (Float)(100) ));
HXLINE(  56)		return ((size + HX_(" ",20,00,00,00)) + dataTexts->__get(data));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,getSizeLabel,return )

::Array< Float > CoolUtil_obj::getMinAndMax(Float value1,Float value2){
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_61_getMinAndMax)
HXLINE(  62)		::Array< Float > minAndMaxs = ::Array_obj< Float >::__new();
HXLINE(  64)		Float min = ::Math_obj::min(value1,value2);
HXLINE(  65)		Float max = ::Math_obj::max(value1,value2);
HXLINE(  67)		minAndMaxs->push(min);
HXLINE(  68)		minAndMaxs->push(max);
HXLINE(  70)		return minAndMaxs;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CoolUtil_obj,getMinAndMax,return )

Float CoolUtil_obj::quantize(Float f,Float snap){
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_73_quantize)
HXLINE(  75)		Float m = ::Math_obj::fround((f * snap));
HXLINE(  76)		::haxe::Log_obj::trace(snap,::hx::SourceInfo(HX_("source/backend/CoolUtil.hx",e4,7b,b9,1b),76,HX_("backend.CoolUtil",25,93,40,42),HX_("quantize",b1,4c,42,ac)));
HXLINE(  77)		return (m / snap);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CoolUtil_obj,quantize,return )

::String CoolUtil_obj::capitalize(::String text){
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_81_capitalize)
HXDLIN(  81)		::String _hx_tmp = text.charAt(0).toUpperCase();
HXDLIN(  81)		return (_hx_tmp + text.substr(1,null()).toLowerCase());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,capitalize,return )

::Array< ::String > CoolUtil_obj::coolTextFile(::String path){
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_84_coolTextFile)
HXLINE(  85)		::String daList = null();
HXLINE(  87)		::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXLINE(  88)		path = formatted->__get((formatted->length - 1));
HXLINE(  89)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  89)			daList = ::sys::io::File_obj::getContent(path);
            		}
HXLINE(  93)		if (::hx::IsNotNull( daList )) {
HXLINE(  93)			::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXDLIN(  93)			daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXDLIN(  93)			{
HXLINE(  93)				int _g = 0;
HXDLIN(  93)				int _g1 = daList1->length;
HXDLIN(  93)				while((_g < _g1)){
HXLINE(  93)					_g = (_g + 1);
HXDLIN(  93)					int i = (_g - 1);
HXDLIN(  93)					daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            				}
            			}
HXDLIN(  93)			return daList1;
            		}
            		else {
HXLINE(  93)			return ::Array_obj< ::String >::__new(0);
            		}
HXDLIN(  93)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,coolTextFile,return )

::String CoolUtil_obj::formatMemory(int num){
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_96_formatMemory)
HXLINE(  97)		Float size;
HXDLIN(  97)		int _hx_int = num;
HXDLIN(  97)		if ((_hx_int < 0)) {
HXLINE(  97)			size = (((Float)4294967296.0) + _hx_int);
            		}
            		else {
HXLINE(  97)			size = (_hx_int + ((Float)0.0));
            		}
HXLINE(  98)		int data = 0;
HXLINE(  99)		::Array< ::String > dataTexts = ::Array_obj< ::String >::fromData( _hx_array_data_42409325_12,4);
HXLINE( 100)		while(true){
HXLINE( 100)			bool _hx_tmp;
HXDLIN( 100)			if ((size > 1024)) {
HXLINE( 100)				_hx_tmp = (data < (dataTexts->length - 1));
            			}
            			else {
HXLINE( 100)				_hx_tmp = false;
            			}
HXDLIN( 100)			if (!(_hx_tmp)) {
HXLINE( 100)				goto _hx_goto_10;
            			}
HXLINE( 101)			data = (data + 1);
HXLINE( 102)			size = (size / ( (Float)(1024) ));
            		}
            		_hx_goto_10:;
HXLINE( 105)		size = (( (Float)(::Math_obj::round((size * ( (Float)(100) )))) ) / ( (Float)(100) ));
HXLINE( 106)		::String formatSize = ::backend::CoolUtil_obj::formatAccuracy(size);
HXLINE( 107)		return ((formatSize + HX_(" ",20,00,00,00)) + dataTexts->__get(data));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,formatMemory,return )

::String CoolUtil_obj::formatAccuracy(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_2eed4b4541010048_110_formatAccuracy)
HXLINE( 111)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 111)		_g->set(HX_("0",30,00,00,00),HX_("0.00",7e,4f,dd,1f));
HXDLIN( 111)		_g->set(HX_("0.0",72,94,24,00),HX_("0.00",7e,4f,dd,1f));
HXDLIN( 111)		_g->set(HX_("0.00",7e,4f,dd,1f),HX_("0.00",7e,4f,dd,1f));
HXDLIN( 111)		_g->set(HX_("00",00,2a,00,00),HX_("00.00",ae,27,19,c3));
HXDLIN( 111)		_g->set(HX_("00.0",42,d2,de,1f),HX_("00.00",ae,27,19,c3));
HXDLIN( 111)		_g->set(HX_("00.00",ae,27,19,c3),HX_("00.00",ae,27,19,c3));
HXDLIN( 111)		_g->set(HX_("000",30,96,24,00),HX_("000.00",7e,79,3a,f4));
HXDLIN( 111)		 ::haxe::ds::StringMap conversion = _g;
HXLINE( 121)		::String stringVal = ::Std_obj::string(value);
HXLINE( 122)		::String converVal = HX_("",00,00,00,00);
HXLINE( 123)		{
HXLINE( 123)			int _g1 = 0;
HXDLIN( 123)			int _g2 = stringVal.length;
HXDLIN( 123)			while((_g1 < _g2)){
HXLINE( 123)				_g1 = (_g1 + 1);
HXDLIN( 123)				int i = (_g1 - 1);
HXLINE( 124)				if ((stringVal.charAt(i) == HX_(".",2e,00,00,00))) {
HXLINE( 125)					converVal = (converVal + HX_(".",2e,00,00,00));
            				}
            				else {
HXLINE( 127)					converVal = (converVal + HX_("0",30,00,00,00));
            				}
            			}
            		}
HXLINE( 130)		::String wantedConversion = conversion->get_string(converVal);
HXLINE( 131)		::String convertedValue = HX_("",00,00,00,00);
HXLINE( 133)		{
HXLINE( 133)			int _g3 = 0;
HXDLIN( 133)			int _g4 = wantedConversion.length;
HXDLIN( 133)			while((_g3 < _g4)){
HXLINE( 133)				_g3 = (_g3 + 1);
HXDLIN( 133)				int i = (_g3 - 1);
HXLINE( 134)				if ((stringVal.charAt(i) == HX_("",00,00,00,00))) {
HXLINE( 135)					convertedValue = (convertedValue + wantedConversion.charAt(i));
            				}
            				else {
HXLINE( 137)					convertedValue = (convertedValue + stringVal.charAt(i));
            				}
            			}
            		}
HXLINE( 140)		if ((convertedValue.length == 0)) {
HXLINE( 141)			return (HX_("",00,00,00,00) + value);
            		}
HXLINE( 143)		return convertedValue;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,formatAccuracy,return )

int CoolUtil_obj::colorFromString(::String color){
            	HX_GC_STACKFRAME(&_hx_pos_2eed4b4541010048_147_colorFromString)
HXLINE( 148)		 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[\t\n\r]",ac,57,71,6b),HX_("",00,00,00,00));
HXLINE( 149)		::String color1 = ::StringTools_obj::trim(hideChars->split(color)->join(HX_("",00,00,00,00)));
HXLINE( 150)		if (::StringTools_obj::startsWith(color1,HX_("0x",48,2a,00,00))) {
HXLINE( 150)			color1 = color1.substring((color1.length - 6),null());
            		}
HXLINE( 152)		 ::Dynamic colorNum = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(color1);
HXLINE( 153)		if (::hx::IsNull( colorNum )) {
HXLINE( 153)			colorNum = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString((HX_("#",23,00,00,00) + color1));
            		}
HXLINE( 154)		if (::hx::IsNotNull( colorNum )) {
HXLINE( 154)			return ( (int)(colorNum) );
            		}
            		else {
HXLINE( 154)			return -1;
            		}
HXDLIN( 154)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,colorFromString,return )

::Array< ::String > CoolUtil_obj::listFromString(::String string){
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_158_listFromString)
HXLINE( 159)		::Array< ::String > daList = ::Array_obj< ::String >::__new(0);
HXLINE( 160)		daList = ::StringTools_obj::trim(string).split(HX_("\n",0a,00,00,00));
HXLINE( 162)		{
HXLINE( 162)			int _g = 0;
HXDLIN( 162)			int _g1 = daList->length;
HXDLIN( 162)			while((_g < _g1)){
HXLINE( 162)				_g = (_g + 1);
HXDLIN( 162)				int i = (_g - 1);
HXLINE( 163)				daList[i] = ::StringTools_obj::trim(daList->__get(i));
            			}
            		}
HXLINE( 165)		return daList;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,listFromString,return )

Float CoolUtil_obj::floorDecimal(Float value,int decimals){
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_169_floorDecimal)
HXLINE( 170)		if ((decimals < 1)) {
HXLINE( 171)			return ( (Float)(::Math_obj::floor(value)) );
            		}
HXLINE( 173)		Float tempMult = ( (Float)(1) );
HXLINE( 174)		{
HXLINE( 174)			int _g = 0;
HXDLIN( 174)			int _g1 = decimals;
HXDLIN( 174)			while((_g < _g1)){
HXLINE( 174)				_g = (_g + 1);
HXDLIN( 174)				int i = (_g - 1);
HXLINE( 175)				tempMult = (tempMult * ( (Float)(10) ));
            			}
            		}
HXLINE( 177)		Float newValue = ( (Float)(::Math_obj::floor((value * tempMult))) );
HXLINE( 178)		return (newValue / tempMult);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CoolUtil_obj,floorDecimal,return )

int CoolUtil_obj::dominantColor( ::flixel::FlxSprite sprite){
            	HX_GC_STACKFRAME(&_hx_pos_2eed4b4541010048_182_dominantColor)
HXLINE( 183)		 ::haxe::ds::IntMap countByColor =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 184)		{
HXLINE( 184)			int _g = 0;
HXDLIN( 184)			int _g1 = sprite->frameWidth;
HXDLIN( 184)			while((_g < _g1)){
HXLINE( 184)				_g = (_g + 1);
HXDLIN( 184)				int col = (_g - 1);
HXLINE( 185)				{
HXLINE( 185)					int _g1 = 0;
HXDLIN( 185)					int _g2 = sprite->frameHeight;
HXDLIN( 185)					while((_g1 < _g2)){
HXLINE( 185)						_g1 = (_g1 + 1);
HXDLIN( 185)						int row = (_g1 - 1);
HXLINE( 186)						int colorOfThisPixel = sprite->get_pixels()->getPixel32(col,row);
HXLINE( 187)						if ((colorOfThisPixel != 0)) {
HXLINE( 188)							if (countByColor->exists(colorOfThisPixel)) {
HXLINE( 189)								int v = (countByColor->get(colorOfThisPixel) + 1);
HXDLIN( 189)								countByColor->set(colorOfThisPixel,v);
            							}
            							else {
HXLINE( 190)								if (::hx::IsNotEq( countByColor->get(colorOfThisPixel),-13520687 )) {
HXLINE( 191)									countByColor->set(colorOfThisPixel,1);
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 196)		int maxCount = 0;
HXLINE( 197)		int maxKey = 0;
HXLINE( 198)		countByColor->set(-16777216,0);
HXLINE( 199)		{
HXLINE( 199)			 ::Dynamic key = countByColor->keys();
HXDLIN( 199)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 199)				int key1 = ( (int)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 200)				if (::hx::IsGreaterEq( countByColor->get(key1),maxCount )) {
HXLINE( 201)					maxCount = ( (int)(countByColor->get(key1)) );
HXLINE( 202)					maxKey = key1;
            				}
            			}
            		}
HXLINE( 205)		countByColor =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 206)		return maxKey;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,dominantColor,return )

::Array< int > CoolUtil_obj::numberArray(int max, ::Dynamic __o_min){
            		 ::Dynamic min = __o_min;
            		if (::hx::IsNull(__o_min)) min = 0;
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_210_numberArray)
HXLINE( 211)		::Array< int > dumbArray = ::Array_obj< int >::__new(0);
HXLINE( 212)		{
HXLINE( 212)			int _g = ( (int)(min) );
HXDLIN( 212)			int _g1 = max;
HXDLIN( 212)			while((_g < _g1)){
HXLINE( 212)				_g = (_g + 1);
HXDLIN( 212)				int i = (_g - 1);
HXDLIN( 212)				dumbArray->push(i);
            			}
            		}
HXLINE( 214)		return dumbArray;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CoolUtil_obj,numberArray,return )

void CoolUtil_obj::browserLoad(::String site){
            	HX_GC_STACKFRAME(&_hx_pos_2eed4b4541010048_221_browserLoad)
HXDLIN( 221)		::String prefix = HX_("",00,00,00,00);
HXDLIN( 221)		if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("^https?://",48,ee,dd,38),HX_("",00,00,00,00))->match(site))) {
HXDLIN( 221)			prefix = HX_("http://",52,75,cd,5a);
            		}
HXDLIN( 221)		::openfl::Lib_obj::getURL( ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,(prefix + site)),HX_("_blank",95,26,d9,b0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,browserLoad,(void))

::String CoolUtil_obj::getSavePath(::String __o_folder){
            		::String folder = __o_folder;
            		if (::hx::IsNull(__o_folder)) folder = HX_("ShadowMario",e4,7d,20,5e);
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_232_getSavePath)
HXDLIN( 232)		::String _hx_tmp = (::openfl::Lib_obj::get_current()->stage->application->meta->get(HX_("company",3d,15,69,83)) + HX_("/",2f,00,00,00));
HXDLIN( 232)		return (_hx_tmp + ::flixel::util::FlxSave_obj::validate(::openfl::Lib_obj::get_current()->stage->application->meta->get_string(HX_("file",7c,ce,bb,43))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,getSavePath,return )

Float CoolUtil_obj::boundTo(Float value,Float min,Float max){
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_238_boundTo)
HXDLIN( 238)		return ::Math_obj::max(min,::Math_obj::min(max,value));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CoolUtil_obj,boundTo,return )


CoolUtil_obj::CoolUtil_obj()
{
}

bool CoolUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"boundTo") ) { outValue = boundTo_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"quantize") ) { outValue = quantize_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"capitalize") ) { outValue = capitalize_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numberArray") ) { outValue = numberArray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"browserLoad") ) { outValue = browserLoad_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSavePath") ) { outValue = getSavePath_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"difficulties") ) { outValue = ( difficulties ); return true; }
		if (HX_FIELD_EQ(inName,"getSizeLabel") ) { outValue = getSizeLabel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getMinAndMax") ) { outValue = getMinAndMax_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"coolTextFile") ) { outValue = coolTextFile_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"formatMemory") ) { outValue = formatMemory_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"floorDecimal") ) { outValue = floorDecimal_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dominantColor") ) { outValue = dominantColor_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"formatAccuracy") ) { outValue = formatAccuracy_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"listFromString") ) { outValue = listFromString_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"colorFromString") ) { outValue = colorFromString_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"difficultyString") ) { outValue = difficultyString_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultDifficulty") ) { outValue = ( defaultDifficulty ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"defaultDifficulties") ) { outValue = ( defaultDifficulties ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getDifficultyFilePath") ) { outValue = getDifficultyFilePath_dyn(); return true; }
	}
	return false;
}

bool CoolUtil_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"difficulties") ) { difficulties=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultDifficulty") ) { defaultDifficulty=ioValue.Cast< ::String >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"defaultDifficulties") ) { defaultDifficulties=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CoolUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CoolUtil_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &CoolUtil_obj::defaultDifficulties,HX_("defaultDifficulties",ba,89,b7,7e)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &CoolUtil_obj::difficulties,HX_("difficulties",59,c7,5e,02)},
	{::hx::fsString,(void *) &CoolUtil_obj::defaultDifficulty,HX_("defaultDifficulty",5c,06,f0,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CoolUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CoolUtil_obj::defaultDifficulties,"defaultDifficulties");
	HX_MARK_MEMBER_NAME(CoolUtil_obj::difficulties,"difficulties");
	HX_MARK_MEMBER_NAME(CoolUtil_obj::defaultDifficulty,"defaultDifficulty");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CoolUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CoolUtil_obj::defaultDifficulties,"defaultDifficulties");
	HX_VISIT_MEMBER_NAME(CoolUtil_obj::difficulties,"difficulties");
	HX_VISIT_MEMBER_NAME(CoolUtil_obj::defaultDifficulty,"defaultDifficulty");
};

#endif

::hx::Class CoolUtil_obj::__mClass;

static ::String CoolUtil_obj_sStaticFields[] = {
	HX_("defaultDifficulties",ba,89,b7,7e),
	HX_("difficulties",59,c7,5e,02),
	HX_("defaultDifficulty",5c,06,f0,1d),
	HX_("getDifficultyFilePath",d2,8d,91,4d),
	HX_("difficultyString",6c,c9,73,cb),
	HX_("getSizeLabel",fd,1d,9c,7d),
	HX_("getMinAndMax",c9,83,a4,c9),
	HX_("quantize",b1,4c,42,ac),
	HX_("capitalize",ac,09,9c,e1),
	HX_("coolTextFile",b2,09,03,cc),
	HX_("formatMemory",98,91,d4,41),
	HX_("formatAccuracy",90,e0,89,40),
	HX_("colorFromString",1e,5d,dc,a3),
	HX_("listFromString",d9,af,fe,f5),
	HX_("floorDecimal",25,1c,ad,93),
	HX_("dominantColor",e3,82,71,eb),
	HX_("numberArray",10,1e,18,ad),
	HX_("browserLoad",ee,b5,dc,e9),
	HX_("getSavePath",38,42,ff,23),
	HX_("boundTo",59,05,b8,f3),
	::String(null())
};

void CoolUtil_obj::__register()
{
	CoolUtil_obj _hx_dummy;
	CoolUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.CoolUtil",25,93,40,42);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CoolUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &CoolUtil_obj::__SetStatic;
	__mClass->mMarkFunc = CoolUtil_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CoolUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CoolUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CoolUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CoolUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CoolUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CoolUtil_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_15_boot)
HXDLIN(  15)		defaultDifficulties = ::Array_obj< ::String >::fromData( _hx_array_data_42409325_31,2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_20_boot)
HXDLIN(  20)		difficulties = ::Array_obj< ::String >::__new(0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_22_boot)
HXDLIN(  22)		defaultDifficulty = HX_("Normal",47,e6,fd,64);
            	}
}

} // end namespace backend
