#ifndef INCLUDED_shaders_BarrelBlurEffect
#define INCLUDED_shaders_BarrelBlurEffect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS1(shaders,BarrelBlurEffect)
HX_DECLARE_CLASS1(shaders,BarrelBlurShader)
HX_DECLARE_CLASS1(shaders,Effect)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES BarrelBlurEffect_obj : public  ::shaders::Effect_obj
{
	public:
		typedef  ::shaders::Effect_obj super;
		typedef BarrelBlurEffect_obj OBJ_;
		BarrelBlurEffect_obj();

	public:
		enum { _hx_ClassId = 0x2616deec };

		void __construct(Float barrel,Float zoom,bool doChroma,Float angle,Float x,Float y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.BarrelBlurEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.BarrelBlurEffect"); }
		static ::hx::ObjectPtr< BarrelBlurEffect_obj > __new(Float barrel,Float zoom,bool doChroma,Float angle,Float x,Float y);
		static ::hx::ObjectPtr< BarrelBlurEffect_obj > __alloc(::hx::Ctx *_hx_ctx,Float barrel,Float zoom,bool doChroma,Float angle,Float x,Float y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BarrelBlurEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BarrelBlurEffect",be,b1,e4,ab); }

		 ::shaders::BarrelBlurShader shader;
		Float iTime;
		void update(Float elapsed);

};

} // end namespace shaders

#endif /* INCLUDED_shaders_BarrelBlurEffect */ 
