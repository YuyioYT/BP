#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_backend_Controls
#include <backend/Controls.h>
#endif
#ifndef INCLUDED_backend_CustomFadeTransition
#include <backend/CustomFadeTransition.h>
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
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ccbbcb95e8afd406_7_new,"backend.MusicBeatState","new",0x60d8b782,"backend.MusicBeatState.new","backend/MusicBeatState.hx",7,0x6b381d0d)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbbcb95e8afd406_20_get_controls,"backend.MusicBeatState","get_controls",0x17e05f1d,"backend.MusicBeatState.get_controls","backend/MusicBeatState.hx",20,0x6b381d0d)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbbcb95e8afd406_25_create,"backend.MusicBeatState","create",0x0cce211a,"backend.MusicBeatState.create","backend/MusicBeatState.hx",25,0x6b381d0d)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbbcb95e8afd406_66_update,"backend.MusicBeatState","update",0x17c44027,"backend.MusicBeatState.update","backend/MusicBeatState.hx",66,0x6b381d0d)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbbcb95e8afd406_41_update,"backend.MusicBeatState","update",0x17c44027,"backend.MusicBeatState.update","backend/MusicBeatState.hx",41,0x6b381d0d)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbbcb95e8afd406_73_updateSection,"backend.MusicBeatState","updateSection",0xa71c507e,"backend.MusicBeatState.updateSection","backend/MusicBeatState.hx",73,0x6b381d0d)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbbcb95e8afd406_85_rollbackSection,"backend.MusicBeatState","rollbackSection",0xce768443,"backend.MusicBeatState.rollbackSection","backend/MusicBeatState.hx",85,0x6b381d0d)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbbcb95e8afd406_106_updateBeat,"backend.MusicBeatState","updateBeat",0x8f71ed3d,"backend.MusicBeatState.updateBeat","backend/MusicBeatState.hx",106,0x6b381d0d)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbbcb95e8afd406_112_updateCurStep,"backend.MusicBeatState","updateCurStep",0x00b5a385,"backend.MusicBeatState.updateCurStep","backend/MusicBeatState.hx",112,0x6b381d0d)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbbcb95e8afd406_158_stepHit,"backend.MusicBeatState","stepHit",0x9765ce89,"backend.MusicBeatState.stepHit","backend/MusicBeatState.hx",158,0x6b381d0d)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbbcb95e8afd406_157_stepHit,"backend.MusicBeatState","stepHit",0x9765ce89,"backend.MusicBeatState.stepHit","backend/MusicBeatState.hx",157,0x6b381d0d)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbbcb95e8afd406_172_beatHit,"backend.MusicBeatState","beatHit",0x8a290a9f,"backend.MusicBeatState.beatHit","backend/MusicBeatState.hx",172,0x6b381d0d)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbbcb95e8afd406_170_beatHit,"backend.MusicBeatState","beatHit",0x8a290a9f,"backend.MusicBeatState.beatHit","backend/MusicBeatState.hx",170,0x6b381d0d)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbbcb95e8afd406_182_sectionHit,"backend.MusicBeatState","sectionHit",0x5477168c,"backend.MusicBeatState.sectionHit","backend/MusicBeatState.hx",182,0x6b381d0d)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbbcb95e8afd406_180_sectionHit,"backend.MusicBeatState","sectionHit",0x5477168c,"backend.MusicBeatState.sectionHit","backend/MusicBeatState.hx",180,0x6b381d0d)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbbcb95e8afd406_190_stagesFunc,"backend.MusicBeatState","stagesFunc",0xbb7ed2f7,"backend.MusicBeatState.stagesFunc","backend/MusicBeatState.hx",190,0x6b381d0d)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbbcb95e8afd406_196_getBeatsOnSection,"backend.MusicBeatState","getBeatsOnSection",0x9af01661,"backend.MusicBeatState.getBeatsOnSection","backend/MusicBeatState.hx",196,0x6b381d0d)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbbcb95e8afd406_120_switchState,"backend.MusicBeatState","switchState",0xd5dee09f,"backend.MusicBeatState.switchState","backend/MusicBeatState.hx",120,0x6b381d0d)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbbcb95e8afd406_133_resetState,"backend.MusicBeatState","resetState",0x0250cee0,"backend.MusicBeatState.resetState","backend/MusicBeatState.hx",133,0x6b381d0d)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbbcb95e8afd406_141_startTransition,"backend.MusicBeatState","startTransition",0x983e26b9,"backend.MusicBeatState.startTransition","backend/MusicBeatState.hx",141,0x6b381d0d)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbbcb95e8afd406_147_startTransition,"backend.MusicBeatState","startTransition",0x983e26b9,"backend.MusicBeatState.startTransition","backend/MusicBeatState.hx",147,0x6b381d0d)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbbcb95e8afd406_149_startTransition,"backend.MusicBeatState","startTransition",0x983e26b9,"backend.MusicBeatState.startTransition","backend/MusicBeatState.hx",149,0x6b381d0d)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbbcb95e8afd406_153_getState,"backend.MusicBeatState","getState",0x2d5a8339,"backend.MusicBeatState.getState","backend/MusicBeatState.hx",153,0x6b381d0d)
HX_LOCAL_STACK_FRAME(_hx_pos_ccbbcb95e8afd406_39_boot,"backend.MusicBeatState","boot",0x54e0dad0,"backend.MusicBeatState.boot","backend/MusicBeatState.hx",39,0x6b381d0d)
namespace backend{

void MusicBeatState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_ccbbcb95e8afd406_7_new)
HXLINE( 168)		this->stages = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  16)		this->curDecBeat = ((Float)0);
HXLINE(  15)		this->curDecStep = ((Float)0);
HXLINE(  13)		this->curBeat = 0;
HXLINE(  12)		this->curStep = 0;
HXLINE(  10)		this->stepsToDo = 0;
HXLINE(   9)		this->curSection = 0;
HXLINE(   7)		super::__construct(TransIn,TransOut);
            	}

Dynamic MusicBeatState_obj::__CreateEmpty() { return new MusicBeatState_obj; }

void *MusicBeatState_obj::_hx_vtable = 0;

Dynamic MusicBeatState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MusicBeatState_obj > _hx_result = new MusicBeatState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MusicBeatState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x53aaab8a) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x53aaab8a;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

 ::backend::Controls MusicBeatState_obj::get_controls(){
            	HX_STACKFRAME(&_hx_pos_ccbbcb95e8afd406_20_get_controls)
HXDLIN(  20)		return ::backend::Controls_obj::instance;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,get_controls,return )

void MusicBeatState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_ccbbcb95e8afd406_25_create)
HXLINE(  26)		::backend::MusicBeatState_obj::camBeat = ::flixel::FlxG_obj::camera;
HXLINE(  27)		bool skip = ::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransOut;
HXLINE(  28)		::backend::Mods_obj::updatedOnState = false;
HXLINE(  30)		this->super::create();
HXLINE(  32)		if (!(skip)) {
HXLINE(  33)			this->openSubState( ::backend::CustomFadeTransition_obj::__alloc( HX_CTX ,((Float)0.7),true));
            		}
HXLINE(  35)		::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransOut = false;
HXLINE(  36)		::backend::MusicBeatState_obj::timePassedOnState = ( (Float)(0) );
            	}


void MusicBeatState_obj::update(Float elapsed){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,Float,elapsed) HXARGC(1)
            		void _hx_run( ::backend::BaseStage stage){
            			HX_STACKFRAME(&_hx_pos_ccbbcb95e8afd406_66_update)
HXLINE(  66)			stage->update(elapsed);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_ccbbcb95e8afd406_41_update)
HXLINE(  43)		int oldStep = this->curStep;
HXLINE(  44)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::backend::MusicBeatState >();
HXDLIN(  44)		::backend::MusicBeatState_obj::timePassedOnState = (::backend::MusicBeatState_obj::timePassedOnState + elapsed);
HXLINE(  46)		this->updateCurStep();
HXLINE(  47)		this->updateBeat();
HXLINE(  49)		if ((oldStep != this->curStep)) {
HXLINE(  51)			if ((this->curStep > 0)) {
HXLINE(  52)				this->stepHit();
            			}
HXLINE(  54)			if (::hx::IsNotNull( ::states::PlayState_obj::SONG )) {
HXLINE(  56)				if ((oldStep < this->curStep)) {
HXLINE(  57)					this->updateSection();
            				}
            				else {
HXLINE(  59)					this->rollbackSection();
            				}
            			}
            		}
HXLINE(  63)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data )) {
HXLINE(  63)			::flixel::FlxG_obj::save->data->__SetField(HX_("fullscreen",3b,3a,b4,f9),::flixel::FlxG_obj::get_fullscreen(),::hx::paccDynamic);
            		}
HXLINE(  65)		this->stagesFunc( ::Dynamic(new _hx_Closure_0(elapsed)));
HXLINE(  69)		this->super::update(elapsed);
            	}


void MusicBeatState_obj::updateSection(){
            	HX_STACKFRAME(&_hx_pos_ccbbcb95e8afd406_73_updateSection)
HXLINE(  74)		if ((this->stepsToDo < 1)) {
HXLINE(  74)			this->stepsToDo = ::Math_obj::round((( (Float)(this->getBeatsOnSection()) ) * ( (Float)(4) )));
            		}
HXLINE(  75)		while((this->curStep >= this->stepsToDo)){
HXLINE(  77)			this->curSection++;
HXLINE(  78)			Float beats = ( (Float)(this->getBeatsOnSection()) );
HXLINE(  79)			 ::backend::MusicBeatState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  79)			_hx_tmp->stepsToDo = (_hx_tmp->stepsToDo + ::Math_obj::round((beats * ( (Float)(4) ))));
HXLINE(  80)			this->sectionHit();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,updateSection,(void))

void MusicBeatState_obj::rollbackSection(){
            	HX_STACKFRAME(&_hx_pos_ccbbcb95e8afd406_85_rollbackSection)
HXLINE(  86)		if ((this->curStep < 0)) {
HXLINE(  86)			return;
            		}
HXLINE(  88)		int lastSection = this->curSection;
HXLINE(  89)		this->curSection = 0;
HXLINE(  90)		this->stepsToDo = 0;
HXLINE(  91)		{
HXLINE(  91)			int _g = 0;
HXDLIN(  91)			int _g1 = ( (::Array< ::Dynamic>)(::states::PlayState_obj::SONG->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic)) )->length;
HXDLIN(  91)			while((_g < _g1)){
HXLINE(  91)				_g = (_g + 1);
HXDLIN(  91)				int i = (_g - 1);
HXLINE(  93)				if (::hx::IsNotNull(  ::Dynamic(::states::PlayState_obj::SONG->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(i) )) {
HXLINE(  95)					 ::backend::MusicBeatState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  95)					int _hx_tmp1 = _hx_tmp->stepsToDo;
HXDLIN(  95)					_hx_tmp->stepsToDo = (_hx_tmp1 + ::Math_obj::round((( (Float)(this->getBeatsOnSection()) ) * ( (Float)(4) ))));
HXLINE(  96)					if ((this->stepsToDo > this->curStep)) {
HXLINE(  96)						goto _hx_goto_7;
            					}
HXLINE(  98)					this->curSection++;
            				}
            			}
            			_hx_goto_7:;
            		}
HXLINE( 102)		if ((this->curSection > lastSection)) {
HXLINE( 102)			this->sectionHit();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,rollbackSection,(void))

void MusicBeatState_obj::updateBeat(){
            	HX_STACKFRAME(&_hx_pos_ccbbcb95e8afd406_106_updateBeat)
HXLINE( 107)		this->curBeat = ::Math_obj::floor((( (Float)(this->curStep) ) / ( (Float)(4) )));
HXLINE( 108)		this->curDecBeat = (this->curDecStep / ( (Float)(4) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,updateBeat,(void))

void MusicBeatState_obj::updateCurStep(){
            	HX_STACKFRAME(&_hx_pos_ccbbcb95e8afd406_112_updateCurStep)
HXLINE( 113)		 ::Dynamic lastChange = ::backend::Conductor_obj::getBPMFromSeconds(::backend::Conductor_obj::songPosition);
HXLINE( 115)		Float shit = (((::backend::Conductor_obj::songPosition - ( (Float)(::backend::ClientPrefs_obj::data->noteOffset) )) - ( (Float)(lastChange->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic)) )) / ( (Float)(lastChange->__Field(HX_("stepCrochet",48,d7,ff,e6),::hx::paccDynamic)) ));
HXLINE( 116)		this->curDecStep = ( (Float)((lastChange->__Field(HX_("stepTime",79,75,25,a0),::hx::paccDynamic) + shit)) );
HXLINE( 117)		this->curStep = ( (int)((lastChange->__Field(HX_("stepTime",79,75,25,a0),::hx::paccDynamic) + ::Math_obj::floor(shit))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,updateCurStep,(void))

void MusicBeatState_obj::stepHit(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::backend::MusicBeatState,_gthis) HXARGC(1)
            		void _hx_run( ::backend::BaseStage stage){
            			HX_STACKFRAME(&_hx_pos_ccbbcb95e8afd406_158_stepHit)
HXLINE( 159)			stage->curStep = _gthis->curStep;
HXLINE( 160)			stage->curDecStep = _gthis->curDecStep;
HXLINE( 161)			stage->stepHit();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_ccbbcb95e8afd406_157_stepHit)
HXDLIN( 157)		 ::backend::MusicBeatState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 158)		this->stagesFunc( ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE( 164)		if ((::hx::Mod(this->curStep,4) == 0)) {
HXLINE( 165)			this->beatHit();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,stepHit,(void))

void MusicBeatState_obj::beatHit(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::backend::MusicBeatState,_gthis) HXARGC(1)
            		void _hx_run( ::backend::BaseStage stage){
            			HX_STACKFRAME(&_hx_pos_ccbbcb95e8afd406_172_beatHit)
HXLINE( 173)			stage->curBeat = _gthis->curBeat;
HXLINE( 174)			stage->curDecBeat = _gthis->curDecBeat;
HXLINE( 175)			stage->beatHit();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_ccbbcb95e8afd406_170_beatHit)
HXDLIN( 170)		 ::backend::MusicBeatState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 172)		this->stagesFunc( ::Dynamic(new _hx_Closure_0(_gthis)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,beatHit,(void))

void MusicBeatState_obj::sectionHit(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::backend::MusicBeatState,_gthis) HXARGC(1)
            		void _hx_run( ::backend::BaseStage stage){
            			HX_STACKFRAME(&_hx_pos_ccbbcb95e8afd406_182_sectionHit)
HXLINE( 183)			stage->curSection = _gthis->curSection;
HXLINE( 184)			stage->sectionHit();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_ccbbcb95e8afd406_180_sectionHit)
HXDLIN( 180)		 ::backend::MusicBeatState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 182)		this->stagesFunc( ::Dynamic(new _hx_Closure_0(_gthis)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,sectionHit,(void))

void MusicBeatState_obj::stagesFunc( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_ccbbcb95e8afd406_190_stagesFunc)
HXDLIN( 190)		int _g = 0;
HXDLIN( 190)		::Array< ::Dynamic> _g1 = this->stages;
HXDLIN( 190)		while((_g < _g1->length)){
HXDLIN( 190)			 ::backend::BaseStage stage = _g1->__get(_g).StaticCast<  ::backend::BaseStage >();
HXDLIN( 190)			_g = (_g + 1);
HXLINE( 191)			bool _hx_tmp;
HXDLIN( 191)			bool _hx_tmp1;
HXDLIN( 191)			if (::hx::IsNotNull( stage )) {
HXLINE( 191)				_hx_tmp1 = stage->exists;
            			}
            			else {
HXLINE( 191)				_hx_tmp1 = false;
            			}
HXDLIN( 191)			if (_hx_tmp1) {
HXLINE( 191)				_hx_tmp = stage->active;
            			}
            			else {
HXLINE( 191)				_hx_tmp = false;
            			}
HXDLIN( 191)			if (_hx_tmp) {
HXLINE( 192)				func(stage);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MusicBeatState_obj,stagesFunc,(void))

 ::Dynamic MusicBeatState_obj::getBeatsOnSection(){
            	HX_STACKFRAME(&_hx_pos_ccbbcb95e8afd406_196_getBeatsOnSection)
HXLINE( 197)		 ::Dynamic val = 4;
HXLINE( 198)		bool _hx_tmp;
HXDLIN( 198)		if (::hx::IsNotNull( ::states::PlayState_obj::SONG )) {
HXLINE( 198)			_hx_tmp = ::hx::IsNotNull(  ::Dynamic(::states::PlayState_obj::SONG->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(this->curSection) );
            		}
            		else {
HXLINE( 198)			_hx_tmp = false;
            		}
HXDLIN( 198)		if (_hx_tmp) {
HXLINE( 198)			val =  ::Dynamic(::states::PlayState_obj::SONG->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(this->curSection)->__Field(HX_("sectionBeats",18,52,2e,0f),::hx::paccDynamic);
            		}
HXLINE( 199)		if (::hx::IsNull( val )) {
HXLINE( 199)			return 4;
            		}
            		else {
HXLINE( 199)			return val;
            		}
HXDLIN( 199)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,getBeatsOnSection,return )

 ::flixel::FlxCamera MusicBeatState_obj::camBeat;

Float MusicBeatState_obj::timePassedOnState;

void MusicBeatState_obj::switchState( ::flixel::FlxState nextState){
            	HX_STACKFRAME(&_hx_pos_ccbbcb95e8afd406_120_switchState)
HXLINE( 121)		if (::hx::IsNull( nextState )) {
HXLINE( 121)			nextState = ::flixel::FlxG_obj::game->_state;
            		}
HXLINE( 122)		if (::hx::IsInstanceEq( nextState,::flixel::FlxG_obj::game->_state )) {
HXLINE( 124)			::backend::MusicBeatState_obj::resetState();
HXLINE( 125)			return;
            		}
HXLINE( 128)		if (::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransIn) {
HXLINE( 128)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 128)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
            		else {
HXLINE( 129)			::backend::MusicBeatState_obj::startTransition(nextState);
            		}
HXLINE( 130)		::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransIn = false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MusicBeatState_obj,switchState,(void))

void MusicBeatState_obj::resetState(){
            	HX_STACKFRAME(&_hx_pos_ccbbcb95e8afd406_133_resetState)
HXLINE( 134)		if (::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransIn) {
HXLINE( 134)			 ::flixel::FlxState nextState = ( ( ::flixel::FlxState)(::Type_obj::createInstance(::Type_obj::getClass(::flixel::FlxG_obj::game->_state),::cpp::VirtualArray_obj::__new(0))) );
HXDLIN( 134)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 134)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
            		else {
HXLINE( 135)			::backend::MusicBeatState_obj::startTransition(null());
            		}
HXLINE( 136)		::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransIn = false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,resetState,(void))

void MusicBeatState_obj::startTransition( ::flixel::FlxState nextState){
            	HX_GC_STACKFRAME(&_hx_pos_ccbbcb95e8afd406_141_startTransition)
HXDLIN( 141)		::Array< ::Dynamic> nextState1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,nextState);
HXLINE( 142)		if (::hx::IsNull( nextState1->__get(0).StaticCast<  ::flixel::FlxState >() )) {
HXLINE( 143)			nextState1[0] = ::flixel::FlxG_obj::game->_state;
            		}
HXLINE( 145)		 ::flixel::FlxState _hx_tmp = ::flixel::FlxG_obj::game->_state;
HXDLIN( 145)		_hx_tmp->openSubState( ::backend::CustomFadeTransition_obj::__alloc( HX_CTX ,((Float)0.6),false));
HXLINE( 146)		if (::hx::IsInstanceEq( nextState1->__get(0).StaticCast<  ::flixel::FlxState >(),::flixel::FlxG_obj::game->_state )) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_ccbbcb95e8afd406_147_startTransition)
HXLINE( 147)				 ::flixel::FlxState nextState = ( ( ::flixel::FlxState)(::Type_obj::createInstance(::Type_obj::getClass(::flixel::FlxG_obj::game->_state),::cpp::VirtualArray_obj::__new(0))) );
HXDLIN( 147)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 147)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 147)			::backend::CustomFadeTransition_obj::finishCallback =  ::Dynamic(new _hx_Closure_0());
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1,::Array< ::Dynamic>,nextState1) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_ccbbcb95e8afd406_149_startTransition)
HXLINE( 149)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState1->__get(0).StaticCast<  ::flixel::FlxState >())) {
HXLINE( 149)					::flixel::FlxG_obj::game->_requestedState = nextState1->__get(0).StaticCast<  ::flixel::FlxState >();
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 149)			::backend::CustomFadeTransition_obj::finishCallback =  ::Dynamic(new _hx_Closure_1(nextState1));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MusicBeatState_obj,startTransition,(void))

 ::backend::MusicBeatState MusicBeatState_obj::getState(){
            	HX_STACKFRAME(&_hx_pos_ccbbcb95e8afd406_153_getState)
HXDLIN( 153)		return ::hx::TCast<  ::backend::MusicBeatState >::cast(::flixel::FlxG_obj::game->_state);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,getState,return )


::hx::ObjectPtr< MusicBeatState_obj > MusicBeatState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< MusicBeatState_obj > __this = new MusicBeatState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< MusicBeatState_obj > MusicBeatState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	MusicBeatState_obj *__this = (MusicBeatState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MusicBeatState_obj), true, "backend.MusicBeatState"));
	*(void **)__this = MusicBeatState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

MusicBeatState_obj::MusicBeatState_obj()
{
}

void MusicBeatState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MusicBeatState);
	HX_MARK_MEMBER_NAME(curSection,"curSection");
	HX_MARK_MEMBER_NAME(stepsToDo,"stepsToDo");
	HX_MARK_MEMBER_NAME(curStep,"curStep");
	HX_MARK_MEMBER_NAME(curBeat,"curBeat");
	HX_MARK_MEMBER_NAME(curDecStep,"curDecStep");
	HX_MARK_MEMBER_NAME(curDecBeat,"curDecBeat");
	HX_MARK_MEMBER_NAME(stages,"stages");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MusicBeatState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(curSection,"curSection");
	HX_VISIT_MEMBER_NAME(stepsToDo,"stepsToDo");
	HX_VISIT_MEMBER_NAME(curStep,"curStep");
	HX_VISIT_MEMBER_NAME(curBeat,"curBeat");
	HX_VISIT_MEMBER_NAME(curDecStep,"curDecStep");
	HX_VISIT_MEMBER_NAME(curDecBeat,"curDecBeat");
	HX_VISIT_MEMBER_NAME(stages,"stages");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MusicBeatState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"stages") ) { return ::hx::Val( stages ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curStep") ) { return ::hx::Val( curStep ); }
		if (HX_FIELD_EQ(inName,"curBeat") ) { return ::hx::Val( curBeat ); }
		if (HX_FIELD_EQ(inName,"stepHit") ) { return ::hx::Val( stepHit_dyn() ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"controls") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_controls() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stepsToDo") ) { return ::hx::Val( stepsToDo ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"curSection") ) { return ::hx::Val( curSection ); }
		if (HX_FIELD_EQ(inName,"curDecStep") ) { return ::hx::Val( curDecStep ); }
		if (HX_FIELD_EQ(inName,"curDecBeat") ) { return ::hx::Val( curDecBeat ); }
		if (HX_FIELD_EQ(inName,"updateBeat") ) { return ::hx::Val( updateBeat_dyn() ); }
		if (HX_FIELD_EQ(inName,"sectionHit") ) { return ::hx::Val( sectionHit_dyn() ); }
		if (HX_FIELD_EQ(inName,"stagesFunc") ) { return ::hx::Val( stagesFunc_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_controls") ) { return ::hx::Val( get_controls_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateSection") ) { return ::hx::Val( updateSection_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateCurStep") ) { return ::hx::Val( updateCurStep_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"rollbackSection") ) { return ::hx::Val( rollbackSection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getBeatsOnSection") ) { return ::hx::Val( getBeatsOnSection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MusicBeatState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"camBeat") ) { outValue = ( camBeat ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getState") ) { outValue = getState_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resetState") ) { outValue = resetState_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"switchState") ) { outValue = switchState_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"startTransition") ) { outValue = startTransition_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"timePassedOnState") ) { outValue = ( timePassedOnState ); return true; }
	}
	return false;
}

::hx::Val MusicBeatState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"stages") ) { stages=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curStep") ) { curStep=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curBeat") ) { curBeat=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stepsToDo") ) { stepsToDo=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"curSection") ) { curSection=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curDecStep") ) { curDecStep=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curDecBeat") ) { curDecBeat=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MusicBeatState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"camBeat") ) { camBeat=ioValue.Cast<  ::flixel::FlxCamera >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"timePassedOnState") ) { timePassedOnState=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

void MusicBeatState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curSection",45,58,c1,68));
	outFields->push(HX_("stepsToDo",2d,3d,2d,4c));
	outFields->push(HX_("curStep",ec,58,71,b7));
	outFields->push(HX_("curBeat",16,53,29,ac));
	outFields->push(HX_("curDecStep",8e,a8,37,e3));
	outFields->push(HX_("curDecBeat",b8,a2,ef,d7));
	outFields->push(HX_("controls",76,86,bc,37));
	outFields->push(HX_("stages",f5,fb,f1,05));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MusicBeatState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(MusicBeatState_obj,curSection),HX_("curSection",45,58,c1,68)},
	{::hx::fsInt,(int)offsetof(MusicBeatState_obj,stepsToDo),HX_("stepsToDo",2d,3d,2d,4c)},
	{::hx::fsInt,(int)offsetof(MusicBeatState_obj,curStep),HX_("curStep",ec,58,71,b7)},
	{::hx::fsInt,(int)offsetof(MusicBeatState_obj,curBeat),HX_("curBeat",16,53,29,ac)},
	{::hx::fsFloat,(int)offsetof(MusicBeatState_obj,curDecStep),HX_("curDecStep",8e,a8,37,e3)},
	{::hx::fsFloat,(int)offsetof(MusicBeatState_obj,curDecBeat),HX_("curDecBeat",b8,a2,ef,d7)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(MusicBeatState_obj,stages),HX_("stages",f5,fb,f1,05)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MusicBeatState_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxCamera */ ,(void *) &MusicBeatState_obj::camBeat,HX_("camBeat",25,35,05,cc)},
	{::hx::fsFloat,(void *) &MusicBeatState_obj::timePassedOnState,HX_("timePassedOnState",95,f6,5b,ba)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MusicBeatState_obj_sMemberFields[] = {
	HX_("curSection",45,58,c1,68),
	HX_("stepsToDo",2d,3d,2d,4c),
	HX_("curStep",ec,58,71,b7),
	HX_("curBeat",16,53,29,ac),
	HX_("curDecStep",8e,a8,37,e3),
	HX_("curDecBeat",b8,a2,ef,d7),
	HX_("get_controls",7f,3a,d6,ec),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("updateSection",dc,6a,46,29),
	HX_("rollbackSection",21,72,22,c3),
	HX_("updateBeat",1f,cc,c8,f9),
	HX_("updateCurStep",e3,bd,df,82),
	HX_("stepHit",67,ae,41,81),
	HX_("stages",f5,fb,f1,05),
	HX_("beatHit",7d,ea,04,74),
	HX_("sectionHit",6e,f5,cd,be),
	HX_("stagesFunc",d9,b1,d5,25),
	HX_("getBeatsOnSection",bf,b7,d9,04),
	::String(null()) };

static void MusicBeatState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MusicBeatState_obj::camBeat,"camBeat");
	HX_MARK_MEMBER_NAME(MusicBeatState_obj::timePassedOnState,"timePassedOnState");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MusicBeatState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MusicBeatState_obj::camBeat,"camBeat");
	HX_VISIT_MEMBER_NAME(MusicBeatState_obj::timePassedOnState,"timePassedOnState");
};

#endif

::hx::Class MusicBeatState_obj::__mClass;

static ::String MusicBeatState_obj_sStaticFields[] = {
	HX_("camBeat",25,35,05,cc),
	HX_("timePassedOnState",95,f6,5b,ba),
	HX_("switchState",7d,07,8b,77),
	HX_("resetState",c2,ad,a7,6c),
	HX_("startTransition",97,14,ea,8c),
	HX_("getState",9b,85,e2,e3),
	::String(null())
};

void MusicBeatState_obj::__register()
{
	MusicBeatState_obj _hx_dummy;
	MusicBeatState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.MusicBeatState",90,8e,0a,25);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MusicBeatState_obj::__GetStatic;
	__mClass->mSetStaticField = &MusicBeatState_obj::__SetStatic;
	__mClass->mMarkFunc = MusicBeatState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MusicBeatState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MusicBeatState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MusicBeatState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MusicBeatState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MusicBeatState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MusicBeatState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MusicBeatState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ccbbcb95e8afd406_39_boot)
HXDLIN(  39)		timePassedOnState = ((Float)0);
            	}
}

} // end namespace backend
