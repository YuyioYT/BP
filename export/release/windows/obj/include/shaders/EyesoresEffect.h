#ifndef INCLUDED_shaders_EyesoresEffect
#define INCLUDED_shaders_EyesoresEffect

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
HX_DECLARE_CLASS1(shaders,EyesoresEffect)
HX_DECLARE_CLASS1(shaders,EyesoresShader)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES EyesoresEffect_obj : public  ::shaders::Effect_obj
{
	public:
		typedef  ::shaders::Effect_obj super;
		typedef EyesoresEffect_obj OBJ_;
		EyesoresEffect_obj();

	public:
		enum { _hx_ClassId = 0x6a4b9e2a };

		void __construct(Float waveSpeed,Float waveFrequency,Float waveAmplitude,Float time,Float ampmul,bool enabled);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.EyesoresEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.EyesoresEffect"); }
		static ::hx::ObjectPtr< EyesoresEffect_obj > __new(Float waveSpeed,Float waveFrequency,Float waveAmplitude,Float time,Float ampmul,bool enabled);
		static ::hx::ObjectPtr< EyesoresEffect_obj > __alloc(::hx::Ctx *_hx_ctx,Float waveSpeed,Float waveFrequency,Float waveAmplitude,Float time,Float ampmul,bool enabled);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EyesoresEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EyesoresEffect",44,22,31,69); }

		 ::shaders::EyesoresShader shader;
		Float waveSpeed;
		Float waveFrequency;
		Float waveAmplitude;
		Float time;
		Float ampmul;
		bool enabled;
		void update(Float elapsed);

		Float set_ampmul(Float v);
		::Dynamic set_ampmul_dyn();

		Float set_waveSpeed(Float v);
		::Dynamic set_waveSpeed_dyn();

		Float set_time(Float v);
		::Dynamic set_time_dyn();

		bool set_enabled(bool v);
		::Dynamic set_enabled_dyn();

		Float set_waveFrequency(Float v);
		::Dynamic set_waveFrequency_dyn();

		Float set_waveAmplitude(Float v);
		::Dynamic set_waveAmplitude_dyn();

};

} // end namespace shaders

#endif /* INCLUDED_shaders_EyesoresEffect */ 
