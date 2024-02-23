#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_backend_StageData
#include <backend/StageData.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_tjson_TJSON
#include <tjson/TJSON.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_44b57106b867eb86_32_dummy,"backend.StageData","dummy",0xff2b10c8,"backend.StageData.dummy","backend/StageData.hx",32,0x4a5af1f1)
static const Float _hx_array_data_d406ab0e_1[] = {
	(Float)0,(Float)0,
};
static const Float _hx_array_data_d406ab0e_2[] = {
	(Float)0,(Float)0,
};
static const Float _hx_array_data_d406ab0e_3[] = {
	(Float)0,(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_44b57106b867eb86_51_loadDirectory,"backend.StageData","loadDirectory",0x59ce6607,"backend.StageData.loadDirectory","backend/StageData.hx",51,0x4a5af1f1)
HX_LOCAL_STACK_FRAME(_hx_pos_44b57106b867eb86_89_getStageFile,"backend.StageData","getStageFile",0x9811ca44,"backend.StageData.getStageFile","backend/StageData.hx",89,0x4a5af1f1)
HX_LOCAL_STACK_FRAME(_hx_pos_44b57106b867eb86_50_boot,"backend.StageData","boot",0x3376b592,"backend.StageData.boot","backend/StageData.hx",50,0x4a5af1f1)
namespace backend{

void StageData_obj::__construct() { }

Dynamic StageData_obj::__CreateEmpty() { return new StageData_obj; }

void *StageData_obj::_hx_vtable = 0;

Dynamic StageData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StageData_obj > _hx_result = new StageData_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StageData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1a8fb054;
}

 ::Dynamic StageData_obj::dummy(){
            	HX_STACKFRAME(&_hx_pos_44b57106b867eb86_32_dummy)
HXDLIN(  32)		return  ::Dynamic(::hx::Anon_obj::Create(12)
            			->setFixed(0,HX_("camera_opponent",b7,ed,08,84),::Array_obj< Float >::fromData( _hx_array_data_d406ab0e_1,2))
            			->setFixed(1,HX_("girlfriend",ba,91,48,98),::cpp::VirtualArray_obj::__new(2)->init(0,400)->init(1,130))
            			->setFixed(2,HX_("camera_girlfriend",54,80,21,bf),::Array_obj< Float >::fromData( _hx_array_data_d406ab0e_2,2))
            			->setFixed(3,HX_("boyfriend",6a,29,b8,e6),::cpp::VirtualArray_obj::__new(2)->init(0,770)->init(1,100))
            			->setFixed(4,HX_("isPixelStage",e2,d6,18,f5),false)
            			->setFixed(5,HX_("opponent",9d,b9,b8,f8),::cpp::VirtualArray_obj::__new(2)->init(0,100)->init(1,100))
            			->setFixed(6,HX_("hide_girlfriend",57,bd,d9,f9),false)
            			->setFixed(7,HX_("directory",6d,f2,44,10),HX_("",00,00,00,00))
            			->setFixed(8,HX_("camera_speed",2d,2f,ab,11),2)
            			->setFixed(9,HX_("defaultZoom",74,9c,b7,22),((Float)0.9))
            			->setFixed(10,HX_("stageUI",92,60,ca,2d),HX_("normal",27,72,69,30))
            			->setFixed(11,HX_("camera_boyfriend",10,8c,95,41),::Array_obj< Float >::fromData( _hx_array_data_d406ab0e_3,2)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(StageData_obj,dummy,return )

::String StageData_obj::forceNextDirectory;

void StageData_obj::loadDirectory( ::Dynamic SONG){
            	HX_STACKFRAME(&_hx_pos_44b57106b867eb86_51_loadDirectory)
HXLINE(  52)		::String stage = HX_("",00,00,00,00);
HXLINE(  53)		if (::hx::IsNotNull( SONG->__Field(HX_("stage",be,6a,0b,84),::hx::paccDynamic) )) {
HXLINE(  54)			stage = ( (::String)(SONG->__Field(HX_("stage",be,6a,0b,84),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  55)			if (::hx::IsNotNull( SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic) )) {
HXLINE(  56)				::String _hx_switch_0 = ::StringTools_obj::replace(( (::String)(SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase(),HX_(" ",20,00,00,00),HX_("-",2d,00,00,00));
            				if (  (_hx_switch_0==HX_("cocoa",09,9d,55,4a)) ||  (_hx_switch_0==HX_("eggnog",61,04,ba,f4)) ){
HXLINE(  65)					stage = HX_("mall",d4,3a,56,48);
HXDLIN(  65)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==HX_("monster",1a,54,b0,b8)) ||  (_hx_switch_0==HX_("south",0d,92,cc,80)) ||  (_hx_switch_0==HX_("spookeez",0c,7a,2b,75)) ){
HXLINE(  59)					stage = HX_("spooky",eb,bd,9e,c1);
HXDLIN(  59)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==HX_("blammed",96,02,00,3c)) ||  (_hx_switch_0==HX_("philly",28,77,5e,ef)) ||  (_hx_switch_0==HX_("philly-nice",22,2e,26,44)) ||  (_hx_switch_0==HX_("pico",e5,e8,57,4a)) ){
HXLINE(  61)					stage = HX_("philly",28,77,5e,ef);
HXDLIN(  61)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==HX_("high",62,37,0e,45)) ||  (_hx_switch_0==HX_("milf",d6,4c,5c,48)) ||  (_hx_switch_0==HX_("satin-panties",fe,64,00,d1)) ){
HXLINE(  63)					stage = HX_("limo",1f,17,b3,47);
HXDLIN(  63)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==HX_("roses",04,6c,64,ed)) ||  (_hx_switch_0==HX_("senpai",3c,df,8d,6b)) ){
HXLINE(  69)					stage = HX_("school",74,b8,c8,40);
HXDLIN(  69)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==HX_("thorns",9c,bf,c7,8c)) ){
HXLINE(  71)					stage = HX_("schoolEvil",28,a1,f5,f7);
HXDLIN(  71)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==HX_("guns",f3,21,6e,44)) ||  (_hx_switch_0==HX_("stress",34,24,2d,11)) ||  (_hx_switch_0==HX_("ugh",d6,21,59,00)) ){
HXLINE(  73)					stage = HX_("tank",ea,ba,f6,4c);
HXDLIN(  73)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==HX_("winter-horrorland",9d,39,f4,1e)) ){
HXLINE(  67)					stage = HX_("mallEvil",88,d3,e3,a7);
HXDLIN(  67)					goto _hx_goto_4;
            				}
            				/* default */{
HXLINE(  75)					stage = HX_("stage",be,6a,0b,84);
            				}
            				_hx_goto_4:;
            			}
            			else {
HXLINE(  78)				stage = HX_("stage",be,6a,0b,84);
            			}
            		}
HXLINE(  81)		 ::Dynamic stageFile = ::backend::StageData_obj::getStageFile(stage);
HXLINE(  82)		if (::hx::IsNull( stageFile )) {
HXLINE(  83)			::backend::StageData_obj::forceNextDirectory = HX_("",00,00,00,00);
            		}
            		else {
HXLINE(  85)			::backend::StageData_obj::forceNextDirectory = ( (::String)(stageFile->__Field(HX_("directory",6d,f2,44,10),::hx::paccDynamic)) );
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageData_obj,loadDirectory,(void))

 ::Dynamic StageData_obj::getStageFile(::String stage){
            	HX_STACKFRAME(&_hx_pos_44b57106b867eb86_89_getStageFile)
HXLINE(  90)		::String rawJson = null();
HXLINE(  91)		::String file = ((HX_("stages/",9a,7a,ca,2d) + stage) + HX_(".json",56,f1,d6,c2));
HXDLIN(  91)		if (::hx::IsNull( file )) {
HXLINE(  91)			file = HX_("",00,00,00,00);
            		}
HXDLIN(  91)		::String path = (HX_("assets/",4c,2a,dc,36) + file);
HXLINE(  94)		::String modPath = ::backend::Paths_obj::modFolders(((HX_("stages/",9a,7a,ca,2d) + stage) + HX_(".json",56,f1,d6,c2)));
HXLINE(  95)		if (::sys::FileSystem_obj::exists(modPath)) {
HXLINE(  96)			rawJson = ::sys::io::File_obj::getContent(modPath);
            		}
            		else {
HXLINE(  97)			if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  98)				rawJson = ::sys::io::File_obj::getContent(path);
            			}
            			else {
HXLINE( 107)				return null();
            			}
            		}
HXLINE( 109)		return ::tjson::TJSON_obj::parse(rawJson,null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageData_obj,getStageFile,return )


StageData_obj::StageData_obj()
{
}

bool StageData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"dummy") ) { outValue = dummy_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getStageFile") ) { outValue = getStageFile_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadDirectory") ) { outValue = loadDirectory_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"forceNextDirectory") ) { outValue = ( forceNextDirectory ); return true; }
	}
	return false;
}

bool StageData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"forceNextDirectory") ) { forceNextDirectory=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StageData_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo StageData_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &StageData_obj::forceNextDirectory,HX_("forceNextDirectory",0f,1e,f1,a7)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void StageData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StageData_obj::forceNextDirectory,"forceNextDirectory");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StageData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StageData_obj::forceNextDirectory,"forceNextDirectory");
};

#endif

::hx::Class StageData_obj::__mClass;

static ::String StageData_obj_sStaticFields[] = {
	HX_("dummy",28,0e,bb,e1),
	HX_("forceNextDirectory",0f,1e,f1,a7),
	HX_("loadDirectory",67,c3,aa,92),
	HX_("getStageFile",e4,38,16,03),
	::String(null())
};

void StageData_obj::__register()
{
	StageData_obj _hx_dummy;
	StageData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.StageData",0e,ab,06,d4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StageData_obj::__GetStatic;
	__mClass->mSetStaticField = &StageData_obj::__SetStatic;
	__mClass->mMarkFunc = StageData_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StageData_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< StageData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StageData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StageData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StageData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StageData_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_44b57106b867eb86_50_boot)
HXDLIN(  50)		forceNextDirectory = null();
            	}
}

} // end namespace backend
