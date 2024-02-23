#ifndef INCLUDED_shaders_PerlinSmokeEffect
#define INCLUDED_shaders_PerlinSmokeEffect

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
HX_DECLARE_CLASS1(shaders,PerlinSmokeEffect)
HX_DECLARE_CLASS1(shaders,PerlinSmokeShader)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES PerlinSmokeEffect_obj : public  ::shaders::Effect_obj
{
	public:
		typedef  ::shaders::Effect_obj super;
		typedef PerlinSmokeEffect_obj OBJ_;
		PerlinSmokeEffect_obj();

	public:
		enum { _hx_ClassId = 0x4d0bcc1e };

		void __construct(Float waveStrength,Float smokeStrength);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.PerlinSmokeEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.PerlinSmokeEffect"); }
		static ::hx::ObjectPtr< PerlinSmokeEffect_obj > __new(Float waveStrength,Float smokeStrength);
		static ::hx::ObjectPtr< PerlinSmokeEffect_obj > __alloc(::hx::Ctx *_hx_ctx,Float waveStrength,Float smokeStrength);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PerlinSmokeEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PerlinSmokeEffect",0c,71,56,db); }

		 ::shaders::PerlinSmokeShader shader;
		Float speed;
		Float iTime;
		void update(Float elapsed);

};

} // end namespace shaders

#endif /* INCLUDED_shaders_PerlinSmokeEffect */ 
