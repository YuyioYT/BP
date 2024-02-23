#ifndef INCLUDED_hscriptBase_Interp
#define INCLUDED_hscriptBase_Interp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(hscriptBase,ErrorDef)
HX_DECLARE_CLASS1(hscriptBase,Interp)
HX_DECLARE_CLASS1(hscriptBase,Parser)
HX_DECLARE_CLASS1(tea,SScript)

namespace hscriptBase{


class HXCPP_CLASS_ATTRIBUTES Interp_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Interp_obj OBJ_;
		Interp_obj();

	public:
		enum { _hx_ClassId = 0x43235d34 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hscriptBase.Interp")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hscriptBase.Interp"); }
		static ::hx::ObjectPtr< Interp_obj > __new();
		static ::hx::ObjectPtr< Interp_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Interp_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Interp",f4,ed,1a,d3); }

		 ::haxe::ds::StringMap variables;
		 ::haxe::ds::StringMap dynamicFuncs;
		 ::haxe::ds::StringMap locals;
		 ::haxe::ds::StringMap binops;
		int depth;
		bool inTry;
		::Array< ::Dynamic> declared;
		 ::Dynamic returnValue;
		bool typecheck;
		 ::hscriptBase::Parser parser;
		 ::tea::SScript script;
		 ::Dynamic curExpr;
		 ::tea::SScript setScr( ::tea::SScript s);
		::Dynamic setScr_dyn();

		 ::hscriptBase::Parser setPsr( ::hscriptBase::Parser p);
		::Dynamic setPsr_dyn();

		bool resumeError;
		void resetVariables();
		::Dynamic resetVariables_dyn();

		virtual  ::Dynamic posInfos();
		::Dynamic posInfos_dyn();

		bool inFunc;
		void initOps();
		::Dynamic initOps_dyn();

		 ::Dynamic coalesce( ::Dynamic e1, ::Dynamic e2);
		::Dynamic coalesce_dyn();

		 ::Dynamic coalesce2( ::Dynamic e1, ::Dynamic e2);
		::Dynamic coalesce2_dyn();

		void setVar(::String name, ::Dynamic v);
		::Dynamic setVar_dyn();

		virtual  ::Dynamic assign( ::Dynamic e1, ::Dynamic e2);
		::Dynamic assign_dyn();

		void assignOp(::String op, ::Dynamic fop);
		::Dynamic assignOp_dyn();

		 ::Dynamic evalAssignOp(::String op, ::Dynamic fop, ::Dynamic e1, ::Dynamic e2);
		::Dynamic evalAssignOp_dyn();

		 ::Dynamic increment( ::Dynamic e,bool prefix,int delta);
		::Dynamic increment_dyn();

		 ::Dynamic execute( ::Dynamic expr);
		::Dynamic execute_dyn();

		 ::Dynamic exprReturn( ::Dynamic e, ::Dynamic p);
		::Dynamic exprReturn_dyn();

		 ::haxe::ds::StringMap duplicate( ::haxe::ds::StringMap h);
		::Dynamic duplicate_dyn();

		void restore(int old);
		::Dynamic restore_dyn();

		 ::Dynamic error( ::hscriptBase::ErrorDef e,::hx::Null< bool >  rethrow);
		::Dynamic error_dyn();

		void rethrow( ::Dynamic e);
		::Dynamic rethrow_dyn();

		virtual  ::Dynamic resolve(::String id);
		::Dynamic resolve_dyn();

		 ::Dynamic expr( ::Dynamic e, ::Dynamic trk);
		::Dynamic expr_dyn();

		void doWhileLoop( ::Dynamic econd, ::Dynamic e, ::Dynamic p);
		::Dynamic doWhileLoop_dyn();

		void whileLoop( ::Dynamic econd, ::Dynamic e, ::Dynamic p);
		::Dynamic whileLoop_dyn();

		 ::Dynamic makeIterator( ::Dynamic v);
		::Dynamic makeIterator_dyn();

		void forLoop(::String n, ::Dynamic it, ::Dynamic e, ::Dynamic p);
		::Dynamic forLoop_dyn();

		bool isMap( ::Dynamic o);
		::Dynamic isMap_dyn();

		 ::Dynamic getMapValue( ::Dynamic map, ::Dynamic key);
		::Dynamic getMapValue_dyn();

		void setMapValue( ::Dynamic map, ::Dynamic key, ::Dynamic value);
		::Dynamic setMapValue_dyn();

		virtual  ::Dynamic get( ::Dynamic o,::String f);
		::Dynamic get_dyn();

		virtual  ::Dynamic set( ::Dynamic o,::String f, ::Dynamic v);
		::Dynamic set_dyn();

		virtual  ::Dynamic fcall( ::Dynamic o,::String f,::cpp::VirtualArray args);
		::Dynamic fcall_dyn();

		virtual  ::Dynamic call( ::Dynamic o, ::Dynamic f,::cpp::VirtualArray args);
		::Dynamic call_dyn();

		virtual  ::Dynamic cnew(::String cl,::cpp::VirtualArray args);
		::Dynamic cnew_dyn();

};

} // end namespace hscriptBase

#endif /* INCLUDED_hscriptBase_Interp */ 
