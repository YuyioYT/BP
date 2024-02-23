#ifndef INCLUDED_shaders_BlockedGlitchEffect
#define INCLUDED_shaders_BlockedGlitchEffect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS1(shaders,BlockedGlitchEffect)
HX_DECLARE_CLASS1(shaders,BlockedGlitchShader)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES BlockedGlitchEffect_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BlockedGlitchEffect_obj OBJ_;
		BlockedGlitchEffect_obj();

	public:
		enum { _hx_ClassId = 0x25fbfce4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.BlockedGlitchEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.BlockedGlitchEffect"); }
		static ::hx::ObjectPtr< BlockedGlitchEffect_obj > __new();
		static ::hx::ObjectPtr< BlockedGlitchEffect_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BlockedGlitchEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BlockedGlitchEffect",52,39,ec,d7); }

		 ::shaders::BlockedGlitchShader shader;
		Float time;
		Float resolution;
		Float colorMultiplier;
		bool hasColorTransform;
		bool Enabled;
		void update(Float elapsed);
		::Dynamic update_dyn();

		Float set_resolution(Float v);
		::Dynamic set_resolution_dyn();

		bool set_hasColorTransform(bool value);
		::Dynamic set_hasColorTransform_dyn();

		Float set_colorMultiplier(Float value);
		::Dynamic set_colorMultiplier_dyn();

		Float set_time(Float value);
		::Dynamic set_time_dyn();

		bool set_Enabled(bool v);
		::Dynamic set_Enabled_dyn();

};

} // end namespace shaders

#endif /* INCLUDED_shaders_BlockedGlitchEffect */ 
