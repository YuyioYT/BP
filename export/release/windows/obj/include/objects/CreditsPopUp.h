#ifndef INCLUDED_objects_CreditsPopUp
#define INCLUDED_objects_CreditsPopUp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,Character)
HX_DECLARE_CLASS1(objects,CreditsPopUp)

namespace objects{


class HXCPP_CLASS_ATTRIBUTES CreditsPopUp_obj : public  ::flixel::group::FlxTypedSpriteGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedSpriteGroup_obj super;
		typedef CreditsPopUp_obj OBJ_;
		CreditsPopUp_obj();

	public:
		enum { _hx_ClassId = 0x1bc825e2 };

		void __construct(Float x,Float y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="objects.CreditsPopUp")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"objects.CreditsPopUp"); }
		static ::hx::ObjectPtr< CreditsPopUp_obj > __new(Float x,Float y);
		static ::hx::ObjectPtr< CreditsPopUp_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CreditsPopUp_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CreditsPopUp",f2,3d,0b,7e); }

		 ::flixel::FlxSprite bg;
		 ::flixel::FlxSprite bgHeading;
		 ::objects::Character dad;
		 ::flixel::text::FlxText funnyText;
		 ::flixel::FlxSprite funnyIcon;
		Float iconOffset;
		::String songCreator;
		void rescaleBG();
		::Dynamic rescaleBG_dyn();

};

} // end namespace objects

#endif /* INCLUDED_objects_CreditsPopUp */ 
