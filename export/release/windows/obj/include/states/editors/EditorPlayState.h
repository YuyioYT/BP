#ifndef INCLUDED_states_editors_EditorPlayState
#define INCLUDED_states_editors_EditorPlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_backend_MusicBeatSubstate
#include <backend/MusicBeatSubstate.h>
#endif
HX_DECLARE_CLASS1(backend,MusicBeatSubstate)
HX_DECLARE_CLASS1(backend,Rating)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,sound,FlxSound)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,Note)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
HX_DECLARE_CLASS2(states,editors,EditorPlayState)

namespace states{
namespace editors{


class HXCPP_CLASS_ATTRIBUTES EditorPlayState_obj : public  ::backend::MusicBeatSubstate_obj
{
	public:
		typedef  ::backend::MusicBeatSubstate_obj super;
		typedef EditorPlayState_obj OBJ_;
		EditorPlayState_obj();

	public:
		enum { _hx_ClassId = 0x08dd198c };

		void __construct(Float playbackRate);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.editors.EditorPlayState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.editors.EditorPlayState"); }
		static ::hx::ObjectPtr< EditorPlayState_obj > __new(Float playbackRate);
		static ::hx::ObjectPtr< EditorPlayState_obj > __alloc(::hx::Ctx *_hx_ctx,Float playbackRate);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EditorPlayState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EditorPlayState",f0,2b,94,62); }

		 ::flixel::util::FlxTimer finishTimer;
		Float noteKillOffset;
		Float spawnTime;
		bool startingSong;
		Float playbackRate;
		 ::flixel::sound::FlxSound vocals;
		 ::flixel::sound::FlxSound inst;
		 ::flixel::group::FlxTypedGroup notes;
		::Array< ::Dynamic> unspawnNotes;
		::Array< ::Dynamic> ratingsData;
		 ::flixel::group::FlxTypedGroup strumLineNotes;
		 ::flixel::group::FlxTypedGroup opponentStrums;
		 ::flixel::group::FlxTypedGroup playerStrums;
		 ::flixel::group::FlxTypedGroup grpNoteSplashes;
		int combo;
		 ::flixel::FlxSprite lastRating;
		 ::flixel::FlxSprite lastCombo;
		::Array< ::Dynamic> lastScore;
		::Array< ::String > keysArray;
		int songHits;
		int songMisses;
		Float songLength;
		Float songSpeed;
		int totalPlayed;
		Float totalNotesHit;
		Float ratingPercent;
		::String ratingFC;
		bool showCombo;
		bool showComboNum;
		bool showRating;
		Float startOffset;
		Float startPos;
		Float timerToStart;
		 ::flixel::text::FlxText scoreTxt;
		 ::flixel::text::FlxText dataTxt;
		void update(Float elapsed);

		int lastStepHit;
		void stepHit();

		int lastBeatHit;
		void beatHit();

		void sectionHit();

		void destroy();

		void startSong();
		::Dynamic startSong_dyn();

		void generateSong(::String dataPath);
		::Dynamic generateSong_dyn();

		void generateStaticArrows(int player);
		::Dynamic generateStaticArrows_dyn();

		void finishSong();
		::Dynamic finishSong_dyn();

		void endSong();
		::Dynamic endSong_dyn();

		void cachePopUpScore();
		::Dynamic cachePopUpScore_dyn();

		void popUpScore( ::objects::Note note);
		::Dynamic popUpScore_dyn();

		void onKeyPress( ::openfl::events::KeyboardEvent event);
		::Dynamic onKeyPress_dyn();

		void keyPressed(int key);
		::Dynamic keyPressed_dyn();

		void onKeyRelease( ::openfl::events::KeyboardEvent event);
		::Dynamic onKeyRelease_dyn();

		void keyReleased(int key);
		::Dynamic keyReleased_dyn();

		void keysCheck();
		::Dynamic keysCheck_dyn();

		void opponentNoteHit( ::objects::Note note);
		::Dynamic opponentNoteHit_dyn();

		void goodNoteHit( ::objects::Note note);
		::Dynamic goodNoteHit_dyn();

		void noteMiss( ::objects::Note daNote);
		::Dynamic noteMiss_dyn();

		void spawnNoteSplashOnNote( ::objects::Note note);
		::Dynamic spawnNoteSplashOnNote_dyn();

		void spawnNoteSplash(Float x,Float y,int data, ::objects::Note note);
		::Dynamic spawnNoteSplash_dyn();

		void resyncVocals();
		::Dynamic resyncVocals_dyn();

		void RecalculateRating(::hx::Null< bool >  badHit);
		::Dynamic RecalculateRating_dyn();

		void updateScore(::hx::Null< bool >  miss);
		::Dynamic updateScore_dyn();

		void fullComboUpdate();
		::Dynamic fullComboUpdate_dyn();

};

} // end namespace states
} // end namespace editors

#endif /* INCLUDED_states_editors_EditorPlayState */ 
