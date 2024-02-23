#ifndef INCLUDED_ex__AbstractScriptClass_AbstractScriptClass_Impl_
#define INCLUDED_ex__AbstractScriptClass_AbstractScriptClass_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(ex,ScriptClass)
HX_DECLARE_CLASS2(ex,_AbstractScriptClass,AbstractScriptClass_Impl_)

namespace ex{
namespace _AbstractScriptClass{


class HXCPP_CLASS_ATTRIBUTES AbstractScriptClass_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AbstractScriptClass_Impl__obj OBJ_;
		AbstractScriptClass_Impl__obj();

	public:
		enum { _hx_ClassId = 0x6da6aa68 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="ex._AbstractScriptClass.AbstractScriptClass_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"ex._AbstractScriptClass.AbstractScriptClass_Impl_"); }

		inline static ::hx::ObjectPtr< AbstractScriptClass_Impl__obj > __new() {
			::hx::ObjectPtr< AbstractScriptClass_Impl__obj > __this = new AbstractScriptClass_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AbstractScriptClass_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			AbstractScriptClass_Impl__obj *__this = (AbstractScriptClass_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AbstractScriptClass_Impl__obj), false, "ex._AbstractScriptClass.AbstractScriptClass_Impl_"));
			*(void **)__this = AbstractScriptClass_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AbstractScriptClass_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AbstractScriptClass_Impl_",2b,ef,70,68); }

		static  ::Dynamic resolveField( ::ex::ScriptClass this1,::String name);
		static ::Dynamic resolveField_dyn();

		static  ::Dynamic fieldRead( ::ex::ScriptClass this1,::String name);
		static ::Dynamic fieldRead_dyn();

		static  ::Dynamic fieldWrite( ::ex::ScriptClass this1,::String name, ::Dynamic value);
		static ::Dynamic fieldWrite_dyn();

};

} // end namespace ex
} // end namespace _AbstractScriptClass

#endif /* INCLUDED_ex__AbstractScriptClass_AbstractScriptClass_Impl_ */ 
