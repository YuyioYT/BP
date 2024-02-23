#ifndef INCLUDED_hscriptBase_Error
#define INCLUDED_hscriptBase_Error

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hscriptBase,Error)
HX_DECLARE_CLASS1(hscriptBase,ErrorDef)

namespace hscriptBase{


class HXCPP_CLASS_ATTRIBUTES Error_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Error_obj OBJ_;
		Error_obj();

	public:
		enum { _hx_ClassId = 0x376c6a04 };

		void __construct( ::hscriptBase::ErrorDef e,int pmin,int pmax,::String origin,int line);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hscriptBase.Error")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hscriptBase.Error"); }
		static ::hx::ObjectPtr< Error_obj > __new( ::hscriptBase::ErrorDef e,int pmin,int pmax,::String origin,int line);
		static ::hx::ObjectPtr< Error_obj > __alloc(::hx::Ctx *_hx_ctx, ::hscriptBase::ErrorDef e,int pmin,int pmax,::String origin,int line);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Error_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Error",a8,3b,57,06); }

		 ::hscriptBase::ErrorDef e;
		int pmin;
		int pmax;
		::String origin;
		int line;
		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace hscriptBase

#endif /* INCLUDED_hscriptBase_Error */ 
