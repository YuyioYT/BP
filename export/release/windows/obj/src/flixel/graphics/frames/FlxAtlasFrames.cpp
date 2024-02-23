#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
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
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrameCollectionType
#include <flixel/graphics/frames/FlxFrameCollectionType.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxBasePoint
#include <flixel/util/FlxPool_flixel_math_FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_AttribAccess_Impl_
#include <haxe/xml/_Access/AttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_HasAttribAccess_Impl_
#include <haxe/xml/_Access/HasAttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_NodeListAccess_Impl_
#include <haxe/xml/_Access/NodeListAccess_Impl_.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d294561f5bda5770_25_new,"flixel.graphics.frames.FlxAtlasFrames","new",0xed20cbc8,"flixel.graphics.frames.FlxAtlasFrames.new","flixel/graphics/frames/FlxAtlasFrames.hx",25,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_406_addBorder,"flixel.graphics.frames.FlxAtlasFrames","addBorder",0x1a31fb55,"flixel.graphics.frames.FlxAtlasFrames.addBorder","flixel/graphics/frames/FlxAtlasFrames.hx",406,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_39_fromTexturePackerJson,"flixel.graphics.frames.FlxAtlasFrames","fromTexturePackerJson",0xae76e627,"flixel.graphics.frames.FlxAtlasFrames.fromTexturePackerJson","flixel/graphics/frames/FlxAtlasFrames.hx",39,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_98_texturePackerHelper,"flixel.graphics.frames.FlxAtlasFrames","texturePackerHelper",0x397d6e77,"flixel.graphics.frames.FlxAtlasFrames.texturePackerHelper","flixel/graphics/frames/FlxAtlasFrames.hx",98,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_129_fromLibGdx,"flixel.graphics.frames.FlxAtlasFrames","fromLibGdx",0x5ef5c818,"flixel.graphics.frames.FlxAtlasFrames.fromLibGdx","flixel/graphics/frames/FlxAtlasFrames.hx",129,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_208_getDimensions,"flixel.graphics.frames.FlxAtlasFrames","getDimensions",0x0a6267eb,"flixel.graphics.frames.FlxAtlasFrames.getDimensions","flixel/graphics/frames/FlxAtlasFrames.hx",208,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_229_fromSparrow,"flixel.graphics.frames.FlxAtlasFrames","fromSparrow",0x30bf432a,"flixel.graphics.frames.FlxAtlasFrames.fromSparrow","flixel/graphics/frames/FlxAtlasFrames.hx",229,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_294_fromTexturePackerXml,"flixel.graphics.frames.FlxAtlasFrames","fromTexturePackerXml",0x5ca98eb8,"flixel.graphics.frames.FlxAtlasFrames.fromTexturePackerXml","flixel/graphics/frames/FlxAtlasFrames.hx",294,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_346_fromSpriteSheetPacker,"flixel.graphics.frames.FlxAtlasFrames","fromSpriteSheetPacker",0x4fb8a81e,"flixel.graphics.frames.FlxAtlasFrames.fromSpriteSheetPacker","flixel/graphics/frames/FlxAtlasFrames.hx",346,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_392_findFrame,"flixel.graphics.frames.FlxAtlasFrames","findFrame",0xf36e229c,"flixel.graphics.frames.FlxAtlasFrames.findFrame","flixel/graphics/frames/FlxAtlasFrames.hx",392,0x501ecb67)
namespace flixel{
namespace graphics{
namespace frames{

void FlxAtlasFrames_obj::__construct( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxBasePoint border){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_25_new)
HXDLIN(  25)		super::__construct(parent,::flixel::graphics::frames::FlxFrameCollectionType_obj::ATLAS_dyn(),border);
            	}

Dynamic FlxAtlasFrames_obj::__CreateEmpty() { return new FlxAtlasFrames_obj; }

void *FlxAtlasFrames_obj::_hx_vtable = 0;

Dynamic FlxAtlasFrames_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxAtlasFrames_obj > _hx_result = new FlxAtlasFrames_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxAtlasFrames_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1ee6bdec) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1ee6bdec;
	} else {
		return inClassId==(int)0x7907b929;
	}
}

 ::flixel::graphics::frames::FlxFramesCollection FlxAtlasFrames_obj::addBorder( ::flixel::math::FlxBasePoint border){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_406_addBorder)
HXLINE( 407)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 407)		point->_inPool = false;
HXDLIN( 407)		 ::flixel::math::FlxBasePoint point1 = point;
HXDLIN( 407)		point1->_weak = true;
HXDLIN( 407)		 ::flixel::math::FlxBasePoint this1 = point1;
HXDLIN( 407)		 ::flixel::math::FlxBasePoint point2 = this->border;
HXDLIN( 407)		{
HXLINE( 407)			Float y = point2->y;
HXDLIN( 407)			this1->set_x((this1->x + point2->x));
HXDLIN( 407)			this1->set_y((this1->y + y));
            		}
HXDLIN( 407)		if (point2->_weak) {
HXLINE( 407)			point2->put();
            		}
HXDLIN( 407)		 ::flixel::math::FlxBasePoint this2 = this1;
HXDLIN( 407)		{
HXLINE( 407)			Float y1 = border->y;
HXDLIN( 407)			this2->set_x((this2->x + border->x));
HXDLIN( 407)			this2->set_y((this2->y + y1));
            		}
HXDLIN( 407)		if (border->_weak) {
HXLINE( 407)			border->put();
            		}
HXDLIN( 407)		 ::flixel::math::FlxBasePoint resultBorder = this2;
HXLINE( 408)		 ::flixel::graphics::frames::FlxAtlasFrames atlasFrames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(this->parent,resultBorder);
HXLINE( 409)		if (::hx::IsNotNull( atlasFrames )) {
HXLINE( 410)			return atlasFrames;
            		}
HXLINE( 412)		atlasFrames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,this->parent,resultBorder);
HXLINE( 414)		{
HXLINE( 414)			int _g = 0;
HXDLIN( 414)			::Array< ::Dynamic> _g1 = this->frames;
HXDLIN( 414)			while((_g < _g1->length)){
HXLINE( 414)				 ::flixel::graphics::frames::FlxFrame frame = _g1->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXDLIN( 414)				_g = (_g + 1);
HXLINE( 415)				atlasFrames->pushFrame(frame->setBorderTo(border,null()));
            			}
            		}
HXLINE( 417)		return atlasFrames;
            	}


 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromTexturePackerJson( ::Dynamic Source, ::Dynamic Description){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_39_fromTexturePackerJson)
HXLINE(  40)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,false,null());
HXLINE(  41)		if (::hx::IsNull( graphic )) {
HXLINE(  42)			return null();
            		}
HXLINE(  45)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE(  46)		if (::hx::IsNotNull( frames )) {
HXLINE(  47)			return frames;
            		}
HXLINE(  49)		bool _hx_tmp;
HXDLIN(  49)		if (::hx::IsNotNull( graphic )) {
HXLINE(  49)			_hx_tmp = ::hx::IsNull( Description );
            		}
            		else {
HXLINE(  49)			_hx_tmp = true;
            		}
HXDLIN(  49)		if (_hx_tmp) {
HXLINE(  50)			return null();
            		}
HXLINE(  52)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE(  54)		 ::Dynamic data;
HXLINE(  56)		if (::Std_obj::isOfType(Description,::hx::ClassOf< ::String >())) {
HXLINE(  58)			::String json = ( (::String)(Description) );
HXLINE(  60)			if (::openfl::utils::Assets_obj::exists(json,null())) {
HXLINE(  61)				json = ::openfl::utils::Assets_obj::getText(json);
            			}
HXLINE(  63)			data =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,json)->doParse();
            		}
            		else {
HXLINE(  67)			data = Description;
            		}
HXLINE(  71)		if (::Std_obj::isOfType( ::Dynamic(data->__Field(HX_("frames",a6,af,85,ac),::hx::paccDynamic)),::hx::ArrayBase::__mClass)) {
HXLINE(  73)			int _g = 0;
HXDLIN(  73)			::Array< ::Dynamic> _g1 = ::Lambda_obj::array(data->__Field(HX_("frames",a6,af,85,ac),::hx::paccDynamic));
HXDLIN(  73)			while((_g < _g1->length)){
HXLINE(  73)				 ::Dynamic frame = _g1->__get(_g);
HXDLIN(  73)				_g = (_g + 1);
HXLINE(  75)				::flixel::graphics::frames::FlxAtlasFrames_obj::texturePackerHelper(( (::String)(frame->__Field(HX_("filename",c7,2e,6a,77),::hx::paccDynamic)) ),frame,frames);
            			}
            		}
            		else {
HXLINE(  81)			int _g = 0;
HXDLIN(  81)			::Array< ::String > _g1 = ::Reflect_obj::fields( ::Dynamic(data->__Field(HX_("frames",a6,af,85,ac),::hx::paccDynamic)));
HXDLIN(  81)			while((_g < _g1->length)){
HXLINE(  81)				::String frameName = _g1->__get(_g);
HXDLIN(  81)				_g = (_g + 1);
HXLINE(  83)				::flixel::graphics::frames::FlxAtlasFrames_obj::texturePackerHelper(frameName,::Reflect_obj::field( ::Dynamic(data->__Field(HX_("frames",a6,af,85,ac),::hx::paccDynamic)),frameName),frames);
            			}
            		}
HXLINE(  87)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromTexturePackerJson,return )

void FlxAtlasFrames_obj::texturePackerHelper(::String FrameName, ::Dynamic FrameData, ::flixel::graphics::frames::FlxAtlasFrames Frames){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_98_texturePackerHelper)
HXLINE(  99)		bool rotated = ( (bool)(FrameData->__Field(HX_("rotated",a9,49,1d,f1),::hx::paccDynamic)) );
HXLINE( 100)		::String name = FrameName;
HXLINE( 101)		Float x = ( (Float)( ::Dynamic(FrameData->__Field(HX_("sourceSize",3c,87,b7,74),::hx::paccDynamic))->__Field(HX_("w",77,00,00,00),::hx::paccDynamic)) );
HXDLIN( 101)		Float y = ( (Float)( ::Dynamic(FrameData->__Field(HX_("sourceSize",3c,87,b7,74),::hx::paccDynamic))->__Field(HX_("h",68,00,00,00),::hx::paccDynamic)) );
HXDLIN( 101)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x,y);
HXDLIN( 101)		point->_inPool = false;
HXDLIN( 101)		 ::flixel::math::FlxBasePoint sourceSize = point;
HXLINE( 102)		Float x1 = ( (Float)( ::Dynamic(FrameData->__Field(HX_("spriteSourceSize",a1,7f,c1,03),::hx::paccDynamic))->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 102)		Float y1 = ( (Float)( ::Dynamic(FrameData->__Field(HX_("spriteSourceSize",a1,7f,c1,03),::hx::paccDynamic))->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN( 102)		 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x1,y1);
HXDLIN( 102)		point1->_inPool = false;
HXDLIN( 102)		 ::flixel::math::FlxBasePoint offset = point1;
HXLINE( 103)		int angle = 0;
HXLINE( 104)		 ::flixel::math::FlxRect frameRect = null();
HXLINE( 106)		if (rotated) {
HXLINE( 108)			Float X = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic))->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 108)			Float Y = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic))->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN( 108)			Float Width = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic))->__Field(HX_("h",68,00,00,00),::hx::paccDynamic)) );
HXDLIN( 108)			Float Height = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic))->__Field(HX_("w",77,00,00,00),::hx::paccDynamic)) );
HXDLIN( 108)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 108)			_this->x = X;
HXDLIN( 108)			_this->y = Y;
HXDLIN( 108)			_this->width = Width;
HXDLIN( 108)			_this->height = Height;
HXDLIN( 108)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 108)			rect->_inPool = false;
HXDLIN( 108)			frameRect = rect;
HXLINE( 109)			angle = -90;
            		}
            		else {
HXLINE( 113)			Float X = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic))->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 113)			Float Y = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic))->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN( 113)			Float Width = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic))->__Field(HX_("w",77,00,00,00),::hx::paccDynamic)) );
HXDLIN( 113)			Float Height = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic))->__Field(HX_("h",68,00,00,00),::hx::paccDynamic)) );
HXDLIN( 113)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 113)			_this->x = X;
HXDLIN( 113)			_this->y = Y;
HXDLIN( 113)			_this->width = Width;
HXDLIN( 113)			_this->height = Height;
HXDLIN( 113)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 113)			rect->_inPool = false;
HXDLIN( 113)			frameRect = rect;
            		}
HXLINE( 116)		Frames->addAtlasFrame(frameRect,sourceSize,offset,name,angle,null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAtlasFrames_obj,texturePackerHelper,(void))

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromLibGdx( ::Dynamic source,::String description){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_129_fromLibGdx)
HXLINE( 130)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(source,null(),null());
HXLINE( 131)		if (::hx::IsNull( graphic )) {
HXLINE( 132)			return null();
            		}
HXLINE( 135)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 136)		if (::hx::IsNotNull( frames )) {
HXLINE( 137)			return frames;
            		}
HXLINE( 139)		bool _hx_tmp;
HXDLIN( 139)		if (::hx::IsNotNull( graphic )) {
HXLINE( 139)			_hx_tmp = ::hx::IsNull( description );
            		}
            		else {
HXLINE( 139)			_hx_tmp = true;
            		}
HXDLIN( 139)		if (_hx_tmp) {
HXLINE( 140)			return null();
            		}
HXLINE( 142)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 144)		if (::openfl::utils::Assets_obj::exists(description,null())) {
HXLINE( 145)			description = ::openfl::utils::Assets_obj::getText(description);
            		}
HXLINE( 147)		::String pack = ::StringTools_obj::trim(description);
HXLINE( 148)		::Array< ::String > lines = pack.split(HX_("\n",0a,00,00,00));
HXLINE( 151)		int repeatLine;
HXDLIN( 151)		if ((lines->__get(3).indexOf(HX_("repeat:",7f,d8,87,a6),null()) > -1)) {
HXLINE( 151)			repeatLine = 3;
            		}
            		else {
HXLINE( 151)			repeatLine = 4;
            		}
HXLINE( 152)		lines->removeRange(0,(repeatLine + 1));
HXLINE( 154)		int numElementsPerImage = 7;
HXLINE( 155)		int numImages = ::Std_obj::_hx_int((( (Float)(lines->length) ) / ( (Float)(numElementsPerImage) )));
HXLINE( 157)		{
HXLINE( 157)			int _g = 0;
HXDLIN( 157)			int _g1 = numImages;
HXDLIN( 157)			while((_g < _g1)){
HXLINE( 157)				_g = (_g + 1);
HXDLIN( 157)				int i = (_g - 1);
HXLINE( 159)				int curIndex = (i * numElementsPerImage);
HXLINE( 161)				curIndex = (curIndex + 1);
HXDLIN( 161)				::String name = lines->__get((curIndex - 1));
HXLINE( 162)				curIndex = (curIndex + 1);
HXDLIN( 162)				bool rotated = (lines->__get((curIndex - 1)).indexOf(HX_("true",4e,a7,03,4d),null()) >= 0);
HXLINE( 163)				int angle;
HXDLIN( 163)				if (rotated) {
HXLINE( 163)					angle = 90;
            				}
            				else {
HXLINE( 163)					angle = 0;
            				}
HXLINE( 165)				curIndex = (curIndex + 1);
HXDLIN( 165)				::String tempString = lines->__get((curIndex - 1));
HXLINE( 166)				 ::Dynamic size = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString);
HXLINE( 168)				int imageX = ( (int)(size->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXLINE( 169)				int imageY = ( (int)(size->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXLINE( 171)				curIndex = (curIndex + 1);
HXDLIN( 171)				tempString = lines->__get((curIndex - 1));
HXLINE( 172)				size = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString);
HXLINE( 174)				int imageWidth = ( (int)(size->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXLINE( 175)				int imageHeight = ( (int)(size->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXLINE( 177)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 177)				_this->x = ( (Float)(imageX) );
HXDLIN( 177)				_this->y = ( (Float)(imageY) );
HXDLIN( 177)				_this->width = ( (Float)(imageWidth) );
HXDLIN( 177)				_this->height = ( (Float)(imageHeight) );
HXDLIN( 177)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 177)				rect->_inPool = false;
HXDLIN( 177)				 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 179)				curIndex = (curIndex + 1);
HXDLIN( 179)				tempString = lines->__get((curIndex - 1));
HXLINE( 180)				size = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString);
HXLINE( 182)				Float x = ( (Float)(size->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 182)				Float y = ( (Float)(size->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN( 182)				 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x,y);
HXDLIN( 182)				point->_inPool = false;
HXDLIN( 182)				 ::flixel::math::FlxBasePoint sourceSize = point;
HXLINE( 184)				curIndex = (curIndex + 1);
HXDLIN( 184)				tempString = lines->__get((curIndex - 1));
HXLINE( 185)				size = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString);
HXLINE( 187)				curIndex = (curIndex + 1);
HXDLIN( 187)				tempString = lines->__get((curIndex - 1));
HXLINE( 188)				 ::Dynamic index = ::Std_obj::parseInt(tempString.split(HX_(":",3a,00,00,00))->__get(1));
HXLINE( 190)				if (::hx::IsNotEq( index,-1 )) {
HXLINE( 191)					name = (name + (HX_("_",5f,00,00,00) + index));
            				}
HXLINE( 197)				Float x1 = ( (Float)(size->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 197)				Float y1 = ((sourceSize->y - ( (Float)(size->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) )) - ( (Float)(imageHeight) ));
HXDLIN( 197)				 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x1,y1);
HXDLIN( 197)				point1->_inPool = false;
HXDLIN( 197)				 ::flixel::math::FlxBasePoint offset = point1;
HXLINE( 198)				frames->addAtlasFrame(rect1,sourceSize,offset,name,angle,null(),null());
            			}
            		}
HXLINE( 201)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromLibGdx,return )

 ::Dynamic FlxAtlasFrames_obj::getDimensions(::String line){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_208_getDimensions)
HXLINE( 209)		int colonPosition = line.indexOf(HX_(":",3a,00,00,00),null());
HXLINE( 210)		int comaPosition = line.indexOf(HX_(",",2c,00,00,00),null());
HXLINE( 213)		 ::Dynamic _hx_tmp = ::Std_obj::parseInt(line.substring((colonPosition + 1),comaPosition));
HXLINE( 212)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),_hx_tmp)
            			->setFixed(1,HX_("y",79,00,00,00),::Std_obj::parseInt(line.substring((comaPosition + 1),line.length))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAtlasFrames_obj,getDimensions,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromSparrow( ::Dynamic Source,::String Description){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_229_fromSparrow)
HXLINE( 230)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,null(),null());
HXLINE( 231)		if (::hx::IsNull( graphic )) {
HXLINE( 232)			return null();
            		}
HXLINE( 235)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 236)		if (::hx::IsNotNull( frames )) {
HXLINE( 237)			return frames;
            		}
HXLINE( 239)		bool _hx_tmp;
HXDLIN( 239)		if (::hx::IsNotNull( graphic )) {
HXLINE( 239)			_hx_tmp = ::hx::IsNull( Description );
            		}
            		else {
HXLINE( 239)			_hx_tmp = true;
            		}
HXDLIN( 239)		if (_hx_tmp) {
HXLINE( 240)			return null();
            		}
HXLINE( 242)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 244)		if (::openfl::utils::Assets_obj::exists(Description,null())) {
HXLINE( 245)			Description = ::openfl::utils::Assets_obj::getText(Description);
            		}
HXLINE( 247)		 ::Xml x = ::Xml_obj::parse(Description)->firstElement();
HXDLIN( 247)		bool _hx_tmp1;
HXDLIN( 247)		if ((x->nodeType != ::Xml_obj::Document)) {
HXLINE( 247)			_hx_tmp1 = (x->nodeType != ::Xml_obj::Element);
            		}
            		else {
HXLINE( 247)			_hx_tmp1 = false;
            		}
HXDLIN( 247)		if (_hx_tmp1) {
HXLINE( 247)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid nodeType ",3b,e0,cb,e1) + ::_Xml::XmlType_Impl__obj::toString(x->nodeType))));
            		}
HXDLIN( 247)		 ::Xml this1 = x;
HXDLIN( 247)		 ::Xml data = this1;
HXLINE( 249)		{
HXLINE( 249)			int _g = 0;
HXDLIN( 249)			::Array< ::Dynamic> _g1 = ::haxe::xml::_Access::NodeListAccess_Impl__obj::resolve(data,HX_("SubTexture",5b,7b,fb,11));
HXDLIN( 249)			while((_g < _g1->length)){
HXLINE( 249)				 ::Xml texture = _g1->__get(_g).StaticCast<  ::Xml >();
HXDLIN( 249)				_g = (_g + 1);
HXLINE( 251)				::String name = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("name",4b,72,ff,48));
HXLINE( 252)				bool trimmed = ::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(texture,HX_("frameX",8b,af,85,ac));
HXLINE( 253)				bool rotated;
HXDLIN( 253)				if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(texture,HX_("rotated",a9,49,1d,f1))) {
HXLINE( 253)					rotated = (::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("rotated",a9,49,1d,f1)) == HX_("true",4e,a7,03,4d));
            				}
            				else {
HXLINE( 253)					rotated = false;
            				}
HXLINE( 254)				bool flipX;
HXDLIN( 254)				if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(texture,HX_("flipX",0b,45,92,02))) {
HXLINE( 254)					flipX = (::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("flipX",0b,45,92,02)) == HX_("true",4e,a7,03,4d));
            				}
            				else {
HXLINE( 254)					flipX = false;
            				}
HXLINE( 255)				bool flipY;
HXDLIN( 255)				if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(texture,HX_("flipY",0c,45,92,02))) {
HXLINE( 255)					flipY = (::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("flipY",0c,45,92,02)) == HX_("true",4e,a7,03,4d));
            				}
            				else {
HXLINE( 255)					flipY = false;
            				}
HXLINE( 257)				Float X = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("x",78,00,00,00)));
HXDLIN( 257)				Float Y = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("y",79,00,00,00)));
HXDLIN( 257)				Float Width = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("width",06,b6,62,ca)));
HXDLIN( 257)				Float Height = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("height",e7,07,4c,02)));
HXDLIN( 257)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 257)				_this->x = X;
HXDLIN( 257)				_this->y = Y;
HXDLIN( 257)				_this->width = Width;
HXDLIN( 257)				_this->height = Height;
HXDLIN( 257)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 257)				rect->_inPool = false;
HXDLIN( 257)				 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 260)				 ::openfl::geom::Rectangle size;
HXDLIN( 260)				if (trimmed) {
HXLINE( 262)					 ::Dynamic size1 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("frameX",8b,af,85,ac)));
HXDLIN( 262)					 ::Dynamic size2 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("frameY",8c,af,85,ac)));
HXDLIN( 262)					 ::Dynamic size3 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("frameWidth",99,ea,88,ad)));
HXLINE( 260)					size =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,size1,size2,size3,::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("frameHeight",f4,d3,93,e0))));
            				}
            				else {
HXLINE( 260)					size =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,rect1->width,rect1->height);
            				}
HXLINE( 270)				int angle;
HXDLIN( 270)				if (rotated) {
HXLINE( 270)					angle = -90;
            				}
            				else {
HXLINE( 270)					angle = 0;
            				}
HXLINE( 272)				Float x = -(size->get_left());
HXDLIN( 272)				Float y = -(size->get_top());
HXDLIN( 272)				 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x,y);
HXDLIN( 272)				point->_inPool = false;
HXDLIN( 272)				 ::flixel::math::FlxBasePoint offset = point;
HXLINE( 273)				Float x1 = size->width;
HXDLIN( 273)				Float y1 = size->height;
HXDLIN( 273)				 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x1,y1);
HXDLIN( 273)				point1->_inPool = false;
HXDLIN( 273)				 ::flixel::math::FlxBasePoint sourceSize = point1;
HXLINE( 275)				bool _hx_tmp;
HXDLIN( 275)				if (rotated) {
HXLINE( 275)					_hx_tmp = !(trimmed);
            				}
            				else {
HXLINE( 275)					_hx_tmp = false;
            				}
HXDLIN( 275)				if (_hx_tmp) {
HXLINE( 276)					Float y = size->width;
HXDLIN( 276)					sourceSize->set_x(size->height);
HXDLIN( 276)					sourceSize->set_y(y);
            				}
HXLINE( 278)				frames->addAtlasFrame(rect1,sourceSize,offset,name,angle,flipX,flipY);
            			}
            		}
HXLINE( 281)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromSparrow,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromTexturePackerXml( ::Dynamic Source,::String Description){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_294_fromTexturePackerXml)
HXLINE( 295)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,false,null());
HXLINE( 296)		if (::hx::IsNull( graphic )) {
HXLINE( 297)			return null();
            		}
HXLINE( 300)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 301)		if (::hx::IsNotNull( frames )) {
HXLINE( 302)			return frames;
            		}
HXLINE( 304)		bool _hx_tmp;
HXDLIN( 304)		if (::hx::IsNotNull( graphic )) {
HXLINE( 304)			_hx_tmp = ::hx::IsNull( Description );
            		}
            		else {
HXLINE( 304)			_hx_tmp = true;
            		}
HXDLIN( 304)		if (_hx_tmp) {
HXLINE( 305)			return null();
            		}
HXLINE( 307)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 309)		if (::openfl::utils::Assets_obj::exists(Description,null())) {
HXLINE( 310)			Description = ::openfl::utils::Assets_obj::getText(Description);
            		}
HXLINE( 312)		 ::Xml xml = ::Xml_obj::parse(Description);
HXLINE( 314)		{
HXLINE( 314)			 ::Dynamic sprite = xml->firstElement()->elements();
HXDLIN( 314)			while(( (bool)(sprite->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 314)				 ::Xml sprite1 = ( ( ::Xml)(sprite->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 316)				bool trimmed;
HXDLIN( 316)				if (!(sprite1->exists(HX_("oX",09,61,00,00)))) {
HXLINE( 316)					trimmed = sprite1->exists(HX_("oY",0a,61,00,00));
            				}
            				else {
HXLINE( 316)					trimmed = true;
            				}
HXLINE( 317)				bool rotated;
HXDLIN( 317)				if (sprite1->exists(HX_("r",72,00,00,00))) {
HXLINE( 317)					rotated = (sprite1->get(HX_("r",72,00,00,00)) == HX_("y",79,00,00,00));
            				}
            				else {
HXLINE( 317)					rotated = false;
            				}
HXLINE( 318)				int angle;
HXDLIN( 318)				if (rotated) {
HXLINE( 318)					angle = -90;
            				}
            				else {
HXLINE( 318)					angle = 0;
            				}
HXLINE( 319)				::String name = sprite1->get(HX_("n",6e,00,00,00));
HXLINE( 320)				 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(0,0);
HXDLIN( 320)				point->_inPool = false;
HXDLIN( 320)				 ::flixel::math::FlxBasePoint offset = point;
HXLINE( 321)				Float X = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("x",78,00,00,00)))) );
HXDLIN( 321)				Float Y = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("y",79,00,00,00)))) );
HXDLIN( 321)				Float Width = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("w",77,00,00,00)))) );
HXDLIN( 321)				Float Height = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("h",68,00,00,00)))) );
HXDLIN( 321)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 321)				_this->x = X;
HXDLIN( 321)				_this->y = Y;
HXDLIN( 321)				_this->width = Width;
HXDLIN( 321)				_this->height = Height;
HXDLIN( 321)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 321)				rect->_inPool = false;
HXDLIN( 321)				 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 322)				Float x = rect1->width;
HXDLIN( 322)				Float y = rect1->height;
HXDLIN( 322)				 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x,y);
HXDLIN( 322)				point1->_inPool = false;
HXDLIN( 322)				 ::flixel::math::FlxBasePoint sourceSize = point1;
HXLINE( 324)				if (trimmed) {
HXLINE( 326)					{
HXLINE( 326)						Float x = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("oX",09,61,00,00)))) );
HXDLIN( 326)						Float y = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("oY",0a,61,00,00)))) );
HXDLIN( 326)						offset->set_x(x);
HXDLIN( 326)						offset->set_y(y);
            					}
HXLINE( 327)					{
HXLINE( 327)						Float x1 = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("oW",08,61,00,00)))) );
HXDLIN( 327)						Float y1 = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("oH",f9,60,00,00)))) );
HXDLIN( 327)						sourceSize->set_x(x1);
HXDLIN( 327)						sourceSize->set_y(y1);
            					}
            				}
HXLINE( 330)				frames->addAtlasFrame(rect1,sourceSize,offset,name,angle,null(),null());
            			}
            		}
HXLINE( 333)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromTexturePackerXml,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromSpriteSheetPacker( ::Dynamic Source,::String Description){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_346_fromSpriteSheetPacker)
HXLINE( 347)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,null(),null());
HXLINE( 348)		if (::hx::IsNull( graphic )) {
HXLINE( 349)			return null();
            		}
HXLINE( 352)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 353)		if (::hx::IsNotNull( frames )) {
HXLINE( 354)			return frames;
            		}
HXLINE( 356)		bool _hx_tmp;
HXDLIN( 356)		if (::hx::IsNotNull( graphic )) {
HXLINE( 356)			_hx_tmp = ::hx::IsNull( Description );
            		}
            		else {
HXLINE( 356)			_hx_tmp = true;
            		}
HXDLIN( 356)		if (_hx_tmp) {
HXLINE( 357)			return null();
            		}
HXLINE( 359)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 361)		if (::openfl::utils::Assets_obj::exists(Description,null())) {
HXLINE( 362)			Description = ::openfl::utils::Assets_obj::getText(Description);
            		}
HXLINE( 364)		::String pack = ::StringTools_obj::trim(Description);
HXLINE( 365)		::Array< ::String > lines = pack.split(HX_("\n",0a,00,00,00));
HXLINE( 367)		{
HXLINE( 367)			int _g = 0;
HXDLIN( 367)			int _g1 = lines->length;
HXDLIN( 367)			while((_g < _g1)){
HXLINE( 367)				_g = (_g + 1);
HXDLIN( 367)				int i = (_g - 1);
HXLINE( 369)				::Array< ::String > currImageData = lines->__get(i).split(HX_("=",3d,00,00,00));
HXLINE( 370)				::String name = ::StringTools_obj::trim(currImageData->__get(0));
HXLINE( 371)				::Array< ::String > currImageRegion = ::StringTools_obj::trim(currImageData->__get(1)).split(HX_(" ",20,00,00,00));
HXLINE( 373)				Float X = ( (Float)(::Std_obj::parseInt(currImageRegion->__get(0))) );
HXDLIN( 373)				Float Y = ( (Float)(::Std_obj::parseInt(currImageRegion->__get(1))) );
HXDLIN( 373)				Float Width = ( (Float)(::Std_obj::parseInt(currImageRegion->__get(2))) );
HXDLIN( 373)				Float Height = ( (Float)(::Std_obj::parseInt(currImageRegion->__get(3))) );
HXDLIN( 373)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 373)				_this->x = X;
HXDLIN( 373)				_this->y = Y;
HXDLIN( 373)				_this->width = Width;
HXDLIN( 373)				_this->height = Height;
HXDLIN( 373)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 373)				rect->_inPool = false;
HXDLIN( 373)				 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 375)				Float x = rect1->width;
HXDLIN( 375)				Float y = rect1->height;
HXDLIN( 375)				 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x,y);
HXDLIN( 375)				point->_inPool = false;
HXDLIN( 375)				 ::flixel::math::FlxBasePoint sourceSize = point;
HXLINE( 376)				 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 376)				point1->_inPool = false;
HXDLIN( 376)				 ::flixel::math::FlxBasePoint offset = point1;
HXLINE( 378)				frames->addAtlasFrame(rect1,sourceSize,offset,name,0,null(),null());
            			}
            		}
HXLINE( 381)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromSpriteSheetPacker,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::findFrame( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxBasePoint border){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_392_findFrame)
HXLINE( 393)		if (::hx::IsNull( border )) {
HXLINE( 394)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 394)			point->_inPool = false;
HXDLIN( 394)			 ::flixel::math::FlxBasePoint point1 = point;
HXDLIN( 394)			point1->_weak = true;
HXDLIN( 394)			border = point1;
            		}
HXLINE( 396)		 ::flixel::graphics::frames::FlxFrameCollectionType type = ::flixel::graphics::frames::FlxFrameCollectionType_obj::ATLAS_dyn();
HXDLIN( 396)		::cpp::VirtualArray collections = ( (::cpp::VirtualArray)(graphic->frameCollections->get(type)) );
HXDLIN( 396)		if (::hx::IsNull( collections )) {
HXLINE( 396)			collections = ::Array_obj< ::Dynamic>::__new();
HXDLIN( 396)			graphic->frameCollections->set(type,collections);
            		}
HXDLIN( 396)		::Array< ::Dynamic> atlasFrames = collections;
HXLINE( 398)		{
HXLINE( 398)			int _g = 0;
HXDLIN( 398)			while((_g < atlasFrames->length)){
HXLINE( 398)				 ::flixel::graphics::frames::FlxAtlasFrames atlas = atlasFrames->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxAtlasFrames >();
HXDLIN( 398)				_g = (_g + 1);
HXLINE( 399)				 ::flixel::math::FlxBasePoint _this = atlas->border;
HXDLIN( 399)				bool result;
HXDLIN( 399)				if ((::Math_obj::abs((_this->x - border->x)) <= ((Float)0.0000001))) {
HXLINE( 399)					result = (::Math_obj::abs((_this->y - border->y)) <= ((Float)0.0000001));
            				}
            				else {
HXLINE( 399)					result = false;
            				}
HXDLIN( 399)				if (border->_weak) {
HXLINE( 399)					border->put();
            				}
HXDLIN( 399)				if (result) {
HXLINE( 400)					return atlas;
            				}
            			}
            		}
HXLINE( 402)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,findFrame,return )


::hx::ObjectPtr< FlxAtlasFrames_obj > FlxAtlasFrames_obj::__new( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxBasePoint border) {
	::hx::ObjectPtr< FlxAtlasFrames_obj > __this = new FlxAtlasFrames_obj();
	__this->__construct(parent,border);
	return __this;
}

::hx::ObjectPtr< FlxAtlasFrames_obj > FlxAtlasFrames_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxBasePoint border) {
	FlxAtlasFrames_obj *__this = (FlxAtlasFrames_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxAtlasFrames_obj), true, "flixel.graphics.frames.FlxAtlasFrames"));
	*(void **)__this = FlxAtlasFrames_obj::_hx_vtable;
	__this->__construct(parent,border);
	return __this;
}

FlxAtlasFrames_obj::FlxAtlasFrames_obj()
{
}

::hx::Val FlxAtlasFrames_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"addBorder") ) { return ::hx::Val( addBorder_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxAtlasFrames_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"findFrame") ) { outValue = findFrame_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromLibGdx") ) { outValue = fromLibGdx_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromSparrow") ) { outValue = fromSparrow_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getDimensions") ) { outValue = getDimensions_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"texturePackerHelper") ) { outValue = texturePackerHelper_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fromTexturePackerXml") ) { outValue = fromTexturePackerXml_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"fromTexturePackerJson") ) { outValue = fromTexturePackerJson_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromSpriteSheetPacker") ) { outValue = fromSpriteSheetPacker_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxAtlasFrames_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxAtlasFrames_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxAtlasFrames_obj_sMemberFields[] = {
	HX_("addBorder",ed,81,3e,1c),
	::String(null()) };

::hx::Class FlxAtlasFrames_obj::__mClass;

static ::String FlxAtlasFrames_obj_sStaticFields[] = {
	HX_("fromTexturePackerJson",bf,f0,7e,be),
	HX_("texturePackerHelper",0f,23,bd,b2),
	HX_("fromLibGdx",80,06,df,27),
	HX_("getDimensions",83,1a,12,39),
	HX_("fromSparrow",c2,9f,ec,33),
	HX_("fromTexturePackerXml",20,df,27,fb),
	HX_("fromSpriteSheetPacker",b6,b2,c0,5f),
	HX_("findFrame",34,a9,7a,f5),
	::String(null())
};

void FlxAtlasFrames_obj::__register()
{
	FlxAtlasFrames_obj _hx_dummy;
	FlxAtlasFrames_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.FlxAtlasFrames",d6,87,d5,6f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAtlasFrames_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxAtlasFrames_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxAtlasFrames_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxAtlasFrames_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAtlasFrames_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAtlasFrames_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
