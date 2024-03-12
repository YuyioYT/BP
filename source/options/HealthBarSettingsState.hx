package options;

class HealthBarSettingsState extends BaseOptionsMenu
{
	public function new()
	{
		title = 'Health Bar';
		rpcTitle = 'Health Bar Settings Menu'; //for Discord Rich Presence
		

		var option:Option = new Option('Health Bar Overlay:',
		"What should the Health bar Overlay display?",
		'healthBarOverlay',
		'string',
		['Purgatory','Dab','Animated','Disabled']);
		addOption(option);

		var option:Option = new Option('Original Time bar colors',
		'His name say all.',
		'originalhealthbarColor',
		'bool');
		addOption(option);

		var option:Option = new Option('Health Bar Opacity',
			'How much transparent should the health bar and icons be.',
			'healthBarAlpha',
			'percent');
		option.scrollSpeed = 1.6;
		option.minValue = 0.0;
		option.maxValue = 1;
		option.changeValue = 0.1;
		option.decimals = 1;
		addOption(option);

		super();
	}
}
