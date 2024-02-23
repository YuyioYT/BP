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
#ifndef INCLUDED_options_CameraSettingsState
#include <options/CameraSettingsState.h>
#endif
#ifndef INCLUDED_options_Option
#include <options/Option.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5d52332264acca15_6_new,"options.CameraSettingsState","new",0xe3c9dc8b,"options.CameraSettingsState.new","options/CameraSettingsState.hx",6,0x3ea30606)
namespace options{

void CameraSettingsState_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_5d52332264acca15_6_new)
HXLINE(   7)		this->title = HX_("Camera",c5,ba,20,ec);
HXLINE(   8)		this->rpcTitle = HX_("Camera Settings Menu",61,d3,d7,34);
HXLINE(  10)		 ::options::Option option =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Camera Zooms",45,a6,9b,43),HX_("If unchecked, the camera won't zoom in on a beat hit.",fd,78,13,6b),HX_("camZooms",71,f3,cd,90),HX_("bool",2a,84,1b,41),null());
HXLINE(  14)		this->addOption(option);
HXLINE(  16)		 ::options::Option option1 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Move Camera on countdown",3c,8a,19,10),HX_("If checked, you get a Move camera when start de countdown.",66,be,2c,bc),HX_("moveCameraonCountdown",bc,ae,df,a2),HX_("bool",2a,84,1b,41),null());
HXLINE(  20)		this->addOption(option1);
HXLINE(  22)		 ::options::Option option2 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Follow Cam On Note Hit",e6,e7,07,cc),HX_("If checked, you get a movement on hit an arrow.",99,80,59,8e),HX_("followarrow",b8,0e,df,99),HX_("bool",2a,84,1b,41),null());
HXLINE(  26)		this->addOption(option2);
HXLINE(  28)		super::__construct();
            	}

Dynamic CameraSettingsState_obj::__CreateEmpty() { return new CameraSettingsState_obj; }

void *CameraSettingsState_obj::_hx_vtable = 0;

Dynamic CameraSettingsState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CameraSettingsState_obj > _hx_result = new CameraSettingsState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CameraSettingsState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5661ffbf) {
		if (inClassId<=(int)0x2fd8e40b) {
			if (inClassId<=(int)0x0cc50116) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0cc50116;
			} else {
				return inClassId==(int)0x2fd8e40b;
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


::hx::ObjectPtr< CameraSettingsState_obj > CameraSettingsState_obj::__new() {
	::hx::ObjectPtr< CameraSettingsState_obj > __this = new CameraSettingsState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CameraSettingsState_obj > CameraSettingsState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CameraSettingsState_obj *__this = (CameraSettingsState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CameraSettingsState_obj), true, "options.CameraSettingsState"));
	*(void **)__this = CameraSettingsState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CameraSettingsState_obj::CameraSettingsState_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CameraSettingsState_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CameraSettingsState_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CameraSettingsState_obj::__mClass;

void CameraSettingsState_obj::__register()
{
	CameraSettingsState_obj _hx_dummy;
	CameraSettingsState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.CameraSettingsState",19,3b,d0,93);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CameraSettingsState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CameraSettingsState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CameraSettingsState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace options
