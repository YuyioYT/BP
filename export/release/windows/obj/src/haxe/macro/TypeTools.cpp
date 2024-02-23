#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_TypeTools
#include <haxe/macro/TypeTools.h>
#endif

namespace haxe{
namespace macro{

void TypeTools_obj::__construct() { }

Dynamic TypeTools_obj::__CreateEmpty() { return new TypeTools_obj; }

void *TypeTools_obj::_hx_vtable = 0;

Dynamic TypeTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TypeTools_obj > _hx_result = new TypeTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TypeTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x58cd2d1f;
}


TypeTools_obj::TypeTools_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TypeTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TypeTools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class TypeTools_obj::__mClass;

void TypeTools_obj::__register()
{
	TypeTools_obj _hx_dummy;
	TypeTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.macro.TypeTools",b7,91,b3,f2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TypeTools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TypeTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TypeTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace macro
