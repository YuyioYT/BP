#ifndef INCLUDED_states_CategoryState
#define INCLUDED_states_CategoryState

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
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(states,CategoryState)

namespace states{


class HXCPP_CLASS_ATTRIBUTES CategoryState_obj : public  ::backend::MusicBeatState_obj
{
	public:
		typedef  ::backend::MusicBeatState_obj super;
		typedef CategoryState_obj OBJ_;
		CategoryState_obj();

	public:
		enum { _hx_ClassId = 0x20c9d5c9 };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.CategoryState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.CategoryState"); }
		static ::hx::ObjectPtr< CategoryState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< CategoryState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CategoryState_obj();

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
		::String __ToString() const { return HX_("CategoryState",13,72,0a,16); }

		static void __boot();
		static ::String categorySelected;
		static ::Array< ::String > bgPaths;
		static bool loadingCategory;
		static  ::Dynamic randomizeBG();
		static ::Dynamic randomizeBG_dyn();

		bool InMainFreeplayState;
		 ::flixel::FlxSprite CurrentSongIcon;
		::Array< ::Dynamic> icons;
		::Array< ::Dynamic> titles;
		::Array< ::String > AllPossibleSongs;
		int CurrentPack;
		 ::flixel::FlxSprite bg;
		bool loadingPack;
		 ::flixel::FlxSprite check;
		 ::flixel::FlxSprite glow;
		 ::flixel::FlxSprite spikes;
		::Array< ::Dynamic> categoryIcons;
		void create();

		void LoadProperPack();
		::Dynamic LoadProperPack_dyn();

		void UpdatePackSelection(int change);
		::Dynamic UpdatePackSelection_dyn();

		void update(Float elapsed);

};

} // end namespace states

#endif /* INCLUDED_states_CategoryState */ 
