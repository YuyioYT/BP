#ifndef INCLUDED_shaders_RayMarchShader
#define INCLUDED_shaders_RayMarchShader

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
HX_DECLARE_CLASS1(shaders,RayMarchShader)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES RayMarchShader_obj : public  ::flixel::graphics::tile::FlxGraphicsShader_obj
{
	public:
		typedef  ::flixel::graphics::tile::FlxGraphicsShader_obj super;
		typedef RayMarchShader_obj OBJ_;
		RayMarchShader_obj();

	public:
		enum { _hx_ClassId = 0x4fbfc768 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.RayMarchShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.RayMarchShader"); }
		static ::hx::ObjectPtr< RayMarchShader_obj > __new();
		static ::hx::ObjectPtr< RayMarchShader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RayMarchShader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RayMarchShader",9e,16,7d,c0); }

		 ::openfl::display::ShaderParameter_Float rotation;
		 ::openfl::display::ShaderParameter_Float iResolution;
		 ::openfl::display::ShaderParameter_Float zoom;
};

} // end namespace shaders

#endif /* INCLUDED_shaders_RayMarchShader */ 
