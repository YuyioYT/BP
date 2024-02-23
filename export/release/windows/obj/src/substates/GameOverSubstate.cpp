#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_Conductor
#include <backend/Conductor.h>
#endif
#ifndef INCLUDED_backend_Controls
#include <backend/Controls.h>
#endif
#ifndef INCLUDED_backend_DiscordClient
#include <backend/DiscordClient.h>
#endif
#ifndef INCLUDED_backend_Mods
#include <backend/Mods.h>
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
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
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
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_states_FreeplayState
#include <states/FreeplayState.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_states_StoryMenuState
#include <states/StoryMenuState.h>
#endif
#ifndef INCLUDED_substates_GameOverSubstate
#include <substates/GameOverSubstate.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_745da79ee01f66a5_13_new,"substates.GameOverSubstate","new",0xbef04ad5,"substates.GameOverSubstate.new","substates/GameOverSubstate.hx",13,0xec6a4ada)
HX_LOCAL_STACK_FRAME(_hx_pos_745da79ee01f66a5_46_create,"substates.GameOverSubstate","create",0xb85123a7,"substates.GameOverSubstate.create","substates/GameOverSubstate.hx",46,0xec6a4ada)
HX_LOCAL_STACK_FRAME(_hx_pos_745da79ee01f66a5_81_update,"substates.GameOverSubstate","update",0xc34742b4,"substates.GameOverSubstate.update","substates/GameOverSubstate.hx",81,0xec6a4ada)
HX_LOCAL_STACK_FRAME(_hx_pos_745da79ee01f66a5_135_update,"substates.GameOverSubstate","update",0xc34742b4,"substates.GameOverSubstate.update","substates/GameOverSubstate.hx",135,0xec6a4ada)
HX_LOCAL_STACK_FRAME(_hx_pos_745da79ee01f66a5_160_coolStartDeath,"substates.GameOverSubstate","coolStartDeath",0x66d8bb46,"substates.GameOverSubstate.coolStartDeath","substates/GameOverSubstate.hx",160,0xec6a4ada)
HX_LOCAL_STACK_FRAME(_hx_pos_745da79ee01f66a5_165_endBullshit,"substates.GameOverSubstate","endBullshit",0x777d6ec3,"substates.GameOverSubstate.endBullshit","substates/GameOverSubstate.hx",165,0xec6a4ada)
HX_LOCAL_STACK_FRAME(_hx_pos_745da79ee01f66a5_175_endBullshit,"substates.GameOverSubstate","endBullshit",0x777d6ec3,"substates.GameOverSubstate.endBullshit","substates/GameOverSubstate.hx",175,0xec6a4ada)
HX_LOCAL_STACK_FRAME(_hx_pos_745da79ee01f66a5_173_endBullshit,"substates.GameOverSubstate","endBullshit",0x777d6ec3,"substates.GameOverSubstate.endBullshit","substates/GameOverSubstate.hx",173,0xec6a4ada)
HX_LOCAL_STACK_FRAME(_hx_pos_745da79ee01f66a5_183_destroy,"substates.GameOverSubstate","destroy",0xa1c985ef,"substates.GameOverSubstate.destroy","substates/GameOverSubstate.hx",183,0xec6a4ada)
HX_LOCAL_STACK_FRAME(_hx_pos_745da79ee01f66a5_29_resetVariables,"substates.GameOverSubstate","resetVariables",0xf2722693,"substates.GameOverSubstate.resetVariables","substates/GameOverSubstate.hx",29,0xec6a4ada)
HX_LOCAL_STACK_FRAME(_hx_pos_745da79ee01f66a5_22_boot,"substates.GameOverSubstate","boot",0x4b6a301d,"substates.GameOverSubstate.boot","substates/GameOverSubstate.hx",22,0xec6a4ada)
HX_LOCAL_STACK_FRAME(_hx_pos_745da79ee01f66a5_23_boot,"substates.GameOverSubstate","boot",0x4b6a301d,"substates.GameOverSubstate.boot","substates/GameOverSubstate.hx",23,0xec6a4ada)
HX_LOCAL_STACK_FRAME(_hx_pos_745da79ee01f66a5_24_boot,"substates.GameOverSubstate","boot",0x4b6a301d,"substates.GameOverSubstate.boot","substates/GameOverSubstate.hx",24,0xec6a4ada)
HX_LOCAL_STACK_FRAME(_hx_pos_745da79ee01f66a5_25_boot,"substates.GameOverSubstate","boot",0x4b6a301d,"substates.GameOverSubstate.boot","substates/GameOverSubstate.hx",25,0xec6a4ada)
namespace substates{

void GameOverSubstate_obj::__construct(Float x,Float y,Float camX,Float camY){
            	HX_GC_STACKFRAME(&_hx_pos_745da79ee01f66a5_13_new)
HXLINE( 156)		this->isEnding = false;
HXLINE(  79)		this->isFollowingAlready = false;
HXLINE(  78)		this->startedDeath = false;
HXLINE(  20)		this->stageSuffix = HX_("",00,00,00,00);
HXLINE(  18)		this->playingDeathSound = false;
HXLINE(  17)		this->updateCamera = false;
HXLINE(  55)		super::__construct();
HXLINE(  57)		::states::PlayState_obj::instance->setOnScripts(HX_("inGameOver",6b,97,d6,11),true,null());
HXLINE(  59)		::backend::Conductor_obj::songPosition = ( (Float)(0) );
HXLINE(  61)		this->boyfriend =  ::objects::Character_obj::__alloc( HX_CTX ,x,y,::substates::GameOverSubstate_obj::characterName,true);
HXLINE(  62)		 ::objects::Character fh = this->boyfriend;
HXDLIN(  62)		fh->set_x((fh->x + this->boyfriend->positionArray->__get(0)));
HXLINE(  63)		 ::objects::Character fh1 = this->boyfriend;
HXDLIN(  63)		fh1->set_y((fh1->y + this->boyfriend->positionArray->__get(1)));
HXLINE(  64)		this->add(this->boyfriend);
HXLINE(  66)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  66)		_hx_tmp->play(::backend::Paths_obj::sound(::substates::GameOverSubstate_obj::deathSoundName,null()),null(),null(),null(),null(),null());
HXLINE(  67)		{
HXLINE(  67)			 ::flixel::math::FlxBasePoint this1 = ::flixel::FlxG_obj::camera->scroll;
HXDLIN(  67)			this1->set_x(( (Float)(0) ));
HXDLIN(  67)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  68)		::flixel::FlxG_obj::camera->target = null();
HXLINE(  70)		this->boyfriend->playAnim(HX_("firstDeath",e4,d8,fc,14),null(),null(),null());
HXLINE(  72)		this->camFollow =  ::flixel::FlxObject_obj::__alloc( HX_CTX ,0,0,1,1);
HXLINE(  73)		 ::flixel::FlxObject _hx_tmp1 = this->camFollow;
HXDLIN(  73)		Float _hx_tmp2 = this->boyfriend->getGraphicMidpoint(null())->x;
HXDLIN(  73)		_hx_tmp1->setPosition(_hx_tmp2,this->boyfriend->getGraphicMidpoint(null())->y);
HXLINE(  74)		{
HXLINE(  74)			 ::flixel::FlxCamera _this = ::flixel::FlxG_obj::camera;
HXDLIN(  74)			 ::flixel::math::FlxBasePoint this2 =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,(::flixel::FlxG_obj::camera->scroll->x + (( (Float)(::flixel::FlxG_obj::camera->width) ) / ( (Float)(2) ))),(::flixel::FlxG_obj::camera->scroll->y + (( (Float)(::flixel::FlxG_obj::camera->height) ) / ( (Float)(2) ))));
HXDLIN(  74)			 ::flixel::math::FlxBasePoint point = this2;
HXDLIN(  74)			{
HXLINE(  74)				 ::flixel::math::FlxBasePoint this3 = _this->scroll;
HXDLIN(  74)				Float y1 = (point->y - (( (Float)(_this->height) ) * ((Float)0.5)));
HXDLIN(  74)				this3->set_x((point->x - (( (Float)(_this->width) ) * ((Float)0.5))));
HXDLIN(  74)				this3->set_y(y1);
            			}
HXDLIN(  74)			if (point->_weak) {
HXLINE(  74)				point->put();
            			}
            		}
HXLINE(  75)		this->add(this->camFollow);
            	}

Dynamic GameOverSubstate_obj::__CreateEmpty() { return new GameOverSubstate_obj; }

void *GameOverSubstate_obj::_hx_vtable = 0;

Dynamic GameOverSubstate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameOverSubstate_obj > _hx_result = new GameOverSubstate_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GameOverSubstate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5661ffbf) {
		if (inClassId<=(int)0x3c0818b8) {
			if (inClassId<=(int)0x177974e9) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x177974e9;
			} else {
				return inClassId==(int)0x3c0818b8;
			}
		} else {
			return inClassId==(int)0x5661ffbf;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void GameOverSubstate_obj::create(){
            	HX_STACKFRAME(&_hx_pos_745da79ee01f66a5_46_create)
HXLINE(  47)		::substates::GameOverSubstate_obj::instance = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  48)		::states::PlayState_obj::instance->callOnScripts(HX_("onGameOverStart",7d,47,34,c7),::cpp::VirtualArray_obj::__new(0),null(),null(),null());
HXLINE(  50)		this->super::create();
            	}


void GameOverSubstate_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_745da79ee01f66a5_81_update)
HXDLIN(  81)		 ::substates::GameOverSubstate _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  82)		this->super::update(elapsed);
HXLINE(  84)		::states::PlayState_obj::instance->callOnScripts(HX_("onUpdate",88,7c,b2,66),::cpp::VirtualArray_obj::__new(1)->init(0,elapsed),null(),null(),null());
HXLINE(  86)		if (::backend::Controls_obj::instance->get_ACCEPT()) {
HXLINE(  88)			this->endBullshit();
            		}
HXLINE(  91)		if (::backend::Controls_obj::instance->get_BACK()) {
HXLINE(  93)			::backend::DiscordClient_obj::resetClientID();
HXLINE(  94)			{
HXLINE(  94)				 ::flixel::sound::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  94)				_this->cleanup(_this->autoDestroy,true);
            			}
HXLINE(  95)			::states::PlayState_obj::deathCounter = 0;
HXLINE(  96)			::states::PlayState_obj::seenCutscene = false;
HXLINE(  97)			::states::PlayState_obj::chartingMode = false;
HXLINE(  99)			::backend::Mods_obj::loadTopMod();
HXLINE( 100)			if (::states::PlayState_obj::isStoryMode) {
HXLINE( 101)				::backend::MusicBeatState_obj::switchState( ::states::StoryMenuState_obj::__alloc( HX_CTX ,null(),null()));
            			}
            			else {
HXLINE( 103)				::backend::MusicBeatState_obj::switchState( ::states::FreeplayState_obj::__alloc( HX_CTX ,null(),null()));
            			}
HXLINE( 105)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 105)			::String library = null();
HXDLIN( 105)			 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("menu/Gates of the hell",0d,b1,f8,c4),library);
HXDLIN( 105)			_hx_tmp->playMusic(file,null(),null(),null());
HXLINE( 106)			::states::PlayState_obj::instance->callOnScripts(HX_("onGameOverConfirm",db,ac,91,0d),::cpp::VirtualArray_obj::__new(1)->init(0,false),null(),null(),null());
            		}
HXLINE( 109)		if (::hx::IsNotNull( this->boyfriend->animation->_curAnim )) {
HXLINE( 111)			bool _hx_tmp;
HXDLIN( 111)			bool _hx_tmp1;
HXDLIN( 111)			if ((this->boyfriend->animation->_curAnim->name == HX_("firstDeath",e4,d8,fc,14))) {
HXLINE( 111)				_hx_tmp1 = this->boyfriend->animation->_curAnim->finished;
            			}
            			else {
HXLINE( 111)				_hx_tmp1 = false;
            			}
HXDLIN( 111)			if (_hx_tmp1) {
HXLINE( 111)				_hx_tmp = this->startedDeath;
            			}
            			else {
HXLINE( 111)				_hx_tmp = false;
            			}
HXDLIN( 111)			if (_hx_tmp) {
HXLINE( 112)				this->boyfriend->playAnim(HX_("deathLoop",b8,0b,79,2e),null(),null(),null());
            			}
HXLINE( 114)			if ((this->boyfriend->animation->_curAnim->name == HX_("firstDeath",e4,d8,fc,14))) {
HXLINE( 116)				bool _hx_tmp;
HXDLIN( 116)				if ((this->boyfriend->animation->_curAnim->curFrame >= 12)) {
HXLINE( 116)					_hx_tmp = !(this->isFollowingAlready);
            				}
            				else {
HXLINE( 116)					_hx_tmp = false;
            				}
HXDLIN( 116)				if (_hx_tmp) {
HXLINE( 118)					::flixel::FlxG_obj::camera->follow(this->camFollow,::flixel::FlxCameraFollowStyle_obj::LOCKON_dyn(),0);
HXLINE( 119)					this->updateCamera = true;
HXLINE( 120)					this->isFollowingAlready = true;
            				}
HXLINE( 123)				bool _hx_tmp1;
HXDLIN( 123)				if (this->boyfriend->animation->_curAnim->finished) {
HXLINE( 123)					_hx_tmp1 = !(this->playingDeathSound);
            				}
            				else {
HXLINE( 123)					_hx_tmp1 = false;
            				}
HXDLIN( 123)				if (_hx_tmp1) {
HXLINE( 125)					this->startedDeath = true;
HXLINE( 126)					if (::hx::IsEq( ::states::PlayState_obj::SONG->__Field(HX_("stage",be,6a,0b,84),::hx::paccDynamic),HX_("tank",ea,ba,f6,4c) )) {
            						HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::substates::GameOverSubstate,_gthis) HXARGC(0)
            						void _hx_run(){
            							HX_GC_STACKFRAME(&_hx_pos_745da79ee01f66a5_135_update)
HXLINE( 135)							if (!(_gthis->isEnding)) {
HXLINE( 137)								 ::flixel::sound::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 137)								 ::Dynamic onComplete = null();
HXDLIN( 137)								if (::hx::IsNull( _this->_channel )) {
HXLINE( 137)									_this->play(null(),null(),null());
            								}
HXDLIN( 137)								if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 137)									_this->fadeTween->cancel();
            								}
HXDLIN( 137)								_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(1) ),( (Float)(4) ),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(1)
            									->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            							}
            						}
            						HX_END_LOCAL_FUNC0((void))

HXLINE( 128)						this->playingDeathSound = true;
HXLINE( 129)						this->coolStartDeath(((Float)0.2));
HXLINE( 131)						::Array< int > exclude = ::Array_obj< int >::__new(0);
HXLINE( 134)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 134)						_hx_tmp->play(::backend::Paths_obj::sound((HX_("jeffGameover/jeffGameover-",3e,03,48,86) + ::flixel::FlxG_obj::random->_hx_int(1,25,exclude)),null()),1,false,null(),true, ::Dynamic(new _hx_Closure_0(_gthis)));
            					}
            					else {
HXLINE( 141)						this->coolStartDeath(null());
            					}
            				}
            			}
            		}
HXLINE( 146)		if (this->updateCamera) {
HXLINE( 146)			Float Value = ((elapsed * ((Float)0.6)) / (( (Float)(::flixel::FlxG_obj::updateFramerate) ) / ( (Float)(60) )));
HXDLIN( 146)			Float lowerBound;
HXDLIN( 146)			if ((Value < 0)) {
HXLINE( 146)				lowerBound = ( (Float)(0) );
            			}
            			else {
HXLINE( 146)				lowerBound = Value;
            			}
HXDLIN( 146)			Float _hx_tmp;
HXDLIN( 146)			if ((lowerBound > 1)) {
HXLINE( 146)				_hx_tmp = ( (Float)(1) );
            			}
            			else {
HXLINE( 146)				_hx_tmp = lowerBound;
            			}
HXDLIN( 146)			::flixel::FlxG_obj::camera->set_followLerp(_hx_tmp);
            		}
            		else {
HXLINE( 147)			::flixel::FlxG_obj::camera->set_followLerp(( (Float)(0) ));
            		}
HXLINE( 149)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music->_channel )) {
HXLINE( 151)			::backend::Conductor_obj::songPosition = ::flixel::FlxG_obj::sound->music->_time;
            		}
HXLINE( 153)		::states::PlayState_obj::instance->callOnScripts(HX_("onUpdatePost",08,11,55,db),::cpp::VirtualArray_obj::__new(1)->init(0,elapsed),null(),null(),null());
            	}


void GameOverSubstate_obj::coolStartDeath( ::Dynamic __o_volume){
            		 ::Dynamic volume = __o_volume;
            		if (::hx::IsNull(__o_volume)) volume = 1;
            	HX_STACKFRAME(&_hx_pos_745da79ee01f66a5_160_coolStartDeath)
HXDLIN( 160)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 160)		::String library = null();
HXDLIN( 160)		 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),::substates::GameOverSubstate_obj::loopSoundName,library);
HXDLIN( 160)		_hx_tmp->playMusic(file,volume,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameOverSubstate_obj,coolStartDeath,(void))

void GameOverSubstate_obj::endBullshit(){
            	HX_GC_STACKFRAME(&_hx_pos_745da79ee01f66a5_165_endBullshit)
HXDLIN( 165)		if (!(this->isEnding)) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_745da79ee01f66a5_175_endBullshit)
HXLINE( 175)					::backend::MusicBeatState_obj::resetState();
            				}
            				HX_END_LOCAL_FUNC0((void))

            				HX_GC_STACKFRAME(&_hx_pos_745da79ee01f66a5_173_endBullshit)
HXLINE( 173)				::flixel::FlxG_obj::camera->fade(-16777216,2,false, ::Dynamic(new _hx_Closure_0()),null());
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 167)			this->isEnding = true;
HXLINE( 168)			this->boyfriend->playAnim(HX_("deathConfirm",2c,44,2b,12),true,null(),null());
HXLINE( 169)			{
HXLINE( 169)				 ::flixel::sound::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 169)				_this->cleanup(_this->autoDestroy,true);
            			}
HXLINE( 170)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 170)			::String library = null();
HXDLIN( 170)			 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),::substates::GameOverSubstate_obj::endSoundName,library);
HXDLIN( 170)			_hx_tmp->play(file,null(),null(),null(),null(),null());
HXLINE( 171)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.7), ::Dynamic(new _hx_Closure_1()),null());
HXLINE( 178)			::states::PlayState_obj::instance->callOnScripts(HX_("onGameOverConfirm",db,ac,91,0d),::cpp::VirtualArray_obj::__new(1)->init(0,true),null(),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameOverSubstate_obj,endBullshit,(void))

void GameOverSubstate_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_745da79ee01f66a5_183_destroy)
HXLINE( 184)		::substates::GameOverSubstate_obj::instance = null();
HXLINE( 185)		this->super::destroy();
            	}


::String GameOverSubstate_obj::characterName;

::String GameOverSubstate_obj::deathSoundName;

::String GameOverSubstate_obj::loopSoundName;

::String GameOverSubstate_obj::endSoundName;

 ::substates::GameOverSubstate GameOverSubstate_obj::instance;

void GameOverSubstate_obj::resetVariables(){
            	HX_STACKFRAME(&_hx_pos_745da79ee01f66a5_29_resetVariables)
HXLINE(  30)		::substates::GameOverSubstate_obj::characterName = HX_("bf-dead",0d,ad,0c,df);
HXLINE(  31)		::substates::GameOverSubstate_obj::deathSoundName = HX_("loss/fnf_loss_sfx",56,e5,6c,dd);
HXLINE(  32)		::substates::GameOverSubstate_obj::loopSoundName = HX_("gameover/gameOver",8f,7a,ab,dc);
HXLINE(  33)		::substates::GameOverSubstate_obj::endSoundName = HX_("gameover/gameOverEnd",8c,04,f7,22);
HXLINE(  35)		 ::Dynamic _song = ::states::PlayState_obj::SONG;
HXLINE(  36)		if (::hx::IsNotNull( _song )) {
HXLINE(  38)			bool _hx_tmp;
HXDLIN(  38)			if (::hx::IsNotNull( _song->__Field(HX_("gameOverChar",5c,48,07,65),::hx::paccDynamic) )) {
HXLINE(  38)				_hx_tmp = (::StringTools_obj::trim(( (::String)(_song->__Field(HX_("gameOverChar",5c,48,07,65),::hx::paccDynamic)) )).length > 0);
            			}
            			else {
HXLINE(  38)				_hx_tmp = false;
            			}
HXDLIN(  38)			if (_hx_tmp) {
HXLINE(  38)				::substates::GameOverSubstate_obj::characterName = ( (::String)(_song->__Field(HX_("gameOverChar",5c,48,07,65),::hx::paccDynamic)) );
            			}
HXLINE(  39)			bool _hx_tmp1;
HXDLIN(  39)			if (::hx::IsNotNull( _song->__Field(HX_("gameOverSound",89,f8,70,3c),::hx::paccDynamic) )) {
HXLINE(  39)				_hx_tmp1 = (::StringTools_obj::trim(( (::String)(_song->__Field(HX_("gameOverSound",89,f8,70,3c),::hx::paccDynamic)) )).length > 0);
            			}
            			else {
HXLINE(  39)				_hx_tmp1 = false;
            			}
HXDLIN(  39)			if (_hx_tmp1) {
HXLINE(  39)				::substates::GameOverSubstate_obj::deathSoundName = ( (::String)(_song->__Field(HX_("gameOverSound",89,f8,70,3c),::hx::paccDynamic)) );
            			}
HXLINE(  40)			bool _hx_tmp2;
HXDLIN(  40)			if (::hx::IsNotNull( _song->__Field(HX_("gameOverLoop",ea,8f,ff,6a),::hx::paccDynamic) )) {
HXLINE(  40)				_hx_tmp2 = (::StringTools_obj::trim(( (::String)(_song->__Field(HX_("gameOverLoop",ea,8f,ff,6a),::hx::paccDynamic)) )).length > 0);
            			}
            			else {
HXLINE(  40)				_hx_tmp2 = false;
            			}
HXDLIN(  40)			if (_hx_tmp2) {
HXLINE(  40)				::substates::GameOverSubstate_obj::loopSoundName = ( (::String)(_song->__Field(HX_("gameOverLoop",ea,8f,ff,6a),::hx::paccDynamic)) );
            			}
HXLINE(  41)			bool _hx_tmp3;
HXDLIN(  41)			if (::hx::IsNotNull( _song->__Field(HX_("gameOverEnd",15,2d,a9,8d),::hx::paccDynamic) )) {
HXLINE(  41)				_hx_tmp3 = (::StringTools_obj::trim(( (::String)(_song->__Field(HX_("gameOverEnd",15,2d,a9,8d),::hx::paccDynamic)) )).length > 0);
            			}
            			else {
HXLINE(  41)				_hx_tmp3 = false;
            			}
HXDLIN(  41)			if (_hx_tmp3) {
HXLINE(  41)				::substates::GameOverSubstate_obj::endSoundName = ( (::String)(_song->__Field(HX_("gameOverEnd",15,2d,a9,8d),::hx::paccDynamic)) );
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GameOverSubstate_obj,resetVariables,(void))


::hx::ObjectPtr< GameOverSubstate_obj > GameOverSubstate_obj::__new(Float x,Float y,Float camX,Float camY) {
	::hx::ObjectPtr< GameOverSubstate_obj > __this = new GameOverSubstate_obj();
	__this->__construct(x,y,camX,camY);
	return __this;
}

::hx::ObjectPtr< GameOverSubstate_obj > GameOverSubstate_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,Float camX,Float camY) {
	GameOverSubstate_obj *__this = (GameOverSubstate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameOverSubstate_obj), true, "substates.GameOverSubstate"));
	*(void **)__this = GameOverSubstate_obj::_hx_vtable;
	__this->__construct(x,y,camX,camY);
	return __this;
}

GameOverSubstate_obj::GameOverSubstate_obj()
{
}

void GameOverSubstate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameOverSubstate);
	HX_MARK_MEMBER_NAME(boyfriend,"boyfriend");
	HX_MARK_MEMBER_NAME(camFollow,"camFollow");
	HX_MARK_MEMBER_NAME(updateCamera,"updateCamera");
	HX_MARK_MEMBER_NAME(playingDeathSound,"playingDeathSound");
	HX_MARK_MEMBER_NAME(stageSuffix,"stageSuffix");
	HX_MARK_MEMBER_NAME(startedDeath,"startedDeath");
	HX_MARK_MEMBER_NAME(isFollowingAlready,"isFollowingAlready");
	HX_MARK_MEMBER_NAME(isEnding,"isEnding");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameOverSubstate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(boyfriend,"boyfriend");
	HX_VISIT_MEMBER_NAME(camFollow,"camFollow");
	HX_VISIT_MEMBER_NAME(updateCamera,"updateCamera");
	HX_VISIT_MEMBER_NAME(playingDeathSound,"playingDeathSound");
	HX_VISIT_MEMBER_NAME(stageSuffix,"stageSuffix");
	HX_VISIT_MEMBER_NAME(startedDeath,"startedDeath");
	HX_VISIT_MEMBER_NAME(isFollowingAlready,"isFollowingAlready");
	HX_VISIT_MEMBER_NAME(isEnding,"isEnding");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GameOverSubstate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isEnding") ) { return ::hx::Val( isEnding ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"boyfriend") ) { return ::hx::Val( boyfriend ); }
		if (HX_FIELD_EQ(inName,"camFollow") ) { return ::hx::Val( camFollow ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stageSuffix") ) { return ::hx::Val( stageSuffix ); }
		if (HX_FIELD_EQ(inName,"endBullshit") ) { return ::hx::Val( endBullshit_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateCamera") ) { return ::hx::Val( updateCamera ); }
		if (HX_FIELD_EQ(inName,"startedDeath") ) { return ::hx::Val( startedDeath ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"coolStartDeath") ) { return ::hx::Val( coolStartDeath_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"playingDeathSound") ) { return ::hx::Val( playingDeathSound ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isFollowingAlready") ) { return ::hx::Val( isFollowingAlready ); }
	}
	return super::__Field(inName,inCallProp);
}

bool GameOverSubstate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endSoundName") ) { outValue = ( endSoundName ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"characterName") ) { outValue = ( characterName ); return true; }
		if (HX_FIELD_EQ(inName,"loopSoundName") ) { outValue = ( loopSoundName ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"deathSoundName") ) { outValue = ( deathSoundName ); return true; }
		if (HX_FIELD_EQ(inName,"resetVariables") ) { outValue = resetVariables_dyn(); return true; }
	}
	return false;
}

::hx::Val GameOverSubstate_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"isEnding") ) { isEnding=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"boyfriend") ) { boyfriend=inValue.Cast<  ::objects::Character >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camFollow") ) { camFollow=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stageSuffix") ) { stageSuffix=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateCamera") ) { updateCamera=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startedDeath") ) { startedDeath=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"playingDeathSound") ) { playingDeathSound=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isFollowingAlready") ) { isFollowingAlready=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GameOverSubstate_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::substates::GameOverSubstate >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endSoundName") ) { endSoundName=ioValue.Cast< ::String >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"characterName") ) { characterName=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"loopSoundName") ) { loopSoundName=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"deathSoundName") ) { deathSoundName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void GameOverSubstate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("boyfriend",6a,29,b8,e6));
	outFields->push(HX_("camFollow",e0,6e,47,22));
	outFields->push(HX_("updateCamera",8e,ed,4f,b7));
	outFields->push(HX_("playingDeathSound",09,ba,e7,f9));
	outFields->push(HX_("stageSuffix",2f,64,9f,2f));
	outFields->push(HX_("startedDeath",33,aa,4e,72));
	outFields->push(HX_("isFollowingAlready",91,47,4d,90));
	outFields->push(HX_("isEnding",71,3f,f2,52));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GameOverSubstate_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::objects::Character */ ,(int)offsetof(GameOverSubstate_obj,boyfriend),HX_("boyfriend",6a,29,b8,e6)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(GameOverSubstate_obj,camFollow),HX_("camFollow",e0,6e,47,22)},
	{::hx::fsBool,(int)offsetof(GameOverSubstate_obj,updateCamera),HX_("updateCamera",8e,ed,4f,b7)},
	{::hx::fsBool,(int)offsetof(GameOverSubstate_obj,playingDeathSound),HX_("playingDeathSound",09,ba,e7,f9)},
	{::hx::fsString,(int)offsetof(GameOverSubstate_obj,stageSuffix),HX_("stageSuffix",2f,64,9f,2f)},
	{::hx::fsBool,(int)offsetof(GameOverSubstate_obj,startedDeath),HX_("startedDeath",33,aa,4e,72)},
	{::hx::fsBool,(int)offsetof(GameOverSubstate_obj,isFollowingAlready),HX_("isFollowingAlready",91,47,4d,90)},
	{::hx::fsBool,(int)offsetof(GameOverSubstate_obj,isEnding),HX_("isEnding",71,3f,f2,52)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo GameOverSubstate_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &GameOverSubstate_obj::characterName,HX_("characterName",94,02,ec,41)},
	{::hx::fsString,(void *) &GameOverSubstate_obj::deathSoundName,HX_("deathSoundName",e6,08,d8,f2)},
	{::hx::fsString,(void *) &GameOverSubstate_obj::loopSoundName,HX_("loopSoundName",b6,8b,da,e5)},
	{::hx::fsString,(void *) &GameOverSubstate_obj::endSoundName,HX_("endSoundName",5f,47,cf,62)},
	{::hx::fsObject /*  ::substates::GameOverSubstate */ ,(void *) &GameOverSubstate_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String GameOverSubstate_obj_sMemberFields[] = {
	HX_("boyfriend",6a,29,b8,e6),
	HX_("camFollow",e0,6e,47,22),
	HX_("updateCamera",8e,ed,4f,b7),
	HX_("playingDeathSound",09,ba,e7,f9),
	HX_("stageSuffix",2f,64,9f,2f),
	HX_("create",fc,66,0f,7c),
	HX_("startedDeath",33,aa,4e,72),
	HX_("isFollowingAlready",91,47,4d,90),
	HX_("update",09,86,05,87),
	HX_("isEnding",71,3f,f2,52),
	HX_("coolStartDeath",9b,db,39,51),
	HX_("endBullshit",4e,f7,81,48),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

static void GameOverSubstate_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameOverSubstate_obj::characterName,"characterName");
	HX_MARK_MEMBER_NAME(GameOverSubstate_obj::deathSoundName,"deathSoundName");
	HX_MARK_MEMBER_NAME(GameOverSubstate_obj::loopSoundName,"loopSoundName");
	HX_MARK_MEMBER_NAME(GameOverSubstate_obj::endSoundName,"endSoundName");
	HX_MARK_MEMBER_NAME(GameOverSubstate_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GameOverSubstate_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameOverSubstate_obj::characterName,"characterName");
	HX_VISIT_MEMBER_NAME(GameOverSubstate_obj::deathSoundName,"deathSoundName");
	HX_VISIT_MEMBER_NAME(GameOverSubstate_obj::loopSoundName,"loopSoundName");
	HX_VISIT_MEMBER_NAME(GameOverSubstate_obj::endSoundName,"endSoundName");
	HX_VISIT_MEMBER_NAME(GameOverSubstate_obj::instance,"instance");
};

#endif

::hx::Class GameOverSubstate_obj::__mClass;

static ::String GameOverSubstate_obj_sStaticFields[] = {
	HX_("characterName",94,02,ec,41),
	HX_("deathSoundName",e6,08,d8,f2),
	HX_("loopSoundName",b6,8b,da,e5),
	HX_("endSoundName",5f,47,cf,62),
	HX_("instance",95,1f,e1,59),
	HX_("resetVariables",e8,46,d3,dc),
	::String(null())
};

void GameOverSubstate_obj::__register()
{
	GameOverSubstate_obj _hx_dummy;
	GameOverSubstate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("substates.GameOverSubstate",63,3c,3b,db);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GameOverSubstate_obj::__GetStatic;
	__mClass->mSetStaticField = &GameOverSubstate_obj::__SetStatic;
	__mClass->mMarkFunc = GameOverSubstate_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GameOverSubstate_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GameOverSubstate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GameOverSubstate_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GameOverSubstate_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameOverSubstate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameOverSubstate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GameOverSubstate_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_745da79ee01f66a5_22_boot)
HXDLIN(  22)		characterName = HX_("bf-dead",0d,ad,0c,df);
            	}
{
            	HX_STACKFRAME(&_hx_pos_745da79ee01f66a5_23_boot)
HXDLIN(  23)		deathSoundName = HX_("loss/fnf_loss_sfx",56,e5,6c,dd);
            	}
{
            	HX_STACKFRAME(&_hx_pos_745da79ee01f66a5_24_boot)
HXDLIN(  24)		loopSoundName = HX_("gameover/gameOver",8f,7a,ab,dc);
            	}
{
            	HX_STACKFRAME(&_hx_pos_745da79ee01f66a5_25_boot)
HXDLIN(  25)		endSoundName = HX_("gameover/gameOverEnd",8c,04,f7,22);
            	}
}

} // end namespace substates
