#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
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
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_FPS
#include <openfl/display/FPS.h>
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
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_options_BaseOptionsMenu
#include <options/BaseOptionsMenu.h>
#endif
#ifndef INCLUDED_options_FpsSettingsState
#include <options/FpsSettingsState.h>
#endif
#ifndef INCLUDED_options_Option
#include <options/Option.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9bacc578119edc73_6_new,"options.FpsSettingsState","new",0x30deb727,"options.FpsSettingsState.new","options/FpsSettingsState.hx",6,0x60df4ec8)
HX_LOCAL_STACK_FRAME(_hx_pos_9bacc578119edc73_62_onChangeFPSCounter,"options.FpsSettingsState","onChangeFPSCounter",0xf9ffa7fb,"options.FpsSettingsState.onChangeFPSCounter","options/FpsSettingsState.hx",62,0x60df4ec8)
namespace options{

void FpsSettingsState_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_9bacc578119edc73_6_new)
HXLINE(   7)		this->title = HX_("Fps",c9,7f,35,00);
HXLINE(   8)		this->rpcTitle = HX_("Fps Settings Menu",65,d7,c9,b9);
HXLINE(  10)		 ::options::Option option =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Fps rainbow",df,35,66,51),HX_("his name say all",65,2e,2a,be),HX_("rainbowFPS",53,88,dd,49),HX_("bool",2a,84,1b,41),null());
HXLINE(  14)		this->addOption(option);
HXLINE(  16)		 ::options::Option option1 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Total Fps",4d,b9,10,e9),HX_("his name say all",65,2e,2a,be),HX_("totalFPS",85,c2,86,75),HX_("bool",2a,84,1b,41),null());
HXLINE(  20)		this->addOption(option1);
HXLINE(  22)		 ::options::Option option2 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Engine Version",ba,c0,7b,0a),HX_("his name say all",65,2e,2a,be),HX_("engineVersion",76,23,20,fc),HX_("bool",2a,84,1b,41),null());
HXLINE(  26)		this->addOption(option2);
HXLINE(  28)		 ::options::Option option3 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Memory peak",7e,b7,d5,da),HX_("his name say all",65,2e,2a,be),HX_("totalMemory",e5,bd,f5,ca),HX_("bool",2a,84,1b,41),null());
HXLINE(  32)		this->addOption(option3);
HXLINE(  34)		 ::options::Option option4 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Memory GB",ba,b1,85,0d),HX_("his name say all",65,2e,2a,be),HX_("memoryGB",5c,8b,89,8c),HX_("bool",2a,84,1b,41),null());
HXLINE(  38)		this->addOption(option4);
HXLINE(  40)		 ::options::Option option5 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Memory",21,3f,54,39),HX_("his name say all",65,2e,2a,be),HX_("memory",01,cb,bf,04),HX_("bool",2a,84,1b,41),null());
HXLINE(  44)		this->addOption(option5);
HXLINE(  47)		 ::options::Option option6 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("FPS Counter",85,ef,54,c9),HX_("If unchecked, hides FPS Counter.",17,fc,a1,74),HX_("showFPS",ec,0a,9a,7b),HX_("bool",2a,84,1b,41),null());
HXLINE(  51)		this->addOption(option6);
HXLINE(  52)		option6->onChange = this->onChangeFPSCounter_dyn();
HXLINE(  55)		super::__construct();
            	}

Dynamic FpsSettingsState_obj::__CreateEmpty() { return new FpsSettingsState_obj; }

void *FpsSettingsState_obj::_hx_vtable = 0;

Dynamic FpsSettingsState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FpsSettingsState_obj > _hx_result = new FpsSettingsState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FpsSettingsState_obj::_hx_isInstanceOf(int inClassId) {
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
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x6bc88d9f || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void FpsSettingsState_obj::onChangeFPSCounter(){
            	HX_STACKFRAME(&_hx_pos_9bacc578119edc73_62_onChangeFPSCounter)
HXDLIN(  62)		if (::hx::IsNotNull( ::Main_obj::fpsVar )) {
HXLINE(  63)			::Main_obj::fpsVar->set_visible(::backend::ClientPrefs_obj::data->showFPS);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FpsSettingsState_obj,onChangeFPSCounter,(void))


::hx::ObjectPtr< FpsSettingsState_obj > FpsSettingsState_obj::__new() {
	::hx::ObjectPtr< FpsSettingsState_obj > __this = new FpsSettingsState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FpsSettingsState_obj > FpsSettingsState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FpsSettingsState_obj *__this = (FpsSettingsState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FpsSettingsState_obj), true, "options.FpsSettingsState"));
	*(void **)__this = FpsSettingsState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FpsSettingsState_obj::FpsSettingsState_obj()
{
}

::hx::Val FpsSettingsState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"onChangeFPSCounter") ) { return ::hx::Val( onChangeFPSCounter_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FpsSettingsState_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FpsSettingsState_obj_sStaticStorageInfo = 0;
#endif

static ::String FpsSettingsState_obj_sMemberFields[] = {
	HX_("onChangeFPSCounter",e2,d6,e7,e3),
	::String(null()) };

::hx::Class FpsSettingsState_obj::__mClass;

void FpsSettingsState_obj::__register()
{
	FpsSettingsState_obj _hx_dummy;
	FpsSettingsState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.FpsSettingsState",b5,97,04,87);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FpsSettingsState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FpsSettingsState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FpsSettingsState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FpsSettingsState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace options
