package objects;

import flixel.group.FlxSpriteGroup;
import flixel.group.FlxSpriteGroup.FlxTypedSpriteGroup;
import flixel.FlxObject;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.math.FlxMath;


class CreditsPopUp extends FlxSpriteGroup
{
	public var bg:FlxSprite;
	public var bgHeading:FlxSprite;

	public var dad:Character = null;
	public var funnyText:FlxText;
	public var funnyIcon:FlxSprite;
	var iconOffset:Float;
	var songCreator:String;

	public function new(x:Float, y:Float)
		{
			super(x, y);

			switch (PlayState.SONG.song.toLowerCase())
			{
				case 'shattered'|'triple threat':
					songCreator = 'Randomness';
				case 'fallowed':
					songCreator = 'Randomness and Bezieanims';
				case 'reality breaking'|'reality breaking old'|'reality breaking oldest'|'technology'|'annihilation':
					songCreator = 'Pyramix';
				case 'rebound'| 'disposition'|'disposition old'|'disposition oldest'|'roundabout'|'rsod'|'rsod old'|'rsod oldest'|'punge'|'dissertation':
					songCreator = 'Shredboi';
				case 'upheaval':
					songCreator = 'Randomness , Bezie';
				case 'rascal'|'double act'|'beefin\'':
					songCreator = 'Villezen';
				case 'delivery':
					songCreator = 'Tsuchi';
				case 'acquaintance':
					songCreator = 'Aadsta';
				case 'devastation':
					songCreator = 'TangerineReal';
				case 'tyranny'|'cataclysmic':
					songCreator = 'kae';
				case 'antagonism 12 min':
					songCreator = 'Randomness, Bokvae, Aadsta and Villezen';
				case 'fast food':
					songCreator = 'Randy the slope';
				case 'defraud':
					songCreator = 'Te Russextreme';
				case 'brain freeze':
					songCreator = 'Emperor yami';
			}

			funnyText = new FlxText(1, 0, 650,"Song By " + songCreator, 16); // Initialize funnyText
			funnyText.setFormat('fsb.otf', 30, FlxColor.WHITE, FlxTextAlign.LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
			funnyText.borderSize = 2;
			funnyText.antialiasing = true;
	
			bg = new FlxSprite().makeGraphic(460, 50,FlxColor.WHITE);
			bg.antialiasing = ClientPrefs.data.antialiasing;
			add(bg);
			rescaleBG();

			
			switch (PlayState.SONG.song.toLowerCase())
			{
				case 'shattered'|'triple threat'|'defraud':
					bg.color = FlxColor.GREEN;
				case 'fallowed':
					bg.color = FlxColor.RED;
				case 'fast food'|'brain freeze'|'devastation'|'delivery'|'rascal':
					bg.color = FlxColor.ORANGE;
				case 'rebound'| 'disposition'|'disposition old'|'disposition oldest'|'upheaval'|'dissertation'|'reality breaking'|'reality breaking old'|'reality breaking oldest':
					bg.color = FlxColor.WHITE;
				case 'roundabout'|'technology':
					bg.color = FlxColor.BLUE;
				case 'acquaintance':
					bg.color = FlxColor.PURPLE;
				case 'antagonism 12 min'|'rsod'|'rsod old'|'rsod oldest'|'punge'|'tyranny'|'cataclysmic':
					bg.color = FlxColor.fromRGB(170,0,0);
				case 'beefin\''|'double act':
					bg.color = FlxColor.YELLOW;
				case 'annihilation':
					bg.color = FlxColor.BLACK;
			}
	
			add(funnyText); // Add funnyText after initialization
	
			var yValues = CoolUtil.getMinAndMax(bg.height, funnyText.height);
			funnyText.y = funnyText.y + ((yValues[0] - yValues[1]) / 2);

		}
	function rescaleBG()
		{
			bg.setGraphicSize(Std.int((funnyText.textField.textWidth + 0.7) + 0.5), Std.int(funnyText.height + 0.5));
			bg.updateHitbox();
		}
}