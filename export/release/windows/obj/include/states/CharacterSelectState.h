#ifndef INCLUDED_states_CharacterSelectState
#define INCLUDED_states_CharacterSelectState

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
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(objects,Boyfriend)
HX_DECLARE_CLASS1(objects,Character)
HX_DECLARE_CLASS1(objects,HealthIcon)
HX_DECLARE_CLASS1(states,CharacterInSelect)
HX_DECLARE_CLASS1(states,CharacterSelectState)

namespace states{


class HXCPP_CLASS_ATTRIBUTES CharacterSelectState_obj : public  ::backend::MusicBeatState_obj
{
	public:
		typedef  ::backend::MusicBeatState_obj super;
		typedef CharacterSelectState_obj OBJ_;
		CharacterSelectState_obj();

	public:
		enum { _hx_ClassId = 0x361d20ae };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.CharacterSelectState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.CharacterSelectState"); }
		static ::hx::ObjectPtr< CharacterSelectState_obj > __new();
		static ::hx::ObjectPtr< CharacterSelectState_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CharacterSelectState_obj();

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
		::String __ToString() const { return HX_("CharacterSelectState",6c,e0,09,fd); }

		static void __boot();
		static  ::Dynamic randomizeBG();
		static ::Dynamic randomizeBG_dyn();

		static ::Array< ::String > bgPaths;
		static void unlockCharacter(::String character);
		static ::Dynamic unlockCharacter_dyn();

		static bool isLocked(::String character);
		static ::Dynamic isLocked_dyn();

		static void reset();
		static ::Dynamic reset_dyn();

		 ::objects::Boyfriend _hx_char;
		int current;
		int curForm;
		 ::flixel::text::FlxText notemodtext;
		 ::flixel::text::FlxText characterText;
		bool wasInFullscreen;
		bool alreadySelected;
		 ::objects::HealthIcon funnyIconMan;
		 ::flixel::group::FlxTypedGroup strummies;
		::Array< ::String > notestuffs;
		 ::flixel::group::FlxTypedGroup arrowStrums;
		bool isDebug;
		bool PressedTheFunny;
		bool selectedCharacter;
		 ::states::CharacterInSelect currentSelectedCharacter;
		 ::flixel::group::FlxTypedGroup noteMsTexts;
		::Array< ::Dynamic> arrows;
		 ::flixel::math::FlxBasePoint basePosition;
		::Array< ::Dynamic> characters;
		void create();

		void generateStaticArrows(::String noteType,bool regenerated);
		::Dynamic generateStaticArrows_dyn();

		void update(Float elapsed);

		void preload(::String graphic);
		::Dynamic preload_dyn();

		void UpdateBF();
		::Dynamic UpdateBF_dyn();

		void beatHit();

		void updateIconPosition();
		::Dynamic updateIconPosition_dyn();

		void endIt( ::flixel::util::FlxTimer e);
		::Dynamic endIt_dyn();

};

} // end namespace states

#endif /* INCLUDED_states_CharacterSelectState */ 
