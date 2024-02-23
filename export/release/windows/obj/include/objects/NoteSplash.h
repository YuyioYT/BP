#ifndef INCLUDED_objects_NoteSplash
#define INCLUDED_objects_NoteSplash

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(objects,Note)
HX_DECLARE_CLASS1(objects,NoteSplash)
HX_DECLARE_CLASS1(objects,PixelSplashShaderRef)

namespace objects{


class HXCPP_CLASS_ATTRIBUTES NoteSplash_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef NoteSplash_obj OBJ_;
		NoteSplash_obj();

	public:
		enum { _hx_ClassId = 0x12f691ed };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="objects.NoteSplash")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"objects.NoteSplash"); }
		static ::hx::ObjectPtr< NoteSplash_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y);
		static ::hx::ObjectPtr< NoteSplash_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NoteSplash_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NoteSplash",19,93,5d,54); }

		static void __boot();
		static ::String defaultNoteSplash;
		static  ::haxe::ds::StringMap configs;
		static ::String getSplashSkinPostfix();
		static ::Dynamic getSplashSkinPostfix_dyn();

		static  ::Dynamic precacheConfig(::String skin);
		static ::Dynamic precacheConfig_dyn();

		static Float aliveTime;
		static Float buggedKillTime;
		 ::objects::PixelSplashShaderRef rgbShader;
		::String idleAnim;
		::String _textureLoaded;
		::String _configLoaded;
		void destroy();

		int maxAnims;
		void setupNoteSplash(Float x,Float y,::hx::Null< int >  direction, ::objects::Note note);
		::Dynamic setupNoteSplash_dyn();

		 ::Dynamic loadAnims(::String skin,::String animName);
		::Dynamic loadAnims_dyn();

		bool addAnimAndCheck(::String name,::String anim, ::Dynamic framerate, ::Dynamic loop);
		::Dynamic addAnimAndCheck_dyn();

		void update(Float elapsed);

};

} // end namespace objects

#endif /* INCLUDED_objects_NoteSplash */ 
