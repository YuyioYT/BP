#ifndef INCLUDED_hscriptBase_FieldAccess
#define INCLUDED_hscriptBase_FieldAccess

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hscriptBase,FieldAccess)
namespace hscriptBase{


class FieldAccess_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FieldAccess_obj OBJ_;

	public:
		FieldAccess_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hscriptBase.FieldAccess",94,2c,4e,91); }
		::String __ToString() const { return HX_("FieldAccess.",90,a4,8d,70) + _hx_tag; }

		static ::hscriptBase::FieldAccess AInline;
		static inline ::hscriptBase::FieldAccess AInline_dyn() { return AInline; }
		static ::hscriptBase::FieldAccess AMacro;
		static inline ::hscriptBase::FieldAccess AMacro_dyn() { return AMacro; }
		static ::hscriptBase::FieldAccess AOverride;
		static inline ::hscriptBase::FieldAccess AOverride_dyn() { return AOverride; }
		static ::hscriptBase::FieldAccess APrivate;
		static inline ::hscriptBase::FieldAccess APrivate_dyn() { return APrivate; }
		static ::hscriptBase::FieldAccess APublic;
		static inline ::hscriptBase::FieldAccess APublic_dyn() { return APublic; }
		static ::hscriptBase::FieldAccess AStatic;
		static inline ::hscriptBase::FieldAccess AStatic_dyn() { return AStatic; }
};

} // end namespace hscriptBase

#endif /* INCLUDED_hscriptBase_FieldAccess */ 
