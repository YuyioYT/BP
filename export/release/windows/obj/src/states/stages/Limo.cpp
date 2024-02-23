#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_backend_Achievements
#include <backend/Achievements.h>
#endif
#ifndef INCLUDED_backend_BaseStage
#include <backend/BaseStage.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_states_stages_HenchmenKillState
#include <states/stages/HenchmenKillState.h>
#endif
#ifndef INCLUDED_states_stages_Limo
#include <states/stages/Limo.h>
#endif
#ifndef INCLUDED_states_stages_objects_BackgroundDancer
#include <states/stages/objects/BackgroundDancer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_15_new,"states.stages.Limo","new",0xf3018c1e,"states.stages.Limo.new","states/stages/Limo.hx",15,0xc615f2f2)
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_32_create,"states.stages.Limo","create",0xcbff15fe,"states.stages.Limo.create","states/stages/Limo.hx",32,0xc615f2f2)
static const ::String _hx_array_data_914de52c_2[] = {
	HX_("background limo pink",65,40,fe,9c),
};
static const ::String _hx_array_data_914de52c_3[] = {
	HX_("Henchmen on rail",13,dc,25,64),
};
static const ::String _hx_array_data_914de52c_4[] = {
	HX_("henchmen death",34,87,54,b2),
};
static const ::String _hx_array_data_914de52c_5[] = {
	HX_("blood",ba,7f,fc,b4),
};
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_80_createPost,"states.stages.Limo","createPost",0x16aa9d7e,"states.stages.Limo.createPost","states/stages/Limo.hx",80,0xc615f2f2)
static const ::String _hx_array_data_914de52c_7[] = {
	HX_("Limo stage",1d,b3,df,4c),
};
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_90_update,"states.stages.Limo","update",0xd6f5350b,"states.stages.Limo.update","states/stages/Limo.hx",90,0xc615f2f2)
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_93_update,"states.stages.Limo","update",0xd6f5350b,"states.stages.Limo.update","states/stages/Limo.hx",93,0xc615f2f2)
static const ::String _hx_array_data_914de52c_11[] = {
	HX_("blood",ba,7f,fc,b4),
};
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_174_beatHit,"states.stages.Limo","beatHit",0x15ce5d3b,"states.stages.Limo.beatHit","states/stages/Limo.hx",174,0xc615f2f2)
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_178_beatHit,"states.stages.Limo","beatHit",0x15ce5d3b,"states.stages.Limo.beatHit","states/stages/Limo.hx",178,0xc615f2f2)
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_189_closeSubState,"states.stages.Limo","closeSubState",0x0e8b2d87,"states.stages.Limo.closeSubState","states/stages/Limo.hx",189,0xc615f2f2)
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_197_openSubState,"states.stages.Limo","openSubState",0x23d042dd,"states.stages.Limo.openSubState","states/stages/Limo.hx",197,0xc615f2f2)
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_205_eventCalled,"states.stages.Limo","eventCalled",0xd8c249f5,"states.stages.Limo.eventCalled","states/stages/Limo.hx",205,0xc615f2f2)
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_213_dancersParenting,"states.stages.Limo","dancersParenting",0xf60e1326,"states.stages.Limo.dancersParenting","states/stages/Limo.hx",213,0xc615f2f2)
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_221_resetLimoKill,"states.stages.Limo","resetLimoKill",0x1ad1a08a,"states.stages.Limo.resetLimoKill","states/stages/Limo.hx",221,0xc615f2f2)
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_233_resetFastCar,"states.stages.Limo","resetFastCar",0x3c86154b,"states.stages.Limo.resetFastCar","states/stages/Limo.hx",233,0xc615f2f2)
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_249_fastCarDrive,"states.stages.Limo","fastCarDrive",0xab5a7394,"states.stages.Limo.fastCarDrive","states/stages/Limo.hx",249,0xc615f2f2)
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_242_fastCarDrive,"states.stages.Limo","fastCarDrive",0xab5a7394,"states.stages.Limo.fastCarDrive","states/stages/Limo.hx",242,0xc615f2f2)
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_257_killHenchmen,"states.stages.Limo","killHenchmen",0x1f2dda60,"states.stages.Limo.killHenchmen","states/stages/Limo.hx",257,0xc615f2f2)
static const ::String _hx_array_data_914de52c_24[] = {
	HX_("roadkill_enthusiast",15,e2,55,56),
};
namespace states{
namespace stages{

void Limo_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_15_new)
HXLINE(  88)		this->limoSpeed = ((Float)0);
HXLINE(  29)		this->dancersDiff = ((Float)320);
HXLINE(  22)		this->limoKillingState = ::states::stages::HenchmenKillState_obj::WAIT_dyn();
HXLINE(  19)		this->fastCarCanDrive = true;
HXLINE(  15)		super::__construct();
            	}

Dynamic Limo_obj::__CreateEmpty() { return new Limo_obj; }

void *Limo_obj::_hx_vtable = 0;

Dynamic Limo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Limo_obj > _hx_result = new Limo_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Limo_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6e9fe5f6) {
		if (inClassId<=(int)0x230cab9d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x230cab9d;
		} else {
			return inClassId==(int)0x6e9fe5f6;
		}
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void Limo_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_32_create)
HXLINE(  33)		 ::objects::BGSprite skyBG =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("limo/limoSunset",45,de,4f,6e),-120,-50,((Float)0.1),((Float)0.1),null(),null());
HXLINE(  34)		this->add(skyBG);
HXLINE(  36)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE(  37)			this->limoMetalPole =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("gore/metalPole",6b,f5,62,65),-500,220,((Float)0.4),((Float)0.4),null(),null());
HXLINE(  38)			this->add(this->limoMetalPole);
HXLINE(  40)			this->bgLimo =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("limo/bgLimo",b4,c7,45,2c),-150,480,((Float)0.4),((Float)0.4),::Array_obj< ::String >::fromData( _hx_array_data_914de52c_2,1),true);
HXLINE(  41)			this->add(this->bgLimo);
HXLINE(  43)			this->limoCorpse =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("gore/noooooo",da,20,24,22),-500,(this->limoMetalPole->y - ( (Float)(130) )),((Float)0.4),((Float)0.4),::Array_obj< ::String >::fromData( _hx_array_data_914de52c_3,1),true);
HXLINE(  44)			this->add(this->limoCorpse);
HXLINE(  46)			this->limoCorpseTwo =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("gore/noooooo",da,20,24,22),-500,this->limoMetalPole->y,((Float)0.4),((Float)0.4),::Array_obj< ::String >::fromData( _hx_array_data_914de52c_4,1),true);
HXLINE(  47)			this->add(this->limoCorpseTwo);
HXLINE(  49)			this->grpLimoDancers =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  50)			this->add(this->grpLimoDancers);
HXLINE(  52)			{
HXLINE(  53)				{
HXLINE(  54)					 ::states::stages::objects::BackgroundDancer dancer =  ::states::stages::objects::BackgroundDancer_obj::__alloc( HX_CTX ,(this->dancersDiff + this->bgLimo->x),(this->bgLimo->y - ( (Float)(400) )));
HXLINE(  55)					{
HXLINE(  55)						 ::flixel::math::FlxBasePoint this1 = dancer->scrollFactor;
HXDLIN(  55)						this1->set_x(((Float)0.4));
HXDLIN(  55)						this1->set_y(((Float)0.4));
            					}
HXLINE(  56)					this->grpLimoDancers->add(dancer).StaticCast<  ::states::stages::objects::BackgroundDancer >();
            				}
HXLINE(  53)				{
HXLINE(  54)					 ::states::stages::objects::BackgroundDancer dancer1 =  ::states::stages::objects::BackgroundDancer_obj::__alloc( HX_CTX ,((370 + this->dancersDiff) + this->bgLimo->x),(this->bgLimo->y - ( (Float)(400) )));
HXLINE(  55)					{
HXLINE(  55)						 ::flixel::math::FlxBasePoint this2 = dancer1->scrollFactor;
HXDLIN(  55)						this2->set_x(((Float)0.4));
HXDLIN(  55)						this2->set_y(((Float)0.4));
            					}
HXLINE(  56)					this->grpLimoDancers->add(dancer1).StaticCast<  ::states::stages::objects::BackgroundDancer >();
            				}
HXLINE(  53)				{
HXLINE(  54)					 ::states::stages::objects::BackgroundDancer dancer2 =  ::states::stages::objects::BackgroundDancer_obj::__alloc( HX_CTX ,((740 + this->dancersDiff) + this->bgLimo->x),(this->bgLimo->y - ( (Float)(400) )));
HXLINE(  55)					{
HXLINE(  55)						 ::flixel::math::FlxBasePoint this3 = dancer2->scrollFactor;
HXDLIN(  55)						this3->set_x(((Float)0.4));
HXDLIN(  55)						this3->set_y(((Float)0.4));
            					}
HXLINE(  56)					this->grpLimoDancers->add(dancer2).StaticCast<  ::states::stages::objects::BackgroundDancer >();
            				}
HXLINE(  53)				{
HXLINE(  54)					 ::states::stages::objects::BackgroundDancer dancer3 =  ::states::stages::objects::BackgroundDancer_obj::__alloc( HX_CTX ,((1110 + this->dancersDiff) + this->bgLimo->x),(this->bgLimo->y - ( (Float)(400) )));
HXLINE(  55)					{
HXLINE(  55)						 ::flixel::math::FlxBasePoint this4 = dancer3->scrollFactor;
HXDLIN(  55)						this4->set_x(((Float)0.4));
HXDLIN(  55)						this4->set_y(((Float)0.4));
            					}
HXLINE(  56)					this->grpLimoDancers->add(dancer3).StaticCast<  ::states::stages::objects::BackgroundDancer >();
            				}
HXLINE(  53)				{
HXLINE(  54)					 ::states::stages::objects::BackgroundDancer dancer4 =  ::states::stages::objects::BackgroundDancer_obj::__alloc( HX_CTX ,((1480 + this->dancersDiff) + this->bgLimo->x),(this->bgLimo->y - ( (Float)(400) )));
HXLINE(  55)					{
HXLINE(  55)						 ::flixel::math::FlxBasePoint this5 = dancer4->scrollFactor;
HXDLIN(  55)						this5->set_x(((Float)0.4));
HXDLIN(  55)						this5->set_y(((Float)0.4));
            					}
HXLINE(  56)					this->grpLimoDancers->add(dancer4).StaticCast<  ::states::stages::objects::BackgroundDancer >();
            				}
            			}
HXLINE(  59)			this->limoLight =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("gore/coldHeartKiller",79,ac,4a,05),(this->limoMetalPole->x - ( (Float)(180) )),(this->limoMetalPole->y - ( (Float)(80) )),((Float)0.4),((Float)0.4),null(),null());
HXLINE(  60)			this->add(this->limoLight);
HXLINE(  62)			this->grpLimoParticles =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  63)			this->add(this->grpLimoParticles);
HXLINE(  66)			 ::objects::BGSprite particle =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("gore/stupidBlood",af,b8,f7,cb),-400,-400,((Float)0.4),((Float)0.4),::Array_obj< ::String >::fromData( _hx_array_data_914de52c_5,1),false);
HXLINE(  67)			particle->set_alpha(((Float)0.01));
HXLINE(  68)			this->grpLimoParticles->add(particle).StaticCast<  ::objects::BGSprite >();
HXLINE(  69)			this->resetLimoKill();
HXLINE(  72)			this->precacheSound(HX_("dancerdeath",f5,1c,1c,c9));
HXLINE(  73)			this->setDefaultGF(HX_("gf-car",a6,63,ab,07));
            		}
HXLINE(  76)		this->fastCar =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("limo/fastCarLol",c1,b0,ed,94),-300,160,null(),null(),null(),null());
HXLINE(  77)		this->fastCar->set_active(true);
            	}


void Limo_obj::createPost(){
            	HX_GC_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_80_createPost)
HXLINE(  81)		this->resetFastCar();
HXLINE(  82)		this->addBehindGF(this->fastCar);
HXLINE(  84)		 ::objects::BGSprite limo =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("limo/limoDrive",3b,67,64,e6),-120,550,1,1,::Array_obj< ::String >::fromData( _hx_array_data_914de52c_7,1),true);
HXLINE(  85)		this->addBehindGF(limo);
            	}


void Limo_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_90_update)
HXDLIN(  90)		 ::states::stages::Limo _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  91)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::stages::Limo,_gthis) HXARGC(1)
            			void _hx_run( ::objects::BGSprite spr){
            				HX_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_93_update)
HXLINE(  93)				if (spr->animation->_curAnim->finished) {
HXLINE(  94)					spr->kill();
HXLINE(  95)					_gthis->grpLimoParticles->remove(spr,true).StaticCast<  ::objects::BGSprite >();
HXLINE(  96)					spr->destroy();
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  92)			this->grpLimoParticles->forEach( ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE( 100)			switch((int)(this->limoKillingState->_hx_getIndex())){
            				case (int)1: {
HXLINE( 102)					 ::objects::BGSprite fh = this->limoMetalPole;
HXDLIN( 102)					fh->set_x((fh->x + (( (Float)(5000) ) * elapsed)));
HXLINE( 103)					this->limoLight->set_x((this->limoMetalPole->x - ( (Float)(180) )));
HXLINE( 104)					this->limoCorpse->set_x((this->limoLight->x - ( (Float)(50) )));
HXLINE( 105)					this->limoCorpseTwo->set_x((this->limoLight->x + 35));
HXLINE( 107)					::Array< ::Dynamic> dancers = this->grpLimoDancers->members;
HXLINE( 108)					{
HXLINE( 108)						int _g = 0;
HXDLIN( 108)						int _g1 = dancers->length;
HXDLIN( 108)						while((_g < _g1)){
HXLINE( 108)							_g = (_g + 1);
HXDLIN( 108)							int i = (_g - 1);
HXLINE( 109)							bool _hx_tmp;
HXDLIN( 109)							if ((dancers->__get(i).StaticCast<  ::states::stages::objects::BackgroundDancer >()->x < (( (Float)(::flixel::FlxG_obj::width) ) * ((Float)1.5)))) {
HXLINE( 109)								_hx_tmp = (this->limoLight->x > ((370 * i) + 170));
            							}
            							else {
HXLINE( 109)								_hx_tmp = false;
            							}
HXDLIN( 109)							if (_hx_tmp) {
HXLINE( 110)								switch((int)(i)){
            									case (int)1: {
HXLINE( 127)										this->limoCorpse->set_visible(true);
            									}
            									break;
            									case (int)2: {
HXLINE( 129)										this->limoCorpseTwo->set_visible(true);
            									}
            									break;
            									case (int)0: case (int)3: {
HXLINE( 112)										if ((i == 0)) {
HXLINE( 112)											 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 112)											_hx_tmp->play(::backend::Paths_obj::sound(HX_("dancerdeath",f5,1c,1c,c9),null()),((Float)0.5),null(),null(),null(),null());
            										}
HXLINE( 114)										::String diffStr;
HXDLIN( 114)										if ((i == 3)) {
HXLINE( 114)											diffStr = HX_(" 2 ",ce,73,18,00);
            										}
            										else {
HXLINE( 114)											diffStr = HX_(" ",20,00,00,00);
            										}
HXLINE( 115)										 ::objects::BGSprite particle =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("gore/noooooo",da,20,24,22),(dancers->__get(i).StaticCast<  ::states::stages::objects::BackgroundDancer >()->x + 200),dancers->__get(i).StaticCast<  ::states::stages::objects::BackgroundDancer >()->y,((Float)0.4),((Float)0.4),::Array_obj< ::String >::__new(1)->init(0,((HX_("hench leg spin",fe,64,3b,9f) + diffStr) + HX_("PINK",76,ba,18,35))),false);
HXLINE( 116)										this->grpLimoParticles->add(particle).StaticCast<  ::objects::BGSprite >();
HXLINE( 117)										 ::objects::BGSprite particle1 =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("gore/noooooo",da,20,24,22),(dancers->__get(i).StaticCast<  ::states::stages::objects::BackgroundDancer >()->x + 160),(dancers->__get(i).StaticCast<  ::states::stages::objects::BackgroundDancer >()->y + 200),((Float)0.4),((Float)0.4),::Array_obj< ::String >::__new(1)->init(0,((HX_("hench arm spin",b0,af,cb,ac) + diffStr) + HX_("PINK",76,ba,18,35))),false);
HXLINE( 118)										this->grpLimoParticles->add(particle1).StaticCast<  ::objects::BGSprite >();
HXLINE( 119)										 ::objects::BGSprite particle2 =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("gore/noooooo",da,20,24,22),dancers->__get(i).StaticCast<  ::states::stages::objects::BackgroundDancer >()->x,(dancers->__get(i).StaticCast<  ::states::stages::objects::BackgroundDancer >()->y + 50),((Float)0.4),((Float)0.4),::Array_obj< ::String >::__new(1)->init(0,((HX_("hench head spin",d8,df,79,d7) + diffStr) + HX_("PINK",76,ba,18,35))),false);
HXLINE( 120)										this->grpLimoParticles->add(particle2).StaticCast<  ::objects::BGSprite >();
HXLINE( 122)										 ::objects::BGSprite particle3 =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("gore/stupidBlood",af,b8,f7,cb),(dancers->__get(i).StaticCast<  ::states::stages::objects::BackgroundDancer >()->x - ( (Float)(110) )),(dancers->__get(i).StaticCast<  ::states::stages::objects::BackgroundDancer >()->y + 20),((Float)0.4),((Float)0.4),::Array_obj< ::String >::fromData( _hx_array_data_914de52c_11,1),false);
HXLINE( 123)										particle3->set_flipX(true);
HXLINE( 124)										particle3->set_angle(((Float)-57.5));
HXLINE( 125)										this->grpLimoParticles->add(particle3).StaticCast<  ::objects::BGSprite >();
            									}
            									break;
            								}
HXLINE( 131)								 ::states::stages::objects::BackgroundDancer fh = dancers->__get(i).StaticCast<  ::states::stages::objects::BackgroundDancer >();
HXDLIN( 131)								fh->set_x((fh->x + (::flixel::FlxG_obj::width * 2)));
            							}
            						}
            					}
HXLINE( 135)					if ((this->limoMetalPole->x > (::flixel::FlxG_obj::width * 2))) {
HXLINE( 136)						this->resetLimoKill();
HXLINE( 137)						this->limoSpeed = ( (Float)(800) );
HXLINE( 138)						this->limoKillingState = ::states::stages::HenchmenKillState_obj::SPEEDING_OFFSCREEN_dyn();
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 142)					 ::states::stages::Limo _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 142)					_hx_tmp->limoSpeed = (_hx_tmp->limoSpeed - (( (Float)(4000) ) * elapsed));
HXLINE( 143)					 ::objects::BGSprite fh = this->bgLimo;
HXDLIN( 143)					fh->set_x((fh->x - (this->limoSpeed * elapsed)));
HXLINE( 144)					if ((this->bgLimo->x > (( (Float)(::flixel::FlxG_obj::width) ) * ((Float)1.5)))) {
HXLINE( 145)						this->limoSpeed = ( (Float)(3000) );
HXLINE( 146)						this->limoKillingState = ::states::stages::HenchmenKillState_obj::SPEEDING_dyn();
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 150)					 ::states::stages::Limo _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 150)					_hx_tmp->limoSpeed = (_hx_tmp->limoSpeed - (( (Float)(2000) ) * elapsed));
HXLINE( 151)					if ((this->limoSpeed < 1000)) {
HXLINE( 151)						this->limoSpeed = ( (Float)(1000) );
            					}
HXLINE( 153)					 ::objects::BGSprite fh = this->bgLimo;
HXDLIN( 153)					fh->set_x((fh->x - (this->limoSpeed * elapsed)));
HXLINE( 154)					if ((this->bgLimo->x < -275)) {
HXLINE( 155)						this->limoKillingState = ::states::stages::HenchmenKillState_obj::STOPPING_dyn();
HXLINE( 156)						this->limoSpeed = ( (Float)(800) );
            					}
HXLINE( 158)					this->dancersParenting();
            				}
            				break;
            				case (int)4: {
HXLINE( 161)					Float a = this->bgLimo->x;
HXDLIN( 161)					Float Value = (elapsed * ( (Float)(9) ));
HXDLIN( 161)					Float lowerBound;
HXDLIN( 161)					if ((Value < 0)) {
HXLINE( 161)						lowerBound = ( (Float)(0) );
            					}
            					else {
HXLINE( 161)						lowerBound = Value;
            					}
HXDLIN( 161)					Float _hx_tmp;
HXDLIN( 161)					if ((lowerBound > 1)) {
HXLINE( 161)						_hx_tmp = ( (Float)(1) );
            					}
            					else {
HXLINE( 161)						_hx_tmp = lowerBound;
            					}
HXDLIN( 161)					this->bgLimo->set_x((a + (_hx_tmp * (( (Float)(-150) ) - a))));
HXLINE( 162)					if ((::Math_obj::round(this->bgLimo->x) == -150)) {
HXLINE( 163)						this->bgLimo->set_x(( (Float)(-150) ));
HXLINE( 164)						this->limoKillingState = ::states::stages::HenchmenKillState_obj::WAIT_dyn();
            					}
HXLINE( 166)					this->dancersParenting();
            				}
            				break;
            				default:{
            				}
            			}
            		}
            	}


void Limo_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_174_beatHit)
HXLINE( 175)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			void _hx_run( ::states::stages::objects::BackgroundDancer dancer){
            				HX_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_178_beatHit)
HXLINE( 178)				dancer->dance();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 176)			this->grpLimoDancers->forEach( ::Dynamic(new _hx_Closure_0()),null());
            		}
HXLINE( 182)		bool _hx_tmp;
HXDLIN( 182)		if ((::flixel::FlxG_obj::random->_hx_float(0,100,null()) < 10)) {
HXLINE( 182)			_hx_tmp = this->fastCarCanDrive;
            		}
            		else {
HXLINE( 182)			_hx_tmp = false;
            		}
HXDLIN( 182)		if (_hx_tmp) {
HXLINE( 183)			this->fastCarDrive();
            		}
            	}


void Limo_obj::closeSubState(){
            	HX_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_189_closeSubState)
HXDLIN( 189)		if (( (bool)(this->game->__Field(HX_("paused",ae,40,84,ef),::hx::paccDynamic)) )) {
HXLINE( 191)			if (::hx::IsNotNull( this->carTimer )) {
HXLINE( 191)				this->carTimer->active = true;
            			}
            		}
            	}


void Limo_obj::openSubState( ::flixel::FlxSubState SubState){
            	HX_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_197_openSubState)
HXDLIN( 197)		if (( (bool)(this->game->__Field(HX_("paused",ae,40,84,ef),::hx::paccDynamic)) )) {
HXLINE( 199)			if (::hx::IsNotNull( this->carTimer )) {
HXLINE( 199)				this->carTimer->active = false;
            			}
            		}
            	}


void Limo_obj::eventCalled(::String eventName,::String value1,::String value2, ::Dynamic flValue1, ::Dynamic flValue2,Float strumTime){
            	HX_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_205_eventCalled)
HXDLIN( 205)		if ((eventName == HX_("Kill Henchmen",e2,fc,7b,01))) {
HXLINE( 208)			this->killHenchmen();
            		}
            	}


void Limo_obj::dancersParenting(){
            	HX_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_213_dancersParenting)
HXLINE( 214)		::Array< ::Dynamic> dancers = this->grpLimoDancers->members;
HXLINE( 215)		{
HXLINE( 215)			int _g = 0;
HXDLIN( 215)			int _g1 = dancers->length;
HXDLIN( 215)			while((_g < _g1)){
HXLINE( 215)				_g = (_g + 1);
HXDLIN( 215)				int i = (_g - 1);
HXLINE( 216)				dancers->__get(i).StaticCast<  ::states::stages::objects::BackgroundDancer >()->set_x((((370 * i) + this->dancersDiff) + this->bgLimo->x));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Limo_obj,dancersParenting,(void))

void Limo_obj::resetLimoKill(){
            	HX_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_221_resetLimoKill)
HXLINE( 222)		this->limoMetalPole->set_x(( (Float)(-500) ));
HXLINE( 223)		this->limoMetalPole->set_visible(false);
HXLINE( 224)		this->limoLight->set_x(( (Float)(-500) ));
HXLINE( 225)		this->limoLight->set_visible(false);
HXLINE( 226)		this->limoCorpse->set_x(( (Float)(-500) ));
HXLINE( 227)		this->limoCorpse->set_visible(false);
HXLINE( 228)		this->limoCorpseTwo->set_x(( (Float)(-500) ));
HXLINE( 229)		this->limoCorpseTwo->set_visible(false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Limo_obj,resetLimoKill,(void))

void Limo_obj::resetFastCar(){
            	HX_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_233_resetFastCar)
HXLINE( 234)		this->fastCar->set_x(( (Float)(-12600) ));
HXLINE( 235)		 ::objects::BGSprite _hx_tmp = this->fastCar;
HXDLIN( 235)		_hx_tmp->set_y(( (Float)(::flixel::FlxG_obj::random->_hx_int(140,250,null())) ));
HXLINE( 236)		this->fastCar->velocity->set_x(( (Float)(0) ));
HXLINE( 237)		this->fastCarCanDrive = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Limo_obj,resetFastCar,(void))

void Limo_obj::fastCarDrive(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::stages::Limo,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_249_fastCarDrive)
HXLINE( 250)			_gthis->resetFastCar();
HXLINE( 251)			_gthis->carTimer = null();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_242_fastCarDrive)
HXDLIN( 242)		 ::states::stages::Limo _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 244)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 244)		::String library = null();
HXDLIN( 244)		_hx_tmp->play(::backend::Paths_obj::sound((HX_("carPass",05,1f,44,b6) + ::flixel::FlxG_obj::random->_hx_int(0,1,null())),library),((Float)0.7),null(),null(),null(),null());
HXLINE( 246)		{
HXLINE( 246)			 ::flixel::math::FlxBasePoint this1 = this->fastCar->velocity;
HXDLIN( 246)			int x = ::flixel::FlxG_obj::random->_hx_int(170,220,null());
HXDLIN( 246)			this1->set_x(((( (Float)(x) ) / ::flixel::FlxG_obj::elapsed) * ( (Float)(3) )));
            		}
HXLINE( 247)		this->fastCarCanDrive = false;
HXLINE( 248)		this->carTimer =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(2, ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Limo_obj,fastCarDrive,(void))

void Limo_obj::killHenchmen(){
            	HX_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_257_killHenchmen)
HXDLIN( 257)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE( 258)			if (::hx::IsPointerEq( this->limoKillingState,::states::stages::HenchmenKillState_obj::WAIT_dyn() )) {
HXLINE( 259)				this->limoMetalPole->set_x(( (Float)(-400) ));
HXLINE( 260)				this->limoMetalPole->set_visible(true);
HXLINE( 261)				this->limoLight->set_visible(true);
HXLINE( 262)				this->limoCorpse->set_visible(false);
HXLINE( 263)				this->limoCorpseTwo->set_visible(false);
HXLINE( 264)				this->limoKillingState = ::states::stages::HenchmenKillState_obj::KILLING_dyn();
HXLINE( 267)				::backend::Achievements_obj::henchmenDeath++;
HXLINE( 268)				::flixel::FlxG_obj::save->data->__SetField(HX_("henchmenDeath",f4,76,2a,dd),::backend::Achievements_obj::henchmenDeath,::hx::paccDynamic);
HXLINE( 269)				::String achieve = ( (::String)(this->game->__Field(HX_("checkForAchievement",ce,c6,ae,67),::hx::paccDynamic)(::Array_obj< ::String >::fromData( _hx_array_data_914de52c_24,1))) );
HXLINE( 270)				if (::hx::IsNotNull( achieve )) {
HXLINE( 271)					this->game->__Field(HX_("startAchievement",2d,5b,b8,dd),::hx::paccDynamic)(achieve);
            				}
            				else {
HXLINE( 273)					::flixel::FlxG_obj::save->flush(null());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Limo_obj,killHenchmen,(void))


::hx::ObjectPtr< Limo_obj > Limo_obj::__new() {
	::hx::ObjectPtr< Limo_obj > __this = new Limo_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Limo_obj > Limo_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Limo_obj *__this = (Limo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Limo_obj), true, "states.stages.Limo"));
	*(void **)__this = Limo_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Limo_obj::Limo_obj()
{
}

void Limo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Limo);
	HX_MARK_MEMBER_NAME(grpLimoDancers,"grpLimoDancers");
	HX_MARK_MEMBER_NAME(fastCar,"fastCar");
	HX_MARK_MEMBER_NAME(fastCarCanDrive,"fastCarCanDrive");
	HX_MARK_MEMBER_NAME(limoKillingState,"limoKillingState");
	HX_MARK_MEMBER_NAME(limoMetalPole,"limoMetalPole");
	HX_MARK_MEMBER_NAME(limoLight,"limoLight");
	HX_MARK_MEMBER_NAME(limoCorpse,"limoCorpse");
	HX_MARK_MEMBER_NAME(limoCorpseTwo,"limoCorpseTwo");
	HX_MARK_MEMBER_NAME(bgLimo,"bgLimo");
	HX_MARK_MEMBER_NAME(grpLimoParticles,"grpLimoParticles");
	HX_MARK_MEMBER_NAME(dancersDiff,"dancersDiff");
	HX_MARK_MEMBER_NAME(limoSpeed,"limoSpeed");
	HX_MARK_MEMBER_NAME(carTimer,"carTimer");
	 ::backend::BaseStage_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Limo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(grpLimoDancers,"grpLimoDancers");
	HX_VISIT_MEMBER_NAME(fastCar,"fastCar");
	HX_VISIT_MEMBER_NAME(fastCarCanDrive,"fastCarCanDrive");
	HX_VISIT_MEMBER_NAME(limoKillingState,"limoKillingState");
	HX_VISIT_MEMBER_NAME(limoMetalPole,"limoMetalPole");
	HX_VISIT_MEMBER_NAME(limoLight,"limoLight");
	HX_VISIT_MEMBER_NAME(limoCorpse,"limoCorpse");
	HX_VISIT_MEMBER_NAME(limoCorpseTwo,"limoCorpseTwo");
	HX_VISIT_MEMBER_NAME(bgLimo,"bgLimo");
	HX_VISIT_MEMBER_NAME(grpLimoParticles,"grpLimoParticles");
	HX_VISIT_MEMBER_NAME(dancersDiff,"dancersDiff");
	HX_VISIT_MEMBER_NAME(limoSpeed,"limoSpeed");
	HX_VISIT_MEMBER_NAME(carTimer,"carTimer");
	 ::backend::BaseStage_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Limo_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bgLimo") ) { return ::hx::Val( bgLimo ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fastCar") ) { return ::hx::Val( fastCar ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"carTimer") ) { return ::hx::Val( carTimer ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"limoLight") ) { return ::hx::Val( limoLight ); }
		if (HX_FIELD_EQ(inName,"limoSpeed") ) { return ::hx::Val( limoSpeed ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"limoCorpse") ) { return ::hx::Val( limoCorpse ); }
		if (HX_FIELD_EQ(inName,"createPost") ) { return ::hx::Val( createPost_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"dancersDiff") ) { return ::hx::Val( dancersDiff ); }
		if (HX_FIELD_EQ(inName,"eventCalled") ) { return ::hx::Val( eventCalled_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"openSubState") ) { return ::hx::Val( openSubState_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetFastCar") ) { return ::hx::Val( resetFastCar_dyn() ); }
		if (HX_FIELD_EQ(inName,"fastCarDrive") ) { return ::hx::Val( fastCarDrive_dyn() ); }
		if (HX_FIELD_EQ(inName,"killHenchmen") ) { return ::hx::Val( killHenchmen_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"limoMetalPole") ) { return ::hx::Val( limoMetalPole ); }
		if (HX_FIELD_EQ(inName,"limoCorpseTwo") ) { return ::hx::Val( limoCorpseTwo ); }
		if (HX_FIELD_EQ(inName,"closeSubState") ) { return ::hx::Val( closeSubState_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetLimoKill") ) { return ::hx::Val( resetLimoKill_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"grpLimoDancers") ) { return ::hx::Val( grpLimoDancers ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fastCarCanDrive") ) { return ::hx::Val( fastCarCanDrive ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"limoKillingState") ) { return ::hx::Val( limoKillingState ); }
		if (HX_FIELD_EQ(inName,"grpLimoParticles") ) { return ::hx::Val( grpLimoParticles ); }
		if (HX_FIELD_EQ(inName,"dancersParenting") ) { return ::hx::Val( dancersParenting_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Limo_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bgLimo") ) { bgLimo=inValue.Cast<  ::objects::BGSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fastCar") ) { fastCar=inValue.Cast<  ::objects::BGSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"carTimer") ) { carTimer=inValue.Cast<  ::flixel::util::FlxTimer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"limoLight") ) { limoLight=inValue.Cast<  ::objects::BGSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"limoSpeed") ) { limoSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"limoCorpse") ) { limoCorpse=inValue.Cast<  ::objects::BGSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"dancersDiff") ) { dancersDiff=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"limoMetalPole") ) { limoMetalPole=inValue.Cast<  ::objects::BGSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"limoCorpseTwo") ) { limoCorpseTwo=inValue.Cast<  ::objects::BGSprite >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"grpLimoDancers") ) { grpLimoDancers=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fastCarCanDrive") ) { fastCarCanDrive=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"limoKillingState") ) { limoKillingState=inValue.Cast<  ::states::stages::HenchmenKillState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grpLimoParticles") ) { grpLimoParticles=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Limo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("grpLimoDancers",70,18,93,51));
	outFields->push(HX_("fastCar",d8,f2,1f,de));
	outFields->push(HX_("fastCarCanDrive",d2,f1,13,ee));
	outFields->push(HX_("limoKillingState",2c,a9,3f,1b));
	outFields->push(HX_("limoMetalPole",c0,48,0e,ac));
	outFields->push(HX_("limoLight",37,b9,f3,91));
	outFields->push(HX_("limoCorpse",fb,fc,ca,05));
	outFields->push(HX_("limoCorpseTwo",51,37,63,6c));
	outFields->push(HX_("bgLimo",84,5f,cb,af));
	outFields->push(HX_("grpLimoParticles",29,25,41,c8));
	outFields->push(HX_("dancersDiff",d9,cb,54,56));
	outFields->push(HX_("limoSpeed",e8,bf,60,9e));
	outFields->push(HX_("carTimer",11,73,36,18));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Limo_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(Limo_obj,grpLimoDancers),HX_("grpLimoDancers",70,18,93,51)},
	{::hx::fsObject /*  ::objects::BGSprite */ ,(int)offsetof(Limo_obj,fastCar),HX_("fastCar",d8,f2,1f,de)},
	{::hx::fsBool,(int)offsetof(Limo_obj,fastCarCanDrive),HX_("fastCarCanDrive",d2,f1,13,ee)},
	{::hx::fsObject /*  ::states::stages::HenchmenKillState */ ,(int)offsetof(Limo_obj,limoKillingState),HX_("limoKillingState",2c,a9,3f,1b)},
	{::hx::fsObject /*  ::objects::BGSprite */ ,(int)offsetof(Limo_obj,limoMetalPole),HX_("limoMetalPole",c0,48,0e,ac)},
	{::hx::fsObject /*  ::objects::BGSprite */ ,(int)offsetof(Limo_obj,limoLight),HX_("limoLight",37,b9,f3,91)},
	{::hx::fsObject /*  ::objects::BGSprite */ ,(int)offsetof(Limo_obj,limoCorpse),HX_("limoCorpse",fb,fc,ca,05)},
	{::hx::fsObject /*  ::objects::BGSprite */ ,(int)offsetof(Limo_obj,limoCorpseTwo),HX_("limoCorpseTwo",51,37,63,6c)},
	{::hx::fsObject /*  ::objects::BGSprite */ ,(int)offsetof(Limo_obj,bgLimo),HX_("bgLimo",84,5f,cb,af)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(Limo_obj,grpLimoParticles),HX_("grpLimoParticles",29,25,41,c8)},
	{::hx::fsFloat,(int)offsetof(Limo_obj,dancersDiff),HX_("dancersDiff",d9,cb,54,56)},
	{::hx::fsFloat,(int)offsetof(Limo_obj,limoSpeed),HX_("limoSpeed",e8,bf,60,9e)},
	{::hx::fsObject /*  ::flixel::util::FlxTimer */ ,(int)offsetof(Limo_obj,carTimer),HX_("carTimer",11,73,36,18)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Limo_obj_sStaticStorageInfo = 0;
#endif

static ::String Limo_obj_sMemberFields[] = {
	HX_("grpLimoDancers",70,18,93,51),
	HX_("fastCar",d8,f2,1f,de),
	HX_("fastCarCanDrive",d2,f1,13,ee),
	HX_("limoKillingState",2c,a9,3f,1b),
	HX_("limoMetalPole",c0,48,0e,ac),
	HX_("limoLight",37,b9,f3,91),
	HX_("limoCorpse",fb,fc,ca,05),
	HX_("limoCorpseTwo",51,37,63,6c),
	HX_("bgLimo",84,5f,cb,af),
	HX_("grpLimoParticles",29,25,41,c8),
	HX_("dancersDiff",d9,cb,54,56),
	HX_("create",fc,66,0f,7c),
	HX_("createPost",7c,45,ea,5c),
	HX_("limoSpeed",e8,bf,60,9e),
	HX_("update",09,86,05,87),
	HX_("beatHit",7d,ea,04,74),
	HX_("closeSubState",49,18,32,04),
	HX_("openSubState",5b,66,48,37),
	HX_("eventCalled",37,a0,35,0a),
	HX_("dancersParenting",a4,cd,50,b8),
	HX_("resetLimoKill",4c,8b,78,10),
	HX_("resetFastCar",c9,38,fe,4f),
	HX_("carTimer",11,73,36,18),
	HX_("fastCarDrive",12,97,d2,be),
	HX_("killHenchmen",de,fd,a5,32),
	::String(null()) };

::hx::Class Limo_obj::__mClass;

void Limo_obj::__register()
{
	Limo_obj _hx_dummy;
	Limo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.stages.Limo",2c,e5,4d,91);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Limo_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Limo_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Limo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Limo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
} // end namespace stages
