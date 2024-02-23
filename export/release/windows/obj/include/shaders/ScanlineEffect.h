#ifndef INCLUDED_shaders_ScanlineEffect
#define INCLUDED_shaders_ScanlineEffect

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
HX_DECLARE_CLASS1(shaders,ScanlineEffect)
HX_DECLARE_CLASS1(shaders,ScanlineShader)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES ScanlineEffect_obj : public  ::shaders::Effect_obj
{
	public:
		typedef  ::shaders::Effect_obj super;
		typedef ScanlineEffect_obj OBJ_;
		ScanlineEffect_obj();

	public:
		enum { _hx_ClassId = 0x254b364c };

		void __construct(Float strength,Float pixelsBetweenEachLine,bool smooth);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.ScanlineEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.ScanlineEffect"); }
		static ::hx::ObjectPtr< ScanlineEffect_obj > __new(Float strength,Float pixelsBetweenEachLine,bool smooth);
		static ::hx::ObjectPtr< ScanlineEffect_obj > __alloc(::hx::Ctx *_hx_ctx,Float strength,Float pixelsBetweenEachLine,bool smooth);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ScanlineEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ScanlineEffect",82,85,08,96); }

		 ::shaders::ScanlineShader shader;
};

} // end namespace shaders

#endif /* INCLUDED_shaders_ScanlineEffect */ 
