#ifndef INCLUDED_shaders_Grain
#define INCLUDED_shaders_Grain

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Bool)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Float)
HX_DECLARE_CLASS1(shaders,Grain)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES Grain_obj : public  ::flixel::graphics::tile::FlxGraphicsShader_obj
{
	public:
		typedef  ::flixel::graphics::tile::FlxGraphicsShader_obj super;
		typedef Grain_obj OBJ_;
		Grain_obj();

	public:
		enum { _hx_ClassId = 0x3498012d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.Grain")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.Grain"); }
		static ::hx::ObjectPtr< Grain_obj > __new();
		static ::hx::ObjectPtr< Grain_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Grain_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Grain",1b,79,17,2d); }

		 ::openfl::display::ShaderParameter_Float uTime;
		 ::openfl::display::ShaderParameter_Float coloramount;
		 ::openfl::display::ShaderParameter_Float grainsize;
		 ::openfl::display::ShaderParameter_Float lumamount;
		 ::openfl::display::ShaderParameter_Bool lockAlpha;
};

} // end namespace shaders

#endif /* INCLUDED_shaders_Grain */ 
