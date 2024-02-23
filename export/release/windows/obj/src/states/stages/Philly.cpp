#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_objects_BGSprite
#include <objects/BGSprite.h>
#endif
#ifndef INCLUDED_objects_Character
#include <objects/Character.h>
#endif
#ifndef INCLUDED_states_stages_Philly
#include <states/stages/Philly.h>
#endif
#ifndef INCLUDED_states_stages_objects_PhillyGlowGradient
#include <states/stages/objects/PhillyGlowGradient.h>
#endif
#ifndef INCLUDED_states_stages_objects_PhillyGlowParticle
#include <states/stages/objects/PhillyGlowParticle.h>
#endif
#ifndef INCLUDED_states_stages_objects_PhillyTrain
#include <states/stages/objects/PhillyTrain.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_88dd6f0b2f15fde5_6_new,"states.stages.Philly","new",0xa76921e7,"states.stages.Philly.new","states/stages/Philly.hx",6,0xe4b62149)
HX_LOCAL_STACK_FRAME(_hx_pos_88dd6f0b2f15fde5_22_create,"states.stages.Philly","create",0x939e83d5,"states.stages.Philly.create","states/stages/Philly.hx",22,0xe4b62149)
static const int _hx_array_data_efd2a275_2[] = {
	(int)-13524227,(int)-13501044,(int)-314379,(int)-178895,(int)-285133,
};
HX_LOCAL_STACK_FRAME(_hx_pos_88dd6f0b2f15fde5_53_eventPushed,"states.stages.Philly","eventPushed",0xa91710fa,"states.stages.Philly.eventPushed","states/stages/Philly.hx",53,0xe4b62149)
HX_LOCAL_STACK_FRAME(_hx_pos_88dd6f0b2f15fde5_80_update,"states.stages.Philly","update",0x9e94a2e2,"states.stages.Philly.update","states/stages/Philly.hx",80,0xe4b62149)
HX_LOCAL_STACK_FRAME(_hx_pos_88dd6f0b2f15fde5_100_beatHit,"states.stages.Philly","beatHit",0xf9af0b84,"states.stages.Philly.beatHit","states/stages/Philly.hx",100,0xe4b62149)
HX_LOCAL_STACK_FRAME(_hx_pos_88dd6f0b2f15fde5_112_eventCalled,"states.stages.Philly","eventCalled",0xedd250be,"states.stages.Philly.eventCalled","states/stages/Philly.hx",112,0xe4b62149)
HX_LOCAL_STACK_FRAME(_hx_pos_88dd6f0b2f15fde5_180_eventCalled,"states.stages.Philly","eventCalled",0xedd250be,"states.stages.Philly.eventCalled","states/stages/Philly.hx",180,0xe4b62149)
HX_LOCAL_STACK_FRAME(_hx_pos_88dd6f0b2f15fde5_209_doFlash,"states.stages.Philly","doFlash",0xbb63372c,"states.stages.Philly.doFlash","states/stages/Philly.hx",209,0xe4b62149)
namespace states{
namespace stages{

void Philly_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_88dd6f0b2f15fde5_6_new)
HXLINE(  19)		this->curLightEvent = -1;
HXLINE(  12)		this->curLight = -1;
HXLINE(   6)		super::__construct();
            	}

Dynamic Philly_obj::__CreateEmpty() { return new Philly_obj; }

void *Philly_obj::_hx_vtable = 0;

Dynamic Philly_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Philly_obj > _hx_result = new Philly_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Philly_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x463de9bf) {
		if (inClassId<=(int)0x230cab9d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x230cab9d;
		} else {
			return inClassId==(int)0x463de9bf;
		}
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void Philly_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_88dd6f0b2f15fde5_22_create)
HXLINE(  23)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE(  24)			 ::objects::BGSprite bg =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("philly/sky",3a,d3,d5,cc),-100,0,((Float)0.1),((Float)0.1),null(),null());
HXLINE(  25)			this->add(bg);
            		}
HXLINE(  28)		 ::objects::BGSprite city =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("philly/city",32,0d,ae,63),-10,0,((Float)0.3),((Float)0.3),null(),null());
HXLINE(  29)		city->setGraphicSize(::Std_obj::_hx_int((city->get_width() * ((Float)0.85))),null());
HXLINE(  30)		city->updateHitbox();
HXLINE(  31)		this->add(city);
HXLINE(  33)		this->phillyLightsColors = ::Array_obj< int >::fromData( _hx_array_data_efd2a275_2,5);
HXLINE(  34)		this->phillyWindow =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("philly/window",37,9f,4d,30),city->x,city->y,((Float)0.3),((Float)0.3),null(),null());
HXLINE(  35)		 ::objects::BGSprite _hx_tmp = this->phillyWindow;
HXDLIN(  35)		_hx_tmp->setGraphicSize(::Std_obj::_hx_int((this->phillyWindow->get_width() * ((Float)0.85))),null());
HXLINE(  36)		this->phillyWindow->updateHitbox();
HXLINE(  37)		this->add(this->phillyWindow);
HXLINE(  38)		this->phillyWindow->set_alpha(( (Float)(0) ));
HXLINE(  40)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE(  41)			 ::objects::BGSprite streetBehind =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("philly/behindTrain",07,a4,6d,d4),-40,50,null(),null(),null(),null());
HXLINE(  42)			this->add(streetBehind);
            		}
HXLINE(  45)		this->phillyTrain =  ::states::stages::objects::PhillyTrain_obj::__alloc( HX_CTX ,2000,360,null(),null());
HXLINE(  46)		this->add(this->phillyTrain);
HXLINE(  48)		this->phillyStreet =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("philly/street",4a,23,ee,ee),-40,50,null(),null(),null(),null());
HXLINE(  49)		this->add(this->phillyStreet);
            	}


void Philly_obj::eventPushed( ::Dynamic event){
            	HX_GC_STACKFRAME(&_hx_pos_88dd6f0b2f15fde5_53_eventPushed)
HXDLIN(  53)		if (::hx::IsEq( event->__Field(HX_("event",1a,c8,c4,75),::hx::paccDynamic),HX_("Philly Glow",85,3a,5e,92) )) {
HXLINE(  56)			 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)-0.5)),(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)-0.5)),null());
HXDLIN(  56)			int _hx_tmp1 = ::Std_obj::_hx_int(( (Float)((::flixel::FlxG_obj::width * 2)) ));
HXDLIN(  56)			this->blammedLightsBlack = _hx_tmp->makeGraphic(_hx_tmp1,::Std_obj::_hx_int(( (Float)((::flixel::FlxG_obj::height * 2)) )),-16777216,null(),null());
HXLINE(  57)			this->blammedLightsBlack->set_visible(false);
HXLINE(  58)			 ::Dynamic _hx_tmp2 =  ::Dynamic(this->game->__Field(HX_("members",d9,2c,70,1a),::hx::paccDynamic))->__Field(HX_("indexOf",c9,48,bf,e0),::hx::paccDynamic)(this->phillyStreet);
HXDLIN(  58)			this->insert(( (int)(_hx_tmp2) ),this->blammedLightsBlack);
HXLINE(  60)			this->phillyWindowEvent =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("philly/window",37,9f,4d,30),this->phillyWindow->x,this->phillyWindow->y,((Float)0.3),((Float)0.3),null(),null());
HXLINE(  61)			 ::objects::BGSprite _hx_tmp3 = this->phillyWindowEvent;
HXDLIN(  61)			_hx_tmp3->setGraphicSize(::Std_obj::_hx_int((this->phillyWindowEvent->get_width() * ((Float)0.85))),null());
HXLINE(  62)			this->phillyWindowEvent->updateHitbox();
HXLINE(  63)			this->phillyWindowEvent->set_visible(false);
HXLINE(  64)			 ::Dynamic _hx_tmp4 = ( ::Dynamic(this->game->__Field(HX_("members",d9,2c,70,1a),::hx::paccDynamic))->__Field(HX_("indexOf",c9,48,bf,e0),::hx::paccDynamic)(this->blammedLightsBlack) + 1);
HXDLIN(  64)			this->insert(( (int)(_hx_tmp4) ),this->phillyWindowEvent);
HXLINE(  67)			this->phillyGlowGradient =  ::states::stages::objects::PhillyGlowGradient_obj::__alloc( HX_CTX ,( (Float)(-400) ),( (Float)(225) ));
HXLINE(  68)			this->phillyGlowGradient->set_visible(false);
HXLINE(  69)			 ::Dynamic _hx_tmp5 = ( ::Dynamic(this->game->__Field(HX_("members",d9,2c,70,1a),::hx::paccDynamic))->__Field(HX_("indexOf",c9,48,bf,e0),::hx::paccDynamic)(this->blammedLightsBlack) + 1);
HXDLIN(  69)			this->insert(( (int)(_hx_tmp5) ),this->phillyGlowGradient);
HXLINE(  70)			if (!(::backend::ClientPrefs_obj::data->flashing)) {
HXLINE(  70)				this->phillyGlowGradient->intendedAlpha = ((Float)0.7);
            			}
HXLINE(  72)			this->precacheImage(HX_("philly/particle",4d,e9,20,05));
HXLINE(  73)			this->phillyGlowParticles =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  74)			this->phillyGlowParticles->set_visible(false);
HXLINE(  75)			 ::Dynamic _hx_tmp6 = ( ::Dynamic(this->game->__Field(HX_("members",d9,2c,70,1a),::hx::paccDynamic))->__Field(HX_("indexOf",c9,48,bf,e0),::hx::paccDynamic)(this->phillyGlowGradient) + 1);
HXDLIN(  75)			this->insert(( (int)(_hx_tmp6) ),this->phillyGlowParticles);
            		}
            	}


void Philly_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_88dd6f0b2f15fde5_80_update)
HXLINE(  81)		 ::objects::BGSprite fh = this->phillyWindow;
HXDLIN(  81)		fh->set_alpha((fh->alpha - (((::backend::Conductor_obj::crochet / ( (Float)(1000) )) * ::flixel::FlxG_obj::elapsed) * ((Float)1.5))));
HXLINE(  82)		if (::hx::IsNotNull( this->phillyGlowParticles )) {
HXLINE(  84)			int i = (this->phillyGlowParticles->members->get_length() - 1);
HXLINE(  85)			while((i > 0)){
HXLINE(  87)				 ::states::stages::objects::PhillyGlowParticle particle = Dynamic( this->phillyGlowParticles->members->__get(i)).StaticCast<  ::states::stages::objects::PhillyGlowParticle >();
HXLINE(  88)				if ((particle->alpha <= 0)) {
HXLINE(  90)					particle->kill();
HXLINE(  91)					this->phillyGlowParticles->remove(particle,true).StaticCast<  ::states::stages::objects::PhillyGlowParticle >();
HXLINE(  92)					particle->destroy();
            				}
HXLINE(  94)				i = (i - 1);
            			}
            		}
            	}


void Philly_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_88dd6f0b2f15fde5_100_beatHit)
HXLINE( 101)		this->phillyTrain->beatHit(this->curBeat);
HXLINE( 102)		if ((::hx::Mod(this->curBeat,4) == 0)) {
HXLINE( 104)			this->curLight = ::flixel::FlxG_obj::random->_hx_int(0,(this->phillyLightsColors->length - 1),::Array_obj< int >::__new(1)->init(0,this->curLight));
HXLINE( 105)			this->phillyWindow->set_color(this->phillyLightsColors->__get(this->curLight));
HXLINE( 106)			this->phillyWindow->set_alpha(( (Float)(1) ));
            		}
            	}


void Philly_obj::eventCalled(::String eventName,::String value1,::String value2, ::Dynamic flValue1, ::Dynamic flValue2,Float strumTime){
            	HX_GC_STACKFRAME(&_hx_pos_88dd6f0b2f15fde5_112_eventCalled)
HXDLIN( 112)		if ((eventName == HX_("Philly Glow",85,3a,5e,92))) {
HXLINE( 115)			bool _hx_tmp;
HXDLIN( 115)			if (::hx::IsNotNull( flValue1 )) {
HXLINE( 115)				_hx_tmp = ::hx::IsLessEq( flValue1,0 );
            			}
            			else {
HXLINE( 115)				_hx_tmp = true;
            			}
HXDLIN( 115)			if (_hx_tmp) {
HXLINE( 115)				flValue1 = 0;
            			}
HXLINE( 116)			int lightId = ::Math_obj::round(( (Float)(flValue1) ));
HXLINE( 118)			::Array< ::Dynamic> chars = ::Array_obj< ::Dynamic>::__new(3)->init(0,( ( ::objects::Character)(this->game->__Field(HX_("boyfriend",6a,29,b8,e6),::hx::paccDynamic)) ))->init(1,( ( ::objects::Character)(this->game->__Field(HX_("gf",1f,5a,00,00),::hx::paccDynamic)) ))->init(2,( ( ::objects::Character)(this->game->__Field(HX_("dad",47,36,4c,00),::hx::paccDynamic)) ));
HXLINE( 119)			switch((int)(lightId)){
            				case (int)0: {
HXLINE( 122)					if (this->phillyGlowGradient->visible) {
HXLINE( 124)						this->doFlash();
HXLINE( 125)						if (::backend::ClientPrefs_obj::data->camZooms) {
HXLINE( 127)							 ::flixel::FlxCamera fh = ::flixel::FlxG_obj::camera;
HXDLIN( 127)							fh->set_zoom((fh->zoom + ((Float)0.5)));
HXLINE( 128)							 ::flixel::FlxCamera fh1 = ( ( ::flixel::FlxCamera)(this->game->__Field(HX_("camHUD",e8,2b,76,b7),::hx::paccDynamic)) );
HXDLIN( 128)							fh1->set_zoom((fh1->zoom + ((Float)0.1)));
            						}
HXLINE( 131)						this->blammedLightsBlack->set_visible(false);
HXLINE( 132)						this->phillyWindowEvent->set_visible(false);
HXLINE( 133)						this->phillyGlowGradient->set_visible(false);
HXLINE( 134)						this->phillyGlowParticles->set_visible(false);
HXLINE( 135)						this->curLightEvent = -1;
HXLINE( 137)						{
HXLINE( 137)							int _g = 0;
HXDLIN( 137)							while((_g < chars->length)){
HXLINE( 137)								 ::objects::Character who = chars->__get(_g).StaticCast<  ::objects::Character >();
HXDLIN( 137)								_g = (_g + 1);
HXLINE( 139)								who->set_color(-1);
            							}
            						}
HXLINE( 141)						this->phillyStreet->set_color(-1);
            					}
            				}
            				break;
            				case (int)1: {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< int >,color) HXARGC(1)
            					void _hx_run( ::states::stages::objects::PhillyGlowParticle particle){
            						HX_STACKFRAME(&_hx_pos_88dd6f0b2f15fde5_180_eventCalled)
HXLINE( 180)						particle->set_color(color->__get(0));
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 145)					this->curLightEvent = ::flixel::FlxG_obj::random->_hx_int(0,(this->phillyLightsColors->length - 1),::Array_obj< int >::__new(1)->init(0,this->curLightEvent));
HXLINE( 146)					::Array< int > color = ::Array_obj< int >::__new(1)->init(0,this->phillyLightsColors->__get(this->curLightEvent));
HXLINE( 148)					if (!(this->phillyGlowGradient->visible)) {
HXLINE( 150)						this->doFlash();
HXLINE( 151)						if (::backend::ClientPrefs_obj::data->camZooms) {
HXLINE( 153)							 ::flixel::FlxCamera fh = ::flixel::FlxG_obj::camera;
HXDLIN( 153)							fh->set_zoom((fh->zoom + ((Float)0.5)));
HXLINE( 154)							 ::flixel::FlxCamera fh1 = ( ( ::flixel::FlxCamera)(this->game->__Field(HX_("camHUD",e8,2b,76,b7),::hx::paccDynamic)) );
HXDLIN( 154)							fh1->set_zoom((fh1->zoom + ((Float)0.1)));
            						}
HXLINE( 157)						this->blammedLightsBlack->set_visible(true);
HXLINE( 158)						this->blammedLightsBlack->set_alpha(( (Float)(1) ));
HXLINE( 159)						this->phillyWindowEvent->set_visible(true);
HXLINE( 160)						this->phillyGlowGradient->set_visible(true);
HXLINE( 161)						this->phillyGlowParticles->set_visible(true);
            					}
            					else {
HXLINE( 163)						if (::backend::ClientPrefs_obj::data->flashing) {
HXLINE( 165)							int colorButLower = color->__get(0);
HXLINE( 166)							{
HXLINE( 166)								int Value = ::Math_obj::round(((Float)63.75));
HXDLIN( 166)								colorButLower = (colorButLower & 16777215);
HXDLIN( 166)								int colorButLower1;
HXDLIN( 166)								if ((Value > 255)) {
HXLINE( 166)									colorButLower1 = 255;
            								}
            								else {
HXLINE( 166)									if ((Value < 0)) {
HXLINE( 166)										colorButLower1 = 0;
            									}
            									else {
HXLINE( 166)										colorButLower1 = Value;
            									}
            								}
HXDLIN( 166)								colorButLower = (colorButLower | (colorButLower1 << 24));
            							}
HXLINE( 167)							::flixel::FlxG_obj::camera->flash(colorButLower,((Float)0.5),null(),true);
            						}
            					}
HXLINE( 170)					int charColor = color->__get(0);
HXLINE( 171)					if (!(::backend::ClientPrefs_obj::data->flashing)) {
HXLINE( 171)						Float Value = (((::Math_obj::max((( (Float)(((charColor >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((charColor >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((charColor & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((charColor >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((charColor >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((charColor & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((charColor >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((charColor >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((charColor & 255)) ) / ( (Float)(255) ))))) * ((Float)0.5));
HXDLIN( 171)						{
HXLINE( 171)							Float Hue = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(charColor);
HXDLIN( 171)							Float Brightness = ::Math_obj::max((( (Float)(((charColor >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((charColor >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((charColor & 255)) ) / ( (Float)(255) ))));
HXDLIN( 171)							Float Alpha = (( (Float)(((charColor >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 171)							Float chroma = (Brightness * Value);
HXDLIN( 171)							Float match = (Brightness - chroma);
HXDLIN( 171)							{
HXLINE( 171)								Float Hue1 = Hue;
HXDLIN( 171)								Float Chroma = chroma;
HXDLIN( 171)								Hue1 = ::hx::Mod(Hue1,360);
HXDLIN( 171)								Float hueD = (Hue1 / ( (Float)(60) ));
HXDLIN( 171)								Float mid = ((Chroma * (( (Float)(1) ) - ::Math_obj::abs((::hx::Mod(hueD,2) - ( (Float)(1) ))))) + match);
HXDLIN( 171)								Chroma = (Chroma + match);
HXDLIN( 171)								switch((int)(::Std_obj::_hx_int(hueD))){
            									case (int)0: {
HXLINE( 171)										{
HXLINE( 171)											int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 171)											charColor = (charColor & -16711681);
HXDLIN( 171)											int charColor1;
HXDLIN( 171)											if ((Value > 255)) {
HXLINE( 171)												charColor1 = 255;
            											}
            											else {
HXLINE( 171)												if ((Value < 0)) {
HXLINE( 171)													charColor1 = 0;
            												}
            												else {
HXLINE( 171)													charColor1 = Value;
            												}
            											}
HXDLIN( 171)											charColor = (charColor | (charColor1 << 16));
            										}
HXDLIN( 171)										{
HXLINE( 171)											int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 171)											charColor = (charColor & -65281);
HXDLIN( 171)											int charColor2;
HXDLIN( 171)											if ((Value1 > 255)) {
HXLINE( 171)												charColor2 = 255;
            											}
            											else {
HXLINE( 171)												if ((Value1 < 0)) {
HXLINE( 171)													charColor2 = 0;
            												}
            												else {
HXLINE( 171)													charColor2 = Value1;
            												}
            											}
HXDLIN( 171)											charColor = (charColor | (charColor2 << 8));
            										}
HXDLIN( 171)										{
HXLINE( 171)											int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 171)											charColor = (charColor & -256);
HXDLIN( 171)											int charColor3;
HXDLIN( 171)											if ((Value2 > 255)) {
HXLINE( 171)												charColor3 = 255;
            											}
            											else {
HXLINE( 171)												if ((Value2 < 0)) {
HXLINE( 171)													charColor3 = 0;
            												}
            												else {
HXLINE( 171)													charColor3 = Value2;
            												}
            											}
HXDLIN( 171)											charColor = (charColor | charColor3);
            										}
HXDLIN( 171)										{
HXLINE( 171)											int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 171)											charColor = (charColor & 16777215);
HXDLIN( 171)											int charColor4;
HXDLIN( 171)											if ((Value3 > 255)) {
HXLINE( 171)												charColor4 = 255;
            											}
            											else {
HXLINE( 171)												if ((Value3 < 0)) {
HXLINE( 171)													charColor4 = 0;
            												}
            												else {
HXLINE( 171)													charColor4 = Value3;
            												}
            											}
HXDLIN( 171)											charColor = (charColor | (charColor4 << 24));
            										}
            									}
            									break;
            									case (int)1: {
HXLINE( 171)										{
HXLINE( 171)											int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 171)											charColor = (charColor & -16711681);
HXDLIN( 171)											int charColor1;
HXDLIN( 171)											if ((Value > 255)) {
HXLINE( 171)												charColor1 = 255;
            											}
            											else {
HXLINE( 171)												if ((Value < 0)) {
HXLINE( 171)													charColor1 = 0;
            												}
            												else {
HXLINE( 171)													charColor1 = Value;
            												}
            											}
HXDLIN( 171)											charColor = (charColor | (charColor1 << 16));
            										}
HXDLIN( 171)										{
HXLINE( 171)											int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 171)											charColor = (charColor & -65281);
HXDLIN( 171)											int charColor2;
HXDLIN( 171)											if ((Value1 > 255)) {
HXLINE( 171)												charColor2 = 255;
            											}
            											else {
HXLINE( 171)												if ((Value1 < 0)) {
HXLINE( 171)													charColor2 = 0;
            												}
            												else {
HXLINE( 171)													charColor2 = Value1;
            												}
            											}
HXDLIN( 171)											charColor = (charColor | (charColor2 << 8));
            										}
HXDLIN( 171)										{
HXLINE( 171)											int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 171)											charColor = (charColor & -256);
HXDLIN( 171)											int charColor3;
HXDLIN( 171)											if ((Value2 > 255)) {
HXLINE( 171)												charColor3 = 255;
            											}
            											else {
HXLINE( 171)												if ((Value2 < 0)) {
HXLINE( 171)													charColor3 = 0;
            												}
            												else {
HXLINE( 171)													charColor3 = Value2;
            												}
            											}
HXDLIN( 171)											charColor = (charColor | charColor3);
            										}
HXDLIN( 171)										{
HXLINE( 171)											int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 171)											charColor = (charColor & 16777215);
HXDLIN( 171)											int charColor4;
HXDLIN( 171)											if ((Value3 > 255)) {
HXLINE( 171)												charColor4 = 255;
            											}
            											else {
HXLINE( 171)												if ((Value3 < 0)) {
HXLINE( 171)													charColor4 = 0;
            												}
            												else {
HXLINE( 171)													charColor4 = Value3;
            												}
            											}
HXDLIN( 171)											charColor = (charColor | (charColor4 << 24));
            										}
            									}
            									break;
            									case (int)2: {
HXLINE( 171)										{
HXLINE( 171)											int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 171)											charColor = (charColor & -16711681);
HXDLIN( 171)											int charColor1;
HXDLIN( 171)											if ((Value > 255)) {
HXLINE( 171)												charColor1 = 255;
            											}
            											else {
HXLINE( 171)												if ((Value < 0)) {
HXLINE( 171)													charColor1 = 0;
            												}
            												else {
HXLINE( 171)													charColor1 = Value;
            												}
            											}
HXDLIN( 171)											charColor = (charColor | (charColor1 << 16));
            										}
HXDLIN( 171)										{
HXLINE( 171)											int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 171)											charColor = (charColor & -65281);
HXDLIN( 171)											int charColor2;
HXDLIN( 171)											if ((Value1 > 255)) {
HXLINE( 171)												charColor2 = 255;
            											}
            											else {
HXLINE( 171)												if ((Value1 < 0)) {
HXLINE( 171)													charColor2 = 0;
            												}
            												else {
HXLINE( 171)													charColor2 = Value1;
            												}
            											}
HXDLIN( 171)											charColor = (charColor | (charColor2 << 8));
            										}
HXDLIN( 171)										{
HXLINE( 171)											int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 171)											charColor = (charColor & -256);
HXDLIN( 171)											int charColor3;
HXDLIN( 171)											if ((Value2 > 255)) {
HXLINE( 171)												charColor3 = 255;
            											}
            											else {
HXLINE( 171)												if ((Value2 < 0)) {
HXLINE( 171)													charColor3 = 0;
            												}
            												else {
HXLINE( 171)													charColor3 = Value2;
            												}
            											}
HXDLIN( 171)											charColor = (charColor | charColor3);
            										}
HXDLIN( 171)										{
HXLINE( 171)											int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 171)											charColor = (charColor & 16777215);
HXDLIN( 171)											int charColor4;
HXDLIN( 171)											if ((Value3 > 255)) {
HXLINE( 171)												charColor4 = 255;
            											}
            											else {
HXLINE( 171)												if ((Value3 < 0)) {
HXLINE( 171)													charColor4 = 0;
            												}
            												else {
HXLINE( 171)													charColor4 = Value3;
            												}
            											}
HXDLIN( 171)											charColor = (charColor | (charColor4 << 24));
            										}
            									}
            									break;
            									case (int)3: {
HXLINE( 171)										{
HXLINE( 171)											int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 171)											charColor = (charColor & -16711681);
HXDLIN( 171)											int charColor1;
HXDLIN( 171)											if ((Value > 255)) {
HXLINE( 171)												charColor1 = 255;
            											}
            											else {
HXLINE( 171)												if ((Value < 0)) {
HXLINE( 171)													charColor1 = 0;
            												}
            												else {
HXLINE( 171)													charColor1 = Value;
            												}
            											}
HXDLIN( 171)											charColor = (charColor | (charColor1 << 16));
            										}
HXDLIN( 171)										{
HXLINE( 171)											int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 171)											charColor = (charColor & -65281);
HXDLIN( 171)											int charColor2;
HXDLIN( 171)											if ((Value1 > 255)) {
HXLINE( 171)												charColor2 = 255;
            											}
            											else {
HXLINE( 171)												if ((Value1 < 0)) {
HXLINE( 171)													charColor2 = 0;
            												}
            												else {
HXLINE( 171)													charColor2 = Value1;
            												}
            											}
HXDLIN( 171)											charColor = (charColor | (charColor2 << 8));
            										}
HXDLIN( 171)										{
HXLINE( 171)											int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 171)											charColor = (charColor & -256);
HXDLIN( 171)											int charColor3;
HXDLIN( 171)											if ((Value2 > 255)) {
HXLINE( 171)												charColor3 = 255;
            											}
            											else {
HXLINE( 171)												if ((Value2 < 0)) {
HXLINE( 171)													charColor3 = 0;
            												}
            												else {
HXLINE( 171)													charColor3 = Value2;
            												}
            											}
HXDLIN( 171)											charColor = (charColor | charColor3);
            										}
HXDLIN( 171)										{
HXLINE( 171)											int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 171)											charColor = (charColor & 16777215);
HXDLIN( 171)											int charColor4;
HXDLIN( 171)											if ((Value3 > 255)) {
HXLINE( 171)												charColor4 = 255;
            											}
            											else {
HXLINE( 171)												if ((Value3 < 0)) {
HXLINE( 171)													charColor4 = 0;
            												}
            												else {
HXLINE( 171)													charColor4 = Value3;
            												}
            											}
HXDLIN( 171)											charColor = (charColor | (charColor4 << 24));
            										}
            									}
            									break;
            									case (int)4: {
HXLINE( 171)										{
HXLINE( 171)											int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 171)											charColor = (charColor & -16711681);
HXDLIN( 171)											int charColor1;
HXDLIN( 171)											if ((Value > 255)) {
HXLINE( 171)												charColor1 = 255;
            											}
            											else {
HXLINE( 171)												if ((Value < 0)) {
HXLINE( 171)													charColor1 = 0;
            												}
            												else {
HXLINE( 171)													charColor1 = Value;
            												}
            											}
HXDLIN( 171)											charColor = (charColor | (charColor1 << 16));
            										}
HXDLIN( 171)										{
HXLINE( 171)											int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 171)											charColor = (charColor & -65281);
HXDLIN( 171)											int charColor2;
HXDLIN( 171)											if ((Value1 > 255)) {
HXLINE( 171)												charColor2 = 255;
            											}
            											else {
HXLINE( 171)												if ((Value1 < 0)) {
HXLINE( 171)													charColor2 = 0;
            												}
            												else {
HXLINE( 171)													charColor2 = Value1;
            												}
            											}
HXDLIN( 171)											charColor = (charColor | (charColor2 << 8));
            										}
HXDLIN( 171)										{
HXLINE( 171)											int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 171)											charColor = (charColor & -256);
HXDLIN( 171)											int charColor3;
HXDLIN( 171)											if ((Value2 > 255)) {
HXLINE( 171)												charColor3 = 255;
            											}
            											else {
HXLINE( 171)												if ((Value2 < 0)) {
HXLINE( 171)													charColor3 = 0;
            												}
            												else {
HXLINE( 171)													charColor3 = Value2;
            												}
            											}
HXDLIN( 171)											charColor = (charColor | charColor3);
            										}
HXDLIN( 171)										{
HXLINE( 171)											int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 171)											charColor = (charColor & 16777215);
HXDLIN( 171)											int charColor4;
HXDLIN( 171)											if ((Value3 > 255)) {
HXLINE( 171)												charColor4 = 255;
            											}
            											else {
HXLINE( 171)												if ((Value3 < 0)) {
HXLINE( 171)													charColor4 = 0;
            												}
            												else {
HXLINE( 171)													charColor4 = Value3;
            												}
            											}
HXDLIN( 171)											charColor = (charColor | (charColor4 << 24));
            										}
            									}
            									break;
            									case (int)5: {
HXLINE( 171)										{
HXLINE( 171)											int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 171)											charColor = (charColor & -16711681);
HXDLIN( 171)											int charColor1;
HXDLIN( 171)											if ((Value > 255)) {
HXLINE( 171)												charColor1 = 255;
            											}
            											else {
HXLINE( 171)												if ((Value < 0)) {
HXLINE( 171)													charColor1 = 0;
            												}
            												else {
HXLINE( 171)													charColor1 = Value;
            												}
            											}
HXDLIN( 171)											charColor = (charColor | (charColor1 << 16));
            										}
HXDLIN( 171)										{
HXLINE( 171)											int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 171)											charColor = (charColor & -65281);
HXDLIN( 171)											int charColor2;
HXDLIN( 171)											if ((Value1 > 255)) {
HXLINE( 171)												charColor2 = 255;
            											}
            											else {
HXLINE( 171)												if ((Value1 < 0)) {
HXLINE( 171)													charColor2 = 0;
            												}
            												else {
HXLINE( 171)													charColor2 = Value1;
            												}
            											}
HXDLIN( 171)											charColor = (charColor | (charColor2 << 8));
            										}
HXDLIN( 171)										{
HXLINE( 171)											int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 171)											charColor = (charColor & -256);
HXDLIN( 171)											int charColor3;
HXDLIN( 171)											if ((Value2 > 255)) {
HXLINE( 171)												charColor3 = 255;
            											}
            											else {
HXLINE( 171)												if ((Value2 < 0)) {
HXLINE( 171)													charColor3 = 0;
            												}
            												else {
HXLINE( 171)													charColor3 = Value2;
            												}
            											}
HXDLIN( 171)											charColor = (charColor | charColor3);
            										}
HXDLIN( 171)										{
HXLINE( 171)											int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 171)											charColor = (charColor & 16777215);
HXDLIN( 171)											int charColor4;
HXDLIN( 171)											if ((Value3 > 255)) {
HXLINE( 171)												charColor4 = 255;
            											}
            											else {
HXLINE( 171)												if ((Value3 < 0)) {
HXLINE( 171)													charColor4 = 0;
            												}
            												else {
HXLINE( 171)													charColor4 = Value3;
            												}
            											}
HXDLIN( 171)											charColor = (charColor | (charColor4 << 24));
            										}
            									}
            									break;
            								}
            							}
            						}
            					}
            					else {
HXLINE( 172)						Float Value = (((::Math_obj::max((( (Float)(((charColor >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((charColor >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((charColor & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((charColor >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((charColor >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((charColor & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((charColor >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((charColor >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((charColor & 255)) ) / ( (Float)(255) ))))) * ((Float)0.75));
HXDLIN( 172)						{
HXLINE( 172)							Float Hue = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(charColor);
HXDLIN( 172)							Float Brightness = ::Math_obj::max((( (Float)(((charColor >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((charColor >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((charColor & 255)) ) / ( (Float)(255) ))));
HXDLIN( 172)							Float Alpha = (( (Float)(((charColor >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 172)							Float chroma = (Brightness * Value);
HXDLIN( 172)							Float match = (Brightness - chroma);
HXDLIN( 172)							{
HXLINE( 172)								Float Hue1 = Hue;
HXDLIN( 172)								Float Chroma = chroma;
HXDLIN( 172)								Hue1 = ::hx::Mod(Hue1,360);
HXDLIN( 172)								Float hueD = (Hue1 / ( (Float)(60) ));
HXDLIN( 172)								Float mid = ((Chroma * (( (Float)(1) ) - ::Math_obj::abs((::hx::Mod(hueD,2) - ( (Float)(1) ))))) + match);
HXDLIN( 172)								Chroma = (Chroma + match);
HXDLIN( 172)								switch((int)(::Std_obj::_hx_int(hueD))){
            									case (int)0: {
HXLINE( 172)										{
HXLINE( 172)											int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 172)											charColor = (charColor & -16711681);
HXDLIN( 172)											int charColor1;
HXDLIN( 172)											if ((Value > 255)) {
HXLINE( 172)												charColor1 = 255;
            											}
            											else {
HXLINE( 172)												if ((Value < 0)) {
HXLINE( 172)													charColor1 = 0;
            												}
            												else {
HXLINE( 172)													charColor1 = Value;
            												}
            											}
HXDLIN( 172)											charColor = (charColor | (charColor1 << 16));
            										}
HXDLIN( 172)										{
HXLINE( 172)											int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 172)											charColor = (charColor & -65281);
HXDLIN( 172)											int charColor2;
HXDLIN( 172)											if ((Value1 > 255)) {
HXLINE( 172)												charColor2 = 255;
            											}
            											else {
HXLINE( 172)												if ((Value1 < 0)) {
HXLINE( 172)													charColor2 = 0;
            												}
            												else {
HXLINE( 172)													charColor2 = Value1;
            												}
            											}
HXDLIN( 172)											charColor = (charColor | (charColor2 << 8));
            										}
HXDLIN( 172)										{
HXLINE( 172)											int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 172)											charColor = (charColor & -256);
HXDLIN( 172)											int charColor3;
HXDLIN( 172)											if ((Value2 > 255)) {
HXLINE( 172)												charColor3 = 255;
            											}
            											else {
HXLINE( 172)												if ((Value2 < 0)) {
HXLINE( 172)													charColor3 = 0;
            												}
            												else {
HXLINE( 172)													charColor3 = Value2;
            												}
            											}
HXDLIN( 172)											charColor = (charColor | charColor3);
            										}
HXDLIN( 172)										{
HXLINE( 172)											int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 172)											charColor = (charColor & 16777215);
HXDLIN( 172)											int charColor4;
HXDLIN( 172)											if ((Value3 > 255)) {
HXLINE( 172)												charColor4 = 255;
            											}
            											else {
HXLINE( 172)												if ((Value3 < 0)) {
HXLINE( 172)													charColor4 = 0;
            												}
            												else {
HXLINE( 172)													charColor4 = Value3;
            												}
            											}
HXDLIN( 172)											charColor = (charColor | (charColor4 << 24));
            										}
            									}
            									break;
            									case (int)1: {
HXLINE( 172)										{
HXLINE( 172)											int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 172)											charColor = (charColor & -16711681);
HXDLIN( 172)											int charColor1;
HXDLIN( 172)											if ((Value > 255)) {
HXLINE( 172)												charColor1 = 255;
            											}
            											else {
HXLINE( 172)												if ((Value < 0)) {
HXLINE( 172)													charColor1 = 0;
            												}
            												else {
HXLINE( 172)													charColor1 = Value;
            												}
            											}
HXDLIN( 172)											charColor = (charColor | (charColor1 << 16));
            										}
HXDLIN( 172)										{
HXLINE( 172)											int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 172)											charColor = (charColor & -65281);
HXDLIN( 172)											int charColor2;
HXDLIN( 172)											if ((Value1 > 255)) {
HXLINE( 172)												charColor2 = 255;
            											}
            											else {
HXLINE( 172)												if ((Value1 < 0)) {
HXLINE( 172)													charColor2 = 0;
            												}
            												else {
HXLINE( 172)													charColor2 = Value1;
            												}
            											}
HXDLIN( 172)											charColor = (charColor | (charColor2 << 8));
            										}
HXDLIN( 172)										{
HXLINE( 172)											int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 172)											charColor = (charColor & -256);
HXDLIN( 172)											int charColor3;
HXDLIN( 172)											if ((Value2 > 255)) {
HXLINE( 172)												charColor3 = 255;
            											}
            											else {
HXLINE( 172)												if ((Value2 < 0)) {
HXLINE( 172)													charColor3 = 0;
            												}
            												else {
HXLINE( 172)													charColor3 = Value2;
            												}
            											}
HXDLIN( 172)											charColor = (charColor | charColor3);
            										}
HXDLIN( 172)										{
HXLINE( 172)											int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 172)											charColor = (charColor & 16777215);
HXDLIN( 172)											int charColor4;
HXDLIN( 172)											if ((Value3 > 255)) {
HXLINE( 172)												charColor4 = 255;
            											}
            											else {
HXLINE( 172)												if ((Value3 < 0)) {
HXLINE( 172)													charColor4 = 0;
            												}
            												else {
HXLINE( 172)													charColor4 = Value3;
            												}
            											}
HXDLIN( 172)											charColor = (charColor | (charColor4 << 24));
            										}
            									}
            									break;
            									case (int)2: {
HXLINE( 172)										{
HXLINE( 172)											int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 172)											charColor = (charColor & -16711681);
HXDLIN( 172)											int charColor1;
HXDLIN( 172)											if ((Value > 255)) {
HXLINE( 172)												charColor1 = 255;
            											}
            											else {
HXLINE( 172)												if ((Value < 0)) {
HXLINE( 172)													charColor1 = 0;
            												}
            												else {
HXLINE( 172)													charColor1 = Value;
            												}
            											}
HXDLIN( 172)											charColor = (charColor | (charColor1 << 16));
            										}
HXDLIN( 172)										{
HXLINE( 172)											int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 172)											charColor = (charColor & -65281);
HXDLIN( 172)											int charColor2;
HXDLIN( 172)											if ((Value1 > 255)) {
HXLINE( 172)												charColor2 = 255;
            											}
            											else {
HXLINE( 172)												if ((Value1 < 0)) {
HXLINE( 172)													charColor2 = 0;
            												}
            												else {
HXLINE( 172)													charColor2 = Value1;
            												}
            											}
HXDLIN( 172)											charColor = (charColor | (charColor2 << 8));
            										}
HXDLIN( 172)										{
HXLINE( 172)											int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 172)											charColor = (charColor & -256);
HXDLIN( 172)											int charColor3;
HXDLIN( 172)											if ((Value2 > 255)) {
HXLINE( 172)												charColor3 = 255;
            											}
            											else {
HXLINE( 172)												if ((Value2 < 0)) {
HXLINE( 172)													charColor3 = 0;
            												}
            												else {
HXLINE( 172)													charColor3 = Value2;
            												}
            											}
HXDLIN( 172)											charColor = (charColor | charColor3);
            										}
HXDLIN( 172)										{
HXLINE( 172)											int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 172)											charColor = (charColor & 16777215);
HXDLIN( 172)											int charColor4;
HXDLIN( 172)											if ((Value3 > 255)) {
HXLINE( 172)												charColor4 = 255;
            											}
            											else {
HXLINE( 172)												if ((Value3 < 0)) {
HXLINE( 172)													charColor4 = 0;
            												}
            												else {
HXLINE( 172)													charColor4 = Value3;
            												}
            											}
HXDLIN( 172)											charColor = (charColor | (charColor4 << 24));
            										}
            									}
            									break;
            									case (int)3: {
HXLINE( 172)										{
HXLINE( 172)											int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 172)											charColor = (charColor & -16711681);
HXDLIN( 172)											int charColor1;
HXDLIN( 172)											if ((Value > 255)) {
HXLINE( 172)												charColor1 = 255;
            											}
            											else {
HXLINE( 172)												if ((Value < 0)) {
HXLINE( 172)													charColor1 = 0;
            												}
            												else {
HXLINE( 172)													charColor1 = Value;
            												}
            											}
HXDLIN( 172)											charColor = (charColor | (charColor1 << 16));
            										}
HXDLIN( 172)										{
HXLINE( 172)											int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 172)											charColor = (charColor & -65281);
HXDLIN( 172)											int charColor2;
HXDLIN( 172)											if ((Value1 > 255)) {
HXLINE( 172)												charColor2 = 255;
            											}
            											else {
HXLINE( 172)												if ((Value1 < 0)) {
HXLINE( 172)													charColor2 = 0;
            												}
            												else {
HXLINE( 172)													charColor2 = Value1;
            												}
            											}
HXDLIN( 172)											charColor = (charColor | (charColor2 << 8));
            										}
HXDLIN( 172)										{
HXLINE( 172)											int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 172)											charColor = (charColor & -256);
HXDLIN( 172)											int charColor3;
HXDLIN( 172)											if ((Value2 > 255)) {
HXLINE( 172)												charColor3 = 255;
            											}
            											else {
HXLINE( 172)												if ((Value2 < 0)) {
HXLINE( 172)													charColor3 = 0;
            												}
            												else {
HXLINE( 172)													charColor3 = Value2;
            												}
            											}
HXDLIN( 172)											charColor = (charColor | charColor3);
            										}
HXDLIN( 172)										{
HXLINE( 172)											int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 172)											charColor = (charColor & 16777215);
HXDLIN( 172)											int charColor4;
HXDLIN( 172)											if ((Value3 > 255)) {
HXLINE( 172)												charColor4 = 255;
            											}
            											else {
HXLINE( 172)												if ((Value3 < 0)) {
HXLINE( 172)													charColor4 = 0;
            												}
            												else {
HXLINE( 172)													charColor4 = Value3;
            												}
            											}
HXDLIN( 172)											charColor = (charColor | (charColor4 << 24));
            										}
            									}
            									break;
            									case (int)4: {
HXLINE( 172)										{
HXLINE( 172)											int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 172)											charColor = (charColor & -16711681);
HXDLIN( 172)											int charColor1;
HXDLIN( 172)											if ((Value > 255)) {
HXLINE( 172)												charColor1 = 255;
            											}
            											else {
HXLINE( 172)												if ((Value < 0)) {
HXLINE( 172)													charColor1 = 0;
            												}
            												else {
HXLINE( 172)													charColor1 = Value;
            												}
            											}
HXDLIN( 172)											charColor = (charColor | (charColor1 << 16));
            										}
HXDLIN( 172)										{
HXLINE( 172)											int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 172)											charColor = (charColor & -65281);
HXDLIN( 172)											int charColor2;
HXDLIN( 172)											if ((Value1 > 255)) {
HXLINE( 172)												charColor2 = 255;
            											}
            											else {
HXLINE( 172)												if ((Value1 < 0)) {
HXLINE( 172)													charColor2 = 0;
            												}
            												else {
HXLINE( 172)													charColor2 = Value1;
            												}
            											}
HXDLIN( 172)											charColor = (charColor | (charColor2 << 8));
            										}
HXDLIN( 172)										{
HXLINE( 172)											int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 172)											charColor = (charColor & -256);
HXDLIN( 172)											int charColor3;
HXDLIN( 172)											if ((Value2 > 255)) {
HXLINE( 172)												charColor3 = 255;
            											}
            											else {
HXLINE( 172)												if ((Value2 < 0)) {
HXLINE( 172)													charColor3 = 0;
            												}
            												else {
HXLINE( 172)													charColor3 = Value2;
            												}
            											}
HXDLIN( 172)											charColor = (charColor | charColor3);
            										}
HXDLIN( 172)										{
HXLINE( 172)											int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 172)											charColor = (charColor & 16777215);
HXDLIN( 172)											int charColor4;
HXDLIN( 172)											if ((Value3 > 255)) {
HXLINE( 172)												charColor4 = 255;
            											}
            											else {
HXLINE( 172)												if ((Value3 < 0)) {
HXLINE( 172)													charColor4 = 0;
            												}
            												else {
HXLINE( 172)													charColor4 = Value3;
            												}
            											}
HXDLIN( 172)											charColor = (charColor | (charColor4 << 24));
            										}
            									}
            									break;
            									case (int)5: {
HXLINE( 172)										{
HXLINE( 172)											int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 172)											charColor = (charColor & -16711681);
HXDLIN( 172)											int charColor1;
HXDLIN( 172)											if ((Value > 255)) {
HXLINE( 172)												charColor1 = 255;
            											}
            											else {
HXLINE( 172)												if ((Value < 0)) {
HXLINE( 172)													charColor1 = 0;
            												}
            												else {
HXLINE( 172)													charColor1 = Value;
            												}
            											}
HXDLIN( 172)											charColor = (charColor | (charColor1 << 16));
            										}
HXDLIN( 172)										{
HXLINE( 172)											int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 172)											charColor = (charColor & -65281);
HXDLIN( 172)											int charColor2;
HXDLIN( 172)											if ((Value1 > 255)) {
HXLINE( 172)												charColor2 = 255;
            											}
            											else {
HXLINE( 172)												if ((Value1 < 0)) {
HXLINE( 172)													charColor2 = 0;
            												}
            												else {
HXLINE( 172)													charColor2 = Value1;
            												}
            											}
HXDLIN( 172)											charColor = (charColor | (charColor2 << 8));
            										}
HXDLIN( 172)										{
HXLINE( 172)											int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 172)											charColor = (charColor & -256);
HXDLIN( 172)											int charColor3;
HXDLIN( 172)											if ((Value2 > 255)) {
HXLINE( 172)												charColor3 = 255;
            											}
            											else {
HXLINE( 172)												if ((Value2 < 0)) {
HXLINE( 172)													charColor3 = 0;
            												}
            												else {
HXLINE( 172)													charColor3 = Value2;
            												}
            											}
HXDLIN( 172)											charColor = (charColor | charColor3);
            										}
HXDLIN( 172)										{
HXLINE( 172)											int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 172)											charColor = (charColor & 16777215);
HXDLIN( 172)											int charColor4;
HXDLIN( 172)											if ((Value3 > 255)) {
HXLINE( 172)												charColor4 = 255;
            											}
            											else {
HXLINE( 172)												if ((Value3 < 0)) {
HXLINE( 172)													charColor4 = 0;
            												}
            												else {
HXLINE( 172)													charColor4 = Value3;
            												}
            											}
HXDLIN( 172)											charColor = (charColor | (charColor4 << 24));
            										}
            									}
            									break;
            								}
            							}
            						}
            					}
HXLINE( 174)					{
HXLINE( 174)						int _g = 0;
HXDLIN( 174)						while((_g < chars->length)){
HXLINE( 174)							 ::objects::Character who = chars->__get(_g).StaticCast<  ::objects::Character >();
HXDLIN( 174)							_g = (_g + 1);
HXLINE( 176)							who->set_color(charColor);
            						}
            					}
HXLINE( 178)					this->phillyGlowParticles->forEachAlive( ::Dynamic(new _hx_Closure_0(color)),null());
HXLINE( 182)					this->phillyGlowGradient->set_color(color->__get(0));
HXLINE( 183)					this->phillyWindowEvent->set_color(color->__get(0));
HXLINE( 185)					{
HXLINE( 185)						Float Value = (::Math_obj::max((( (Float)(((color->__get(0) >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((color->__get(0) >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((color->__get(0) & 255)) ) / ( (Float)(255) )))) * ((Float)0.5));
HXDLIN( 185)						{
HXLINE( 185)							Float Hue = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(color->__get(0));
HXDLIN( 185)							Float Alpha = (( (Float)(((color->__get(0) >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 185)							Float chroma = (Value * ((::Math_obj::max((( (Float)(((color->__get(0) >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((color->__get(0) >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((color->__get(0) & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((color->__get(0) >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((color->__get(0) >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((color->__get(0) & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((color->__get(0) >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((color->__get(0) >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((color->__get(0) & 255)) ) / ( (Float)(255) ))))));
HXDLIN( 185)							Float match = (Value - chroma);
HXDLIN( 185)							{
HXLINE( 185)								Float Hue1 = Hue;
HXDLIN( 185)								Float Chroma = chroma;
HXDLIN( 185)								Hue1 = ::hx::Mod(Hue1,360);
HXDLIN( 185)								Float hueD = (Hue1 / ( (Float)(60) ));
HXDLIN( 185)								Float mid = ((Chroma * (( (Float)(1) ) - ::Math_obj::abs((::hx::Mod(hueD,2) - ( (Float)(1) ))))) + match);
HXDLIN( 185)								Chroma = (Chroma + match);
HXDLIN( 185)								switch((int)(::Std_obj::_hx_int(hueD))){
            									case (int)0: {
HXLINE( 185)										{
HXLINE( 185)											int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 185)											::Array< int > color1 = color;
HXDLIN( 185)											int _hx_tmp = 0;
HXDLIN( 185)											color1[_hx_tmp] = (color1->__get(_hx_tmp) & -16711681);
HXDLIN( 185)											::Array< int > color2 = color;
HXDLIN( 185)											int _hx_tmp1 = 0;
HXDLIN( 185)											int _hx_tmp2;
HXDLIN( 185)											if ((Value > 255)) {
HXLINE( 185)												_hx_tmp2 = 255;
            											}
            											else {
HXLINE( 185)												if ((Value < 0)) {
HXLINE( 185)													_hx_tmp2 = 0;
            												}
            												else {
HXLINE( 185)													_hx_tmp2 = Value;
            												}
            											}
HXDLIN( 185)											color2[_hx_tmp1] = (color2->__get(_hx_tmp1) | (_hx_tmp2 << 16));
            										}
HXDLIN( 185)										{
HXLINE( 185)											int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 185)											::Array< int > color3 = color;
HXDLIN( 185)											int _hx_tmp3 = 0;
HXDLIN( 185)											color3[_hx_tmp3] = (color3->__get(_hx_tmp3) & -65281);
HXDLIN( 185)											::Array< int > color4 = color;
HXDLIN( 185)											int _hx_tmp4 = 0;
HXDLIN( 185)											int _hx_tmp5;
HXDLIN( 185)											if ((Value1 > 255)) {
HXLINE( 185)												_hx_tmp5 = 255;
            											}
            											else {
HXLINE( 185)												if ((Value1 < 0)) {
HXLINE( 185)													_hx_tmp5 = 0;
            												}
            												else {
HXLINE( 185)													_hx_tmp5 = Value1;
            												}
            											}
HXDLIN( 185)											color4[_hx_tmp4] = (color4->__get(_hx_tmp4) | (_hx_tmp5 << 8));
            										}
HXDLIN( 185)										{
HXLINE( 185)											int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 185)											::Array< int > color5 = color;
HXDLIN( 185)											int _hx_tmp6 = 0;
HXDLIN( 185)											color5[_hx_tmp6] = (color5->__get(_hx_tmp6) & -256);
HXDLIN( 185)											::Array< int > color6 = color;
HXDLIN( 185)											int _hx_tmp7 = 0;
HXDLIN( 185)											int _hx_tmp8;
HXDLIN( 185)											if ((Value2 > 255)) {
HXLINE( 185)												_hx_tmp8 = 255;
            											}
            											else {
HXLINE( 185)												if ((Value2 < 0)) {
HXLINE( 185)													_hx_tmp8 = 0;
            												}
            												else {
HXLINE( 185)													_hx_tmp8 = Value2;
            												}
            											}
HXDLIN( 185)											color6[_hx_tmp7] = (color6->__get(_hx_tmp7) | _hx_tmp8);
            										}
HXDLIN( 185)										{
HXLINE( 185)											int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 185)											::Array< int > color7 = color;
HXDLIN( 185)											int _hx_tmp9 = 0;
HXDLIN( 185)											color7[_hx_tmp9] = (color7->__get(_hx_tmp9) & 16777215);
HXDLIN( 185)											::Array< int > color8 = color;
HXDLIN( 185)											int _hx_tmp10 = 0;
HXDLIN( 185)											int _hx_tmp11;
HXDLIN( 185)											if ((Value3 > 255)) {
HXLINE( 185)												_hx_tmp11 = 255;
            											}
            											else {
HXLINE( 185)												if ((Value3 < 0)) {
HXLINE( 185)													_hx_tmp11 = 0;
            												}
            												else {
HXLINE( 185)													_hx_tmp11 = Value3;
            												}
            											}
HXDLIN( 185)											color8[_hx_tmp10] = (color8->__get(_hx_tmp10) | (_hx_tmp11 << 24));
            										}
            									}
            									break;
            									case (int)1: {
HXLINE( 185)										{
HXLINE( 185)											int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 185)											::Array< int > color1 = color;
HXDLIN( 185)											int _hx_tmp = 0;
HXDLIN( 185)											color1[_hx_tmp] = (color1->__get(_hx_tmp) & -16711681);
HXDLIN( 185)											::Array< int > color2 = color;
HXDLIN( 185)											int _hx_tmp1 = 0;
HXDLIN( 185)											int _hx_tmp2;
HXDLIN( 185)											if ((Value > 255)) {
HXLINE( 185)												_hx_tmp2 = 255;
            											}
            											else {
HXLINE( 185)												if ((Value < 0)) {
HXLINE( 185)													_hx_tmp2 = 0;
            												}
            												else {
HXLINE( 185)													_hx_tmp2 = Value;
            												}
            											}
HXDLIN( 185)											color2[_hx_tmp1] = (color2->__get(_hx_tmp1) | (_hx_tmp2 << 16));
            										}
HXDLIN( 185)										{
HXLINE( 185)											int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 185)											::Array< int > color3 = color;
HXDLIN( 185)											int _hx_tmp3 = 0;
HXDLIN( 185)											color3[_hx_tmp3] = (color3->__get(_hx_tmp3) & -65281);
HXDLIN( 185)											::Array< int > color4 = color;
HXDLIN( 185)											int _hx_tmp4 = 0;
HXDLIN( 185)											int _hx_tmp5;
HXDLIN( 185)											if ((Value1 > 255)) {
HXLINE( 185)												_hx_tmp5 = 255;
            											}
            											else {
HXLINE( 185)												if ((Value1 < 0)) {
HXLINE( 185)													_hx_tmp5 = 0;
            												}
            												else {
HXLINE( 185)													_hx_tmp5 = Value1;
            												}
            											}
HXDLIN( 185)											color4[_hx_tmp4] = (color4->__get(_hx_tmp4) | (_hx_tmp5 << 8));
            										}
HXDLIN( 185)										{
HXLINE( 185)											int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 185)											::Array< int > color5 = color;
HXDLIN( 185)											int _hx_tmp6 = 0;
HXDLIN( 185)											color5[_hx_tmp6] = (color5->__get(_hx_tmp6) & -256);
HXDLIN( 185)											::Array< int > color6 = color;
HXDLIN( 185)											int _hx_tmp7 = 0;
HXDLIN( 185)											int _hx_tmp8;
HXDLIN( 185)											if ((Value2 > 255)) {
HXLINE( 185)												_hx_tmp8 = 255;
            											}
            											else {
HXLINE( 185)												if ((Value2 < 0)) {
HXLINE( 185)													_hx_tmp8 = 0;
            												}
            												else {
HXLINE( 185)													_hx_tmp8 = Value2;
            												}
            											}
HXDLIN( 185)											color6[_hx_tmp7] = (color6->__get(_hx_tmp7) | _hx_tmp8);
            										}
HXDLIN( 185)										{
HXLINE( 185)											int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 185)											::Array< int > color7 = color;
HXDLIN( 185)											int _hx_tmp9 = 0;
HXDLIN( 185)											color7[_hx_tmp9] = (color7->__get(_hx_tmp9) & 16777215);
HXDLIN( 185)											::Array< int > color8 = color;
HXDLIN( 185)											int _hx_tmp10 = 0;
HXDLIN( 185)											int _hx_tmp11;
HXDLIN( 185)											if ((Value3 > 255)) {
HXLINE( 185)												_hx_tmp11 = 255;
            											}
            											else {
HXLINE( 185)												if ((Value3 < 0)) {
HXLINE( 185)													_hx_tmp11 = 0;
            												}
            												else {
HXLINE( 185)													_hx_tmp11 = Value3;
            												}
            											}
HXDLIN( 185)											color8[_hx_tmp10] = (color8->__get(_hx_tmp10) | (_hx_tmp11 << 24));
            										}
            									}
            									break;
            									case (int)2: {
HXLINE( 185)										{
HXLINE( 185)											int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 185)											::Array< int > color1 = color;
HXDLIN( 185)											int _hx_tmp = 0;
HXDLIN( 185)											color1[_hx_tmp] = (color1->__get(_hx_tmp) & -16711681);
HXDLIN( 185)											::Array< int > color2 = color;
HXDLIN( 185)											int _hx_tmp1 = 0;
HXDLIN( 185)											int _hx_tmp2;
HXDLIN( 185)											if ((Value > 255)) {
HXLINE( 185)												_hx_tmp2 = 255;
            											}
            											else {
HXLINE( 185)												if ((Value < 0)) {
HXLINE( 185)													_hx_tmp2 = 0;
            												}
            												else {
HXLINE( 185)													_hx_tmp2 = Value;
            												}
            											}
HXDLIN( 185)											color2[_hx_tmp1] = (color2->__get(_hx_tmp1) | (_hx_tmp2 << 16));
            										}
HXDLIN( 185)										{
HXLINE( 185)											int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 185)											::Array< int > color3 = color;
HXDLIN( 185)											int _hx_tmp3 = 0;
HXDLIN( 185)											color3[_hx_tmp3] = (color3->__get(_hx_tmp3) & -65281);
HXDLIN( 185)											::Array< int > color4 = color;
HXDLIN( 185)											int _hx_tmp4 = 0;
HXDLIN( 185)											int _hx_tmp5;
HXDLIN( 185)											if ((Value1 > 255)) {
HXLINE( 185)												_hx_tmp5 = 255;
            											}
            											else {
HXLINE( 185)												if ((Value1 < 0)) {
HXLINE( 185)													_hx_tmp5 = 0;
            												}
            												else {
HXLINE( 185)													_hx_tmp5 = Value1;
            												}
            											}
HXDLIN( 185)											color4[_hx_tmp4] = (color4->__get(_hx_tmp4) | (_hx_tmp5 << 8));
            										}
HXDLIN( 185)										{
HXLINE( 185)											int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 185)											::Array< int > color5 = color;
HXDLIN( 185)											int _hx_tmp6 = 0;
HXDLIN( 185)											color5[_hx_tmp6] = (color5->__get(_hx_tmp6) & -256);
HXDLIN( 185)											::Array< int > color6 = color;
HXDLIN( 185)											int _hx_tmp7 = 0;
HXDLIN( 185)											int _hx_tmp8;
HXDLIN( 185)											if ((Value2 > 255)) {
HXLINE( 185)												_hx_tmp8 = 255;
            											}
            											else {
HXLINE( 185)												if ((Value2 < 0)) {
HXLINE( 185)													_hx_tmp8 = 0;
            												}
            												else {
HXLINE( 185)													_hx_tmp8 = Value2;
            												}
            											}
HXDLIN( 185)											color6[_hx_tmp7] = (color6->__get(_hx_tmp7) | _hx_tmp8);
            										}
HXDLIN( 185)										{
HXLINE( 185)											int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 185)											::Array< int > color7 = color;
HXDLIN( 185)											int _hx_tmp9 = 0;
HXDLIN( 185)											color7[_hx_tmp9] = (color7->__get(_hx_tmp9) & 16777215);
HXDLIN( 185)											::Array< int > color8 = color;
HXDLIN( 185)											int _hx_tmp10 = 0;
HXDLIN( 185)											int _hx_tmp11;
HXDLIN( 185)											if ((Value3 > 255)) {
HXLINE( 185)												_hx_tmp11 = 255;
            											}
            											else {
HXLINE( 185)												if ((Value3 < 0)) {
HXLINE( 185)													_hx_tmp11 = 0;
            												}
            												else {
HXLINE( 185)													_hx_tmp11 = Value3;
            												}
            											}
HXDLIN( 185)											color8[_hx_tmp10] = (color8->__get(_hx_tmp10) | (_hx_tmp11 << 24));
            										}
            									}
            									break;
            									case (int)3: {
HXLINE( 185)										{
HXLINE( 185)											int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 185)											::Array< int > color1 = color;
HXDLIN( 185)											int _hx_tmp = 0;
HXDLIN( 185)											color1[_hx_tmp] = (color1->__get(_hx_tmp) & -16711681);
HXDLIN( 185)											::Array< int > color2 = color;
HXDLIN( 185)											int _hx_tmp1 = 0;
HXDLIN( 185)											int _hx_tmp2;
HXDLIN( 185)											if ((Value > 255)) {
HXLINE( 185)												_hx_tmp2 = 255;
            											}
            											else {
HXLINE( 185)												if ((Value < 0)) {
HXLINE( 185)													_hx_tmp2 = 0;
            												}
            												else {
HXLINE( 185)													_hx_tmp2 = Value;
            												}
            											}
HXDLIN( 185)											color2[_hx_tmp1] = (color2->__get(_hx_tmp1) | (_hx_tmp2 << 16));
            										}
HXDLIN( 185)										{
HXLINE( 185)											int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 185)											::Array< int > color3 = color;
HXDLIN( 185)											int _hx_tmp3 = 0;
HXDLIN( 185)											color3[_hx_tmp3] = (color3->__get(_hx_tmp3) & -65281);
HXDLIN( 185)											::Array< int > color4 = color;
HXDLIN( 185)											int _hx_tmp4 = 0;
HXDLIN( 185)											int _hx_tmp5;
HXDLIN( 185)											if ((Value1 > 255)) {
HXLINE( 185)												_hx_tmp5 = 255;
            											}
            											else {
HXLINE( 185)												if ((Value1 < 0)) {
HXLINE( 185)													_hx_tmp5 = 0;
            												}
            												else {
HXLINE( 185)													_hx_tmp5 = Value1;
            												}
            											}
HXDLIN( 185)											color4[_hx_tmp4] = (color4->__get(_hx_tmp4) | (_hx_tmp5 << 8));
            										}
HXDLIN( 185)										{
HXLINE( 185)											int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 185)											::Array< int > color5 = color;
HXDLIN( 185)											int _hx_tmp6 = 0;
HXDLIN( 185)											color5[_hx_tmp6] = (color5->__get(_hx_tmp6) & -256);
HXDLIN( 185)											::Array< int > color6 = color;
HXDLIN( 185)											int _hx_tmp7 = 0;
HXDLIN( 185)											int _hx_tmp8;
HXDLIN( 185)											if ((Value2 > 255)) {
HXLINE( 185)												_hx_tmp8 = 255;
            											}
            											else {
HXLINE( 185)												if ((Value2 < 0)) {
HXLINE( 185)													_hx_tmp8 = 0;
            												}
            												else {
HXLINE( 185)													_hx_tmp8 = Value2;
            												}
            											}
HXDLIN( 185)											color6[_hx_tmp7] = (color6->__get(_hx_tmp7) | _hx_tmp8);
            										}
HXDLIN( 185)										{
HXLINE( 185)											int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 185)											::Array< int > color7 = color;
HXDLIN( 185)											int _hx_tmp9 = 0;
HXDLIN( 185)											color7[_hx_tmp9] = (color7->__get(_hx_tmp9) & 16777215);
HXDLIN( 185)											::Array< int > color8 = color;
HXDLIN( 185)											int _hx_tmp10 = 0;
HXDLIN( 185)											int _hx_tmp11;
HXDLIN( 185)											if ((Value3 > 255)) {
HXLINE( 185)												_hx_tmp11 = 255;
            											}
            											else {
HXLINE( 185)												if ((Value3 < 0)) {
HXLINE( 185)													_hx_tmp11 = 0;
            												}
            												else {
HXLINE( 185)													_hx_tmp11 = Value3;
            												}
            											}
HXDLIN( 185)											color8[_hx_tmp10] = (color8->__get(_hx_tmp10) | (_hx_tmp11 << 24));
            										}
            									}
            									break;
            									case (int)4: {
HXLINE( 185)										{
HXLINE( 185)											int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 185)											::Array< int > color1 = color;
HXDLIN( 185)											int _hx_tmp = 0;
HXDLIN( 185)											color1[_hx_tmp] = (color1->__get(_hx_tmp) & -16711681);
HXDLIN( 185)											::Array< int > color2 = color;
HXDLIN( 185)											int _hx_tmp1 = 0;
HXDLIN( 185)											int _hx_tmp2;
HXDLIN( 185)											if ((Value > 255)) {
HXLINE( 185)												_hx_tmp2 = 255;
            											}
            											else {
HXLINE( 185)												if ((Value < 0)) {
HXLINE( 185)													_hx_tmp2 = 0;
            												}
            												else {
HXLINE( 185)													_hx_tmp2 = Value;
            												}
            											}
HXDLIN( 185)											color2[_hx_tmp1] = (color2->__get(_hx_tmp1) | (_hx_tmp2 << 16));
            										}
HXDLIN( 185)										{
HXLINE( 185)											int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 185)											::Array< int > color3 = color;
HXDLIN( 185)											int _hx_tmp3 = 0;
HXDLIN( 185)											color3[_hx_tmp3] = (color3->__get(_hx_tmp3) & -65281);
HXDLIN( 185)											::Array< int > color4 = color;
HXDLIN( 185)											int _hx_tmp4 = 0;
HXDLIN( 185)											int _hx_tmp5;
HXDLIN( 185)											if ((Value1 > 255)) {
HXLINE( 185)												_hx_tmp5 = 255;
            											}
            											else {
HXLINE( 185)												if ((Value1 < 0)) {
HXLINE( 185)													_hx_tmp5 = 0;
            												}
            												else {
HXLINE( 185)													_hx_tmp5 = Value1;
            												}
            											}
HXDLIN( 185)											color4[_hx_tmp4] = (color4->__get(_hx_tmp4) | (_hx_tmp5 << 8));
            										}
HXDLIN( 185)										{
HXLINE( 185)											int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 185)											::Array< int > color5 = color;
HXDLIN( 185)											int _hx_tmp6 = 0;
HXDLIN( 185)											color5[_hx_tmp6] = (color5->__get(_hx_tmp6) & -256);
HXDLIN( 185)											::Array< int > color6 = color;
HXDLIN( 185)											int _hx_tmp7 = 0;
HXDLIN( 185)											int _hx_tmp8;
HXDLIN( 185)											if ((Value2 > 255)) {
HXLINE( 185)												_hx_tmp8 = 255;
            											}
            											else {
HXLINE( 185)												if ((Value2 < 0)) {
HXLINE( 185)													_hx_tmp8 = 0;
            												}
            												else {
HXLINE( 185)													_hx_tmp8 = Value2;
            												}
            											}
HXDLIN( 185)											color6[_hx_tmp7] = (color6->__get(_hx_tmp7) | _hx_tmp8);
            										}
HXDLIN( 185)										{
HXLINE( 185)											int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 185)											::Array< int > color7 = color;
HXDLIN( 185)											int _hx_tmp9 = 0;
HXDLIN( 185)											color7[_hx_tmp9] = (color7->__get(_hx_tmp9) & 16777215);
HXDLIN( 185)											::Array< int > color8 = color;
HXDLIN( 185)											int _hx_tmp10 = 0;
HXDLIN( 185)											int _hx_tmp11;
HXDLIN( 185)											if ((Value3 > 255)) {
HXLINE( 185)												_hx_tmp11 = 255;
            											}
            											else {
HXLINE( 185)												if ((Value3 < 0)) {
HXLINE( 185)													_hx_tmp11 = 0;
            												}
            												else {
HXLINE( 185)													_hx_tmp11 = Value3;
            												}
            											}
HXDLIN( 185)											color8[_hx_tmp10] = (color8->__get(_hx_tmp10) | (_hx_tmp11 << 24));
            										}
            									}
            									break;
            									case (int)5: {
HXLINE( 185)										{
HXLINE( 185)											int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 185)											::Array< int > color1 = color;
HXDLIN( 185)											int _hx_tmp = 0;
HXDLIN( 185)											color1[_hx_tmp] = (color1->__get(_hx_tmp) & -16711681);
HXDLIN( 185)											::Array< int > color2 = color;
HXDLIN( 185)											int _hx_tmp1 = 0;
HXDLIN( 185)											int _hx_tmp2;
HXDLIN( 185)											if ((Value > 255)) {
HXLINE( 185)												_hx_tmp2 = 255;
            											}
            											else {
HXLINE( 185)												if ((Value < 0)) {
HXLINE( 185)													_hx_tmp2 = 0;
            												}
            												else {
HXLINE( 185)													_hx_tmp2 = Value;
            												}
            											}
HXDLIN( 185)											color2[_hx_tmp1] = (color2->__get(_hx_tmp1) | (_hx_tmp2 << 16));
            										}
HXDLIN( 185)										{
HXLINE( 185)											int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 185)											::Array< int > color3 = color;
HXDLIN( 185)											int _hx_tmp3 = 0;
HXDLIN( 185)											color3[_hx_tmp3] = (color3->__get(_hx_tmp3) & -65281);
HXDLIN( 185)											::Array< int > color4 = color;
HXDLIN( 185)											int _hx_tmp4 = 0;
HXDLIN( 185)											int _hx_tmp5;
HXDLIN( 185)											if ((Value1 > 255)) {
HXLINE( 185)												_hx_tmp5 = 255;
            											}
            											else {
HXLINE( 185)												if ((Value1 < 0)) {
HXLINE( 185)													_hx_tmp5 = 0;
            												}
            												else {
HXLINE( 185)													_hx_tmp5 = Value1;
            												}
            											}
HXDLIN( 185)											color4[_hx_tmp4] = (color4->__get(_hx_tmp4) | (_hx_tmp5 << 8));
            										}
HXDLIN( 185)										{
HXLINE( 185)											int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 185)											::Array< int > color5 = color;
HXDLIN( 185)											int _hx_tmp6 = 0;
HXDLIN( 185)											color5[_hx_tmp6] = (color5->__get(_hx_tmp6) & -256);
HXDLIN( 185)											::Array< int > color6 = color;
HXDLIN( 185)											int _hx_tmp7 = 0;
HXDLIN( 185)											int _hx_tmp8;
HXDLIN( 185)											if ((Value2 > 255)) {
HXLINE( 185)												_hx_tmp8 = 255;
            											}
            											else {
HXLINE( 185)												if ((Value2 < 0)) {
HXLINE( 185)													_hx_tmp8 = 0;
            												}
            												else {
HXLINE( 185)													_hx_tmp8 = Value2;
            												}
            											}
HXDLIN( 185)											color6[_hx_tmp7] = (color6->__get(_hx_tmp7) | _hx_tmp8);
            										}
HXDLIN( 185)										{
HXLINE( 185)											int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 185)											::Array< int > color7 = color;
HXDLIN( 185)											int _hx_tmp9 = 0;
HXDLIN( 185)											color7[_hx_tmp9] = (color7->__get(_hx_tmp9) & 16777215);
HXDLIN( 185)											::Array< int > color8 = color;
HXDLIN( 185)											int _hx_tmp10 = 0;
HXDLIN( 185)											int _hx_tmp11;
HXDLIN( 185)											if ((Value3 > 255)) {
HXLINE( 185)												_hx_tmp11 = 255;
            											}
            											else {
HXLINE( 185)												if ((Value3 < 0)) {
HXLINE( 185)													_hx_tmp11 = 0;
            												}
            												else {
HXLINE( 185)													_hx_tmp11 = Value3;
            												}
            											}
HXDLIN( 185)											color8[_hx_tmp10] = (color8->__get(_hx_tmp10) | (_hx_tmp11 << 24));
            										}
            									}
            									break;
            								}
            							}
            						}
            					}
HXLINE( 186)					this->phillyStreet->set_color(color->__get(0));
            				}
            				break;
            				case (int)2: {
HXLINE( 189)					if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE( 191)						int particlesNum = ::flixel::FlxG_obj::random->_hx_int(8,12,null());
HXLINE( 192)						Float width = (( (Float)(2000) ) / ( (Float)(particlesNum) ));
HXLINE( 193)						int color = this->phillyLightsColors->__get(this->curLightEvent);
HXLINE( 194)						{
HXLINE( 196)							{
HXLINE( 196)								int _g = 0;
HXDLIN( 196)								int _g1 = particlesNum;
HXDLIN( 196)								while((_g < _g1)){
HXLINE( 196)									_g = (_g + 1);
HXDLIN( 196)									int i = (_g - 1);
HXLINE( 198)									Float particle = ((-400 + (width * ( (Float)(i) ))) + ::flixel::FlxG_obj::random->_hx_float((-(width) / ( (Float)(5) )),(width / ( (Float)(5) )),null()));
HXDLIN( 198)									Float particle1 = (this->phillyGlowGradient->originalY + 200);
HXDLIN( 198)									 ::states::stages::objects::PhillyGlowParticle particle2 =  ::states::stages::objects::PhillyGlowParticle_obj::__alloc( HX_CTX ,particle,(particle1 + ::flixel::FlxG_obj::random->_hx_float(0,125,null())),color);
HXLINE( 199)									this->phillyGlowParticles->add(particle2).StaticCast<  ::states::stages::objects::PhillyGlowParticle >();
            								}
            							}
HXLINE( 196)							{
HXLINE( 196)								int _g2 = 0;
HXDLIN( 196)								int _g3 = particlesNum;
HXDLIN( 196)								while((_g2 < _g3)){
HXLINE( 196)									_g2 = (_g2 + 1);
HXDLIN( 196)									int i = (_g2 - 1);
HXLINE( 198)									Float particle = ((-400 + (width * ( (Float)(i) ))) + ::flixel::FlxG_obj::random->_hx_float((-(width) / ( (Float)(5) )),(width / ( (Float)(5) )),null()));
HXDLIN( 198)									Float particle1 = (this->phillyGlowGradient->originalY + 200);
HXDLIN( 198)									 ::states::stages::objects::PhillyGlowParticle particle2 =  ::states::stages::objects::PhillyGlowParticle_obj::__alloc( HX_CTX ,particle,(particle1 + (::flixel::FlxG_obj::random->_hx_float(0,125,null()) + 40)),color);
HXLINE( 199)									this->phillyGlowParticles->add(particle2).StaticCast<  ::states::stages::objects::PhillyGlowParticle >();
            								}
            							}
HXLINE( 196)							{
HXLINE( 196)								int _g4 = 0;
HXDLIN( 196)								int _g5 = particlesNum;
HXDLIN( 196)								while((_g4 < _g5)){
HXLINE( 196)									_g4 = (_g4 + 1);
HXDLIN( 196)									int i = (_g4 - 1);
HXLINE( 198)									Float particle = ((-400 + (width * ( (Float)(i) ))) + ::flixel::FlxG_obj::random->_hx_float((-(width) / ( (Float)(5) )),(width / ( (Float)(5) )),null()));
HXDLIN( 198)									Float particle1 = (this->phillyGlowGradient->originalY + 200);
HXDLIN( 198)									 ::states::stages::objects::PhillyGlowParticle particle2 =  ::states::stages::objects::PhillyGlowParticle_obj::__alloc( HX_CTX ,particle,(particle1 + (::flixel::FlxG_obj::random->_hx_float(0,125,null()) + 80)),color);
HXLINE( 199)									this->phillyGlowParticles->add(particle2).StaticCast<  ::states::stages::objects::PhillyGlowParticle >();
            								}
            							}
            						}
            					}
HXLINE( 203)					this->phillyGlowGradient->bop();
            				}
            				break;
            			}
            		}
            	}


void Philly_obj::doFlash(){
            	HX_STACKFRAME(&_hx_pos_88dd6f0b2f15fde5_209_doFlash)
HXLINE( 210)		int color = -1;
HXLINE( 211)		if (!(::backend::ClientPrefs_obj::data->flashing)) {
HXLINE( 211)			int Value = ::Math_obj::round(((Float)127.5));
HXDLIN( 211)			color = (color & 16777215);
HXDLIN( 211)			int color1;
HXDLIN( 211)			if ((Value > 255)) {
HXLINE( 211)				color1 = 255;
            			}
            			else {
HXLINE( 211)				if ((Value < 0)) {
HXLINE( 211)					color1 = 0;
            				}
            				else {
HXLINE( 211)					color1 = Value;
            				}
            			}
HXDLIN( 211)			color = (color | (color1 << 24));
            		}
HXLINE( 213)		::flixel::FlxG_obj::camera->flash(color,((Float)0.15),null(),true);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Philly_obj,doFlash,(void))


::hx::ObjectPtr< Philly_obj > Philly_obj::__new() {
	::hx::ObjectPtr< Philly_obj > __this = new Philly_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Philly_obj > Philly_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Philly_obj *__this = (Philly_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Philly_obj), true, "states.stages.Philly"));
	*(void **)__this = Philly_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Philly_obj::Philly_obj()
{
}

void Philly_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Philly);
	HX_MARK_MEMBER_NAME(phillyLightsColors,"phillyLightsColors");
	HX_MARK_MEMBER_NAME(phillyWindow,"phillyWindow");
	HX_MARK_MEMBER_NAME(phillyStreet,"phillyStreet");
	HX_MARK_MEMBER_NAME(phillyTrain,"phillyTrain");
	HX_MARK_MEMBER_NAME(curLight,"curLight");
	HX_MARK_MEMBER_NAME(blammedLightsBlack,"blammedLightsBlack");
	HX_MARK_MEMBER_NAME(phillyGlowGradient,"phillyGlowGradient");
	HX_MARK_MEMBER_NAME(phillyGlowParticles,"phillyGlowParticles");
	HX_MARK_MEMBER_NAME(phillyWindowEvent,"phillyWindowEvent");
	HX_MARK_MEMBER_NAME(curLightEvent,"curLightEvent");
	 ::backend::BaseStage_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Philly_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(phillyLightsColors,"phillyLightsColors");
	HX_VISIT_MEMBER_NAME(phillyWindow,"phillyWindow");
	HX_VISIT_MEMBER_NAME(phillyStreet,"phillyStreet");
	HX_VISIT_MEMBER_NAME(phillyTrain,"phillyTrain");
	HX_VISIT_MEMBER_NAME(curLight,"curLight");
	HX_VISIT_MEMBER_NAME(blammedLightsBlack,"blammedLightsBlack");
	HX_VISIT_MEMBER_NAME(phillyGlowGradient,"phillyGlowGradient");
	HX_VISIT_MEMBER_NAME(phillyGlowParticles,"phillyGlowParticles");
	HX_VISIT_MEMBER_NAME(phillyWindowEvent,"phillyWindowEvent");
	HX_VISIT_MEMBER_NAME(curLightEvent,"curLightEvent");
	 ::backend::BaseStage_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Philly_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		if (HX_FIELD_EQ(inName,"doFlash") ) { return ::hx::Val( doFlash_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curLight") ) { return ::hx::Val( curLight ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"phillyTrain") ) { return ::hx::Val( phillyTrain ); }
		if (HX_FIELD_EQ(inName,"eventPushed") ) { return ::hx::Val( eventPushed_dyn() ); }
		if (HX_FIELD_EQ(inName,"eventCalled") ) { return ::hx::Val( eventCalled_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"phillyWindow") ) { return ::hx::Val( phillyWindow ); }
		if (HX_FIELD_EQ(inName,"phillyStreet") ) { return ::hx::Val( phillyStreet ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"curLightEvent") ) { return ::hx::Val( curLightEvent ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"phillyWindowEvent") ) { return ::hx::Val( phillyWindowEvent ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"phillyLightsColors") ) { return ::hx::Val( phillyLightsColors ); }
		if (HX_FIELD_EQ(inName,"blammedLightsBlack") ) { return ::hx::Val( blammedLightsBlack ); }
		if (HX_FIELD_EQ(inName,"phillyGlowGradient") ) { return ::hx::Val( phillyGlowGradient ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"phillyGlowParticles") ) { return ::hx::Val( phillyGlowParticles ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Philly_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"curLight") ) { curLight=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"phillyTrain") ) { phillyTrain=inValue.Cast<  ::states::stages::objects::PhillyTrain >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"phillyWindow") ) { phillyWindow=inValue.Cast<  ::objects::BGSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"phillyStreet") ) { phillyStreet=inValue.Cast<  ::objects::BGSprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"curLightEvent") ) { curLightEvent=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"phillyWindowEvent") ) { phillyWindowEvent=inValue.Cast<  ::objects::BGSprite >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"phillyLightsColors") ) { phillyLightsColors=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blammedLightsBlack") ) { blammedLightsBlack=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"phillyGlowGradient") ) { phillyGlowGradient=inValue.Cast<  ::states::stages::objects::PhillyGlowGradient >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"phillyGlowParticles") ) { phillyGlowParticles=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Philly_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("phillyLightsColors",b5,47,fb,e8));
	outFields->push(HX_("phillyWindow",38,4d,8d,4a));
	outFields->push(HX_("phillyStreet",4b,d1,2d,09));
	outFields->push(HX_("phillyTrain",80,9b,65,bb));
	outFields->push(HX_("curLight",36,8b,aa,bc));
	outFields->push(HX_("blammedLightsBlack",ac,aa,1b,a0));
	outFields->push(HX_("phillyGlowGradient",e5,f8,27,f1));
	outFields->push(HX_("phillyGlowParticles",d8,96,43,d7));
	outFields->push(HX_("phillyWindowEvent",c2,ff,09,3e));
	outFields->push(HX_("curLightEvent",04,49,75,56));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Philly_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Philly_obj,phillyLightsColors),HX_("phillyLightsColors",b5,47,fb,e8)},
	{::hx::fsObject /*  ::objects::BGSprite */ ,(int)offsetof(Philly_obj,phillyWindow),HX_("phillyWindow",38,4d,8d,4a)},
	{::hx::fsObject /*  ::objects::BGSprite */ ,(int)offsetof(Philly_obj,phillyStreet),HX_("phillyStreet",4b,d1,2d,09)},
	{::hx::fsObject /*  ::states::stages::objects::PhillyTrain */ ,(int)offsetof(Philly_obj,phillyTrain),HX_("phillyTrain",80,9b,65,bb)},
	{::hx::fsInt,(int)offsetof(Philly_obj,curLight),HX_("curLight",36,8b,aa,bc)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Philly_obj,blammedLightsBlack),HX_("blammedLightsBlack",ac,aa,1b,a0)},
	{::hx::fsObject /*  ::states::stages::objects::PhillyGlowGradient */ ,(int)offsetof(Philly_obj,phillyGlowGradient),HX_("phillyGlowGradient",e5,f8,27,f1)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(Philly_obj,phillyGlowParticles),HX_("phillyGlowParticles",d8,96,43,d7)},
	{::hx::fsObject /*  ::objects::BGSprite */ ,(int)offsetof(Philly_obj,phillyWindowEvent),HX_("phillyWindowEvent",c2,ff,09,3e)},
	{::hx::fsInt,(int)offsetof(Philly_obj,curLightEvent),HX_("curLightEvent",04,49,75,56)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Philly_obj_sStaticStorageInfo = 0;
#endif

static ::String Philly_obj_sMemberFields[] = {
	HX_("phillyLightsColors",b5,47,fb,e8),
	HX_("phillyWindow",38,4d,8d,4a),
	HX_("phillyStreet",4b,d1,2d,09),
	HX_("phillyTrain",80,9b,65,bb),
	HX_("curLight",36,8b,aa,bc),
	HX_("blammedLightsBlack",ac,aa,1b,a0),
	HX_("phillyGlowGradient",e5,f8,27,f1),
	HX_("phillyGlowParticles",d8,96,43,d7),
	HX_("phillyWindowEvent",c2,ff,09,3e),
	HX_("curLightEvent",04,49,75,56),
	HX_("create",fc,66,0f,7c),
	HX_("eventPushed",73,60,7a,c5),
	HX_("update",09,86,05,87),
	HX_("beatHit",7d,ea,04,74),
	HX_("eventCalled",37,a0,35,0a),
	HX_("doFlash",25,16,b9,35),
	::String(null()) };

::hx::Class Philly_obj::__mClass;

void Philly_obj::__register()
{
	Philly_obj _hx_dummy;
	Philly_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.stages.Philly",75,a2,d2,ef);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Philly_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Philly_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Philly_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Philly_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
} // end namespace stages
