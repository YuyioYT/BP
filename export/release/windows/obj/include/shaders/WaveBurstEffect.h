#ifndef INCLUDED_shaders_WaveBurstEffect
#define INCLUDED_shaders_WaveBurstEffect

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
HX_DECLARE_CLASS1(shaders,WaveBurstEffect)
HX_DECLARE_CLASS1(shaders,WaveBurstShader)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES WaveBurstEffect_obj : public  ::shaders::Effect_obj
{
	public:
		typedef  ::shaders::Effect_obj super;
		typedef WaveBurstEffect_obj OBJ_;
		WaveBurstEffect_obj();

	public:
		enum { _hx_ClassId = 0x460a218a };

		void __construct(Float strength);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.WaveBurstEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.WaveBurstEffect"); }
		static ::hx::ObjectPtr< WaveBurstEffect_obj > __new(Float strength);
		static ::hx::ObjectPtr< WaveBurstEffect_obj > __alloc(::hx::Ctx *_hx_ctx,Float strength);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WaveBurstEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WaveBurstEffect",f8,0e,ec,a5); }

		 ::shaders::WaveBurstShader shader;
};

} // end namespace shaders

#endif /* INCLUDED_shaders_WaveBurstEffect */ 
