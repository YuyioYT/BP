#ifndef INCLUDED_shaders_ChromaticAberrationEffect
#define INCLUDED_shaders_ChromaticAberrationEffect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS1(shaders,ChromaticAberrationEffect)
HX_DECLARE_CLASS1(shaders,ChromaticAberrationShader)
HX_DECLARE_CLASS1(shaders,Effect)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES ChromaticAberrationEffect_obj : public  ::shaders::Effect_obj
{
	public:
		typedef  ::shaders::Effect_obj super;
		typedef ChromaticAberrationEffect_obj OBJ_;
		ChromaticAberrationEffect_obj();

	public:
		enum { _hx_ClassId = 0x45c1cb2c };

		void __construct(::hx::Null< Float >  __o_offset);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.ChromaticAberrationEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.ChromaticAberrationEffect"); }
		static ::hx::ObjectPtr< ChromaticAberrationEffect_obj > __new(::hx::Null< Float >  __o_offset);
		static ::hx::ObjectPtr< ChromaticAberrationEffect_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_offset);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ChromaticAberrationEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ChromaticAberrationEffect",1a,0e,c0,f1); }

		 ::shaders::ChromaticAberrationShader shader;
		Float chromeOffset;
		void setChrome(Float chromeOffset);
		::Dynamic setChrome_dyn();

};

} // end namespace shaders

#endif /* INCLUDED_shaders_ChromaticAberrationEffect */ 
