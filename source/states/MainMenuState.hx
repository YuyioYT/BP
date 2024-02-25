package states;

import states.GalleryState.GalleryState;
import flixel.addons.display.FlxBackdrop;
import backend.WeekData;
import backend.Achievements;

import flixel.FlxObject;
import flixel.addons.transition.FlxTransitionableState;
import flixel.effects.FlxFlicker;

import flixel.input.keyboard.FlxKey;
import lime.app.Application;

import objects.AchievementPopup;
import states.editors.MasterEditorMenu;
import options.OptionsState;

class MainMenuState extends MusicBeatState
{
	public static var psychEngineVersion:String = '0.7.1h';
	public static var bpEngineVersion:String = '1.0';
	public static var fnfEngineVersion:String = '0.2.8';
	public static var cornEngineVersion:String = '1.0'; //This is also used for Discord RPC
	public static var curSelected:Int = 0;

	var menuItems:FlxTypedGroup<FlxSprite>;
	var menuItemms:FlxTypedGroup<FlxSprite>;
	private var camGame:FlxCamera;
	private var camAchievement:FlxCamera;

	var gr:FlxSprite;
	var glow:FlxSprite;
	var spikes:FlxSprite;
	var check:FlxSprite;
	var bg:FlxSprite;
	var logo:FlxSprite;
	var slidething:FlxBackdrop;

	public static var firstStart:Bool = true;

	public static var finishedFunnyMove:Bool = false;

	
	var camFollow:FlxObject;
	
	var optionShit:Array<String> = [
		'story_mode',
		'freeplay',
		'options',
		'credits',
		'gallery',
		#if ACHIEVEMENTS_ALLOWED 'awards'#end
	];

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
	
	public static function randomizeBG():flixel.system.FlxAssets.FlxGraphicAsset
		{
			var chance:Int = FlxG.random.int(0, bgPaths.length - 1);
			return Paths.image(bgPaths[chance]);
		}

	override function create()
	{
		#if MODS_ALLOWED
		Mods.pushGlobalMods();
		#end
		Mods.loadTopMod();

		#if desktop
		// Updating Discord Rich Presence
		DiscordClient.changePresence("In the Menus", null);
		#end

		camGame = new FlxCamera();
		camAchievement = new FlxCamera();
		camAchievement.bgColor.alpha = 0;

		FlxG.cameras.reset(camGame);
		FlxG.cameras.add(camAchievement, false);
		FlxG.cameras.setDefaultDrawTarget(camGame, true);

		transIn = FlxTransitionableState.defaultTransIn;
		transOut = FlxTransitionableState.defaultTransOut;

		persistentUpdate = persistentDraw = true;
		FlxG.mouse.visible = true;

		var bg:FlxSprite = new FlxSprite(-80).loadGraphic(randomizeBG());
		bg.antialiasing = ClientPrefs.data.antialiasing;
		bg.setGraphicSize(Std.int(bg.width * 1.175));
		bg.updateHitbox();
		bg.screenCenter();
		bg.scrollFactor.set();
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

		var line:FlxSprite = new FlxSprite(-80).loadGraphic(Paths.image('menuimages/line'));
		line.setGraphicSize(Std.int(glow.width * 1.175));
		line.updateHitbox();
		line.screenCenter();
		line.antialiasing = ClientPrefs.data.antialiasing;
		line.scrollFactor.set();
		add(line);

		slidething = new FlxBackdrop(Paths.image('menuimages/hahaslider'),0,10000);
		slidething.velocity.set(-14,0);
		slidething.y = 150;
		slidething.screenCenter(X);
		slidething.setGraphicSize(Std.int(slidething.width * 0.65));
		add(slidething);
		slidething.scrollFactor.set();

		spikes = new FlxBackdrop(Paths.image('menuimages/spikeys'),0,10000);
		spikes.velocity.set(100,0);
		spikes.screenCenter();
		add(spikes);
		spikes.scrollFactor.set();

		gr = new FlxSprite(-80).loadGraphic(Paths.image('menuimages/funny'));
		gr.setGraphicSize(Std.int(gr.width * 1.175));
		gr.updateHitbox();
		gr.screenCenter();
		gr.antialiasing = ClientPrefs.data.antialiasing;
		gr.scrollFactor.set();
		add(gr);

		camFollow = new FlxObject(0, 0, 1, 1);
		add(camFollow);

		menuItems = new FlxTypedGroup<FlxSprite>();
		add(menuItems);

		menuItemms = new FlxTypedGroup<FlxSprite>();
		add(menuItemms);

		var scale:Float = 1;

		for (i in 0...optionShit.length)
			{
				//var offset:Float = 350 - (Math.max(optionShit.length, 4) - 4) * 80;

				var xPosition:Float;
				var yPosition:Float;

				var menuItem:FlxSprite = new FlxSprite();
				menuItem.antialiasing = ClientPrefs.data.antialiasing;
				menuItem.scale.x = scale;
				menuItem.scale.y = scale;
				menuItem.frames = Paths.getSparrowAtlas('mainmenu/menu_' + ( optionShit[i] + (ClientPrefs.data.Lenguage == 'Español' ? '_spanish' : '')));
				menuItem.animation.addByPrefix('idle', optionShit[i] + " basic", 24);
				menuItem.animation.addByPrefix('selected', optionShit[i] + " white", 24);
				menuItem.animation.play('idle');
				menuItem.ID = i;
				menuItems.add(menuItem);
				menuItem.scrollFactor.set();
				menuItem.updateHitbox();

			if (i > 2 && i < 5) {
				xPosition = i * 150 + 430; // Ajusta la posición en el eje X
				yPosition = 500;
			}else if (i == 5){
				xPosition = i * 150 + 400; // Ajusta la posición en el eje X
				yPosition = 500;
			} else {
				xPosition = i * 50 + 720;
				yPosition = i * 110 + 200;
			}
			
				menuItem.setPosition(xPosition, yPosition);
			}

		logo = new FlxSprite(600,-100).loadGraphic(Paths.image('menuimages/logo'));
		logo.antialiasing = ClientPrefs.data.antialiasing;
		logo.updateHitbox();
		logo.scale.x = 0.6;
		logo.scale.y = 0.6;
		logo.scrollFactor.set();
		add(logo);
		
		FlxG.camera.follow(camFollow, null, 0);

		var versionShit:FlxText = new FlxText(12, FlxG.height - 64, 0, "Bambi's Purgatory v" + bpEngineVersion, 12);
		versionShit.scrollFactor.set();
		versionShit.setFormat("fsb.otf", 16, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		add(versionShit);
		var versionShit:FlxText = new FlxText(12, FlxG.height - 44, 0, "Corn Engine v" + cornEngineVersion, 12);
		versionShit.scrollFactor.set();
		versionShit.setFormat("fsb.otf", 16, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		add(versionShit);
		var versionShit:FlxText = new FlxText(12, FlxG.height - 24, 0, "Friday Night Funkin' v" + fnfEngineVersion, 12);
		versionShit.scrollFactor.set();
		versionShit.setFormat("fsb.otf", 16, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		add(versionShit);

		// NG.core.calls.event.logEvent('swag').send();

		changeItem();

		#if ACHIEVEMENTS_ALLOWED
		Achievements.loadAchievements();
		var leDate = Date.now();
		if (leDate.getDay() == 5 && leDate.getHours() >= 18) {
			var achieveID:Int = Achievements.getAchievementIndex('friday_night_play');
			if(!Achievements.isAchievementUnlocked(Achievements.achievementsStuff[achieveID][2])) { //It's a friday night. WEEEEEEEEEEEEEEEEEE
				Achievements.achievementsMap.set(Achievements.achievementsStuff[achieveID][2], true);
				giveAchievement();
				ClientPrefs.saveSettings();
			}
		}
		#end

		super.create();
	}

	#if ACHIEVEMENTS_ALLOWED
	// Unlocks "Freaky on a Friday Night" achievement
	function giveAchievement() {
		add(new AchievementPopup('friday_night_play', camAchievement));
		FlxG.sound.play(Paths.sound('confirmMenu'), 0.7);
		trace('Giving achievement "friday_night_play"');
	}
	#end

	var selectedSomethin:Bool = false;

	override function update(elapsed:Float)
	{
		if (FlxG.sound.music.volume < 0.8)
		{
			FlxG.sound.music.volume += 0.5 * elapsed;
			if(FreeplayState.vocals != null) FreeplayState.vocals.volume += 0.5 * elapsed;
		}
		FlxG.camera.followLerp = FlxMath.bound(elapsed * 9 / (FlxG.updateFramerate / 60), 0, 1);

		if (!selectedSomethin)
		{
			if (FlxG.mouse.justMoved) // kinda dumb but ehhhh
				for (menuItem in menuItems)
				{
					if (FlxG.mouse.overlaps(menuItem))
					{
						if (curSelected == menuItem.ID)
							break;
						curSelected = menuItem.ID;
						changeItem();
						FlxG.sound.play(Paths.sound('Menu/scrollMenu'));
						break;
					}
				}
				
			if (controls.UI_UP_P)
			{
				FlxG.sound.play(Paths.sound('Menu/scrollMenu'));
				changeItem(-1);
			}

			if (controls.UI_DOWN_P)
			{
				FlxG.sound.play(Paths.sound('Menu/scrollMenu'));
				changeItem(1);
			}

			if (controls.BACK)
			{
				selectedSomethin = true;
				FlxG.sound.play(Paths.sound('Menu/cancelMenu'));
				MusicBeatState.switchState(new TitleState());
			}

			if (controls.ACCEPT|| (FlxG.mouse.justPressed))
			{
				if (optionShit[curSelected] == 'donate')
				{
					CoolUtil.browserLoad('https://ninja-muffin24.itch.io/funkin');
				}
				else
				{
					selectedSomethin = true;
					FlxG.sound.play(Paths.sound('Menu/confirmMenu'));


					FlxTween.tween(FlxG.camera, {zoom:1.35}, 1.45, {ease: FlxEase.expoIn});
					
					FlxTween.tween(gr, {x: 1000}, 2, {ease: FlxEase.circInOut});
					FlxTween.tween(gr, {alpha: 0}, 2, {ease: FlxEase.expoOut, onComplete: function(twn:FlxTween) { gr.kill(); }});

					FlxTween.tween(logo, {x: 1000}, 5, {ease: FlxEase.circInOut});
					FlxTween.tween(logo, {alpha: 0}, 1.5, {ease: FlxEase.expoOut, onComplete: function(twn:FlxTween) { logo.kill(); } });

					menuItems.forEach(function(spr:FlxSprite)
					{
						if (curSelected != spr.ID)
						{
							FlxTween.tween(spr, {x: 1000}, 1.4, {ease: FlxEase.circInOut});
							FlxTween.tween(spr, {alpha: 0}, 0.4, {ease: FlxEase.expoOut, onComplete: function(twn:FlxTween){ spr.kill(); } });
						}
						else
						{
							FlxFlicker.flicker(spr, 1, 0.06, false, false, function(flick:FlxFlicker)
							{
								FlxG.mouse.visible = false;
								var daChoice:String = optionShit[curSelected];

								switch (daChoice)
								{
									case 'story_mode':
										MusicBeatState.switchState(new StoryMenuState());
									case 'freeplay':
										MusicBeatState.switchState(new CategoryState());
									case 'awards':
										MusicBeatState.switchState(new AchievementsMenuState());
									case 'credits':
										MusicBeatState.switchState(new CreditsState());
									case 'gallery':
										MusicBeatState.switchState(new GalleryState());
									case 'options':
										LoadingState.loadAndSwitchState(new OptionsState());
										OptionsState.onPlayState = false;
										if (PlayState.SONG != null)
										{
											PlayState.SONG.arrowSkin = null;
											PlayState.SONG.splashSkin = null;
										}
								}
							});
						}
					});
				} 
			}
			#if desktop
			else if (controls.justPressed('debug_1'))
			{
				selectedSomethin = true;
				MusicBeatState.switchState(new MasterEditorMenu());
			}
			#end
		}

		super.update(elapsed);

	}

	function changeItem(huh:Int = 0)
	{
		curSelected += huh;

		if (curSelected >= menuItems.length)
			curSelected = 0;
		if (curSelected < 0)
			curSelected = menuItems.length - 1;
		//reloadSprites();

		menuItems.forEach(function(spr:FlxSprite)
		{
			spr.animation.play('idle');
			spr.updateHitbox();

			if (spr.ID == curSelected)
			{
				spr.animation.play('selected');
				var add:Float = 0;
				if(menuItems.length > 4) {
					add = menuItems.length * 8;
				}
				camFollow.setPosition(spr.getGraphicMidpoint().x, spr.getGraphicMidpoint().y - add);
				spr.centerOffsets();
			}
		});
	}
}
