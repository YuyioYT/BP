#ifndef INCLUDED_shaders_GreyscaleEffect
#define INCLUDED_shaders_GreyscaleEffect

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
HX_DECLARE_CLASS1(shaders,GreyscaleEffect)
HX_DECLARE_CLASS1(shaders,GreyscaleShader)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES GreyscaleEffect_obj : public  ::shaders::Effect_obj
{
	public:
		typedef  ::shaders::Effect_obj super;
		typedef GreyscaleEffect_obj OBJ_;
		GreyscaleEffect_obj();

	public:
		enum { _hx_ClassId = 0x0917be5a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.GreyscaleEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.GreyscaleEffect"); }
		static ::hx::ObjectPtr< GreyscaleEffect_obj > __new();
		static ::hx::ObjectPtr< GreyscaleEffect_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GreyscaleEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GreyscaleEffect",9c,e3,0b,e8); }

		 ::shaders::GreyscaleShader shader;
};

} // end namespace shaders

#endif /* INCLUDED_shaders_GreyscaleEffect */ 
