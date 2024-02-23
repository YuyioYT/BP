#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_Printer
#include <haxe/macro/Printer.h>
#endif

namespace haxe{
namespace macro{

void Printer_obj::__construct() { }

Dynamic Printer_obj::__CreateEmpty() { return new Printer_obj; }

void *Printer_obj::_hx_vtable = 0;

Dynamic Printer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Printer_obj > _hx_result = new Printer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Printer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0ff33278;
}


Printer_obj::Printer_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Printer_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Printer_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Printer_obj::__mClass;

void Printer_obj::__register()
{
	Printer_obj _hx_dummy;
	Printer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.macro.Printer",10,c1,e6,5a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Printer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Printer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Printer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace macro
