#ifndef INCLUDED_shaders_RayMarchEffect
#define INCLUDED_shaders_RayMarchEffect

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
HX_DECLARE_CLASS1(shaders,RayMarchEffect)
HX_DECLARE_CLASS1(shaders,RayMarchShader)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES RayMarchEffect_obj : public  ::shaders::Effect_obj
{
	public:
		typedef  ::shaders::Effect_obj super;
		typedef RayMarchEffect_obj OBJ_;
		RayMarchEffect_obj();

	public:
		enum { _hx_ClassId = 0x216a97b8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.RayMarchEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.RayMarchEffect"); }
		static ::hx::ObjectPtr< RayMarchEffect_obj > __new();
		static ::hx::ObjectPtr< RayMarchEffect_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RayMarchEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RayMarchEffect",0a,b2,ff,03); }

		 ::shaders::RayMarchShader shader;
		Float x;
		Float y;
		Float z;
		Float zoom;
		void update(Float elapsed);

		void setPoint();
		::Dynamic setPoint_dyn();

};

} // end namespace shaders

#endif /* INCLUDED_shaders_RayMarchEffect */ 
