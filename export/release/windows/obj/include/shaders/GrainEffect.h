#ifndef INCLUDED_shaders_GrainEffect
#define INCLUDED_shaders_GrainEffect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS1(shaders,Effect)
HX_DECLARE_CLASS1(shaders,Grain)
HX_DECLARE_CLASS1(shaders,GrainEffect)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES GrainEffect_obj : public  ::shaders::Effect_obj
{
	public:
		typedef  ::shaders::Effect_obj super;
		typedef GrainEffect_obj OBJ_;
		GrainEffect_obj();

	public:
		enum { _hx_ClassId = 0x308c6f9e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.GrainEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.GrainEffect"); }
		static ::hx::ObjectPtr< GrainEffect_obj > __new();
		static ::hx::ObjectPtr< GrainEffect_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GrainEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GrainEffect",0c,8e,73,35); }

		 ::shaders::Grain shader;
		Float grainsize;
		Float lumamount;
		bool lockAlpha;
		Float coloramount;
		Float set_grainsize(Float value);
		::Dynamic set_grainsize_dyn();

		Float set_lumamount(Float value);
		::Dynamic set_lumamount_dyn();

		bool set_lockAlpha(bool value);
		::Dynamic set_lockAlpha_dyn();

		Float set_coloramount(Float value);
		::Dynamic set_coloramount_dyn();

		void update(Float elapsed);

};

} // end namespace shaders

#endif /* INCLUDED_shaders_GrainEffect */ 
