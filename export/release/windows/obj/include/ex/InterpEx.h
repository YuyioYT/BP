#ifndef INCLUDED_ex_InterpEx
#define INCLUDED_ex_InterpEx

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hscriptBase_Interp
#include <hscriptBase/Interp.h>
#endif
HX_DECLARE_CLASS1(ex,InterpEx)
HX_DECLARE_CLASS1(ex,ScriptClass)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(hscriptBase,Interp)
HX_DECLARE_CLASS1(hscriptBase,ModuleDecl)

namespace ex{


class HXCPP_CLASS_ATTRIBUTES InterpEx_obj : public  ::hscriptBase::Interp_obj
{
	public:
		typedef  ::hscriptBase::Interp_obj super;
		typedef InterpEx_obj OBJ_;
		InterpEx_obj();

	public:
		enum { _hx_ClassId = 0x03f92a02 };

		void __construct( ::ex::ScriptClass proxy, ::Dynamic __o_push, ::haxe::ds::StringMap superClassInstances);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ex.InterpEx")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ex.InterpEx"); }
		static ::hx::ObjectPtr< InterpEx_obj > __new( ::ex::ScriptClass proxy, ::Dynamic __o_push, ::haxe::ds::StringMap superClassInstances);
		static ::hx::ObjectPtr< InterpEx_obj > __alloc(::hx::Ctx *_hx_ctx, ::ex::ScriptClass proxy, ::Dynamic __o_push, ::haxe::ds::StringMap superClassInstances);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~InterpEx_obj();

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
		::String __ToString() const { return HX_("InterpEx",87,8f,29,02); }

		static void __boot();
		static ::Array< ::Dynamic> interps;
		static  ::haxe::ds::StringMap _scriptClassDescriptors;
		static void registerScriptClass( ::Dynamic c);
		static ::Dynamic registerScriptClass_dyn();

		static  ::Dynamic findScriptClassDescriptor(::String name);
		static ::Dynamic findScriptClassDescriptor_dyn();

		::String pkg;
		 ::ex::ScriptClass _proxy;
		::String origin;
		 ::haxe::ds::StringMap changedClasses;
		 ::Dynamic posInfos();

		 ::Dynamic cnew(::String cl,::cpp::VirtualArray args);

		 ::Dynamic assign( ::Dynamic e1, ::Dynamic e2);

		 ::Dynamic fcall( ::Dynamic o,::String f,::cpp::VirtualArray args);

		 ::Dynamic call( ::Dynamic o, ::Dynamic f,::cpp::VirtualArray args);

		 ::Dynamic get( ::Dynamic o,::String f);

		 ::Dynamic set( ::Dynamic o,::String f, ::Dynamic v);

		 ::Dynamic _nextCallObject;
		 ::Dynamic resolve(::String id);

		void addModule(::String moduleContents);
		::Dynamic addModule_dyn();

		 ::ex::ScriptClass createScriptClassInstance(::String className,::cpp::VirtualArray args);
		::Dynamic createScriptClassInstance_dyn();

		void registerModule(::Array< ::Dynamic> module);
		::Dynamic registerModule_dyn();

};

} // end namespace ex

#endif /* INCLUDED_ex_InterpEx */ 
