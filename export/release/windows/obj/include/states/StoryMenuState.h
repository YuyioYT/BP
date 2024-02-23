#ifndef INCLUDED_states_StoryMenuState
#define INCLUDED_states_StoryMenuState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
HX_DECLARE_CLASS1(backend,MusicBeatState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(states,StoryMenuState)

namespace states{


class HXCPP_CLASS_ATTRIBUTES StoryMenuState_obj : public  ::backend::MusicBeatState_obj
{
	public:
		typedef  ::backend::MusicBeatState_obj super;
		typedef StoryMenuState_obj OBJ_;
		StoryMenuState_obj();

	public:
		enum { _hx_ClassId = 0x18456883 };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.StoryMenuState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.StoryMenuState"); }
		static ::hx::ObjectPtr< StoryMenuState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< StoryMenuState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StoryMenuState_obj();

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
		::String __ToString() const { return HX_("StoryMenuState",5d,99,60,42); }

		static void __boot();
		static  ::haxe::ds::StringMap weekCompleted;
		static ::Array< ::String > bgPaths;
		static  ::Dynamic randomizeBG();
		static ::Dynamic randomizeBG_dyn();

		 ::flixel::FlxSprite week1;
		 ::flixel::FlxSprite o;
		bool lol;
		bool lol2;
		bool lol3;
		bool canExit;
		 ::flixel::text::FlxText week1text;
		 ::flixel::text::FlxText week2text;
		 ::flixel::FlxSprite week2;
		 ::flixel::FlxSprite week3;
		 ::flixel::text::FlxText week3text;
		 ::flixel::FlxSprite arrowshit;
		 ::flixel::group::FlxTypedGroup menuItems;
		 ::flixel::text::FlxText text;
		 ::flixel::text::FlxText text2;
		void create();

		void update(Float elapsed);

		void startSong(::String songName1,::String songName2,::String songName3);
		::Dynamic startSong_dyn();

		void startSong2(::String songName1,::String songName2,::String songName3);
		::Dynamic startSong2_dyn();

		void startSong3(::String songName1,::String songName2,::String songName3);
		::Dynamic startSong3_dyn();

		bool weekIsLocked(int weekNum);
		::Dynamic weekIsLocked_dyn();

};

} // end namespace states

#endif /* INCLUDED_states_StoryMenuState */ 
