#ifndef INCLUDED_ex_Param
#define INCLUDED_ex_Param

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(ex,Param)
namespace ex{


class Param_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Param_obj OBJ_;

	public:
		Param_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("ex.Param",32,3a,e4,c3); }
		::String __ToString() const { return HX_("Param.",21,6f,0f,22) + _hx_tag; }

		static ::ex::Param Unused;
		static inline ::ex::Param Unused_dyn() { return Unused; }
};

} // end namespace ex

#endif /* INCLUDED_ex_Param */ 
