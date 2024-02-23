#ifndef INCLUDED_shaders_BloomEffect2
#define INCLUDED_shaders_BloomEffect2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS1(shaders,BloomEffect2)
HX_DECLARE_CLASS1(shaders,BloomShader2)
HX_DECLARE_CLASS1(shaders,Effect)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES BloomEffect2_obj : public  ::shaders::Effect_obj
{
	public:
		typedef  ::shaders::Effect_obj super;
		typedef BloomEffect2_obj OBJ_;
		BloomEffect2_obj();

	public:
		enum { _hx_ClassId = 0x38ea254c };

		void __construct(Float blurSize,Float intensity);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.BloomEffect2")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.BloomEffect2"); }
		static ::hx::ObjectPtr< BloomEffect2_obj > __new(Float blurSize,Float intensity);
		static ::hx::ObjectPtr< BloomEffect2_obj > __alloc(::hx::Ctx *_hx_ctx,Float blurSize,Float intensity);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BloomEffect2_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BloomEffect2",1e,a7,3d,7e); }

		 ::shaders::BloomShader2 shader;
		Float intensity;
		Float set_intensity(Float v);
		::Dynamic set_intensity_dyn();

};

} // end namespace shaders

#endif /* INCLUDED_shaders_BloomEffect2 */ 
