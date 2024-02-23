#ifndef INCLUDED_shaders_FuckingTriangleEffect
#define INCLUDED_shaders_FuckingTriangleEffect

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
HX_DECLARE_CLASS1(shaders,FuckingTriangle)
HX_DECLARE_CLASS1(shaders,FuckingTriangleEffect)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES FuckingTriangleEffect_obj : public  ::shaders::Effect_obj
{
	public:
		typedef  ::shaders::Effect_obj super;
		typedef FuckingTriangleEffect_obj OBJ_;
		FuckingTriangleEffect_obj();

	public:
		enum { _hx_ClassId = 0x60d0b856 };

		void __construct(Float rotx,Float roty);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.FuckingTriangleEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.FuckingTriangleEffect"); }
		static ::hx::ObjectPtr< FuckingTriangleEffect_obj > __new(Float rotx,Float roty);
		static ::hx::ObjectPtr< FuckingTriangleEffect_obj > __alloc(::hx::Ctx *_hx_ctx,Float rotx,Float roty);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FuckingTriangleEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FuckingTriangleEffect",44,6c,9b,9c); }

		 ::shaders::FuckingTriangle shader;
};

} // end namespace shaders

#endif /* INCLUDED_shaders_FuckingTriangleEffect */ 
