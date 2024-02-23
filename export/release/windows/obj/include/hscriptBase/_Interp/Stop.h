#ifndef INCLUDED_hscriptBase__Interp_Stop
#define INCLUDED_hscriptBase__Interp_Stop

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hscriptBase,_Interp,Stop)
namespace hscriptBase{
namespace _Interp{


class Stop_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Stop_obj OBJ_;

	public:
		Stop_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hscriptBase._Interp.Stop",67,a7,76,0e); }
		::String __ToString() const { return HX_("Stop.",cc,81,43,17) + _hx_tag; }

		static ::hscriptBase::_Interp::Stop SBreak;
		static inline ::hscriptBase::_Interp::Stop SBreak_dyn() { return SBreak; }
		static ::hscriptBase::_Interp::Stop SContinue;
		static inline ::hscriptBase::_Interp::Stop SContinue_dyn() { return SContinue; }
		static ::hscriptBase::_Interp::Stop SReturn;
		static inline ::hscriptBase::_Interp::Stop SReturn_dyn() { return SReturn; }
};

} // end namespace hscriptBase
} // end namespace _Interp

#endif /* INCLUDED_hscriptBase__Interp_Stop */ 
