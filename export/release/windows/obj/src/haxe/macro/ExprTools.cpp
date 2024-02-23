#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_ExprTools
#include <haxe/macro/ExprTools.h>
#endif

namespace haxe{
namespace macro{

void ExprTools_obj::__construct() { }

Dynamic ExprTools_obj::__CreateEmpty() { return new ExprTools_obj; }

void *ExprTools_obj::_hx_vtable = 0;

Dynamic ExprTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ExprTools_obj > _hx_result = new ExprTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ExprTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6f463860;
}


ExprTools_obj::ExprTools_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ExprTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ExprTools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ExprTools_obj::__mClass;

void ExprTools_obj::__register()
{
	ExprTools_obj _hx_dummy;
	ExprTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.macro.ExprTools",5c,a9,ff,8f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ExprTools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ExprTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ExprTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace macro
