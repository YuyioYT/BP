#ifndef INCLUDED_shaders_DistortBGEffect
#define INCLUDED_shaders_DistortBGEffect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS1(shaders,DistortBGEffect)
HX_DECLARE_CLASS1(shaders,DistortBGShader)
HX_DECLARE_CLASS1(shaders,Effect)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES DistortBGEffect_obj : public  ::shaders::Effect_obj
{
	public:
		typedef  ::shaders::Effect_obj super;
		typedef DistortBGEffect_obj OBJ_;
		DistortBGEffect_obj();

	public:
		enum { _hx_ClassId = 0x1fec61f3 };

		void __construct(Float waveSpeed,Float waveFrequency,Float waveAmplitude);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.DistortBGEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.DistortBGEffect"); }
		static ::hx::ObjectPtr< DistortBGEffect_obj > __new(Float waveSpeed,Float waveFrequency,Float waveAmplitude);
		static ::hx::ObjectPtr< DistortBGEffect_obj > __alloc(::hx::Ctx *_hx_ctx,Float waveSpeed,Float waveFrequency,Float waveAmplitude);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DistortBGEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DistortBGEffect",61,4f,ce,7f); }

		 ::shaders::DistortBGShader shader;
		Float waveSpeed;
		Float waveFrequency;
		Float waveAmplitude;
		void update(Float elapsed);

		Float set_waveSpeed(Float v);
		::Dynamic set_waveSpeed_dyn();

		Float set_waveFrequency(Float v);
		::Dynamic set_waveFrequency_dyn();

		Float set_waveAmplitude(Float v);
		::Dynamic set_waveAmplitude_dyn();

};

} // end namespace shaders

#endif /* INCLUDED_shaders_DistortBGEffect */ 
