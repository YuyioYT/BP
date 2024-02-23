package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.math.FlxMath;
import flixel.util.FlxColor;
import Strumline.UIStaticArrow;
import flash.display.BitmapData;
import editors.ChartingState;
import NoteShader.ColoredNoteShader;

using StringTools;

typedef EventNote = {
	strumTime:Float,
	event:String,
	value1:String,
	value2:String
}

typedef NoteBehaviour = {
	var actsLike:String;
	var antialiasing:Bool;
	var scale:Float;
	var arguments:Dynamic;
	@:optional var noHolds:Bool;
	@:optional var receptorAutoColor:Bool;
	@:optional var receptorAlpha:Float;
	@:optional var sustainAlpha:Float;
	@:optional var defaultAlpha:Float;
}



class Note extends FlxSprite
{
	public var extraData:Map<String,Dynamic> = [];
	public var strumTime:Float = 0;
	public var mustPress:Bool = false;
	public var noteData:Int = 0;
	public var canBeHit:Bool = false;
	public var row:Int = 0;
	public var tooLate:Bool = false;
	public var wasGoodHit:Bool = false;
	public var ignoreNote:Bool = false;
	public var hitByOpponent:Bool = false;
	public var noteWasHit:Bool = false;
	public var prevNote:Note;
	public var nextNote:Note;
	public var behaviour:NoteBehaviour;
	public var spawned:Bool = false;

	public var tail:Array<Note> = []; // for sustains
	public var parent:Note;
	public var blockHit:Bool = false; // only works for player

	public var shouldbehidden:Bool = false;
	public var charSkin:String = null;

	public var sustainLength:Float = 0;
	public var isSustainNote:Bool = false;
	public var noteType(default, set):String = null;

	public var eventName:String = '';
	public var eventLength:Int = 0;
	public var eventVal1:String = '';
	public var eventVal2:String = '';

	public var colorSwap:ColorSwap;
	public var inEditor:Bool = false;

	public var animSuffix:String = '';
	public var gfNote:Bool = false;
	public var phone:Bool = false;
	public var earlyHitMult:Float = 0.5;
	public var eggNote:Bool = false;
	public var dave:Bool = false;
		public var badai:Bool = false;
			public var bamburg:Bool = false;
	public var lateHitMult:Float = 1;
	public var lowPriority:Bool = false;

		public static var quants:Array<Int> = [
		4, // quarter note
		8, // eight
		12, // etc
		16,
		24,
		32,
		48,
		64,
		192
	];

		public var quantToIndex:Map<Int,String>=[
		4=>"4th",
		8=>"8th",
		12=>"12th",
		16=>"16th",
		24=>"24th",
		32=>"32nd",
		48=>"48th",
		64=>"64th",
		192=>"192nd",
	];

		public var noteAngles:Array<Float>=[0,0,0,0];
	public var noteOffsets:Array<Array<Null<Float>>> = [
		[0,0],
		[0,0],
		[0,0],
		[0,0]
	];

	public static var swagWidth:Float = 160 * 0.7;
	public static var PURP_NOTE:Int = 0;
	public static var GREEN_NOTE:Int = 2;
	public static var BLUE_NOTE:Int = 1;
	public static var RED_NOTE:Int = 3;

public static var beats:Array<Int> = [4, 8, 12, 16, 24, 32, 48, 64, 96, 128, 192,256,384,512,768,1024,1536,2048,3072,6144];

	// not set initially
	public var noteQuant:Int = -1;
	public var noteVisualOffset:Float = 0;
	public var noteSpeed:Float = 0;
	public var noteDirection:Float = 0;

	public var quantTexture:Int = 4;

	public var MyStrum:StrumNote;
	// Lua shit
	public var noteSplashDisabled:Bool = false;
	public var noteSplashTexture:String = null;
	public var noteSplashHue:Float = 0;
	public var noteSplashSat:Float = 0;
	public var noteSplashBrt:Float = 0;

	public var offsetX:Float = 0;
	public var offsetY:Float = 0;
	public var offsetAngle:Float = 0;
	public var multAlpha:Float = 1;
	public var multSpeed(default, set):Float = 1;
	public var alphaMult:Float = 1.0;
	public var noteOffset:Float = 0;
	public var copyX:Bool = true;
	public var copyY:Bool = true;
	public var copyAngle:Bool = true;
	public var copyAlpha:Bool = true;

	public var hitHealth:Float = 0.023;
	public var missHealth:Float = 0.0475;
	public var rating:String = 'unknown';
	public var ratingMod:Float = 0; //9 = unknown, 0.25 = shit, 0.5 = bad, 0.75 = good, 1 = sick
	public var ratingDisabled:Bool = false;
	var fuckerStyle:String = 'normal';
		public var is3dNote:Bool = false;
	public var texture(default, set):String = null;
public static var CharactersWith3D:Array<String> = ['bambi-unfair', 'bambi-piss-3d', 'bandu', 'tunnel-dave', 'badai', 'unfair-junker', 'og-dave', 'split-dave-3d', 'garrett', 'og-dave-angey', '3d-bf', 'bandu-candy', 'bandu-scaredy', 'sart-producer', 'ringi', 'bambom', 'bendu', 'diamond-man', 'sart-producer-night', 'bandu-origin', 'RECOVERED_PROJECT', 'RECOVERED_PROJECT_2', 'RECOVERED_PROJECT_3', 'hall-monitor', 'playrobot', 'playrobot-crazy', 'gary', 'ripple', 'david', 'brob', 'butch', 'bad', 'irreversible_action', 'eww-bf', 'dingle', 'froing', 'doll', 'dale', 'robot-guy', 'batai', 'boxer', 'gotta-sleep', 'garrett-animal', 'playtime-2', 'wizard', 'do-you-accept', 'garrett-piss', 'car', 'do-you-accept-player', 'mr-music', 'paloose-men', 'diamond-man-mugen', 'insanidave', 'alge', 'butch', 'bad', 'hover-dude', 'bamb-root', 'shoulder-3d-bf', 'bandu-lullaby', 'dave-unchecked', 'bandu-card', 'cell', 'corrupt-file', 'cell-mad', 'ticking', 'among', 'swanki', 'badrum', 'cock-cream', 'wtf-lmao', '3d-tristan', 'dambu', 'dambai', 'facecam', 'blogblez', 'too-shiny'];
	public var noAnimation:Bool = false;
	public var noMissAnimation:Bool = false;
	public var hitCausesMiss:Bool = false;
	public var distance:Float = 2000; //plan on doing scroll directions soon -bb

	public var hitsoundDisabled:Bool = false;

	private function set_multSpeed(value:Float):Float {
		resizeByRatio(value / multSpeed);
		multSpeed = value;
		//trace('fuck cock');
		return value;
	}

	public function resizeByRatio(ratio:Float) //haha funny twitter shit
	{
		if(isSustainNote && !animation.curAnim.name.endsWith('end'))
		{
			scale.y *= ratio;
			updateHitbox();
		}
	}

	private function set_texture(value:String):String {
		if(texture != value) {
			reloadNote('', value);
		}
		texture = value;
		return value;
	}



	private function set_noteType(value:String):String {
		noteSplashTexture = PlayState.SONG.splashSkin;

		if (noteData > -1 && noteData < ClientPrefs.arrowHSV.length && ClientPrefs.enableColorShader)
		{
			colorSwap.hue = ClientPrefs.arrowHSV[noteData][0] / 360;
			colorSwap.saturation = ClientPrefs.arrowHSV[noteData][1] / 100;
			colorSwap.brightness = ClientPrefs.arrowHSV[noteData][2] / 100;
		}


		if(noteData > -1 && noteType != value) {
			switch(value) {
				case 'Hurt Note':
					ignoreNote = mustPress;
					reloadNote('HURT');
					noteSplashTexture = 'HURTnoteSplashes';
					colorSwap.hue = 0;
					colorSwap.saturation = 0;
					colorSwap.brightness = 0;
					lowPriority = true;

					if(isSustainNote) {
						missHealth = 0.1;
					} else {
						missHealth = 0.3;
					}
					hitCausesMiss = true;
				case 'phone':
					reloadNote('PHONE');
					colorSwap.hue = 0;
					phone = true;
					colorSwap.saturation = 0;
					colorSwap.brightness = 0;
				case 'Alt Animation':
					animSuffix = '-alt';
				case 'No Animation':
					noAnimation = true;
					noMissAnimation = true;
				case 'GF Sing':
					gfNote = true;
						case 'eggnote':
					eggNote = true;
										case 'dave':
					dave = true;
											case 'badai':
					badai = true;
											case 'bamburg':
					bamburg = true;
			}
			noteType = value;
		}
		if (ClientPrefs.enableColorShader)
		{
		noteSplashHue = colorSwap.hue;
		noteSplashSat = colorSwap.saturation;
		noteSplashBrt = colorSwap.brightness;
		}
		return value;
	}

	public function new(strumTime:Float, noteData:Int, ?prevNote:Note, ?sustainNote:Bool = false, ?inEditor:Bool = false, ?charSkin:String = null, noteStyle:String = "normal", ?musthit:Bool = true)
	{
		super();

		var beat = Conductor.getBeatInMeasure(strumTime);
		this.quantTexture = Note.getQuant(beat);

		if (!inEditor && ClientPrefs.getGameplaySetting('randomcharts', false)) {
			noteData = FlxG.random.int(0,3);
			if (sustainNote && prevNote != null) {
				noteData = prevNote.noteData;
			}
		}

		if (!inEditor && ClientPrefs.getGameplaySetting('mirrorcharts', false)) {
			noteData = Std.parseInt(Std.string(Math.abs(Std.parseFloat(Std.string(noteData-3)))));
			/*
			if (noteData == 0) {
				noteData = 3;
			} else if (noteData == 1) {
				noteData = 2;
			} else if (noteData == 2) {
				noteData = 1;
			} else if (noteData == 3) {
				noteData = 0;
			}
			*/
		}

		if (prevNote == null)
			prevNote = this;

		this.prevNote = prevNote;
		isSustainNote = sustainNote;
		this.inEditor = inEditor;
		this.charSkin = charSkin;

		x += (ClientPrefs.middleScroll ? PlayState.STRUM_X_MIDDLESCROLL : PlayState.STRUM_X) + 50;
		// MAKE SURE ITS DEFINITELY OFF SCREEN?
		y -= 2000;
		this.strumTime = strumTime;
		if(!inEditor) this.strumTime += ClientPrefs.noteOffset;

		this.noteData = noteData;
		fuckerStyle = noteStyle;


		if (((CharactersWith3D.contains(PlayState.dadChar) && !musthit) || (CharactersWith3D.contains(PlayState.bfChar) && musthit)) || ((CharactersWith3D.contains(PlayState.SONG.player2) || CharactersWith3D.contains(PlayState.SONG.player1)) && ((this.strumTime / 50) % 20 > 10) && !sustainNote))
		{
			frames = Paths.getSparrowAtlas('NOTE_assets_3D');

			animation.addByPrefix('greenScroll', 'green0');
			animation.addByPrefix('redScroll', 'red0');
			animation.addByPrefix('blueScroll', 'blue0');
			animation.addByPrefix('purpleScroll', 'purple0');

			animation.addByPrefix('purpleholdend', 'pruple end hold');
			animation.addByPrefix('greenholdend', 'green hold end');
			animation.addByPrefix('redholdend', 'red hold end');
			animation.addByPrefix('blueholdend', 'blue hold end');

			animation.addByPrefix('purplehold', 'purple hold piece');
			animation.addByPrefix('greenhold', 'green hold piece');
			animation.addByPrefix('redhold', 'red hold piece');
			animation.addByPrefix('bluehold', 'blue hold piece');

			is3dNote = true;
		}

		if(noteData > -1) {
			texture = '';
			colorSwap = new ColorSwap();
			shader = colorSwap.shader;
if (noteData < ClientPrefs.arrowHSV.length) //the notedata check prevents a null object reference when loading ek lua charts
					{
						colorSwap.hue = ClientPrefs.arrowHSV[noteData][0] / 360;
						colorSwap.saturation = ClientPrefs.arrowHSV[noteData][1] / 100;
						colorSwap.brightness = ClientPrefs.arrowHSV[noteData][2] / 100;
					}

			if (ClientPrefs.colorQuants)
			{
					colorSwap = new ColorSwap();
					shader = colorSwap.shader;

				if (ClientPrefs.colorQuants)
				{
					if (PlayState.instance != null) {
 						if (!mustPress) !PlayState.opponentChart ? this.shader = new ColoredNoteShader(PlayState.instance.dad.healthColorArray[0], PlayState.instance.dad.healthColorArray[1], PlayState.instance.dad.healthColorArray[2], false, 10) : this.shader = new ColoredNoteShader(PlayState.instance.boyfriend.healthColorArray[0], PlayState.instance.boyfriend.healthColorArray[1], PlayState.instance.boyfriend.healthColorArray[2], false, 10);
						if (mustPress) {
							!PlayState.opponentChart ? this.shader = new ColoredNoteShader(PlayState.instance.boyfriend.healthColorArray[0], PlayState.instance.boyfriend.healthColorArray[1], PlayState.instance.boyfriend.healthColorArray[2], false, 10) : this.shader = new ColoredNoteShader(PlayState.instance.dad.healthColorArray[0], PlayState.instance.dad.healthColorArray[1], PlayState.instance.dad.healthColorArray[2], false, 10);
						}
						if (gfNote) {
						if (PlayState.instance.gf != null) this.shader = new ColoredNoteShader(PlayState.instance.gf.healthColorArray[0], PlayState.instance.gf.healthColorArray[1], PlayState.instance.gf.healthColorArray[2], false, 10);
						}
						if (eggNote) {
						if (PlayState.instance.egg != null) this.shader = new ColoredNoteShader(PlayState.instance.egg.healthColorArray[0], PlayState.instance.egg.healthColorArray[1], PlayState.instance.egg.healthColorArray[2], false, 10);
						}
												if (dave) {
						if (PlayState.instance.dave != null) this.shader = new ColoredNoteShader(PlayState.instance.dave.healthColorArray[0], PlayState.instance.dave.healthColorArray[1], PlayState.instance.dave.healthColorArray[2], false, 10);
						}
												if (badai) {
						if (PlayState.instance.badai != null) this.shader = new ColoredNoteShader(PlayState.instance.badai.healthColorArray[0], PlayState.instance.badai.healthColorArray[1], PlayState.instance.badai.healthColorArray[2], false, 10);
						}
												if (bamburg) {
						if (PlayState.instance.bamburg != null) this.shader = new ColoredNoteShader(PlayState.instance.bamburg.healthColorArray[0], PlayState.instance.bamburg.healthColorArray[1], PlayState.instance.bamburg.healthColorArray[2], false, 10);
						}

					}
				}
			}

			x += swagWidth * (noteData);
			if(!isSustainNote && noteData > -1 && noteData < 4) { //Doing this 'if' check to fix the warnings on Senpai songs
				var animToPlay:String = '';
				switch (noteData % 4)
				{
					case 0:
						animToPlay = 'purple';
					case 1:
						animToPlay = 'blue';
					case 2:
						animToPlay = 'green';
					case 3:
						animToPlay = 'red';
				}
				animation.play(animToPlay + 'Scroll');
			}
		}

		// trace(prevNote);

		if(prevNote!=null)
			prevNote.nextNote = this;

		if (isSustainNote && prevNote != null)
		{
			quantTexture = prevNote.quantTexture;
			alpha = 0.6;
			multAlpha = 0.6;
			hitsoundDisabled = true;
			if(ClientPrefs.downScroll) flipY = true;

			offsetX += width / 2;
			copyAngle = false;

				if (ClientPrefs.enableColorShader)
				{
				colorSwap.hue = prevNote.colorSwap.hue;
				colorSwap.saturation = prevNote.colorSwap.saturation;
				colorSwap.brightness = prevNote.colorSwap.brightness;
				}

			switch (noteData % 4)
			{
				case 0:
					animation.play('purpleholdend');
				case 1:
					animation.play('blueholdend');
				case 2:
					animation.play('greenholdend');
				case 3:
					animation.play('redholdend');
			}


			

			updateHitbox();

			offsetX -= width / 2;

			if (PlayState.isPixelStage)
				offsetX += 30;

			if (prevNote.isSustainNote)
			{
				switch (prevNote.noteData % 4)
				{
					case 0:
						prevNote.animation.play('purplehold');
					case 1:
						prevNote.animation.play('bluehold');
					case 2:
						prevNote.animation.play('greenhold');
					case 3:
						prevNote.animation.play('redhold');
				}

				prevNote.scale.y *= Conductor.stepCrochet / 100 * 1.05;
				if(PlayState.instance != null)
				{
					prevNote.scale.y *= PlayState.instance.songSpeed;
				}

				if(PlayState.isPixelStage) {
					prevNote.scale.y *= 1.19;
					prevNote.scale.y *= (6 / height); //Auto adjust note size
				}
				prevNote.updateHitbox();
				// prevNote.setGraphicSize();
			}

			if(PlayState.isPixelStage) {
				scale.y *= PlayState.daPixelZoom;
				updateHitbox();
			}
		} else if(!isSustainNote) {
			earlyHitMult = 1;
		}
		x += offsetX;

	}

		public static function getQuant(beat:Float){
		var row = Conductor.beatToNoteRow(beat);
		for(data in quants){
			if(row%(Conductor.ROWS_PER_MEASURE/data) == 0){
				return data;
			}
		}
		return quants[quants.length-1]; // invalid
	}



	var lastNoteOffsetXForPixelAutoAdjusting:Float = 0;
	var lastNoteScaleToo:Float = 1;
	public var originalHeightForCalcs:Float = 6;
	function reloadNote(?prefix:String = '', ?texture:String = '', ?suffix:String = '') {
		if(prefix == null) prefix = '';
		if(texture == null) texture = '';
		if(suffix == null) suffix = '';

		var skin:String = texture;
		if(texture.length < 1) {
			skin = PlayState.SONG.arrowSkin;
			if(skin == null || skin.length < 1) {
				skin = 'NOTE_assets';
				if (prefix == '') {
					if(ClientPrefs.noteSkinSettings == 'Clasic') {
						skin = 'NOTE_assets';
					} else if (ClientPrefs.noteSkinSettings == 'Circle') {
						skin = 'NOTE_assets_circle';
					} else {
						skin = 'NOTE_assets';// for preventing crashes
					}
				}
			}
		}

		if (charSkin != null && (prefix == '')) {
			skin = charSkin;
		}

		var animName:String = null;
		if(animation.curAnim != null) {
			animName = animation.curAnim.name;
		}

		var arraySkin:Array<String> = skin.split('/');
		arraySkin[arraySkin.length-1] = prefix + arraySkin[arraySkin.length-1] + suffix;

		var lastScaleY:Float = scale.y;
		var blahblah:String = arraySkin.join('/');
		if(PlayState.isPixelStage) {
			if(isSustainNote) {
				loadGraphic(Paths.image('pixelUI/' + blahblah + 'ENDS'));
				width = width / 4;
				height = height / 2;
				originalHeightForCalcs = height;
				loadGraphic(Paths.image('pixelUI/' + blahblah + 'ENDS'), true, Math.floor(width), Math.floor(height));
			} else {
				loadGraphic(Paths.image('pixelUI/' + blahblah));
				width = width / 4;
				height = height / 5;
				loadGraphic(Paths.image('pixelUI/' + blahblah), true, Math.floor(width), Math.floor(height));
			}
			setGraphicSize(Std.int(width * PlayState.daPixelZoom));
			loadPixelNoteAnims();
			antialiasing = false;

			if(isSustainNote) {
				offsetX += lastNoteOffsetXForPixelAutoAdjusting;
				lastNoteOffsetXForPixelAutoAdjusting = (width - 7) * (PlayState.daPixelZoom / 2);
				offsetX -= lastNoteOffsetXForPixelAutoAdjusting;

				/*if(animName != null && !animName.endsWith('end'))
				{
					lastScaleY /= lastNoteScaleToo;
					lastNoteScaleToo = (6 / height);
					lastScaleY *= lastNoteScaleToo;
				}*/
			}
		} else {
			frames = Paths.getSparrowAtlas(blahblah);
			loadNoteAnims();
			antialiasing = ClientPrefs.globalAntialiasing;
		}
		if(isSustainNote) {
			scale.y = lastScaleY;
		}
		updateHitbox();

		if(animName != null)
			animation.play(animName, true);

		if(inEditor) {
			setGraphicSize(ChartingState.GRID_SIZE, ChartingState.GRID_SIZE);
			updateHitbox();
		}
	}

	public function globalReloadNote(?prefix:String = '', ?texture:String = '', ?suffix:String = ''){
		reloadNote(prefix, texture, suffix); // LOOOOOOOOOOOOOOL TOP 10 0 IQ MOVES
	}



	function loadNoteAnims() {
		animation.addByPrefix('greenScroll', 'green0');
		animation.addByPrefix('redScroll', 'red0');
		animation.addByPrefix('blueScroll', 'blue0');
		animation.addByPrefix('purpleScroll', 'purple0');

			

		if (isSustainNote)
		{
			animation.addByPrefix('purpleholdend', 'pruple end hold');
			animation.addByPrefix('greenholdend', 'green hold end');
			animation.addByPrefix('redholdend', 'red hold end');
			animation.addByPrefix('blueholdend', 'blue hold end');

			animation.addByPrefix('purplehold', 'purple hold piece');
			animation.addByPrefix('greenhold', 'green hold piece');
			animation.addByPrefix('redhold', 'red hold piece');
			animation.addByPrefix('bluehold', 'blue hold piece');
		}

		setGraphicSize(Std.int(width * 0.7));
		updateHitbox();
	}

	public function globalLoadNoteAnims(){
		loadNoteAnims(); // LOOOOOOOOOOOOOOL TOP 10 0 IQ MOVES
	}

	function loadPixelNoteAnims() {
		if(isSustainNote) {
			animation.add('purpleholdend', [PURP_NOTE + 4]);
			animation.add('greenholdend', [GREEN_NOTE + 4]);
			animation.add('redholdend', [RED_NOTE + 4]);
			animation.add('blueholdend', [BLUE_NOTE + 4]);

			animation.add('purplehold', [PURP_NOTE]);
			animation.add('greenhold', [GREEN_NOTE]);
			animation.add('redhold', [RED_NOTE]);
			animation.add('bluehold', [BLUE_NOTE]);
		} else {
			animation.add('greenScroll', [GREEN_NOTE + 4]);
			animation.add('redScroll', [RED_NOTE + 4]);
			animation.add('blueScroll', [BLUE_NOTE + 4]);
			animation.add('purpleScroll', [PURP_NOTE + 4]);
		}
	}

				public function GoToStrum(strum:StrumNote)
	{
		x = strum.x + noteOffset;
		alpha = strum.alpha * alphaMult;
	}

	public function updateRGBColors() {
        	if (Std.isOfType(this.shader, ColoredNoteShader))
		{
			if (mustPress)
	    			!PlayState.opponentChart ? cast(this.shader, ColoredNoteShader).setColors(PlayState.instance.boyfriend.healthColorArray[0], PlayState.instance.boyfriend.healthColorArray[1], PlayState.instance.boyfriend.healthColorArray[2]) : cast(this.shader, ColoredNoteShader).setColors(PlayState.instance.dad.healthColorArray[0], PlayState.instance.dad.healthColorArray[1], PlayState.instance.dad.healthColorArray[2]);
	    		else if (!eggNote) 
				!PlayState.opponentChart ? cast(this.shader, ColoredNoteShader).setColors(PlayState.instance.dad.healthColorArray[0], PlayState.instance.dad.healthColorArray[1], PlayState.instance.dad.healthColorArray[2]) : cast(this.shader, ColoredNoteShader).setColors(PlayState.instance.boyfriend.healthColorArray[0], PlayState.instance.boyfriend.healthColorArray[1], PlayState.instance.boyfriend.healthColorArray[2]);
			    else if (eggNote && PlayState.instance.egg != null) cast(this.shader, ColoredNoteShader).setColors(PlayState.instance.egg.healthColorArray[0], PlayState.instance.egg.healthColorArray[1], PlayState.instance.egg.healthColorArray[2]);
				
		}
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);

				if (MyStrum != null)
		{
			GoToStrum(MyStrum);
		}

		if (mustPress)
		{
			// ok river
			if (strumTime > Conductor.songPosition - (Conductor.safeZoneOffset * lateHitMult)
				&& strumTime < Conductor.songPosition + (Conductor.safeZoneOffset * earlyHitMult))
				canBeHit = true;
			else
				canBeHit = false;

			if (strumTime < Conductor.songPosition - Conductor.safeZoneOffset && !wasGoodHit)
				tooLate = true;
		}
		else
		{
			canBeHit = false;

			if (strumTime < Conductor.songPosition + (Conductor.safeZoneOffset * earlyHitMult))
			{
				if((isSustainNote && prevNote.wasGoodHit) || strumTime <= Conductor.songPosition)
					wasGoodHit = true;
			}
		}



		if (tooLate && !inEditor)
		{
			if (alpha > 0.3)
				alpha = 0.3;
		}
	}
}
