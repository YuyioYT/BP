package states;

import flixel.addons.display.FlxBackdrop;
import states.FreeplayState;
import backend.Highscore;
import states.editors.ChartingState;
import flash.text.TextField;
import flixel.tweens.FlxEase;
import flixel.util.FlxTimer;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.display.FlxGridOverlay;
import flixel.addons.transition.FlxTransitionableState;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxMath;
import flixel.text.FlxText;
import flixel.FlxObject;
import flixel.util.FlxColor;
import flixel.tweens.FlxTween;
import lime.utils.Assets;
import flixel.system.FlxSound;
import openfl.utils.Assets as OpenFlAssets;
import backend.WeekData;
#if MODS_ALLOWED
import sys.FileSystem;
#end

using StringTools;



class CategoryState extends MusicBeatState
{
	public static var categorySelected:String;

	private var InMainFreeplayState:Bool = false;

	private var CurrentSongIcon:FlxSprite;

	var icons:Array<FlxSprite> = [];
	var titles:Array<FlxSprite> = [];

	private var AllPossibleSongs:Array<String> = ["story", "extras"/*, "remixes","joke", "old", "secret"*/];

	private var CurrentPack:Int = 0;

	var bg:FlxSprite = new FlxSprite();

	var loadingPack:Bool = false;

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


	public static var loadingCategory:Bool = false;
	var check:FlxSprite;
	var glow:FlxSprite;
	var spikes:FlxSprite;
	var categoryIcons:Array<FlxSprite> = [];

	override function create()
	{
		#if desktop DiscordClient.changePresence("In the Freeplay Menus", null); #end

		// lmao
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

		for (i in 0...AllPossibleSongs.length)
		{
			Highscore.load();
	
			var categoryIcon = new FlxSprite().loadGraphic(Paths.image('freelaycategories/menu_' + (AllPossibleSongs[i].toLowerCase())));
			categoryIcon.setGraphicSize(Std.int(categoryIcon.width * 0.7));
			categoryIcon.updateHitbox();
			categoryIcon.screenCenter();
			categoryIcon.antialiasing = ClientPrefs.data.antialiasing;
			categoryIcon.x += i * 1280;
			add(categoryIcon);
			categoryIcons.push(categoryIcon);
		}

		var scale:Float = 1;

		UpdatePackSelection(0);
		super.create();
	}

	public function LoadProperPack()
	{
		switch (AllPossibleSongs[CurrentPack].toLowerCase())
		{
			case 'story':
				MusicBeatState.switchState(new FreeplayState());
				categorySelected = 'story';
			case 'extras':
				MusicBeatState.switchState(new FreeplayState());
				categorySelected = 'extras';
			case 'remixes':
				MusicBeatState.switchState(new FreeplayState());
				categorySelected = 'remixes';
			case 'secret':
				MusicBeatState.switchState(new FreeplayState());
				categorySelected = 'secret';
			case 'old':
				MusicBeatState.switchState(new FreeplayState());
				categorySelected = 'old';
		}
	}

	public function UpdatePackSelection(change:Int)
	{
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
	override function update(elapsed:Float)
	{
		super.update(elapsed);

		if (!InMainFreeplayState) 
			{
			if (!loadingCategory)
			{
				if (controls.UI_LEFT_P)
				{
					UpdatePackSelection(-1);
				}
				if (controls.UI_RIGHT_P)
				{
					UpdatePackSelection(1);
				}
				if (controls.ACCEPT && !loadingPack)
					{
						FlxG.sound.play(Paths.sound('menu/confirmMenu'), 0.7);
						loadingCategory = true;
		
						new FlxTimer().start(0.2, function(Dumbshit:FlxTimer)
						{
							for (item in icons) { FlxTween.tween(item, {alpha: 0, y: item.y - 200}, 0.5, {ease: FlxEase.cubeInOut}); }
							for (item in titles) { FlxTween.tween(item, {alpha: 0, y: item.y - 200}, 0.5, {ease: FlxEase.cubeInOut}); }
							FlxTween.tween(camera, {'alpha': 0}, 0.4, {ease: FlxEase.cubeInOut}); // i tried to do an a lil different transition
							new FlxTimer().start(0.7, function(Dumbshit:FlxTimer)
							{
								for (item in icons) { item.visible = false; }
								for (item in titles) { item.visible = false; }
		
								LoadProperPack();
								loadingCategory = false;
							});
						});
					}
				if (controls.BACK)
					{
						FlxG.sound.play(Paths.sound('menu/cancelMenu'));
						MusicBeatState.switchState(new MainMenuState());
					}	
				
					return;
				}					
			} else {

			}
		if (FlxG.sound.music.volume < 0.7)
		{
			FlxG.sound.music.volume += 0.5 * FlxG.elapsed;
		}
	}
	public static function randomizeBG():flixel.system.FlxAssets.FlxGraphicAsset
		{
			var chance:Int = FlxG.random.int(0, bgPaths.length - 1);
			return Paths.image(bgPaths[chance]);
		}
}


		




class SongMetadata
{
	public var songName:String = "";
	public var week:Int = 0;
	public var songCharacter:String = "";
	public var color:Int = -7179779;
	public var folder:String = "";
	public var blocked:Bool = false;

	public function new(song:String, week:Int, songCharacter:String, color:Int, blocked:Bool)
	{
		this.songName = song;
		this.week = week;
		this.songCharacter = songCharacter;
		this.color = color;
		this.folder = Paths.currentModDirectory;
		this.blocked = blocked;
		if(this.folder == null) this.folder = '';
	}
}