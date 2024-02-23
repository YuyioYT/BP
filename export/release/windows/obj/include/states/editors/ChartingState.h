#ifndef INCLUDED_states_editors_ChartingState
#define INCLUDED_states_editors_ChartingState

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
HX_DECLARE_CLASS3(flixel,addons,ui,FlxSlider)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUICheckBox)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIDropDownMenu)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIInputText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUINumericStepper)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUISlider)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITabMenu)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ILabeled)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,sound,FlxSound)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,media,AudioBuffer)
HX_DECLARE_CLASS1(objects,AttachedSprite)
HX_DECLARE_CLASS1(objects,Character)
HX_DECLARE_CLASS1(objects,HealthIcon)
HX_DECLARE_CLASS1(objects,Note)
HX_DECLARE_CLASS2(openfl,events,ErrorEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IOErrorEvent)
HX_DECLARE_CLASS2(openfl,events,TextEvent)
HX_DECLARE_CLASS2(openfl,net,FileReference)
HX_DECLARE_CLASS2(states,editors,ChartingState)

namespace states{
namespace editors{


class HXCPP_CLASS_ATTRIBUTES ChartingState_obj : public  ::backend::MusicBeatState_obj
{
	public:
		typedef  ::backend::MusicBeatState_obj super;
		typedef ChartingState_obj OBJ_;
		ChartingState_obj();

	public:
		enum { _hx_ClassId = 0x4f752055 };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.editors.ChartingState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.editors.ChartingState"); }
		static ::hx::ObjectPtr< ChartingState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< ChartingState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ChartingState_obj();

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
		::String __ToString() const { return HX_("ChartingState",8d,e0,dd,9b); }

		static void __boot();
		static ::Array< ::String > noteTypeList;
		static bool goToPlayState;
		static int curSec;
		static int lastSection;
		static ::String lastSong;
		static int GRID_SIZE;
		static int quantization;
		static int curQuant;
		static bool vortex;
		bool ignoreWarnings;
		::Array< ::String > curNoteTypes;
		::cpp::VirtualArray undos;
		::cpp::VirtualArray redos;
		::cpp::VirtualArray eventStuff;
		 ::openfl::net::FileReference _file;
		 ::flixel::addons::ui::FlxUITabMenu UI_box;
		 ::flixel::text::FlxText bpmTxt;
		 ::flixel::FlxObject camPos;
		 ::flixel::FlxSprite strumLine;
		 ::objects::AttachedSprite quant;
		 ::flixel::group::FlxTypedGroup strumLineNotes;
		::String curSong;
		int amountSteps;
		 ::flixel::group::FlxTypedGroup bullshitUI;
		 ::flixel::FlxSprite highlight;
		int CAM_OFFSET;
		 ::flixel::FlxSprite dummyArrow;
		 ::flixel::group::FlxTypedGroup curRenderedSustains;
		 ::flixel::group::FlxTypedGroup curRenderedNotes;
		 ::flixel::group::FlxTypedGroup curRenderedNoteType;
		 ::flixel::group::FlxTypedGroup nextRenderedSustains;
		 ::flixel::group::FlxTypedGroup nextRenderedNotes;
		 ::flixel::FlxSprite gridBG;
		 ::flixel::FlxSprite nextGridBG;
		int daquantspot;
		int curEventSelected;
		int curUndoIndex;
		int curRedoIndex;
		 ::Dynamic _song;
		::cpp::VirtualArray curSelectedNote;
		Float playbackSpeed;
		 ::flixel::sound::FlxSound vocals;
		 ::objects::HealthIcon leftIcon;
		 ::objects::HealthIcon rightIcon;
		 ::flixel::addons::ui::FlxUIInputText value1InputText;
		 ::flixel::addons::ui::FlxUIInputText value2InputText;
		::String currentSongName;
		 ::flixel::FlxSprite gradientBar;
		 ::flixel::text::FlxText zoomTxt;
		::Array< Float > zoomList;
		int curZoom;
		::Array< ::Dynamic> blockPressWhileTypingOn;
		::Array< ::Dynamic> blockPressWhileTypingOnStepper;
		::Array< ::Dynamic> blockPressWhileScrolling;
		 ::flixel::FlxSprite waveformSprite;
		 ::flixel::group::FlxTypedGroup gridLayer;
		::Array< int > quantizations;
		::String text;
		bool mouseQuant;
		 ::objects::Character _hx_char;
		void create();

		 ::flixel::addons::ui::FlxUICheckBox check_mute_inst;
		 ::flixel::addons::ui::FlxUICheckBox check_mute_vocals;
		 ::flixel::addons::ui::FlxUICheckBox check_vortex;
		 ::flixel::addons::ui::FlxUICheckBox check_warnings;
		 ::flixel::addons::ui::FlxUICheckBox playSoundBf;
		 ::flixel::addons::ui::FlxUICheckBox playSoundDad;
		 ::flixel::addons::ui::FlxUIInputText UI_songTitle;
		 ::flixel::addons::ui::FlxUIDropDownMenu stageDropDown;
		 ::flixel::addons::ui::FlxUISlider sliderRate;
		void addSongUI();
		::Dynamic addSongUI_dyn();

		 ::flixel::addons::ui::FlxUINumericStepper stepperBeats;
		 ::flixel::addons::ui::FlxUICheckBox check_mustHitSection;
		 ::flixel::addons::ui::FlxUICheckBox check_gfSection;
		 ::flixel::addons::ui::FlxUICheckBox check_changeBPM;
		 ::flixel::addons::ui::FlxUINumericStepper stepperSectionBPM;
		 ::flixel::addons::ui::FlxUICheckBox check_altAnim;
		int sectionToCopy;
		::cpp::VirtualArray notesCopied;
		void addSectionUI();
		::Dynamic addSectionUI_dyn();

		 ::flixel::addons::ui::FlxUINumericStepper stepperSusLength;
		 ::flixel::addons::ui::FlxUIInputText strumTimeInputText;
		 ::flixel::addons::ui::FlxUIDropDownMenu noteTypeDropDown;
		int currentType;
		void addNoteUI();
		::Dynamic addNoteUI_dyn();

		 ::flixel::addons::ui::FlxUIDropDownMenu eventDropDown;
		 ::flixel::text::FlxText descText;
		 ::flixel::text::FlxText selectedEventText;
		void addEventsUI();
		::Dynamic addEventsUI_dyn();

		void changeEventSelected(::hx::Null< int >  change);
		::Dynamic changeEventSelected_dyn();

		void setAllLabelsOffset( ::flixel::ui::FlxButton button,Float x,Float y);
		::Dynamic setAllLabelsOffset_dyn();

		 ::flixel::addons::ui::FlxUICheckBox metronome;
		 ::flixel::addons::ui::FlxUICheckBox mouseScrollingQuant;
		 ::flixel::addons::ui::FlxUINumericStepper metronomeStepper;
		 ::flixel::addons::ui::FlxUINumericStepper metronomeOffsetStepper;
		 ::flixel::addons::ui::FlxUICheckBox disableAutoScrolling;
		 ::flixel::addons::ui::FlxUICheckBox waveformUseInstrumental;
		 ::flixel::addons::ui::FlxUICheckBox waveformUseVoices;
		 ::flixel::addons::ui::FlxUINumericStepper instVolume;
		 ::flixel::addons::ui::FlxUINumericStepper voicesVolume;
		void addChartingUI();
		::Dynamic addChartingUI_dyn();

		 ::flixel::addons::ui::FlxUIInputText gameOverCharacterInputText;
		 ::flixel::addons::ui::FlxUIInputText gameOverSoundInputText;
		 ::flixel::addons::ui::FlxUIInputText gameOverLoopInputText;
		 ::flixel::addons::ui::FlxUIInputText gameOverEndInputText;
		 ::flixel::addons::ui::FlxUIInputText noteSkinInputText;
		 ::flixel::addons::ui::FlxUIInputText noteSplashesInputText;
		void addDataUI();
		::Dynamic addDataUI_dyn();

		void loadSong();
		::Dynamic loadSong_dyn();

		bool playtesting;
		Float playtestingTime;
		 ::Dynamic playtestingOnComplete;
		Dynamic playtestingOnComplete_dyn() { return playtestingOnComplete;}
		void closeSubState();

		void generateSong();
		::Dynamic generateSong_dyn();

		void generateUI();
		::Dynamic generateUI_dyn();

		void getEvent(::String id, ::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params);

		bool updatedSection;
		Float sectionStartTime(::hx::Null< int >  add);
		::Dynamic sectionStartTime_dyn();

		Float lastConductorPos;
		Float colorSine;
		void update(Float elapsed);

		void updateZoom();
		::Dynamic updateZoom_dyn();

		void destroy();

		Float lastSecBeats;
		Float lastSecBeatsNext;
		int columns;
		void reloadGridLayer();
		::Dynamic reloadGridLayer_dyn();

		void strumLineUpdateY();
		::Dynamic strumLineUpdateY_dyn();

		bool waveformPrinted;
		::Array< ::Dynamic> wavData;
		int lastWaveformHeight;
		void updateWaveform();
		::Dynamic updateWaveform_dyn();

		::Array< ::Dynamic> waveformData( ::lime::media::AudioBuffer buffer, ::haxe::io::Bytes bytes,Float time,Float endTime,::hx::Null< Float >  multiply,::Array< ::Dynamic> array, ::Dynamic steps);
		::Dynamic waveformData_dyn();

		void changeNoteSustain(Float value);
		::Dynamic changeNoteSustain_dyn();

		int recalculateSteps(::hx::Null< Float >  add);
		::Dynamic recalculateSteps_dyn();

		void resetSection(::hx::Null< bool >  songBeginning);
		::Dynamic resetSection_dyn();

		void changeSection(::hx::Null< int >  sec, ::Dynamic updateMusic);
		::Dynamic changeSection_dyn();

		void updateSectionUI();
		::Dynamic updateSectionUI_dyn();

		void updateHeads();
		::Dynamic updateHeads_dyn();

		::String loadHealthIconFromCharacter(::String _hx_char);
		::Dynamic loadHealthIconFromCharacter_dyn();

		void updateNoteUI();
		::Dynamic updateNoteUI_dyn();

		void updateGrid();
		::Dynamic updateGrid_dyn();

		 ::objects::Note setupNoteData(::cpp::VirtualArray i,bool isNextSection);
		::Dynamic setupNoteData_dyn();

		::String getEventName(::cpp::VirtualArray names);
		::Dynamic getEventName_dyn();

		 ::flixel::FlxSprite setupSusNote( ::objects::Note note,Float beats);
		::Dynamic setupSusNote_dyn();

		void addSection(::hx::Null< Float >  sectionBeats);
		::Dynamic addSection_dyn();

		void selectNote( ::objects::Note note);
		::Dynamic selectNote_dyn();

		void deleteNote( ::objects::Note note);
		::Dynamic deleteNote_dyn();

		void doANoteThing( ::Dynamic cs,int d, ::Dynamic style);
		::Dynamic doANoteThing_dyn();

		void clearSong();
		::Dynamic clearSong_dyn();

		void addNote( ::Dynamic strum, ::Dynamic data, ::Dynamic type);
		::Dynamic addNote_dyn();

		void redo();
		::Dynamic redo_dyn();

		void undo();
		::Dynamic undo_dyn();

		Float getStrumTime(Float yPos,::hx::Null< bool >  doZoomCalc);
		::Dynamic getStrumTime_dyn();

		Float getYfromStrum(Float strumTime,::hx::Null< bool >  doZoomCalc);
		::Dynamic getYfromStrum_dyn();

		Float getYfromStrumNotes(Float strumTime,Float beats);
		::Dynamic getYfromStrumNotes_dyn();

		::cpp::VirtualArray getNotes();
		::Dynamic getNotes_dyn();

		 ::flixel::text::FlxText missingText;
		 ::flixel::util::FlxTimer missingTextTimer;
		void loadJson(::String song);
		::Dynamic loadJson_dyn();

		void autosaveSong();
		::Dynamic autosaveSong_dyn();

		void clearEvents();
		::Dynamic clearEvents_dyn();

		void saveLevel();
		::Dynamic saveLevel_dyn();

		int sortByTime(::cpp::VirtualArray Obj1,::cpp::VirtualArray Obj2);
		::Dynamic sortByTime_dyn();

		void saveEvents();
		::Dynamic saveEvents_dyn();

		void onSaveComplete( ::openfl::events::Event _);
		::Dynamic onSaveComplete_dyn();

		void onSaveCancel( ::openfl::events::Event _);
		::Dynamic onSaveCancel_dyn();

		void onSaveError( ::openfl::events::IOErrorEvent _);
		::Dynamic onSaveError_dyn();

		 ::Dynamic getSectionBeats( ::Dynamic section);
		::Dynamic getSectionBeats_dyn();

};

} // end namespace states
} // end namespace editors

#endif /* INCLUDED_states_editors_ChartingState */ 
