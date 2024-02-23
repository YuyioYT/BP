#ifndef INCLUDED_shaders_ThreeDEffect
#define INCLUDED_shaders_ThreeDEffect

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
HX_DECLARE_CLASS1(shaders,ThreeDEffect)
HX_DECLARE_CLASS1(shaders,ThreeDShader)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES ThreeDEffect_obj : public  ::shaders::Effect_obj
{
	public:
		typedef  ::shaders::Effect_obj super;
		typedef ThreeDEffect_obj OBJ_;
		ThreeDEffect_obj();

	public:
		enum { _hx_ClassId = 0x43a14fdd };

		void __construct(::hx::Null< Float >  __o_xrotation,::hx::Null< Float >  __o_yrotation,::hx::Null< Float >  __o_zrotation,::hx::Null< Float >  __o_depth);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.ThreeDEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.ThreeDEffect"); }
		static ::hx::ObjectPtr< ThreeDEffect_obj > __new(::hx::Null< Float >  __o_xrotation,::hx::Null< Float >  __o_yrotation,::hx::Null< Float >  __o_zrotation,::hx::Null< Float >  __o_depth);
		static ::hx::ObjectPtr< ThreeDEffect_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_xrotation,::hx::Null< Float >  __o_yrotation,::hx::Null< Float >  __o_zrotation,::hx::Null< Float >  __o_depth);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ThreeDEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ThreeDEffect",77,b9,65,f9); }

		 ::shaders::ThreeDShader shader;
};

} // end namespace shaders

#endif /* INCLUDED_shaders_ThreeDEffect */ 
