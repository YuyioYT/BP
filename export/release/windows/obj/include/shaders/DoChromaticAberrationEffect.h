#ifndef INCLUDED_shaders_DoChromaticAberrationEffect
#define INCLUDED_shaders_DoChromaticAberrationEffect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS1(shaders,ChromaticAberrationShader)
HX_DECLARE_CLASS1(shaders,DoChromaticAberrationEffect)
HX_DECLARE_CLASS1(shaders,Effect)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES DoChromaticAberrationEffect_obj : public  ::shaders::Effect_obj
{
	public:
		typedef  ::shaders::Effect_obj super;
		typedef DoChromaticAberrationEffect_obj OBJ_;
		DoChromaticAberrationEffect_obj();

	public:
		enum { _hx_ClassId = 0x04fb24a1 };

		void __construct(::hx::Null< Float >  __o_offset);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.DoChromaticAberrationEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.DoChromaticAberrationEffect"); }
		static ::hx::ObjectPtr< DoChromaticAberrationEffect_obj > __new(::hx::Null< Float >  __o_offset);
		static ::hx::ObjectPtr< DoChromaticAberrationEffect_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_offset);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DoChromaticAberrationEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DoChromaticAberrationEffect",0f,7f,42,5f); }

		 ::shaders::ChromaticAberrationShader shader;
		Float offset;
		Float set_offset(Float v);
		::Dynamic set_offset_dyn();

};

} // end namespace shaders

#endif /* INCLUDED_shaders_DoChromaticAberrationEffect */ 
