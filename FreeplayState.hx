package states;

import objects.Character;
import flixel.addons.display.FlxBackdrop;
import substates.ResetScoreSubState;
import substates.GameplayChangersSubstate;
import backend.Achievements;
import backend.Highscore;
import backend.Song;
import objects.HealthIcon;
import flixel.group.FlxSpriteGroup;
import flixel.effects.FlxFlicker;
import flixel.util.FlxTimer;
import flixel.tweens.FlxEase;
import flash.text.TextField;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.display.FlxGridOverlay;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxMath;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.tweens.FlxTween;
import flixel.system.FlxSound;
import flixel.util.FlxStringUtil;
import openfl.utils.Assets as OpenFlAssets;
import lime.utils.Assets;

using StringTools;

class FreeplayState extends MusicBeatState
{
	var songs:Array<SongMetadata> = [];

	var selector:FlxText;
	var curSelected:Int = 0;
	var curDifficulty:Int = 1;

	var bg:FlxSprite;
	var scoreBG:FlxSprite;
	var scoreText:FlxText;
	var freeplayDifficulty:FlxSprite;
	var lerpScore:Int = 0;
	var lerpRating:Float = 0;
	var intendedScore:Int = 0;
	var intendedRating:Float = 0;
	var colorTween:FlxTween;

	private var grpSongs:FlxTypedGroup<Alphabet>;
	private var curPlaying:Bool = false;
	private var curChar:String = "unknown";

	private var InMainFreeplayState:Bool = false;
	var spikes:FlxSprite;
	private var AllPossibleSongs:Array<String> = ["story", "extras", "remixes", "secret", "old"];
	private var CurrentPack:Int = 0;
	var loadingPack:Bool = false;
	var check:FlxSprite;
	private var iconArray:Array<HealthIcon> = [];
	var categoryIcons:Array<FlxSprite> = [];
	var glow:FlxSprite;

	var lerpSelected:Float = 0;

	public static var bgPaths:Array<String> = 
	[
		'all of purgatory/backgrounds/arandomguy',
		'all of purgatory/backgrounds/cesars',
		'all of purgatory/backgrounds/cheesedjelly',
		'all of purgatory/backgrounds/darealmatt',
		'all of purgatory/backgrounds/darlyboxman',
		'all of purgatory/backgrounds/doodoofeces',
		'all of purgatory/backgrounds/fast_f00d',
		'all of purgatory/backgrounds/ion',
		'all of purgatory/backgrounds/isaaclul',
		'all of purgatory/backgrounds/kanandraw',
		'all of purgatory/backgrounds/mmimim',
		'all of purgatory/backgrounds/osp',
		'all of purgatory/backgrounds/Senza_titolo_200_20230711092018',
		'all of purgatory/backgrounds/Senza_titolo_201_20230711093117',
		'all of purgatory/backgrounds/slushX',
		'all of purgatory/backgrounds/spitz',
		'all of purgatory/backgrounds/tamrika',
		'all of purgatory/backgrounds/sultimate poop',
		'all of purgatory/backgrounds/ultimate poop2',
		'all of purgatory/backgrounds/voltrex',
		'all of purgatory/backgrounds/watch_out',
		'all of purgatory/backgrounds/zevisly'
	];

	var typografy:String;
	var missingTextBG:FlxSprite;
	var missingText:FlxText;

	public static function randomizeBG():flixel.system.FlxAssets.FlxGraphicAsset
		{
			var chance:Int = FlxG.random.int(0, bgPaths.length - 1);
			return Paths.image(bgPaths[chance]);
		}

	override function create()
	{
		#if desktop
		DiscordClient.changePresence("In the Freeplay Menu", null);
		#end

		//Conductor.bpmChangeMap = [];
		//Conductor.set_bpm(102);

		bg = new FlxSprite().loadGraphic(randomizeBG());
		bg.antialiasing = ClientPrefs.data.antialiasing;
		bg.screenCenter();
		bg.color = 0xFF2E0000;
		add(bg);

		check = new FlxBackdrop(Paths.image('all of purgatory/check'),0,0);
		check.velocity.set(150,150);
		check.screenCenter();
		check.scrollFactor.set();
		add(check);

		var glow:FlxSprite = new FlxSprite(-80).loadGraphic(Paths.image('all of purgatory/glow'));
		glow.setGraphicSize(Std.int(glow.width * 1.175));
		glow.updateHitbox();
		glow.screenCenter();
		glow.antialiasing = ClientPrefs.data.antialiasing;
		glow.scrollFactor.set();
		add(glow);

		spikes = new FlxBackdrop(Paths.image('all of purgatory/spikeys'),0,10000);
		spikes.velocity.set(100,0);
		spikes.screenCenter();
		add(spikes);
		spikes.scrollFactor.set();

		var hasHidden = false;
		
		if (!hasHidden)
			AllPossibleSongs.remove("hidden");

		for (i in 0...AllPossibleSongs.length)
		{
			var categoryIcon = new FlxSprite().loadGraphic(Paths.image('all of purgatory/freelaycategories/menu_' + (AllPossibleSongs[i].toLowerCase())));
			categoryIcon.setGraphicSize(Std.int(categoryIcon.width * 0.7));
			categoryIcon.updateHitbox();
			categoryIcon.screenCenter();
			categoryIcon.x += i * 1280;
			add(categoryIcon);
			categoryIcons.push(categoryIcon);
		}

		bottomInfoTextBG = new FlxSprite(0, FlxG.height - 26).makeGraphic(FlxG.width, 26, 0xFF000000);
		bottomInfoTextBG.alpha = 0.6;
		#if PRELOAD_ALL
		defbottomText = "Press SPACE to listen to the Song / Press CTRL to open the Gameplay Changers Menu / Press RESET to Reset your Score and Accuracy.";
		#else
		defbottomText = "Press RESET to Reset your Score and Accuracy.";
		#end
		bottomInfoText = new FlxText(bottomInfoTextBG.x + -10, bottomInfoTextBG.y + 3, FlxG.width, defbottomText, 21);
		bottomInfoText.setFormat(Paths.font("comic-sans.ttf"), 18, FlxColor.WHITE, RIGHT);
		bottomInfoText.scrollFactor.set();
		super.create();
	}

	var bottomInfoTextBG:FlxSprite;
	var bottomInfoText:FlxText;
	var defbottomText:String = ""; 

	public function LoadProperPack()
	{
		var pack:String = AllPossibleSongs[CurrentPack].toLowerCase();
		var packJson = haxe.Json.parse(Assets.getText("assets/weeks/" + pack + ".json"));
		for (songData in cast(packJson.songs, Array<Dynamic>))
		{
			addSong(songData[0], FlxColor.fromRGB(songData[2][0], songData[2][1], songData[2][2]), songData[1], false, false);
		}
	}

	public function isSongLocked(songName:String, achievementUnlockAllow:Bool = true)
	{
		return false;
	}

	public function GoToActualFreeplay()
	{
		grpSongs = new FlxTypedGroup<Alphabet>();
		add(grpSongs);

		switch (ClientPrefs.data.Typografy) {
			case 'Comic-sans':
				typografy = 'comic-sans.ttf';
			default:
				typografy = 'vcr.ttf';
		}

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
			}	

		scoreText = new FlxText(FlxG.width * 0.7, 5, 0, "", 32);
		scoreText.setFormat(Paths.font("comic-sans.ttf"), 32, FlxColor.WHITE, RIGHT);
		scoreText.x = 780;

		scoreBG = new FlxSprite(scoreText.x - 13, 0).makeGraphic(520, 45, 0xFF000000);
		scoreBG.alpha = 0.5;

		missingTextBG = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.BLACK);
		missingTextBG.alpha = 0.6;
		missingTextBG.visible = false;
		add(missingTextBG);
		
		missingText = new FlxText(50, 0, FlxG.width - 100, '', 24);
		missingText.setFormat(Paths.font(typografy), 24, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		missingText.scrollFactor.set();
		missingText.visible = false;
		add(missingText);
		
		add(scoreBG);
		add(scoreText);
		add(bottomInfoTextBG);
		add(bottomInfoText);
		changeSelection();
		changeDiff();
	}

	public function addSong(songName:String, color:FlxColor, songCharacter:String, isLocked:Bool, isAchievement:Bool)
	{
		songs.push(new SongMetadata(songName, color, songCharacter, isLocked, isAchievement));
	}

	public function UpdatePackSelection(change:Int)
	{
		if (loadingPack)
			return;
		CurrentPack += change;
		if (CurrentPack == -1)
		{
			CurrentPack = AllPossibleSongs.length - 1;
			for (icon in categoryIcons)
			{
				FlxTween.tween(icon, {x: (((AllPossibleSongs.length - 1) - categoryIcons.indexOf(icon)) * -1280) + ((FlxG.width - icon.width) / 2)}, 0.2, {
					ease: FlxEase.cubeInOut
				});
			}
		}
		if (CurrentPack == AllPossibleSongs.length)
		{
			CurrentPack = 0;
			for (icon in categoryIcons)
			{
				FlxTween.tween(icon, {x: (categoryIcons.indexOf(icon) * 1280) + ((FlxG.width - icon.width) / 2)}, 0.2, {
					ease: FlxEase.cubeInOut
				});
			}
		}
		if (change != 0)
		{
			if (change < 0)
			{
				for (icon in categoryIcons)
				{
					FlxTween.tween(icon, {x: ((CurrentPack - categoryIcons.indexOf(icon)) * -1280) + ((FlxG.width - icon.width) / 2)}, 0.2, {
						ease: FlxEase.cubeInOut,
					});
				}
			}
			else
			{
				for (icon in categoryIcons)
				{
					FlxTween.tween(icon, {x: ((categoryIcons.indexOf(icon) - CurrentPack) * 1280) + ((FlxG.width - icon.width) / 2)}, 0.2, {
						ease: FlxEase.cubeInOut
					});
				}
			}
		}
	}

	override function beatHit()
	{
		super.beatHit();
		if (loadingPack)
			return;
		FlxG.camera.zoom = 1.05;
		FlxTween.tween(FlxG.camera, {zoom: 1}, 0.3, {ease: FlxEase.quadOut});
	}

	public function addWeek(songs:Array<String>, color:FlxColor, ?songCharacters:Array<String>, ?isLocked:Bool = false, ?isAchievement:Bool = false)
	{
		if (songCharacters == null)
			songCharacters = ['bf'];

		var num:Int = 0;
		for (song in songs)
		{
			addSong(song, color, songCharacters[num], isLocked, isAchievement);

			if (songCharacters.length != 1)
				num++;
		}
	}

	var holdTime:Float = 0;
	var instPlaying:Int = -1;

	public static var vocals:FlxSound = null;

	override function update(elapsed:Float)
	{
		super.update(elapsed);
		Conductor.songPosition = FlxG.sound.music.time;
		if (!InMainFreeplayState)
		{
			if (controls.UI_LEFT_P)
			{
				FlxG.sound.play(Paths.sound('scrollMenu'));
				UpdatePackSelection(-1);
			}
			if (controls.UI_RIGHT_P)
			{
				FlxG.sound.play(Paths.sound('scrollMenu'));
				UpdatePackSelection(1);
			}
			if (controls.ACCEPT && !loadingPack)
			{
				FlxG.sound.play(Paths.sound('confirmMenu'));
				loadingPack = true;
				LoadProperPack();
				FlxTween.tween(categoryIcons[CurrentPack], {alpha: 0, y: categoryIcons[CurrentPack].y + 200}, 0.2, {
					ease: FlxEase.cubeInOut,
				});
				FlxTween.completeTweensOf(FlxG.camera);
				new FlxTimer().start(0.5, function(Dumbshit:FlxTimer)
				{
					FlxG.camera.zoom = 1;
					GoToActualFreeplay();
					InMainFreeplayState = true;
					loadingPack = false;
					changeSelection(0);
				});
			}
			if (controls.BACK)
			{
				FlxG.sound.play(Paths.sound('cancelMenu'));
				MusicBeatState.switchState(new MainMenuState());
			}

			return;
		}

		if (FlxG.sound.music.volume < 0.7)
		{
			FlxG.sound.music.volume += 0.5 * FlxG.elapsed;
		}

		lerpScore = Math.floor(FlxMath.lerp(lerpScore, intendedScore, CoolUtil.boundTo(elapsed * 24, 0, 1)));
		lerpRating = FlxMath.lerp(lerpRating, intendedRating, CoolUtil.boundTo(elapsed * 12, 0, 1));

		if (Math.abs(lerpScore - intendedScore) <= 10)
			lerpScore = intendedScore;
		if (Math.abs(lerpRating - intendedRating) <= 0.01)
			lerpRating = intendedRating;

		scoreText.text = 'PERSONAL BEST: ' + lerpScore + ' (' + Math.floor(lerpRating * 100) + '%)';
		var upP = controls.UI_UP_P;
		var downP = controls.UI_DOWN_P;
		var accepted = controls.ACCEPT;
		var space = FlxG.keys.justPressed.SPACE;
		var ctrl = FlxG.keys.justPressed.CONTROL;
		var fuckyou = FlxG.keys.justPressed.SEVEN;

		var shiftMult:Int = 1;
		if (FlxG.keys.pressed.SHIFT)
			shiftMult = 3;

		if (upP)
		{
			changeSelection(-1);
			FlxG.sound.play(Paths.sound('scrollMenu'));
			holdTime = 0;
		}
		if (downP)
		{
			changeSelection(1);
			FlxG.sound.play(Paths.sound('scrollMenu'));
			holdTime = 0;
		}

		if (controls.UI_DOWN || controls.UI_UP)
		{
			var checkLastHold:Int = Math.floor((holdTime - 0.5) * 10);
			holdTime += elapsed;
			var checkNewHold:Int = Math.floor((holdTime - 0.5) * 10);

			if (holdTime > 0.5 && checkNewHold - checkLastHold > 0)
			{
				changeSelection((checkNewHold - checkLastHold) * (controls.UI_UP ? -shiftMult : shiftMult));
				FlxG.sound.play(Paths.sound('scrollMenu'));
			}
		}

		if (ctrl)
		{
			persistentUpdate = false;
			openSubState(new GameplayChangersSubstate());
		}

		if (controls.BACK)
		{
			FlxG.sound.play(Paths.sound('cancelMenu'));
			MusicBeatState.switchState(new FreeplayState());

			if (accepted)
			{
				var poop:String = Highscore.formatSong(songs[curSelected].songName.toLowerCase(), curDifficulty);

				trace(poop);

				PlayState.SONG = Song.loadFromJson(poop, songs[curSelected].songName.toLowerCase());
				PlayState.isStoryMode = false;
				PlayState.storyDifficulty = curDifficulty;
			}
		}
		if (fuckyou)
		{
			FlxG.sound.music.volume = 0;
			PlayState.SONG = Song.loadFromJson("opposition", "opposition"); // you dun fucked up again
			FlxG.save.data.oppositionFound = true;

			new FlxTimer().start(0.25, function(tmr:FlxTimer)
			{
				LoadingState.loadAndSwitchState(new PlayState());
				FlxG.sound.music.volume = 0;
				FreeplayState.destroyFreeplayVocals();
			});
		}

		if (space && instPlaying != curSelected)
		{
			#if PRELOAD_ALL
			if (isSongLocked(songs[curSelected].songName, false))
				return;
			destroyFreeplayVocals();
			FlxG.sound.music.volume = 0;
			Mods.currentModDirectory = songs[curSelected].folder;
			var poop:String = Highscore.formatSong(songs[curSelected].songName.toLowerCase(), curDifficulty);
			PlayState.SONG = Song.loadFromJson(poop, songs[curSelected].songName.toLowerCase());
			if (PlayState.SONG.needsVoices)
				vocals = new FlxSound().loadEmbedded(Paths.voices(PlayState.SONG.song));
			else
				vocals = new FlxSound();

			FlxG.sound.list.add(vocals);
			FlxG.sound.playMusic(Paths.inst(PlayState.SONG.song), 0.7);
			vocals.play();
			vocals.persist = true;
			vocals.looped = true;
			vocals.volume = 0.7;
			instPlaying = curSelected;
			#end
		}
		else if (accepted) {
			if (isSongLocked(songs[curSelected].songName)) {
				return;
			}
			var songLowercase:String = Paths.formatToSongPath(songs[curSelected].songName);
			var poop:String = Highscore.formatSong(songLowercase, curDifficulty);
		
			try {
				PlayState.SONG = Song.loadFromJson(poop, songLowercase);
				PlayState.isStoryMode = false;
				PlayState.storyDifficulty = curDifficulty;
				FlxG.sound.play(Paths.sound('confirmMenu'));
				loadingPack = true;
		
				for (i in 0...grpSongs.members.length) {
					if (i == curSelected) {
						continue;
					}
					FlxTween.tween(grpSongs.members[i], { alpha: 0 }, 0.375, { ease: FlxEase.sineOut });
					FlxTween.tween(iconArray[i], { alpha: 0 }, 0.375, { ease: FlxEase.sineOut });
				}
		
				if (!isSongLocked(songs[curSelected].songName, false)) {
					var spriteGroup = new FlxSpriteGroup();
					spriteGroup.add(grpSongs.members[curSelected]);
					spriteGroup.add(iconArray[curSelected]);
					FlxFlicker.flicker(spriteGroup, 1, 0.1, function (_) {
						FlxG.sound.music.volume = 0;
						destroyFreeplayVocals();
						LoadingState.loadAndSwitchState(new PlayState());
					});
				} else {
					FlxG.sound.music.volume = 0;
					destroyFreeplayVocals();
					LoadingState.loadAndSwitchState(new PlayState());
				}
			} catch (e:Dynamic) {
				trace('ERROR! $e');
		
				var errorStr:String = e.toString();
				if (errorStr.startsWith('[file_contents,assets/data/')) {
					errorStr = 'Missing file: ' + errorStr.substring(27, errorStr.length - 1); //Missing chart
				}
				missingText.text = 'ERROR WHILE LOADING CHART:\n$errorStr';
				missingText.screenCenter(Y);
				missingText.visible = true;
				missingTextBG.visible = true;
				FlxG.sound.play(Paths.sound('cancelMenu'));
		
				updateTexts(elapsed);
				super.update(elapsed);
				return;
			}
		}		
		else if (controls.RESET)
		{
			openSubState(new ResetScoreSubState(songs[curSelected].songName, curDifficulty, songs[curSelected].songCharacter));
			FlxG.sound.play(Paths.sound('scrollMenu'));
		}
		super.update(elapsed);
	}

	public static function destroyFreeplayVocals()
	{
		if (vocals != null)
		{
			vocals.stop();
			vocals.destroy();
		}
		vocals = null;
	}

	function changeDiff(change:Int = 0)
	{
		curDifficulty += change;

		if (curDifficulty < 0)
			curDifficulty = 4;
		if (curDifficulty > 4)
			curDifficulty = 0;

		#if !switch
		intendedScore = Highscore.getScore(songs[curSelected].songName, curDifficulty);
		intendedRating = Highscore.getRating(songs[curSelected].songName, curDifficulty);
		#end

		PlayState.storyDifficulty = curDifficulty;
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

	function changeSelection(change:Int = 0)
	{
		if (loadingPack)
			return;
		curSelected += change;

		if (curSelected < 0)
			curSelected = songs.length - 1;

		if (curSelected >= songs.length)
			curSelected = 0;

		if (curDifficulty < 2) // idk man
			curDifficulty = 2;

		if (curDifficulty > 2)
			curDifficulty = 2;

		#if !switch
		intendedScore = Highscore.getScore(songs[curSelected].songName, curDifficulty);
		intendedRating = Highscore.getRating(songs[curSelected].songName, curDifficulty);
		#end

		if (songs[curSelected].isLocked && isSongLocked(songs[curSelected].songName, false))
			bottomInfoText.text = songs[curSelected].descLocked;
		else
			bottomInfoText.text = defbottomText;
		var bullShit:Int = 0;

		for (i in 0...iconArray.length)
			{
				iconArray[i].alpha = 0.6;
				if (iconArray[i].animation.curAnim != null && ClientPrefs.data.iconChangeonFreeplay)
					iconArray[i].animation.curAnim.curFrame = 0;
			}
	
		if (iconArray[curSelected].animation.curAnim != null)
		{
			iconArray[curSelected].alpha = 1;
			if (ClientPrefs.data.iconChangeonFreeplay)
				{
					iconArray[curSelected].animation.curAnim.curFrame = 2;
				}
		}

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
		changeDiff();

		if (colorTween != null)
		{
			colorTween.cancel();
		}
		var colorTo = songs[curSelected].color;
		if (songs[curSelected].isLocked && isSongLocked(songs[curSelected].songName, false))
			colorTo = FlxColor.fromRGB(50, 50, 50); // grey
		colorTween = FlxTween.color(glow, 1, bg.color, colorTo, {
			onComplete: function(twn:FlxTween)
			{
				colorTween = null;
			}
		});
		colorTween = FlxTween.color(bg, 1, bg.color, colorTo, {
			onComplete: function(twn:FlxTween)
			{
				colorTween = null;
			}
		});
	}
}

class SongMetadata
{
	public var songName:String = "";
	public var color:FlxColor = FlxColor.WHITE; // fallback
	public var songCharacter:String = "";
	public var folder:String = "";

	// locked vars
	public var isLocked:Bool = false;
	public var isAchievement:Bool = false;
	public var descLocked:String = "";

	public function new(song:String, color:FlxColor, songCharacter:String, ?isLocked:Bool = false, ?isAchievement:Bool = false)
	{
		this.songName = song;
		this.color = color;
		this.songCharacter = songCharacter;
		this.folder = Paths.currentModDirectory;
		if (this.folder == null)
			this.folder = '';
		this.isLocked = isLocked;
		this.isAchievement = isAchievement;
		if (isLocked)
		{
			descLocked = "If you see this, something went wrong! Report to the devs!";
			if (isAchievement && !(isLocked && song.toLowerCase() == "charlatan"))
			{
				var index = Achievements.getAchievementIndex(song.toLowerCase() + "_unlock");
				if (index == -1) // no good
					return;
				descLocked = 'Unlock the achievement ${Achievements.achievementsStuff[index][0]} to unlock this song.';
			}
			else
			{
				switch (Paths.formatToSongPath(songName)) // just in case
				{
					case "charlatan":
						descLocked = "One's mind goes hectic, and insanely deranged. Once he sees you, it will all end in pain.";
					case "numbskull":
						descLocked = "Purgatory's Opposition is the key, one of the numbers will set him free.";
					case "fractured-incantation":
						descLocked = "A curse placed after the third, failure is how it happened I heard.";
					case "disheartened":
						descLocked = "Giving up on her stage of anger will then lead you to something stranger.";
					case "divine-punishment":
						descLocked = "A leader who doesn't give up for a reason, yet you did the oppositite which acted as treason.";
				}
			}
		}
	}
}
