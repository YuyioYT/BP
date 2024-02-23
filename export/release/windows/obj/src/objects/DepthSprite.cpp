#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_objects_DepthSprite
#include <objects/DepthSprite.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6300bebc5bcef267_9_new,"objects.DepthSprite","new",0x74da96a0,"objects.DepthSprite.new","objects/DepthSprite.hx",9,0xc6debc91)
HX_LOCAL_STACK_FRAME(_hx_pos_6300bebc5bcef267_44_update,"objects.DepthSprite","update",0x34cc27c9,"objects.DepthSprite.update","objects/DepthSprite.hx",44,0xc6debc91)
namespace objects{

void DepthSprite_obj::__construct(::String image,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_scrollX, ::Dynamic __o_scrollY,::Array< ::String > animArray, ::Dynamic __o_loop){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		 ::Dynamic scrollX = __o_scrollX;
            		if (::hx::IsNull(__o_scrollX)) scrollX = 1;
            		 ::Dynamic scrollY = __o_scrollY;
            		if (::hx::IsNull(__o_scrollY)) scrollY = 1;
            		 ::Dynamic loop = __o_loop;
            		if (::hx::IsNull(__o_loop)) loop = false;
            	HX_STACKFRAME(&_hx_pos_6300bebc5bcef267_9_new)
HXLINE(  14)		this->defaultScrollY = ((Float)1);
HXLINE(  13)		this->defaultScrollX = ((Float)1);
HXLINE(  12)		this->defaultScale = ((Float)1);
HXLINE(  11)		this->depth = ((Float)1);
HXLINE(  19)		super::__construct(x,y,null());
HXLINE(  21)		if (::hx::IsNotNull( animArray )) {
HXLINE(  22)			::String library = null();
HXDLIN(  22)			 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(image,null(),true);
HXDLIN(  22)			bool xmlExists = false;
HXDLIN(  22)			::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + image) + HX_(".xml",69,3e,c3,1e)));
HXDLIN(  22)			if (::sys::FileSystem_obj::exists(xml)) {
HXLINE(  22)				xmlExists = true;
            			}
HXDLIN(  22)			 ::Dynamic _hx_tmp;
HXDLIN(  22)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  22)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE(  22)				_hx_tmp = ::backend::Paths_obj::image(image,library,true);
            			}
HXDLIN(  22)			::String _hx_tmp1;
HXDLIN(  22)			if (xmlExists) {
HXLINE(  22)				_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            			}
            			else {
HXLINE(  22)				_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + image) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            			}
HXDLIN(  22)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  23)			{
HXLINE(  23)				int _g = 0;
HXDLIN(  23)				int _g1 = animArray->length;
HXDLIN(  23)				while((_g < _g1)){
HXLINE(  23)					_g = (_g + 1);
HXDLIN(  23)					int i = (_g - 1);
HXLINE(  24)					::String anim = animArray->__get(i);
HXLINE(  25)					this->animation->addByPrefix(anim,anim,24,loop,null(),null());
HXLINE(  26)					if (::hx::IsNull( this->idleAnim )) {
HXLINE(  27)						this->idleAnim = anim;
HXLINE(  28)						this->animation->play(anim,null(),null(),null());
            					}
            				}
            			}
            		}
            		else {
HXLINE(  32)			if (::hx::IsNotNull( image )) {
HXLINE(  33)				this->loadGraphic(::backend::Paths_obj::image(image,null(),null()),null(),null(),null(),null(),null());
            			}
            		}
HXLINE(  37)		this->defaultScrollX = ( (Float)(scrollX) );
HXLINE(  38)		this->defaultScrollY = ( (Float)(scrollY) );
HXLINE(  39)		{
HXLINE(  39)			 ::flixel::math::FlxBasePoint this1 = this->scrollFactor;
HXDLIN(  39)			this1->set_x(( (Float)(scrollX) ));
HXDLIN(  39)			this1->set_y(( (Float)(scrollY) ));
            		}
HXLINE(  40)		this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
            	}

Dynamic DepthSprite_obj::__CreateEmpty() { return new DepthSprite_obj; }

void *DepthSprite_obj::_hx_vtable = 0;

Dynamic DepthSprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DepthSprite_obj > _hx_result = new DepthSprite_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool DepthSprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3117f7f4) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x3117f7f4;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void DepthSprite_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_6300bebc5bcef267_44_update)
HXLINE(  45)		this->super::update(elapsed);
HXLINE(  48)		 ::flixel::FlxCamera cam = this->get_cameras()->__get(0).StaticCast<  ::flixel::FlxCamera >();
HXLINE(  49)		Float toScale = (( (Float)(1) ) / (((cam->zoom - ( (Float)(1) )) * (( (Float)(1) ) - this->depth)) + 1));
HXLINE(  50)		{
HXLINE(  50)			 ::flixel::math::FlxBasePoint this1 = this->scrollFactor;
HXDLIN(  50)			Float y = (toScale * this->defaultScrollY);
HXDLIN(  50)			this1->set_x((toScale * this->defaultScrollX));
HXDLIN(  50)			this1->set_y(y);
            		}
HXLINE(  51)		toScale = (toScale * this->defaultScale);
HXLINE(  52)		{
HXLINE(  52)			 ::flixel::math::FlxBasePoint this2 = this->scale;
HXDLIN(  52)			this2->set_x(toScale);
HXDLIN(  52)			this2->set_y(toScale);
            		}
            	}



::hx::ObjectPtr< DepthSprite_obj > DepthSprite_obj::__new(::String image,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_scrollX, ::Dynamic __o_scrollY,::Array< ::String > animArray, ::Dynamic __o_loop) {
	::hx::ObjectPtr< DepthSprite_obj > __this = new DepthSprite_obj();
	__this->__construct(image,__o_x,__o_y,__o_scrollX,__o_scrollY,animArray,__o_loop);
	return __this;
}

::hx::ObjectPtr< DepthSprite_obj > DepthSprite_obj::__alloc(::hx::Ctx *_hx_ctx,::String image,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_scrollX, ::Dynamic __o_scrollY,::Array< ::String > animArray, ::Dynamic __o_loop) {
	DepthSprite_obj *__this = (DepthSprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DepthSprite_obj), true, "objects.DepthSprite"));
	*(void **)__this = DepthSprite_obj::_hx_vtable;
	__this->__construct(image,__o_x,__o_y,__o_scrollX,__o_scrollY,animArray,__o_loop);
	return __this;
}

DepthSprite_obj::DepthSprite_obj()
{
}

void DepthSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DepthSprite);
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(defaultScale,"defaultScale");
	HX_MARK_MEMBER_NAME(defaultScrollX,"defaultScrollX");
	HX_MARK_MEMBER_NAME(defaultScrollY,"defaultScrollY");
	HX_MARK_MEMBER_NAME(idleAnim,"idleAnim");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DepthSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(defaultScale,"defaultScale");
	HX_VISIT_MEMBER_NAME(defaultScrollX,"defaultScrollX");
	HX_VISIT_MEMBER_NAME(defaultScrollY,"defaultScrollY");
	HX_VISIT_MEMBER_NAME(idleAnim,"idleAnim");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DepthSprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { return ::hx::Val( depth ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"idleAnim") ) { return ::hx::Val( idleAnim ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultScale") ) { return ::hx::Val( defaultScale ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultScrollX") ) { return ::hx::Val( defaultScrollX ); }
		if (HX_FIELD_EQ(inName,"defaultScrollY") ) { return ::hx::Val( defaultScrollY ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DepthSprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"idleAnim") ) { idleAnim=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultScale") ) { defaultScale=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultScrollX") ) { defaultScrollX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultScrollY") ) { defaultScrollY=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DepthSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("depth",03,f1,29,d7));
	outFields->push(HX_("defaultScale",09,0a,2a,2e));
	outFields->push(HX_("defaultScrollX",ea,8c,18,60));
	outFields->push(HX_("defaultScrollY",eb,8c,18,60));
	outFields->push(HX_("idleAnim",45,73,61,35));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DepthSprite_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(DepthSprite_obj,depth),HX_("depth",03,f1,29,d7)},
	{::hx::fsFloat,(int)offsetof(DepthSprite_obj,defaultScale),HX_("defaultScale",09,0a,2a,2e)},
	{::hx::fsFloat,(int)offsetof(DepthSprite_obj,defaultScrollX),HX_("defaultScrollX",ea,8c,18,60)},
	{::hx::fsFloat,(int)offsetof(DepthSprite_obj,defaultScrollY),HX_("defaultScrollY",eb,8c,18,60)},
	{::hx::fsString,(int)offsetof(DepthSprite_obj,idleAnim),HX_("idleAnim",45,73,61,35)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DepthSprite_obj_sStaticStorageInfo = 0;
#endif

static ::String DepthSprite_obj_sMemberFields[] = {
	HX_("depth",03,f1,29,d7),
	HX_("defaultScale",09,0a,2a,2e),
	HX_("defaultScrollX",ea,8c,18,60),
	HX_("defaultScrollY",eb,8c,18,60),
	HX_("idleAnim",45,73,61,35),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class DepthSprite_obj::__mClass;

void DepthSprite_obj::__register()
{
	DepthSprite_obj _hx_dummy;
	DepthSprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.DepthSprite",ae,06,6b,2d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DepthSprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DepthSprite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DepthSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DepthSprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace objects
