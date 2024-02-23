#ifndef INCLUDED_tea_backend_SScriptX
#define INCLUDED_tea_backend_SScriptX

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(ex,InterpEx)
HX_DECLARE_CLASS1(ex,ScriptClass)
HX_DECLARE_CLASS1(haxe,Exception)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(hscriptBase,Interp)
HX_DECLARE_CLASS1(tea,SScript)
HX_DECLARE_CLASS2(tea,backend,SScriptX)

namespace tea{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES SScriptX_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SScriptX_obj OBJ_;
		SScriptX_obj();

	public:
		enum { _hx_ClassId = 0x4caeafde };

		void __construct(::String __o_scriptFile, ::tea::SScript tea);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tea.backend.SScriptX")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tea.backend.SScriptX"); }
		static ::hx::ObjectPtr< SScriptX_obj > __new(::String __o_scriptFile, ::tea::SScript tea);
		static ::hx::ObjectPtr< SScriptX_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_scriptFile, ::tea::SScript tea);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SScriptX_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SScriptX",da,23,90,85); }

		static void __boot();
		static  ::haxe::ds::StringMap variables;
		static ::Array< ::Dynamic> NONE;
		 ::tea::SScript tea;
		 ::tea::SScript script;
		 ::ex::InterpEx interpEX;
		 ::Dynamic classes;
		::String currentClass;
		 ::ex::ScriptClass currentScriptClass;
		::String scriptFile;
		 ::Dynamic callFunction(::String func,::cpp::VirtualArray args,::String className);
		::Dynamic callFunction_dyn();

		 ::tea::backend::SScriptX set(::String key, ::Dynamic value);
		::Dynamic set_dyn();

		 ::tea::backend::SScriptX doString(::String string,::String origin);
		::Dynamic doString_dyn();

		void createClasses();
		::Dynamic createClasses_dyn();

		void clearClasses();
		::Dynamic clearClasses_dyn();

		::String set_currentClass(::String value);
		::Dynamic set_currentClass_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		::hx::Class get_currentSuperClass();
		::Dynamic get_currentSuperClass_dyn();

};

} // end namespace tea
} // end namespace backend

#endif /* INCLUDED_tea_backend_SScriptX */ 
