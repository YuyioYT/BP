#ifndef INCLUDED_ex_Status
#define INCLUDED_ex_Status

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(ex,Status)
namespace ex{


class Status_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Status_obj OBJ_;

	public:
		Status_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("ex.Status",ed,9d,4f,bc); }
		::String __ToString() const { return HX_("Status.",9c,8c,bf,03) + _hx_tag; }

		static ::ex::Status NONE;
		static inline ::ex::Status NONE_dyn() { return NONE; }
};

} // end namespace ex

#endif /* INCLUDED_ex_Status */ 
