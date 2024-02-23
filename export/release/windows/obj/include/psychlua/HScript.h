#ifndef INCLUDED_psychlua_HScript
#define INCLUDED_psychlua_HScript

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tea_SScript
#include <tea/SScript.h>
#endif
HX_DECLARE_CLASS1(psychlua,FunkinLua)
HX_DECLARE_CLASS1(psychlua,HScript)
HX_DECLARE_CLASS1(tea,SScript)

namespace psychlua{


class HXCPP_CLASS_ATTRIBUTES HScript_obj : public  ::tea::SScript_obj
{
	public:
		typedef  ::tea::SScript_obj super;
		typedef HScript_obj OBJ_;
		HScript_obj();

	public:
		enum { _hx_ClassId = 0x7f75c5ee };

		void __construct( ::psychlua::FunkinLua parent,::String file);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="psychlua.HScript")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"psychlua.HScript"); }
		static ::hx::ObjectPtr< HScript_obj > __new( ::psychlua::FunkinLua parent,::String file);
		static ::hx::ObjectPtr< HScript_obj > __alloc(::hx::Ctx *_hx_ctx, ::psychlua::FunkinLua parent,::String file);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HScript_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HScript",73,28,fe,2d); }

		static void initHaxeModule( ::psychlua::FunkinLua parent);
		static ::Dynamic initHaxeModule_dyn();

		static void initHaxeModuleCode( ::psychlua::FunkinLua parent,::String code);
		static ::Dynamic initHaxeModuleCode_dyn();

		static void implement( ::psychlua::FunkinLua funk);
		static ::Dynamic implement_dyn();

		 ::psychlua::FunkinLua parentLua;
		::String origin;
		void preset();

		 ::Dynamic executeCode(::String funcToRun,::cpp::VirtualArray funcArgs);
		::Dynamic executeCode_dyn();

		 ::Dynamic executeFunction(::String funcToRun,::cpp::VirtualArray funcArgs);
		::Dynamic executeFunction_dyn();

		void destroy();

};

} // end namespace psychlua

#endif /* INCLUDED_psychlua_HScript */ 
