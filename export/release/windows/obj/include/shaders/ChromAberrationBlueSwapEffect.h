#ifndef INCLUDED_shaders_ChromAberrationBlueSwapEffect
#define INCLUDED_shaders_ChromAberrationBlueSwapEffect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS1(shaders,ChromAberrationBlueSwapEffect)
HX_DECLARE_CLASS1(shaders,ChromAberrationBlueSwapShader)
HX_DECLARE_CLASS1(shaders,Effect)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES ChromAberrationBlueSwapEffect_obj : public  ::shaders::Effect_obj
{
	public:
		typedef  ::shaders::Effect_obj super;
		typedef ChromAberrationBlueSwapEffect_obj OBJ_;
		ChromAberrationBlueSwapEffect_obj();

	public:
		enum { _hx_ClassId = 0x3202634c };

		void __construct(Float strength);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.ChromAberrationBlueSwapEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.ChromAberrationBlueSwapEffect"); }
		static ::hx::ObjectPtr< ChromAberrationBlueSwapEffect_obj > __new(Float strength);
		static ::hx::ObjectPtr< ChromAberrationBlueSwapEffect_obj > __alloc(::hx::Ctx *_hx_ctx,Float strength);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ChromAberrationBlueSwapEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ChromAberrationBlueSwapEffect",3a,b5,a7,30); }

		 ::shaders::ChromAberrationBlueSwapShader shader;
};

} // end namespace shaders

#endif /* INCLUDED_shaders_ChromAberrationBlueSwapEffect */ 
