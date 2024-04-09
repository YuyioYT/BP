#ifndef INCLUDED_states_PlayState
#define INCLUDED_states_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS1(backend,MusicBeatState)
HX_DECLARE_CLASS1(backend,Rating)
HX_DECLARE_CLASS1(cutscenes,DialogueBoxPsych)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS3(flixel,addons,display,FlxRuntimeShader)
HX_DECLARE_CLASS3(flixel,addons,effects,FlxTrail)
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,FlxGlitchEffect)
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,IFlxEffect)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,sound,FlxSound)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(lime,ui,Window)
HX_DECLARE_CLASS1(objects,AchievementPopup)
HX_DECLARE_CLASS1(objects,BGSprite)
HX_DECLARE_CLASS1(objects,Character)
HX_DECLARE_CLASS1(objects,CreditsPopUp)
HX_DECLARE_CLASS1(objects,DepthSprite)
HX_DECLARE_CLASS1(objects,HealthBar)
HX_DECLARE_CLASS1(objects,HealthIcon)
HX_DECLARE_CLASS1(objects,Note)
HX_DECLARE_CLASS1(objects,SubtitleManager)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,filters,BlurFilter)
HX_DECLARE_CLASS2(openfl,filters,ShaderFilter)
HX_DECLARE_CLASS1(psychlua,FunkinLua)
HX_DECLARE_CLASS1(psychlua,HScript)
HX_DECLARE_CLASS1(shaders,BlockedGlitchEffect)
HX_DECLARE_CLASS1(shaders,BloomEffect)
HX_DECLARE_CLASS1(shaders,ChromBlockedEffect)
HX_DECLARE_CLASS1(shaders,ChromBordes2Effect)
HX_DECLARE_CLASS1(shaders,ChromBordesEffect)
HX_DECLARE_CLASS1(shaders,ChromaticAberrationEffect)
HX_DECLARE_CLASS1(shaders,Chromaticbordes3Effect)
HX_DECLARE_CLASS1(shaders,DoChromaticAberrationEffect)
HX_DECLARE_CLASS1(shaders,Effect)
HX_DECLARE_CLASS1(shaders,GrainEffect)
HX_DECLARE_CLASS1(shaders,Grey2Effect)
HX_DECLARE_CLASS1(shaders,HeatEffect)
HX_DECLARE_CLASS1(shaders,PulseEffect)
HX_DECLARE_CLASS1(shaders,StaticEffect)
HX_DECLARE_CLASS1(shaders,WiggleEffect)
HX_DECLARE_CLASS1(states,PlayState)
HX_DECLARE_CLASS1(tea,SScript)

namespace states{


class HXCPP_CLASS_ATTRIBUTES PlayState_obj : public  ::backend::MusicBeatState_obj
{
	public:
		typedef  ::backend::MusicBeatState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();

	public:
		enum { _hx_ClassId = 0x26cbb7db };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.PlayState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.PlayState"); }
		static ::hx::ObjectPtr< PlayState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< PlayState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PlayState_obj();

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
		::String __ToString() const { return HX_("PlayState",5d,83,c2,46); }

		static void __boot();
		static int STRUM_X;
		static int STRUM_X_MIDDLESCROLL;
		static ::cpp::VirtualArray ratingStuff;
		static ::cpp::VirtualArray healthStuff;
		static ::String curStage;
		static ::String stageUI;
		static bool get_isPixelStage();
		static ::Dynamic get_isPixelStage_dyn();

		static  ::Dynamic SONG;
		static bool isStoryMode;
		static int storyWeek;
		static ::Array< ::String > storyPlaylist;
		static int storyDifficulty;
		static  ::flixel::FlxObject prevCamFollow;
		static bool eyesoreson;
		static bool changedDifficulty;
		static bool chartingMode;
		static ::String characteroverride;
		static ::String formoverride;
		static  ::lime::ui::Window window;
		static ::String scrollType;
		static int campaignScore;
		static int campaignMisses;
		static bool seenCutscene;
		static int deathCounter;
		static Float daPixelZoom;
		static  ::states::PlayState instance;
		static Float startOnTime;
		static int sortByTime( ::Dynamic Obj1, ::Dynamic Obj2);
		static ::Dynamic sortByTime_dyn();

		static void quickSpin( ::flixel::FlxSprite sprite);
		static ::Dynamic quickSpin_dyn();

		static int sortHitNotes( ::objects::Note a, ::objects::Note b);
		static ::Dynamic sortHitNotes_dyn();

		static int getKeyFromEvent(::Array< ::String > arr,int key);
		static ::Dynamic getKeyFromEvent_dyn();

		static void cancelMusicFadeTween();
		static ::Dynamic cancelMusicFadeTween_dyn();

		bool isCameraOnForcedPos;
		 ::haxe::ds::StringMap boyfriendMap;
		 ::haxe::ds::StringMap dadMap;
		 ::haxe::ds::StringMap gfMap;
		 ::haxe::ds::StringMap player3Map;
		 ::haxe::ds::StringMap variables;
		::Array< ::Dynamic> hscriptArray;
		 ::haxe::ds::StringMap modchartTweens;
		 ::haxe::ds::StringMap modchartSprites;
		 ::haxe::ds::StringMap modchartTimers;
		 ::haxe::ds::StringMap modchartSounds;
		 ::haxe::ds::StringMap modchartTexts;
		 ::haxe::ds::StringMap modchartSaves;
		Float BF_X;
		Float BF_Y;
		Float DAD_X;
		Float DAD_Y;
		Float GF_X;
		Float GF_Y;
		 ::flixel::tweens::FlxTween songSpeedTween;
		::String songSpeedType;
		Float noteKillOffset;
		 ::flixel::group::FlxTypedSpriteGroup boyfriendGroup;
		 ::flixel::group::FlxTypedSpriteGroup dadGroup;
		 ::flixel::group::FlxTypedSpriteGroup gfGroup;
		 ::flixel::group::FlxTypedSpriteGroup player3Group;
		Float spawnTime;
		 ::flixel::sound::FlxSound vocals;
		 ::flixel::sound::FlxSound inst;
		 ::objects::Character dad;
		 ::objects::Character gf;
		 ::objects::Character player3;
		 ::objects::Character boyfriend;
		Float playbackRate;
		Float songSpeed;
		 ::flixel::group::FlxTypedGroup notes;
		::Array< ::Dynamic> unspawnNotes;
		::Array< ::Dynamic> eventNotes;
		int bfCamMovementX;
		int bfCamMovementY;
		int dadCamMovementX;
		int dadCamMovementY;
		 ::flixel::FlxObject camFollow;
		bool disableTheTripper;
		int disableTheTripperAt;
		 ::flixel::FlxSprite strumLine;
		 ::flixel::FlxSprite altStrumLine;
		 ::flixel::group::FlxTypedGroup strumLineNotes;
		 ::flixel::group::FlxTypedGroup opponentStrums;
		 ::flixel::group::FlxTypedGroup playerStrums;
		 ::flixel::group::FlxTypedGroup grpNoteSplashes;
		 ::flixel::group::FlxTypedGroup altStrumLineNotes;
		 ::flixel::group::FlxTypedGroup altStrums;
		 ::flixel::text::FlxText songWatermark;
		bool camZooming;
		Float camZoomingMult;
		Float camZoomingDecay;
		::String curSong;
		int gfSpeed;
		Float health;
		int combo;
		bool lastMustHit;
		int noteHits;
		::String separatedHits;
		::Array< ::Dynamic> notesHitArray;
		Float songPosition;
		 ::flixel::text::FlxText noteComboText;
		::Array< ::Dynamic> noteComboNumbers;
		 ::flixel::text::FlxText judgementCounter;
		Float curTime;
		Float elapsedtime;
		Float timeelapsed;
		Float allNotesMs;
		Float averageMs;
		 ::objects::Character badai;
		 ::objects::Character swaggy;
		 ::objects::Character swagBombu;
		 ::objects::Character littleIdiot;
		bool doneloll;
		bool doneloll2;
		int stupidInt;
		bool stupidBool;
		 ::objects::BGSprite colorFilter;
		 ::flixel::FlxSprite shartGrad;
		 ::flixel::FlxSprite shartLine;
		 ::flixel::FlxSprite blackScreen;
		 ::flixel::FlxSprite healthBarOverlay;
		 ::objects::HealthBar healthBar;
		Float healthPercentageDisplay;
		Float healthPercentageBar;
		Float fakeHealth;
		 ::objects::HealthBar timeBar;
		bool updateTime;
		bool updateThePercent;
		Float songPercent;
		Float songPercentThing;
		Float playbackRateDecimal;
		int endingTimeLimit;
		 ::flixel::text::FlxText timePercentTxt;
		 ::flixel::FlxSprite curbg;
		 ::shaders::PulseEffect screenshader;
		 ::shaders::BlockedGlitchEffect glitchShader;
		bool glitchCam;
		bool camZoomSnap;
		bool camTilt;
		bool goofyZoom;
		 ::flixel::tweens::FlxTween camZoomTween;
		 ::flixel::tweens::FlxTween camTiltTween;
		Float charAnimOffsetX;
		::Array< ::Dynamic> ratingsData;
		 ::Dynamic fullComboFunction;
		Dynamic fullComboFunction_dyn() { return fullComboFunction;}
		int maxNPS;
		int nps;
		Float totalNotesPlayed;
		Float totalNotesjudgement;
		Float maxCombo;
		int missCombo;
		 ::flixel::text::FlxText npsCounter;
		 ::flixel::text::FlxText maxNpsCounter;
		 ::flixel::text::FlxText comboTxt;
		 ::flixel::text::FlxText totalNotes;
		 ::flixel::text::FlxText misses;
		 ::flixel::text::FlxText comboBreaks;
		Float camZoomSpeed;
		Float hudZoomSpeed;
		Float czspeedDefault;
		bool shakeCam;
		bool shakeCamALT;
		bool enableangle;
		bool generatedMusic;
		bool endingSong;
		bool startingSong;
		Float elapsedexpungedtime;
		::Array< ::String > noteCharacters2;
		::Array< ::String > noteCharacters;
		::Array< ::String > funnyFloatyBoys;
		::Array< ::String > funnySideFloatyBoys;
		::Array< ::String > funnyRotatorBoys;
		bool canSlide;
		bool canFloat;
		bool canRotate;
		int sectionHitvar;
		int beatHitvar;
		bool dnbBounce;
		bool ogBounce;
		Float camBopVAL;
		Float camHUDBopVAL;
		Float ogCamBopVAL;
		Float ogCamHUDBopVAL;
		bool cameraOnDad;
		bool cameraOnBF;
		 ::flixel::FlxSprite rsod;
		 ::flixel::FlxSprite notResponding;
		bool laggingRSOD;
		bool uphIntroTime;
		 ::flixel::FlxSprite fakenotes;
		 ::objects::DepthSprite bg;
		 ::objects::DepthSprite hills;
		 ::objects::DepthSprite gate;
		 ::objects::DepthSprite grass;
		 ::objects::DepthSprite house;
		 ::objects::DepthSprite grill;
		 ::objects::DepthSprite farm;
		 ::flixel::FlxSprite pcworld;
		 ::flixel::FlxSprite burger;
		 ::objects::BGSprite filter;
		 ::objects::DepthSprite ourple;
		 ::objects::DepthSprite phones;
		 ::flixel::FlxSprite gridBG;
		Float gridSine;
		 ::objects::DepthSprite bgshitH;
		 ::objects::DepthSprite bgshitH2;
		 ::objects::BGSprite cloudsH;
		 ::flixel::FlxSprite bgrsod;
		 ::flixel::FlxSprite banbodeez;
		 ::flixel::FlxSprite olddavesky;
		 ::flixel::FlxSprite olddaveGrass;
		 ::flixel::FlxSprite olddaveGate;
		 ::flixel::FlxSprite olddaveHills;
		 ::objects::BGSprite expungedBG;
		 ::objects::BGSprite glow;
		 ::flixel::FlxSprite whiteflash;
		 ::flixel::FlxSprite redGlow;
		 ::openfl::display::Sprite expungedScroll;
		 ::openfl::display::Sprite expungedSpr;
		::cpp::VirtualArray windowProperties;
		bool expungedWindowMode;
		 ::flixel::math::FlxBasePoint expungedOffset;
		bool expungedMoving;
		 ::flixel::graphics::frames::FlxFrame lastFrame;
		 ::flixel::math::FlxBasePoint ExpungedWindowCenterPos;
		Float windowSteadyX;
		 ::flixel::math::FlxBasePoint preDadPos;
		bool allowGamecamToZoom;
		bool allowHUDcamToZoom;
		 ::flixel::tweens::FlxTween camGameTween;
		 ::flixel::util::FlxTimer penisTimer;
		bool doingSMzoom;
		bool dramaticbnwTime;
		 ::flixel::FlxSprite whiteScreenEvents;
		Float zoomAdd;
		bool autoZoom;
		bool realityShader;
		 ::objects::SubtitleManager subtitleManager;
		::Array< ::Dynamic> pauseTweens;
		bool movecameracountdownbeacuaseyes;
		 ::flixel::addons::effects::FlxTrail evilTrail;
		 ::flixel::addons::effects::FlxTrail scaryTrail;
		 ::flixel::addons::effects::FlxTrail playerTrail;
		Float bounce;
		Float bounce2;
		int screenWidth;
		int screenHeight;
		 ::flixel::FlxSprite barLeft;
		 ::flixel::FlxSprite barRight;
		 ::objects::BGSprite bgstage;
		 ::objects::BGSprite stageFront;
		 ::objects::BGSprite stageLight;
		 ::objects::BGSprite stageCurtains;
		bool upheavalmoment;
		Float defaultCamZoom;
		Float defaultHUDZoom;
		Float ogDefaultCamZoom;
		bool showTime;
		bool daspinlmao;
		bool daleftspinlmao;
		::Array< ::Dynamic> shaderUpdates;
		::cpp::VirtualArray camGameShaders;
		::cpp::VirtualArray camHUDShaders;
		::cpp::VirtualArray camOtherShaders;
		int theoreticalSongScore;
		 ::flixel::tweens::FlxTween camTween;
		Float healthGain;
		Float healthLoss;
		bool instakillOnMiss;
		bool cpuControlled;
		bool practiceMode;
		bool trollingMode;
		Float botplaySine;
		 ::flixel::text::FlxText botplayTxt;
		::Array< Float > gfNoteCamOffset;
		::Array< Float > bfNoteCamOffset;
		::Array< Float > dadNoteCamOffset;
		 ::objects::HealthIcon iconP1;
		 ::objects::HealthIcon iconP2;
		bool dancingLeft;
		 ::flixel::FlxCamera camHUD;
		 ::flixel::FlxCamera camGame;
		 ::flixel::FlxCamera camOther;
		 ::flixel::FlxCamera camTransition;
		 ::flixel::FlxCamera camNOTES;
		 ::flixel::FlxCamera camSus;
		Float cameraSpeed;
		bool followarrow;
		 ::openfl::filters::BlurFilter blurNotes;
		 ::flixel::addons::effects::chainable::FlxGlitchEffect glitcheffect;
		 ::shaders::WiggleEffect wiggleShit;
		 ::shaders::StaticEffect staticshader;
		 ::shaders::Grey2Effect greyeffect;
		 ::openfl::filters::ShaderFilter susWiggle;
		 ::shaders::Chromaticbordes3Effect chromaticbordes3;
		 ::shaders::ChromBlockedEffect chromglitch;
		 ::shaders::ChromBordesEffect googlechrombordes;
		 ::shaders::ChromBordes2Effect googlechrombordes2;
		 ::shaders::DoChromaticAberrationEffect googlechrom;
		 ::shaders::ChromaticAberrationEffect shader_chromatic_abberation;
		 ::shaders::GrainEffect grain_shader;
		 ::shaders::HeatEffect heath;
		 ::shaders::BloomEffect bloom;
		 ::shaders::GrainEffect grain;
		int songScore;
		int songHits;
		int songMisses;
		 ::flixel::text::FlxText scoreTxt;
		 ::flixel::text::FlxText timeTxt;
		 ::flixel::tweens::FlxTween scoreTxtTween;
		Float tweenTime;
		bool waoscolorshatt;
		::Array< ::String > singAnimations;
		bool inCutscene;
		bool skipCountdown;
		Float songLength;
		::Array< Float > boyfriendCameraOffset;
		::Array< Float > opponentCameraOffset;
		::Array< Float > girlfriendCameraOffset;
		 ::objects::CreditsPopUp creditsPopup;
		::String storyDifficultyText;
		::String detailsText;
		::String detailsPausedText;
		::Array< int > keysPressed;
		Float boyfriendIdleTime;
		bool boyfriendIdled;
		 ::flixel::text::FlxText tutorialTxt;
		::Array< ::Dynamic> luaArray;
		 ::flixel::group::FlxTypedGroup luaDebugGroup;
		::String introSoundsSuffix;
		::Array< ::String > keysArray;
		 ::haxe::ds::StringMap precacheList;
		::String songName;
		 ::Dynamic startCallback;
		Dynamic startCallback_dyn() { return startCallback;}
		 ::Dynamic endCallback;
		Dynamic endCallback_dyn() { return endCallback;}
		void create();

		Float set_songSpeed(Float value);
		::Dynamic set_songSpeed_dyn();

		Float set_playbackRate(Float value);
		::Dynamic set_playbackRate_dyn();

		void addTextToDebug(::String text,int color);
		::Dynamic addTextToDebug_dyn();

		void reloadTimeBarColors();
		::Dynamic reloadTimeBarColors_dyn();

		void reloadHealthBarColors();
		::Dynamic reloadHealthBarColors_dyn();

		void addCharacterToList(::String newCharacter,int type);
		::Dynamic addCharacterToList_dyn();

		void startCharacterScripts(::String name);
		::Dynamic startCharacterScripts_dyn();

		void addShaderToCamera(::String cam, ::Dynamic effect);
		::Dynamic addShaderToCamera_dyn();

		void removeShaderFromCamera(::String cam, ::Dynamic effect);
		::Dynamic removeShaderFromCamera_dyn();

		void clearShaderFromCamera(::String cam);
		::Dynamic clearShaderFromCamera_dyn();

		 ::flixel::FlxSprite getLuaObject(::String tag,::hx::Null< bool >  text);
		::Dynamic getLuaObject_dyn();

		void startCharacterPos( ::objects::Character _hx_char, ::Dynamic gfCheck);
		::Dynamic startCharacterPos_dyn();

		void startVideo(::String name);
		::Dynamic startVideo_dyn();

		void startAndEnd();
		::Dynamic startAndEnd_dyn();

		int dialogueCount;
		 ::cutscenes::DialogueBoxPsych psychDialogue;
		void startDialogue( ::Dynamic dialogueFile,::String song);
		::Dynamic startDialogue_dyn();

		 ::flixel::util::FlxTimer startTimer;
		 ::flixel::util::FlxTimer finishTimer;
		 ::flixel::FlxSprite countdownReady;
		 ::flixel::FlxSprite countdownSet;
		 ::flixel::FlxSprite countdownGo;
		void cacheCountdown();
		::Dynamic cacheCountdown_dyn();

		bool startCountdown();
		::Dynamic startCountdown_dyn();

		 ::flixel::FlxSprite createCountdownSprite(::String image,bool antialias);
		::Dynamic createCountdownSprite_dyn();

		void addBehindGF( ::flixel::FlxBasic obj);
		::Dynamic addBehindGF_dyn();

		void addBehindBF( ::flixel::FlxBasic obj);
		::Dynamic addBehindBF_dyn();

		void addBehindDad( ::flixel::FlxBasic obj);
		::Dynamic addBehindDad_dyn();

		void clearNotesBefore(Float time);
		::Dynamic clearNotesBefore_dyn();

		void updateScore(::hx::Null< bool >  miss);
		::Dynamic updateScore_dyn();

		void setSongTime(Float time);
		::Dynamic setSongTime_dyn();

		void startNextDialogue();
		::Dynamic startNextDialogue_dyn();

		void skipDialogue();
		::Dynamic skipDialogue_dyn();

		int previousFrameTime;
		int lastReportedPlayheadPosition;
		Float songTime;
		void startSong();
		::Dynamic startSong_dyn();

		int debugNum;
		::Array< ::String > noteTypes;
		::Array< ::String > eventsPushed;
		void generateSong(::String dataPath);
		::Dynamic generateSong_dyn();

		void hideshit();
		::Dynamic hideshit_dyn();

		void restoreHUDElements();
		::Dynamic restoreHUDElements_dyn();

		void showonlystrums();
		::Dynamic showonlystrums_dyn();

		void hideHUDFade();
		::Dynamic hideHUDFade_dyn();

		void showHUDFade();
		::Dynamic showHUDFade_dyn();

		void poop();
		::Dynamic poop_dyn();

		void crap();
		::Dynamic crap_dyn();

		void eventPushed( ::Dynamic event);
		::Dynamic eventPushed_dyn();

		void eventPushedUnique( ::Dynamic event);
		::Dynamic eventPushedUnique_dyn();

		Float eventEarlyTrigger( ::Dynamic event);
		::Dynamic eventEarlyTrigger_dyn();

		void makeEvent(::cpp::VirtualArray event,int i);
		::Dynamic makeEvent_dyn();

		int assDelayy;
		bool skipArrowStartTween;
		void generateStaticArrows(int player);
		::Dynamic generateStaticArrows_dyn();

		void openSubState( ::flixel::FlxSubState SubState);

		void closeSubState();

		void onFocus();

		void onFocusLost();

		void resetRPC( ::Dynamic cond);
		::Dynamic resetRPC_dyn();

		void resyncVocals();
		::Dynamic resyncVocals_dyn();

		void restoreTitleWin();
		::Dynamic restoreTitleWin_dyn();

		void refreshTrail(int the);
		::Dynamic refreshTrail_dyn();

		bool paused;
		bool canReset;
		bool startedCountdown;
		bool canPause;
		bool poipInMahPahntsIsGud;
		Float banduJunk;
		bool dadFront;
		bool hasJunked;
		bool wtfThing;
		bool orbit;
		bool badaiTime;
		void update(Float elapsed);

		void openPauseMenu();
		::Dynamic openPauseMenu_dyn();

		void openChartEditor();
		::Dynamic openChartEditor_dyn();

		void openCharacterEditor();
		::Dynamic openCharacterEditor_dyn();

		bool isDead;
		bool doDeathCheck( ::Dynamic skipHealthCheck);
		::Dynamic doDeathCheck_dyn();

		void checkEventNote();
		::Dynamic checkEventNote_dyn();

		void cinematicBars(Float time,Float closeness);
		::Dynamic cinematicBars_dyn();

		void triggerEvent(::String eventName,::String value1,::String value2,Float strumTime);
		::Dynamic triggerEvent_dyn();

		void moveCameraSection();
		::Dynamic moveCameraSection_dyn();

		 ::flixel::tweens::FlxTween cameraTwn;
		void moveCamera(bool isDad);
		::Dynamic moveCamera_dyn();

		void tweenCamIn();
		::Dynamic tweenCamIn_dyn();

		void cameraMoveOnNote(int note,::String character);
		::Dynamic cameraMoveOnNote_dyn();

		void snapCamFollowToPos(Float x,Float y);
		::Dynamic snapCamFollowToPos_dyn();

		void finishSong( ::Dynamic ignoreNoteOffset);
		::Dynamic finishSong_dyn();

		Float sectionStartTime(int section);
		::Dynamic sectionStartTime_dyn();

		bool transitioning;
		bool endSong();
		::Dynamic endSong_dyn();

		 ::objects::AchievementPopup achievementObj;
		void startAchievement(::String achieve);
		::Dynamic startAchievement_dyn();

		void achievementEnd();
		::Dynamic achievementEnd_dyn();

		void KillNotes();
		::Dynamic KillNotes_dyn();

		int totalPlayed;
		Float totalNotesHit;
		bool showCombo;
		bool showComboNum;
		bool showRating;
		 ::flixel::FlxSprite lastRating;
		 ::flixel::FlxSprite lastCombo;
		::Array< ::Dynamic> lastScore;
		void cachePopUpScore();
		::Dynamic cachePopUpScore_dyn();

		void popUpScore( ::objects::Note note);
		::Dynamic popUpScore_dyn();

		::Array< bool > strumsBlocked;
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

		void healthBarShake(Float intensity);
		::Dynamic healthBarShake_dyn();

		void noteMiss( ::objects::Note daNote);
		::Dynamic noteMiss_dyn();

		void noteMissPress(::hx::Null< int >  direction);
		::Dynamic noteMissPress_dyn();

		void noteMissCommon(int direction, ::objects::Note note);
		::Dynamic noteMissCommon_dyn();

		void opponentNoteHit( ::objects::Note note);
		::Dynamic opponentNoteHit_dyn();

		void goodNoteHit( ::objects::Note note);
		::Dynamic goodNoteHit_dyn();

		void spawnNoteSplashOnNote( ::objects::Note note);
		::Dynamic spawnNoteSplashOnNote_dyn();

		void spawnNoteSplash(Float x,Float y,int data, ::objects::Note note);
		::Dynamic spawnNoteSplash_dyn();

		void destroy();

		int lastStepHit;
		void stepHit();

		int lastBeatHit;
		void beatHit();

		void sectionHit();

		bool startLuasNamed(::String luaFile);
		::Dynamic startLuasNamed_dyn();

		bool startHScriptsNamed(::String scriptFile);
		::Dynamic startHScriptsNamed_dyn();

		void initHScript(::String file);
		::Dynamic initHScript_dyn();

		 ::Dynamic callOnScripts(::String funcToCall,::cpp::VirtualArray args,::hx::Null< bool >  ignoreStops,::Array< ::String > exclusions,::cpp::VirtualArray excludeValues);
		::Dynamic callOnScripts_dyn();

		 ::Dynamic callOnLuas(::String funcToCall,::cpp::VirtualArray args,::hx::Null< bool >  ignoreStops,::Array< ::String > exclusions,::cpp::VirtualArray excludeValues);
		::Dynamic callOnLuas_dyn();

		 ::Dynamic callOnHScript(::String funcToCall,::cpp::VirtualArray args, ::Dynamic ignoreStops,::Array< ::String > exclusions,::cpp::VirtualArray excludeValues);
		::Dynamic callOnHScript_dyn();

		void setOnScripts(::String variable, ::Dynamic arg,::Array< ::String > exclusions);
		::Dynamic setOnScripts_dyn();

		void setOnLuas(::String variable, ::Dynamic arg,::Array< ::String > exclusions);
		::Dynamic setOnLuas_dyn();

		void setOnHScript(::String variable, ::Dynamic arg,::Array< ::String > exclusions);
		::Dynamic setOnHScript_dyn();

		void strumPlayAnim(bool isDad,int id,Float time,::hx::Null< bool >  isAlt);
		::Dynamic strumPlayAnim_dyn();

		::String ratingName;
		Float ratingPercent;
		::String ratingFC;
		void RecalculateRating(::hx::Null< bool >  badHit);
		::Dynamic RecalculateRating_dyn();

		void fullComboUpdate();
		::Dynamic fullComboUpdate_dyn();

		::String checkForAchievement(::Array< ::String > achievesToCheck);
		::Dynamic checkForAchievement_dyn();

		 ::haxe::ds::StringMap runtimeShaders;
		 ::flixel::addons::display::FlxRuntimeShader createRuntimeShader(::String name);
		::Dynamic createRuntimeShader_dyn();

		bool initLuaShader(::String name, ::Dynamic glslVersion);
		::Dynamic initLuaShader_dyn();

		void popupWindow();
		::Dynamic popupWindow_dyn();

		void generateWindowSprite();
		::Dynamic generateWindowSprite_dyn();

};

} // end namespace states

#endif /* INCLUDED_states_PlayState */ 
