#ifndef INCLUDED_states_editors_NoteSplashDebugState
#define INCLUDED_states_editors_NoteSplashDebugState

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
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxInputText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUINumericStepper)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(states,editors,NoteSplashDebugState)

namespace states{
namespace editors{


class HXCPP_CLASS_ATTRIBUTES NoteSplashDebugState_obj : public  ::backend::MusicBeatState_obj
{
	public:
		typedef  ::backend::MusicBeatState_obj super;
		typedef NoteSplashDebugState_obj OBJ_;
		NoteSplashDebugState_obj();

	public:
		enum { _hx_ClassId = 0x2853e06f };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.editors.NoteSplashDebugState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.editors.NoteSplashDebugState"); }
		static ::hx::ObjectPtr< NoteSplashDebugState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< NoteSplashDebugState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NoteSplashDebugState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NoteSplashDebugState",37,17,8c,11); }

		 ::Dynamic config;
		int forceFrame;
		int curSelected;
		int maxNotes;
		 ::flixel::FlxSprite selection;
		 ::flixel::group::FlxTypedGroup notes;
		 ::flixel::group::FlxTypedGroup splashes;
		 ::flixel::addons::ui::FlxInputText nameInputText;
		 ::flixel::addons::ui::FlxUINumericStepper stepperMinFps;
		 ::flixel::addons::ui::FlxUINumericStepper stepperMaxFps;
		 ::flixel::text::FlxText offsetsText;
		 ::flixel::text::FlxText curFrameText;
		 ::flixel::text::FlxText curAnimText;
		 ::flixel::text::FlxText savedText;
		::Array< Float > selecArr;
		void create();

		int curAnim;
		Float visibleTime;
		Float pressEnterToSave;
		void update(Float elapsed);

		void updateOffsetText();
		::Dynamic updateOffsetText_dyn();

		::String texturePath;
		::Array< Float > copiedArray;
		void loadFrames();
		::Dynamic loadFrames_dyn();

		void saveFile();
		::Dynamic saveFile_dyn();

		void getEvent(::String id, ::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params);

		int maxAnims;
		void reloadAnims();
		::Dynamic reloadAnims_dyn();

		int maxFrame;
		void changeAnim(::hx::Null< int >  change);
		::Dynamic changeAnim_dyn();

		void changeSelection(::hx::Null< int >  change);
		::Dynamic changeSelection_dyn();

		::Array< Float > selectedArray(::hx::Null< int >  sel);
		::Dynamic selectedArray_dyn();

		bool addAnimAndCheck( ::flixel::FlxSprite spr,::String name,::String anim, ::Dynamic framerate, ::Dynamic loop);
		::Dynamic addAnimAndCheck_dyn();

		void destroy();

};

} // end namespace states
} // end namespace editors

#endif /* INCLUDED_states_editors_NoteSplashDebugState */ 
