#ifndef INCLUDED_haxe_macro_TypeTools
#define INCLUDED_haxe_macro_TypeTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,TypeTools)

namespace haxe{
namespace macro{


class HXCPP_CLASS_ATTRIBUTES TypeTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TypeTools_obj OBJ_;
		TypeTools_obj();

	public:
		enum { _hx_ClassId = 0x58cd2d1f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.macro.TypeTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.macro.TypeTools"); }

		inline static ::hx::ObjectPtr< TypeTools_obj > __new() {
			::hx::ObjectPtr< TypeTools_obj > __this = new TypeTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TypeTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			TypeTools_obj *__this = (TypeTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TypeTools_obj), false, "haxe.macro.TypeTools"));
			*(void **)__this = TypeTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TypeTools_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TypeTools",e1,cc,d9,7a); }

};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_TypeTools */ 
