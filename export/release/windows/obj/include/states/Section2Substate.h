#ifndef INCLUDED_states_Section2Substate
#define INCLUDED_states_Section2Substate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_backend_MusicBeatSubstate
#include <backend/MusicBeatSubstate.h>
#endif
HX_DECLARE_CLASS1(backend,MusicBeatSubstate)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(states,Section2Substate)

namespace states{


class HXCPP_CLASS_ATTRIBUTES Section2Substate_obj : public  ::backend::MusicBeatSubstate_obj
{
	public:
		typedef  ::backend::MusicBeatSubstate_obj super;
		typedef Section2Substate_obj OBJ_;
		Section2Substate_obj();

	public:
		enum { _hx_ClassId = 0x09fa5e88 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.Section2Substate")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.Section2Substate"); }
		static ::hx::ObjectPtr< Section2Substate_obj > __new();
		static ::hx::ObjectPtr< Section2Substate_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Section2Substate_obj();

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
		::String __ToString() const { return HX_("Section2Substate",7e,0c,ed,2a); }

		static void __boot();
		static  ::haxe::ds::StringMap weekCompleted;
		static ::Array< ::String > bgPaths;
		static  ::Dynamic randomizeBG();
		static ::Dynamic randomizeBG_dyn();

		 ::flixel::FlxSprite arrowshitSub;
		 ::flixel::group::FlxTypedGroup menuItemsSub;
		bool lol4;
		bool lol5;
		bool lol6;
		 ::flixel::text::FlxText text;
		 ::flixel::text::FlxText text2;
		 ::flixel::group::FlxTypedGroup menuItems;
		 ::flixel::FlxSprite week4;
		 ::flixel::FlxSprite week5;
		 ::flixel::text::FlxText week4text;
		 ::flixel::text::FlxText week5text;
		 ::flixel::FlxSprite week6;
		 ::flixel::text::FlxText week6text;
		void update(Float elapsed);

		void startSong4(::String songName1,::String songName2,::String songName3);
		::Dynamic startSong4_dyn();

		void startSong5(::String songName1,::String songName2);
		::Dynamic startSong5_dyn();

		void startSong6(::String songName1,::String songName2,::String songName3);
		::Dynamic startSong6_dyn();

		bool weekIsLocked(int weekNum);
		::Dynamic weekIsLocked_dyn();

};

} // end namespace states

#endif /* INCLUDED_states_Section2Substate */ 
