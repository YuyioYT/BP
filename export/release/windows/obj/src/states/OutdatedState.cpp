#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_backend_Controls
#include <backend/Controls.h>
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
#ifndef INCLUDED_flixel_sound_FlxSound
#include <flixel/sound/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_states_MainMenuState
#include <states/MainMenuState.h>
#endif
#ifndef INCLUDED_states_OutdatedState
#include <states/OutdatedState.h>
#endif
#ifndef INCLUDED_states_TitleState
#include <states/TitleState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bc8be86c1e65eb24_3_new,"states.OutdatedState","new",0xb814fcef,"states.OutdatedState.new","states/OutdatedState.hx",3,0xdd520762)
HX_LOCAL_STACK_FRAME(_hx_pos_bc8be86c1e65eb24_9_create,"states.OutdatedState","create",0xc6d73dcd,"states.OutdatedState.create","states/OutdatedState.hx",9,0xdd520762)
HX_LOCAL_STACK_FRAME(_hx_pos_bc8be86c1e65eb24_29_update,"states.OutdatedState","update",0xd1cd5cda,"states.OutdatedState.update","states/OutdatedState.hx",29,0xdd520762)
HX_LOCAL_STACK_FRAME(_hx_pos_bc8be86c1e65eb24_44_update,"states.OutdatedState","update",0xd1cd5cda,"states.OutdatedState.update","states/OutdatedState.hx",44,0xdd520762)
HX_LOCAL_STACK_FRAME(_hx_pos_bc8be86c1e65eb24_5_boot,"states.OutdatedState","boot",0x526154c3,"states.OutdatedState.boot","states/OutdatedState.hx",5,0xdd520762)
namespace states{

void OutdatedState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_bc8be86c1e65eb24_3_new)
HXDLIN(   3)		super::__construct(TransIn,TransOut);
            	}

Dynamic OutdatedState_obj::__CreateEmpty() { return new OutdatedState_obj; }

void *OutdatedState_obj::_hx_vtable = 0;

Dynamic OutdatedState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OutdatedState_obj > _hx_result = new OutdatedState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool OutdatedState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x53aaab8a) {
		if (inClassId<=(int)0x2af06d43) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2af06d43;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x53aaab8a;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void OutdatedState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_bc8be86c1e65eb24_9_create)
HXLINE(  10)		this->super::create();
HXLINE(  12)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  13)		this->add(bg);
HXLINE(  15)		this->warnText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,::flixel::FlxG_obj::width,((((HX_("Sup bro, looks like you're running an   \n\n\t\t\toutdated version of Corn Engine (",19,9f,b9,79) + ::states::MainMenuState_obj::psychEngineVersion) + HX_("),\n\n\t\t\tplease update to ",be,0d,d5,c9)) + ::states::TitleState_obj::updateVersion) + HX_("!\n\n\t\t\tPress ESCAPE to proceed anyway.\n\n\t\t\t\n\n\t\t\tThank you for using the Engine!",98,4b,fe,ad)),32,null());
HXLINE(  23)		this->warnText->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),32,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  24)		{
HXLINE(  24)			 ::flixel::text::FlxText _this = this->warnText;
HXDLIN(  24)			int axes = 16;
HXDLIN(  24)			bool _hx_tmp;
HXDLIN(  24)			if ((axes != 1)) {
HXLINE(  24)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  24)				_hx_tmp = true;
            			}
HXDLIN(  24)			if (_hx_tmp) {
HXLINE(  24)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  24)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  24)			bool _hx_tmp1;
HXDLIN(  24)			if ((axes != 16)) {
HXLINE(  24)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  24)				_hx_tmp1 = true;
            			}
HXDLIN(  24)			if (_hx_tmp1) {
HXLINE(  24)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  24)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  25)		this->add(this->warnText);
            	}


void OutdatedState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_bc8be86c1e65eb24_29_update)
HXLINE(  30)		if (!(::states::OutdatedState_obj::leftState)) {
HXLINE(  31)			if (this->get_controls()->get_ACCEPT()) {
HXLINE(  32)				::states::OutdatedState_obj::leftState = true;
HXLINE(  33)				{
HXLINE(  33)					::String prefix = HX_("",00,00,00,00);
HXDLIN(  33)					if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("^https?://",48,ee,dd,38),HX_("",00,00,00,00))->match(HX_("https://github.com/ShadowMario/FNF-PsychEngine/releases",a2,77,06,8f)))) {
HXLINE(  33)						prefix = HX_("http://",52,75,cd,5a);
            					}
HXDLIN(  33)					::openfl::Lib_obj::getURL( ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,(prefix + HX_("https://github.com/ShadowMario/FNF-PsychEngine/releases",a2,77,06,8f))),HX_("_blank",95,26,d9,b0));
            				}
            			}
            			else {
HXLINE(  35)				if (this->get_controls()->get_BACK()) {
HXLINE(  36)					::states::OutdatedState_obj::leftState = true;
            				}
            			}
HXLINE(  39)			if (::states::OutdatedState_obj::leftState) {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            				void _hx_run( ::flixel::tweens::FlxTween twn){
            					HX_GC_STACKFRAME(&_hx_pos_bc8be86c1e65eb24_44_update)
HXLINE(  44)					::backend::MusicBeatState_obj::switchState( ::states::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  41)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  41)				_hx_tmp->play(::backend::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE(  42)				::flixel::tweens::FlxTween_obj::tween(this->warnText, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0()))));
            			}
            		}
HXLINE(  49)		this->super::update(elapsed);
            	}


bool OutdatedState_obj::leftState;


::hx::ObjectPtr< OutdatedState_obj > OutdatedState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< OutdatedState_obj > __this = new OutdatedState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< OutdatedState_obj > OutdatedState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	OutdatedState_obj *__this = (OutdatedState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OutdatedState_obj), true, "states.OutdatedState"));
	*(void **)__this = OutdatedState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

OutdatedState_obj::OutdatedState_obj()
{
}

void OutdatedState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OutdatedState);
	HX_MARK_MEMBER_NAME(warnText,"warnText");
	 ::backend::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OutdatedState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(warnText,"warnText");
	 ::backend::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val OutdatedState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"warnText") ) { return ::hx::Val( warnText ); }
	}
	return super::__Field(inName,inCallProp);
}

bool OutdatedState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"leftState") ) { outValue = ( leftState ); return true; }
	}
	return false;
}

::hx::Val OutdatedState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"warnText") ) { warnText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool OutdatedState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"leftState") ) { leftState=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void OutdatedState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("warnText",13,f6,aa,7a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OutdatedState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(OutdatedState_obj,warnText),HX_("warnText",13,f6,aa,7a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo OutdatedState_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &OutdatedState_obj::leftState,HX_("leftState",8a,64,eb,98)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String OutdatedState_obj_sMemberFields[] = {
	HX_("warnText",13,f6,aa,7a),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

static void OutdatedState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OutdatedState_obj::leftState,"leftState");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OutdatedState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OutdatedState_obj::leftState,"leftState");
};

#endif

::hx::Class OutdatedState_obj::__mClass;

static ::String OutdatedState_obj_sStaticFields[] = {
	HX_("leftState",8a,64,eb,98),
	::String(null())
};

void OutdatedState_obj::__register()
{
	OutdatedState_obj _hx_dummy;
	OutdatedState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.OutdatedState",7d,59,a2,7d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OutdatedState_obj::__GetStatic;
	__mClass->mSetStaticField = &OutdatedState_obj::__SetStatic;
	__mClass->mMarkFunc = OutdatedState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OutdatedState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OutdatedState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OutdatedState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OutdatedState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OutdatedState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OutdatedState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void OutdatedState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_bc8be86c1e65eb24_5_boot)
HXDLIN(   5)		leftState = false;
            	}
}

} // end namespace states
