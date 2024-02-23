#ifndef INCLUDED_hscriptBase_CType
#define INCLUDED_hscriptBase_CType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hscriptBase,CType)
namespace hscriptBase{


class CType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef CType_obj OBJ_;

	public:
		CType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hscriptBase.CType",d3,1e,1c,8b); }
		::String __ToString() const { return HX_("CType.",f1,0c,e2,77) + _hx_tag; }

		static ::hscriptBase::CType CTAnon(::Array< ::Dynamic> fields);
		static ::Dynamic CTAnon_dyn();
		static ::hscriptBase::CType CTFun(::Array< ::Dynamic> args, ::hscriptBase::CType ret);
		static ::Dynamic CTFun_dyn();
		static ::hscriptBase::CType CTNamed(::String n, ::hscriptBase::CType t);
		static ::Dynamic CTNamed_dyn();
		static ::hscriptBase::CType CTOpt( ::hscriptBase::CType t);
		static ::Dynamic CTOpt_dyn();
		static ::hscriptBase::CType CTParent( ::hscriptBase::CType t);
		static ::Dynamic CTParent_dyn();
		static ::hscriptBase::CType CTPath(::Array< ::String > path,::Array< ::Dynamic> params);
		static ::Dynamic CTPath_dyn();
};

} // end namespace hscriptBase

#endif /* INCLUDED_hscriptBase_CType */ 
