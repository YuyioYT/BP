#ifndef INCLUDED_ex_ParserEx
#define INCLUDED_ex_ParserEx

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hscriptBase_Parser
#include <hscriptBase/Parser.h>
#endif
HX_DECLARE_CLASS1(ex,ParserEx)
HX_DECLARE_CLASS1(hscriptBase,Parser)

namespace ex{


class HXCPP_CLASS_ATTRIBUTES ParserEx_obj : public  ::hscriptBase::Parser_obj
{
	public:
		typedef  ::hscriptBase::Parser_obj super;
		typedef ParserEx_obj OBJ_;
		ParserEx_obj();

	public:
		enum { _hx_ClassId = 0x4d7d9705 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ex.ParserEx")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ex.ParserEx"); }
		static ::hx::ObjectPtr< ParserEx_obj > __new();
		static ::hx::ObjectPtr< ParserEx_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ParserEx_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ParserEx",52,cb,42,b0); }

};

} // end namespace ex

#endif /* INCLUDED_ex_ParserEx */ 
