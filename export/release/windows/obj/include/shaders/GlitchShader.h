#ifndef INCLUDED_shaders_GlitchShader
#define INCLUDED_shaders_GlitchShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Float)
HX_DECLARE_CLASS1(shaders,GlitchShader)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES GlitchShader_obj : public  ::flixel::graphics::tile::FlxGraphicsShader_obj
{
	public:
		typedef  ::flixel::graphics::tile::FlxGraphicsShader_obj super;
		typedef GlitchShader_obj OBJ_;
		GlitchShader_obj();

	public:
		enum { _hx_ClassId = 0x1d777748 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.GlitchShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.GlitchShader"); }
		static ::hx::ObjectPtr< GlitchShader_obj > __new();
		static ::hx::ObjectPtr< GlitchShader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GlitchShader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GlitchShader",1a,f9,ca,62); }

		 ::openfl::display::ShaderParameter_Float tx;
		 ::openfl::display::ShaderParameter_Float uTime;
		 ::openfl::display::ShaderParameter_Float uSpeed;
		 ::openfl::display::ShaderParameter_Float uFrequency;
		 ::openfl::display::ShaderParameter_Float uWaveAmplitude;
};

} // end namespace shaders

#endif /* INCLUDED_shaders_GlitchShader */ 
