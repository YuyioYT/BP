#ifndef INCLUDED_hscriptBase_Tools
#define INCLUDED_hscriptBase_Tools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hscriptBase,CType)
HX_DECLARE_CLASS1(hscriptBase,ExprDef)
HX_DECLARE_CLASS1(hscriptBase,Tools)

namespace hscriptBase{


class HXCPP_CLASS_ATTRIBUTES Tools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Tools_obj OBJ_;
		Tools_obj();

	public:
		enum { _hx_ClassId = 0x3f653abb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hscriptBase.Tools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hscriptBase.Tools"); }

		inline static ::hx::ObjectPtr< Tools_obj > __new() {
			::hx::ObjectPtr< Tools_obj > __this = new Tools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Tools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Tools_obj *__this = (Tools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tools_obj), false, "hscriptBase.Tools"));
			*(void **)__this = Tools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Tools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Tools",fb,01,5c,a7); }

		static void __boot();
		static ::Array< ::String > keys;
		static void iter( ::Dynamic e, ::Dynamic f);
		static ::Dynamic iter_dyn();

		static  ::Dynamic map( ::Dynamic e, ::Dynamic f);
		static ::Dynamic map_dyn();

		static ::String getIdent( ::Dynamic e);
		static ::Dynamic getIdent_dyn();

		static ::String ctToType( ::hscriptBase::CType ct);
		static ::Dynamic ctToType_dyn();

		static bool compatibleWithEachOther(::String v,::String v2);
		static ::Dynamic compatibleWithEachOther_dyn();

		static bool compatibleWithEachOtherObjects(::hx::Class v,::String v2);
		static ::Dynamic compatibleWithEachOtherObjects_dyn();

		static ::String getType( ::Dynamic v, ::Dynamic fn);
		static ::Dynamic getType_dyn();

		static  ::hscriptBase::ExprDef expr( ::Dynamic e);
		static ::Dynamic expr_dyn();

		static  ::Dynamic mk( ::hscriptBase::ExprDef e, ::Dynamic p);
		static ::Dynamic mk_dyn();

};

} // end namespace hscriptBase

#endif /* INCLUDED_hscriptBase_Tools */ 
