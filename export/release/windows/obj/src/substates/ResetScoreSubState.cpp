#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_backend_Controls
#include <backend/Controls.h>
#endif
#ifndef INCLUDED_backend_Difficulty
#include <backend/Difficulty.h>
#endif
#ifndef INCLUDED_backend_Highscore
#include <backend/Highscore.h>
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
#ifndef INCLUDED_backend_WeekData
#include <backend/WeekData.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_objects_Alphabet
#include <objects/Alphabet.h>
#endif
#ifndef INCLUDED_objects_HealthIcon
#include <objects/HealthIcon.h>
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
#ifndef INCLUDED_substates_ResetScoreSubState
#include <substates/ResetScoreSubState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_15a8e42ba259ddcf_9_new,"substates.ResetScoreSubState","new",0x779b25d2,"substates.ResetScoreSubState.new","substates/ResetScoreSubState.hx",9,0xb432443d)
HX_LOCAL_STACK_FRAME(_hx_pos_15a8e42ba259ddcf_76_update,"substates.ResetScoreSubState","update",0x109ba3d7,"substates.ResetScoreSubState.update","substates/ResetScoreSubState.hx",76,0xb432443d)
HX_LOCAL_STACK_FRAME(_hx_pos_15a8e42ba259ddcf_108_updateOptions,"substates.ResetScoreSubState","updateOptions",0xde1bf047,"substates.ResetScoreSubState.updateOptions","substates/ResetScoreSubState.hx",108,0xb432443d)
static const Float _hx_array_data_73c394e0_4[] = {
	0.75,(Float)1,
};
static const Float _hx_array_data_73c394e0_5[] = {
	0.6,1.25,
};
namespace substates{

void ResetScoreSubState_obj::__construct(::String song,int difficulty,::String character,::hx::Null< int >  __o_week){
            		int week = __o_week.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_15a8e42ba259ddcf_9_new)
HXLINE(  14)		this->onYes = false;
HXLINE(  12)		this->alphabetArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  25)		this->song = song;
HXLINE(  26)		this->difficulty = difficulty;
HXLINE(  27)		this->week = week;
HXLINE(  29)		super::__construct();
HXLINE(  31)		::String name = song;
HXLINE(  32)		if ((week > -1)) {
HXLINE(  33)			name = ( ( ::backend::WeekData)(::backend::WeekData_obj::weeksLoaded->get(::backend::WeekData_obj::weeksList->__get(week))) )->weekName;
            		}
HXLINE(  35)		 ::Dynamic name1;
HXDLIN(  35)		if (::hx::IsNull( difficulty )) {
HXLINE(  35)			name1 = ::states::PlayState_obj::storyDifficulty;
            		}
            		else {
HXLINE(  35)			name1 = difficulty;
            		}
HXDLIN(  35)		name = (name + ((HX_(" (",08,1c,00,00) + ::backend::Difficulty_obj::list->__get(( (int)(name1) ))) + HX_(")?",f6,23,00,00)));
HXLINE(  37)		this->bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  38)		this->bg->set_alpha(( (Float)(0) ));
HXLINE(  39)		{
HXLINE(  39)			 ::flixel::math::FlxBasePoint this1 = this->bg->scrollFactor;
HXDLIN(  39)			this1->set_x(( (Float)(0) ));
HXDLIN(  39)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  40)		this->add(this->bg);
HXLINE(  42)		Float tooLong;
HXDLIN(  42)		if ((name.length > 18)) {
HXLINE(  42)			tooLong = ((Float)0.8);
            		}
            		else {
HXLINE(  42)			tooLong = ( (Float)(1) );
            		}
HXLINE(  43)		 ::objects::Alphabet text =  ::objects::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(180) ),HX_("Reset the score of",c5,93,fa,2d),true);
HXLINE(  44)		{
HXLINE(  44)			int axes = 1;
HXDLIN(  44)			bool _hx_tmp;
HXDLIN(  44)			if ((axes != 1)) {
HXLINE(  44)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  44)				_hx_tmp = true;
            			}
HXDLIN(  44)			if (_hx_tmp) {
HXLINE(  44)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  44)				text->set_x(((( (Float)(_hx_tmp) ) - text->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  44)			bool _hx_tmp1;
HXDLIN(  44)			if ((axes != 16)) {
HXLINE(  44)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  44)				_hx_tmp1 = true;
            			}
HXDLIN(  44)			if (_hx_tmp1) {
HXLINE(  44)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  44)				text->set_y(((( (Float)(_hx_tmp) ) - text->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  45)		this->alphabetArray->push(text);
HXLINE(  46)		text->set_alpha(( (Float)(0) ));
HXLINE(  47)		this->add(text);
HXLINE(  48)		 ::objects::Alphabet text1 =  ::objects::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),(text->y + 90),name,true);
HXLINE(  49)		text1->set_scaleX(tooLong);
HXLINE(  50)		{
HXLINE(  50)			int axes1 = 1;
HXDLIN(  50)			bool _hx_tmp2;
HXDLIN(  50)			if ((axes1 != 1)) {
HXLINE(  50)				_hx_tmp2 = (axes1 == 17);
            			}
            			else {
HXLINE(  50)				_hx_tmp2 = true;
            			}
HXDLIN(  50)			if (_hx_tmp2) {
HXLINE(  50)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  50)				text1->set_x(((( (Float)(_hx_tmp) ) - text1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  50)			bool _hx_tmp3;
HXDLIN(  50)			if ((axes1 != 16)) {
HXLINE(  50)				_hx_tmp3 = (axes1 == 17);
            			}
            			else {
HXLINE(  50)				_hx_tmp3 = true;
            			}
HXDLIN(  50)			if (_hx_tmp3) {
HXLINE(  50)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  50)				text1->set_y(((( (Float)(_hx_tmp) ) - text1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  51)		if ((week == -1)) {
HXLINE(  51)			text1->set_x((text1->x + (( (Float)(60) ) * tooLong)));
            		}
HXLINE(  52)		this->alphabetArray->push(text1);
HXLINE(  53)		text1->set_alpha(( (Float)(0) ));
HXLINE(  54)		this->add(text1);
HXLINE(  55)		if ((week == -1)) {
HXLINE(  56)			this->icon =  ::objects::HealthIcon_obj::__alloc( HX_CTX ,character,null(),null());
HXLINE(  57)			 ::objects::HealthIcon _hx_tmp = this->icon;
HXDLIN(  57)			_hx_tmp->setGraphicSize(::Std_obj::_hx_int((this->icon->get_width() * tooLong)),null());
HXLINE(  58)			this->icon->updateHitbox();
HXLINE(  59)			 ::objects::HealthIcon _hx_tmp1 = this->icon;
HXDLIN(  59)			Float text = text1->x;
HXDLIN(  59)			Float _hx_tmp2 = ((text - this->icon->get_width()) + (( (Float)(10) ) * tooLong));
HXDLIN(  59)			_hx_tmp1->setPosition(_hx_tmp2,(text1->y - ( (Float)(30) )));
HXLINE(  60)			this->icon->set_alpha(( (Float)(0) ));
HXLINE(  61)			this->add(this->icon);
            		}
HXLINE(  64)		this->yesText =  ::objects::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),(text1->y + 150),HX_("Yes",07,e1,43,00),true);
HXLINE(  65)		{
HXLINE(  65)			 ::objects::Alphabet _this = this->yesText;
HXDLIN(  65)			int axes2 = 1;
HXDLIN(  65)			bool _hx_tmp4;
HXDLIN(  65)			if ((axes2 != 1)) {
HXLINE(  65)				_hx_tmp4 = (axes2 == 17);
            			}
            			else {
HXLINE(  65)				_hx_tmp4 = true;
            			}
HXDLIN(  65)			if (_hx_tmp4) {
HXLINE(  65)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  65)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  65)			bool _hx_tmp5;
HXDLIN(  65)			if ((axes2 != 16)) {
HXLINE(  65)				_hx_tmp5 = (axes2 == 17);
            			}
            			else {
HXLINE(  65)				_hx_tmp5 = true;
            			}
HXDLIN(  65)			if (_hx_tmp5) {
HXLINE(  65)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  65)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  66)		 ::objects::Alphabet fh = this->yesText;
HXDLIN(  66)		fh->set_x((fh->x - ( (Float)(200) )));
HXLINE(  67)		this->add(this->yesText);
HXLINE(  68)		this->noText =  ::objects::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),(text1->y + 150),HX_("No",61,44,00,00),true);
HXLINE(  69)		{
HXLINE(  69)			 ::objects::Alphabet _this1 = this->noText;
HXDLIN(  69)			int axes3 = 1;
HXDLIN(  69)			bool _hx_tmp6;
HXDLIN(  69)			if ((axes3 != 1)) {
HXLINE(  69)				_hx_tmp6 = (axes3 == 17);
            			}
            			else {
HXLINE(  69)				_hx_tmp6 = true;
            			}
HXDLIN(  69)			if (_hx_tmp6) {
HXLINE(  69)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  69)				_this1->set_x(((( (Float)(_hx_tmp) ) - _this1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  69)			bool _hx_tmp7;
HXDLIN(  69)			if ((axes3 != 16)) {
HXLINE(  69)				_hx_tmp7 = (axes3 == 17);
            			}
            			else {
HXLINE(  69)				_hx_tmp7 = true;
            			}
HXDLIN(  69)			if (_hx_tmp7) {
HXLINE(  69)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  69)				_this1->set_y(((( (Float)(_hx_tmp) ) - _this1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  70)		 ::objects::Alphabet fh1 = this->noText;
HXDLIN(  70)		fh1->set_x((fh1->x + 200));
HXLINE(  71)		this->add(this->noText);
HXLINE(  72)		this->updateOptions();
            	}

Dynamic ResetScoreSubState_obj::__CreateEmpty() { return new ResetScoreSubState_obj; }

void *ResetScoreSubState_obj::_hx_vtable = 0;

Dynamic ResetScoreSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ResetScoreSubState_obj > _hx_result = new ResetScoreSubState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool ResetScoreSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x3c0818b8) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x3c0818b8;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7f35d2fe;
		}
	}
}

void ResetScoreSubState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_15a8e42ba259ddcf_76_update)
HXLINE(  77)		 ::flixel::FlxSprite fh = this->bg;
HXDLIN(  77)		fh->set_alpha((fh->alpha + (elapsed * ((Float)1.5))));
HXLINE(  78)		if ((this->bg->alpha > ((Float)0.6))) {
HXLINE(  78)			this->bg->set_alpha(((Float)0.6));
            		}
HXLINE(  80)		{
HXLINE(  80)			int _g = 0;
HXDLIN(  80)			int _g1 = this->alphabetArray->length;
HXDLIN(  80)			while((_g < _g1)){
HXLINE(  80)				_g = (_g + 1);
HXDLIN(  80)				int i = (_g - 1);
HXLINE(  81)				 ::objects::Alphabet spr = this->alphabetArray->__get(i).StaticCast<  ::objects::Alphabet >();
HXLINE(  82)				spr->set_alpha((spr->alpha + (elapsed * ((Float)2.5))));
            			}
            		}
HXLINE(  84)		if ((this->week == -1)) {
HXLINE(  84)			 ::objects::HealthIcon fh = this->icon;
HXDLIN(  84)			fh->set_alpha((fh->alpha + (elapsed * ((Float)2.5))));
            		}
HXLINE(  86)		bool _hx_tmp;
HXDLIN(  86)		if (!(::backend::Controls_obj::instance->get_UI_LEFT_P())) {
HXLINE(  86)			_hx_tmp = ::backend::Controls_obj::instance->get_UI_RIGHT_P();
            		}
            		else {
HXLINE(  86)			_hx_tmp = true;
            		}
HXDLIN(  86)		if (_hx_tmp) {
HXLINE(  87)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  87)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),1,null(),null(),null(),null());
HXLINE(  88)			this->onYes = !(this->onYes);
HXLINE(  89)			this->updateOptions();
            		}
HXLINE(  91)		if (::backend::Controls_obj::instance->get_BACK()) {
HXLINE(  92)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  92)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),1,null(),null(),null(),null());
HXLINE(  93)			this->close();
            		}
            		else {
HXLINE(  94)			if (::backend::Controls_obj::instance->get_ACCEPT()) {
HXLINE(  95)				if (this->onYes) {
HXLINE(  96)					if ((this->week == -1)) {
HXLINE(  97)						::backend::Highscore_obj::resetSong(this->song,this->difficulty);
            					}
            					else {
HXLINE(  99)						::backend::Highscore_obj::resetWeek(::backend::WeekData_obj::weeksList->__get(this->week),this->difficulty);
            					}
            				}
HXLINE( 102)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 102)				_hx_tmp->play(::backend::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),1,null(),null(),null(),null());
HXLINE( 103)				this->close();
            			}
            		}
HXLINE( 105)		this->super::update(elapsed);
            	}


void ResetScoreSubState_obj::updateOptions(){
            	HX_STACKFRAME(&_hx_pos_15a8e42ba259ddcf_108_updateOptions)
HXLINE( 109)		::Array< Float > scales = ::Array_obj< Float >::fromData( _hx_array_data_73c394e0_4,2);
HXLINE( 110)		::Array< Float > alphas = ::Array_obj< Float >::fromData( _hx_array_data_73c394e0_5,2);
HXLINE( 111)		int confirmInt;
HXDLIN( 111)		if (this->onYes) {
HXLINE( 111)			confirmInt = 1;
            		}
            		else {
HXLINE( 111)			confirmInt = 0;
            		}
HXLINE( 113)		this->yesText->set_alpha(alphas->__get(confirmInt));
HXLINE( 114)		{
HXLINE( 114)			 ::flixel::math::FlxBasePoint this1 = this->yesText->scale;
HXDLIN( 114)			this1->set_x(scales->__get(confirmInt));
HXDLIN( 114)			this1->set_y(scales->__get(confirmInt));
            		}
HXLINE( 115)		this->noText->set_alpha(alphas->__get((1 - confirmInt)));
HXLINE( 116)		{
HXLINE( 116)			 ::flixel::math::FlxBasePoint this2 = this->noText->scale;
HXDLIN( 116)			this2->set_x(scales->__get((1 - confirmInt)));
HXDLIN( 116)			this2->set_y(scales->__get((1 - confirmInt)));
            		}
HXLINE( 117)		if ((this->week == -1)) {
HXLINE( 117)			this->icon->animation->_curAnim->set_curFrame(confirmInt);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ResetScoreSubState_obj,updateOptions,(void))


::hx::ObjectPtr< ResetScoreSubState_obj > ResetScoreSubState_obj::__new(::String song,int difficulty,::String character,::hx::Null< int >  __o_week) {
	::hx::ObjectPtr< ResetScoreSubState_obj > __this = new ResetScoreSubState_obj();
	__this->__construct(song,difficulty,character,__o_week);
	return __this;
}

::hx::ObjectPtr< ResetScoreSubState_obj > ResetScoreSubState_obj::__alloc(::hx::Ctx *_hx_ctx,::String song,int difficulty,::String character,::hx::Null< int >  __o_week) {
	ResetScoreSubState_obj *__this = (ResetScoreSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ResetScoreSubState_obj), true, "substates.ResetScoreSubState"));
	*(void **)__this = ResetScoreSubState_obj::_hx_vtable;
	__this->__construct(song,difficulty,character,__o_week);
	return __this;
}

ResetScoreSubState_obj::ResetScoreSubState_obj()
{
}

void ResetScoreSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ResetScoreSubState);
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(alphabetArray,"alphabetArray");
	HX_MARK_MEMBER_NAME(icon,"icon");
	HX_MARK_MEMBER_NAME(onYes,"onYes");
	HX_MARK_MEMBER_NAME(yesText,"yesText");
	HX_MARK_MEMBER_NAME(noText,"noText");
	HX_MARK_MEMBER_NAME(song,"song");
	HX_MARK_MEMBER_NAME(difficulty,"difficulty");
	HX_MARK_MEMBER_NAME(week,"week");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ResetScoreSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(alphabetArray,"alphabetArray");
	HX_VISIT_MEMBER_NAME(icon,"icon");
	HX_VISIT_MEMBER_NAME(onYes,"onYes");
	HX_VISIT_MEMBER_NAME(yesText,"yesText");
	HX_VISIT_MEMBER_NAME(noText,"noText");
	HX_VISIT_MEMBER_NAME(song,"song");
	HX_VISIT_MEMBER_NAME(difficulty,"difficulty");
	HX_VISIT_MEMBER_NAME(week,"week");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ResetScoreSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { return ::hx::Val( icon ); }
		if (HX_FIELD_EQ(inName,"song") ) { return ::hx::Val( song ); }
		if (HX_FIELD_EQ(inName,"week") ) { return ::hx::Val( week ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"onYes") ) { return ::hx::Val( onYes ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"noText") ) { return ::hx::Val( noText ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"yesText") ) { return ::hx::Val( yesText ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"difficulty") ) { return ::hx::Val( difficulty ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"alphabetArray") ) { return ::hx::Val( alphabetArray ); }
		if (HX_FIELD_EQ(inName,"updateOptions") ) { return ::hx::Val( updateOptions_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ResetScoreSubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { icon=inValue.Cast<  ::objects::HealthIcon >(); return inValue; }
		if (HX_FIELD_EQ(inName,"song") ) { song=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"week") ) { week=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"onYes") ) { onYes=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"noText") ) { noText=inValue.Cast<  ::objects::Alphabet >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"yesText") ) { yesText=inValue.Cast<  ::objects::Alphabet >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"difficulty") ) { difficulty=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"alphabetArray") ) { alphabetArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ResetScoreSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("alphabetArray",e6,77,24,ff));
	outFields->push(HX_("icon",79,e7,b2,45));
	outFields->push(HX_("onYes",48,bd,73,32));
	outFields->push(HX_("yesText",74,41,98,78));
	outFields->push(HX_("noText",8e,0d,8f,1c));
	outFields->push(HX_("song",d5,23,58,4c));
	outFields->push(HX_("difficulty",3b,4e,8e,47));
	outFields->push(HX_("week",f4,5f,f5,4e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ResetScoreSubState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(ResetScoreSubState_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ResetScoreSubState_obj,alphabetArray),HX_("alphabetArray",e6,77,24,ff)},
	{::hx::fsObject /*  ::objects::HealthIcon */ ,(int)offsetof(ResetScoreSubState_obj,icon),HX_("icon",79,e7,b2,45)},
	{::hx::fsBool,(int)offsetof(ResetScoreSubState_obj,onYes),HX_("onYes",48,bd,73,32)},
	{::hx::fsObject /*  ::objects::Alphabet */ ,(int)offsetof(ResetScoreSubState_obj,yesText),HX_("yesText",74,41,98,78)},
	{::hx::fsObject /*  ::objects::Alphabet */ ,(int)offsetof(ResetScoreSubState_obj,noText),HX_("noText",8e,0d,8f,1c)},
	{::hx::fsString,(int)offsetof(ResetScoreSubState_obj,song),HX_("song",d5,23,58,4c)},
	{::hx::fsInt,(int)offsetof(ResetScoreSubState_obj,difficulty),HX_("difficulty",3b,4e,8e,47)},
	{::hx::fsInt,(int)offsetof(ResetScoreSubState_obj,week),HX_("week",f4,5f,f5,4e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ResetScoreSubState_obj_sStaticStorageInfo = 0;
#endif

static ::String ResetScoreSubState_obj_sMemberFields[] = {
	HX_("bg",c5,55,00,00),
	HX_("alphabetArray",e6,77,24,ff),
	HX_("icon",79,e7,b2,45),
	HX_("onYes",48,bd,73,32),
	HX_("yesText",74,41,98,78),
	HX_("noText",8e,0d,8f,1c),
	HX_("song",d5,23,58,4c),
	HX_("difficulty",3b,4e,8e,47),
	HX_("week",f4,5f,f5,4e),
	HX_("update",09,86,05,87),
	HX_("updateOptions",55,98,6c,ab),
	::String(null()) };

::hx::Class ResetScoreSubState_obj::__mClass;

void ResetScoreSubState_obj::__register()
{
	ResetScoreSubState_obj _hx_dummy;
	ResetScoreSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("substates.ResetScoreSubState",e0,94,c3,73);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ResetScoreSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ResetScoreSubState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ResetScoreSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ResetScoreSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace substates
