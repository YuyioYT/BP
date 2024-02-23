#ifndef INCLUDED_shaders_Grey2Effect
#define INCLUDED_shaders_Grey2Effect

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
HX_DECLARE_CLASS1(shaders,Grey2Effect)
HX_DECLARE_CLASS1(shaders,Grey2Shader)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES Grey2Effect_obj : public  ::shaders::Effect_obj
{
	public:
		typedef  ::shaders::Effect_obj super;
		typedef Grey2Effect_obj OBJ_;
		Grey2Effect_obj();

	public:
		enum { _hx_ClassId = 0x50716056 };

		void __construct(Float iStrength);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.Grey2Effect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.Grey2Effect"); }
		static ::hx::ObjectPtr< Grey2Effect_obj > __new(Float iStrength);
		static ::hx::ObjectPtr< Grey2Effect_obj > __alloc(::hx::Ctx *_hx_ctx,Float iStrength);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Grey2Effect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Grey2Effect",c4,7e,58,55); }

		 ::shaders::Grey2Shader shader;
};

} // end namespace shaders

#endif /* INCLUDED_shaders_Grey2Effect */ 
