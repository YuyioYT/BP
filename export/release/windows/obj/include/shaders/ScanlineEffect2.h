#ifndef INCLUDED_shaders_ScanlineEffect2
#define INCLUDED_shaders_ScanlineEffect2

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
HX_DECLARE_CLASS1(shaders,ScanlineEffect2)
HX_DECLARE_CLASS1(shaders,ScanlineShader2)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES ScanlineEffect2_obj : public  ::shaders::Effect_obj
{
	public:
		typedef  ::shaders::Effect_obj super;
		typedef ScanlineEffect2_obj OBJ_;
		ScanlineEffect2_obj();

	public:
		enum { _hx_ClassId = 0x518a5f02 };

		void __construct(bool lockAlpha);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.ScanlineEffect2")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.ScanlineEffect2"); }
		static ::hx::ObjectPtr< ScanlineEffect2_obj > __new(bool lockAlpha);
		static ::hx::ObjectPtr< ScanlineEffect2_obj > __alloc(::hx::Ctx *_hx_ctx,bool lockAlpha);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ScanlineEffect2_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ScanlineEffect2",70,4c,6c,b1); }

		 ::shaders::ScanlineShader2 shader;
};

} // end namespace shaders

#endif /* INCLUDED_shaders_ScanlineEffect2 */ 
