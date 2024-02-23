#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_macro_Compiler
#include <haxe/macro/Compiler.h>
#endif
#ifndef INCLUDED_haxe_macro_ComplexTypeTools
#include <haxe/macro/ComplexTypeTools.h>
#endif
#ifndef INCLUDED_haxe_macro_Context
#include <haxe/macro/Context.h>
#endif
#ifndef INCLUDED_haxe_macro_ExprTools
#include <haxe/macro/ExprTools.h>
#endif
#ifndef INCLUDED_haxe_macro_MacroStringTools
#include <haxe/macro/MacroStringTools.h>
#endif
#ifndef INCLUDED_haxe_macro_Printer
#include <haxe/macro/Printer.h>
#endif
#ifndef INCLUDED_haxe_macro_TypeTools
#include <haxe/macro/TypeTools.h>
#endif
#ifndef INCLUDED_haxe_macro_TypedExprTools
#include <haxe/macro/TypedExprTools.h>
#endif
#ifndef INCLUDED_macro_Macro
#include <macro/Macro.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_23fc8acb9a895e00_80_get_definePath,"macro.Macro","get_definePath",0x254e65ad,"macro.Macro.get_definePath","macro/Macro.hx",80,0xb4be93f5)
HX_LOCAL_STACK_FRAME(_hx_pos_23fc8acb9a895e00_21_boot,"macro.Macro","boot",0xcba71516,"macro.Macro.boot","macro/Macro.hx",21,0xb4be93f5)
HX_LOCAL_STACK_FRAME(_hx_pos_23fc8acb9a895e00_25_boot,"macro.Macro","boot",0xcba71516,"macro.Macro.boot","macro/Macro.hx",25,0xb4be93f5)
namespace macro{

void Macro_obj::__construct() { }

Dynamic Macro_obj::__CreateEmpty() { return new Macro_obj; }

void *Macro_obj::_hx_vtable = 0;

Dynamic Macro_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Macro_obj > _hx_result = new Macro_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Macro_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x07a9f160;
}

bool Macro_obj::isWindows;

::Array< ::Dynamic> Macro_obj::macroClasses;

::String Macro_obj::get_definePath(){
            	HX_STACKFRAME(&_hx_pos_23fc8acb9a895e00_80_get_definePath)
HXLINE(  81)		::String env;
HXDLIN(  81)		if (::macro::Macro_obj::isWindows) {
HXLINE(  81)			env = ::Sys_obj::getEnv(HX_("USERPROFILE",1e,72,55,c2));
            		}
            		else {
HXLINE(  81)			env = ::Sys_obj::getEnv(HX_("HOME",1f,92,d3,2f));
            		}
HXLINE(  82)		bool _hx_tmp;
HXDLIN(  82)		if (::macro::Macro_obj::isWindows) {
HXLINE(  82)			_hx_tmp = !(::StringTools_obj::endsWith(env,HX_("\\",5c,00,00,00)));
            		}
            		else {
HXLINE(  82)			_hx_tmp = false;
            		}
HXDLIN(  82)		if (_hx_tmp) {
HXLINE(  83)			env = (env + HX_("\\",5c,00,00,00));
            		}
            		else {
HXLINE(  84)			bool _hx_tmp;
HXDLIN(  84)			if (!(::macro::Macro_obj::isWindows)) {
HXLINE(  84)				_hx_tmp = !(::StringTools_obj::endsWith(env,HX_("/",2f,00,00,00)));
            			}
            			else {
HXLINE(  84)				_hx_tmp = false;
            			}
HXDLIN(  84)			if (_hx_tmp) {
HXLINE(  85)				env = (env + HX_("/",2f,00,00,00));
            			}
            		}
HXLINE(  87)		return (env + HX_("defines.thk",e1,34,3d,4c));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Macro_obj,get_definePath,return )


Macro_obj::Macro_obj()
{
}

bool Macro_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"isWindows") ) { outValue = ( isWindows ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"definePath") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_definePath() ); return true; } }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"macroClasses") ) { outValue = ( macroClasses ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_definePath") ) { outValue = get_definePath_dyn(); return true; }
	}
	return false;
}

bool Macro_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"isWindows") ) { isWindows=ioValue.Cast< bool >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"macroClasses") ) { macroClasses=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Macro_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Macro_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &Macro_obj::isWindows,HX_("isWindows",b9,5b,73,ec)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Macro_obj::macroClasses,HX_("macroClasses",fa,5f,d7,22)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Macro_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Macro_obj::isWindows,"isWindows");
	HX_MARK_MEMBER_NAME(Macro_obj::macroClasses,"macroClasses");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Macro_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Macro_obj::isWindows,"isWindows");
	HX_VISIT_MEMBER_NAME(Macro_obj::macroClasses,"macroClasses");
};

#endif

::hx::Class Macro_obj::__mClass;

static ::String Macro_obj_sStaticFields[] = {
	HX_("isWindows",b9,5b,73,ec),
	HX_("macroClasses",fa,5f,d7,22),
	HX_("get_definePath",c9,4f,97,fc),
	::String(null())
};

void Macro_obj::__register()
{
	Macro_obj _hx_dummy;
	Macro_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("macro.Macro",0a,7a,3a,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Macro_obj::__GetStatic;
	__mClass->mSetStaticField = &Macro_obj::__SetStatic;
	__mClass->mMarkFunc = Macro_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Macro_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Macro_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Macro_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Macro_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Macro_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Macro_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		bool _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_23fc8acb9a895e00_21_boot)
HXDLIN(  21)			 ::EReg _hx_tmp =  ::EReg_obj::__alloc( HX_CTX ,HX_("^win",7e,b6,7c,3e),HX_("i",69,00,00,00));
HXDLIN(  21)			return _hx_tmp->match(::Sys_obj::systemName());
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_23fc8acb9a895e00_21_boot)
HXDLIN(  21)		isWindows = ( (bool)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            	HX_STACKFRAME(&_hx_pos_23fc8acb9a895e00_25_boot)
HXDLIN(  25)		macroClasses = ::Array_obj< ::Dynamic>::__new(8)->init(0,::hx::ClassOf< ::haxe::macro::Compiler >())->init(1,::hx::ClassOf< ::haxe::macro::Context >())->init(2,::hx::ClassOf< ::haxe::macro::MacroStringTools >())->init(3,::hx::ClassOf< ::haxe::macro::Printer >())->init(4,::hx::ClassOf< ::haxe::macro::ComplexTypeTools >())->init(5,::hx::ClassOf< ::haxe::macro::TypedExprTools >())->init(6,::hx::ClassOf< ::haxe::macro::ExprTools >())->init(7,::hx::ClassOf< ::haxe::macro::TypeTools >());
            	}
}

} // end namespace macro
