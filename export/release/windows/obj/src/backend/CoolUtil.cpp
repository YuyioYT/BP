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
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
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
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_15_getSizeLabel,"backend.CoolUtil","getSizeLabel",0x05df44e6,"backend.CoolUtil.getSizeLabel","backend/CoolUtil.hx",15,0x2a74e258)
static const ::String _hx_array_data_42409325_2[] = {
	HX_("B",42,00,00,00),HX_("KB",97,41,00,00),HX_("MB",55,43,00,00),HX_("GB",1b,3e,00,00),HX_("TB",6e,49,00,00),HX_("PB",f2,45,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_30_getMinAndMax,"backend.CoolUtil","getMinAndMax",0x51e7aab2,"backend.CoolUtil.getMinAndMax","backend/CoolUtil.hx",30,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_42_quantize,"backend.CoolUtil","quantize",0x96fb8b1a,"backend.CoolUtil.quantize","backend/CoolUtil.hx",42,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_50_capitalize,"backend.CoolUtil","capitalize",0xdbf07455,"backend.CoolUtil.capitalize","backend/CoolUtil.hx",50,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_53_coolTextFile,"backend.CoolUtil","coolTextFile",0x5446309b,"backend.CoolUtil.coolTextFile","backend/CoolUtil.hx",53,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_65_formatMemory,"backend.CoolUtil","formatMemory",0xca17b881,"backend.CoolUtil.formatMemory","backend/CoolUtil.hx",65,0x2a74e258)
static const ::String _hx_array_data_42409325_10[] = {
	HX_("B",42,00,00,00),HX_("KB",97,41,00,00),HX_("MB",55,43,00,00),HX_("GB",1b,3e,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_79_formatAccuracy,"backend.CoolUtil","formatAccuracy",0xbd1353b9,"backend.CoolUtil.formatAccuracy","backend/CoolUtil.hx",79,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_116_colorFromString,"backend.CoolUtil","colorFromString",0x1f97add5,"backend.CoolUtil.colorFromString","backend/CoolUtil.hx",116,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_127_listFromString,"backend.CoolUtil","listFromString",0x72882302,"backend.CoolUtil.listFromString","backend/CoolUtil.hx",127,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_138_floorDecimal,"backend.CoolUtil","floorDecimal",0x1bf0430e,"backend.CoolUtil.floorDecimal","backend/CoolUtil.hx",138,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_151_dominantColor,"backend.CoolUtil","dominantColor",0x9df067da,"backend.CoolUtil.dominantColor","backend/CoolUtil.hx",151,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_179_numberArray,"backend.CoolUtil","numberArray",0xbca10747,"backend.CoolUtil.numberArray","backend/CoolUtil.hx",179,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_190_browserLoad,"backend.CoolUtil","browserLoad",0xf9659f25,"backend.CoolUtil.browserLoad","backend/CoolUtil.hx",190,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_201_getSavePath,"backend.CoolUtil","getSavePath",0x33882b6f,"backend.CoolUtil.getSavePath","backend/CoolUtil.hx",201,0x2a74e258)
HX_LOCAL_STACK_FRAME(_hx_pos_2eed4b4541010048_207_boundTo,"backend.CoolUtil","boundTo",0xd9384710,"backend.CoolUtil.boundTo","backend/CoolUtil.hx",207,0x2a74e258)
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

::String CoolUtil_obj::getSizeLabel(int num){
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_15_getSizeLabel)
HXLINE(  16)		Float size;
HXDLIN(  16)		int _hx_int = num;
HXDLIN(  16)		if ((_hx_int < 0)) {
HXLINE(  16)			size = (((Float)4294967296.0) + _hx_int);
            		}
            		else {
HXLINE(  16)			size = (_hx_int + ((Float)0.0));
            		}
HXLINE(  17)		int data = 0;
HXLINE(  18)		::Array< ::String > dataTexts = ::Array_obj< ::String >::fromData( _hx_array_data_42409325_2,6);
HXLINE(  19)		while(true){
HXLINE(  19)			bool _hx_tmp;
HXDLIN(  19)			if ((size > 1024)) {
HXLINE(  19)				_hx_tmp = (data < (dataTexts->length - 1));
            			}
            			else {
HXLINE(  19)				_hx_tmp = false;
            			}
HXDLIN(  19)			if (!(_hx_tmp)) {
HXLINE(  19)				goto _hx_goto_0;
            			}
HXLINE(  20)			data = (data + 1);
HXLINE(  21)			size = (size / ( (Float)(1024) ));
            		}
            		_hx_goto_0:;
HXLINE(  24)		size = (( (Float)(::Math_obj::round((size * ( (Float)(100) )))) ) / ( (Float)(100) ));
HXLINE(  25)		return ((size + HX_(" ",20,00,00,00)) + dataTexts->__get(data));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,getSizeLabel,return )

::Array< Float > CoolUtil_obj::getMinAndMax(Float value1,Float value2){
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_30_getMinAndMax)
HXLINE(  31)		::Array< Float > minAndMaxs = ::Array_obj< Float >::__new();
HXLINE(  33)		Float min = ::Math_obj::min(value1,value2);
HXLINE(  34)		Float max = ::Math_obj::max(value1,value2);
HXLINE(  36)		minAndMaxs->push(min);
HXLINE(  37)		minAndMaxs->push(max);
HXLINE(  39)		return minAndMaxs;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CoolUtil_obj,getMinAndMax,return )

Float CoolUtil_obj::quantize(Float f,Float snap){
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_42_quantize)
HXLINE(  44)		Float m = ::Math_obj::fround((f * snap));
HXLINE(  45)		::haxe::Log_obj::trace(snap,::hx::SourceInfo(HX_("source/backend/CoolUtil.hx",e4,7b,b9,1b),45,HX_("backend.CoolUtil",25,93,40,42),HX_("quantize",b1,4c,42,ac)));
HXLINE(  46)		return (m / snap);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CoolUtil_obj,quantize,return )

::String CoolUtil_obj::capitalize(::String text){
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_50_capitalize)
HXDLIN(  50)		::String _hx_tmp = text.charAt(0).toUpperCase();
HXDLIN(  50)		return (_hx_tmp + text.substr(1,null()).toLowerCase());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,capitalize,return )

::Array< ::String > CoolUtil_obj::coolTextFile(::String path){
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_53_coolTextFile)
HXLINE(  54)		::String daList = null();
HXLINE(  56)		::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXLINE(  57)		path = formatted->__get((formatted->length - 1));
HXLINE(  58)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  58)			daList = ::sys::io::File_obj::getContent(path);
            		}
HXLINE(  62)		if (::hx::IsNotNull( daList )) {
HXLINE(  62)			::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXDLIN(  62)			daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXDLIN(  62)			{
HXLINE(  62)				int _g = 0;
HXDLIN(  62)				int _g1 = daList1->length;
HXDLIN(  62)				while((_g < _g1)){
HXLINE(  62)					_g = (_g + 1);
HXDLIN(  62)					int i = (_g - 1);
HXDLIN(  62)					daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            				}
            			}
HXDLIN(  62)			return daList1;
            		}
            		else {
HXLINE(  62)			return ::Array_obj< ::String >::__new(0);
            		}
HXDLIN(  62)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,coolTextFile,return )

::String CoolUtil_obj::formatMemory(int num){
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_65_formatMemory)
HXLINE(  66)		Float size;
HXDLIN(  66)		int _hx_int = num;
HXDLIN(  66)		if ((_hx_int < 0)) {
HXLINE(  66)			size = (((Float)4294967296.0) + _hx_int);
            		}
            		else {
HXLINE(  66)			size = (_hx_int + ((Float)0.0));
            		}
HXLINE(  67)		int data = 0;
HXLINE(  68)		::Array< ::String > dataTexts = ::Array_obj< ::String >::fromData( _hx_array_data_42409325_10,4);
HXLINE(  69)		while(true){
HXLINE(  69)			bool _hx_tmp;
HXDLIN(  69)			if ((size > 1024)) {
HXLINE(  69)				_hx_tmp = (data < (dataTexts->length - 1));
            			}
            			else {
HXLINE(  69)				_hx_tmp = false;
            			}
HXDLIN(  69)			if (!(_hx_tmp)) {
HXLINE(  69)				goto _hx_goto_8;
            			}
HXLINE(  70)			data = (data + 1);
HXLINE(  71)			size = (size / ( (Float)(1024) ));
            		}
            		_hx_goto_8:;
HXLINE(  74)		size = (( (Float)(::Math_obj::round((size * ( (Float)(100) )))) ) / ( (Float)(100) ));
HXLINE(  75)		::String formatSize = ::backend::CoolUtil_obj::formatAccuracy(size);
HXLINE(  76)		return ((formatSize + HX_(" ",20,00,00,00)) + dataTexts->__get(data));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,formatMemory,return )

::String CoolUtil_obj::formatAccuracy(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_2eed4b4541010048_79_formatAccuracy)
HXLINE(  80)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  80)		_g->set(HX_("0",30,00,00,00),HX_("0.00",7e,4f,dd,1f));
HXDLIN(  80)		_g->set(HX_("0.0",72,94,24,00),HX_("0.00",7e,4f,dd,1f));
HXDLIN(  80)		_g->set(HX_("0.00",7e,4f,dd,1f),HX_("0.00",7e,4f,dd,1f));
HXDLIN(  80)		_g->set(HX_("00",00,2a,00,00),HX_("00.00",ae,27,19,c3));
HXDLIN(  80)		_g->set(HX_("00.0",42,d2,de,1f),HX_("00.00",ae,27,19,c3));
HXDLIN(  80)		_g->set(HX_("00.00",ae,27,19,c3),HX_("00.00",ae,27,19,c3));
HXDLIN(  80)		_g->set(HX_("000",30,96,24,00),HX_("000.00",7e,79,3a,f4));
HXDLIN(  80)		 ::haxe::ds::StringMap conversion = _g;
HXLINE(  90)		::String stringVal = ::Std_obj::string(value);
HXLINE(  91)		::String converVal = HX_("",00,00,00,00);
HXLINE(  92)		{
HXLINE(  92)			int _g1 = 0;
HXDLIN(  92)			int _g2 = stringVal.length;
HXDLIN(  92)			while((_g1 < _g2)){
HXLINE(  92)				_g1 = (_g1 + 1);
HXDLIN(  92)				int i = (_g1 - 1);
HXLINE(  93)				if ((stringVal.charAt(i) == HX_(".",2e,00,00,00))) {
HXLINE(  94)					converVal = (converVal + HX_(".",2e,00,00,00));
            				}
            				else {
HXLINE(  96)					converVal = (converVal + HX_("0",30,00,00,00));
            				}
            			}
            		}
HXLINE(  99)		::String wantedConversion = conversion->get_string(converVal);
HXLINE( 100)		::String convertedValue = HX_("",00,00,00,00);
HXLINE( 102)		{
HXLINE( 102)			int _g3 = 0;
HXDLIN( 102)			int _g4 = wantedConversion.length;
HXDLIN( 102)			while((_g3 < _g4)){
HXLINE( 102)				_g3 = (_g3 + 1);
HXDLIN( 102)				int i = (_g3 - 1);
HXLINE( 103)				if ((stringVal.charAt(i) == HX_("",00,00,00,00))) {
HXLINE( 104)					convertedValue = (convertedValue + wantedConversion.charAt(i));
            				}
            				else {
HXLINE( 106)					convertedValue = (convertedValue + stringVal.charAt(i));
            				}
            			}
            		}
HXLINE( 109)		if ((convertedValue.length == 0)) {
HXLINE( 110)			return (HX_("",00,00,00,00) + value);
            		}
HXLINE( 112)		return convertedValue;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,formatAccuracy,return )

int CoolUtil_obj::colorFromString(::String color){
            	HX_GC_STACKFRAME(&_hx_pos_2eed4b4541010048_116_colorFromString)
HXLINE( 117)		 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[\t\n\r]",ac,57,71,6b),HX_("",00,00,00,00));
HXLINE( 118)		::String color1 = ::StringTools_obj::trim(hideChars->split(color)->join(HX_("",00,00,00,00)));
HXLINE( 119)		if (::StringTools_obj::startsWith(color1,HX_("0x",48,2a,00,00))) {
HXLINE( 119)			color1 = color1.substring((color1.length - 6),null());
            		}
HXLINE( 121)		 ::Dynamic colorNum = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(color1);
HXLINE( 122)		if (::hx::IsNull( colorNum )) {
HXLINE( 122)			colorNum = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString((HX_("#",23,00,00,00) + color1));
            		}
HXLINE( 123)		if (::hx::IsNotNull( colorNum )) {
HXLINE( 123)			return ( (int)(colorNum) );
            		}
            		else {
HXLINE( 123)			return -1;
            		}
HXDLIN( 123)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,colorFromString,return )

::Array< ::String > CoolUtil_obj::listFromString(::String string){
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_127_listFromString)
HXLINE( 128)		::Array< ::String > daList = ::Array_obj< ::String >::__new(0);
HXLINE( 129)		daList = ::StringTools_obj::trim(string).split(HX_("\n",0a,00,00,00));
HXLINE( 131)		{
HXLINE( 131)			int _g = 0;
HXDLIN( 131)			int _g1 = daList->length;
HXDLIN( 131)			while((_g < _g1)){
HXLINE( 131)				_g = (_g + 1);
HXDLIN( 131)				int i = (_g - 1);
HXLINE( 132)				daList[i] = ::StringTools_obj::trim(daList->__get(i));
            			}
            		}
HXLINE( 134)		return daList;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,listFromString,return )

Float CoolUtil_obj::floorDecimal(Float value,int decimals){
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_138_floorDecimal)
HXLINE( 139)		if ((decimals < 1)) {
HXLINE( 140)			return ( (Float)(::Math_obj::floor(value)) );
            		}
HXLINE( 142)		Float tempMult = ( (Float)(1) );
HXLINE( 143)		{
HXLINE( 143)			int _g = 0;
HXDLIN( 143)			int _g1 = decimals;
HXDLIN( 143)			while((_g < _g1)){
HXLINE( 143)				_g = (_g + 1);
HXDLIN( 143)				int i = (_g - 1);
HXLINE( 144)				tempMult = (tempMult * ( (Float)(10) ));
            			}
            		}
HXLINE( 146)		Float newValue = ( (Float)(::Math_obj::floor((value * tempMult))) );
HXLINE( 147)		return (newValue / tempMult);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CoolUtil_obj,floorDecimal,return )

int CoolUtil_obj::dominantColor( ::flixel::FlxSprite sprite){
            	HX_GC_STACKFRAME(&_hx_pos_2eed4b4541010048_151_dominantColor)
HXLINE( 152)		 ::haxe::ds::IntMap countByColor =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 153)		{
HXLINE( 153)			int _g = 0;
HXDLIN( 153)			int _g1 = sprite->frameWidth;
HXDLIN( 153)			while((_g < _g1)){
HXLINE( 153)				_g = (_g + 1);
HXDLIN( 153)				int col = (_g - 1);
HXLINE( 154)				{
HXLINE( 154)					int _g1 = 0;
HXDLIN( 154)					int _g2 = sprite->frameHeight;
HXDLIN( 154)					while((_g1 < _g2)){
HXLINE( 154)						_g1 = (_g1 + 1);
HXDLIN( 154)						int row = (_g1 - 1);
HXLINE( 155)						int colorOfThisPixel = sprite->get_pixels()->getPixel32(col,row);
HXLINE( 156)						if ((colorOfThisPixel != 0)) {
HXLINE( 157)							if (countByColor->exists(colorOfThisPixel)) {
HXLINE( 158)								int v = (countByColor->get(colorOfThisPixel) + 1);
HXDLIN( 158)								countByColor->set(colorOfThisPixel,v);
            							}
            							else {
HXLINE( 159)								if (::hx::IsNotEq( countByColor->get(colorOfThisPixel),-13520687 )) {
HXLINE( 160)									countByColor->set(colorOfThisPixel,1);
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 165)		int maxCount = 0;
HXLINE( 166)		int maxKey = 0;
HXLINE( 167)		countByColor->set(-16777216,0);
HXLINE( 168)		{
HXLINE( 168)			 ::Dynamic key = countByColor->keys();
HXDLIN( 168)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 168)				int key1 = ( (int)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 169)				if (::hx::IsGreaterEq( countByColor->get(key1),maxCount )) {
HXLINE( 170)					maxCount = ( (int)(countByColor->get(key1)) );
HXLINE( 171)					maxKey = key1;
            				}
            			}
            		}
HXLINE( 174)		countByColor =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 175)		return maxKey;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,dominantColor,return )

::Array< int > CoolUtil_obj::numberArray(int max, ::Dynamic __o_min){
            		 ::Dynamic min = __o_min;
            		if (::hx::IsNull(__o_min)) min = 0;
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_179_numberArray)
HXLINE( 180)		::Array< int > dumbArray = ::Array_obj< int >::__new(0);
HXLINE( 181)		{
HXLINE( 181)			int _g = ( (int)(min) );
HXDLIN( 181)			int _g1 = max;
HXDLIN( 181)			while((_g < _g1)){
HXLINE( 181)				_g = (_g + 1);
HXDLIN( 181)				int i = (_g - 1);
HXDLIN( 181)				dumbArray->push(i);
            			}
            		}
HXLINE( 183)		return dumbArray;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CoolUtil_obj,numberArray,return )

void CoolUtil_obj::browserLoad(::String site){
            	HX_GC_STACKFRAME(&_hx_pos_2eed4b4541010048_190_browserLoad)
HXDLIN( 190)		::String prefix = HX_("",00,00,00,00);
HXDLIN( 190)		if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("^https?://",48,ee,dd,38),HX_("",00,00,00,00))->match(site))) {
HXDLIN( 190)			prefix = HX_("http://",52,75,cd,5a);
            		}
HXDLIN( 190)		::openfl::Lib_obj::getURL( ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,(prefix + site)),HX_("_blank",95,26,d9,b0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,browserLoad,(void))

::String CoolUtil_obj::getSavePath(::String __o_folder){
            		::String folder = __o_folder;
            		if (::hx::IsNull(__o_folder)) folder = HX_("ShadowMario",e4,7d,20,5e);
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_201_getSavePath)
HXDLIN( 201)		::String _hx_tmp = (::openfl::Lib_obj::get_current()->stage->application->meta->get(HX_("company",3d,15,69,83)) + HX_("/",2f,00,00,00));
HXDLIN( 201)		return (_hx_tmp + ::flixel::util::FlxSave_obj::validate(::openfl::Lib_obj::get_current()->stage->application->meta->get_string(HX_("file",7c,ce,bb,43))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,getSavePath,return )

Float CoolUtil_obj::boundTo(Float value,Float min,Float max){
            	HX_STACKFRAME(&_hx_pos_2eed4b4541010048_207_boundTo)
HXDLIN( 207)		return ::Math_obj::max(min,::Math_obj::min(max,value));
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
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CoolUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CoolUtil_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CoolUtil_obj::__mClass;

static ::String CoolUtil_obj_sStaticFields[] = {
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
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CoolUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CoolUtil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CoolUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CoolUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace backend
