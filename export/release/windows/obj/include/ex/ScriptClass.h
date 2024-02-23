#ifndef INCLUDED_ex_ScriptClass
#define INCLUDED_ex_ScriptClass

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(ex,InterpEx)
HX_DECLARE_CLASS1(ex,ScriptClass)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(hscriptBase,Interp)

namespace ex{


class HXCPP_CLASS_ATTRIBUTES ScriptClass_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ScriptClass_obj OBJ_;
		ScriptClass_obj();

	public:
		enum { _hx_ClassId = 0x0d2d9d8e };

		void __construct( ::Dynamic c,::cpp::VirtualArray args);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ex.ScriptClass")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ex.ScriptClass"); }
		static ::hx::ObjectPtr< ScriptClass_obj > __new( ::Dynamic c,::cpp::VirtualArray args);
		static ::hx::ObjectPtr< ScriptClass_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic c,::cpp::VirtualArray args);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ScriptClass_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ScriptClass",0d,6a,6a,f8); }

		 ::Dynamic _c;
		 ::ex::InterpEx _interp;
		 ::Dynamic superClass;
		::String superClassName;
		::String className;
		::String get_className();
		::Dynamic get_className_dyn();

		void superConstructor( ::Dynamic arg0, ::Dynamic arg1, ::Dynamic arg2, ::Dynamic arg3);
		::Dynamic superConstructor_dyn();

		void createSuperClass(::cpp::VirtualArray args);
		::Dynamic createSuperClass_dyn();

		 ::Dynamic callFunction0(::String name);
		::Dynamic callFunction0_dyn();

		 ::Dynamic callFunction1(::String name, ::Dynamic arg0);
		::Dynamic callFunction1_dyn();

		 ::Dynamic callFunction2(::String name, ::Dynamic arg0, ::Dynamic arg1);
		::Dynamic callFunction2_dyn();

		 ::Dynamic callFunction3(::String name, ::Dynamic arg0, ::Dynamic arg1, ::Dynamic arg2);
		::Dynamic callFunction3_dyn();

		 ::Dynamic callFunction4(::String name, ::Dynamic arg0, ::Dynamic arg1, ::Dynamic arg2, ::Dynamic arg3);
		::Dynamic callFunction4_dyn();

		 ::Dynamic callFunction(::String name,::cpp::VirtualArray args);
		::Dynamic callFunction_dyn();

		 ::Dynamic findFunction(::String name);
		::Dynamic findFunction_dyn();

		 ::Dynamic findVar(::String name);
		::Dynamic findVar_dyn();

		 ::Dynamic findField(::String name);
		::Dynamic findField_dyn();

		 ::haxe::ds::StringMap listFunctions();
		::Dynamic listFunctions_dyn();

		 ::haxe::ds::StringMap _cachedFieldDecls;
		 ::haxe::ds::StringMap _cachedFunctionDecls;
		 ::haxe::ds::StringMap _cachedVarDecls;
		void buildCaches();
		::Dynamic buildCaches_dyn();

};

} // end namespace ex

#endif /* INCLUDED_ex_ScriptClass */ 
