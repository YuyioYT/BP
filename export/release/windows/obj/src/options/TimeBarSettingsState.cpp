#include <hxcpp.h>

#ifndef INCLUDED_backend_MusicBeatSubstate
#include <backend/MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_options_BaseOptionsMenu
#include <options/BaseOptionsMenu.h>
#endif
#ifndef INCLUDED_options_Option
#include <options/Option.h>
#endif
#ifndef INCLUDED_options_TimeBarSettingsState
#include <options/TimeBarSettingsState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e95b500bc9a98177_6_new,"options.TimeBarSettingsState","new",0x482fcaaa,"options.TimeBarSettingsState.new","options/TimeBarSettingsState.hx",6,0xdf129825)
static const ::String _hx_array_data_c93eedb8_1[] = {
	HX_("Time Left",fa,08,f2,62),HX_("Time Elapsed",29,71,5d,35),HX_("Song Name",76,e6,ca,de),HX_("Modern Time",ee,61,dd,3e),HX_("Song Name + Time",ac,58,ee,a6),HX_("Disabled",9c,fd,b5,55),
};
static const ::String _hx_array_data_c93eedb8_2[] = {
	HX_("Black",9f,45,1f,48),HX_("Dark Gray",cd,2b,13,9d),HX_("Gray",03,fc,44,2f),
};
static const ::String _hx_array_data_c93eedb8_3[] = {
	HX_("Disabled",9c,fd,b5,55),HX_("Icon-P1",55,dd,45,a3),HX_("Icon-P2",56,dd,45,a3),HX_("Icon-P1 and P2",f6,32,32,9d),HX_("Icon-P2 and P1",14,a5,64,d6),
};
static const ::String _hx_array_data_c93eedb8_4[] = {
	HX_("Disabled",9c,fd,b5,55),HX_("Icon-P1",55,dd,45,a3),HX_("Icon-P2",56,dd,45,a3),HX_("Icon-P1 and P2",f6,32,32,9d),HX_("Icon-P2 and P1",14,a5,64,d6),
};
namespace options{

void TimeBarSettingsState_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_e95b500bc9a98177_6_new)
HXLINE(   7)		this->title = HX_("Time Bar",40,50,93,a4);
HXLINE(   8)		this->rpcTitle = HX_("Time Bar Settings Menu",1c,ea,aa,19);
HXLINE(  10)		 ::options::Option option =  ::options::Option_obj::__alloc( HX_CTX ,HX_("% Decimals: ",23,76,cd,cc),HX_("The amount of decimals you want for your Song Percentage. (0 means no decimals)",b0,63,10,32),HX_("percentDecimals",a7,7e,76,72),HX_("int",ef,0c,50,00),null());
HXLINE(  14)		this->addOption(option);
HXLINE(  16)		option->minValue = 0;
HXLINE(  17)		option->maxValue = 50;
HXLINE(  18)		option->displayFormat = HX_("%v Decimals",31,e8,c1,8c);
HXLINE(  20)		 ::options::Option option1 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Show Song Percentage",82,e8,c3,20),HX_("If checked, you can see text displaying how much\nof the song you've completed.",0f,b5,2e,cc),HX_("songPercentage",4f,b7,ee,ae),HX_("bool",2a,84,1b,41),null());
HXLINE(  24)		this->addOption(option1);
HXLINE(  26)		 ::options::Option option2 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Time Bar:",fa,e7,52,5c),HX_("What should the Time Bar display?",bd,00,f8,02),HX_("timeBarType",a0,5d,bb,01),HX_("string",d1,28,30,11),::Array_obj< ::String >::fromData( _hx_array_data_c93eedb8_1,6));
HXLINE(  31)		this->addOption(option2);
HXLINE(  33)		 ::options::Option option3 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Time Bar bg color:",92,d6,ac,b9),HX_("What should the Time Bar BG clor display?",b6,1f,e9,f4),HX_("timebarBGColor",38,da,99,a4),HX_("string",d1,28,30,11),::Array_obj< ::String >::fromData( _hx_array_data_c93eedb8_2,3));
HXLINE(  38)		this->addOption(option3);
HXLINE(  40)		 ::options::Option option4 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Color time bar Move",74,37,e3,1e),HX_("What should the Time Bar display?",bd,00,f8,02),HX_("ColorBar",50,74,94,63),HX_("string",d1,28,30,11),::Array_obj< ::String >::fromData( _hx_array_data_c93eedb8_3,5));
HXLINE(  45)		this->addOption(option4);
HXLINE(  47)		 ::options::Option option5 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Color time bar BG",48,bb,a3,5a),HX_("What should the Time Bar display?",bd,00,f8,02),HX_("ColorBarBG",15,62,d6,c8),HX_("string",d1,28,30,11),::Array_obj< ::String >::fromData( _hx_array_data_c93eedb8_4,5));
HXLINE(  52)		this->addOption(option5);
HXLINE(  54)		super::__construct();
            	}

Dynamic TimeBarSettingsState_obj::__CreateEmpty() { return new TimeBarSettingsState_obj; }

void *TimeBarSettingsState_obj::_hx_vtable = 0;

Dynamic TimeBarSettingsState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TimeBarSettingsState_obj > _hx_result = new TimeBarSettingsState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TimeBarSettingsState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x3c0818b8) {
			if (inClassId<=(int)0x0cc50116) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0cc50116;
			} else {
				return inClassId==(int)0x3c0818b8;
			}
		} else {
			return inClassId==(int)0x5661ffbf || inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fcd4cae;
		}
	}
}


::hx::ObjectPtr< TimeBarSettingsState_obj > TimeBarSettingsState_obj::__new() {
	::hx::ObjectPtr< TimeBarSettingsState_obj > __this = new TimeBarSettingsState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TimeBarSettingsState_obj > TimeBarSettingsState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TimeBarSettingsState_obj *__this = (TimeBarSettingsState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TimeBarSettingsState_obj), true, "options.TimeBarSettingsState"));
	*(void **)__this = TimeBarSettingsState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TimeBarSettingsState_obj::TimeBarSettingsState_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TimeBarSettingsState_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TimeBarSettingsState_obj_sStaticStorageInfo = 0;
#endif

::hx::Class TimeBarSettingsState_obj::__mClass;

void TimeBarSettingsState_obj::__register()
{
	TimeBarSettingsState_obj _hx_dummy;
	TimeBarSettingsState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.TimeBarSettingsState",b8,ed,3e,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TimeBarSettingsState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TimeBarSettingsState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TimeBarSettingsState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace options
