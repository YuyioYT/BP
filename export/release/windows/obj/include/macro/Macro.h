#ifndef INCLUDED_macro_Macro
#define INCLUDED_macro_Macro

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(macro,Macro)

namespace macro{


class HXCPP_CLASS_ATTRIBUTES Macro_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Macro_obj OBJ_;
		Macro_obj();

	public:
		enum { _hx_ClassId = 0x07a9f160 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="macro.Macro")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"macro.Macro"); }

		inline static ::hx::ObjectPtr< Macro_obj > __new() {
			::hx::ObjectPtr< Macro_obj > __this = new Macro_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Macro_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Macro_obj *__this = (Macro_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Macro_obj), false, "macro.Macro"));
			*(void **)__this = Macro_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Macro_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Macro",ec,df,43,96); }

		static void __boot();
		static bool isWindows;
		static ::Array< ::Dynamic> macroClasses;
		static ::String get_definePath();
		static ::Dynamic get_definePath_dyn();

};

} // end namespace macro

#endif /* INCLUDED_macro_Macro */ 
