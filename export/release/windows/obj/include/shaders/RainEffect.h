#ifndef INCLUDED_shaders_RainEffect
#define INCLUDED_shaders_RainEffect

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
HX_DECLARE_CLASS1(shaders,RainEffect)
HX_DECLARE_CLASS1(shaders,RainShader)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES RainEffect_obj : public  ::shaders::Effect_obj
{
	public:
		typedef  ::shaders::Effect_obj super;
		typedef RainEffect_obj OBJ_;
		RainEffect_obj();

	public:
		enum { _hx_ClassId = 0x4f9de40b };

		void __construct(Float iTime);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.RainEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.RainEffect"); }
		static ::hx::ObjectPtr< RainEffect_obj > __new(Float iTime);
		static ::hx::ObjectPtr< RainEffect_obj > __alloc(::hx::Ctx *_hx_ctx,Float iTime);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RainEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RainEffect",25,d3,74,6e); }

		 ::shaders::RainShader shader;
		Float iTime;
		void update(Float elapsed);

};

} // end namespace shaders

#endif /* INCLUDED_shaders_RainEffect */ 
