#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Controls
#include <backend/Controls.h>
#endif
#ifndef INCLUDED_backend_DiscordClient
#include <backend/DiscordClient.h>
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
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
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
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_objects_Alignment
#include <objects/Alignment.h>
#endif
#ifndef INCLUDED_objects_Alphabet
#include <objects/Alphabet.h>
#endif
#ifndef INCLUDED_objects_AttachedSprite
#include <objects/AttachedSprite.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_states_CreditsState
#include <states/CreditsState.h>
#endif
#ifndef INCLUDED_states_MainMenuState
#include <states/MainMenuState.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_178cfd7cdc100066_10_new,"states.CreditsState","new",0x880b66d5,"states.CreditsState.new","states/CreditsState.hx",10,0xc8f2335a)
HX_LOCAL_STACK_FRAME(_hx_pos_178cfd7cdc100066_27_create,"states.CreditsState","create",0xd40f87a7,"states.CreditsState.create","states/CreditsState.hx",27,0xc8f2335a)
static const ::String _hx_array_data_79985863_7[] = {
	HX_("Psych Engine Team",36,ef,98,3e),
};
static const ::String _hx_array_data_79985863_8[] = {
	HX_("Shadow Mario",c4,01,05,71),HX_("shadowmario",24,76,c0,e6),HX_("Main Programmer of Psych Engine",6d,91,ad,35),HX_("https://twitter.com/Shadow_Mario_",a2,98,47,eb),HX_("444444",80,a8,eb,dd),
};
static const ::String _hx_array_data_79985863_9[] = {
	HX_("Riveren",55,c6,ba,81),HX_("riveren",75,9e,69,b4),HX_("Main Artist/Animator of Psych Engine",f8,d1,00,db),HX_("https://twitter.com/riverennn",fd,f6,a7,18),HX_("B42F71",a0,f3,a5,75),
};
static const ::String _hx_array_data_79985863_10[] = {
	HX_("",00,00,00,00),
};
static const ::String _hx_array_data_79985863_11[] = {
	HX_("Former Engine Members",ea,4a,f3,b3),
};
static const ::String _hx_array_data_79985863_12[] = {
	HX_("shubs",11,04,2c,7c),HX_("shubs",11,04,2c,7c),HX_("Ex-Programmer of Psych Engine",c0,17,f3,40),HX_("https://twitter.com/yoshubs",83,11,b4,00),HX_("5E99DF",d2,cb,68,11),
};
static const ::String _hx_array_data_79985863_13[] = {
	HX_("bb-panzu",cb,ef,e8,8b),HX_("bb",c0,55,00,00),HX_("Ex-Programmer of Psych Engine",c0,17,f3,40),HX_("https://twitter.com/bbsub3",6b,b6,13,17),HX_("3E813A",99,bb,02,44),
};
static const ::String _hx_array_data_79985863_14[] = {
	HX_("",00,00,00,00),
};
static const ::String _hx_array_data_79985863_15[] = {
	HX_("Engine Contributors",56,17,70,dc),
};
static const ::String _hx_array_data_79985863_16[] = {
	HX_("iFlicky",97,81,42,80),HX_("flicky",4e,58,60,3d),HX_("Composer of Psync and Tea Time\nMade the Dialogue Sounds",d8,20,a1,f2),HX_("https://twitter.com/flicky_i",f0,22,3f,fa),HX_("9E29CF",16,be,35,a6),
};
static const ::String _hx_array_data_79985863_17[] = {
	HX_("SqirraRNG",35,93,90,2a),HX_("sqirra",76,57,10,51),HX_("Crash Handler and Base code for\nChart Editor's Waveform",45,eb,fb,39),HX_("https://twitter.com/gedehari",87,e7,51,35),HX_("E1843A",f6,e6,6d,f2),
};
static const ::String _hx_array_data_79985863_18[] = {
	HX_("EliteMasterEric",1c,c5,50,08),HX_("mastereric",29,e3,63,9f),HX_("Runtime Shaders support",15,28,f0,9b),HX_("https://twitter.com/EliteMasterEric",24,ec,98,b2),HX_("FFBD40",fe,b8,db,76),
};
static const ::String _hx_array_data_79985863_19[] = {
	HX_("PolybiusProxy",5d,cc,61,1d),HX_("proxy",6e,ee,8f,c8),HX_(".MP4 Video Loader Library (hxCodec)",5b,07,4f,aa),HX_("https://twitter.com/polybiusproxy",a5,e1,66,7e),HX_("DCD294",c8,0b,36,f1),
};
static const ::String _hx_array_data_79985863_20[] = {
	HX_("KadeDev",5e,4b,70,ce),HX_("kade",97,c6,03,47),HX_("Fixed some cool stuff on Chart Editor\nand other PRs",7b,9a,fb,3e),HX_("https://twitter.com/kade0912",39,4f,a3,4e),HX_("64A250",aa,a3,38,b3),
};
static const ::String _hx_array_data_79985863_21[] = {
	HX_("Keoiki",f2,5f,eb,6d),HX_("keoiki",d2,eb,56,39),HX_("Note Splash Animations and Latin Alphabet",9e,ce,cd,a6),HX_("https://twitter.com/Keoiki_",35,73,4e,3b),HX_("D2D2D2",ca,38,66,27),
};
static const ::String _hx_array_data_79985863_22[] = {
	HX_("superpowers04",cd,26,a9,a5),HX_("superpowers04",cd,26,a9,a5),HX_("LUA JIT Fork",35,fe,5d,15),HX_("https://twitter.com/superpowers04",d5,fb,cb,e1),HX_("B957ED",78,28,97,58),
};
static const ::String _hx_array_data_79985863_23[] = {
	HX_("Smokey",4a,66,fc,3b),HX_("smokey",2a,f2,67,07),HX_("Sprite Atlas Support",bf,aa,7d,5b),HX_("https://twitter.com/Smokey_5_",a7,19,3b,46),HX_("483D92",4e,ec,e8,2a),
};
static const ::String _hx_array_data_79985863_24[] = {
	HX_("",00,00,00,00),
};
static const ::String _hx_array_data_79985863_25[] = {
	HX_("Funkin' Crew",ab,00,2d,30),
};
static const ::String _hx_array_data_79985863_26[] = {
	HX_("ninjamuffin99",f7,4c,e5,00),HX_("ninjamuffin99",f7,4c,e5,00),HX_("Programmer of Friday Night Funkin'",2c,f9,c3,b2),HX_("https://twitter.com/ninja_muffin99",7a,ac,b6,89),HX_("CF2D2D",47,38,36,39),
};
static const ::String _hx_array_data_79985863_27[] = {
	HX_("PhantomArcade",9d,2d,b3,ef),HX_("phantomarcade",9d,69,2e,73),HX_("Animator of Friday Night Funkin'",7d,a9,23,e4),HX_("https://twitter.com/PhantomArcade3K",9d,e2,57,4f),HX_("FADC45",7b,7d,2c,97),
};
static const ::String _hx_array_data_79985863_28[] = {
	HX_("evilsk8r",66,38,e0,32),HX_("evilsk8r",66,38,e0,32),HX_("Artist of Friday Night Funkin'",dd,f8,e7,48),HX_("https://twitter.com/evilsk8r",5e,80,bd,94),HX_("5ABD4B",3c,b0,c9,c9),
};
static const ::String _hx_array_data_79985863_29[] = {
	HX_("kawaisprite",0e,de,66,45),HX_("kawaisprite",0e,de,66,45),HX_("Composer of Friday Night Funkin'",36,08,52,24),HX_("https://twitter.com/kawaisprite",16,e1,bc,3d),HX_("378FC7",c6,99,76,34),
};
HX_LOCAL_STACK_FRAME(_hx_pos_178cfd7cdc100066_132_update,"states.CreditsState","update",0xdf05a6b4,"states.CreditsState.update","states/CreditsState.hx",132,0xc8f2335a)
HX_LOCAL_STACK_FRAME(_hx_pos_178cfd7cdc100066_208_changeSelection,"states.CreditsState","changeSelection",0xb16f8ab1,"states.CreditsState.changeSelection","states/CreditsState.hx",208,0xc8f2335a)
HX_LOCAL_STACK_FRAME(_hx_pos_178cfd7cdc100066_227_changeSelection,"states.CreditsState","changeSelection",0xb16f8ab1,"states.CreditsState.changeSelection","states/CreditsState.hx",227,0xc8f2335a)
HX_LOCAL_STACK_FRAME(_hx_pos_178cfd7cdc100066_259_pushModCreditsToList,"states.CreditsState","pushModCreditsToList",0xbcc6d8f6,"states.CreditsState.pushModCreditsToList","states/CreditsState.hx",259,0xc8f2335a)
static const ::String _hx_array_data_79985863_38[] = {
	HX_("",00,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_178cfd7cdc100066_279_unselectableCheck,"states.CreditsState","unselectableCheck",0x9a60714e,"states.CreditsState.unselectableCheck","states/CreditsState.hx",279,0xc8f2335a)
namespace states{

void CreditsState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_178cfd7cdc100066_10_new)
HXLINE( 206)		this->moveTween = null();
HXLINE( 130)		this->holdTime = ((Float)0);
HXLINE( 129)		this->quitting = false;
HXLINE(  24)		this->offsetThing = ((Float)-75);
HXLINE(  16)		this->creditsStuff = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  15)		this->iconArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  12)		this->curSelected = -1;
HXLINE(  10)		super::__construct(TransIn,TransOut);
            	}

Dynamic CreditsState_obj::__CreateEmpty() { return new CreditsState_obj; }

void *CreditsState_obj::_hx_vtable = 0;

Dynamic CreditsState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CreditsState_obj > _hx_result = new CreditsState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CreditsState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x53aaab8a) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x0d505f5d) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0d505f5d;
			} else {
				return inClassId==(int)0x23a57bae;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x53aaab8a;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void CreditsState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_178cfd7cdc100066_27_create)
HXLINE(  30)		::backend::DiscordClient_obj::changePresence(HX_("In the Menus",0a,c1,ad,c6),null(),null(),null(),null());
HXLINE(  33)		this->persistentUpdate = true;
HXLINE(  34)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  34)		this->bg = _hx_tmp->loadGraphic(::backend::Paths_obj::image(HX_("menuBG/menuDesat",3b,4d,f5,8e),null(),null()),null(),null(),null(),null(),null());
HXLINE(  35)		this->bg->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  36)		this->add(this->bg);
HXLINE(  37)		{
HXLINE(  37)			 ::flixel::FlxSprite _this = this->bg;
HXDLIN(  37)			int axes = 17;
HXDLIN(  37)			bool _hx_tmp1;
HXDLIN(  37)			if ((axes != 1)) {
HXLINE(  37)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  37)				_hx_tmp1 = true;
            			}
HXDLIN(  37)			if (_hx_tmp1) {
HXLINE(  37)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  37)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  37)			bool _hx_tmp2;
HXDLIN(  37)			if ((axes != 16)) {
HXLINE(  37)				_hx_tmp2 = (axes == 17);
            			}
            			else {
HXLINE(  37)				_hx_tmp2 = true;
            			}
HXDLIN(  37)			if (_hx_tmp2) {
HXLINE(  37)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  37)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  39)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  40)		this->add(this->grpOptions);
HXLINE(  43)		{
HXLINE(  43)			int _g = 0;
HXDLIN(  43)			if (!(::backend::Mods_obj::updatedOnState)) {
HXLINE(  43)				::backend::Mods_obj::updateModList();
            			}
HXDLIN(  43)			::Array< ::String > list_enabled = ::Array_obj< ::String >::__new(0);
HXDLIN(  43)			::Array< ::String > list_disabled = ::Array_obj< ::String >::__new(0);
HXDLIN(  43)			::Array< ::String > list_all = ::Array_obj< ::String >::__new(0);
HXDLIN(  43)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  43)				int _g = 0;
HXDLIN(  43)				::String path = HX_("modsList.txt",f1,ca,08,ac);
HXDLIN(  43)				::String daList = null();
HXDLIN(  43)				::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXLINE(  88)				path = formatted->__get((formatted->length - 1));
HXLINE(  43)				if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  89)					daList = ::sys::io::File_obj::getContent(path);
            				}
HXLINE(  43)				::Array< ::String > _g1;
HXDLIN(  43)				if (::hx::IsNotNull( daList )) {
HXLINE(  43)					::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXLINE( 160)					daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXLINE(  43)					{
HXLINE(  43)						int _g = 0;
HXDLIN(  43)						int _g2 = daList1->length;
HXDLIN(  43)						while((_g < _g2)){
HXLINE(  43)							_g = (_g + 1);
HXDLIN(  43)							int i = (_g - 1);
HXDLIN(  43)							daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            						}
            					}
HXDLIN(  43)					_g1 = daList1;
            				}
            				else {
HXLINE(  43)					_g1 = ::Array_obj< ::String >::__new(0);
            				}
HXDLIN(  43)				while((_g < _g1->length)){
HXLINE(  43)					::String mod = _g1->__get(_g);
HXDLIN(  43)					_g = (_g + 1);
HXDLIN(  43)					if ((::StringTools_obj::trim(mod).length < 1)) {
HXLINE(  43)						continue;
            					}
HXDLIN(  43)					::Array< ::String > dat = mod.split(HX_("|",7c,00,00,00));
HXDLIN(  43)					list_all->push(dat->__get(0));
HXDLIN(  43)					if ((dat->__get(1) == HX_("1",31,00,00,00))) {
HXLINE(  43)						list_enabled->push(dat->__get(0));
            					}
            					else {
HXLINE(  43)						list_disabled->push(dat->__get(0));
            					}
            				}
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 172)					 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE(  43)					::haxe::Log_obj::trace(e,::hx::SourceInfo(HX_("source/backend/Mods.hx",1e,5b,8b,ff),173,HX_("backend.Mods",2b,aa,ba,a1),HX_("parseList",31,6e,59,cf)));
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXDLIN(  43)			::Array< ::String > _g1 = list_enabled;
HXDLIN(  43)			while((_g < _g1->length)){
HXLINE(  43)				::String mod = _g1->__get(_g);
HXDLIN(  43)				_g = (_g + 1);
HXDLIN(  43)				this->pushModCreditsToList(mod);
            			}
            		}
HXLINE(  46)		::Array< ::Dynamic> defaultList = ::Array_obj< ::Dynamic>::__new(23)->init(0,::Array_obj< ::String >::fromData( _hx_array_data_79985863_7,1))->init(1,::Array_obj< ::String >::fromData( _hx_array_data_79985863_8,5))->init(2,::Array_obj< ::String >::fromData( _hx_array_data_79985863_9,5))->init(3,::Array_obj< ::String >::fromData( _hx_array_data_79985863_10,1))->init(4,::Array_obj< ::String >::fromData( _hx_array_data_79985863_11,1))->init(5,::Array_obj< ::String >::fromData( _hx_array_data_79985863_12,5))->init(6,::Array_obj< ::String >::fromData( _hx_array_data_79985863_13,5))->init(7,::Array_obj< ::String >::fromData( _hx_array_data_79985863_14,1))->init(8,::Array_obj< ::String >::fromData( _hx_array_data_79985863_15,1))->init(9,::Array_obj< ::String >::fromData( _hx_array_data_79985863_16,5))->init(10,::Array_obj< ::String >::fromData( _hx_array_data_79985863_17,5))->init(11,::Array_obj< ::String >::fromData( _hx_array_data_79985863_18,5))->init(12,::Array_obj< ::String >::fromData( _hx_array_data_79985863_19,5))->init(13,::Array_obj< ::String >::fromData( _hx_array_data_79985863_20,5))->init(14,::Array_obj< ::String >::fromData( _hx_array_data_79985863_21,5))->init(15,::Array_obj< ::String >::fromData( _hx_array_data_79985863_22,5))->init(16,::Array_obj< ::String >::fromData( _hx_array_data_79985863_23,5))->init(17,::Array_obj< ::String >::fromData( _hx_array_data_79985863_24,1))->init(18,::Array_obj< ::String >::fromData( _hx_array_data_79985863_25,1))->init(19,::Array_obj< ::String >::fromData( _hx_array_data_79985863_26,5))->init(20,::Array_obj< ::String >::fromData( _hx_array_data_79985863_27,5))->init(21,::Array_obj< ::String >::fromData( _hx_array_data_79985863_28,5))->init(22,::Array_obj< ::String >::fromData( _hx_array_data_79985863_29,5));
HXLINE(  72)		{
HXLINE(  72)			int _g2 = 0;
HXDLIN(  72)			while((_g2 < defaultList->length)){
HXLINE(  72)				::Array< ::String > i = defaultList->__get(_g2).StaticCast< ::Array< ::String > >();
HXDLIN(  72)				_g2 = (_g2 + 1);
HXLINE(  73)				this->creditsStuff->push(i);
            			}
            		}
HXLINE(  76)		{
HXLINE(  76)			int _g3 = 0;
HXDLIN(  76)			int _g4 = this->creditsStuff->length;
HXDLIN(  76)			while((_g3 < _g4)){
HXLINE(  76)				_g3 = (_g3 + 1);
HXDLIN(  76)				int i = (_g3 - 1);
HXLINE(  78)				bool isSelectable = !(this->unselectableCheck(i));
HXLINE(  79)				 ::objects::Alphabet optionText =  ::objects::Alphabet_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )),( (Float)(300) ),this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >()->__get(0),!(isSelectable));
HXLINE(  80)				optionText->isMenuItem = true;
HXLINE(  81)				optionText->targetY = i;
HXLINE(  82)				optionText->changeX = false;
HXLINE(  83)				optionText->snapToPosition();
HXLINE(  84)				this->grpOptions->add(optionText).StaticCast<  ::objects::Alphabet >();
HXLINE(  86)				if (isSelectable) {
HXLINE(  87)					if (::hx::IsNotNull( this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >()->__get(5) )) {
HXLINE(  89)						::backend::Mods_obj::currentModDirectory = this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >()->__get(5);
            					}
HXLINE(  92)					::String str = HX_("credits/missing_icon",87,66,74,31);
HXLINE(  93)					if (::hx::IsNotNull( ::backend::Paths_obj::image((HX_("credits/",d5,48,ee,de) + this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >()->__get(1)),null(),null()) )) {
HXLINE(  93)						str = (HX_("credits/",d5,48,ee,de) + this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >()->__get(1));
            					}
HXLINE(  94)					 ::objects::AttachedSprite icon =  ::objects::AttachedSprite_obj::__alloc( HX_CTX ,str,null(),null(),null());
HXLINE(  95)					icon->xAdd = (optionText->get_width() + 10);
HXLINE(  96)					icon->sprTracker = optionText;
HXLINE(  99)					this->iconArray->push(icon);
HXLINE( 100)					this->add(icon);
HXLINE( 101)					::backend::Mods_obj::currentModDirectory = HX_("",00,00,00,00);
HXLINE( 103)					if ((this->curSelected == -1)) {
HXLINE( 103)						this->curSelected = i;
            					}
            				}
            				else {
HXLINE( 105)					optionText->set_alignment(::objects::Alignment_obj::CENTERED_dyn());
            				}
            			}
            		}
HXLINE( 108)		this->descBox =  ::objects::AttachedSprite_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 109)		this->descBox->makeGraphic(1,1,-16777216,null(),null());
HXLINE( 110)		this->descBox->xAdd = ( (Float)(-10) );
HXLINE( 111)		this->descBox->yAdd = ( (Float)(-10) );
HXLINE( 112)		this->descBox->alphaMult = ((Float)0.6);
HXLINE( 113)		this->descBox->set_alpha(((Float)0.6));
HXLINE( 114)		this->add(this->descBox);
HXLINE( 116)		this->descText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,50,((::flixel::FlxG_obj::height + this->offsetThing) - ( (Float)(25) )),1180,HX_("",00,00,00,00),32,null());
HXLINE( 117)		 ::flixel::text::FlxText _hx_tmp3 = this->descText;
HXDLIN( 117)		::String file = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN( 117)		::String _hx_tmp4;
HXDLIN( 117)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 117)			_hx_tmp4 = file;
            		}
            		else {
HXLINE( 117)			_hx_tmp4 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN( 117)		_hx_tmp3->setFormat(_hx_tmp4,32,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 118)		{
HXLINE( 118)			 ::flixel::math::FlxBasePoint this1 = this->descText->scrollFactor;
HXDLIN( 118)			this1->set_x(( (Float)(0) ));
HXDLIN( 118)			this1->set_y(( (Float)(0) ));
            		}
HXLINE( 120)		this->descBox->sprTracker = this->descText;
HXLINE( 121)		this->add(this->descText);
HXLINE( 123)		 ::flixel::FlxSprite _hx_tmp5 = this->bg;
HXDLIN( 123)		::String color = this->creditsStuff->__get(this->curSelected).StaticCast< ::Array< ::String > >()->__get(4);
HXDLIN( 123)		 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[\t\n\r]",ac,57,71,6b),HX_("",00,00,00,00));
HXDLIN( 123)		::String color1 = ::StringTools_obj::trim(hideChars->split(color)->join(HX_("",00,00,00,00)));
HXDLIN( 123)		if (::StringTools_obj::startsWith(color1,HX_("0x",48,2a,00,00))) {
HXLINE( 150)			color1 = color1.substring((color1.length - 6),null());
            		}
HXLINE( 123)		 ::Dynamic colorNum = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(color1);
HXDLIN( 123)		if (::hx::IsNull( colorNum )) {
HXLINE( 153)			colorNum = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString((HX_("#",23,00,00,00) + color1));
            		}
HXLINE( 123)		int _hx_tmp6;
HXDLIN( 123)		if (::hx::IsNotNull( colorNum )) {
HXLINE( 123)			_hx_tmp6 = ( (int)(colorNum) );
            		}
            		else {
HXLINE( 123)			_hx_tmp6 = -1;
            		}
HXDLIN( 123)		_hx_tmp5->set_color(_hx_tmp6);
HXLINE( 124)		this->intendedColor = this->bg->color;
HXLINE( 125)		this->changeSelection(null());
HXLINE( 126)		this->super::create();
            	}


void CreditsState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_178cfd7cdc100066_132_update)
HXLINE( 133)		if ((::flixel::FlxG_obj::sound->music->_volume < ((Float)0.7))) {
HXLINE( 135)			 ::flixel::sound::FlxSound fh = ::flixel::FlxG_obj::sound->music;
HXDLIN( 135)			fh->set_volume((fh->_volume + (((Float)0.5) * ::flixel::FlxG_obj::elapsed)));
            		}
HXLINE( 138)		if (!(this->quitting)) {
HXLINE( 140)			if ((this->creditsStuff->length > 1)) {
HXLINE( 142)				int shiftMult = 1;
HXLINE( 143)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 143)				if (_this->keyManager->checkStatusUnsafe(16,_this->status)) {
HXLINE( 143)					shiftMult = 3;
            				}
HXLINE( 145)				bool upP = this->get_controls()->get_UI_UP_P();
HXLINE( 146)				bool downP = this->get_controls()->get_UI_DOWN_P();
HXLINE( 148)				if (upP) {
HXLINE( 150)					this->changeSelection(-(shiftMult));
HXLINE( 151)					this->holdTime = ( (Float)(0) );
            				}
HXLINE( 153)				if (downP) {
HXLINE( 155)					this->changeSelection(shiftMult);
HXLINE( 156)					this->holdTime = ( (Float)(0) );
            				}
HXLINE( 159)				bool _hx_tmp;
HXDLIN( 159)				if (!(this->get_controls()->get_UI_DOWN())) {
HXLINE( 159)					_hx_tmp = this->get_controls()->get_UI_UP();
            				}
            				else {
HXLINE( 159)					_hx_tmp = true;
            				}
HXDLIN( 159)				if (_hx_tmp) {
HXLINE( 161)					int checkLastHold = ::Math_obj::floor(((this->holdTime - ((Float)0.5)) * ( (Float)(10) )));
HXLINE( 162)					 ::states::CreditsState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 162)					_hx_tmp->holdTime = (_hx_tmp->holdTime + elapsed);
HXLINE( 163)					int checkNewHold = ::Math_obj::floor(((this->holdTime - ((Float)0.5)) * ( (Float)(10) )));
HXLINE( 165)					bool _hx_tmp1;
HXDLIN( 165)					if ((this->holdTime > ((Float)0.5))) {
HXLINE( 165)						_hx_tmp1 = ((checkNewHold - checkLastHold) > 0);
            					}
            					else {
HXLINE( 165)						_hx_tmp1 = false;
            					}
HXDLIN( 165)					if (_hx_tmp1) {
HXLINE( 167)						int _hx_tmp;
HXDLIN( 167)						if (this->get_controls()->get_UI_UP()) {
HXLINE( 167)							_hx_tmp = -(shiftMult);
            						}
            						else {
HXLINE( 167)							_hx_tmp = shiftMult;
            						}
HXDLIN( 167)						this->changeSelection(((checkNewHold - checkLastHold) * _hx_tmp));
            					}
            				}
            			}
HXLINE( 172)			bool _hx_tmp;
HXDLIN( 172)			if (this->get_controls()->get_ACCEPT()) {
HXLINE( 172)				if (::hx::IsNotNull( this->creditsStuff->__get(this->curSelected).StaticCast< ::Array< ::String > >()->__get(3) )) {
HXLINE( 172)					_hx_tmp = (this->creditsStuff->__get(this->curSelected).StaticCast< ::Array< ::String > >()->__get(3).length > 4);
            				}
            				else {
HXLINE( 172)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 172)				_hx_tmp = false;
            			}
HXDLIN( 172)			if (_hx_tmp) {
HXLINE( 173)				::String site = this->creditsStuff->__get(this->curSelected).StaticCast< ::Array< ::String > >()->__get(3);
HXDLIN( 173)				{
HXLINE( 173)					::String prefix = HX_("",00,00,00,00);
HXDLIN( 173)					if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("^https?://",48,ee,dd,38),HX_("",00,00,00,00))->match(site))) {
HXLINE( 173)						prefix = HX_("http://",52,75,cd,5a);
            					}
HXDLIN( 173)					::openfl::Lib_obj::getURL( ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,(prefix + site)),HX_("_blank",95,26,d9,b0));
            				}
            			}
HXLINE( 175)			if (this->get_controls()->get_BACK()) {
HXLINE( 177)				if (::hx::IsNotNull( this->colorTween )) {
HXLINE( 178)					this->colorTween->cancel();
            				}
HXLINE( 180)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 180)				_hx_tmp->play(::backend::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 181)				::backend::MusicBeatState_obj::switchState( ::states::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 182)				this->quitting = true;
            			}
            		}
HXLINE( 186)		{
HXLINE( 186)			int _g = 0;
HXDLIN( 186)			::Array< ::Dynamic> _g1 = this->grpOptions->members;
HXDLIN( 186)			while((_g < _g1->length)){
HXLINE( 186)				 ::objects::Alphabet item = _g1->__get(_g).StaticCast<  ::objects::Alphabet >();
HXDLIN( 186)				_g = (_g + 1);
HXLINE( 188)				if (!(item->bold)) {
HXLINE( 190)					Float Value = (elapsed * ( (Float)(12) ));
HXDLIN( 190)					Float lowerBound;
HXDLIN( 190)					if ((Value < 0)) {
HXLINE( 190)						lowerBound = ( (Float)(0) );
            					}
            					else {
HXLINE( 190)						lowerBound = Value;
            					}
HXDLIN( 190)					Float lerpVal;
HXDLIN( 190)					if ((lowerBound > 1)) {
HXLINE( 190)						lerpVal = ( (Float)(1) );
            					}
            					else {
HXLINE( 190)						lerpVal = lowerBound;
            					}
HXLINE( 191)					if ((item->targetY == 0)) {
HXLINE( 193)						Float lastX = item->x;
HXLINE( 194)						{
HXLINE( 194)							int axes = 1;
HXDLIN( 194)							bool _hx_tmp;
HXDLIN( 194)							if ((axes != 1)) {
HXLINE( 194)								_hx_tmp = (axes == 17);
            							}
            							else {
HXLINE( 194)								_hx_tmp = true;
            							}
HXDLIN( 194)							if (_hx_tmp) {
HXLINE( 194)								int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 194)								item->set_x(((( (Float)(_hx_tmp) ) - item->get_width()) / ( (Float)(2) )));
            							}
HXDLIN( 194)							bool _hx_tmp1;
HXDLIN( 194)							if ((axes != 16)) {
HXLINE( 194)								_hx_tmp1 = (axes == 17);
            							}
            							else {
HXLINE( 194)								_hx_tmp1 = true;
            							}
HXDLIN( 194)							if (_hx_tmp1) {
HXLINE( 194)								int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 194)								item->set_y(((( (Float)(_hx_tmp) ) - item->get_height()) / ( (Float)(2) )));
            							}
            						}
HXLINE( 195)						item->set_x((lastX + (lerpVal * ((item->x - ( (Float)(70) )) - lastX))));
            					}
            					else {
HXLINE( 199)						Float a = item->x;
HXDLIN( 199)						item->set_x((a + (lerpVal * ((200 + (( (Float)(-40) ) * ::Math_obj::abs(( (Float)(item->targetY) )))) - a))));
            					}
            				}
            			}
            		}
HXLINE( 203)		this->super::update(elapsed);
            	}


void CreditsState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_178cfd7cdc100066_208_changeSelection)
HXDLIN( 208)		 ::states::CreditsState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 209)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 209)		_hx_tmp->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 210)		while(true){
HXLINE( 211)			 ::states::CreditsState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)			_hx_tmp->curSelected = (_hx_tmp->curSelected + change);
HXLINE( 212)			if ((this->curSelected < 0)) {
HXLINE( 213)				this->curSelected = (this->creditsStuff->length - 1);
            			}
HXLINE( 214)			if ((this->curSelected >= this->creditsStuff->length)) {
HXLINE( 215)				this->curSelected = 0;
            			}
HXLINE( 210)			if (!(this->unselectableCheck(this->curSelected))) {
HXLINE( 210)				goto _hx_goto_32;
            			}
            		}
            		_hx_goto_32:;
HXLINE( 218)		::String color = this->creditsStuff->__get(this->curSelected).StaticCast< ::Array< ::String > >()->__get(4);
HXDLIN( 218)		 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[\t\n\r]",ac,57,71,6b),HX_("",00,00,00,00));
HXDLIN( 218)		::String color1 = ::StringTools_obj::trim(hideChars->split(color)->join(HX_("",00,00,00,00)));
HXDLIN( 218)		if (::StringTools_obj::startsWith(color1,HX_("0x",48,2a,00,00))) {
HXLINE( 218)			color1 = color1.substring((color1.length - 6),null());
            		}
HXDLIN( 218)		 ::Dynamic colorNum = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(color1);
HXDLIN( 218)		if (::hx::IsNull( colorNum )) {
HXLINE( 218)			colorNum = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString((HX_("#",23,00,00,00) + color1));
            		}
HXDLIN( 218)		int newColor;
HXDLIN( 218)		if (::hx::IsNotNull( colorNum )) {
HXLINE( 218)			newColor = ( (int)(colorNum) );
            		}
            		else {
HXLINE( 218)			newColor = -1;
            		}
HXLINE( 219)		::haxe::Log_obj::trace((HX_("The BG color is: ",59,4f,d7,97) + newColor),::hx::SourceInfo(HX_("source/states/CreditsState.hx",4e,19,5d,78),219,HX_("states.CreditsState",63,58,98,79),HX_("changeSelection",bc,98,b5,48)));
HXLINE( 220)		if ((newColor != this->intendedColor)) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::CreditsState,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween twn){
            				HX_GC_STACKFRAME(&_hx_pos_178cfd7cdc100066_227_changeSelection)
HXLINE( 227)				_gthis->colorTween = null();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 221)			if (::hx::IsNotNull( this->colorTween )) {
HXLINE( 222)				this->colorTween->cancel();
            			}
HXLINE( 224)			this->intendedColor = newColor;
HXLINE( 225)			this->colorTween = ::flixel::tweens::FlxTween_obj::color(this->bg,1,this->bg->color,this->intendedColor, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
            		}
HXLINE( 232)		int bullShit = 0;
HXLINE( 234)		{
HXLINE( 234)			int _g = 0;
HXDLIN( 234)			::Array< ::Dynamic> _g1 = this->grpOptions->members;
HXDLIN( 234)			while((_g < _g1->length)){
HXLINE( 234)				 ::objects::Alphabet item = _g1->__get(_g).StaticCast<  ::objects::Alphabet >();
HXDLIN( 234)				_g = (_g + 1);
HXLINE( 236)				item->targetY = (bullShit - this->curSelected);
HXLINE( 237)				bullShit = (bullShit + 1);
HXLINE( 239)				if (!(this->unselectableCheck((bullShit - 1)))) {
HXLINE( 240)					item->set_alpha(((Float)0.6));
HXLINE( 241)					if ((item->targetY == 0)) {
HXLINE( 242)						item->set_alpha(( (Float)(1) ));
            					}
            				}
            			}
            		}
HXLINE( 247)		this->descText->set_text(this->creditsStuff->__get(this->curSelected).StaticCast< ::Array< ::String > >()->__get(2));
HXLINE( 248)		 ::flixel::text::FlxText _hx_tmp1 = this->descText;
HXDLIN( 248)		int _hx_tmp2 = ::flixel::FlxG_obj::height;
HXDLIN( 248)		Float _hx_tmp3 = (( (Float)(_hx_tmp2) ) - this->descText->get_height());
HXDLIN( 248)		_hx_tmp1->set_y(((_hx_tmp3 + this->offsetThing) - ( (Float)(60) )));
HXLINE( 250)		if (::hx::IsNotNull( this->moveTween )) {
HXLINE( 250)			this->moveTween->cancel();
            		}
HXLINE( 251)		this->moveTween = ::flixel::tweens::FlxTween_obj::tween(this->descText, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("y",79,00,00,00),(this->descText->y + 75))),((Float)0.25), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::sineOut_dyn())));
HXLINE( 253)		 ::objects::AttachedSprite _hx_tmp4 = this->descBox;
HXDLIN( 253)		int _hx_tmp5 = ::Std_obj::_hx_int((this->descText->get_width() + 20));
HXDLIN( 253)		_hx_tmp4->setGraphicSize(_hx_tmp5,::Std_obj::_hx_int((this->descText->get_height() + 25)));
HXLINE( 254)		this->descBox->updateHitbox();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CreditsState_obj,changeSelection,(void))

void CreditsState_obj::pushModCreditsToList(::String folder){
            	HX_STACKFRAME(&_hx_pos_178cfd7cdc100066_259_pushModCreditsToList)
HXLINE( 260)		::String creditsFile = null();
HXLINE( 261)		bool _hx_tmp;
HXDLIN( 261)		if (::hx::IsNotNull( folder )) {
HXLINE( 261)			_hx_tmp = (::StringTools_obj::trim(folder).length > 0);
            		}
            		else {
HXLINE( 261)			_hx_tmp = false;
            		}
HXDLIN( 261)		if (_hx_tmp) {
HXLINE( 261)			::String key = (folder + HX_("/data/credits.txt",a6,fd,31,d1));
HXDLIN( 261)			if (::hx::IsNull( key )) {
HXLINE( 261)				key = HX_("",00,00,00,00);
            			}
HXDLIN( 261)			creditsFile = (HX_("mods/",9e,2f,58,0c) + key);
            		}
            		else {
HXLINE( 262)			::String key = HX_("data/credits.txt",77,6f,6e,c6);
HXDLIN( 262)			if (::hx::IsNull( key )) {
HXLINE( 262)				key = HX_("",00,00,00,00);
            			}
HXDLIN( 262)			creditsFile = (HX_("mods/",9e,2f,58,0c) + key);
            		}
HXLINE( 264)		if (::sys::FileSystem_obj::exists(creditsFile)) {
HXLINE( 266)			::Array< ::String > firstarray = ::sys::io::File_obj::getContent(creditsFile).split(HX_("\n",0a,00,00,00));
HXLINE( 267)			{
HXLINE( 267)				int _g = 0;
HXDLIN( 267)				while((_g < firstarray->length)){
HXLINE( 267)					::String i = firstarray->__get(_g);
HXDLIN( 267)					_g = (_g + 1);
HXLINE( 269)					::Array< ::String > arr = ::StringTools_obj::replace(i,HX_("\\n",92,50,00,00),HX_("\n",0a,00,00,00)).split(HX_("::",c0,32,00,00));
HXLINE( 270)					if ((arr->length >= 5)) {
HXLINE( 270)						arr->push(folder);
            					}
HXLINE( 271)					this->creditsStuff->push(arr);
            				}
            			}
HXLINE( 273)			this->creditsStuff->push(::Array_obj< ::String >::fromData( _hx_array_data_79985863_38,1));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CreditsState_obj,pushModCreditsToList,(void))

bool CreditsState_obj::unselectableCheck(int num){
            	HX_STACKFRAME(&_hx_pos_178cfd7cdc100066_279_unselectableCheck)
HXDLIN( 279)		return (this->creditsStuff->__get(num).StaticCast< ::Array< ::String > >()->length <= 1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CreditsState_obj,unselectableCheck,return )


::hx::ObjectPtr< CreditsState_obj > CreditsState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< CreditsState_obj > __this = new CreditsState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< CreditsState_obj > CreditsState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	CreditsState_obj *__this = (CreditsState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CreditsState_obj), true, "states.CreditsState"));
	*(void **)__this = CreditsState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

CreditsState_obj::CreditsState_obj()
{
}

void CreditsState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CreditsState);
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(iconArray,"iconArray");
	HX_MARK_MEMBER_NAME(creditsStuff,"creditsStuff");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(descText,"descText");
	HX_MARK_MEMBER_NAME(intendedColor,"intendedColor");
	HX_MARK_MEMBER_NAME(colorTween,"colorTween");
	HX_MARK_MEMBER_NAME(descBox,"descBox");
	HX_MARK_MEMBER_NAME(offsetThing,"offsetThing");
	HX_MARK_MEMBER_NAME(quitting,"quitting");
	HX_MARK_MEMBER_NAME(holdTime,"holdTime");
	HX_MARK_MEMBER_NAME(moveTween,"moveTween");
	 ::backend::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CreditsState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(iconArray,"iconArray");
	HX_VISIT_MEMBER_NAME(creditsStuff,"creditsStuff");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(descText,"descText");
	HX_VISIT_MEMBER_NAME(intendedColor,"intendedColor");
	HX_VISIT_MEMBER_NAME(colorTween,"colorTween");
	HX_VISIT_MEMBER_NAME(descBox,"descBox");
	HX_VISIT_MEMBER_NAME(offsetThing,"offsetThing");
	HX_VISIT_MEMBER_NAME(quitting,"quitting");
	HX_VISIT_MEMBER_NAME(holdTime,"holdTime");
	HX_VISIT_MEMBER_NAME(moveTween,"moveTween");
	 ::backend::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CreditsState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descBox") ) { return ::hx::Val( descBox ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"descText") ) { return ::hx::Val( descText ); }
		if (HX_FIELD_EQ(inName,"quitting") ) { return ::hx::Val( quitting ); }
		if (HX_FIELD_EQ(inName,"holdTime") ) { return ::hx::Val( holdTime ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"iconArray") ) { return ::hx::Val( iconArray ); }
		if (HX_FIELD_EQ(inName,"moveTween") ) { return ::hx::Val( moveTween ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		if (HX_FIELD_EQ(inName,"colorTween") ) { return ::hx::Val( colorTween ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"offsetThing") ) { return ::hx::Val( offsetThing ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"creditsStuff") ) { return ::hx::Val( creditsStuff ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"intendedColor") ) { return ::hx::Val( intendedColor ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"unselectableCheck") ) { return ::hx::Val( unselectableCheck_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pushModCreditsToList") ) { return ::hx::Val( pushModCreditsToList_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CreditsState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descBox") ) { descBox=inValue.Cast<  ::objects::AttachedSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"descText") ) { descText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"quitting") ) { quitting=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdTime") ) { holdTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"iconArray") ) { iconArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moveTween") ) { moveTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorTween") ) { colorTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetThing") ) { offsetThing=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"creditsStuff") ) { creditsStuff=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"intendedColor") ) { intendedColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CreditsState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("iconArray",60,3f,53,5f));
	outFields->push(HX_("creditsStuff",7a,9a,7e,73));
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("descText",9e,53,35,f3));
	outFields->push(HX_("intendedColor",b8,fb,ff,5a));
	outFields->push(HX_("colorTween",08,c2,dc,3d));
	outFields->push(HX_("descBox",3a,20,25,19));
	outFields->push(HX_("offsetThing",5b,0b,0a,a8));
	outFields->push(HX_("quitting",3d,a0,84,53));
	outFields->push(HX_("holdTime",ec,cc,bf,3e));
	outFields->push(HX_("moveTween",9a,79,37,d7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CreditsState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(CreditsState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(CreditsState_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CreditsState_obj,iconArray),HX_("iconArray",60,3f,53,5f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CreditsState_obj,creditsStuff),HX_("creditsStuff",7a,9a,7e,73)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CreditsState_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CreditsState_obj,descText),HX_("descText",9e,53,35,f3)},
	{::hx::fsInt,(int)offsetof(CreditsState_obj,intendedColor),HX_("intendedColor",b8,fb,ff,5a)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(CreditsState_obj,colorTween),HX_("colorTween",08,c2,dc,3d)},
	{::hx::fsObject /*  ::objects::AttachedSprite */ ,(int)offsetof(CreditsState_obj,descBox),HX_("descBox",3a,20,25,19)},
	{::hx::fsFloat,(int)offsetof(CreditsState_obj,offsetThing),HX_("offsetThing",5b,0b,0a,a8)},
	{::hx::fsBool,(int)offsetof(CreditsState_obj,quitting),HX_("quitting",3d,a0,84,53)},
	{::hx::fsFloat,(int)offsetof(CreditsState_obj,holdTime),HX_("holdTime",ec,cc,bf,3e)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(CreditsState_obj,moveTween),HX_("moveTween",9a,79,37,d7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CreditsState_obj_sStaticStorageInfo = 0;
#endif

static ::String CreditsState_obj_sMemberFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("grpOptions",f9,45,d8,00),
	HX_("iconArray",60,3f,53,5f),
	HX_("creditsStuff",7a,9a,7e,73),
	HX_("bg",c5,55,00,00),
	HX_("descText",9e,53,35,f3),
	HX_("intendedColor",b8,fb,ff,5a),
	HX_("colorTween",08,c2,dc,3d),
	HX_("descBox",3a,20,25,19),
	HX_("offsetThing",5b,0b,0a,a8),
	HX_("create",fc,66,0f,7c),
	HX_("quitting",3d,a0,84,53),
	HX_("holdTime",ec,cc,bf,3e),
	HX_("update",09,86,05,87),
	HX_("moveTween",9a,79,37,d7),
	HX_("changeSelection",bc,98,b5,48),
	HX_("pushModCreditsToList",0b,03,bb,6c),
	HX_("unselectableCheck",19,58,ce,19),
	::String(null()) };

::hx::Class CreditsState_obj::__mClass;

void CreditsState_obj::__register()
{
	CreditsState_obj _hx_dummy;
	CreditsState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.CreditsState",63,58,98,79);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CreditsState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CreditsState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CreditsState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CreditsState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
