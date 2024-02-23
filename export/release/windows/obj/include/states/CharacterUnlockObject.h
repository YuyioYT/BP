#ifndef INCLUDED_states_CharacterUnlockObject
#define INCLUDED_states_CharacterUnlockObject

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
HX_DECLARE_CLASS1(states,CharacterUnlockObject)

namespace states{


class HXCPP_CLASS_ATTRIBUTES CharacterUnlockObject_obj : public  ::flixel::group::FlxTypedSpriteGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedSpriteGroup_obj super;
		typedef CharacterUnlockObject_obj OBJ_;
		CharacterUnlockObject_obj();

	public:
		enum { _hx_ClassId = 0x0520ab4a };

		void __construct(::String name, ::flixel::FlxCamera camera,::String characterIcon,::hx::Null< int >  __o_color);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.CharacterUnlockObject")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.CharacterUnlockObject"); }
		static ::hx::ObjectPtr< CharacterUnlockObject_obj > __new(::String name, ::flixel::FlxCamera camera,::String characterIcon,::hx::Null< int >  __o_color);
		static ::hx::ObjectPtr< CharacterUnlockObject_obj > __alloc(::hx::Ctx *_hx_ctx,::String name, ::flixel::FlxCamera camera,::String characterIcon,::hx::Null< int >  __o_color);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CharacterUnlockObject_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CharacterUnlockObject",cc,b1,5b,4d); }

		 ::Dynamic onFinish;
		Dynamic onFinish_dyn() { return onFinish;}
		 ::flixel::tweens::FlxTween alphaTween;
		void destroy();

};

} // end namespace states

#endif /* INCLUDED_states_CharacterUnlockObject */ 
