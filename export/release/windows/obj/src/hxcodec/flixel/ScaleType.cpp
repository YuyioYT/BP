#include <hxcpp.h>

#ifndef INCLUDED_hxcodec_flixel_ScaleType
#include <hxcodec/flixel/ScaleType.h>
#endif
namespace hxcodec{
namespace flixel{

::hxcodec::flixel::ScaleType ScaleType_obj::GAME;

::hxcodec::flixel::ScaleType ScaleType_obj::VIDEO;

bool ScaleType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("GAME",f2,bb,1f,2f)) { outValue = ScaleType_obj::GAME; return true; }
	if (inName==HX_("VIDEO",5b,4c,ea,b4)) { outValue = ScaleType_obj::VIDEO; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ScaleType_obj)

int ScaleType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("GAME",f2,bb,1f,2f)) return 0;
	if (inName==HX_("VIDEO",5b,4c,ea,b4)) return 1;
	return super::__FindIndex(inName);
}

int ScaleType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("GAME",f2,bb,1f,2f)) return 0;
	if (inName==HX_("VIDEO",5b,4c,ea,b4)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val ScaleType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("GAME",f2,bb,1f,2f)) return GAME;
	if (inName==HX_("VIDEO",5b,4c,ea,b4)) return VIDEO;
	return super::__Field(inName,inCallProp);
}

static ::String ScaleType_obj_sStaticFields[] = {
	HX_("GAME",f2,bb,1f,2f),
	HX_("VIDEO",5b,4c,ea,b4),
	::String(null())
};

::hx::Class ScaleType_obj::__mClass;

Dynamic __Create_ScaleType_obj() { return new ScaleType_obj; }

void ScaleType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxcodec.flixel.ScaleType",9a,75,c5,16), ::hx::TCanCast< ScaleType_obj >,ScaleType_obj_sStaticFields,0,
	&__Create_ScaleType_obj, &__Create,
	&super::__SGetClass(), &CreateScaleType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ScaleType_obj::__GetStatic;
}

void ScaleType_obj::__boot()
{
GAME = ::hx::CreateConstEnum< ScaleType_obj >(HX_("GAME",f2,bb,1f,2f),0);
VIDEO = ::hx::CreateConstEnum< ScaleType_obj >(HX_("VIDEO",5b,4c,ea,b4),1);
}


} // end namespace hxcodec
} // end namespace flixel
