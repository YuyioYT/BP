#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_TypedExprTools
#include <haxe/macro/TypedExprTools.h>
#endif

namespace haxe{
namespace macro{

void TypedExprTools_obj::__construct() { }

Dynamic TypedExprTools_obj::__CreateEmpty() { return new TypedExprTools_obj; }

void *TypedExprTools_obj::_hx_vtable = 0;

Dynamic TypedExprTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TypedExprTools_obj > _hx_result = new TypedExprTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TypedExprTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x473720e2;
}


TypedExprTools_obj::TypedExprTools_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TypedExprTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TypedExprTools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class TypedExprTools_obj::__mClass;

void TypedExprTools_obj::__register()
{
	TypedExprTools_obj _hx_dummy;
	TypedExprTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.macro.TypedExprTools",66,9e,36,a2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TypedExprTools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TypedExprTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TypedExprTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace macro
