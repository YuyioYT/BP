#ifndef INCLUDED_shaders_MosaicShader
#define INCLUDED_shaders_MosaicShader

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
HX_DECLARE_CLASS1(shaders,MosaicShader)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES MosaicShader_obj : public  ::flixel::graphics::tile::FlxGraphicsShader_obj
{
	public:
		typedef  ::flixel::graphics::tile::FlxGraphicsShader_obj super;
		typedef MosaicShader_obj OBJ_;
		MosaicShader_obj();

	public:
		enum { _hx_ClassId = 0x1c5fa195 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.MosaicShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.MosaicShader"); }
		static ::hx::ObjectPtr< MosaicShader_obj > __new();
		static ::hx::ObjectPtr< MosaicShader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MosaicShader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MosaicShader",2f,0b,24,d2); }

		 ::openfl::display::ShaderParameter_Float strength;
};

} // end namespace shaders

#endif /* INCLUDED_shaders_MosaicShader */ 
