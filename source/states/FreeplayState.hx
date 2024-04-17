package states;

import flixel.ui.FlxBar;
import openfl.filters.ShaderFilter;
import flixel.addons.display.FlxBackdrop;
import substates.ResetScoreSubState;
import backend.Song;
import substates.GameplayChangersSubstate;
import backend.Highscore;
import backend.WeekData;
import objects.HealthIcon;
import states.editors.ChartingState;
import flash.text.TextField;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.display.FlxGridOverlay;
import flixel.addons.transition.FlxTransitionableState;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxMath;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.tweens.FlxTween;
import lime.utils.Assets;
import flixel.system.FlxSound;
import states.FreeplayState;
import openfl.utils.Assets as OpenFlAssets;
#if MODS_ALLOWED
import sys.FileSystem; 
#end

using StringTools;

class FreeplayState extends MusicBeatState
{
	var songs:Array<FixedSongMetadata> = [];

	var selector:FlxText;

	var lerpSelected:Float = 0;

	private static var curSelected:Int = 0;
	var curDifficulty:Int = -1;

	var scoreBG:FlxSprite;
	var scoreText:FlxText;
	var diffText:FlxText;
	var lerpScore:Int = 0;
	var lerpRating:Float = 0;
	var intendedScore:Int = 0;
	var intendedRating:Float = 0;

	private var grpSongs:FlxTypedGroup<Alphabet>;
	private var curPlaying:Bool = false;

	private static var lastDifficultyName:String = Difficulty.getDefault();

	private var iconArray:Array<HealthIcon> = [];

	var bg:FlxSprite;
	var intendedColor:Int;
	var colorTween:FlxTween;

	var songBG:FlxSprite;
	var songBar:FlxBar;

	var missingTextBG:FlxSprite;
	var missingText:FlxText;

	var yeahNormal:Bool = false;

	var selectedThing:Bool = false;

	static var curPlayedSong:String = '';

	var googlechrom:DoChromaticAberrationEffect = new DoChromaticAberrationEffect();

	var check:FlxSprite;
	var glow:FlxSprite;
	var spikes:FlxSprite;

	public static function randomizeBG():flixel.system.FlxAssets.FlxGraphicAsset
		{
			var chance:Int = FlxG.random.int(0, bgPaths.length - 1);
			return Paths.image(bgPaths[chance]);
		}

	public static var bgPaths:Array<String> = 
	[
		'backgrounds/arandomguy',
		'backgrounds/cesars',
		'backgrounds/cheesedjelly',
		'backgrounds/darealmatt',
		'backgrounds/darlyboxman',
		'backgrounds/doodoofeces',
		'backgrounds/expunged',
		'backgrounds/eyes',
		'backgrounds/fast_f00d',
		'backgrounds/ion',
		'backgrounds/isaaclul',
		'backgrounds/kanandraw',
		'backgrounds/mmimim',
		'backgrounds/morpho',
		'backgrounds/osp',
		'backgrounds/Senza_titolo_200_20230711092018',
		'backgrounds/Senza_titolo_201_20230711093117',
		'backgrounds/slushX',
		'backgrounds/spitz',
		'backgrounds/tamrika',
		'backgrounds/ultimate poop',
		'backgrounds/ultimate poop2',
		'backgrounds/voltrex',
		'backgrounds/watch_out',
		'backgrounds/whatisthis',
		'backgrounds/zevisly'
	];

	override function create()
	{
		persistentUpdate = true;
		PlayState.isStoryMode = false;
		WeekData.reloadCustomWeekFiles(CategoryState.categorySelected, false); //this will load the category songs !111

		if (CategoryState.categorySelected == null)
		{
			WeekData.reloadWeekFiles(false);
		}

		Conductor.bpmChangeMap = [];
		Conductor.changeBPM(100);

		// there's no too much thing i changed here
		// btw why im leaving so much comments :so:b

		#if desktop
		// Updating Discord Rich Presence
		DiscordClient.changePresence("In the Menus", null);
		#end

		for (i in 0...WeekData.weeksList.length) {
			if(weekIsLocked(WeekData.weeksList[i])) continue;

			var leWeek:WeekData = WeekData.weeksLoaded.get(WeekData.weeksList[i]);
			var leSongs:Array<String> = [];
			var leChars:Array<String> = [];

			for (j in 0...leWeek.songs.length)
			{
				leSongs.push(leWeek.songs[j][0]);
				leChars.push(leWeek.songs[j][1]);
			}

			WeekData.setDirectoryFromWeek(leWeek);
			for (song in leWeek.songs)
			{
				var colors:Array<Int> = song[2];
				if(colors == null || colors.length < 3)
				{
					colors = [146, 113, 253];
				}
				addSong(song[0], i, song[1], FlxColor.fromRGB(colors[0], colors[1], colors[2]));
			}
		}
		Mods.loadTopMod();

		// hello

		bg = new FlxSprite().loadGraphic(randomizeBG());
		bg.antialiasing = ClientPrefs.data.antialiasing;
		bg.screenCenter();
		bg.color = 0xFF2E0000;
		add(bg);

		check = new FlxBackdrop(Paths.image('menuimages/check'),0,0);
		check.velocity.set(150,150);
		check.screenCenter();
		check.scrollFactor.set();
		add(check);

		var glow:FlxSprite = new FlxSprite(-80).loadGraphic(Paths.image('menuimages/glow'));
		glow.setGraphicSize(Std.int(glow.width * 1.175));
		glow.updateHitbox();
		glow.screenCenter();
		glow.antialiasing = ClientPrefs.data.antialiasing;
		glow.scrollFactor.set();
		add(glow);

		spikes = new FlxBackdrop(Paths.image('menuimages/spikeys'),0,10000);
		spikes.velocity.set(100,0);
		spikes.screenCenter();
		add(spikes);
		spikes.scrollFactor.set();

		FlxG.camera.setFilters([new ShaderFilter(googlechrom.shader)]);

		grpSongs = new FlxTypedGroup<Alphabet>();
		add(grpSongs);

		for (i in 0...songs.length)
			{
				var songText:Alphabet = new Alphabet(0, (70 * i) + 30, songs[i].songName, true);
				songText.isMenuItem = false;
				songText.itemType = "D-Shape";
				songText.targetY = i;
				grpSongs.add(songText);
	
				var icon:HealthIcon = new HealthIcon(songs[i].songCharacter);
				icon.sprTracker = songText;
	
				iconArray.push(icon);
				add(icon);
	
				Mods.currentModDirectory = songs[i].folder;
			}
		WeekData.setDirectoryFromWeek();

		scoreText = new FlxText(FlxG.width * 0.7, 5, 0, "", 32);
		scoreText.setFormat(Paths.font("comic.ttf"), 32, FlxColor.WHITE, RIGHT);
		scoreText.x = 20;

		var scoreBG:FlxSprite = new FlxSprite(scoreText.x - 6, 0).makeGraphic(Std.int(FlxG.width * 1), 66, 0xFF000000);
		scoreBG.alpha = 0.5;
		scoreBG.screenCenter(X);
		scoreBG.y = 10;
		add(scoreBG);

		diffText = new FlxText(scoreText.x -10, scoreText.y + 30, 0, "", 24);
		diffText.font = scoreText.font;
		diffText.x = 20;
		diffText.y = 40;
		add(diffText);

		add(scoreText); // it should be done

		missingTextBG = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.BLACK);
		missingTextBG.alpha = 0.6;
		missingTextBG.visible = false;
		add(missingTextBG);
		
		missingText = new FlxText(50, 0, FlxG.width - 100, '', 24);
		missingText.setFormat(Paths.font("comic.ttf"), 24, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		missingText.scrollFactor.set();
		missingText.visible = false;
		add(missingText);


		if(curSelected >= songs.length) curSelected = 0;
		bg.color = songs[curSelected].color;
		intendedColor = bg.color;
		curDifficulty = Math.round(Math.max(0, Difficulty.defaultList.indexOf(lastDifficultyName)));
		
		changeSelection();
		changeDiff();

		var textBG:FlxSprite = new FlxSprite(0, FlxG.height - 32).makeGraphic(FlxG.width, 32, 0xFF000000);
		textBG.alpha = 0.6;
		add(textBG);	

		var leText:String;
		
		if (ClientPrefs.data.Lenguage == 'Español') {
			leText = "Presiona ESPACIO para Escuchar esta cancion / Presiona CTRL para abrir El menu de cambios del juego / Presiona RESET Para Resetear tu Puntujua y tu Presicion.";
		} else {
			leText = "Press SPACE to listen to this Song / Press CTRL to open the Gameplay Changers Menu / Press RESET to Reset your Score and Accuracy.";
		}
		
		var text:FlxText = new FlxText(textBG.x + 10, textBG.y + 2, FlxG.width, leText, 21);
		text.setFormat(Paths.font("comic.ttf"), 18, FlxColor.WHITE, LEFT);
		text.scrollFactor.set();
		add(text);

		super.create();
		updateTexts();
	}

	override function closeSubState() {
		changeSelection(0, false);
		persistentUpdate = true;
		super.closeSubState();
	}

	override function beatHit()
		{
			super.beatHit();
			FlxG.camera.zoom = 1.05;
			FlxTween.tween(FlxG.camera, {zoom: 1}, 0.3, {ease: FlxEase.quadOut});
		}

	public function addSong(songName:String, weekNum:Int, songCharacter:String, color:Int)
	{
		songs.push(new FixedSongMetadata(songName, weekNum, songCharacter, color));
	}

	function weekIsLocked(name:String):Bool {
		var leWeek:WeekData = WeekData.weeksLoaded.get(name);
		return (!leWeek.startUnlocked && leWeek.weekBefore.length > 0 && (!StoryMenuState.weekCompleted.exists(leWeek.weekBefore) || !StoryMenuState.weekCompleted.get(leWeek.weekBefore)));
	}

	var instPlaying:Int = -1;
	public static var vocals:FlxSound = null;
	var holdTime:Float = 0;
	override function update(elapsed:Float)
	{
		super.update(elapsed);

		if (FlxG.sound.music.volume < 0.7)
		{
			FlxG.sound.music.volume += 0.5 * FlxG.elapsed;
		}

		if (ClientPrefs.data.ChromaticAberration){
			googlechrom.offset = FlxG.random.float(0.0003, 0.0001);
			if (songs[curSelected].songName == "Reality-Breaking"){
				googlechrom.offset = FlxG.random.float(0.005, 0.0015);
			}
			if (songs[curSelected].songName == "Upheaval"){
				googlechrom.offset = FlxG.random.float(0.009, 0.0025);
			}
		}else{
			googlechrom.offset = 0;
		}

		Conductor.songPosition = FlxG.sound.music.time;

		lerpScore = Math.floor(FlxMath.lerp(lerpScore, intendedScore, CoolUtil.boundTo(elapsed * 24, 0, 1)));
		lerpRating = FlxMath.lerp(lerpRating, intendedRating, CoolUtil.boundTo(elapsed * 12, 0, 1));

		if (Math.abs(lerpScore - intendedScore) <= 10)
			lerpScore = intendedScore;
		if (Math.abs(lerpRating - intendedRating) <= 0.01)
			lerpRating = intendedRating;

		var ratingSplit:Array<String> = Std.string(Highscore.floorDecimal(lerpRating * 100, 2)).split('.');
		if(ratingSplit.length < 2) { //No decimals, add an empty space
			ratingSplit.push('');
		}
		
		while(ratingSplit[1].length < 2) { //Less than 2 decimals in it, add decimals then
			ratingSplit[1] += '0';
		}

		if (ClientPrefs.data.Lenguage == 'Español')
			{
				scoreText.text = 'MEJOR PORCENTAJE PERSONAL: ' + lerpScore + ' (' + ratingSplit.join('.') + '%)';
			} else
			{
				scoreText.text = 'PERSONAL BEST: ' + lerpScore + ' (' + ratingSplit.join('.') + '%)';
			}

		var upP = controls.UI_UP_P;
		var downP = controls.UI_DOWN_P;
		var accepted = controls.ACCEPT;
		var space = FlxG.keys.justPressed.SPACE;
		var ctrl = FlxG.keys.justPressed.CONTROL;

		var shiftMult:Int = 1;
		if(FlxG.keys.pressed.SHIFT) shiftMult = 3;

		if(songs.length > 1)
		{
			if (upP)
			{
				changeSelection(-shiftMult);
				holdTime = 0;
			}
			if (downP)
			{
				changeSelection(shiftMult);
				holdTime = 0;
			}

			if(controls.UI_DOWN || controls.UI_UP)
			{
				var checkLastHold:Int = Math.floor((holdTime - 0.5) * 10);
				holdTime += elapsed;
				var checkNewHold:Int = Math.floor((holdTime - 0.5) * 10);

				if(holdTime > 0.5 && checkNewHold - checkLastHold > 0)
				{
					changeSelection((checkNewHold - checkLastHold) * (controls.UI_UP ? -shiftMult : shiftMult));
					changeDiff();
					_updateSongLastDifficulty();
				}
			}

			if(FlxG.mouse.wheel != 0)
			{
				FlxG.sound.play(Paths.sound('menu/scrollMenu'), 0.2);
				changeSelection(-shiftMult * FlxG.mouse.wheel, false);
				changeDiff();
				_updateSongLastDifficulty();
			}
		}

		if (controls.UI_LEFT_P)
			{
				changeDiff(-1);
				_updateSongLastDifficulty();
			}
		else if (controls.UI_RIGHT_P)
			{
				changeDiff(1);
				_updateSongLastDifficulty();
			}	
		else if (upP || downP) 
			{
				changeDiff();
				_updateSongLastDifficulty();
			}

		if (controls.BACK)
		{
			persistentUpdate = false;
			if(colorTween != null) {
				colorTween.cancel();
			}
			FlxG.sound.play(Paths.sound('menu/cancelMenu'));
			MusicBeatState.switchState(new CategoryState());
		}

		if(ctrl)
		{
			persistentUpdate = false;
			openSubState(new GameplayChangersSubstate());
		}
		else if(space)
		{
			if(instPlaying != curSelected)
			{
				#if PRELOAD_ALL
				destroyFreeplayVocals();
				FlxG.sound.music.volume = 0;
				Paths.currentModDirectory = songs[curSelected].folder;
				var poop:String = Highscore.formatSong(songs[curSelected].songName.toLowerCase(), curDifficulty);
				PlayState.SONG = Song.loadFromJson(poop, songs[curSelected].songName.toLowerCase());
				if (PlayState.SONG.needsVoices)
					vocals = new FlxSound().loadEmbedded(Paths.voices(PlayState.SONG.song));
				else
					vocals = new FlxSound();

				FlxG.sound.list.add(vocals);
				Conductor.mapBPMChanges(PlayState.SONG);
				Conductor.changeBPM(PlayState.SONG.bpm);
				FlxG.sound.playMusic(Paths.inst(PlayState.SONG.song), 0.7);
				vocals.play();
				vocals.persist = true;
				vocals.looped = true;
				vocals.volume = 0.7;
				instPlaying = curSelected;
				#end
			}
		}
		else if (controls.ACCEPT || (FlxG.mouse.justPressed))
			{
				if (FlxG.mouse.justPressed)
					{
						var clickCheck = false;
						for (i in 0...grpSongs.members.length) // Iterar a través de las canciones en grpSongs
								{					
									var songText:Alphabet = grpSongs.members[i]; // Obtener la canción actual
									if (FlxG.mouse.overlaps(songText)) // Verificar si el ratón está sobre la canción
									{
										if (curSelected != i) // Si la canción no está seleccionada actualmente
										{
											curSelected = i; // Cambiar la canción seleccionada
											clickCheck = true;
											break;
										}
									}
						if (!clickCheck)
							return;
								}
					}
				persistentUpdate = false;
				var songLowercase:String = Paths.formatToSongPath(songs[curSelected].songName);
				var poop:String = Highscore.formatSong(songLowercase, curDifficulty);
				
	
				trace(poop);
	
				try
				{
					PlayState.SONG = Song.loadFromJson(poop, songLowercase);
					PlayState.isStoryMode = false;
					PlayState.storyDifficulty = curDifficulty;
	
					trace('CURRENT WEEK: ' + WeekData.getWeekFileName());
					if(colorTween != null) {
						colorTween.cancel();
					}
				}
				catch(e:Dynamic)
				{
					trace('ERROR! $e');
	
					var errorStr:String = e.toString();
					if(errorStr.startsWith('[file_contents,assets/data/')) errorStr = 'Missing file: ' + errorStr.substring(27, errorStr.length-1); //Missing chart
					missingText.text = 'ERROR WHILE LOADING CHART:\n$errorStr';
					missingText.screenCenter(Y);
					missingText.visible = true;
					missingTextBG.visible = true;
					FlxG.sound.play(Paths.sound('cancelMenu'));
	
					updateTexts(elapsed);
					super.update(elapsed);
					return;
				}
				LoadingState.loadAndSwitchState(new CharacterSelectState());

				FlxG.sound.music.volume = 0;
				destroyFreeplayVocals();
				#if MODS_ALLOWED
				DiscordClient.loadModRPC();
				#end
			}
		else if(controls.RESET)
		{
			persistentUpdate = false;
			openSubState(new ResetScoreSubState(songs[curSelected].songName, curDifficulty, songs[curSelected].songCharacter));
			FlxG.sound.play(Paths.sound('menu/scrollMenu'));
		}
	}

	public static function destroyFreeplayVocals() {
		if(vocals != null) {
			vocals.stop();
			vocals.destroy();
		}
		vocals = null;
	}

	function changeDiff(change:Int = 0)
		{
			curDifficulty += change;
	
			if (curDifficulty < 0)
				curDifficulty = Difficulty.list.length-1;
			if (curDifficulty >= Difficulty.list.length)
				curDifficulty = 0;
	
			#if !switch
			intendedScore = Highscore.getScore(songs[curSelected].songName, curDifficulty);
			intendedRating = Highscore.getRating(songs[curSelected].songName, curDifficulty);
			#end
	
			lastDifficultyName = Difficulty.getString(curDifficulty);
			if (Difficulty.list.length > 1)
				diffText.text = '< ' + lastDifficultyName.toUpperCase() + ' >';
			else
				diffText.text = lastDifficultyName.toUpperCase();

			missingText.visible = false;
			missingTextBG.visible = false;
		}	

	function changeSelection(change:Int = 0, playSound:Bool = true)
	{
		_updateSongLastDifficulty();
		if(playSound) FlxG.sound.play(Paths.sound('menu/scrollMenu'), 0.4);

		var lastList:Array<String> = Difficulty.list;
		curSelected += change;

		if (curSelected < 0)
			curSelected = songs.length - 1;
		if (curSelected >= songs.length)
			curSelected = 0;
			
		var newColor:Int = songs[curSelected].color;
		if(newColor != intendedColor) {
			if(colorTween != null) {
				colorTween.cancel();
			}
			intendedColor = newColor;
			colorTween = FlxTween.color(bg, 1, bg.color, intendedColor, {
				onComplete: function(twn:FlxTween) {
					colorTween = null;
				}
			});
		}

		// selector.y = (70 * curSelected) + 30;

		var bullShit:Int = 0;

		for (i in 0...iconArray.length)
		{
			iconArray[i].alpha = 0.6;
		}

		iconArray[curSelected].alpha = 1;

		for (item in grpSongs.members)
		{
			item.targetY = bullShit - curSelected;
			bullShit++;

			item.alpha = 0.6;

			if (item.targetY == 0)
			{
				item.alpha = 1;
			}
		}
		
		Mods.currentModDirectory = songs[curSelected].folder;
		PlayState.storyWeek = songs[curSelected].week;
		Difficulty.loadFromWeek();
		
		var savedDiff:String = songs[curSelected].lastDifficulty;
		var lastDiff:Int = Difficulty.list.indexOf(lastDifficultyName);
		if(savedDiff != null && !lastList.contains(savedDiff) && Difficulty.list.contains(savedDiff))
			curDifficulty = Math.round(Math.max(0, Difficulty.list.indexOf(savedDiff)));
		else if(lastDiff > -1)
			curDifficulty = lastDiff;
		else if(Difficulty.list.contains(Difficulty.getDefault()))
			curDifficulty = Math.round(Math.max(0, Difficulty.defaultList.indexOf(Difficulty.getDefault())));
		else
			curDifficulty = 0;

		changeDiff();
		_updateSongLastDifficulty();
	}

	inline private function _updateSongLastDifficulty()
		{
			songs[curSelected].lastDifficulty = Difficulty.getString(curDifficulty);
		}

	var _drawDistance:Int = 4;
	var _lastVisibles:Array<Int> = [];
	public function updateTexts(elapsed:Float = 0.0)
	{
		lerpSelected = FlxMath.lerp(lerpSelected, curSelected, FlxMath.bound(elapsed * 9.6, 0, 1));
		for (i in _lastVisibles)
		{
			grpSongs.members[i].visible = grpSongs.members[i].active = false;
			iconArray[i].visible = iconArray[i].active = false;
		}
		_lastVisibles = [];

		var min:Int = Math.round(Math.max(0, Math.min(songs.length, lerpSelected - _drawDistance)));
		var max:Int = Math.round(Math.max(0, Math.min(songs.length, lerpSelected + _drawDistance)));
		for (i in min...max)
		{
			var item:Alphabet = grpSongs.members[i];
			item.visible = item.active = true;
			item.x = ((item.targetY - lerpSelected) * item.distancePerItem.x) + item.startPosition.x;
			item.y = ((item.targetY - lerpSelected) * 1.3 * item.distancePerItem.y) + item.startPosition.y;

			var icon:HealthIcon = iconArray[i];
			icon.visible = icon.active = true;
			_lastVisibles.push(i);
		}
	}
}

class FixedSongMetadata
{
	public var songName:String = "";
	public var week:Int = 0;
	public var songCharacter:String = "";
	public var color:Int = -7179779;
	public var folder:String = "";
	public var lastDifficulty:String = null;

	public function new(song:String, week:Int, songCharacter:String, color:Int)
	{
		this.songName = song;
		this.week = week;
		this.songCharacter = songCharacter;
		this.color = color;
		this.folder = Paths.currentModDirectory;
		if(this.folder == null) this.folder = '';
	}
}