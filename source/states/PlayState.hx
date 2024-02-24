package states;

// If you want to add your stage to the game, copy states/stages/Template.hx,
// and put your stage code there, then, on PlayState, search for
// "switch (curStage)", and add your stage to that list.

// If you want to code Events, you can either code it on a Stage file or on PlayState, if you're doing the latter, search for:
// "function eventPushed" - Only called *one time* when the game loads, use it for precaching events that use the same assets, no matter the values
// "function eventPushedUnique" - Called one time per event, use it for precaching events that uses different assets based on its values
// "function eventEarlyTrigger" - Used for making your event start a few MILLISECONDS earlier
// "function triggerEvent" - Called when the song hits your event's timestamp, this is probably what you were looking for
	
import flixel.tweens.misc.ColorTween;
import flixel.graphics.frames.FlxFrame;
import flixel.system.debug.Window;
import lime.app.Application;
import openfl.Lib;
import lime.ui.Window;
import openfl.geom.Rectangle;
import openfl.display.Sprite;
import backend.PlatformUtil;
import openfl.geom.Matrix;
import lime.app.Application;
import openfl.filters.BlurFilter;
import psychlua.ModchartSprite;

import backend.Achievements;
import backend.Highscore;
import backend.StageData;
import backend.WeekData;
import backend.Song;
import backend.Section;
import backend.Rating;

import flixel.FlxBasic;
import flixel.FlxObject;
import flixel.FlxSubState;
import flixel.addons.transition.FlxTransitionableState;
import flixel.addons.effects.FlxTrail;
import flixel.addons.effects.FlxTrailArea;
import flixel.math.FlxPoint;
import flixel.util.FlxSort;
import flixel.util.FlxStringUtil;
import flixel.util.FlxSave;
import flixel.ui.FlxBar;
import flixel.input.keyboard.FlxKey;
import flixel.animation.FlxAnimationController;
import lime.utils.Assets;
import openfl.display.BitmapData;
import openfl.utils.Assets as OpenFlAssets;
import openfl.events.KeyboardEvent;
import tjson.TJSON as Json;

import cutscenes.CutsceneHandler;
import cutscenes.DialogueBoxPsych;

import states.StoryMenuState;
import states.FreeplayState;
import states.editors.ChartingState;
import states.editors.CharacterEditorState;

import substates.PauseSubState;
import substates.GameOverSubstate;

#if !flash 
import flixel.addons.display.FlxRuntimeShader;
import openfl.filters.ShaderFilter;
#end

import shaders.Shaders;
import shaders.Shaders.EyesoresEffect;

#if sys
import sys.FileSystem;
import sys.io.File;
#end

#if VIDEOS_ALLOWED 
#if (hxCodec >= "3.0.0") import hxcodec.flixel.FlxVideo as VideoHandler;
#elseif (hxCodec >= "2.6.1") import hxcodec.VideoHandler as VideoHandler;
#elseif (hxCodec == "2.6.0") import VideoHandler;
#else import vlc.MP4Handler as VideoHandler; #end
#end

import objects.Note.EventNote;
import objects.*;
import states.stages.objects.*;

#if LUA_ALLOWED
import psychlua.*;
#else
import psychlua.FunkinLua;
import psychlua.LuaUtils;
import psychlua.HScript;
#end

#if (SScript >= "3.0.0")
import tea.SScript;
#end

class PlayState extends MusicBeatState
{
	public static var STRUM_X = 42;
	public static var STRUM_X_MIDDLESCROLL = -278;

	public static var ratingStuff:Array<Dynamic> = [
		['D', 0.6], //From 0% to 59%
		['C', 0.7], //From 60% to 69%
		['B', 0.8], //From 70% to 79%
		['A', 0.85], //From 80% to 84%
		['A.', 0.9], //From 85% to 89%
		['A:', 0.93], //From 90% to 92%
		['AA', 0.9650], //From 93% to 96.49%
		['AA.', 0.99], //From 96.50% to 98%
		['AA:', 0.9970], //from 99 to 99.69%
		['AAA', 0.9980], //From 99.70% to 99.79%
		['AAA.', 0.9990], //From 99.80 to 99.89%
		['AAA:', 0.99955], //From 99.90% to 99.954%
		['AAAA', 0.99970], //From 99.954% to 99.969%
		['AAAA.', 0.99980], //From 99.970% to 99.979%
		['AAAA:', 0.999935], //From 99.80% to 99.9934%
		['AAAAA', 1], //from 99.9935 to 100%
		['AAAAA', 1] //The value on this one isn't used actually, since Perfect is always "1" // your m
	];

    public static var healthStuff:Array<Dynamic> = [
		['=', 0],
		['!', 0.4],
		['@', 0.8],
		['#', 1.2],
		['$', 1.6],
		['^', 2],
		['&', 2]
	];

	//event variables
	private var isCameraOnForcedPos:Bool = false;

	#if (haxe >= "4.0.0")
	public var boyfriendMap:Map<String, Character> = new Map();
	public var dadMap:Map<String, Character> = new Map();
	public var gfMap:Map<String, Character> = new Map();
	public var player3Map:Map<String, Character> = new Map();
	public var variables:Map<String, Dynamic> = new Map();
	#else
	public var boyfriendMap:Map<String, Character> = new Map<String, Character>();
	public var dadMap:Map<String, Character> = new Map<String, Character>();
	public var gfMap:Map<String, Character> = new Map<String, Character>();
	public var player3Map:Map<String, Character> = new Map<String, Character>();
	public var variables:Map<String, Dynamic> = new Map<String, Dynamic>();
	#end
	
	#if HSCRIPT_ALLOWED
	public var hscriptArray:Array<HScript> = [];
	#end

	#if LUA_ALLOWED
	public var modchartTweens:Map<String, FlxTween> = new Map<String, FlxTween>();
	public var modchartSprites:Map<String, ModchartSprite> = new Map<String, ModchartSprite>();
	public var modchartTimers:Map<String, FlxTimer> = new Map<String, FlxTimer>();
	public var modchartSounds:Map<String, FlxSound> = new Map<String, FlxSound>();
	public var modchartTexts:Map<String, FlxText> = new Map<String, FlxText>();
	public var modchartSaves:Map<String, FlxSave> = new Map<String, FlxSave>();
	#end

	public var BF_X:Float = 770;
	public var BF_Y:Float = 100;
	public var DAD_X:Float = 100;
	public var DAD_Y:Float = 100;
	public var GF_X:Float = 400;
	public var GF_Y:Float = 130;

	public var songSpeedTween:FlxTween;
	public var songSpeedType:String = "multiplicative";
	public var noteKillOffset:Float = 350;

	public var boyfriendGroup:FlxSpriteGroup;
	public var dadGroup:FlxSpriteGroup;
	public var gfGroup:FlxSpriteGroup;
	public var player3Group:FlxSpriteGroup;
	public static var curStage:String = '';
	public static var stageUI:String = "normal";
	public static var isPixelStage(get, never):Bool;

	@:noCompletion
	static function get_isPixelStage():Bool
		return stageUI == "pixel";

	public static var SONG:SwagSong = null;
	public static var isStoryMode:Bool = false;
	public static var storyWeek:Int = 0;
	public static var storyPlaylist:Array<String> = [];
	public static var storyDifficulty:Int = 1;

	public var spawnTime:Float = 2000;

	public var vocals:FlxSound;
	public var inst:FlxSound;

	public var dad:Character = null;
	public var gf:Character = null;
	public var player3:Character = null;
	public var boyfriend:Character = null;

	public var playbackRate(default, set):Float = 1;

	public var songSpeed(default, set):Float = 1;

	public var notes:FlxTypedGroup<Note>;
	public var unspawnNotes:Array<Note> = [];
	public var eventNotes:Array<EventNote> = [];

	//Camera new on note hit
	private var bfCamMovementX:Int = 0;
	private var bfCamMovementY:Int = 0;
	private var dadCamMovementX:Int = 0;
	private var dadCamMovementY:Int = 0;

	public var camFollow:FlxObject;
	private static var prevCamFollow:FlxObject;

	var disableTheTripper:Bool = false;
	var disableTheTripperAt:Int;

	private var shakeCam:Bool = false;
	private var shakeCamALT:Bool = false;

	public var strumLineNotes:FlxTypedGroup<StrumNote>;
	public var opponentStrums:FlxTypedGroup<StrumNote>;
	public var playerStrums:FlxTypedGroup<StrumNote>;
	public var grpNoteSplashes:FlxTypedGroup<NoteSplash>;
	private var altStrumLine:FlxSprite;
	public var altStrumLineNotes:FlxTypedGroup<StrumNote>;
	public var altStrums:FlxTypedGroup<StrumNote>;

	var songWatermark:FlxText;

	public var camZooming:Bool = true;
	public var camZoomingMult:Float = 1;
	public var camZoomingDecay:Float = 1;
	private var curSong:String = "";

	public var gfSpeed:Int = 1;
	public var health:Float = 1;
	public var combo:Int = 0;

	//combo
	var lastMustHit:Bool = false;
    var noteHits:Int = 0;
    var separatedHits:String = "";

	var notesHitArray:Array<Date> = [];

	var songPosition:Float = Conductor.songPosition;

    var noteComboText:FlxText;
    var noteComboNumbers:Array<FlxText> = [];

	var judgementCounter:FlxText;

	var curTime:Float = Math.max(0, Conductor.songPosition);

	public var elapsedtime:Float = 0;

	public var timeelapsed:Float = 0;

	var allNotesMs:Float = 0;
	var averageMs:Float = 0;

	private var badai:Character;
	private var swaggy:Character;
	private var swagBombu:Character;
	private var littleIdiot:Character;

	//reality breaking stuff for shaders lol
	var doneloll:Bool = false;
	var doneloll2:Bool = false;
	var stupidInt:Int = 0;
	var stupidBool:Bool = false;
	//ends here

	// the fuckin sunset filter //
	var colorFilter:BGSprite;

	var shartGrad:FlxSprite;
	var shartLine:FlxSprite;

	var blackScreen:FlxSprite;

	//healthbar
	public var healthBarOverlay:FlxSprite;
	public var healthBar:HealthBar;
	public var healthPercentageDisplay:Float = 50;
	public var healthPercentageBar:Float = 50;
	var fakeHealth:Float = 1; 

	//timebar
	public var timeBar:HealthBar;
	private var updateTime:Bool = true;
	private var updateThePercent:Bool = true;
	var songPercent:Float = 0;
	var songPercentThing:Float = 0;
	var playbackRateDecimal:Float = 0;
	var endingTimeLimit:Int = 20;
	var timePercentTxt:FlxText;

	public var curbg:FlxSprite;
	public var screenshader:PulseEffect;
	public var glitchShader:BlockedGlitchEffect;

	// shit that messes with the camera (mostly for like events like eyesores) //
	private var glitchCam:Bool = false;
	var camZoomSnap:Bool = false;
	var camTilt:Bool = false;
	var goofyZoom:Bool = false;

	var camZoomTween:FlxTween;
	var camTiltTween:FlxTween;

	var charAnimOffsetX:Float = 0;

	public static var eyesoreson = true;

	public var ratingsData:Array<Rating> = Rating.loadDefault();
	public var fullComboFunction:Void->Void = null;

	public var maxNPS:Int = 0;
	public var nps:Int = 0;

	public var totalNotesPlayed:Float = 0;
	public var totalNotesjudgement:Float = 0;
	public var maxCombo:Float = 0;
	public var missCombo:Int = 0;

	var npsCounter:FlxText;
	var maxNpsCounter:FlxText;
	var comboTxt:FlxText;
	var totalNotes:FlxText;
	var misses:FlxText;
	var comboBreaks:FlxText;

	private var strumLine:FlxSprite;

	public var camZoomSpeed:Float = 0.95;
	public var hudZoomSpeed:Float = 0.95;
	var czspeedDefault:Float = 0;

	private var generatedMusic:Bool = false;
	public var endingSong:Bool = false;
	public var startingSong:Bool = false;
	public static var changedDifficulty:Bool = false;
	public static var chartingMode:Bool = false;

	var whiteflash:FlxSprite;
	var redGlow:FlxSprite;

	public var elapsedexpungedtime:Float = 0;

	public static var characteroverride:String = "none";
	public static var formoverride:String = null;
	
	var noteCharacters2:Array<String> = ['bambi-mad-guitar'];
	var noteCharacters:Array<String> = ['bambi-god-2','bombu-v2','bambi-3d','bombai-v2','god-expunged-1-new','dave-3d', 'bambi-3d', 'baiburg', 'crusturn', 'god-expunged-1', 'bambi-unfair', 'expunged', 'bambi-piss-3d', 'bambi-scaryooo', 'hell-1', 'hell-2', 'bambi-hell', 'bombu', 'bombai', 'crimson-dave', 'crimson-bambi', 'gary', 'bamburg', 'bamburg-player', '404','404-old'];
	
	var funnyFloatyBoys:Array<String> = ['bambi-god-2','bombu-v2','bombai-v2','bambi-3d','god-expunged-1-new','dave-3d', 'bambi-3d', 'baiburg', 'crusturn', 'god-expunged-1', 'bambi-unfair', 'expunged', 'bambi-piss-3d', 'bambi-scaryooo', 'hell-1', 'hell-2', 'bambi-god2d', 'bambi-god-2-24fps', 'bambi-hell', 'bombu', 'bombai', 'crimson-dave', 'crimson-bambi', 'gary', 'bamburg', 'bamburg-player', '404','404-old'];
	var funnySideFloatyBoys:Array<String> = ['bambi-god-2','bombai-v2','bambi-3d','bombu-v2','bombu', 'god-expunged-1-new','god-expunged-1', 'bombai'];
	var funnyRotatorBoys:Array<String> = ['bombu-v2','bombai-v2','god-expunged-1-new','hell-2', 'god-expunged-1'];
	var canSlide:Bool = true;
	var canFloat:Bool = true;
	var canRotate:Bool = true;

	// some stuff for icons //
	var dnbBounce:Bool = true;
	var ogBounce:Bool = false;

	// for camZoomSnap //
	var camBopVAL:Float = 0.015; //camGame
	var camHUDBopVAL:Float = 0.05; //camHUD

	// for the regular camera zoom //
	var ogCamBopVAL:Float = 0.015; //camGame
	var ogCamHUDBopVAL:Float = 0.03; //camHUD

	// rsod bullshit //
	var rsod:FlxSprite;
	var notResponding:FlxSprite;
	var laggingRSOD:Bool = false;

	// shit for upheaval!!1 //
	var uphIntroTime:Bool = false;
	var fakenotes:FlxSprite;

	private var cameraOnDad:Bool = false;
	private var cameraOnBF:Bool = false;

	// stuff for the stages !! //
	var bg:DepthSprite;
	var hills:DepthSprite;
	var gate:DepthSprite;
	var grass:DepthSprite;
	var house:DepthSprite;
	var grill:DepthSprite;
	var farm:DepthSprite;
	var pcworld:FlxSprite;
	var burger:FlxSprite;

	var ourple:DepthSprite;
	var phones:DepthSprite;

	var gridBG:FlxSprite;
	var gridSine:Float = 0;
	var bgshitH:DepthSprite;
	var bgshitH2:DepthSprite;
	var cloudsH:BGSprite;
	var bgrsod:FlxSprite;
	var banbodeez:FlxSprite;

	var olddavesky:FlxSprite;
	var olddaveGrass:FlxSprite;
	var olddaveGate:FlxSprite;
	var olddaveHills:FlxSprite;

	public static var window:Window;
	var expungedScroll = new Sprite();
	var expungedSpr = new Sprite();
	var windowProperties:Array<Dynamic> = new Array<Dynamic>();
	var expungedWindowMode:Bool = false;
	var expungedOffset:FlxPoint = new FlxPoint();
	var expungedMoving:Bool = true;
	var lastFrame:FlxFrame;

	public var ExpungedWindowCenterPos:FlxPoint = new FlxPoint(0,0);

	private var windowSteadyX:Float;

	var expungedBG:BGSprite;
	public static var scrollType:String;
	var preDadPos:FlxPoint = new FlxPoint();

	var glow:BGSprite;

		// shit for events
	var allowGamecamToZoom:Bool = true;
	var allowHUDcamToZoom:Bool = true;

	var camGameTween:FlxTween;
	var penisTimer:FlxTimer;
	var doingSMzoom:Bool = false;

	var dramaticbnwTime:Bool = false;
	var whiteScreenEvents:FlxSprite;

	public var zoomAdd:Float = 0;
	public var autoZoom:Bool = true;

	var realityShader = true;

	// trails!!1 //
	var evilTrail:FlxTrail;
	var scaryTrail:FlxTrail;
	var playerTrail:FlxTrail;
			
	var bounce:Float = 1.05;
	var bounce2:Float = 1.15;

	public var defaultCamZoom:Float = 1.05;
	public var defaultHUDZoom:Float = 1;
	var ogDefaultCamZoom:Float = 1;

	var showTime:Bool = (ClientPrefs.data.timeBarType != 'Disabled');

	private var daspinlmao:Bool = false;
	private var daleftspinlmao:Bool = false;

	//shaders
	public var shaderUpdates:Array<Float->Void> = [];
	public var camGameShaders:Array<Dynamic> = [];
	public var camHUDShaders:Array<Dynamic> = [];
	public var camOtherShaders:Array<Dynamic> = [];

	public var theoreticalSongScore:Int = 0;
	var camTween:FlxTween;

	//Gameplay settings
	public var healthGain:Float = 1;
	public var healthLoss:Float = 1;
	public var instakillOnMiss:Bool = false;
	public var cpuControlled:Bool = false;
	public var practiceMode:Bool = false;
	var trollingMode:Bool = false;

	public var botplaySine:Float = 0;
	public var botplayTxt:FlxText;

	//icon bop
	var dancingLeft:Bool = false;
	var sbEngineIconBounce:Bool = true;

	var gfNoteCamOffset:Array<Float> = new Array<Float>();
	var bfNoteCamOffset:Array<Float> = new Array<Float>();
	var dadNoteCamOffset:Array<Float> = new Array<Float>();

	public var iconP1:HealthIcon;
	public var iconP2:HealthIcon;

	var blurNotes:BlurFilter;

	public var camHUD:FlxCamera;
	public var camGame:FlxCamera;
	public var camOther:FlxCamera;
	public var camTransition:FlxCamera;
	public var camNOTES:FlxCamera;
	public var camSus:FlxCamera;
	public var cameraSpeed:Float = 1;

	var wiggleShit:WiggleEffect = new WiggleEffect();
	var susWiggle:ShaderFilter;
	var googlechrom:DoChromaticAberrationEffect = new DoChromaticAberrationEffect();
	public var shader_chromatic_abberation:ChromaticAberrationEffect;
	public var grain_shader:GrainEffect;
	var heath:HeatEffect;
	var bloom:BloomEffect;
	var grain:GrainEffect;

	public var songScore:Int = 0;
	public var songHits:Int = 0;
	public var songMisses:Int = 0;
	public var scoreTxt:FlxText;
	var timeTxt:FlxText;
	var scoreTxtTween:FlxTween;

	var tweenTime:Float;

	var waoscolorshatt:Bool = true;

	public static var campaignScore:Int = 0;
	public static var campaignMisses:Int = 0;
	public static var seenCutscene:Bool = false;
	public static var deathCounter:Int = 0;

	// how big to stretch the pixel art assets
	public static var daPixelZoom:Float = 6;
	private var singAnimations:Array<String> = ['singLEFT', 'singDOWN', 'singUP', 'singRIGHT'];

	public var inCutscene:Bool = false;
	public var skipCountdown:Bool = false;
	var songLength:Float = 0;

	public var boyfriendCameraOffset:Array<Float> = null;
	public var opponentCameraOffset:Array<Float> = null;
	public var girlfriendCameraOffset:Array<Float> = null;

	public var creditsPopup:CreditsPopUp;

	#if desktop
	// Discord RPC variables
	var storyDifficultyText:String = "";
	var detailsText:String = "";
	var detailsPausedText:String = "";
	#end

	//Achievement shit
	var keysPressed:Array<Int> = [];
	var boyfriendIdleTime:Float = 0.0;
	var boyfriendIdled:Bool = false;

	var tutorialTxt:FlxText;

	// Lua shit
	public static var instance:PlayState;
	public var luaArray:Array<FunkinLua> = [];
	#if LUA_ALLOWED
	private var luaDebugGroup:FlxTypedGroup<DebugLuaText>;
	#end
	public var introSoundsSuffix:String = '';

	// Less laggy controls
	private var keysArray:Array<String>;

	public var precacheList:Map<String, String> = new Map<String, String>();
	public var songName:String;

	// Callbacks for stages
	public var startCallback:Void->Void = null;
	public var endCallback:Void->Void = null;

	override public function create()
	{
		//trace('Playback Rate: ' + playbackRate);
		Paths.clearStoredMemory();

		startCallback = startCountdown;
		endCallback = endSong;

		// for lua
		instance = this;

		PauseSubState.songName = null; //Reset to default
		playbackRate = ClientPrefs.getGameplaySetting('songspeed');
		fullComboFunction = fullComboUpdate;

		keysArray = [
			'note_left',
			'note_down',
			'note_up',
			'note_right'
		];

		shader_chromatic_abberation = new ChromaticAberrationEffect(0.0075); // i think this one was from psych itself?
		grain_shader = new GrainEffect();
		grain = new GrainEffect();
		bloom = new BloomEffect();
		heath = new HeatEffect(1.0);

		var filterSUSnotes:Array<BitmapFilter> = [];
		var filtersnotes:Array<BitmapFilter> = [];

		var perfect:Int = ratingsData[0].hits;
		var sicks:Int = ratingsData[1].hits;
		var goods:Int = ratingsData[2].hits;
		var bads:Int = ratingsData[3].hits;
		var shits:Int = ratingsData[4].hits;

		if (FlxG.sound.music != null)
			FlxG.sound.music.stop();

		// Gameplay settings
		healthGain = ClientPrefs.getGameplaySetting('healthgain');
		healthLoss = ClientPrefs.getGameplaySetting('healthloss');
		instakillOnMiss = ClientPrefs.getGameplaySetting('instakill');
		practiceMode = ClientPrefs.getGameplaySetting('practice');
		cpuControlled = ClientPrefs.getGameplaySetting('botplay');

		camGame = new FlxCamera();
		camNOTES = new FlxCamera();
		camSus = new FlxCamera();
		camHUD = new FlxCamera();
		camOther = new FlxCamera();
		camHUD.bgColor.alpha = 0;
		camOther.bgColor.alpha = 0;
		camNOTES.bgColor = 0;
		camSus.bgColor.alpha = 0;

		perfect = ratingsData[0].hits;
		sicks = ratingsData[1].hits;
		goods = ratingsData[2].hits;
		bads = ratingsData[3].hits;
		shits = ratingsData[4].hits;

		blurNotes = new BlurFilter(0, 2, 15);

		FlxG.cameras.reset(camGame);
		FlxG.cameras.add(camSus,false);
		FlxG.cameras.add(camNOTES,false);
		FlxG.cameras.add(camHUD, false);
		FlxG.cameras.add(camOther, false);

		camNOTES.setFilters(filtersnotes); 
        camNOTES.filtersEnabled = true;

		grpNoteSplashes = new FlxTypedGroup<NoteSplash>();

		FlxG.cameras.setDefaultDrawTarget(camGame, true);
		CustomFadeTransition.nextCamera = camOther;

		persistentUpdate = true;
		persistentDraw = true;

		if (SONG == null)
			SONG = Song.loadFromJson('tutorial');

		Conductor.mapBPMChanges(SONG);
		Conductor.bpm = SONG.bpm;

		#if desktop
		storyDifficultyText = Difficulty.getString();

		// String that contains the mode defined here so it isn't necessary to call changePresence for each mode
		if (isStoryMode)
			detailsText = "Story Mode: ";
		else
			detailsText = "Freeplay";

		// String for when the game is paused
		detailsPausedText = "Paused - " + detailsText;
		#end

		GameOverSubstate.resetVariables();
		songName = Paths.formatToSongPath(SONG.song);
		curStage = SONG.stage;

		var stageData:StageFile = StageData.getStageFile(curStage);
		if(stageData == null) { //Stage couldn't be found, create a dummy stage for preventing a crash
			stageData = StageData.dummy();
		}

		defaultCamZoom = stageData.defaultZoom;

		stageUI = "normal";
		if (stageData.stageUI != null && stageData.stageUI.trim().length > 0)
			stageUI = stageData.stageUI;
		else {
			if (stageData.isPixelStage)
				stageUI = "pixel";
		}
		
		BF_X = stageData.boyfriend[0];
		BF_Y = stageData.boyfriend[1];
		GF_X = stageData.girlfriend[0];
		GF_Y = stageData.girlfriend[1];
		DAD_X = stageData.opponent[0];
		DAD_Y = stageData.opponent[1];

		if(stageData.camera_speed != null)
			cameraSpeed = stageData.camera_speed;

		boyfriendCameraOffset = stageData.camera_boyfriend;
		if(boyfriendCameraOffset == null) //Fucks sake should have done it since the start :rolling_eyes:
			boyfriendCameraOffset = [0, 0];

		opponentCameraOffset = stageData.camera_opponent;
		if(opponentCameraOffset == null)
			opponentCameraOffset = [0, 0];

		girlfriendCameraOffset = stageData.camera_girlfriend;
		if(girlfriendCameraOffset == null)
			girlfriendCameraOffset = [0, 0];

		boyfriendGroup = new FlxSpriteGroup(BF_X, BF_Y);
		dadGroup = new FlxSpriteGroup(DAD_X, DAD_Y);
		gfGroup = new FlxSpriteGroup(GF_X, GF_Y);
		player3Group = new FlxSpriteGroup(DAD_X-180, DAD_Y);

		var gfShadow:BGSprite = new BGSprite('StagesBP/ui/shadow', 0, GF_Y+590, 1, 1);
		gfShadow.visible = false;
		gfShadow.alpha = 0.4;
		gfShadow.blend = MULTIPLY;
		gfShadow.scale.set(1.85,1);
		add(gfShadow);

		var boyfriendShadow:BGSprite = new BGSprite('StagesBP/ui/shadow', 0, BF_Y+690, 1, 1);
		boyfriendShadow.visible = false;
		boyfriendShadow.alpha = 0.4;
		boyfriendShadow.blend = MULTIPLY;
		add(boyfriendShadow);

		var dadShadow:BGSprite = new BGSprite('StagesBP/ui/shadow', 0, DAD_Y+690, 1, 1);
		dadShadow.visible = false;
		dadShadow.alpha = 0.4;
		dadShadow.blend = MULTIPLY;
		add(dadShadow);

		if (ClientPrefs.data.blur)
		{
			filtersnotes.push(blurNotes); // blur :D - PurSnake
			filterSUSnotes.push(blurNotes);
		}
		if (ClientPrefs.data.eyesores)
		{
			screenshader = new PulseEffect();
			screenshader.waveAmplitude = 1;
			screenshader.waveFrequency = 2;
			screenshader.waveSpeed = 1;
			screenshader.shader.uTime.value[0] = new flixel.math.FlxRandom().float(-100000, 100000);
			
			FlxG.camera.setFilters([new ShaderFilter(screenshader.shader)]);
		}
		if (ClientPrefs.data.wiggle)
			{				
				var strumLineX:Float = ClientPrefs.data.middleScroll ? STRUM_X_MIDDLESCROLL : STRUM_X;
				var strumLineY:Float = ClientPrefs.data.downScroll ? (FlxG.height - 150) : 50;

				wiggleShit.waveAmplitude = 0.07;
				wiggleShit.effectType = WiggleEffectType.DREAMY;
				wiggleShit.waveFrequency = 0;
				wiggleShit.waveSpeed = 1.8; // fasto
				wiggleShit.shader.uTime.value = [(strumLineY - Note.swagWidth * 4) / FlxG.height]; // from 4mbr0s3 2
				susWiggle = new ShaderFilter(wiggleShit.shader);

				camSus.setFilters(filterSUSnotes); 
				camSus.filtersEnabled = true;

				filterSUSnotes.push(susWiggle); // only enable it for snake notes
			}
		if (ClientPrefs.data.blockedGlitch)
			{
				glitchShader = new BlockedGlitchEffect();
				camHUD.setFilters([new ShaderFilter(glitchShader.shader)]); 
			}

		switch (curStage)
			{
				case 'stage': //Week 1
				var bg:BGSprite = new BGSprite('StagesBP/stage/stageback', -600, -200, 0.9, 0.9);
				add(bg);

				var stageFront:BGSprite = new BGSprite('StagesBP/stage/stagefront', -650, 600, 0.9, 0.9);
				stageFront.setGraphicSize(Std.int(stageFront.width * 1.1));
				stageFront.updateHitbox();
				add(stageFront);
				if(!ClientPrefs.data.lowQuality) {
					var stageLight:BGSprite = new BGSprite('StagesBP/stage/stage_light', -125, -100, 0.9, 0.9);
					stageLight.setGraphicSize(Std.int(stageLight.width * 1.1));
					stageLight.updateHitbox();
					add(stageLight);
					var stageLight:BGSprite = new BGSprite('StagesBP/stage/stage_light', 1225, -100, 0.9, 0.9);
					stageLight.setGraphicSize(Std.int(stageLight.width * 1.1));
					stageLight.updateHitbox();
					stageLight.flipX = true;
					add(stageLight);

					var stageCurtains:BGSprite = new BGSprite('StagesBP/stage/stagecurtains', -500, -300, 1.3, 1.3);
					stageCurtains.setGraphicSize(Std.int(stageCurtains.width * 0.9));
					stageCurtains.updateHitbox();
					add(stageCurtains);
				}

				case 'houseDay': //Dave Week
				bg = new DepthSprite('StagesBP/sky', -600, -200, 0.2, 0.2);
				bg.depth = 0.2;
				add(bg); 
	
				hills = new DepthSprite('StagesBP/hills', -225, -125, 0.5, 0.5);
				hills.depth = 0.5;
				hills.defaultScale = 1.3;
				hills.setGraphicSize(Std.int(hills.width * 1.25));
				hills.updateHitbox();
				add(hills);
	
				gate = new DepthSprite('StagesBP/gate', -226, -125, 0.9, 0.9);
				gate.depth = 1;
				gate.defaultScale = 1.3;
				gate.setGraphicSize(Std.int(gate.width * 1.2));
				gate.updateHitbox();
				add(gate);
	
				grass = new DepthSprite('dave/grass', -225, -125, 0.9, 0.9);
				grass.depth = 1;
				grass.defaultScale = 1.3;
				grass.setGraphicSize(Std.int(grass.width * 1.2));
				grass.updateHitbox();
				add(grass);
	
			case 'houseSunset': //Dave Week
				bg = new DepthSprite('dave/sky_sunset', -600, -200, 0.2, 0.2);
				bg.depth = 0.2;
				add(bg);
	
				hills = new DepthSprite('StagesBP/dave/hills', -225, -125, 0.6, 0.6);
				hills.depth = 0.5;
				hills.defaultScale = 1;
				hills.setGraphicSize(Std.int(hills.width * 1.25));
				hills.updateHitbox();
				add(hills);
	
				grass = new DepthSprite('StagesBP/dave/supergrass', -1200, 175, 1, 1); // negative means left
				grass.depth = 1;
				grass.defaultScale = 1;
				grass.setGraphicSize(Std.int(grass.width * 1.2));
				grass.updateHitbox();
				add(grass);
	
				gate = new DepthSprite('StagesBP/dave/gates', -275, -50, 1, 1);
				gate.depth = 1;
				gate.defaultScale = 1;
				gate.setGraphicSize(Std.int(gate.width * 1.2));
				gate.updateHitbox();
				add(gate);
	
				house = new DepthSprite('StagesBP/dave/house', -900, -85, 1, 1); // negative means up
				house.depth = 1;
				house.defaultScale = 1;
				house.setGraphicSize(Std.int(house.width * 0.8));
				house.updateHitbox();
				add(house);
	
				grill = new DepthSprite('StagesBP/dave/grill', -500, 650, 1, 1);
				grill.depth = 1;
				grill.defaultScale = 1;
				grill.setGraphicSize(Std.int(grill.width * 0.8));
				grill.updateHitbox();
				add(grill);
	
				colorFilter = new BGSprite(null, -800, -400, 0, 0);
				colorFilter.makeGraphic(Std.int(FlxG.width * 2), Std.int(FlxG.height * 2), 0xFFFF8FB2);
				colorFilter.blend = MULTIPLY;
	
			case 'houseNight': //Dave Week
				bg = new DepthSprite('StagesBP/farmnight-old/sky_night', -600, -200, 0.2, 0.2);
				bg.depth = 0.2;
				add(bg);
	
				hills = new DepthSprite('StagesBP/dave/hills', -225, -125, 0.6, 0.6);
				hills.depth = 0.5;
				hills.defaultScale = 1;
				hills.setGraphicSize(Std.int(hills.width * 1.25));
				hills.updateHitbox();
				add(hills);
	
				grass = new DepthSprite('StagesBP/dave/supergrass', -1200, 175, 1, 1); // negative means left
				grass.depth = 1;
				grass.defaultScale = 1;
				grass.setGraphicSize(Std.int(grass.width * 1.2));
				grass.updateHitbox();
				add(grass);
	
				gate = new DepthSprite('StagesBP/dave/gates', -275, -50, 1, 1);
				gate.depth = 1;
				gate.defaultScale = 1;
				gate.setGraphicSize(Std.int(gate.width * 1.2));
				gate.updateHitbox();
				add(gate);
	
				house = new DepthSprite('StagesBP/dave/house', -900, -85, 1, 1); // negative means up
				house.depth = 1;
				house.defaultScale = 1;
				house.setGraphicSize(Std.int(house.width * 0.8));
				house.updateHitbox();
				add(house);
	
				grill = new DepthSprite('StagesBP/dave/grill', -500, 650, 1, 1);
				grill.depth = 1;
				grill.defaultScale = 1;
				grill.setGraphicSize(Std.int(grill.width * 0.8));
				grill.updateHitbox();
				add(grill);
	
				
				colorFilter = new BGSprite(null, -800, -400, 0, 0);
				colorFilter.makeGraphic(Std.int(FlxG.width * 2), Std.int(FlxG.height * 2), 0xFF878787);
				colorFilter.blend = MULTIPLY;
	
			case 'backyard': //Dave's Rematch Week
				bg = new DepthSprite('StagesBP/dave/Sky', -600, -200, 0.2, 0.2);
				bg.depth = 0.2;
				add(bg);
	
				hills = new DepthSprite('StagesBP/dave/hills', -225, -125, 0.6, 0.6);
				hills.depth = 0.5;
				hills.defaultScale = 1;
				hills.setGraphicSize(Std.int(hills.width * 1.25));
				hills.updateHitbox();
				add(hills);
	
				grass = new DepthSprite('StagesBP/dave/supergrass', -1200, 175, 1, 1); // negative means left
				grass.depth = 1;
				grass.defaultScale = 1;
				grass.setGraphicSize(Std.int(grass.width * 1.2));
				grass.updateHitbox();
				add(grass);
	
				gate = new DepthSprite('StagesBP/dave/gates', -275, -50, 1, 1);
				gate.depth = 1;
				gate.defaultScale = 1;
				gate.setGraphicSize(Std.int(gate.width * 1.2));
				gate.updateHitbox();
				add(gate);
	
				house = new DepthSprite('StagesBP/dave/house', -900, -85, 1, 1); // negative means up
				house.depth = 1;
				house.defaultScale = 1;
				house.setGraphicSize(Std.int(house.width * 0.8));
				house.updateHitbox();
				add(house);
	
				grill = new DepthSprite('StagesBP/dave/grill', -500, 650, 1, 1);
				grill.depth = 1;
				grill.defaultScale = 1;
				grill.setGraphicSize(Std.int(grill.width * 0.8));
				grill.updateHitbox();
				add(grill);
	
			case 'inside-house':
				var bg:BGSprite = new BGSprite('StagesBP/dave/inside_house', -1000, -350, 1, 1);
				add(bg);
	
			case '3dGreen':
				{
					defaultCamZoom = 0.85;
					curStage = '3dGreen';
					var bg:FlxSprite = new FlxSprite(-600, -400).loadGraphic(Paths.image('StagesBP/Expunged/Cheating'));
					bg.antialiasing = true;
					bg.scrollFactor.set(0.6, 0.6);
					bg.active = true;

					if(ClientPrefs.data.bgGlitch)
						{
							var testshader:shaders.Shaders.GlitchEffect = new shaders.Shaders.GlitchEffect();
							testshader.waveAmplitude = 0.1;
							testshader.waveFrequency = 5;
							testshader.waveSpeed = 2;
							bg.shader = testshader.shader;
							curbg = bg;
						}
	
					add(bg);
				}
			case 'farmDay':
				{
					defaultCamZoom = 0.85;
					curStage = 'farmDay';
	
					bg = new DepthSprite('StagesBP/farmnight-old/sky', -600, -200, 0.2, 0.2);
					bg.depth = 0;
					add(bg);
	
					hills = new DepthSprite('StagesBP/farmnight-old/orangey hills', -300, 110, 0.35, 0.35);
					hills.depth = 0.25;
					add(hills);
	
					farm = new DepthSprite('StagesBP/farmnight-old/funfarmhouse', 150, 200, 0.65, 0.65);
					farm.depth = 0.6;
					add(farm);
	
					var foreground:FlxSprite = new FlxSprite(-400, 600).loadGraphic(Paths.image('StagesBP/farmnight-old/grass lands'));
					foreground.antialiasing = true;
					foreground.scrollFactor.set(1, 1);
					foreground.active = true;
	
					var cornSet:FlxSprite = new FlxSprite(-350, 325).loadGraphic(Paths.image('StagesBP/farmnight-old/Cornys'));
					cornSet.antialiasing = true;
					cornSet.scrollFactor.set(1, 1);
					cornSet.active = true;
	
					var cornSet2:FlxSprite = new FlxSprite(1050, 325).loadGraphic(Paths.image('StagesBP/farmnight-old/Cornys'));
					cornSet2.antialiasing = true;
					cornSet2.scrollFactor.set(1, 1);
					cornSet2.active = true;
	
					var fence:FlxSprite = new FlxSprite(-350, 450).loadGraphic(Paths.image('StagesBP/farmnight-old/crazy fences'));
					fence.antialiasing = true;
					fence.scrollFactor.set(0.98, 0.98);
					fence.active = true;
	
					var sign:FlxSprite = new FlxSprite(0, 500).loadGraphic(Paths.image('StagesBP/farmnight-old/sign'));
					sign.antialiasing = true;
					sign.scrollFactor.set(1, 1);
					sign.active = true;
	
					add(bg);
					add(hills);
					add(farm);
					add(foreground);
					add(cornSet);
					add(cornSet2);
					add(fence);
					add(sign);
				}
	
			case 'farmSunset':
				{
					defaultCamZoom = 0.8;
					curStage = 'farmSunset';

					var sky:BGSprite = new BGSprite('StagesBP/farmsunset/sky_evening', -200, -300, 0, 0);
					add(sky);
					sky.alpha = 1;
	
					var hills:BGSprite = new BGSprite('StagesBP/farmsunset/hills', -1500, -1600, 0.2, 0.2);
					hills.scale.set(0.5,0.5);
					add(hills);
	
					var farm:BGSprite = new BGSprite('StagesBP/farmsunset/farm', -1300, -1500, 0.65, 0.65);
					farm.scale.set(0.6,0.6);
					add(farm);
	
					var foreground:BGSprite = new BGSprite('StagesBP/farmsunset/foreground', -1350, -1550, 1, 1);
					foreground.scale.set(0.75,0.75);
					add(foreground);
	
					colorFilter = new BGSprite(null, -800, -400, 0, 0);
					colorFilter.makeGraphic(Std.int(FlxG.width * 2), Std.int(FlxG.height * 2), 0xFFFF8FB2);
					colorFilter.blend = MULTIPLY;
				}
			case 'farmNight':
				{
					defaultCamZoom = 0.8;
					curStage = 'farmNight';

					if (SONG.song.toLowerCase() == 'reality breaking')
						{
							if (realityShader){
								camGame.setFilters([new ShaderFilter(googlechrom.shader),new ShaderFilter(heath.shader),new ShaderFilter(bloom.shader)]);	
								bloom.effect = 5;
								bloom.strength = 0;
								bloom.contrast = 1;
								bloom.brightness = 0;
								googlechrom.set_offset(0.002);
							}
						}

					var sky:BGSprite = new BGSprite('StagesBP/farmnight/skye_gapple_reference', -1500, -1200, 0, 0);
					sky.scale.set(0.5,0.5);
					add(sky);
	
					var hills:BGSprite = new BGSprite('StagesBP/farmnight/hills', -1500, -1600, 0.2, 0.2);
					hills.scale.set(0.5,0.5);
					add(hills);
	
					var farm:BGSprite = new BGSprite('StagesBP/farmnight/farm', -1300, -1500, 0.65, 0.65);
					farm.scale.set(0.6,0.6);
					add(farm);
	
					var foreground:BGSprite = new BGSprite('StagesBP/farmnight/foreground', -1350, -1550, 1, 1);
					foreground.scale.set(0.75,0.75);
					add(foreground);
				}
			case 'bobuRsod':
					defaultCamZoom = 0.755;
					curStage = 'bobuRsod';
	
					bgrsod = new FlxSprite(-600, -200).loadGraphic(Paths.image('StagesBP/bombu/rsod/KERNEL_DATA_INPAGE_ERROR'));
					bgrsod.antialiasing = false;
					bgrsod.scrollFactor.set(0.6, 0.6);
					bgrsod.screenCenter(X);
					bgrsod.active = true;
					bgrsod.scale.set(1.75, 1.75);
					add(bgrsod);
	
					if(ClientPrefs.data.bgGlitch)
					{
						var testshader:shaders.Shaders.GlitchEffect = new shaders.Shaders.GlitchEffect();
						testshader.waveAmplitude = 0.1;
						testshader.waveFrequency = 5;
						testshader.waveSpeed = 2;
						bgrsod.shader = testshader.shader;
						curbg = bgrsod;
					}
			case 'cataclysmic':
					defaultCamZoom = 0.755;
					curStage = 'cataclysmic';
	
					var Cataclysmic = new FlxSprite(-600, -200).loadGraphic(Paths.image('StagesBP/Expunged/Cataclysmic'));
					Cataclysmic.antialiasing = false;
					Cataclysmic.scrollFactor.set(0.6, 0.6);
					Cataclysmic.screenCenter(X);
					Cataclysmic.active = true;
					Cataclysmic.scale.set(1.75, 1.75);
					add(Cataclysmic);
	
					if(ClientPrefs.data.bgGlitch)
					{
						var testshader:shaders.Shaders.GlitchEffect = new shaders.Shaders.GlitchEffect();
						testshader.waveAmplitude = 0.1;
						testshader.waveFrequency = 5;
						testshader.waveSpeed = 2;
						Cataclysmic.shader = testshader.shader;
						curbg = Cataclysmic;
					}
			case 'pcworld':
					defaultCamZoom = 0.755;
					curStage = 'pcworld';
	
					pcworld = new FlxSprite(-600, -200).loadGraphic(Paths.image('StagesBP/bombu/pcworld'));
					pcworld.antialiasing = false;
					pcworld.scrollFactor.set(0.6, 0.6);
					pcworld.screenCenter(X);
					pcworld.active = true;
					pcworld.scale.set(1.75, 1.75);
					add(pcworld);
	
					if(ClientPrefs.data.bgGlitch)
					{
						var testshader:shaders.Shaders.GlitchEffect = new shaders.Shaders.GlitchEffect();
						testshader.waveAmplitude = 0.1;
						testshader.waveFrequency = 5;
						testshader.waveSpeed = 2;
						pcworld.shader = testshader.shader;
						curbg = pcworld;
					}
	
				case 'burger':
					defaultCamZoom = 0.755;
					curStage = 'burger';
	
					burger = new FlxSprite(-600, -200).loadGraphic(Paths.image('StagesBP/bamburg/hamburger'));
					burger.antialiasing = false;
					burger.scrollFactor.set(0.6, 0.6);
					burger.screenCenter(X);
					burger.active = true;
					burger.scale.set(1.75, 1.75);
					add(burger);
	
					if(ClientPrefs.data.bgGlitch)
					{
						var testshader:shaders.Shaders.GlitchEffect = new shaders.Shaders.GlitchEffect();
						testshader.waveAmplitude = 0.1;
						testshader.waveFrequency = 5;
						testshader.waveSpeed = 2;
						burger.shader = testshader.shader;
						curbg = burger;
					}
				case 'pizza':
					defaultCamZoom = 0.755;
					curStage = 'pizza';
	
					var pizza = new FlxSprite(-600, -200).loadGraphic(Paths.image('StagesBP/crusti/pizza'));
					pizza.antialiasing = false;
					pizza.scrollFactor.set(0.6, 0.6);
					pizza.screenCenter(X);
					pizza.active = true;
					pizza.scale.set(1.75, 1.75);
					add(pizza);
	
					if(ClientPrefs.data.bgGlitch)
					{
						var testshader:shaders.Shaders.GlitchEffect = new shaders.Shaders.GlitchEffect();
						testshader.waveAmplitude = 0.1;
						testshader.waveFrequency = 5;
						testshader.waveSpeed = 2;
						pizza.shader = testshader.shader;
						curbg = pizza;
					}
	
				case 'ourple':
					defaultCamZoom = 0.65;
					zoomAdd = 0.1;
					curStage = 'ourple';
	
					ourple = new DepthSprite('StagesBP/poipman/poipBG', -1500, -800, 0.2, 0.2);
					ourple.antialiasing = true;
					ourple.depth = 0.2;
					ourple.defaultScale = 0.65;
					ourple.screenCenter();
					ourple.active = true;
					add(ourple);
	
					if(ClientPrefs.data.bgGlitch)
					{
						var testshader:shaders.Shaders.GlitchEffect = new shaders.Shaders.GlitchEffect();
						testshader.waveAmplitude = 0.01;
						testshader.waveFrequency = 5;
						testshader.waveSpeed = 2;
						ourple.shader = testshader.shader;
						curbg = ourple;
					}
	
					phones = new DepthSprite('StagesBP/poipman/phones', -1500, -300, 0.6, 0.6);
					phones.antialiasing = false;
					phones.depth = 0.6;
					phones.screenCenter(X);
					phones.x -= 100;
					phones.active = true;
					add(phones);
	
				case 'double':
					defaultCamZoom = 0.65;
					zoomAdd = 0.1;
					curStage = 'double';
	
					ourple = new DepthSprite('StagesBP/poipman/POPI_AND_CRUSTI_OMGGGGG', -1500, -800, 0.2, 0.2);
					ourple.antialiasing = true;
					ourple.depth = 0.2;
					ourple.defaultScale = 0.65;
					ourple.screenCenter();
					ourple.active = true;
					add(ourple);
	
					if(ClientPrefs.data.bgGlitch)
					{
						var testshader:shaders.Shaders.GlitchEffect = new shaders.Shaders.GlitchEffect();
						testshader.waveAmplitude = 0.01;
						testshader.waveFrequency = 5;
						testshader.waveSpeed = 2;
						ourple.shader = testshader.shader;
						curbg = ourple;
					}
	
					phones = new DepthSprite('StagesBP/poipman/UWU', -1500, -300, 0.6, 0.6);
					phones.antialiasing = false;
					phones.depth = 0.6;
					phones.screenCenter(X);
					phones.x -= 100;
					phones.active = true;
					add(phones);
	
				case 'scaryAnnihilate':
					defaultCamZoom = 0.755;
					curStage = 'scaryAnnihilate';
	
					banbodeez = new FlxSprite(-600, 0).loadGraphic(Paths.image('StagesBP/banbodi/annihilate'));
					banbodeez.antialiasing = false;
					banbodeez.scrollFactor.set(0.6, 0.6);
					banbodeez.screenCenter(X);
					banbodeez.active = true;
					banbodeez.scale.set(1.75, 1.75);
					add(banbodeez);
	
					if(ClientPrefs.data.bgGlitch)
					{
						var testshader:shaders.Shaders.GlitchEffect = new shaders.Shaders.GlitchEffect();
						testshader.waveAmplitude = 0.1;
						testshader.waveFrequency = 5;
						testshader.waveSpeed = 2;
						banbodeez.shader = testshader.shader;
						curbg = banbodeez;
					}
	
				case 'bambersHell':
					{
						defaultCamZoom = 0.7;
						curStage = 'bambersHell';
	
						gridBG = new FlxSprite(-600, -200).loadGraphic(Paths.image('StagesBP/purgatory/grid'));
						gridBG.antialiasing = true;
						gridBG.scrollFactor.set(0.6, 0.6);
						gridBG.active = true;
						gridBG.scale.set(1.5, 1.5);
						gridBG.screenCenter(X);
		
						add(gridBG);
		
						if(ClientPrefs.data.bgGlitch)
						{
							var testshader:shaders.Shaders.GlitchEffect  = new shaders.Shaders.GlitchEffect ();
							testshader.waveAmplitude = 0.095;
							testshader.waveFrequency = 5;
							testshader.waveSpeed = 1.15;
							gridBG.shader = testshader.shader;
							curbg = gridBG;
						}
					
						var bgHELL:BGSprite = new BGSprite('StagesBP/purgatory/graysky', -600, -200, 0.2, 0.2);
						bgHELL.antialiasing = false;
						bgHELL.scrollFactor.set(0, 0);
						bgHELL.screenCenter(X);
						bgHELL.scale.set(10, 10);
						bgHELL.alpha = 0.85;
						add(bgHELL);
	
						bgshitH2 = new DepthSprite('StagesBP/purgatory/3dBG_Objects', -600, -200, 0.5, 0.5);
						bgshitH2.scale.set(1.5, 1.5);
						bgshitH2.screenCenter(X);
						bgshitH2.depth = 0.5;
						bgshitH2.defaultScale = 1.5;
						add(bgshitH2);
			
						bgshitH = new DepthSprite('StagesBP/purgatory/3d_Objects', -600, -200, 0.7, 0.7);
						bgshitH.scale.set(1.25, 1.25);
						//bgshitH.screenCenter(X);
						bgshitH.depth = 0.7;
						bgshitH.defaultScale = 1.25;
						add(bgshitH);
	
						cloudsH = new BGSprite('StagesBP/purgatory/scaryclouds', -400, 250, 1.2, 1.2);
						cloudsH.updateHitbox();
						cloudsH.antialiasing = true;
						cloudsH.screenCenter(Y);
						cloudsH.y += 150;
						cloudsH.alpha = 0.8;
						cloudsH.scale.set(2, 1.75);
					}
		
				case '3dComputer':
					{
						defaultCamZoom = 0.75;
						curStage = '3dComputer';
						// wtf is this for
						var bg:FlxSprite = new FlxSprite(-600, -200).loadGraphic(Paths.image('StagesBP/purgatory/billgates/computer'));
						bg.antialiasing = true;
						bg.scrollFactor.set(0.6, 0.6);
						bg.active = true;
		
						add(bg);
						if(ClientPrefs.data.bgGlitch)
						{
							var testshader:shaders.Shaders.GlitchEffect  = new shaders.Shaders.GlitchEffect ();
							testshader.waveAmplitude = 0.1;
							testshader.waveFrequency = 5;
							testshader.waveSpeed = 2;
							bg.shader = testshader.shader;
							curbg = bg;
						}
					}
		
		
				case '3dScary':
					{
						defaultCamZoom = 0.85;
						curStage = '3dScary';
						var bg:FlxSprite = new FlxSprite(-600, -200).loadGraphic(Paths.image('StagesBP/scarybg'));
						bg.antialiasing = true;
						bg.scrollFactor.set(0.6, 0.6);
						bg.active = true;
		
						add(bg);
						if(ClientPrefs.data.bgGlitch)
						{
							var testshader:shaders.Shaders.GlitchEffect  = new shaders.Shaders.GlitchEffect();
							testshader.waveAmplitude = 0.1;
							testshader.waveFrequency = 5;
							testshader.waveSpeed = 2;
							bg.shader = testshader.shader;
							curbg = bg;
						}
					}
				// ends here //
				}

		if(isPixelStage) {
			introSoundsSuffix = '-pixel';
		}

		add(gfGroup);
		add(player3Group);
		if (SONG.song.toLowerCase() != 'reality breaking')
		{
			add(dadGroup);
		}else if(SONG.song.toLowerCase() == 'reality breaking' && ClientPrefs.data.lowQuality) 
		{
			add(dadGroup);
		}
		add(boyfriendGroup);

		switch(curStage)
		{
			case 'farmNight':
				if(!ClientPrefs.data.lowQuality) {
					var filter:BGSprite = new BGSprite('StagesBP/ui/nightGradient', -500, -300, 0, 0);
					filter.screenCenter();
					filter.blend = MULTIPLY;
					add(filter);

					
					if(!ClientPrefs.data.lowQuality) 
						{
							if (SONG.song.toLowerCase() == 'reality breaking')
								{
									add(dadGroup);
								}
						}

					var glowPrefix = 'nightGlow';
					if (SONG.song.toLowerCase() == 'reality breaking')
						glowPrefix = 'rbGlow';
					glow = new BGSprite('StagesBP/ui/'+glowPrefix, -500, -300, 0, 0);
					glow.screenCenter();
					if (SONG.song.toLowerCase() == 'fallowed')
						glow.color = 0xFFFF0000;
					glow.blend = ADD;
					add(glow);
					if (SONG.song.toLowerCase() == 'reality breaking')
						glow.scale.set(1.25, 1.25);
				}
			case 'bambersHell':
				if(!ClientPrefs.data.lowQuality) 
					{
						add(cloudsH);
					}	
		}
		if (colorFilter != null) add(colorFilter);

		#if LUA_ALLOWED
		luaDebugGroup = new FlxTypedGroup<DebugLuaText>();
		luaDebugGroup.cameras = [camOther];
		add(luaDebugGroup);
		#end

		// "GLOBAL" SCRIPTS
		#if LUA_ALLOWED
		var foldersToCheck:Array<String> = Mods.directoriesWithFile(Paths.getPreloadPath(), 'scripts/');
		for (folder in foldersToCheck)
			for (file in FileSystem.readDirectory(folder))
			{
				if(file.toLowerCase().endsWith('.lua'))
					new FunkinLua(folder + file);
				if(file.toLowerCase().endsWith('.hx'))
					initHScript(folder + file);
			}
		#end

		// STAGE SCRIPTS
		#if LUA_ALLOWED
		startLuasNamed('stages/' + curStage + '.lua');
		#end

		#if HSCRIPT_ALLOWED
		startHScriptsNamed('stages/' + curStage + '.hx');
		#end

		if (!stageData.hide_girlfriend)
		{
			if(SONG.gfVersion == null || SONG.gfVersion.length < 1) SONG.gfVersion = 'gf'; //Fix for the Chart Editor
			gf = new Character(0, 0, SONG.gfVersion);
			startCharacterPos(gf);
			gf.scrollFactor.set(0.95, 0.95);
			gfGroup.add(gf);
			startCharacterScripts(gf.curCharacter);
		}

		shartGrad = new FlxSprite(-120, -120).loadGraphic(Paths.image('hud/shattered/shartGrad'));
		shartGrad.scrollFactor.set();
		shartGrad.antialiasing = true;
		shartGrad.screenCenter();
		shartGrad.blend = ADD;
		shartGrad.scale.x = 2;
		shartGrad.scale.y = 2;
		shartGrad.alpha = 0;
		shartGrad.cameras = [camHUD];

		shartLine = new FlxSprite(-120, -120).loadGraphic(Paths.image('hud/shattered/shartLine'));
		shartLine.scrollFactor.set();
		shartLine.antialiasing = true;
		shartLine.screenCenter();
		shartLine.blend = ADD;
		shartLine.scale.x = 2;
		shartLine.scale.y = 2;
		shartLine.alpha = 0;
		shartLine.cameras = [camHUD];

		dad = new Character(0, 0, SONG.player2);
		startCharacterPos(dad, true);
		dadGroup.add(dad);
		startCharacterScripts(dad.curCharacter);

		player3 = new Character(0, 0, SONG.player3);
		if (SONG.player3 == null || SONG.player3 == '') player3.alpha = 0.00001;
		startCharacterPos(player3, true);
		player3Group.add(player3);
		startCharacterScripts(player3.curCharacter);

		boyfriend = new Boyfriend(0, 0, (formoverride != null ? formoverride : SONG.player1));
		startCharacterPos(boyfriend);
		boyfriendGroup.add(boyfriend);
		startCharacterScripts(boyfriend.curCharacter);

		if(formoverride != null)
			{
				SONG.player1 = formoverride;
			}
	
		if (formoverride == 'pixelBF')
			{
				SONG.gfVersion = 'gf-pixel';
			}

		var camPos:FlxPoint = FlxPoint.get(girlfriendCameraOffset[0], girlfriendCameraOffset[1]);
		if(gf != null)
		{
			camPos.x += gf.getGraphicMidpoint().x + gf.cameraPosition[0];
			camPos.y += gf.getGraphicMidpoint().y + gf.cameraPosition[1];
		}

		if(dad.curCharacter.startsWith('gf')) {
			dad.setPosition(GF_X, GF_Y);
			if(gf != null)
				gf.visible = false;
		}
		stagesFunc(function(stage:BaseStage) stage.createPost());

		if (ClientPrefs.data.MotionBlur)
		{
			scaryTrail = new FlxTrail(dad, null, 10, 3, 0.3, 0.02); //nice
		}else{
			scaryTrail = new FlxTrail(dad, null, 4, 12, 0.3, 0.069); //nice
		}
		addBehindDad(scaryTrail);
		scaryTrail.visible = false;
		switch(dad.curCharacter)
		{
			case 'hell-2'|'bamburg-crazy'|'bamburg'|'bambi-mad-guitar'|'404-old'|'404'|'hell-1'| 'bambi-god2d' | 'expunged'|'god-expunged-1'|'god-expunged-1-new'|'complex-dave'|'ChaosCrimson'|'bombu'|'bombu-v2':
				scaryTrail.visible = true;
		}

		playerTrail = new FlxTrail(boyfriend, null, 4, 12, 0.3, 0.069); //nice
		addBehindBF(playerTrail);
		playerTrail.visible = false;
		switch(boyfriend.curCharacter)
		{
			case 'hell-2' | 'bambi-god2d' | 'expunged':
				playerTrail.visible = true;
		}

		var typografy: String;

		typografy = 'comic-sans.ttf';

		Conductor.songPosition = -5000 / Conductor.songPosition;

		var showTime:Bool = (ClientPrefs.data.timeBarType != 'Disabled');

		timeTxt = new FlxText(STRUM_X + (FlxG.width / 2) - 248, 19, 400, "", 32);
		timeTxt.setFormat(Paths.font(typografy), 32, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		if(SONG.song.toLowerCase() == "antagonism") 
			{
				timeTxt.setFormat(Paths.font(typografy), 60, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
			}
		timeTxt.scrollFactor.set();
		timeTxt.alpha = 0;
		timeTxt.borderSize = 2;
		timeTxt.visible = updateTime = showTime;
		if(ClientPrefs.data.downScroll) timeTxt.y = FlxG.height - 44;
		if(ClientPrefs.data.timeBarType == 'Song Name') timeTxt.text = SONG.song;

		if(SONG.song.toLowerCase() == "antagonism") 
			{
				if (ClientPrefs.data.timeBarType == "Song Name + Time"){
						timeTxt.size = 17 + 10;
						timeTxt.y += 0;
				}else if (ClientPrefs.data.timeBarType == "Modern Time"){
					timeTxt.size = 17 + 10;
					timeTxt.y += 0;
				}else if (ClientPrefs.data.timeBarType == "Song Name"){
					timeTxt.size = 17 + 10;
					timeTxt.y += 0;
				}else if (ClientPrefs.data.timeBarType == "Time Elapsed"){
					timeTxt.size = 24 + 10;
					timeTxt.y += 3;
				}else if (ClientPrefs.data.timeBarType == "Time Left"){
					timeTxt.size = 24 + 10;
					timeTxt.y += 3;
				}
			}
	
		if (ClientPrefs.data.timeBarType == "Song Name + Time"){
			timeTxt.size = 17;
			timeTxt.y += 0;
		}else if (ClientPrefs.data.timeBarType == "Modern Time"){
			timeTxt.size = 17;
			timeTxt.y += 0;
		}else if (ClientPrefs.data.timeBarType == "Song Name"){
			timeTxt.size = 17;
			timeTxt.y += 0;
		}else if (ClientPrefs.data.timeBarType == "Time Elapsed"){
			timeTxt.size = 24;
			timeTxt.y += 3;
		}
		else if (ClientPrefs.data.timeBarType == "Time Left"){
			timeTxt.size = 24;
			timeTxt.y += 3;
		}

		timeBar = new HealthBar(0, timeTxt.y + (timeTxt.height / 4), 'hud/bars/timeBarCircle', function() return songPercent, 0, 1);
		if(SONG.song.toLowerCase() == "antagonism") 
		{
			timeBar = new HealthBar(0, timeTxt.y + (timeTxt.height / 4), 'hud/bars/healthBarEvil', function() return songPercent, 0, 1);
		}
		timeBar.scrollFactor.set();
		timeBar.screenCenter(X);
		timeBar.alpha = 0;
		timeBar.visible = showTime;
		reloadTimeBarColors();
		add(timeBar);
		add(timeTxt);

		timePercentTxt = new FlxText(800, 19, 400, "", 32);
		timePercentTxt.setFormat(Paths.font(typografy), 32, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		timePercentTxt.scrollFactor.set();
		timePercentTxt.alpha = 0;
		timePercentTxt.borderSize = 2;
		timePercentTxt.visible = ClientPrefs.data.songPercentage;
		updateThePercent = ClientPrefs.data.songPercentage;
		if(ClientPrefs.data.downScroll) timePercentTxt.y = FlxG.height - 44;
		if (ClientPrefs.data.timeBarType == 'Disabled') timePercentTxt.screenCenter(X);
		add(timePercentTxt);

		songLength = FlxG.sound.music.length;

		var splash:NoteSplash = new NoteSplash(100, 100);
		grpNoteSplashes.add(splash);
		splash.alpha = 0.000001; //cant make it invisible or it won't allow precaching

		strumLineNotes = new FlxTypedGroup<StrumNote>();
		add(strumLineNotes);
		add(grpNoteSplashes);

		altStrumLine = new FlxSprite(0, 0);
		altStrumLineNotes = new FlxTypedGroup<StrumNote>();
		add(altStrumLineNotes);

		opponentStrums = new FlxTypedGroup<StrumNote>();
		playerStrums = new FlxTypedGroup<StrumNote>();
		altStrums = new FlxTypedGroup<StrumNote>();

		generateSong(SONG.song);

		camFollow = new FlxObject(0, 0, 1, 1);
		camFollow.setPosition(camPos.x, camPos.y);
		camPos.put();
				
		if (prevCamFollow != null)
		{
			camFollow = prevCamFollow;
			prevCamFollow = null;
		}
		add(camFollow);

		FlxG.camera.follow(camFollow, LOCKON, 0);
		FlxG.camera.zoom = defaultCamZoom;
		FlxG.camera.snapToTarget();

		FlxG.worldBounds.set(0, 0, FlxG.width, FlxG.height);
		moveCameraSection();

		healthBar = new HealthBar(0, FlxG.height * (!ClientPrefs.data.downScroll ? 0.89 : 0.11),'hud/bars/healthBarCircle', function() return fakeHealth, 0, 2);
		healthBar.screenCenter(X);
		healthBar.leftToRight = false;
		healthBar.scrollFactor.set();
		healthBar.visible = !ClientPrefs.data.hideHud;
		healthBar.alpha = ClientPrefs.data.healthBarAlpha;
		reloadHealthBarColors();

		add(healthBar);

        //HealthBaroverlay
		switch(ClientPrefs.data.healthBarOverlay)
		{
			case 'Purgatory':
				healthBarOverlay = new FlxSprite().loadGraphic(Paths.image('hud/overlays/healthBarOverlayPurgatory'));
			case 'Animated':
				healthBarOverlay = new FlxSprite();
				healthBarOverlay.frames = Paths.getSparrowAtlas("hud/overlays/healthBarOverlayAnimated");
				healthBarOverlay.animation.addByPrefix("Health Bar Animated", "Health Bar Animated", 24);
				healthBarOverlay.animation.play('Health Bar Animated');
			case 'Disabled':
				healthBarOverlay = new FlxSprite().loadGraphic(Paths.image('hud/overlays/healthBarOverlayDisabled'));
		}
      	healthBarOverlay.y = FlxG.height * (!ClientPrefs.data.downScroll ? 0.89 : 0.11);
      	healthBarOverlay.screenCenter(X);
     	healthBarOverlay.scrollFactor.set();
		healthBarOverlay.visible = true;
		healthBarOverlay.color = FlxColor.BLACK;
       	healthBarOverlay.blend = MULTIPLY;
       	healthBarOverlay.alpha = ClientPrefs.data.healthBarAlpha;
       	healthBarOverlay.antialiasing = ClientPrefs.data.antialiasing;
		add(healthBarOverlay);

       	if (ClientPrefs.data.healthBarOverlay == 'Disabled')
			{
       	 		healthBarOverlay.visible = false;
      	  	}

       	if (ClientPrefs.data.downScroll)
			{
      	  		healthBarOverlay.y = 0.11 * FlxG.height;
       	 	}

		/*var shadowSprite = new FlxSprite().loadGraphic(Paths.image('bars/healthBarCircle'));
		shadowSprite.alpha = 0.5; // Opacidad reducida
		shadowSprite.y = FlxG.height * (!ClientPrefs.data.downScroll ? 0.89 : 0.11) + 10;
		shadowSprite.x = shadowSprite.x + 10;
		shadowSprite.screenCenter(X);
		shadowSprite.cameras = [camHUD];
		shadowSprite.color = FlxColor.BLACK;
		add(shadowSprite);*/

		iconP1 = new HealthIcon(boyfriend.healthIcon, true);
		iconP1.y = healthBar.y - 75;
		iconP1.visible = !ClientPrefs.data.hideHud;
		iconP1.alpha = ClientPrefs.data.healthBarAlpha;
		add(iconP1);

		iconP2 = new HealthIcon(dad.healthIcon, false);
		iconP2.y = healthBar.y - 75;
		iconP2.visible = !ClientPrefs.data.hideHud;
		iconP2.alpha = ClientPrefs.data.healthBarAlpha;
		add(iconP2);

		scoreTxt = new FlxText(0, healthBar.y + 50, FlxG.width, "", 20);
		scoreTxt.setFormat(Paths.font(typografy), 17, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		scoreTxt.scrollFactor.set();
		scoreTxt.borderSize = 1.25;
		scoreTxt.antialiasing = !ClientPrefs.data.antialiasing;
		scoreTxt.visible = !ClientPrefs.data.hideHud;
		add(scoreTxt);

		var textYPos:Float = healthBar.y + 50;

		if (ClientPrefs.data.songWatermark)
		{
			songWatermark = new FlxText(4, textYPos, SONG.song, 16);
			songWatermark.setFormat(Paths.font(typografy), 16, FlxColor.WHITE, RIGHT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
			songWatermark.scrollFactor.set();
			songWatermark.borderSize = 1.25 + 1;
			songWatermark.antialiasing = !ClientPrefs.data.antialiasing;
			songWatermark.visible = !ClientPrefs.data.hideHud;
			if(chartingMode)
				songWatermark.text += ' [CHARTING MODE]';
			add(songWatermark);
		}
		
 		judgementCounter = new FlxText(20, 0, 0, "", 20);
		judgementCounter.setFormat(Paths.font(typografy), 20, FlxColor.WHITE, FlxTextAlign.LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		judgementCounter.borderSize = 2;
		judgementCounter.scrollFactor.set();
		judgementCounter.screenCenter(Y);
		judgementCounter.text = 'Perfects: ${perfect}\nSicks: ${sicks}\nGoods: ${goods}\nBads: ${bads}\nShits: ${shits}';
		judgementCounter.visible = !ClientPrefs.data.hideJudgements;
		add(judgementCounter);
		
		if (ClientPrefs.data.hidetotalNotes){
			totalNotes = new FlxText(20, judgementCounter.y - 30, 0);
			totalNotes.setFormat(Paths.font(typografy), 20, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
			totalNotes.borderSize = 2;
			totalNotes.borderQuality = 2;
			totalNotes.scrollFactor.set();
			totalNotes.visible = true;
			add(totalNotes);
		}

		if (ClientPrefs.data.hideNps){
			if (ClientPrefs.data.hidetotalNotes){npsCounter = new FlxText(20, judgementCounter.y - 90, 0);} else {npsCounter = new FlxText(20, judgementCounter.y - 30, 0);}
			npsCounter.setFormat(Paths.font(typografy), 20, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
			npsCounter.borderSize = 2;
			npsCounter.borderQuality = 2;
			npsCounter.scrollFactor.set();
			npsCounter.visible = true;
			add(npsCounter);
		}

				
		if (ClientPrefs.data.hideMaxNps){
			maxNpsCounter = new FlxText(20 , npsCounter.y - 30 , 0);
			maxNpsCounter.setFormat(Paths.font(typografy), 20, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
			maxNpsCounter.borderSize = 2;
			maxNpsCounter.borderQuality = 2;
			maxNpsCounter.scrollFactor.set();
			maxNpsCounter.visible = true;
			add(maxNpsCounter);
		}

		if (ClientPrefs.data.hideCombo){
			comboTxt = new FlxText(20 , judgementCounter.y + 170, 0);
			comboTxt.setFormat(Paths.font(typografy), 20, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
			comboTxt.borderSize = 2;
			comboTxt.borderQuality = 2;
			comboTxt.scrollFactor.set();
			comboTxt.visible = true;
			add(comboTxt);
		}
		
		if (ClientPrefs.data.hideComboBreaks){
			comboBreaks = new FlxText(20 , judgementCounter.y + 140, 0);
			comboBreaks.setFormat(Paths.font(typografy), 20, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
			comboBreaks.borderSize = 2;
			comboBreaks.borderQuality = 2;
			comboBreaks.scrollFactor.set();

			if (ClientPrefs.data.hideMisses)
			{
				comboBreaks.visible = false;
			}else{
				comboBreaks.visible = true;
			}
			add(comboBreaks);
		}

		if (ClientPrefs.data.hideMisses){
			misses = new FlxText(20 , judgementCounter.y + 140, 0);
			misses.setFormat(Paths.font(typografy), 20, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
			misses.borderSize = 2;
			misses.borderQuality = 2;
			misses.scrollFactor.set();
			if (ClientPrefs.data.hideComboBreaks)
			{
				misses.visible = false;
			}else{

				misses.visible = true;
			}
			add(misses);
		}

		botplayTxt = new FlxText(400, timeBar.y + 55, FlxG.width - 800, "[BOTPLAY]", 32);
		botplayTxt.setFormat(Paths.font(typografy), 32, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		botplayTxt.scrollFactor.set();
		botplayTxt.borderSize = 1.25;
		botplayTxt.visible = cpuControlled;
		add(botplayTxt);
		if(ClientPrefs.data.downScroll) {
			botplayTxt.y = timeBar.y - 78;
		}

		tutorialTxt = new FlxText(FlxG.width, "", 20);
		if (!ClientPrefs.data.downScroll)
			tutorialTxt.y = healthBar.y - 75;
		else
			tutorialTxt.y = healthBar.y + 75;
		tutorialTxt.setFormat(Paths.font("comic.ttf"), 36, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		tutorialTxt.scrollFactor.set();
		tutorialTxt.borderSize = 1.25;
		tutorialTxt.cameras = [camHUD];
		tutorialTxt.alpha = 0;
	    if(SONG.song.toLowerCase() == "rsod old") tutorialTxt.text = "Hit the Restart Notes."; 
		tutorialTxt.screenCenter(X);
		add(tutorialTxt);

		redGlow = new FlxSprite(-120, -120).loadGraphic(Paths.image('StagesBP/ui/redGlow'));
		redGlow.scrollFactor.set();
		redGlow.antialiasing = true;
		redGlow.active = true;
		redGlow.screenCenter();
		redGlow.blend = ADD;
		add(redGlow);
		redGlow.alpha = 0.5;
		redGlow.visible = false;
		redGlow.cameras = [camOther];

		if (ClientPrefs.data.BlackScreen)
		{
			blackScreen = new FlxSprite(-215, -120).loadGraphic(Paths.image('StagesBP/ui/white'));
			blackScreen.scrollFactor.set();
			blackScreen.cameras = [camHUD];
			blackScreen.alpha = 0;
			blackScreen.color = FlxColor.BLACK;
			blackScreen.scale.set(Std.int(FlxG.width * 100),Std.int(FlxG.height * 150));
			add(blackScreen);
		}

		whiteflash = new FlxSprite(-100, -100).makeGraphic(Std.int(FlxG.width * 100), Std.int(FlxG.height * 100), FlxColor.WHITE);
		whiteflash.scrollFactor.set();

		rsod = new FlxSprite(0, 0).loadGraphic(Paths.image('StagesBP/ui/rsod'));
		if(SONG.song.toLowerCase() == "rsod old") 
			add(rsod);
		rsod.visible = false;
		rsod.cameras = [camHUD];

		notResponding = new FlxSprite(0, 0).loadGraphic(Paths.image('StagesBP/ui/nr'));
		if(SONG.song.toLowerCase() == "rsod old") add(notResponding);
		notResponding.alpha = 0;
		notResponding.cameras = [camHUD];

		strumLineNotes.cameras = [camHUD];
		grpNoteSplashes.cameras = [camHUD];
		notes.cameras = [camNOTES];
		judgementCounter.cameras = [camHUD];
		if (ClientPrefs.data.songWatermark)
		{
			songWatermark.cameras = [camHUD];
		}
		if (ClientPrefs.data.hidetotalNotes)
		{
			totalNotes.cameras = [camHUD];
		}
		if (ClientPrefs.data.hideNps)
		{
			npsCounter.cameras = [camHUD];
		}
		if (ClientPrefs.data.hideMaxNps)
		{
			maxNpsCounter.cameras = [camHUD];
		}
		if (ClientPrefs.data.hideCombo)
		{
			comboTxt.cameras = [camHUD];
		}
		if (ClientPrefs.data.hideComboBreaks)
		{
			comboBreaks.cameras = [camHUD];
		}
		if (ClientPrefs.data.hideMisses)
		{
			misses.cameras = [camHUD];
		}
		healthBar.cameras = [camHUD];
		healthBarOverlay.cameras = [camHUD];

		iconP1.cameras = [camHUD];
		iconP2.cameras = [camHUD];
		scoreTxt.cameras = [camHUD];

		botplayTxt.cameras = [camHUD];
		timeBar.cameras = [camHUD];
		timeTxt.cameras = [camHUD];
		timePercentTxt.cameras = [camHUD];

		startingSong = true;
		
		#if LUA_ALLOWED
		for (notetype in noteTypes)
			startLuasNamed('custom_notetypes/' + notetype + '.lua');

		for (event in eventsPushed)
			startLuasNamed('custom_events/' + event + '.lua');
		#end

		#if HSCRIPT_ALLOWED
		for (notetype in noteTypes)
			startHScriptsNamed('custom_notetypes/' + notetype + '.hx');

		for (event in eventsPushed)
			startHScriptsNamed('custom_events/' + event + '.hx');
		#end
		noteTypes = null;
		eventsPushed = null;

		if(eventNotes.length > 1)
		{
			for (event in eventNotes) event.strumTime -= eventEarlyTrigger(event);
			eventNotes.sort(sortByTime);
		}

		// SONG SPECIFIC SCRIPTS
		#if LUA_ALLOWED
		var foldersToCheck:Array<String> = Mods.directoriesWithFile(Paths.getPreloadPath(), 'data/' + songName + '/');
		for (folder in foldersToCheck)
			for (file in FileSystem.readDirectory(folder))
			{
				if(file.toLowerCase().endsWith('.lua'))
					new FunkinLua(folder + file);
				if(file.toLowerCase().endsWith('.hx'))
					initHScript(folder + file);
			}
		#end

		startCallback();
		RecalculateRating();

		//PRECACHING MISS SOUNDS BECAUSE I THINK THEY CAN LAG PEOPLE AND FUCK THEM UP IDK HOW HAXE WORKS
		if(ClientPrefs.data.hitsoundVolume > 0) precacheList.set('hitsound', 'sound');
		precacheList.set('missnote1', 'sound');
		precacheList.set('missnote2', 'sound');
		precacheList.set('missnote3', 'sound');

		if (PauseSubState.songName != null) {
			precacheList.set(PauseSubState.songName, 'music');
		} else if(ClientPrefs.data.pauseMusic != 'None') {
			precacheList.set(Paths.formatToSongPath(ClientPrefs.data.pauseMusic), 'music');
		}

		precacheList.set('alphabet', 'image');
		resetRPC();

		FlxG.stage.addEventListener(KeyboardEvent.KEY_DOWN, onKeyPress);
		FlxG.stage.addEventListener(KeyboardEvent.KEY_UP, onKeyRelease);
		callOnScripts('onCreatePost');

		cacheCountdown();
		cachePopUpScore();
		
		for (key => type in precacheList)
		{
			//trace('Key $key is type $type');
			switch(type)
			{
				case 'image':
					Paths.image(key);
				case 'sound':
					Paths.sound(key);
				case 'music':
					Paths.music(key);
			}
		}

		super.create();
		Paths.clearUnusedMemory();
		
		CustomFadeTransition.nextCamera = camOther;
		if(eventNotes.length < 1) checkEventNote();
	}

	function set_songSpeed(value:Float):Float
	{
		if(generatedMusic)
		{
			var ratio:Float = value / songSpeed; //funny word huh
			if(ratio != 1)
			{
				for (note in notes.members) note.resizeByRatio(ratio);
				for (note in unspawnNotes) note.resizeByRatio(ratio);
			}
		}
		songSpeed = value;
		noteKillOffset = Math.max(Conductor.stepCrochet, 350 / songSpeed * playbackRate);
		return value;
	}

	function set_playbackRate(value:Float):Float
	{
		if(generatedMusic)
		{
			if(vocals != null) vocals.pitch = value;
			FlxG.sound.music.pitch = value;

			var ratio:Float = playbackRate / value; //funny word huh
			if(ratio != 1)
			{
				for (note in notes.members) note.resizeByRatio(ratio);
				for (note in unspawnNotes) note.resizeByRatio(ratio);
			}
		}
		playbackRate = value;
		FlxAnimationController.globalSpeed = value;
		Conductor.safeZoneOffset = (ClientPrefs.data.safeFrames / 60) * 1000 * value;
		setOnScripts('playbackRate', playbackRate);
		return value;
	}

	public function addTextToDebug(text:String, color:FlxColor) {
		#if LUA_ALLOWED
		var newText:DebugLuaText = luaDebugGroup.recycle(DebugLuaText);
		newText.text = text;
		newText.color = color;
		newText.disableTime = 6;
		newText.alpha = 1;
		newText.setPosition(10, 8 - newText.height);

		luaDebugGroup.forEachAlive(function(spr:DebugLuaText) {
			spr.y += newText.height + 2;
		});
		luaDebugGroup.add(newText);
		#end
	}


	public function reloadTimeBarColors()
	{
		var colorForTimeBar:FlxColor = FlxColor.BLACK;
		
		if(SONG.song.toLowerCase() == "antagonism") 
		{
			colorForTimeBar = FlxColor.BLACK;
			timeBar.setColors(FlxColor.fromRGB(dad.healthColorArray[0], dad.healthColorArray[1], dad.healthColorArray[2]),
			FlxColor.fromRGB(boyfriend.healthColorArray[0], boyfriend.healthColorArray[1], boyfriend.healthColorArray[2]));
		}else{
    
		if (ClientPrefs.data.timebarBGColor == 'Black') {
			colorForTimeBar = FlxColor.BLACK;
		} else if (ClientPrefs.data.timebarBGColor == 'Gray') {
			colorForTimeBar = FlxColor.GRAY;
		} else if (ClientPrefs.data.timebarBGColor == 'Dark Gray') {
			colorForTimeBar = FlxColor.fromRGB(18,18,18);
		}

		if (ClientPrefs.data.ColorBarBG == 'Icon-P2'){

			timeBar.setColors(FlxColor.BLACK,FlxColor.fromRGB(dad.healthColorArray[0], dad.healthColorArray[1], dad.healthColorArray[2]));
		}
		if (ClientPrefs.data.ColorBar == 'Icon-P2'){
			timeBar.setColors(FlxColor.fromRGB(dad.healthColorArray[0], dad.healthColorArray[1], dad.healthColorArray[2]),colorForTimeBar);
		}
		else if (ClientPrefs.data.ColorBarBG == 'Icon-P1'){

			timeBar.setColors(FlxColor.BLACK,FlxColor.fromRGB(boyfriend.healthColorArray[0], boyfriend.healthColorArray[1], boyfriend.healthColorArray[2]));
		}
		else if (ClientPrefs.data.ColorBar == 'Icon-P1'){

			timeBar.setColors(FlxColor.fromRGB(boyfriend.healthColorArray[0], boyfriend.healthColorArray[1], boyfriend.healthColorArray[2]),colorForTimeBar);
		}
		else if (ClientPrefs.data.ColorBar == 'Icon-P1 and P2'){

			timeBar.setColors(FlxColor.fromRGB(dad.healthColorArray[0], dad.healthColorArray[1], dad.healthColorArray[2]),
			FlxColor.fromRGB(boyfriend.healthColorArray[0], boyfriend.healthColorArray[1], boyfriend.healthColorArray[2]));
		}
		else if (ClientPrefs.data.ColorBar == 'Icon-P2 and P1'){

			timeBar.setColors(FlxColor.fromRGB(boyfriend.healthColorArray[0], boyfriend.healthColorArray[1], boyfriend.healthColorArray[2]),
			FlxColor.fromRGB(dad.healthColorArray[0], dad.healthColorArray[1], dad.healthColorArray[2]));
		}
		}
	}
	

	public function reloadHealthBarColors() {
		if (ClientPrefs.data.originalhealthbarColor == false){
			healthBar.setColors(FlxColor.fromRGB(dad.healthColorArray[0], dad.healthColorArray[1], dad.healthColorArray[2]),
			FlxColor.fromRGB(boyfriend.healthColorArray[0], boyfriend.healthColorArray[1], boyfriend.healthColorArray[2]));
		}else{
			healthBar.setColors(FlxColor.RED,FlxColor.GREEN);
		}
	}

	public function addCharacterToList(newCharacter:String, type:Int) {
		switch(type) {
			case 0:
				if(!boyfriendMap.exists(newCharacter)) {
					var newBoyfriend:Character = new Character(0, 0, newCharacter, true);
					boyfriendMap.set(newCharacter, newBoyfriend);
					boyfriendGroup.add(newBoyfriend);
					startCharacterPos(newBoyfriend);
					newBoyfriend.alpha = 0.00001;
					startCharacterScripts(newBoyfriend.curCharacter);
				}

			case 1:
				if(!dadMap.exists(newCharacter)) {
					var newDad:Character = new Character(0, 0, newCharacter);
					dadMap.set(newCharacter, newDad);
					dadGroup.add(newDad);
					startCharacterPos(newDad, true);
					newDad.alpha = 0.00001;
					startCharacterScripts(newDad.curCharacter);
				}

			case 2:
				if(gf != null && !gfMap.exists(newCharacter)) {
					var newGf:Character = new Character(0, 0, newCharacter);
					newGf.scrollFactor.set(0.95, 0.95);
					gfMap.set(newCharacter, newGf);
					gfGroup.add(newGf);
					startCharacterPos(newGf);
					newGf.alpha = 0.00001;
					startCharacterScripts(newGf.curCharacter);
				}
			case 3:
				if(!player3Map.exists(newCharacter)) {
					var newPlayer3:Character = new Character(0, 0, newCharacter);
					player3Map.set(newCharacter, newPlayer3);
					player3Group.add(newPlayer3);
					startCharacterPos(newPlayer3, true);
					newPlayer3.alpha = 0.00001;
					startCharacterScripts(newPlayer3.curCharacter);
				}
		}
	}

	function startCharacterScripts(name:String)
	{
		// Lua
		#if LUA_ALLOWED
		var doPush:Bool = false;
		var luaFile:String = 'characters/' + name + '.lua';
		#if MODS_ALLOWED
		var replacePath:String = Paths.modFolders(luaFile);
		if(FileSystem.exists(replacePath))
		{
			luaFile = replacePath;
			doPush = true;
		}
		else
		{
			luaFile = Paths.getPreloadPath(luaFile);
			if(FileSystem.exists(luaFile))
				doPush = true;
		}
		#else
		luaFile = Paths.getPreloadPath(luaFile);
		if(Assets.exists(luaFile)) doPush = true;
		#end

		if(doPush)
		{
			for (script in luaArray)
			{
				if(script.scriptName == luaFile)
				{
					doPush = false;
					break;
				}
			}
			if(doPush) new FunkinLua(luaFile);
		}
		#end

		// HScript
		#if HSCRIPT_ALLOWED
		var doPush:Bool = false;
		var scriptFile:String = 'characters/' + name + '.hx';
		var replacePath:String = Paths.modFolders(scriptFile);
		if(FileSystem.exists(replacePath))
		{
			scriptFile = replacePath;
			doPush = true;
		}
		else
		{
			scriptFile = Paths.getPreloadPath(scriptFile);
			if(FileSystem.exists(scriptFile))
				doPush = true;
		}
		
		if(doPush)
		{
			if(SScript.global.exists(scriptFile))
				doPush = false;

			if(doPush) initHScript(scriptFile);
		}
		#end
	}

	public function addShaderToCamera(cam: String, effect: ShaderEffect) {
		switch (cam.toLowerCase()) {
			case 'camhud' | 'hud':
				camHUDShaders.push(effect);
				var newCamEffects: Array<BitmapFilter> = [];
				for (i in camHUDShaders) {
					newCamEffects.push(new ShaderFilter(i.shader));
				}
				camHUD.setFilters(newCamEffects);
	
			case 'camother' | 'other':
				camOtherShaders.push(effect);
				var newCamEffects: Array<BitmapFilter> = [];
				for (i in camOtherShaders) {
					newCamEffects.push(new ShaderFilter(i.shader));
				}
				camOther.setFilters(newCamEffects);
	
			case 'camgame' | 'game':
				camGameShaders.push(effect);
				var newCamEffects: Array<BitmapFilter> = [];
				for (i in camGameShaders) {
					newCamEffects.push(new ShaderFilter(i.shader));
				}
				camGame.setFilters(newCamEffects);
	
			default:
				if (modchartSprites.exists(cam)) {
					Reflect.setProperty(modchartSprites.get(cam), "shader", effect.shader);
				} else if (modchartTexts.exists(cam)) {
					Reflect.setProperty(modchartTexts.get(cam), "shader", effect.shader);
				} else {
					var OBJ = Reflect.getProperty(PlayState.instance, cam);
					Reflect.setProperty(OBJ, "shader", effect.shader);
				}
		}
	}

	public function removeShaderFromCamera(cam: String, effect: ShaderEffect) {
		switch (cam.toLowerCase()) {
			case 'camhud' | 'hud':
				camHUDShaders.remove(effect);
				var newCamEffects: Array<BitmapFilter> = [];
			
				for (i in camHUDShaders) {
					newCamEffects.push(new ShaderFilter(i.shader));
				}
				camHUD.setFilters(newCamEffects);
			
			case 'camother' | 'other':
				camOtherShaders.remove(effect);
				var newCamEffects: Array<BitmapFilter> = [];
			
				for (i in camOtherShaders) {
					newCamEffects.push(new ShaderFilter(i.shader));
				}
				camOther.setFilters(newCamEffects);
			
			default:
				camGameShaders.remove(effect);
				var newCamEffects: Array<BitmapFilter> = [];
			
				for (i in camGameShaders) {
					newCamEffects.push(new ShaderFilter(i.shader));
				}
				camGame.setFilters(newCamEffects);
				}
			}
			
	
	public function clearShaderFromCamera(cam: String) {
		switch (cam.toLowerCase()) {
			case 'camhud' | 'hud':
				camHUDShaders = [];
				var newCamEffects: Array<BitmapFilter> = [];
				camHUD.setFilters(newCamEffects);
						
			case 'camother' | 'other':
				camOtherShaders = [];
				var newCamEffects: Array<BitmapFilter> = [];
				camOther.setFilters(newCamEffects);
						
			default:
				camGameShaders = [];
				var newCamEffects: Array<BitmapFilter> = [];
				camGame.setFilters(newCamEffects);
		}
	}
			

	public function getLuaObject(tag:String, text:Bool=true):FlxSprite {
		#if LUA_ALLOWED
		if(modchartSprites.exists(tag)) return modchartSprites.get(tag);
		if(text && modchartTexts.exists(tag)) return modchartTexts.get(tag);
		if(variables.exists(tag)) return variables.get(tag);
		#end
		return null;
	}

	function startCharacterPos(char:Character, ?gfCheck:Bool = false) {
		if(gfCheck && char.curCharacter.startsWith('gf')) { //IF DAD IS GIRLFRIEND, HE GOES TO HER POSITION
			char.setPosition(GF_X, GF_Y);
			char.scrollFactor.set(0.95, 0.95);
			char.danceEveryNumBeats = 2;
		}
		char.x += char.positionArray[0];
		char.y += char.positionArray[1];
	}

	public function startVideo(name:String)
	{
		#if VIDEOS_ALLOWED
		inCutscene = true;

		var filepath:String = Paths.video(name);
		#if sys
		if(!FileSystem.exists(filepath))
		#else
		if(!OpenFlAssets.exists(filepath))
		#end
		{
			FlxG.log.warn('Couldnt find video file: ' + name);
			startAndEnd();
			return;
		}

		var video:VideoHandler = new VideoHandler();
			#if (hxCodec >= "3.0.0")
			// Recent versions
			video.play(filepath);
			video.onEndReached.add(function()
			{
				video.dispose();
				startAndEnd();
				return;
			}, true);
			#else
			// Older versions
			video.playVideo(filepath);
			video.finishCallback = function()
			{
				startAndEnd();
				return;
			}
			#end
		#else
		FlxG.log.warn('Platform not supported!');
		startAndEnd();
		return;
		#end
	}

	function startAndEnd()
	{
		if(endingSong)
			endSong();
		else
			startCountdown();
	}

	var dialogueCount:Int = 0;
	public var psychDialogue:DialogueBoxPsych;
	//You don't have to add a song, just saying. You can just do "startDialogue(DialogueBoxPsych.parseDialogue(Paths.json(songName + '/dialogue')))" and it should load dialogue.json
	public function startDialogue(dialogueFile:DialogueFile, ?song:String = null):Void
	{
		// TO DO: Make this more flexible, maybe?
		if(psychDialogue != null) return;

		if(dialogueFile.dialogue.length > 0) {
			inCutscene = true;
			precacheList.set('dialogue', 'sound');
			precacheList.set('dialogueClose', 'sound');
			psychDialogue = new DialogueBoxPsych(dialogueFile, song);
			psychDialogue.scrollFactor.set();
			if(endingSong) {
				psychDialogue.finishThing = function() {
					psychDialogue = null;
					endSong();
				}
			} else {
				psychDialogue.finishThing = function() {
					psychDialogue = null;
					startCountdown();
				}
			}
			psychDialogue.nextDialogueThing = startNextDialogue;
			psychDialogue.skipDialogueThing = skipDialogue;
			psychDialogue.cameras = [camHUD];
			add(psychDialogue);
		} else {
			FlxG.log.warn('Your dialogue file is badly formatted!');
			startAndEnd();
		}
	}

	var startTimer:FlxTimer;
	var finishTimer:FlxTimer = null;

	// For being able to mess with the sprites on Lua
	public var countdownReady:FlxSprite;
	public var countdownSet:FlxSprite;
	public var countdownGo:FlxSprite;
	public static var startOnTime:Float = 0;

	function cacheCountdown()
	{
		var introAssets:Map<String, Array<String>> = new Map<String, Array<String>>();
		var introImagesArray:Array<String> = switch(stageUI) {
			case "pixel": ['${stageUI}UI/ready-pixel', '${stageUI}UI/set-pixel', '${stageUI}UI/date-pixel'];
			case "normal": ["goreal/ready", "goreal/set" ,"goreal/go"];
			default: ['${stageUI}UI/ready', '${stageUI}UI/set', '${stageUI}UI/go'];
		}
		introAssets.set(stageUI, introImagesArray);
		var introAlts:Array<String> = introAssets.get(stageUI);
		for (asset in introAlts) Paths.image(asset);
		
		Paths.sound('intro3' + introSoundsSuffix);
		Paths.sound('intro2' + introSoundsSuffix);
		Paths.sound('intro1' + introSoundsSuffix);
		Paths.sound('introGo' + introSoundsSuffix);
	}

	public function startCountdown()
	{
		if(startedCountdown) {
			callOnScripts('onStartCountdown');
			return false;
		}

		seenCutscene = true;
		inCutscene = false;
		var ret:Dynamic = callOnScripts('onStartCountdown', null, true);
		if(ret != FunkinLua.Function_Stop) {
			if (skipCountdown || startOnTime > 0) skipArrowStartTween = true;

			generateStaticArrows(0);
			generateStaticArrows(1);
			generateStaticArrows(2);
			for (i in 0...playerStrums.length) {
				setOnScripts('defaultPlayerStrumX' + i, playerStrums.members[i].x);
				setOnScripts('defaultPlayerStrumY' + i, playerStrums.members[i].y);
			}
			for (i in 0...opponentStrums.length) {
				setOnScripts('defaultOpponentStrumX' + i, opponentStrums.members[i].x);
				setOnScripts('defaultOpponentStrumY' + i, opponentStrums.members[i].y);
			}
			for (i in 0...altStrums.length) {
				setOnScripts('defaultAltStrumX' + i, altStrums.members[i].x);
				setOnScripts('defaultAltStrumY' + i, altStrums.members[i].y);
			}

			startedCountdown = true;
			Conductor.songPosition = -Conductor.crochet * 5;
			setOnScripts('startedCountdown', true);
			callOnScripts('onCountdownStarted', null);

			var swagCounter:Int = 0;

			switch (curSong.toLowerCase()) {
				case 'roundabout' | 'upheaval':
			    	skipCountdown = true;
			    case 'rebound':
			    	hideshit();
			}
			
			if (startOnTime > 0) {
				clearNotesBefore(startOnTime);
				setSongTime(startOnTime - 350);
				return true;
			}
			else if (skipCountdown)
			{
				setSongTime(0);
				return true;
			}
			moveCameraSection();

			startTimer = new FlxTimer().start(Conductor.crochet / 1000 / playbackRate, function(tmr:FlxTimer)
			{
				if (gf != null && tmr.loopsLeft % Math.round(gfSpeed * gf.danceEveryNumBeats) == 0 && gf.animation.curAnim != null && !gf.animation.curAnim.name.startsWith("sing") && !gf.stunned)
					gf.dance();
				if (tmr.loopsLeft % boyfriend.danceEveryNumBeats == 0 && boyfriend.animation.curAnim != null && !boyfriend.animation.curAnim.name.startsWith('sing') && !boyfriend.stunned)
					boyfriend.dance();
				if (tmr.loopsLeft % dad.danceEveryNumBeats == 0 && dad.animation.curAnim != null && !dad.animation.curAnim.name.startsWith('sing') && !dad.stunned)
					dad.dance();
				if (tmr.loopsLeft % player3.danceEveryNumBeats == 0 && player3.animation.curAnim != null && !player3.animation.curAnim.name.startsWith('sing') && !player3.stunned)
					player3.dance();

				var introAssets:Map<String, Array<String>> = new Map<String, Array<String>>();
				var introImagesArray:Array<String> = switch(stageUI) {
					case "pixel": ['${stageUI}UI/ready-pixel', '${stageUI}UI/set-pixel', '${stageUI}UI/date-pixel'];
					case "normal": ["goreal/ready", "goreal/set" ,"goreal/go"];
					default: ['${stageUI}UI/ready', '${stageUI}UI/set', '${stageUI}UI/go'];
				}
				introAssets.set(stageUI, introImagesArray);

				var introAlts:Array<String> = introAssets.get(stageUI);
				var antialias:Bool = (ClientPrefs.data.antialiasing && !isPixelStage);
				var tick:Countdown = THREE;

				switch (swagCounter)
				{
					case 0:
						FlxG.sound.play(Paths.sound('321/intro3' + introSoundsSuffix), 0.6);
						tick = THREE;
						if(ClientPrefs.data.moveCameraonCountdown)	{moveCamera(false);}
						defaultCamZoom += 0.1;
					case 1:
						countdownReady = createCountdownSprite(introAlts[0], antialias);
						FlxG.sound.play(Paths.sound('321/intro2' + introSoundsSuffix), 0.6);
						tick = TWO;
						FlxTween.tween(countdownReady, {alpha: 0}, Conductor.crochet / 1000, {
							ease: FlxEase.cubeInOut,
							onComplete: function(twn:FlxTween)
							{
								remove(countdownReady);
								countdownReady.destroy();
							}
						});
						defaultCamZoom += 0.1;
						if(ClientPrefs.data.moveCameraonCountdown)	{moveCamera(true);}
					case 2:
						countdownSet = createCountdownSprite(introAlts[1], antialias);
						FlxG.sound.play(Paths.sound('321/intro1' + introSoundsSuffix), 0.6);
						tick = ONE;
						if(ClientPrefs.data.moveCameraonCountdown)	{moveCamera(false);}
						defaultCamZoom += 0.1;
					case 3:
						countdownGo = createCountdownSprite(introAlts[2], antialias);
						FlxG.sound.play(Paths.sound('321/introGo' + introSoundsSuffix), 0.6);
						tick = GO;

						if(ClientPrefs.data.moveCameraonCountdown)	{moveCamera(true);}
						
						if (ClientPrefs.data.SpinonStart){
							strumLineNotes.forEach(function(note)
								{
									quickSpin(note);
								});
							}
						defaultCamZoom += 0.1;
						boyfriend.playAnim('hey', true);
					case 4:
						tick = START;
						defaultCamZoom -= 0.4;

						creditsPopup = new CreditsPopUp(FlxG.width + 1, 200);
						creditsPopup.camera = camHUD;
						creditsPopup.scrollFactor.set();
						creditsPopup.x = creditsPopup.width * -1;
						add(creditsPopup);
	
						FlxTween.tween(creditsPopup, {x: 0}, 0.5, {ease: FlxEase.backOut, onComplete: function(tweeen:FlxTween)
						{
							FlxTween.tween(creditsPopup, {x: creditsPopup.width * -1} , 1, {ease: FlxEase.backIn, onComplete: function(tween:FlxTween)
							{
								creditsPopup.destroy();
							}, startDelay: 3});
						}});
				}

				notes.forEachAlive(function(note:Note) {
					if(ClientPrefs.data.opponentStrums || note.mustPress)
					{
						note.copyAlpha = false;
						note.alpha = note.multAlpha;
						if(ClientPrefs.data.middleScroll && !note.mustPress)
							note.alpha *= 0.35;
					}
				});

				stagesFunc(function(stage:BaseStage) stage.countdownTick(tick, swagCounter));
				callOnLuas('onCountdownTick', [swagCounter]);
				callOnHScript('onCountdownTick', [tick, swagCounter]);

				swagCounter += 1;
			}, 5);
		}
		return true;
	}

	inline private function createCountdownSprite(image:String, antialias:Bool):FlxSprite
	{
		var spr:FlxSprite = new FlxSprite().loadGraphic(Paths.image(image));
		spr.cameras = [camHUD];
		spr.scrollFactor.set();
		spr.updateHitbox();

		if (PlayState.isPixelStage)
			spr.setGraphicSize(Std.int(spr.width * daPixelZoom));

		spr.screenCenter();
		spr.antialiasing = antialias;
		insert(members.indexOf(notes), spr);
		FlxTween.tween(spr, {/*y: spr.y + 100,*/ alpha: 0}, Conductor.crochet / 1000, {
			ease: FlxEase.cubeInOut,
			onComplete: function(twn:FlxTween)
			{
				remove(spr);
				spr.destroy();
			}
		});
		return spr;
	}

	public function addBehindGF(obj:FlxBasic)
	{
		insert(members.indexOf(gfGroup), obj);
	}
	public function addBehindBF(obj:FlxBasic)
	{
		insert(members.indexOf(boyfriendGroup), obj);
	}
	public function addBehindDad(obj:FlxBasic)
	{
		insert(members.indexOf(dadGroup), obj);
	}

	public function clearNotesBefore(time:Float)
	{
		var i:Int = unspawnNotes.length - 1;
		while (i >= 0) {
			var daNote:Note = unspawnNotes[i];
			if(daNote.strumTime - 350 < time)
			{
				daNote.active = false;
				daNote.visible = false;
				daNote.ignoreNote = true;

				daNote.kill();
				unspawnNotes.remove(daNote);
				daNote.destroy();
			}
			--i;
		}

		i = notes.length - 1;
		while (i >= 0) {
			var daNote:Note = notes.members[i];
			if(daNote.strumTime - 350 < time)
			{
				daNote.active = false;
				daNote.visible = false;
				daNote.ignoreNote = true;

				daNote.kill();
				notes.remove(daNote, true);
				daNote.destroy();
			}
			--i;
		}
	}

	public function updateScore(miss:Bool = false)
	{
		var str:String = ratingName;
		if(totalPlayed != 0)
		{
			var percent:Float = CoolUtil.floorDecimal(ratingPercent * 100, 2);
			str += ' ($percent%) - $ratingFC';
		}

		if (ClientPrefs.data.Lenguage == 'Español')
		{
			scoreTxt.text =  'NPS: ' + nps
			+ ' (Max ' + maxNPS + ')' 
			+ ' | ' + 'Puntaje: ' + songScore 
			+ ' | Fallos: ' + songMisses 
			+ ' | Precision: ' + Highscore.floorDecimal(ratingPercent * 100, 2) + '%' 
			+ ' | '
			+ (ratingName != '?' ? '($ratingFC) ' + ratingName : 'N/A');

		} else {
			scoreTxt.text =  'NPS: ' + nps
			+ ' (Max ' + maxNPS + ')' 
			+ ' | ' + 'Score: ' + songScore 
			+ ' | Combo Breaks: ' + songMisses 
			+ ' | Accuracy: ' + Highscore.floorDecimal(ratingPercent * 100, 2) + '%' 
			+ ' | '
			+ (ratingName != '?' ? '($ratingFC) ' + ratingName : 'N/A');
		}

		if(ClientPrefs.data.scoreZoom && !miss && !cpuControlled)
		{
			if(scoreTxtTween != null) {
				scoreTxtTween.cancel();
			}
			scoreTxt.scale.x = 1.075;
			scoreTxt.scale.y = 1.075;
			scoreTxtTween = FlxTween.tween(scoreTxt.scale, {x: 1, y: 1}, 0.2, {
				onComplete: function(twn:FlxTween) {
					scoreTxtTween = null;
				}
			});
		}
		callOnScripts('onUpdateScore', [miss]);
	}

	public function setSongTime(time:Float)
	{
		if(time < 0) time = 0;

		FlxG.sound.music.pause();
		vocals.pause();

		FlxG.sound.music.time = time;
		FlxG.sound.music.pitch = playbackRate;
		FlxG.sound.music.play();

		if (Conductor.songPosition <= vocals.length)
		{
			vocals.time = time;
			vocals.pitch = playbackRate;
		}
		vocals.play();
		Conductor.songPosition = time;
	}

	public function startNextDialogue() {
		dialogueCount++;
		callOnScripts('onNextDialogue', [dialogueCount]);
	}

	public function skipDialogue() {
		callOnScripts('onSkipDialogue', [dialogueCount]);
	}

	var previousFrameTime:Int = 0;
	var lastReportedPlayheadPosition:Int = 0;
	var songTime:Float = 0;

	function startSong():Void
	{
		startingSong = false;

		previousFrameTime = FlxG.game.ticks;

		@:privateAccess
		FlxG.sound.playMusic(inst._sound, 1, false);
		FlxG.sound.music.pitch = playbackRate;
		FlxG.sound.music.onComplete = finishSong.bind();
		vocals.play();

		if(startOnTime > 0) setSongTime(startOnTime - 500);
		startOnTime = 0;

		if(paused) {
			//trace('Oopsie doopsie! Paused sound');
			FlxG.sound.music.pause();
			vocals.pause();
		}

		songPercent = (curTime / songLength);

		// Song duration in a float, useful for the time left feature

		timeTxt.scale.x = 1.095;
		timeTxt.scale.y = 1.095;
		timeBar.scale.x = 1;
		timeBar.scale.x = 0.01;
		FlxTween.tween(timeBar.scale, { x: 1 }, 1, { ease: FlxEase.expoOut });
		FlxTween.tween(timeTxt, {alpha: 1}, 0.5, {ease: FlxEase.circOut});
		FlxTween.tween(timeTxt.scale, {x: 1, y: 1}, 0.75, {ease: FlxEase.backOut});

		songLength = FlxG.sound.music.length;
		FlxTween.tween(timeBar, {alpha: 1}, 0.5, {ease: FlxEase.circOut});
		FlxTween.tween(timeTxt, {alpha: 1}, 0.5, {ease: FlxEase.circOut});
		FlxTween.tween(timeTxt, {alpha: 1}, 0.5, {ease: FlxEase.circOut});
		FlxTween.tween(timePercentTxt, {alpha: 1}, 0.5, {ease: FlxEase.circOut});

		#if desktop
		// Updating Discord Rich Presence (with Time Left)
		DiscordClient.changePresence(detailsText, SONG.song + " (" + storyDifficultyText + ")", iconP2.getCharacter(), true, songLength);
		#end
		setOnScripts('songLength', songLength);
		callOnScripts('onSongStart');
	}

	var debugNum:Int = 0;
	private var noteTypes:Array<String> = [];
	private var eventsPushed:Array<String> = [];
	private function generateSong(dataPath:String):Void
	{
		// FlxG.log.add(ChartParser.parse());
		songSpeed = PlayState.SONG.speed;
		songSpeedType = ClientPrefs.getGameplaySetting('scrolltype');
		switch(songSpeedType)
		{
			case "multiplicative":
				songSpeed = SONG.speed * ClientPrefs.getGameplaySetting('scrollspeed');
			case "constant":
				songSpeed = ClientPrefs.getGameplaySetting('scrollspeed');
		}

		var songData = SONG;
		Conductor.bpm = songData.bpm;

		curSong = songData.song;

		vocals = new FlxSound();
		if (songData.needsVoices) vocals.loadEmbedded(Paths.voices(songData.song));

		vocals.pitch = playbackRate;
		FlxG.sound.list.add(vocals);

		inst = new FlxSound().loadEmbedded(Paths.inst(songData.song));
		FlxG.sound.list.add(inst);

		notes = new FlxTypedGroup<Note>();
		add(notes);

		var noteData:Array<SwagSection>;

		// NEW SHIT
		noteData = songData.notes;

		var file:String = Paths.json(songName + '/events');
		#if MODS_ALLOWED
		if (FileSystem.exists(Paths.modsJson(songName + '/events')) || FileSystem.exists(file)) {
		#else
		if (OpenFlAssets.exists(file)) {
		#end
			var eventsData:Array<Dynamic> = Song.loadFromJson('events', songName).events;
			for (event in eventsData) //Event Notes
				for (i in 0...event[1].length)
					makeEvent(event, i);
		}

		for (section in noteData)
		{
			for (songNotes in section.sectionNotes)
			{
				var daStrumTime:Float = songNotes[0];
				var daNoteData:Int = Std.int(songNotes[1] % 4);
				var gottaHitNote:Bool = section.mustHitSection;

				if (songNotes[1] > 3)
				{
					gottaHitNote = !section.mustHitSection;
				}

				var oldNote:Note;
				if (unspawnNotes.length > 0)
					oldNote = unspawnNotes[Std.int(unspawnNotes.length - 1)];
				else
					oldNote = null;

				var swagNote:Note = new Note(daStrumTime, daNoteData, oldNote);
				swagNote.mustPress = gottaHitNote;
				swagNote.sustainLength = songNotes[2];
				swagNote.gfNote = (section.gfSection && (songNotes[1]<4));
				swagNote.noteType = songNotes[3];
				if(!Std.isOfType(songNotes[3], String)) swagNote.noteType = ChartingState.noteTypeList[songNotes[3]]; //Backward compatibility + compatibility with Week 7 charts

				swagNote.scrollFactor.set();

				if (swagNote.noteType == 'Alt Strum') {
					swagNote.scrollFactor.set(1.25,1.25);
					swagNote.cameras = [camGame];
					swagNote.mustPress = false; // since you're probably only gonna use it for the opponent
				}

				var susLength:Float = swagNote.sustainLength;

				susLength = susLength / Conductor.stepCrochet;
				unspawnNotes.push(swagNote);

				var floorSus:Int = Math.floor(susLength);
				if(floorSus > 0) {
					for (susNote in 0...floorSus+1)
					{
						oldNote = unspawnNotes[Std.int(unspawnNotes.length - 1)];

						var sustainNote:Note = new Note(daStrumTime + (Conductor.stepCrochet * susNote), daNoteData, oldNote, true);
						sustainNote.mustPress = gottaHitNote;
						sustainNote.gfNote = (section.gfSection && (songNotes[1]<4));
						sustainNote.noteType = swagNote.noteType;
						sustainNote.scrollFactor.set();
						if (sustainNote.noteType == 'Alt Strum') {
							sustainNote.scrollFactor.set(1.25,1.25);
							sustainNote.cameras = [camGame];
							sustainNote.mustPress = false; // since you're probably only gonna use it for the opponent
						}
						swagNote.tail.push(sustainNote);
						sustainNote.parent = swagNote;
						unspawnNotes.push(sustainNote);
						
						sustainNote.correctionOffset = swagNote.height / 2;
						if(!PlayState.isPixelStage)
						{
							if(oldNote.isSustainNote)
							{
								oldNote.scale.y *= Note.SUSTAIN_SIZE / oldNote.frameHeight;
								oldNote.scale.y /= playbackRate;
								oldNote.updateHitbox();
							}

							if(ClientPrefs.data.downScroll)
								sustainNote.correctionOffset = 0;
						}
						else if(oldNote.isSustainNote)
						{
							oldNote.scale.y /= playbackRate;
							oldNote.updateHitbox();
						}

						if (sustainNote.mustPress) sustainNote.x += FlxG.width / 2; // general offset
						else if(ClientPrefs.data.middleScroll)
						{
							sustainNote.x += 310;
							if(daNoteData > 1) //Up and Right
							{
								sustainNote.x += FlxG.width / 2 + 25;
							}
						}
					}
				}

				if (swagNote.mustPress)
				{
					swagNote.x += FlxG.width / 2; // general offset
				}
				else if(ClientPrefs.data.middleScroll)
				{
					swagNote.x += 310;
					if(daNoteData > 1) //Up and Right
					{
						swagNote.x += FlxG.width / 2 + 25;
					}
				}

				if(!noteTypes.contains(swagNote.noteType)) {
					noteTypes.push(swagNote.noteType);
				}
			}
		}
		for (event in songData.events) //Event Notes
			for (i in 0...event[1].length)
				makeEvent(event, i);

		unspawnNotes.sort(sortByTime);
		generatedMusic = true;
	
}


function hideshit() // basically a camHUD.visible = false; except it doesnt fuck up dialogue (and i didnt want to do another camera for the dialogue)
	{
		if(!ClientPrefs.data.hideHud) {
			healthBar.alpha = 0;
			healthBarOverlay.alpha = 0;
			iconP1.alpha = 0;
			iconP2.alpha = 0;
			scoreTxt.alpha = 0;
		}
		judgementCounter.alpha = 0;  
		strumLineNotes.forEachAlive(function(spr:FlxSprite) {
			spr.alpha = 0;
		});
		grpNoteSplashes.forEachAlive(function(spr:FlxSprite) {
			spr.alpha = 0;
		});
		notes.forEachAlive(function(spr:FlxSprite) {
			spr.alpha = 0;
		});
		if(showTime) {
	    	timeBar.alpha = 0;
			timeTxt.alpha = 0;
		}
	}
	
	function restoreHUDElements()
	{
		if(!ClientPrefs.data.hideHud) {
			healthBar.alpha = 1;
			healthBarOverlay.alpha = 1;
			iconP1.alpha = 1;
			iconP2.alpha = 1;
			scoreTxt.alpha = 1;
		} 
		judgementCounter.alpha = 1;
		strumLineNotes.forEachAlive(function(spr:FlxSprite) {
			spr.alpha = 1;
		});
		grpNoteSplashes.forEachAlive(function(spr:FlxSprite) {
			spr.alpha = 1;
		});
		notes.forEachAlive(function(spr:FlxSprite) {
			spr.alpha = 1;
		});
		if(showTime) {
	    	timeBar.alpha = 1;
		    timeTxt.alpha = 1;
		}
	}
	
	function showonlystrums() // does the thing that it says
	{
		if(!ClientPrefs.data.hideHud) {
	    	healthBar.alpha = 0;
	     	healthBarOverlay.alpha = 0;
	        iconP1.alpha = 0;
	    	iconP2.alpha = 0;
			scoreTxt.alpha = 0;
		}
		judgementCounter.alpha = 1;
		strumLineNotes.forEachAlive(function(spr:FlxSprite) {
			spr.alpha = 1;
		});
		grpNoteSplashes.forEachAlive(function(spr:FlxSprite) {
			spr.alpha = 1;
		});
		notes.forEachAlive(function(spr:FlxSprite) {
			spr.alpha = 1;
		});
		if(showTime) {
	     	timeBar.alpha = 1;
	     	timeTxt.alpha = 1;
		}
	}

	function hideHUDFade() // DONT USE THIS AT STEP 0!!!
	{
		FlxTween.tween(camHUD, {alpha:0}, 1);
	}
	
	function showHUDFade()
	{
		FlxTween.tween(camHUD, {alpha:1}, 1);
	}

	function poop() {
		if(showTime) {
			timeBar.alpha = 0;
			timeTxt.alpha = 0;
	    }
		showCombo = false;
		showComboNum = false;
		showRating = false;
		opponentStrums.forEach(function(spr:FlxSprite) {
			if(ClientPrefs.data.opponentStrums) spr.alpha = 0;
		});
	}
	function crap() {
		if(showTime) {
			timeBar.alpha = 1;
			timeTxt.alpha = 1;
	    }
		opponentStrums.forEach(function(spr:FlxSprite) {
			if(ClientPrefs.data.opponentStrums) spr.alpha = 1;
		});
	}

	// called only once per different event (Used for precaching)
	function eventPushed(event:EventNote) {
		eventPushedUnique(event);
		if(eventsPushed.contains(event.event)) {
			return;
		}

		stagesFunc(function(stage:BaseStage) stage.eventPushed(event));
		eventsPushed.push(event.event);
	}

	// called by every event with the same name
	function eventPushedUnique(event:EventNote) {
		switch(event.event) {
			case 'Change Character':
				var charType:Int = 0;
				switch(event.value1.toLowerCase()) {
					case 'gf' | 'girlfriend' | '1':
						charType = 2;
					case 'dad' | 'opponent' | '0':
						charType = 1;
					case 'player3' | 'alt opponent':
						charType = 3;
					default:
						charType = Std.parseInt(event.value1);
						if(Math.isNaN(charType)) charType = 0;
				}

				var newCharacter:String = event.value2;
				addCharacterToList(newCharacter, charType);
			
			case 'Play Sound':
				precacheList.set(event.value1, 'sound');
				Paths.sound(event.value1);
		}
		stagesFunc(function(stage:BaseStage) stage.eventPushedUnique(event));
	}

	function eventEarlyTrigger(event:EventNote):Float {
		var returnedValue:Null<Float> = callOnScripts('eventEarlyTrigger', [event.event, event.value1, event.value2, event.strumTime], true, [], [0]);
		if(returnedValue != null && returnedValue != 0 && returnedValue != FunkinLua.Function_Continue) {
			return returnedValue;
		}

		switch(event.event) {
			case 'Kill Henchmen': //Better timing so that the kill sound matches the beat intended
				return 280; //Plays 280ms before the actual position
		}
		return 0;
	}

	public static function sortByTime(Obj1:Dynamic, Obj2:Dynamic):Int
		return FlxSort.byValues(FlxSort.ASCENDING, Obj1.strumTime, Obj2.strumTime);

	function makeEvent(event:Array<Dynamic>, i:Int)
	{
		var subEvent:EventNote = {
			strumTime: event[0] + ClientPrefs.data.noteOffset,
			event: event[1][i][0],
			value1: event[1][i][1],
			value2: event[1][i][2]
		};
		eventNotes.push(subEvent);
		eventPushed(subEvent);
		callOnScripts('onEventPushed', [subEvent.event, subEvent.value1 != null ? subEvent.value1 : '', subEvent.value2 != null ? subEvent.value2 : '', subEvent.strumTime]);
	}

	var assDelayy:Int = 0;
	public var skipArrowStartTween:Bool = false; //for lua
	private function generateStaticArrows(player:Int):Void
	{
		var strumLineX:Float = ClientPrefs.data.middleScroll ? STRUM_X_MIDDLESCROLL : STRUM_X;
		var strumLineY:Float = ClientPrefs.data.downScroll ? (FlxG.height - 150) : 50;

		for (i in 0...4)
		{
			// FlxG.log.add(i);
			var targetAlpha:Float = 1;
			if (player < 1)
			{
				if(!ClientPrefs.data.opponentStrums) targetAlpha = 0;
				else if(ClientPrefs.data.middleScroll) targetAlpha = 0.35;
			}
			var babyArrow:StrumNote;
			if (player < 2)
				babyArrow = new StrumNote(strumLineX, strumLineY, i, player);
			else {
				babyArrow = new StrumNote(altStrumLine.x, altStrumLine.y, i, 0);
				babyArrow.scrollFactor.set(1.5,1.5);
				babyArrow.alpha = 0;
			}

			babyArrow.downScroll = ClientPrefs.data.downScroll;
			if (player < 2) {
				if (!skipArrowStartTween)
				{
					babyArrow.y -= 10;
					babyArrow.alpha = 0;
					FlxTween.tween(babyArrow, {y: babyArrow.y + 10, alpha: targetAlpha}, 1, {ease: FlxEase.circOut, startDelay: 0.5 + assDelayy + (0.2 * i)});
				}
				else
				{
					babyArrow.alpha = targetAlpha;
				}
			} else
				babyArrow.alpha = 0;

			if (player == 1)
			{
				playerStrums.add(babyArrow);
			}
			else if (player == 2)
			{
				altStrums.add(babyArrow);
			}
			else
			{
				if(ClientPrefs.data.middleScroll)
				{
					babyArrow.x += 310;
					if(i > 1) { //Up and Right
						babyArrow.x += FlxG.width / 2 + 25;
					}
				}
				opponentStrums.add(babyArrow);
			}

			if (player == 2)
			{
				altStrumLineNotes.add(babyArrow);
			}
			else
			{
				strumLineNotes.add(babyArrow);
			}
			
			babyArrow.postAddedToGroup();
		}
	}

	override function openSubState(SubState:FlxSubState)
	{
		stagesFunc(function(stage:BaseStage) stage.openSubState(SubState));
		if (paused)
		{
			if (FlxG.sound.music != null)
			{
				FlxG.sound.music.pause();
				vocals.pause();
			}

			if (startTimer != null && !startTimer.finished) startTimer.active = false;
			if (finishTimer != null && !finishTimer.finished) finishTimer.active = false;
			if (songSpeedTween != null) songSpeedTween.active = false;

			var chars:Array<Character> = [boyfriend, gf, dad];
			for (char in chars)
				if(char != null && char.colorTween != null)
					char.colorTween.active = false;

			#if LUA_ALLOWED
			for (tween in modchartTweens) tween.active = false;
			for (timer in modchartTimers) timer.active = false;
			#end
		}

		super.openSubState(SubState);
	}

	override function closeSubState()
	{
		stagesFunc(function(stage:BaseStage) stage.closeSubState());
		if (paused)
		{
			if (FlxG.sound.music != null && !startingSong)
			{
				resyncVocals();
			}

			if (startTimer != null && !startTimer.finished) startTimer.active = true;
			if (finishTimer != null && !finishTimer.finished) finishTimer.active = true;
			if (songSpeedTween != null) songSpeedTween.active = true;

			var chars:Array<Character> = [boyfriend, gf, dad];
			for (char in chars)
				if(char != null && char.colorTween != null)
					char.colorTween.active = true;

			#if LUA_ALLOWED
			for (tween in modchartTweens) tween.active = true;
			for (timer in modchartTimers) timer.active = true;
			#end

			paused = false;
			callOnScripts('onResume');
			resetRPC(startTimer != null && startTimer.finished);
		}

		super.closeSubState();
	}

	override public function onFocus():Void
	{
		if (health > 0 && !paused) resetRPC(Conductor.songPosition > 0.0);
		super.onFocus();
	}

	override public function onFocusLost():Void
	{
		#if desktop
		if (health > 0 && !paused) DiscordClient.changePresence(detailsPausedText, SONG.song + " (" + storyDifficultyText + ")", iconP2.getCharacter());
		#end

		super.onFocusLost();
	}

	// Updating Discord Rich Presence.
	function resetRPC(?cond:Bool = false)
	{
		#if desktop
		if (cond)
			DiscordClient.changePresence(detailsText, SONG.song + " (" + storyDifficultyText + ")", iconP2.getCharacter(), true, songLength - Conductor.songPosition - ClientPrefs.data.noteOffset);
		else
			DiscordClient.changePresence(detailsText, SONG.song + " (" + storyDifficultyText + ")", iconP2.getCharacter());
		#end
	}

	function resyncVocals():Void
	{
		if(finishTimer != null) return;
		
		FlxG.sound.music.play();
		FlxG.sound.music.pitch = playbackRate;
		vocals.pause();

		Conductor.songPosition = FlxG.sound.music.time;
		if (Conductor.songPosition <= vocals.length)
		{
			vocals.time = Conductor.songPosition;
			vocals.pitch = playbackRate;
		}

		vocals.play();
	}

	function restoreTitleWin() {
		openfl.Lib.application.window.title = "Bambi's Purgatory";
	}

	static function quickSpin(sprite)
	{
		FlxTween.angle(sprite, 0, 360, 0.5, {
			type: FlxTweenType.ONESHOT,
			ease: FlxEase.quadInOut,
			startDelay: 0,
			loopDelay: 0
		});
	}

	function refreshTrail(the:Int) {
		var trailVisible:Bool;
		switch(the)
		{
			case 0:
				trailVisible = playerTrail.visible;
				remove(playerTrail);
				playerTrail = new FlxTrail(boyfriend, null, 4, 12, 0.3, 0.069); //nice
				playerTrail.visible = trailVisible;
				addBehindDad(playerTrail);
			default:
				trailVisible = scaryTrail.visible;
				remove(scaryTrail);
				scaryTrail = new FlxTrail(dad, null, 4, 12, 0.3, 0.069); //nice
				scaryTrail.visible = trailVisible;
				addBehindDad(scaryTrail);
		}
    }

	public var paused:Bool = false;
	public var canReset:Bool = true;
	var startedCountdown:Bool = false;
	var canPause:Bool = true;
	private var poipInMahPahntsIsGud:Bool = true;

	private var banduJunk:Float = 0;
	private var dadFront:Bool = false;
	private var hasJunked:Bool = false;
	private var wtfThing:Bool = false;
	private var orbit:Bool = true;
	public var badaiTime:Bool = false;

	override public function update(elapsed:Float)
	{
		elapsedtime += elapsed;

		reloadHealthBarColors();
		callOnScripts('onUpdate', [elapsed]);

		for (hudcam in [camSus, camNOTES]) {
			if (hudcam != null) {
			hudcam.zoom = camHUD.zoom;
			hudcam.visible = camHUD.visible;
			hudcam.x = camHUD.x;
			hudcam.y = camHUD.y;
			hudcam.alpha = camHUD.alpha;
				}  
			}
		if (ClientPrefs.data.wiggle)
			{	
				wiggleShit.waveAmplitude = FlxMath.lerp(wiggleShit.waveAmplitude, 0, 0.035 / (ClientPrefs.data.framerate / 75));
				wiggleShit.waveFrequency = FlxMath.lerp(wiggleShit.waveFrequency, 0, 0.035 / (ClientPrefs.data.framerate / 75));

	   			wiggleShit.update(elapsed);
			}

	   var floatyChars:Array<Character> = [dad, gf, boyfriend];

	   for (who in floatyChars) 
	   {
		   if (noteCharacters2.contains(who.curCharacter.toLowerCase()))
		   {
			   for (spr in opponentStrums) 
				   {
						   for (i in 0...4) 
						   	{
								spr.texture = 'notes/shredNotes';
							}
				   }
			   for (note in unspawnNotes) 
				   {
					   if (!note.mustPress) 
					    {
						   for (i in 0...4) 
							   	{
									note.texture = 'notes/shredNotes';
								}
						}
				   }			
		   }
	   }

		for (who in floatyChars) 
		{
			if (noteCharacters.contains(who.curCharacter.toLowerCase()))
			{
				for (spr in opponentStrums) 
					{
   				 		for (i in 0...4) 
							{
       				 			spr.texture = 'notes/polynote';
   					 		}
					}
				for (note in unspawnNotes) 
					{
    					if (!note.mustPress) 
						{
        					for (i in 0...4) 
								{
           			 				note.texture = 'notes/polynote';
       			 				}
   			 			}
					}			
			}
		}

		if (!dramaticbnwTime)
			{
				switch (SONG.stage) 
				{
					// some stuff //
					case '3dRed' | '3dScary' | '3dFucked' | 'houseroof' | 'farmNight': // Dark character thing
						if (SONG.player2 != 'bambi-god2d') dad.color = 0xFF878787;
						gf.color = 0xFF878787;
						if(!boyfriend.curCharacter.startsWith('golden-tristan')) boyfriend.color = 0xFF878787;
					case 'spooky': // Darker character thing
						dad.color = 0xFF383838;
						gf.color = 0xFF383838;
						if(!boyfriend.curCharacter.startsWith('golden-tristan')) boyfriend.color = 0xFF383838;
					case 'bambersHell': // glowing guy
						if(!uphIntroTime) {
							gf.color = 0xFF878787;
							if(!boyfriend.curCharacter.startsWith('golden-tristan'))
								boyfriend.color = 0xFF878787;
						}
					case 'farmSunset' | 'houseSunset': // sunset !!
					if (waoscolorshatt){
						dad.color = 0xFFFF8FB2;
						gf.color = 0xFFFF8FB2;
						boyfriend.color = 0xFFFF8FB2;
					}
				}
			}
	
			var floatyChars:Array<Character> = [dad, gf, boyfriend, player3];
			for (who in floatyChars) {
				var cammy:Bool = (who == boyfriend) ? cameraOnBF : cameraOnDad;
				var floatOffset:Float = floatyChars.indexOf(who) * 0.3;
				if(funnyFloatyBoys.contains(who.curCharacter.toLowerCase()) && canFloat && !laggingRSOD) {
					who.y += (Math.sin(elapsedtime + floatOffset) * 0.6);
					if(who.animation.curAnim != null && !who.animation.curAnim.name.startsWith('idle') && cammy)
						camFollow.y += (Math.sin(elapsedtime) * 0.6);
				}
				if(funnySideFloatyBoys.contains(who.curCharacter.toLowerCase()) && canSlide && !laggingRSOD) {
					who.x += (Math.cos(elapsedtime + floatOffset) * 0.6);
					if(who.animation.curAnim != null && !who.animation.curAnim.name.startsWith('idle') && cammy)
						camFollow.x += (Math.sin(elapsedtime) * 0.6);
				}
				if(funnyRotatorBoys.contains(who.curCharacter.toLowerCase()) && canRotate && !laggingRSOD) {
					who.angle += (Math.sin(elapsedtime + floatOffset) * 0.015);
					// FlxTween.angle(dad, -5, 5, Conductor.crochet / 300, {ease: FlxEase.sineInOut, type: PINGPONG});
				}
			}
		if(canFloat && !funnyFloatyBoys.contains(boyfriend.curCharacter.toLowerCase())) 
		{
			switch (curStage) 
			{
				case '3dTunnel': 
				{
					boyfriend.y += (Math.sin(elapsedtime) * 0.3);
				}
			}
		}

		switch (curStage)
		{
			case 'bambersHell':
				gridSine += 180 * elapsed;
				gridBG.alpha = 1 - Math.sin((Math.PI * gridSine) / 180);

				bgshitH.y += (Math.sin(elapsedtime*0.7) * 0.55);
				bgshitH2.y += (Math.sin(elapsedtime*0.6) * 0.5);
				cloudsH.x += (Math.sin(elapsedtime*0.45) * 0.75);
			case 'ourple' | 'double':
				phones.angle = Math.sin(elapsedtime*0.7) * 1;
				phones.y += (Math.sin(elapsedtime*0.7) * 0.1);
		}

		var iconOffset:Int = 26;

		grain.update(elapsed);
		heath.update(elapsed);

		if (SONG.song.toLowerCase() == 'reality breaking oldest')
			{
				grain_shader.update(elapsed);
				if(stupidInt > 0 && !stupidBool)
					{
						grain_shader.shader.grainsize.value = [FlxG.random.float(1, 2)];
						grain_shader.shader.lumamount.value = [FlxG.random.float(1, 2)];
						shader_chromatic_abberation.setChrome(FlxG.random.float(0.01, 0.015));
						stupidInt -= 1;
					}
				else if(!stupidBool)
					{
						doneloll2 = false;
					}
				else
					{
						shader_chromatic_abberation.setChrome(FlxG.random.float(0.01, 0.015));
						grain_shader.shader.grainsize.value = [FlxG.random.float(1, 2)];
						grain_shader.shader.lumamount.value = [FlxG.random.float(1, 2)];
					}
				if(!doneloll2)
					{
						grain_shader.shader.grainsize.value = [0.01];
						grain_shader.shader.lumamount.value = [0.05];
						shader_chromatic_abberation.setChrome(FlxG.random.float(0.003, 0.005));
					}
			}

		var strumLineX:Float = ClientPrefs.data.middleScroll ? STRUM_X_MIDDLESCROLL : STRUM_X;
		var strumLineY:Float = ClientPrefs.data.downScroll ? (FlxG.height - 150) : 50;

		if (curbg != null) {
			if (curbg.active) {
				var shad = cast(curbg.shader, shaders.Shaders.GlitchShader);
				shad.uTime.value[0] += elapsed;
			}
		}

		if (shakeCam)
		{
			if(SONG.song.toLowerCase() != "reality breaking")
				FlxG.camera.shake(0.015, 0.015);
		    if(gf.animOffsets.exists('scared')) {
	     		gf.playAnim('scared', true);
		    }
		}

		if(SONG.song.toLowerCase() == 'rebound')
		{
			for(str in playerStrums) {
				str.angle = 15*Math.cos((elapsedtime*2)+str.ID*2);
				str.y = strumLineY+(25*Math.sin((elapsedtime*2)+str.ID*2));
			}
			for(str in opponentStrums) {
				str.angle = 15*Math.cos((elapsedtime*2)+str.ID*2);
				str.y = strumLineY+(25*Math.sin((elapsedtime*2)+str.ID*2));
			}
		}

		if(SONG.song.toLowerCase() == 'upheaval')
			{
				for(str in playerStrums) {
					str.angle = 15*Math.cos((elapsedtime*2)+str.ID*2);
					str.y = strumLineY+(25*Math.sin((elapsedtime*2)+str.ID*2));
				}
				for(str in opponentStrums) {
					str.angle = 15*Math.cos((elapsedtime*2)+str.ID*2);
					str.y = strumLineY+(25*Math.sin((elapsedtime*2)+str.ID*2));
				}
			}
		{
			var balls = notesHitArray.length - 1;
			while (balls >= 0)
				{
					var cock:Date = notesHitArray[balls];
					if (cock != null && cock.getTime() + 1000 < Date.now().getTime())
						notesHitArray.remove(cock);
					else
						balls = 0;
					balls--;
				}

		if (SONG.song.toLowerCase() == 'disposition'|| SONG.song.toLowerCase() == 'disposition old')
		    {

				for(str in playerStrums)
				{
					str.angle = 60 * Math.cos((elapsedtime * 2) + str.ID * 2);
					str.y = strumLineY +(20 * Math.sin((elapsedtime*2) + str.ID * 2));
				}
			
				for(str in opponentStrums)
				{
					str.angle = 60*Math.cos((elapsedtime*2)+str.ID*2);
					str.y = strumLineY +(20*Math.sin((elapsedtime*2)+str.ID*2));
				}

				playerStrums.forEach(function(spr:FlxSprite) // WHY DID THE FPS THING STOP WORKING GRGRGRGGRGRGRGRGGRRG
				{
					spr.x -= Math.sin(elapsedtime) * 1.3;
					spr.scale.x = Math.abs(Math.sin(elapsedtime - 5) * ((spr.ID % 2) == 0 ? 1 : -1)) / 4;
	
					spr.scale.y = Math.abs((Math.sin(elapsedtime) * ((spr.ID % 2) == 0 ? 1 : -1)) / 2);
	
					spr.scale.x += 0.3;
					spr.scale.y += 0.3;
	
					spr.scale.x *= 1.15;
					spr.scale.y *= 1.15;
				});
				opponentStrums.forEach(function(spr:FlxSprite)
				{
					spr.x += Math.sin(elapsedtime) * 1.3;

					spr.scale.x = Math.abs(Math.sin(elapsedtime - 5) * ((spr.ID % 2) == 0 ? 1 : -1)) / 4;
	
					spr.scale.y = Math.abs((Math.sin(elapsedtime) * ((spr.ID % 2) == 0 ? 1 : -1)) / 2);
	
					spr.scale.x += 0.3;
					spr.scale.y += 0.3;
	
					spr.scale.x *= 1.15;
					spr.scale.y *= 1.15;
				});
			}

		FlxG.camera.followLerp = 0;
		if(!inCutscene && !paused) {
			var angleLerp:Float = CoolUtil.boundTo(CoolUtil.boundTo(elapsed * 2.4 / 0.4, 0, 1) * cameraSpeed * playbackRate, 0, 1);
			var lerpVal:Float = CoolUtil.boundTo(elapsed * 2.4 * cameraSpeed * playbackRate, 0, 1);
			if (!laggingRSOD)
				camFollow.setPosition(FlxMath.lerp(camFollow.x, camFollow.x, lerpVal), FlxMath.lerp(camFollow.y, camFollow.y, lerpVal));
			FlxG.camera.followLerp = FlxMath.bound(elapsed * 2.4 * cameraSpeed * playbackRate / (FlxG.updateFramerate / 60), 0, 1);
            camGame.angle = FlxMath.lerp(camGame.angle, 0 + charAnimOffsetX / 30, angleLerp);
			if(!startingSong && !endingSong && boyfriend.animation.curAnim != null && boyfriend.animation.curAnim.name.startsWith('idle')) {
				boyfriendIdleTime += elapsed;
				if(boyfriendIdleTime >= 0.15) { // Kind of a mercy thing for making the achievement easier to get as it's apparently frustrating to some playerss
					boyfriendIdled = true;
				}
			} else {
				boyfriendIdleTime = 0;
			}
		}

		for(i in 0...notesHitArray.length)
			{
				var cock:Date = notesHitArray[i];
				if (cock != null)
					if (cock.getTime() + 2000 < Date.now().getTime())
					notesHitArray.remove(cock);
			}

		nps = notesHitArray.length;
		nps = Math.floor(notesHitArray.length / 2);

		if (nps > maxNPS)
				maxNPS = nps;
		}
		fakeHealth = FlxMath.lerp(fakeHealth, health, CoolUtil.boundTo(elapsed * 20, 0, 1));

		super.update(elapsed);

		if (generatedMusic && !endingSong && !isCameraOnForcedPos && !laggingRSOD)
			moveCameraSection();

		if(ClientPrefs.data.eyesores)
			{
				screenshader.shader.uTime.value[0] += elapsed;
				if (shakeCam && eyesoreson) {
					screenshader.shader.uampmul.value[0] = 1;
				} else {
					screenshader.shader.uampmul.value[0] -= (elapsed / 2);
				}
				//screenshader.Enabled = shakeCam && eyesoreson;

				glitchShader.update(elapsed);
				glitchShader.set_Enabled(glitchCam);
			}

		setOnScripts('curDecStep', curDecStep);
		setOnScripts('curDecBeat', curDecBeat);

		if (dnbBounce && !laggingRSOD) {
			if (!iconP1.isAnim) {
				iconP1.setGraphicSize(Std.int(FlxMath.lerp(150, iconP1.width, 0.8)),Std.int(FlxMath.lerp(150, iconP1.height, 0.8)));
				iconP1.updateHitbox();
			}

			if (!iconP2.isAnim) {
		    	iconP2.setGraphicSize(Std.int(FlxMath.lerp(150, iconP2.width, 0.8)),Std.int(FlxMath.lerp(150, iconP2.height, 0.8)));
				iconP2.updateHitbox();
			}
		}
		if (ogBounce && !laggingRSOD) {
			iconP1.setGraphicSize(Std.int(FlxMath.lerp(150, iconP1.width, 0.50)));
			iconP1.updateHitbox();

	    	iconP2.setGraphicSize(Std.int(FlxMath.lerp(150, iconP2.width, 0.50)));
			iconP2.updateHitbox();
		}

		var iconOffset:Int = 26;

		var hPercent:Float = 1 - (fakeHealth / 2);
	
		iconP1.x = healthBar.x + (healthBar.width * hPercent - iconOffset);
		iconP2.x = healthBar.x + (healthBar.width * hPercent) - (iconP2.width - iconOffset); 

		if (health > 2)
			health = 2;

		if (healthBar.percent < 20){
			iconP1.changeIconStatus(1);
			iconP2.changeIconStatus(2);
			if(curBeat % 2 == 0)
		    	FlxTween.color(scoreTxt, Conductor.stepCrochet / 500, 0xFFFF0000, FlxColor.WHITE, {ease: FlxEase.circOut});
		}
		else if (healthBar.percent > 80){
			iconP1.changeIconStatus(2);
			iconP2.changeIconStatus(1);
		}
		else {
			iconP1.changeIconStatus(0);
			iconP2.changeIconStatus(0);

			FlxTween.color(scoreTxt, 0.3 / playbackRate, FlxColor.WHITE, 0xFFFFFFFF, {ease: FlxEase.linear});
		}

		if(botplayTxt != null && botplayTxt.visible) {
			botplaySine += 180 * elapsed;
			botplayTxt.alpha = 1 - Math.sin((Math.PI * botplaySine) / 180);
		}

		if (controls.PAUSE && startedCountdown && canPause)
		{
			var ret:Dynamic = callOnScripts('onPause', null, true);
			if(ret != FunkinLua.Function_Stop) {
				openPauseMenu();
			}
		}

		if (controls.justPressed('debug_1') && !endingSong && !inCutscene && !SONG.disableDebugButtons)
			openChartEditor();

		if (controls.justPressed('debug_2') && !endingSong && !inCutscene)
			openCharacterEditor();
		
		if (startedCountdown)
			{
				Conductor.songPosition += FlxG.elapsed * 1000 * playbackRate;
			}
	
			if (startingSong)
			{
				if (startedCountdown && Conductor.songPosition >= 0)
					startSong();
				else if(!startedCountdown)
					Conductor.songPosition = -Conductor.crochet * 5;
			}
			else
			{
				if (!paused && updateTime)
				{
					songTime += FlxG.game.ticks - previousFrameTime;
					previousFrameTime = FlxG.game.ticks;
					//Interpolation type beat
					if (Conductor.lastSongPos != Conductor.songPosition && ClientPrefs.data.songLoading)
					{
						songTime = (songTime + Conductor.songPosition) / 2;
						Conductor.lastSongPos = Conductor.songPosition;
						// Conductor.songPosition += FlxG.elapsed * 1000;
						// trace('MISSED FRAME');
					}
	
					if(updateTime) {
						var curTime:Float = Conductor.songPosition - ClientPrefs.data.noteOffset;
						if(curTime < 0) curTime = 0;
						songPercent = (curTime / songLength);
						var songDurationSeconds:Float = FlxMath.roundDecimal(songLength / 1000, 0);
						songPercentThing = FlxMath.roundDecimal(curTime / songLength * 100, ClientPrefs.data.percentDecimals);
						playbackRateDecimal = FlxMath.roundDecimal(playbackRate, 2);
	
						var songCalc:Float = (songLength - curTime);
						if(ClientPrefs.data.timeBarType == 'Time Elapsed' || ClientPrefs.data.timeBarType == 'Modern Time' || ClientPrefs.data.timeBarType == 'Song Name + Time') songCalc = curTime;
	
						var secondsTotal:Int = 0;
	
						secondsTotal = Math.floor(songCalc / 1000);
						if(secondsTotal < 0) secondsTotal = 0;
						if(trollingMode && ClientPrefs.data.songLoading && Conductor.songPosition - FlxG.sound.music.length == endingTimeLimit) secondsTotal == secondsTotal + FlxG.sound.music.length;
	
	
						var hoursRemaining:Int = Math.floor(secondsTotal / 3600);
						var minutesRemaining:Int = Math.floor(secondsTotal / 60) % 60;
						var minutesRemainingShit:String = '' + minutesRemaining;
						var secondsRemaining:String = '' + secondsTotal % 60;
	
						if(secondsRemaining.length < 2) secondsRemaining = '0' + secondsRemaining; //let's see if the old time format works actually
						//if (minutesRemaining == 60) minutesRemaining = 0; //reset the minutes to 0 every time it counts another hour
						if (minutesRemainingShit.length < 2) minutesRemainingShit = '0' + minutesRemaining; 
						//also, i wont add a day thing because there's no way someone can mod a song that's over 24 hours long into this engine
	
						var hoursShown:Int = Math.floor(songDurationSeconds / 3600);
						var minutesShown:Int = Math.floor(songDurationSeconds / 60) % 60;
						var minutesShownShit:String = '' + minutesShown;
						var secondsShown:String = '' + songDurationSeconds % 60;
						if(secondsShown.length < 2) secondsShown = '0' + secondsShown; //let's see if the old time format works actually
						if (minutesShownShit.length < 2) minutesShownShit = '0' + minutesShown;
	
						if(ClientPrefs.data.timeBarType != 'Song Name' && songLength <= 3600000)
							timeTxt.text = FlxStringUtil.formatTime(secondsTotal, false);
	
						if(ClientPrefs.data.timeBarType != 'Song Name' && songLength >= 3600000)
							timeTxt.text = hoursRemaining + ':' + minutesRemainingShit + ':' + secondsRemaining;
	
						if(ClientPrefs.data.timeBarType == 'Modern Time' && songLength <= 3600000)
							timeTxt.text = FlxStringUtil.formatTime(secondsTotal, false) + ' / ' + FlxStringUtil.formatTime(songLength / 1000, false);
	
						if(ClientPrefs.data.timeBarType == 'Modern Time' && songLength >= 3600000)
							timeTxt.text = hoursRemaining + ':' + minutesRemainingShit + ':' + secondsRemaining + ' / ' + hoursShown + ':' + minutesShownShit + ':' + secondsShown;
	
						if(ClientPrefs.data.timeBarType == 'Song Name + Time' && songLength <= 3600000)
							timeTxt.text = SONG.song + ' (' + FlxStringUtil.formatTime(secondsTotal, false) + ' / ' + FlxStringUtil.formatTime(songLength / 1000, false) + ')';
	
						if(ClientPrefs.data.timeBarType == 'Song Name + Time' && songLength >= 3600000)
							timeTxt.text = SONG.song + ' (' + hoursRemaining + ':' + minutesRemainingShit + ':' + secondsRemaining + ' / ' + hoursShown + ':' + minutesShownShit + ':' + secondsShown + ')';
	
						if(ClientPrefs.data.timebarShowSpeed && ClientPrefs.data.timeBarType != 'Song Name') timeTxt.text += ' (' + playbackRateDecimal + 'x)';

						if(ClientPrefs.data.timebarShowSpeed && ClientPrefs.data.timeBarType == 'Song Name') timeTxt.text = SONG.song + ' (' + playbackRateDecimal + 'x)';

						if (cpuControlled) timeTxt.text += ' (Bot)';

						if(ClientPrefs.data.timebarShowSpeed && cpuControlled && ClientPrefs.data.timeBarType == 'Song Name') timeTxt.text = SONG.song + ' (' + playbackRateDecimal + 'x) (Bot)';
					}
				}
	
				if(updateThePercent) {
						var curTime:Float = Conductor.songPosition - ClientPrefs.data.noteOffset;
						if(curTime < 0) curTime = 0;
						songPercent = (curTime / songLength);
						songPercentThing = FlxMath.roundDecimal(curTime / songLength * 100, ClientPrefs.data.percentDecimals);
						if (ClientPrefs.data.timeBarType != 'Kade Engine' && ClientPrefs.data.timeBarType != 'Dave and Bambi')
						{
							timePercentTxt.text = songPercentThing  + '% Completed';
						}
						else
						{
							timePercentTxt.text = songPercentThing  + '%';
						}
				}
			}

		var perfect:Int = ratingsData[0].hits;
		var sicks:Int = ratingsData[1].hits;
		var goods:Int = ratingsData[2].hits;
		var bads:Int = ratingsData[3].hits;
		var shits:Int = ratingsData[4].hits;

		if (ClientPrefs.data.hideNps) {
		npsCounter.text = 'NPS: ' + nps + '';
		}

		if (ClientPrefs.data.hideMaxNps) {
			maxNpsCounter.text = 'NPS (Max): ' + maxNPS + '';
		}

		if (ClientPrefs.data.hideCombo) {
		comboTxt.text = 'Combo: ' + combo + '';
		}

		if (ClientPrefs.data.hideComboBreaks) {
			comboBreaks.text = 'Combo Breaks: ' + songMisses + '';
		}

		if (ClientPrefs.data.hidetotalNotes) {
			totalNotes.text = 'Total Notes: ' + totalNotesjudgement + '';
		}
		if (ClientPrefs.data.hideMisses) {
			misses.text = 'Misses: ' + songMisses + '';
		}

		judgementCounter.text = 'Perfects: ${perfect}\nSicks: ${sicks}\nGoods: ${goods}\nBads: ${bads}\nShits: ${shits}';
		
		if (ClientPrefs.data.removePerfs) {
			judgementCounter.text = 'Sicks: ${sicks}\nGoods: ${goods}\nBads: ${bads}\nShits: ${shits}';
		}

		if (camZooming)
			{
				if(allowGamecamToZoom)
					FlxG.camera.zoom = FlxMath.lerp(defaultCamZoom + zoomAdd, FlxG.camera.zoom, CoolUtil.boundTo(camZoomSpeed - (elapsed * 3.125), 0, 1));
				if(allowHUDcamToZoom)
					camNOTES.zoom = FlxMath.lerp(defaultHUDZoom, camHUD.zoom, CoolUtil.boundTo(hudZoomSpeed - (elapsed * 3.125), 0, 1));
					camSus.zoom = FlxMath.lerp(defaultHUDZoom, camHUD.zoom, CoolUtil.boundTo(hudZoomSpeed - (elapsed * 3.125), 0, 1));
					camHUD.zoom = FlxMath.lerp(defaultHUDZoom, camHUD.zoom, CoolUtil.boundTo(hudZoomSpeed - (elapsed * 3.125), 0, 1));
			}
	
		FlxG.watch.addQuick("secShit", curSection);
		FlxG.watch.addQuick("beatShit", curBeat);
		FlxG.watch.addQuick("stepShit", curStep);

		// RESET = Quick Game Over Screen
		if (!ClientPrefs.data.noReset && controls.RESET && canReset && !inCutscene && startedCountdown && !endingSong)
		{
			health = 0;
			trace("RESET = True");
		}
		doDeathCheck();

		if (unspawnNotes[0] != null)
		{
			var time:Float = spawnTime * playbackRate;
			if(songSpeed < 1) time /= songSpeed;
			if(unspawnNotes[0].multSpeed < 1) time /= unspawnNotes[0].multSpeed;

			while (unspawnNotes.length > 0 && unspawnNotes[0].strumTime - Conductor.songPosition < time)
			{
				var dunceNote:Note = unspawnNotes[0];
				notes.insert(0, dunceNote);
				dunceNote.spawned = true;

				callOnLuas('onSpawnNote', [notes.members.indexOf(dunceNote), dunceNote.noteData, dunceNote.noteType, dunceNote.isSustainNote, dunceNote.strumTime]);
				callOnHScript('onSpawnNote', [dunceNote]);

				var index:Int = unspawnNotes.indexOf(dunceNote);
				unspawnNotes.splice(index, 1);
			}
		}

		if (generatedMusic)
		{
			if(!inCutscene)
			{
				if(!cpuControlled) {
					keysCheck();
				} else if(boyfriend.animation.curAnim != null && boyfriend.holdTimer > Conductor.stepCrochet * (0.0011 / FlxG.sound.music.pitch) * boyfriend.singDuration && boyfriend.animation.curAnim.name.startsWith('sing') && !boyfriend.animation.curAnim.name.endsWith('miss')) {
					boyfriend.dance();
					//boyfriend.animation.curAnim.finish();
				}

				if(notes.length > 0)
				{
					if(startedCountdown)
					{
						var fakeCrochet:Float = (60 / SONG.bpm) * 1000;
						notes.forEachAlive(function(daNote:Note)
						{
							if (daNote.isSustainNote)
								daNote.cameras = [camSus];

							var strumGroup:FlxTypedGroup<StrumNote> = playerStrums;
							if(!daNote.mustPress) {
								strumGroup = opponentStrums;
								if(daNote.altStrum) {
									strumGroup = altStrums;
									daNote.scrollFactor.set(1.5, 1.5);
								}
							}

							var strum:StrumNote = strumGroup.members[daNote.noteData];
							daNote.followStrumNote(strum, fakeCrochet, songSpeed / playbackRate);

							if(daNote.mustPress)
							{
								if(cpuControlled && !daNote.blockHit && daNote.canBeHit && (daNote.isSustainNote || daNote.strumTime <= Conductor.songPosition))
									goodNoteHit(daNote);
							}
							else if (daNote.wasGoodHit && !daNote.hitByOpponent && !daNote.ignoreNote)
								opponentNoteHit(daNote);

							if(daNote.isSustainNote && strum.sustainReduce) daNote.clipToStrumNote(strum);

							// Kill extremely late notes and cause misses
							if (Conductor.songPosition - daNote.strumTime > noteKillOffset)
							{
								if (daNote.mustPress && !cpuControlled &&!daNote.ignoreNote && !endingSong && (daNote.tooLate || !daNote.wasGoodHit))
									noteMiss(daNote);

								daNote.active = false;
								daNote.visible = false;

								daNote.kill();
								notes.remove(daNote, true);
								daNote.destroy();
							}
						});
					}
					else
					{
						notes.forEachAlive(function(daNote:Note)
						{
							daNote.canBeHit = false;
							daNote.wasGoodHit = false;
						});
					}
				}
			}
			checkEventNote();
		}

		if (window == null)
			{
				if (expungedWindowMode)
				{
					#if windows
					popupWindow();
					#end
				}
				else
				{
					return;
				}
			}
			else if (expungedWindowMode)
			{
				var display = Application.current.window.display.currentMode;
	
				@:privateAccess
				var dadFrame = dad._frame;
				if (dadFrame == null || dadFrame.frame == null) return; // prevent crashes (i hope)
		  
				var rect = new Rectangle(dadFrame.frame.x, dadFrame.frame.y, dadFrame.frame.width, dadFrame.frame.height);
	
				expungedScroll.scrollRect = rect;
	
				window.x = Std.int(expungedOffset.x);
				window.y = Std.int(expungedOffset.y);
	
				if (!expungedMoving)
				{
					elapsedexpungedtime += elapsed * 9;
	
					var screenwidth = Application.current.window.display.bounds.width;
					var screenheight = Application.current.window.display.bounds.height;
	
					var toy = ((-Math.sin((elapsedexpungedtime / 9.5) * 2) * 30 * 5.1) / 1080) * screenheight;
					var tox = ((-Math.cos((elapsedexpungedtime / 9.5)) * 100) / 1980) * screenwidth;
	
					expungedOffset.x = ExpungedWindowCenterPos.x + tox;
					expungedOffset.y = ExpungedWindowCenterPos.y + toy;
	
					//center
					Application.current.window.y = Math.round(((screenheight / 2) - (720 / 2)) + (Math.sin((elapsedexpungedtime / 30)) * 80));
					Application.current.window.x = Std.int(windowSteadyX);
					Application.current.window.width = 1280;
					Application.current.window.height = 720;
				}
	
				if (lastFrame != null && dadFrame != null && lastFrame.name != dadFrame.name)
				{
					expungedSpr.graphics.clear();
					generateWindowSprite();
					lastFrame = dadFrame;
				}
	
				expungedScroll.x = (((dadFrame.offset.x) - (dad.offset.x)) * expungedScroll.scaleX) + 80;
				expungedScroll.y = (((dadFrame.offset.y) - (dad.offset.y)) * expungedScroll.scaleY);
			}

		#if debug
		if(!endingSong && !startingSong) {
			if (FlxG.keys.justPressed.ONE) {
				KillNotes();
				FlxG.sound.music.onComplete();
			}
			if(FlxG.keys.justPressed.TWO) { //Go 10 seconds into the future :O
				setSongTime(Conductor.songPosition + 10000);
				clearNotesBefore(Conductor.songPosition);
			}
		}
		#end

		setOnScripts('cameraX', camFollow.x);
		setOnScripts('cameraY', camFollow.y);
		setOnScripts('botPlay', cpuControlled);
		for (i in shaderUpdates){
			i(elapsed);
		}
		callOnScripts('onUpdatePost', [elapsed]);
	}

	function openPauseMenu()
	{
		FlxG.camera.followLerp = 0;
		persistentUpdate = false;
		persistentDraw = true;
		paused = true;

		// 1 / 1000 chance for Gitaroo Man easter egg
		/*if (FlxG.random.bool(0.1))
		{
			// gitaroo man easter egg
			cancelMusicFadeTween();
			MusicBeatState.switchState(new GitarooPause());
		}
		else {*/
		if(FlxG.sound.music != null) {
			FlxG.sound.music.pause();
			vocals.pause();
		}
		if(!cpuControlled)
		{
			for (note in playerStrums)
				if(note.animation.curAnim != null && note.animation.curAnim.name != 'static')
				{
					note.playAnim('static');
					note.resetAnim = 0;
				}
		}
		openSubState(new PauseSubState(boyfriend.getScreenPosition().x, boyfriend.getScreenPosition().y));
		//}

		#if desktop
		DiscordClient.changePresence(detailsPausedText, SONG.song + " (" + storyDifficultyText + ")", iconP2.getCharacter());
		#end
	}

	function openChartEditor()
	{
		FlxG.camera.followLerp = 0;
		persistentUpdate = false;
		paused = true;
		cancelMusicFadeTween();
		chartingMode = true;

		#if desktop
		DiscordClient.changePresence("Chart Editor", null, null, true);
		DiscordClient.resetClientID();
		#end
		
		MusicBeatState.switchState(new ChartingState());
	}

	function openCharacterEditor()
	{
		FlxG.camera.followLerp = 0;
		persistentUpdate = false;
		paused = true;
		cancelMusicFadeTween();
		#if desktop DiscordClient.resetClientID(); #end
		MusicBeatState.switchState(new CharacterEditorState(SONG.player2));
	}

	public var isDead:Bool = false; //Don't mess with this on Lua!!!
	function doDeathCheck(?skipHealthCheck:Bool = false) {
		if (((skipHealthCheck && instakillOnMiss) || health <= 0) && !practiceMode && !isDead)
		{
			var ret:Dynamic = callOnScripts('onGameOver', null, true);
			if(ret != FunkinLua.Function_Stop) {
				boyfriend.stunned = true;
				deathCounter++;

				if (ClientPrefs.data.eyesores)
					screenshader.Enabled = false;

				paused = true;

				vocals.stop();
				FlxG.sound.music.stop();

				persistentUpdate = false;
				persistentDraw = false;
				#if LUA_ALLOWED
				for (tween in modchartTweens) {
					tween.active = true;
				}
				for (timer in modchartTimers) {
					timer.active = true;
				}
				#end
				openSubState(new GameOverSubstate(boyfriend.getScreenPosition().x - boyfriend.positionArray[0], boyfriend.getScreenPosition().y - boyfriend.positionArray[1], camFollow.x, camFollow.y));

				// MusicBeatState.switchState(new GameOverState(boyfriend.getScreenPosition().x, boyfriend.getScreenPosition().y));

				#if desktop
				// Game Over doesn't get his own variable because it's only used here
				DiscordClient.changePresence("Game Over - " + detailsText, SONG.song + " (" + storyDifficultyText + ")", iconP2.getCharacter());
				#end
				isDead = true;
				return true;
			}
		}
		return false;
	}

	public function checkEventNote() {
		while(eventNotes.length > 0) {
			var leStrumTime:Float = eventNotes[0].strumTime;
			if(Conductor.songPosition < leStrumTime) {
				return;
			}

			var value1:String = '';
			if(eventNotes[0].value1 != null)
				value1 = eventNotes[0].value1;

			var value2:String = '';
			if(eventNotes[0].value2 != null)
				value2 = eventNotes[0].value2;

			triggerEvent(eventNotes[0].event, value1, value2, leStrumTime);
			eventNotes.shift();
		}
	}

	
	function cinematicBars(time:Float, closeness:Float)
		{
			var upBar = new FlxSprite().makeGraphic(Std.int(FlxG.width * ((1 / defaultCamZoom) * 2)), Std.int(FlxG.height / 2), FlxColor.BLACK);
			var downBar = new FlxSprite().makeGraphic(Std.int(FlxG.width * ((1 / defaultCamZoom) * 2)), Std.int(FlxG.height / 2), FlxColor.BLACK);
	
			upBar.screenCenter();
			downBar.screenCenter();
			upBar.scrollFactor.set();
			downBar.scrollFactor.set();
			upBar.cameras = [camHUD];
			downBar.cameras = [camHUD];
	
			upBar.y -= 2000;
			downBar.y += 2000;
	
			add(upBar);
			add(downBar);
			
			FlxTween.tween(upBar, {y: (FlxG.height - upBar.height) / 2 - closeness}, (Conductor.crochet / 1000) / 2, {ease: FlxEase.expoInOut, onComplete: function(tween:FlxTween)
			{
				new FlxTimer().start(time, function(timer:FlxTimer)
				{
					FlxTween.tween(upBar, {y: upBar.y - 2000}, (Conductor.crochet / 1000) / 2, {ease: FlxEase.expoIn, onComplete: function(tween:FlxTween)
					{
						remove(upBar);
					}});
				});
			}});
			FlxTween.tween(downBar, {y: (FlxG.height - downBar.height) / 2 + closeness}, (Conductor.crochet / 1000) / 2, {ease: FlxEase.expoInOut, onComplete: function(tween:FlxTween)
			{
				new FlxTimer().start(time, function(timer:FlxTimer)
				{
					FlxTween.tween(downBar, {y: downBar.y + 2000}, (Conductor.crochet / 1000) / 2, {ease: FlxEase.expoIn, onComplete: function(tween:FlxTween)
					{
						remove(downBar);
					}});
				});
			}});
		}

	public function triggerEvent(eventName:String, value1:String, value2:String, strumTime:Float) {
		var flValue1:Null<Float> = Std.parseFloat(value1);
		var flValue2:Null<Float> = Std.parseFloat(value2);
		if(Math.isNaN(flValue1)) flValue1 = null;
		if(Math.isNaN(flValue2)) flValue2 = null;

		switch(eventName) {
			case 'Add Camera Zoom':
				if(ClientPrefs.data.camZooms && FlxG.camera.zoom < 1.35) {
					var camZoom:Float = Std.parseFloat(value1);
					var hudZoom:Float = Std.parseFloat(value2);
					if(Math.isNaN(camZoom)) camZoom = 0.015;
					if(Math.isNaN(hudZoom)) hudZoom = 0.05;

					if (allowGamecamToZoom && !doingSMzoom) FlxG.camera.zoom += camZoom;
					if (allowHUDcamToZoom) camHUD.zoom += hudZoom;
				}
			case 'Change the Default Camera Zoom': // not to be confused with the one above!
					var mZoom:Float = Std.parseFloat(value1);
					var duration:Float = Std.parseFloat(value2);
					if(Math.isNaN(mZoom)) mZoom = 0.09;

					defaultCamZoom = mZoom;
					if (camZoomTween != null) camZoomTween.cancel();
					camZoomTween = null;
					if (duration > 0) {
						camZoomTween = FlxTween.tween(FlxG.camera, {zoom: mZoom + zoomAdd}, duration, {ease: FlxEase.quadInOut,
							onComplete: function(twn:FlxTween) {
								camZoomTween = null;
						}});
					}
			case 'Change addZoom Value':
				var mZoom:Float = Std.parseFloat(value1);
				if(Math.isNaN(mZoom)) mZoom = 0;

				zoomAdd = mZoom;
						case 'Quick note spin':
				strumLineNotes.forEach(function(note)
					{
						quickSpin(note);
					});
			case 'Flash effect':
				var flashId:Int = Std.parseInt(value1);
				switch (flashId)
				{
                    case 0:
						if(ClientPrefs.data.flashing) FlxG.camera.flash(FlxColor.WHITE, 1);
					case 1:
						if(ClientPrefs.data.flashing) FlxG.camera.flash(FlxColor.BLACK, 1);
					case 2:
						if(ClientPrefs.data.flashing) camOther.flash(FlxColor.WHITE, 1);
					case 3:
						if(ClientPrefs.data.flashing) camOther.flash(FlxColor.BLACK, 1);
				}
			case 'Hide or Show HUD elements':
				var top10awesomeId:Int = Std.parseInt(value1);
				switch (top10awesomeId)
				{
                    case 0:
						hideshit();
					case 1:
						showonlystrums();
					case 2:
						restoreHUDElements();
				}
			case 'Toggle Eyesores':
				var a1000YOMAMAjokesCanYouWatchThemAllquestionmarkId:Int = Std.parseInt(value1);
				switch (a1000YOMAMAjokesCanYouWatchThemAllquestionmarkId)
				{
                    case 0:
						shakeCam = false;
					case 1: 
						shakeCam = true;
				}
			case 'Toggle Blocked Glitch':
				var newvariable:Int = Std.parseInt(value1);
				switch (newvariable)
				{
                    case 0:
						glitchCam = false;
						defaultCamZoom -= 0.1;
					case 1: 
						glitchCam = true;
						defaultCamZoom += 0.1;
				}
			case 'Toggle Opponent Trail':
				var poot:Int = Std.parseInt(value1);
				switch (poot)
				{
					case 0:
						scaryTrail.visible = false;
					case 1: 
						scaryTrail.visible = true;
				}
			case 'Toggle Player Trail':
				var is:Int = Std.parseInt(value1);
				switch (is)
				{
					case 0:
						playerTrail.visible = false;
					case 1: 
						playerTrail.visible = true;
				}
			case 'Show/Hide Alt Strumlines':
				var iCame:Int = Std.parseInt(value1);
				switch (iCame)
				{
                    case 0:
						altStrums.forEach(function(spr:StrumNote){
							FlxTween.tween(spr, {alpha: 0}, 1, {ease: FlxEase.circOut, startDelay: 0 + (0.1 * spr.ID)});
						});
					case 1: 
						altStrums.forEach(function(spr:StrumNote){
							FlxTween.tween(spr, {alpha: 1}, 1, {ease: FlxEase.circOut, startDelay: 0 + (0.1 * spr.ID)});
						});
				}
			case 'Move Alt Strumlines':
				var split:Array<String> = value1.split(',');

				altStrums.forEach(function(spr:StrumNote){
					spr.x = Std.parseInt(split[0]);
					spr.y = Std.parseInt(split[1]);
					spr.postAddedToGroup();
				});
						case 'Set Camera Zoom speed': 
				var mZoom:Float = Std.parseFloat(value1);
				if(Math.isNaN(mZoom)) mZoom = czspeedDefault;

				camZoomSpeed = mZoom;
				hudZoomSpeed = mZoom;
			case 'Slightly transparent Black Screen' | 'Thunderstorm type black screen': // ig u could say its for backwards compatibility??
				var ballsId:Int = Std.parseInt(value1);

			if (ClientPrefs.data.BlackScreen)
			{
				switch (ballsId)
				{
					case 0: 
						FlxTween.tween(blackScreen, {alpha: 0}, Conductor.stepCrochet / 500);
			     	case 1:
						FlxTween.tween(blackScreen, {alpha: 0.35}, Conductor.stepCrochet / 500);
				}
			}
			case 'Hide or Show HUD' | 'Hide or Show HUD elements with Fade':
				var vsEvilCorruptedBambiDay4Id:Int = Std.parseInt(value1);
				switch (vsEvilCorruptedBambiDay4Id)
				{
					case 0:	FlxTween.tween(camHUD, {alpha:0}, 0.35);
					case 1: FlxTween.tween(camHUD, {alpha:1}, 0.35);
				}
			case 'Flash Screen VII':
				var curcolor:FlxColor = FlxColor.WHITE;
				var curCamera:FlxCamera = camGame;
				var penisId:Int = Std.parseInt(value1);
				switch (penisId) {
					case 0: curCamera = camGame;
					case 1: curCamera = camHUD;					
					case 2: curCamera = camOther;
				}
				
				var penisId2:Int = Std.parseInt(value2);
				if (ClientPrefs.data.flashing)
				{
					// BAD CODE ALERT !!
					switch (penisId2) {
						case 0: curcolor = FlxColor.WHITE;
						case 1: curcolor = FlxColor.BLACK;					
						case 2: curcolor = FlxColor.RED;
						case 3: curcolor = FlxColor.ORANGE;
						case 4: curcolor = FlxColor.YELLOW;
						case 5: curcolor = FlxColor.LIME;
						case 6: curcolor = FlxColor.GREEN;
						case 7: curcolor = FlxColor.CYAN;
						case 8: curcolor = FlxColor.BLUE;
						case 9: curcolor = FlxColor.PINK;
						case 10: curcolor = FlxColor.PURPLE;
					}
				} else {
					switch (penisId2) { 
					    case 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10:
						    curcolor = FlxColor.BLACK;		
					}
				}

				curCamera.flash(curcolor, 1, true);
			case 'Smooth Camera Zoom': // only smooth for camgame!
				if(ClientPrefs.data.camZooms) {
					if(camGameTween != null) {
						camGameTween.cancel();
						camGameTween = null;
					} if(penisTimer != null) {
						penisTimer.cancel();
						penisTimer = null;
						doingSMzoom = false;
					}
					if (camGameTween == null) allowGamecamToZoom = false;
					if (penisTimer == null) doingSMzoom = true;
	
					var camZoom:Float = Std.parseFloat(value1);
					var hudZoom:Float = Std.parseFloat(value2);
					if(Math.isNaN(camZoom)) camZoom = 0.015;
					if(Math.isNaN(hudZoom)) hudZoom = 0.05;
					
					camGameTween = FlxTween.tween(FlxG.camera, {zoom: FlxG.camera.zoom + camZoom}, 0.0425, {ease: FlxEase.linear,
						onComplete: function (twn:FlxTween) {
							camZoomSpeed = 1;
							allowGamecamToZoom = true;
							penisTimer = new FlxTimer().start(0.5, function(tmr:FlxTimer) {
								camZoomSpeed = hudZoomSpeed;
								doingSMzoom = false;
							});
						}
					});
					if(allowHUDcamToZoom) camHUD.zoom += hudZoom;
				}
			case "''Dramatic'' Black and White effect":
				var idWS:Int = Std.parseInt(value1);
				var colorBack:FlxColor = FlxColor.WHITE;
				switch (idWS) 
				{
					case 0:
						if (whiteScreenEvents != null) {
							FlxTween.tween(whiteScreenEvents, {alpha: 0}, 0.5, {ease: FlxEase.cubeOut, 
								onComplete: function (twn:FlxTween) {
									remove(whiteScreenEvents);
								}
							});

							for (charactersAll in [gf, boyfriend, dad]) {
								FlxTween.color(charactersAll, 0.5, FlxColor.BLACK, colorBack, {ease: FlxEase.circOut,
									onComplete: function (twn:FlxTween)
									{
										dramaticbnwTime = false;
									}
								});
							}
							for (icons in [iconP1, iconP2]) FlxTween.color(icons, 0.5, FlxColor.BLACK, FlxColor.WHITE, {ease: FlxEase.circOut});
						}
					case 1:
						if (boyfriend != null) colorBack = boyfriend.color;

						if (whiteScreenEvents == null) {

							whiteScreenEvents = new FlxSprite(0, 0).makeGraphic(Std.int(FlxG.width * 2.25), Std.int(FlxG.height * 2.25), FlxColor.WHITE);
							whiteScreenEvents.screenCenter();
							whiteScreenEvents.scrollFactor.set();
							whiteScreenEvents.alpha = 0;
							addBehindGF(whiteScreenEvents);
							FlxTween.tween(whiteScreenEvents, {alpha: 1}, 0.5, {ease: FlxEase.cubeOut});
							
							dramaticbnwTime = true;
							for (charactersAll in [gf, boyfriend, dad]) {
								var oldColor = charactersAll.color;
								FlxTween.color(charactersAll, 0.5, oldColor, FlxColor.BLACK, {ease: FlxEase.circOut});
							}
							for (icons in [iconP1, iconP2]) FlxTween.color(icons, 0.5, FlxColor.WHITE, FlxColor.BLACK, {ease: FlxEase.circOut});
						}
				}
			case 'Hey!':
				var value:Int = 2;
				switch(value1.toLowerCase().trim()) {
					case 'bf' | 'boyfriend' | '0':
						value = 0;
					case 'gf' | 'girlfriend' | '1':
						value = 1;
				}

				if(flValue2 == null || flValue2 <= 0) flValue2 = 0.6;

				if(value != 0) {
					if(dad.curCharacter.startsWith('gf')) { //Tutorial GF is actually Dad! The GF is an imposter!! ding ding ding ding ding ding ding, dindinding, end my suffering
						dad.playAnim('cheer', true);
						dad.specialAnim = true;
						dad.heyTimer = flValue2;
					} else if (gf != null) {
						gf.playAnim('cheer', true);
						gf.specialAnim = true;
						gf.heyTimer = flValue2;
					}
				}
				if(value != 1) {
					boyfriend.playAnim('hey', true);
					boyfriend.specialAnim = true;
					boyfriend.heyTimer = flValue2;
				}

			case 'Set GF Speed':
				if(flValue1 == null || flValue1 < 1) flValue1 = 1;
				gfSpeed = Math.round(flValue1);
			case 'Play Animation':
				//trace('Anim to play: ' + value1);
				var char:Character = dad;
				switch(value2.toLowerCase().trim()) {
					case 'bf' | 'boyfriend':
						char = boyfriend;
					case 'gf' | 'girlfriend':
						char = gf;
					default:
						if(flValue2 == null) flValue2 = 0;
						switch(Math.round(flValue2)) {
							case 1: char = boyfriend;
							case 2: char = gf;
						}
				}

				if (char != null)
				{
					char.playAnim(value1, true);
					char.specialAnim = true;
				}

			case 'Camera Follow Pos':
				if(camFollow != null)
				{
					isCameraOnForcedPos = false;
					if(flValue1 != null || flValue2 != null)
					{
						isCameraOnForcedPos = true;
						if(flValue1 == null) flValue1 = 0;
						if(flValue2 == null) flValue2 = 0;
						camFollow.x = flValue1;
						camFollow.y = flValue2;
					}
				}

			case 'Alt Idle Animation':
				var char:Character = dad;
				switch(value1.toLowerCase().trim()) {
					case 'gf' | 'girlfriend':
						char = gf;
					case 'boyfriend' | 'bf':
						char = boyfriend;
					default:
						var val:Int = Std.parseInt(value1);
						if(Math.isNaN(val)) val = 0;

						switch(val) {
							case 1: char = boyfriend;
							case 2: char = gf;
						}
				}

				if (char != null)
				{
					char.idleSuffix = value2;
					char.recalculateDanceIdle();
				}

			case 'Screen Shake':
				var valuesArray:Array<String> = [value1, value2];
				var targetsArray:Array<FlxCamera> = [camGame, camHUD];
				for (i in 0...targetsArray.length) {
					var split:Array<String> = valuesArray[i].split(',');
					var duration:Float = 0;
					var intensity:Float = 0;
					if(split[0] != null) duration = Std.parseFloat(split[0].trim());
					if(split[1] != null) intensity = Std.parseFloat(split[1].trim());
					if(Math.isNaN(duration)) duration = 0;
					if(Math.isNaN(intensity)) intensity = 0;

					if(duration > 0 && intensity != 0) {
						targetsArray[i].shake(intensity, duration);
					}
				}


				case 'Change Character':
					var charType:Int = 0;
					switch(value1.toLowerCase().trim()) {
						case 'gf' | 'girlfriend':
							charType = 2;
						case 'dad' | 'opponent':
							charType = 1;
						case 'player3' | 'alt opponent':
							charType = 3;
						default:
							charType = Std.parseInt(value1);
							if(Math.isNaN(charType)) charType = 0;
					}
	
					switch(charType) {
						case 0:
							if(boyfriend.curCharacter != value2) {
								if(!boyfriendMap.exists(value2)) {
									addCharacterToList(value2, charType);
								}
	
								var lastAlpha:Float = boyfriend.alpha;
								boyfriend.alpha = 0.00001;
								boyfriend = boyfriendMap.get(value2);
								boyfriend.alpha = lastAlpha;
								iconP1.changeIcon(boyfriend.healthIcon);
							}
							setOnLuas('boyfriendName', boyfriend.curCharacter);
							refreshTrail(0);
	
						case 1:
							if(dad.curCharacter != value2) {
								if(!dadMap.exists(value2)) {
									addCharacterToList(value2, charType);
								}
	
								var wasGf:Bool = dad.curCharacter.startsWith('gf');
								var lastAlpha:Float = dad.alpha;
								dad.alpha = 0.00001;
								dad = dadMap.get(value2);
								if(!dad.curCharacter.startsWith('gf')) {
									if(wasGf && gf != null) {
										gf.visible = true;
									}
								} else if(gf != null) {
									gf.visible = false;
								}
								dad.alpha = lastAlpha;
								iconP2.changeIcon(dad.healthIcon);
							}
							setOnLuas('dadName', dad.curCharacter);
							refreshTrail(1);
	
						case 2:
							if(gf != null)
							{
								if(gf.curCharacter != value2)
								{
									if(!gfMap.exists(value2))
									{
										addCharacterToList(value2, charType);
									}
	
									var lastAlpha:Float = gf.alpha;
									gf.alpha = 0.00001;
									gf = gfMap.get(value2);
									gf.alpha = lastAlpha;
								}
								setOnLuas('gfName', gf.curCharacter);
							}
	
						case 3:
							if(player3.curCharacter != value2) {
								if(!player3Map.exists(value2)) {
									addCharacterToList(value2, charType);
								}
	
								var lastAlpha:Float = (SONG.player3 == null || SONG.player3 == '') ? 1 : player3.alpha;
								player3.alpha = 0.00001;
								player3 = player3Map.get(value2);
								player3.alpha = (value2 == '') ? 0.00001 : lastAlpha;
								// iconP2.changeIcon(dad.healthIcon);
							}
							// setOnLuas('dadName', dad.curCharacter);
							// refreshTrail(1);
					}
					reloadHealthBarColors();	
					reloadTimeBarColors();

			case 'Change Scroll Speed':
				if (songSpeedType != "constant")
				{
					if(flValue1 == null) flValue1 = 1;
					if(flValue2 == null) flValue2 = 0;

					var newValue:Float = SONG.speed * ClientPrefs.getGameplaySetting('scrollspeed') * flValue1;
					if(flValue2 <= 0)
						songSpeed = newValue;
					else
						songSpeedTween = FlxTween.tween(this, {songSpeed: newValue}, flValue2 / playbackRate, {ease: FlxEase.linear, onComplete:
							function (twn:FlxTween)
							{
								songSpeedTween = null;
							}
						});
				}

			case 'Set Property':
				try
				{
					var split:Array<String> = value1.split('.');
					if(split.length > 1) {
						LuaUtils.setVarInArray(LuaUtils.getPropertyLoop(split), split[split.length-1], value2);
					} else {
						LuaUtils.setVarInArray(this, value1, value2);
					}
				}
				catch(e:Dynamic)
				{
					addTextToDebug('ERROR ("Set Property" Event) - ' + e.message.substr(0, e.message.indexOf('\n')), FlxColor.RED);
				}
			
			case 'Play Sound':
				if(flValue2 == null) flValue2 = 1;
				FlxG.sound.play(Paths.sound(value1), flValue2);
		}
		
		stagesFunc(function(stage:BaseStage) stage.eventCalled(eventName, value1, value2, flValue1, flValue2, strumTime));
		callOnScripts('onEvent', [eventName, value1, value2, strumTime]);
	}

	function moveCameraSection():Void {
		if(SONG.notes[curSection] == null) return;

		if (gf != null && SONG.notes[curSection].gfSection)
		{
			camFollow.setPosition(gf.getMidpoint().x, gf.getMidpoint().y);
			camFollow.x += gf.cameraPosition[0] + girlfriendCameraOffset[0];
			camFollow.y += gf.cameraPosition[1] + girlfriendCameraOffset[1];
			tweenCamIn();
			callOnLuas('onMoveCamera', ['gf']);
			return;
		}

		if (!SONG.notes[curSection].mustHitSection)
		{
			moveCamera(true);
			callOnLuas('onMoveCamera', ['dad']);
		}
		else
		{
			moveCamera(false);
			callOnLuas('onMoveCamera', ['boyfriend']);
		}
	}

	var cameraTwn:FlxTween;
	public function moveCamera(isDad:Bool)
		{
			if(isDad)
			{
				camFollow.setPosition(dad.getMidpoint().x + 150, dad.getMidpoint().y - 100);
				camFollow.x += dad.cameraPosition[0] + opponentCameraOffset[0];
				camFollow.y += dad.cameraPosition[1] + opponentCameraOffset[1];
	
				cameraOnDad = true;
				cameraOnBF = false;
	
				if (autoZoom && !laggingRSOD)
				{
					switch(dad.curCharacter)
					{
						case 'bombu-v2','bombu','bambi-scaryooo', 'gary', 'bamburg', 'bamburg-player':
							zoomAdd	= -0.5; 
						case 'bambi-god-2', 'baiburg', 'crusturn', 'hell-1', 'hell-2', 'bambi-hell', '404','404-old':
							zoomAdd	= -0.15;
						case 'bambi-3d','god-expunged-1-new', 'god-expunged-1', 'bambi-unfair', 'expunged', 'bambi-piss-3d', 'crimson-dave', 'crimson-bambi':
							zoomAdd	= -0.28;
					}
				}
	
				bfNoteCamOffset[0] = 0;
				bfNoteCamOffset[1] = 0;
	
				camFollow.angle += 25 + dadNoteCamOffset[0];
				camFollow.x += dadNoteCamOffset[0];
				camFollow.y += dadNoteCamOffset[1];
			} else {

				camFollow.setPosition(boyfriend.getMidpoint().x - 100, boyfriend.getMidpoint().y - 100);
				camFollow.x -= boyfriend.cameraPosition[0] - boyfriendCameraOffset[0];
				camFollow.y += boyfriend.cameraPosition[1] + boyfriendCameraOffset[1];
	
				cameraOnDad = false;
				cameraOnBF = true;
	
				if (Paths.formatToSongPath(SONG.song) == 'tutorial' && cameraTwn == null && FlxG.camera.zoom != 1)
				{
					cameraTwn = FlxTween.tween(FlxG.camera, {zoom: 1}, (Conductor.stepCrochet * 4 / 1000), {ease: FlxEase.elasticInOut, onComplete:
						function (twn:FlxTween)
						{
							cameraTwn = null;
						}
					});
				}
	
				if (autoZoom && !laggingRSOD)
				{
					switch(dad.curCharacter)
					{
						case 'bombu-v2', 'bambi-scaryooo', 'bombu', 'gary', 'bamburg', 'bamburg-player':
							zoomAdd	= 0;
						case 'bambi-god-2', 'baiburg', 'crusturn', 'hell-1', 'hell-2', 'bambi-hell', '404','404-old':
							zoomAdd	= 0;
						case 'bambi-3d','god-expunged-1-new', 'god-expunged-1', 'bambi-unfair', 'expunged', 'bambi-piss-3d','crimson-dave', 'crimson-bambi':
							zoomAdd	= 0;
					}
				}
	
				dadNoteCamOffset[0] = 0;
				dadNoteCamOffset[1] = 0;
	
				camFollow.angle += 25 + bfNoteCamOffset[0];
				camFollow.x += bfNoteCamOffset[0];
				camFollow.y += bfNoteCamOffset[1];
			}
		}

		function tweenCamIn() {
			if (Paths.formatToSongPath(SONG.song) == 'tutorial' && cameraTwn == null && FlxG.camera.zoom != 1.3) {
				cameraTwn = FlxTween.tween(FlxG.camera, {zoom: 1.3}, (Conductor.stepCrochet * 4 / 1000), {ease: FlxEase.elasticInOut, onComplete:
					function (twn:FlxTween) {
						cameraTwn = null;
					}
				});
			}
		}

		function cameraMoveOnNote(note:Int, character:String)
			{
				if (ClientPrefs.data.followarrow == true){
					var amount:Array<Float> = new Array<Float>();
					var followAmount:Float = 20;
					switch (note)
					{
						case 0:
							amount[0] = -followAmount;
							amount[1] = 0;
						case 1:
							amount[0] = 0;
							amount[1] = followAmount;
						case 2:
							amount[0] = 0;
							amount[1] = -followAmount;
						case 3:
							amount[0] = followAmount;
							amount[1] = 0;
					}
					switch (character)
					{
						case 'dad':
							dadNoteCamOffset = amount;
						case 'bf':
							bfNoteCamOffset = amount;
						case 'gf':
							gfNoteCamOffset = amount;
					}
				}
			}
	
		function snapCamFollowToPos(x:Float, y:Float) {
			camFollow.setPosition(x, y);
		}

	public function finishSong(?ignoreNoteOffset:Bool = false):Void
	{
		updateTime = false;
		FlxG.sound.music.volume = 0;
		vocals.volume = 0;
		vocals.pause();
		if(ClientPrefs.data.noteOffset <= 0 || ignoreNoteOffset) {
			endCallback();
		} else {
			finishTimer = new FlxTimer().start(ClientPrefs.data.noteOffset / 1000, function(tmr:FlxTimer) {
				endCallback();
			});
		}
	}

	function sectionStartTime(section:Int):Float
		{
			var daBPM:Float = SONG.bpm;
			var daPos:Float = 0;
			for (i in 0...section)
			{
				daPos += 4 * (1000 * 60 / daBPM);
			}
			return daPos;
		}

	public var transitioning = false;
	public function endSong()
	{
		//Should kill you if you tried to cheat
		if(!startingSong) {
			notes.forEach(function(daNote:Note) {
				if(daNote.strumTime < songLength - Conductor.safeZoneOffset) {
					health -= 0.05 * healthLoss;
				}
			});
			for (daNote in unspawnNotes) {
				if(daNote.strumTime < songLength - Conductor.safeZoneOffset) {
					health -= 0.05 * healthLoss;
				}
			}

			if(doDeathCheck()) {
				return false;
			}
		}

		timeBar.visible = false;
		timeTxt.visible = false;
		canPause = false;
		endingSong = true;
		camZooming = true;
		inCutscene = false;
		updateTime = false;

		deathCounter = 0;
		seenCutscene = false;

		#if windows
		if (window != null)
		{
			window.close();
			expungedWindowMode = false;
			window = null;
		}
		#end

		#if ACHIEVEMENTS_ALLOWED
		if(achievementObj != null)
			return false;
		else
		{
			var noMissWeek:String = WeekData.getWeekFileName() + '_nomiss';
			var achieve:String = checkForAchievement([noMissWeek, 'r_ubad', 'ur_good', 'hype', 'two_keys', 'toastie', 'debugger']);
			if(achieve != null) {
				startAchievement(achieve);
				return false;
			}
		}
		#end

		var ret:Dynamic = callOnScripts('onEndSong', null, true);
		if(ret != FunkinLua.Function_Stop && !transitioning)
		{
			#if !switch
			var percent:Float = ratingPercent;
			if(Math.isNaN(percent)) percent = 0;
			Highscore.saveScore(SONG.song, songScore, storyDifficulty, percent);
			#end
			playbackRate = 1;

			if (chartingMode)
			{
				openChartEditor();
				return false;
			}

			if (isStoryMode)
			{
				campaignScore += songScore;
				campaignMisses += songMisses;

				storyPlaylist.remove(storyPlaylist[0]);

				if (storyPlaylist.length <= 0)
				{
					Mods.loadTopMod();
					FlxG.sound.playMusic(Paths.music('menu/Gates of the hell'));
					#if desktop DiscordClient.resetClientID(); #end

					cancelMusicFadeTween();
					if(FlxTransitionableState.skipNextTransIn) {
						CustomFadeTransition.nextCamera = null;
					}
					MusicBeatState.switchState(new StoryMenuState());

					// if ()
					if(!ClientPrefs.getGameplaySetting('practice') && !ClientPrefs.getGameplaySetting('botplay')) {
						StoryMenuState.weekCompleted.set(WeekData.weeksList[storyWeek], true);
						Highscore.saveWeekScore(WeekData.getWeekFileName(), campaignScore, storyDifficulty);

						FlxG.save.data.weekCompleted = StoryMenuState.weekCompleted;
						FlxG.save.flush();
					}
					changedDifficulty = false;
				}
				else
				{
					var difficulty:String = Difficulty.getFilePath();

					trace('LOADING NEXT SONG');
					trace(Paths.formatToSongPath(PlayState.storyPlaylist[0]) + difficulty);

					FlxTransitionableState.skipNextTransIn = true;
					FlxTransitionableState.skipNextTransOut = true;
					prevCamFollow = camFollow;

					PlayState.SONG = Song.loadFromJson(PlayState.storyPlaylist[0] + difficulty, PlayState.storyPlaylist[0]);
					FlxG.sound.music.stop();

					cancelMusicFadeTween();
					LoadingState.loadAndSwitchState(new PlayState());
				}
			}
			else
			{
				trace('WENT BACK TO FREEPLAY??');
				Mods.loadTopMod();
				#if desktop DiscordClient.resetClientID(); #end

				cancelMusicFadeTween();
				if(FlxTransitionableState.skipNextTransIn) {
					CustomFadeTransition.nextCamera = null;
				}
				MusicBeatState.switchState(new FreeplayState());
				FlxG.sound.playMusic(Paths.music('menu/Gates of the hell'));
				changedDifficulty = false;
			}
			transitioning = true;
		}
		return true;
	}

	#if ACHIEVEMENTS_ALLOWED
	var achievementObj:AchievementPopup = null;
	function startAchievement(achieve:String) {
		achievementObj = new AchievementPopup(achieve, camOther);
		achievementObj.onFinish = achievementEnd;
		add(achievementObj);
		trace('Giving achievement ' + achieve);
	}
	function achievementEnd():Void
	{
		achievementObj = null;
		if(endingSong && !inCutscene) {
			endSong();
		}
	}
	#end

	public function KillNotes() {
		while(notes.length > 0) {
			var daNote:Note = notes.members[0];
			daNote.active = false;
			daNote.visible = false;

			daNote.kill();
			notes.remove(daNote, true);
			daNote.destroy();
		}
		unspawnNotes = [];
		eventNotes = [];
	}

	public var totalPlayed:Int = 0;
	public var totalNotesHit:Float = 0.0;

	public var showCombo:Bool = true;
	public var showComboNum:Bool = true;
	public var showRating:Bool = true;

	// stores the last judgement object
	var lastRating:FlxSprite;
	// stores the last combo sprite object
	var lastCombo:FlxSprite;
	// stores the last combo score objects in an array
	var lastScore:Array<FlxSprite> = [];

	private function cachePopUpScore()
	{
		var uiPrefix:String = '';
		var uiSuffix:String = '';
		if (stageUI != "normal")
		{
			uiPrefix = '${stageUI}UI/';
			if (PlayState.isPixelStage) uiSuffix = '-pixel';
		}

		for (rating in ratingsData)
			Paths.image(uiPrefix + rating.image + uiSuffix);
		for (i in 0...10)
			Paths.image(uiPrefix + 'nums/num' + i + uiSuffix);
	}

	private function popUpScore(note:Note = null):Void
	{
		var noteDiff:Float = Math.abs(note.strumTime - Conductor.songPosition + ClientPrefs.data.ratingOffset);
		vocals.volume = 1;

		allNotesMs += noteDiff;
		averageMs = allNotesMs/songHits;

		var placement:Float =  FlxG.width * 0.35;
		var rating:FlxSprite = new FlxSprite();
		var score:Int = 350;

		//tryna do MS based judgment due to popular demand
		var daRating:Rating = Conductor.judgeNote(ratingsData, noteDiff / playbackRate);

		totalNotesHit += daRating.ratingMod;
		note.ratingMod = daRating.ratingMod;
		if(!note.ratingDisabled) daRating.hits++;
		note.rating = daRating.name;
		score = daRating.score;

		if(daRating.noteSplash && !note.noteSplashData.disabled)
			spawnNoteSplashOnNote(note);

		if(!practiceMode && !cpuControlled) {
			songScore += score;
			if(!note.ratingDisabled)
			{
				songHits++;
				totalPlayed++;
				RecalculateRating(false);
			}
		}

		theoreticalSongScore += 700;
		
		var uiPrefix:String = "";
		var uiSuffix:String = '';
		var antialias:Bool = ClientPrefs.data.antialiasing;

		if (stageUI != "normal")
		{
			uiPrefix = '${stageUI}UI/';
			if (PlayState.isPixelStage) uiSuffix = '-pixel';
			antialias = !isPixelStage;
		}

		rating.loadGraphic(Paths.image('ratings/' + uiPrefix + daRating.image + uiSuffix));
		if(ClientPrefs.data.RatingsOnGame)
		{
			rating.cameras = [camGame];
		}else{
			rating.cameras = [camHUD];
		}
		rating.screenCenter();
		//if(ClientPrefs.data.RatingsOnGame)
			//{
			//	rating.screenCenter();
			//	rating.x = gf.x + 200;
			//	rating.y = gf.y + 300;
			//}else{
		rating.x = placement - 40;
		rating.y -= 60;
		rating.x += ClientPrefs.data.comboOffset[0];
		rating.y -= ClientPrefs.data.comboOffset[1];
			//}
		rating.acceleration.y = 550 * playbackRate * playbackRate;
		rating.velocity.y -= FlxG.random.int(140, 175) * playbackRate;
		rating.velocity.x -= FlxG.random.int(0, 10) * playbackRate;
		rating.visible = (!ClientPrefs.data.hideHud && showRating);
		rating.antialiasing = antialias;

		var comboSpr:FlxSprite = new FlxSprite().loadGraphic(Paths.image('ratings/' + uiPrefix + 'combo' + uiSuffix));
		if(ClientPrefs.data.RatingsOnGame)
		{
			comboSpr.cameras = [camGame];
		}else{
			comboSpr.cameras = [camHUD];
		}
		comboSpr.x = placement;	
		comboSpr.x += ClientPrefs.data.comboOffset[4];
		comboSpr.y -= ClientPrefs.data.comboOffset[5];
		comboSpr.screenCenter();	
		comboSpr.acceleration.y = FlxG.random.int(200, 300) * playbackRate * playbackRate;
		comboSpr.velocity.y -= FlxG.random.int(140, 160) * playbackRate;
		comboSpr.visible = (!ClientPrefs.data.hideHud && showCombo);
		comboSpr.antialiasing = antialias;
		comboSpr.velocity.x += FlxG.random.int(1, 10) * playbackRate;

		if (!ClientPrefs.data.comboStacking)
		{
			if (lastRating != null) lastRating.kill();
			lastRating = rating;
		}

		if (!PlayState.isPixelStage)
		{
			rating.setGraphicSize(Std.int(rating.width * 0.7));
			comboSpr.setGraphicSize(Std.int(comboSpr.width * 0.5));
		}
		else
		{
			rating.setGraphicSize(Std.int(rating.width * daPixelZoom * 0.85));
			comboSpr.setGraphicSize(Std.int(comboSpr.width * daPixelZoom * 0.65));
		}

		comboSpr.updateHitbox();
		rating.updateHitbox();

		var seperatedScore:Array<Int> = [];

		if(combo >= 1000) {
			seperatedScore.push(Math.floor(combo / 1000) % 10);
		}
		seperatedScore.push(Math.floor(combo / 100) % 10);
		seperatedScore.push(Math.floor(combo / 10) % 10);
		seperatedScore.push(combo % 10);

		var daLoop:Int = 0;
		
		if (!ClientPrefs.data.comboStacking)
		{
			if (lastCombo != null) lastCombo.kill();
			lastCombo = comboSpr;
		}
		if (lastScore != null)
		{
			while (lastScore.length > 0)
			{
				lastScore[0].kill();
				lastScore.remove(lastScore[0]);
			}
		}
		for (i in seperatedScore)
		{
			var numScore:FlxSprite = new FlxSprite().loadGraphic(Paths.image(uiPrefix + 'nums/num' + Std.int(i) + uiSuffix));
			if(ClientPrefs.data.RatingsOnGame)
			{
				numScore.cameras = [camGame];
			//	numScore.x = gf.x + 200;
			//	numScore.y = gf.y + 400;
			}else{
				numScore.cameras = [camHUD];	
			}
			numScore.screenCenter();
			numScore.x = placement + (43 * daLoop) - 90 + ClientPrefs.data.comboOffset[2];
			numScore.y += 80 - ClientPrefs.data.comboOffset[3];
			if (!ClientPrefs.data.comboStacking)
				lastScore.push(numScore);

			if (!PlayState.isPixelStage) numScore.setGraphicSize(Std.int(numScore.width * 0.5));
			else numScore.setGraphicSize(Std.int(numScore.width * daPixelZoom));
			numScore.updateHitbox();

			numScore.acceleration.y = FlxG.random.int(200, 300) * playbackRate * playbackRate;
			numScore.velocity.y -= FlxG.random.int(140, 160) * playbackRate;
			numScore.velocity.x = FlxG.random.float(-5, 5) * playbackRate;
			numScore.visible = (!ClientPrefs.data.hideHud && showComboNum);
			numScore.antialiasing = antialias;


			if(combo >= 10)
				{
					insert(members.indexOf(strumLineNotes), comboSpr);
				}
				insert(members.indexOf(strumLineNotes), numScore);
	
				insert(members.indexOf(strumLineNotes), rating);

			FlxTween.tween(numScore, {alpha: 0}, 0.2 / playbackRate, {
				onComplete: function(tween:FlxTween)
				{
					numScore.destroy();
				},
				startDelay: Conductor.crochet * 0.002 / playbackRate
			});

			daLoop++;
		FlxTween.tween(rating, {alpha: 0}, 0.2 / playbackRate, {
			startDelay: Conductor.crochet * 0.001 / playbackRate
		});

		FlxTween.tween(comboSpr, {alpha: 0}, 0.2 / playbackRate, {
			onComplete: function(tween:FlxTween)
			{
				comboSpr.destroy();
				rating.destroy();
			},
			startDelay: Conductor.crochet * 0.002 / playbackRate
		});
	}
}

	public var strumsBlocked:Array<Bool> = [];
	private function onKeyPress(event:KeyboardEvent):Void
	{
		var eventKey:FlxKey = event.keyCode;
		var key:Int = getKeyFromEvent(keysArray, eventKey);
		if (!controls.controllerMode && FlxG.keys.checkStatus(eventKey, JUST_PRESSED)) keyPressed(key);
	}

	private function keyPressed(key:Int)
	{
		if (!cpuControlled && startedCountdown && !paused && key > -1)
		{
			if(notes.length > 0 && !boyfriend.stunned && generatedMusic && !endingSong)
			{
				//more accurate hit time for the ratings?
				var lastTime:Float = Conductor.songPosition;
				if(Conductor.songPosition >= 0) Conductor.songPosition = FlxG.sound.music.time;

				var canMiss:Bool = !ClientPrefs.data.ghostTapping;

				// heavily based on my own code LOL if it aint broke dont fix it
				var pressNotes:Array<Note> = [];
				var notesStopped:Bool = false;
				var sortedNotesList:Array<Note> = [];
				notes.forEachAlive(function(daNote:Note)
				{
					if (strumsBlocked[daNote.noteData] != true && daNote.canBeHit && daNote.mustPress &&
						!daNote.tooLate && !daNote.wasGoodHit && !daNote.isSustainNote && !daNote.blockHit)
					{
						if(daNote.noteData == key) sortedNotesList.push(daNote);
						canMiss = true;
					}
					if (SONG.disableAntiMash == false) {
						canMiss = true;
					} else {
						canMiss = false;
					}
				});
				sortedNotesList.sort(sortHitNotes);

				if (sortedNotesList.length > 0) {
					for (epicNote in sortedNotesList)
					{
						for (doubleNote in pressNotes) {
							if (Math.abs(doubleNote.strumTime - epicNote.strumTime) < 1) {
								doubleNote.kill();
								notes.remove(doubleNote, true);
								doubleNote.destroy();
							} else
								notesStopped = true;
						}

						// eee jack detection before was not super good
						if (!notesStopped) {
							goodNoteHit(epicNote);
							pressNotes.push(epicNote);
						}

					}
				}
				else {
					callOnScripts('onGhostTap', [key]);
					if (canMiss && !boyfriend.stunned) noteMissPress(key);
				}

				// I dunno what you need this for but here you go
				//									- Shubs

				// Shubs, this is for the "Just the Two of Us" achievement lol
				//									- Shadow Mario
				if(!keysPressed.contains(key)) keysPressed.push(key);

				//more accurate hit time for the ratings? part 2 (Now that the calculations are done, go back to the time it was before for not causing a note stutter)
				Conductor.songPosition = lastTime;
			}else if (boyfriend.animation.curAnim != null && boyfriend.holdTimer > Conductor.stepCrochet * (0.0011 / FlxG.sound.music.pitch) * boyfriend.singDuration && boyfriend.animation.curAnim.name.startsWith('sing') && !boyfriend.animation.curAnim.name.endsWith('miss')){
				if(!laggingRSOD) 
				{
					boyfriend.dance();
					bfNoteCamOffset[0] = 0;
					bfNoteCamOffset[1] = 0;
				}
				//boyfriend.animation.curAnim.finish();
			}

			var spr:StrumNote = playerStrums.members[key];
			if(strumsBlocked[key] != true && spr != null && spr.animation.curAnim.name != 'confirm')
			{
				spr.playAnim('pressed');
				spr.resetAnim = 0;
			}
			callOnScripts('onKeyPress', [key]);
		}
	}

	public static function sortHitNotes(a:Note, b:Note):Int
	{
		if (a.lowPriority && !b.lowPriority)
			return 1;
		else if (!a.lowPriority && b.lowPriority)
			return -1;

		return FlxSort.byValues(FlxSort.ASCENDING, a.strumTime, b.strumTime);
	}

	private function onKeyRelease(event:KeyboardEvent):Void
	{
		var eventKey:FlxKey = event.keyCode;
		var key:Int = getKeyFromEvent(keysArray, eventKey);
		//trace('Pressed: ' + eventKey);

		if(!controls.controllerMode && key > -1) keyReleased(key);
	}

	private function keyReleased(key:Int)
	{
		if(!cpuControlled && startedCountdown && !paused)
		{
			var spr:StrumNote = playerStrums.members[key];
			if(spr != null)
			{
				spr.playAnim('static');
				spr.resetAnim = 0;
			}
			callOnScripts('onKeyRelease', [key]);
		}
	}

	public static function getKeyFromEvent(arr:Array<String>, key:FlxKey):Int
	{
		if(key != NONE)
		{
			for (i in 0...arr.length)
			{
				var note:Array<FlxKey> = Controls.instance.keyboardBinds[arr[i]];
				for (noteKey in note)
					if(key == noteKey)
						return i;
			}
		}
		return -1;
	}

	// Hold notes
	private function keysCheck():Void
	{
		// HOLDING
		var holdArray:Array<Bool> = [];
		var pressArray:Array<Bool> = [];
		var releaseArray:Array<Bool> = [];
		for (key in keysArray)
		{
			holdArray.push(controls.pressed(key));
			pressArray.push(controls.justPressed(key));
			releaseArray.push(controls.justReleased(key));
		}

		// TO DO: Find a better way to handle controller inputs, this should work for now
		if(controls.controllerMode && pressArray.contains(true))
			for (i in 0...pressArray.length)
				if(pressArray[i] && strumsBlocked[i] != true)
					keyPressed(i);

		if (startedCountdown && !boyfriend.stunned && generatedMusic)
		{
			// rewritten inputs???
			if(notes.length > 0)
			{
				notes.forEachAlive(function(daNote:Note)
				{
					// hold note functions
					if (strumsBlocked[daNote.noteData] != true && daNote.isSustainNote && holdArray[daNote.noteData] && daNote.canBeHit
					&& daNote.mustPress && !daNote.tooLate && !daNote.wasGoodHit && !daNote.blockHit) {
						goodNoteHit(daNote);
					}
				});
			}

			if (holdArray.contains(true) && !endingSong) {
				#if ACHIEVEMENTS_ALLOWED
				var achieve:String = checkForAchievement(['oversinging']);
				if (achieve != null) {
					startAchievement(achieve);
				}
				#end
			}
			else if (boyfriend.animation.curAnim != null && boyfriend.holdTimer > Conductor.stepCrochet * (0.0011 / FlxG.sound.music.pitch) * boyfriend.singDuration && boyfriend.animation.curAnim.name.startsWith('sing') && !boyfriend.animation.curAnim.name.endsWith('miss'))
			{
				boyfriend.dance();
				//boyfriend.animation.curAnim.finish();
			}
		}

		// TO DO: Find a better way to handle controller inputs, this should work for now
		if((controls.controllerMode || strumsBlocked.contains(true)) && releaseArray.contains(true))
			for (i in 0...releaseArray.length)
				if(releaseArray[i] || strumsBlocked[i] == true)
					keyReleased(i);
	}

	public function healthBarShake(intensity:Float) // Litle rewrite - PurSnake
		{
	
			for (helem in [healthBar]) {
				if (helem != null) {
					for (timer in [
						{time: 0.01, forse:  (10 * intensity)},
						{time: 0.05, forse: -(15 * intensity)},
						{time: 0.10, forse:  (8 * intensity)},
						{time: 0.15, forse: -(5 * intensity)},
						{time: 0.20, forse:  (3 * intensity)},
						{time: 0.25, forse: -(1 * intensity)}
					]) {
						new FlxTimer().start(timer.time, function(tmr:FlxTimer) {
							helem.y += timer.forse;
						});
					}
				}
			}
		}

	function noteMiss(daNote:Note):Void { //You didn't hit the key and let it go offscreen, also used by Hurt Notes
		//Dupe note remove
		notes.forEachAlive(function(note:Note) {
			if (daNote != note && daNote.mustPress && daNote.noteData == note.noteData && daNote.isSustainNote == note.isSustainNote && Math.abs(daNote.strumTime - note.strumTime) < 1) {
				note.kill();
				notes.remove(note, true);
				note.destroy();
				noteHits = 0;
			}
		});

		healthBarShake(0.35);
		iconP2.changeIconStatus(1);
		iconP1.changeIconStatus(2);

		if(instakillOnMiss)
			{
				if(daNote.noteType != 'Restart PC Note')
					vocals.volume = 0;
	
				doDeathCheck(true);
			}
	
			if(!daNote.noMissAnimation)
			{
				switch(daNote.noteType) {
					case 'Restart PC Note': //used for rsod
						 camOther.flash(FlxColor.BLACK, 4.5, null, true);
						camHUD.shake(0.0055, 0.35);
						FlxG.camera.flash(FlxColor.BLACK, 1, null, true);
						health -= 1;
						if(allowHUDcamToZoom) camHUD.zoom = 1.1; // no += cuz it would mess with doubles ones
				}
			}
		
		noteMissCommon(daNote.noteData, daNote);
		var result:Dynamic = callOnLuas('noteMiss', [notes.members.indexOf(daNote), daNote.noteData, daNote.noteType, daNote.isSustainNote]);
		if(result != FunkinLua.Function_Stop && result != FunkinLua.Function_StopHScript && result != FunkinLua.Function_StopAll) callOnHScript('noteMiss', [daNote]);
		noteHits = 0;
	}

	function noteMissPress(direction:Int = 1):Void //You pressed a key when there was no notes to press for this key
	{
		if(ClientPrefs.data.ghostTapping) return; //fuck it

		noteMissCommon(direction);
		FlxG.sound.play(Paths.soundRandom('missnote', 1, 3), FlxG.random.float(0.1, 0.2));
		callOnScripts('noteMissPress', [direction]);
		noteHits = 0;
	}

	function noteMissCommon(direction:Int, note:Note = null)
	{
		// score and data
		var subtract:Float = 0.05;
		if(note != null) subtract = note.missHealth;
		health -= subtract * healthLoss;

		if(instakillOnMiss)
		{
			vocals.volume = 0;
			doDeathCheck(true);
		}
		combo = 0;

		if(!practiceMode) songScore -= 10;
		if(!endingSong) songMisses++;
		totalPlayed++;
		RecalculateRating(true);

		// play character anims
		var char:Character = boyfriend;
		if((note != null && note.gfNote) || (SONG.notes[curSection] != null && SONG.notes[curSection].gfSection)) char = gf;
		noteHits = 0;
		
		if(char != null && char.hasMissAnimations)
		{
			var suffix:String = '';
			if(note != null) suffix = note.animSuffix;

			var animToPlay:String = singAnimations[Std.int(Math.abs(Math.min(singAnimations.length-1, direction)))] + 'miss' + suffix;
			char.playAnim(animToPlay, true);
			
			if(char != gf && combo > 5 && gf != null && gf.animOffsets.exists('sad'))
			{
				gf.playAnim('sad');
				gf.specialAnim = true;
			}
		}
		vocals.volume = 0;
	}

	function opponentNoteHit(note:Note):Void
	{
		if (Paths.formatToSongPath(SONG.song) != 'tutorial')
			camZooming = true;

		if(note.noteType == 'Hey!' && dad.animOffsets.exists('hey')) {
			dad.playAnim('hey', true);
			dad.specialAnim = true;
			dad.heyTimer = 0.6;
		} else if ((note.noteType == 'Phone Alt Notes' && dad.animOffsets.exists('-alt')))
		{
			dad.playAnim('-alt', true);
			dad.specialAnim = true;

		} else if ((note.noteType == 'Phone Break Notes' && dad.animOffsets.exists('break')))
		{
			dad.playAnim('break', true);
			dad.specialAnim = true;

		} else if ((note.noteType == 'Phone Throw Notes' && dad.animOffsets.exists('throw')))
		{
			dad.playAnim('throw', true);
			dad.specialAnim = true;

		} else if(!note.noAnimation) {
			var altAnim:String = note.animSuffix;

			if (SONG.notes[curSection] != null)
			{
				if (SONG.notes[curSection].altAnim && !SONG.notes[curSection].gfSection) {
					altAnim = '-alt';
				}
			}

			var char:Character = dad;
			var animToPlay:String = singAnimations[Std.int(Math.abs(note.noteData))] + altAnim;

			
			if (ClientPrefs.data.followarrow == true)
				{
					if (!dad.stunned)
						{
							switch(Std.int(Math.abs(note.noteData)))
								{	
									case 0:
										charAnimOffsetX = -20;
									case 3:
										charAnimOffsetX = 20;
								}	
						
						}
				}

			if(note.gfNote) {
				char = gf;
			}

			if(note.altStrum) {
				char = player3;
			}

			if(char != null)
			{
				if(!laggingRSOD)
					char.playAnim(animToPlay, true);
				char.holdTimer = 0;
			}

			if (!note.altStrum) cameraMoveOnNote(note.noteData, 'dad');

			if(note.gfNote) {
				char = gf;
			}

			if(char != null)
			{
				char.playAnim(animToPlay, true);
				char.holdTimer = 0;
			}
		}

		switch (note.noteType)
		{
			case 'phone':
				var hitAnimation:Bool = boyfriend.animation.getByName("dodge") != null;
				var heyAnimation:Bool = boyfriend.animation.getByName("hey") != null;
				boyfriend.playAnim(hitAnimation ? 'dodge' : (heyAnimation ? 'hey' : 'singUPmiss'), true);
				gf.playAnim('cheer', true);
				if (note.health != 2)
				{
					dad.playAnim(dad.animation.getByName("throw") == null ? 'smash' : 'throw', true);
				}
			}

		var newOffset:Float = 0.03;
		var newgrainsize:Float = 2;
		var newgrainluma:Float = 2;
		var newgrainlockAlpha:Bool = true;
		var newgraincoloramount:Float = 2;
		var newbloomeffect:Float = 9;
		var newbloomstrength:Float = 1;
		var newbloomcontrast:Float = 1;
		var newbloombrightness:Float = 0;

		switch(dad.curCharacter)
		{
			case 'bambi-god-2','bombu-v2','bambi-3d','bombai-v2','god-expunged-1-new','dave-3d', 'baiburg', 'crusturn', 'god-expunged-1', 'bambi-unfair', 'expunged', 'bambi-piss-3d', 'bambi-scaryooo', 'hell-1', 'hell-2', 'bambi-hell', 'bombu', 'bombai', 'crimson-dave', 'crimson-bambi', 'gary', 'bamburg', 'bamburg-player', '404','404-old':
				
			if (realityShader){

					if(ClientPrefs.data.ChromaticAberration) { 
						camHUD.setFilters([new ShaderFilter(googlechrom.shader),new ShaderFilter(grain.shader)]);
						googlechrom.offset += newOffset;
						FlxTween.tween(googlechrom, {offset: 0.002}, 0.1, { ease: FlxEase.linear });

					} else {
						camHUD.setFilters([new ShaderFilter(grain.shader)]);
					}
	
					grain.grainsize += newgrainsize;
					grain.lumamount += newgrainluma;
					grain.lockAlpha = newgrainlockAlpha;
					grain.coloramount += newgraincoloramount;
	
					FlxTween.tween(grain, {grainsize: 0.01}, 0.1, { ease: FlxEase.linear });
					FlxTween.tween(grain, {lumamount: 0.05}, 0.1, { ease: FlxEase.linear });
					FlxTween.tween(grain, {coloramount: 0}, 0.1, { ease: FlxEase.linear });
	
					if (ClientPrefs.data.shaders && ClientPrefs.data.flashing)
						{
							bloom.effect = newbloomeffect;
							bloom.strength += newbloomstrength;
							bloom.contrast = newbloomcontrast;
							bloom.brightness = newbloombrightness;
	
							FlxTween.tween(bloom, {effect: 5.0}, 0.1, { ease: FlxEase.linear });
							FlxTween.tween(bloom, {strength: 0.0}, 0.1, { ease: FlxEase.linear });
							FlxTween.tween(bloom, {contrast: 1.0}, 0.1, { ease: FlxEase.linear });
							FlxTween.tween(bloom, {brightness: 0.0}, 0.1, { ease: FlxEase.linear });
						}
				}
	
		}

		switch (curSong.toLowerCase()){
			case 'reality breaking':
				if (realityShader){

					if(ClientPrefs.data.ChromaticAberration) { 
						camHUD.setFilters([new ShaderFilter(googlechrom.shader),new ShaderFilter(grain.shader)]);
						googlechrom.offset += newOffset;
						FlxTween.tween(googlechrom, {offset: 0.002}, 0.1, { ease: FlxEase.linear });

					} else {
						camHUD.setFilters([new ShaderFilter(grain.shader)]);
					}
	
					grain.grainsize += newgrainsize;
					grain.lumamount += newgrainluma;
					grain.lockAlpha = newgrainlockAlpha;
					grain.coloramount += newgraincoloramount;
	
					FlxTween.tween(grain, {grainsize: 0.01}, 0.1, { ease: FlxEase.linear });
					FlxTween.tween(grain, {lumamount: 0.05}, 0.1, { ease: FlxEase.linear });
					FlxTween.tween(grain, {coloramount: 0}, 0.1, { ease: FlxEase.linear });
	
					if (ClientPrefs.data.shaders && ClientPrefs.data.flashing)
						{
							bloom.effect = newbloomeffect;
							bloom.strength += newbloomstrength;
							bloom.contrast = newbloomcontrast;
							bloom.brightness = newbloombrightness;
	
							FlxTween.tween(bloom, {effect: 5.0}, 0.1, { ease: FlxEase.linear });
							FlxTween.tween(bloom, {strength: 0.0}, 0.1, { ease: FlxEase.linear });
							FlxTween.tween(bloom, {contrast: 1.0}, 0.1, { ease: FlxEase.linear });
							FlxTween.tween(bloom, {brightness: 0.0}, 0.1, { ease: FlxEase.linear });
						}
				}

					if(ClientPrefs.data.flashing) {
						camHUD.shake(0.0065, 0.1);
						FlxG.camera.shake(0.0065, 0.1);
					}
			case 'rebound' | 'disposition'|'disposition old':
				if(ClientPrefs.data.flashing && !SONG.notes[curSection].mustHitSection)
					camHUD.shake(0.0025, 0.050);
				if(gf.animOffsets.exists('scared')) {
					gf.playAnim('scared', true);
				}
		} switch (curSong.toLowerCase()) {
			case 'disposition old':
				if(health > 0.1) health -= 0.01;
			case 'disposition':
				if(health > 0.1) health -= 0.01;
		}


		if (SONG.needsVoices)
			vocals.volume = 1;

		var time:Float = 0.15;
		if(note.isSustainNote && !note.animation.curAnim.name.endsWith('end')) {
			time += 0.15;
		}
		
		if(!note.altStrum)
			strumPlayAnim(true, Std.int(Math.abs(note.noteData)), time);
		else
			strumPlayAnim(true, Std.int(Math.abs(note.noteData)), time, true);
		note.hitByOpponent = true;

		var result:Dynamic = callOnLuas('opponentNoteHit', [notes.members.indexOf(note), Math.abs(note.noteData), note.noteType, note.isSustainNote]);
		if(result != FunkinLua.Function_Stop && result != FunkinLua.Function_StopHScript && result != FunkinLua.Function_StopAll) callOnHScript('opponentNoteHit', [note]);

		if (!note.isSustainNote)
		{
			note.kill();
			notes.remove(note, true);
			note.destroy();
		}
	}

	function goodNoteHit(note:Note):Void
	{
		if (!note.isSustainNote)
			notesHitArray.push(Date.now());

		if (!note.wasGoodHit)
		{
			if(cpuControlled && (note.ignoreNote || note.hitCausesMiss)) return;

			note.wasGoodHit = true;
			if (ClientPrefs.data.hitsoundVolume > 0 && !note.hitsoundDisabled)
				FlxG.sound.play(Paths.sound(note.hitsound), ClientPrefs.data.hitsoundVolume);

			if(note.hitCausesMiss) {
				noteMiss(note);
				if(!note.noteSplashData.disabled && !note.isSustainNote)
					spawnNoteSplashOnNote(note);

				if(!note.noMissAnimation)
				{
					switch(note.noteType) {
						case 'Hurt Note': //Hurt note
							if(boyfriend.animation.getByName('hurt') != null) {
								boyfriend.playAnim('hurt', true);
								boyfriend.specialAnim = true;
							}
					}
				}

				if (!note.isSustainNote)
				{
					note.kill();
					notes.remove(note, true);
					note.destroy();
				}
				return;
			}
			switch (note.noteType)
			{
				case 'phone':
					var hitAnimation:Bool = boyfriend.animation.getByName("dodge") != null;
					var heyAnimation:Bool = boyfriend.animation.getByName("hey") != null;
					boyfriend.playAnim(hitAnimation ? 'dodge' : (heyAnimation ? 'hey' : 'singUPmiss'), true);
					gf.playAnim('cheer', true);
					if (note.health != 2)
					{
						dad.playAnim(dad.animation.getByName("throw") == null ? 'smash' : 'throw', true);
					}
				}

			if (!note.isSustainNote)
			{	
				totalNotesjudgement++;
				noteHits++;
				combo++;
				if(combo > 9999) combo = 9999;
				popUpScore(note);
			}
			health += note.hitHealth * healthGain;

			if(!note.noAnimation) {
				var animToPlay:String = singAnimations[Std.int(Math.abs(note.noteData))];

				cameraMoveOnNote(note.noteData, 'bf');

				var char:Character = boyfriend;
				var animCheck:String = 'hey';

				if (ClientPrefs.data.followarrow == true)
					{
						if (!boyfriend.stunned)
							{
								switch(Std.int(Math.abs(note.noteData)))
									{	
										case 0:
											charAnimOffsetX = -20;
										case 3:
											charAnimOffsetX = 20;
									}
							}
					}

				if(note.gfNote)
					{
						if(gf != null)
						{
							if(!laggingRSOD)
								gf.playAnim(animToPlay + note.animSuffix, true);
							gf.holdTimer = 0;
						}
					}
					else
					{
						if(!laggingRSOD)
							boyfriend.playAnim(animToPlay + note.animSuffix, true);
						boyfriend.holdTimer = 0;
					}
				
				if(char != null)
				{
					char.playAnim(animToPlay + note.animSuffix, true);
					char.holdTimer = 0;
					
					if(note.noteType == 'Hey!') {
						if(char.animOffsets.exists(animCheck)) {
							char.playAnim(animCheck, true);
							char.specialAnim = true;
							char.heyTimer = 0.6;
						}
					}
				}
			}

			if(!note.noMissAnimation)
				{
					switch(note.noteType) {
						case 'Restart PC Note': //used for rsod
							camHUD.shake(0.0055, 0.35);
							if(allowHUDcamToZoom) camHUD.zoom = 1.115;
							if(allowGamecamToZoom && !doingSMzoom) FlxG.camera.zoom += 0.055;
					}
				}

			if(!cpuControlled)
			{
				var spr = playerStrums.members[note.noteData];
				if(spr != null) spr.playAnim('confirm', true);
			}
			else strumPlayAnim(false, Std.int(Math.abs(note.noteData)), Conductor.stepCrochet * 1.25 / 1000 / playbackRate);
			vocals.volume = 1;

			var isSus:Bool = note.isSustainNote; //GET OUT OF MY HEAD, GET OUT OF MY HEAD, GET OUT OF MY HEAD
			var leData:Int = Math.round(Math.abs(note.noteData));
			var leType:String = note.noteType;
			
			var result:Dynamic = callOnLuas('goodNoteHit', [notes.members.indexOf(note), leData, leType, isSus]);
			if(result != FunkinLua.Function_Stop && result != FunkinLua.Function_StopHScript && result != FunkinLua.Function_StopAll) callOnHScript('goodNoteHit', [note]);

			if (!note.isSustainNote)
			{
				note.kill();
				notes.remove(note, true);
				note.destroy();
			}
		}
	}

	public function spawnNoteSplashOnNote(note:Note) {
		if(note != null) {
			var strum:StrumNote = playerStrums.members[note.noteData];
			if(strum != null)
				spawnNoteSplash(strum.x, strum.y, note.noteData, note);
		}
	}

	public function spawnNoteSplash(x:Float, y:Float, data:Int, ?note:Note = null) {
		var splash:NoteSplash = grpNoteSplashes.recycle(NoteSplash);
		splash.setupNoteSplash(x, y, data, note);
		grpNoteSplashes.add(splash);
	}

	override function destroy() {
		#if LUA_ALLOWED
		for (i in 0...luaArray.length) {
			var lua:FunkinLua = luaArray[0];
			lua.call('onDestroy', []);
			lua.stop();
		}
		luaArray = [];
		FunkinLua.customFunctions.clear();
		#end

		#if HSCRIPT_ALLOWED
		for (script in hscriptArray)
			if(script != null)
			{
				script.call('onDestroy');
				script.destroy();
			}

		while (hscriptArray.length > 0)
			hscriptArray.pop();
		#end

		FlxG.stage.removeEventListener(KeyboardEvent.KEY_DOWN, onKeyPress);
		FlxG.stage.removeEventListener(KeyboardEvent.KEY_UP, onKeyRelease);
		FlxAnimationController.globalSpeed = 1;
		FlxG.sound.music.pitch = 1;
		Note.globalRgbShaders = [];
		backend.NoteTypesConfig.clearNoteTypesData();
		instance = null;
		super.destroy();
	}

	public static function cancelMusicFadeTween() {
		if(FlxG.sound.music.fadeTween != null) {
			FlxG.sound.music.fadeTween.cancel();
		}
		FlxG.sound.music.fadeTween = null;
	}

	var lastStepHit:Int = -1;
	override function stepHit()
	{
		if(FlxG.sound.music.time >= -ClientPrefs.data.noteOffset)
		{
			if (Math.abs(FlxG.sound.music.time - (Conductor.songPosition - Conductor.offset)) > (20 * playbackRate)
				|| (SONG.needsVoices && Math.abs(vocals.time - (Conductor.songPosition - Conductor.offset)) > (20 * playbackRate)))
			{
				resyncVocals();
			}
		}

		super.stepHit();

		switch (SONG.song.toLowerCase())
		{
		   case 'reality breaking oldest':
		   		switch (curBeat)
			   		{
			   			case 128:
					   		stupidBool = true;
					  		doneloll2 = true;
					   		camHUD.flash(FlxColor.WHITE, 0.25);
					   		camHUD.setFilters([new ShaderFilter(shader_chromatic_abberation.shader), new ShaderFilter(grain_shader.shader)]);
			   			case 256 | 512:
					   		stupidBool = true;
					   		FlxG.camera.flash(FlxColor.WHITE, 0.25);
					   		doneloll2 = true;
			   			case 384:
				   			stupidBool = false;
				   			FlxG.camera.flash(FlxColor.WHITE, 0.25);
			   			case 640:
				   			stupidBool = false;
				   			FlxG.camera.flash(FlxColor.WHITE, 0.25);
				  			doneloll2 = false;
				   			camHUD.setFilters([]);
			   }
			case 'reality breaking':
				switch (curStep)
				{
					case 0:
						realityShader = true;
					case 256:
						camZooming = true;
						camZoomingMult = 0;
					case 512:
						redGlow.visible = true;
						redGlow.alpha = 0.5;
						camZoomingMult = 1;
					case 624 | 880:
						defaultCamZoom += 0.2;
						cinematicBars(((Conductor.stepCrochet * 13) / 1000), 400);
						tutorialTxt.alpha = 1;
						tutorialTxt.text = 'HOLY SHIT';
					case 640 | 896:
						tutorialTxt.alpha = 0;
						defaultCamZoom -= 0.2;
					case 992 | 1008:
						defaultCamZoom += 0.1;
					case 1016 | 1020:
						FlxG.camera.zoom += 0.075;
					case 1024:
						defaultCamZoom -= 0.2;
						goofyZoom = true;
						realityShader = false;
						FlxG.camera.shake(0.015, 0.015);
						if (ClientPrefs.data.eyesores)
							{
								camGame.setFilters([new ShaderFilter(screenshader.shader)]);
								screenshader.Enabled = true;
								shakeCam = true;

								screenshader.shader.uTime.value[0] += elapsedtime;
								if (screenshader.Enabled = true) {
									screenshader.shader.uampmul.value[0] = 1;
								} else {
									screenshader.shader.uampmul.value[0] -= (elapsedtime / 2);
								}
							}
						if (ClientPrefs.data.blockedGlitch)
							{
								camHUD.setFilters([new ShaderFilter(glitchShader.shader)]); 
							}
						FlxTween.tween(redGlow, {alpha: 1}, 1, {ease: FlxEase.cubeOut});
					case 1536:
						screenshader.Enabled = false;
						goofyZoom = false;
						defaultCamZoom = ogDefaultCamZoom;
						camHUD.setFilters([]); 
						camGame.setFilters([]); 
						realityShader = true;
						camGame.setFilters([new ShaderFilter(googlechrom.shader),new ShaderFilter(heath.shader),new ShaderFilter(bloom.shader)]);	
						FlxTween.tween(redGlow, {alpha: 0.5}, 1, {ease: FlxEase.cubeOut});
					case 1560 | 1592 | 1688:
						defaultCamZoom += 0.1;
					case 1568 | 1600 | 1696:
						defaultCamZoom -= 0.1;
					case 1648 | 1776:
						defaultCamZoom += 0.1;
					case 1656 | 1784:
						defaultCamZoom += 0.2;
					case 1664 | 1792:
						defaultCamZoom -= 0.3;
					case 2048:
						cameraSpeed = 0.5;
						FlxTween.tween(this, {defaultCamZoom: defaultCamZoom + 0.3}, 63*Conductor.crochet*0.001);
						FlxTween.tween(redGlow, {alpha: 0}, 32*Conductor.crochet*0.001, {ease: FlxEase.cubeOut});
						for (spr in [healthBar, healthBarOverlay, iconP1, iconP2, scoreTxt]) {
							FlxTween.tween(spr, {alpha: 0}, 1);
						}
					case 2304:
						cameraSpeed = 1;
						defaultCamZoom -= 0.1;
					case 2528:
						defaultCamZoom -= 0.2;
						FlxTween.tween(redGlow, {alpha: 0.5}, 1, {ease: FlxEase.cubeOut});
						for (spr in [healthBar, healthBarOverlay, iconP1, iconP2, scoreTxt]) {
							FlxTween.tween(spr, {alpha: 1}, 1);
						}
				    case 2560:
				    	camTilt = true;
				    	cameraSpeed = 1.5;
				    	defaultCamZoom += 0.2;
				    	FlxTween.tween(redGlow, {alpha: 1}, 1, {ease: FlxEase.cubeOut});
				    case 3072:
				    	defaultCamZoom -= 0.1;
						FlxTween.tween(redGlow, {alpha: 0}, 60*Conductor.crochet*0.001, {ease: FlxEase.cubeOut});
				    	camTilt = false;
				    	if (camTiltTween != null) camTiltTween.cancel();
						camTiltTween = FlxTween.tween(camHUD, {angle: 0}, Conductor.crochet / 1000, {ease: FlxEase.quadOut});
					case 3328:
						defaultCamZoom += 0.1;
						FlxTween.tween(redGlow, {alpha: 1}, 1, {ease: FlxEase.cubeOut});
					case 3352:
						FlxTween.tween(FlxG.camera, {zoom: 2.5}, 2*Conductor.crochet*0.001, {ease: FlxEase.backIn});
					case 3360:
						FlxG.camera.visible = false;
						FlxTween.tween(redGlow, {alpha: 0}, 1, {ease: FlxEase.cubeOut});
				}		
			case 'upheaval':
				switch (curStep)
				{
					case 512:
						dad.visible = true;
						gf.visible = false;
						FlxG.camera.alpha = 1;
						camOther.flash(FlxColor.WHITE, 3);
						scoreTxt.scale.x = 1;
						scoreTxt.scale.y = 1;
						healthBar.angle = 0;
					    camHUD.angle = 0;
					case 767:
						ogCamBopVAL = 0.05;
						ogCamHUDBopVAL = 0.1;
						camOther.flash(FlxColor.WHITE, 1.5);
				}
			case 'rebound old':
				switch (curStep)
				{
					case 0:
						hideshit();
					case 1792:
						FlxTween.tween(this, {defaultCamZoom:1.30}, 10.82 / playbackRate);
						FlxTween.tween(scoreTxt, {alpha:0}, 1 / playbackRate);
						FlxTween.tween(timeBar, {alpha:0}, 1 / playbackRate);
						FlxTween.tween(timeTxt, {alpha:0}, 1 / playbackRate);
						FlxTween.tween(judgementCounter, {alpha:0}, 1 / playbackRate);
						FlxTween.tween(healthBar, {alpha:0}, 1 / playbackRate);
						FlxTween.tween(healthBarOverlay, {alpha:0}, 1 / playbackRate);
						FlxTween.tween(iconP1, {alpha:0}, 1 / playbackRate);
						FlxTween.tween(iconP2, {alpha:0}, 1 / playbackRate);
						FlxTween.tween(botplayTxt, {alpha:0}, 1 / playbackRate);
					case 1920:
						defaultCamZoom = 1.30;
						FlxTween.tween(this, {defaultCamZoom:0.7}, 10.82 / playbackRate);
					case 2048:
						defaultCamZoom = 0.7;
						FlxTween.tween(scoreTxt, {alpha:1}, 1 / playbackRate);
						FlxTween.tween(timeBar, {alpha:1}, 1 / playbackRate);
						FlxTween.tween(timeTxt, {alpha:1}, 1 / playbackRate);
						FlxTween.tween(judgementCounter, {alpha:1}, 1 / playbackRate);
						FlxTween.tween(healthBar, {alpha:1}, 1 / playbackRate);
						FlxTween.tween(healthBarOverlay, {alpha:1}, 1 / playbackRate);
						FlxTween.tween(iconP1, {alpha:1}, 1 / playbackRate);
						FlxTween.tween(iconP2, {alpha:1}, 1 / playbackRate);
						FlxTween.tween(botplayTxt, {alpha:1}, 1 / playbackRate);
				}
			case 'disposition old': // wanted to do this the classic way lol
		    	switch (curStep)
		    	{
					case 120:
						FlxG.camera.visible = false;
						camZooming = true;
					case 127:
						FlxG.camera.visible = true;
					case 239:
						tutorialTxt.alpha = 1;
						tutorialTxt.text = 'I';
					case 242:
						tutorialTxt.text = 'I-IS';
					case 244:
						tutorialTxt.text = 'I-ISAAC...';
					case 248:
						tutorialTxt.text = 'STOP!!!';
					case 254:
						tutorialTxt.text = 'S-TO';
					case 255:
						tutorialTxt.text = 'TO-TO';
					case 256:
						tutorialTxt.text = '';
						tutorialTxt.alpha = 0;
		    		case 496:
						defaultCamZoom += 0.135;
					case 504:
						defaultCamZoom += 0.185;
					case 512:
						defaultCamZoom -= 0.32;
					case 752:
						defaultCamZoom += 0.125;
					case 768:
						defaultCamZoom -= 0.125;

					case 1136:
						defaultCamZoom += 0.3;
					if (ClientPrefs.data.BlackScreen)
						{
							FlxTween.tween(blackScreen, {alpha: 0.35}, Conductor.stepCrochet / 500);
						}
					case 1152:
						defaultCamZoom -= 0.3;
					if (ClientPrefs.data.BlackScreen)
						{
							FlxTween.tween(blackScreen, {alpha: 0}, Conductor.stepCrochet / 500);
						}
					case 1404 | 1406:
						FlxG.camera.angle = 2;
						camHUD.angle = 2;
					case 1405:
						FlxG.camera.angle = -2;
						camHUD.angle = -2;
					case 1407:
						
						for (camerass in [camHUD, camGame])
				            FlxTween.tween(camerass, {angle: 0}, 2, {ease: FlxEase.backOut});
					case 2296 | 2297 | 2298 | 2299 | 2300:
						camHUD.y += 22.25;
						camHUD.x += 22.25;
					case 2301:
						FlxG.camera.visible = false;
						camHUD.visible = false;
					case 2303:
						camHUD.y = 0;
						camHUD.x = 0;
						FlxG.camera.visible = true;
						camHUD.visible = true;
						camOther.flash();
			    }
			case 'disposition': // wanted to do this the classic way lol
		    	switch (curStep)
		    	{
					case 120:
						FlxG.camera.visible = false;
						camZooming = true;
					case 127:
						FlxG.camera.visible = true;
		    		case 496:
						defaultCamZoom += 0.135;
					case 504:
						defaultCamZoom += 0.185;
					case 512:
						defaultCamZoom -= 0.32;
					case 752:
						defaultCamZoom += 0.125;
					case 768:
						defaultCamZoom -= 0.125;
					case 1136:
						defaultCamZoom += 0.3;
					case 1152:
						defaultCamZoom -= 0.3;
					case 1404 | 1406:
						FlxG.camera.angle = 2;
						camHUD.angle = 2;
					case 1405:
						FlxG.camera.angle = -2;
						camHUD.angle = -2;
					case 1407:
						for (camerass in [camHUD, camGame])
				            FlxTween.tween(camerass, {angle: 0}, 2, {ease: FlxEase.backOut});
					case 2296 | 2297 | 2298 | 2299 | 2300:
						camHUD.y += 22.25;
						camHUD.x += 22.25;
					case 2301:
						FlxG.camera.visible = false;
						camHUD.visible = false;
					case 2303:
						camHUD.y = 0;
						camHUD.x = 0;
						FlxG.camera.visible = true;
						camHUD.visible = true;
						camOther.flash();
			    }
			case 'shattered':
				switch (curStep)
				{
					case 0:
						hideshit();
					case 1:
						camHUD.alpha = 0;
						restoreHUDElements();
					case 120:
						showHUDFade();
					case 760:
						defaultCamZoom -= 0.32;
						camHUD.visible = false;
						dad.visible = false;
						boyfriend.visible = false;	
						gf.visible = false;		
					case 768:
						defaultCamZoom += 0.32;
						camHUD.visible = true;
						dad.visible = true;
						boyfriend.visible = true;		
						add(shartGrad);
						addBehindDad(shartGrad);
						addBehindBF(shartGrad);
						addBehindDad(shartLine);
						addBehindBF(shartLine);
						FlxTween.tween(shartGrad, {alpha:1}, 0.1);
						add(shartLine);
						FlxTween.tween(shartLine, {alpha:1}, 0.1);
					case 832:
						if (ClientPrefs.data.BlackScreen)
							{
								add(blackScreen);
								FlxTween.tween(blackScreen, {alpha:1}, 0);
							}
							FlxTween.tween(shartGrad, {alpha:0}, 0);
							FlxTween.tween(shartLine, {alpha:0}, 0);

							var sunsetColor:FlxColor = FlxColor.fromRGB(255, 143, 178);
							var nightColor:FlxColor = 0xFF878787;
							var bfTween:ColorTween;

							waoscolorshatt = false;

							FlxTween.color(boyfriend, 10,sunsetColor, nightColor, {ease: FlxEase.circOut});
							FlxTween.color(gf,10,sunsetColor, nightColor, {ease: FlxEase.circOut});
							FlxTween.color(dad,10,sunsetColor, nightColor, {ease: FlxEase.circOut});
					case 840:
						shartGrad.visible = false;
						shartLine.visible = false;
						gf.visible = true;
						if (ClientPrefs.data.BlackScreen)
							{
								blackScreen.visible = false;
								FlxTween.tween(blackScreen, {alpha:1}, 0);
							}
					case 1151:
						if (ClientPrefs.data.BlackScreen)
							{
								blackScreen.visible = true;
								FlxTween.tween(blackScreen, {alpha:0}, 10);
							}
					case 1215:
						if (ClientPrefs.data.BlackScreen)
							{
								FlxTween.tween(blackScreen, {alpha:1}, 5);
							}
					case 1280:
						if (ClientPrefs.data.BlackScreen)
							{
								FlxTween.tween(blackScreen, {alpha:0}, 2);
							}
					case 1665:
						boyfriend.playAnim('hurt', true);
						glow.color = 0xFFFF0000;					
					case 1792:
						redGlow.visible = true;
				}

				case 'shattered oldest':
					switch (curStep)
					{
						case 0:
							hideshit();
						case 1:
							camHUD.alpha = 0;
							restoreHUDElements();
						case 120:
							showHUDFade();
						case 895:
							add(blackScreen);
						case 896:
							FlxTween.tween(blackScreen, {alpha:0}, 10);
						case 1024:
							FlxTween.tween(blackScreen, {alpha:1}, 5);
						case 1090:
							FlxTween.tween(blackScreen, {alpha:0}, 2);
						case 1665:
							triggerEvent('Change Character', '0', 'bf-scared',1);
							boyfriend.playAnim('hurt', true);
							glow.color = 0xFFFF0000;
						case 1792:
							redGlow.visible = true;
					}
			case 'number 15':
				switch (curStep)
				{
					case 1:
						cinematicBars(((Conductor.stepCrochet *3013) / 1000), 400);
						cpuControlled = true;
				}
			case 'technology':
				switch (curStep)
				{
					case 394:
						cinematicBars(((Conductor.stepCrochet *40) / 1000), 400)
				;
				}
			case 'acquaintance':
				switch (curStep)
				{
					case 0:
						camZoomSnap = true;
					case 512:
						camTilt = true;
					case 768:
						camZoomSnap = false;
						camTilt = false;
						if (camTiltTween != null) camTiltTween.cancel();
						camTiltTween = FlxTween.tween(camHUD, {angle: 0}, Conductor.crochet / 1000, {ease: FlxEase.quadOut});
					case 1024:
						camZoomSnap = true;
						camTilt = true;
					case 1280:
						camZoomSnap = false;
						camTilt = false;
						if (camTiltTween != null) camTiltTween.cancel();
						camTiltTween = FlxTween.tween(camHUD, {angle: 0}, Conductor.crochet / 1000, {ease: FlxEase.quadOut});
				}
		case 'supplanted':
			switch (curStep)
			{
				case 128:
				if(ClientPrefs.data.flashing) FlxG.camera.flash(FlxColor.WHITE, 1);
					redGlow.visible = true;
				case 802:
					defaultCamZoom = 1.5;
				case 805:
					defaultCamZoom = 0.85;
				case 859:
					defaultCamZoom = 1.75;
				case 863:
					defaultCamZoom = 0.85;
				case 892:
					defaultCamZoom = 1.5;
				case 895:
					defaultCamZoom = 0.85;
				case 944 | 1343 | 2176:
					camZoomSnap = false;
				case 720 | 960 | 1856:
					camZoomSnap = true;
				case 1344:
					if(ClientPrefs.data.flashing) FlxG.camera.flash(FlxColor.WHITE, 1);
				case 2368:
					if(ClientPrefs.data.flashing) FlxG.camera.flash(FlxColor.WHITE, 1);
					redGlow.visible = false;
					FlxTween.tween(camFollow, {y:camFollow.y -1000}, 5, {ease: FlxEase.expoOut,}); 
					camZooming = false;
				case 2384: // 2384
					add(blackScreen);
				case 2386: // 2386
					FlxTween.tween(blackScreen, {alpha:1}, 5);
					camZooming = true;
				case 2656: // 2656
			    	FlxTween.tween(blackScreen, {alpha:0}, 3);
				case 2688:
					redGlow.visible = true;
					camZooming = true;
				case 2960:
					dad.color = 0xFF000000;
					defaultCamZoom = 1.35;

			}
			case 'rsod old': // i should probably organize this one jesus
				switch (curStep)
				{
					case 32:
						FlxTween.tween(tutorialTxt, {alpha: 1}, 0.35, {ease: FlxEase.cubeInOut});
					case 80:
						FlxTween.tween(tutorialTxt, {alpha: 0}, 1.25, {ease: FlxEase.cubeInOut});
					case 112:
						remove(tutorialTxt);
					case 368 | 1167 | 2192:
						FlxTween.tween(notResponding, {alpha: 0.5}, 0.5);
						boyfriend.animation.stop();
						dad.animation.stop();
						gf.animation.stop();
						laggingRSOD = true;		
						camZooming = false;
						bgrsod.active = false;
						if (ClientPrefs.data.Lenguage == 'English')
						{
							openfl.Lib.application.window.title = "Bambi's Purgatory (Not Responding)";
						}else{
							openfl.Lib.application.window.title = "Bambi's Purgatory (No Responde)";
						}
                    case 400 | 1200 | 2224:
				    	rsod.visible = true;
						showonlystrums();
						camHUD.shake(0.0055, 0.35);
						FlxG.camera.visible = false;
						camZooming = false;
						camHUD.zoom = 1;
						poop();
						notResponding.alpha = 0;
					case 401 | 1201 | 2225: // in case the game skips a beat cuz it does that usuallyFUCK YOU FLIXEL
						rsod.visible = true;
						showonlystrums();
						FlxG.camera.visible = false;
						poop();
						camZooming = false;
					case 416 | 1216 | 2240:
						rsod.visible = false;
						notResponding.alpha = 0;
						FlxG.camera.visible = true;
						camOther.flash(FlxColor.BLACK, 0.55);
						FlxG.camera.flash(FlxColor.BLACK, 0.55);
						restoreHUDElements();
						camZooming = true;
						laggingRSOD = false;
						bgrsod.active = true;
						crap();
						restoreTitleWin();
						//resetSprBfAnim(note:Note);
					case 417 | 1217 | 2241:
						rsod.visible = false;
						notResponding.alpha = 0;
						FlxG.camera.visible = true;
						restoreHUDElements();
						laggingRSOD = false;
						crap();
						camZooming = true; 
						bgrsod.active = true;
						restoreTitleWin();
						// STOP SKIPPING THE FUCKING STEP
					case 544 | 831 | 1856:
						camZoomSnap = true;
					case 799 | 1344 | 2367:
						camZoomSnap = false;
					case 815:
						camZooming = false;
						camHUD.zoom = 1;
						defaultCamZoom += 0.0375;
						FlxTween.tween(FlxG.camera, {zoom: 1.375}, 0.95, {ease: FlxEase.cubeInOut});
					case 832:
						camZooming = true;
					case 2628:
						camZooming = false;
				}
			}
		if(curStep == lastStepHit) {
			return;
		}

		lastStepHit = curStep;
		setOnScripts('curStep', curStep);
		callOnScripts('onStepHit');
	}

	var lastBeatHit:Int = -1;

	override function beatHit()
	{
		if (ClientPrefs.data.wiggle)
			{	
				wiggleShit.waveAmplitude = 0.035;
				wiggleShit.waveFrequency = 10;
			}
			
		if(lastBeatHit >= curBeat) {
			//trace('BEAT HIT: ' + curBeat + ', LAST HIT: ' + lastBeatHit);
			return;
		}

		var funny:Float = (healthBar.percent * 0.01) + 0.01;

		if (dnbBounce && !laggingRSOD) {
			if(!iconP1.isAnim) iconP1.setGraphicSize(Std.int(iconP1.width + (50 * (2 - funny))),Std.int(iconP1.height - (25 * (2 - funny))));
			iconP1.updateHitbox();

	    	if(!iconP2.isAnim) iconP2.setGraphicSize(Std.int(iconP2.width + (50 * (2 - funny))),Std.int(iconP2.height - (25 * (2 - funny))));
	     	iconP2.updateHitbox();
		}
		if (ogBounce && !laggingRSOD) {
			iconP1.setGraphicSize(Std.int(iconP1.width + 30));
			iconP1.updateHitbox();

			iconP2.setGraphicSize(Std.int(iconP2.width + 30));
	     	iconP2.updateHitbox();
		}

		if (camZooming && FlxG.camera.zoom < 1.35 && ClientPrefs.data.camZooms && camZoomSnap && !laggingRSOD)
		{	
			if(allowGamecamToZoom && !doingSMzoom) FlxG.camera.zoom += camBopVAL * camZoomingMult;
			if(allowHUDcamToZoom) camHUD.zoom += camHUDBopVAL * camZoomingMult;
		}

		if(goofyZoom) {
			if(curBeat % 4 == 0)
				//defaultCamZoom = defaultCamZoom - 0.25;
				zoomAdd	= 0;
			if(curBeat % 4 == 2)
				//defaultCamZoom = defaultCamZoom + 0.25;
				zoomAdd	= 0.25;
		}

		if(camTilt) 
		{
			if (camTiltTween != null) camTiltTween.cancel();
			if(curBeat % 4 == 0)
				camTiltTween = FlxTween.tween(camHUD, {angle: -2}, Conductor.crochet / 1000, {ease: FlxEase.quadOut});
			if(curBeat % 4 == 2)
				camTiltTween = FlxTween.tween(camHUD, {angle: 2}, Conductor.crochet / 1000, {ease: FlxEase.quadOut});
		}

		if(!laggingRSOD) {
			if (!uphIntroTime) {
				FlxTween.angle(iconP1, -15, 0, Conductor.crochet / 1300 * gfSpeed / playbackRate, {ease: FlxEase.quadOut});
				FlxTween.angle(iconP2, 15, 0, Conductor.crochet / 1300 * gfSpeed /playbackRate, {ease: FlxEase.quadOut});
			}

		if (generatedMusic)
			notes.sort(FlxSort.byY, ClientPrefs.data.downScroll ? FlxSort.ASCENDING : FlxSort.DESCENDING);

		if (gf != null && curBeat % Math.round(gfSpeed * gf.danceEveryNumBeats) == 0 && gf.animation.curAnim != null && !gf.animation.curAnim.name.startsWith("sing") && !gf.stunned)
			if(!laggingRSOD)
			gf.dance();
		if (curBeat % boyfriend.danceEveryNumBeats == 0 && boyfriend.animation.curAnim != null && !boyfriend.animation.curAnim.name.startsWith('sing') && !boyfriend.stunned)
			boyfriend.dance();
		if (curBeat % dad.danceEveryNumBeats == 0 && dad.animation.curAnim != null && !dad.animation.curAnim.name.startsWith('sing') && !dad.stunned)
			dad.dance();
		if (curBeat % player3.danceEveryNumBeats == 0 && player3.animation.curAnim != null && !player3.animation.curAnim.name.startsWith('sing') && !player3.stunned)
			player3.dance();

		super.beatHit();
		lastBeatHit = curBeat;
		dancingLeft = !dancingLeft;
	}
		

		setOnScripts('curBeat', curBeat);
		callOnScripts('onBeatHit');
	}

	override function sectionHit()
	{
		if (SONG.notes[curSection] != null)
		{
			/*if (generatedMusic && !endingSong && !isCameraOnForcedPos)
				moveCameraSection();*/

			if (camZooming && FlxG.camera.zoom < 1.35 && ClientPrefs.data.camZooms && !camZoomSnap && !laggingRSOD)
				{
					if(allowGamecamToZoom && !doingSMzoom) FlxG.camera.zoom += camBopVAL * camZoomingMult;
					if(allowHUDcamToZoom) camHUD.zoom += camHUDBopVAL * camZoomingMult;
				}
	
			if (SONG.notes[curSection].changeBPM)
			{
				Conductor.bpm = SONG.notes[curSection].bpm;
				setOnScripts('curBpm', Conductor.bpm);
				setOnScripts('crochet', Conductor.crochet);
				setOnScripts('stepCrochet', Conductor.stepCrochet);
			}
			setOnScripts('mustHitSection', SONG.notes[curSection].mustHitSection);
			setOnScripts('altAnim', SONG.notes[curSection].altAnim);
			setOnScripts('gfSection', SONG.notes[curSection].gfSection);
		}
		super.sectionHit();
		
		setOnScripts('curSection', curSection);
		callOnScripts('onSectionHit');
	}

	#if LUA_ALLOWED
	public function startLuasNamed(luaFile:String)
	{
		#if MODS_ALLOWED
		var luaToLoad:String = Paths.modFolders(luaFile);
		if(!FileSystem.exists(luaToLoad))
			luaToLoad = Paths.getPreloadPath(luaFile);
		
		if(FileSystem.exists(luaToLoad))
		#elseif sys
		var luaToLoad:String = Paths.getPreloadPath(luaFile);
		if(OpenFlAssets.exists(luaToLoad))
		#end
		{
			for (script in luaArray)
				if(script.scriptName == luaToLoad) return false;
	
			new FunkinLua(luaToLoad);
			return true;
		}
		return false;
	}
	#end
	
	#if HSCRIPT_ALLOWED
	public function startHScriptsNamed(scriptFile:String)
	{
		var scriptToLoad:String = Paths.modFolders(scriptFile);
		if(!FileSystem.exists(scriptToLoad))
			scriptToLoad = Paths.getPreloadPath(scriptFile);
		
		if(FileSystem.exists(scriptToLoad))
		{
			if (SScript.global.exists(scriptToLoad)) return false;
	
			initHScript(scriptToLoad);
			return true;
		}
		return false;
	}

	public function initHScript(file:String)
	{
		try
		{
			var newScript:HScript = new HScript(null, file);
			@:privateAccess
			if(newScript.parsingExceptions != null && newScript.parsingExceptions.length > 0)
			{
				@:privateAccess
				for (e in newScript.parsingExceptions)
					if(e != null)
						addTextToDebug('ERROR ON LOADING ($file): ${e.message.substr(0, e.message.indexOf('\n'))}', FlxColor.RED);
				newScript.destroy();
				return;
			}

			hscriptArray.push(newScript);
			if(newScript.exists('onCreate'))
			{
				var callValue = newScript.call('onCreate');
				if(!callValue.succeeded)
				{
					for (e in callValue.exceptions)
						if (e != null)
							addTextToDebug('ERROR ($file: onCreate) - ${e.message.substr(0, e.message.indexOf('\n'))}', FlxColor.RED);

					newScript.destroy();
					hscriptArray.remove(newScript);
					trace('failed to initialize sscript interp!!! ($file)');
				}
				else trace('initialized sscript interp successfully: $file');
			}
			
		}
		catch(e)
		{
			addTextToDebug('ERROR ($file) - ' + e.message.substr(0, e.message.indexOf('\n')), FlxColor.RED);
			var newScript:HScript = cast (SScript.global.get(file), HScript);
			if(newScript != null)
			{
				newScript.destroy();
				hscriptArray.remove(newScript);
			}
		}
	}
	#end

	public function callOnScripts(funcToCall:String, args:Array<Dynamic> = null, ignoreStops = false, exclusions:Array<String> = null, excludeValues:Array<Dynamic> = null):Dynamic {
		var returnVal:Dynamic = psychlua.FunkinLua.Function_Continue;
		if(args == null) args = [];
		if(exclusions == null) exclusions = [];
		if(excludeValues == null) excludeValues = [psychlua.FunkinLua.Function_Continue];

		var result:Dynamic = callOnLuas(funcToCall, args, ignoreStops, exclusions, excludeValues);
		if(result == null || excludeValues.contains(result)) result = callOnHScript(funcToCall, args, ignoreStops, exclusions, excludeValues);
		return result;
	}

	public function callOnLuas(funcToCall:String, args:Array<Dynamic> = null, ignoreStops = false, exclusions:Array<String> = null, excludeValues:Array<Dynamic> = null):Dynamic {
		var returnVal:Dynamic = FunkinLua.Function_Continue;
		#if LUA_ALLOWED
		if(args == null) args = [];
		if(exclusions == null) exclusions = [];
		if(excludeValues == null) excludeValues = [FunkinLua.Function_Continue];

		var len:Int = luaArray.length;
		var i:Int = 0;
		while(i < len)
		{
			var script:FunkinLua = luaArray[i];
			if(exclusions.contains(script.scriptName))
			{
				i++;
				continue;
			}

			var myValue:Dynamic = script.call(funcToCall, args);
			if((myValue == FunkinLua.Function_StopLua || myValue == FunkinLua.Function_StopAll) && !excludeValues.contains(myValue) && !ignoreStops)
			{
				returnVal = myValue;
				break;
			}
			
			if(myValue != null && !excludeValues.contains(myValue))
				returnVal = myValue;

			if(!script.closed) i++;
			else len--;
		}
		#end
		return returnVal;
	}
	
	public function callOnHScript(funcToCall:String, args:Array<Dynamic> = null, ?ignoreStops:Bool = false, exclusions:Array<String> = null, excludeValues:Array<Dynamic> = null):Dynamic {
		var returnVal:Dynamic = psychlua.FunkinLua.Function_Continue;

		#if HSCRIPT_ALLOWED
		if(exclusions == null) exclusions = new Array();
		if(excludeValues == null) excludeValues = new Array();
		excludeValues.push(psychlua.FunkinLua.Function_Continue);

		var len:Int = hscriptArray.length;
		if (len < 1)
			return returnVal;
		for(i in 0...len)
		{
			var script:HScript = hscriptArray[i];
			if(script == null || !script.exists(funcToCall) || exclusions.contains(script.origin))
				continue;

			var myValue:Dynamic = null;
			try
			{
				var callValue = script.call(funcToCall, args);
				if(!callValue.succeeded)
				{
					var e = callValue.exceptions[0];
					if(e != null)
						FunkinLua.luaTrace('ERROR (${script.origin}: ${callValue.calledFunction}) - ' + e.message.substr(0, e.message.indexOf('\n')), true, false, FlxColor.RED);
				}
				else
				{
					myValue = callValue.returnValue;
					if((myValue == FunkinLua.Function_StopHScript || myValue == FunkinLua.Function_StopAll) && !excludeValues.contains(myValue) && !ignoreStops)
					{
						returnVal = myValue;
						break;
					}
					
					if(myValue != null && !excludeValues.contains(myValue))
						returnVal = myValue;
				}
			}
		}
		#end

		return returnVal;
	}

	public function setOnScripts(variable:String, arg:Dynamic, exclusions:Array<String> = null) {
		if(exclusions == null) exclusions = [];
		setOnLuas(variable, arg, exclusions);
		setOnHScript(variable, arg, exclusions);
	}

	public function setOnLuas(variable:String, arg:Dynamic, exclusions:Array<String> = null) {
		#if LUA_ALLOWED
		if(exclusions == null) exclusions = [];
		for (script in luaArray) {
			if(exclusions.contains(script.scriptName))
				continue;

			script.set(variable, arg);
		}
		#end
	}

	public function setOnHScript(variable:String, arg:Dynamic, exclusions:Array<String> = null) {
		#if HSCRIPT_ALLOWED
		if(exclusions == null) exclusions = [];
		for (script in hscriptArray) {
			if(exclusions.contains(script.origin))
				continue;

			script.set(variable, arg);
		}
		#end
	}

	function strumPlayAnim(isDad:Bool, id:Int, time:Float, isAlt:Bool = false) {
		var spr:StrumNote = null;
		if(isDad) {
			if (!isAlt)
				spr = strumLineNotes.members[id];
			else
				spr = altStrumLineNotes.members[id];
		} else {
			spr = playerStrums.members[id];
		}

		if(spr != null) {
			if (!laggingRSOD) {
		    	spr.playAnim('confirm', true);
		    	spr.resetAnim = time;
			}
		}
	}

	public var ratingName:String = '?';
	public var ratingPercent:Float;
	public var ratingFC:String;
	public function RecalculateRating(badHit:Bool = false) {
		setOnScripts('score', songScore);
		setOnScripts('misses', songMisses);
		setOnScripts('hits', songHits);
		setOnScripts('combo', combo);

		var sicks:Int = ratingsData[1].hits;
		var goods:Int = ratingsData[2].hits;
		var bads:Int = ratingsData[3].hits;
		var shits:Int = ratingsData[4].hits;

		var ret:Dynamic = callOnScripts('onRecalculateRating', null, true);
		if(ret != FunkinLua.Function_Stop)
		{
			ratingName = '?';
			if(totalPlayed != 0) //Prevent divide by 0
			{
				// Rating Percent
				ratingPercent = Math.min(1, Math.max(0, totalNotesHit / totalPlayed));
				//trace((totalNotesHit / totalPlayed) + ', Total: ' + totalPlayed + ', notes hit: ' + totalNotesHit);

				// Rating Name
				ratingName = ratingStuff[ratingStuff.length-1][0]; //Uses last string
				if(ratingPercent < 1)
					for (i in 0...ratingStuff.length-1)
						if(ratingPercent < ratingStuff[i][1])
						{
							ratingName = ratingStuff[i][0];
							break;
						}
			}
			fullComboFunction();
		}
		updateScore(badHit); // score will only update after rating is calculated, if it's a badHit, it shouldn't bounce -Ghost
		setOnScripts('rating', ratingPercent);
		setOnScripts('ratingName', ratingName);
		setOnScripts('ratingFC', ratingFC);
		judgementCounter.text = 'Sicks: ${sicks}\nGoods: ${goods}\nBads: ${bads}\nShits: ${shits}';
	}

	function fullComboUpdate()
	{
		var perfect:Int = ratingsData[0].hits;
		var sicks:Int = ratingsData[1].hits;
		var goods:Int = ratingsData[2].hits;
		var bads:Int = ratingsData[3].hits;
		var shits:Int = ratingsData[4].hits;

		ratingFC = 'Clear';
		if(songMisses < 1)
		{
			if (bads > 0 || shits > 0) ratingFC = 'FC';
			else if (goods > 0) ratingFC = 'GFC';
			else if (sicks > 0) ratingFC = 'SFC';
			else if (perfect > 0 && !ClientPrefs.data.removePerfs) ratingFC = 'MFC';
		}
		else if (songMisses < 10)
			ratingFC = 'SDCB';

		if (ClientPrefs.data.removePerfs) {
			judgementCounter.text = 'Sicks: ${sicks}\nGoods: ${goods}\nBads: ${bads}\nShits: ${shits}';
		} else {
			judgementCounter.text = 'Perfects: ${perfect}\nSicks: ${sicks}\nGoods: ${goods}\nBads: ${bads}\nShits: ${shits}';
		}
	}

	#if ACHIEVEMENTS_ALLOWED
	private function checkForAchievement(achievesToCheck:Array<String> = null):String
	{
		if(chartingMode) return null;

		var usedPractice:Bool = (ClientPrefs.getGameplaySetting('practice') || ClientPrefs.getGameplaySetting('botplay'));
		for (i in 0...achievesToCheck.length) {
			var achievementName:String = achievesToCheck[i];
			if(!Achievements.isAchievementUnlocked(achievementName) && !cpuControlled && Achievements.getAchievementIndex(achievementName) > -1) {
				var unlock:Bool = false;
				if (achievementName == WeekData.getWeekFileName() + '_nomiss') // any FC achievements, name should be "weekFileName_nomiss", e.g: "week3_nomiss";
				{
					if(isStoryMode && campaignMisses + songMisses < 1 && Difficulty.getString().toUpperCase() == 'HARD'
						&& storyPlaylist.length <= 1 && !changedDifficulty && !usedPractice)
						unlock = true;
				}
				else
				{
					switch(achievementName)
					{
						case 'ur_bad':
							unlock = (ratingPercent < 0.2 && !practiceMode);

						case 'ur_good':
							unlock = (ratingPercent >= 1 && !usedPractice);

						case 'roadkill_enthusiast':
							unlock = (Achievements.henchmenDeath >= 50);

						case 'oversinging':
							unlock = (boyfriend.holdTimer >= 10 && !usedPractice);

						case 'hype':
							unlock = (!boyfriendIdled && !usedPractice);

						case 'two_keys':
							unlock = (!usedPractice && keysPressed.length <= 2);

						case 'toastie':
							unlock = (/*ClientPrefs.data.framerate <= 60 &&*/ !ClientPrefs.data.shaders && ClientPrefs.data.lowQuality && !ClientPrefs.data.antialiasing);

						case 'debugger':
							unlock = (Paths.formatToSongPath(SONG.song) == 'test' && !usedPractice);
					}
				}

				if(unlock) {
					Achievements.unlockAchievement(achievementName);
					return achievementName;
				}
			}
		}
		return null;
	}
	#end

	#if (!flash && sys)
	public var runtimeShaders:Map<String, Array<String>> = new Map<String, Array<String>>();
	public function createRuntimeShader(name:String):FlxRuntimeShader
	{
		if(!ClientPrefs.data.shaders) return new FlxRuntimeShader();

		#if (!flash && MODS_ALLOWED && sys)
		if(!runtimeShaders.exists(name) && !initLuaShader(name))
		{
			FlxG.log.warn('Shader $name is missing!');
			return new FlxRuntimeShader();
		}

		var arr:Array<String> = runtimeShaders.get(name);
		return new FlxRuntimeShader(arr[0], arr[1]);
		#else
		FlxG.log.warn("Platform unsupported for Runtime Shaders!");
		return null;
		#end
	}

	public function initLuaShader(name:String, ?glslVersion:Int = 120)
	{
		if(!ClientPrefs.data.shaders) return false;

		#if (MODS_ALLOWED && !flash && sys)
		if(runtimeShaders.exists(name))
		{
			FlxG.log.warn('Shader $name was already initialized!');
			return true;
		}

		var foldersToCheck:Array<String> = [Paths.mods('shaders/')];
		if(Mods.currentModDirectory != null && Mods.currentModDirectory.length > 0)
			foldersToCheck.insert(0, Paths.mods(Mods.currentModDirectory + '/shaders/'));

		for(mod in Mods.getGlobalMods())
			foldersToCheck.insert(0, Paths.mods(mod + '/shaders/'));
		
		for (folder in foldersToCheck)
		{
			if(FileSystem.exists(folder))
			{
				var frag:String = folder + name + '.frag';
				var vert:String = folder + name + '.vert';
				var found:Bool = false;
				if(FileSystem.exists(frag))
				{
					frag = File.getContent(frag);
					found = true;
				}
				else frag = null;

				if(FileSystem.exists(vert))
				{
					vert = File.getContent(vert);
					found = true;
				}
				else vert = null;

				if(found)
				{
					runtimeShaders.set(name, [frag, vert]);
					//trace('Found shader $name!');
					return true;
				}
			}
		}
		FlxG.log.warn('Missing shader $name .frag AND .vert files!');
		//#else
		//FlxG.log.warn('This platform doesn\'t support Runtime Shaders!', false, false, FlxColor.RED);
		#end
		return false;
	}
	#end

	function popupWindow()
		{
			var screenwidth = Application.current.window.display.bounds.width;
			var screenheight = Application.current.window.display.bounds.height;
	
			// center
			Application.current.window.x = Std.int((screenwidth / 2) - (1280 / 2));
			Application.current.window.y = Std.int((screenheight / 2) - (720 / 2));
			Application.current.window.width = 1280;
			Application.current.window.height = 720;
	
			window = Application.current.createWindow({
				title: "Bambi God 2D.dat",
				width: 800,
				height: 800,
				borderless: true,
				alwaysOnTop: true
			});
	
			window.stage.color = 0xFFFFFFFF;
			@:privateAccess
			window.stage.addEventListener("keyDown", FlxG.keys.onKeyDown);
			@:privateAccess
			window.stage.addEventListener("keyUp", FlxG.keys.onKeyUp);
			PlatformUtil.getWindowsTransparent();
	
			preDadPos = dad.getPosition();
			dad.x = 0;
			dad.y = 0;
	
			FlxG.mouse.useSystemCursor = true;
	
			generateWindowSprite();
	
			expungedScroll.scrollRect = new Rectangle();
			window.stage.addChild(expungedScroll);
			expungedScroll.addChild(expungedSpr);
			expungedScroll.scaleX = 0.5;
			expungedScroll.scaleY = 0.5;
	
			expungedOffset.x = Application.current.window.x;
			expungedOffset.y = Application.current.window.y;
	
			dad.visible = false;
	
			var windowX = Application.current.window.x + ((Application.current.window.display.bounds.width) * 0.140625);
	
			windowSteadyX = windowX;
	
			FlxTween.tween(expungedOffset, {x: -20}, 2, {ease: FlxEase.elasticOut});
	
			FlxTween.tween(Application.current.window, {x: windowX}, 2.2, {
				ease: FlxEase.elasticOut,
				onComplete: function(tween:FlxTween)
				{
					ExpungedWindowCenterPos.x = expungedOffset.x;
					ExpungedWindowCenterPos.y = expungedOffset.y;
					expungedMoving = false;
				}
			});
	
			Application.current.window.onClose.add(function()
			{
				if (window != null)
				{
					window.close();
				}
			}, false, 100);
	
			Application.current.window.focus();
			expungedWindowMode = true;
	
			@:privateAccess
			lastFrame = dad._frame;
		}
	
	function generateWindowSprite()
		{
			var m = new Matrix();
			m.translate(0, 0);
			expungedSpr.graphics.beginBitmapFill(dad.pixels, m);
			expungedSpr.graphics.drawRect(0, 0, dad.pixels.width, dad.pixels.height);
			expungedSpr.graphics.endFill();
		}
}