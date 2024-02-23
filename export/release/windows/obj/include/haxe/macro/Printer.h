#ifndef INCLUDED_haxe_macro_Printer
#define INCLUDED_haxe_macro_Printer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,Printer)

namespace haxe{
namespace macro{


class HXCPP_CLASS_ATTRIBUTES Printer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Printer_obj OBJ_;
		Printer_obj();

	public:
		enum { _hx_ClassId = 0x0ff33278 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.macro.Printer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.macro.Printer"); }

		inline static ::hx::ObjectPtr< Printer_obj > __new() {
			::hx::ObjectPtr< Printer_obj > __this = new Printer_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Printer_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Printer_obj *__this = (Printer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Printer_obj), false, "haxe.macro.Printer"));
			*(void **)__this = Printer_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Printer_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Printer",ba,fd,84,51); }

};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_Printer */ 
