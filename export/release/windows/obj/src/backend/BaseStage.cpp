#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_backend_BaseStage
#include <backend/BaseStage.h>
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
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_20_new,"backend.BaseStage","new",0x0e13b265,"backend.BaseStage.new","backend/BaseStage.hx",20,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_65_create,"backend.BaseStage","create",0xb536d617,"backend.BaseStage.create","backend/BaseStage.hx",65,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_66_createPost,"backend.BaseStage","createPost",0xbbc6de17,"backend.BaseStage.createPost","backend/BaseStage.hx",66,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_68_countdownTick,"backend.BaseStage","countdownTick",0x49e666f3,"backend.BaseStage.countdownTick","backend/BaseStage.hx",68,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_76_beatHit,"backend.BaseStage","beatHit",0x3d5eb302,"backend.BaseStage.beatHit","backend/BaseStage.hx",76,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_77_stepHit,"backend.BaseStage","stepHit",0x4a9b76ec,"backend.BaseStage.stepHit","backend/BaseStage.hx",77,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_78_sectionHit,"backend.BaseStage","sectionHit",0x1daa8e09,"backend.BaseStage.sectionHit","backend/BaseStage.hx",78,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_81_closeSubState,"backend.BaseStage","closeSubState",0x35b8928e,"backend.BaseStage.closeSubState","backend/BaseStage.hx",81,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_82_openSubState,"backend.BaseStage","openSubState",0x78f09bb6,"backend.BaseStage.openSubState","backend/BaseStage.hx",82,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_85_eventCalled,"backend.BaseStage","eventCalled",0xac5e8f3c,"backend.BaseStage.eventCalled","backend/BaseStage.hx",85,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_86_eventPushed,"backend.BaseStage","eventPushed",0x67a34f78,"backend.BaseStage.eventPushed","backend/BaseStage.hx",86,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_87_eventPushedUnique,"backend.BaseStage","eventPushedUnique",0x79bf40a9,"backend.BaseStage.eventPushedUnique","backend/BaseStage.hx",87,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_90_add,"backend.BaseStage","add",0x0e09d426,"backend.BaseStage.add","backend/BaseStage.hx",90,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_91_remove,"backend.BaseStage","remove",0x3db00b5f,"backend.BaseStage.remove","backend/BaseStage.hx",91,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_92_insert,"backend.BaseStage","insert",0xd704b254,"backend.BaseStage.insert","backend/BaseStage.hx",92,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_94_addBehindGF,"backend.BaseStage","addBehindGF",0x73feb79f,"backend.BaseStage.addBehindGF","backend/BaseStage.hx",94,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_95_addBehindBF,"backend.BaseStage","addBehindBF",0x73feb344,"backend.BaseStage.addBehindBF","backend/BaseStage.hx",95,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_96_addBehindDad,"backend.BaseStage","addBehindDad",0x0adfc4a7,"backend.BaseStage.addBehindDad","backend/BaseStage.hx",96,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_98_setDefaultGF,"backend.BaseStage","setDefaultGF",0x5cf47e79,"backend.BaseStage.setDefaultGF","backend/BaseStage.hx",98,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_109_setStartCallback,"backend.BaseStage","setStartCallback",0x1c021220,"backend.BaseStage.setStartCallback","backend/BaseStage.hx",109,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_114_setEndCallback,"backend.BaseStage","setEndCallback",0x02a7ea59,"backend.BaseStage.setEndCallback","backend/BaseStage.hx",114,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_120_precacheImage,"backend.BaseStage","precacheImage",0xd4de09e1,"backend.BaseStage.precacheImage","backend/BaseStage.hx",120,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_121_precacheSound,"backend.BaseStage","precacheSound",0x98417755,"backend.BaseStage.precacheSound","backend/BaseStage.hx",121,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_122_precacheMusic,"backend.BaseStage","precacheMusic",0x27cfbb2b,"backend.BaseStage.precacheMusic","backend/BaseStage.hx",122,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_125_precache,"backend.BaseStage","precache",0x92f6871a,"backend.BaseStage.precache","backend/BaseStage.hx",125,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_141_startCountdown,"backend.BaseStage","startCountdown",0xad14a20a,"backend.BaseStage.startCountdown","backend/BaseStage.hx",141,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_142_endSong,"backend.BaseStage","endSong",0xf7d6a5d5,"backend.BaseStage.endSong","backend/BaseStage.hx",142,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_143_moveCameraSection,"backend.BaseStage","moveCameraSection",0x51c6ccb4,"backend.BaseStage.moveCameraSection","backend/BaseStage.hx",143,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_144_moveCamera,"backend.BaseStage","moveCamera",0x66975931,"backend.BaseStage.moveCamera","backend/BaseStage.hx",144,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_145_get_paused,"backend.BaseStage","get_paused",0x3ee84912,"backend.BaseStage.get_paused","backend/BaseStage.hx",145,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_146_get_songName,"backend.BaseStage","get_songName",0x2d99ba24,"backend.BaseStage.get_songName","backend/BaseStage.hx",146,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_147_get_isStoryMode,"backend.BaseStage","get_isStoryMode",0x43b175ca,"backend.BaseStage.get_isStoryMode","backend/BaseStage.hx",147,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_148_get_seenCutscene,"backend.BaseStage","get_seenCutscene",0x92123c89,"backend.BaseStage.get_seenCutscene","backend/BaseStage.hx",148,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_149_get_inCutscene,"backend.BaseStage","get_inCutscene",0xf01b2bf3,"backend.BaseStage.get_inCutscene","backend/BaseStage.hx",149,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_151_set_inCutscene,"backend.BaseStage","set_inCutscene",0x103b1467,"backend.BaseStage.set_inCutscene","backend/BaseStage.hx",151,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_155_get_canPause,"backend.BaseStage","get_canPause",0x22ad022a,"backend.BaseStage.get_canPause","backend/BaseStage.hx",155,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_157_set_canPause,"backend.BaseStage","set_canPause",0x37a6259e,"backend.BaseStage.set_canPause","backend/BaseStage.hx",157,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_161_get_members,"backend.BaseStage","get_members",0x42937bf5,"backend.BaseStage.get_members","backend/BaseStage.hx",161,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_163_set_game,"backend.BaseStage","set_game",0xd7acb4ca,"backend.BaseStage.set_game","backend/BaseStage.hx",163,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_169_get_boyfriend,"backend.BaseStage","get_boyfriend",0xd9a27786,"backend.BaseStage.get_boyfriend","backend/BaseStage.hx",169,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_170_get_dad,"backend.BaseStage","get_dad",0xf01ac763,"backend.BaseStage.get_dad","backend/BaseStage.hx",170,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_171_get_gf,"backend.BaseStage","get_gf",0xdc576083,"backend.BaseStage.get_gf","backend/BaseStage.hx",171,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_173_get_boyfriendGroup,"backend.BaseStage","get_boyfriendGroup",0x3402a5d9,"backend.BaseStage.get_boyfriendGroup","backend/BaseStage.hx",173,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_174_get_dadGroup,"backend.BaseStage","get_dadGroup",0x38eab4dc,"backend.BaseStage.get_dadGroup","backend/BaseStage.hx",174,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_175_get_gfGroup,"backend.BaseStage","get_gfGroup",0xd8cf07bc,"backend.BaseStage.get_gfGroup","backend/BaseStage.hx",175,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_177_get_camGame,"backend.BaseStage","get_camGame",0xf77396bd,"backend.BaseStage.get_camGame","backend/BaseStage.hx",177,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_178_get_camHUD,"backend.BaseStage","get_camHUD",0x06da344c,"backend.BaseStage.get_camHUD","backend/BaseStage.hx",178,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_179_get_camOther,"backend.BaseStage","get_camOther",0x357035a5,"backend.BaseStage.get_camOther","backend/BaseStage.hx",179,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_181_get_defaultCamZoom,"backend.BaseStage","get_defaultCamZoom",0x50235c65,"backend.BaseStage.get_defaultCamZoom","backend/BaseStage.hx",181,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_183_set_defaultCamZoom,"backend.BaseStage","set_defaultCamZoom",0x2cd28ed9,"backend.BaseStage.set_defaultCamZoom","backend/BaseStage.hx",183,0x8865de2c)
HX_LOCAL_STACK_FRAME(_hx_pos_3e78deb4e15a8a4d_187_get_camFollow,"backend.BaseStage","get_camFollow",0x1531bcfc,"backend.BaseStage.get_camFollow","backend/BaseStage.hx",187,0x8865de2c)
namespace backend{

void BaseStage_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_20_new)
HXLINE(  75)		this->curSection = 0;
HXLINE(  74)		this->curDecStep = ((Float)0);
HXLINE(  73)		this->curStep = 0;
HXLINE(  72)		this->curDecBeat = ((Float)0);
HXLINE(  71)		this->curBeat = 0;
HXLINE(  23)		this->onPlayState = false;
HXLINE(  22)		this->game = ::states::PlayState_obj::instance;
HXLINE(  50)		{
HXLINE(  50)			 ::backend::MusicBeatState value = ::backend::MusicBeatState_obj::getState();
HXDLIN(  50)			this->onPlayState = ::Std_obj::isOfType(value,::hx::ClassOf< ::states::PlayState >());
HXDLIN(  50)			this->game = value;
            		}
HXLINE(  51)		if (::hx::IsNull( this->game )) {
HXLINE(  54)			this->destroy();
            		}
            		else {
HXLINE(  58)			 ::Dynamic(this->game->__Field(HX_("stages",f5,fb,f1,05),::hx::paccDynamic))->__Field(HX_("push",da,11,61,4a),::hx::paccDynamic)(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  59)			super::__construct();
HXLINE(  60)			this->create();
            		}
            	}

Dynamic BaseStage_obj::__CreateEmpty() { return new BaseStage_obj; }

void *BaseStage_obj::_hx_vtable = 0;

Dynamic BaseStage_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BaseStage_obj > _hx_result = new BaseStage_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BaseStage_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x230cab9d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x230cab9d;
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void BaseStage_obj::create(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_65_create)
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseStage_obj,create,(void))

void BaseStage_obj::createPost(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_66_createPost)
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseStage_obj,createPost,(void))

void BaseStage_obj::countdownTick( ::backend::Countdown count,int num){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_68_countdownTick)
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseStage_obj,countdownTick,(void))

void BaseStage_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_76_beatHit)
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseStage_obj,beatHit,(void))

void BaseStage_obj::stepHit(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_77_stepHit)
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseStage_obj,stepHit,(void))

void BaseStage_obj::sectionHit(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_78_sectionHit)
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseStage_obj,sectionHit,(void))

void BaseStage_obj::closeSubState(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_81_closeSubState)
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseStage_obj,closeSubState,(void))

void BaseStage_obj::openSubState( ::flixel::FlxSubState SubState){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_82_openSubState)
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseStage_obj,openSubState,(void))

void BaseStage_obj::eventCalled(::String eventName,::String value1,::String value2, ::Dynamic flValue1, ::Dynamic flValue2,Float strumTime){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_85_eventCalled)
            	}


HX_DEFINE_DYNAMIC_FUNC6(BaseStage_obj,eventCalled,(void))

void BaseStage_obj::eventPushed( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_86_eventPushed)
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseStage_obj,eventPushed,(void))

void BaseStage_obj::eventPushedUnique( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_87_eventPushedUnique)
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseStage_obj,eventPushedUnique,(void))

void BaseStage_obj::add( ::flixel::FlxBasic object){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_90_add)
HXDLIN(  90)		this->game->__Field(HX_("add",21,f2,49,00),::hx::paccDynamic)(object);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseStage_obj,add,(void))

void BaseStage_obj::remove( ::flixel::FlxBasic object){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_91_remove)
HXDLIN(  91)		this->game->__Field(HX_("remove",44,9c,88,04),::hx::paccDynamic)(object);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseStage_obj,remove,(void))

void BaseStage_obj::insert(int position, ::flixel::FlxBasic object){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_92_insert)
HXDLIN(  92)		this->game->__Field(HX_("insert",39,43,dd,9d),::hx::paccDynamic)(position,object);
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseStage_obj,insert,(void))

void BaseStage_obj::addBehindGF( ::flixel::FlxBasic obj){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_94_addBehindGF)
HXDLIN(  94)		this->insert(( (int)( ::Dynamic(this->game->__Field(HX_("members",d9,2c,70,1a),::hx::paccDynamic))->__Field(HX_("indexOf",c9,48,bf,e0),::hx::paccDynamic)( ::Dynamic(this->game->__Field(HX_("gfGroup",a0,b8,ab,b0),::hx::paccDynamic)))) ),obj);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseStage_obj,addBehindGF,(void))

void BaseStage_obj::addBehindBF( ::flixel::FlxBasic obj){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_95_addBehindBF)
HXDLIN(  95)		this->insert(( (int)( ::Dynamic(this->game->__Field(HX_("members",d9,2c,70,1a),::hx::paccDynamic))->__Field(HX_("indexOf",c9,48,bf,e0),::hx::paccDynamic)( ::Dynamic(this->game->__Field(HX_("boyfriendGroup",75,99,09,ef),::hx::paccDynamic)))) ),obj);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseStage_obj,addBehindBF,(void))

void BaseStage_obj::addBehindDad( ::flixel::FlxBasic obj){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_96_addBehindDad)
HXDLIN(  96)		this->insert(( (int)( ::Dynamic(this->game->__Field(HX_("members",d9,2c,70,1a),::hx::paccDynamic))->__Field(HX_("indexOf",c9,48,bf,e0),::hx::paccDynamic)( ::Dynamic(this->game->__Field(HX_("dadGroup",78,cb,28,42),::hx::paccDynamic)))) ),obj);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseStage_obj,addBehindDad,(void))

void BaseStage_obj::setDefaultGF(::String name){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_98_setDefaultGF)
HXLINE(  99)		::String gfVersion = ( (::String)(::states::PlayState_obj::SONG->__Field(HX_("gfVersion",b9,c6,7d,f3),::hx::paccDynamic)) );
HXLINE( 100)		bool _hx_tmp;
HXDLIN( 100)		if (::hx::IsNotNull( gfVersion )) {
HXLINE( 100)			_hx_tmp = (gfVersion.length < 1);
            		}
            		else {
HXLINE( 100)			_hx_tmp = true;
            		}
HXDLIN( 100)		if (_hx_tmp) {
HXLINE( 102)			gfVersion = name;
HXLINE( 103)			::states::PlayState_obj::SONG->__SetField(HX_("gfVersion",b9,c6,7d,f3),gfVersion,::hx::paccDynamic);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseStage_obj,setDefaultGF,(void))

void BaseStage_obj::setStartCallback( ::Dynamic myfn){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_109_setStartCallback)
HXLINE( 110)		if (!(this->onPlayState)) {
HXLINE( 110)			return;
            		}
HXLINE( 111)		::states::PlayState_obj::instance->startCallback = myfn;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseStage_obj,setStartCallback,(void))

void BaseStage_obj::setEndCallback( ::Dynamic myfn){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_114_setEndCallback)
HXLINE( 115)		if (!(this->onPlayState)) {
HXLINE( 115)			return;
            		}
HXLINE( 116)		::states::PlayState_obj::instance->endCallback = myfn;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseStage_obj,setEndCallback,(void))

void BaseStage_obj::precacheImage(::String key){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_120_precacheImage)
HXDLIN( 120)		this->precache(key,HX_("image",5b,1f,69,bd));
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseStage_obj,precacheImage,(void))

void BaseStage_obj::precacheSound(::String key){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_121_precacheSound)
HXDLIN( 121)		this->precache(key,HX_("sound",cf,8c,cc,80));
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseStage_obj,precacheSound,(void))

void BaseStage_obj::precacheMusic(::String key){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_122_precacheMusic)
HXDLIN( 122)		this->precache(key,HX_("music",a5,d0,5a,10));
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseStage_obj,precacheMusic,(void))

void BaseStage_obj::precache(::String key,::String type){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_125_precache)
HXLINE( 126)		if (this->onPlayState) {
HXLINE( 127)			::states::PlayState_obj::instance->precacheList->set(key,type);
            		}
HXLINE( 129)		::String _hx_switch_0 = type;
            		if (  (_hx_switch_0==HX_("image",5b,1f,69,bd)) ){
HXLINE( 132)			::backend::Paths_obj::image(key,null(),null());
HXDLIN( 132)			goto _hx_goto_24;
            		}
            		if (  (_hx_switch_0==HX_("music",a5,d0,5a,10)) ){
HXLINE( 136)			::String library = null();
HXDLIN( 136)			 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),key,library);
HXDLIN( 136)			goto _hx_goto_24;
            		}
            		if (  (_hx_switch_0==HX_("sound",cf,8c,cc,80)) ){
HXLINE( 134)			::backend::Paths_obj::sound(key,null());
HXDLIN( 134)			goto _hx_goto_24;
            		}
            		_hx_goto_24:;
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseStage_obj,precache,(void))

bool BaseStage_obj::startCountdown(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_141_startCountdown)
HXDLIN( 141)		if (this->onPlayState) {
HXDLIN( 141)			return ::states::PlayState_obj::instance->startCountdown();
            		}
            		else {
HXDLIN( 141)			return false;
            		}
HXDLIN( 141)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseStage_obj,startCountdown,return )

bool BaseStage_obj::endSong(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_142_endSong)
HXDLIN( 142)		if (this->onPlayState) {
HXDLIN( 142)			return ::states::PlayState_obj::instance->endSong();
            		}
            		else {
HXDLIN( 142)			return false;
            		}
HXDLIN( 142)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseStage_obj,endSong,return )

void BaseStage_obj::moveCameraSection(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_143_moveCameraSection)
HXDLIN( 143)		if (this->onPlayState) {
HXDLIN( 143)			this->moveCameraSection();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseStage_obj,moveCameraSection,(void))

void BaseStage_obj::moveCamera(bool isDad){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_144_moveCamera)
HXDLIN( 144)		if (this->onPlayState) {
HXDLIN( 144)			this->moveCamera(isDad);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseStage_obj,moveCamera,(void))

bool BaseStage_obj::get_paused(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_145_get_paused)
HXDLIN( 145)		return ( (bool)(this->game->__Field(HX_("paused",ae,40,84,ef),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseStage_obj,get_paused,return )

::String BaseStage_obj::get_songName(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_146_get_songName)
HXDLIN( 146)		return ( (::String)(this->game->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseStage_obj,get_songName,return )

bool BaseStage_obj::get_isStoryMode(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_147_get_isStoryMode)
HXDLIN( 147)		return ::states::PlayState_obj::isStoryMode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseStage_obj,get_isStoryMode,return )

bool BaseStage_obj::get_seenCutscene(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_148_get_seenCutscene)
HXDLIN( 148)		return ::states::PlayState_obj::seenCutscene;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseStage_obj,get_seenCutscene,return )

bool BaseStage_obj::get_inCutscene(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_149_get_inCutscene)
HXDLIN( 149)		return ( (bool)(this->game->__Field(HX_("inCutscene",8f,21,01,56),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseStage_obj,get_inCutscene,return )

bool BaseStage_obj::set_inCutscene(bool value){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_151_set_inCutscene)
HXLINE( 152)		this->game->__SetField(HX_("inCutscene",8f,21,01,56),value,::hx::paccDynamic);
HXLINE( 153)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseStage_obj,set_inCutscene,return )

bool BaseStage_obj::get_canPause(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_155_get_canPause)
HXDLIN( 155)		return ( (bool)(this->game->__Field(HX_("canPause",c6,18,eb,2b),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseStage_obj,get_canPause,return )

bool BaseStage_obj::set_canPause(bool value){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_157_set_canPause)
HXLINE( 158)		this->game->__SetField(HX_("canPause",c6,18,eb,2b),value,::hx::paccDynamic);
HXLINE( 159)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseStage_obj,set_canPause,return )

 ::Dynamic BaseStage_obj::get_members(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_161_get_members)
HXDLIN( 161)		return  ::Dynamic(this->game->__Field(HX_("members",d9,2c,70,1a),::hx::paccDynamic));
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseStage_obj,get_members,return )

 ::backend::MusicBeatState BaseStage_obj::set_game( ::backend::MusicBeatState value){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_163_set_game)
HXLINE( 164)		this->onPlayState = ::Std_obj::isOfType(value,::hx::ClassOf< ::states::PlayState >());
HXLINE( 165)		this->game = value;
HXLINE( 166)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseStage_obj,set_game,return )

 ::objects::Character BaseStage_obj::get_boyfriend(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_169_get_boyfriend)
HXDLIN( 169)		return ( ( ::objects::Character)(this->game->__Field(HX_("boyfriend",6a,29,b8,e6),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseStage_obj,get_boyfriend,return )

 ::objects::Character BaseStage_obj::get_dad(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_170_get_dad)
HXDLIN( 170)		return ( ( ::objects::Character)(this->game->__Field(HX_("dad",47,36,4c,00),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseStage_obj,get_dad,return )

 ::objects::Character BaseStage_obj::get_gf(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_171_get_gf)
HXDLIN( 171)		return ( ( ::objects::Character)(this->game->__Field(HX_("gf",1f,5a,00,00),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseStage_obj,get_gf,return )

 ::flixel::group::FlxTypedSpriteGroup BaseStage_obj::get_boyfriendGroup(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_173_get_boyfriendGroup)
HXDLIN( 173)		return ( ( ::flixel::group::FlxTypedSpriteGroup)(this->game->__Field(HX_("boyfriendGroup",75,99,09,ef),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseStage_obj,get_boyfriendGroup,return )

 ::flixel::group::FlxTypedSpriteGroup BaseStage_obj::get_dadGroup(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_174_get_dadGroup)
HXDLIN( 174)		return ( ( ::flixel::group::FlxTypedSpriteGroup)(this->game->__Field(HX_("dadGroup",78,cb,28,42),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseStage_obj,get_dadGroup,return )

 ::flixel::group::FlxTypedSpriteGroup BaseStage_obj::get_gfGroup(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_175_get_gfGroup)
HXDLIN( 175)		return ( ( ::flixel::group::FlxTypedSpriteGroup)(this->game->__Field(HX_("gfGroup",a0,b8,ab,b0),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseStage_obj,get_gfGroup,return )

 ::flixel::FlxCamera BaseStage_obj::get_camGame(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_177_get_camGame)
HXDLIN( 177)		return ( ( ::flixel::FlxCamera)(this->game->__Field(HX_("camGame",a1,47,50,cf),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseStage_obj,get_camGame,return )

 ::flixel::FlxCamera BaseStage_obj::get_camHUD(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_178_get_camHUD)
HXDLIN( 178)		return ( ( ::flixel::FlxCamera)(this->game->__Field(HX_("camHUD",e8,2b,76,b7),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseStage_obj,get_camHUD,return )

 ::flixel::FlxCamera BaseStage_obj::get_camOther(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_179_get_camOther)
HXDLIN( 179)		return ( ( ::flixel::FlxCamera)(this->game->__Field(HX_("camOther",41,4c,ae,3e),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseStage_obj,get_camOther,return )

Float BaseStage_obj::get_defaultCamZoom(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_181_get_defaultCamZoom)
HXDLIN( 181)		return ( (Float)(this->game->__Field(HX_("defaultCamZoom",01,50,2a,0b),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseStage_obj,get_defaultCamZoom,return )

Float BaseStage_obj::set_defaultCamZoom(Float value){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_183_set_defaultCamZoom)
HXLINE( 184)		this->game->__SetField(HX_("defaultCamZoom",01,50,2a,0b),value,::hx::paccDynamic);
HXLINE( 185)		return ( (Float)(this->game->__Field(HX_("defaultCamZoom",01,50,2a,0b),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseStage_obj,set_defaultCamZoom,return )

 ::flixel::FlxObject BaseStage_obj::get_camFollow(){
            	HX_STACKFRAME(&_hx_pos_3e78deb4e15a8a4d_187_get_camFollow)
HXDLIN( 187)		return ( ( ::flixel::FlxObject)(this->game->__Field(HX_("camFollow",e0,6e,47,22),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseStage_obj,get_camFollow,return )


::hx::ObjectPtr< BaseStage_obj > BaseStage_obj::__new() {
	::hx::ObjectPtr< BaseStage_obj > __this = new BaseStage_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BaseStage_obj > BaseStage_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BaseStage_obj *__this = (BaseStage_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BaseStage_obj), true, "backend.BaseStage"));
	*(void **)__this = BaseStage_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BaseStage_obj::BaseStage_obj()
{
}

void BaseStage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseStage);
	HX_MARK_MEMBER_NAME(game,"game");
	HX_MARK_MEMBER_NAME(onPlayState,"onPlayState");
	HX_MARK_MEMBER_NAME(curBeat,"curBeat");
	HX_MARK_MEMBER_NAME(curDecBeat,"curDecBeat");
	HX_MARK_MEMBER_NAME(curStep,"curStep");
	HX_MARK_MEMBER_NAME(curDecStep,"curDecStep");
	HX_MARK_MEMBER_NAME(curSection,"curSection");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BaseStage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(game,"game");
	HX_VISIT_MEMBER_NAME(onPlayState,"onPlayState");
	HX_VISIT_MEMBER_NAME(curBeat,"curBeat");
	HX_VISIT_MEMBER_NAME(curDecBeat,"curDecBeat");
	HX_VISIT_MEMBER_NAME(curStep,"curStep");
	HX_VISIT_MEMBER_NAME(curDecStep,"curDecStep");
	HX_VISIT_MEMBER_NAME(curSection,"curSection");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BaseStage_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gf") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_gf() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"dad") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_dad() ); }
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { return ::hx::Val( game ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paused() ); }
		if (HX_FIELD_EQ(inName,"camHUD") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_camHUD() ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"insert") ) { return ::hx::Val( insert_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_gf") ) { return ::hx::Val( get_gf_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_members() ); }
		if (HX_FIELD_EQ(inName,"gfGroup") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_gfGroup() ); }
		if (HX_FIELD_EQ(inName,"camGame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_camGame() ); }
		if (HX_FIELD_EQ(inName,"curBeat") ) { return ::hx::Val( curBeat ); }
		if (HX_FIELD_EQ(inName,"curStep") ) { return ::hx::Val( curStep ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		if (HX_FIELD_EQ(inName,"stepHit") ) { return ::hx::Val( stepHit_dyn() ); }
		if (HX_FIELD_EQ(inName,"endSong") ) { return ::hx::Val( endSong_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_dad") ) { return ::hx::Val( get_dad_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"songName") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_songName() ); }
		if (HX_FIELD_EQ(inName,"canPause") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_canPause() ); }
		if (HX_FIELD_EQ(inName,"dadGroup") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_dadGroup() ); }
		if (HX_FIELD_EQ(inName,"camOther") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_camOther() ); }
		if (HX_FIELD_EQ(inName,"precache") ) { return ::hx::Val( precache_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_game") ) { return ::hx::Val( set_game_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"boyfriend") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_boyfriend() ); }
		if (HX_FIELD_EQ(inName,"camFollow") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_camFollow() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"inCutscene") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_inCutscene() ); }
		if (HX_FIELD_EQ(inName,"createPost") ) { return ::hx::Val( createPost_dyn() ); }
		if (HX_FIELD_EQ(inName,"curDecBeat") ) { return ::hx::Val( curDecBeat ); }
		if (HX_FIELD_EQ(inName,"curDecStep") ) { return ::hx::Val( curDecStep ); }
		if (HX_FIELD_EQ(inName,"curSection") ) { return ::hx::Val( curSection ); }
		if (HX_FIELD_EQ(inName,"sectionHit") ) { return ::hx::Val( sectionHit_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveCamera") ) { return ::hx::Val( moveCamera_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paused") ) { return ::hx::Val( get_paused_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_camHUD") ) { return ::hx::Val( get_camHUD_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onPlayState") ) { return ::hx::Val( onPlayState ); }
		if (HX_FIELD_EQ(inName,"isStoryMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isStoryMode() ); }
		if (HX_FIELD_EQ(inName,"eventCalled") ) { return ::hx::Val( eventCalled_dyn() ); }
		if (HX_FIELD_EQ(inName,"eventPushed") ) { return ::hx::Val( eventPushed_dyn() ); }
		if (HX_FIELD_EQ(inName,"addBehindGF") ) { return ::hx::Val( addBehindGF_dyn() ); }
		if (HX_FIELD_EQ(inName,"addBehindBF") ) { return ::hx::Val( addBehindBF_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_members") ) { return ::hx::Val( get_members_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_gfGroup") ) { return ::hx::Val( get_gfGroup_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_camGame") ) { return ::hx::Val( get_camGame_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"seenCutscene") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_seenCutscene() ); }
		if (HX_FIELD_EQ(inName,"openSubState") ) { return ::hx::Val( openSubState_dyn() ); }
		if (HX_FIELD_EQ(inName,"addBehindDad") ) { return ::hx::Val( addBehindDad_dyn() ); }
		if (HX_FIELD_EQ(inName,"setDefaultGF") ) { return ::hx::Val( setDefaultGF_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_songName") ) { return ::hx::Val( get_songName_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_canPause") ) { return ::hx::Val( get_canPause_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_canPause") ) { return ::hx::Val( set_canPause_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_dadGroup") ) { return ::hx::Val( get_dadGroup_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_camOther") ) { return ::hx::Val( get_camOther_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"countdownTick") ) { return ::hx::Val( countdownTick_dyn() ); }
		if (HX_FIELD_EQ(inName,"closeSubState") ) { return ::hx::Val( closeSubState_dyn() ); }
		if (HX_FIELD_EQ(inName,"precacheImage") ) { return ::hx::Val( precacheImage_dyn() ); }
		if (HX_FIELD_EQ(inName,"precacheSound") ) { return ::hx::Val( precacheSound_dyn() ); }
		if (HX_FIELD_EQ(inName,"precacheMusic") ) { return ::hx::Val( precacheMusic_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_boyfriend") ) { return ::hx::Val( get_boyfriend_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_camFollow") ) { return ::hx::Val( get_camFollow_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"boyfriendGroup") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_boyfriendGroup() ); }
		if (HX_FIELD_EQ(inName,"defaultCamZoom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_defaultCamZoom() ); }
		if (HX_FIELD_EQ(inName,"setEndCallback") ) { return ::hx::Val( setEndCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"startCountdown") ) { return ::hx::Val( startCountdown_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_inCutscene") ) { return ::hx::Val( get_inCutscene_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_inCutscene") ) { return ::hx::Val( set_inCutscene_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isStoryMode") ) { return ::hx::Val( get_isStoryMode_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setStartCallback") ) { return ::hx::Val( setStartCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_seenCutscene") ) { return ::hx::Val( get_seenCutscene_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"eventPushedUnique") ) { return ::hx::Val( eventPushedUnique_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveCameraSection") ) { return ::hx::Val( moveCameraSection_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_boyfriendGroup") ) { return ::hx::Val( get_boyfriendGroup_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_defaultCamZoom") ) { return ::hx::Val( get_defaultCamZoom_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_defaultCamZoom") ) { return ::hx::Val( set_defaultCamZoom_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BaseStage_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_game(inValue.Cast<  ::Dynamic >()) );game=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curBeat") ) { curBeat=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curStep") ) { curStep=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canPause") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_canPause(inValue.Cast< bool >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"inCutscene") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_inCutscene(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"curDecBeat") ) { curDecBeat=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curDecStep") ) { curDecStep=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curSection") ) { curSection=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onPlayState") ) { onPlayState=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultCamZoom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_defaultCamZoom(inValue.Cast< Float >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseStage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("game",f2,f3,5e,44));
	outFields->push(HX_("onPlayState",5e,86,32,c7));
	outFields->push(HX_("paused",ae,40,84,ef));
	outFields->push(HX_("songName",c0,d0,d7,36));
	outFields->push(HX_("isStoryMode",ae,68,02,07));
	outFields->push(HX_("seenCutscene",25,d1,95,b5));
	outFields->push(HX_("inCutscene",8f,21,01,56));
	outFields->push(HX_("canPause",c6,18,eb,2b));
	outFields->push(HX_("members",d9,2c,70,1a));
	outFields->push(HX_("boyfriend",6a,29,b8,e6));
	outFields->push(HX_("dad",47,36,4c,00));
	outFields->push(HX_("gf",1f,5a,00,00));
	outFields->push(HX_("boyfriendGroup",75,99,09,ef));
	outFields->push(HX_("dadGroup",78,cb,28,42));
	outFields->push(HX_("gfGroup",a0,b8,ab,b0));
	outFields->push(HX_("camGame",a1,47,50,cf));
	outFields->push(HX_("camHUD",e8,2b,76,b7));
	outFields->push(HX_("camOther",41,4c,ae,3e));
	outFields->push(HX_("defaultCamZoom",01,50,2a,0b));
	outFields->push(HX_("camFollow",e0,6e,47,22));
	outFields->push(HX_("curBeat",16,53,29,ac));
	outFields->push(HX_("curDecBeat",b8,a2,ef,d7));
	outFields->push(HX_("curStep",ec,58,71,b7));
	outFields->push(HX_("curDecStep",8e,a8,37,e3));
	outFields->push(HX_("curSection",45,58,c1,68));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BaseStage_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(BaseStage_obj,game),HX_("game",f2,f3,5e,44)},
	{::hx::fsBool,(int)offsetof(BaseStage_obj,onPlayState),HX_("onPlayState",5e,86,32,c7)},
	{::hx::fsInt,(int)offsetof(BaseStage_obj,curBeat),HX_("curBeat",16,53,29,ac)},
	{::hx::fsFloat,(int)offsetof(BaseStage_obj,curDecBeat),HX_("curDecBeat",b8,a2,ef,d7)},
	{::hx::fsInt,(int)offsetof(BaseStage_obj,curStep),HX_("curStep",ec,58,71,b7)},
	{::hx::fsFloat,(int)offsetof(BaseStage_obj,curDecStep),HX_("curDecStep",8e,a8,37,e3)},
	{::hx::fsInt,(int)offsetof(BaseStage_obj,curSection),HX_("curSection",45,58,c1,68)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BaseStage_obj_sStaticStorageInfo = 0;
#endif

static ::String BaseStage_obj_sMemberFields[] = {
	HX_("game",f2,f3,5e,44),
	HX_("onPlayState",5e,86,32,c7),
	HX_("create",fc,66,0f,7c),
	HX_("createPost",7c,45,ea,5c),
	HX_("countdownTick",ae,ec,5f,18),
	HX_("curBeat",16,53,29,ac),
	HX_("curDecBeat",b8,a2,ef,d7),
	HX_("curStep",ec,58,71,b7),
	HX_("curDecStep",8e,a8,37,e3),
	HX_("curSection",45,58,c1,68),
	HX_("beatHit",7d,ea,04,74),
	HX_("stepHit",67,ae,41,81),
	HX_("sectionHit",6e,f5,cd,be),
	HX_("closeSubState",49,18,32,04),
	HX_("openSubState",5b,66,48,37),
	HX_("eventCalled",37,a0,35,0a),
	HX_("eventPushed",73,60,7a,c5),
	HX_("eventPushedUnique",e4,bf,cd,6f),
	HX_("add",21,f2,49,00),
	HX_("remove",44,9c,88,04),
	HX_("insert",39,43,dd,9d),
	HX_("addBehindGF",9a,c8,d5,d1),
	HX_("addBehindBF",3f,c4,d5,d1),
	HX_("addBehindDad",4c,8f,37,c9),
	HX_("setDefaultGF",1e,49,4c,1b),
	HX_("setStartCallback",45,93,24,44),
	HX_("setEndCallback",3e,68,83,de),
	HX_("precacheImage",9c,8f,57,a3),
	HX_("precacheSound",10,fd,ba,66),
	HX_("precacheMusic",e6,40,49,f6),
	HX_("precache",3f,db,c0,2d),
	HX_("startCountdown",ef,1f,f0,88),
	HX_("endSong",50,dd,7c,2e),
	HX_("moveCameraSection",ef,4b,d5,47),
	HX_("moveCamera",96,c0,ba,07),
	HX_("get_paused",77,b0,0b,e0),
	HX_("get_songName",c9,84,f1,eb),
	HX_("get_isStoryMode",45,20,e4,c7),
	HX_("get_seenCutscene",ae,bd,34,ba),
	HX_("get_inCutscene",d8,a9,f6,cb),
	HX_("set_inCutscene",4c,92,16,ec),
	HX_("get_canPause",cf,cc,04,e1),
	HX_("set_canPause",43,f0,fd,f5),
	HX_("get_members",f0,8c,6a,a0),
	HX_("set_game",ef,08,77,72),
	HX_("get_boyfriend",41,fd,1b,a8),
	HX_("get_dad",de,fe,c0,26),
	HX_("get_gf",68,f1,2f,a3),
	HX_("get_boyfriendGroup",3e,7a,a3,8a),
	HX_("get_dadGroup",81,7f,42,f7),
	HX_("get_gfGroup",b7,18,a6,36),
	HX_("get_camGame",b8,a7,4a,55),
	HX_("get_camHUD",b1,9b,fd,a7),
	HX_("get_camOther",4a,00,c8,f3),
	HX_("get_defaultCamZoom",ca,30,c4,a6),
	HX_("set_defaultCamZoom",3e,63,73,83),
	HX_("get_camFollow",b7,42,ab,e3),
	::String(null()) };

::hx::Class BaseStage_obj::__mClass;

void BaseStage_obj::__register()
{
	BaseStage_obj _hx_dummy;
	BaseStage_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.BaseStage",f3,9b,8f,75);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BaseStage_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BaseStage_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BaseStage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BaseStage_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace backend
