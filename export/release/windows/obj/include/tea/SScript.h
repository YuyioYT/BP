#ifndef INCLUDED_tea_SScript
#define INCLUDED_tea_SScript

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS1(ex,ScriptClass)
HX_DECLARE_CLASS1(haxe,Exception)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(hscriptBase,Interp)
HX_DECLARE_CLASS1(hscriptBase,Parser)
HX_DECLARE_CLASS1(tea,SScript)
HX_DECLARE_CLASS2(tea,backend,SScriptX)

namespace tea{


class HXCPP_CLASS_ATTRIBUTES SScript_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SScript_obj OBJ_;
		SScript_obj();

	public:
		enum { _hx_ClassId = 0x1f20a2ee };

		void __construct(::String __o_scriptPath, ::Dynamic __o_preset, ::Dynamic __o_startExecute);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tea.SScript")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tea.SScript"); }
		static ::hx::ObjectPtr< SScript_obj > __new(::String __o_scriptPath, ::Dynamic __o_preset, ::Dynamic __o_startExecute);
		static ::hx::ObjectPtr< SScript_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_scriptPath, ::Dynamic __o_preset, ::Dynamic __o_startExecute);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SScript_obj();

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
		::String __ToString() const { return HX_("SScript",be,42,6a,f7); }

		static void __boot();
		static  ::Dynamic defaultTypeCheck;
		static  ::Dynamic defaultClassSupport;
		static  ::haxe::ds::StringMap superClassInstances;
		static  ::haxe::ds::StringMap globalVariables;
		static  ::haxe::ds::StringMap global;
		static  ::haxe::ds::StringMap defines;
		static ::Array< ::Dynamic> listScripts(::String path,::Array< ::String > extensions);
		static ::Dynamic listScripts_dyn();

		static  ::EReg get_BlankReg();
		static ::Dynamic get_BlankReg_dyn();

		static  ::Dynamic set_defaultTypeCheck( ::Dynamic value);
		static ::Dynamic set_defaultTypeCheck_dyn();

		static  ::Dynamic set_defaultClassSupport( ::Dynamic value);
		static ::Dynamic set_defaultClassSupport_dyn();

		::String customOrigin;
		 ::Dynamic returnValue;
		bool typeCheck;
		bool classSupport;
		Float lastReportedTime;
		Float lastReportedCallTime;
		::Array< ::Dynamic> notAllowedClasses;
		 ::hscriptBase::Interp interp;
		 ::hscriptBase::Parser parser;
		::String script;
		bool active;
		::String scriptFile;
		bool traces;
		bool debugTraces;
		::String packagePath;
		::Array< ::Dynamic> parsingExceptions;
		 ::tea::backend::SScriptX scriptX;
		bool _destroyed;
		void execute();
		::Dynamic execute_dyn();

		 ::tea::SScript set(::String key, ::Dynamic obj);
		::Dynamic set_dyn();

		 ::tea::SScript setClass(::hx::Class cl);
		::Dynamic setClass_dyn();

		 ::tea::SScript setClassString(::String cl);
		::Dynamic setClassString_dyn();

		 ::haxe::ds::StringMap locals();
		::Dynamic locals_dyn();

		 ::tea::SScript unset(::String key);
		::Dynamic unset_dyn();

		 ::Dynamic get(::String key);
		::Dynamic get_dyn();

		 ::Dynamic call(::String func,::cpp::VirtualArray args,::String className);
		::Dynamic call_dyn();

		 ::tea::SScript clear();
		::Dynamic clear_dyn();

		bool exists(::String key);
		::Dynamic exists_dyn();

		virtual void preset();
		::Dynamic preset_dyn();

		void doFile(::String scriptPath);
		::Dynamic doFile_dyn();

		 ::tea::SScript doString(::String string,::String origin);
		::Dynamic doString_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		virtual void destroy();
		::Dynamic destroy_dyn();

		 ::haxe::ds::StringMap get_variables();
		::Dynamic get_variables_dyn();

		::String setPackagePath(::String p);
		::Dynamic setPackagePath_dyn();

		::String get_packagePath();
		::Dynamic get_packagePath_dyn();

		 ::haxe::ds::StringMap get_classes();
		::Dynamic get_classes_dyn();

		 ::ex::ScriptClass get_currentScriptClass();
		::Dynamic get_currentScriptClass_dyn();

		::hx::Class get_currentSuperClass();
		::Dynamic get_currentSuperClass_dyn();

		::String set_currentClass(::String value);
		::Dynamic set_currentClass_dyn();

		::String get_currentClass();
		::Dynamic get_currentClass_dyn();

		bool get_exMode();
		::Dynamic get_exMode_dyn();

		::String set_customOrigin(::String value);
		::Dynamic set_customOrigin_dyn();

};

} // end namespace tea

#endif /* INCLUDED_tea_SScript */ 
