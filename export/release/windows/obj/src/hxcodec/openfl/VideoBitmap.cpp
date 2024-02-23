#include <hxcpp.h>

#ifndef INCLUDED_hxcodec_openfl_VideoBitmap
#include <hxcodec/openfl/VideoBitmap.h>
#endif
#ifndef INCLUDED_hxcodec_vlc_VLCBitmap
#include <hxcodec/vlc/VLCBitmap.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e27e8d7c3cbd9d16_9_new,"hxcodec.openfl.VideoBitmap","new",0xfd8705a6,"hxcodec.openfl.VideoBitmap.new","hxcodec/openfl/VideoBitmap.hx",9,0xbdb9daaa)
HX_LOCAL_STACK_FRAME(_hx_pos_e27e8d7c3cbd9d16_20_onAddedToStage,"hxcodec.openfl.VideoBitmap","onAddedToStage",0xcbfb669c,"hxcodec.openfl.VideoBitmap.onAddedToStage","hxcodec/openfl/VideoBitmap.hx",20,0xbdb9daaa)
namespace hxcodec{
namespace openfl{

void VideoBitmap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e27e8d7c3cbd9d16_9_new)
HXLINE(  10)		super::__construct();
HXLINE(  12)		if (::hx::IsNotNull( this->stage )) {
HXLINE(  13)			this->onAddedToStage(null());
            		}
            		else {
HXLINE(  15)			this->addEventListener(HX_("addedToStage",63,22,55,0c),this->onAddedToStage_dyn(),null(),null(),null());
            		}
            	}

Dynamic VideoBitmap_obj::__CreateEmpty() { return new VideoBitmap_obj; }

void *VideoBitmap_obj::_hx_vtable = 0;

Dynamic VideoBitmap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VideoBitmap_obj > _hx_result = new VideoBitmap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VideoBitmap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4cc42801) {
		if (inClassId<=(int)0x317b3ab1) {
			if (inClassId<=(int)0x0c89e854) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
			} else {
				return inClassId==(int)0x317b3ab1;
			}
		} else {
			return inClassId==(int)0x4cc42801;
		}
	} else {
		return inClassId==(int)0x5f06eb14 || inClassId==(int)0x6b353933;
	}
}

void VideoBitmap_obj::onAddedToStage( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_e27e8d7c3cbd9d16_20_onAddedToStage)
HXLINE(  21)		if (this->hasEventListener(HX_("addedToStage",63,22,55,0c))) {
HXLINE(  22)			this->removeEventListener(HX_("addedToStage",63,22,55,0c),this->onAddedToStage_dyn(),null());
            		}
HXLINE(  24)		this->stage->addEventListener(HX_("enterFrame",f5,03,50,02),this->onEnterFrame_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(VideoBitmap_obj,onAddedToStage,(void))


::hx::ObjectPtr< VideoBitmap_obj > VideoBitmap_obj::__new() {
	::hx::ObjectPtr< VideoBitmap_obj > __this = new VideoBitmap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< VideoBitmap_obj > VideoBitmap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	VideoBitmap_obj *__this = (VideoBitmap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VideoBitmap_obj), true, "hxcodec.openfl.VideoBitmap"));
	*(void **)__this = VideoBitmap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VideoBitmap_obj::VideoBitmap_obj()
{
}

::hx::Val VideoBitmap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"onAddedToStage") ) { return ::hx::Val( onAddedToStage_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *VideoBitmap_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *VideoBitmap_obj_sStaticStorageInfo = 0;
#endif

static ::String VideoBitmap_obj_sMemberFields[] = {
	HX_("onAddedToStage",22,82,44,36),
	::String(null()) };

::hx::Class VideoBitmap_obj::__mClass;

void VideoBitmap_obj::__register()
{
	VideoBitmap_obj _hx_dummy;
	VideoBitmap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxcodec.openfl.VideoBitmap",b4,fa,25,17);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VideoBitmap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VideoBitmap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VideoBitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VideoBitmap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxcodec
} // end namespace openfl
