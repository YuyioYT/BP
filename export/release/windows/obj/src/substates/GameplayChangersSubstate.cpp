#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Controls
#include <backend/Controls.h>
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
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_objects_Alphabet
#include <objects/Alphabet.h>
#endif
#ifndef INCLUDED_objects_AttachedText
#include <objects/AttachedText.h>
#endif
#ifndef INCLUDED_objects_CheckboxThingie
#include <objects/CheckboxThingie.h>
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
#ifndef INCLUDED_substates_GameplayChangersSubstate
#include <substates/GameplayChangersSubstate.h>
#endif
#ifndef INCLUDED_substates_GameplayOption
#include <substates/GameplayOption.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6d3d9e5dfbdc81cc_6_new,"substates.GameplayChangersSubstate","new",0xfd3a2026,"substates.GameplayChangersSubstate.new","substates/GameplayChangersSubstate.hx",6,0x349481a9)
HX_LOCAL_STACK_FRAME(_hx_pos_6d3d9e5dfbdc81cc_17_getOptions,"substates.GameplayChangersSubstate","getOptions",0x09758e62,"substates.GameplayChangersSubstate.getOptions","substates/GameplayChangersSubstate.hx",17,0x349481a9)
static const ::String _hx_array_data_5399d534_3[] = {
	HX_("multiplicative",96,7a,3f,fa),HX_("constant",64,c1,9d,a5),
};
HX_LOCAL_STACK_FRAME(_hx_pos_6d3d9e5dfbdc81cc_76_getOptionByName,"substates.GameplayChangersSubstate","getOptionByName",0xb2792f93,"substates.GameplayChangersSubstate.getOptionByName","substates/GameplayChangersSubstate.hx",76,0x349481a9)
HX_LOCAL_STACK_FRAME(_hx_pos_6d3d9e5dfbdc81cc_144_update,"substates.GameplayChangersSubstate","update",0xd89ad603,"substates.GameplayChangersSubstate.update","substates/GameplayChangersSubstate.hx",144,0x349481a9)
HX_LOCAL_STACK_FRAME(_hx_pos_6d3d9e5dfbdc81cc_306_updateTextFrom,"substates.GameplayChangersSubstate","updateTextFrom",0x69a4c5da,"substates.GameplayChangersSubstate.updateTextFrom","substates/GameplayChangersSubstate.hx",306,0x349481a9)
HX_LOCAL_STACK_FRAME(_hx_pos_6d3d9e5dfbdc81cc_315_clearHold,"substates.GameplayChangersSubstate","clearHold",0xaf7919b2,"substates.GameplayChangersSubstate.clearHold","substates/GameplayChangersSubstate.hx",315,0x349481a9)
HX_LOCAL_STACK_FRAME(_hx_pos_6d3d9e5dfbdc81cc_323_changeSelection,"substates.GameplayChangersSubstate","changeSelection",0x60377982,"substates.GameplayChangersSubstate.changeSelection","substates/GameplayChangersSubstate.hx",323,0x349481a9)
HX_LOCAL_STACK_FRAME(_hx_pos_6d3d9e5dfbdc81cc_352_reloadCheckboxes,"substates.GameplayChangersSubstate","reloadCheckboxes",0xbf4daea4,"substates.GameplayChangersSubstate.reloadCheckboxes","substates/GameplayChangersSubstate.hx",352,0x349481a9)
namespace substates{

void GameplayChangersSubstate_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_6d3d9e5dfbdc81cc_6_new)
HXLINE( 142)		this->holdValue = ((Float)0);
HXLINE( 141)		this->holdTime = ((Float)0);
HXLINE( 140)		this->nextAccept = 5;
HXLINE(  10)		this->optionsArray = ::cpp::VirtualArray_obj::__new(0);
HXLINE(   9)		this->curSelected = 0;
HXLINE(   8)		this->curOption = null();
HXLINE(  88)		super::__construct();
HXLINE(  90)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  91)		bg->set_alpha(((Float)0.6));
HXLINE(  92)		this->add(bg);
HXLINE(  95)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  96)		this->add(this->grpOptions);
HXLINE(  98)		this->grpTexts =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  99)		this->add(this->grpTexts);
HXLINE( 101)		this->checkboxGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 102)		this->add(this->checkboxGroup);
HXLINE( 104)		this->getOptions();
HXLINE( 106)		{
HXLINE( 106)			int _g = 0;
HXDLIN( 106)			int _g1 = this->optionsArray->get_length();
HXDLIN( 106)			while((_g < _g1)){
HXLINE( 106)				_g = (_g + 1);
HXDLIN( 106)				int i = (_g - 1);
HXLINE( 108)				 ::objects::Alphabet optionText =  ::objects::Alphabet_obj::__alloc( HX_CTX ,( (Float)(200) ),( (Float)(360) ),( (::String)(this->optionsArray->__get(i)->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ),true);
HXLINE( 109)				optionText->isMenuItem = true;
HXLINE( 110)				optionText->setScale(((Float)0.8),null());
HXLINE( 111)				optionText->targetY = i;
HXLINE( 112)				this->grpOptions->add(optionText).StaticCast<  ::objects::Alphabet >();
HXLINE( 114)				if (::hx::IsEq( this->optionsArray->__get(i)->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic),HX_("bool",2a,84,1b,41) )) {
HXLINE( 115)					optionText->set_x((optionText->x + 90));
HXLINE( 116)					optionText->startPosition->set_x((optionText->startPosition->x + 90));
HXLINE( 117)					optionText->snapToPosition();
HXLINE( 118)					Float checkbox = (optionText->x - ( (Float)(105) ));
HXDLIN( 118)					Float optionText1 = optionText->y;
HXDLIN( 118)					 ::objects::CheckboxThingie checkbox1 =  ::objects::CheckboxThingie_obj::__alloc( HX_CTX ,checkbox,optionText1,::hx::IsEq( this->optionsArray->__get(i)->__Field(HX_("getValue",fb,8e,8f,91),::hx::paccDynamic)(),true ));
HXLINE( 119)					checkbox1->sprTracker = optionText;
HXLINE( 120)					 ::objects::CheckboxThingie checkbox2 = checkbox1;
HXDLIN( 120)					checkbox2->offsetX = (checkbox2->offsetX - ( (Float)(20) ));
HXLINE( 121)					checkbox1->offsetY = ( (Float)(-52) );
HXLINE( 122)					checkbox1->ID = i;
HXLINE( 123)					this->checkboxGroup->add(checkbox1).StaticCast<  ::objects::CheckboxThingie >();
            				}
            				else {
HXLINE( 125)					optionText->snapToPosition();
HXLINE( 126)					::String valueText = ::Std_obj::string(this->optionsArray->__get(i)->__Field(HX_("getValue",fb,8e,8f,91),::hx::paccDynamic)());
HXDLIN( 126)					 ::objects::AttachedText valueText1 =  ::objects::AttachedText_obj::__alloc( HX_CTX ,valueText,(optionText->get_width() + 40),0,true,((Float)0.8));
HXLINE( 127)					valueText1->sprTracker = optionText;
HXLINE( 128)					valueText1->copyAlpha = true;
HXLINE( 129)					valueText1->ID = i;
HXLINE( 130)					this->grpTexts->add(valueText1).StaticCast<  ::objects::AttachedText >();
HXLINE( 131)					this->optionsArray->__get(i)->__Field(HX_("setChild",9a,12,ee,53),::hx::paccDynamic)(valueText1);
            				}
HXLINE( 133)				this->updateTextFrom(( ( ::substates::GameplayOption)(this->optionsArray->__get(i)) ));
            			}
            		}
HXLINE( 136)		this->changeSelection(null());
HXLINE( 137)		this->reloadCheckboxes();
            	}

Dynamic GameplayChangersSubstate_obj::__CreateEmpty() { return new GameplayChangersSubstate_obj; }

void *GameplayChangersSubstate_obj::_hx_vtable = 0;

Dynamic GameplayChangersSubstate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameplayChangersSubstate_obj > _hx_result = new GameplayChangersSubstate_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GameplayChangersSubstate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x606ef466) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x3c0818b8) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x3c0818b8;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x606ef466;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void GameplayChangersSubstate_obj::getOptions(){
            	HX_GC_STACKFRAME(&_hx_pos_6d3d9e5dfbdc81cc_17_getOptions)
HXLINE(  18)		 ::substates::GameplayOption goption =  ::substates::GameplayOption_obj::__alloc( HX_CTX ,HX_("Scroll Type",ad,1f,97,3f),HX_("scrolltype",47,55,ef,1f),HX_("string",d1,28,30,11),HX_("multiplicative",96,7a,3f,fa),::Array_obj< ::String >::fromData( _hx_array_data_5399d534_3,2));
HXLINE(  19)		this->optionsArray->push(goption);
HXLINE(  21)		 ::substates::GameplayOption option =  ::substates::GameplayOption_obj::__alloc( HX_CTX ,HX_("Scroll Speed",34,bf,42,cb),HX_("scrollspeed",5a,70,19,38),HX_("float",9c,c5,96,02),1,null());
HXLINE(  22)		option->scrollSpeed = ((Float)2.0);
HXLINE(  23)		option->minValue = ((Float)0.35);
HXLINE(  24)		option->changeValue = ((Float)0.05);
HXLINE(  25)		option->decimals = 2;
HXLINE(  26)		if (::hx::IsNotEq( goption->getValue(),HX_("constant",64,c1,9d,a5) )) {
HXLINE(  28)			option->displayFormat = HX_("%vX",87,7a,1c,00);
HXLINE(  29)			option->maxValue = 3;
            		}
            		else {
HXLINE(  33)			option->displayFormat = HX_("%v",b1,20,00,00);
HXLINE(  34)			option->maxValue = 6;
            		}
HXLINE(  36)		this->optionsArray->push(option);
HXLINE(  39)		 ::substates::GameplayOption option1 =  ::substates::GameplayOption_obj::__alloc( HX_CTX ,HX_("Playback Rate",05,cb,36,2d),HX_("songspeed",92,6f,b6,1d),HX_("float",9c,c5,96,02),1,null());
HXLINE(  40)		option1->scrollSpeed = ( (Float)(1) );
HXLINE(  41)		option1->minValue = ((Float)0.5);
HXLINE(  42)		option1->maxValue = ((Float)3.0);
HXLINE(  43)		option1->changeValue = ((Float)0.05);
HXLINE(  44)		option1->displayFormat = HX_("%vX",87,7a,1c,00);
HXLINE(  45)		option1->decimals = 2;
HXLINE(  46)		this->optionsArray->push(option1);
HXLINE(  49)		 ::substates::GameplayOption option2 =  ::substates::GameplayOption_obj::__alloc( HX_CTX ,HX_("Health Gain Multiplier",1e,c6,e7,2f),HX_("healthgain",1b,97,1b,16),HX_("float",9c,c5,96,02),1,null());
HXLINE(  50)		option2->scrollSpeed = ((Float)2.5);
HXLINE(  51)		option2->minValue = 0;
HXLINE(  52)		option2->maxValue = 5;
HXLINE(  53)		option2->changeValue = ((Float)0.1);
HXLINE(  54)		option2->displayFormat = HX_("%vX",87,7a,1c,00);
HXLINE(  55)		this->optionsArray->push(option2);
HXLINE(  57)		 ::substates::GameplayOption option3 =  ::substates::GameplayOption_obj::__alloc( HX_CTX ,HX_("Health Loss Multiplier",3a,7f,8e,c0),HX_("healthloss",7f,50,74,19),HX_("float",9c,c5,96,02),1,null());
HXLINE(  58)		option3->scrollSpeed = ((Float)2.5);
HXLINE(  59)		option3->minValue = ((Float)0.5);
HXLINE(  60)		option3->maxValue = 5;
HXLINE(  61)		option3->changeValue = ((Float)0.1);
HXLINE(  62)		option3->displayFormat = HX_("%vX",87,7a,1c,00);
HXLINE(  63)		this->optionsArray->push(option3);
HXLINE(  65)		 ::substates::GameplayOption option4 =  ::substates::GameplayOption_obj::__alloc( HX_CTX ,HX_("Instakill on Miss",76,d5,a0,bc),HX_("instakill",f9,72,23,49),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  66)		this->optionsArray->push(option4);
HXLINE(  68)		 ::substates::GameplayOption option5 =  ::substates::GameplayOption_obj::__alloc( HX_CTX ,HX_("Practice Mode",e8,58,72,66),HX_("practice",bb,00,e7,a0),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  69)		this->optionsArray->push(option5);
HXLINE(  71)		 ::substates::GameplayOption option6 =  ::substates::GameplayOption_obj::__alloc( HX_CTX ,HX_("Botplay",5b,23,fb,2e),HX_("botplay",7b,fb,a9,61),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  72)		this->optionsArray->push(option6);
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameplayChangersSubstate_obj,getOptions,(void))

 ::substates::GameplayOption GameplayChangersSubstate_obj::getOptionByName(::String name){
            	HX_STACKFRAME(&_hx_pos_6d3d9e5dfbdc81cc_76_getOptionByName)
HXLINE(  77)		{
HXLINE(  77)			int _g = 0;
HXDLIN(  77)			::cpp::VirtualArray _g1 = this->optionsArray;
HXDLIN(  77)			while((_g < _g1->get_length())){
HXLINE(  77)				 ::Dynamic i = _g1->__get(_g);
HXDLIN(  77)				_g = (_g + 1);
HXLINE(  79)				 ::substates::GameplayOption opt = ( ( ::substates::GameplayOption)(i) );
HXLINE(  80)				if ((opt->name == name)) {
HXLINE(  81)					return opt;
            				}
            			}
            		}
HXLINE(  83)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameplayChangersSubstate_obj,getOptionByName,return )

void GameplayChangersSubstate_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_6d3d9e5dfbdc81cc_144_update)
HXLINE( 145)		if (::backend::Controls_obj::instance->get_UI_UP_P()) {
HXLINE( 147)			this->changeSelection(-1);
            		}
HXLINE( 149)		if (::backend::Controls_obj::instance->get_UI_DOWN_P()) {
HXLINE( 151)			this->changeSelection(1);
            		}
HXLINE( 154)		if (::backend::Controls_obj::instance->get_BACK()) {
HXLINE( 155)			this->close();
HXLINE( 156)			::backend::ClientPrefs_obj::saveSettings();
HXLINE( 157)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 157)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
            		}
HXLINE( 160)		if ((this->nextAccept <= 0)) {
HXLINE( 162)			bool usesCheckbox = true;
HXLINE( 163)			if ((this->curOption->get_type() != HX_("bool",2a,84,1b,41))) {
HXLINE( 165)				usesCheckbox = false;
            			}
HXLINE( 168)			if (usesCheckbox) {
HXLINE( 170)				if (::backend::Controls_obj::instance->get_ACCEPT()) {
HXLINE( 172)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 172)					_hx_tmp->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 173)					 ::substates::GameplayOption _hx_tmp1 = this->curOption;
HXDLIN( 173)					 ::Dynamic _hx_tmp2;
HXDLIN( 173)					if (::hx::IsEq( this->curOption->getValue(),true )) {
HXLINE( 173)						_hx_tmp2 = false;
            					}
            					else {
HXLINE( 173)						_hx_tmp2 = true;
            					}
HXDLIN( 173)					_hx_tmp1->setValue(_hx_tmp2);
HXLINE( 174)					this->curOption->change();
HXLINE( 175)					this->reloadCheckboxes();
            				}
            			}
            			else {
HXLINE( 178)				bool _hx_tmp;
HXDLIN( 178)				if (!(::backend::Controls_obj::instance->get_UI_LEFT())) {
HXLINE( 178)					_hx_tmp = ::backend::Controls_obj::instance->get_UI_RIGHT();
            				}
            				else {
HXLINE( 178)					_hx_tmp = true;
            				}
HXDLIN( 178)				if (_hx_tmp) {
HXLINE( 179)					bool pressed;
HXDLIN( 179)					if (!(::backend::Controls_obj::instance->get_UI_LEFT_P())) {
HXLINE( 179)						pressed = ::backend::Controls_obj::instance->get_UI_RIGHT_P();
            					}
            					else {
HXLINE( 179)						pressed = true;
            					}
HXLINE( 180)					bool _hx_tmp;
HXDLIN( 180)					if (!((this->holdTime > ((Float)0.5)))) {
HXLINE( 180)						_hx_tmp = pressed;
            					}
            					else {
HXLINE( 180)						_hx_tmp = true;
            					}
HXDLIN( 180)					if (_hx_tmp) {
HXLINE( 181)						if (pressed) {
HXLINE( 182)							 ::Dynamic add = null();
HXLINE( 183)							if ((this->curOption->get_type() != HX_("string",d1,28,30,11))) {
HXLINE( 184)								if (::backend::Controls_obj::instance->get_UI_LEFT()) {
HXLINE( 184)									add = -(this->curOption->changeValue);
            								}
            								else {
HXLINE( 184)									add = this->curOption->changeValue;
            								}
            							}
HXLINE( 187)							::String _hx_switch_0 = this->curOption->get_type();
            							if (  (_hx_switch_0==HX_("float",9c,c5,96,02)) ||  (_hx_switch_0==HX_("int",ef,0c,50,00)) ||  (_hx_switch_0==HX_("percent",c5,aa,da,78)) ){
HXLINE( 190)								this->holdValue = ( (Float)((this->curOption->getValue() + add)) );
HXLINE( 191)								if (::hx::IsLess( this->holdValue,this->curOption->minValue )) {
HXLINE( 191)									this->holdValue = ( (Float)(this->curOption->minValue) );
            								}
            								else {
HXLINE( 192)									if (::hx::IsGreater( this->holdValue,this->curOption->maxValue )) {
HXLINE( 192)										this->holdValue = ( (Float)(this->curOption->maxValue) );
            									}
            								}
HXLINE( 194)								::String _hx_switch_1 = this->curOption->get_type();
            								if (  (_hx_switch_1==HX_("int",ef,0c,50,00)) ){
HXLINE( 197)									this->holdValue = ( (Float)(::Math_obj::round(this->holdValue)) );
HXLINE( 198)									this->curOption->setValue(this->holdValue);
HXLINE( 196)									goto _hx_goto_7;
            								}
            								if (  (_hx_switch_1==HX_("float",9c,c5,96,02)) ||  (_hx_switch_1==HX_("percent",c5,aa,da,78)) ){
HXLINE( 201)									this->holdValue = ::flixel::math::FlxMath_obj::roundDecimal(this->holdValue,this->curOption->decimals);
HXLINE( 202)									this->curOption->setValue(this->holdValue);
HXLINE( 200)									goto _hx_goto_7;
            								}
            								_hx_goto_7:;
HXLINE( 189)								goto _hx_goto_6;
            							}
            							if (  (_hx_switch_0==HX_("string",d1,28,30,11)) ){
HXLINE( 206)								int num = this->curOption->curOption;
HXLINE( 207)								if (::backend::Controls_obj::instance->get_UI_LEFT_P()) {
HXLINE( 207)									num = (num - 1);
            								}
            								else {
HXLINE( 208)									num = (num + 1);
            								}
HXLINE( 210)								if ((num < 0)) {
HXLINE( 211)									num = (this->curOption->options->length - 1);
            								}
            								else {
HXLINE( 212)									if ((num >= this->curOption->options->length)) {
HXLINE( 213)										num = 0;
            									}
            								}
HXLINE( 216)								this->curOption->curOption = num;
HXLINE( 217)								this->curOption->setValue(this->curOption->options->__get(num));
HXLINE( 219)								if ((this->curOption->name == HX_("Scroll Type",ad,1f,97,3f))) {
HXLINE( 221)									 ::substates::GameplayOption oOption = this->getOptionByName(HX_("Scroll Speed",34,bf,42,cb));
HXLINE( 222)									if (::hx::IsNotNull( oOption )) {
HXLINE( 224)										if (::hx::IsEq( this->curOption->getValue(),HX_("constant",64,c1,9d,a5) )) {
HXLINE( 226)											oOption->displayFormat = HX_("%v",b1,20,00,00);
HXLINE( 227)											oOption->maxValue = 6;
            										}
            										else {
HXLINE( 231)											oOption->displayFormat = HX_("%vX",87,7a,1c,00);
HXLINE( 232)											oOption->maxValue = 3;
HXLINE( 233)											if (::hx::IsGreater( oOption->getValue(),3 )) {
HXLINE( 233)												oOption->setValue(3);
            											}
            										}
HXLINE( 235)										this->updateTextFrom(oOption);
            									}
            								}
HXLINE( 205)								goto _hx_goto_6;
            							}
            							_hx_goto_6:;
HXLINE( 240)							this->updateTextFrom(this->curOption);
HXLINE( 241)							this->curOption->change();
HXLINE( 242)							 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 242)							_hx_tmp->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            						}
            						else {
HXLINE( 243)							if ((this->curOption->get_type() != HX_("string",d1,28,30,11))) {
HXLINE( 244)								 ::Dynamic _hx_tmp = this->curOption->minValue;
HXDLIN( 244)								 ::Dynamic _hx_tmp1 = this->curOption->maxValue;
HXDLIN( 244)								Float _hx_tmp2 = this->holdValue;
HXDLIN( 244)								Float _hx_tmp3 = (this->curOption->scrollSpeed * elapsed);
HXDLIN( 244)								int _hx_tmp4;
HXDLIN( 244)								if (::backend::Controls_obj::instance->get_UI_LEFT()) {
HXLINE( 244)									_hx_tmp4 = -1;
            								}
            								else {
HXLINE( 244)									_hx_tmp4 = 1;
            								}
HXDLIN( 244)								this->holdValue = ::Math_obj::max(( (Float)(_hx_tmp) ),::Math_obj::min(( (Float)(_hx_tmp1) ),(_hx_tmp2 + (_hx_tmp3 * ( (Float)(_hx_tmp4) )))));
HXLINE( 246)								::String _hx_switch_2 = this->curOption->get_type();
            								if (  (_hx_switch_2==HX_("int",ef,0c,50,00)) ){
HXLINE( 249)									this->curOption->setValue(::Math_obj::round(this->holdValue));
HXDLIN( 249)									goto _hx_goto_8;
            								}
            								if (  (_hx_switch_2==HX_("float",9c,c5,96,02)) ||  (_hx_switch_2==HX_("percent",c5,aa,da,78)) ){
HXLINE( 252)									Float blah = ::Math_obj::max(( (Float)(this->curOption->minValue) ),::Math_obj::min(( (Float)(this->curOption->maxValue) ),(( (Float)((this->holdValue + this->curOption->changeValue)) ) - ::hx::Mod(this->holdValue,this->curOption->changeValue))));
HXLINE( 253)									 ::substates::GameplayOption _hx_tmp = this->curOption;
HXDLIN( 253)									_hx_tmp->setValue(::flixel::math::FlxMath_obj::roundDecimal(blah,this->curOption->decimals));
HXLINE( 251)									goto _hx_goto_8;
            								}
            								_hx_goto_8:;
HXLINE( 255)								this->updateTextFrom(this->curOption);
HXLINE( 256)								this->curOption->change();
            							}
            						}
            					}
HXLINE( 260)					if ((this->curOption->get_type() != HX_("string",d1,28,30,11))) {
HXLINE( 261)						 ::substates::GameplayChangersSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)						_hx_tmp->holdTime = (_hx_tmp->holdTime + elapsed);
            					}
            				}
            				else {
HXLINE( 263)					bool _hx_tmp;
HXDLIN( 263)					if (!(::backend::Controls_obj::instance->get_UI_LEFT_R())) {
HXLINE( 263)						_hx_tmp = ::backend::Controls_obj::instance->get_UI_RIGHT_R();
            					}
            					else {
HXLINE( 263)						_hx_tmp = true;
            					}
HXDLIN( 263)					if (_hx_tmp) {
HXLINE( 264)						this->clearHold();
            					}
            				}
            			}
HXLINE( 268)			if (::backend::Controls_obj::instance->get_RESET()) {
HXLINE( 270)				{
HXLINE( 270)					int _g = 0;
HXDLIN( 270)					int _g1 = this->optionsArray->get_length();
HXDLIN( 270)					while((_g < _g1)){
HXLINE( 270)						_g = (_g + 1);
HXDLIN( 270)						int i = (_g - 1);
HXLINE( 272)						 ::substates::GameplayOption leOption = ( ( ::substates::GameplayOption)(this->optionsArray->__get(i)) );
HXLINE( 273)						leOption->setValue(leOption->defaultValue);
HXLINE( 274)						if ((leOption->get_type() != HX_("bool",2a,84,1b,41))) {
HXLINE( 276)							if ((leOption->get_type() == HX_("string",d1,28,30,11))) {
HXLINE( 278)								::Array< ::String > leOption1 = leOption->options;
HXDLIN( 278)								leOption->curOption = leOption1->indexOf(leOption->getValue(),null());
            							}
HXLINE( 280)							this->updateTextFrom(leOption);
            						}
HXLINE( 283)						if ((leOption->name == HX_("Scroll Speed",34,bf,42,cb))) {
HXLINE( 285)							leOption->displayFormat = HX_("%vX",87,7a,1c,00);
HXLINE( 286)							leOption->maxValue = 3;
HXLINE( 287)							if (::hx::IsGreater( leOption->getValue(),3 )) {
HXLINE( 289)								leOption->setValue(3);
            							}
HXLINE( 291)							this->updateTextFrom(leOption);
            						}
HXLINE( 293)						leOption->change();
            					}
            				}
HXLINE( 295)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 295)				_hx_tmp->play(::backend::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 296)				this->reloadCheckboxes();
            			}
            		}
HXLINE( 300)		if ((this->nextAccept > 0)) {
HXLINE( 301)			 ::substates::GameplayChangersSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)			_hx_tmp->nextAccept = (_hx_tmp->nextAccept - 1);
            		}
HXLINE( 303)		this->super::update(elapsed);
            	}


void GameplayChangersSubstate_obj::updateTextFrom( ::substates::GameplayOption option){
            	HX_STACKFRAME(&_hx_pos_6d3d9e5dfbdc81cc_306_updateTextFrom)
HXLINE( 307)		::String text = option->displayFormat;
HXLINE( 308)		 ::Dynamic val = option->getValue();
HXLINE( 309)		if ((option->get_type() == HX_("percent",c5,aa,da,78))) {
HXLINE( 309)			val = (val * 100);
            		}
HXLINE( 310)		 ::Dynamic def = option->defaultValue;
HXLINE( 311)		option->set_text(::StringTools_obj::replace(::StringTools_obj::replace(text,HX_("%v",b1,20,00,00),( (::String)(val) )),HX_("%d",9f,20,00,00),( (::String)(def) )));
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameplayChangersSubstate_obj,updateTextFrom,(void))

void GameplayChangersSubstate_obj::clearHold(){
            	HX_STACKFRAME(&_hx_pos_6d3d9e5dfbdc81cc_315_clearHold)
HXLINE( 316)		if ((this->holdTime > ((Float)0.5))) {
HXLINE( 317)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 317)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            		}
HXLINE( 319)		this->holdTime = ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameplayChangersSubstate_obj,clearHold,(void))

void GameplayChangersSubstate_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_6d3d9e5dfbdc81cc_323_changeSelection)
HXLINE( 324)		 ::substates::GameplayChangersSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 324)		_hx_tmp->curSelected = (_hx_tmp->curSelected + change);
HXLINE( 325)		if ((this->curSelected < 0)) {
HXLINE( 326)			this->curSelected = (this->optionsArray->get_length() - 1);
            		}
HXLINE( 327)		if ((this->curSelected >= this->optionsArray->get_length())) {
HXLINE( 328)			this->curSelected = 0;
            		}
HXLINE( 330)		int bullShit = 0;
HXLINE( 332)		{
HXLINE( 332)			int _g = 0;
HXDLIN( 332)			::Array< ::Dynamic> _g1 = this->grpOptions->members;
HXDLIN( 332)			while((_g < _g1->length)){
HXLINE( 332)				 ::objects::Alphabet item = _g1->__get(_g).StaticCast<  ::objects::Alphabet >();
HXDLIN( 332)				_g = (_g + 1);
HXLINE( 333)				item->targetY = (bullShit - this->curSelected);
HXLINE( 334)				bullShit = (bullShit + 1);
HXLINE( 336)				item->set_alpha(((Float)0.6));
HXLINE( 337)				if ((item->targetY == 0)) {
HXLINE( 338)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 341)		{
HXLINE( 341)			 ::Dynamic filter = null();
HXDLIN( 341)			 ::flixel::group::FlxTypedGroupIterator text =  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->grpTexts->members,filter);
HXDLIN( 341)			while(text->hasNext()){
HXLINE( 341)				 ::objects::AttachedText text1 = text->next().StaticCast<  ::objects::AttachedText >();
HXLINE( 342)				text1->set_alpha(((Float)0.6));
HXLINE( 343)				if ((text1->ID == this->curSelected)) {
HXLINE( 344)					text1->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 347)		this->curOption = ( ( ::substates::GameplayOption)(this->optionsArray->__get(this->curSelected)) );
HXLINE( 348)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 348)		_hx_tmp1->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameplayChangersSubstate_obj,changeSelection,(void))

void GameplayChangersSubstate_obj::reloadCheckboxes(){
            	HX_GC_STACKFRAME(&_hx_pos_6d3d9e5dfbdc81cc_352_reloadCheckboxes)
HXDLIN( 352)		 ::Dynamic filter = null();
HXDLIN( 352)		 ::flixel::group::FlxTypedGroupIterator checkbox =  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->checkboxGroup->members,filter);
HXDLIN( 352)		while(checkbox->hasNext()){
HXDLIN( 352)			 ::objects::CheckboxThingie checkbox1 = checkbox->next().StaticCast<  ::objects::CheckboxThingie >();
HXLINE( 353)			checkbox1->set_daValue(::hx::IsEq( this->optionsArray->__get(checkbox1->ID)->__Field(HX_("getValue",fb,8e,8f,91),::hx::paccDynamic)(),true ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameplayChangersSubstate_obj,reloadCheckboxes,(void))


::hx::ObjectPtr< GameplayChangersSubstate_obj > GameplayChangersSubstate_obj::__new() {
	::hx::ObjectPtr< GameplayChangersSubstate_obj > __this = new GameplayChangersSubstate_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GameplayChangersSubstate_obj > GameplayChangersSubstate_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GameplayChangersSubstate_obj *__this = (GameplayChangersSubstate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameplayChangersSubstate_obj), true, "substates.GameplayChangersSubstate"));
	*(void **)__this = GameplayChangersSubstate_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GameplayChangersSubstate_obj::GameplayChangersSubstate_obj()
{
}

void GameplayChangersSubstate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameplayChangersSubstate);
	HX_MARK_MEMBER_NAME(curOption,"curOption");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(optionsArray,"optionsArray");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(checkboxGroup,"checkboxGroup");
	HX_MARK_MEMBER_NAME(grpTexts,"grpTexts");
	HX_MARK_MEMBER_NAME(nextAccept,"nextAccept");
	HX_MARK_MEMBER_NAME(holdTime,"holdTime");
	HX_MARK_MEMBER_NAME(holdValue,"holdValue");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameplayChangersSubstate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(curOption,"curOption");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(optionsArray,"optionsArray");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(checkboxGroup,"checkboxGroup");
	HX_VISIT_MEMBER_NAME(grpTexts,"grpTexts");
	HX_VISIT_MEMBER_NAME(nextAccept,"nextAccept");
	HX_VISIT_MEMBER_NAME(holdTime,"holdTime");
	HX_VISIT_MEMBER_NAME(holdValue,"holdValue");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GameplayChangersSubstate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpTexts") ) { return ::hx::Val( grpTexts ); }
		if (HX_FIELD_EQ(inName,"holdTime") ) { return ::hx::Val( holdTime ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"curOption") ) { return ::hx::Val( curOption ); }
		if (HX_FIELD_EQ(inName,"holdValue") ) { return ::hx::Val( holdValue ); }
		if (HX_FIELD_EQ(inName,"clearHold") ) { return ::hx::Val( clearHold_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		if (HX_FIELD_EQ(inName,"getOptions") ) { return ::hx::Val( getOptions_dyn() ); }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { return ::hx::Val( nextAccept ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"optionsArray") ) { return ::hx::Val( optionsArray ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkboxGroup") ) { return ::hx::Val( checkboxGroup ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateTextFrom") ) { return ::hx::Val( updateTextFrom_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getOptionByName") ) { return ::hx::Val( getOptionByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"reloadCheckboxes") ) { return ::hx::Val( reloadCheckboxes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GameplayChangersSubstate_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"grpTexts") ) { grpTexts=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdTime") ) { holdTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"curOption") ) { curOption=inValue.Cast<  ::substates::GameplayOption >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdValue") ) { holdValue=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { nextAccept=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"optionsArray") ) { optionsArray=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkboxGroup") ) { checkboxGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameplayChangersSubstate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curOption",15,ed,07,9c));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("optionsArray",5b,b5,f1,e8));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("checkboxGroup",fc,3d,bc,23));
	outFields->push(HX_("grpTexts",01,f1,99,f0));
	outFields->push(HX_("nextAccept",5b,44,38,c0));
	outFields->push(HX_("holdTime",ec,cc,bf,3e));
	outFields->push(HX_("holdValue",b2,41,96,ca));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GameplayChangersSubstate_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::substates::GameplayOption */ ,(int)offsetof(GameplayChangersSubstate_obj,curOption),HX_("curOption",15,ed,07,9c)},
	{::hx::fsInt,(int)offsetof(GameplayChangersSubstate_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(GameplayChangersSubstate_obj,optionsArray),HX_("optionsArray",5b,b5,f1,e8)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(GameplayChangersSubstate_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(GameplayChangersSubstate_obj,checkboxGroup),HX_("checkboxGroup",fc,3d,bc,23)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(GameplayChangersSubstate_obj,grpTexts),HX_("grpTexts",01,f1,99,f0)},
	{::hx::fsInt,(int)offsetof(GameplayChangersSubstate_obj,nextAccept),HX_("nextAccept",5b,44,38,c0)},
	{::hx::fsFloat,(int)offsetof(GameplayChangersSubstate_obj,holdTime),HX_("holdTime",ec,cc,bf,3e)},
	{::hx::fsFloat,(int)offsetof(GameplayChangersSubstate_obj,holdValue),HX_("holdValue",b2,41,96,ca)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GameplayChangersSubstate_obj_sStaticStorageInfo = 0;
#endif

static ::String GameplayChangersSubstate_obj_sMemberFields[] = {
	HX_("curOption",15,ed,07,9c),
	HX_("curSelected",fb,eb,ab,32),
	HX_("optionsArray",5b,b5,f1,e8),
	HX_("grpOptions",f9,45,d8,00),
	HX_("checkboxGroup",fc,3d,bc,23),
	HX_("grpTexts",01,f1,99,f0),
	HX_("getOptions",68,b9,5f,2f),
	HX_("getOptionByName",cd,4e,f7,9a),
	HX_("nextAccept",5b,44,38,c0),
	HX_("holdTime",ec,cc,bf,3e),
	HX_("holdValue",b2,41,96,ca),
	HX_("update",09,86,05,87),
	HX_("updateTextFrom",e0,eb,e7,7b),
	HX_("clearHold",6c,b1,d3,b8),
	HX_("changeSelection",bc,98,b5,48),
	HX_("reloadCheckboxes",2a,e2,2a,45),
	::String(null()) };

::hx::Class GameplayChangersSubstate_obj::__mClass;

void GameplayChangersSubstate_obj::__register()
{
	GameplayChangersSubstate_obj _hx_dummy;
	GameplayChangersSubstate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("substates.GameplayChangersSubstate",34,d5,99,53);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GameplayChangersSubstate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GameplayChangersSubstate_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameplayChangersSubstate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameplayChangersSubstate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace substates
