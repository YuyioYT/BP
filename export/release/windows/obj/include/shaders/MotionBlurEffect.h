#ifndef INCLUDED_shaders_MotionBlurEffect
#define INCLUDED_shaders_MotionBlurEffect

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
HX_DECLARE_CLASS1(shaders,MotionBlurEffect)
HX_DECLARE_CLASS1(shaders,MotionBlurShader)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES MotionBlurEffect_obj : public  ::shaders::Effect_obj
{
	public:
		typedef  ::shaders::Effect_obj super;
		typedef MotionBlurEffect_obj OBJ_;
		MotionBlurEffect_obj();

	public:
		enum { _hx_ClassId = 0x7fb8bbbc };

		void __construct(Float strength);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.MotionBlurEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.MotionBlurEffect"); }
		static ::hx::ObjectPtr< MotionBlurEffect_obj > __new(Float strength);
		static ::hx::ObjectPtr< MotionBlurEffect_obj > __alloc(::hx::Ctx *_hx_ctx,Float strength);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MotionBlurEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MotionBlurEffect",8e,8e,86,05); }

		 ::shaders::MotionBlurShader shader;
};

} // end namespace shaders

#endif /* INCLUDED_shaders_MotionBlurEffect */ 
