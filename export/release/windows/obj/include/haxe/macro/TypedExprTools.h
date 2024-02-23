#ifndef INCLUDED_haxe_macro_TypedExprTools
#define INCLUDED_haxe_macro_TypedExprTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,TypedExprTools)

namespace haxe{
namespace macro{


class HXCPP_CLASS_ATTRIBUTES TypedExprTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TypedExprTools_obj OBJ_;
		TypedExprTools_obj();

	public:
		enum { _hx_ClassId = 0x473720e2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.macro.TypedExprTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.macro.TypedExprTools"); }

		inline static ::hx::ObjectPtr< TypedExprTools_obj > __new() {
			::hx::ObjectPtr< TypedExprTools_obj > __this = new TypedExprTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TypedExprTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			TypedExprTools_obj *__this = (TypedExprTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TypedExprTools_obj), false, "haxe.macro.TypedExprTools"));
			*(void **)__this = TypedExprTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TypedExprTools_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TypedExprTools",fc,aa,97,a9); }

};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_TypedExprTools */ 
