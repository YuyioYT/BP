#ifndef INCLUDED_shaders_TiltshiftEffect
#define INCLUDED_shaders_TiltshiftEffect

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
HX_DECLARE_CLASS1(shaders,Tiltshift)
HX_DECLARE_CLASS1(shaders,TiltshiftEffect)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES TiltshiftEffect_obj : public  ::shaders::Effect_obj
{
	public:
		typedef  ::shaders::Effect_obj super;
		typedef TiltshiftEffect_obj OBJ_;
		TiltshiftEffect_obj();

	public:
		enum { _hx_ClassId = 0x51f25708 };

		void __construct(Float blurAmount,Float center);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.TiltshiftEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.TiltshiftEffect"); }
		static ::hx::ObjectPtr< TiltshiftEffect_obj > __new(Float blurAmount,Float center);
		static ::hx::ObjectPtr< TiltshiftEffect_obj > __alloc(::hx::Ctx *_hx_ctx,Float blurAmount,Float center);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TiltshiftEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TiltshiftEffect",76,44,d4,b1); }

		 ::shaders::Tiltshift shader;
};

} // end namespace shaders

#endif /* INCLUDED_shaders_TiltshiftEffect */ 
