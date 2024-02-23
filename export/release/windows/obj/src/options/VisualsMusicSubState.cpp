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
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Mods
#include <backend/Mods.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
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
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
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
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_objects_Note
#include <objects/Note.h>
#endif
#ifndef INCLUDED_objects_StrumNote
#include <objects/StrumNote.h>
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
#ifndef INCLUDED_options_Option
#include <options/Option.h>
#endif
#ifndef INCLUDED_options_OptionsState
#include <options/OptionsState.h>
#endif
#ifndef INCLUDED_options_VisualsMusicSubState
#include <options/VisualsMusicSubState.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ec83abf68915e2fe_7_new,"options.VisualsMusicSubState","new",0x29bb4625,"options.VisualsMusicSubState.new","options/VisualsMusicSubState.hx",7,0x9c5a650a)
static const ::String _hx_array_data_b1724fb3_10[] = {
	HX_("English",10,8f,83,c6),HX_W(u"Espa\u00f1ol",14aa,3bff),
};
static const ::String _hx_array_data_b1724fb3_11[] = {
	HX_("None",d8,3e,e3,33),HX_("Breakfast",bb,92,df,ea),HX_("Tea Time",9d,d4,cb,99),
};
HX_LOCAL_STACK_FRAME(_hx_pos_ec83abf68915e2fe_200_changeSelection,"options.VisualsMusicSubState","changeSelection",0x17192201,"options.VisualsMusicSubState.changeSelection","options/VisualsMusicSubState.hx",200,0x9c5a650a)
HX_LOCAL_STACK_FRAME(_hx_pos_ec83abf68915e2fe_218_onChangePauseMusic,"options.VisualsMusicSubState","onChangePauseMusic",0x97ecaa79,"options.VisualsMusicSubState.onChangePauseMusic","options/VisualsMusicSubState.hx",218,0x9c5a650a)
HX_LOCAL_STACK_FRAME(_hx_pos_ec83abf68915e2fe_229_onChangeNoteSkin,"options.VisualsMusicSubState","onChangeNoteSkin",0x89ce19b9,"options.VisualsMusicSubState.onChangeNoteSkin","options/VisualsMusicSubState.hx",229,0x9c5a650a)
HX_LOCAL_STACK_FRAME(_hx_pos_ec83abf68915e2fe_228_onChangeNoteSkin,"options.VisualsMusicSubState","onChangeNoteSkin",0x89ce19b9,"options.VisualsMusicSubState.onChangeNoteSkin","options/VisualsMusicSubState.hx",228,0x9c5a650a)
HX_LOCAL_STACK_FRAME(_hx_pos_ec83abf68915e2fe_237_changeNoteSkin,"options.VisualsMusicSubState","changeNoteSkin",0x5c257f7a,"options.VisualsMusicSubState.changeNoteSkin","options/VisualsMusicSubState.hx",237,0x9c5a650a)
HX_LOCAL_STACK_FRAME(_hx_pos_ec83abf68915e2fe_248_destroy,"options.VisualsMusicSubState","destroy",0xdd3c693f,"options.VisualsMusicSubState.destroy","options/VisualsMusicSubState.hx",248,0x9c5a650a)
namespace options{

void VisualsMusicSubState_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_ec83abf68915e2fe_7_new)
HXLINE( 216)		this->changedMusic = false;
HXLINE(  12)		this->noteY = ((Float)90);
HXLINE(  11)		this->notesTween = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(   9)		this->noteOptionID = -1;
HXLINE(  15)		this->title = HX_("Visuals and Music",af,41,50,dd);
HXLINE(  16)		this->rpcTitle = HX_("Visuals & Music Settings Menu",da,73,4b,f6);
HXLINE(  19)		this->notes =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  20)		{
HXLINE(  20)			int _g = 0;
HXDLIN(  20)			int _g1 = ::objects::Note_obj::colArray->length;
HXDLIN(  20)			while((_g < _g1)){
HXLINE(  20)				_g = (_g + 1);
HXDLIN(  20)				int i = (_g - 1);
HXLINE(  22)				 ::objects::StrumNote note =  ::objects::StrumNote_obj::__alloc( HX_CTX ,(370 + ((( (Float)(560) ) / ( (Float)(::objects::Note_obj::colArray->length) )) * ( (Float)(i) ))),( (Float)(-200) ),i,0);
HXLINE(  23)				note->centerOffsets(null());
HXLINE(  24)				{
HXLINE(  24)					 ::flixel::math::FlxBasePoint this1 = note->origin;
HXDLIN(  24)					Float y = (( (Float)(note->frameHeight) ) * ((Float)0.5));
HXDLIN(  24)					this1->set_x((( (Float)(note->frameWidth) ) * ((Float)0.5)));
HXDLIN(  24)					this1->set_y(y);
            				}
HXLINE(  25)				note->playAnim(HX_("static",ae,dc,fb,05),null());
HXLINE(  26)				this->notes->add(note).StaticCast<  ::objects::StrumNote >();
            			}
            		}
HXLINE(  31)		::String defaultDirectory = HX_("shared",a5,5e,2b,1d);
HXDLIN(  31)		bool allowDuplicates = false;
HXDLIN(  31)		if (::hx::IsNull( defaultDirectory )) {
HXLINE(  31)			defaultDirectory = HX_("assets/",4c,2a,dc,36);
            		}
HXDLIN(  31)		defaultDirectory = ::StringTools_obj::trim(defaultDirectory);
HXDLIN(  31)		if (!(::StringTools_obj::endsWith(defaultDirectory,HX_("/",2f,00,00,00)))) {
HXLINE(  31)			defaultDirectory = (defaultDirectory + HX_("/",2f,00,00,00));
            		}
HXDLIN(  31)		if (!(::StringTools_obj::startsWith(defaultDirectory,HX_("assets/",4c,2a,dc,36)))) {
HXLINE(  31)			defaultDirectory = (HX_("assets/",4c,2a,dc,36) + defaultDirectory);
            		}
HXDLIN(  31)		::Array< ::String > mergedList = ::Array_obj< ::String >::__new(0);
HXDLIN(  31)		::Array< ::String > foldersToCheck = ::Array_obj< ::String >::__new(0);
HXDLIN(  31)		if (::sys::FileSystem_obj::exists((defaultDirectory + HX_("images/noteSkins/list.txt",42,a1,fc,21)))) {
HXLINE(  31)			foldersToCheck->push((defaultDirectory + HX_("images/noteSkins/list.txt",42,a1,fc,21)));
            		}
HXDLIN(  31)		{
HXLINE(  31)			{
HXLINE(  31)				int _g2 = 0;
HXDLIN(  31)				::Array< ::String > _g3 = ::backend::Mods_obj::globalMods;
HXDLIN(  31)				while((_g2 < _g3->length)){
HXLINE(  31)					::String mod = _g3->__get(_g2);
HXDLIN(  31)					_g2 = (_g2 + 1);
HXDLIN(  31)					::String key = ((mod + HX_("/",2f,00,00,00)) + HX_("images/noteSkins/list.txt",42,a1,fc,21));
HXDLIN(  31)					if (::hx::IsNull( key )) {
HXLINE(  31)						key = HX_("",00,00,00,00);
            					}
HXDLIN(  31)					::String folder = (HX_("mods/",9e,2f,58,0c) + key);
HXDLIN(  31)					if (::sys::FileSystem_obj::exists(folder)) {
HXLINE(  31)						foldersToCheck->push(folder);
            					}
            				}
            			}
HXDLIN(  31)			::String key = HX_("images/noteSkins/list.txt",42,a1,fc,21);
HXDLIN(  31)			if (::hx::IsNull( key )) {
HXLINE(  31)				key = HX_("",00,00,00,00);
            			}
HXDLIN(  31)			::String folder = (HX_("mods/",9e,2f,58,0c) + key);
HXDLIN(  31)			if (::sys::FileSystem_obj::exists(folder)) {
HXLINE(  31)				::String key = HX_("images/noteSkins/list.txt",42,a1,fc,21);
HXDLIN(  31)				if (::hx::IsNull( key )) {
HXLINE(  31)					key = HX_("",00,00,00,00);
            				}
HXDLIN(  31)				foldersToCheck->push((HX_("mods/",9e,2f,58,0c) + key));
            			}
HXDLIN(  31)			bool _hx_tmp;
HXDLIN(  31)			if (::hx::IsNotNull( ::backend::Mods_obj::currentModDirectory )) {
HXLINE(  31)				_hx_tmp = (::backend::Mods_obj::currentModDirectory.length > 0);
            			}
            			else {
HXLINE(  31)				_hx_tmp = false;
            			}
HXDLIN(  31)			if (_hx_tmp) {
HXLINE(  31)				::String key = ((::backend::Mods_obj::currentModDirectory + HX_("/",2f,00,00,00)) + HX_("images/noteSkins/list.txt",42,a1,fc,21));
HXDLIN(  31)				if (::hx::IsNull( key )) {
HXLINE(  31)					key = HX_("",00,00,00,00);
            				}
HXDLIN(  31)				::String folder = (HX_("mods/",9e,2f,58,0c) + key);
HXDLIN(  31)				if (::sys::FileSystem_obj::exists(folder)) {
HXLINE(  31)					foldersToCheck->push(folder);
            				}
            			}
            		}
HXDLIN(  31)		::Array< ::String > paths = foldersToCheck;
HXDLIN(  31)		::String defaultPath = (defaultDirectory + HX_("images/noteSkins/list.txt",42,a1,fc,21));
HXDLIN(  31)		if (paths->contains(defaultPath)) {
HXLINE(  31)			paths->remove(defaultPath);
HXDLIN(  31)			paths->insert(0,defaultPath);
            		}
HXDLIN(  31)		{
HXLINE(  31)			int _g4 = 0;
HXDLIN(  31)			while((_g4 < paths->length)){
HXLINE(  31)				::String file = paths->__get(_g4);
HXDLIN(  31)				_g4 = (_g4 + 1);
HXDLIN(  31)				::String path = file;
HXDLIN(  31)				::String daList = null();
HXDLIN(  31)				::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXDLIN(  31)				path = formatted->__get((formatted->length - 1));
HXDLIN(  31)				if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  31)					daList = ::sys::io::File_obj::getContent(path);
            				}
HXDLIN(  31)				::Array< ::String > list;
HXDLIN(  31)				if (::hx::IsNotNull( daList )) {
HXLINE(  31)					::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXDLIN(  31)					daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXDLIN(  31)					{
HXLINE(  31)						int _g = 0;
HXDLIN(  31)						int _g1 = daList1->length;
HXDLIN(  31)						while((_g < _g1)){
HXLINE(  31)							_g = (_g + 1);
HXDLIN(  31)							int i = (_g - 1);
HXDLIN(  31)							daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            						}
            					}
HXDLIN(  31)					list = daList1;
            				}
            				else {
HXLINE(  31)					list = ::Array_obj< ::String >::__new(0);
            				}
HXDLIN(  31)				{
HXLINE(  31)					int _g = 0;
HXDLIN(  31)					while((_g < list->length)){
HXLINE(  31)						::String value = list->__get(_g);
HXDLIN(  31)						_g = (_g + 1);
HXDLIN(  31)						bool _hx_tmp;
HXDLIN(  31)						bool _hx_tmp1;
HXDLIN(  31)						if (!(allowDuplicates)) {
HXLINE(  31)							_hx_tmp1 = !(mergedList->contains(value));
            						}
            						else {
HXLINE(  31)							_hx_tmp1 = true;
            						}
HXDLIN(  31)						if (_hx_tmp1) {
HXLINE(  31)							_hx_tmp = (value.length > 0);
            						}
            						else {
HXLINE(  31)							_hx_tmp = false;
            						}
HXDLIN(  31)						if (_hx_tmp) {
HXLINE(  31)							mergedList->push(value);
            						}
            					}
            				}
            			}
            		}
HXDLIN(  31)		::Array< ::String > noteSkins = mergedList;
HXLINE(  32)		if ((noteSkins->length > 0)) {
HXLINE(  34)			if (!(noteSkins->contains(::backend::ClientPrefs_obj::data->noteSkin))) {
HXLINE(  35)				::backend::ClientPrefs_obj::data->noteSkin = ::backend::ClientPrefs_obj::defaultData->noteSkin;
            			}
HXLINE(  37)			noteSkins->insert(0,::backend::ClientPrefs_obj::defaultData->noteSkin);
HXLINE(  38)			 ::options::Option option =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Note Skins:",92,62,42,0e),HX_("Select your prefered Note skin.",2b,65,4f,d5),HX_("noteSkin",8f,3b,88,5b),HX_("string",d1,28,30,11),noteSkins);
HXLINE(  43)			this->addOption(option);
HXLINE(  44)			option->onChange = this->onChangeNoteSkin_dyn();
HXLINE(  45)			this->noteOptionID = (this->optionsArray->length - 1);
            		}
HXLINE(  48)		::String defaultDirectory1 = HX_("shared",a5,5e,2b,1d);
HXDLIN(  48)		bool allowDuplicates1 = false;
HXDLIN(  48)		if (::hx::IsNull( defaultDirectory1 )) {
HXLINE(  48)			defaultDirectory1 = HX_("assets/",4c,2a,dc,36);
            		}
HXDLIN(  48)		defaultDirectory1 = ::StringTools_obj::trim(defaultDirectory1);
HXDLIN(  48)		if (!(::StringTools_obj::endsWith(defaultDirectory1,HX_("/",2f,00,00,00)))) {
HXLINE(  48)			defaultDirectory1 = (defaultDirectory1 + HX_("/",2f,00,00,00));
            		}
HXDLIN(  48)		if (!(::StringTools_obj::startsWith(defaultDirectory1,HX_("assets/",4c,2a,dc,36)))) {
HXLINE(  48)			defaultDirectory1 = (HX_("assets/",4c,2a,dc,36) + defaultDirectory1);
            		}
HXDLIN(  48)		::Array< ::String > mergedList1 = ::Array_obj< ::String >::__new(0);
HXDLIN(  48)		::Array< ::String > foldersToCheck1 = ::Array_obj< ::String >::__new(0);
HXDLIN(  48)		if (::sys::FileSystem_obj::exists((defaultDirectory1 + HX_("images/noteSplashes/list.txt",31,67,e4,1c)))) {
HXLINE(  48)			foldersToCheck1->push((defaultDirectory1 + HX_("images/noteSplashes/list.txt",31,67,e4,1c)));
            		}
HXDLIN(  48)		{
HXLINE(  48)			{
HXLINE(  48)				int _g5 = 0;
HXDLIN(  48)				::Array< ::String > _g6 = ::backend::Mods_obj::globalMods;
HXDLIN(  48)				while((_g5 < _g6->length)){
HXLINE(  48)					::String mod = _g6->__get(_g5);
HXDLIN(  48)					_g5 = (_g5 + 1);
HXDLIN(  48)					::String key = ((mod + HX_("/",2f,00,00,00)) + HX_("images/noteSplashes/list.txt",31,67,e4,1c));
HXDLIN(  48)					if (::hx::IsNull( key )) {
HXLINE(  48)						key = HX_("",00,00,00,00);
            					}
HXDLIN(  48)					::String folder = (HX_("mods/",9e,2f,58,0c) + key);
HXDLIN(  48)					if (::sys::FileSystem_obj::exists(folder)) {
HXLINE(  48)						foldersToCheck1->push(folder);
            					}
            				}
            			}
HXDLIN(  48)			::String key1 = HX_("images/noteSplashes/list.txt",31,67,e4,1c);
HXDLIN(  48)			if (::hx::IsNull( key1 )) {
HXLINE(  48)				key1 = HX_("",00,00,00,00);
            			}
HXDLIN(  48)			::String folder1 = (HX_("mods/",9e,2f,58,0c) + key1);
HXDLIN(  48)			if (::sys::FileSystem_obj::exists(folder1)) {
HXLINE(  48)				::String key = HX_("images/noteSplashes/list.txt",31,67,e4,1c);
HXDLIN(  48)				if (::hx::IsNull( key )) {
HXLINE(  48)					key = HX_("",00,00,00,00);
            				}
HXDLIN(  48)				foldersToCheck1->push((HX_("mods/",9e,2f,58,0c) + key));
            			}
HXDLIN(  48)			bool _hx_tmp1;
HXDLIN(  48)			if (::hx::IsNotNull( ::backend::Mods_obj::currentModDirectory )) {
HXLINE(  48)				_hx_tmp1 = (::backend::Mods_obj::currentModDirectory.length > 0);
            			}
            			else {
HXLINE(  48)				_hx_tmp1 = false;
            			}
HXDLIN(  48)			if (_hx_tmp1) {
HXLINE(  48)				::String key = ((::backend::Mods_obj::currentModDirectory + HX_("/",2f,00,00,00)) + HX_("images/noteSplashes/list.txt",31,67,e4,1c));
HXDLIN(  48)				if (::hx::IsNull( key )) {
HXLINE(  48)					key = HX_("",00,00,00,00);
            				}
HXDLIN(  48)				::String folder = (HX_("mods/",9e,2f,58,0c) + key);
HXDLIN(  48)				if (::sys::FileSystem_obj::exists(folder)) {
HXLINE(  48)					foldersToCheck1->push(folder);
            				}
            			}
            		}
HXDLIN(  48)		::Array< ::String > paths1 = foldersToCheck1;
HXDLIN(  48)		::String defaultPath1 = (defaultDirectory1 + HX_("images/noteSplashes/list.txt",31,67,e4,1c));
HXDLIN(  48)		if (paths1->contains(defaultPath1)) {
HXLINE(  48)			paths1->remove(defaultPath1);
HXDLIN(  48)			paths1->insert(0,defaultPath1);
            		}
HXDLIN(  48)		{
HXLINE(  48)			int _g7 = 0;
HXDLIN(  48)			while((_g7 < paths1->length)){
HXLINE(  48)				::String file = paths1->__get(_g7);
HXDLIN(  48)				_g7 = (_g7 + 1);
HXDLIN(  48)				::String path = file;
HXDLIN(  48)				::String daList = null();
HXDLIN(  48)				::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXDLIN(  48)				path = formatted->__get((formatted->length - 1));
HXDLIN(  48)				if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  48)					daList = ::sys::io::File_obj::getContent(path);
            				}
HXDLIN(  48)				::Array< ::String > list;
HXDLIN(  48)				if (::hx::IsNotNull( daList )) {
HXLINE(  48)					::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXDLIN(  48)					daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXDLIN(  48)					{
HXLINE(  48)						int _g = 0;
HXDLIN(  48)						int _g1 = daList1->length;
HXDLIN(  48)						while((_g < _g1)){
HXLINE(  48)							_g = (_g + 1);
HXDLIN(  48)							int i = (_g - 1);
HXDLIN(  48)							daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            						}
            					}
HXDLIN(  48)					list = daList1;
            				}
            				else {
HXLINE(  48)					list = ::Array_obj< ::String >::__new(0);
            				}
HXDLIN(  48)				{
HXLINE(  48)					int _g = 0;
HXDLIN(  48)					while((_g < list->length)){
HXLINE(  48)						::String value = list->__get(_g);
HXDLIN(  48)						_g = (_g + 1);
HXDLIN(  48)						bool _hx_tmp;
HXDLIN(  48)						bool _hx_tmp1;
HXDLIN(  48)						if (!(allowDuplicates1)) {
HXLINE(  48)							_hx_tmp1 = !(mergedList1->contains(value));
            						}
            						else {
HXLINE(  48)							_hx_tmp1 = true;
            						}
HXDLIN(  48)						if (_hx_tmp1) {
HXLINE(  48)							_hx_tmp = (value.length > 0);
            						}
            						else {
HXLINE(  48)							_hx_tmp = false;
            						}
HXDLIN(  48)						if (_hx_tmp) {
HXLINE(  48)							mergedList1->push(value);
            						}
            					}
            				}
            			}
            		}
HXDLIN(  48)		::Array< ::String > noteSplashes = mergedList1;
HXLINE(  49)		if ((noteSplashes->length > 0)) {
HXLINE(  51)			if (!(noteSplashes->contains(::backend::ClientPrefs_obj::data->splashSkin))) {
HXLINE(  52)				::backend::ClientPrefs_obj::data->splashSkin = ::backend::ClientPrefs_obj::defaultData->splashSkin;
            			}
HXLINE(  54)			noteSplashes->insert(0,::backend::ClientPrefs_obj::defaultData->splashSkin);
HXLINE(  55)			 ::options::Option option =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Note Splashes:",57,cb,35,75),HX_("Select your prefered Note Splash variation or turn it off.",ae,cb,6a,a5),HX_("splashSkin",84,03,e1,a1),HX_("string",d1,28,30,11),noteSplashes);
HXLINE(  60)			this->addOption(option);
            		}
HXLINE(  63)		 ::options::Option option =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Note Splash Opacity",60,36,3d,35),HX_("How much transparent should the Note Splashes be.",23,18,f8,99),HX_("splashAlpha",77,20,7a,a6),HX_("percent",c5,aa,da,78),null());
HXLINE(  67)		option->scrollSpeed = ((Float)1.6);
HXLINE(  68)		option->minValue = ((Float)0.0);
HXLINE(  69)		option->maxValue = 1;
HXLINE(  70)		option->changeValue = ((Float)0.1);
HXLINE(  71)		option->decimals = 1;
HXLINE(  72)		this->addOption(option);
HXLINE(  74)		 ::options::Option option1 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Hide HUD",59,3a,04,5d),HX_("If checked, hides most HUD elements.",b8,a1,19,66),HX_("hideHud",15,b9,3c,b7),HX_("bool",2a,84,1b,41),null());
HXLINE(  78)		this->addOption(option1);
HXLINE(  80)		 ::options::Option option2 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Hide Judgements",bc,e4,e2,83),HX_("his name say all",65,2e,2a,be),HX_("hideJudgements",80,91,66,b1),HX_("bool",2a,84,1b,41),null());
HXLINE(  84)		this->addOption(option2);
HXLINE(  86)		 ::options::Option option3 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Combo Judgement text",ca,77,10,d8),HX_("Combo judgement text",aa,e3,ba,2d),HX_("hideCombo",2c,e4,bb,a5),HX_("bool",2a,84,1b,41),null());
HXLINE(  90)		this->addOption(option3);
HXLINE(  92)		 ::options::Option option4 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Nps Judgement text",87,cd,09,e7),HX_("Nps judgement text",67,39,b4,3c),HX_("hideNps",4f,42,41,b7),HX_("bool",2a,84,1b,41),null());
HXLINE(  96)		this->addOption(option4);
HXLINE(  98)		 ::options::Option option5 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Nps Max Judgement text",23,5b,fd,37),HX_("Nps Max judgement text",03,c7,a7,8d),HX_("hideMaxNps",0f,6c,d7,55),HX_("bool",2a,84,1b,41),null());
HXLINE( 102)		this->addOption(option5);
HXLINE( 104)		 ::options::Option option6 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Total Notes Judgement text",33,ff,36,91),HX_("Total Notes judgement text",13,6b,e1,e6),HX_("hidetotalNotes",1f,4d,50,df),HX_("bool",2a,84,1b,41),null());
HXLINE( 108)		this->addOption(option6);
HXLINE( 110)		 ::options::Option option7 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Combo Breaks Judgement text",52,1e,02,aa),HX_("Combo Breaks judgement text",32,8a,ac,ff),HX_("hideComboBreaks",20,c4,b7,b1),HX_("bool",2a,84,1b,41),null());
HXLINE( 114)		this->addOption(option7);
HXLINE( 116)		 ::options::Option option8 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Misses Judgement text",ee,c0,b6,23),HX_("Misses judgement text",ce,2c,61,79),HX_("hideMisses",cc,08,da,ed),HX_("bool",2a,84,1b,41),null());
HXLINE( 120)		this->addOption(option8);
HXLINE( 122)		 ::options::Option option9 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Ratings On Cam Game",5a,e7,21,32),HX_("Ratings On Cam Game",5a,e7,21,32),HX_("RatingsOnGame",e7,52,2d,f5),HX_("bool",2a,84,1b,41),null());
HXLINE( 126)		this->addOption(option9);
HXLINE( 128)		 ::options::Option option10 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Spin on start",9f,c8,1e,35),HX_("Spin on start",9f,c8,1e,35),HX_("SpinonStart",21,65,ab,1b),HX_("bool",2a,84,1b,41),null());
HXLINE( 132)		this->addOption(option10);
HXLINE( 134)		 ::options::Option option11 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Song Watermark",99,3f,a7,01),HX_("his name say all",65,2e,2a,be),HX_("songWatermark",0f,c9,f2,16),HX_("bool",2a,84,1b,41),null());
HXLINE( 138)		this->addOption(option11);
HXLINE( 140)		 ::options::Option option12 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Remove Perfect",31,c5,6f,09),HX_("his name say all",65,2e,2a,be),HX_("removePerfs",86,3c,2e,be),HX_("bool",2a,84,1b,41),null());
HXLINE( 144)		this->addOption(option12);
HXLINE( 146)		 ::options::Option option13 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Lenguage:",3e,75,db,db),HX_("Lenguage traduction",e7,f1,0e,33),HX_("Lenguage",7c,17,19,fa),HX_("string",d1,28,30,11),::Array_obj< ::String >::fromData( _hx_array_data_b1724fb3_10,2));
HXLINE( 151)		this->addOption(option13);
HXLINE( 153)		 ::options::Option option14 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Flashing Lights",0b,e4,0d,04),HX_("Uncheck this if you're sensitive to flashing lights!",9e,ed,11,12),HX_("flashing",32,85,e8,99),HX_("bool",2a,84,1b,41),null());
HXLINE( 157)		this->addOption(option14);
HXLINE( 159)		 ::options::Option option15 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Score Text Zoom on Hit",da,24,e2,56),HX_("If unchecked, disables the Score text zooming\neverytime you hit a note.",bc,95,97,3e),HX_("scoreZoom",85,53,bc,e0),HX_("bool",2a,84,1b,41),null());
HXLINE( 163)		this->addOption(option15);
HXLINE( 165)		 ::options::Option option16 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Pause Screen Song:",9b,6e,16,2a),HX_("What song do you prefer for the Pause Screen?",9a,c8,b3,59),HX_("pauseMusic",cf,6d,d3,e5),HX_("string",d1,28,30,11),::Array_obj< ::String >::fromData( _hx_array_data_b1724fb3_11,3));
HXLINE( 170)		this->addOption(option16);
HXLINE( 171)		option16->onChange = this->onChangePauseMusic_dyn();
HXLINE( 182)		 ::options::Option option17 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Discord Rich Presence",2b,ef,99,77),HX_("Uncheck this to prevent accidental leaks, it will hide the Application from your \"Playing\" box on Discord",0b,e4,6b,c9),HX_("discordRPC",99,18,34,b0),HX_("bool",2a,84,1b,41),null());
HXLINE( 186)		this->addOption(option17);
HXLINE( 189)		 ::options::Option option18 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Combo Stacking",ec,30,59,b7),HX_("If unchecked, Ratings and Combo won't stack, saving on System Memory and making them easier to read",d6,be,78,3a),HX_("comboStacking",08,45,bb,e0),HX_("bool",2a,84,1b,41),null());
HXLINE( 193)		this->addOption(option18);
HXLINE( 195)		super::__construct();
HXLINE( 196)		this->add(this->notes);
            	}

Dynamic VisualsMusicSubState_obj::__CreateEmpty() { return new VisualsMusicSubState_obj; }

void *VisualsMusicSubState_obj::_hx_vtable = 0;

Dynamic VisualsMusicSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VisualsMusicSubState_obj > _hx_result = new VisualsMusicSubState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VisualsMusicSubState_obj::_hx_isInstanceOf(int inClassId) {
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
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fb524cd;
		}
	}
}

void VisualsMusicSubState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_ec83abf68915e2fe_200_changeSelection)
HXLINE( 201)		this->super::changeSelection(change);
HXLINE( 203)		if ((this->noteOptionID < 0)) {
HXLINE( 203)			return;
            		}
HXLINE( 205)		{
HXLINE( 205)			int _g = 0;
HXDLIN( 205)			int _g1 = ::objects::Note_obj::colArray->length;
HXDLIN( 205)			while((_g < _g1)){
HXLINE( 205)				_g = (_g + 1);
HXDLIN( 205)				int i = (_g - 1);
HXLINE( 207)				 ::objects::StrumNote note = Dynamic( this->notes->members->__get(i)).StaticCast<  ::objects::StrumNote >();
HXLINE( 208)				if (::hx::IsNotNull( this->notesTween->__get(i).StaticCast<  ::flixel::tweens::FlxTween >() )) {
HXLINE( 208)					this->notesTween->__get(i).StaticCast<  ::flixel::tweens::FlxTween >()->cancel();
            				}
HXLINE( 209)				if ((this->curSelected == this->noteOptionID)) {
HXLINE( 210)					this->notesTween[i] = ::flixel::tweens::FlxTween_obj::tween(note, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("y",79,00,00,00),this->noteY)),(::Math_obj::abs((note->y / (200 + this->noteY))) / ( (Float)(3) )), ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())));
            				}
            				else {
HXLINE( 212)					this->notesTween[i] = ::flixel::tweens::FlxTween_obj::tween(note, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("y",79,00,00,00),-200)),(::Math_obj::abs((note->y / (200 + this->noteY))) / ( (Float)(3) )), ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())));
            				}
            			}
            		}
            	}


void VisualsMusicSubState_obj::onChangePauseMusic(){
            	HX_GC_STACKFRAME(&_hx_pos_ec83abf68915e2fe_218_onChangePauseMusic)
HXLINE( 219)		if ((::backend::ClientPrefs_obj::data->pauseMusic == HX_("None",d8,3e,e3,33))) {
HXLINE( 220)			::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
            		}
            		else {
HXLINE( 222)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 222)			::String path = ::backend::ClientPrefs_obj::data->pauseMusic;
HXDLIN( 222)			 ::EReg invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXDLIN( 222)			 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXDLIN( 222)			::String path1 = invalidChars->split(::StringTools_obj::replace(path,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXDLIN( 222)			::String library = null();
HXDLIN( 222)			 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),hideChars->split(path1)->join(HX_("",00,00,00,00)).toLowerCase(),library);
HXDLIN( 222)			_hx_tmp->playMusic(file,null(),null(),null());
            		}
HXLINE( 224)		this->changedMusic = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VisualsMusicSubState_obj,onChangePauseMusic,(void))

void VisualsMusicSubState_obj::onChangeNoteSkin(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::options::VisualsMusicSubState,_gthis) HXARGC(1)
            		void _hx_run( ::objects::StrumNote note){
            			HX_STACKFRAME(&_hx_pos_ec83abf68915e2fe_229_onChangeNoteSkin)
HXLINE( 230)			_gthis->changeNoteSkin(note);
HXLINE( 231)			note->centerOffsets(null());
HXLINE( 232)			{
HXLINE( 232)				 ::flixel::math::FlxBasePoint this1 = note->origin;
HXDLIN( 232)				Float y = (( (Float)(note->frameHeight) ) * ((Float)0.5));
HXDLIN( 232)				this1->set_x((( (Float)(note->frameWidth) ) * ((Float)0.5)));
HXDLIN( 232)				this1->set_y(y);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_ec83abf68915e2fe_228_onChangeNoteSkin)
HXDLIN( 228)		 ::options::VisualsMusicSubState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 229)		this->notes->forEachAlive( ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(VisualsMusicSubState_obj,onChangeNoteSkin,(void))

void VisualsMusicSubState_obj::changeNoteSkin( ::objects::StrumNote note){
            	HX_STACKFRAME(&_hx_pos_ec83abf68915e2fe_237_changeNoteSkin)
HXLINE( 238)		::String skin = ::objects::Note_obj::defaultNoteSkin;
HXLINE( 239)		::String customSkin = (skin + ::objects::Note_obj::getNoteSkinPostfix());
HXLINE( 240)		if (::backend::Paths_obj::fileExists(((HX_("images/",77,50,74,c1) + customSkin) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),null(),null())) {
HXLINE( 240)			skin = customSkin;
            		}
HXLINE( 242)		note->set_texture(skin);
HXLINE( 243)		note->reloadNote();
HXLINE( 244)		note->playAnim(HX_("static",ae,dc,fb,05),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(VisualsMusicSubState_obj,changeNoteSkin,(void))

void VisualsMusicSubState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_ec83abf68915e2fe_248_destroy)
HXLINE( 249)		bool _hx_tmp;
HXDLIN( 249)		if (this->changedMusic) {
HXLINE( 249)			_hx_tmp = !(::options::OptionsState_obj::onPlayState);
            		}
            		else {
HXLINE( 249)			_hx_tmp = false;
            		}
HXDLIN( 249)		if (_hx_tmp) {
HXLINE( 249)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 249)			::String library = null();
HXDLIN( 249)			 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("menu/Gates of the hell",0d,b1,f8,c4),library);
HXDLIN( 249)			_hx_tmp->playMusic(file,1,true,null());
            		}
HXLINE( 250)		this->super::destroy();
            	}



::hx::ObjectPtr< VisualsMusicSubState_obj > VisualsMusicSubState_obj::__new() {
	::hx::ObjectPtr< VisualsMusicSubState_obj > __this = new VisualsMusicSubState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< VisualsMusicSubState_obj > VisualsMusicSubState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	VisualsMusicSubState_obj *__this = (VisualsMusicSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VisualsMusicSubState_obj), true, "options.VisualsMusicSubState"));
	*(void **)__this = VisualsMusicSubState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VisualsMusicSubState_obj::VisualsMusicSubState_obj()
{
}

void VisualsMusicSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VisualsMusicSubState);
	HX_MARK_MEMBER_NAME(noteOptionID,"noteOptionID");
	HX_MARK_MEMBER_NAME(notes,"notes");
	HX_MARK_MEMBER_NAME(notesTween,"notesTween");
	HX_MARK_MEMBER_NAME(noteY,"noteY");
	HX_MARK_MEMBER_NAME(changedMusic,"changedMusic");
	 ::options::BaseOptionsMenu_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VisualsMusicSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(noteOptionID,"noteOptionID");
	HX_VISIT_MEMBER_NAME(notes,"notes");
	HX_VISIT_MEMBER_NAME(notesTween,"notesTween");
	HX_VISIT_MEMBER_NAME(noteY,"noteY");
	HX_VISIT_MEMBER_NAME(changedMusic,"changedMusic");
	 ::options::BaseOptionsMenu_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val VisualsMusicSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"notes") ) { return ::hx::Val( notes ); }
		if (HX_FIELD_EQ(inName,"noteY") ) { return ::hx::Val( noteY ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"notesTween") ) { return ::hx::Val( notesTween ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"noteOptionID") ) { return ::hx::Val( noteOptionID ); }
		if (HX_FIELD_EQ(inName,"changedMusic") ) { return ::hx::Val( changedMusic ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"changeNoteSkin") ) { return ::hx::Val( changeNoteSkin_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onChangeNoteSkin") ) { return ::hx::Val( onChangeNoteSkin_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onChangePauseMusic") ) { return ::hx::Val( onChangePauseMusic_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VisualsMusicSubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"notes") ) { notes=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noteY") ) { noteY=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"notesTween") ) { notesTween=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"noteOptionID") ) { noteOptionID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"changedMusic") ) { changedMusic=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VisualsMusicSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("noteOptionID",a2,b0,ce,73));
	outFields->push(HX_("notes",41,dc,ca,9f));
	outFields->push(HX_("notesTween",6a,32,28,11));
	outFields->push(HX_("noteY",27,dc,ca,9f));
	outFields->push(HX_("changedMusic",11,9b,d1,51));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VisualsMusicSubState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(VisualsMusicSubState_obj,noteOptionID),HX_("noteOptionID",a2,b0,ce,73)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(VisualsMusicSubState_obj,notes),HX_("notes",41,dc,ca,9f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(VisualsMusicSubState_obj,notesTween),HX_("notesTween",6a,32,28,11)},
	{::hx::fsFloat,(int)offsetof(VisualsMusicSubState_obj,noteY),HX_("noteY",27,dc,ca,9f)},
	{::hx::fsBool,(int)offsetof(VisualsMusicSubState_obj,changedMusic),HX_("changedMusic",11,9b,d1,51)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VisualsMusicSubState_obj_sStaticStorageInfo = 0;
#endif

static ::String VisualsMusicSubState_obj_sMemberFields[] = {
	HX_("noteOptionID",a2,b0,ce,73),
	HX_("notes",41,dc,ca,9f),
	HX_("notesTween",6a,32,28,11),
	HX_("noteY",27,dc,ca,9f),
	HX_("changeSelection",bc,98,b5,48),
	HX_("changedMusic",11,9b,d1,51),
	HX_("onChangePauseMusic",9e,da,98,ca),
	HX_("onChangeNoteSkin",9e,86,19,c1),
	HX_("changeNoteSkin",1f,79,c3,b4),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

::hx::Class VisualsMusicSubState_obj::__mClass;

void VisualsMusicSubState_obj::__register()
{
	VisualsMusicSubState_obj _hx_dummy;
	VisualsMusicSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.VisualsMusicSubState",b3,4f,72,b1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VisualsMusicSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VisualsMusicSubState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VisualsMusicSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VisualsMusicSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace options
