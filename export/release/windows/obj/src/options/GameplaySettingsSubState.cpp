#include <hxcpp.h>

#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_MusicBeatSubstate
#include <backend/MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_options_BaseOptionsMenu
#include <options/BaseOptionsMenu.h>
#endif
#ifndef INCLUDED_options_GameplaySettingsSubState
#include <options/GameplaySettingsSubState.h>
#endif
#ifndef INCLUDED_options_Option
#include <options/Option.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_37066bb048b40dd4_6_new,"options.GameplaySettingsSubState","new",0xd343549c,"options.GameplaySettingsSubState.new","options/GameplaySettingsSubState.hx",6,0x85e60df3)
HX_LOCAL_STACK_FRAME(_hx_pos_37066bb048b40dd4_128_onChangeHitsoundVolume,"options.GameplaySettingsSubState","onChangeHitsoundVolume",0x34624629,"options.GameplaySettingsSubState.onChangeHitsoundVolume","options/GameplaySettingsSubState.hx",128,0x85e60df3)
namespace options{

void GameplaySettingsSubState_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_37066bb048b40dd4_6_new)
HXLINE(   7)		this->title = HX_("Gameplay Settings",5d,89,f2,c3);
HXLINE(   8)		this->rpcTitle = HX_("Gameplay Settings Menu",62,67,72,62);
HXLINE(  11)		 ::options::Option option =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Downscroll",0f,4a,85,46),HX_("If checked, notes go Down instead of Up, simple enough.",0d,a5,bc,fc),HX_("downScroll",0f,ba,68,84),HX_("bool",2a,84,1b,41),null());
HXLINE(  15)		this->addOption(option);
HXLINE(  17)		 ::options::Option option1 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Middlescroll",42,a5,d6,f5),HX_("If checked, your notes get centered.",9c,98,94,3e),HX_("middleScroll",42,cd,58,62),HX_("bool",2a,84,1b,41),null());
HXLINE(  21)		this->addOption(option1);
HXLINE(  23)		 ::options::Option option2 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Opponent Notes",7e,b9,ec,7e),HX_("If unchecked, opponent notes get hidden.",57,fc,a8,02),HX_("opponentStrums",87,04,01,1c),HX_("bool",2a,84,1b,41),null());
HXLINE(  27)		this->addOption(option2);
HXLINE(  29)		 ::options::Option option3 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Ghost Tapping",44,6c,9f,40),HX_("If checked, you won't get misses from pressing keys\nwhile there are no notes able to be hit.",c7,46,2f,fa),HX_("ghostTapping",c6,6a,da,10),HX_("bool",2a,84,1b,41),null());
HXLINE(  33)		this->addOption(option3);
HXLINE(  35)		 ::options::Option option4 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Rating Offset",36,6d,0e,f3),HX_("Changes how late/early you have to hit for a \"Sick!\"\nHigher values mean you have to hit later.",98,66,84,c8),HX_("ratingOffset",90,b3,eb,a5),HX_("int",ef,0c,50,00),null());
HXLINE(  39)		option4->displayFormat = HX_("%vms",57,ce,ce,18);
HXLINE(  40)		option4->scrollSpeed = ( (Float)(20) );
HXLINE(  41)		option4->minValue = -30;
HXLINE(  42)		option4->maxValue = 30;
HXLINE(  43)		this->addOption(option4);
HXLINE(  45)		 ::options::Option option5 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Disable Reset Button",bb,b9,2b,75),HX_("If checked, pressing Reset won't do anything.",ee,76,e8,10),HX_("noReset",ce,cd,cb,b9),HX_("bool",2a,84,1b,41),null());
HXLINE(  49)		this->addOption(option5);
HXLINE(  51)		 ::options::Option option6 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Hitsound Volume",de,af,92,68),HX_("Funny notes does \"Tick!\" when you hit them.\"",b2,5a,bb,e5),HX_("hitsoundVolume",96,34,9b,8f),HX_("percent",c5,aa,da,78),null());
HXLINE(  55)		this->addOption(option6);
HXLINE(  56)		option6->scrollSpeed = ((Float)1.6);
HXLINE(  57)		option6->minValue = ((Float)0.0);
HXLINE(  58)		option6->maxValue = 1;
HXLINE(  59)		option6->changeValue = ((Float)0.1);
HXLINE(  60)		option6->decimals = 1;
HXLINE(  61)		option6->onChange = this->onChangeHitsoundVolume_dyn();
HXLINE(  63)		 ::options::Option option7 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Rating Offset",36,6d,0e,f3),HX_("Changes how late/early you have to hit for a \"Sick!\"\nHigher values mean you have to hit later.",98,66,84,c8),HX_("ratingOffset",90,b3,eb,a5),HX_("int",ef,0c,50,00),null());
HXLINE(  67)		option7->displayFormat = HX_("%vms",57,ce,ce,18);
HXLINE(  68)		option7->scrollSpeed = ( (Float)(20) );
HXLINE(  69)		option7->minValue = -30;
HXLINE(  70)		option7->maxValue = 30;
HXLINE(  71)		this->addOption(option7);
HXLINE(  73)		 ::options::Option option8 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Perfect! Hit Window",69,84,e9,02),HX_("Changes the amount of time you have\nfor hitting a \"Sick!\" in milliseconds.",70,a1,b8,aa),HX_("perfectWindow",dd,14,10,2c),HX_("int",ef,0c,50,00),null());
HXLINE(  77)		option8->displayFormat = HX_("%vms",57,ce,ce,18);
HXLINE(  78)		option8->scrollSpeed = ( (Float)(15) );
HXLINE(  79)		option8->minValue = 1;
HXLINE(  80)		option8->maxValue = 20;
HXLINE(  81)		this->addOption(option8);
HXLINE(  83)		 ::options::Option option9 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Sick! Hit Window",da,75,69,f4),HX_("Changes the amount of time you have\nfor hitting a \"Sick!\" in milliseconds.",70,a1,b8,aa),HX_("sickWindow",4e,b7,93,ed),HX_("int",ef,0c,50,00),null());
HXLINE(  87)		option9->displayFormat = HX_("%vms",57,ce,ce,18);
HXLINE(  88)		option9->scrollSpeed = ( (Float)(15) );
HXLINE(  89)		option9->minValue = 15;
HXLINE(  90)		option9->maxValue = 45;
HXLINE(  91)		this->addOption(option9);
HXLINE(  93)		 ::options::Option option10 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Good Hit Window",40,78,9c,02),HX_("Changes the amount of time you have\nfor hitting a \"Good\" in milliseconds.",6e,11,57,54),HX_("goodWindow",0d,a9,05,67),HX_("int",ef,0c,50,00),null());
HXLINE(  97)		option10->displayFormat = HX_("%vms",57,ce,ce,18);
HXLINE(  98)		option10->scrollSpeed = ( (Float)(30) );
HXLINE(  99)		option10->minValue = 15;
HXLINE( 100)		option10->maxValue = 90;
HXLINE( 101)		this->addOption(option10);
HXLINE( 103)		 ::options::Option option11 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Bad Hit Window",f8,a4,d4,a7),HX_("Changes the amount of time you have\nfor hitting a \"Bad\" in milliseconds.",92,b2,88,fa),HX_("badWindow",95,db,0a,32),HX_("int",ef,0c,50,00),null());
HXLINE( 107)		option11->displayFormat = HX_("%vms",57,ce,ce,18);
HXLINE( 108)		option11->scrollSpeed = ( (Float)(60) );
HXLINE( 109)		option11->minValue = 15;
HXLINE( 110)		option11->maxValue = 135;
HXLINE( 111)		this->addOption(option11);
HXLINE( 113)		 ::options::Option option12 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Safe Frames",19,0a,34,55),HX_("Changes how many frames you have for\nhitting a note earlier or late.",09,48,9a,6e),HX_("safeFrames",d3,18,18,62),HX_("float",9c,c5,96,02),null());
HXLINE( 117)		option12->scrollSpeed = ( (Float)(5) );
HXLINE( 118)		option12->minValue = 2;
HXLINE( 119)		option12->maxValue = 10;
HXLINE( 120)		option12->changeValue = ((Float)0.1);
HXLINE( 121)		this->addOption(option12);
HXLINE( 123)		super::__construct();
            	}

Dynamic GameplaySettingsSubState_obj::__CreateEmpty() { return new GameplaySettingsSubState_obj; }

void *GameplaySettingsSubState_obj::_hx_vtable = 0;

Dynamic GameplaySettingsSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameplaySettingsSubState_obj > _hx_result = new GameplaySettingsSubState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GameplaySettingsSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5661ffbf) {
		if (inClassId<=(int)0x3499c078) {
			if (inClassId<=(int)0x0cc50116) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0cc50116;
			} else {
				return inClassId==(int)0x3499c078;
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

void GameplaySettingsSubState_obj::onChangeHitsoundVolume(){
            	HX_STACKFRAME(&_hx_pos_37066bb048b40dd4_128_onChangeHitsoundVolume)
HXDLIN( 128)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 128)		 ::openfl::media::Sound _hx_tmp1 = ::backend::Paths_obj::sound(HX_("hitsound",9c,79,fe,2c),null());
HXDLIN( 128)		_hx_tmp->play(_hx_tmp1,::backend::ClientPrefs_obj::data->hitsoundVolume,null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameplaySettingsSubState_obj,onChangeHitsoundVolume,(void))


::hx::ObjectPtr< GameplaySettingsSubState_obj > GameplaySettingsSubState_obj::__new() {
	::hx::ObjectPtr< GameplaySettingsSubState_obj > __this = new GameplaySettingsSubState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GameplaySettingsSubState_obj > GameplaySettingsSubState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GameplaySettingsSubState_obj *__this = (GameplaySettingsSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameplaySettingsSubState_obj), true, "options.GameplaySettingsSubState"));
	*(void **)__this = GameplaySettingsSubState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GameplaySettingsSubState_obj::GameplaySettingsSubState_obj()
{
}

::hx::Val GameplaySettingsSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"onChangeHitsoundVolume") ) { return ::hx::Val( onChangeHitsoundVolume_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GameplaySettingsSubState_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GameplaySettingsSubState_obj_sStaticStorageInfo = 0;
#endif

static ::String GameplaySettingsSubState_obj_sMemberFields[] = {
	HX_("onChangeHitsoundVolume",e5,b4,78,31),
	::String(null()) };

::hx::Class GameplaySettingsSubState_obj::__mClass;

void GameplaySettingsSubState_obj::__register()
{
	GameplaySettingsSubState_obj _hx_dummy;
	GameplaySettingsSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.GameplaySettingsSubState",aa,16,a6,b6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GameplaySettingsSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GameplaySettingsSubState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameplaySettingsSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameplaySettingsSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace options
