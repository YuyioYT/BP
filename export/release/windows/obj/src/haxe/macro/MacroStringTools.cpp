#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_MacroStringTools
#include <haxe/macro/MacroStringTools.h>
#endif

namespace haxe{
namespace macro{

void MacroStringTools_obj::__construct() { }

Dynamic MacroStringTools_obj::__CreateEmpty() { return new MacroStringTools_obj; }

void *MacroStringTools_obj::_hx_vtable = 0;

Dynamic MacroStringTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MacroStringTools_obj > _hx_result = new MacroStringTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MacroStringTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x17cca664;
}


MacroStringTools_obj::MacroStringTools_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MacroStringTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MacroStringTools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class MacroStringTools_obj::__mClass;

void MacroStringTools_obj::__register()
{
	MacroStringTools_obj _hx_dummy;
	MacroStringTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.macro.MacroStringTools",e8,8c,c9,cf);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< MacroStringTools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MacroStringTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MacroStringTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace macro
