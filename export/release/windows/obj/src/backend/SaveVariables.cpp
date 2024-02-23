#include <hxcpp.h>

#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c0fe648b9977b22a_10_new,"backend.SaveVariables","new",0xcf476ab2,"backend.SaveVariables.new","backend/ClientPrefs.hx",10,0x8f1e64f4)
static const int _hx_array_data_d0f3e9c0_1[] = {
	(int)-1935617,(int)-1537,(int)-10485619,
};
static const int _hx_array_data_d0f3e9c0_2[] = {
	(int)-12727553,(int)-720897,(int)-16764832,
};
static const int _hx_array_data_d0f3e9c0_3[] = {
	(int)-9313536,(int)-589850,(int)-16764672,
};
static const int _hx_array_data_d0f3e9c0_4[] = {
	(int)-30642,(int)-1291,(int)-9699328,
};
static const int _hx_array_data_d0f3e9c0_5[] = {
	(int)-4043879,(int)-1,(int)-12837034,
};
static const int _hx_array_data_d0f3e9c0_6[] = {
	(int)-16711681,(int)-1,(int)-15383881,
};
static const int _hx_array_data_d0f3e9c0_7[] = {
	(int)-15533563,(int)-1,(int)-16104377,
};
static const int _hx_array_data_d0f3e9c0_8[] = {
	(int)-444097,(int)-1,(int)-10153928,
};
static const int _hx_array_data_d0f3e9c0_9[] = {
	(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,
};
namespace backend{

void SaveVariables_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_c0fe648b9977b22a_10_new)
HXLINE( 111)		this->arrowRGBPixel = ::Array_obj< ::Dynamic>::__new(4)->init(0,::Array_obj< int >::fromData( _hx_array_data_d0f3e9c0_1,3))->init(1,::Array_obj< int >::fromData( _hx_array_data_d0f3e9c0_2,3))->init(2,::Array_obj< int >::fromData( _hx_array_data_d0f3e9c0_3,3))->init(3,::Array_obj< int >::fromData( _hx_array_data_d0f3e9c0_4,3));
HXLINE( 106)		this->arrowRGB = ::Array_obj< ::Dynamic>::__new(4)->init(0,::Array_obj< int >::fromData( _hx_array_data_d0f3e9c0_5,3))->init(1,::Array_obj< int >::fromData( _hx_array_data_d0f3e9c0_6,3))->init(2,::Array_obj< int >::fromData( _hx_array_data_d0f3e9c0_7,3))->init(3,::Array_obj< int >::fromData( _hx_array_data_d0f3e9c0_8,3));
HXLINE( 105)		this->discordRPC = true;
HXLINE( 104)		this->safeFrames = ((Float)10);
HXLINE( 103)		this->badWindow = 135;
HXLINE( 102)		this->goodWindow = 90;
HXLINE( 101)		this->sickWindow = 45;
HXLINE( 100)		this->perfectWindow = 20;
HXLINE(  99)		this->ratingOffset = 0;
HXLINE(  98)		this->comboOffset = ::Array_obj< int >::fromData( _hx_array_data_d0f3e9c0_9,6);
HXLINE(  76)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  76)		_g->set(HX_("scrollspeed",5a,70,19,38),((Float)1.0));
HXDLIN(  76)		_g->set(HX_("scrolltype",47,55,ef,1f),HX_("multiplicative",96,7a,3f,fa));
HXDLIN(  76)		_g->set(HX_("songspeed",92,6f,b6,1d),((Float)1.0));
HXDLIN(  76)		_g->set(HX_("healthgain",1b,97,1b,16),((Float)1.0));
HXDLIN(  76)		_g->set(HX_("healthloss",7f,50,74,19),((Float)1.0));
HXDLIN(  76)		_g->set(HX_("instakill",f9,72,23,49),false);
HXDLIN(  76)		_g->set(HX_("practice",bb,00,e7,a0),false);
HXDLIN(  76)		_g->set(HX_("botplay",7b,fb,a9,61),false);
HXDLIN(  76)		_g->set(HX_("opponentplay",11,7a,4c,86),false);
HXDLIN(  76)		this->gameplaySettings = _g;
HXLINE(  75)		this->comboStacking = true;
HXLINE(  74)		this->checkForUpdates = true;
HXLINE(  73)		this->pauseMusic = HX_("Tea Time",9d,d4,cb,99);
HXLINE(  72)		this->hitsoundVolume = ((Float)0);
HXLINE(  71)		this->healthBarOverlay = HX_("Purgatory",89,a7,af,e9);
HXLINE(  70)		this->healthBarAlpha = ((Float)1);
HXLINE(  69)		this->noReset = false;
HXLINE(  68)		this->removePerfs = false;
HXLINE(  67)		this->hideJudgements = false;
HXLINE(  66)		this->Luashaders = true;
HXLINE(  65)		this->engineVersion = false;
HXLINE(  64)		this->memoryGB = false;
HXLINE(  63)		this->FullScreen = false;
HXLINE(  62)		this->totalMemory = false;
HXLINE(  61)		this->memory = false;
HXLINE(  60)		this->totalFPS = false;
HXLINE(  59)		this->songWatermark = false;
HXLINE(  58)		this->rainbowFPS = false;
HXLINE(  57)		this->scoreZoom = true;
HXLINE(  56)		this->timeBarType = HX_("Time Left",fa,08,f2,62);
HXLINE(  55)		this->ghostTapping = true;
HXLINE(  54)		this->noteOffset = 0;
HXLINE(  53)		this->hideHud = false;
HXLINE(  52)		this->timebarBGColor = HX_("Black",9f,45,1f,48);
HXLINE(  51)		this->camZooms = true;
HXLINE(  50)		this->originalhealthbarColor = false;
HXLINE(  49)		this->framerate = 144;
HXLINE(  48)		this->cacheOnGPU = false;
HXLINE(  47)		this->shaders = true;
HXLINE(  46)		this->lowQuality = false;
HXLINE(  45)		this->Lenguage = HX_("English",10,8f,83,c6);
HXLINE(  44)		this->percentDecimals = 0;
HXLINE(  43)		this->songPercentage = false;
HXLINE(  42)		this->hideCombo = false;
HXLINE(  41)		this->hideMisses = false;
HXLINE(  40)		this->hideComboBreaks = false;
HXLINE(  39)		this->RatingsOnGame = false;
HXLINE(  38)		this->SpinonStart = false;
HXLINE(  37)		this->moveCameraonCountdown = false;
HXLINE(  36)		this->hidetotalNotes = false;
HXLINE(  35)		this->hideMaxNps = false;
HXLINE(  34)		this->MotionBlur = true;
HXLINE(  33)		this->blockedGlitch = true;
HXLINE(  32)		this->bgGlitch = true;
HXLINE(  31)		this->wiggle = true;
HXLINE(  30)		this->eyesores = true;
HXLINE(  29)		this->blur = true;
HXLINE(  28)		this->BlackScreen = true;
HXLINE(  27)		this->ChromaticAberration = false;
HXLINE(  26)		this->hideNps = false;
HXLINE(  25)		this->timebarShowSpeed = false;
HXLINE(  24)		this->songLoading = false;
HXLINE(  23)		this->followarrow = true;
HXLINE(  22)		this->ColorBarBG = HX_("Disable",c8,91,a9,7e);
HXLINE(  21)		this->ColorBar = HX_("Disable",c8,91,a9,7e);
HXLINE(  20)		this->splashAlpha = ((Float)0.6);
HXLINE(  19)		this->splashSkin = HX_("Psych",1b,19,6e,5c);
HXLINE(  18)		this->noteSkin = HX_("Default",a1,00,15,69);
HXLINE(  17)		this->antialiasing = true;
HXLINE(  16)		this->autoPause = true;
HXLINE(  15)		this->flashing = true;
HXLINE(  14)		this->showFPS = true;
HXLINE(  13)		this->opponentStrums = true;
HXLINE(  12)		this->middleScroll = false;
HXLINE(  11)		this->downScroll = false;
            	}

Dynamic SaveVariables_obj::__CreateEmpty() { return new SaveVariables_obj; }

void *SaveVariables_obj::_hx_vtable = 0;

Dynamic SaveVariables_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SaveVariables_obj > _hx_result = new SaveVariables_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SaveVariables_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x65c3166a;
}


::hx::ObjectPtr< SaveVariables_obj > SaveVariables_obj::__new() {
	::hx::ObjectPtr< SaveVariables_obj > __this = new SaveVariables_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SaveVariables_obj > SaveVariables_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SaveVariables_obj *__this = (SaveVariables_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SaveVariables_obj), true, "backend.SaveVariables"));
	*(void **)__this = SaveVariables_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SaveVariables_obj::SaveVariables_obj()
{
}

void SaveVariables_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SaveVariables);
	HX_MARK_MEMBER_NAME(downScroll,"downScroll");
	HX_MARK_MEMBER_NAME(middleScroll,"middleScroll");
	HX_MARK_MEMBER_NAME(opponentStrums,"opponentStrums");
	HX_MARK_MEMBER_NAME(showFPS,"showFPS");
	HX_MARK_MEMBER_NAME(flashing,"flashing");
	HX_MARK_MEMBER_NAME(autoPause,"autoPause");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(noteSkin,"noteSkin");
	HX_MARK_MEMBER_NAME(splashSkin,"splashSkin");
	HX_MARK_MEMBER_NAME(splashAlpha,"splashAlpha");
	HX_MARK_MEMBER_NAME(ColorBar,"ColorBar");
	HX_MARK_MEMBER_NAME(ColorBarBG,"ColorBarBG");
	HX_MARK_MEMBER_NAME(followarrow,"followarrow");
	HX_MARK_MEMBER_NAME(songLoading,"songLoading");
	HX_MARK_MEMBER_NAME(timebarShowSpeed,"timebarShowSpeed");
	HX_MARK_MEMBER_NAME(hideNps,"hideNps");
	HX_MARK_MEMBER_NAME(ChromaticAberration,"ChromaticAberration");
	HX_MARK_MEMBER_NAME(BlackScreen,"BlackScreen");
	HX_MARK_MEMBER_NAME(blur,"blur");
	HX_MARK_MEMBER_NAME(eyesores,"eyesores");
	HX_MARK_MEMBER_NAME(wiggle,"wiggle");
	HX_MARK_MEMBER_NAME(bgGlitch,"bgGlitch");
	HX_MARK_MEMBER_NAME(blockedGlitch,"blockedGlitch");
	HX_MARK_MEMBER_NAME(MotionBlur,"MotionBlur");
	HX_MARK_MEMBER_NAME(hideMaxNps,"hideMaxNps");
	HX_MARK_MEMBER_NAME(hidetotalNotes,"hidetotalNotes");
	HX_MARK_MEMBER_NAME(moveCameraonCountdown,"moveCameraonCountdown");
	HX_MARK_MEMBER_NAME(SpinonStart,"SpinonStart");
	HX_MARK_MEMBER_NAME(RatingsOnGame,"RatingsOnGame");
	HX_MARK_MEMBER_NAME(hideComboBreaks,"hideComboBreaks");
	HX_MARK_MEMBER_NAME(hideMisses,"hideMisses");
	HX_MARK_MEMBER_NAME(hideCombo,"hideCombo");
	HX_MARK_MEMBER_NAME(songPercentage,"songPercentage");
	HX_MARK_MEMBER_NAME(percentDecimals,"percentDecimals");
	HX_MARK_MEMBER_NAME(Lenguage,"Lenguage");
	HX_MARK_MEMBER_NAME(lowQuality,"lowQuality");
	HX_MARK_MEMBER_NAME(shaders,"shaders");
	HX_MARK_MEMBER_NAME(cacheOnGPU,"cacheOnGPU");
	HX_MARK_MEMBER_NAME(framerate,"framerate");
	HX_MARK_MEMBER_NAME(originalhealthbarColor,"originalhealthbarColor");
	HX_MARK_MEMBER_NAME(camZooms,"camZooms");
	HX_MARK_MEMBER_NAME(timebarBGColor,"timebarBGColor");
	HX_MARK_MEMBER_NAME(hideHud,"hideHud");
	HX_MARK_MEMBER_NAME(noteOffset,"noteOffset");
	HX_MARK_MEMBER_NAME(ghostTapping,"ghostTapping");
	HX_MARK_MEMBER_NAME(timeBarType,"timeBarType");
	HX_MARK_MEMBER_NAME(scoreZoom,"scoreZoom");
	HX_MARK_MEMBER_NAME(rainbowFPS,"rainbowFPS");
	HX_MARK_MEMBER_NAME(songWatermark,"songWatermark");
	HX_MARK_MEMBER_NAME(totalFPS,"totalFPS");
	HX_MARK_MEMBER_NAME(memory,"memory");
	HX_MARK_MEMBER_NAME(totalMemory,"totalMemory");
	HX_MARK_MEMBER_NAME(FullScreen,"FullScreen");
	HX_MARK_MEMBER_NAME(memoryGB,"memoryGB");
	HX_MARK_MEMBER_NAME(engineVersion,"engineVersion");
	HX_MARK_MEMBER_NAME(Luashaders,"Luashaders");
	HX_MARK_MEMBER_NAME(hideJudgements,"hideJudgements");
	HX_MARK_MEMBER_NAME(removePerfs,"removePerfs");
	HX_MARK_MEMBER_NAME(noReset,"noReset");
	HX_MARK_MEMBER_NAME(healthBarAlpha,"healthBarAlpha");
	HX_MARK_MEMBER_NAME(healthBarOverlay,"healthBarOverlay");
	HX_MARK_MEMBER_NAME(hitsoundVolume,"hitsoundVolume");
	HX_MARK_MEMBER_NAME(pauseMusic,"pauseMusic");
	HX_MARK_MEMBER_NAME(checkForUpdates,"checkForUpdates");
	HX_MARK_MEMBER_NAME(comboStacking,"comboStacking");
	HX_MARK_MEMBER_NAME(gameplaySettings,"gameplaySettings");
	HX_MARK_MEMBER_NAME(comboOffset,"comboOffset");
	HX_MARK_MEMBER_NAME(ratingOffset,"ratingOffset");
	HX_MARK_MEMBER_NAME(perfectWindow,"perfectWindow");
	HX_MARK_MEMBER_NAME(sickWindow,"sickWindow");
	HX_MARK_MEMBER_NAME(goodWindow,"goodWindow");
	HX_MARK_MEMBER_NAME(badWindow,"badWindow");
	HX_MARK_MEMBER_NAME(safeFrames,"safeFrames");
	HX_MARK_MEMBER_NAME(discordRPC,"discordRPC");
	HX_MARK_MEMBER_NAME(arrowRGB,"arrowRGB");
	HX_MARK_MEMBER_NAME(arrowRGBPixel,"arrowRGBPixel");
	HX_MARK_END_CLASS();
}

void SaveVariables_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(downScroll,"downScroll");
	HX_VISIT_MEMBER_NAME(middleScroll,"middleScroll");
	HX_VISIT_MEMBER_NAME(opponentStrums,"opponentStrums");
	HX_VISIT_MEMBER_NAME(showFPS,"showFPS");
	HX_VISIT_MEMBER_NAME(flashing,"flashing");
	HX_VISIT_MEMBER_NAME(autoPause,"autoPause");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(noteSkin,"noteSkin");
	HX_VISIT_MEMBER_NAME(splashSkin,"splashSkin");
	HX_VISIT_MEMBER_NAME(splashAlpha,"splashAlpha");
	HX_VISIT_MEMBER_NAME(ColorBar,"ColorBar");
	HX_VISIT_MEMBER_NAME(ColorBarBG,"ColorBarBG");
	HX_VISIT_MEMBER_NAME(followarrow,"followarrow");
	HX_VISIT_MEMBER_NAME(songLoading,"songLoading");
	HX_VISIT_MEMBER_NAME(timebarShowSpeed,"timebarShowSpeed");
	HX_VISIT_MEMBER_NAME(hideNps,"hideNps");
	HX_VISIT_MEMBER_NAME(ChromaticAberration,"ChromaticAberration");
	HX_VISIT_MEMBER_NAME(BlackScreen,"BlackScreen");
	HX_VISIT_MEMBER_NAME(blur,"blur");
	HX_VISIT_MEMBER_NAME(eyesores,"eyesores");
	HX_VISIT_MEMBER_NAME(wiggle,"wiggle");
	HX_VISIT_MEMBER_NAME(bgGlitch,"bgGlitch");
	HX_VISIT_MEMBER_NAME(blockedGlitch,"blockedGlitch");
	HX_VISIT_MEMBER_NAME(MotionBlur,"MotionBlur");
	HX_VISIT_MEMBER_NAME(hideMaxNps,"hideMaxNps");
	HX_VISIT_MEMBER_NAME(hidetotalNotes,"hidetotalNotes");
	HX_VISIT_MEMBER_NAME(moveCameraonCountdown,"moveCameraonCountdown");
	HX_VISIT_MEMBER_NAME(SpinonStart,"SpinonStart");
	HX_VISIT_MEMBER_NAME(RatingsOnGame,"RatingsOnGame");
	HX_VISIT_MEMBER_NAME(hideComboBreaks,"hideComboBreaks");
	HX_VISIT_MEMBER_NAME(hideMisses,"hideMisses");
	HX_VISIT_MEMBER_NAME(hideCombo,"hideCombo");
	HX_VISIT_MEMBER_NAME(songPercentage,"songPercentage");
	HX_VISIT_MEMBER_NAME(percentDecimals,"percentDecimals");
	HX_VISIT_MEMBER_NAME(Lenguage,"Lenguage");
	HX_VISIT_MEMBER_NAME(lowQuality,"lowQuality");
	HX_VISIT_MEMBER_NAME(shaders,"shaders");
	HX_VISIT_MEMBER_NAME(cacheOnGPU,"cacheOnGPU");
	HX_VISIT_MEMBER_NAME(framerate,"framerate");
	HX_VISIT_MEMBER_NAME(originalhealthbarColor,"originalhealthbarColor");
	HX_VISIT_MEMBER_NAME(camZooms,"camZooms");
	HX_VISIT_MEMBER_NAME(timebarBGColor,"timebarBGColor");
	HX_VISIT_MEMBER_NAME(hideHud,"hideHud");
	HX_VISIT_MEMBER_NAME(noteOffset,"noteOffset");
	HX_VISIT_MEMBER_NAME(ghostTapping,"ghostTapping");
	HX_VISIT_MEMBER_NAME(timeBarType,"timeBarType");
	HX_VISIT_MEMBER_NAME(scoreZoom,"scoreZoom");
	HX_VISIT_MEMBER_NAME(rainbowFPS,"rainbowFPS");
	HX_VISIT_MEMBER_NAME(songWatermark,"songWatermark");
	HX_VISIT_MEMBER_NAME(totalFPS,"totalFPS");
	HX_VISIT_MEMBER_NAME(memory,"memory");
	HX_VISIT_MEMBER_NAME(totalMemory,"totalMemory");
	HX_VISIT_MEMBER_NAME(FullScreen,"FullScreen");
	HX_VISIT_MEMBER_NAME(memoryGB,"memoryGB");
	HX_VISIT_MEMBER_NAME(engineVersion,"engineVersion");
	HX_VISIT_MEMBER_NAME(Luashaders,"Luashaders");
	HX_VISIT_MEMBER_NAME(hideJudgements,"hideJudgements");
	HX_VISIT_MEMBER_NAME(removePerfs,"removePerfs");
	HX_VISIT_MEMBER_NAME(noReset,"noReset");
	HX_VISIT_MEMBER_NAME(healthBarAlpha,"healthBarAlpha");
	HX_VISIT_MEMBER_NAME(healthBarOverlay,"healthBarOverlay");
	HX_VISIT_MEMBER_NAME(hitsoundVolume,"hitsoundVolume");
	HX_VISIT_MEMBER_NAME(pauseMusic,"pauseMusic");
	HX_VISIT_MEMBER_NAME(checkForUpdates,"checkForUpdates");
	HX_VISIT_MEMBER_NAME(comboStacking,"comboStacking");
	HX_VISIT_MEMBER_NAME(gameplaySettings,"gameplaySettings");
	HX_VISIT_MEMBER_NAME(comboOffset,"comboOffset");
	HX_VISIT_MEMBER_NAME(ratingOffset,"ratingOffset");
	HX_VISIT_MEMBER_NAME(perfectWindow,"perfectWindow");
	HX_VISIT_MEMBER_NAME(sickWindow,"sickWindow");
	HX_VISIT_MEMBER_NAME(goodWindow,"goodWindow");
	HX_VISIT_MEMBER_NAME(badWindow,"badWindow");
	HX_VISIT_MEMBER_NAME(safeFrames,"safeFrames");
	HX_VISIT_MEMBER_NAME(discordRPC,"discordRPC");
	HX_VISIT_MEMBER_NAME(arrowRGB,"arrowRGB");
	HX_VISIT_MEMBER_NAME(arrowRGBPixel,"arrowRGBPixel");
}

::hx::Val SaveVariables_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"blur") ) { return ::hx::Val( blur ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"wiggle") ) { return ::hx::Val( wiggle ); }
		if (HX_FIELD_EQ(inName,"memory") ) { return ::hx::Val( memory ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"showFPS") ) { return ::hx::Val( showFPS ); }
		if (HX_FIELD_EQ(inName,"hideNps") ) { return ::hx::Val( hideNps ); }
		if (HX_FIELD_EQ(inName,"shaders") ) { return ::hx::Val( shaders ); }
		if (HX_FIELD_EQ(inName,"hideHud") ) { return ::hx::Val( hideHud ); }
		if (HX_FIELD_EQ(inName,"noReset") ) { return ::hx::Val( noReset ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"flashing") ) { return ::hx::Val( flashing ); }
		if (HX_FIELD_EQ(inName,"noteSkin") ) { return ::hx::Val( noteSkin ); }
		if (HX_FIELD_EQ(inName,"ColorBar") ) { return ::hx::Val( ColorBar ); }
		if (HX_FIELD_EQ(inName,"eyesores") ) { return ::hx::Val( eyesores ); }
		if (HX_FIELD_EQ(inName,"bgGlitch") ) { return ::hx::Val( bgGlitch ); }
		if (HX_FIELD_EQ(inName,"Lenguage") ) { return ::hx::Val( Lenguage ); }
		if (HX_FIELD_EQ(inName,"camZooms") ) { return ::hx::Val( camZooms ); }
		if (HX_FIELD_EQ(inName,"totalFPS") ) { return ::hx::Val( totalFPS ); }
		if (HX_FIELD_EQ(inName,"memoryGB") ) { return ::hx::Val( memoryGB ); }
		if (HX_FIELD_EQ(inName,"arrowRGB") ) { return ::hx::Val( arrowRGB ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoPause") ) { return ::hx::Val( autoPause ); }
		if (HX_FIELD_EQ(inName,"hideCombo") ) { return ::hx::Val( hideCombo ); }
		if (HX_FIELD_EQ(inName,"framerate") ) { return ::hx::Val( framerate ); }
		if (HX_FIELD_EQ(inName,"scoreZoom") ) { return ::hx::Val( scoreZoom ); }
		if (HX_FIELD_EQ(inName,"badWindow") ) { return ::hx::Val( badWindow ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"downScroll") ) { return ::hx::Val( downScroll ); }
		if (HX_FIELD_EQ(inName,"splashSkin") ) { return ::hx::Val( splashSkin ); }
		if (HX_FIELD_EQ(inName,"ColorBarBG") ) { return ::hx::Val( ColorBarBG ); }
		if (HX_FIELD_EQ(inName,"MotionBlur") ) { return ::hx::Val( MotionBlur ); }
		if (HX_FIELD_EQ(inName,"hideMaxNps") ) { return ::hx::Val( hideMaxNps ); }
		if (HX_FIELD_EQ(inName,"hideMisses") ) { return ::hx::Val( hideMisses ); }
		if (HX_FIELD_EQ(inName,"lowQuality") ) { return ::hx::Val( lowQuality ); }
		if (HX_FIELD_EQ(inName,"cacheOnGPU") ) { return ::hx::Val( cacheOnGPU ); }
		if (HX_FIELD_EQ(inName,"noteOffset") ) { return ::hx::Val( noteOffset ); }
		if (HX_FIELD_EQ(inName,"rainbowFPS") ) { return ::hx::Val( rainbowFPS ); }
		if (HX_FIELD_EQ(inName,"FullScreen") ) { return ::hx::Val( FullScreen ); }
		if (HX_FIELD_EQ(inName,"Luashaders") ) { return ::hx::Val( Luashaders ); }
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { return ::hx::Val( pauseMusic ); }
		if (HX_FIELD_EQ(inName,"sickWindow") ) { return ::hx::Val( sickWindow ); }
		if (HX_FIELD_EQ(inName,"goodWindow") ) { return ::hx::Val( goodWindow ); }
		if (HX_FIELD_EQ(inName,"safeFrames") ) { return ::hx::Val( safeFrames ); }
		if (HX_FIELD_EQ(inName,"discordRPC") ) { return ::hx::Val( discordRPC ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"splashAlpha") ) { return ::hx::Val( splashAlpha ); }
		if (HX_FIELD_EQ(inName,"followarrow") ) { return ::hx::Val( followarrow ); }
		if (HX_FIELD_EQ(inName,"songLoading") ) { return ::hx::Val( songLoading ); }
		if (HX_FIELD_EQ(inName,"BlackScreen") ) { return ::hx::Val( BlackScreen ); }
		if (HX_FIELD_EQ(inName,"SpinonStart") ) { return ::hx::Val( SpinonStart ); }
		if (HX_FIELD_EQ(inName,"timeBarType") ) { return ::hx::Val( timeBarType ); }
		if (HX_FIELD_EQ(inName,"totalMemory") ) { return ::hx::Val( totalMemory ); }
		if (HX_FIELD_EQ(inName,"removePerfs") ) { return ::hx::Val( removePerfs ); }
		if (HX_FIELD_EQ(inName,"comboOffset") ) { return ::hx::Val( comboOffset ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"middleScroll") ) { return ::hx::Val( middleScroll ); }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return ::hx::Val( antialiasing ); }
		if (HX_FIELD_EQ(inName,"ghostTapping") ) { return ::hx::Val( ghostTapping ); }
		if (HX_FIELD_EQ(inName,"ratingOffset") ) { return ::hx::Val( ratingOffset ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"blockedGlitch") ) { return ::hx::Val( blockedGlitch ); }
		if (HX_FIELD_EQ(inName,"RatingsOnGame") ) { return ::hx::Val( RatingsOnGame ); }
		if (HX_FIELD_EQ(inName,"songWatermark") ) { return ::hx::Val( songWatermark ); }
		if (HX_FIELD_EQ(inName,"engineVersion") ) { return ::hx::Val( engineVersion ); }
		if (HX_FIELD_EQ(inName,"comboStacking") ) { return ::hx::Val( comboStacking ); }
		if (HX_FIELD_EQ(inName,"perfectWindow") ) { return ::hx::Val( perfectWindow ); }
		if (HX_FIELD_EQ(inName,"arrowRGBPixel") ) { return ::hx::Val( arrowRGBPixel ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"opponentStrums") ) { return ::hx::Val( opponentStrums ); }
		if (HX_FIELD_EQ(inName,"hidetotalNotes") ) { return ::hx::Val( hidetotalNotes ); }
		if (HX_FIELD_EQ(inName,"songPercentage") ) { return ::hx::Val( songPercentage ); }
		if (HX_FIELD_EQ(inName,"timebarBGColor") ) { return ::hx::Val( timebarBGColor ); }
		if (HX_FIELD_EQ(inName,"hideJudgements") ) { return ::hx::Val( hideJudgements ); }
		if (HX_FIELD_EQ(inName,"healthBarAlpha") ) { return ::hx::Val( healthBarAlpha ); }
		if (HX_FIELD_EQ(inName,"hitsoundVolume") ) { return ::hx::Val( hitsoundVolume ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hideComboBreaks") ) { return ::hx::Val( hideComboBreaks ); }
		if (HX_FIELD_EQ(inName,"percentDecimals") ) { return ::hx::Val( percentDecimals ); }
		if (HX_FIELD_EQ(inName,"checkForUpdates") ) { return ::hx::Val( checkForUpdates ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"timebarShowSpeed") ) { return ::hx::Val( timebarShowSpeed ); }
		if (HX_FIELD_EQ(inName,"healthBarOverlay") ) { return ::hx::Val( healthBarOverlay ); }
		if (HX_FIELD_EQ(inName,"gameplaySettings") ) { return ::hx::Val( gameplaySettings ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ChromaticAberration") ) { return ::hx::Val( ChromaticAberration ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"moveCameraonCountdown") ) { return ::hx::Val( moveCameraonCountdown ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"originalhealthbarColor") ) { return ::hx::Val( originalhealthbarColor ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SaveVariables_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"blur") ) { blur=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"wiggle") ) { wiggle=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"memory") ) { memory=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"showFPS") ) { showFPS=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hideNps") ) { hideNps=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shaders") ) { shaders=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hideHud") ) { hideHud=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noReset") ) { noReset=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"flashing") ) { flashing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noteSkin") ) { noteSkin=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ColorBar") ) { ColorBar=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"eyesores") ) { eyesores=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bgGlitch") ) { bgGlitch=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Lenguage") ) { Lenguage=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camZooms") ) { camZooms=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"totalFPS") ) { totalFPS=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"memoryGB") ) { memoryGB=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arrowRGB") ) { arrowRGB=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoPause") ) { autoPause=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hideCombo") ) { hideCombo=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framerate") ) { framerate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scoreZoom") ) { scoreZoom=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"badWindow") ) { badWindow=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"downScroll") ) { downScroll=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"splashSkin") ) { splashSkin=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ColorBarBG") ) { ColorBarBG=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MotionBlur") ) { MotionBlur=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hideMaxNps") ) { hideMaxNps=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hideMisses") ) { hideMisses=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lowQuality") ) { lowQuality=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cacheOnGPU") ) { cacheOnGPU=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noteOffset") ) { noteOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rainbowFPS") ) { rainbowFPS=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FullScreen") ) { FullScreen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Luashaders") ) { Luashaders=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { pauseMusic=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sickWindow") ) { sickWindow=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"goodWindow") ) { goodWindow=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"safeFrames") ) { safeFrames=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"discordRPC") ) { discordRPC=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"splashAlpha") ) { splashAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"followarrow") ) { followarrow=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"songLoading") ) { songLoading=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BlackScreen") ) { BlackScreen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SpinonStart") ) { SpinonStart=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeBarType") ) { timeBarType=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"totalMemory") ) { totalMemory=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"removePerfs") ) { removePerfs=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"comboOffset") ) { comboOffset=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"middleScroll") ) { middleScroll=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { antialiasing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ghostTapping") ) { ghostTapping=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ratingOffset") ) { ratingOffset=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"blockedGlitch") ) { blockedGlitch=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RatingsOnGame") ) { RatingsOnGame=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"songWatermark") ) { songWatermark=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"engineVersion") ) { engineVersion=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"comboStacking") ) { comboStacking=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"perfectWindow") ) { perfectWindow=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arrowRGBPixel") ) { arrowRGBPixel=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"opponentStrums") ) { opponentStrums=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hidetotalNotes") ) { hidetotalNotes=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"songPercentage") ) { songPercentage=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timebarBGColor") ) { timebarBGColor=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hideJudgements") ) { hideJudgements=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"healthBarAlpha") ) { healthBarAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hitsoundVolume") ) { hitsoundVolume=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hideComboBreaks") ) { hideComboBreaks=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"percentDecimals") ) { percentDecimals=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"checkForUpdates") ) { checkForUpdates=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"timebarShowSpeed") ) { timebarShowSpeed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"healthBarOverlay") ) { healthBarOverlay=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gameplaySettings") ) { gameplaySettings=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ChromaticAberration") ) { ChromaticAberration=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"moveCameraonCountdown") ) { moveCameraonCountdown=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"originalhealthbarColor") ) { originalhealthbarColor=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SaveVariables_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("downScroll",0f,ba,68,84));
	outFields->push(HX_("middleScroll",42,cd,58,62));
	outFields->push(HX_("opponentStrums",87,04,01,1c));
	outFields->push(HX_("showFPS",ec,0a,9a,7b));
	outFields->push(HX_("flashing",32,85,e8,99));
	outFields->push(HX_("autoPause",07,15,63,9b));
	outFields->push(HX_("antialiasing",f4,16,b3,48));
	outFields->push(HX_("noteSkin",8f,3b,88,5b));
	outFields->push(HX_("splashSkin",84,03,e1,a1));
	outFields->push(HX_("splashAlpha",77,20,7a,a6));
	outFields->push(HX_("ColorBar",50,74,94,63));
	outFields->push(HX_("ColorBarBG",15,62,d6,c8));
	outFields->push(HX_("followarrow",b8,0e,df,99));
	outFields->push(HX_("songLoading",27,27,7f,c1));
	outFields->push(HX_("timebarShowSpeed",84,04,1e,b8));
	outFields->push(HX_("hideNps",4f,42,41,b7));
	outFields->push(HX_("ChromaticAberration",a9,5a,5d,79));
	outFields->push(HX_("BlackScreen",6b,76,27,42));
	outFields->push(HX_("blur",a7,42,19,41));
	outFields->push(HX_("eyesores",33,d7,61,1b));
	outFields->push(HX_("wiggle",ab,59,ee,4d));
	outFields->push(HX_("bgGlitch",9a,7f,cf,78));
	outFields->push(HX_("blockedGlitch",01,7c,3c,80));
	outFields->push(HX_("MotionBlur",1d,4c,df,29));
	outFields->push(HX_("hideMaxNps",0f,6c,d7,55));
	outFields->push(HX_("hidetotalNotes",1f,4d,50,df));
	outFields->push(HX_("moveCameraonCountdown",bc,ae,df,a2));
	outFields->push(HX_("SpinonStart",21,65,ab,1b));
	outFields->push(HX_("RatingsOnGame",e7,52,2d,f5));
	outFields->push(HX_("hideComboBreaks",20,c4,b7,b1));
	outFields->push(HX_("hideMisses",cc,08,da,ed));
	outFields->push(HX_("hideCombo",2c,e4,bb,a5));
	outFields->push(HX_("songPercentage",4f,b7,ee,ae));
	outFields->push(HX_("percentDecimals",a7,7e,76,72));
	outFields->push(HX_("Lenguage",7c,17,19,fa));
	outFields->push(HX_("lowQuality",8b,52,27,3e));
	outFields->push(HX_("shaders",ae,81,86,5f));
	outFields->push(HX_("cacheOnGPU",ab,68,1e,75));
	outFields->push(HX_("framerate",8d,e5,4b,4e));
	outFields->push(HX_("originalhealthbarColor",3d,97,ad,b6));
	outFields->push(HX_("camZooms",71,f3,cd,90));
	outFields->push(HX_("timebarBGColor",38,da,99,a4));
	outFields->push(HX_("hideHud",15,b9,3c,b7));
	outFields->push(HX_("noteOffset",25,a5,53,fe));
	outFields->push(HX_("ghostTapping",c6,6a,da,10));
	outFields->push(HX_("timeBarType",a0,5d,bb,01));
	outFields->push(HX_("scoreZoom",85,53,bc,e0));
	outFields->push(HX_("rainbowFPS",53,88,dd,49));
	outFields->push(HX_("songWatermark",0f,c9,f2,16));
	outFields->push(HX_("totalFPS",85,c2,86,75));
	outFields->push(HX_("memory",01,cb,bf,04));
	outFields->push(HX_("totalMemory",e5,bd,f5,ca));
	outFields->push(HX_("FullScreen",7b,b2,f9,24));
	outFields->push(HX_("memoryGB",5c,8b,89,8c));
	outFields->push(HX_("engineVersion",76,23,20,fc));
	outFields->push(HX_("Luashaders",16,53,14,8a));
	outFields->push(HX_("hideJudgements",80,91,66,b1));
	outFields->push(HX_("removePerfs",86,3c,2e,be));
	outFields->push(HX_("noReset",ce,cd,cb,b9));
	outFields->push(HX_("healthBarAlpha",47,c9,a0,80));
	outFields->push(HX_("healthBarOverlay",b9,71,55,78));
	outFields->push(HX_("hitsoundVolume",96,34,9b,8f));
	outFields->push(HX_("pauseMusic",cf,6d,d3,e5));
	outFields->push(HX_("checkForUpdates",29,6d,49,71));
	outFields->push(HX_("comboStacking",08,45,bb,e0));
	outFields->push(HX_("gameplaySettings",e9,91,4c,17));
	outFields->push(HX_("comboOffset",81,62,09,89));
	outFields->push(HX_("ratingOffset",90,b3,eb,a5));
	outFields->push(HX_("perfectWindow",dd,14,10,2c));
	outFields->push(HX_("sickWindow",4e,b7,93,ed));
	outFields->push(HX_("goodWindow",0d,a9,05,67));
	outFields->push(HX_("badWindow",95,db,0a,32));
	outFields->push(HX_("safeFrames",d3,18,18,62));
	outFields->push(HX_("discordRPC",99,18,34,b0));
	outFields->push(HX_("arrowRGB",c4,80,bc,fd));
	outFields->push(HX_("arrowRGBPixel",22,6f,b7,1a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SaveVariables_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,downScroll),HX_("downScroll",0f,ba,68,84)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,middleScroll),HX_("middleScroll",42,cd,58,62)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,opponentStrums),HX_("opponentStrums",87,04,01,1c)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,showFPS),HX_("showFPS",ec,0a,9a,7b)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,flashing),HX_("flashing",32,85,e8,99)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,autoPause),HX_("autoPause",07,15,63,9b)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,antialiasing),HX_("antialiasing",f4,16,b3,48)},
	{::hx::fsString,(int)offsetof(SaveVariables_obj,noteSkin),HX_("noteSkin",8f,3b,88,5b)},
	{::hx::fsString,(int)offsetof(SaveVariables_obj,splashSkin),HX_("splashSkin",84,03,e1,a1)},
	{::hx::fsFloat,(int)offsetof(SaveVariables_obj,splashAlpha),HX_("splashAlpha",77,20,7a,a6)},
	{::hx::fsString,(int)offsetof(SaveVariables_obj,ColorBar),HX_("ColorBar",50,74,94,63)},
	{::hx::fsString,(int)offsetof(SaveVariables_obj,ColorBarBG),HX_("ColorBarBG",15,62,d6,c8)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,followarrow),HX_("followarrow",b8,0e,df,99)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,songLoading),HX_("songLoading",27,27,7f,c1)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,timebarShowSpeed),HX_("timebarShowSpeed",84,04,1e,b8)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,hideNps),HX_("hideNps",4f,42,41,b7)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,ChromaticAberration),HX_("ChromaticAberration",a9,5a,5d,79)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,BlackScreen),HX_("BlackScreen",6b,76,27,42)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,blur),HX_("blur",a7,42,19,41)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,eyesores),HX_("eyesores",33,d7,61,1b)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,wiggle),HX_("wiggle",ab,59,ee,4d)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,bgGlitch),HX_("bgGlitch",9a,7f,cf,78)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,blockedGlitch),HX_("blockedGlitch",01,7c,3c,80)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,MotionBlur),HX_("MotionBlur",1d,4c,df,29)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,hideMaxNps),HX_("hideMaxNps",0f,6c,d7,55)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,hidetotalNotes),HX_("hidetotalNotes",1f,4d,50,df)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,moveCameraonCountdown),HX_("moveCameraonCountdown",bc,ae,df,a2)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,SpinonStart),HX_("SpinonStart",21,65,ab,1b)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,RatingsOnGame),HX_("RatingsOnGame",e7,52,2d,f5)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,hideComboBreaks),HX_("hideComboBreaks",20,c4,b7,b1)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,hideMisses),HX_("hideMisses",cc,08,da,ed)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,hideCombo),HX_("hideCombo",2c,e4,bb,a5)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,songPercentage),HX_("songPercentage",4f,b7,ee,ae)},
	{::hx::fsInt,(int)offsetof(SaveVariables_obj,percentDecimals),HX_("percentDecimals",a7,7e,76,72)},
	{::hx::fsString,(int)offsetof(SaveVariables_obj,Lenguage),HX_("Lenguage",7c,17,19,fa)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,lowQuality),HX_("lowQuality",8b,52,27,3e)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,shaders),HX_("shaders",ae,81,86,5f)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,cacheOnGPU),HX_("cacheOnGPU",ab,68,1e,75)},
	{::hx::fsInt,(int)offsetof(SaveVariables_obj,framerate),HX_("framerate",8d,e5,4b,4e)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,originalhealthbarColor),HX_("originalhealthbarColor",3d,97,ad,b6)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,camZooms),HX_("camZooms",71,f3,cd,90)},
	{::hx::fsString,(int)offsetof(SaveVariables_obj,timebarBGColor),HX_("timebarBGColor",38,da,99,a4)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,hideHud),HX_("hideHud",15,b9,3c,b7)},
	{::hx::fsInt,(int)offsetof(SaveVariables_obj,noteOffset),HX_("noteOffset",25,a5,53,fe)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,ghostTapping),HX_("ghostTapping",c6,6a,da,10)},
	{::hx::fsString,(int)offsetof(SaveVariables_obj,timeBarType),HX_("timeBarType",a0,5d,bb,01)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,scoreZoom),HX_("scoreZoom",85,53,bc,e0)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,rainbowFPS),HX_("rainbowFPS",53,88,dd,49)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,songWatermark),HX_("songWatermark",0f,c9,f2,16)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,totalFPS),HX_("totalFPS",85,c2,86,75)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,memory),HX_("memory",01,cb,bf,04)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,totalMemory),HX_("totalMemory",e5,bd,f5,ca)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,FullScreen),HX_("FullScreen",7b,b2,f9,24)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,memoryGB),HX_("memoryGB",5c,8b,89,8c)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,engineVersion),HX_("engineVersion",76,23,20,fc)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,Luashaders),HX_("Luashaders",16,53,14,8a)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,hideJudgements),HX_("hideJudgements",80,91,66,b1)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,removePerfs),HX_("removePerfs",86,3c,2e,be)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,noReset),HX_("noReset",ce,cd,cb,b9)},
	{::hx::fsFloat,(int)offsetof(SaveVariables_obj,healthBarAlpha),HX_("healthBarAlpha",47,c9,a0,80)},
	{::hx::fsString,(int)offsetof(SaveVariables_obj,healthBarOverlay),HX_("healthBarOverlay",b9,71,55,78)},
	{::hx::fsFloat,(int)offsetof(SaveVariables_obj,hitsoundVolume),HX_("hitsoundVolume",96,34,9b,8f)},
	{::hx::fsString,(int)offsetof(SaveVariables_obj,pauseMusic),HX_("pauseMusic",cf,6d,d3,e5)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,checkForUpdates),HX_("checkForUpdates",29,6d,49,71)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,comboStacking),HX_("comboStacking",08,45,bb,e0)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(SaveVariables_obj,gameplaySettings),HX_("gameplaySettings",e9,91,4c,17)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(SaveVariables_obj,comboOffset),HX_("comboOffset",81,62,09,89)},
	{::hx::fsInt,(int)offsetof(SaveVariables_obj,ratingOffset),HX_("ratingOffset",90,b3,eb,a5)},
	{::hx::fsInt,(int)offsetof(SaveVariables_obj,perfectWindow),HX_("perfectWindow",dd,14,10,2c)},
	{::hx::fsInt,(int)offsetof(SaveVariables_obj,sickWindow),HX_("sickWindow",4e,b7,93,ed)},
	{::hx::fsInt,(int)offsetof(SaveVariables_obj,goodWindow),HX_("goodWindow",0d,a9,05,67)},
	{::hx::fsInt,(int)offsetof(SaveVariables_obj,badWindow),HX_("badWindow",95,db,0a,32)},
	{::hx::fsFloat,(int)offsetof(SaveVariables_obj,safeFrames),HX_("safeFrames",d3,18,18,62)},
	{::hx::fsBool,(int)offsetof(SaveVariables_obj,discordRPC),HX_("discordRPC",99,18,34,b0)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(SaveVariables_obj,arrowRGB),HX_("arrowRGB",c4,80,bc,fd)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(SaveVariables_obj,arrowRGBPixel),HX_("arrowRGBPixel",22,6f,b7,1a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SaveVariables_obj_sStaticStorageInfo = 0;
#endif

static ::String SaveVariables_obj_sMemberFields[] = {
	HX_("downScroll",0f,ba,68,84),
	HX_("middleScroll",42,cd,58,62),
	HX_("opponentStrums",87,04,01,1c),
	HX_("showFPS",ec,0a,9a,7b),
	HX_("flashing",32,85,e8,99),
	HX_("autoPause",07,15,63,9b),
	HX_("antialiasing",f4,16,b3,48),
	HX_("noteSkin",8f,3b,88,5b),
	HX_("splashSkin",84,03,e1,a1),
	HX_("splashAlpha",77,20,7a,a6),
	HX_("ColorBar",50,74,94,63),
	HX_("ColorBarBG",15,62,d6,c8),
	HX_("followarrow",b8,0e,df,99),
	HX_("songLoading",27,27,7f,c1),
	HX_("timebarShowSpeed",84,04,1e,b8),
	HX_("hideNps",4f,42,41,b7),
	HX_("ChromaticAberration",a9,5a,5d,79),
	HX_("BlackScreen",6b,76,27,42),
	HX_("blur",a7,42,19,41),
	HX_("eyesores",33,d7,61,1b),
	HX_("wiggle",ab,59,ee,4d),
	HX_("bgGlitch",9a,7f,cf,78),
	HX_("blockedGlitch",01,7c,3c,80),
	HX_("MotionBlur",1d,4c,df,29),
	HX_("hideMaxNps",0f,6c,d7,55),
	HX_("hidetotalNotes",1f,4d,50,df),
	HX_("moveCameraonCountdown",bc,ae,df,a2),
	HX_("SpinonStart",21,65,ab,1b),
	HX_("RatingsOnGame",e7,52,2d,f5),
	HX_("hideComboBreaks",20,c4,b7,b1),
	HX_("hideMisses",cc,08,da,ed),
	HX_("hideCombo",2c,e4,bb,a5),
	HX_("songPercentage",4f,b7,ee,ae),
	HX_("percentDecimals",a7,7e,76,72),
	HX_("Lenguage",7c,17,19,fa),
	HX_("lowQuality",8b,52,27,3e),
	HX_("shaders",ae,81,86,5f),
	HX_("cacheOnGPU",ab,68,1e,75),
	HX_("framerate",8d,e5,4b,4e),
	HX_("originalhealthbarColor",3d,97,ad,b6),
	HX_("camZooms",71,f3,cd,90),
	HX_("timebarBGColor",38,da,99,a4),
	HX_("hideHud",15,b9,3c,b7),
	HX_("noteOffset",25,a5,53,fe),
	HX_("ghostTapping",c6,6a,da,10),
	HX_("timeBarType",a0,5d,bb,01),
	HX_("scoreZoom",85,53,bc,e0),
	HX_("rainbowFPS",53,88,dd,49),
	HX_("songWatermark",0f,c9,f2,16),
	HX_("totalFPS",85,c2,86,75),
	HX_("memory",01,cb,bf,04),
	HX_("totalMemory",e5,bd,f5,ca),
	HX_("FullScreen",7b,b2,f9,24),
	HX_("memoryGB",5c,8b,89,8c),
	HX_("engineVersion",76,23,20,fc),
	HX_("Luashaders",16,53,14,8a),
	HX_("hideJudgements",80,91,66,b1),
	HX_("removePerfs",86,3c,2e,be),
	HX_("noReset",ce,cd,cb,b9),
	HX_("healthBarAlpha",47,c9,a0,80),
	HX_("healthBarOverlay",b9,71,55,78),
	HX_("hitsoundVolume",96,34,9b,8f),
	HX_("pauseMusic",cf,6d,d3,e5),
	HX_("checkForUpdates",29,6d,49,71),
	HX_("comboStacking",08,45,bb,e0),
	HX_("gameplaySettings",e9,91,4c,17),
	HX_("comboOffset",81,62,09,89),
	HX_("ratingOffset",90,b3,eb,a5),
	HX_("perfectWindow",dd,14,10,2c),
	HX_("sickWindow",4e,b7,93,ed),
	HX_("goodWindow",0d,a9,05,67),
	HX_("badWindow",95,db,0a,32),
	HX_("safeFrames",d3,18,18,62),
	HX_("discordRPC",99,18,34,b0),
	HX_("arrowRGB",c4,80,bc,fd),
	HX_("arrowRGBPixel",22,6f,b7,1a),
	::String(null()) };

::hx::Class SaveVariables_obj::__mClass;

void SaveVariables_obj::__register()
{
	SaveVariables_obj _hx_dummy;
	SaveVariables_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.SaveVariables",c0,e9,f3,d0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SaveVariables_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SaveVariables_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SaveVariables_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SaveVariables_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace backend
