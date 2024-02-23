#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_animateatlas_AtlasFrameMaker
#include <animateatlas/AtlasFrameMaker.h>
#endif
#ifndef INCLUDED_animateatlas_displayobject_SpriteAnimationLibrary
#include <animateatlas/displayobject/SpriteAnimationLibrary.h>
#endif
#ifndef INCLUDED_animateatlas_displayobject_SpriteMovieClip
#include <animateatlas/displayobject/SpriteMovieClip.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
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
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#include <openfl/display3D/textures/RectangleTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_tjson_TJSON
#include <tjson/TJSON.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_456b101310759157_25_new,"animateatlas.AtlasFrameMaker","new",0xbc9f8af0,"animateatlas.AtlasFrameMaker.new","animateatlas/AtlasFrameMaker.hx",25,0x273036c1)
HX_LOCAL_STACK_FRAME(_hx_pos_456b101310759157_40_construct,"animateatlas.AtlasFrameMaker","construct",0xd2935ea7,"animateatlas.AtlasFrameMaker.construct","animateatlas/AtlasFrameMaker.hx",40,0x273036c1)
HX_LOCAL_STACK_FRAME(_hx_pos_456b101310759157_91_getFlxGraphic,"animateatlas.AtlasFrameMaker","getFlxGraphic",0x4808fb1c,"animateatlas.AtlasFrameMaker.getFlxGraphic","animateatlas/AtlasFrameMaker.hx",91,0x273036c1)
HX_LOCAL_STACK_FRAME(_hx_pos_456b101310759157_112_getFramesArray,"animateatlas.AtlasFrameMaker","getFramesArray",0xd801368d,"animateatlas.AtlasFrameMaker.getFramesArray","animateatlas/AtlasFrameMaker.hx",112,0x273036c1)
namespace animateatlas{

void AtlasFrameMaker_obj::__construct( ::flixel::graphics::FlxGraphic parent, ::flixel::graphics::frames::FlxFrameCollectionType type, ::flixel::math::FlxBasePoint border){
            	HX_STACKFRAME(&_hx_pos_456b101310759157_25_new)
HXDLIN(  25)		super::__construct(parent,type,border);
            	}

Dynamic AtlasFrameMaker_obj::__CreateEmpty() { return new AtlasFrameMaker_obj; }

void *AtlasFrameMaker_obj::_hx_vtable = 0;

Dynamic AtlasFrameMaker_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AtlasFrameMaker_obj > _hx_result = new AtlasFrameMaker_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool AtlasFrameMaker_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7907b929) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x7907b929;
	} else {
		return inClassId==(int)0x7fc39e38;
	}
}

 ::flixel::graphics::frames::FlxFramesCollection AtlasFrameMaker_obj::construct(::String key,::Array< ::String > _excludeArray, ::Dynamic __o_noAntialiasing){
            		 ::Dynamic noAntialiasing = __o_noAntialiasing;
            		if (::hx::IsNull(__o_noAntialiasing)) noAntialiasing = false;
            	HX_GC_STACKFRAME(&_hx_pos_456b101310759157_40_construct)
HXLINE(  45)		::Array< ::Dynamic> frameArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  47)		if (::backend::Paths_obj::fileExists(((HX_("images/",77,50,74,c1) + key) + HX_("/spritemap1.json",2d,0f,b9,fc)),HX_("TEXT",ad,94,ba,37),null(),null())) {
HXLINE(  49)			::states::PlayState_obj::instance->addTextToDebug(HX_("Only Spritemaps made with Adobe Animate 2018 are supported",f6,1f,5f,35),-65536);
HXLINE(  50)			::haxe::Log_obj::trace(HX_("Only Spritemaps made with Adobe Animate 2018 are supported",f6,1f,5f,35),::hx::SourceInfo(HX_("source/animateatlas/AtlasFrameMaker.hx",4d,f2,ba,1e),50,HX_("animateatlas.AtlasFrameMaker",fe,92,eb,0b),HX_("construct",17,58,ad,4f)));
HXLINE(  51)			return null();
            		}
HXLINE(  54)		 ::Dynamic animationData = ::tjson::TJSON_obj::parse(::backend::Paths_obj::getTextFromFile(((HX_("images/",77,50,74,c1) + key) + HX_("/Animation.json",61,fc,54,44)),null()),null(),null());
HXLINE(  55)		 ::Dynamic atlasData = ::tjson::TJSON_obj::parse(::StringTools_obj::replace(::backend::Paths_obj::getTextFromFile(((HX_("images/",77,50,74,c1) + key) + HX_("/spritemap.json",ae,2e,a7,76)),null()),HX_W(u"\ufeff",fe53,00b5),HX_("",00,00,00,00)),null(),null());
HXLINE(  57)		 ::flixel::graphics::FlxGraphic graphic = ::animateatlas::AtlasFrameMaker_obj::getFlxGraphic(((HX_("",00,00,00,00) + key) + HX_("/spritemap",a8,c1,c8,a3)));
HXLINE(  60)		 ::animateatlas::displayobject::SpriteAnimationLibrary ss =  ::animateatlas::displayobject::SpriteAnimationLibrary_obj::__alloc( HX_CTX ,animationData,atlasData,graphic->bitmap);
HXLINE(  61)		 ::animateatlas::displayobject::SpriteMovieClip t = ss->createAnimation(( (bool)(noAntialiasing) ),null());
HXLINE(  62)		if (::hx::IsNull( _excludeArray )) {
HXLINE(  64)			_excludeArray = t->getFrameLabels();
            		}
HXLINE(  67)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  67)		::String _hx_tmp1 = (HX_("Creating: ",3f,be,03,b5) + ::Std_obj::string(_excludeArray));
HXDLIN(  67)		_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/animateatlas/AtlasFrameMaker.hx",4d,f2,ba,1e),67,HX_("animateatlas.AtlasFrameMaker",fe,92,eb,0b),HX_("construct",17,58,ad,4f)));
HXLINE(  44)		 ::flixel::graphics::frames::FlxFramesCollection frameCollection =  ::flixel::graphics::frames::FlxFramesCollection_obj::__alloc( HX_CTX ,graphic,::flixel::graphics::frames::FlxFrameCollectionType_obj::IMAGE_dyn(),null());
HXLINE(  70)		{
HXLINE(  70)			int _g = 0;
HXDLIN(  70)			while((_g < _excludeArray->length)){
HXLINE(  70)				::String x = _excludeArray->__get(_g);
HXDLIN(  70)				_g = (_g + 1);
HXLINE(  72)				frameArray->push(::animateatlas::AtlasFrameMaker_obj::getFramesArray(t,x));
            			}
            		}
HXLINE(  75)		{
HXLINE(  75)			int _g1 = 0;
HXDLIN(  75)			while((_g1 < frameArray->length)){
HXLINE(  75)				::Array< ::Dynamic> x = frameArray->__get(_g1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  75)				_g1 = (_g1 + 1);
HXLINE(  77)				{
HXLINE(  77)					int _g = 0;
HXDLIN(  77)					while((_g < x->length)){
HXLINE(  77)						 ::flixel::graphics::frames::FlxFrame y = x->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXDLIN(  77)						_g = (_g + 1);
HXLINE(  79)						frameCollection->pushFrame(y);
            					}
            				}
            			}
            		}
HXLINE(  84)		graphic->bitmap->dispose();
HXLINE(  85)		graphic->bitmap->disposeImage();
HXLINE(  86)		graphic->destroy();
HXLINE(  87)		return frameCollection;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AtlasFrameMaker_obj,construct,return )

 ::flixel::graphics::FlxGraphic AtlasFrameMaker_obj::getFlxGraphic(::String key){
            	HX_STACKFRAME(&_hx_pos_456b101310759157_91_getFlxGraphic)
HXLINE(  92)		 ::openfl::display::BitmapData bitmap = null();
HXLINE(  93)		::String file = null();
HXLINE(  96)		file = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)));
HXLINE(  97)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  98)			bitmap = ::openfl::display::BitmapData_obj::fromFile(file);
            		}
            		else {
HXLINE( 102)			file = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),null(),null());
HXLINE( 103)			if (::openfl::utils::Assets_obj::exists(file,HX_("IMAGE",3b,57,57,3b))) {
HXLINE( 104)				bitmap = ::openfl::utils::Assets_obj::getBitmapData(file,null());
            			}
            		}
HXLINE( 107)		if (::hx::IsNotNull( bitmap )) {
HXLINE( 107)			return ::flixel::graphics::FlxGraphic_obj::fromBitmapData(bitmap,false,file,null());
            		}
HXLINE( 108)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AtlasFrameMaker_obj,getFlxGraphic,return )

::Array< ::Dynamic> AtlasFrameMaker_obj::getFramesArray( ::animateatlas::displayobject::SpriteMovieClip t,::String animation){
            	HX_GC_STACKFRAME(&_hx_pos_456b101310759157_112_getFramesArray)
HXLINE( 113)		 ::openfl::geom::Rectangle sizeInfo =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,null(),null());
HXLINE( 114)		t->set_currentLabel(animation);
HXLINE( 115)		::Array< ::Dynamic> bitMapArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 116)		::Array< ::Dynamic> daFramez = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 117)		bool firstPass = true;
HXLINE( 118)		 ::flixel::math::FlxBasePoint this1 =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,0,0);
HXDLIN( 118)		 ::flixel::math::FlxBasePoint frameSize = this1;
HXLINE( 120)		{
HXLINE( 120)			int _g = t->getFrame(animation);
HXDLIN( 120)			int _g1 = t->get_numFrames();
HXDLIN( 120)			while((_g < _g1)){
HXLINE( 120)				_g = (_g + 1);
HXDLIN( 120)				int i = (_g - 1);
HXLINE( 122)				t->set_currentFrame(i);
HXLINE( 123)				if ((t->get_currentLabel() == animation)) {
HXLINE( 125)					sizeInfo = t->getBounds(t);
HXLINE( 126)					int bitmapShit = ::Std_obj::_hx_int((sizeInfo->width + sizeInfo->x));
HXDLIN( 126)					 ::openfl::display::BitmapData bitmapShit1 =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bitmapShit,::Std_obj::_hx_int((sizeInfo->height + sizeInfo->y)),true,0);
HXLINE( 127)					if (::backend::ClientPrefs_obj::data->cacheOnGPU) {
HXLINE( 129)						 ::openfl::display3D::textures::RectangleTexture texture = ::openfl::Lib_obj::get_current()->stage->context3D->createRectangleTexture(bitmapShit1->width,bitmapShit1->height,1,true);
HXLINE( 130)						texture->uploadFromBitmapData(bitmapShit1);
HXLINE( 131)						bitmapShit1->image->set_data(null());
HXLINE( 132)						bitmapShit1->dispose();
HXLINE( 133)						bitmapShit1->disposeImage();
HXLINE( 134)						bitmapShit1 = ::openfl::display::BitmapData_obj::fromTexture(texture);
            					}
HXLINE( 136)					bitmapShit1->draw(t,null(),null(),null(),null(),true);
HXLINE( 137)					bitMapArray->push(bitmapShit1);
HXLINE( 139)					if (firstPass) {
HXLINE( 141)						{
HXLINE( 141)							Float y = ( (Float)(bitmapShit1->height) );
HXDLIN( 141)							frameSize->set_x(( (Float)(bitmapShit1->width) ));
HXDLIN( 141)							frameSize->set_y(y);
            						}
HXLINE( 142)						firstPass = false;
            					}
            				}
            				else {
HXLINE( 145)					goto _hx_goto_6;
            				}
            			}
            			_hx_goto_6:;
            		}
HXLINE( 148)		{
HXLINE( 148)			int _g2 = 0;
HXDLIN( 148)			int _g3 = bitMapArray->length;
HXDLIN( 148)			while((_g2 < _g3)){
HXLINE( 148)				_g2 = (_g2 + 1);
HXDLIN( 148)				int i = (_g2 - 1);
HXLINE( 150)				 ::flixel::graphics::FlxGraphic b = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(bitMapArray->__get(i).StaticCast<  ::openfl::display::BitmapData >(),null(),null(),null());
HXLINE( 151)				 ::flixel::graphics::frames::FlxFrame theFrame =  ::flixel::graphics::frames::FlxFrame_obj::__alloc( HX_CTX ,b,null(),null(),null());
HXLINE( 152)				theFrame->parent = b;
HXLINE( 153)				theFrame->name = (animation + i);
HXLINE( 154)				{
HXLINE( 154)					 ::flixel::math::FlxBasePoint this1 = theFrame->sourceSize;
HXDLIN( 154)					Float y = frameSize->y;
HXDLIN( 154)					this1->set_x(frameSize->x);
HXDLIN( 154)					this1->set_y(y);
            				}
HXLINE( 155)				theFrame->set_frame( ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,0,0,bitMapArray->__get(i).StaticCast<  ::openfl::display::BitmapData >()->width,bitMapArray->__get(i).StaticCast<  ::openfl::display::BitmapData >()->height));
HXLINE( 156)				daFramez->push(theFrame);
            			}
            		}
HXLINE( 159)		return daFramez;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AtlasFrameMaker_obj,getFramesArray,return )


::hx::ObjectPtr< AtlasFrameMaker_obj > AtlasFrameMaker_obj::__new( ::flixel::graphics::FlxGraphic parent, ::flixel::graphics::frames::FlxFrameCollectionType type, ::flixel::math::FlxBasePoint border) {
	::hx::ObjectPtr< AtlasFrameMaker_obj > __this = new AtlasFrameMaker_obj();
	__this->__construct(parent,type,border);
	return __this;
}

::hx::ObjectPtr< AtlasFrameMaker_obj > AtlasFrameMaker_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::FlxGraphic parent, ::flixel::graphics::frames::FlxFrameCollectionType type, ::flixel::math::FlxBasePoint border) {
	AtlasFrameMaker_obj *__this = (AtlasFrameMaker_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AtlasFrameMaker_obj), true, "animateatlas.AtlasFrameMaker"));
	*(void **)__this = AtlasFrameMaker_obj::_hx_vtable;
	__this->__construct(parent,type,border);
	return __this;
}

AtlasFrameMaker_obj::AtlasFrameMaker_obj()
{
}

bool AtlasFrameMaker_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"construct") ) { outValue = construct_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getFlxGraphic") ) { outValue = getFlxGraphic_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getFramesArray") ) { outValue = getFramesArray_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AtlasFrameMaker_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AtlasFrameMaker_obj_sStaticStorageInfo = 0;
#endif

::hx::Class AtlasFrameMaker_obj::__mClass;

static ::String AtlasFrameMaker_obj_sStaticFields[] = {
	HX_("construct",17,58,ad,4f),
	HX_("getFlxGraphic",8c,6c,f4,08),
	HX_("getFramesArray",1d,07,19,e5),
	::String(null())
};

void AtlasFrameMaker_obj::__register()
{
	AtlasFrameMaker_obj _hx_dummy;
	AtlasFrameMaker_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("animateatlas.AtlasFrameMaker",fe,92,eb,0b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AtlasFrameMaker_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AtlasFrameMaker_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AtlasFrameMaker_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AtlasFrameMaker_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AtlasFrameMaker_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace animateatlas
