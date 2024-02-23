#ifndef INCLUDED_shaders_BlurEffect
#define INCLUDED_shaders_BlurEffect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS1(shaders,BlurEffect)
HX_DECLARE_CLASS1(shaders,BlurShader)
HX_DECLARE_CLASS1(shaders,Effect)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES BlurEffect_obj : public  ::shaders::Effect_obj
{
	public:
		typedef  ::shaders::Effect_obj super;
		typedef BlurEffect_obj OBJ_;
		BlurEffect_obj();

	public:
		enum { _hx_ClassId = 0x52df0366 };

		void __construct(Float strength,Float strengthY);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.BlurEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.BlurEffect"); }
		static ::hx::ObjectPtr< BlurEffect_obj > __new(Float strength,Float strengthY);
		static ::hx::ObjectPtr< BlurEffect_obj > __alloc(::hx::Ctx *_hx_ctx,Float strength,Float strengthY);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BlurEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BlurEffect",b8,0c,e0,ce); }

		 ::shaders::BlurShader shader;
};

} // end namespace shaders

#endif /* INCLUDED_shaders_BlurEffect */ 
