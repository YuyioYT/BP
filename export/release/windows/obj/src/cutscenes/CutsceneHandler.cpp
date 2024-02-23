#include <hxcpp.h>

#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_cutscenes_CutsceneHandler
#include <cutscenes/CutsceneHandler.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1dd0f482b4818c9c_20_new,"cutscenes.CutsceneHandler","new",0x219da4ed,"cutscenes.CutsceneHandler.new","cutscenes/CutsceneHandler.hx",20,0x3b282b64)
HX_DEFINE_STACK_FRAME(_hx_pos_1dd0f482b4818c9c_6_new,"cutscenes.CutsceneHandler","new",0x219da4ed,"cutscenes.CutsceneHandler.new","cutscenes/CutsceneHandler.hx",6,0x3b282b64)
HX_LOCAL_STACK_FRAME(_hx_pos_1dd0f482b4818c9c_34_update,"cutscenes.CutsceneHandler","update",0x17cb479c,"cutscenes.CutsceneHandler.update","cutscenes/CutsceneHandler.hx",34,0x3b282b64)
HX_LOCAL_STACK_FRAME(_hx_pos_1dd0f482b4818c9c_70_push,"cutscenes.CutsceneHandler","push",0x49b138ad,"cutscenes.CutsceneHandler.push","cutscenes/CutsceneHandler.hx",70,0x3b282b64)
HX_LOCAL_STACK_FRAME(_hx_pos_1dd0f482b4818c9c_74_timer,"cutscenes.CutsceneHandler","timer",0x77079192,"cutscenes.CutsceneHandler.timer","cutscenes/CutsceneHandler.hx",74,0x3b282b64)
HX_LOCAL_STACK_FRAME(_hx_pos_1dd0f482b4818c9c_81_sortByTime,"cutscenes.CutsceneHandler","sortByTime",0x40528295,"cutscenes.CutsceneHandler.sortByTime","cutscenes/CutsceneHandler.hx",81,0x3b282b64)
namespace cutscenes{

void CutsceneHandler_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::cutscenes::CutsceneHandler,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_1dd0f482b4818c9c_20_new)
HXLINE(  21)			if (::hx::IsNotNull( _gthis->music )) {
HXLINE(  23)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  23)				::String library = null();
HXDLIN(  23)				 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),_gthis->music,library);
HXDLIN(  23)				_hx_tmp->playMusic(file,0,false,null());
HXLINE(  24)				{
HXLINE(  24)					 ::flixel::sound::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  24)					 ::Dynamic onComplete = null();
HXDLIN(  24)					if (::hx::IsNull( _this->_channel )) {
HXLINE(  24)						_this->play(null(),null(),null());
            					}
HXDLIN(  24)					if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE(  24)						_this->fadeTween->cancel();
            					}
HXDLIN(  24)					_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),( (Float)(1) ),( (Float)(1) ), ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            				}
            			}
HXLINE(  26)			if (::hx::IsNotNull( _gthis->onStart )) {
HXLINE(  26)				_gthis->onStart();
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_1dd0f482b4818c9c_6_new)
HXLINE(  32)		this->firstFrame = false;
HXLINE(  31)		this->cutsceneTime = ((Float)0);
HXLINE(  14)		this->music = null();
HXLINE(  13)		this->objects = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  12)		this->endTime = ((Float)0);
HXLINE(  11)		this->onStart = null();
HXLINE(  10)		this->finishCallback2 = null();
HXLINE(   9)		this->finishCallback = null();
HXLINE(   8)		this->timedEvents = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  16)		 ::cutscenes::CutsceneHandler _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  17)		super::__construct();
HXLINE(  19)		this->timer(( (Float)(0) ), ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE(  28)		::states::PlayState_obj::instance->add(::hx::ObjectPtr<OBJ_>(this)).StaticCast<  ::flixel::FlxBasic >();
            	}

Dynamic CutsceneHandler_obj::__CreateEmpty() { return new CutsceneHandler_obj; }

void *CutsceneHandler_obj::_hx_vtable = 0;

Dynamic CutsceneHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CutsceneHandler_obj > _hx_result = new CutsceneHandler_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CutsceneHandler_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2393a577) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2393a577;
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void CutsceneHandler_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_1dd0f482b4818c9c_34_update)
HXLINE(  35)		this->super::update(elapsed);
HXLINE(  37)		bool _hx_tmp;
HXDLIN(  37)		if (::hx::IsInstanceEq( ::flixel::FlxG_obj::game->_state,::states::PlayState_obj::instance )) {
HXLINE(  37)			_hx_tmp = !(this->firstFrame);
            		}
            		else {
HXLINE(  37)			_hx_tmp = true;
            		}
HXDLIN(  37)		if (_hx_tmp) {
HXLINE(  39)			this->firstFrame = true;
HXLINE(  40)			return;
            		}
HXLINE(  43)		 ::cutscenes::CutsceneHandler _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  43)		_hx_tmp1->cutsceneTime = (_hx_tmp1->cutsceneTime + elapsed);
HXLINE(  44)		if ((this->endTime <= this->cutsceneTime)) {
HXLINE(  46)			this->finishCallback();
HXLINE(  47)			if (::hx::IsNotNull( this->finishCallback2 )) {
HXLINE(  47)				this->finishCallback2();
            			}
HXLINE(  49)			{
HXLINE(  49)				int _g = 0;
HXDLIN(  49)				::Array< ::Dynamic> _g1 = this->objects;
HXDLIN(  49)				while((_g < _g1->length)){
HXLINE(  49)					 ::flixel::FlxSprite spr = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN(  49)					_g = (_g + 1);
HXLINE(  51)					spr->kill();
HXLINE(  52)					::states::PlayState_obj::instance->remove(spr,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  53)					spr->destroy();
            				}
            			}
HXLINE(  56)			this->kill();
HXLINE(  57)			this->destroy();
HXLINE(  58)			::states::PlayState_obj::instance->remove(::hx::ObjectPtr<OBJ_>(this),null()).StaticCast<  ::flixel::FlxBasic >();
            		}
HXLINE(  61)		while(true){
HXLINE(  61)			bool _hx_tmp;
HXDLIN(  61)			if ((this->timedEvents->get_length() > 0)) {
HXLINE(  61)				_hx_tmp = ::hx::IsLessEq( this->timedEvents->__get(0)->__GetItem(0),this->cutsceneTime );
            			}
            			else {
HXLINE(  61)				_hx_tmp = false;
            			}
HXDLIN(  61)			if (!(_hx_tmp)) {
HXLINE(  61)				goto _hx_goto_3;
            			}
HXLINE(  63)			this->timedEvents->__get(0)->__GetItem(1)();
HXLINE(  64)			this->timedEvents->splice(0,1);
            		}
            		_hx_goto_3:;
            	}


void CutsceneHandler_obj::push( ::flixel::FlxSprite spr){
            	HX_STACKFRAME(&_hx_pos_1dd0f482b4818c9c_70_push)
HXDLIN(  70)		this->objects->push(spr);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CutsceneHandler_obj,push,(void))

void CutsceneHandler_obj::timer(Float time, ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_1dd0f482b4818c9c_74_timer)
HXLINE(  75)		this->timedEvents->push(::cpp::VirtualArray_obj::__new(2)->init(0,time)->init(1,func));
HXLINE(  76)		this->timedEvents->sort(this->sortByTime_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC2(CutsceneHandler_obj,timer,(void))

int CutsceneHandler_obj::sortByTime(::cpp::VirtualArray Obj1,::cpp::VirtualArray Obj2){
            	HX_STACKFRAME(&_hx_pos_1dd0f482b4818c9c_81_sortByTime)
HXDLIN(  81)		Float Value1 = ( (Float)(Obj1->__get(0)) );
HXDLIN(  81)		Float Value2 = ( (Float)(Obj2->__get(0)) );
HXDLIN(  81)		int result = 0;
HXDLIN(  81)		if ((Value1 < Value2)) {
HXDLIN(  81)			result = -1;
            		}
            		else {
HXDLIN(  81)			if ((Value1 > Value2)) {
HXDLIN(  81)				result = 1;
            			}
            		}
HXDLIN(  81)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(CutsceneHandler_obj,sortByTime,return )


::hx::ObjectPtr< CutsceneHandler_obj > CutsceneHandler_obj::__new() {
	::hx::ObjectPtr< CutsceneHandler_obj > __this = new CutsceneHandler_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CutsceneHandler_obj > CutsceneHandler_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CutsceneHandler_obj *__this = (CutsceneHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CutsceneHandler_obj), true, "cutscenes.CutsceneHandler"));
	*(void **)__this = CutsceneHandler_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CutsceneHandler_obj::CutsceneHandler_obj()
{
}

void CutsceneHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CutsceneHandler);
	HX_MARK_MEMBER_NAME(timedEvents,"timedEvents");
	HX_MARK_MEMBER_NAME(finishCallback,"finishCallback");
	HX_MARK_MEMBER_NAME(finishCallback2,"finishCallback2");
	HX_MARK_MEMBER_NAME(onStart,"onStart");
	HX_MARK_MEMBER_NAME(endTime,"endTime");
	HX_MARK_MEMBER_NAME(objects,"objects");
	HX_MARK_MEMBER_NAME(music,"music");
	HX_MARK_MEMBER_NAME(cutsceneTime,"cutsceneTime");
	HX_MARK_MEMBER_NAME(firstFrame,"firstFrame");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CutsceneHandler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(timedEvents,"timedEvents");
	HX_VISIT_MEMBER_NAME(finishCallback,"finishCallback");
	HX_VISIT_MEMBER_NAME(finishCallback2,"finishCallback2");
	HX_VISIT_MEMBER_NAME(onStart,"onStart");
	HX_VISIT_MEMBER_NAME(endTime,"endTime");
	HX_VISIT_MEMBER_NAME(objects,"objects");
	HX_VISIT_MEMBER_NAME(music,"music");
	HX_VISIT_MEMBER_NAME(cutsceneTime,"cutsceneTime");
	HX_VISIT_MEMBER_NAME(firstFrame,"firstFrame");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CutsceneHandler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return ::hx::Val( push_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { return ::hx::Val( music ); }
		if (HX_FIELD_EQ(inName,"timer") ) { return ::hx::Val( timer_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onStart") ) { return ::hx::Val( onStart ); }
		if (HX_FIELD_EQ(inName,"endTime") ) { return ::hx::Val( endTime ); }
		if (HX_FIELD_EQ(inName,"objects") ) { return ::hx::Val( objects ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"firstFrame") ) { return ::hx::Val( firstFrame ); }
		if (HX_FIELD_EQ(inName,"sortByTime") ) { return ::hx::Val( sortByTime_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"timedEvents") ) { return ::hx::Val( timedEvents ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cutsceneTime") ) { return ::hx::Val( cutsceneTime ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { return ::hx::Val( finishCallback ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"finishCallback2") ) { return ::hx::Val( finishCallback2 ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CutsceneHandler_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { music=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onStart") ) { onStart=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endTime") ) { endTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"objects") ) { objects=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"firstFrame") ) { firstFrame=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"timedEvents") ) { timedEvents=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cutsceneTime") ) { cutsceneTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { finishCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"finishCallback2") ) { finishCallback2=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CutsceneHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("timedEvents",30,a6,65,ae));
	outFields->push(HX_("endTime",88,85,21,2f));
	outFields->push(HX_("objects",d4,68,4f,82));
	outFields->push(HX_("music",a5,d0,5a,10));
	outFields->push(HX_("cutsceneTime",b7,21,e9,17));
	outFields->push(HX_("firstFrame",dd,c1,61,44));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CutsceneHandler_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(CutsceneHandler_obj,timedEvents),HX_("timedEvents",30,a6,65,ae)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(CutsceneHandler_obj,finishCallback),HX_("finishCallback",38,a1,bc,b4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(CutsceneHandler_obj,finishCallback2),HX_("finishCallback2",fa,6f,50,70)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(CutsceneHandler_obj,onStart),HX_("onStart",c3,12,49,1a)},
	{::hx::fsFloat,(int)offsetof(CutsceneHandler_obj,endTime),HX_("endTime",88,85,21,2f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CutsceneHandler_obj,objects),HX_("objects",d4,68,4f,82)},
	{::hx::fsString,(int)offsetof(CutsceneHandler_obj,music),HX_("music",a5,d0,5a,10)},
	{::hx::fsFloat,(int)offsetof(CutsceneHandler_obj,cutsceneTime),HX_("cutsceneTime",b7,21,e9,17)},
	{::hx::fsBool,(int)offsetof(CutsceneHandler_obj,firstFrame),HX_("firstFrame",dd,c1,61,44)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CutsceneHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String CutsceneHandler_obj_sMemberFields[] = {
	HX_("timedEvents",30,a6,65,ae),
	HX_("finishCallback",38,a1,bc,b4),
	HX_("finishCallback2",fa,6f,50,70),
	HX_("onStart",c3,12,49,1a),
	HX_("endTime",88,85,21,2f),
	HX_("objects",d4,68,4f,82),
	HX_("music",a5,d0,5a,10),
	HX_("cutsceneTime",b7,21,e9,17),
	HX_("firstFrame",dd,c1,61,44),
	HX_("update",09,86,05,87),
	HX_("push",da,11,61,4a),
	HX_("timer",c5,bf,35,10),
	HX_("sortByTime",82,fb,30,6f),
	::String(null()) };

::hx::Class CutsceneHandler_obj::__mClass;

void CutsceneHandler_obj::__register()
{
	CutsceneHandler_obj _hx_dummy;
	CutsceneHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("cutscenes.CutsceneHandler",7b,aa,7b,b8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CutsceneHandler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CutsceneHandler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CutsceneHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CutsceneHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace cutscenes
