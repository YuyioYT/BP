package states;

import backend.Song;
import substates.GameplayChangersSubstate;
import backend.WeekData;
import flixel.addons.transition.FlxTransitionableState;
import flixel.addons.display.FlxBackdrop;
import flixel.effects.FlxFlicker;
import flixel.FlxBasic;
import flixel.FlxObject;
import flixel.FlxSubState;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;

class StoryMenuState extends MusicBeatState
{
	var week1:FlxSprite;
	var o:FlxSprite;
	var lol:Bool = false;
	var lol2:Bool = false;
	var lol3:Bool = false;
	var canExit:Bool = true;
	var week1text:FlxText;
	var week2text:FlxText;
	var week2:FlxSprite;
	var week3:FlxSprite;
	var week3text:FlxText;
	var arrowshit:FlxSprite;
	var menuItems:FlxTypedGroup<FlxSprite>;
	var text:FlxText;
	var text2:FlxText;

	public static var weekCompleted:Map<String, Bool> = new Map<String, Bool>();

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
		Paths.clearStoredMemory();
		Paths.clearUnusedMemory();

		super.create();

		FlxG.mouse.visible = true;

		transIn = FlxTransitionableState.defaultTransIn;
		transOut = FlxTransitionableState.defaultTransOut;

		var bg:FlxSprite = new FlxSprite(-80).loadGraphic(randomizeBG());
		bg.setGraphicSize(Std.int(bg.width * 1.175));
		bg.updateHitbox();
		bg.screenCenter();
		bg.color = 0xFF2E0000;
		bg.antialiasing = ClientPrefs.data.antialiasing;
		add(bg);

		var check = new FlxBackdrop(Paths.image('menuimages/check'),0,0);
		check.velocity.set(150,150);
		check.screenCenter();
		add(check);

		var glow:FlxSprite = new FlxSprite(-80).loadGraphic(Paths.image('menuimages/glow'));
		glow.setGraphicSize(Std.int(glow.width * 1.175));
		glow.updateHitbox();
		glow.screenCenter();
		glow.antialiasing = ClientPrefs.data.antialiasing;
		add(glow);

		var gr:FlxSprite = new FlxSprite(-80).loadGraphic(Paths.image('menuimages/purgatorygrad'));
		gr.setGraphicSize(Std.int(gr.width * 1.175));
		gr.updateHitbox();
		gr.screenCenter();
		gr.antialiasing = ClientPrefs.data.antialiasing;
		add(gr);

		var line:FlxSprite = new FlxSprite(-80).loadGraphic(Paths.image('menuimages/line'));
		line.setGraphicSize(Std.int(glow.width * 1.175));
		line.updateHitbox();
		line.screenCenter();
		line.antialiasing = ClientPrefs.data.antialiasing;
		add(line);

		var slidething = new FlxBackdrop(Paths.image('menuimages/hahaslider'),0,10000);
		slidething.velocity.set(-14,0);
		slidething.y = 150;
		slidething.screenCenter(X);
		slidething.setGraphicSize(Std.int(slidething.width * 0.65));
		add(slidething);

		var spikes = new FlxBackdrop(Paths.image('menuimages/spikeys'),0,10000);
		spikes.velocity.set(100,0);
		spikes.screenCenter();
		add(spikes);
		
		menuItems = new FlxTypedGroup<FlxSprite>();
		add(menuItems);
		
		week1 = new FlxSprite(100, 70).loadGraphic(Paths.image('purgatoryweeks/story1'));
		week1.scale.set(0.8, 0.8);
		week1.updateHitbox();
		week1.antialiasing = ClientPrefs.data.antialiasing;
		menuItems.add(week1);
		
		week1text = new FlxText(80, 480, 320, "Rage\n" + "Week\n");
		week1text.setFormat(Paths.font("comic-sans.ttf"), 50, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		week1text.scrollFactor.set();
		week1text.borderSize = 3.25;
		week1text.visible = true;
		menuItems.add(week1text);
		
		week2 = new FlxSprite(500, 70).loadGraphic(Paths.image('purgatoryweeks/story2'));
		week2.scale.set(0.8, 0.8);
		week2.updateHitbox();
		week2.antialiasing = ClientPrefs.data.antialiasing;
		menuItems.add(week2);
		
		week2text = new FlxText(480, 480, 320, "Hell\n" + "Week\n");
		week2text.setFormat(Paths.font("comic-sans.ttf"), 50, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		week2text.scrollFactor.set();
		week2text.borderSize = 3.25;
		week2text.visible = true;
		menuItems.add(week2text);
		
		week3 = new FlxSprite(900, 70).loadGraphic(Paths.image('purgatoryweeks/story3'));
		week3.scale.set(0.8, 0.8);
		week3.updateHitbox();
		week3.antialiasing = ClientPrefs.data.antialiasing;
		menuItems.add(week3);
		
		week3text = new FlxText(880, 480, 320, "Dave's\n" + "Rematch\n");
		week3text.setFormat(Paths.font("comic-sans.ttf"), 50, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		week3text.scrollFactor.set();
		week3text.borderSize = 3.25;
		week3text.visible = true;
		menuItems.add(week3text);
		
		var textBG:FlxSprite = new FlxSprite(0, FlxG.height - 46).makeGraphic(FlxG.width, 56, 0xFF000000);
		textBG.alpha = 0.6;
		menuItems.add(textBG);
		
		var leText:String = "Use your mouse to select a week.";
		text = new FlxText(textBG.x + -10, textBG.y + 3, FlxG.width, leText, 21);
		text.setFormat(Paths.font("comic-sans.ttf"), 18, FlxColor.WHITE, CENTER);
		text.scrollFactor.set();
		menuItems.add(text);

		var leText3:String = "Press CTRL to open the Gameplay Modifier Menu";
		var leText2 = new FlxText(10, 690, 0, leText3, 21);
		leText2.setFormat(Paths.font("comic-sans.ttf"), 18, FlxColor.WHITE, CENTER);
		leText2.scrollFactor.set();
		menuItems.add(leText2);
		
		/*var arrowshitSub = new FlxSprite(-80).loadGraphic(Paths.image('menuimages/stupidarrowsright'));
		arrowshitSub.setGraphicSize(Std.int(arrowshitSub.width * 1));
		arrowshitSub.updateHitbox();
		arrowshitSub.screenCenter();
		arrowshitSub.antialiasing = ClientPrefs.data.antialiasing;
		menuItems.add(arrowshitSub);*/
	}

    override public function update(elapsed: Float) 
	{
		var clicked = FlxG.mouse.overlaps(week1) && FlxG.mouse.justPressed && !lol;
		var clicked2 = FlxG.mouse.overlaps(week2) && FlxG.mouse.justPressed && !lol2;
		var clicked3 = FlxG.mouse.overlaps(week3) && FlxG.mouse.justPressed && !lol3;

		if (clicked)
		{
			lol = true;
			FlxG.mouse.visible = false;
			FlxG.sound.play(Paths.sound('menu/confirmMenu'));
			startSong('shattered/shattered-hard', 'fallowed', 'reality breaking');	
		}

		if (clicked2)
		{
			lol2 = true;
			FlxG.mouse.visible = false;
			FlxG.sound.play(Paths.sound('menu/confirmMenu'));
			startSong2('rebound/rebound-hard', 'disposition', 'upheaval');	
		}

		
		if (clicked3)
		{
			lol3 = true;
			FlxG.sound.play(Paths.sound('menu/confirmMenu'));
			FlxG.mouse.visible = false;
			startSong3('roundabout/roundabout-hard', 'rascal', 'triple threat');	
		}
		  
		if(controls.BACK)
		{
			FlxG.mouse.visible = false;
			FlxG.sound.play(Paths.sound('menu/cancelMenu'));
			MusicBeatState.switchState(new MainMenuState());
		}
		
		if(FlxG.keys.justPressed.CONTROL)
		{
			persistentUpdate = false;
			openSubState(new GameplayChangersSubstate());
		}
		
	/*	if (controls.UI_RIGHT_P)
		{
			openSubState(new Section2Substate());
			FlxG.sound.play(Paths.sound('menu/scrollMenu'));
		}
			*/
		
		super.update(elapsed);
    }

    function startSong(songName1:String, songName2:String, songName3:String)
    {
	   FlxFlicker.flicker(week1, 1, 0.06, false, false, function(flick:FlxFlicker)
	   {
	    PlayState.storyPlaylist = [songName1, songName2, songName3];
		PlayState.isStoryMode = true;
	    PlayState.storyWeek = 2;
	    PlayState.storyDifficulty = 2;
	    PlayState.SONG = Song.loadFromJson(PlayState.storyPlaylist[0], '');
	    PlayState.campaignScore = 0;
	    PlayState.campaignMisses = 0;
		FlxTween.tween(FlxG.camera, {zoom: 5}, 0.8, {ease: FlxEase.expoIn});
		FlxTween.tween(FlxG.camera, {angle: 365}, 1, {ease: FlxEase.expoIn});
		FlxTween.tween(FlxG.camera, {alpha: 0}, 1, {ease: FlxEase.expoIn});	
	    menuItems.forEach(function(spr:FlxSprite) {
		FlxTween.tween(camera, {alpha: 0}, 0.8, {ease: FlxEase.expoIn});
	    FlxTween.tween(spr, {alpha: 0}, 0.4, {
	  	    ease: FlxEase.quadOut,
		    onComplete: function(twn:FlxTween)
		    {
		  	    spr.kill();
		    }
	      });
       });
	    new FlxTimer().start(1, function(tmr:FlxTimer)
	    {
		    LoadingState.loadAndSwitchState(new PlayState());
	    });
	   });
	}

	function startSong2(songName1:String, songName2:String, songName3:String)
		{
		   FlxFlicker.flicker(week2, 1, 0.06, false, false, function(flick:FlxFlicker)
		   {
			PlayState.storyPlaylist = [songName1, songName2, songName3];
			PlayState.isStoryMode = true;
			PlayState.storyWeek = 2;
			PlayState.storyDifficulty = 2;
			PlayState.SONG = Song.loadFromJson(PlayState.storyPlaylist[0], '');
			PlayState.campaignScore = 0;
			PlayState.campaignMisses = 0;
			FlxTween.tween(FlxG.camera, {zoom: 5}, 0.8, {ease: FlxEase.expoIn});
			FlxTween.tween(FlxG.camera, {angle: 365}, 1, {ease: FlxEase.expoIn});
			FlxTween.tween(FlxG.camera, {alpha: 0}, 1, {ease: FlxEase.expoIn});	
			menuItems.forEach(function(spr:FlxSprite) {
			FlxTween.tween(camera, {alpha: 0}, 0.8, {ease: FlxEase.expoIn});
			FlxTween.tween(spr, {alpha: 0}, 0.4, {
				  ease: FlxEase.quadOut,
				onComplete: function(twn:FlxTween)
				{
					  spr.kill();
				}
			  });
		   });
			new FlxTimer().start(1, function(tmr:FlxTimer)
			{
				LoadingState.loadAndSwitchState(new PlayState());
			});
		   });
		}

		function startSong3(songName1:String, songName2:String, songName3:String)
			{
			   FlxFlicker.flicker(week3, 1, 0.06, false, false, function(flick:FlxFlicker)
			   {
				PlayState.storyPlaylist = [songName1, songName2, songName3];
				PlayState.isStoryMode = true;
				PlayState.storyWeek = 2;
				PlayState.storyDifficulty = 2;
				PlayState.SONG = Song.loadFromJson(PlayState.storyPlaylist[0], '');
				PlayState.campaignScore = 0;
				PlayState.campaignMisses = 0;
				FlxTween.tween(FlxG.camera, {zoom: 5}, 0.8, {ease: FlxEase.expoIn});
				FlxTween.tween(FlxG.camera, {angle: 365}, 1, {ease: FlxEase.expoIn});
				FlxTween.tween(FlxG.camera, {alpha: 0}, 1, {ease: FlxEase.expoIn});	
				menuItems.forEach(function(spr:FlxSprite) {
				FlxTween.tween(camera, {alpha: 0}, 0.8, {ease: FlxEase.expoIn});
				FlxTween.tween(spr, {alpha: 0}, 0.4, {
					  ease: FlxEase.quadOut,
					onComplete: function(twn:FlxTween)
					{
						  spr.kill();
					}
				  });
			   });
				new FlxTimer().start(1, function(tmr:FlxTimer)
				{
					LoadingState.loadAndSwitchState(new PlayState());
				});
			   });
			}
	function weekIsLocked(weekNum:Int) {
		var leWeek:WeekData = WeekData.weeksLoaded.get(WeekData.weeksList[weekNum]);
		return (!leWeek.startUnlocked && leWeek.weekBefore.length > 0 && (!weekCompleted.exists(leWeek.weekBefore) || !weekCompleted.get(leWeek.weekBefore)));
	}
}

/*class Section2Substate extends MusicBeatSubstate
{
	
	var arrowshitSub:FlxSprite;
	var menuItemsSub:FlxTypedGroup<FlxSprite>;
	var lol4:Bool = false;
	var lol5:Bool = false;
	var lol6:Bool = false;
	var text:FlxText;
	var text2:FlxText;
	var menuItems:FlxTypedGroup<FlxSprite>;
	var week4:FlxSprite;
	var week5:FlxSprite;
	var week4text:FlxText;
	var week5text:FlxText;
	var week6:FlxSprite;
	var week6text:FlxText;

	public static var weekCompleted:Map<String, Bool> = new Map<String, Bool>();

	public static var bgPaths:Array<String> = 
	[
		'backgrounds/arandomguy',
		'backgrounds/cesars',
		'backgrounds/cheesedjelly',
		'backgrounds/darealmatt',
		'backgrounds/darlyboxman',
		'backgrounds/doodoofeces',
		'backgrounds/fast_f00d',
		'backgrounds/ion',
		'backgrounds/isaaclul',
		'backgrounds/kanandraw',
		'backgrounds/mmimim',
		'backgrounds/osp',
		'backgrounds/Senza_titolo_200_20230711092018',
		'backgrounds/Senza_titolo_201_20230711093117',
		'backgrounds/slushX',
		'backgrounds/spitz',
		'backgrounds/tamrika',
		'backgrounds/sultimate poop',
		'backgrounds/ultimate poop2',
		'backgrounds/voltrex',
		'backgrounds/watch_out',
		'backgrounds/zevisly'
	];

	public static function randomizeBG():flixel.system.FlxAssets.FlxGraphicAsset
		{
			var chance:Int = FlxG.random.int(0, bgPaths.length - 1);
			return Paths.image(bgPaths[chance]);
		}
	
	public function new() {
		super();
		
		var bg:FlxSprite = new FlxSprite(-80).loadGraphic(randomizeBG());
		bg.setGraphicSize(Std.int(bg.width * 1.175));
		bg.updateHitbox();
		bg.screenCenter();
		bg.color = 0xFF2E0000;
		bg.antialiasing = ClientPrefs.data.antialiasing;
		add(bg);

		var check = new FlxBackdrop(Paths.image('menuimages/check'),0,0);
		check.velocity.set(150,150);
		check.screenCenter();
		add(check);

		var glow:FlxSprite = new FlxSprite(-80).loadGraphic(Paths.image('menuimages/glow'));
		glow.setGraphicSize(Std.int(glow.width * 1.175));
		glow.updateHitbox();
		glow.screenCenter();
		glow.antialiasing = ClientPrefs.data.antialiasing;
		add(glow);

		var gr:FlxSprite = new FlxSprite(-80).loadGraphic(Paths.image('menuimages/purgatorygrad'));
		gr.setGraphicSize(Std.int(gr.width * 1.175));
		gr.updateHitbox();
		gr.screenCenter();
		gr.antialiasing = ClientPrefs.data.antialiasing;
		add(gr);

		var line:FlxSprite = new FlxSprite(-80).loadGraphic(Paths.image('menuimages/line'));
		line.setGraphicSize(Std.int(glow.width * 1.175));
		line.updateHitbox();
		line.screenCenter();
		line.antialiasing = ClientPrefs.data.antialiasing;
		add(line);

		var slidething = new FlxBackdrop(Paths.image('menuimages/hahaslider'),0,10000);
		slidething.velocity.set(-14,0);
		slidething.y = 150;
		slidething.screenCenter(X);
		slidething.setGraphicSize(Std.int(slidething.width * 0.65));
		add(slidething);

		var spikes = new FlxBackdrop(Paths.image('menuimages/spikeys'),0,10000);
		spikes.velocity.set(100,0);
		spikes.screenCenter();
		add(spikes);
		
		menuItemsSub = new FlxTypedGroup<FlxSprite>();
		add(menuItemsSub);
		
		week4 = new FlxSprite(100, 70).loadGraphic(Paths.image('purgatoryweeks/story4'));
		week4.scale.set(0.8, 0.8);
		week4.updateHitbox();
		week4.antialiasing = ClientPrefs.data.antialiasing;
		menuItemsSub.add(week4);
		
		week4text = new FlxText(80, 480, 320, "Crusti and\n" + "Bambi Minion Week\n");
		week4text.setFormat(Paths.font("comic-sans.ttf"), 50, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		week4text.scrollFactor.set();
		week4text.borderSize = 3.25;
		week4text.visible = true;
		menuItemsSub.add(week4text);
		
		week5 = new FlxSprite(500, 70).loadGraphic(Paths.image('purgatoryweeks/story5'));
		week5.scale.set(0.8, 0.8);
		week5.updateHitbox();
		week5.antialiasing = ClientPrefs.data.antialiasing;
		menuItemsSub.add(week5);
		
		week5text = new FlxText(480, 480, 320, "The\n" + "Trio Week\n");
		week5text.setFormat(Paths.font("comic-sans.ttf"), 50, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		week5text.scrollFactor.set();
		week5text.borderSize = 3.25;
		week5text.visible = true;
		menuItemsSub.add(week5text);
		
		week6 = new FlxSprite(900, 70).loadGraphic(Paths.image('purgatoryweeks/story6'));
		week6.scale.set(0.8, 0.8);
		week6.updateHitbox();
		week6.antialiasing = ClientPrefs.data.antialiasing;
		menuItemsSub.add(week6);

		week6text = new FlxText(880, 480, 320, "Vs\n" + "???\n");
		week6text.setFormat(Paths.font("comic-sans.ttf"), 50, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		week6text.scrollFactor.set();
		week6text.borderSize = 3.25;
		week6text.visible = true;
		menuItemsSub.add(week6text);
		
		var textBG:FlxSprite = new FlxSprite(0, FlxG.height - 46).makeGraphic(FlxG.width, 56, 0xFF000000);
		textBG.alpha = 0.6;
		menuItemsSub.add(textBG);
		var leText:String = "Use your mouse to select a week.";
		text = new FlxText(textBG.x + -10, textBG.y + 3, FlxG.width, leText, 21);
		text.setFormat(Paths.font("comic-sans.ttf"), 18, FlxColor.WHITE, CENTER);
		text.scrollFactor.set();
		menuItemsSub.add(text);

		var leText2:String = "Press CTRL to open the Gameplay Modifier Menu";
		text2 = new FlxText(10, 690, 0, leText2, 21);
		text2.setFormat(Paths.font("comic-sans.ttf"), 18, FlxColor.WHITE, CENTER);
		text2.scrollFactor.set();
		menuItemsSub.add(text2);
		
		arrowshitSub = new FlxSprite(-80).loadGraphic(Paths.image('menuimages/stupidarrowsleft'));
		arrowshitSub.setGraphicSize(Std.int(arrowshitSub.width * 1));
		arrowshitSub.updateHitbox();
		arrowshitSub.screenCenter();
		arrowshitSub.antialiasing = ClientPrefs.data.antialiasing;
		menuItemsSub.add(arrowshitSub);
	}
	
	override function update(elapsed:Float)
	{
		if (ClientPrefs.data.shaders)
			{
				var testshader:shaders.Shaders.BlockedGlitchEffect = new shaders.Shaders.BlockedGlitchEffect();
				testshader.set_Enabled(true);
				testshader.update(elapsed);

				week6text.shader = testshader.shader;
			}

		var clicked4 = FlxG.mouse.overlaps(week4) && FlxG.mouse.justPressed && !lol4;
		var clicked5 = FlxG.mouse.overlaps(week5) && FlxG.mouse.justPressed && !lol5;
		var clicked6 = FlxG.mouse.overlaps(week6) && FlxG.mouse.justPressed && !lol6;
		
		if (clicked4)
		{
			lol4 = true;
			FlxG.sound.play(Paths.sound('menu/confirmMenu'));
			FlxG.mouse.visible = false;
			startSong4('delivery/delivery-hard', 'acquaintance', 'Double Act');	
		}

		
		if (clicked5)
		{
			lol5 = true;
			FlxG.sound.play(Paths.sound('menu/confirmMenu'));
			FlxG.mouse.visible = false;
			startSong5("beefin'/beefin-hard", 'Technology');	
		}
		
		
		if (clicked6)
		{
			lol6 = true;
			FlxG.sound.play(Paths.sound('menu/confirmMenu'));
			FlxG.mouse.visible = false;
			startSong6('Tyranny/Tyranny-hard', 'Cataclysmic', 'Antagonism');
		}

		if (controls.UI_LEFT_P)
		{
			close();
			FlxG.sound.play(Paths.sound('menu/scrollMenu'));
		}

		if(FlxG.keys.justPressed.CONTROL)
		{
			persistentUpdate = false;
			openSubState(new GameplayChangersSubstate());
		}
		
		if(controls.BACK)
		{
			FlxG.sound.play(Paths.sound('menu/cancelMenu'));
			FlxG.mouse.visible = false;
			MusicBeatState.switchState(new MainMenuState());
		}
		
		super.update(elapsed);
	}

	function startSong4(songName1:String, songName2:String, songName3:String)
		{
		   FlxFlicker.flicker(week4, 1, 0.06, false, false, function(flick:FlxFlicker)
		   {
			PlayState.storyPlaylist = [songName1, songName2, songName3];
			PlayState.isStoryMode = true;
			PlayState.storyWeek = 2;
			PlayState.storyDifficulty = 2;
			PlayState.SONG = Song.loadFromJson(PlayState.storyPlaylist[0], '');
			PlayState.campaignScore = 0;
			PlayState.campaignMisses = 0;
			FlxTween.tween(FlxG.camera, {zoom: 5}, 0.8, {ease: FlxEase.expoIn});
			FlxTween.tween(FlxG.camera, {angle: 365}, 1, {ease: FlxEase.expoIn});
			FlxTween.tween(FlxG.camera, {alpha: 0}, 1, {ease: FlxEase.expoIn});	
			menuItemsSub.forEach(function(spr:FlxSprite) {
			FlxTween.tween(camera, {alpha: 0}, 0.8, {ease: FlxEase.expoIn});
			FlxTween.tween(spr, {alpha: 0}, 0.4, {
				  ease: FlxEase.quadOut,
				onComplete: function(twn:FlxTween)
				{
					  spr.kill();
				}
			  });
		   });
			new FlxTimer().start(1, function(tmr:FlxTimer)
			{
				LoadingState.loadAndSwitchState(new PlayState());
			});
		   });
		}

		function startSong5(songName1:String, songName2:String)
			{
			   FlxFlicker.flicker(week5, 1, 0.06, false, false, function(flick:FlxFlicker)
			   {
				PlayState.storyPlaylist = [songName1, songName2];
				PlayState.isStoryMode = true;
				PlayState.storyWeek = 2;
				PlayState.storyDifficulty = 2;
				PlayState.SONG = Song.loadFromJson(PlayState.storyPlaylist[0], '');
				PlayState.campaignScore = 0;
				PlayState.campaignMisses = 0;
				FlxTween.tween(FlxG.camera, {zoom: 5}, 0.8, {ease: FlxEase.expoIn});
				FlxTween.tween(FlxG.camera, {angle: 365}, 1, {ease: FlxEase.expoIn});
				FlxTween.tween(FlxG.camera, {alpha: 0}, 1, {ease: FlxEase.expoIn});	
				menuItemsSub.forEach(function(spr:FlxSprite) {
				FlxTween.tween(camera, {alpha: 0}, 0.8, {ease: FlxEase.expoIn});
				FlxTween.tween(spr, {alpha: 0}, 0.4, {
					  ease: FlxEase.quadOut,
					onComplete: function(twn:FlxTween)
					{
						  spr.kill();
					}
				  });
			   });
				new FlxTimer().start(1, function(tmr:FlxTimer)
				{
					LoadingState.loadAndSwitchState(new PlayState());
				});
			   });
			}

			function startSong6(songName1:String, songName2:String, songName3:String)
				{
				   FlxFlicker.flicker(week6, 1, 0.06, false, false, function(flick:FlxFlicker)
				   {
					PlayState.storyPlaylist = [songName1, songName2, songName3];
					PlayState.isStoryMode = true;
					PlayState.storyWeek = 2;
					PlayState.storyDifficulty = 2;
					PlayState.SONG = Song.loadFromJson(PlayState.storyPlaylist[0], '');
					PlayState.campaignScore = 0;
					PlayState.campaignMisses = 0;
					FlxTween.tween(FlxG.camera, {zoom: 5}, 0.8, {ease: FlxEase.expoIn});
					FlxTween.tween(FlxG.camera, {angle: 365}, 1, {ease: FlxEase.expoIn});
					FlxTween.tween(FlxG.camera, {alpha: 0}, 1, {ease: FlxEase.expoIn});	
					menuItemsSub.forEach(function(spr:FlxSprite) {
					FlxTween.tween(camera, {alpha: 0}, 0.8, {ease: FlxEase.expoIn});
					FlxTween.tween(spr, {alpha: 0}, 0.4, {
						  ease: FlxEase.quadOut,
						onComplete: function(twn:FlxTween)
						{
							  spr.kill();
						}
					  });
				   });
					new FlxTimer().start(1, function(tmr:FlxTimer)
					{
						LoadingState.loadAndSwitchState(new PlayState());
					});
				   });
				}

	function weekIsLocked(weekNum:Int) {
		var leWeek:WeekData = WeekData.weeksLoaded.get(WeekData.weeksList[weekNum]);
		return (!leWeek.startUnlocked && leWeek.weekBefore.length > 0 && (!weekCompleted.exists(leWeek.weekBefore) || !weekCompleted.get(leWeek.weekBefore)));
	}
}*/
