#ifndef INCLUDED_shaders_PerlinSmokeShader
#define INCLUDED_shaders_PerlinSmokeShader

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
HX_DECLARE_CLASS1(shaders,PerlinSmokeShader)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES PerlinSmokeShader_obj : public  ::flixel::graphics::tile::FlxGraphicsShader_obj
{
	public:
		typedef  ::flixel::graphics::tile::FlxGraphicsShader_obj super;
		typedef PerlinSmokeShader_obj OBJ_;
		PerlinSmokeShader_obj();

	public:
		enum { _hx_ClassId = 0x098930b2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.PerlinSmokeShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.PerlinSmokeShader"); }
		static ::hx::ObjectPtr< PerlinSmokeShader_obj > __new();
		static ::hx::ObjectPtr< PerlinSmokeShader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PerlinSmokeShader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PerlinSmokeShader",a0,d5,d3,97); }

		 ::openfl::display::ShaderParameter_Float iTime;
		 ::openfl::display::ShaderParameter_Float waveStrength;
		 ::openfl::display::ShaderParameter_Float smokeStrength;
};

} // end namespace shaders

#endif /* INCLUDED_shaders_PerlinSmokeShader */ 
