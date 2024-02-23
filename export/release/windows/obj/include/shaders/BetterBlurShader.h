#ifndef INCLUDED_shaders_BetterBlurShader
#define INCLUDED_shaders_BetterBlurShader

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
HX_DECLARE_CLASS1(shaders,BetterBlurShader)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES BetterBlurShader_obj : public  ::flixel::graphics::tile::FlxGraphicsShader_obj
{
	public:
		typedef  ::flixel::graphics::tile::FlxGraphicsShader_obj super;
		typedef BetterBlurShader_obj OBJ_;
		BetterBlurShader_obj();

	public:
		enum { _hx_ClassId = 0x4c94e7ca };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.BetterBlurShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.BetterBlurShader"); }
		static ::hx::ObjectPtr< BetterBlurShader_obj > __new();
		static ::hx::ObjectPtr< BetterBlurShader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BetterBlurShader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BetterBlurShader",9c,ba,62,d2); }

		 ::openfl::display::ShaderParameter_Float strength;
		 ::openfl::display::ShaderParameter_Float loops;
		 ::openfl::display::ShaderParameter_Float quality;
};

} // end namespace shaders

#endif /* INCLUDED_shaders_BetterBlurShader */ 
