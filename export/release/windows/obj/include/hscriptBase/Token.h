#ifndef INCLUDED_hscriptBase_Token
#define INCLUDED_hscriptBase_Token

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hscriptBase,Const)
HX_DECLARE_CLASS1(hscriptBase,Token)
namespace hscriptBase{


class Token_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Token_obj OBJ_;

	public:
		Token_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hscriptBase.Token",0f,15,ba,66); }
		::String __ToString() const { return HX_("Token.",35,8b,7b,c6) + _hx_tag; }

		static ::hscriptBase::Token TBkClose;
		static inline ::hscriptBase::Token TBkClose_dyn() { return TBkClose; }
		static ::hscriptBase::Token TBkOpen;
		static inline ::hscriptBase::Token TBkOpen_dyn() { return TBkOpen; }
		static ::hscriptBase::Token TBrClose;
		static inline ::hscriptBase::Token TBrClose_dyn() { return TBrClose; }
		static ::hscriptBase::Token TBrOpen;
		static inline ::hscriptBase::Token TBrOpen_dyn() { return TBrOpen; }
		static ::hscriptBase::Token TComma;
		static inline ::hscriptBase::Token TComma_dyn() { return TComma; }
		static ::hscriptBase::Token TConst( ::hscriptBase::Const c);
		static ::Dynamic TConst_dyn();
		static ::hscriptBase::Token TDot;
		static inline ::hscriptBase::Token TDot_dyn() { return TDot; }
		static ::hscriptBase::Token TDoubleDot;
		static inline ::hscriptBase::Token TDoubleDot_dyn() { return TDoubleDot; }
		static ::hscriptBase::Token TEof;
		static inline ::hscriptBase::Token TEof_dyn() { return TEof; }
		static ::hscriptBase::Token TEol;
		static inline ::hscriptBase::Token TEol_dyn() { return TEol; }
		static ::hscriptBase::Token TId(::String s);
		static ::Dynamic TId_dyn();
		static ::hscriptBase::Token TMeta(::String s);
		static ::Dynamic TMeta_dyn();
		static ::hscriptBase::Token TOp(::String s);
		static ::Dynamic TOp_dyn();
		static ::hscriptBase::Token TPClose;
		static inline ::hscriptBase::Token TPClose_dyn() { return TPClose; }
		static ::hscriptBase::Token TPOpen;
		static inline ::hscriptBase::Token TPOpen_dyn() { return TPOpen; }
		static ::hscriptBase::Token TPrepro(::String s);
		static ::Dynamic TPrepro_dyn();
		static ::hscriptBase::Token TQuestion;
		static inline ::hscriptBase::Token TQuestion_dyn() { return TQuestion; }
		static ::hscriptBase::Token TStatement;
		static inline ::hscriptBase::Token TStatement_dyn() { return TStatement; }
};

} // end namespace hscriptBase

#endif /* INCLUDED_hscriptBase_Token */ 
