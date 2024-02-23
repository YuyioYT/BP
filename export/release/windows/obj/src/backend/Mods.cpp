#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_Mods
#include <backend/Mods.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_9e01c1b3771b993c_41_getGlobalMods,"backend.Mods","getGlobalMods",0x282f7527,"backend.Mods.getGlobalMods","backend/Mods.hx",41,0x628d7792)
HX_LOCAL_STACK_FRAME(_hx_pos_9e01c1b3771b993c_44_pushGlobalMods,"backend.Mods","pushGlobalMods",0xbafefbd1,"backend.Mods.pushGlobalMods","backend/Mods.hx",44,0x628d7792)
HX_LOCAL_STACK_FRAME(_hx_pos_9e01c1b3771b993c_55_getModDirectories,"backend.Mods","getModDirectories",0xf7b0dc9c,"backend.Mods.getModDirectories","backend/Mods.hx",55,0x628d7792)
HX_LOCAL_STACK_FRAME(_hx_pos_9e01c1b3771b993c_72_mergeAllTextsNamed,"backend.Mods","mergeAllTextsNamed",0x6b29d5bf,"backend.Mods.mergeAllTextsNamed","backend/Mods.hx",72,0x628d7792)
HX_LOCAL_STACK_FRAME(_hx_pos_9e01c1b3771b993c_99_directoriesWithFile,"backend.Mods","directoriesWithFile",0x5a0cfd0a,"backend.Mods.directoriesWithFile","backend/Mods.hx",99,0x628d7792)
HX_LOCAL_STACK_FRAME(_hx_pos_9e01c1b3771b993c_132_getPack,"backend.Mods","getPack",0x0de6554c,"backend.Mods.getPack","backend/Mods.hx",132,0x628d7792)
HX_LOCAL_STACK_FRAME(_hx_pos_9e01c1b3771b993c_154_parseList,"backend.Mods","parseList",0x838a262e,"backend.Mods.parseList","backend/Mods.hx",154,0x628d7792)
HX_LOCAL_STACK_FRAME(_hx_pos_9e01c1b3771b993c_180_updateModList,"backend.Mods","updateModList",0x350647b4,"backend.Mods.updateModList","backend/Mods.hx",180,0x628d7792)
HX_LOCAL_STACK_FRAME(_hx_pos_9e01c1b3771b993c_227_loadTopMod,"backend.Mods","loadTopMod",0x40be6756,"backend.Mods.loadTopMod","backend/Mods.hx",227,0x628d7792)
HX_LOCAL_STACK_FRAME(_hx_pos_9e01c1b3771b993c_19_boot,"backend.Mods","boot",0x763fcd55,"backend.Mods.boot","backend/Mods.hx",19,0x628d7792)
HX_LOCAL_STACK_FRAME(_hx_pos_9e01c1b3771b993c_20_boot,"backend.Mods","boot",0x763fcd55,"backend.Mods.boot","backend/Mods.hx",20,0x628d7792)
static const ::String _hx_array_data_a1baaa2b_29[] = {
	HX_("characters",aa,58,ce,55),HX_("custom_events",27,a1,9e,e1),HX_("custom_notetypes",f9,35,37,af),HX_("data",2a,56,63,42),HX_("songs",fe,36,c7,80),HX_("music",a5,d0,5a,10),HX_("sounds",c4,a8,2e,32),HX_("shaders",ae,81,86,5f),HX_("videos",98,d7,95,e5),HX_("images",b8,50,92,fe),HX_("stages",f5,fb,f1,05),HX_("weeks",ff,95,be,c7),HX_("fonts",c4,b7,91,04),HX_("scripts",08,fc,e3,2c),HX_("achievements",24,a1,6b,86),
};
HX_LOCAL_STACK_FRAME(_hx_pos_9e01c1b3771b993c_38_boot,"backend.Mods","boot",0x763fcd55,"backend.Mods.boot","backend/Mods.hx",38,0x628d7792)
HX_LOCAL_STACK_FRAME(_hx_pos_9e01c1b3771b993c_153_boot,"backend.Mods","boot",0x763fcd55,"backend.Mods.boot","backend/Mods.hx",153,0x628d7792)
namespace backend{

void Mods_obj::__construct() { }

Dynamic Mods_obj::__CreateEmpty() { return new Mods_obj; }

void *Mods_obj::_hx_vtable = 0;

Dynamic Mods_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Mods_obj > _hx_result = new Mods_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Mods_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x51ebbac1;
}

::String Mods_obj::currentModDirectory;

::Array< ::String > Mods_obj::ignoreModFolders;

::Array< ::String > Mods_obj::globalMods;

::Array< ::String > Mods_obj::getGlobalMods(){
            	HX_STACKFRAME(&_hx_pos_9e01c1b3771b993c_41_getGlobalMods)
HXDLIN(  41)		return ::backend::Mods_obj::globalMods;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mods_obj,getGlobalMods,return )

::Array< ::String > Mods_obj::pushGlobalMods(){
            	HX_STACKFRAME(&_hx_pos_9e01c1b3771b993c_44_pushGlobalMods)
HXLINE(  45)		::backend::Mods_obj::globalMods = ::Array_obj< ::String >::__new(0);
HXLINE(  46)		{
HXLINE(  46)			int _g = 0;
HXDLIN(  46)			if (!(::backend::Mods_obj::updatedOnState)) {
HXLINE(  46)				::backend::Mods_obj::updateModList();
            			}
HXDLIN(  46)			::Array< ::String > list_enabled = ::Array_obj< ::String >::__new(0);
HXDLIN(  46)			::Array< ::String > list_disabled = ::Array_obj< ::String >::__new(0);
HXDLIN(  46)			::Array< ::String > list_all = ::Array_obj< ::String >::__new(0);
HXDLIN(  46)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  46)				int _g = 0;
HXDLIN(  46)				::String path = HX_("modsList.txt",f1,ca,08,ac);
HXDLIN(  46)				::String daList = null();
HXDLIN(  46)				::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXLINE(  73)				path = formatted->__get((formatted->length - 1));
HXLINE(  46)				if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  74)					daList = ::sys::io::File_obj::getContent(path);
            				}
HXLINE(  46)				::Array< ::String > _g1;
HXDLIN(  46)				if (::hx::IsNotNull( daList )) {
HXLINE(  46)					::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXLINE( 145)					daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXLINE(  46)					{
HXLINE(  46)						int _g = 0;
HXDLIN(  46)						int _g2 = daList1->length;
HXDLIN(  46)						while((_g < _g2)){
HXLINE(  46)							_g = (_g + 1);
HXDLIN(  46)							int i = (_g - 1);
HXDLIN(  46)							daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            						}
            					}
HXDLIN(  46)					_g1 = daList1;
            				}
            				else {
HXLINE(  46)					_g1 = ::Array_obj< ::String >::__new(0);
            				}
HXDLIN(  46)				while((_g < _g1->length)){
HXLINE(  46)					::String mod = _g1->__get(_g);
HXDLIN(  46)					_g = (_g + 1);
HXDLIN(  46)					if ((::StringTools_obj::trim(mod).length < 1)) {
HXLINE(  46)						continue;
            					}
HXDLIN(  46)					::Array< ::String > dat = mod.split(HX_("|",7c,00,00,00));
HXDLIN(  46)					list_all->push(dat->__get(0));
HXDLIN(  46)					if ((dat->__get(1) == HX_("1",31,00,00,00))) {
HXLINE(  46)						list_enabled->push(dat->__get(0));
            					}
            					else {
HXLINE(  46)						list_disabled->push(dat->__get(0));
            					}
            				}
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 172)					 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE(  46)					::haxe::Log_obj::trace(e,::hx::SourceInfo(HX_("source/backend/Mods.hx",1e,5b,8b,ff),173,HX_("backend.Mods",2b,aa,ba,a1),HX_("parseList",31,6e,59,cf)));
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXDLIN(  46)			::Array< ::String > _g1 = list_enabled;
HXDLIN(  46)			while((_g < _g1->length)){
HXLINE(  46)				::String mod = _g1->__get(_g);
HXDLIN(  46)				_g = (_g + 1);
HXLINE(  48)				 ::Dynamic pack = ::backend::Mods_obj::getPack(mod);
HXLINE(  49)				bool _hx_tmp;
HXDLIN(  49)				if (::hx::IsNotNull( pack )) {
HXLINE(  49)					_hx_tmp = ( (bool)(pack->__Field(HX_("runsGlobally",98,2d,b5,06),::hx::paccDynamic)) );
            				}
            				else {
HXLINE(  49)					_hx_tmp = false;
            				}
HXDLIN(  49)				if (_hx_tmp) {
HXLINE(  49)					::backend::Mods_obj::globalMods->push(mod);
            				}
            			}
            		}
HXLINE(  51)		return ::backend::Mods_obj::globalMods;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mods_obj,pushGlobalMods,return )

::Array< ::String > Mods_obj::getModDirectories(){
            	HX_STACKFRAME(&_hx_pos_9e01c1b3771b993c_55_getModDirectories)
HXLINE(  56)		::Array< ::String > list = ::Array_obj< ::String >::__new(0);
HXLINE(  58)		::String modsFolder = HX_("mods/",9e,2f,58,0c);
HXLINE(  59)		if (::sys::FileSystem_obj::exists(modsFolder)) {
HXLINE(  60)			int _g = 0;
HXDLIN(  60)			::Array< ::String > _g1 = ::sys::FileSystem_obj::readDirectory(modsFolder);
HXDLIN(  60)			while((_g < _g1->length)){
HXLINE(  60)				::String folder = _g1->__get(_g);
HXDLIN(  60)				_g = (_g + 1);
HXLINE(  62)				::String path = ::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,modsFolder)->init(1,folder));
HXLINE(  63)				bool _hx_tmp;
HXDLIN(  63)				bool _hx_tmp1;
HXDLIN(  63)				if (::sys::FileSystem_obj::isDirectory(path)) {
HXLINE(  63)					::Array< ::String > _hx_tmp = ::backend::Mods_obj::ignoreModFolders;
HXDLIN(  63)					_hx_tmp1 = !(_hx_tmp->contains(folder.toLowerCase()));
            				}
            				else {
HXLINE(  63)					_hx_tmp1 = false;
            				}
HXDLIN(  63)				if (_hx_tmp1) {
HXLINE(  63)					_hx_tmp = !(list->contains(folder));
            				}
            				else {
HXLINE(  63)					_hx_tmp = false;
            				}
HXDLIN(  63)				if (_hx_tmp) {
HXLINE(  64)					list->push(folder);
            				}
            			}
            		}
HXLINE(  68)		return list;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mods_obj,getModDirectories,return )

::Array< ::String > Mods_obj::mergeAllTextsNamed(::String path,::String defaultDirectory,::hx::Null< bool >  __o_allowDuplicates){
            		bool allowDuplicates = __o_allowDuplicates.Default(false);
            	HX_STACKFRAME(&_hx_pos_9e01c1b3771b993c_72_mergeAllTextsNamed)
HXLINE(  73)		if (::hx::IsNull( defaultDirectory )) {
HXLINE(  73)			defaultDirectory = HX_("assets/",4c,2a,dc,36);
            		}
HXLINE(  74)		defaultDirectory = ::StringTools_obj::trim(defaultDirectory);
HXLINE(  75)		if (!(::StringTools_obj::endsWith(defaultDirectory,HX_("/",2f,00,00,00)))) {
HXLINE(  75)			defaultDirectory = (defaultDirectory + HX_("/",2f,00,00,00));
            		}
HXLINE(  76)		if (!(::StringTools_obj::startsWith(defaultDirectory,HX_("assets/",4c,2a,dc,36)))) {
HXLINE(  76)			defaultDirectory = (HX_("assets/",4c,2a,dc,36) + defaultDirectory);
            		}
HXLINE(  78)		::Array< ::String > mergedList = ::Array_obj< ::String >::__new(0);
HXLINE(  79)		::Array< ::String > foldersToCheck = ::Array_obj< ::String >::__new(0);
HXDLIN(  79)		if (::sys::FileSystem_obj::exists((defaultDirectory + path))) {
HXLINE(  79)			foldersToCheck->push((defaultDirectory + path));
            		}
HXDLIN(  79)		{
HXLINE(  79)			{
HXLINE(  79)				int _g = 0;
HXDLIN(  79)				::Array< ::String > _g1 = ::backend::Mods_obj::globalMods;
HXDLIN(  79)				while((_g < _g1->length)){
HXLINE(  79)					::String mod = _g1->__get(_g);
HXDLIN(  79)					_g = (_g + 1);
HXDLIN(  79)					::String key = ((mod + HX_("/",2f,00,00,00)) + path);
HXDLIN(  79)					if (::hx::IsNull( key )) {
HXLINE(  79)						key = HX_("",00,00,00,00);
            					}
HXDLIN(  79)					::String folder = (HX_("mods/",9e,2f,58,0c) + key);
HXDLIN(  79)					if (::sys::FileSystem_obj::exists(folder)) {
HXLINE(  79)						foldersToCheck->push(folder);
            					}
            				}
            			}
HXDLIN(  79)			::String key = path;
HXDLIN(  79)			if (::hx::IsNull( key )) {
HXLINE(  79)				key = HX_("",00,00,00,00);
            			}
HXDLIN(  79)			::String folder = (HX_("mods/",9e,2f,58,0c) + key);
HXDLIN(  79)			if (::sys::FileSystem_obj::exists(folder)) {
HXLINE(  79)				::String key = path;
HXDLIN(  79)				if (::hx::IsNull( key )) {
HXLINE(  79)					key = HX_("",00,00,00,00);
            				}
HXDLIN(  79)				foldersToCheck->push((HX_("mods/",9e,2f,58,0c) + key));
            			}
HXDLIN(  79)			bool _hx_tmp;
HXDLIN(  79)			if (::hx::IsNotNull( ::backend::Mods_obj::currentModDirectory )) {
HXLINE(  79)				_hx_tmp = (::backend::Mods_obj::currentModDirectory.length > 0);
            			}
            			else {
HXLINE(  79)				_hx_tmp = false;
            			}
HXDLIN(  79)			if (_hx_tmp) {
HXLINE(  79)				::String key = ((::backend::Mods_obj::currentModDirectory + HX_("/",2f,00,00,00)) + path);
HXDLIN(  79)				if (::hx::IsNull( key )) {
HXLINE(  79)					key = HX_("",00,00,00,00);
            				}
HXDLIN(  79)				::String folder = (HX_("mods/",9e,2f,58,0c) + key);
HXDLIN(  79)				if (::sys::FileSystem_obj::exists(folder)) {
HXLINE(  79)					foldersToCheck->push(folder);
            				}
            			}
            		}
HXDLIN(  79)		::Array< ::String > paths = foldersToCheck;
HXLINE(  81)		::String defaultPath = (defaultDirectory + path);
HXLINE(  82)		if (paths->contains(defaultPath)) {
HXLINE(  84)			paths->remove(defaultPath);
HXLINE(  85)			paths->insert(0,defaultPath);
            		}
HXLINE(  88)		{
HXLINE(  88)			int _g2 = 0;
HXDLIN(  88)			while((_g2 < paths->length)){
HXLINE(  88)				::String file = paths->__get(_g2);
HXDLIN(  88)				_g2 = (_g2 + 1);
HXLINE(  90)				::String path = file;
HXDLIN(  90)				::String daList = null();
HXDLIN(  90)				::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXDLIN(  90)				path = formatted->__get((formatted->length - 1));
HXDLIN(  90)				if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  90)					daList = ::sys::io::File_obj::getContent(path);
            				}
HXDLIN(  90)				::Array< ::String > list;
HXDLIN(  90)				if (::hx::IsNotNull( daList )) {
HXLINE(  90)					::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXDLIN(  90)					daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXDLIN(  90)					{
HXLINE(  90)						int _g = 0;
HXDLIN(  90)						int _g1 = daList1->length;
HXDLIN(  90)						while((_g < _g1)){
HXLINE(  90)							_g = (_g + 1);
HXDLIN(  90)							int i = (_g - 1);
HXDLIN(  90)							daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            						}
            					}
HXDLIN(  90)					list = daList1;
            				}
            				else {
HXLINE(  90)					list = ::Array_obj< ::String >::__new(0);
            				}
HXLINE(  91)				{
HXLINE(  91)					int _g = 0;
HXDLIN(  91)					while((_g < list->length)){
HXLINE(  91)						::String value = list->__get(_g);
HXDLIN(  91)						_g = (_g + 1);
HXLINE(  92)						bool _hx_tmp;
HXDLIN(  92)						bool _hx_tmp1;
HXDLIN(  92)						if (!(allowDuplicates)) {
HXLINE(  92)							_hx_tmp1 = !(mergedList->contains(value));
            						}
            						else {
HXLINE(  92)							_hx_tmp1 = true;
            						}
HXDLIN(  92)						if (_hx_tmp1) {
HXLINE(  92)							_hx_tmp = (value.length > 0);
            						}
            						else {
HXLINE(  92)							_hx_tmp = false;
            						}
HXDLIN(  92)						if (_hx_tmp) {
HXLINE(  93)							mergedList->push(value);
            						}
            					}
            				}
            			}
            		}
HXLINE(  95)		return mergedList;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Mods_obj,mergeAllTextsNamed,return )

::Array< ::String > Mods_obj::directoriesWithFile(::String path,::String fileToFind,::hx::Null< bool >  __o_mods){
            		bool mods = __o_mods.Default(true);
            	HX_STACKFRAME(&_hx_pos_9e01c1b3771b993c_99_directoriesWithFile)
HXLINE( 100)		::Array< ::String > foldersToCheck = ::Array_obj< ::String >::__new(0);
HXLINE( 102)		if (::sys::FileSystem_obj::exists((path + fileToFind))) {
HXLINE( 104)			foldersToCheck->push((path + fileToFind));
            		}
HXLINE( 107)		if (mods) {
HXLINE( 110)			{
HXLINE( 110)				int _g = 0;
HXDLIN( 110)				::Array< ::String > _g1 = ::backend::Mods_obj::globalMods;
HXDLIN( 110)				while((_g < _g1->length)){
HXLINE( 110)					::String mod = _g1->__get(_g);
HXDLIN( 110)					_g = (_g + 1);
HXLINE( 112)					::String key = ((mod + HX_("/",2f,00,00,00)) + fileToFind);
HXDLIN( 112)					if (::hx::IsNull( key )) {
HXLINE( 112)						key = HX_("",00,00,00,00);
            					}
HXDLIN( 112)					::String folder = (HX_("mods/",9e,2f,58,0c) + key);
HXLINE( 113)					if (::sys::FileSystem_obj::exists(folder)) {
HXLINE( 113)						foldersToCheck->push(folder);
            					}
            				}
            			}
HXLINE( 117)			::String key = fileToFind;
HXDLIN( 117)			if (::hx::IsNull( key )) {
HXLINE( 117)				key = HX_("",00,00,00,00);
            			}
HXDLIN( 117)			::String folder = (HX_("mods/",9e,2f,58,0c) + key);
HXLINE( 118)			if (::sys::FileSystem_obj::exists(folder)) {
HXLINE( 118)				::String key = fileToFind;
HXDLIN( 118)				if (::hx::IsNull( key )) {
HXLINE( 118)					key = HX_("",00,00,00,00);
            				}
HXDLIN( 118)				foldersToCheck->push((HX_("mods/",9e,2f,58,0c) + key));
            			}
HXLINE( 121)			bool _hx_tmp;
HXDLIN( 121)			if (::hx::IsNotNull( ::backend::Mods_obj::currentModDirectory )) {
HXLINE( 121)				_hx_tmp = (::backend::Mods_obj::currentModDirectory.length > 0);
            			}
            			else {
HXLINE( 121)				_hx_tmp = false;
            			}
HXDLIN( 121)			if (_hx_tmp) {
HXLINE( 123)				::String key = ((::backend::Mods_obj::currentModDirectory + HX_("/",2f,00,00,00)) + fileToFind);
HXDLIN( 123)				if (::hx::IsNull( key )) {
HXLINE( 123)					key = HX_("",00,00,00,00);
            				}
HXDLIN( 123)				::String folder = (HX_("mods/",9e,2f,58,0c) + key);
HXLINE( 124)				if (::sys::FileSystem_obj::exists(folder)) {
HXLINE( 124)					foldersToCheck->push(folder);
            				}
            			}
            		}
HXLINE( 128)		return foldersToCheck;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Mods_obj,directoriesWithFile,return )

 ::Dynamic Mods_obj::getPack(::String folder){
            	HX_STACKFRAME(&_hx_pos_9e01c1b3771b993c_132_getPack)
HXLINE( 134)		if (::hx::IsNull( folder )) {
HXLINE( 134)			folder = ::backend::Mods_obj::currentModDirectory;
            		}
HXLINE( 136)		::String key = (folder + HX_("/pack.json",ce,a9,3a,e3));
HXDLIN( 136)		if (::hx::IsNull( key )) {
HXLINE( 136)			key = HX_("",00,00,00,00);
            		}
HXDLIN( 136)		::String path = (HX_("mods/",9e,2f,58,0c) + key);
HXLINE( 137)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 138)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 140)				::String rawJson = ::sys::io::File_obj::getContent(path);
HXLINE( 144)				bool _hx_tmp;
HXDLIN( 144)				if (::hx::IsNotNull( rawJson )) {
HXLINE( 144)					_hx_tmp = (rawJson.length > 0);
            				}
            				else {
HXLINE( 144)					_hx_tmp = false;
            				}
HXDLIN( 144)				if (_hx_tmp) {
HXLINE( 144)					return ::tjson::TJSON_obj::parse(rawJson,null(),null());
            				}
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 145)					{
HXLINE( 145)						null();
            					}
HXDLIN( 145)					 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 146)					::haxe::Log_obj::trace(e,::hx::SourceInfo(HX_("source/backend/Mods.hx",1e,5b,8b,ff),146,HX_("backend.Mods",2b,aa,ba,a1),HX_("getPack",8f,86,d4,1c)));
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
HXLINE( 150)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mods_obj,getPack,return )

bool Mods_obj::updatedOnState;

 ::Dynamic Mods_obj::parseList(){
            	HX_STACKFRAME(&_hx_pos_9e01c1b3771b993c_154_parseList)
HXLINE( 155)		if (!(::backend::Mods_obj::updatedOnState)) {
HXLINE( 155)			::backend::Mods_obj::updateModList();
            		}
HXLINE( 156)		 ::Dynamic list =  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("all",21,f9,49,00),::Array_obj< ::String >::__new(0))
            			->setFixed(1,HX_("disabled",7c,41,04,7c),::Array_obj< ::String >::__new(0))
            			->setFixed(2,HX_("enabled",81,04,31,7e),::Array_obj< ::String >::__new(0)));
HXLINE( 159)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 160)			int _g = 0;
HXDLIN( 160)			::String path = HX_("modsList.txt",f1,ca,08,ac);
HXDLIN( 160)			::String daList = null();
HXDLIN( 160)			::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXDLIN( 160)			path = formatted->__get((formatted->length - 1));
HXDLIN( 160)			if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 160)				daList = ::sys::io::File_obj::getContent(path);
            			}
HXDLIN( 160)			::Array< ::String > _g1;
HXDLIN( 160)			if (::hx::IsNotNull( daList )) {
HXLINE( 160)				::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXDLIN( 160)				daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXDLIN( 160)				{
HXLINE( 160)					int _g = 0;
HXDLIN( 160)					int _g2 = daList1->length;
HXDLIN( 160)					while((_g < _g2)){
HXLINE( 160)						_g = (_g + 1);
HXDLIN( 160)						int i = (_g - 1);
HXDLIN( 160)						daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            					}
            				}
HXDLIN( 160)				_g1 = daList1;
            			}
            			else {
HXLINE( 160)				_g1 = ::Array_obj< ::String >::__new(0);
            			}
HXDLIN( 160)			while((_g < _g1->length)){
HXLINE( 160)				::String mod = _g1->__get(_g);
HXDLIN( 160)				_g = (_g + 1);
HXLINE( 163)				if ((::StringTools_obj::trim(mod).length < 1)) {
HXLINE( 163)					continue;
            				}
HXLINE( 165)				::Array< ::String > dat = mod.split(HX_("|",7c,00,00,00));
HXLINE( 166)				( (::Array< ::String >)(list->__Field(HX_("all",21,f9,49,00),::hx::paccDynamic)) )->push(dat->__get(0));
HXLINE( 167)				if ((dat->__get(1) == HX_("1",31,00,00,00))) {
HXLINE( 168)					( (::Array< ::String >)(list->__Field(HX_("enabled",81,04,31,7e),::hx::paccDynamic)) )->push(dat->__get(0));
            				}
            				else {
HXLINE( 170)					( (::Array< ::String >)(list->__Field(HX_("disabled",7c,41,04,7c),::hx::paccDynamic)) )->push(dat->__get(0));
            				}
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 172)				 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE( 173)				::haxe::Log_obj::trace(e,::hx::SourceInfo(HX_("source/backend/Mods.hx",1e,5b,8b,ff),173,HX_("backend.Mods",2b,aa,ba,a1),HX_("parseList",31,6e,59,cf)));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 176)		return list;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mods_obj,parseList,return )

void Mods_obj::updateModList(){
            	HX_STACKFRAME(&_hx_pos_9e01c1b3771b993c_180_updateModList)
HXLINE( 183)		::Array< ::Dynamic> list = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 184)		::Array< ::String > added = ::Array_obj< ::String >::__new(0);
HXLINE( 185)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 186)			int _g = 0;
HXDLIN( 186)			::String path = HX_("modsList.txt",f1,ca,08,ac);
HXDLIN( 186)			::String daList = null();
HXDLIN( 186)			::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXDLIN( 186)			path = formatted->__get((formatted->length - 1));
HXDLIN( 186)			if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 186)				daList = ::sys::io::File_obj::getContent(path);
            			}
HXDLIN( 186)			::Array< ::String > _g1;
HXDLIN( 186)			if (::hx::IsNotNull( daList )) {
HXLINE( 186)				::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXDLIN( 186)				daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXDLIN( 186)				{
HXLINE( 186)					int _g = 0;
HXDLIN( 186)					int _g2 = daList1->length;
HXDLIN( 186)					while((_g < _g2)){
HXLINE( 186)						_g = (_g + 1);
HXDLIN( 186)						int i = (_g - 1);
HXDLIN( 186)						daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            					}
            				}
HXDLIN( 186)				_g1 = daList1;
            			}
            			else {
HXLINE( 186)				_g1 = ::Array_obj< ::String >::__new(0);
            			}
HXDLIN( 186)			while((_g < _g1->length)){
HXLINE( 186)				::String mod = _g1->__get(_g);
HXDLIN( 186)				_g = (_g + 1);
HXLINE( 188)				::Array< ::String > dat = mod.split(HX_("|",7c,00,00,00));
HXLINE( 189)				::String folder = dat->__get(0);
HXLINE( 190)				bool _hx_tmp;
HXDLIN( 190)				bool _hx_tmp1;
HXDLIN( 190)				bool _hx_tmp2;
HXDLIN( 190)				if ((::StringTools_obj::trim(folder).length > 0)) {
HXLINE( 190)					::String key = folder;
HXDLIN( 190)					if (::hx::IsNull( key )) {
HXLINE( 190)						key = HX_("",00,00,00,00);
            					}
HXDLIN( 190)					_hx_tmp2 = ::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + key));
            				}
            				else {
HXLINE( 190)					_hx_tmp2 = false;
            				}
HXDLIN( 190)				if (_hx_tmp2) {
HXLINE( 190)					::String key = folder;
HXDLIN( 190)					if (::hx::IsNull( key )) {
HXLINE( 190)						key = HX_("",00,00,00,00);
            					}
HXDLIN( 190)					_hx_tmp1 = ::sys::FileSystem_obj::isDirectory((HX_("mods/",9e,2f,58,0c) + key));
            				}
            				else {
HXLINE( 190)					_hx_tmp1 = false;
            				}
HXDLIN( 190)				if (_hx_tmp1) {
HXLINE( 190)					_hx_tmp = !(added->contains(folder));
            				}
            				else {
HXLINE( 190)					_hx_tmp = false;
            				}
HXDLIN( 190)				if (_hx_tmp) {
HXLINE( 192)					added->push(folder);
HXLINE( 193)					list->push(::cpp::VirtualArray_obj::__new(2)->init(0,folder)->init(1,(dat->__get(1) == HX_("1",31,00,00,00))));
            				}
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 196)				 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE( 197)				::haxe::Log_obj::trace(e,::hx::SourceInfo(HX_("source/backend/Mods.hx",1e,5b,8b,ff),197,HX_("backend.Mods",2b,aa,ba,a1),HX_("updateModList",37,4d,4d,a8)));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 201)		{
HXLINE( 201)			int _g = 0;
HXDLIN( 201)			::Array< ::String > list1 = ::Array_obj< ::String >::__new(0);
HXDLIN( 201)			::String modsFolder = HX_("mods/",9e,2f,58,0c);
HXDLIN( 201)			if (::sys::FileSystem_obj::exists(modsFolder)) {
HXLINE( 201)				int _g = 0;
HXDLIN( 201)				::Array< ::String > _g1 = ::sys::FileSystem_obj::readDirectory(modsFolder);
HXDLIN( 201)				while((_g < _g1->length)){
HXLINE( 201)					::String folder = _g1->__get(_g);
HXDLIN( 201)					_g = (_g + 1);
HXDLIN( 201)					::String path = ::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,modsFolder)->init(1,folder));
HXDLIN( 201)					bool _hx_tmp;
HXDLIN( 201)					bool _hx_tmp1;
HXDLIN( 201)					if (::sys::FileSystem_obj::isDirectory(path)) {
HXLINE( 201)						::Array< ::String > _hx_tmp = ::backend::Mods_obj::ignoreModFolders;
HXDLIN( 201)						_hx_tmp1 = !(_hx_tmp->contains(folder.toLowerCase()));
            					}
            					else {
HXLINE( 201)						_hx_tmp1 = false;
            					}
HXDLIN( 201)					if (_hx_tmp1) {
HXLINE( 201)						_hx_tmp = !(list1->contains(folder));
            					}
            					else {
HXLINE( 201)						_hx_tmp = false;
            					}
HXDLIN( 201)					if (_hx_tmp) {
HXLINE( 201)						list1->push(folder);
            					}
            				}
            			}
HXDLIN( 201)			::Array< ::String > _g1 = list1;
HXDLIN( 201)			while((_g < _g1->length)){
HXLINE( 201)				::String folder = _g1->__get(_g);
HXDLIN( 201)				_g = (_g + 1);
HXLINE( 203)				bool _hx_tmp;
HXDLIN( 203)				bool _hx_tmp1;
HXDLIN( 203)				bool _hx_tmp2;
HXDLIN( 203)				bool _hx_tmp3;
HXDLIN( 203)				if ((::StringTools_obj::trim(folder).length > 0)) {
HXLINE( 203)					::String key = folder;
HXDLIN( 203)					if (::hx::IsNull( key )) {
HXLINE( 203)						key = HX_("",00,00,00,00);
            					}
HXDLIN( 203)					_hx_tmp3 = ::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + key));
            				}
            				else {
HXLINE( 203)					_hx_tmp3 = false;
            				}
HXDLIN( 203)				if (_hx_tmp3) {
HXLINE( 203)					::String key = folder;
HXDLIN( 203)					if (::hx::IsNull( key )) {
HXLINE( 203)						key = HX_("",00,00,00,00);
            					}
HXDLIN( 203)					_hx_tmp2 = ::sys::FileSystem_obj::isDirectory((HX_("mods/",9e,2f,58,0c) + key));
            				}
            				else {
HXLINE( 203)					_hx_tmp2 = false;
            				}
HXDLIN( 203)				if (_hx_tmp2) {
HXLINE( 204)					::Array< ::String > _hx_tmp = ::backend::Mods_obj::ignoreModFolders;
HXLINE( 203)					_hx_tmp1 = !(_hx_tmp->contains(folder.toLowerCase()));
            				}
            				else {
HXLINE( 203)					_hx_tmp1 = false;
            				}
HXDLIN( 203)				if (_hx_tmp1) {
HXLINE( 203)					_hx_tmp = !(added->contains(folder));
            				}
            				else {
HXLINE( 203)					_hx_tmp = false;
            				}
HXDLIN( 203)				if (_hx_tmp) {
HXLINE( 206)					added->push(folder);
HXLINE( 207)					list->push(::cpp::VirtualArray_obj::__new(2)->init(0,folder)->init(1,true));
            				}
            			}
            		}
HXLINE( 213)		::String fileStr = HX_("",00,00,00,00);
HXLINE( 214)		{
HXLINE( 214)			int _g2 = 0;
HXDLIN( 214)			while((_g2 < list->length)){
HXLINE( 214)				::cpp::VirtualArray values = ::cpp::VirtualArray( list->__get(_g2));
HXDLIN( 214)				_g2 = (_g2 + 1);
HXLINE( 216)				if ((fileStr.length > 0)) {
HXLINE( 216)					fileStr = (fileStr + HX_("\n",0a,00,00,00));
            				}
HXLINE( 217)				::String fileStr1 = (::Std_obj::string(values->__get(0)) + HX_("|",7c,00,00,00));
HXDLIN( 217)				::String fileStr2;
HXDLIN( 217)				if (( (bool)(values->__get(1)) )) {
HXLINE( 217)					fileStr2 = HX_("1",31,00,00,00);
            				}
            				else {
HXLINE( 217)					fileStr2 = HX_("0",30,00,00,00);
            				}
HXDLIN( 217)				fileStr = (fileStr + (fileStr1 + fileStr2));
            			}
            		}
HXLINE( 220)		::sys::io::File_obj::saveContent(HX_("modsList.txt",f1,ca,08,ac),fileStr);
HXLINE( 221)		::backend::Mods_obj::updatedOnState = true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mods_obj,updateModList,(void))

void Mods_obj::loadTopMod(){
            	HX_STACKFRAME(&_hx_pos_9e01c1b3771b993c_227_loadTopMod)
HXLINE( 228)		::backend::Mods_obj::currentModDirectory = HX_("",00,00,00,00);
HXLINE( 231)		if (!(::backend::Mods_obj::updatedOnState)) {
HXLINE( 231)			::backend::Mods_obj::updateModList();
            		}
HXDLIN( 231)		::Array< ::String > list_enabled = ::Array_obj< ::String >::__new(0);
HXDLIN( 231)		::Array< ::String > list_disabled = ::Array_obj< ::String >::__new(0);
HXDLIN( 231)		::Array< ::String > list_all = ::Array_obj< ::String >::__new(0);
HXDLIN( 231)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 231)			int _g = 0;
HXDLIN( 231)			::String path = HX_("modsList.txt",f1,ca,08,ac);
HXDLIN( 231)			::String daList = null();
HXDLIN( 231)			::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXLINE(  73)			path = formatted->__get((formatted->length - 1));
HXLINE( 231)			if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  74)				daList = ::sys::io::File_obj::getContent(path);
            			}
HXLINE( 231)			::Array< ::String > _g1;
HXDLIN( 231)			if (::hx::IsNotNull( daList )) {
HXLINE( 231)				::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXLINE( 145)				daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXLINE( 231)				{
HXLINE( 231)					int _g = 0;
HXDLIN( 231)					int _g2 = daList1->length;
HXDLIN( 231)					while((_g < _g2)){
HXLINE( 231)						_g = (_g + 1);
HXDLIN( 231)						int i = (_g - 1);
HXDLIN( 231)						daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            					}
            				}
HXDLIN( 231)				_g1 = daList1;
            			}
            			else {
HXLINE( 231)				_g1 = ::Array_obj< ::String >::__new(0);
            			}
HXDLIN( 231)			while((_g < _g1->length)){
HXLINE( 231)				::String mod = _g1->__get(_g);
HXDLIN( 231)				_g = (_g + 1);
HXDLIN( 231)				if ((::StringTools_obj::trim(mod).length < 1)) {
HXLINE( 231)					continue;
            				}
HXDLIN( 231)				::Array< ::String > dat = mod.split(HX_("|",7c,00,00,00));
HXDLIN( 231)				list_all->push(dat->__get(0));
HXDLIN( 231)				if ((dat->__get(1) == HX_("1",31,00,00,00))) {
HXLINE( 231)					list_enabled->push(dat->__get(0));
            				}
            				else {
HXLINE( 231)					list_disabled->push(dat->__get(0));
            				}
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 172)				 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE( 231)				::haxe::Log_obj::trace(e,::hx::SourceInfo(HX_("source/backend/Mods.hx",1e,5b,8b,ff),173,HX_("backend.Mods",2b,aa,ba,a1),HX_("parseList",31,6e,59,cf)));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXDLIN( 231)		::Array< ::String > list = list_enabled;
HXLINE( 232)		bool _hx_tmp;
HXDLIN( 232)		if (::hx::IsNotNull( list )) {
HXLINE( 232)			_hx_tmp = ::hx::IsNotNull( list->__get(0) );
            		}
            		else {
HXLINE( 232)			_hx_tmp = false;
            		}
HXDLIN( 232)		if (_hx_tmp) {
HXLINE( 233)			::backend::Mods_obj::currentModDirectory = list->__get(0);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mods_obj,loadTopMod,(void))


Mods_obj::Mods_obj()
{
}

bool Mods_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getPack") ) { outValue = getPack_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"parseList") ) { outValue = parseList_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"globalMods") ) { outValue = ( globalMods ); return true; }
		if (HX_FIELD_EQ(inName,"loadTopMod") ) { outValue = loadTopMod_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getGlobalMods") ) { outValue = getGlobalMods_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"updateModList") ) { outValue = updateModList_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"pushGlobalMods") ) { outValue = pushGlobalMods_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"updatedOnState") ) { outValue = ( updatedOnState ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignoreModFolders") ) { outValue = ( ignoreModFolders ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getModDirectories") ) { outValue = getModDirectories_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"mergeAllTextsNamed") ) { outValue = mergeAllTextsNamed_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"currentModDirectory") ) { outValue = ( currentModDirectory ); return true; }
		if (HX_FIELD_EQ(inName,"directoriesWithFile") ) { outValue = directoriesWithFile_dyn(); return true; }
	}
	return false;
}

bool Mods_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"globalMods") ) { globalMods=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updatedOnState") ) { updatedOnState=ioValue.Cast< bool >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignoreModFolders") ) { ignoreModFolders=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"currentModDirectory") ) { currentModDirectory=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Mods_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Mods_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Mods_obj::currentModDirectory,HX_("currentModDirectory",24,ad,ec,de)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Mods_obj::ignoreModFolders,HX_("ignoreModFolders",15,37,dd,7e)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Mods_obj::globalMods,HX_("globalMods",74,1e,04,3f)},
	{::hx::fsBool,(void *) &Mods_obj::updatedOnState,HX_("updatedOnState",77,07,c7,9a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Mods_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mods_obj::currentModDirectory,"currentModDirectory");
	HX_MARK_MEMBER_NAME(Mods_obj::ignoreModFolders,"ignoreModFolders");
	HX_MARK_MEMBER_NAME(Mods_obj::globalMods,"globalMods");
	HX_MARK_MEMBER_NAME(Mods_obj::updatedOnState,"updatedOnState");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Mods_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mods_obj::currentModDirectory,"currentModDirectory");
	HX_VISIT_MEMBER_NAME(Mods_obj::ignoreModFolders,"ignoreModFolders");
	HX_VISIT_MEMBER_NAME(Mods_obj::globalMods,"globalMods");
	HX_VISIT_MEMBER_NAME(Mods_obj::updatedOnState,"updatedOnState");
};

#endif

::hx::Class Mods_obj::__mClass;

static ::String Mods_obj_sStaticFields[] = {
	HX_("currentModDirectory",24,ad,ec,de),
	HX_("ignoreModFolders",15,37,dd,7e),
	HX_("globalMods",74,1e,04,3f),
	HX_("getGlobalMods",aa,7a,76,9b),
	HX_("pushGlobalMods",ee,c8,dc,25),
	HX_("getModDirectories",9f,5f,dc,88),
	HX_("mergeAllTextsNamed",5c,f5,10,e0),
	HX_("directoriesWithFile",cd,86,61,2f),
	HX_("getPack",8f,86,d4,1c),
	HX_("updatedOnState",77,07,c7,9a),
	HX_("parseList",31,6e,59,cf),
	HX_("updateModList",37,4d,4d,a8),
	HX_("loadTopMod",f3,21,4e,4a),
	::String(null())
};

void Mods_obj::__register()
{
	Mods_obj _hx_dummy;
	Mods_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.Mods",2b,aa,ba,a1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Mods_obj::__GetStatic;
	__mClass->mSetStaticField = &Mods_obj::__SetStatic;
	__mClass->mMarkFunc = Mods_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Mods_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Mods_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Mods_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Mods_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Mods_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Mods_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9e01c1b3771b993c_19_boot)
HXDLIN(  19)		currentModDirectory = HX_("",00,00,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_9e01c1b3771b993c_20_boot)
HXDLIN(  20)		ignoreModFolders = ::Array_obj< ::String >::fromData( _hx_array_data_a1baaa2b_29,15);
            	}
{
            	HX_STACKFRAME(&_hx_pos_9e01c1b3771b993c_38_boot)
HXDLIN(  38)		globalMods = ::Array_obj< ::String >::__new(0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_9e01c1b3771b993c_153_boot)
HXDLIN( 153)		updatedOnState = false;
            	}
}

} // end namespace backend
