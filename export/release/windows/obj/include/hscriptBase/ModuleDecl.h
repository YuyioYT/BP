#ifndef INCLUDED_hscriptBase_ModuleDecl
#define INCLUDED_hscriptBase_ModuleDecl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hscriptBase,ModuleDecl)
namespace hscriptBase{


class ModuleDecl_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ModuleDecl_obj OBJ_;

	public:
		ModuleDecl_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hscriptBase.ModuleDecl",60,95,e2,c3); }
		::String __ToString() const { return HX_("ModuleDecl.",18,70,f2,04) + _hx_tag; }

		static ::hscriptBase::ModuleDecl DClass( ::Dynamic c);
		static ::Dynamic DClass_dyn();
		static ::hscriptBase::ModuleDecl DImport(::Array< ::String > path, ::Dynamic everything,::String asIdent);
		static ::Dynamic DImport_dyn();
		static ::hscriptBase::ModuleDecl DPackage(::Array< ::String > path);
		static ::Dynamic DPackage_dyn();
		static ::hscriptBase::ModuleDecl DTypedef( ::Dynamic c);
		static ::Dynamic DTypedef_dyn();
};

} // end namespace hscriptBase

#endif /* INCLUDED_hscriptBase_ModuleDecl */ 
