#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_ComplexTypeTools
#include <haxe/macro/ComplexTypeTools.h>
#endif

namespace haxe{
namespace macro{

void ComplexTypeTools_obj::__construct() { }

Dynamic ComplexTypeTools_obj::__CreateEmpty() { return new ComplexTypeTools_obj; }

void *ComplexTypeTools_obj::_hx_vtable = 0;

Dynamic ComplexTypeTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComplexTypeTools_obj > _hx_result = new ComplexTypeTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ComplexTypeTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x31d23837;
}


ComplexTypeTools_obj::ComplexTypeTools_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ComplexTypeTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ComplexTypeTools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ComplexTypeTools_obj::__mClass;

void ComplexTypeTools_obj::__register()
{
	ComplexTypeTools_obj _hx_dummy;
	ComplexTypeTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.macro.ComplexTypeTools",bb,1e,cf,e9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ComplexTypeTools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComplexTypeTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComplexTypeTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace macro
