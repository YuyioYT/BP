#ifndef INCLUDED_states_CharacterSelectionState
#define INCLUDED_states_CharacterSelectionState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
HX_DECLARE_CLASS1(backend,MusicBeatState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
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
HX_DECLARE_CLASS1(objects,Character)
HX_DECLARE_CLASS1(states,CharacterSelectionState)

namespace states{


class HXCPP_CLASS_ATTRIBUTES CharacterSelectionState_obj : public  ::backend::MusicBeatState_obj
{
	public:
		typedef  ::backend::MusicBeatState_obj super;
		typedef CharacterSelectionState_obj OBJ_;
		CharacterSelectionState_obj();

	public:
		enum { _hx_ClassId = 0x0f6a11e0 };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.CharacterSelectionState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.CharacterSelectionState"); }
		static ::hx::ObjectPtr< CharacterSelectionState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< CharacterSelectionState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CharacterSelectionState_obj();

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
		::String __ToString() const { return HX_("CharacterSelectionState",8e,67,ce,bc); }

		static void __boot();
		static ::cpp::VirtualArray characterData;
		static ::String characterFile;
		static bool notBF;
		static ::Array< Float > scoreMultipliers;
		 ::objects::Character characterSprite;
		int nightColor;
		int curSelected;
		int curSelectedForm;
		 ::flixel::text::FlxText curText;
		 ::flixel::text::FlxText controlsText;
		 ::flixel::text::FlxText formText;
		bool entering;
		 ::flixel::text::FlxText otherText;
		 ::flixel::text::FlxText yesText;
		 ::flixel::text::FlxText noText;
		bool previewMode;
		bool unlocked;
		 ::flixel::group::FlxTypedGroup arrowStrums;
		 ::flixel::group::FlxTypedGroup scoreMultipliersText;
		 ::flixel::FlxCamera camGame;
		 ::flixel::FlxCamera camHUD;
		void create();

		bool selectionStart;
		void spawnArrows();
		::Dynamic spawnArrows_dyn();

		void spawnSelection();
		::Dynamic spawnSelection_dyn();

		void checkPreview();
		::Dynamic checkPreview_dyn();

		void update(Float elapsed);

		void changeCharacter(int change,::hx::Null< bool >  playSound);
		::Dynamic changeCharacter_dyn();

		void changeForm(int change);
		::Dynamic changeForm_dyn();

		void reloadCharacter();
		::Dynamic reloadCharacter_dyn();

		void acceptCharacter();
		::Dynamic acceptCharacter_dyn();

};

} // end namespace states

#endif /* INCLUDED_states_CharacterSelectionState */ 
