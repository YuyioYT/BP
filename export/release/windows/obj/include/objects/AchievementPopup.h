#ifndef INCLUDED_objects_AchievementPopup
#define INCLUDED_objects_AchievementPopup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,AchievementPopup)

namespace objects{


class HXCPP_CLASS_ATTRIBUTES AchievementPopup_obj : public  ::flixel::group::FlxTypedSpriteGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedSpriteGroup_obj super;
		typedef AchievementPopup_obj OBJ_;
		AchievementPopup_obj();

	public:
		enum { _hx_ClassId = 0x6e030d69 };

		void __construct(::String name, ::flixel::FlxCamera camera);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="objects.AchievementPopup")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"objects.AchievementPopup"); }
		static ::hx::ObjectPtr< AchievementPopup_obj > __new(::String name, ::flixel::FlxCamera camera);
		static ::hx::ObjectPtr< AchievementPopup_obj > __alloc(::hx::Ctx *_hx_ctx,::String name, ::flixel::FlxCamera camera);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AchievementPopup_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AchievementPopup",5d,a3,65,12); }

		 ::Dynamic onFinish;
		Dynamic onFinish_dyn() { return onFinish;}
		 ::flixel::tweens::FlxTween alphaTween;
		void destroy();

};

} // end namespace objects

#endif /* INCLUDED_objects_AchievementPopup */ 
