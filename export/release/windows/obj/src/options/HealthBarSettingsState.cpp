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
#ifndef INCLUDED_options_HealthBarSettingsState
#include <options/HealthBarSettingsState.h>
#endif
#ifndef INCLUDED_options_Option
#include <options/Option.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e2b681f97176f402_6_new,"options.HealthBarSettingsState","new",0xa46294b9,"options.HealthBarSettingsState.new","options/HealthBarSettingsState.hx",6,0x0ace8ab6)
static const ::String _hx_array_data_8601c447_1[] = {
	HX_("Purgatory",89,a7,af,e9),HX_("Animated",c3,2e,a4,62),HX_("Disabled",9c,fd,b5,55),
};
namespace options{

void HealthBarSettingsState_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_e2b681f97176f402_6_new)
HXLINE(   7)		this->title = HX_("Health Bar",4f,e8,c6,dd);
HXLINE(   8)		this->rpcTitle = HX_("Health Bar Settings Menu",6b,de,b6,07);
HXLINE(  11)		 ::options::Option option =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Health Bar Overlay:",bb,cc,20,8a),HX_("What should the Health bar Overlay display?",5e,4a,69,3a),HX_("healthBarOverlay",b9,71,55,78),HX_("string",d1,28,30,11),::Array_obj< ::String >::fromData( _hx_array_data_8601c447_1,3));
HXLINE(  16)		this->addOption(option);
HXLINE(  18)		 ::options::Option option1 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Original Time bar colors",c1,97,b6,fb),HX_("His name say all.",09,2a,44,48),HX_("originalhealthbarColor",3d,97,ad,b6),HX_("bool",2a,84,1b,41),null());
HXLINE(  22)		this->addOption(option1);
HXLINE(  24)		 ::options::Option option2 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Health Bar Opacity",da,18,73,d2),HX_("How much transparent should the health bar and icons be.",16,a5,40,f3),HX_("healthBarAlpha",47,c9,a0,80),HX_("percent",c5,aa,da,78),null());
HXLINE(  28)		option2->scrollSpeed = ((Float)1.6);
HXLINE(  29)		option2->minValue = ((Float)0.0);
HXLINE(  30)		option2->maxValue = 1;
HXLINE(  31)		option2->changeValue = ((Float)0.1);
HXLINE(  32)		option2->decimals = 1;
HXLINE(  33)		this->addOption(option2);
HXLINE(  35)		super::__construct();
            	}

Dynamic HealthBarSettingsState_obj::__CreateEmpty() { return new HealthBarSettingsState_obj; }

void *HealthBarSettingsState_obj::_hx_vtable = 0;

Dynamic HealthBarSettingsState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HealthBarSettingsState_obj > _hx_result = new HealthBarSettingsState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HealthBarSettingsState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5661ffbf) {
		if (inClassId<=(int)0x0dcc4ccd) {
			if (inClassId<=(int)0x0cc50116) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0cc50116;
			} else {
				return inClassId==(int)0x0dcc4ccd;
			}
		} else {
			return inClassId==(int)0x3c0818b8 || inClassId==(int)0x5661ffbf;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}


::hx::ObjectPtr< HealthBarSettingsState_obj > HealthBarSettingsState_obj::__new() {
	::hx::ObjectPtr< HealthBarSettingsState_obj > __this = new HealthBarSettingsState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HealthBarSettingsState_obj > HealthBarSettingsState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HealthBarSettingsState_obj *__this = (HealthBarSettingsState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HealthBarSettingsState_obj), true, "options.HealthBarSettingsState"));
	*(void **)__this = HealthBarSettingsState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HealthBarSettingsState_obj::HealthBarSettingsState_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HealthBarSettingsState_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HealthBarSettingsState_obj_sStaticStorageInfo = 0;
#endif

::hx::Class HealthBarSettingsState_obj::__mClass;

void HealthBarSettingsState_obj::__register()
{
	HealthBarSettingsState_obj _hx_dummy;
	HealthBarSettingsState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.HealthBarSettingsState",47,c4,01,86);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< HealthBarSettingsState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HealthBarSettingsState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HealthBarSettingsState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace options
