#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3c83418b2d0c004c_10_resetSong,"backend.Highscore","resetSong",0xf547768c,"backend.Highscore.resetSong","backend/Highscore.hx",10,0xe0f53649)
HX_LOCAL_STACK_FRAME(_hx_pos_3c83418b2d0c004c_17_floorDecimal,"backend.Highscore","floorDecimal",0x24b4cfdd,"backend.Highscore.floorDecimal","backend/Highscore.hx",17,0xe0f53649)
HX_LOCAL_STACK_FRAME(_hx_pos_3c83418b2d0c004c_33_resetWeek,"backend.Highscore","resetWeek",0xf7e4b2ab,"backend.Highscore.resetWeek","backend/Highscore.hx",33,0xe0f53649)
HX_LOCAL_STACK_FRAME(_hx_pos_3c83418b2d0c004c_39_saveScore,"backend.Highscore","saveScore",0x6a89c41d,"backend.Highscore.saveScore","backend/Highscore.hx",39,0xe0f53649)
HX_LOCAL_STACK_FRAME(_hx_pos_3c83418b2d0c004c_55_saveWeekScore,"backend.Highscore","saveWeekScore",0x55bd4109,"backend.Highscore.saveWeekScore","backend/Highscore.hx",55,0xe0f53649)
HX_LOCAL_STACK_FRAME(_hx_pos_3c83418b2d0c004c_71_setScore,"backend.Highscore","setScore",0xb0d35408,"backend.Highscore.setScore","backend/Highscore.hx",71,0xe0f53649)
HX_LOCAL_STACK_FRAME(_hx_pos_3c83418b2d0c004c_78_setWeekScore,"backend.Highscore","setWeekScore",0x90a4a274,"backend.Highscore.setWeekScore","backend/Highscore.hx",78,0xe0f53649)
HX_LOCAL_STACK_FRAME(_hx_pos_3c83418b2d0c004c_86_setRating,"backend.Highscore","setRating",0x7e34f2a7,"backend.Highscore.setRating","backend/Highscore.hx",86,0xe0f53649)
HX_LOCAL_STACK_FRAME(_hx_pos_3c83418b2d0c004c_95_formatSong,"backend.Highscore","formatSong",0x4b9a1c64,"backend.Highscore.formatSong","backend/Highscore.hx",95,0xe0f53649)
HX_LOCAL_STACK_FRAME(_hx_pos_3c83418b2d0c004c_99_getScore,"backend.Highscore","getScore",0x0275fa94,"backend.Highscore.getScore","backend/Highscore.hx",99,0xe0f53649)
HX_LOCAL_STACK_FRAME(_hx_pos_3c83418b2d0c004c_108_getRating,"backend.Highscore","getRating",0x9ae4069b,"backend.Highscore.getRating","backend/Highscore.hx",108,0xe0f53649)
HX_LOCAL_STACK_FRAME(_hx_pos_3c83418b2d0c004c_117_getWeekScore,"backend.Highscore","getWeekScore",0x7bab7f00,"backend.Highscore.getWeekScore","backend/Highscore.hx",117,0xe0f53649)
HX_LOCAL_STACK_FRAME(_hx_pos_3c83418b2d0c004c_126_load,"backend.Highscore","load",0x5f08d5de,"backend.Highscore.load","backend/Highscore.hx",126,0xe0f53649)
HX_LOCAL_STACK_FRAME(_hx_pos_3c83418b2d0c004c_5_boot,"backend.Highscore","boot",0x586cbfea,"backend.Highscore.boot","backend/Highscore.hx",5,0xe0f53649)
HX_LOCAL_STACK_FRAME(_hx_pos_3c83418b2d0c004c_6_boot,"backend.Highscore","boot",0x586cbfea,"backend.Highscore.boot","backend/Highscore.hx",6,0xe0f53649)
HX_LOCAL_STACK_FRAME(_hx_pos_3c83418b2d0c004c_7_boot,"backend.Highscore","boot",0x586cbfea,"backend.Highscore.boot","backend/Highscore.hx",7,0xe0f53649)
namespace backend{

void Highscore_obj::__construct() { }

Dynamic Highscore_obj::__CreateEmpty() { return new Highscore_obj; }

void *Highscore_obj::_hx_vtable = 0;

Dynamic Highscore_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Highscore_obj > _hx_result = new Highscore_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Highscore_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1905c4fc;
}

 ::haxe::ds::StringMap Highscore_obj::weekScores;

 ::haxe::ds::StringMap Highscore_obj::songScores;

 ::haxe::ds::StringMap Highscore_obj::songRating;

void Highscore_obj::resetSong(::String song,::hx::Null< int >  __o_diff){
            		int diff = __o_diff.Default(0);
            	HX_STACKFRAME(&_hx_pos_3c83418b2d0c004c_10_resetSong)
HXLINE(  11)		::String daSong = ::backend::Highscore_obj::formatSong(song,diff);
HXLINE(  12)		::backend::Highscore_obj::setScore(daSong,0);
HXLINE(  13)		::backend::Highscore_obj::setRating(daSong,( (Float)(0) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,resetSong,(void))

Float Highscore_obj::floorDecimal(Float value,int decimals){
            	HX_STACKFRAME(&_hx_pos_3c83418b2d0c004c_17_floorDecimal)
HXLINE(  18)		if ((decimals < 1)) {
HXLINE(  20)			return ( (Float)(::Math_obj::floor(value)) );
            		}
HXLINE(  23)		Float tempMult = ( (Float)(1) );
HXLINE(  24)		{
HXLINE(  24)			int _g = 0;
HXDLIN(  24)			int _g1 = decimals;
HXDLIN(  24)			while((_g < _g1)){
HXLINE(  24)				_g = (_g + 1);
HXDLIN(  24)				int i = (_g - 1);
HXLINE(  26)				tempMult = (tempMult * ( (Float)(10) ));
            			}
            		}
HXLINE(  28)		Float newValue = ( (Float)(::Math_obj::floor((value * tempMult))) );
HXLINE(  29)		return (newValue / tempMult);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,floorDecimal,return )

void Highscore_obj::resetWeek(::String week,::hx::Null< int >  __o_diff){
            		int diff = __o_diff.Default(0);
            	HX_STACKFRAME(&_hx_pos_3c83418b2d0c004c_33_resetWeek)
HXLINE(  34)		::String daWeek = ::backend::Highscore_obj::formatSong(week,diff);
HXLINE(  35)		::backend::Highscore_obj::setWeekScore(daWeek,0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,resetWeek,(void))

void Highscore_obj::saveScore(::String song,::hx::Null< int >  __o_score, ::Dynamic __o_diff, ::Dynamic __o_rating){
            		int score = __o_score.Default(0);
            		 ::Dynamic diff = __o_diff;
            		if (::hx::IsNull(__o_diff)) diff = 0;
            		 ::Dynamic rating = __o_rating;
            		if (::hx::IsNull(__o_rating)) rating = -1;
            	HX_STACKFRAME(&_hx_pos_3c83418b2d0c004c_39_saveScore)
HXLINE(  40)		::String daSong = ::backend::Highscore_obj::formatSong(song,( (int)(diff) ));
HXLINE(  42)		if (::backend::Highscore_obj::songScores->exists(daSong)) {
HXLINE(  43)			if (::hx::IsLess( ::backend::Highscore_obj::songScores->get(daSong),score )) {
HXLINE(  44)				::backend::Highscore_obj::setScore(daSong,score);
HXLINE(  45)				if (::hx::IsGreaterEq( rating,0 )) {
HXLINE(  45)					::backend::Highscore_obj::setRating(daSong,( (Float)(rating) ));
            				}
            			}
            		}
            		else {
HXLINE(  49)			::backend::Highscore_obj::setScore(daSong,score);
HXLINE(  50)			if (::hx::IsGreaterEq( rating,0 )) {
HXLINE(  50)				::backend::Highscore_obj::setRating(daSong,( (Float)(rating) ));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Highscore_obj,saveScore,(void))

void Highscore_obj::saveWeekScore(::String week,::hx::Null< int >  __o_score, ::Dynamic __o_diff){
            		int score = __o_score.Default(0);
            		 ::Dynamic diff = __o_diff;
            		if (::hx::IsNull(__o_diff)) diff = 0;
            	HX_STACKFRAME(&_hx_pos_3c83418b2d0c004c_55_saveWeekScore)
HXLINE(  56)		::String daWeek = ::backend::Highscore_obj::formatSong(week,( (int)(diff) ));
HXLINE(  58)		if (::backend::Highscore_obj::weekScores->exists(daWeek)) {
HXLINE(  60)			if (::hx::IsLess( ::backend::Highscore_obj::weekScores->get(daWeek),score )) {
HXLINE(  61)				::backend::Highscore_obj::setWeekScore(daWeek,score);
            			}
            		}
            		else {
HXLINE(  64)			::backend::Highscore_obj::setWeekScore(daWeek,score);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Highscore_obj,saveWeekScore,(void))

void Highscore_obj::setScore(::String song,int score){
            	HX_STACKFRAME(&_hx_pos_3c83418b2d0c004c_71_setScore)
HXLINE(  73)		::backend::Highscore_obj::songScores->set(song,score);
HXLINE(  74)		::flixel::FlxG_obj::save->data->__SetField(HX_("songScores",96,1a,f0,a0),::backend::Highscore_obj::songScores,::hx::paccDynamic);
HXLINE(  75)		::flixel::FlxG_obj::save->flush(null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,setScore,(void))

void Highscore_obj::setWeekScore(::String week,int score){
            	HX_STACKFRAME(&_hx_pos_3c83418b2d0c004c_78_setWeekScore)
HXLINE(  80)		::backend::Highscore_obj::weekScores->set(week,score);
HXLINE(  81)		::flixel::FlxG_obj::save->data->__SetField(HX_("weekScores",f5,b7,3b,08),::backend::Highscore_obj::weekScores,::hx::paccDynamic);
HXLINE(  82)		::flixel::FlxG_obj::save->flush(null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,setWeekScore,(void))

void Highscore_obj::setRating(::String song,Float rating){
            	HX_STACKFRAME(&_hx_pos_3c83418b2d0c004c_86_setRating)
HXLINE(  88)		::backend::Highscore_obj::songRating->set(song,rating);
HXLINE(  89)		::flixel::FlxG_obj::save->data->__SetField(HX_("songRating",d2,d9,0e,17),::backend::Highscore_obj::songRating,::hx::paccDynamic);
HXLINE(  90)		::flixel::FlxG_obj::save->flush(null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,setRating,(void))

::String Highscore_obj::formatSong(::String song,int diff){
            	HX_GC_STACKFRAME(&_hx_pos_3c83418b2d0c004c_95_formatSong)
HXDLIN(  95)		 ::EReg invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXDLIN(  95)		 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXDLIN(  95)		::String path = invalidChars->split(::StringTools_obj::replace(song,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXDLIN(  95)		::String _hx_tmp = hideChars->split(path)->join(HX_("",00,00,00,00)).toLowerCase();
HXDLIN(  95)		 ::Dynamic num = diff;
HXDLIN(  95)		if (::hx::IsNull( num )) {
HXDLIN(  95)			num = ::states::PlayState_obj::storyDifficulty;
            		}
HXDLIN(  95)		::String fileSuffix = ::backend::Difficulty_obj::list->__get(( (int)(num) ));
HXDLIN(  95)		if ((fileSuffix != ::backend::Difficulty_obj::defaultDifficulty)) {
HXDLIN(  95)			fileSuffix = (HX_("-",2d,00,00,00) + fileSuffix);
            		}
            		else {
HXDLIN(  95)			fileSuffix = HX_("",00,00,00,00);
            		}
HXDLIN(  95)		 ::EReg invalidChars1 =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXDLIN(  95)		 ::EReg hideChars1 =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXDLIN(  95)		::String path1 = invalidChars1->split(::StringTools_obj::replace(fileSuffix,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXDLIN(  95)		return (_hx_tmp + hideChars1->split(path1)->join(HX_("",00,00,00,00)).toLowerCase());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,formatSong,return )

int Highscore_obj::getScore(::String song,int diff){
            	HX_STACKFRAME(&_hx_pos_3c83418b2d0c004c_99_getScore)
HXLINE( 100)		::String daSong = ::backend::Highscore_obj::formatSong(song,diff);
HXLINE( 101)		if (!(::backend::Highscore_obj::songScores->exists(daSong))) {
HXLINE( 102)			::backend::Highscore_obj::setScore(daSong,0);
            		}
HXLINE( 104)		return ::backend::Highscore_obj::songScores->get_int(daSong);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,getScore,return )

Float Highscore_obj::getRating(::String song,int diff){
            	HX_STACKFRAME(&_hx_pos_3c83418b2d0c004c_108_getRating)
HXLINE( 109)		::String daSong = ::backend::Highscore_obj::formatSong(song,diff);
HXLINE( 110)		if (!(::backend::Highscore_obj::songRating->exists(daSong))) {
HXLINE( 111)			::backend::Highscore_obj::setRating(daSong,( (Float)(0) ));
            		}
HXLINE( 113)		return ::backend::Highscore_obj::songRating->get_float(daSong);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,getRating,return )

int Highscore_obj::getWeekScore(::String week,int diff){
            	HX_STACKFRAME(&_hx_pos_3c83418b2d0c004c_117_getWeekScore)
HXLINE( 118)		::String daWeek = ::backend::Highscore_obj::formatSong(week,diff);
HXLINE( 119)		if (!(::backend::Highscore_obj::weekScores->exists(daWeek))) {
HXLINE( 120)			::backend::Highscore_obj::setWeekScore(daWeek,0);
            		}
HXLINE( 122)		return ::backend::Highscore_obj::weekScores->get_int(daWeek);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,getWeekScore,return )

void Highscore_obj::load(){
            	HX_STACKFRAME(&_hx_pos_3c83418b2d0c004c_126_load)
HXLINE( 127)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("weekScores",f5,b7,3b,08),::hx::paccDynamic) )) {
HXLINE( 129)			::backend::Highscore_obj::weekScores = ( ( ::haxe::ds::StringMap)(::flixel::FlxG_obj::save->data->__Field(HX_("weekScores",f5,b7,3b,08),::hx::paccDynamic)) );
            		}
HXLINE( 131)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("songScores",96,1a,f0,a0),::hx::paccDynamic) )) {
HXLINE( 133)			::backend::Highscore_obj::songScores = ( ( ::haxe::ds::StringMap)(::flixel::FlxG_obj::save->data->__Field(HX_("songScores",96,1a,f0,a0),::hx::paccDynamic)) );
            		}
HXLINE( 135)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("songRating",d2,d9,0e,17),::hx::paccDynamic) )) {
HXLINE( 137)			::backend::Highscore_obj::songRating = ( ( ::haxe::ds::StringMap)(::flixel::FlxG_obj::save->data->__Field(HX_("songRating",d2,d9,0e,17),::hx::paccDynamic)) );
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Highscore_obj,load,(void))


Highscore_obj::Highscore_obj()
{
}

bool Highscore_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setScore") ) { outValue = setScore_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getScore") ) { outValue = getScore_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resetSong") ) { outValue = resetSong_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"resetWeek") ) { outValue = resetWeek_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"saveScore") ) { outValue = saveScore_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setRating") ) { outValue = setRating_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getRating") ) { outValue = getRating_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"weekScores") ) { outValue = ( weekScores ); return true; }
		if (HX_FIELD_EQ(inName,"songScores") ) { outValue = ( songScores ); return true; }
		if (HX_FIELD_EQ(inName,"songRating") ) { outValue = ( songRating ); return true; }
		if (HX_FIELD_EQ(inName,"formatSong") ) { outValue = formatSong_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"floorDecimal") ) { outValue = floorDecimal_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setWeekScore") ) { outValue = setWeekScore_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getWeekScore") ) { outValue = getWeekScore_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"saveWeekScore") ) { outValue = saveWeekScore_dyn(); return true; }
	}
	return false;
}

bool Highscore_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"weekScores") ) { weekScores=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"songScores") ) { songScores=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"songRating") ) { songRating=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Highscore_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Highscore_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Highscore_obj::weekScores,HX_("weekScores",f5,b7,3b,08)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Highscore_obj::songScores,HX_("songScores",96,1a,f0,a0)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Highscore_obj::songRating,HX_("songRating",d2,d9,0e,17)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Highscore_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Highscore_obj::weekScores,"weekScores");
	HX_MARK_MEMBER_NAME(Highscore_obj::songScores,"songScores");
	HX_MARK_MEMBER_NAME(Highscore_obj::songRating,"songRating");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Highscore_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Highscore_obj::weekScores,"weekScores");
	HX_VISIT_MEMBER_NAME(Highscore_obj::songScores,"songScores");
	HX_VISIT_MEMBER_NAME(Highscore_obj::songRating,"songRating");
};

#endif

::hx::Class Highscore_obj::__mClass;

static ::String Highscore_obj_sStaticFields[] = {
	HX_("weekScores",f5,b7,3b,08),
	HX_("songScores",96,1a,f0,a0),
	HX_("songRating",d2,d9,0e,17),
	HX_("resetSong",44,2d,44,92),
	HX_("floorDecimal",25,1c,ad,93),
	HX_("resetWeek",63,69,e1,94),
	HX_("saveScore",d5,7a,86,07),
	HX_("saveWeekScore",c1,b3,07,00),
	HX_("setScore",50,dc,0d,87),
	HX_("setWeekScore",bc,ee,9c,ff),
	HX_("setRating",5f,a9,31,1b),
	HX_("formatSong",ac,46,bd,0b),
	HX_("getScore",dc,82,b0,d8),
	HX_("getRating",53,bd,e0,37),
	HX_("getWeekScore",48,cb,a3,ea),
	HX_("load",26,9a,b7,47),
	::String(null())
};

void Highscore_obj::__register()
{
	Highscore_obj _hx_dummy;
	Highscore_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.Highscore",b6,bf,7c,d2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Highscore_obj::__GetStatic;
	__mClass->mSetStaticField = &Highscore_obj::__SetStatic;
	__mClass->mMarkFunc = Highscore_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Highscore_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Highscore_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Highscore_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Highscore_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Highscore_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Highscore_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_3c83418b2d0c004c_5_boot)
HXDLIN(   5)		weekScores =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_3c83418b2d0c004c_6_boot)
HXDLIN(   6)		songScores =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_3c83418b2d0c004c_7_boot)
HXDLIN(   7)		songRating =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace backend
