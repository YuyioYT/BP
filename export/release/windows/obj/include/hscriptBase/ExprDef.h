#ifndef INCLUDED_hscriptBase_ExprDef
#define INCLUDED_hscriptBase_ExprDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hscriptBase,CType)
HX_DECLARE_CLASS1(hscriptBase,Const)
HX_DECLARE_CLASS1(hscriptBase,ExprDef)
namespace hscriptBase{


class ExprDef_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ExprDef_obj OBJ_;

	public:
		ExprDef_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hscriptBase.ExprDef",26,27,22,2c); }
		::String __ToString() const { return HX_("ExprDef.",be,76,8e,81) + _hx_tag; }

		static ::hscriptBase::ExprDef EArray( ::Dynamic e, ::Dynamic index);
		static ::Dynamic EArray_dyn();
		static ::hscriptBase::ExprDef EArrayDecl(::Array< ::Dynamic> e);
		static ::Dynamic EArrayDecl_dyn();
		static ::hscriptBase::ExprDef EBinop(::String op, ::Dynamic e1, ::Dynamic e2);
		static ::Dynamic EBinop_dyn();
		static ::hscriptBase::ExprDef EBlock(::Array< ::Dynamic> e);
		static ::Dynamic EBlock_dyn();
		static ::hscriptBase::ExprDef EBreak;
		static inline ::hscriptBase::ExprDef EBreak_dyn() { return EBreak; }
		static ::hscriptBase::ExprDef ECall( ::Dynamic e,::Array< ::Dynamic> params);
		static ::Dynamic ECall_dyn();
		static ::hscriptBase::ExprDef ECheckType( ::Dynamic e, ::hscriptBase::CType t);
		static ::Dynamic ECheckType_dyn();
		static ::hscriptBase::ExprDef ECoalesce( ::Dynamic e1, ::Dynamic e2,bool assign);
		static ::Dynamic ECoalesce_dyn();
		static ::hscriptBase::ExprDef EConst( ::hscriptBase::Const c);
		static ::Dynamic EConst_dyn();
		static ::hscriptBase::ExprDef EContinue;
		static inline ::hscriptBase::ExprDef EContinue_dyn() { return EContinue; }
		static ::hscriptBase::ExprDef EDoWhile( ::Dynamic cond, ::Dynamic e);
		static ::Dynamic EDoWhile_dyn();
		static ::hscriptBase::ExprDef EField( ::Dynamic e,::String f);
		static ::Dynamic EField_dyn();
		static ::hscriptBase::ExprDef EFinal(::String f, ::hscriptBase::CType t, ::Dynamic e, ::Dynamic p);
		static ::Dynamic EFinal_dyn();
		static ::hscriptBase::ExprDef EFor(::String v, ::Dynamic it, ::Dynamic e);
		static ::Dynamic EFor_dyn();
		static ::hscriptBase::ExprDef EFunction(::Array< ::Dynamic> args, ::Dynamic e,::String name, ::hscriptBase::CType ret, ::Dynamic p, ::Dynamic d);
		static ::Dynamic EFunction_dyn();
		static ::hscriptBase::ExprDef EIdent(::String v, ::Dynamic isFinal);
		static ::Dynamic EIdent_dyn();
		static ::hscriptBase::ExprDef EIf( ::Dynamic cond, ::Dynamic e1, ::Dynamic e2);
		static ::Dynamic EIf_dyn();
		static ::hscriptBase::ExprDef EImport( ::Dynamic i,::String c,::cpp::VirtualArray ps);
		static ::Dynamic EImport_dyn();
		static ::hscriptBase::ExprDef EMeta(::String name,::Array< ::Dynamic> args, ::Dynamic e);
		static ::Dynamic EMeta_dyn();
		static ::hscriptBase::ExprDef ENew(::String cl,::Array< ::Dynamic> params);
		static ::Dynamic ENew_dyn();
		static ::hscriptBase::ExprDef EObject(::Array< ::Dynamic> fl);
		static ::Dynamic EObject_dyn();
		static ::hscriptBase::ExprDef EPackage(::String p);
		static ::Dynamic EPackage_dyn();
		static ::hscriptBase::ExprDef EParent( ::Dynamic e);
		static ::Dynamic EParent_dyn();
		static ::hscriptBase::ExprDef EReturn( ::Dynamic e);
		static ::Dynamic EReturn_dyn();
		static ::hscriptBase::ExprDef ESwitch( ::Dynamic e,::Array< ::Dynamic> cases, ::Dynamic defaultExpr);
		static ::Dynamic ESwitch_dyn();
		static ::hscriptBase::ExprDef ETernary( ::Dynamic cond, ::Dynamic e1, ::Dynamic e2);
		static ::Dynamic ETernary_dyn();
		static ::hscriptBase::ExprDef EThrow( ::Dynamic e);
		static ::Dynamic EThrow_dyn();
		static ::hscriptBase::ExprDef ETry( ::Dynamic e,::String v, ::hscriptBase::CType t, ::Dynamic ecatch);
		static ::Dynamic ETry_dyn();
		static ::hscriptBase::ExprDef EUnop(::String op,bool prefix, ::Dynamic e);
		static ::Dynamic EUnop_dyn();
		static ::hscriptBase::ExprDef EUsing( ::Dynamic op,::String n);
		static ::Dynamic EUsing_dyn();
		static ::hscriptBase::ExprDef EVar(::String n, ::hscriptBase::CType t, ::Dynamic e, ::Dynamic p,::Array< ::String > g);
		static ::Dynamic EVar_dyn();
		static ::hscriptBase::ExprDef EWhile( ::Dynamic cond, ::Dynamic e);
		static ::Dynamic EWhile_dyn();
};

} // end namespace hscriptBase

#endif /* INCLUDED_hscriptBase_ExprDef */ 
