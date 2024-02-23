package states;

class GalleryState extends MusicBeatState
{
	var gallerySprite:Array<String> = ['antagonism', 'antagonism2', 'bp', 'enimatic','expunged','gates to hell' , 'Reality breaker','Rsod'];
	private var grpgallerySprites:FlxTypedSpriteGroup<FlxSprite>;
	var curSelected:Int;
	var screenWidth:Int = FlxG.width;
	var screenHeight:Int = FlxG.height;

	override function create()
	{
		super.create();
		
		grpgallerySprites = new FlxTypedSpriteGroup<FlxSprite>();
		add(grpgallerySprites);

		for (i in 0...gallerySprite.length) {

			var gallerySprite:FlxSprite = new FlxSprite(300, 0).loadGraphic(Paths.image('gallery/' + (gallerySprite[i])));
			gallerySprite.scale.set(screenWidth / gallerySprite.width,screenHeight / gallerySprite.height);
			gallerySprite.screenCenter();
			gallerySprite.antialiasing = ClientPrefs.data.antialiasing;
			gallerySprite.x += (0);
			gallerySprite.y += (0);
			grpgallerySprites.add(gallerySprite);
        }

		changeSelection();
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);

		if (controls.UI_LEFT_P) {
			changeSelection(-1);
		}
		if (controls.UI_RIGHT_P) {
			changeSelection(1);
		}

		if (controls.BACK)
			{
				FlxG.sound.play(Paths.sound('cancelMenu'));
				MusicBeatState.switchState(new MainMenuState());
			}
	}

	function changeSelection(change:Int = 0) {
        curSelected += change;
        if (curSelected < 0)
            curSelected = gallerySprite.length - 1;
        if (curSelected >= gallerySprite.length)
            curSelected = 0;

		for (i in 0...grpgallerySprites.members.length) {
			var item:FlxSprite = grpgallerySprites.members[i];
		
			if (i == curSelected) {
				item.alpha = 1;
			} else {
				item.alpha = 0;
			}
		}
	}
}