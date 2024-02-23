#include <hxcpp.h>

#ifndef INCLUDED_hscriptBase_ErrorDef
#include <hscriptBase/ErrorDef.h>
#endif
namespace hscriptBase{

::hscriptBase::ErrorDef ErrorDef_obj::ECustom(::String msg)
{
	return ::hx::CreateEnum< ErrorDef_obj >(HX_("ECustom",d6,fd,6f,a9),12,1)->_hx_init(0,msg);
}

::hscriptBase::ErrorDef ErrorDef_obj::EDuplicate(::String v)
{
	return ::hx::CreateEnum< ErrorDef_obj >(HX_("EDuplicate",86,50,fc,16),0,1)->_hx_init(0,v);
}

::hscriptBase::ErrorDef ErrorDef_obj::EExpectedField(::String v)
{
	return ::hx::CreateEnum< ErrorDef_obj >(HX_("EExpectedField",9d,2b,a5,cb),16,1)->_hx_init(0,v);
}

::hscriptBase::ErrorDef ErrorDef_obj::EFunctionAssign(::String f)
{
	return ::hx::CreateEnum< ErrorDef_obj >(HX_("EFunctionAssign",8c,6a,ea,2c),3,1)->_hx_init(0,f);
}

::hscriptBase::ErrorDef ErrorDef_obj::EInvalidAccess(::String f)
{
	return ::hx::CreateEnum< ErrorDef_obj >(HX_("EInvalidAccess",76,c0,1f,d1),10,1)->_hx_init(0,f);
}

::hscriptBase::ErrorDef ErrorDef_obj::EInvalidChar(int c)
{
	return ::hx::CreateEnum< ErrorDef_obj >(HX_("EInvalidChar",28,d1,99,46),1,1)->_hx_init(0,c);
}

::hscriptBase::ErrorDef ErrorDef_obj::EInvalidFinal(::String v)
{
	return ::hx::CreateEnum< ErrorDef_obj >(HX_("EInvalidFinal",e4,f4,e3,3a),13,1)->_hx_init(0,v);
}

::hscriptBase::ErrorDef ErrorDef_obj::EInvalidIterator(::String v)
{
	return ::hx::CreateEnum< ErrorDef_obj >(HX_("EInvalidIterator",40,4d,71,f2),8,1)->_hx_init(0,v);
}

::hscriptBase::ErrorDef ErrorDef_obj::EInvalidOp(::String op)
{
	return ::hx::CreateEnum< ErrorDef_obj >(HX_("EInvalidOp",f3,3a,13,f7),9,1)->_hx_init(0,op);
}

::hscriptBase::ErrorDef ErrorDef_obj::EInvalidPreprocessor(::String msg)
{
	return ::hx::CreateEnum< ErrorDef_obj >(HX_("EInvalidPreprocessor",21,d5,28,58),6,1)->_hx_init(0,msg);
}

::hscriptBase::ErrorDef ErrorDef_obj::EUnexistingField( ::Dynamic f, ::Dynamic f2)
{
	return ::hx::CreateEnum< ErrorDef_obj >(HX_("EUnexistingField",71,49,2c,0d),14,2)->_hx_init(0,f)->_hx_init(1,f2);
}

::hscriptBase::ErrorDef ErrorDef_obj::EUnexpected(::String s)
{
	return ::hx::CreateEnum< ErrorDef_obj >(HX_("EUnexpected",76,02,98,78),2,1)->_hx_init(0,s);
}

::hscriptBase::ErrorDef ErrorDef_obj::EUnknownIdentifier(::String s)
{
	return ::hx::CreateEnum< ErrorDef_obj >(HX_("EUnknownIdentifier",8e,a2,1d,e5),15,1)->_hx_init(0,s);
}

::hscriptBase::ErrorDef ErrorDef_obj::EUnknownVariable(::String v)
{
	return ::hx::CreateEnum< ErrorDef_obj >(HX_("EUnknownVariable",21,a9,3e,5f),7,1)->_hx_init(0,v);
}

::hscriptBase::ErrorDef ErrorDef_obj::EUnmatchingType(::String v,::String t,::String varn)
{
	return ::hx::CreateEnum< ErrorDef_obj >(HX_("EUnmatchingType",15,89,2c,18),11,3)->_hx_init(0,v)->_hx_init(1,t)->_hx_init(2,varn);
}

::hscriptBase::ErrorDef ErrorDef_obj::EUnterminatedComment;

::hscriptBase::ErrorDef ErrorDef_obj::EUnterminatedString;

::hscriptBase::ErrorDef ErrorDef_obj::EUpperCase;

bool ErrorDef_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ECustom",d6,fd,6f,a9)) { outValue = ErrorDef_obj::ECustom_dyn(); return true; }
	if (inName==HX_("EDuplicate",86,50,fc,16)) { outValue = ErrorDef_obj::EDuplicate_dyn(); return true; }
	if (inName==HX_("EExpectedField",9d,2b,a5,cb)) { outValue = ErrorDef_obj::EExpectedField_dyn(); return true; }
	if (inName==HX_("EFunctionAssign",8c,6a,ea,2c)) { outValue = ErrorDef_obj::EFunctionAssign_dyn(); return true; }
	if (inName==HX_("EInvalidAccess",76,c0,1f,d1)) { outValue = ErrorDef_obj::EInvalidAccess_dyn(); return true; }
	if (inName==HX_("EInvalidChar",28,d1,99,46)) { outValue = ErrorDef_obj::EInvalidChar_dyn(); return true; }
	if (inName==HX_("EInvalidFinal",e4,f4,e3,3a)) { outValue = ErrorDef_obj::EInvalidFinal_dyn(); return true; }
	if (inName==HX_("EInvalidIterator",40,4d,71,f2)) { outValue = ErrorDef_obj::EInvalidIterator_dyn(); return true; }
	if (inName==HX_("EInvalidOp",f3,3a,13,f7)) { outValue = ErrorDef_obj::EInvalidOp_dyn(); return true; }
	if (inName==HX_("EInvalidPreprocessor",21,d5,28,58)) { outValue = ErrorDef_obj::EInvalidPreprocessor_dyn(); return true; }
	if (inName==HX_("EUnexistingField",71,49,2c,0d)) { outValue = ErrorDef_obj::EUnexistingField_dyn(); return true; }
	if (inName==HX_("EUnexpected",76,02,98,78)) { outValue = ErrorDef_obj::EUnexpected_dyn(); return true; }
	if (inName==HX_("EUnknownIdentifier",8e,a2,1d,e5)) { outValue = ErrorDef_obj::EUnknownIdentifier_dyn(); return true; }
	if (inName==HX_("EUnknownVariable",21,a9,3e,5f)) { outValue = ErrorDef_obj::EUnknownVariable_dyn(); return true; }
	if (inName==HX_("EUnmatchingType",15,89,2c,18)) { outValue = ErrorDef_obj::EUnmatchingType_dyn(); return true; }
	if (inName==HX_("EUnterminatedComment",fe,ed,ab,07)) { outValue = ErrorDef_obj::EUnterminatedComment; return true; }
	if (inName==HX_("EUnterminatedString",12,4e,75,07)) { outValue = ErrorDef_obj::EUnterminatedString; return true; }
	if (inName==HX_("EUpperCase",2d,ec,fc,47)) { outValue = ErrorDef_obj::EUpperCase; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ErrorDef_obj)

int ErrorDef_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ECustom",d6,fd,6f,a9)) return 12;
	if (inName==HX_("EDuplicate",86,50,fc,16)) return 0;
	if (inName==HX_("EExpectedField",9d,2b,a5,cb)) return 16;
	if (inName==HX_("EFunctionAssign",8c,6a,ea,2c)) return 3;
	if (inName==HX_("EInvalidAccess",76,c0,1f,d1)) return 10;
	if (inName==HX_("EInvalidChar",28,d1,99,46)) return 1;
	if (inName==HX_("EInvalidFinal",e4,f4,e3,3a)) return 13;
	if (inName==HX_("EInvalidIterator",40,4d,71,f2)) return 8;
	if (inName==HX_("EInvalidOp",f3,3a,13,f7)) return 9;
	if (inName==HX_("EInvalidPreprocessor",21,d5,28,58)) return 6;
	if (inName==HX_("EUnexistingField",71,49,2c,0d)) return 14;
	if (inName==HX_("EUnexpected",76,02,98,78)) return 2;
	if (inName==HX_("EUnknownIdentifier",8e,a2,1d,e5)) return 15;
	if (inName==HX_("EUnknownVariable",21,a9,3e,5f)) return 7;
	if (inName==HX_("EUnmatchingType",15,89,2c,18)) return 11;
	if (inName==HX_("EUnterminatedComment",fe,ed,ab,07)) return 5;
	if (inName==HX_("EUnterminatedString",12,4e,75,07)) return 4;
	if (inName==HX_("EUpperCase",2d,ec,fc,47)) return 17;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ErrorDef_obj,ECustom,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ErrorDef_obj,EDuplicate,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ErrorDef_obj,EExpectedField,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ErrorDef_obj,EFunctionAssign,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ErrorDef_obj,EInvalidAccess,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ErrorDef_obj,EInvalidChar,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ErrorDef_obj,EInvalidFinal,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ErrorDef_obj,EInvalidIterator,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ErrorDef_obj,EInvalidOp,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ErrorDef_obj,EInvalidPreprocessor,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ErrorDef_obj,EUnexistingField,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ErrorDef_obj,EUnexpected,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ErrorDef_obj,EUnknownIdentifier,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ErrorDef_obj,EUnknownVariable,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ErrorDef_obj,EUnmatchingType,return)

int ErrorDef_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ECustom",d6,fd,6f,a9)) return 1;
	if (inName==HX_("EDuplicate",86,50,fc,16)) return 1;
	if (inName==HX_("EExpectedField",9d,2b,a5,cb)) return 1;
	if (inName==HX_("EFunctionAssign",8c,6a,ea,2c)) return 1;
	if (inName==HX_("EInvalidAccess",76,c0,1f,d1)) return 1;
	if (inName==HX_("EInvalidChar",28,d1,99,46)) return 1;
	if (inName==HX_("EInvalidFinal",e4,f4,e3,3a)) return 1;
	if (inName==HX_("EInvalidIterator",40,4d,71,f2)) return 1;
	if (inName==HX_("EInvalidOp",f3,3a,13,f7)) return 1;
	if (inName==HX_("EInvalidPreprocessor",21,d5,28,58)) return 1;
	if (inName==HX_("EUnexistingField",71,49,2c,0d)) return 2;
	if (inName==HX_("EUnexpected",76,02,98,78)) return 1;
	if (inName==HX_("EUnknownIdentifier",8e,a2,1d,e5)) return 1;
	if (inName==HX_("EUnknownVariable",21,a9,3e,5f)) return 1;
	if (inName==HX_("EUnmatchingType",15,89,2c,18)) return 3;
	if (inName==HX_("EUnterminatedComment",fe,ed,ab,07)) return 0;
	if (inName==HX_("EUnterminatedString",12,4e,75,07)) return 0;
	if (inName==HX_("EUpperCase",2d,ec,fc,47)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val ErrorDef_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ECustom",d6,fd,6f,a9)) return ECustom_dyn();
	if (inName==HX_("EDuplicate",86,50,fc,16)) return EDuplicate_dyn();
	if (inName==HX_("EExpectedField",9d,2b,a5,cb)) return EExpectedField_dyn();
	if (inName==HX_("EFunctionAssign",8c,6a,ea,2c)) return EFunctionAssign_dyn();
	if (inName==HX_("EInvalidAccess",76,c0,1f,d1)) return EInvalidAccess_dyn();
	if (inName==HX_("EInvalidChar",28,d1,99,46)) return EInvalidChar_dyn();
	if (inName==HX_("EInvalidFinal",e4,f4,e3,3a)) return EInvalidFinal_dyn();
	if (inName==HX_("EInvalidIterator",40,4d,71,f2)) return EInvalidIterator_dyn();
	if (inName==HX_("EInvalidOp",f3,3a,13,f7)) return EInvalidOp_dyn();
	if (inName==HX_("EInvalidPreprocessor",21,d5,28,58)) return EInvalidPreprocessor_dyn();
	if (inName==HX_("EUnexistingField",71,49,2c,0d)) return EUnexistingField_dyn();
	if (inName==HX_("EUnexpected",76,02,98,78)) return EUnexpected_dyn();
	if (inName==HX_("EUnknownIdentifier",8e,a2,1d,e5)) return EUnknownIdentifier_dyn();
	if (inName==HX_("EUnknownVariable",21,a9,3e,5f)) return EUnknownVariable_dyn();
	if (inName==HX_("EUnmatchingType",15,89,2c,18)) return EUnmatchingType_dyn();
	if (inName==HX_("EUnterminatedComment",fe,ed,ab,07)) return EUnterminatedComment;
	if (inName==HX_("EUnterminatedString",12,4e,75,07)) return EUnterminatedString;
	if (inName==HX_("EUpperCase",2d,ec,fc,47)) return EUpperCase;
	return super::__Field(inName,inCallProp);
}

static ::String ErrorDef_obj_sStaticFields[] = {
	HX_("EDuplicate",86,50,fc,16),
	HX_("EInvalidChar",28,d1,99,46),
	HX_("EUnexpected",76,02,98,78),
	HX_("EFunctionAssign",8c,6a,ea,2c),
	HX_("EUnterminatedString",12,4e,75,07),
	HX_("EUnterminatedComment",fe,ed,ab,07),
	HX_("EInvalidPreprocessor",21,d5,28,58),
	HX_("EUnknownVariable",21,a9,3e,5f),
	HX_("EInvalidIterator",40,4d,71,f2),
	HX_("EInvalidOp",f3,3a,13,f7),
	HX_("EInvalidAccess",76,c0,1f,d1),
	HX_("EUnmatchingType",15,89,2c,18),
	HX_("ECustom",d6,fd,6f,a9),
	HX_("EInvalidFinal",e4,f4,e3,3a),
	HX_("EUnexistingField",71,49,2c,0d),
	HX_("EUnknownIdentifier",8e,a2,1d,e5),
	HX_("EExpectedField",9d,2b,a5,cb),
	HX_("EUpperCase",2d,ec,fc,47),
	::String(null())
};

::hx::Class ErrorDef_obj::__mClass;

Dynamic __Create_ErrorDef_obj() { return new ErrorDef_obj; }

void ErrorDef_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hscriptBase.ErrorDef",87,12,11,a9), ::hx::TCanCast< ErrorDef_obj >,ErrorDef_obj_sStaticFields,0,
	&__Create_ErrorDef_obj, &__Create,
	&super::__SGetClass(), &CreateErrorDef_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ErrorDef_obj::__GetStatic;
}

void ErrorDef_obj::__boot()
{
EUnterminatedComment = ::hx::CreateConstEnum< ErrorDef_obj >(HX_("EUnterminatedComment",fe,ed,ab,07),5);
EUnterminatedString = ::hx::CreateConstEnum< ErrorDef_obj >(HX_("EUnterminatedString",12,4e,75,07),4);
EUpperCase = ::hx::CreateConstEnum< ErrorDef_obj >(HX_("EUpperCase",2d,ec,fc,47),17);
}


} // end namespace hscriptBase
