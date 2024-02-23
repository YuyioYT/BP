#ifndef INCLUDED_hscriptBase_Const
#define INCLUDED_hscriptBase_Const

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hscriptBase,Const)
namespace hscriptBase{


class Const_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Const_obj OBJ_;

	public:
		Const_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hscriptBase.Const",79,8b,ec,9c); }
		::String __ToString() const { return HX_("Const.",8b,b1,70,fc) + _hx_tag; }

		static ::hscriptBase::Const CFloat(Float f);
		static ::Dynamic CFloat_dyn();
		static ::hscriptBase::Const CInt(int v);
		static ::Dynamic CInt_dyn();
		static ::hscriptBase::Const CString(::String s, ::Dynamic interpolated);
		static ::Dynamic CString_dyn();
};

} // end namespace hscriptBase

#endif /* INCLUDED_hscriptBase_Const */ 
