#ifndef INCLUDED_shaders_Grey2Shader
#define INCLUDED_shaders_Grey2Shader

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
HX_DECLARE_CLASS1(shaders,Grey2Shader)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES Grey2Shader_obj : public  ::flixel::graphics::tile::FlxGraphicsShader_obj
{
	public:
		typedef  ::flixel::graphics::tile::FlxGraphicsShader_obj super;
		typedef Grey2Shader_obj OBJ_;
		Grey2Shader_obj();

	public:
		enum { _hx_ClassId = 0x0ceec4ea };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.Grey2Shader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.Grey2Shader"); }
		static ::hx::ObjectPtr< Grey2Shader_obj > __new();
		static ::hx::ObjectPtr< Grey2Shader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Grey2Shader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Grey2Shader",58,e3,d5,11); }

		 ::openfl::display::ShaderParameter_Float iStrength;
};

} // end namespace shaders

#endif /* INCLUDED_shaders_Grey2Shader */ 
