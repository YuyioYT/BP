#include <hxcpp.h>

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
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
#endif
#ifndef INCLUDED_backend_StageData
#include <backend/StageData.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSound
#include <flixel/sound/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_utils_AssetLibrary
#include <lime/app/Promise_lime_utils_AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
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
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif
#ifndef INCLUDED_states_LoadingState
#include <states/LoadingState.h>
#endif
#ifndef INCLUDED_states_MultiCallback
#include <states/MultiCallback.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_670a7524baf7a379_17_new,"states.LoadingState","new",0xb6608a33,"states.LoadingState.new","states/LoadingState.hx",17,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_78_create,"states.LoadingState","create",0xe9745309,"states.LoadingState.create","states/LoadingState.hx",78,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_63_create,"states.LoadingState","create",0xe9745309,"states.LoadingState.create","states/LoadingState.hx",63,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_44_create,"states.LoadingState","create",0xe9745309,"states.LoadingState.create","states/LoadingState.hx",44,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_85_checkLoadSong,"states.LoadingState","checkLoadSong",0xd532b196,"states.LoadingState.checkLoadSong","states/LoadingState.hx",85,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_94_checkLoadSong,"states.LoadingState","checkLoadSong",0xd532b196,"states.LoadingState.checkLoadSong","states/LoadingState.hx",94,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_98_checkLibrary,"states.LoadingState","checkLibrary",0xa36bd2e0,"states.LoadingState.checkLibrary","states/LoadingState.hx",98,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_107_checkLibrary,"states.LoadingState","checkLibrary",0xa36bd2e0,"states.LoadingState.checkLibrary","states/LoadingState.hx",107,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_112_update,"states.LoadingState","update",0xf46a7216,"states.LoadingState.update","states/LoadingState.hx",112,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_129_onLoad,"states.LoadingState","onLoad",0x57a68ef2,"states.LoadingState.onLoad","states/LoadingState.hx",129,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_191_destroy,"states.LoadingState","destroy",0x6f6fcc4d,"states.LoadingState.destroy","states/LoadingState.hx",191,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_138_getSongPath,"states.LoadingState","getSongPath",0x52054ba3,"states.LoadingState.getSongPath","states/LoadingState.hx",138,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_143_getVocalPath,"states.LoadingState","getVocalPath",0xcfce1711,"states.LoadingState.getVocalPath","states/LoadingState.hx",143,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_148_loadAndSwitchState,"states.LoadingState","loadAndSwitchState",0x9884a639,"states.LoadingState.loadAndSwitchState","states/LoadingState.hx",148,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_152_getNextState,"states.LoadingState","getNextState",0xb11c2075,"states.LoadingState.getNextState","states/LoadingState.hx",152,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_235_initSongsManifest,"states.LoadingState","initSongsManifest",0x3c93acb0,"states.LoadingState.initSongsManifest","states/LoadingState.hx",235,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_257_initSongsManifest,"states.LoadingState","initSongsManifest",0x3c93acb0,"states.LoadingState.initSongsManifest","states/LoadingState.hx",257,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_198_initSongsManifest,"states.LoadingState","initSongsManifest",0x3c93acb0,"states.LoadingState.initSongsManifest","states/LoadingState.hx",198,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_19_boot,"states.LoadingState","boot",0xd63162ff,"states.LoadingState.boot","states/LoadingState.hx",19,0x41b125bc)
namespace states{

void LoadingState_obj::__construct( ::flixel::FlxState target,bool stopMusic,::String directory){
            	HX_STACKFRAME(&_hx_pos_670a7524baf7a379_17_new)
HXLINE(  31)		this->targetShit = ((Float)0);
HXLINE(  28)		this->stopMusic = false;
HXLINE(  35)		super::__construct(null(),null());
HXLINE(  36)		this->target = target;
HXLINE(  37)		this->stopMusic = stopMusic;
HXLINE(  38)		this->directory = directory;
            	}

Dynamic LoadingState_obj::__CreateEmpty() { return new LoadingState_obj; }

void *LoadingState_obj::_hx_vtable = 0;

Dynamic LoadingState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LoadingState_obj > _hx_result = new LoadingState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool LoadingState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x53aaab8a) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x137cfbbb) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x137cfbbb;
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

void LoadingState_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::states::LoadingState,_gthis) HXARGC(1)
            		void _hx_run( ::lime::utils::AssetLibrary lib){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,introComplete) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer _){
            				HX_GC_STACKFRAME(&_hx_pos_670a7524baf7a379_78_create)
HXLINE(  78)				introComplete();
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_670a7524baf7a379_63_create)
HXLINE(  64)			_gthis->callbacks =  ::states::MultiCallback_obj::__alloc( HX_CTX ,_gthis->onLoad_dyn(),null());
HXLINE(  65)			 ::Dynamic introComplete = _gthis->callbacks->add(HX_("introComplete",45,d3,4c,b2));
HXLINE(  66)			if (::hx::IsNotNull( ::states::PlayState_obj::SONG )) {
HXLINE(  67)				 ::states::LoadingState _gthis1 = _gthis;
HXDLIN(  67)				_gthis1->checkLoadSong(( (::String)(::states::LoadingState_obj::getSongPath()) ));
HXLINE(  68)				if (( (bool)(::states::PlayState_obj::SONG->__Field(HX_("needsVoices",be,05,e9,0d),::hx::paccDynamic)) )) {
HXLINE(  69)					 ::states::LoadingState _gthis1 = _gthis;
HXDLIN(  69)					_gthis1->checkLoadSong(( (::String)(::states::LoadingState_obj::getVocalPath()) ));
            				}
            			}
HXLINE(  71)			_gthis->checkLibrary(HX_("shared",a5,5e,2b,1d));
HXLINE(  72)			bool _hx_tmp;
HXDLIN(  72)			bool _hx_tmp1;
HXDLIN(  72)			if (::hx::IsNotNull( _gthis->directory )) {
HXLINE(  72)				_hx_tmp1 = (_gthis->directory.length > 0);
            			}
            			else {
HXLINE(  72)				_hx_tmp1 = false;
            			}
HXDLIN(  72)			if (_hx_tmp1) {
HXLINE(  72)				_hx_tmp = (_gthis->directory != HX_("shared",a5,5e,2b,1d));
            			}
            			else {
HXLINE(  72)				_hx_tmp = false;
            			}
HXDLIN(  72)			if (_hx_tmp) {
HXLINE(  73)				_gthis->checkLibrary(HX_("week_assets",ae,a0,93,a0));
            			}
HXLINE(  76)			Float fadeTime = ((Float)0.5);
HXLINE(  77)			::flixel::FlxG_obj::camera->fade(::flixel::FlxG_obj::camera->bgColor,fadeTime,true,null(),null());
HXLINE(  78)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start((fadeTime + ((Float)1.0)), ::Dynamic(new _hx_Closure_0(introComplete)),null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_670a7524baf7a379_44_create)
HXDLIN(  44)		 ::states::LoadingState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  45)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-36096,null(),null());
HXLINE(  46)		bg->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  47)		this->add(bg);
HXLINE(  48)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  48)		this->funkay = _hx_tmp->loadGraphic(::backend::Paths_obj::getPath(HX_("images/funkay.png",b6,f5,59,91),HX_("IMAGE",3b,57,57,3b),null(),null()),null(),null(),null(),null(),null());
HXLINE(  49)		this->funkay->setGraphicSize(0,::flixel::FlxG_obj::height);
HXLINE(  50)		this->funkay->updateHitbox();
HXLINE(  51)		this->add(this->funkay);
HXLINE(  52)		this->funkay->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  53)		{
HXLINE(  53)			 ::flixel::math::FlxBasePoint this1 = this->funkay->scrollFactor;
HXDLIN(  53)			this1->set_x(( (Float)(0) ));
HXDLIN(  53)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  54)		{
HXLINE(  54)			 ::flixel::FlxSprite _this = this->funkay;
HXDLIN(  54)			int axes = 17;
HXDLIN(  54)			bool _hx_tmp1;
HXDLIN(  54)			if ((axes != 1)) {
HXLINE(  54)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  54)				_hx_tmp1 = true;
            			}
HXDLIN(  54)			if (_hx_tmp1) {
HXLINE(  54)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  54)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  54)			bool _hx_tmp2;
HXDLIN(  54)			if ((axes != 16)) {
HXLINE(  54)				_hx_tmp2 = (axes == 17);
            			}
            			else {
HXLINE(  54)				_hx_tmp2 = true;
            			}
HXDLIN(  54)			if (_hx_tmp2) {
HXLINE(  54)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  54)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  56)		this->loadBar =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,(::flixel::FlxG_obj::height - 20),null())->makeGraphic(::flixel::FlxG_obj::width,10,-59694,null(),null());
HXLINE(  57)		{
HXLINE(  57)			 ::flixel::FlxSprite _this1 = this->loadBar;
HXDLIN(  57)			int axes1 = 1;
HXDLIN(  57)			bool _hx_tmp3;
HXDLIN(  57)			if ((axes1 != 1)) {
HXLINE(  57)				_hx_tmp3 = (axes1 == 17);
            			}
            			else {
HXLINE(  57)				_hx_tmp3 = true;
            			}
HXDLIN(  57)			if (_hx_tmp3) {
HXLINE(  57)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  57)				_this1->set_x(((( (Float)(_hx_tmp) ) - _this1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  57)			bool _hx_tmp4;
HXDLIN(  57)			if ((axes1 != 16)) {
HXLINE(  57)				_hx_tmp4 = (axes1 == 17);
            			}
            			else {
HXLINE(  57)				_hx_tmp4 = true;
            			}
HXDLIN(  57)			if (_hx_tmp4) {
HXLINE(  57)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  57)				_this1->set_y(((( (Float)(_hx_tmp) ) - _this1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  58)		this->add(this->loadBar);
HXLINE(  60)		::states::LoadingState_obj::initSongsManifest()->onComplete( ::Dynamic(new _hx_Closure_1(_gthis)));
            	}


void LoadingState_obj::checkLoadSong(::String path){
            	HX_STACKFRAME(&_hx_pos_670a7524baf7a379_85_checkLoadSong)
HXDLIN(  85)		if (!(::openfl::utils::IAssetCache_obj::hasSound(::openfl::utils::Assets_obj::cache,path))) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,callback) HXARGC(1)
            			void _hx_run( ::openfl::media::Sound _){
            				HX_STACKFRAME(&_hx_pos_670a7524baf7a379_94_checkLoadSong)
HXLINE(  94)				callback();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  87)			 ::lime::utils::AssetLibrary library = ::openfl::utils::Assets_obj::getLibrary(HX_("songs",fe,36,c7,80));
HXLINE(  88)			::String symbolPath = ( (::String)(path.split(HX_(":",3a,00,00,00))->pop()) );
HXLINE(  93)			 ::Dynamic callback = this->callbacks->add((HX_("song:",c5,36,c7,80) + path));
HXLINE(  94)			::openfl::utils::Assets_obj::loadSound(path,null())->onComplete( ::Dynamic(new _hx_Closure_0(callback)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(LoadingState_obj,checkLoadSong,(void))

void LoadingState_obj::checkLibrary(::String library){
            	HX_STACKFRAME(&_hx_pos_670a7524baf7a379_98_checkLibrary)
HXLINE(  99)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  99)		bool _hx_tmp1 = ::openfl::utils::Assets_obj::hasLibrary(library);
HXDLIN(  99)		_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/states/LoadingState.hx",b0,0b,1c,f1),99,HX_("states.LoadingState",c1,f4,c4,7f),HX_("checkLibrary",13,df,f6,2c)));
HXLINE( 100)		if (::hx::IsNull( ::openfl::utils::Assets_obj::getLibrary(library) )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,callback) HXARGC(1)
            			void _hx_run( ::openfl::utils::AssetLibrary _){
            				HX_STACKFRAME(&_hx_pos_670a7524baf7a379_107_checkLibrary)
HXLINE( 107)				callback();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 103)			if (!(::lime::utils::Assets_obj::libraryPaths->exists(library))) {
HXLINE( 104)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Missing library: ",07,45,01,4f) + library)));
            			}
HXLINE( 106)			 ::Dynamic callback = this->callbacks->add((HX_("library:",df,f4,b1,42) + library));
HXLINE( 107)			::openfl::utils::Assets_obj::loadLibrary(library)->onComplete( ::Dynamic(new _hx_Closure_0(callback)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(LoadingState_obj,checkLibrary,(void))

void LoadingState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_670a7524baf7a379_112_update)
HXLINE( 113)		this->super::update(elapsed);
HXLINE( 114)		 ::flixel::FlxSprite _hx_tmp = this->funkay;
HXDLIN( 114)		Float _hx_tmp1 = (((Float)0.88) * ( (Float)(::flixel::FlxG_obj::width) ));
HXDLIN( 114)		Float _hx_tmp2 = this->funkay->get_width();
HXDLIN( 114)		_hx_tmp->setGraphicSize(::Std_obj::_hx_int((_hx_tmp1 + (((Float)0.9) * (_hx_tmp2 - (((Float)0.88) * ( (Float)(::flixel::FlxG_obj::width) )))))),null());
HXLINE( 115)		this->funkay->updateHitbox();
HXLINE( 116)		if (this->get_controls()->get_ACCEPT()) {
HXLINE( 118)			 ::flixel::FlxSprite _hx_tmp = this->funkay;
HXDLIN( 118)			_hx_tmp->setGraphicSize(::Std_obj::_hx_int((this->funkay->get_width() + 60)),null());
HXLINE( 119)			this->funkay->updateHitbox();
            		}
HXLINE( 122)		if (::hx::IsNotNull( this->callbacks )) {
HXLINE( 123)			this->targetShit = ::flixel::math::FlxMath_obj::remapToRange((( (Float)(this->callbacks->numRemaining) ) / ( (Float)(this->callbacks->length) )),( (Float)(1) ),( (Float)(0) ),( (Float)(0) ),( (Float)(1) ));
HXLINE( 124)			 ::flixel::FlxSprite fh = this->loadBar;
HXDLIN( 124)			fh->scale->set_x((fh->scale->x + (((Float)0.5) * (this->targetShit - this->loadBar->scale->x))));
            		}
            	}


void LoadingState_obj::onLoad(){
            	HX_STACKFRAME(&_hx_pos_670a7524baf7a379_129_onLoad)
HXLINE( 130)		bool _hx_tmp;
HXDLIN( 130)		if (this->stopMusic) {
HXLINE( 130)			_hx_tmp = ::hx::IsNotNull( ::flixel::FlxG_obj::sound->music );
            		}
            		else {
HXLINE( 130)			_hx_tmp = false;
            		}
HXDLIN( 130)		if (_hx_tmp) {
HXLINE( 131)			 ::flixel::sound::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 131)			_this->cleanup(_this->autoDestroy,true);
            		}
HXLINE( 133)		::backend::MusicBeatState_obj::switchState(this->target);
            	}


HX_DEFINE_DYNAMIC_FUNC0(LoadingState_obj,onLoad,(void))

void LoadingState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_670a7524baf7a379_191_destroy)
HXLINE( 192)		this->super::destroy();
HXLINE( 194)		this->callbacks = null();
            	}


Float LoadingState_obj::MIN_TIME;

 ::Dynamic LoadingState_obj::getSongPath(){
            	HX_GC_STACKFRAME(&_hx_pos_670a7524baf7a379_138_getSongPath)
HXDLIN( 138)		::String song = ( (::String)(::states::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) );
HXDLIN( 138)		 ::EReg invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXDLIN( 138)		 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXDLIN( 138)		::String path = invalidChars->split(::StringTools_obj::replace(song,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXDLIN( 138)		::String songKey = ((HX_("",00,00,00,00) + hideChars->split(path)->join(HX_("",00,00,00,00)).toLowerCase()) + HX_("/Inst",95,b3,69,40));
HXDLIN( 138)		 ::openfl::media::Sound inst = ::backend::Paths_obj::returnSound(HX_("songs",fe,36,c7,80),songKey,null());
HXDLIN( 138)		return inst;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LoadingState_obj,getSongPath,return )

 ::Dynamic LoadingState_obj::getVocalPath(){
            	HX_GC_STACKFRAME(&_hx_pos_670a7524baf7a379_143_getVocalPath)
HXDLIN( 143)		::String song = ( (::String)(::states::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) );
HXDLIN( 143)		 ::EReg invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXDLIN( 143)		 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXDLIN( 143)		::String path = invalidChars->split(::StringTools_obj::replace(song,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXDLIN( 143)		::String songKey = ((HX_("",00,00,00,00) + hideChars->split(path)->join(HX_("",00,00,00,00)).toLowerCase()) + HX_("/Voices",10,18,4f,34));
HXDLIN( 143)		 ::openfl::media::Sound voices = ::backend::Paths_obj::returnSound(HX_("songs",fe,36,c7,80),songKey,null());
HXDLIN( 143)		return voices;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LoadingState_obj,getVocalPath,return )

void LoadingState_obj::loadAndSwitchState( ::flixel::FlxState target,::hx::Null< bool >  __o_stopMusic){
            		bool stopMusic = __o_stopMusic.Default(false);
            	HX_STACKFRAME(&_hx_pos_670a7524baf7a379_148_loadAndSwitchState)
HXDLIN( 148)		::backend::MusicBeatState_obj::switchState(::states::LoadingState_obj::getNextState(target,stopMusic));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LoadingState_obj,loadAndSwitchState,(void))

 ::flixel::FlxState LoadingState_obj::getNextState( ::flixel::FlxState target,::hx::Null< bool >  __o_stopMusic){
            		bool stopMusic = __o_stopMusic.Default(false);
            	HX_STACKFRAME(&_hx_pos_670a7524baf7a379_152_getNextState)
HXLINE( 153)		::String directory = HX_("shared",a5,5e,2b,1d);
HXLINE( 154)		::String weekDir = ::backend::StageData_obj::forceNextDirectory;
HXLINE( 155)		::backend::StageData_obj::forceNextDirectory = null();
HXLINE( 157)		bool _hx_tmp;
HXDLIN( 157)		bool _hx_tmp1;
HXDLIN( 157)		if (::hx::IsNotNull( weekDir )) {
HXLINE( 157)			_hx_tmp1 = (weekDir.length > 0);
            		}
            		else {
HXLINE( 157)			_hx_tmp1 = false;
            		}
HXDLIN( 157)		if (_hx_tmp1) {
HXLINE( 157)			_hx_tmp = (weekDir != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 157)			_hx_tmp = false;
            		}
HXDLIN( 157)		if (_hx_tmp) {
HXLINE( 157)			directory = weekDir;
            		}
HXLINE( 159)		::backend::Paths_obj::setCurrentLevel(directory);
HXLINE( 160)		::haxe::Log_obj::trace((HX_("Setting asset folder to ",b3,9c,5c,a5) + directory),::hx::SourceInfo(HX_("source/states/LoadingState.hx",b0,0b,1c,f1),160,HX_("states.LoadingState",c1,f4,c4,7f),HX_("getNextState",a8,2c,a7,3a)));
HXLINE( 171)		bool _hx_tmp2;
HXDLIN( 171)		if (stopMusic) {
HXLINE( 171)			_hx_tmp2 = ::hx::IsNotNull( ::flixel::FlxG_obj::sound->music );
            		}
            		else {
HXLINE( 171)			_hx_tmp2 = false;
            		}
HXDLIN( 171)		if (_hx_tmp2) {
HXLINE( 172)			 ::flixel::sound::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 172)			_this->cleanup(_this->autoDestroy,true);
            		}
HXLINE( 174)		return target;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LoadingState_obj,getNextState,return )

 ::lime::app::Future LoadingState_obj::initSongsManifest(){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::String,id, ::lime::app::Promise_lime_utils_AssetLibrary,promise) HXARGC(1)
            		void _hx_run( ::lime::utils::AssetManifest manifest){
            			HX_GC_STACKFRAME(&_hx_pos_670a7524baf7a379_235_initSongsManifest)
HXLINE( 236)			if (::hx::IsNull( manifest )) {
HXLINE( 238)				promise->error(((HX_("Cannot parse asset manifest for library \"",cf,1e,cc,48) + id) + HX_("\"",22,00,00,00)));
HXLINE( 239)				return;
            			}
HXLINE( 242)			 ::lime::utils::AssetLibrary library = ::lime::utils::AssetLibrary_obj::fromManifest(manifest);
HXLINE( 244)			if (::hx::IsNull( library )) {
HXLINE( 246)				promise->error(((HX_("Cannot open library \"",44,cc,55,e7) + id) + HX_("\"",22,00,00,00)));
            			}
            			else {
HXLINE( 251)				::lime::utils::Assets_obj::libraries->set(id,library);
HXLINE( 252)				library->onChange->add(::lime::utils::Assets_obj::onChange->dispatch_dyn(),null(),null());
HXLINE( 253)				 ::lime::app::Promise_lime_utils_AssetLibrary promise1 = promise;
HXDLIN( 253)				promise1->completeWith(::lime::app::Future_obj::withValue(library));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,::String,id, ::lime::app::Promise_lime_utils_AssetLibrary,promise) HXARGC(1)
            		void _hx_run( ::Dynamic _){
            			HX_GC_STACKFRAME(&_hx_pos_670a7524baf7a379_257_initSongsManifest)
HXLINE( 257)			promise->error(((HX_("There is no asset library with an ID of \"",8b,06,e2,9a) + id) + HX_("\"",22,00,00,00)));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_670a7524baf7a379_198_initSongsManifest)
HXLINE( 199)		::String id = HX_("songs",fe,36,c7,80);
HXLINE( 200)		 ::lime::app::Promise_lime_utils_AssetLibrary promise =  ::lime::app::Promise_lime_utils_AssetLibrary_obj::__alloc( HX_CTX );
HXLINE( 202)		 ::lime::utils::AssetLibrary library = ::lime::utils::Assets_obj::getLibrary(id);
HXLINE( 204)		if (::hx::IsNotNull( library )) {
HXLINE( 206)			return ::lime::app::Future_obj::withValue(library);
            		}
HXLINE( 209)		::String path = id;
HXLINE( 210)		::String rootPath = null();
HXLINE( 213)		 ::haxe::ds::StringMap libraryPaths = ::lime::utils::Assets_obj::libraryPaths;
HXLINE( 214)		if (libraryPaths->exists(id)) {
HXLINE( 216)			path = libraryPaths->get_string(id);
HXLINE( 217)			rootPath = ::haxe::io::Path_obj::directory(path);
            		}
            		else {
HXLINE( 221)			if (::StringTools_obj::endsWith(path,HX_(".bundle",30,4a,b8,4e))) {
HXLINE( 223)				rootPath = path;
HXLINE( 224)				path = (path + HX_("/library.json",2a,a7,07,47));
            			}
            			else {
HXLINE( 228)				rootPath = ::haxe::io::Path_obj::directory(path);
            			}
HXLINE( 231)			path = ::lime::utils::Assets_obj::_hx___cacheBreak(path);
            		}
HXLINE( 234)		::lime::utils::AssetManifest_obj::loadFromFile(path,rootPath)->onComplete( ::Dynamic(new _hx_Closure_0(id,promise)))->onError( ::Dynamic(new _hx_Closure_1(id,promise)));
HXLINE( 260)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LoadingState_obj,initSongsManifest,return )


::hx::ObjectPtr< LoadingState_obj > LoadingState_obj::__new( ::flixel::FlxState target,bool stopMusic,::String directory) {
	::hx::ObjectPtr< LoadingState_obj > __this = new LoadingState_obj();
	__this->__construct(target,stopMusic,directory);
	return __this;
}

::hx::ObjectPtr< LoadingState_obj > LoadingState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxState target,bool stopMusic,::String directory) {
	LoadingState_obj *__this = (LoadingState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LoadingState_obj), true, "states.LoadingState"));
	*(void **)__this = LoadingState_obj::_hx_vtable;
	__this->__construct(target,stopMusic,directory);
	return __this;
}

LoadingState_obj::LoadingState_obj()
{
}

void LoadingState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LoadingState);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(stopMusic,"stopMusic");
	HX_MARK_MEMBER_NAME(directory,"directory");
	HX_MARK_MEMBER_NAME(callbacks,"callbacks");
	HX_MARK_MEMBER_NAME(targetShit,"targetShit");
	HX_MARK_MEMBER_NAME(funkay,"funkay");
	HX_MARK_MEMBER_NAME(loadBar,"loadBar");
	 ::backend::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LoadingState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(stopMusic,"stopMusic");
	HX_VISIT_MEMBER_NAME(directory,"directory");
	HX_VISIT_MEMBER_NAME(callbacks,"callbacks");
	HX_VISIT_MEMBER_NAME(targetShit,"targetShit");
	HX_VISIT_MEMBER_NAME(funkay,"funkay");
	HX_VISIT_MEMBER_NAME(loadBar,"loadBar");
	 ::backend::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LoadingState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		if (HX_FIELD_EQ(inName,"funkay") ) { return ::hx::Val( funkay ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"onLoad") ) { return ::hx::Val( onLoad_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"loadBar") ) { return ::hx::Val( loadBar ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stopMusic") ) { return ::hx::Val( stopMusic ); }
		if (HX_FIELD_EQ(inName,"directory") ) { return ::hx::Val( directory ); }
		if (HX_FIELD_EQ(inName,"callbacks") ) { return ::hx::Val( callbacks ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"targetShit") ) { return ::hx::Val( targetShit ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkLibrary") ) { return ::hx::Val( checkLibrary_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkLoadSong") ) { return ::hx::Val( checkLoadSong_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LoadingState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"getSongPath") ) { outValue = getSongPath_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getVocalPath") ) { outValue = getVocalPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getNextState") ) { outValue = getNextState_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"initSongsManifest") ) { outValue = initSongsManifest_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadAndSwitchState") ) { outValue = loadAndSwitchState_dyn(); return true; }
	}
	return false;
}

::hx::Val LoadingState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::flixel::FlxState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"funkay") ) { funkay=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"loadBar") ) { loadBar=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stopMusic") ) { stopMusic=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"directory") ) { directory=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"callbacks") ) { callbacks=inValue.Cast<  ::states::MultiCallback >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"targetShit") ) { targetShit=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LoadingState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("stopMusic",43,09,9d,20));
	outFields->push(HX_("directory",6d,f2,44,10));
	outFields->push(HX_("callbacks",0e,f3,bf,a6));
	outFields->push(HX_("targetShit",b1,6b,83,a6));
	outFields->push(HX_("funkay",44,ab,4f,6f));
	outFields->push(HX_("loadBar",4d,2b,d5,08));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LoadingState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxState */ ,(int)offsetof(LoadingState_obj,target),HX_("target",51,f3,ec,86)},
	{::hx::fsBool,(int)offsetof(LoadingState_obj,stopMusic),HX_("stopMusic",43,09,9d,20)},
	{::hx::fsString,(int)offsetof(LoadingState_obj,directory),HX_("directory",6d,f2,44,10)},
	{::hx::fsObject /*  ::states::MultiCallback */ ,(int)offsetof(LoadingState_obj,callbacks),HX_("callbacks",0e,f3,bf,a6)},
	{::hx::fsFloat,(int)offsetof(LoadingState_obj,targetShit),HX_("targetShit",b1,6b,83,a6)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(LoadingState_obj,funkay),HX_("funkay",44,ab,4f,6f)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(LoadingState_obj,loadBar),HX_("loadBar",4d,2b,d5,08)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo LoadingState_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &LoadingState_obj::MIN_TIME,HX_("MIN_TIME",3a,05,70,2a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String LoadingState_obj_sMemberFields[] = {
	HX_("target",51,f3,ec,86),
	HX_("stopMusic",43,09,9d,20),
	HX_("directory",6d,f2,44,10),
	HX_("callbacks",0e,f3,bf,a6),
	HX_("targetShit",b1,6b,83,a6),
	HX_("funkay",44,ab,4f,6f),
	HX_("loadBar",4d,2b,d5,08),
	HX_("create",fc,66,0f,7c),
	HX_("checkLoadSong",03,52,52,a5),
	HX_("checkLibrary",13,df,f6,2c),
	HX_("update",09,86,05,87),
	HX_("onLoad",e5,a2,41,ea),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

static void LoadingState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LoadingState_obj::MIN_TIME,"MIN_TIME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LoadingState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LoadingState_obj::MIN_TIME,"MIN_TIME");
};

#endif

::hx::Class LoadingState_obj::__mClass;

static ::String LoadingState_obj_sStaticFields[] = {
	HX_("MIN_TIME",3a,05,70,2a),
	HX_("getSongPath",d0,06,1e,5e),
	HX_("getVocalPath",44,23,59,59),
	HX_("loadAndSwitchState",ac,5a,a7,a6),
	HX_("getNextState",a8,2c,a7,3a),
	HX_("initSongsManifest",9d,87,b0,e7),
	::String(null())
};

void LoadingState_obj::__register()
{
	LoadingState_obj _hx_dummy;
	LoadingState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.LoadingState",c1,f4,c4,7f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LoadingState_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LoadingState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LoadingState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LoadingState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LoadingState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LoadingState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LoadingState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LoadingState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LoadingState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_670a7524baf7a379_19_boot)
HXDLIN(  19)		MIN_TIME = ((Float)1.0);
            	}
}

} // end namespace states
