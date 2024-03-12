#ifndef INCLUDED_objects_SubtitleManager
#define INCLUDED_objects_SubtitleManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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


class HXCPP_CLASS_ATTRIBUTES SubtitleManager_obj : public  ::flixel::group::FlxTypedGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedGroup_obj super;
		typedef SubtitleManager_obj OBJ_;
		SubtitleManager_obj();

	public:
		enum { _hx_ClassId = 0x20b4a725 };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="objects.SubtitleManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"objects.SubtitleManager"); }
		static ::hx::ObjectPtr< SubtitleManager_obj > __new( ::Dynamic MaxSize);
		static ::hx::ObjectPtr< SubtitleManager_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SubtitleManager_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SubtitleManager",15,f9,03,32); }

		void addSubtitle(::String text, ::Dynamic typeSpeed,Float showTime, ::Dynamic properties);
		::Dynamic addSubtitle_dyn();

		void onSubtitleComplete( ::objects::Subtitle subtitle);
		::Dynamic onSubtitleComplete_dyn();

};

} // end namespace objects

#endif /* INCLUDED_objects_SubtitleManager */ 
