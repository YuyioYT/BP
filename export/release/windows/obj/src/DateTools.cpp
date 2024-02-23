#include <hxcpp.h>

#ifndef INCLUDED_DateTools
#include <DateTools.h>
#endif


void DateTools_obj::__construct() { }

Dynamic DateTools_obj::__CreateEmpty() { return new DateTools_obj; }

void *DateTools_obj::_hx_vtable = 0;

Dynamic DateTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DateTools_obj > _hx_result = new DateTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DateTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x58a1da2d;
}


DateTools_obj::DateTools_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DateTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DateTools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class DateTools_obj::__mClass;

void DateTools_obj::__register()
{
	DateTools_obj _hx_dummy;
	DateTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("DateTools",ed,64,5e,95);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DateTools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DateTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DateTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

