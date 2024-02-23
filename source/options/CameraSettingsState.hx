package options;

class CameraSettingsState extends BaseOptionsMenu
{
	public function new()
	{
		title = 'Camera';
		rpcTitle = 'Camera Settings Menu'; //for Discord Rich Presence

		var option:Option = new Option('Camera Zooms',
		"If unchecked, the camera won't zoom in on a beat hit.",
		'camZooms',
		'bool');
		addOption(option);

		var option:Option = new Option('Move Camera on countdown',
		"If checked, you get a Move camera when start de countdown.",
		'moveCameraonCountdown',
		'bool');
	    addOption(option);

		var option:Option = new Option('Follow Cam On Note Hit',
		"If checked, you get a movement on hit an arrow.",
		'followarrow',
		'bool');
	    addOption(option);
		
		super();
	}
}
