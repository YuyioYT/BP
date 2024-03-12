#ifndef INCLUDED_objects_Subtitle
#define INCLUDED_objects_Subtitle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_text_FlxTypeText
#include <flixel/addons/text/FlxTypeText.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,text,FlxTypeText)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,Subtitle)
HX_DECLARE_CLASS1(objects,SubtitleManager)

namespace objects{


class HXCPP_CLASS_ATTRIBUTES Subtitle_obj : public  ::flixel::addons::text::FlxTypeText_obj
{
	public:
		typedef  ::flixel::addons::text::FlxTypeText_obj super;
		typedef Subtitle_obj OBJ_;
		Subtitle_obj();

	public:
		enum { _hx_ClassId = 0x7f6db02c };

		void __construct(::String text, ::Dynamic typeSpeed,Float showTime, ::Dynamic properties);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="objects.Subtitle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"objects.Subtitle"); }
		static ::hx::ObjectPtr< Subtitle_obj > __new(::String text, ::Dynamic typeSpeed,Float showTime, ::Dynamic properties);
		static ::hx::ObjectPtr< Subtitle_obj > __alloc(::hx::Ctx *_hx_ctx,::String text, ::Dynamic typeSpeed,Float showTime, ::Dynamic properties);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Subtitle_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Subtitle",38,b8,de,cb); }

		 ::objects::SubtitleManager manager;
		 ::Dynamic init( ::Dynamic properties);
		::Dynamic init_dyn();

};

} // end namespace objects

#endif /* INCLUDED_objects_Subtitle */ 
