#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_BaseStage
#include <backend/BaseStage.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_MusicBeatSubstate
#include <backend/MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
#endif
#ifndef INCLUDED_cutscenes_DialogueBox
#include <cutscenes/DialogueBox.h>
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
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_FlxTrail
#include <flixel/addons/effects/FlxTrail.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
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
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
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
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_states_stages_SchoolEvil
#include <states/stages/SchoolEvil.h>
#endif
#ifndef INCLUDED_substates_GameOverSubstate
#include <substates/GameOverSubstate.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_714d70debec6fef1_14_new,"states.stages.SchoolEvil","new",0xd450b667,"states.stages.SchoolEvil.new","states/stages/SchoolEvil.hx",14,0x8cd50cc9)
HX_LOCAL_STACK_FRAME(_hx_pos_714d70debec6fef1_17_create,"states.stages.SchoolEvil","create",0x5946bf55,"states.stages.SchoolEvil.create","states/stages/SchoolEvil.hx",17,0x8cd50cc9)
static const ::String _hx_array_data_d335f6f5_2[] = {
	HX_("background 2",80,07,9d,17),
};
HX_LOCAL_STACK_FRAME(_hx_pos_714d70debec6fef1_47_createPost,"states.stages.SchoolEvil","createPost",0x23573e55,"states.stages.SchoolEvil.createPost","states/stages/SchoolEvil.hx",47,0x8cd50cc9)
HX_LOCAL_STACK_FRAME(_hx_pos_714d70debec6fef1_56_eventCalled,"states.stages.SchoolEvil","eventCalled",0xe322653e,"states.stages.SchoolEvil.eventCalled","states/stages/SchoolEvil.hx",56,0x8cd50cc9)
HX_LOCAL_STACK_FRAME(_hx_pos_714d70debec6fef1_67_eventPushed,"states.stages.SchoolEvil","eventPushed",0x9e67257a,"states.stages.SchoolEvil.eventPushed","states/stages/SchoolEvil.hx",67,0x8cd50cc9)
HX_LOCAL_STACK_FRAME(_hx_pos_714d70debec6fef1_81_eventPushed,"states.stages.SchoolEvil","eventPushed",0x9e67257a,"states.stages.SchoolEvil.eventPushed","states/stages/SchoolEvil.hx",81,0x8cd50cc9)
static const ::String _hx_array_data_d335f6f5_7[] = {
	HX_("BG freaks glitch instance",4b,b4,f8,52),
};
HX_LOCAL_STACK_FRAME(_hx_pos_714d70debec6fef1_91_initDoof,"states.stages.SchoolEvil","initDoof",0x6326012b,"states.stages.SchoolEvil.initDoof","states/stages/SchoolEvil.hx",91,0x8cd50cc9)
HX_LOCAL_STACK_FRAME(_hx_pos_714d70debec6fef1_130_schoolIntro,"states.stages.SchoolEvil","schoolIntro",0x203d225f,"states.stages.SchoolEvil.schoolIntro","states/stages/SchoolEvil.hx",130,0x8cd50cc9)
HX_LOCAL_STACK_FRAME(_hx_pos_714d70debec6fef1_135_schoolIntro,"states.stages.SchoolEvil","schoolIntro",0x203d225f,"states.stages.SchoolEvil.schoolIntro","states/stages/SchoolEvil.hx",135,0x8cd50cc9)
HX_LOCAL_STACK_FRAME(_hx_pos_714d70debec6fef1_151_schoolIntro,"states.stages.SchoolEvil","schoolIntro",0x203d225f,"states.stages.SchoolEvil.schoolIntro","states/stages/SchoolEvil.hx",151,0x8cd50cc9)
HX_LOCAL_STACK_FRAME(_hx_pos_714d70debec6fef1_145_schoolIntro,"states.stages.SchoolEvil","schoolIntro",0x203d225f,"states.stages.SchoolEvil.schoolIntro","states/stages/SchoolEvil.hx",145,0x8cd50cc9)
HX_LOCAL_STACK_FRAME(_hx_pos_714d70debec6fef1_158_schoolIntro,"states.stages.SchoolEvil","schoolIntro",0x203d225f,"states.stages.SchoolEvil.schoolIntro","states/stages/SchoolEvil.hx",158,0x8cd50cc9)
HX_LOCAL_STACK_FRAME(_hx_pos_714d70debec6fef1_112_schoolIntro,"states.stages.SchoolEvil","schoolIntro",0x203d225f,"states.stages.SchoolEvil.schoolIntro","states/stages/SchoolEvil.hx",112,0x8cd50cc9)
namespace states{
namespace stages{

void SchoolEvil_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_714d70debec6fef1_14_new)
HXLINE(  89)		this->doof = null();
HXLINE(  14)		super::__construct();
            	}

Dynamic SchoolEvil_obj::__CreateEmpty() { return new SchoolEvil_obj; }

void *SchoolEvil_obj::_hx_vtable = 0;

Dynamic SchoolEvil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SchoolEvil_obj > _hx_result = new SchoolEvil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SchoolEvil_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x49f7ab3f) {
		if (inClassId<=(int)0x230cab9d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x230cab9d;
		} else {
			return inClassId==(int)0x49f7ab3f;
		}
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void SchoolEvil_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_714d70debec6fef1_17_create)
HXLINE(  18)		 ::Dynamic _song = ::states::PlayState_obj::SONG;
HXLINE(  19)		bool _hx_tmp;
HXDLIN(  19)		if (::hx::IsNotNull( _song->__Field(HX_("gameOverSound",89,f8,70,3c),::hx::paccDynamic) )) {
HXLINE(  19)			_hx_tmp = (::StringTools_obj::trim(( (::String)(_song->__Field(HX_("gameOverSound",89,f8,70,3c),::hx::paccDynamic)) )).length < 1);
            		}
            		else {
HXLINE(  19)			_hx_tmp = true;
            		}
HXDLIN(  19)		if (_hx_tmp) {
HXLINE(  19)			::substates::GameOverSubstate_obj::deathSoundName = HX_("fnf_loss_sfx-pixel",23,e5,94,32);
            		}
HXLINE(  20)		bool _hx_tmp1;
HXDLIN(  20)		if (::hx::IsNotNull( _song->__Field(HX_("gameOverLoop",ea,8f,ff,6a),::hx::paccDynamic) )) {
HXLINE(  20)			_hx_tmp1 = (::StringTools_obj::trim(( (::String)(_song->__Field(HX_("gameOverLoop",ea,8f,ff,6a),::hx::paccDynamic)) )).length < 1);
            		}
            		else {
HXLINE(  20)			_hx_tmp1 = true;
            		}
HXDLIN(  20)		if (_hx_tmp1) {
HXLINE(  20)			::substates::GameOverSubstate_obj::loopSoundName = HX_("gameOver-pixel",1f,66,58,00);
            		}
HXLINE(  21)		bool _hx_tmp2;
HXDLIN(  21)		if (::hx::IsNotNull( _song->__Field(HX_("gameOverEnd",15,2d,a9,8d),::hx::paccDynamic) )) {
HXLINE(  21)			_hx_tmp2 = (::StringTools_obj::trim(( (::String)(_song->__Field(HX_("gameOverEnd",15,2d,a9,8d),::hx::paccDynamic)) )).length < 1);
            		}
            		else {
HXLINE(  21)			_hx_tmp2 = true;
            		}
HXDLIN(  21)		if (_hx_tmp2) {
HXLINE(  21)			::substates::GameOverSubstate_obj::endSoundName = HX_("gameOverEnd-pixel",0e,ae,3e,22);
            		}
HXLINE(  22)		bool _hx_tmp3;
HXDLIN(  22)		if (::hx::IsNotNull( _song->__Field(HX_("gameOverChar",5c,48,07,65),::hx::paccDynamic) )) {
HXLINE(  22)			_hx_tmp3 = (::StringTools_obj::trim(( (::String)(_song->__Field(HX_("gameOverChar",5c,48,07,65),::hx::paccDynamic)) )).length < 1);
            		}
            		else {
HXLINE(  22)			_hx_tmp3 = true;
            		}
HXDLIN(  22)		if (_hx_tmp3) {
HXLINE(  22)			::substates::GameOverSubstate_obj::characterName = HX_("bf-pixel-dead",34,d0,3d,c4);
            		}
HXLINE(  24)		int posX = 400;
HXLINE(  25)		int posY = 200;
HXLINE(  27)		 ::objects::BGSprite bg;
HXLINE(  28)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE(  29)			bg =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("weeb/animatedEvilSchool",8f,dd,53,cd),posX,posY,((Float)0.8),((Float)0.9),::Array_obj< ::String >::fromData( _hx_array_data_d335f6f5_2,1),true);
            		}
            		else {
HXLINE(  31)			bg =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("weeb/animatedEvilSchool_low",a4,ea,70,96),posX,posY,((Float)0.8),((Float)0.9),null(),null());
            		}
HXLINE(  33)		{
HXLINE(  33)			 ::flixel::math::FlxBasePoint this1 = bg->scale;
HXDLIN(  33)			Float y = ::states::PlayState_obj::daPixelZoom;
HXDLIN(  33)			this1->set_x(::states::PlayState_obj::daPixelZoom);
HXDLIN(  33)			this1->set_y(y);
            		}
HXLINE(  34)		bg->set_antialiasing(false);
HXLINE(  35)		this->add(bg);
HXLINE(  36)		this->setDefaultGF(HX_("gf-pixel",98,3e,8c,55));
HXLINE(  38)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp4 = ::flixel::FlxG_obj::sound;
HXDLIN(  38)		::String library = null();
HXDLIN(  38)		 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("LunchboxScary",57,33,01,24),library);
HXDLIN(  38)		_hx_tmp4->playMusic(file,0,null(),null());
HXLINE(  39)		{
HXLINE(  39)			 ::flixel::sound::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  39)			 ::Dynamic onComplete = null();
HXDLIN(  39)			if (::hx::IsNull( _this->_channel )) {
HXLINE(  39)				_this->play(null(),null(),null());
            			}
HXDLIN(  39)			if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE(  39)				_this->fadeTween->cancel();
            			}
HXDLIN(  39)			_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.8),1, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            		}
HXLINE(  40)		bool _hx_tmp5;
HXDLIN(  40)		if (::states::PlayState_obj::isStoryMode) {
HXLINE(  40)			_hx_tmp5 = !(::states::PlayState_obj::seenCutscene);
            		}
            		else {
HXLINE(  40)			_hx_tmp5 = false;
            		}
HXDLIN(  40)		if (_hx_tmp5) {
HXLINE(  42)			this->initDoof();
HXLINE(  43)			this->setStartCallback(this->schoolIntro_dyn());
            		}
            	}


void SchoolEvil_obj::createPost(){
            	HX_GC_STACKFRAME(&_hx_pos_714d70debec6fef1_47_createPost)
HXLINE(  48)		 ::flixel::addons::effects::FlxTrail trail =  ::flixel::addons::effects::FlxTrail_obj::__alloc( HX_CTX ,( ( ::objects::Character)(this->game->__Field(HX_("dad",47,36,4c,00),::hx::paccDynamic)) ),null(),4,24,((Float)0.3),((Float)0.069));
HXLINE(  49)		this->addBehindDad(trail);
            	}


void SchoolEvil_obj::eventCalled(::String eventName,::String value1,::String value2, ::Dynamic flValue1, ::Dynamic flValue2,Float strumTime){
            	HX_STACKFRAME(&_hx_pos_714d70debec6fef1_56_eventCalled)
HXDLIN(  56)		if ((eventName == HX_("Trigger BG Ghouls",e1,1f,5c,88))) {
HXLINE(  59)			if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE(  61)				this->bgGhouls->dance(true);
HXLINE(  62)				this->bgGhouls->set_visible(true);
            			}
            		}
            	}


void SchoolEvil_obj::eventPushed( ::Dynamic event){
            	HX_GC_STACKFRAME(&_hx_pos_714d70debec6fef1_67_eventPushed)
HXDLIN(  67)		 ::states::stages::SchoolEvil _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  69)		if (::hx::IsEq( event->__Field(HX_("event",1a,c8,c4,75),::hx::paccDynamic),HX_("Trigger BG Ghouls",e1,1f,5c,88) )) {
HXLINE(  72)			if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::stages::SchoolEvil,_gthis) HXARGC(1)
            				void _hx_run(::String name){
            					HX_GC_STACKFRAME(&_hx_pos_714d70debec6fef1_81_eventPushed)
HXLINE(  81)					if ((name == HX_("BG freaks glitch instance",4b,b4,f8,52))) {
HXLINE(  82)						_gthis->bgGhouls->set_visible(false);
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  74)				this->bgGhouls =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("weeb/bgGhouls",57,51,c2,ba),-100,190,((Float)0.9),((Float)0.9),::Array_obj< ::String >::fromData( _hx_array_data_d335f6f5_7,1),false);
HXLINE(  75)				 ::objects::BGSprite _hx_tmp = this->bgGhouls;
HXDLIN(  75)				Float _hx_tmp1 = this->bgGhouls->get_width();
HXDLIN(  75)				_hx_tmp->setGraphicSize(::Std_obj::_hx_int((_hx_tmp1 * ::states::PlayState_obj::daPixelZoom)),null());
HXLINE(  76)				this->bgGhouls->updateHitbox();
HXLINE(  77)				this->bgGhouls->set_visible(false);
HXLINE(  78)				this->bgGhouls->set_antialiasing(false);
HXLINE(  79)				this->bgGhouls->animation->finishCallback =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE(  84)				this->addBehindGF(this->bgGhouls);
            			}
            		}
            	}


void SchoolEvil_obj::initDoof(){
            	HX_GC_STACKFRAME(&_hx_pos_714d70debec6fef1_91_initDoof)
HXLINE(  92)		::String library = null();
HXDLIN(  92)		::String file = ::backend::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + (((( (::String)(this->game->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) ) + HX_("/",2f,00,00,00)) + ( (::String)(this->game->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) )) + HX_("Dialogue",38,e9,45,81))) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library,null());
HXLINE(  94)		if (!(::sys::FileSystem_obj::exists(file))) {
HXLINE(  99)			this->startCountdown();
HXLINE( 100)			return;
            		}
HXLINE( 103)		::String path = file;
HXDLIN( 103)		::String daList = null();
HXDLIN( 103)		::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXDLIN( 103)		path = formatted->__get((formatted->length - 1));
HXDLIN( 103)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 103)			daList = ::sys::io::File_obj::getContent(path);
            		}
HXDLIN( 103)		::Array< ::String > _hx_tmp;
HXDLIN( 103)		if (::hx::IsNotNull( daList )) {
HXLINE( 103)			::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXDLIN( 103)			daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXDLIN( 103)			{
HXLINE( 103)				int _g = 0;
HXDLIN( 103)				int _g1 = daList1->length;
HXDLIN( 103)				while((_g < _g1)){
HXLINE( 103)					_g = (_g + 1);
HXDLIN( 103)					int i = (_g - 1);
HXDLIN( 103)					daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            				}
            			}
HXDLIN( 103)			_hx_tmp = daList1;
            		}
            		else {
HXLINE( 103)			_hx_tmp = ::Array_obj< ::String >::__new(0);
            		}
HXDLIN( 103)		this->doof =  ::cutscenes::DialogueBox_obj::__alloc( HX_CTX ,false,_hx_tmp);
HXLINE( 104)		this->doof->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,( ( ::flixel::FlxCamera)(this->game->__Field(HX_("camHUD",e8,2b,76,b7),::hx::paccDynamic)) )));
HXLINE( 105)		{
HXLINE( 105)			 ::flixel::math::FlxBasePoint this1 = this->doof->scrollFactor;
HXDLIN( 105)			this1->set_x(( (Float)(0) ));
HXDLIN( 105)			this1->set_y(( (Float)(0) ));
            		}
HXLINE( 106)		this->doof->finishThing = this->startCountdown_dyn();
HXLINE( 107)		this->doof->nextDialogueThing = ::states::PlayState_obj::instance->startNextDialogue_dyn();
HXLINE( 108)		this->doof->skipDialogueThing = ::states::PlayState_obj::instance->skipDialogue_dyn();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SchoolEvil_obj,initDoof,(void))

void SchoolEvil_obj::schoolIntro(){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_4, ::states::stages::SchoolEvil,_gthis, ::flixel::FlxSprite,red1, ::flixel::FlxSprite,senpaiEvil) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_714d70debec6fef1_130_schoolIntro)
HXLINE( 130)			if (::hx::IsNotNull( _gthis->doof )) {
            				HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_3, ::states::stages::SchoolEvil,_gthis, ::flixel::FlxSprite,red1, ::flixel::FlxSprite,senpaiEvil) HXARGC(1)
            				void _hx_run( ::flixel::util::FlxTimer swagTimer){
            					HX_GC_STACKFRAME(&_hx_pos_714d70debec6fef1_135_schoolIntro)
HXLINE( 136)					senpaiEvil->set_alpha((senpaiEvil->alpha + ((Float)0.15)));
HXLINE( 137)					if ((senpaiEvil->alpha < 1)) {
HXLINE( 139)						swagTimer->reset(null());
            					}
            					else {
            						HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1, ::states::stages::SchoolEvil,_gthis, ::flixel::FlxSprite,red1, ::flixel::FlxSprite,senpaiEvil) HXARGC(0)
            						void _hx_run(){
            							HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::stages::SchoolEvil,_gthis) HXARGC(0)
            							void _hx_run(){
            								HX_GC_STACKFRAME(&_hx_pos_714d70debec6fef1_151_schoolIntro)
HXLINE( 152)								_gthis->add(_gthis->doof);
HXLINE( 153)								( ( ::flixel::FlxCamera)(_gthis->game->__Field(HX_("camHUD",e8,2b,76,b7),::hx::paccDynamic)) )->set_visible(true);
            							}
            							HX_END_LOCAL_FUNC0((void))

            							HX_GC_STACKFRAME(&_hx_pos_714d70debec6fef1_145_schoolIntro)
HXLINE( 146)							_gthis->remove(senpaiEvil);
HXLINE( 147)							senpaiEvil->destroy();
HXLINE( 148)							_gthis->remove(red1);
HXLINE( 149)							red1->destroy();
HXLINE( 150)							::flixel::FlxG_obj::camera->fade(-1,((Float)0.01),true, ::Dynamic(new _hx_Closure_0(_gthis)),true);
            						}
            						HX_END_LOCAL_FUNC0((void))

            						HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            						void _hx_run( ::flixel::util::FlxTimer deadTime){
            							HX_GC_STACKFRAME(&_hx_pos_714d70debec6fef1_158_schoolIntro)
HXLINE( 158)							::flixel::FlxG_obj::camera->fade(-1,((Float)1.6),false,null(),null());
            						}
            						HX_END_LOCAL_FUNC1((void))

HXLINE( 143)						senpaiEvil->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 144)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 144)						_hx_tmp->play(::backend::Paths_obj::sound(HX_("Senpai_Dies",56,a2,b9,ec),null()),1,false,null(),true, ::Dynamic(new _hx_Closure_1(_gthis,red1,senpaiEvil)));
HXLINE( 156)						 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)3.2), ::Dynamic(new _hx_Closure_2()),null());
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 132)				_gthis->add(senpaiEvil);
HXLINE( 133)				senpaiEvil->set_alpha(( (Float)(0) ));
HXLINE( 134)				 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.3), ::Dynamic(new _hx_Closure_3(_gthis,red1,senpaiEvil)),null());
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_714d70debec6fef1_112_schoolIntro)
HXDLIN( 112)		 ::states::stages::SchoolEvil _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 113)		this->game->__SetField(HX_("inCutscene",8f,21,01,56),true,::hx::paccDynamic);
HXLINE( 114)		 ::flixel::FlxSprite red =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-100,-100,null());
HXDLIN( 114)		 ::flixel::FlxSprite red1 = red->makeGraphic((::flixel::FlxG_obj::width * 2),(::flixel::FlxG_obj::height * 2),-58575,null(),null());
HXLINE( 115)		{
HXLINE( 115)			 ::flixel::math::FlxBasePoint this1 = red1->scrollFactor;
HXDLIN( 115)			this1->set_x(( (Float)(0) ));
HXDLIN( 115)			this1->set_y(( (Float)(0) ));
            		}
HXLINE( 116)		this->add(red1);
HXLINE( 118)		 ::flixel::FlxSprite senpaiEvil =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 119)		 ::flixel::FlxSprite senpaiEvil1 = senpaiEvil;
HXDLIN( 119)		::String library = null();
HXDLIN( 119)		 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(HX_("weeb/senpaiCrazy",d1,d1,90,fa),null(),true);
HXDLIN( 119)		bool xmlExists = false;
HXDLIN( 119)		::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/senpaiCrazy",d1,d1,90,fa)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 119)		if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 119)			xmlExists = true;
            		}
HXDLIN( 119)		 ::Dynamic _hx_tmp;
HXDLIN( 119)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 119)			_hx_tmp = imageLoaded;
            		}
            		else {
HXLINE( 119)			_hx_tmp = ::backend::Paths_obj::image(HX_("weeb/senpaiCrazy",d1,d1,90,fa),library,true);
            		}
HXDLIN( 119)		::String _hx_tmp1;
HXDLIN( 119)		if (xmlExists) {
HXLINE( 119)			_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            		}
            		else {
HXLINE( 119)			_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/senpaiCrazy",d1,d1,90,fa)) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            		}
HXDLIN( 119)		senpaiEvil1->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 120)		senpaiEvil->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Senpai Pre Explosion",54,71,6e,81),24,false,null(),null());
HXLINE( 121)		 ::flixel::FlxSprite senpaiEvil2 = senpaiEvil;
HXDLIN( 121)		senpaiEvil2->setGraphicSize(::Std_obj::_hx_int((senpaiEvil->get_width() * ( (Float)(6) ))),null());
HXLINE( 122)		{
HXLINE( 122)			 ::flixel::math::FlxBasePoint this2 = senpaiEvil->scrollFactor;
HXDLIN( 122)			this2->set_x(( (Float)(0) ));
HXDLIN( 122)			this2->set_y(( (Float)(0) ));
            		}
HXLINE( 123)		senpaiEvil->updateHitbox();
HXLINE( 124)		{
HXLINE( 124)			int axes = 17;
HXDLIN( 124)			bool _hx_tmp2;
HXDLIN( 124)			if ((axes != 1)) {
HXLINE( 124)				_hx_tmp2 = (axes == 17);
            			}
            			else {
HXLINE( 124)				_hx_tmp2 = true;
            			}
HXDLIN( 124)			if (_hx_tmp2) {
HXLINE( 124)				 ::flixel::FlxSprite senpaiEvil1 = senpaiEvil;
HXDLIN( 124)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 124)				senpaiEvil1->set_x(((( (Float)(_hx_tmp) ) - senpaiEvil->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 124)			bool _hx_tmp3;
HXDLIN( 124)			if ((axes != 16)) {
HXLINE( 124)				_hx_tmp3 = (axes == 17);
            			}
            			else {
HXLINE( 124)				_hx_tmp3 = true;
            			}
HXDLIN( 124)			if (_hx_tmp3) {
HXLINE( 124)				 ::flixel::FlxSprite senpaiEvil1 = senpaiEvil;
HXDLIN( 124)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 124)				senpaiEvil1->set_y(((( (Float)(_hx_tmp) ) - senpaiEvil->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 125)		senpaiEvil->set_x((senpaiEvil->x + 300));
HXLINE( 126)		( ( ::flixel::FlxCamera)(this->game->__Field(HX_("camHUD",e8,2b,76,b7),::hx::paccDynamic)) )->set_visible(false);
HXLINE( 128)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)2.1), ::Dynamic(new _hx_Closure_4(_gthis,red1,senpaiEvil)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(SchoolEvil_obj,schoolIntro,(void))


::hx::ObjectPtr< SchoolEvil_obj > SchoolEvil_obj::__new() {
	::hx::ObjectPtr< SchoolEvil_obj > __this = new SchoolEvil_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SchoolEvil_obj > SchoolEvil_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SchoolEvil_obj *__this = (SchoolEvil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SchoolEvil_obj), true, "states.stages.SchoolEvil"));
	*(void **)__this = SchoolEvil_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SchoolEvil_obj::SchoolEvil_obj()
{
}

void SchoolEvil_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SchoolEvil);
	HX_MARK_MEMBER_NAME(bgGhouls,"bgGhouls");
	HX_MARK_MEMBER_NAME(doof,"doof");
	 ::backend::BaseStage_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SchoolEvil_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bgGhouls,"bgGhouls");
	HX_VISIT_MEMBER_NAME(doof,"doof");
	 ::backend::BaseStage_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SchoolEvil_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"doof") ) { return ::hx::Val( doof ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bgGhouls") ) { return ::hx::Val( bgGhouls ); }
		if (HX_FIELD_EQ(inName,"initDoof") ) { return ::hx::Val( initDoof_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createPost") ) { return ::hx::Val( createPost_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"eventCalled") ) { return ::hx::Val( eventCalled_dyn() ); }
		if (HX_FIELD_EQ(inName,"eventPushed") ) { return ::hx::Val( eventPushed_dyn() ); }
		if (HX_FIELD_EQ(inName,"schoolIntro") ) { return ::hx::Val( schoolIntro_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SchoolEvil_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"doof") ) { doof=inValue.Cast<  ::cutscenes::DialogueBox >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bgGhouls") ) { bgGhouls=inValue.Cast<  ::objects::BGSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SchoolEvil_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bgGhouls",73,3f,2d,2f));
	outFields->push(HX_("doof",62,f1,6d,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SchoolEvil_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::objects::BGSprite */ ,(int)offsetof(SchoolEvil_obj,bgGhouls),HX_("bgGhouls",73,3f,2d,2f)},
	{::hx::fsObject /*  ::cutscenes::DialogueBox */ ,(int)offsetof(SchoolEvil_obj,doof),HX_("doof",62,f1,6d,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SchoolEvil_obj_sStaticStorageInfo = 0;
#endif

static ::String SchoolEvil_obj_sMemberFields[] = {
	HX_("create",fc,66,0f,7c),
	HX_("createPost",7c,45,ea,5c),
	HX_("bgGhouls",73,3f,2d,2f),
	HX_("eventCalled",37,a0,35,0a),
	HX_("eventPushed",73,60,7a,c5),
	HX_("doof",62,f1,6d,42),
	HX_("initDoof",92,20,25,47),
	HX_("schoolIntro",58,5d,50,47),
	::String(null()) };

::hx::Class SchoolEvil_obj::__mClass;

void SchoolEvil_obj::__register()
{
	SchoolEvil_obj _hx_dummy;
	SchoolEvil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.stages.SchoolEvil",f5,f6,35,d3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SchoolEvil_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SchoolEvil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SchoolEvil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SchoolEvil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
} // end namespace stages
