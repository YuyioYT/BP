#include <hxcpp.h>

#ifndef INCLUDED_ex_Status
#include <ex/Status.h>
#endif
namespace ex{

::ex::Status Status_obj::NONE;

bool Status_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("NONE",b8,da,ca,33)) { outValue = Status_obj::NONE; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Status_obj)

int Status_obj::__FindIndex(::String inName)
{
	if (inName==HX_("NONE",b8,da,ca,33)) return 0;
	return super::__FindIndex(inName);
}

int Status_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("NONE",b8,da,ca,33)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Status_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("NONE",b8,da,ca,33)) return NONE;
	return super::__Field(inName,inCallProp);
}

static ::String Status_obj_sStaticFields[] = {
	HX_("NONE",b8,da,ca,33),
	::String(null())
};

::hx::Class Status_obj::__mClass;

Dynamic __Create_Status_obj() { return new Status_obj; }

void Status_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("ex.Status",ed,9d,4f,bc), ::hx::TCanCast< Status_obj >,Status_obj_sStaticFields,0,
	&__Create_Status_obj, &__Create,
	&super::__SGetClass(), &CreateStatus_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Status_obj::__GetStatic;
}

void Status_obj::__boot()
{
NONE = ::hx::CreateConstEnum< Status_obj >(HX_("NONE",b8,da,ca,33),0);
}


} // end namespace ex
