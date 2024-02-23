#ifndef INCLUDED_shaders_ChromAbBlueSwapEffect
#define INCLUDED_shaders_ChromAbBlueSwapEffect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS1(shaders,ChromAbBlueSwapEffect)
HX_DECLARE_CLASS1(shaders,ChromAbBlueSwapShader)
HX_DECLARE_CLASS1(shaders,Effect)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES ChromAbBlueSwapEffect_obj : public  ::shaders::Effect_obj
{
	public:
		typedef  ::shaders::Effect_obj super;
		typedef ChromAbBlueSwapEffect_obj OBJ_;
		ChromAbBlueSwapEffect_obj();

	public:
		enum { _hx_ClassId = 0x4eb1241c };

		void __construct(::hx::Null< Float >  __o_strength);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.ChromAbBlueSwapEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.ChromAbBlueSwapEffect"); }
		static ::hx::ObjectPtr< ChromAbBlueSwapEffect_obj > __new(::hx::Null< Float >  __o_strength);
		static ::hx::ObjectPtr< ChromAbBlueSwapEffect_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_strength);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ChromAbBlueSwapEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ChromAbBlueSwapEffect",0a,d8,7b,8a); }

		 ::shaders::ChromAbBlueSwapShader shader;
		Float strength;
		void update(Float elapsed);

};

} // end namespace shaders

#endif /* INCLUDED_shaders_ChromAbBlueSwapEffect */ 
