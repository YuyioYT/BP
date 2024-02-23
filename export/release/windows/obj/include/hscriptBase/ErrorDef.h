#ifndef INCLUDED_hscriptBase_ErrorDef
#define INCLUDED_hscriptBase_ErrorDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hscriptBase,ErrorDef)
namespace hscriptBase{


class ErrorDef_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ErrorDef_obj OBJ_;

	public:
		ErrorDef_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hscriptBase.ErrorDef",87,12,11,a9); }
		::String __ToString() const { return HX_("ErrorDef.",91,ae,a1,0a) + _hx_tag; }

		static ::hscriptBase::ErrorDef ECustom(::String msg);
		static ::Dynamic ECustom_dyn();
		static ::hscriptBase::ErrorDef EDuplicate(::String v);
		static ::Dynamic EDuplicate_dyn();
		static ::hscriptBase::ErrorDef EExpectedField(::String v);
		static ::Dynamic EExpectedField_dyn();
		static ::hscriptBase::ErrorDef EFunctionAssign(::String f);
		static ::Dynamic EFunctionAssign_dyn();
		static ::hscriptBase::ErrorDef EInvalidAccess(::String f);
		static ::Dynamic EInvalidAccess_dyn();
		static ::hscriptBase::ErrorDef EInvalidChar(int c);
		static ::Dynamic EInvalidChar_dyn();
		static ::hscriptBase::ErrorDef EInvalidFinal(::String v);
		static ::Dynamic EInvalidFinal_dyn();
		static ::hscriptBase::ErrorDef EInvalidIterator(::String v);
		static ::Dynamic EInvalidIterator_dyn();
		static ::hscriptBase::ErrorDef EInvalidOp(::String op);
		static ::Dynamic EInvalidOp_dyn();
		static ::hscriptBase::ErrorDef EInvalidPreprocessor(::String msg);
		static ::Dynamic EInvalidPreprocessor_dyn();
		static ::hscriptBase::ErrorDef EUnexistingField( ::Dynamic f, ::Dynamic f2);
		static ::Dynamic EUnexistingField_dyn();
		static ::hscriptBase::ErrorDef EUnexpected(::String s);
		static ::Dynamic EUnexpected_dyn();
		static ::hscriptBase::ErrorDef EUnknownIdentifier(::String s);
		static ::Dynamic EUnknownIdentifier_dyn();
		static ::hscriptBase::ErrorDef EUnknownVariable(::String v);
		static ::Dynamic EUnknownVariable_dyn();
		static ::hscriptBase::ErrorDef EUnmatchingType(::String v,::String t,::String varn);
		static ::Dynamic EUnmatchingType_dyn();
		static ::hscriptBase::ErrorDef EUnterminatedComment;
		static inline ::hscriptBase::ErrorDef EUnterminatedComment_dyn() { return EUnterminatedComment; }
		static ::hscriptBase::ErrorDef EUnterminatedString;
		static inline ::hscriptBase::ErrorDef EUnterminatedString_dyn() { return EUnterminatedString; }
		static ::hscriptBase::ErrorDef EUpperCase;
		static inline ::hscriptBase::ErrorDef EUpperCase_dyn() { return EUpperCase; }
};

} // end namespace hscriptBase

#endif /* INCLUDED_hscriptBase_ErrorDef */ 
