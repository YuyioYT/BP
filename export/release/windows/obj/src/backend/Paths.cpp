#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Mods
#include <backend/Mods.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
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
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_AssetCache
#include <lime/utils/AssetCache.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#include <openfl/display3D/textures/RectangleTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
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
#ifndef INCLUDED_openfl_system_System
#include <openfl/system/System.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_60_excludeAsset,"backend.Paths","excludeAsset",0xd9600a30,"backend.Paths.excludeAsset","backend/Paths.hx",60,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_71_clearUnusedMemory,"backend.Paths","clearUnusedMemory",0xd6c80a2a,"backend.Paths.clearUnusedMemory","backend/Paths.hx",71,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_98_clearStoredMemory,"backend.Paths","clearStoredMemory",0x03cf7a37,"backend.Paths.clearStoredMemory","backend/Paths.hx",98,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_128_setCurrentLevel,"backend.Paths","setCurrentLevel",0x38c9f013,"backend.Paths.setCurrentLevel","backend/Paths.hx",128,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_132_getPath,"backend.Paths","getPath",0x40f68221,"backend.Paths.getPath","backend/Paths.hx",132,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_163_getLibraryPath,"backend.Paths","getLibraryPath",0x040ffd44,"backend.Paths.getLibraryPath","backend/Paths.hx",163,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_167_getLibraryPathForce,"backend.Paths","getLibraryPathForce",0xf7e18e07,"backend.Paths.getLibraryPathForce","backend/Paths.hx",167,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_175_getPreloadPath,"backend.Paths","getPreloadPath",0x4e7e9d12,"backend.Paths.getPreloadPath","backend/Paths.hx",175,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_180_txt,"backend.Paths","txt",0x9a070036,"backend.Paths.txt","backend/Paths.hx",180,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_185_xml,"backend.Paths","xml",0x9a09ff9d,"backend.Paths.xml","backend/Paths.hx",185,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_190_json,"backend.Paths","json",0x25793da2,"backend.Paths.json","backend/Paths.hx",190,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_195_shaderFragment,"backend.Paths","shaderFragment",0x2f2ae00f,"backend.Paths.shaderFragment","backend/Paths.hx",195,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_199_shaderVertex,"backend.Paths","shaderVertex",0xb9407de3,"backend.Paths.shaderVertex","backend/Paths.hx",199,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_203_lua,"backend.Paths","lua",0x9a00eb7e,"backend.Paths.lua","backend/Paths.hx",203,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_207_video,"backend.Paths","video",0x86c723c1,"backend.Paths.video","backend/Paths.hx",207,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_218_sound,"backend.Paths","sound",0xd0979c15,"backend.Paths.sound","backend/Paths.hx",218,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_225_soundRandom,"backend.Paths","soundRandom",0x459aeff8,"backend.Paths.soundRandom","backend/Paths.hx",225,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_229_music,"backend.Paths","music",0x6025dfeb,"backend.Paths.music","backend/Paths.hx",229,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_235_voices,"backend.Paths","voices",0xdf2c247b,"backend.Paths.voices","backend/Paths.hx",235,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_246_inst,"backend.Paths","inst",0x24cc3f40,"backend.Paths.inst","backend/Paths.hx",246,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_258_image,"backend.Paths","image",0x0d342ea1,"backend.Paths.image","backend/Paths.hx",258,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_308_getTextFromFile,"backend.Paths","getTextFromFile",0x5992934f,"backend.Paths.getTextFromFile","backend/Paths.hx",308,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_338_font,"backend.Paths","font",0x22d15949,"backend.Paths.font","backend/Paths.hx",338,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_349_fileExists,"backend.Paths","fileExists",0x881e3872,"backend.Paths.fileExists","backend/Paths.hx",349,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_370_getAtlas,"backend.Paths","getAtlas",0x00419d4f,"backend.Paths.getAtlas","backend/Paths.hx",370,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_383_getSparrowAtlas,"backend.Paths","getSparrowAtlas",0x085cce1b,"backend.Paths.getSparrowAtlas","backend/Paths.hx",383,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_400_getPackerAtlas,"backend.Paths","getPackerAtlas",0xc77f8ae9,"backend.Paths.getPackerAtlas","backend/Paths.hx",400,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_416_formatToSongPath,"backend.Paths","formatToSongPath",0x79918146,"backend.Paths.formatToSongPath","backend/Paths.hx",416,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_425_returnSound,"backend.Paths","returnSound",0x688821c5,"backend.Paths.returnSound","backend/Paths.hx",425,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_459_getModDirectories,"backend.Paths","getModDirectories",0x37243fe5,"backend.Paths.getModDirectories","backend/Paths.hx",459,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_474_mods,"backend.Paths","mods",0x2771ceeb,"backend.Paths.mods","backend/Paths.hx",474,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_478_modsFont,"backend.Paths","modsFont",0x3d34aa5a,"backend.Paths.modsFont","backend/Paths.hx",478,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_482_modsJson,"backend.Paths","modsJson",0x3fdc8eb3,"backend.Paths.modsJson","backend/Paths.hx",482,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_486_modsVideo,"backend.Paths","modsVideo",0x834ac190,"backend.Paths.modsVideo","backend/Paths.hx",486,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_490_modsSounds,"backend.Paths","modsSounds",0xaab76e0f,"backend.Paths.modsSounds","backend/Paths.hx",490,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_494_modsImages,"backend.Paths","modsImages",0x771b1603,"backend.Paths.modsImages","backend/Paths.hx",494,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_498_modsXml,"backend.Paths","modsXml",0x1abb3bac,"backend.Paths.modsXml","backend/Paths.hx",498,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_502_modsTxt,"backend.Paths","modsTxt",0x1ab83c45,"backend.Paths.modsTxt","backend/Paths.hx",502,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_519_modFolders,"backend.Paths","modFolders",0xc7f8825d,"backend.Paths.modFolders","backend/Paths.hx",519,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_538_getGlobalMods,"backend.Paths","getGlobalMods",0x016b3ff0,"backend.Paths.getGlobalMods","backend/Paths.hx",538,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_541_pushGlobalMods,"backend.Paths","pushGlobalMods",0xf614a0e8,"backend.Paths.pushGlobalMods","backend/Paths.hx",541,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_37_boot,"backend.Paths","boot",0x202c7fac,"backend.Paths.boot","backend/Paths.hx",37,0x7c630d0b)
static const ::String _hx_array_data_92991734_50[] = {
	HX_("characters",aa,58,ce,55),HX_("custom_events",27,a1,9e,e1),HX_("custom_notetypes",f9,35,37,af),HX_("data",2a,56,63,42),HX_("songs",fe,36,c7,80),HX_("music",a5,d0,5a,10),HX_("sounds",c4,a8,2e,32),HX_("shaders",ae,81,86,5f),HX_("videos",98,d7,95,e5),HX_("images",b8,50,92,fe),HX_("stages",f5,fb,f1,05),HX_("weeks",ff,95,be,c7),HX_("fonts",c4,b7,91,04),HX_("scripts",08,fc,e3,2c),HX_("achievements",24,a1,6b,86),
};
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_56_boot,"backend.Paths","boot",0x202c7fac,"backend.Paths.boot","backend/Paths.hx",56,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_57_boot,"backend.Paths","boot",0x202c7fac,"backend.Paths.boot","backend/Paths.hx",57,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_65_boot,"backend.Paths","boot",0x202c7fac,"backend.Paths.boot","backend/Paths.hx",65,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_97_boot,"backend.Paths","boot",0x202c7fac,"backend.Paths.boot","backend/Paths.hx",97,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_256_boot,"backend.Paths","boot",0x202c7fac,"backend.Paths.boot","backend/Paths.hx",256,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_424_boot,"backend.Paths","boot",0x202c7fac,"backend.Paths.boot","backend/Paths.hx",424,0x7c630d0b)
HX_LOCAL_STACK_FRAME(_hx_pos_359943aa63fd1400_535_boot,"backend.Paths","boot",0x202c7fac,"backend.Paths.boot","backend/Paths.hx",535,0x7c630d0b)
namespace backend{

void Paths_obj::__construct() { }

Dynamic Paths_obj::__CreateEmpty() { return new Paths_obj; }

void *Paths_obj::_hx_vtable = 0;

Dynamic Paths_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Paths_obj > _hx_result = new Paths_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Paths_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0d5689de;
}

::String Paths_obj::currentModDirectory;

::Array< ::String > Paths_obj::ignoreModFolders;

::String Paths_obj::SOUND_EXT;

::String Paths_obj::VIDEO_EXT;

void Paths_obj::excludeAsset(::String key){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_60_excludeAsset)
HXDLIN(  60)		if (!(::backend::Paths_obj::dumpExclusions->contains(key))) {
HXLINE(  61)			::backend::Paths_obj::dumpExclusions->push(key);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,excludeAsset,(void))

::Array< ::String > Paths_obj::dumpExclusions;

void Paths_obj::clearUnusedMemory(){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_71_clearUnusedMemory)
HXLINE(  73)		{
HXLINE(  73)			 ::Dynamic key = ::backend::Paths_obj::currentTrackedAssets->keys();
HXDLIN(  73)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  73)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  75)				bool _hx_tmp;
HXDLIN(  75)				if (!(::backend::Paths_obj::localTrackedAssets->contains(key1))) {
HXLINE(  75)					_hx_tmp = !(::backend::Paths_obj::dumpExclusions->contains(key1));
            				}
            				else {
HXLINE(  75)					_hx_tmp = false;
            				}
HXDLIN(  75)				if (_hx_tmp) {
HXLINE(  76)					 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(::backend::Paths_obj::currentTrackedAssets->get(key1)) );
HXLINE(  78)					if (::hx::IsNotNull( obj )) {
HXLINE(  80)						::flixel::FlxG_obj::bitmap->_cache->remove(key1);
HXLINE(  81)						::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,key1);
HXLINE(  82)						::backend::Paths_obj::currentTrackedAssets->remove(key1);
HXLINE(  85)						obj->persist = false;
HXLINE(  86)						obj->set_destroyOnNoUse(true);
HXLINE(  87)						obj->destroy();
            					}
            				}
            			}
            		}
HXLINE(  93)		::openfl::_hx_system::System_obj::gc();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Paths_obj,clearUnusedMemory,(void))

::Array< ::String > Paths_obj::localTrackedAssets;

void Paths_obj::clearStoredMemory( ::Dynamic __o_cleanUnused){
            		 ::Dynamic cleanUnused = __o_cleanUnused;
            		if (::hx::IsNull(__o_cleanUnused)) cleanUnused = false;
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_98_clearStoredMemory)
HXLINE( 101)		{
HXLINE( 101)			 ::Dynamic key = ::flixel::FlxG_obj::bitmap->_cache->keys();
HXDLIN( 101)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 101)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 103)				 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key1)) );
HXLINE( 104)				bool _hx_tmp;
HXDLIN( 104)				if (::hx::IsNotNull( obj )) {
HXLINE( 104)					_hx_tmp = !(::backend::Paths_obj::currentTrackedAssets->exists(key1));
            				}
            				else {
HXLINE( 104)					_hx_tmp = false;
            				}
HXDLIN( 104)				if (_hx_tmp) {
HXLINE( 105)					::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,key1);
HXLINE( 106)					::flixel::FlxG_obj::bitmap->_cache->remove(key1);
HXLINE( 107)					obj->destroy();
            				}
            			}
            		}
HXLINE( 112)		{
HXLINE( 112)			 ::Dynamic key1 = ::backend::Paths_obj::currentTrackedSounds->keys();
HXDLIN( 112)			while(( (bool)(key1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 112)				::String key = ( (::String)(key1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 113)				bool _hx_tmp;
HXDLIN( 113)				bool _hx_tmp1;
HXDLIN( 113)				if (!(::backend::Paths_obj::localTrackedAssets->contains(key))) {
HXLINE( 113)					_hx_tmp1 = !(::backend::Paths_obj::dumpExclusions->contains(key));
            				}
            				else {
HXLINE( 113)					_hx_tmp1 = false;
            				}
HXDLIN( 113)				if (_hx_tmp1) {
HXLINE( 113)					_hx_tmp = ::hx::IsNotNull( key );
            				}
            				else {
HXLINE( 113)					_hx_tmp = false;
            				}
HXDLIN( 113)				if (_hx_tmp) {
HXLINE( 116)					::lime::utils::Assets_obj::cache->clear(key);
HXLINE( 117)					::backend::Paths_obj::currentTrackedSounds->remove(key);
            				}
            			}
            		}
HXLINE( 121)		::backend::Paths_obj::localTrackedAssets = ::Array_obj< ::String >::__new(0);
HXLINE( 122)		::openfl::utils::IAssetCache_obj::clear(::openfl::utils::Assets_obj::cache,HX_("songs",fe,36,c7,80));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,clearStoredMemory,(void))

::String Paths_obj::currentLevel;

void Paths_obj::setCurrentLevel(::String name){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_128_setCurrentLevel)
HXDLIN( 128)		::backend::Paths_obj::currentLevel = name.toLowerCase();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,setCurrentLevel,(void))

::String Paths_obj::getPath(::String file,::String __o_type,::String library, ::Dynamic __o_modsAllowed){
            		::String type = __o_type;
            		if (::hx::IsNull(__o_type)) type = HX_("TEXT",ad,94,ba,37);
            		 ::Dynamic modsAllowed = __o_modsAllowed;
            		if (::hx::IsNull(__o_modsAllowed)) modsAllowed = false;
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_132_getPath)
HXLINE( 134)		if (( (bool)(modsAllowed) )) {
HXLINE( 136)			::String modded = ::backend::Paths_obj::modFolders(file);
HXLINE( 137)			if (::sys::FileSystem_obj::exists(modded)) {
HXLINE( 137)				return modded;
            			}
            		}
HXLINE( 141)		if (::hx::IsNotNull( library )) {
HXLINE( 142)			return ::backend::Paths_obj::getLibraryPath(file,library);
            		}
HXLINE( 144)		if (::hx::IsNotNull( ::backend::Paths_obj::currentLevel )) {
HXLINE( 146)			::String levelPath = HX_("",00,00,00,00);
HXLINE( 147)			if ((::backend::Paths_obj::currentLevel != HX_("shared",a5,5e,2b,1d))) {
HXLINE( 148)				::String level = ::backend::Paths_obj::currentLevel;
HXDLIN( 148)				if (::hx::IsNull( level )) {
HXLINE( 148)					level = HX_("week_assets",ae,a0,93,a0);
            				}
HXDLIN( 148)				::String returnPath = ((((HX_("week_assets",ae,a0,93,a0) + HX_(":assets/",52,05,4a,2c)) + level) + HX_("/",2f,00,00,00)) + file);
HXDLIN( 148)				levelPath = returnPath;
HXLINE( 149)				if (::openfl::utils::Assets_obj::exists(levelPath,type)) {
HXLINE( 150)					return levelPath;
            				}
            			}
HXLINE( 153)			::String level = null();
HXDLIN( 153)			if (::hx::IsNull( level )) {
HXLINE( 153)				level = HX_("shared",a5,5e,2b,1d);
            			}
HXDLIN( 153)			::String returnPath = ((((HX_("shared",a5,5e,2b,1d) + HX_(":assets/",52,05,4a,2c)) + level) + HX_("/",2f,00,00,00)) + file);
HXDLIN( 153)			levelPath = returnPath;
HXLINE( 154)			if (::openfl::utils::Assets_obj::exists(levelPath,type)) {
HXLINE( 155)				return levelPath;
            			}
            		}
HXLINE( 158)		::String file1 = file;
HXDLIN( 158)		if (::hx::IsNull( file1 )) {
HXLINE( 158)			file1 = HX_("",00,00,00,00);
            		}
HXDLIN( 158)		return (HX_("assets/",4c,2a,dc,36) + file1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Paths_obj,getPath,return )

::String Paths_obj::getLibraryPath(::String file,::String __o_library){
            		::String library = __o_library;
            		if (::hx::IsNull(__o_library)) library = HX_("preload",c9,47,43,35);
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_163_getLibraryPath)
HXDLIN( 163)		bool _hx_tmp;
HXDLIN( 163)		if ((library != HX_("preload",c9,47,43,35))) {
HXDLIN( 163)			_hx_tmp = (library == HX_("default",c1,d8,c3,9b));
            		}
            		else {
HXDLIN( 163)			_hx_tmp = true;
            		}
HXDLIN( 163)		if (_hx_tmp) {
HXDLIN( 163)			::String file1 = file;
HXDLIN( 163)			if (::hx::IsNull( file1 )) {
HXDLIN( 163)				file1 = HX_("",00,00,00,00);
            			}
HXDLIN( 163)			return (HX_("assets/",4c,2a,dc,36) + file1);
            		}
            		else {
HXDLIN( 163)			::String level = null();
HXDLIN( 163)			if (::hx::IsNull( level )) {
HXDLIN( 163)				level = library;
            			}
HXDLIN( 163)			::String returnPath = (((((HX_("",00,00,00,00) + library) + HX_(":assets/",52,05,4a,2c)) + level) + HX_("/",2f,00,00,00)) + file);
HXDLIN( 163)			return returnPath;
            		}
HXDLIN( 163)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getLibraryPath,return )

::String Paths_obj::getLibraryPathForce(::String file,::String library,::String level){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_167_getLibraryPathForce)
HXLINE( 168)		if (::hx::IsNull( level )) {
HXLINE( 168)			level = library;
            		}
HXLINE( 169)		::String returnPath = (((((HX_("",00,00,00,00) + library) + HX_(":assets/",52,05,4a,2c)) + level) + HX_("/",2f,00,00,00)) + file);
HXLINE( 170)		return returnPath;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,getLibraryPathForce,return )

::String Paths_obj::getPreloadPath(::String __o_file){
            		::String file = __o_file;
            		if (::hx::IsNull(__o_file)) file = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_175_getPreloadPath)
HXDLIN( 175)		return (HX_("assets/",4c,2a,dc,36) + file);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,getPreloadPath,return )

::String Paths_obj::txt(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_180_txt)
HXDLIN( 180)		return ::backend::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,txt,return )

::String Paths_obj::xml(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_185_xml)
HXDLIN( 185)		return ::backend::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,xml,return )

::String Paths_obj::json(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_190_json)
HXDLIN( 190)		return ::backend::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".json",56,f1,d6,c2)),HX_("TEXT",ad,94,ba,37),library,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,json,return )

::String Paths_obj::shaderFragment(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_195_shaderFragment)
HXDLIN( 195)		return ::backend::Paths_obj::getPath(((HX_("shaders/",c1,f6,2a,36) + key) + HX_(".frag",60,48,31,c0)),HX_("TEXT",ad,94,ba,37),library,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,shaderFragment,return )

::String Paths_obj::shaderVertex(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_199_shaderVertex)
HXDLIN( 199)		return ::backend::Paths_obj::getPath(((HX_("shaders/",c1,f6,2a,36) + key) + HX_(".vert",df,e3,ba,ca)),HX_("TEXT",ad,94,ba,37),library,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,shaderVertex,return )

::String Paths_obj::lua(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_203_lua)
HXDLIN( 203)		return ::backend::Paths_obj::getPath(((HX_("",00,00,00,00) + key) + HX_(".lua",4a,2a,ba,1e)),HX_("TEXT",ad,94,ba,37),library,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,lua,return )

::String Paths_obj::video(::String key){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_207_video)
HXLINE( 209)		::String file = ::backend::Paths_obj::modFolders((((HX_("videos/",97,cd,86,fd) + key) + HX_(".",2e,00,00,00)) + HX_("mp4",71,17,53,00)));
HXLINE( 210)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 211)			return file;
            		}
HXLINE( 214)		return (((HX_("assets/videos/",cb,c4,dd,db) + key) + HX_(".",2e,00,00,00)) + HX_("mp4",71,17,53,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,video,return )

 ::openfl::media::Sound Paths_obj::sound(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_218_sound)
HXLINE( 219)		 ::openfl::media::Sound sound = ::backend::Paths_obj::returnSound(HX_("sounds",c4,a8,2e,32),key,library);
HXLINE( 220)		return sound;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,sound,return )

 ::openfl::media::Sound Paths_obj::soundRandom(::String key,int min,int max,::String library){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_225_soundRandom)
HXDLIN( 225)		return ::backend::Paths_obj::sound((key + ::flixel::FlxG_obj::random->_hx_int(min,max,null())),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Paths_obj,soundRandom,return )

 ::openfl::media::Sound Paths_obj::music(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_229_music)
HXLINE( 230)		 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),key,library);
HXLINE( 231)		return file;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,music,return )

 ::Dynamic Paths_obj::voices(::String song){
            	HX_GC_STACKFRAME(&_hx_pos_359943aa63fd1400_235_voices)
HXLINE( 239)		 ::EReg invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXDLIN( 239)		 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXDLIN( 239)		::String path = invalidChars->split(::StringTools_obj::replace(song,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXDLIN( 239)		::String songKey = ((HX_("",00,00,00,00) + hideChars->split(path)->join(HX_("",00,00,00,00)).toLowerCase()) + HX_("/Voices",10,18,4f,34));
HXLINE( 240)		 ::openfl::media::Sound voices = ::backend::Paths_obj::returnSound(HX_("songs",fe,36,c7,80),songKey,null());
HXLINE( 241)		return voices;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,voices,return )

 ::Dynamic Paths_obj::inst(::String song){
            	HX_GC_STACKFRAME(&_hx_pos_359943aa63fd1400_246_inst)
HXLINE( 250)		 ::EReg invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXDLIN( 250)		 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXDLIN( 250)		::String path = invalidChars->split(::StringTools_obj::replace(song,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXDLIN( 250)		::String songKey = ((HX_("",00,00,00,00) + hideChars->split(path)->join(HX_("",00,00,00,00)).toLowerCase()) + HX_("/Inst",95,b3,69,40));
HXLINE( 251)		 ::openfl::media::Sound inst = ::backend::Paths_obj::returnSound(HX_("songs",fe,36,c7,80),songKey,null());
HXLINE( 252)		return inst;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,inst,return )

 ::haxe::ds::StringMap Paths_obj::currentTrackedAssets;

 ::flixel::graphics::FlxGraphic Paths_obj::image(::String key,::String library, ::Dynamic __o_allowGPU){
            		 ::Dynamic allowGPU = __o_allowGPU;
            		if (::hx::IsNull(__o_allowGPU)) allowGPU = true;
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_258_image)
HXLINE( 259)		 ::openfl::display::BitmapData bitmap = null();
HXLINE( 260)		::String file = null();
HXLINE( 263)		file = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)));
HXLINE( 264)		if (::backend::Paths_obj::currentTrackedAssets->exists(file)) {
HXLINE( 266)			::backend::Paths_obj::localTrackedAssets->push(file);
HXLINE( 267)			return ( ( ::flixel::graphics::FlxGraphic)(::backend::Paths_obj::currentTrackedAssets->get(file)) );
            		}
            		else {
HXLINE( 269)			if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 270)				bitmap = ::openfl::display::BitmapData_obj::fromFile(file);
            			}
            			else {
HXLINE( 274)				file = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library,null());
HXLINE( 275)				if (::backend::Paths_obj::currentTrackedAssets->exists(file)) {
HXLINE( 277)					::backend::Paths_obj::localTrackedAssets->push(file);
HXLINE( 278)					return ( ( ::flixel::graphics::FlxGraphic)(::backend::Paths_obj::currentTrackedAssets->get(file)) );
            				}
            				else {
HXLINE( 280)					if (::openfl::utils::Assets_obj::exists(file,HX_("IMAGE",3b,57,57,3b))) {
HXLINE( 281)						bitmap = ::openfl::utils::Assets_obj::getBitmapData(file,null());
            					}
            				}
            			}
            		}
HXLINE( 284)		if (::hx::IsNotNull( bitmap )) {
HXLINE( 286)			::backend::Paths_obj::localTrackedAssets->push(file);
HXLINE( 287)			bool _hx_tmp;
HXDLIN( 287)			if (( (bool)(allowGPU) )) {
HXLINE( 287)				_hx_tmp = ::backend::ClientPrefs_obj::data->cacheOnGPU;
            			}
            			else {
HXLINE( 287)				_hx_tmp = false;
            			}
HXDLIN( 287)			if (_hx_tmp) {
HXLINE( 289)				 ::openfl::display3D::textures::RectangleTexture texture = ::openfl::Lib_obj::get_current()->stage->context3D->createRectangleTexture(bitmap->width,bitmap->height,1,true);
HXLINE( 290)				texture->uploadFromBitmapData(bitmap);
HXLINE( 291)				bitmap->image->set_data(null());
HXLINE( 292)				bitmap->dispose();
HXLINE( 293)				bitmap->disposeImage();
HXLINE( 294)				bitmap = ::openfl::display::BitmapData_obj::fromTexture(texture);
            			}
HXLINE( 296)			 ::flixel::graphics::FlxGraphic newGraphic = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(bitmap,false,file,null());
HXLINE( 297)			newGraphic->persist = true;
HXLINE( 298)			newGraphic->set_destroyOnNoUse(false);
HXLINE( 299)			::backend::Paths_obj::currentTrackedAssets->set(file,newGraphic);
HXLINE( 300)			return newGraphic;
            		}
HXLINE( 303)		::haxe::Log_obj::trace(((HX_("oh no its returning null NOOOO (",5b,b0,87,b4) + file) + HX_(")",29,00,00,00)),::hx::SourceInfo(HX_("source/backend/Paths.hx",ff,43,8c,3d),303,HX_("backend.Paths",34,17,99,92),HX_("image",5b,1f,69,bd)));
HXLINE( 304)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,image,return )

::String Paths_obj::getTextFromFile(::String key, ::Dynamic __o_ignoreMods){
            		 ::Dynamic ignoreMods = __o_ignoreMods;
            		if (::hx::IsNull(__o_ignoreMods)) ignoreMods = false;
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_308_getTextFromFile)
HXLINE( 311)		bool _hx_tmp;
HXDLIN( 311)		if (!(( (bool)(ignoreMods) ))) {
HXLINE( 311)			_hx_tmp = ::sys::FileSystem_obj::exists(::backend::Paths_obj::modFolders(key));
            		}
            		else {
HXLINE( 311)			_hx_tmp = false;
            		}
HXDLIN( 311)		if (_hx_tmp) {
HXLINE( 312)			return ::sys::io::File_obj::getContent(::backend::Paths_obj::modFolders(key));
            		}
HXLINE( 315)		::String file = key;
HXDLIN( 315)		if (::hx::IsNull( file )) {
HXLINE( 315)			file = HX_("",00,00,00,00);
            		}
HXDLIN( 315)		if (::sys::FileSystem_obj::exists((HX_("assets/",4c,2a,dc,36) + file))) {
HXLINE( 316)			::String file = key;
HXDLIN( 316)			if (::hx::IsNull( file )) {
HXLINE( 316)				file = HX_("",00,00,00,00);
            			}
HXDLIN( 316)			return ::sys::io::File_obj::getContent((HX_("assets/",4c,2a,dc,36) + file));
            		}
HXLINE( 318)		if (::hx::IsNotNull( ::backend::Paths_obj::currentLevel )) {
HXLINE( 320)			::String levelPath = HX_("",00,00,00,00);
HXLINE( 321)			if ((::backend::Paths_obj::currentLevel != HX_("shared",a5,5e,2b,1d))) {
HXLINE( 322)				::String level = ::backend::Paths_obj::currentLevel;
HXDLIN( 322)				if (::hx::IsNull( level )) {
HXLINE( 322)					level = HX_("week_assets",ae,a0,93,a0);
            				}
HXDLIN( 322)				::String returnPath = ((((HX_("week_assets",ae,a0,93,a0) + HX_(":assets/",52,05,4a,2c)) + level) + HX_("/",2f,00,00,00)) + key);
HXDLIN( 322)				levelPath = returnPath;
HXLINE( 323)				if (::sys::FileSystem_obj::exists(levelPath)) {
HXLINE( 324)					return ::sys::io::File_obj::getContent(levelPath);
            				}
            			}
HXLINE( 327)			::String level = null();
HXDLIN( 327)			if (::hx::IsNull( level )) {
HXLINE( 327)				level = HX_("shared",a5,5e,2b,1d);
            			}
HXDLIN( 327)			::String returnPath = ((((HX_("shared",a5,5e,2b,1d) + HX_(":assets/",52,05,4a,2c)) + level) + HX_("/",2f,00,00,00)) + key);
HXDLIN( 327)			levelPath = returnPath;
HXLINE( 328)			if (::sys::FileSystem_obj::exists(levelPath)) {
HXLINE( 329)				return ::sys::io::File_obj::getContent(levelPath);
            			}
            		}
HXLINE( 332)		::String path = ::backend::Paths_obj::getPath(key,HX_("TEXT",ad,94,ba,37),null(),null());
HXLINE( 333)		if (::openfl::utils::Assets_obj::exists(path,HX_("TEXT",ad,94,ba,37))) {
HXLINE( 333)			return ::lime::utils::Assets_obj::getText(path);
            		}
HXLINE( 334)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getTextFromFile,return )

::String Paths_obj::font(::String key){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_338_font)
HXLINE( 340)		::String file = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + key));
HXLINE( 341)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 342)			return file;
            		}
HXLINE( 345)		return (HX_("assets/fonts/",37,ff,a5,9c) + key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,font,return )

bool Paths_obj::fileExists(::String key,::String type, ::Dynamic __o_ignoreMods,::String library){
            		 ::Dynamic ignoreMods = __o_ignoreMods;
            		if (::hx::IsNull(__o_ignoreMods)) ignoreMods = false;
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_349_fileExists)
HXLINE( 351)		if (!(( (bool)(ignoreMods) ))) {
HXLINE( 353)			{
HXLINE( 353)				int _g = 0;
HXDLIN( 353)				::Array< ::String > _g1 = ::backend::Mods_obj::globalMods;
HXDLIN( 353)				while((_g < _g1->length)){
HXLINE( 353)					::String mod = _g1->__get(_g);
HXDLIN( 353)					_g = (_g + 1);
HXLINE( 354)					::String key1 = (((HX_("",00,00,00,00) + mod) + HX_("/",2f,00,00,00)) + key);
HXDLIN( 354)					if (::hx::IsNull( key1 )) {
HXLINE( 354)						key1 = HX_("",00,00,00,00);
            					}
HXDLIN( 354)					if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + key1))) {
HXLINE( 355)						return true;
            					}
            				}
            			}
HXLINE( 357)			bool _hx_tmp;
HXDLIN( 357)			::String key1 = ((::backend::Mods_obj::currentModDirectory + HX_("/",2f,00,00,00)) + key);
HXDLIN( 357)			if (::hx::IsNull( key1 )) {
HXLINE( 357)				key1 = HX_("",00,00,00,00);
            			}
HXDLIN( 357)			if (!(::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + key1)))) {
HXLINE( 357)				::String key1 = key;
HXDLIN( 357)				if (::hx::IsNull( key1 )) {
HXLINE( 357)					key1 = HX_("",00,00,00,00);
            				}
HXDLIN( 357)				_hx_tmp = ::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + key1));
            			}
            			else {
HXLINE( 357)				_hx_tmp = true;
            			}
HXDLIN( 357)			if (_hx_tmp) {
HXLINE( 358)				return true;
            			}
            		}
HXLINE( 362)		if (::openfl::utils::Assets_obj::exists(::backend::Paths_obj::getPath(key,type,library,false),null())) {
HXLINE( 363)			return true;
            		}
HXLINE( 365)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Paths_obj,fileExists,return )

 ::flixel::graphics::frames::FlxAtlasFrames Paths_obj::getAtlas(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_370_getAtlas)
HXLINE( 372)		bool _hx_tmp;
HXDLIN( 372)		if (!(::sys::FileSystem_obj::exists(::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)))))) {
HXLINE( 372)			_hx_tmp = ::openfl::utils::Assets_obj::exists(::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),null(),library,null()),HX_("TEXT",ad,94,ba,37));
            		}
            		else {
HXLINE( 372)			_hx_tmp = true;
            		}
HXDLIN( 372)		if (_hx_tmp) {
HXLINE( 377)			 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(key,null(),true);
HXDLIN( 377)			bool xmlExists = false;
HXDLIN( 377)			::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 377)			if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 377)				xmlExists = true;
            			}
HXDLIN( 377)			 ::Dynamic _hx_tmp;
HXDLIN( 377)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 377)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE( 377)				_hx_tmp = ::backend::Paths_obj::image(key,library,true);
            			}
HXDLIN( 377)			::String _hx_tmp1;
HXDLIN( 377)			if (xmlExists) {
HXLINE( 377)				_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            			}
            			else {
HXLINE( 377)				_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            			}
HXDLIN( 377)			return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1);
            		}
HXLINE( 379)		 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(key,null(),true);
HXDLIN( 379)		bool txtExists = false;
HXDLIN( 379)		::String txt = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e)));
HXDLIN( 379)		if (::sys::FileSystem_obj::exists(txt)) {
HXLINE( 379)			txtExists = true;
            		}
HXDLIN( 379)		 ::Dynamic _hx_tmp1;
HXDLIN( 379)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 379)			_hx_tmp1 = imageLoaded;
            		}
            		else {
HXLINE( 379)			_hx_tmp1 = ::backend::Paths_obj::image(key,library,true);
            		}
HXDLIN( 379)		::String _hx_tmp2;
HXDLIN( 379)		if (txtExists) {
HXLINE( 379)			_hx_tmp2 = ::sys::io::File_obj::getContent(txt);
            		}
            		else {
HXLINE( 379)			_hx_tmp2 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e)),null(),library,null());
            		}
HXDLIN( 379)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSpriteSheetPacker(_hx_tmp1,_hx_tmp2);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getAtlas,return )

 ::flixel::graphics::frames::FlxAtlasFrames Paths_obj::getSparrowAtlas(::String key,::String library, ::Dynamic __o_allowGPU){
            		 ::Dynamic allowGPU = __o_allowGPU;
            		if (::hx::IsNull(__o_allowGPU)) allowGPU = true;
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_383_getSparrowAtlas)
HXLINE( 385)		 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(key,null(),allowGPU);
HXLINE( 386)		bool xmlExists = false;
HXLINE( 388)		::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)));
HXLINE( 389)		if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 390)			xmlExists = true;
            		}
HXLINE( 393)		 ::Dynamic _hx_tmp;
HXDLIN( 393)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 393)			_hx_tmp = imageLoaded;
            		}
            		else {
HXLINE( 393)			_hx_tmp = ::backend::Paths_obj::image(key,library,allowGPU);
            		}
HXDLIN( 393)		::String _hx_tmp1;
HXDLIN( 393)		if (xmlExists) {
HXLINE( 393)			_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            		}
            		else {
HXLINE( 393)			_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            		}
HXDLIN( 393)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,getSparrowAtlas,return )

 ::flixel::graphics::frames::FlxAtlasFrames Paths_obj::getPackerAtlas(::String key,::String library, ::Dynamic __o_allowGPU){
            		 ::Dynamic allowGPU = __o_allowGPU;
            		if (::hx::IsNull(__o_allowGPU)) allowGPU = true;
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_400_getPackerAtlas)
HXLINE( 402)		 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(key,null(),allowGPU);
HXLINE( 403)		bool txtExists = false;
HXLINE( 405)		::String txt = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e)));
HXLINE( 406)		if (::sys::FileSystem_obj::exists(txt)) {
HXLINE( 407)			txtExists = true;
            		}
HXLINE( 410)		 ::Dynamic _hx_tmp;
HXDLIN( 410)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 410)			_hx_tmp = imageLoaded;
            		}
            		else {
HXLINE( 410)			_hx_tmp = ::backend::Paths_obj::image(key,library,allowGPU);
            		}
HXDLIN( 410)		::String _hx_tmp1;
HXDLIN( 410)		if (txtExists) {
HXLINE( 410)			_hx_tmp1 = ::sys::io::File_obj::getContent(txt);
            		}
            		else {
HXLINE( 410)			_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e)),null(),library,null());
            		}
HXDLIN( 410)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSpriteSheetPacker(_hx_tmp,_hx_tmp1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,getPackerAtlas,return )

::String Paths_obj::formatToSongPath(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_359943aa63fd1400_416_formatToSongPath)
HXLINE( 417)		 ::EReg invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXLINE( 418)		 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXLINE( 420)		::String path1 = invalidChars->split(::StringTools_obj::replace(path,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXLINE( 421)		return hideChars->split(path1)->join(HX_("",00,00,00,00)).toLowerCase();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,formatToSongPath,return )

 ::haxe::ds::StringMap Paths_obj::currentTrackedSounds;

 ::openfl::media::Sound Paths_obj::returnSound(::String path,::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_425_returnSound)
HXLINE( 427)		::String file = ::backend::Paths_obj::modFolders(((((path + HX_("/",2f,00,00,00)) + key) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
HXLINE( 428)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 429)			if (!(::backend::Paths_obj::currentTrackedSounds->exists(file))) {
HXLINE( 430)				::Dynamic this1 = ::backend::Paths_obj::currentTrackedSounds;
HXDLIN( 430)				( ( ::haxe::ds::StringMap)(this1) )->set(file,::openfl::media::Sound_obj::fromFile(file));
            			}
HXLINE( 432)			::backend::Paths_obj::localTrackedAssets->push(key);
HXLINE( 433)			return ( ( ::openfl::media::Sound)(::backend::Paths_obj::currentTrackedSounds->get(file)) );
            		}
HXLINE( 437)		::String gottenPath = ::backend::Paths_obj::getPath((((((HX_("",00,00,00,00) + path) + HX_("/",2f,00,00,00)) + key) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("SOUND",af,c4,ba,fe),library,null());
HXLINE( 438)		int gottenPath1 = (gottenPath.indexOf(HX_(":",3a,00,00,00),null()) + 1);
HXDLIN( 438)		gottenPath = gottenPath.substring(gottenPath1,gottenPath.length);
HXLINE( 440)		if (!(::backend::Paths_obj::currentTrackedSounds->exists(gottenPath))) {
HXLINE( 442)			::Dynamic this1 = ::backend::Paths_obj::currentTrackedSounds;
HXDLIN( 442)			( ( ::haxe::ds::StringMap)(this1) )->set(gottenPath,::openfl::media::Sound_obj::fromFile((HX_("./",41,28,00,00) + gottenPath)));
            		}
HXLINE( 451)		::backend::Paths_obj::localTrackedAssets->push(gottenPath);
HXLINE( 452)		return ( ( ::openfl::media::Sound)(::backend::Paths_obj::currentTrackedSounds->get(gottenPath)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,returnSound,return )

::Array< ::String > Paths_obj::getModDirectories(){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_459_getModDirectories)
HXLINE( 460)		::Array< ::String > list = ::Array_obj< ::String >::__new(0);
HXLINE( 461)		::String modsFolder = HX_("mods/",9e,2f,58,0c);
HXLINE( 462)		if (::sys::FileSystem_obj::exists(modsFolder)) {
HXLINE( 463)			int _g = 0;
HXDLIN( 463)			::Array< ::String > _g1 = ::sys::FileSystem_obj::readDirectory(modsFolder);
HXDLIN( 463)			while((_g < _g1->length)){
HXLINE( 463)				::String folder = _g1->__get(_g);
HXDLIN( 463)				_g = (_g + 1);
HXLINE( 464)				::String path = ::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,modsFolder)->init(1,folder));
HXLINE( 465)				bool _hx_tmp;
HXDLIN( 465)				bool _hx_tmp1;
HXDLIN( 465)				if (::sys::FileSystem_obj::isDirectory(path)) {
HXLINE( 465)					_hx_tmp1 = !(::backend::Paths_obj::ignoreModFolders->contains(folder));
            				}
            				else {
HXLINE( 465)					_hx_tmp1 = false;
            				}
HXDLIN( 465)				if (_hx_tmp1) {
HXLINE( 465)					_hx_tmp = !(list->contains(folder));
            				}
            				else {
HXLINE( 465)					_hx_tmp = false;
            				}
HXDLIN( 465)				if (_hx_tmp) {
HXLINE( 466)					list->push(folder);
            				}
            			}
            		}
HXLINE( 470)		return list;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Paths_obj,getModDirectories,return )

::String Paths_obj::mods(::String __o_key){
            		::String key = __o_key;
            		if (::hx::IsNull(__o_key)) key = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_474_mods)
HXDLIN( 474)		return (HX_("mods/",9e,2f,58,0c) + key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,mods,return )

::String Paths_obj::modsFont(::String key){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_478_modsFont)
HXDLIN( 478)		return ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + key));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsFont,return )

::String Paths_obj::modsJson(::String key){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_482_modsJson)
HXDLIN( 482)		return ::backend::Paths_obj::modFolders(((HX_("data/",c5,0e,88,d4) + key) + HX_(".json",56,f1,d6,c2)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsJson,return )

::String Paths_obj::modsVideo(::String key){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_486_modsVideo)
HXDLIN( 486)		return ::backend::Paths_obj::modFolders((((HX_("videos/",97,cd,86,fd) + key) + HX_(".",2e,00,00,00)) + HX_("mp4",71,17,53,00)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsVideo,return )

::String Paths_obj::modsSounds(::String path,::String key){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_490_modsSounds)
HXDLIN( 490)		return ::backend::Paths_obj::modFolders(((((path + HX_("/",2f,00,00,00)) + key) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,modsSounds,return )

::String Paths_obj::modsImages(::String key){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_494_modsImages)
HXDLIN( 494)		return ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsImages,return )

::String Paths_obj::modsXml(::String key){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_498_modsXml)
HXDLIN( 498)		return ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsXml,return )

::String Paths_obj::modsTxt(::String key){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_502_modsTxt)
HXDLIN( 502)		return ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsTxt,return )

::String Paths_obj::modFolders(::String key){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_519_modFolders)
HXLINE( 520)		bool _hx_tmp;
HXDLIN( 520)		if (::hx::IsNotNull( ::backend::Mods_obj::currentModDirectory )) {
HXLINE( 520)			_hx_tmp = (::backend::Mods_obj::currentModDirectory.length > 0);
            		}
            		else {
HXLINE( 520)			_hx_tmp = false;
            		}
HXDLIN( 520)		if (_hx_tmp) {
HXLINE( 521)			::String key1 = ((::backend::Mods_obj::currentModDirectory + HX_("/",2f,00,00,00)) + key);
HXDLIN( 521)			if (::hx::IsNull( key1 )) {
HXLINE( 521)				key1 = HX_("",00,00,00,00);
            			}
HXDLIN( 521)			::String fileToCheck = (HX_("mods/",9e,2f,58,0c) + key1);
HXLINE( 522)			if (::sys::FileSystem_obj::exists(fileToCheck)) {
HXLINE( 523)				return fileToCheck;
            			}
            		}
HXLINE( 527)		{
HXLINE( 527)			int _g = 0;
HXDLIN( 527)			::Array< ::String > _g1 = ::backend::Mods_obj::globalMods;
HXDLIN( 527)			while((_g < _g1->length)){
HXLINE( 527)				::String mod = _g1->__get(_g);
HXDLIN( 527)				_g = (_g + 1);
HXLINE( 528)				::String key1 = ((mod + HX_("/",2f,00,00,00)) + key);
HXDLIN( 528)				if (::hx::IsNull( key1 )) {
HXLINE( 528)					key1 = HX_("",00,00,00,00);
            				}
HXDLIN( 528)				::String fileToCheck = (HX_("mods/",9e,2f,58,0c) + key1);
HXLINE( 529)				if (::sys::FileSystem_obj::exists(fileToCheck)) {
HXLINE( 530)					return fileToCheck;
            				}
            			}
            		}
HXLINE( 532)		return (HX_("mods/",9e,2f,58,0c) + key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modFolders,return )

::Array< ::String > Paths_obj::globalMods;

::Array< ::String > Paths_obj::getGlobalMods(){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_538_getGlobalMods)
HXDLIN( 538)		return ::backend::Paths_obj::globalMods;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Paths_obj,getGlobalMods,return )

::Array< ::String > Paths_obj::pushGlobalMods(){
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_541_pushGlobalMods)
HXLINE( 542)		::backend::Paths_obj::globalMods = ::Array_obj< ::String >::__new(0);
HXLINE( 543)		::String path = HX_("modsList.txt",f1,ca,08,ac);
HXLINE( 544)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 546)			::String path1 = path;
HXDLIN( 546)			::String daList = null();
HXDLIN( 546)			::Array< ::String > formatted = path1.split(HX_(":",3a,00,00,00));
HXDLIN( 546)			path1 = formatted->__get((formatted->length - 1));
HXDLIN( 546)			if (::sys::FileSystem_obj::exists(path1)) {
HXLINE( 546)				daList = ::sys::io::File_obj::getContent(path1);
            			}
HXDLIN( 546)			::Array< ::String > list;
HXDLIN( 546)			if (::hx::IsNotNull( daList )) {
HXLINE( 546)				::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXDLIN( 546)				daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXDLIN( 546)				{
HXLINE( 546)					int _g = 0;
HXDLIN( 546)					int _g1 = daList1->length;
HXDLIN( 546)					while((_g < _g1)){
HXLINE( 546)						_g = (_g + 1);
HXDLIN( 546)						int i = (_g - 1);
HXDLIN( 546)						daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            					}
            				}
HXDLIN( 546)				list = daList1;
            			}
            			else {
HXLINE( 546)				list = ::Array_obj< ::String >::__new(0);
            			}
HXLINE( 547)			{
HXLINE( 547)				int _g = 0;
HXDLIN( 547)				while((_g < list->length)){
HXLINE( 547)					::String i = list->__get(_g);
HXDLIN( 547)					_g = (_g + 1);
HXLINE( 549)					::Array< ::String > dat = i.split(HX_("|",7c,00,00,00));
HXLINE( 550)					if ((dat->__get(1) == HX_("1",31,00,00,00))) {
HXLINE( 552)						::String folder = dat->__get(0);
HXLINE( 553)						::String key = (folder + HX_("/pack.json",ce,a9,3a,e3));
HXDLIN( 553)						if (::hx::IsNull( key )) {
HXLINE( 553)							key = HX_("",00,00,00,00);
            						}
HXDLIN( 553)						::String path = (HX_("mods/",9e,2f,58,0c) + key);
HXLINE( 554)						if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 555)							try {
            								HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 556)								::String rawJson = ::sys::io::File_obj::getContent(path);
HXLINE( 557)								bool _hx_tmp;
HXDLIN( 557)								if (::hx::IsNotNull( rawJson )) {
HXLINE( 557)									_hx_tmp = (rawJson.length > 0);
            								}
            								else {
HXLINE( 557)									_hx_tmp = false;
            								}
HXDLIN( 557)								if (_hx_tmp) {
HXLINE( 558)									 ::Dynamic stuff = ::tjson::TJSON_obj::parse(rawJson,null(),null());
HXLINE( 559)									bool global = ( (bool)(::Reflect_obj::getProperty(stuff,HX_("runsGlobally",98,2d,b5,06))) );
HXLINE( 560)									if (global) {
HXLINE( 560)										::backend::Paths_obj::globalMods->push(dat->__get(0));
            									}
            								}
            							} catch( ::Dynamic _hx_e) {
            								if (_hx_e.IsClass<  ::Dynamic >() ){
            									HX_STACK_BEGIN_CATCH
            									 ::Dynamic _g = _hx_e;
HXLINE( 562)									{
HXLINE( 562)										null();
            									}
HXDLIN( 562)									 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 563)									::haxe::Log_obj::trace(e,::hx::SourceInfo(HX_("source/backend/Paths.hx",ff,43,8c,3d),563,HX_("backend.Paths",34,17,99,92),HX_("pushGlobalMods",ee,c8,dc,25)));
            								}
            								else {
            									HX_STACK_DO_THROW(_hx_e);
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 569)		return ::backend::Paths_obj::globalMods;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Paths_obj,pushGlobalMods,return )


Paths_obj::Paths_obj()
{
}

bool Paths_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"txt") ) { outValue = txt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"xml") ) { outValue = xml_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lua") ) { outValue = lua_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"json") ) { outValue = json_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"inst") ) { outValue = inst_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"font") ) { outValue = font_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"mods") ) { outValue = mods_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"video") ) { outValue = video_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sound") ) { outValue = sound_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"music") ) { outValue = music_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"image") ) { outValue = image_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"voices") ) { outValue = voices_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getPath") ) { outValue = getPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsXml") ) { outValue = modsXml_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsTxt") ) { outValue = modsTxt_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getAtlas") ) { outValue = getAtlas_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsFont") ) { outValue = modsFont_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsJson") ) { outValue = modsJson_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"modsVideo") ) { outValue = modsVideo_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fileExists") ) { outValue = fileExists_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsSounds") ) { outValue = modsSounds_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsImages") ) { outValue = modsImages_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modFolders") ) { outValue = modFolders_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"globalMods") ) { outValue = ( globalMods ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"soundRandom") ) { outValue = soundRandom_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"returnSound") ) { outValue = returnSound_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"excludeAsset") ) { outValue = excludeAsset_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"currentLevel") ) { outValue = ( currentLevel ); return true; }
		if (HX_FIELD_EQ(inName,"shaderVertex") ) { outValue = shaderVertex_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getGlobalMods") ) { outValue = getGlobalMods_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dumpExclusions") ) { outValue = ( dumpExclusions ); return true; }
		if (HX_FIELD_EQ(inName,"getLibraryPath") ) { outValue = getLibraryPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPreloadPath") ) { outValue = getPreloadPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"shaderFragment") ) { outValue = shaderFragment_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPackerAtlas") ) { outValue = getPackerAtlas_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"pushGlobalMods") ) { outValue = pushGlobalMods_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setCurrentLevel") ) { outValue = setCurrentLevel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getTextFromFile") ) { outValue = getTextFromFile_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSparrowAtlas") ) { outValue = getSparrowAtlas_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignoreModFolders") ) { outValue = ( ignoreModFolders ); return true; }
		if (HX_FIELD_EQ(inName,"formatToSongPath") ) { outValue = formatToSongPath_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"clearUnusedMemory") ) { outValue = clearUnusedMemory_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"clearStoredMemory") ) { outValue = clearStoredMemory_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getModDirectories") ) { outValue = getModDirectories_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"localTrackedAssets") ) { outValue = ( localTrackedAssets ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"currentModDirectory") ) { outValue = ( currentModDirectory ); return true; }
		if (HX_FIELD_EQ(inName,"getLibraryPathForce") ) { outValue = getLibraryPathForce_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"currentTrackedAssets") ) { outValue = ( currentTrackedAssets ); return true; }
		if (HX_FIELD_EQ(inName,"currentTrackedSounds") ) { outValue = ( currentTrackedSounds ); return true; }
	}
	return false;
}

bool Paths_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"globalMods") ) { globalMods=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentLevel") ) { currentLevel=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dumpExclusions") ) { dumpExclusions=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignoreModFolders") ) { ignoreModFolders=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"localTrackedAssets") ) { localTrackedAssets=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"currentModDirectory") ) { currentModDirectory=ioValue.Cast< ::String >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"currentTrackedAssets") ) { currentTrackedAssets=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"currentTrackedSounds") ) { currentTrackedSounds=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Paths_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Paths_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Paths_obj::currentModDirectory,HX_("currentModDirectory",24,ad,ec,de)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Paths_obj::ignoreModFolders,HX_("ignoreModFolders",15,37,dd,7e)},
	{::hx::fsString,(void *) &Paths_obj::SOUND_EXT,HX_("SOUND_EXT",b1,35,8c,6f)},
	{::hx::fsString,(void *) &Paths_obj::VIDEO_EXT,HX_("VIDEO_EXT",5d,03,77,8a)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Paths_obj::dumpExclusions,HX_("dumpExclusions",39,38,dc,ef)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Paths_obj::localTrackedAssets,HX_("localTrackedAssets",62,77,3a,fc)},
	{::hx::fsString,(void *) &Paths_obj::currentLevel,HX_("currentLevel",8b,fa,6e,b9)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Paths_obj::currentTrackedAssets,HX_("currentTrackedAssets",d4,7b,e5,0f)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Paths_obj::currentTrackedSounds,HX_("currentTrackedSounds",15,dc,10,f6)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Paths_obj::globalMods,HX_("globalMods",74,1e,04,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Paths_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Paths_obj::currentModDirectory,"currentModDirectory");
	HX_MARK_MEMBER_NAME(Paths_obj::ignoreModFolders,"ignoreModFolders");
	HX_MARK_MEMBER_NAME(Paths_obj::SOUND_EXT,"SOUND_EXT");
	HX_MARK_MEMBER_NAME(Paths_obj::VIDEO_EXT,"VIDEO_EXT");
	HX_MARK_MEMBER_NAME(Paths_obj::dumpExclusions,"dumpExclusions");
	HX_MARK_MEMBER_NAME(Paths_obj::localTrackedAssets,"localTrackedAssets");
	HX_MARK_MEMBER_NAME(Paths_obj::currentLevel,"currentLevel");
	HX_MARK_MEMBER_NAME(Paths_obj::currentTrackedAssets,"currentTrackedAssets");
	HX_MARK_MEMBER_NAME(Paths_obj::currentTrackedSounds,"currentTrackedSounds");
	HX_MARK_MEMBER_NAME(Paths_obj::globalMods,"globalMods");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Paths_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Paths_obj::currentModDirectory,"currentModDirectory");
	HX_VISIT_MEMBER_NAME(Paths_obj::ignoreModFolders,"ignoreModFolders");
	HX_VISIT_MEMBER_NAME(Paths_obj::SOUND_EXT,"SOUND_EXT");
	HX_VISIT_MEMBER_NAME(Paths_obj::VIDEO_EXT,"VIDEO_EXT");
	HX_VISIT_MEMBER_NAME(Paths_obj::dumpExclusions,"dumpExclusions");
	HX_VISIT_MEMBER_NAME(Paths_obj::localTrackedAssets,"localTrackedAssets");
	HX_VISIT_MEMBER_NAME(Paths_obj::currentLevel,"currentLevel");
	HX_VISIT_MEMBER_NAME(Paths_obj::currentTrackedAssets,"currentTrackedAssets");
	HX_VISIT_MEMBER_NAME(Paths_obj::currentTrackedSounds,"currentTrackedSounds");
	HX_VISIT_MEMBER_NAME(Paths_obj::globalMods,"globalMods");
};

#endif

::hx::Class Paths_obj::__mClass;

static ::String Paths_obj_sStaticFields[] = {
	HX_("currentModDirectory",24,ad,ec,de),
	HX_("ignoreModFolders",15,37,dd,7e),
	HX_("SOUND_EXT",b1,35,8c,6f),
	HX_("VIDEO_EXT",5d,03,77,8a),
	HX_("excludeAsset",b6,04,50,31),
	HX_("dumpExclusions",39,38,dc,ef),
	HX_("clearUnusedMemory",e4,29,80,28),
	HX_("localTrackedAssets",62,77,3a,fc),
	HX_("clearStoredMemory",f1,99,87,55),
	HX_("currentLevel",8b,fa,6e,b9),
	HX_("setCurrentLevel",4d,cd,24,d8),
	HX_("getPath",5b,95,d4,1c),
	HX_("getLibraryPath",4a,25,d8,33),
	HX_("getLibraryPathForce",41,90,ac,3f),
	HX_("getPreloadPath",18,c5,46,7e),
	HX_("txt",70,6e,58,00),
	HX_("xml",d7,6d,5b,00),
	HX_("json",28,42,68,46),
	HX_("shaderFragment",15,08,f3,5e),
	HX_("shaderVertex",69,78,30,11),
	HX_("lua",b8,59,52,00),
	HX_("video",7b,14,fc,36),
	HX_("sound",cf,8c,cc,80),
	HX_("soundRandom",32,28,bc,6a),
	HX_("music",a5,d0,5a,10),
	HX_("voices",81,d6,49,5d),
	HX_("inst",c6,43,bb,45),
	HX_("currentTrackedAssets",d4,7b,e5,0f),
	HX_("image",5b,1f,69,bd),
	HX_("getTextFromFile",89,70,ed,f8),
	HX_("font",cf,5d,c0,43),
	HX_("fileExists",78,65,64,a0),
	HX_("getAtlas",d5,5c,b4,86),
	HX_("getSparrowAtlas",55,ab,b7,a7),
	HX_("getPackerAtlas",ef,b2,47,f7),
	HX_("formatToSongPath",cc,36,b8,49),
	HX_("currentTrackedSounds",15,dc,10,f6),
	HX_("returnSound",ff,59,a9,8d),
	HX_("getModDirectories",9f,5f,dc,88),
	HX_("mods",71,d3,60,48),
	HX_("modsFont",e0,69,a7,c3),
	HX_("modsJson",39,4e,4f,c6),
	HX_("modsVideo",4a,97,3f,a1),
	HX_("modsSounds",15,9b,fd,c2),
	HX_("modsImages",09,43,61,8f),
	HX_("modsXml",e6,4e,99,f6),
	HX_("modsTxt",7f,4f,96,f6),
	HX_("modFolders",63,af,3e,e0),
	HX_("globalMods",74,1e,04,3f),
	HX_("getGlobalMods",aa,7a,76,9b),
	HX_("pushGlobalMods",ee,c8,dc,25),
	::String(null())
};

void Paths_obj::__register()
{
	Paths_obj _hx_dummy;
	Paths_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.Paths",34,17,99,92);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Paths_obj::__GetStatic;
	__mClass->mSetStaticField = &Paths_obj::__SetStatic;
	__mClass->mMarkFunc = Paths_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Paths_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Paths_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Paths_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Paths_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Paths_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Paths_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_37_boot)
HXDLIN(  37)		ignoreModFolders = ::Array_obj< ::String >::fromData( _hx_array_data_92991734_50,15);
            	}
{
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_56_boot)
HXDLIN(  56)		SOUND_EXT = HX_("ogg",4f,94,54,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_57_boot)
HXDLIN(  57)		VIDEO_EXT = HX_("mp4",71,17,53,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_65_boot)
HXDLIN(  65)		dumpExclusions = ::Array_obj< ::String >::__new(3)->init(0,(HX_("assets/music/menu/Gates of the hell.",0b,36,9c,8c) + HX_("ogg",4f,94,54,00)))->init(1,(HX_("assets/music/menu/breakfast.",2d,d0,ab,98) + HX_("ogg",4f,94,54,00)))->init(2,(HX_("assets/music/menu/tea-time.",0a,58,9f,3f) + HX_("ogg",4f,94,54,00)));
            	}
{
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_97_boot)
HXDLIN(  97)		localTrackedAssets = ::Array_obj< ::String >::__new(0);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_359943aa63fd1400_256_boot)
HXDLIN( 256)		currentTrackedAssets =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_359943aa63fd1400_424_boot)
HXDLIN( 424)		currentTrackedSounds =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_359943aa63fd1400_535_boot)
HXDLIN( 535)		globalMods = ::Array_obj< ::String >::__new(0);
            	}
}

} // end namespace backend
