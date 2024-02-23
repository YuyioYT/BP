#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_Difficulty
#include <backend/Difficulty.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_WeekData
#include <backend/WeekData.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3c198266d4e3ce55_14_getFilePath,"backend.Difficulty","getFilePath",0xb61f8b7e,"backend.Difficulty.getFilePath","backend/Difficulty.hx",14,0x077d20c8)
HX_LOCAL_STACK_FRAME(_hx_pos_3c198266d4e3ce55_30_loadFromWeek,"backend.Difficulty","loadFromWeek",0x3ccf565d,"backend.Difficulty.loadFromWeek","backend/Difficulty.hx",30,0x077d20c8)
HX_LOCAL_STACK_FRAME(_hx_pos_3c198266d4e3ce55_56_resetList,"backend.Difficulty","resetList",0x6a0ba094,"backend.Difficulty.resetList","backend/Difficulty.hx",56,0x077d20c8)
HX_LOCAL_STACK_FRAME(_hx_pos_3c198266d4e3ce55_61_copyFrom,"backend.Difficulty","copyFrom",0x164846d8,"backend.Difficulty.copyFrom","backend/Difficulty.hx",61,0x077d20c8)
HX_LOCAL_STACK_FRAME(_hx_pos_3c198266d4e3ce55_66_getString,"backend.Difficulty","getString",0x69f32cce,"backend.Difficulty.getString","backend/Difficulty.hx",66,0x077d20c8)
HX_LOCAL_STACK_FRAME(_hx_pos_3c198266d4e3ce55_71_getDefault,"backend.Difficulty","getDefault",0xeda45224,"backend.Difficulty.getDefault","backend/Difficulty.hx",71,0x077d20c8)
HX_LOCAL_STACK_FRAME(_hx_pos_3c198266d4e3ce55_5_boot,"backend.Difficulty","boot",0xee6efecb,"backend.Difficulty.boot","backend/Difficulty.hx",5,0x077d20c8)
static const ::String _hx_array_data_d184ec75_8[] = {
	HX_("Easy",22,b8,e5,2d),HX_("Normal",47,e6,fd,64),HX_("Hard",0b,5b,e1,2f),
};
HX_LOCAL_STACK_FRAME(_hx_pos_3c198266d4e3ce55_10_boot,"backend.Difficulty","boot",0xee6efecb,"backend.Difficulty.boot","backend/Difficulty.hx",10,0x077d20c8)
HX_LOCAL_STACK_FRAME(_hx_pos_3c198266d4e3ce55_11_boot,"backend.Difficulty","boot",0xee6efecb,"backend.Difficulty.boot","backend/Difficulty.hx",11,0x077d20c8)
namespace backend{

void Difficulty_obj::__construct() { }

Dynamic Difficulty_obj::__CreateEmpty() { return new Difficulty_obj; }

void *Difficulty_obj::_hx_vtable = 0;

Dynamic Difficulty_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Difficulty_obj > _hx_result = new Difficulty_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Difficulty_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x42e0846f;
}

::Array< ::String > Difficulty_obj::defaultList;

::Array< ::String > Difficulty_obj::list;

::String Difficulty_obj::defaultDifficulty;

::String Difficulty_obj::getFilePath( ::Dynamic num){
            	HX_GC_STACKFRAME(&_hx_pos_3c198266d4e3ce55_14_getFilePath)
HXLINE(  15)		if (::hx::IsNull( num )) {
HXLINE(  15)			num = ::states::PlayState_obj::storyDifficulty;
            		}
HXLINE(  17)		::String fileSuffix = ::backend::Difficulty_obj::list->__get(( (int)(num) ));
HXLINE(  18)		if ((fileSuffix != ::backend::Difficulty_obj::defaultDifficulty)) {
HXLINE(  20)			fileSuffix = (HX_("-",2d,00,00,00) + fileSuffix);
            		}
            		else {
HXLINE(  24)			fileSuffix = HX_("",00,00,00,00);
            		}
HXLINE(  26)		 ::EReg invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXDLIN(  26)		 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXDLIN(  26)		::String path = invalidChars->split(::StringTools_obj::replace(fileSuffix,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXDLIN(  26)		return hideChars->split(path)->join(HX_("",00,00,00,00)).toLowerCase();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Difficulty_obj,getFilePath,return )

void Difficulty_obj::loadFromWeek( ::backend::WeekData week){
            	HX_STACKFRAME(&_hx_pos_3c198266d4e3ce55_30_loadFromWeek)
HXLINE(  31)		if (::hx::IsNull( week )) {
HXLINE(  31)			week = ::backend::WeekData_obj::getCurrentWeek();
            		}
HXLINE(  33)		::String diffStr = week->difficulties;
HXLINE(  34)		bool _hx_tmp;
HXDLIN(  34)		if (::hx::IsNotNull( diffStr )) {
HXLINE(  34)			_hx_tmp = (diffStr.length > 0);
            		}
            		else {
HXLINE(  34)			_hx_tmp = false;
            		}
HXDLIN(  34)		if (_hx_tmp) {
HXLINE(  36)			::Array< ::String > diffs = ::StringTools_obj::trim(diffStr).split(HX_(",",2c,00,00,00));
HXLINE(  37)			int i = (diffs->length - 1);
HXLINE(  38)			while((i > 0)){
HXLINE(  40)				if (::hx::IsNotNull( diffs->__get(i) )) {
HXLINE(  42)					diffs[i] = ::StringTools_obj::trim(diffs->__get(i));
HXLINE(  43)					if ((diffs->__get(i).length < 1)) {
HXLINE(  43)						diffs->remove(diffs->__get(i));
            					}
            				}
HXLINE(  45)				i = (i - 1);
            			}
HXLINE(  48)			bool _hx_tmp;
HXDLIN(  48)			if ((diffs->length > 0)) {
HXLINE(  48)				_hx_tmp = (diffs->__get(0).length > 0);
            			}
            			else {
HXLINE(  48)				_hx_tmp = false;
            			}
HXDLIN(  48)			if (_hx_tmp) {
HXLINE(  49)				::backend::Difficulty_obj::list = diffs;
            			}
            		}
            		else {
HXLINE(  51)			::backend::Difficulty_obj::list = ::backend::Difficulty_obj::defaultList->copy();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Difficulty_obj,loadFromWeek,(void))

void Difficulty_obj::resetList(){
            	HX_STACKFRAME(&_hx_pos_3c198266d4e3ce55_56_resetList)
HXDLIN(  56)		::backend::Difficulty_obj::list = ::backend::Difficulty_obj::defaultList->copy();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Difficulty_obj,resetList,(void))

void Difficulty_obj::copyFrom(::Array< ::String > diffs){
            	HX_STACKFRAME(&_hx_pos_3c198266d4e3ce55_61_copyFrom)
HXDLIN(  61)		::backend::Difficulty_obj::list = diffs->copy();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Difficulty_obj,copyFrom,(void))

::String Difficulty_obj::getString( ::Dynamic num){
            	HX_STACKFRAME(&_hx_pos_3c198266d4e3ce55_66_getString)
HXDLIN(  66)		 ::Dynamic _hx_tmp;
HXDLIN(  66)		if (::hx::IsNull( num )) {
HXDLIN(  66)			_hx_tmp = ::states::PlayState_obj::storyDifficulty;
            		}
            		else {
HXDLIN(  66)			_hx_tmp = num;
            		}
HXDLIN(  66)		return ::backend::Difficulty_obj::list->__get(( (int)(_hx_tmp) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Difficulty_obj,getString,return )

::String Difficulty_obj::getDefault(){
            	HX_STACKFRAME(&_hx_pos_3c198266d4e3ce55_71_getDefault)
HXDLIN(  71)		return ::backend::Difficulty_obj::defaultDifficulty;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Difficulty_obj,getDefault,return )


Difficulty_obj::Difficulty_obj()
{
}

bool Difficulty_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { outValue = ( list ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { outValue = copyFrom_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resetList") ) { outValue = resetList_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getString") ) { outValue = getString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getDefault") ) { outValue = getDefault_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultList") ) { outValue = ( defaultList ); return true; }
		if (HX_FIELD_EQ(inName,"getFilePath") ) { outValue = getFilePath_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromWeek") ) { outValue = loadFromWeek_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultDifficulty") ) { outValue = ( defaultDifficulty ); return true; }
	}
	return false;
}

bool Difficulty_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultList") ) { defaultList=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultDifficulty") ) { defaultDifficulty=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Difficulty_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Difficulty_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Difficulty_obj::defaultList,HX_("defaultList",bf,15,72,19)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Difficulty_obj::list,HX_("list",5e,1c,b3,47)},
	{::hx::fsString,(void *) &Difficulty_obj::defaultDifficulty,HX_("defaultDifficulty",5c,06,f0,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Difficulty_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Difficulty_obj::defaultList,"defaultList");
	HX_MARK_MEMBER_NAME(Difficulty_obj::list,"list");
	HX_MARK_MEMBER_NAME(Difficulty_obj::defaultDifficulty,"defaultDifficulty");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Difficulty_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Difficulty_obj::defaultList,"defaultList");
	HX_VISIT_MEMBER_NAME(Difficulty_obj::list,"list");
	HX_VISIT_MEMBER_NAME(Difficulty_obj::defaultDifficulty,"defaultDifficulty");
};

#endif

::hx::Class Difficulty_obj::__mClass;

static ::String Difficulty_obj_sStaticFields[] = {
	HX_("defaultList",bf,15,72,19),
	HX_("list",5e,1c,b3,47),
	HX_("defaultDifficulty",5c,06,f0,1d),
	HX_("getFilePath",f7,90,89,89),
	HX_("loadFromWeek",c4,1a,2a,66),
	HX_("resetList",cd,25,9f,8d),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("getString",07,b2,86,8d),
	HX_("getDefault",cb,5e,25,eb),
	::String(null())
};

void Difficulty_obj::__register()
{
	Difficulty_obj _hx_dummy;
	Difficulty_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.Difficulty",75,ec,84,d1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Difficulty_obj::__GetStatic;
	__mClass->mSetStaticField = &Difficulty_obj::__SetStatic;
	__mClass->mMarkFunc = Difficulty_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Difficulty_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Difficulty_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Difficulty_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Difficulty_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Difficulty_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Difficulty_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3c198266d4e3ce55_5_boot)
HXDLIN(   5)		defaultList = ::Array_obj< ::String >::fromData( _hx_array_data_d184ec75_8,3);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3c198266d4e3ce55_10_boot)
HXDLIN(  10)		list = ::Array_obj< ::String >::__new(0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3c198266d4e3ce55_11_boot)
HXDLIN(  11)		defaultDifficulty = HX_("Normal",47,e6,fd,64);
            	}
}

} // end namespace backend
