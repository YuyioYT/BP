#ifndef INCLUDED_hscriptBase_Printer
#define INCLUDED_hscriptBase_Printer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(StringBuf)
HX_DECLARE_CLASS1(hscriptBase,CType)
HX_DECLARE_CLASS1(hscriptBase,Error)
HX_DECLARE_CLASS1(hscriptBase,Printer)

namespace hscriptBase{


class HXCPP_CLASS_ATTRIBUTES Printer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Printer_obj OBJ_;
		Printer_obj();

	public:
		enum { _hx_ClassId = 0x108abd42 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hscriptBase.Printer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hscriptBase.Printer"); }
		static ::hx::ObjectPtr< Printer_obj > __new();
		static ::hx::ObjectPtr< Printer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Printer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Printer",ba,fd,84,51); }

		static ::String toString( ::Dynamic e);
		static ::Dynamic toString_dyn();

		static ::String errorToString( ::hscriptBase::Error e);
		static ::Dynamic errorToString_dyn();

		 ::StringBuf buf;
		::String tabs;
		::String exprToString( ::Dynamic e);
		::Dynamic exprToString_dyn();

		::String typeToString( ::hscriptBase::CType t);
		::Dynamic typeToString_dyn();

		void add( ::Dynamic s);
		::Dynamic add_dyn();

		void type( ::hscriptBase::CType t);
		::Dynamic type_dyn();

		void addType( ::hscriptBase::CType t);
		::Dynamic addType_dyn();

		void expr( ::Dynamic e);
		::Dynamic expr_dyn();

};

} // end namespace hscriptBase

#endif /* INCLUDED_hscriptBase_Printer */ 
