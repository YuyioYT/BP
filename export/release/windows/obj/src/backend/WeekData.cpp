#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_Mods
#include <backend/Mods.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
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
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_40e6927fd11a022a_30_new,"backend.WeekData","new",0xa892a4ea,"backend.WeekData.new","backend/WeekData.hx",30,0x34ba5365)
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_53_createWeekFile,"backend.WeekData","createWeekFile",0x59a0a762,"backend.WeekData.createWeekFile","backend/WeekData.hx",53,0x34ba5365)
static const ::String _hx_array_data_7c17a7f8_2[] = {
	HX_("dad",47,36,4c,00),HX_("bf",c4,55,00,00),HX_("gf",1f,5a,00,00),
};
static const int _hx_array_data_7c17a7f8_3[] = {
	(int)146,(int)113,(int)253,
};
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_93_reloadCustomWeekFiles,"backend.WeekData","reloadCustomWeekFiles",0x05f213a3,"backend.WeekData.reloadCustomWeekFiles","backend/WeekData.hx",93,0x34ba5365)
static const ::String _hx_array_data_7c17a7f8_15[] = {
	HX_("mods/",9e,2f,58,0c),HX_("assets/",4c,2a,dc,36),
};
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_191_reloadWeekFiles,"backend.WeekData","reloadWeekFiles",0x1ad1eed4,"backend.WeekData.reloadWeekFiles","backend/WeekData.hx",191,0x34ba5365)
static const ::String _hx_array_data_7c17a7f8_27[] = {
	HX_("mods/",9e,2f,58,0c),HX_("assets/",4c,2a,dc,36),
};
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_258_addWeek,"backend.WeekData","addWeek",0x92b7843f,"backend.WeekData.addWeek","backend/WeekData.hx",258,0x34ba5365)
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_279_getWeekFile,"backend.WeekData","getWeekFile",0x083495d0,"backend.WeekData.getWeekFile","backend/WeekData.hx",279,0x34ba5365)
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_301_getWeekFileName,"backend.WeekData","getWeekFileName",0xddd45c3b,"backend.WeekData.getWeekFileName","backend/WeekData.hx",301,0x34ba5365)
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_306_getCurrentWeek,"backend.WeekData","getCurrentWeek",0xeba04f8d,"backend.WeekData.getCurrentWeek","backend/WeekData.hx",306,0x34ba5365)
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_309_setDirectoryFromWeek,"backend.WeekData","setDirectoryFromWeek",0x52a1f03f,"backend.WeekData.setDirectoryFromWeek","backend/WeekData.hx",309,0x34ba5365)
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_31_boot,"backend.WeekData","boot",0xcfd6a868,"backend.WeekData.boot","backend/WeekData.hx",31,0x34ba5365)
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_32_boot,"backend.WeekData","boot",0xcfd6a868,"backend.WeekData.boot","backend/WeekData.hx",32,0x34ba5365)
namespace backend{

void WeekData_obj::__construct( ::Dynamic weekFile,::String fileName){
            	HX_STACKFRAME(&_hx_pos_40e6927fd11a022a_30_new)
HXLINE(  33)		this->folder = HX_("",00,00,00,00);
HXLINE(  75)		this->songs = ( (::cpp::VirtualArray)(weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic)) );
HXLINE(  76)		this->weekCharacters = ( (::Array< ::String >)(weekFile->__Field(HX_("weekCharacters",be,b5,7f,1d),::hx::paccDynamic)) );
HXLINE(  77)		this->weekBackground = ( (::String)(weekFile->__Field(HX_("weekBackground",02,f1,ce,ed),::hx::paccDynamic)) );
HXLINE(  78)		this->weekBefore = ( (::String)(weekFile->__Field(HX_("weekBefore",93,97,02,5d),::hx::paccDynamic)) );
HXLINE(  79)		this->storyName = ( (::String)(weekFile->__Field(HX_("storyName",e0,50,20,29),::hx::paccDynamic)) );
HXLINE(  80)		this->weekImage = ( (::String)(weekFile->__Field(HX_("weekImage",c7,da,dc,1f),::hx::paccDynamic)) );
HXLINE(  81)		this->weekName = ( (::String)(weekFile->__Field(HX_("weekName",5f,08,2f,30),::hx::paccDynamic)) );
HXLINE(  82)		this->freeplayColor = ( (::Array< int >)(weekFile->__Field(HX_("freeplayColor",a3,0c,53,32),::hx::paccDynamic)) );
HXLINE(  83)		this->startUnlocked = ( (bool)(weekFile->__Field(HX_("startUnlocked",a5,96,c9,60),::hx::paccDynamic)) );
HXLINE(  84)		this->hiddenUntilUnlocked = ( (bool)(weekFile->__Field(HX_("hiddenUntilUnlocked",17,ed,31,dc),::hx::paccDynamic)) );
HXLINE(  85)		this->hideStoryMode = ( (bool)(weekFile->__Field(HX_("hideStoryMode",d6,b4,4e,4c),::hx::paccDynamic)) );
HXLINE(  86)		this->hideFreeplay = ( (bool)(weekFile->__Field(HX_("hideFreeplay",82,13,8c,e3),::hx::paccDynamic)) );
HXLINE(  87)		this->difficulties = ( (::String)(weekFile->__Field(HX_("difficulties",59,c7,5e,02),::hx::paccDynamic)) );
HXLINE(  89)		this->fileName = fileName;
            	}

Dynamic WeekData_obj::__CreateEmpty() { return new WeekData_obj; }

void *WeekData_obj::_hx_vtable = 0;

Dynamic WeekData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WeekData_obj > _hx_result = new WeekData_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool WeekData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x60db6d72;
}

 ::haxe::ds::StringMap WeekData_obj::weeksLoaded;

::Array< ::String > WeekData_obj::weeksList;

 ::Dynamic WeekData_obj::createWeekFile(){
            	HX_STACKFRAME(&_hx_pos_40e6927fd11a022a_53_createWeekFile)
HXLINE(  54)		 ::Dynamic weekFile =  ::Dynamic(::hx::Anon_obj::Create(14)
            			->setFixed(0,HX_("songs",fe,36,c7,80),::cpp::VirtualArray_obj::__new(3)->init(0,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Bopeebo",90,29,16,da))->init(1,HX_("dad",47,36,4c,00))->init(2,::cpp::VirtualArray_obj::__new(3)->init(0,146)->init(1,113)->init(2,253)))->init(1,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Fresh",4e,f6,b3,99))->init(1,HX_("dad",47,36,4c,00))->init(2,::cpp::VirtualArray_obj::__new(3)->init(0,146)->init(1,113)->init(2,253)))->init(2,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Dad Battle",31,46,15,16))->init(1,HX_("dad",47,36,4c,00))->init(2,::cpp::VirtualArray_obj::__new(3)->init(0,146)->init(1,113)->init(2,253))))
            			->setFixed(1,HX_("hiddenUntilUnlocked",17,ed,31,dc),false)
            			->setFixed(2,HX_("hideFreeplay",82,13,8c,e3),false)
            			->setFixed(3,HX_("weekBackground",02,f1,ce,ed),HX_("stage",be,6a,0b,84))
            			->setFixed(4,HX_("BG",c5,39,00,00),HX_("story 1",46,d7,ba,44))
            			->setFixed(5,HX_("difficulties",59,c7,5e,02),HX_("",00,00,00,00))
            			->setFixed(6,HX_("weekCharacters",be,b5,7f,1d),::Array_obj< ::String >::fromData( _hx_array_data_7c17a7f8_2,3))
            			->setFixed(7,HX_("weekImage",c7,da,dc,1f),HX_("story 1",46,d7,ba,44))
            			->setFixed(8,HX_("storyName",e0,50,20,29),HX_("Your New Week",e1,5b,59,b7))
            			->setFixed(9,HX_("weekName",5f,08,2f,30),HX_("Custom Week",c3,aa,e2,8c))
            			->setFixed(10,HX_("freeplayColor",a3,0c,53,32),::Array_obj< int >::fromData( _hx_array_data_7c17a7f8_3,3))
            			->setFixed(11,HX_("hideStoryMode",d6,b4,4e,4c),false)
            			->setFixed(12,HX_("weekBefore",93,97,02,5d),HX_("tutorial",9e,8f,b5,82))
            			->setFixed(13,HX_("startUnlocked",a5,96,c9,60),true));
HXLINE(  70)		return weekFile;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(WeekData_obj,createWeekFile,return )

void WeekData_obj::reloadCustomWeekFiles(::String customWeek, ::Dynamic __o_isStoryMode){
            		 ::Dynamic isStoryMode = __o_isStoryMode;
            		if (::hx::IsNull(__o_isStoryMode)) isStoryMode = false;
            	HX_GC_STACKFRAME(&_hx_pos_40e6927fd11a022a_93_reloadCustomWeekFiles)
HXLINE(  94)		::backend::WeekData_obj::weeksList = ::Array_obj< ::String >::__new(0);
HXLINE(  95)		::backend::WeekData_obj::weeksLoaded->clear();
HXLINE(  97)		::Array< ::String > disabledMods = ::Array_obj< ::String >::__new(0);
HXLINE(  98)		::String modsListPath = HX_("modsList.txt",f1,ca,08,ac);
HXLINE(  99)		::Array< ::String > directories = ::Array_obj< ::String >::fromData( _hx_array_data_7c17a7f8_15,2);
HXLINE( 100)		int originalLength = directories->length;
HXLINE( 101)		if (::sys::FileSystem_obj::exists(modsListPath)) {
HXLINE( 103)			::String path = modsListPath;
HXDLIN( 103)			::String daList = null();
HXDLIN( 103)			::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXDLIN( 103)			path = formatted->__get((formatted->length - 1));
HXDLIN( 103)			if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 103)				daList = ::sys::io::File_obj::getContent(path);
            			}
HXDLIN( 103)			::Array< ::String > stuff;
HXDLIN( 103)			if (::hx::IsNotNull( daList )) {
HXLINE( 103)				::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXDLIN( 103)				daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXDLIN( 103)				{
HXLINE( 103)					int _g = 0;
HXDLIN( 103)					int _g1 = daList1->length;
HXDLIN( 103)					while((_g < _g1)){
HXLINE( 103)						_g = (_g + 1);
HXDLIN( 103)						int i = (_g - 1);
HXDLIN( 103)						daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            					}
            				}
HXDLIN( 103)				stuff = daList1;
            			}
            			else {
HXLINE( 103)				stuff = ::Array_obj< ::String >::__new(0);
            			}
HXLINE( 104)			{
HXLINE( 104)				int _g = 0;
HXDLIN( 104)				int _g1 = stuff->length;
HXDLIN( 104)				while((_g < _g1)){
HXLINE( 104)					_g = (_g + 1);
HXDLIN( 104)					int i = (_g - 1);
HXLINE( 106)					::Array< ::String > splitName = ::StringTools_obj::trim(stuff->__get(i)).split(HX_("|",7c,00,00,00));
HXLINE( 107)					if ((splitName->__get(1) == HX_("0",30,00,00,00))) {
HXLINE( 109)						disabledMods->push(splitName->__get(0));
            					}
            					else {
HXLINE( 113)						::String path = ::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,HX_("mods/",9e,2f,58,0c))->init(1,splitName->__get(0)));
HXLINE( 115)						bool _hx_tmp;
HXDLIN( 115)						bool _hx_tmp1;
HXDLIN( 115)						bool _hx_tmp2;
HXDLIN( 115)						if (::sys::FileSystem_obj::isDirectory(path)) {
HXLINE( 115)							_hx_tmp2 = !(::backend::Paths_obj::ignoreModFolders->contains(splitName->__get(0)));
            						}
            						else {
HXLINE( 115)							_hx_tmp2 = false;
            						}
HXDLIN( 115)						if (_hx_tmp2) {
HXLINE( 115)							_hx_tmp1 = !(disabledMods->contains(splitName->__get(0)));
            						}
            						else {
HXLINE( 115)							_hx_tmp1 = false;
            						}
HXDLIN( 115)						if (_hx_tmp1) {
HXLINE( 115)							_hx_tmp = !(directories->contains((path + HX_("/",2f,00,00,00))));
            						}
            						else {
HXLINE( 115)							_hx_tmp = false;
            						}
HXDLIN( 115)						if (_hx_tmp) {
HXLINE( 117)							directories->push((path + HX_("/",2f,00,00,00)));
            						}
            					}
            				}
            			}
            		}
HXLINE( 124)		::Array< ::String > modsDirectories = ::backend::Paths_obj::getModDirectories();
HXLINE( 125)		{
HXLINE( 125)			int _g = 0;
HXDLIN( 125)			while((_g < modsDirectories->length)){
HXLINE( 125)				::String folder = modsDirectories->__get(_g);
HXDLIN( 125)				_g = (_g + 1);
HXLINE( 127)				::String pathThing = (::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,HX_("mods/",9e,2f,58,0c))->init(1,folder)) + HX_("/",2f,00,00,00));
HXLINE( 128)				bool _hx_tmp;
HXDLIN( 128)				if (!(disabledMods->contains(folder))) {
HXLINE( 128)					_hx_tmp = !(directories->contains(pathThing));
            				}
            				else {
HXLINE( 128)					_hx_tmp = false;
            				}
HXDLIN( 128)				if (_hx_tmp) {
HXLINE( 130)					directories->push(pathThing);
            				}
            			}
            		}
HXLINE( 139)		::String file = ((HX_("weeks/",50,a9,04,ff) + customWeek) + HX_("/weekList.txt",23,1d,e9,2b));
HXDLIN( 139)		if (::hx::IsNull( file )) {
HXLINE( 139)			file = HX_("",00,00,00,00);
            		}
HXDLIN( 139)		::String path = (HX_("assets/",4c,2a,dc,36) + file);
HXDLIN( 139)		::String daList = null();
HXDLIN( 139)		::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXDLIN( 139)		path = formatted->__get((formatted->length - 1));
HXDLIN( 139)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 139)			daList = ::sys::io::File_obj::getContent(path);
            		}
HXDLIN( 139)		::Array< ::String > sexList;
HXDLIN( 139)		if (::hx::IsNotNull( daList )) {
HXLINE( 139)			::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXDLIN( 139)			daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXDLIN( 139)			{
HXLINE( 139)				int _g = 0;
HXDLIN( 139)				int _g1 = daList1->length;
HXDLIN( 139)				while((_g < _g1)){
HXLINE( 139)					_g = (_g + 1);
HXDLIN( 139)					int i = (_g - 1);
HXDLIN( 139)					daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            				}
            			}
HXDLIN( 139)			sexList = daList1;
            		}
            		else {
HXLINE( 139)			sexList = ::Array_obj< ::String >::__new(0);
            		}
HXLINE( 140)		{
HXLINE( 140)			int _g1 = 0;
HXDLIN( 140)			int _g2 = sexList->length;
HXDLIN( 140)			while((_g1 < _g2)){
HXLINE( 140)				_g1 = (_g1 + 1);
HXDLIN( 140)				int i = (_g1 - 1);
HXLINE( 141)				{
HXLINE( 141)					int _g = 0;
HXDLIN( 141)					int _g2 = directories->length;
HXDLIN( 141)					while((_g < _g2)){
HXLINE( 141)						_g = (_g + 1);
HXDLIN( 141)						int j = (_g - 1);
HXLINE( 142)						::String fileToCheck = (directories->__get(j) + ((((HX_("weeks/",50,a9,04,ff) + customWeek) + HX_("/",2f,00,00,00)) + sexList->__get(i)) + HX_(".json",56,f1,d6,c2)));
HXLINE( 143)						if (!(::backend::WeekData_obj::weeksLoaded->exists(sexList->__get(i)))) {
HXLINE( 144)							 ::Dynamic week = ::backend::WeekData_obj::getWeekFile(fileToCheck);
HXLINE( 145)							if (::hx::IsNotNull( week )) {
HXLINE( 146)								 ::backend::WeekData weekFile =  ::backend::WeekData_obj::__alloc( HX_CTX ,week,sexList->__get(i));
HXLINE( 149)								if ((j >= originalLength)) {
HXLINE( 150)									weekFile->folder = directories->__get(j).substring(HX_("mods/",9e,2f,58,0c).length,(directories->__get(j).length - 1));
            								}
HXLINE( 154)								bool _hx_tmp;
HXDLIN( 154)								if (::hx::IsNotNull( weekFile )) {
HXLINE( 154)									bool _hx_tmp1;
HXDLIN( 154)									if (::hx::IsNotNull( isStoryMode )) {
HXLINE( 154)										if (( (bool)(isStoryMode) )) {
HXLINE( 154)											_hx_tmp1 = !(weekFile->hideStoryMode);
            										}
            										else {
HXLINE( 154)											_hx_tmp1 = false;
            										}
            									}
            									else {
HXLINE( 154)										_hx_tmp1 = true;
            									}
HXDLIN( 154)									if (!(_hx_tmp1)) {
HXLINE( 154)										if (!(( (bool)(isStoryMode) ))) {
HXLINE( 154)											_hx_tmp = !(weekFile->hideFreeplay);
            										}
            										else {
HXLINE( 154)											_hx_tmp = false;
            										}
            									}
            									else {
HXLINE( 154)										_hx_tmp = true;
            									}
            								}
            								else {
HXLINE( 154)									_hx_tmp = false;
            								}
HXDLIN( 154)								if (_hx_tmp) {
HXLINE( 155)									::backend::WeekData_obj::weeksLoaded->set(sexList->__get(i),weekFile);
HXLINE( 156)									::backend::WeekData_obj::weeksList->push(sexList->__get(i));
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 164)		{
HXLINE( 164)			int _g3 = 0;
HXDLIN( 164)			int _g4 = directories->length;
HXDLIN( 164)			while((_g3 < _g4)){
HXLINE( 164)				_g3 = (_g3 + 1);
HXDLIN( 164)				int i = (_g3 - 1);
HXLINE( 165)				::String directory = (directories->__get(i) + ((HX_("weeks/",50,a9,04,ff) + customWeek) + HX_("/",2f,00,00,00)));
HXLINE( 166)				if (::sys::FileSystem_obj::exists(directory)) {
HXLINE( 167)					::String path = (directory + HX_("weekList.txt",74,12,92,5d));
HXDLIN( 167)					::String daList = null();
HXDLIN( 167)					::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXDLIN( 167)					path = formatted->__get((formatted->length - 1));
HXDLIN( 167)					if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 167)						daList = ::sys::io::File_obj::getContent(path);
            					}
HXDLIN( 167)					::Array< ::String > listOfWeeks;
HXDLIN( 167)					if (::hx::IsNotNull( daList )) {
HXLINE( 167)						::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXDLIN( 167)						daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXDLIN( 167)						{
HXLINE( 167)							int _g = 0;
HXDLIN( 167)							int _g1 = daList1->length;
HXDLIN( 167)							while((_g < _g1)){
HXLINE( 167)								_g = (_g + 1);
HXDLIN( 167)								int i = (_g - 1);
HXDLIN( 167)								daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            							}
            						}
HXDLIN( 167)						listOfWeeks = daList1;
            					}
            					else {
HXLINE( 167)						listOfWeeks = ::Array_obj< ::String >::__new(0);
            					}
HXLINE( 168)					{
HXLINE( 168)						int _g = 0;
HXDLIN( 168)						while((_g < listOfWeeks->length)){
HXLINE( 168)							::String daWeek = listOfWeeks->__get(_g);
HXDLIN( 168)							_g = (_g + 1);
HXLINE( 170)							::String path = ((directory + daWeek) + HX_(".json",56,f1,d6,c2));
HXLINE( 171)							if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 173)								::backend::WeekData_obj::addWeek(daWeek,path,directories->__get(i),i,originalLength);
            							}
            						}
            					}
HXLINE( 177)					{
HXLINE( 177)						int _g1 = 0;
HXDLIN( 177)						::Array< ::String > _g2 = ::sys::FileSystem_obj::readDirectory(directory);
HXDLIN( 177)						while((_g1 < _g2->length)){
HXLINE( 177)							::String file = _g2->__get(_g1);
HXDLIN( 177)							_g1 = (_g1 + 1);
HXLINE( 179)							::String path = ::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,directory)->init(1,file));
HXLINE( 180)							bool _hx_tmp;
HXDLIN( 180)							if (!(::sys::FileSystem_obj::isDirectory(path))) {
HXLINE( 180)								_hx_tmp = ::StringTools_obj::endsWith(file,HX_(".json",56,f1,d6,c2));
            							}
            							else {
HXLINE( 180)								_hx_tmp = false;
            							}
HXDLIN( 180)							if (_hx_tmp) {
HXLINE( 182)								::String _hx_tmp = file.substr(0,(file.length - 5));
HXDLIN( 182)								::backend::WeekData_obj::addWeek(_hx_tmp,path,directories->__get(i),i,originalLength);
            							}
            						}
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(WeekData_obj,reloadCustomWeekFiles,(void))

void WeekData_obj::reloadWeekFiles( ::Dynamic __o_isStoryMode){
            		 ::Dynamic isStoryMode = __o_isStoryMode;
            		if (::hx::IsNull(__o_isStoryMode)) isStoryMode = false;
            	HX_GC_STACKFRAME(&_hx_pos_40e6927fd11a022a_191_reloadWeekFiles)
HXLINE( 192)		::backend::WeekData_obj::weeksList = ::Array_obj< ::String >::__new(0);
HXLINE( 193)		::backend::WeekData_obj::weeksLoaded->clear();
HXLINE( 195)		::Array< ::String > directories = ::Array_obj< ::String >::fromData( _hx_array_data_7c17a7f8_27,2);
HXLINE( 196)		int originalLength = directories->length;
HXLINE( 198)		{
HXLINE( 198)			int _g = 0;
HXDLIN( 198)			if (!(::backend::Mods_obj::updatedOnState)) {
HXLINE( 198)				::backend::Mods_obj::updateModList();
            			}
HXDLIN( 198)			::Array< ::String > list_enabled = ::Array_obj< ::String >::__new(0);
HXDLIN( 198)			::Array< ::String > list_disabled = ::Array_obj< ::String >::__new(0);
HXDLIN( 198)			::Array< ::String > list_all = ::Array_obj< ::String >::__new(0);
HXDLIN( 198)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 198)				int _g = 0;
HXDLIN( 198)				::String path = HX_("modsList.txt",f1,ca,08,ac);
HXDLIN( 198)				::String daList = null();
HXDLIN( 198)				::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXLINE(  73)				path = formatted->__get((formatted->length - 1));
HXLINE( 198)				if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  74)					daList = ::sys::io::File_obj::getContent(path);
            				}
HXLINE( 198)				::Array< ::String > _g1;
HXDLIN( 198)				if (::hx::IsNotNull( daList )) {
HXLINE( 198)					::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXLINE( 145)					daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXLINE( 198)					{
HXLINE( 198)						int _g = 0;
HXDLIN( 198)						int _g2 = daList1->length;
HXDLIN( 198)						while((_g < _g2)){
HXLINE( 198)							_g = (_g + 1);
HXDLIN( 198)							int i = (_g - 1);
HXDLIN( 198)							daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            						}
            					}
HXDLIN( 198)					_g1 = daList1;
            				}
            				else {
HXLINE( 198)					_g1 = ::Array_obj< ::String >::__new(0);
            				}
HXDLIN( 198)				while((_g < _g1->length)){
HXLINE( 198)					::String mod = _g1->__get(_g);
HXDLIN( 198)					_g = (_g + 1);
HXDLIN( 198)					if ((::StringTools_obj::trim(mod).length < 1)) {
HXLINE( 198)						continue;
            					}
HXDLIN( 198)					::Array< ::String > dat = mod.split(HX_("|",7c,00,00,00));
HXDLIN( 198)					list_all->push(dat->__get(0));
HXDLIN( 198)					if ((dat->__get(1) == HX_("1",31,00,00,00))) {
HXLINE( 198)						list_enabled->push(dat->__get(0));
            					}
            					else {
HXLINE( 198)						list_disabled->push(dat->__get(0));
            					}
            				}
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 172)					 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE( 198)					::haxe::Log_obj::trace(e,::hx::SourceInfo(HX_("source/backend/Mods.hx",1e,5b,8b,ff),173,HX_("backend.Mods",2b,aa,ba,a1),HX_("parseList",31,6e,59,cf)));
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXDLIN( 198)			::Array< ::String > _g1 = list_enabled;
HXDLIN( 198)			while((_g < _g1->length)){
HXLINE( 198)				::String mod = _g1->__get(_g);
HXDLIN( 198)				_g = (_g + 1);
HXLINE( 199)				::String key = (mod + HX_("/",2f,00,00,00));
HXDLIN( 199)				if (::hx::IsNull( key )) {
HXLINE( 199)					key = HX_("",00,00,00,00);
            				}
HXDLIN( 199)				directories->push((HX_("mods/",9e,2f,58,0c) + key));
            			}
            		}
HXLINE( 205)		::String file = HX_("weeks/weekList.txt",c4,73,97,b1);
HXDLIN( 205)		if (::hx::IsNull( file )) {
HXLINE( 205)			file = HX_("",00,00,00,00);
            		}
HXDLIN( 205)		::String path = (HX_("assets/",4c,2a,dc,36) + file);
HXDLIN( 205)		::String daList = null();
HXDLIN( 205)		::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXLINE(  73)		path = formatted->__get((formatted->length - 1));
HXLINE( 205)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  74)			daList = ::sys::io::File_obj::getContent(path);
            		}
HXLINE( 205)		::Array< ::String > sexList;
HXDLIN( 205)		if (::hx::IsNotNull( daList )) {
HXLINE( 205)			::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXLINE( 145)			daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXLINE( 205)			{
HXLINE( 205)				int _g = 0;
HXDLIN( 205)				int _g1 = daList1->length;
HXDLIN( 205)				while((_g < _g1)){
HXLINE( 205)					_g = (_g + 1);
HXDLIN( 205)					int i = (_g - 1);
HXDLIN( 205)					daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            				}
            			}
HXDLIN( 205)			sexList = daList1;
            		}
            		else {
HXLINE( 205)			sexList = ::Array_obj< ::String >::__new(0);
            		}
HXLINE( 206)		{
HXLINE( 206)			int _g2 = 0;
HXDLIN( 206)			int _g3 = sexList->length;
HXDLIN( 206)			while((_g2 < _g3)){
HXLINE( 206)				_g2 = (_g2 + 1);
HXDLIN( 206)				int i = (_g2 - 1);
HXLINE( 207)				{
HXLINE( 207)					int _g = 0;
HXDLIN( 207)					int _g1 = directories->length;
HXDLIN( 207)					while((_g < _g1)){
HXLINE( 207)						_g = (_g + 1);
HXDLIN( 207)						int j = (_g - 1);
HXLINE( 208)						::String fileToCheck = (((directories->__get(j) + HX_("weeks/",50,a9,04,ff)) + sexList->__get(i)) + HX_(".json",56,f1,d6,c2));
HXLINE( 209)						if (!(::backend::WeekData_obj::weeksLoaded->exists(sexList->__get(i)))) {
HXLINE( 210)							 ::Dynamic week = ::backend::WeekData_obj::getWeekFile(fileToCheck);
HXLINE( 211)							if (::hx::IsNotNull( week )) {
HXLINE( 212)								 ::backend::WeekData weekFile =  ::backend::WeekData_obj::__alloc( HX_CTX ,week,sexList->__get(i));
HXLINE( 215)								if ((j >= originalLength)) {
HXLINE( 216)									weekFile->folder = directories->__get(j).substring(HX_("mods/",9e,2f,58,0c).length,(directories->__get(j).length - 1));
            								}
HXLINE( 220)								bool _hx_tmp;
HXDLIN( 220)								if (::hx::IsNotNull( weekFile )) {
HXLINE( 220)									bool _hx_tmp1;
HXDLIN( 220)									if (::hx::IsNotNull( isStoryMode )) {
HXLINE( 220)										if (( (bool)(isStoryMode) )) {
HXLINE( 220)											_hx_tmp1 = !(weekFile->hideStoryMode);
            										}
            										else {
HXLINE( 220)											_hx_tmp1 = false;
            										}
            									}
            									else {
HXLINE( 220)										_hx_tmp1 = true;
            									}
HXDLIN( 220)									if (!(_hx_tmp1)) {
HXLINE( 220)										if (!(( (bool)(isStoryMode) ))) {
HXLINE( 220)											_hx_tmp = !(weekFile->hideFreeplay);
            										}
            										else {
HXLINE( 220)											_hx_tmp = false;
            										}
            									}
            									else {
HXLINE( 220)										_hx_tmp = true;
            									}
            								}
            								else {
HXLINE( 220)									_hx_tmp = false;
            								}
HXDLIN( 220)								if (_hx_tmp) {
HXLINE( 221)									::backend::WeekData_obj::weeksLoaded->set(sexList->__get(i),weekFile);
HXLINE( 222)									::backend::WeekData_obj::weeksList->push(sexList->__get(i));
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 230)		{
HXLINE( 230)			int _g4 = 0;
HXDLIN( 230)			int _g5 = directories->length;
HXDLIN( 230)			while((_g4 < _g5)){
HXLINE( 230)				_g4 = (_g4 + 1);
HXDLIN( 230)				int i = (_g4 - 1);
HXLINE( 231)				::String directory = (directories->__get(i) + HX_("weeks/",50,a9,04,ff));
HXLINE( 232)				if (::sys::FileSystem_obj::exists(directory)) {
HXLINE( 233)					::String path = (directory + HX_("weekList.txt",74,12,92,5d));
HXDLIN( 233)					::String daList = null();
HXDLIN( 233)					::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXLINE(  73)					path = formatted->__get((formatted->length - 1));
HXLINE( 233)					if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  74)						daList = ::sys::io::File_obj::getContent(path);
            					}
HXLINE( 233)					::Array< ::String > listOfWeeks;
HXDLIN( 233)					if (::hx::IsNotNull( daList )) {
HXLINE( 233)						::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXLINE( 145)						daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXLINE( 233)						{
HXLINE( 233)							int _g = 0;
HXDLIN( 233)							int _g1 = daList1->length;
HXDLIN( 233)							while((_g < _g1)){
HXLINE( 233)								_g = (_g + 1);
HXDLIN( 233)								int i = (_g - 1);
HXDLIN( 233)								daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            							}
            						}
HXDLIN( 233)						listOfWeeks = daList1;
            					}
            					else {
HXLINE( 233)						listOfWeeks = ::Array_obj< ::String >::__new(0);
            					}
HXLINE( 234)					{
HXLINE( 234)						int _g = 0;
HXDLIN( 234)						while((_g < listOfWeeks->length)){
HXLINE( 234)							::String daWeek = listOfWeeks->__get(_g);
HXDLIN( 234)							_g = (_g + 1);
HXLINE( 236)							::String path = ((directory + daWeek) + HX_(".json",56,f1,d6,c2));
HXLINE( 237)							if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 239)								::backend::WeekData_obj::addWeek(daWeek,path,directories->__get(i),i,originalLength);
            							}
            						}
            					}
HXLINE( 243)					{
HXLINE( 243)						int _g1 = 0;
HXDLIN( 243)						::Array< ::String > _g2 = ::sys::FileSystem_obj::readDirectory(directory);
HXDLIN( 243)						while((_g1 < _g2->length)){
HXLINE( 243)							::String file = _g2->__get(_g1);
HXDLIN( 243)							_g1 = (_g1 + 1);
HXLINE( 245)							::String path = ::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,directory)->init(1,file));
HXLINE( 246)							bool _hx_tmp;
HXDLIN( 246)							if (!(::sys::FileSystem_obj::isDirectory(path))) {
HXLINE( 246)								_hx_tmp = ::StringTools_obj::endsWith(file,HX_(".json",56,f1,d6,c2));
            							}
            							else {
HXLINE( 246)								_hx_tmp = false;
            							}
HXDLIN( 246)							if (_hx_tmp) {
HXLINE( 248)								::String _hx_tmp = file.substr(0,(file.length - 5));
HXDLIN( 248)								::backend::WeekData_obj::addWeek(_hx_tmp,path,directories->__get(i),i,originalLength);
            							}
            						}
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekData_obj,reloadWeekFiles,(void))

void WeekData_obj::addWeek(::String weekToCheck,::String path,::String directory,int i,int originalLength){
            	HX_GC_STACKFRAME(&_hx_pos_40e6927fd11a022a_258_addWeek)
HXDLIN( 258)		if (!(::backend::WeekData_obj::weeksLoaded->exists(weekToCheck))) {
HXLINE( 260)			 ::Dynamic week = ::backend::WeekData_obj::getWeekFile(path);
HXLINE( 261)			if (::hx::IsNotNull( week )) {
HXLINE( 263)				 ::backend::WeekData weekFile =  ::backend::WeekData_obj::__alloc( HX_CTX ,week,weekToCheck);
HXLINE( 264)				if ((i >= originalLength)) {
HXLINE( 267)					weekFile->folder = directory.substring(HX_("mods/",9e,2f,58,0c).length,(directory.length - 1));
            				}
HXLINE( 270)				bool _hx_tmp;
HXDLIN( 270)				bool _hx_tmp1;
HXDLIN( 270)				if (::states::PlayState_obj::isStoryMode) {
HXLINE( 270)					_hx_tmp1 = !(weekFile->hideStoryMode);
            				}
            				else {
HXLINE( 270)					_hx_tmp1 = false;
            				}
HXDLIN( 270)				if (!(_hx_tmp1)) {
HXLINE( 270)					if (!(::states::PlayState_obj::isStoryMode)) {
HXLINE( 270)						_hx_tmp = !(weekFile->hideFreeplay);
            					}
            					else {
HXLINE( 270)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 270)					_hx_tmp = true;
            				}
HXDLIN( 270)				if (_hx_tmp) {
HXLINE( 272)					::backend::WeekData_obj::weeksLoaded->set(weekToCheck,weekFile);
HXLINE( 273)					::backend::WeekData_obj::weeksList->push(weekToCheck);
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(WeekData_obj,addWeek,(void))

 ::Dynamic WeekData_obj::getWeekFile(::String path){
            	HX_STACKFRAME(&_hx_pos_40e6927fd11a022a_279_getWeekFile)
HXLINE( 280)		::String rawJson = null();
HXLINE( 282)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 283)			rawJson = ::sys::io::File_obj::getContent(path);
            		}
HXLINE( 291)		bool _hx_tmp;
HXDLIN( 291)		if (::hx::IsNotNull( rawJson )) {
HXLINE( 291)			_hx_tmp = (rawJson.length > 0);
            		}
            		else {
HXLINE( 291)			_hx_tmp = false;
            		}
HXDLIN( 291)		if (_hx_tmp) {
HXLINE( 292)			return ::tjson::TJSON_obj::parse(rawJson,null(),null());
            		}
HXLINE( 294)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekData_obj,getWeekFile,return )

::String WeekData_obj::getWeekFileName(){
            	HX_STACKFRAME(&_hx_pos_40e6927fd11a022a_301_getWeekFileName)
HXDLIN( 301)		return ::backend::WeekData_obj::weeksList->__get(::states::PlayState_obj::storyWeek);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(WeekData_obj,getWeekFileName,return )

 ::backend::WeekData WeekData_obj::getCurrentWeek(){
            	HX_STACKFRAME(&_hx_pos_40e6927fd11a022a_306_getCurrentWeek)
HXDLIN( 306)		return ( ( ::backend::WeekData)(::backend::WeekData_obj::weeksLoaded->get(::backend::WeekData_obj::weeksList->__get(::states::PlayState_obj::storyWeek))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(WeekData_obj,getCurrentWeek,return )

void WeekData_obj::setDirectoryFromWeek( ::backend::WeekData data){
            	HX_STACKFRAME(&_hx_pos_40e6927fd11a022a_309_setDirectoryFromWeek)
HXLINE( 310)		::backend::Mods_obj::currentModDirectory = HX_("",00,00,00,00);
HXLINE( 311)		bool _hx_tmp;
HXDLIN( 311)		bool _hx_tmp1;
HXDLIN( 311)		if (::hx::IsNotNull( data )) {
HXLINE( 311)			_hx_tmp1 = ::hx::IsNotNull( data->folder );
            		}
            		else {
HXLINE( 311)			_hx_tmp1 = false;
            		}
HXDLIN( 311)		if (_hx_tmp1) {
HXLINE( 311)			_hx_tmp = (data->folder.length > 0);
            		}
            		else {
HXLINE( 311)			_hx_tmp = false;
            		}
HXDLIN( 311)		if (_hx_tmp) {
HXLINE( 312)			::backend::Mods_obj::currentModDirectory = data->folder;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekData_obj,setDirectoryFromWeek,(void))


WeekData_obj::WeekData_obj()
{
}

void WeekData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WeekData);
	HX_MARK_MEMBER_NAME(folder,"folder");
	HX_MARK_MEMBER_NAME(songs,"songs");
	HX_MARK_MEMBER_NAME(weekCharacters,"weekCharacters");
	HX_MARK_MEMBER_NAME(weekBackground,"weekBackground");
	HX_MARK_MEMBER_NAME(weekBefore,"weekBefore");
	HX_MARK_MEMBER_NAME(storyName,"storyName");
	HX_MARK_MEMBER_NAME(weekName,"weekName");
	HX_MARK_MEMBER_NAME(BG,"BG");
	HX_MARK_MEMBER_NAME(weekImage,"weekImage");
	HX_MARK_MEMBER_NAME(freeplayColor,"freeplayColor");
	HX_MARK_MEMBER_NAME(startUnlocked,"startUnlocked");
	HX_MARK_MEMBER_NAME(hiddenUntilUnlocked,"hiddenUntilUnlocked");
	HX_MARK_MEMBER_NAME(hideStoryMode,"hideStoryMode");
	HX_MARK_MEMBER_NAME(hideFreeplay,"hideFreeplay");
	HX_MARK_MEMBER_NAME(difficulties,"difficulties");
	HX_MARK_MEMBER_NAME(fileName,"fileName");
	HX_MARK_END_CLASS();
}

void WeekData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(folder,"folder");
	HX_VISIT_MEMBER_NAME(songs,"songs");
	HX_VISIT_MEMBER_NAME(weekCharacters,"weekCharacters");
	HX_VISIT_MEMBER_NAME(weekBackground,"weekBackground");
	HX_VISIT_MEMBER_NAME(weekBefore,"weekBefore");
	HX_VISIT_MEMBER_NAME(storyName,"storyName");
	HX_VISIT_MEMBER_NAME(weekName,"weekName");
	HX_VISIT_MEMBER_NAME(BG,"BG");
	HX_VISIT_MEMBER_NAME(weekImage,"weekImage");
	HX_VISIT_MEMBER_NAME(freeplayColor,"freeplayColor");
	HX_VISIT_MEMBER_NAME(startUnlocked,"startUnlocked");
	HX_VISIT_MEMBER_NAME(hiddenUntilUnlocked,"hiddenUntilUnlocked");
	HX_VISIT_MEMBER_NAME(hideStoryMode,"hideStoryMode");
	HX_VISIT_MEMBER_NAME(hideFreeplay,"hideFreeplay");
	HX_VISIT_MEMBER_NAME(difficulties,"difficulties");
	HX_VISIT_MEMBER_NAME(fileName,"fileName");
}

::hx::Val WeekData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"BG") ) { return ::hx::Val( BG ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"songs") ) { return ::hx::Val( songs ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"folder") ) { return ::hx::Val( folder ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"weekName") ) { return ::hx::Val( weekName ); }
		if (HX_FIELD_EQ(inName,"fileName") ) { return ::hx::Val( fileName ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"storyName") ) { return ::hx::Val( storyName ); }
		if (HX_FIELD_EQ(inName,"weekImage") ) { return ::hx::Val( weekImage ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"weekBefore") ) { return ::hx::Val( weekBefore ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hideFreeplay") ) { return ::hx::Val( hideFreeplay ); }
		if (HX_FIELD_EQ(inName,"difficulties") ) { return ::hx::Val( difficulties ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"freeplayColor") ) { return ::hx::Val( freeplayColor ); }
		if (HX_FIELD_EQ(inName,"startUnlocked") ) { return ::hx::Val( startUnlocked ); }
		if (HX_FIELD_EQ(inName,"hideStoryMode") ) { return ::hx::Val( hideStoryMode ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"weekCharacters") ) { return ::hx::Val( weekCharacters ); }
		if (HX_FIELD_EQ(inName,"weekBackground") ) { return ::hx::Val( weekBackground ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hiddenUntilUnlocked") ) { return ::hx::Val( hiddenUntilUnlocked ); }
	}
	return super::__Field(inName,inCallProp);
}

bool WeekData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"addWeek") ) { outValue = addWeek_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"weeksList") ) { outValue = ( weeksList ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"weeksLoaded") ) { outValue = ( weeksLoaded ); return true; }
		if (HX_FIELD_EQ(inName,"getWeekFile") ) { outValue = getWeekFile_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createWeekFile") ) { outValue = createWeekFile_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getCurrentWeek") ) { outValue = getCurrentWeek_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"reloadWeekFiles") ) { outValue = reloadWeekFiles_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getWeekFileName") ) { outValue = getWeekFileName_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setDirectoryFromWeek") ) { outValue = setDirectoryFromWeek_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"reloadCustomWeekFiles") ) { outValue = reloadCustomWeekFiles_dyn(); return true; }
	}
	return false;
}

::hx::Val WeekData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"BG") ) { BG=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"songs") ) { songs=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"folder") ) { folder=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"weekName") ) { weekName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fileName") ) { fileName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"storyName") ) { storyName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"weekImage") ) { weekImage=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"weekBefore") ) { weekBefore=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hideFreeplay") ) { hideFreeplay=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"difficulties") ) { difficulties=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"freeplayColor") ) { freeplayColor=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startUnlocked") ) { startUnlocked=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hideStoryMode") ) { hideStoryMode=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"weekCharacters") ) { weekCharacters=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"weekBackground") ) { weekBackground=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hiddenUntilUnlocked") ) { hiddenUntilUnlocked=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool WeekData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"weeksList") ) { weeksList=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"weeksLoaded") ) { weeksLoaded=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void WeekData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("folder",ae,76,90,f9));
	outFields->push(HX_("songs",fe,36,c7,80));
	outFields->push(HX_("weekCharacters",be,b5,7f,1d));
	outFields->push(HX_("weekBackground",02,f1,ce,ed));
	outFields->push(HX_("weekBefore",93,97,02,5d));
	outFields->push(HX_("storyName",e0,50,20,29));
	outFields->push(HX_("weekName",5f,08,2f,30));
	outFields->push(HX_("BG",c5,39,00,00));
	outFields->push(HX_("weekImage",c7,da,dc,1f));
	outFields->push(HX_("freeplayColor",a3,0c,53,32));
	outFields->push(HX_("startUnlocked",a5,96,c9,60));
	outFields->push(HX_("hiddenUntilUnlocked",17,ed,31,dc));
	outFields->push(HX_("hideStoryMode",d6,b4,4e,4c));
	outFields->push(HX_("hideFreeplay",82,13,8c,e3));
	outFields->push(HX_("difficulties",59,c7,5e,02));
	outFields->push(HX_("fileName",e7,5a,43,62));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WeekData_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(WeekData_obj,folder),HX_("folder",ae,76,90,f9)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(WeekData_obj,songs),HX_("songs",fe,36,c7,80)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(WeekData_obj,weekCharacters),HX_("weekCharacters",be,b5,7f,1d)},
	{::hx::fsString,(int)offsetof(WeekData_obj,weekBackground),HX_("weekBackground",02,f1,ce,ed)},
	{::hx::fsString,(int)offsetof(WeekData_obj,weekBefore),HX_("weekBefore",93,97,02,5d)},
	{::hx::fsString,(int)offsetof(WeekData_obj,storyName),HX_("storyName",e0,50,20,29)},
	{::hx::fsString,(int)offsetof(WeekData_obj,weekName),HX_("weekName",5f,08,2f,30)},
	{::hx::fsString,(int)offsetof(WeekData_obj,BG),HX_("BG",c5,39,00,00)},
	{::hx::fsString,(int)offsetof(WeekData_obj,weekImage),HX_("weekImage",c7,da,dc,1f)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(WeekData_obj,freeplayColor),HX_("freeplayColor",a3,0c,53,32)},
	{::hx::fsBool,(int)offsetof(WeekData_obj,startUnlocked),HX_("startUnlocked",a5,96,c9,60)},
	{::hx::fsBool,(int)offsetof(WeekData_obj,hiddenUntilUnlocked),HX_("hiddenUntilUnlocked",17,ed,31,dc)},
	{::hx::fsBool,(int)offsetof(WeekData_obj,hideStoryMode),HX_("hideStoryMode",d6,b4,4e,4c)},
	{::hx::fsBool,(int)offsetof(WeekData_obj,hideFreeplay),HX_("hideFreeplay",82,13,8c,e3)},
	{::hx::fsString,(int)offsetof(WeekData_obj,difficulties),HX_("difficulties",59,c7,5e,02)},
	{::hx::fsString,(int)offsetof(WeekData_obj,fileName),HX_("fileName",e7,5a,43,62)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo WeekData_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &WeekData_obj::weeksLoaded,HX_("weeksLoaded",64,5b,41,21)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &WeekData_obj::weeksList,HX_("weeksList",fd,49,e7,38)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String WeekData_obj_sMemberFields[] = {
	HX_("folder",ae,76,90,f9),
	HX_("songs",fe,36,c7,80),
	HX_("weekCharacters",be,b5,7f,1d),
	HX_("weekBackground",02,f1,ce,ed),
	HX_("weekBefore",93,97,02,5d),
	HX_("storyName",e0,50,20,29),
	HX_("weekName",5f,08,2f,30),
	HX_("BG",c5,39,00,00),
	HX_("weekImage",c7,da,dc,1f),
	HX_("freeplayColor",a3,0c,53,32),
	HX_("startUnlocked",a5,96,c9,60),
	HX_("hiddenUntilUnlocked",17,ed,31,dc),
	HX_("hideStoryMode",d6,b4,4e,4c),
	HX_("hideFreeplay",82,13,8c,e3),
	HX_("difficulties",59,c7,5e,02),
	HX_("fileName",e7,5a,43,62),
	::String(null()) };

static void WeekData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WeekData_obj::weeksLoaded,"weeksLoaded");
	HX_MARK_MEMBER_NAME(WeekData_obj::weeksList,"weeksList");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WeekData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeekData_obj::weeksLoaded,"weeksLoaded");
	HX_VISIT_MEMBER_NAME(WeekData_obj::weeksList,"weeksList");
};

#endif

::hx::Class WeekData_obj::__mClass;

static ::String WeekData_obj_sStaticFields[] = {
	HX_("weeksLoaded",64,5b,41,21),
	HX_("weeksList",fd,49,e7,38),
	HX_("createWeekFile",ac,e3,25,7d),
	HX_("reloadCustomWeekFiles",99,54,61,e8),
	HX_("reloadWeekFiles",4a,73,e1,0b),
	HX_("addWeek",b5,a2,32,8b),
	HX_("getWeekFile",46,27,df,50),
	HX_("getWeekFileName",b1,e0,e3,ce),
	HX_("getCurrentWeek",d7,8b,25,0f),
	HX_("setDirectoryFromWeek",09,80,f0,74),
	::String(null())
};

void WeekData_obj::__register()
{
	WeekData_obj _hx_dummy;
	WeekData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.WeekData",f8,a7,17,7c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WeekData_obj::__GetStatic;
	__mClass->mSetStaticField = &WeekData_obj::__SetStatic;
	__mClass->mMarkFunc = WeekData_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(WeekData_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WeekData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WeekData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WeekData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WeekData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WeekData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void WeekData_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_40e6927fd11a022a_31_boot)
HXDLIN(  31)		weeksLoaded =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_40e6927fd11a022a_32_boot)
HXDLIN(  32)		weeksList = ::Array_obj< ::String >::__new(0);
            	}
}

} // end namespace backend
