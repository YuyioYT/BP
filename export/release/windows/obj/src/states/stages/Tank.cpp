#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_animateatlas_AtlasFrameMaker
#include <animateatlas/AtlasFrameMaker.h>
#endif
#ifndef INCLUDED_backend_BaseStage
#include <backend/BaseStage.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Conductor
#include <backend/Conductor.h>
#endif
#ifndef INCLUDED_backend_Countdown
#include <backend/Countdown.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
#endif
#ifndef INCLUDED_cutscenes_CutsceneHandler
#include <cutscenes/CutsceneHandler.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSound
#include <flixel/sound/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_objects_BGSprite
#include <objects/BGSprite.h>
#endif
#ifndef INCLUDED_objects_Character
#include <objects/Character.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_states_stages_Tank
#include <states/stages/Tank.h>
#endif
#ifndef INCLUDED_states_stages_objects_BackgroundTank
#include <states/stages/objects/BackgroundTank.h>
#endif
#ifndef INCLUDED_states_stages_objects_TankmenBG
#include <states/stages/objects/TankmenBG.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_012ed43d484e6e58_11_new,"states.stages.Tank","new",0x88aa7169,"states.stages.Tank.new","states/stages/Tank.hx",11,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_19_create,"states.stages.Tank","create",0xbec65193,"states.stages.Tank.create","states/stages/Tank.hx",19,0x70a88007)
static const ::String _hx_array_data_969188f7_3[] = {
	HX_("SmokeBlurLeft",bd,78,c1,fc),
};
static const ::String _hx_array_data_969188f7_4[] = {
	HX_("SmokeRight",0d,9e,e3,35),
};
static const ::String _hx_array_data_969188f7_5[] = {
	HX_("watchtower gradient color",39,8f,02,81),
};
static const ::String _hx_array_data_969188f7_6[] = {
	HX_("fg",41,59,00,00),
};
static const ::String _hx_array_data_969188f7_7[] = {
	HX_("fg",41,59,00,00),
};
static const ::String _hx_array_data_969188f7_8[] = {
	HX_("foreground",c3,18,ef,10),
};
static const ::String _hx_array_data_969188f7_9[] = {
	HX_("fg",41,59,00,00),
};
static const ::String _hx_array_data_969188f7_10[] = {
	HX_("fg",41,59,00,00),
};
static const ::String _hx_array_data_969188f7_11[] = {
	HX_("fg",41,59,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_94_createPost,"states.stages.Tank","createPost",0xe7dfc793,"states.stages.Tank.createPost","states/stages/Tank.hx",94,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_125_countdownTick,"states.stages.Tank","countdownTick",0x117b92f7,"states.stages.Tank.countdownTick","states/stages/Tank.hx",125,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_126_beatHit,"states.stages.Tank","beatHit",0x915b4406,"states.stages.Tank.beatHit","states/stages/Tank.hx",126,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_132_everyoneDance,"states.stages.Tank","everyoneDance",0x6e22ebd1,"states.stages.Tank.everyoneDance","states/stages/Tank.hx",132,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_128_everyoneDance,"states.stages.Tank","everyoneDance",0x6e22ebd1,"states.stages.Tank.everyoneDance","states/stages/Tank.hx",128,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_181_prepareCutscene,"states.stages.Tank","prepareCutscene",0xde6853ba,"states.stages.Tank.prepareCutscene","states/stages/Tank.hx",181,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_145_prepareCutscene,"states.stages.Tank","prepareCutscene",0xde6853ba,"states.stages.Tank.prepareCutscene","states/stages/Tank.hx",145,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_216_ughIntro,"states.stages.Tank","ughIntro",0x53d4af0d,"states.stages.Tank.ughIntro","states/stages/Tank.hx",216,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_221_ughIntro,"states.stages.Tank","ughIntro",0x53d4af0d,"states.stages.Tank.ughIntro","states/stages/Tank.hx",221,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_228_ughIntro,"states.stages.Tank","ughIntro",0x53d4af0d,"states.stages.Tank.ughIntro","states/stages/Tank.hx",228,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_236_ughIntro,"states.stages.Tank","ughIntro",0x53d4af0d,"states.stages.Tank.ughIntro","states/stages/Tank.hx",236,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_197_ughIntro,"states.stages.Tank","ughIntro",0x53d4af0d,"states.stages.Tank.ughIntro","states/stages/Tank.hx",197,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_262_gunsIntro,"states.stages.Tank","gunsIntro",0x1087b542,"states.stages.Tank.gunsIntro","states/stages/Tank.hx",262,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_274_gunsIntro,"states.stages.Tank","gunsIntro",0x1087b542,"states.stages.Tank.gunsIntro","states/stages/Tank.hx",274,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_270_gunsIntro,"states.stages.Tank","gunsIntro",0x1087b542,"states.stages.Tank.gunsIntro","states/stages/Tank.hx",270,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_246_gunsIntro,"states.stages.Tank","gunsIntro",0x1087b542,"states.stages.Tank.gunsIntro","states/stages/Tank.hx",246,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_291_stressIntro,"states.stages.Tank","stressIntro",0x8c69aba1,"states.stages.Tank.stressIntro","states/stages/Tank.hx",291,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_333_stressIntro,"states.stages.Tank","stressIntro",0x8c69aba1,"states.stages.Tank.stressIntro","states/stages/Tank.hx",333,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_346_stressIntro,"states.stages.Tank","stressIntro",0x8c69aba1,"states.stages.Tank.stressIntro","states/stages/Tank.hx",346,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_362_stressIntro,"states.stages.Tank","stressIntro",0x8c69aba1,"states.stages.Tank.stressIntro","states/stages/Tank.hx",362,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_370_stressIntro,"states.stages.Tank","stressIntro",0x8c69aba1,"states.stages.Tank.stressIntro","states/stages/Tank.hx",370,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_337_stressIntro,"states.stages.Tank","stressIntro",0x8c69aba1,"states.stages.Tank.stressIntro","states/stages/Tank.hx",337,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_382_stressIntro,"states.stages.Tank","stressIntro",0x8c69aba1,"states.stages.Tank.stressIntro","states/stages/Tank.hx",382,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_386_stressIntro,"states.stages.Tank","stressIntro",0x8c69aba1,"states.stages.Tank.stressIntro","states/stages/Tank.hx",386,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_395_stressIntro,"states.stages.Tank","stressIntro",0x8c69aba1,"states.stages.Tank.stressIntro","states/stages/Tank.hx",395,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_403_stressIntro,"states.stages.Tank","stressIntro",0x8c69aba1,"states.stages.Tank.stressIntro","states/stages/Tank.hx",403,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_399_stressIntro,"states.stages.Tank","stressIntro",0x8c69aba1,"states.stages.Tank.stressIntro","states/stages/Tank.hx",399,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_418_stressIntro,"states.stages.Tank","stressIntro",0x8c69aba1,"states.stages.Tank.stressIntro","states/stages/Tank.hx",418,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_279_stressIntro,"states.stages.Tank","stressIntro",0x8c69aba1,"states.stages.Tank.stressIntro","states/stages/Tank.hx",279,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_423_zoomBack,"states.stages.Tank","zoomBack",0x28452d31,"states.stages.Tank.zoomBack","states/stages/Tank.hx",423,0x70a88007)
HX_LOCAL_STACK_FRAME(_hx_pos_012ed43d484e6e58_435_zoomBack,"states.stages.Tank","zoomBack",0x28452d31,"states.stages.Tank.zoomBack","states/stages/Tank.hx",435,0x70a88007)
namespace states{
namespace stages{

void Tank_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_012ed43d484e6e58_11_new)
HXDLIN(  11)		super::__construct();
            	}

Dynamic Tank_obj::__CreateEmpty() { return new Tank_obj; }

void *Tank_obj::_hx_vtable = 0;

Dynamic Tank_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tank_obj > _hx_result = new Tank_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Tank_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x73e389c1) {
		if (inClassId<=(int)0x230cab9d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x230cab9d;
		} else {
			return inClassId==(int)0x73e389c1;
		}
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void Tank_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_012ed43d484e6e58_19_create)
HXLINE(  20)		 ::objects::BGSprite sky =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("tankSky",17,cc,64,3d),-400,-400,0,0,null(),null());
HXLINE(  21)		this->add(sky);
HXLINE(  23)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE(  25)			int clouds = ::flixel::FlxG_obj::random->_hx_int(-700,-100,null());
HXDLIN(  25)			 ::objects::BGSprite clouds1 =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("tankClouds",e8,67,44,47),clouds,::flixel::FlxG_obj::random->_hx_int(-20,20,null()),((Float)0.1),((Float)0.1),null(),null());
HXLINE(  26)			clouds1->set_active(true);
HXLINE(  27)			{
HXLINE(  27)				 ::flixel::math::FlxBasePoint this1 = clouds1->velocity;
HXDLIN(  27)				this1->set_x(::flixel::FlxG_obj::random->_hx_float(5,15,null()));
            			}
HXLINE(  28)			this->add(clouds1);
HXLINE(  30)			 ::objects::BGSprite mountains =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("tankMountains",3c,a9,69,8a),-300,-20,((Float)0.2),((Float)0.2),null(),null());
HXLINE(  31)			mountains->setGraphicSize(::Std_obj::_hx_int((((Float)1.2) * mountains->get_width())),null());
HXLINE(  32)			mountains->updateHitbox();
HXLINE(  33)			this->add(mountains);
HXLINE(  35)			 ::objects::BGSprite buildings =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("tankBuildings",35,bb,64,e0),-200,0,((Float)0.3),((Float)0.3),null(),null());
HXLINE(  36)			buildings->setGraphicSize(::Std_obj::_hx_int((((Float)1.1) * buildings->get_width())),null());
HXLINE(  37)			buildings->updateHitbox();
HXLINE(  38)			this->add(buildings);
            		}
HXLINE(  41)		 ::objects::BGSprite ruins =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("tankRuins",c1,09,6b,6c),-200,0,((Float).35),((Float).35),null(),null());
HXLINE(  42)		ruins->setGraphicSize(::Std_obj::_hx_int((((Float)1.1) * ruins->get_width())),null());
HXLINE(  43)		ruins->updateHitbox();
HXLINE(  44)		this->add(ruins);
HXLINE(  46)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE(  48)			 ::objects::BGSprite smokeLeft =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("smokeLeft",16,a7,ec,46),-200,-100,((Float)0.4),((Float)0.4),::Array_obj< ::String >::fromData( _hx_array_data_969188f7_3,1),true);
HXLINE(  49)			this->add(smokeLeft);
HXLINE(  50)			 ::objects::BGSprite smokeRight =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("smokeRight",ed,99,32,3f),1100,-100,((Float)0.4),((Float)0.4),::Array_obj< ::String >::fromData( _hx_array_data_969188f7_4,1),true);
HXLINE(  51)			this->add(smokeRight);
HXLINE(  53)			this->tankWatchtower =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("tankWatchtower",e4,90,73,b1),100,50,((Float)0.5),((Float)0.5),::Array_obj< ::String >::fromData( _hx_array_data_969188f7_5,1),null());
HXLINE(  54)			this->add(this->tankWatchtower);
            		}
HXLINE(  57)		this->tankGround =  ::states::stages::objects::BackgroundTank_obj::__alloc( HX_CTX );
HXLINE(  58)		this->add(this->tankGround);
HXLINE(  60)		this->tankmanRun =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  61)		this->add(this->tankmanRun);
HXLINE(  63)		 ::objects::BGSprite ground =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("tankGround",11,5d,19,55),-420,-150,null(),null(),null(),null());
HXLINE(  64)		ground->setGraphicSize(::Std_obj::_hx_int((((Float)1.15) * ground->get_width())),null());
HXLINE(  65)		ground->updateHitbox();
HXLINE(  66)		this->add(ground);
HXLINE(  68)		this->foregroundSprites =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  69)		 ::flixel::group::FlxTypedGroup _hx_tmp = this->foregroundSprites;
HXDLIN(  69)		_hx_tmp->add( ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("tank0",06,d2,ec,0a),-500,650,((Float)1.7),((Float)1.5),::Array_obj< ::String >::fromData( _hx_array_data_969188f7_6,1),null())).StaticCast<  ::objects::BGSprite >();
HXLINE(  70)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE(  70)			 ::flixel::group::FlxTypedGroup _hx_tmp = this->foregroundSprites;
HXDLIN(  70)			_hx_tmp->add( ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("tank1",07,d2,ec,0a),-300,750,2,((Float)0.2),::Array_obj< ::String >::fromData( _hx_array_data_969188f7_7,1),null())).StaticCast<  ::objects::BGSprite >();
            		}
HXLINE(  71)		 ::flixel::group::FlxTypedGroup _hx_tmp1 = this->foregroundSprites;
HXDLIN(  71)		_hx_tmp1->add( ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("tank2",08,d2,ec,0a),450,940,((Float)1.5),((Float)1.5),::Array_obj< ::String >::fromData( _hx_array_data_969188f7_8,1),null())).StaticCast<  ::objects::BGSprite >();
HXLINE(  72)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE(  72)			 ::flixel::group::FlxTypedGroup _hx_tmp = this->foregroundSprites;
HXDLIN(  72)			_hx_tmp->add( ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("tank4",0a,d2,ec,0a),1300,900,((Float)1.5),((Float)1.5),::Array_obj< ::String >::fromData( _hx_array_data_969188f7_9,1),null())).StaticCast<  ::objects::BGSprite >();
            		}
HXLINE(  73)		 ::flixel::group::FlxTypedGroup _hx_tmp2 = this->foregroundSprites;
HXDLIN(  73)		_hx_tmp2->add( ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("tank5",0b,d2,ec,0a),1620,700,((Float)1.5),((Float)1.5),::Array_obj< ::String >::fromData( _hx_array_data_969188f7_10,1),null())).StaticCast<  ::objects::BGSprite >();
HXLINE(  74)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE(  74)			 ::flixel::group::FlxTypedGroup _hx_tmp = this->foregroundSprites;
HXDLIN(  74)			_hx_tmp->add( ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("tank3",09,d2,ec,0a),1300,1200,((Float)3.5),((Float)2.5),::Array_obj< ::String >::fromData( _hx_array_data_969188f7_11,1),null())).StaticCast<  ::objects::BGSprite >();
            		}
HXLINE(  77)		if ((( (::String)(this->game->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) ) == HX_("stress",34,24,2d,11))) {
HXLINE(  77)			this->setDefaultGF(HX_("pico-speaker",57,7a,55,5e));
            		}
            		else {
HXLINE(  78)			this->setDefaultGF(HX_("gf-tankmen",fe,a1,7c,b5));
            		}
HXLINE(  80)		bool _hx_tmp3;
HXDLIN(  80)		if (::states::PlayState_obj::isStoryMode) {
HXLINE(  80)			_hx_tmp3 = !(::states::PlayState_obj::seenCutscene);
            		}
            		else {
HXLINE(  80)			_hx_tmp3 = false;
            		}
HXDLIN(  80)		if (_hx_tmp3) {
HXLINE(  82)			::String _hx_switch_0 = ( (::String)(this->game->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) );
            			if (  (_hx_switch_0==HX_("guns",f3,21,6e,44)) ){
HXLINE(  87)				this->setStartCallback(this->gunsIntro_dyn());
HXDLIN(  87)				goto _hx_goto_1;
            			}
            			if (  (_hx_switch_0==HX_("stress",34,24,2d,11)) ){
HXLINE(  89)				this->setStartCallback(this->stressIntro_dyn());
HXDLIN(  89)				goto _hx_goto_1;
            			}
            			if (  (_hx_switch_0==HX_("ugh",d6,21,59,00)) ){
HXLINE(  85)				this->setStartCallback(this->ughIntro_dyn());
HXDLIN(  85)				goto _hx_goto_1;
            			}
            			_hx_goto_1:;
            		}
            	}


void Tank_obj::createPost(){
            	HX_GC_STACKFRAME(&_hx_pos_012ed43d484e6e58_94_createPost)
HXLINE(  95)		this->add(this->foregroundSprites);
HXLINE(  97)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE(  99)			 ::Dynamic filter = null();
HXDLIN(  99)			 ::flixel::group::FlxTypedGroupIterator daGf =  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,( ( ::flixel::group::FlxTypedSpriteGroup)(this->game->__Field(HX_("gfGroup",a0,b8,ab,b0),::hx::paccDynamic)) )->group->members,filter);
HXDLIN(  99)			while(daGf->hasNext()){
HXLINE(  99)				 ::flixel::FlxSprite daGf1 = daGf->next().StaticCast<  ::flixel::FlxSprite >();
HXLINE( 101)				 ::objects::Character gf = ( ( ::objects::Character)(daGf1) );
HXLINE( 102)				if ((gf->curCharacter == HX_("pico-speaker",57,7a,55,5e))) {
HXLINE( 104)					 ::states::stages::objects::TankmenBG firstTank =  ::states::stages::objects::TankmenBG_obj::__alloc( HX_CTX ,( (Float)(20) ),( (Float)(500) ),true);
HXLINE( 105)					firstTank->resetShit(( (Float)(20) ),( (Float)(600) ),true);
HXLINE( 106)					firstTank->strumTime = ( (Float)(10) );
HXLINE( 107)					firstTank->set_visible(false);
HXLINE( 108)					this->tankmanRun->add(firstTank).StaticCast<  ::states::stages::objects::TankmenBG >();
HXLINE( 110)					{
HXLINE( 110)						int _g = 0;
HXDLIN( 110)						int _g1 = ::states::stages::objects::TankmenBG_obj::animationNotes->get_length();
HXDLIN( 110)						while((_g < _g1)){
HXLINE( 110)							_g = (_g + 1);
HXDLIN( 110)							int i = (_g - 1);
HXLINE( 112)							if ((::flixel::FlxG_obj::random->_hx_float(0,100,null()) < 16)) {
HXLINE( 113)								 ::states::stages::objects::TankmenBG tankBih = this->tankmanRun->recycle(::hx::ClassOf< ::states::stages::objects::TankmenBG >(),null(),null(),null()).StaticCast<  ::states::stages::objects::TankmenBG >();
HXLINE( 114)								tankBih->strumTime = ( (Float)(::states::stages::objects::TankmenBG_obj::animationNotes->__get(i)->__GetItem(0)) );
HXLINE( 115)								int _hx_tmp = (200 + ::flixel::FlxG_obj::random->_hx_int(50,100,null()));
HXDLIN( 115)								tankBih->resetShit(( (Float)(500) ),( (Float)(_hx_tmp) ),::hx::IsLess( ::states::stages::objects::TankmenBG_obj::animationNotes->__get(i)->__GetItem(1),2 ));
HXLINE( 116)								this->tankmanRun->add(tankBih).StaticCast<  ::states::stages::objects::TankmenBG >();
            							}
            						}
            					}
HXLINE( 119)					goto _hx_goto_12;
            				}
            			}
            			_hx_goto_12:;
            		}
            	}


void Tank_obj::countdownTick( ::backend::Countdown count,int num){
            	HX_STACKFRAME(&_hx_pos_012ed43d484e6e58_125_countdownTick)
HXDLIN( 125)		if ((::hx::Mod(num,2) == 0)) {
HXDLIN( 125)			this->everyoneDance();
            		}
            	}


void Tank_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_012ed43d484e6e58_126_beatHit)
HXDLIN( 126)		this->everyoneDance();
            	}


void Tank_obj::everyoneDance(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run( ::objects::BGSprite spr){
            			HX_STACKFRAME(&_hx_pos_012ed43d484e6e58_132_everyoneDance)
HXLINE( 132)			spr->dance(null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_012ed43d484e6e58_128_everyoneDance)
HXLINE( 129)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE( 129)			this->tankWatchtower->dance(null());
            		}
HXLINE( 130)		this->foregroundSprites->forEach( ::Dynamic(new _hx_Closure_0()),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tank_obj,everyoneDance,(void))

void Tank_obj::prepareCutscene(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::stages::Tank,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_012ed43d484e6e58_181_prepareCutscene)
HXLINE( 182)			Float timeForStuff = ((::backend::Conductor_obj::crochet / ( (Float)(1000) )) * ((Float)4.5));
HXLINE( 183)			{
HXLINE( 183)				 ::flixel::sound::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 183)				 ::Dynamic onComplete = null();
HXDLIN( 183)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 183)					_this->fadeTween->cancel();
            				}
HXDLIN( 183)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(_this->_volume,( (Float)(0) ),timeForStuff, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
HXLINE( 184)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("zoom",13,a3,f8,50),( (Float)(_gthis->game->__Field(HX_("defaultCamZoom",01,50,2a,0b),::hx::paccDynamic)) ))),timeForStuff, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())));
HXLINE( 185)			_gthis->startCountdown();
HXLINE( 187)			( ( ::flixel::group::FlxTypedSpriteGroup)(_gthis->game->__Field(HX_("dadGroup",78,cb,28,42),::hx::paccDynamic)) )->set_alpha(( (Float)(1) ));
HXLINE( 188)			( ( ::flixel::FlxCamera)(_gthis->game->__Field(HX_("camHUD",e8,2b,76,b7),::hx::paccDynamic)) )->set_visible(true);
HXLINE( 189)			( ( ::objects::Character)(_gthis->game->__Field(HX_("boyfriend",6a,29,b8,e6),::hx::paccDynamic)) )->animation->finishCallback = null();
HXLINE( 190)			( ( ::objects::Character)(_gthis->game->__Field(HX_("gf",1f,5a,00,00),::hx::paccDynamic)) )->animation->finishCallback = null();
HXLINE( 191)			( ( ::objects::Character)(_gthis->game->__Field(HX_("gf",1f,5a,00,00),::hx::paccDynamic)) )->dance();
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_012ed43d484e6e58_145_prepareCutscene)
HXDLIN( 145)		 ::states::stages::Tank _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 146)		this->cutsceneHandler =  ::cutscenes::CutsceneHandler_obj::__alloc( HX_CTX );
HXLINE( 148)		( ( ::flixel::group::FlxTypedSpriteGroup)(this->game->__Field(HX_("dadGroup",78,cb,28,42),::hx::paccDynamic)) )->set_alpha(((Float)0.00001));
HXLINE( 149)		( ( ::flixel::FlxCamera)(this->game->__Field(HX_("camHUD",e8,2b,76,b7),::hx::paccDynamic)) )->set_visible(false);
HXLINE( 152)		this->tankman =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-20,320,null());
HXLINE( 153)		 ::flixel::FlxSprite _hx_tmp = this->tankman;
HXDLIN( 153)		::String key = (HX_("cutscenes/",66,37,f1,63) + ( (::String)(this->game->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) ));
HXDLIN( 153)		::String library = null();
HXDLIN( 153)		 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(key,null(),true);
HXDLIN( 153)		bool xmlExists = false;
HXDLIN( 153)		::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 153)		if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 153)			xmlExists = true;
            		}
HXDLIN( 153)		 ::Dynamic _hx_tmp1;
HXDLIN( 153)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 153)			_hx_tmp1 = imageLoaded;
            		}
            		else {
HXLINE( 153)			_hx_tmp1 = ::backend::Paths_obj::image(key,library,true);
            		}
HXDLIN( 153)		::String _hx_tmp2;
HXDLIN( 153)		if (xmlExists) {
HXLINE( 153)			_hx_tmp2 = ::sys::io::File_obj::getContent(xml);
            		}
            		else {
HXLINE( 153)			_hx_tmp2 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            		}
HXDLIN( 153)		_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,_hx_tmp2));
HXLINE( 154)		this->tankman->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 155)		this->addBehindDad(this->tankman);
HXLINE( 157)		this->tankman2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,16,312,null());
HXLINE( 158)		this->tankman2->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 159)		this->tankman2->set_alpha(((Float)0.000001));
HXLINE( 161)		this->gfDance =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(( ( ::objects::Character)(this->game->__Field(HX_("gf",1f,5a,00,00),::hx::paccDynamic)) )->x - ( (Float)(107) )),(( ( ::objects::Character)(this->game->__Field(HX_("gf",1f,5a,00,00),::hx::paccDynamic)) )->y + 140),null());
HXLINE( 162)		this->gfDance->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 164)		this->gfCutscene =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(( ( ::objects::Character)(this->game->__Field(HX_("gf",1f,5a,00,00),::hx::paccDynamic)) )->x - ( (Float)(104) )),(( ( ::objects::Character)(this->game->__Field(HX_("gf",1f,5a,00,00),::hx::paccDynamic)) )->y + 122),null());
HXLINE( 165)		this->gfCutscene->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 167)		this->picoCutscene =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(( ( ::objects::Character)(this->game->__Field(HX_("gf",1f,5a,00,00),::hx::paccDynamic)) )->x - ( (Float)(849) )),(( ( ::objects::Character)(this->game->__Field(HX_("gf",1f,5a,00,00),::hx::paccDynamic)) )->y - ( (Float)(264) )),null());
HXLINE( 168)		this->picoCutscene->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 170)		this->boyfriendCutscene =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(( ( ::objects::Character)(this->game->__Field(HX_("boyfriend",6a,29,b8,e6),::hx::paccDynamic)) )->x + 5),(( ( ::objects::Character)(this->game->__Field(HX_("boyfriend",6a,29,b8,e6),::hx::paccDynamic)) )->y + 20),null());
HXLINE( 171)		this->boyfriendCutscene->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 173)		this->cutsceneHandler->push(this->tankman);
HXLINE( 174)		this->cutsceneHandler->push(this->tankman2);
HXLINE( 175)		this->cutsceneHandler->push(this->gfDance);
HXLINE( 176)		this->cutsceneHandler->push(this->gfCutscene);
HXLINE( 177)		this->cutsceneHandler->push(this->picoCutscene);
HXLINE( 178)		this->cutsceneHandler->push(this->boyfriendCutscene);
HXLINE( 180)		this->cutsceneHandler->finishCallback =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 193)		( ( ::flixel::FlxObject)(this->game->__Field(HX_("camFollow",e0,6e,47,22),::hx::paccDynamic)) )->setPosition((( ( ::objects::Character)(this->game->__Field(HX_("dad",47,36,4c,00),::hx::paccDynamic)) )->x + 280),(( ( ::objects::Character)(this->game->__Field(HX_("dad",47,36,4c,00),::hx::paccDynamic)) )->y + 170));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tank_obj,prepareCutscene,(void))

void Tank_obj::ughIntro(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::flixel::sound::FlxSound,wellWellWell1) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_012ed43d484e6e58_216_ughIntro)
HXLINE( 216)			wellWellWell1->play(true,null(),null());
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::states::stages::Tank,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_012ed43d484e6e58_221_ughIntro)
HXLINE( 222)			 ::flixel::FlxObject fh = ( ( ::flixel::FlxObject)(_gthis->game->__Field(HX_("camFollow",e0,6e,47,22),::hx::paccDynamic)) );
HXDLIN( 222)			fh->set_x((fh->x + 750));
HXLINE( 223)			 ::flixel::FlxObject fh1 = ( ( ::flixel::FlxObject)(_gthis->game->__Field(HX_("camFollow",e0,6e,47,22),::hx::paccDynamic)) );
HXDLIN( 223)			fh1->set_y((fh1->y + 100));
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::states::stages::Tank,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_012ed43d484e6e58_228_ughIntro)
HXLINE( 229)			( ( ::objects::Character)(_gthis->game->__Field(HX_("boyfriend",6a,29,b8,e6),::hx::paccDynamic)) )->playAnim(HX_("singUP",6a,52,21,b9),true,null(),null());
HXLINE( 230)			( ( ::objects::Character)(_gthis->game->__Field(HX_("boyfriend",6a,29,b8,e6),::hx::paccDynamic)) )->specialAnim = true;
HXLINE( 231)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 231)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("bfBeep",d2,98,c5,15),null()),null(),null(),null(),null(),null());
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::states::stages::Tank,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_012ed43d484e6e58_236_ughIntro)
HXLINE( 237)			 ::flixel::FlxObject fh = ( ( ::flixel::FlxObject)(_gthis->game->__Field(HX_("camFollow",e0,6e,47,22),::hx::paccDynamic)) );
HXDLIN( 237)			fh->set_x((fh->x - ( (Float)(750) )));
HXLINE( 238)			 ::flixel::FlxObject fh1 = ( ( ::flixel::FlxObject)(_gthis->game->__Field(HX_("camFollow",e0,6e,47,22),::hx::paccDynamic)) );
HXDLIN( 238)			fh1->set_y((fh1->y - ( (Float)(100) )));
HXLINE( 241)			_gthis->tankman->animation->play(HX_("killYou",e1,20,df,d3),true,null(),null());
HXLINE( 242)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 242)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("killYou",e1,20,df,d3),null()),null(),null(),null(),null(),null());
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_012ed43d484e6e58_197_ughIntro)
HXDLIN( 197)		 ::states::stages::Tank _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 198)		this->prepareCutscene();
HXLINE( 199)		this->cutsceneHandler->endTime = ( (Float)(12) );
HXLINE( 200)		this->cutsceneHandler->music = HX_("DISTORTO",c4,37,c3,ce);
HXLINE( 201)		this->precacheSound(HX_("wellWellWell",6a,f7,bb,f4));
HXLINE( 202)		this->precacheSound(HX_("killYou",e1,20,df,d3));
HXLINE( 203)		this->precacheSound(HX_("bfBeep",d2,98,c5,15));
HXLINE( 205)		 ::flixel::sound::FlxSound wellWellWell =  ::flixel::sound::FlxSound_obj::__alloc( HX_CTX );
HXDLIN( 205)		 ::flixel::sound::FlxSound wellWellWell1 = wellWellWell->loadEmbedded(::backend::Paths_obj::sound(HX_("wellWellWell",6a,f7,bb,f4),null()),null(),null(),null());
HXLINE( 206)		::flixel::FlxG_obj::sound->list->add(wellWellWell1).StaticCast<  ::flixel::sound::FlxSound >();
HXLINE( 208)		this->tankman->animation->addByPrefix(HX_("wellWell",3c,17,0b,96),HX_("TANK TALK 1 P1",2e,59,02,09),24,false,null(),null());
HXLINE( 209)		this->tankman->animation->addByPrefix(HX_("killYou",e1,20,df,d3),HX_("TANK TALK 1 P2",2f,59,02,09),24,false,null(),null());
HXLINE( 210)		this->tankman->animation->play(HX_("wellWell",3c,17,0b,96),true,null(),null());
HXLINE( 211)		 ::flixel::FlxCamera fh = ::flixel::FlxG_obj::camera;
HXDLIN( 211)		fh->set_zoom((fh->zoom * ((Float)1.2)));
HXLINE( 214)		this->cutsceneHandler->timer(((Float)0.1), ::Dynamic(new _hx_Closure_0(wellWellWell1)));
HXLINE( 220)		this->cutsceneHandler->timer(( (Float)(3) ), ::Dynamic(new _hx_Closure_1(_gthis)));
HXLINE( 227)		this->cutsceneHandler->timer(((Float)4.5), ::Dynamic(new _hx_Closure_2(_gthis)));
HXLINE( 235)		this->cutsceneHandler->timer(( (Float)(6) ), ::Dynamic(new _hx_Closure_3(_gthis)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tank_obj,ughIntro,(void))

void Tank_obj::gunsIntro(){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::states::stages::Tank,_gthis, ::flixel::sound::FlxSound,tightBars1) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_012ed43d484e6e58_262_gunsIntro)
HXLINE( 263)			tightBars1->play(true,null(),null());
HXLINE( 264)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("zoom",13,a3,f8,50),(( (Float)(_gthis->game->__Field(HX_("defaultCamZoom",01,50,2a,0b),::hx::paccDynamic)) ) * ((Float)1.2)))),4, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())));
HXLINE( 265)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("zoom",13,a3,f8,50),((( (Float)(_gthis->game->__Field(HX_("defaultCamZoom",01,50,2a,0b),::hx::paccDynamic)) ) * ((Float)1.2)) * ((Float)1.2)))),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("startDelay",c1,af,3d,f3),4)
            				->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())));
HXLINE( 266)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("zoom",13,a3,f8,50),(( (Float)(_gthis->game->__Field(HX_("defaultCamZoom",01,50,2a,0b),::hx::paccDynamic)) ) * ((Float)1.2)))),1, ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)4.5))
            				->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())));
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::states::stages::Tank,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::states::stages::Tank,_gthis) HXARGC(1)
            			void _hx_run(::String name){
            				HX_GC_STACKFRAME(&_hx_pos_012ed43d484e6e58_274_gunsIntro)
HXLINE( 274)				( ( ::objects::Character)(_gthis->game->__Field(HX_("gf",1f,5a,00,00),::hx::paccDynamic)) )->playAnim(HX_("sad",16,98,57,00),true,null(),null());
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_012ed43d484e6e58_270_gunsIntro)
HXLINE( 271)			( ( ::objects::Character)(_gthis->game->__Field(HX_("gf",1f,5a,00,00),::hx::paccDynamic)) )->playAnim(HX_("sad",16,98,57,00),true,null(),null());
HXLINE( 272)			( ( ::objects::Character)(_gthis->game->__Field(HX_("gf",1f,5a,00,00),::hx::paccDynamic)) )->animation->finishCallback =  ::Dynamic(new _hx_Closure_1(_gthis));
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_012ed43d484e6e58_246_gunsIntro)
HXDLIN( 246)		 ::states::stages::Tank _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 247)		this->prepareCutscene();
HXLINE( 248)		this->cutsceneHandler->endTime = ((Float)11.5);
HXLINE( 249)		this->cutsceneHandler->music = HX_("DISTORTO",c4,37,c3,ce);
HXLINE( 250)		 ::flixel::FlxSprite fh = this->tankman;
HXDLIN( 250)		fh->set_x((fh->x + 40));
HXLINE( 251)		 ::flixel::FlxSprite fh1 = this->tankman;
HXDLIN( 251)		fh1->set_y((fh1->y + 10));
HXLINE( 252)		this->precacheSound(HX_("tankSong2",73,1b,de,fb));
HXLINE( 254)		 ::flixel::sound::FlxSound tightBars =  ::flixel::sound::FlxSound_obj::__alloc( HX_CTX );
HXDLIN( 254)		 ::flixel::sound::FlxSound tightBars1 = tightBars->loadEmbedded(::backend::Paths_obj::sound(HX_("tankSong2",73,1b,de,fb),null()),null(),null(),null());
HXLINE( 255)		::flixel::FlxG_obj::sound->list->add(tightBars1).StaticCast<  ::flixel::sound::FlxSound >();
HXLINE( 257)		this->tankman->animation->addByPrefix(HX_("tightBars",3e,0f,ba,51),HX_("TANK TALK 2",b4,26,63,8b),24,false,null(),null());
HXLINE( 258)		this->tankman->animation->play(HX_("tightBars",3e,0f,ba,51),true,null(),null());
HXLINE( 259)		( ( ::objects::Character)(this->game->__Field(HX_("boyfriend",6a,29,b8,e6),::hx::paccDynamic)) )->animation->_curAnim->finish();
HXLINE( 261)		this->cutsceneHandler->onStart =  ::Dynamic(new _hx_Closure_0(_gthis,tightBars1));
HXLINE( 269)		this->cutsceneHandler->timer(( (Float)(4) ), ::Dynamic(new _hx_Closure_2(_gthis)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tank_obj,gunsIntro,(void))

void Tank_obj::stressIntro(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run( ::objects::BGSprite spr){
            			HX_STACKFRAME(&_hx_pos_012ed43d484e6e58_291_stressIntro)
HXLINE( 291)			spr->set_y((spr->y + 100));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::flixel::sound::FlxSound,cutsceneSnd1) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_012ed43d484e6e58_333_stressIntro)
HXLINE( 333)			cutsceneSnd1->play(true,null(),null());
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_5, ::states::stages::Tank,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_4, ::states::stages::Tank,_gthis) HXARGC(1)
            			void _hx_run(::String name){
            				HX_GC_STACKFRAME(&_hx_pos_012ed43d484e6e58_346_stressIntro)
HXLINE( 346)				if ((name == HX_("dieBitch",52,c7,3f,0e))) {
HXLINE( 348)					_gthis->gfCutscene->animation->play(HX_("getRektLmao",a1,96,9c,cb),true,null(),null());
HXLINE( 349)					{
HXLINE( 349)						 ::flixel::math::FlxBasePoint this1 = _gthis->gfCutscene->offset;
HXDLIN( 349)						this1->set_x(( (Float)(224) ));
HXDLIN( 349)						this1->set_y(( (Float)(445) ));
            					}
            				}
            				else {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::states::stages::Tank,_gthis) HXARGC(1)
            					void _hx_run(::String name){
            						HX_GC_STACKFRAME(&_hx_pos_012ed43d484e6e58_362_stressIntro)
HXLINE( 362)						if ((name != HX_("idle",14,a7,b3,45))) {
HXLINE( 364)							( ( ::objects::Character)(_gthis->game->__Field(HX_("boyfriend",6a,29,b8,e6),::hx::paccDynamic)) )->playAnim(HX_("idle",14,a7,b3,45),true,null(),null());
HXLINE( 365)							( ( ::objects::Character)(_gthis->game->__Field(HX_("boyfriend",6a,29,b8,e6),::hx::paccDynamic)) )->animation->_curAnim->finish();
            						}
            					}
            					HX_END_LOCAL_FUNC1((void))

            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::states::stages::Tank,_gthis) HXARGC(1)
            					void _hx_run(::String name){
            						HX_GC_STACKFRAME(&_hx_pos_012ed43d484e6e58_370_stressIntro)
HXLINE( 371)						_gthis->picoCutscene->set_visible(false);
HXLINE( 372)						( ( ::flixel::group::FlxTypedSpriteGroup)(_gthis->game->__Field(HX_("gfGroup",a0,b8,ab,b0),::hx::paccDynamic)) )->set_alpha(( (Float)(1) ));
HXLINE( 373)						_gthis->picoCutscene->animation->finishCallback = null();
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 353)					_gthis->gfCutscene->set_visible(false);
HXLINE( 354)					_gthis->picoCutscene->set_alpha(( (Float)(1) ));
HXLINE( 355)					_gthis->picoCutscene->animation->play(HX_("anim",11,86,71,40),true,null(),null());
HXLINE( 357)					( ( ::flixel::group::FlxTypedSpriteGroup)(_gthis->game->__Field(HX_("boyfriendGroup",75,99,09,ef),::hx::paccDynamic)) )->set_alpha(( (Float)(1) ));
HXLINE( 358)					_gthis->boyfriendCutscene->set_visible(false);
HXLINE( 359)					( ( ::objects::Character)(_gthis->game->__Field(HX_("boyfriend",6a,29,b8,e6),::hx::paccDynamic)) )->playAnim(HX_("bfCatch",d7,2f,ed,87),true,null(),null());
HXLINE( 360)					( ( ::objects::Character)(_gthis->game->__Field(HX_("boyfriend",6a,29,b8,e6),::hx::paccDynamic)) )->animation->finishCallback =  ::Dynamic(new _hx_Closure_2(_gthis));
HXLINE( 369)					_gthis->picoCutscene->animation->finishCallback =  ::Dynamic(new _hx_Closure_3(_gthis));
HXLINE( 375)					_gthis->gfCutscene->animation->finishCallback = null();
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_012ed43d484e6e58_337_stressIntro)
HXLINE( 338)			::flixel::tweens::FlxTween_obj::tween(( ( ::flixel::FlxObject)(_gthis->game->__Field(HX_("camFollow",e0,6e,47,22),::hx::paccDynamic)) ), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("x",78,00,00,00),650)
            				->setFixed(1,HX_("y",79,00,00,00),300)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::sineOut_dyn())));
HXLINE( 339)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("zoom",13,a3,f8,50),((Float)1.296))),((Float)2.25), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())));
HXLINE( 341)			_gthis->gfDance->set_visible(false);
HXLINE( 342)			_gthis->gfCutscene->set_alpha(( (Float)(1) ));
HXLINE( 343)			_gthis->gfCutscene->animation->play(HX_("dieBitch",52,c7,3f,0e),true,null(),null());
HXLINE( 344)			_gthis->gfCutscene->animation->finishCallback =  ::Dynamic(new _hx_Closure_4(_gthis));
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_6, ::states::stages::Tank,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_012ed43d484e6e58_382_stressIntro)
HXLINE( 382)			_gthis->zoomBack();
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_7, ::states::stages::Tank,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_012ed43d484e6e58_386_stressIntro)
HXLINE( 387)			_gthis->tankman2->animation->addByPrefix(HX_("lookWhoItIs",74,92,dd,ed),HX_("TANK TALK 3",b5,26,63,8b),24,false,null(),null());
HXLINE( 388)			_gthis->tankman2->animation->play(HX_("lookWhoItIs",74,92,dd,ed),true,null(),null());
HXLINE( 389)			_gthis->tankman2->set_alpha(( (Float)(1) ));
HXLINE( 390)			_gthis->tankman->set_visible(false);
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_8, ::states::stages::Tank,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_012ed43d484e6e58_395_stressIntro)
HXLINE( 395)			( ( ::flixel::FlxObject)(_gthis->game->__Field(HX_("camFollow",e0,6e,47,22),::hx::paccDynamic)) )->setPosition((( ( ::objects::Character)(_gthis->game->__Field(HX_("dad",47,36,4c,00),::hx::paccDynamic)) )->x + 500),(( ( ::objects::Character)(_gthis->game->__Field(HX_("dad",47,36,4c,00),::hx::paccDynamic)) )->y + 170));
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_10, ::states::stages::Tank,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_9, ::states::stages::Tank,_gthis) HXARGC(1)
            			void _hx_run(::String name){
            				HX_GC_STACKFRAME(&_hx_pos_012ed43d484e6e58_403_stressIntro)
HXLINE( 403)				if ((name == HX_("singUPmiss",66,22,08,8a))) {
HXLINE( 405)					( ( ::objects::Character)(_gthis->game->__Field(HX_("boyfriend",6a,29,b8,e6),::hx::paccDynamic)) )->playAnim(HX_("idle",14,a7,b3,45),true,null(),null());
HXLINE( 406)					( ( ::objects::Character)(_gthis->game->__Field(HX_("boyfriend",6a,29,b8,e6),::hx::paccDynamic)) )->animation->_curAnim->finish();
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_012ed43d484e6e58_399_stressIntro)
HXLINE( 400)			( ( ::objects::Character)(_gthis->game->__Field(HX_("boyfriend",6a,29,b8,e6),::hx::paccDynamic)) )->playAnim(HX_("singUPmiss",66,22,08,8a),true,null(),null());
HXLINE( 401)			( ( ::objects::Character)(_gthis->game->__Field(HX_("boyfriend",6a,29,b8,e6),::hx::paccDynamic)) )->animation->finishCallback =  ::Dynamic(new _hx_Closure_9(_gthis));
HXLINE( 410)			( ( ::flixel::FlxObject)(_gthis->game->__Field(HX_("camFollow",e0,6e,47,22),::hx::paccDynamic)) )->setPosition((( ( ::objects::Character)(_gthis->game->__Field(HX_("boyfriend",6a,29,b8,e6),::hx::paccDynamic)) )->x + 280),(( ( ::objects::Character)(_gthis->game->__Field(HX_("boyfriend",6a,29,b8,e6),::hx::paccDynamic)) )->y + 200));
HXLINE( 411)			::flixel::FlxG_obj::camera->snapToTarget();
HXLINE( 412)			_gthis->game->__SetField(HX_("cameraSpeed",a2,8a,af,75),12,::hx::paccDynamic);
HXLINE( 413)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("zoom",13,a3,f8,50),((Float)1.296))),((Float)0.25), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::elasticOut_dyn())));
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_11, ::states::stages::Tank,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_012ed43d484e6e58_418_stressIntro)
HXLINE( 418)			_gthis->zoomBack();
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_012ed43d484e6e58_279_stressIntro)
HXDLIN( 279)		 ::states::stages::Tank _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 280)		this->prepareCutscene();
HXLINE( 282)		this->cutsceneHandler->endTime = ((Float)35.5);
HXLINE( 283)		 ::flixel::FlxSprite fh = this->tankman;
HXDLIN( 283)		fh->set_x((fh->x - ( (Float)(54) )));
HXLINE( 284)		 ::flixel::FlxSprite fh1 = this->tankman;
HXDLIN( 284)		fh1->set_y((fh1->y - ( (Float)(14) )));
HXLINE( 285)		( ( ::flixel::group::FlxTypedSpriteGroup)(this->game->__Field(HX_("gfGroup",a0,b8,ab,b0),::hx::paccDynamic)) )->set_alpha(((Float)0.00001));
HXLINE( 286)		( ( ::flixel::group::FlxTypedSpriteGroup)(this->game->__Field(HX_("boyfriendGroup",75,99,09,ef),::hx::paccDynamic)) )->set_alpha(((Float)0.00001));
HXLINE( 287)		( ( ::flixel::FlxObject)(this->game->__Field(HX_("camFollow",e0,6e,47,22),::hx::paccDynamic)) )->setPosition((( ( ::objects::Character)(this->game->__Field(HX_("dad",47,36,4c,00),::hx::paccDynamic)) )->x + 400),(( ( ::objects::Character)(this->game->__Field(HX_("dad",47,36,4c,00),::hx::paccDynamic)) )->y + 170));
HXLINE( 288)		::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("zoom",13,a3,f8,50),((Float)1.08))),1, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())));
HXLINE( 289)		this->foregroundSprites->forEach( ::Dynamic(new _hx_Closure_0()),null());
HXLINE( 293)		this->precacheSound(HX_("stressCutscene",de,50,b5,25));
HXLINE( 295)		 ::flixel::FlxSprite _hx_tmp = this->tankman2;
HXDLIN( 295)		::String library = null();
HXDLIN( 295)		 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(HX_("cutscenes/stress2",d8,aa,1f,03),null(),true);
HXDLIN( 295)		bool xmlExists = false;
HXDLIN( 295)		::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("cutscenes/stress2",d8,aa,1f,03)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 295)		if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 295)			xmlExists = true;
            		}
HXDLIN( 295)		 ::Dynamic _hx_tmp1;
HXDLIN( 295)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 295)			_hx_tmp1 = imageLoaded;
            		}
            		else {
HXLINE( 295)			_hx_tmp1 = ::backend::Paths_obj::image(HX_("cutscenes/stress2",d8,aa,1f,03),library,true);
            		}
HXDLIN( 295)		::String _hx_tmp2;
HXDLIN( 295)		if (xmlExists) {
HXLINE( 295)			_hx_tmp2 = ::sys::io::File_obj::getContent(xml);
            		}
            		else {
HXLINE( 295)			_hx_tmp2 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("cutscenes/stress2",d8,aa,1f,03)) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            		}
HXDLIN( 295)		_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,_hx_tmp2));
HXLINE( 296)		this->addBehindDad(this->tankman2);
HXLINE( 298)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE( 300)			 ::flixel::FlxSprite _hx_tmp = this->gfDance;
HXDLIN( 300)			::String library = null();
HXDLIN( 300)			 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(HX_("characters/gfTankmen",28,f4,8f,ed),null(),true);
HXDLIN( 300)			bool xmlExists = false;
HXDLIN( 300)			::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("characters/gfTankmen",28,f4,8f,ed)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 300)			if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 300)				xmlExists = true;
            			}
HXDLIN( 300)			 ::Dynamic _hx_tmp1;
HXDLIN( 300)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 300)				_hx_tmp1 = imageLoaded;
            			}
            			else {
HXLINE( 300)				_hx_tmp1 = ::backend::Paths_obj::image(HX_("characters/gfTankmen",28,f4,8f,ed),library,true);
            			}
HXDLIN( 300)			::String _hx_tmp2;
HXDLIN( 300)			if (xmlExists) {
HXLINE( 300)				_hx_tmp2 = ::sys::io::File_obj::getContent(xml);
            			}
            			else {
HXLINE( 300)				_hx_tmp2 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/gfTankmen",28,f4,8f,ed)) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            			}
HXDLIN( 300)			_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,_hx_tmp2));
HXLINE( 301)			this->gfDance->animation->addByPrefix(HX_("dance",33,83,83,d4),HX_("GF Dancing at Gunpoint",2c,35,43,ed),24,true,null(),null());
HXLINE( 302)			this->gfDance->animation->play(HX_("dance",33,83,83,d4),true,null(),null());
HXLINE( 303)			this->addBehindGF(this->gfDance);
            		}
HXLINE( 306)		 ::flixel::FlxSprite _hx_tmp3 = this->gfCutscene;
HXDLIN( 306)		::String library1 = null();
HXDLIN( 306)		 ::flixel::graphics::FlxGraphic imageLoaded1 = ::backend::Paths_obj::image(HX_("cutscenes/stressGF",b9,e4,95,b8),null(),true);
HXDLIN( 306)		bool xmlExists1 = false;
HXDLIN( 306)		::String xml1 = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("cutscenes/stressGF",b9,e4,95,b8)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 306)		if (::sys::FileSystem_obj::exists(xml1)) {
HXLINE( 306)			xmlExists1 = true;
            		}
HXDLIN( 306)		 ::Dynamic _hx_tmp4;
HXDLIN( 306)		if (::hx::IsNotNull( imageLoaded1 )) {
HXLINE( 306)			_hx_tmp4 = imageLoaded1;
            		}
            		else {
HXLINE( 306)			_hx_tmp4 = ::backend::Paths_obj::image(HX_("cutscenes/stressGF",b9,e4,95,b8),library1,true);
            		}
HXDLIN( 306)		::String _hx_tmp5;
HXDLIN( 306)		if (xmlExists1) {
HXLINE( 306)			_hx_tmp5 = ::sys::io::File_obj::getContent(xml1);
            		}
            		else {
HXLINE( 306)			_hx_tmp5 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("cutscenes/stressGF",b9,e4,95,b8)) + HX_(".xml",69,3e,c3,1e)),null(),library1,null());
            		}
HXDLIN( 306)		_hx_tmp3->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp4,_hx_tmp5));
HXLINE( 307)		this->gfCutscene->animation->addByPrefix(HX_("dieBitch",52,c7,3f,0e),HX_("GF STARTS TO TURN PART 1",90,69,e3,fa),24,false,null(),null());
HXLINE( 308)		this->gfCutscene->animation->addByPrefix(HX_("getRektLmao",a1,96,9c,cb),HX_("GF STARTS TO TURN PART 2",91,69,e3,fa),24,false,null(),null());
HXLINE( 309)		this->gfCutscene->animation->play(HX_("dieBitch",52,c7,3f,0e),true,null(),null());
HXLINE( 310)		{
HXLINE( 310)			 ::flixel::animation::FlxAnimationController _this = this->gfCutscene->animation;
HXDLIN( 310)			if (::hx::IsNotNull( _this->_curAnim )) {
HXLINE( 310)				_this->_curAnim->pause();
            			}
            		}
HXLINE( 311)		this->addBehindGF(this->gfCutscene);
HXLINE( 312)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE( 312)			this->gfCutscene->set_alpha(((Float)0.00001));
            		}
HXLINE( 314)		 ::flixel::FlxSprite _hx_tmp6 = this->picoCutscene;
HXDLIN( 314)		_hx_tmp6->set_frames(::animateatlas::AtlasFrameMaker_obj::construct(HX_("cutscenes/stressPico",1f,16,71,7b),null(),null()));
HXLINE( 315)		this->picoCutscene->animation->addByPrefix(HX_("anim",11,86,71,40),HX_("Pico Badass",77,08,c6,36),24,false,null(),null());
HXLINE( 316)		this->addBehindGF(this->picoCutscene);
HXLINE( 317)		this->picoCutscene->set_alpha(((Float)0.00001));
HXLINE( 319)		 ::flixel::FlxSprite _hx_tmp7 = this->boyfriendCutscene;
HXDLIN( 319)		::String library2 = null();
HXDLIN( 319)		 ::flixel::graphics::FlxGraphic imageLoaded2 = ::backend::Paths_obj::image(HX_("characters/BOYFRIEND",65,2c,9c,1b),null(),true);
HXDLIN( 319)		bool xmlExists2 = false;
HXDLIN( 319)		::String xml2 = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("characters/BOYFRIEND",65,2c,9c,1b)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 319)		if (::sys::FileSystem_obj::exists(xml2)) {
HXLINE( 319)			xmlExists2 = true;
            		}
HXDLIN( 319)		 ::Dynamic _hx_tmp8;
HXDLIN( 319)		if (::hx::IsNotNull( imageLoaded2 )) {
HXLINE( 319)			_hx_tmp8 = imageLoaded2;
            		}
            		else {
HXLINE( 319)			_hx_tmp8 = ::backend::Paths_obj::image(HX_("characters/BOYFRIEND",65,2c,9c,1b),library2,true);
            		}
HXDLIN( 319)		::String _hx_tmp9;
HXDLIN( 319)		if (xmlExists2) {
HXLINE( 319)			_hx_tmp9 = ::sys::io::File_obj::getContent(xml2);
            		}
            		else {
HXLINE( 319)			_hx_tmp9 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/BOYFRIEND",65,2c,9c,1b)) + HX_(".xml",69,3e,c3,1e)),null(),library2,null());
            		}
HXDLIN( 319)		_hx_tmp7->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp8,_hx_tmp9));
HXLINE( 320)		this->boyfriendCutscene->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("BF idle dance",03,fa,cc,7f),24,false,null(),null());
HXLINE( 321)		this->boyfriendCutscene->animation->play(HX_("idle",14,a7,b3,45),true,null(),null());
HXLINE( 322)		this->boyfriendCutscene->animation->_curAnim->finish();
HXLINE( 323)		this->addBehindBF(this->boyfriendCutscene);
HXLINE( 325)		 ::flixel::sound::FlxSound cutsceneSnd =  ::flixel::sound::FlxSound_obj::__alloc( HX_CTX );
HXDLIN( 325)		 ::flixel::sound::FlxSound cutsceneSnd1 = cutsceneSnd->loadEmbedded(::backend::Paths_obj::sound(HX_("stressCutscene",de,50,b5,25),null()),null(),null(),null());
HXLINE( 326)		::flixel::FlxG_obj::sound->list->add(cutsceneSnd1).StaticCast<  ::flixel::sound::FlxSound >();
HXLINE( 328)		this->tankman->animation->addByPrefix(HX_("godEffingDamnIt",02,28,cf,6e),HX_("TANK TALK 3",b5,26,63,8b),24,false,null(),null());
HXLINE( 329)		this->tankman->animation->play(HX_("godEffingDamnIt",02,28,cf,6e),true,null(),null());
HXLINE( 331)		this->cutsceneHandler->onStart =  ::Dynamic(new _hx_Closure_1(cutsceneSnd1));
HXLINE( 336)		this->cutsceneHandler->timer(((Float)15.2), ::Dynamic(new _hx_Closure_5(_gthis)));
HXLINE( 380)		this->cutsceneHandler->timer(((Float)17.5), ::Dynamic(new _hx_Closure_6(_gthis)));
HXLINE( 385)		this->cutsceneHandler->timer(((Float)19.5), ::Dynamic(new _hx_Closure_7(_gthis)));
HXLINE( 393)		this->cutsceneHandler->timer(( (Float)(20) ), ::Dynamic(new _hx_Closure_8(_gthis)));
HXLINE( 398)		this->cutsceneHandler->timer(((Float)31.2), ::Dynamic(new _hx_Closure_10(_gthis)));
HXLINE( 416)		this->cutsceneHandler->timer(((Float)32.2), ::Dynamic(new _hx_Closure_11(_gthis)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tank_obj,stressIntro,(void))

void Tank_obj::zoomBack(){
            	HX_STACKFRAME(&_hx_pos_012ed43d484e6e58_423_zoomBack)
HXLINE( 424)		int calledTimes = 0;
HXLINE( 425)		( ( ::flixel::FlxObject)(this->game->__Field(HX_("camFollow",e0,6e,47,22),::hx::paccDynamic)) )->setPosition(630,425);
HXLINE( 426)		::flixel::FlxG_obj::camera->snapToTarget();
HXLINE( 427)		::flixel::FlxG_obj::camera->set_zoom(((Float)0.8));
HXLINE( 428)		this->game->__SetField(HX_("cameraSpeed",a2,8a,af,75),1,::hx::paccDynamic);
HXLINE( 430)		calledTimes = (calledTimes + 1);
HXLINE( 431)		if ((calledTimes > 1)) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			void _hx_run( ::objects::BGSprite spr){
            				HX_STACKFRAME(&_hx_pos_012ed43d484e6e58_435_zoomBack)
HXLINE( 435)				spr->set_y((spr->y - ( (Float)(100) )));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 433)			this->foregroundSprites->forEach( ::Dynamic(new _hx_Closure_0()),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tank_obj,zoomBack,(void))


::hx::ObjectPtr< Tank_obj > Tank_obj::__new() {
	::hx::ObjectPtr< Tank_obj > __this = new Tank_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Tank_obj > Tank_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Tank_obj *__this = (Tank_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tank_obj), true, "states.stages.Tank"));
	*(void **)__this = Tank_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Tank_obj::Tank_obj()
{
}

void Tank_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tank);
	HX_MARK_MEMBER_NAME(tankWatchtower,"tankWatchtower");
	HX_MARK_MEMBER_NAME(tankGround,"tankGround");
	HX_MARK_MEMBER_NAME(tankmanRun,"tankmanRun");
	HX_MARK_MEMBER_NAME(foregroundSprites,"foregroundSprites");
	HX_MARK_MEMBER_NAME(cutsceneHandler,"cutsceneHandler");
	HX_MARK_MEMBER_NAME(tankman,"tankman");
	HX_MARK_MEMBER_NAME(tankman2,"tankman2");
	HX_MARK_MEMBER_NAME(gfDance,"gfDance");
	HX_MARK_MEMBER_NAME(gfCutscene,"gfCutscene");
	HX_MARK_MEMBER_NAME(picoCutscene,"picoCutscene");
	HX_MARK_MEMBER_NAME(boyfriendCutscene,"boyfriendCutscene");
	 ::backend::BaseStage_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Tank_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tankWatchtower,"tankWatchtower");
	HX_VISIT_MEMBER_NAME(tankGround,"tankGround");
	HX_VISIT_MEMBER_NAME(tankmanRun,"tankmanRun");
	HX_VISIT_MEMBER_NAME(foregroundSprites,"foregroundSprites");
	HX_VISIT_MEMBER_NAME(cutsceneHandler,"cutsceneHandler");
	HX_VISIT_MEMBER_NAME(tankman,"tankman");
	HX_VISIT_MEMBER_NAME(tankman2,"tankman2");
	HX_VISIT_MEMBER_NAME(gfDance,"gfDance");
	HX_VISIT_MEMBER_NAME(gfCutscene,"gfCutscene");
	HX_VISIT_MEMBER_NAME(picoCutscene,"picoCutscene");
	HX_VISIT_MEMBER_NAME(boyfriendCutscene,"boyfriendCutscene");
	 ::backend::BaseStage_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Tank_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		if (HX_FIELD_EQ(inName,"tankman") ) { return ::hx::Val( tankman ); }
		if (HX_FIELD_EQ(inName,"gfDance") ) { return ::hx::Val( gfDance ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tankman2") ) { return ::hx::Val( tankman2 ); }
		if (HX_FIELD_EQ(inName,"ughIntro") ) { return ::hx::Val( ughIntro_dyn() ); }
		if (HX_FIELD_EQ(inName,"zoomBack") ) { return ::hx::Val( zoomBack_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gunsIntro") ) { return ::hx::Val( gunsIntro_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tankGround") ) { return ::hx::Val( tankGround ); }
		if (HX_FIELD_EQ(inName,"tankmanRun") ) { return ::hx::Val( tankmanRun ); }
		if (HX_FIELD_EQ(inName,"createPost") ) { return ::hx::Val( createPost_dyn() ); }
		if (HX_FIELD_EQ(inName,"gfCutscene") ) { return ::hx::Val( gfCutscene ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stressIntro") ) { return ::hx::Val( stressIntro_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"picoCutscene") ) { return ::hx::Val( picoCutscene ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"countdownTick") ) { return ::hx::Val( countdownTick_dyn() ); }
		if (HX_FIELD_EQ(inName,"everyoneDance") ) { return ::hx::Val( everyoneDance_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"tankWatchtower") ) { return ::hx::Val( tankWatchtower ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cutsceneHandler") ) { return ::hx::Val( cutsceneHandler ); }
		if (HX_FIELD_EQ(inName,"prepareCutscene") ) { return ::hx::Val( prepareCutscene_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"foregroundSprites") ) { return ::hx::Val( foregroundSprites ); }
		if (HX_FIELD_EQ(inName,"boyfriendCutscene") ) { return ::hx::Val( boyfriendCutscene ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Tank_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"tankman") ) { tankman=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gfDance") ) { gfDance=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tankman2") ) { tankman2=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tankGround") ) { tankGround=inValue.Cast<  ::states::stages::objects::BackgroundTank >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tankmanRun") ) { tankmanRun=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gfCutscene") ) { gfCutscene=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"picoCutscene") ) { picoCutscene=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"tankWatchtower") ) { tankWatchtower=inValue.Cast<  ::objects::BGSprite >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cutsceneHandler") ) { cutsceneHandler=inValue.Cast<  ::cutscenes::CutsceneHandler >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"foregroundSprites") ) { foregroundSprites=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"boyfriendCutscene") ) { boyfriendCutscene=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tank_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("tankWatchtower",e4,90,73,b1));
	outFields->push(HX_("tankGround",11,5d,19,55));
	outFields->push(HX_("tankmanRun",3b,77,15,bc));
	outFields->push(HX_("foregroundSprites",4b,a6,ec,f3));
	outFields->push(HX_("cutsceneHandler",60,c0,ea,b5));
	outFields->push(HX_("tankman",f0,7d,78,3d));
	outFields->push(HX_("tankman2",42,b4,f5,8b));
	outFields->push(HX_("gfDance",94,88,3a,eb));
	outFields->push(HX_("gfCutscene",c9,e9,e0,3d));
	outFields->push(HX_("picoCutscene",8f,ae,2d,46));
	outFields->push(HX_("boyfriendCutscene",14,7c,39,34));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Tank_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::objects::BGSprite */ ,(int)offsetof(Tank_obj,tankWatchtower),HX_("tankWatchtower",e4,90,73,b1)},
	{::hx::fsObject /*  ::states::stages::objects::BackgroundTank */ ,(int)offsetof(Tank_obj,tankGround),HX_("tankGround",11,5d,19,55)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(Tank_obj,tankmanRun),HX_("tankmanRun",3b,77,15,bc)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(Tank_obj,foregroundSprites),HX_("foregroundSprites",4b,a6,ec,f3)},
	{::hx::fsObject /*  ::cutscenes::CutsceneHandler */ ,(int)offsetof(Tank_obj,cutsceneHandler),HX_("cutsceneHandler",60,c0,ea,b5)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Tank_obj,tankman),HX_("tankman",f0,7d,78,3d)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Tank_obj,tankman2),HX_("tankman2",42,b4,f5,8b)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Tank_obj,gfDance),HX_("gfDance",94,88,3a,eb)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Tank_obj,gfCutscene),HX_("gfCutscene",c9,e9,e0,3d)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Tank_obj,picoCutscene),HX_("picoCutscene",8f,ae,2d,46)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Tank_obj,boyfriendCutscene),HX_("boyfriendCutscene",14,7c,39,34)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Tank_obj_sStaticStorageInfo = 0;
#endif

static ::String Tank_obj_sMemberFields[] = {
	HX_("tankWatchtower",e4,90,73,b1),
	HX_("tankGround",11,5d,19,55),
	HX_("tankmanRun",3b,77,15,bc),
	HX_("foregroundSprites",4b,a6,ec,f3),
	HX_("create",fc,66,0f,7c),
	HX_("createPost",7c,45,ea,5c),
	HX_("countdownTick",ae,ec,5f,18),
	HX_("beatHit",7d,ea,04,74),
	HX_("everyoneDance",88,45,07,75),
	HX_("cutsceneHandler",60,c0,ea,b5),
	HX_("tankman",f0,7d,78,3d),
	HX_("tankman2",42,b4,f5,8b),
	HX_("gfDance",94,88,3a,eb),
	HX_("gfCutscene",c9,e9,e0,3d),
	HX_("picoCutscene",8f,ae,2d,46),
	HX_("boyfriendCutscene",14,7c,39,34),
	HX_("prepareCutscene",31,c9,5f,aa),
	HX_("ughIntro",b6,b0,9c,c5),
	HX_("gunsIntro",79,27,c1,2d),
	HX_("stressIntro",98,59,8d,80),
	HX_("zoomBack",da,2e,0d,9a),
	::String(null()) };

::hx::Class Tank_obj::__mClass;

void Tank_obj::__register()
{
	Tank_obj _hx_dummy;
	Tank_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.stages.Tank",f7,88,91,96);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Tank_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Tank_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tank_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tank_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
} // end namespace stages
