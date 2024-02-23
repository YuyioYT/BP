#ifndef INCLUDED_shaders_MirrorRepeatEffect
#define INCLUDED_shaders_MirrorRepeatEffect

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
HX_DECLARE_CLASS1(shaders,MirrorRepeatEffect)
HX_DECLARE_CLASS1(shaders,MirrorRepeatShader)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES MirrorRepeatEffect_obj : public  ::shaders::Effect_obj
{
	public:
		typedef  ::shaders::Effect_obj super;
		typedef MirrorRepeatEffect_obj OBJ_;
		MirrorRepeatEffect_obj();

	public:
		enum { _hx_ClassId = 0x295bf5f9 };

		void __construct(Float zoom,Float angle,Float iTime,Float x,Float y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.MirrorRepeatEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.MirrorRepeatEffect"); }
		static ::hx::ObjectPtr< MirrorRepeatEffect_obj > __new(Float zoom,Float angle,Float iTime,Float x,Float y);
		static ::hx::ObjectPtr< MirrorRepeatEffect_obj > __alloc(::hx::Ctx *_hx_ctx,Float zoom,Float angle,Float iTime,Float x,Float y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MirrorRepeatEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MirrorRepeatEffect",4b,a1,61,1c); }

		 ::shaders::MirrorRepeatShader shader;
		Float iTime;
		void update(Float elapsed);

};

} // end namespace shaders

#endif /* INCLUDED_shaders_MirrorRepeatEffect */ 
