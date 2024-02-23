#ifndef INCLUDED_shaders_BetterBlurEffect
#define INCLUDED_shaders_BetterBlurEffect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS1(shaders,BetterBlurEffect)
HX_DECLARE_CLASS1(shaders,BetterBlurShader)
HX_DECLARE_CLASS1(shaders,Effect)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES BetterBlurEffect_obj : public  ::shaders::Effect_obj
{
	public:
		typedef  ::shaders::Effect_obj super;
		typedef BetterBlurEffect_obj OBJ_;
		BetterBlurEffect_obj();

	public:
		enum { _hx_ClassId = 0x6f83176e };

		void __construct(Float loops,Float quality,Float strength);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.BetterBlurEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.BetterBlurEffect"); }
		static ::hx::ObjectPtr< BetterBlurEffect_obj > __new(Float loops,Float quality,Float strength);
		static ::hx::ObjectPtr< BetterBlurEffect_obj > __alloc(::hx::Ctx *_hx_ctx,Float loops,Float quality,Float strength);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BetterBlurEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BetterBlurEffect",08,56,e5,15); }

		 ::shaders::BetterBlurShader shader;
};

} // end namespace shaders

#endif /* INCLUDED_shaders_BetterBlurEffect */ 
