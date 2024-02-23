#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSound
#include <flixel/sound/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_hxcodec_flixel_ScaleType
#include <hxcodec/flixel/ScaleType.h>
#endif
#ifndef INCLUDED_hxcodec_flixel_VideoHandler
#include <hxcodec/flixel/VideoHandler.h>
#endif
#ifndef INCLUDED_hxcodec_openfl_VideoBitmap
#include <hxcodec/openfl/VideoBitmap.h>
#endif
#ifndef INCLUDED_hxcodec_vlc_VLCBitmap
#include <hxcodec/vlc/VLCBitmap.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Application
#include <openfl/display/Application.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a13bd488cf04d8fe_18_new,"hxcodec.flixel.VideoHandler","new",0x7616a48b,"hxcodec.flixel.VideoHandler.new","hxcodec/flixel/VideoHandler.hx",18,0x2b376725)
static const int _hx_array_data_3e190319_1[] = {
	(int)13,(int)32,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a13bd488cf04d8fe_55_onVLCOpening,"hxcodec.flixel.VideoHandler","onVLCOpening",0xd9d0e6df,"hxcodec.flixel.VideoHandler.onVLCOpening","hxcodec/flixel/VideoHandler.hx",55,0x2b376725)
HX_LOCAL_STACK_FRAME(_hx_pos_a13bd488cf04d8fe_70_onVLCEncounteredError,"hxcodec.flixel.VideoHandler","onVLCEncounteredError",0x97c3652f,"hxcodec.flixel.VideoHandler.onVLCEncounteredError","hxcodec/flixel/VideoHandler.hx",70,0x2b376725)
HX_LOCAL_STACK_FRAME(_hx_pos_a13bd488cf04d8fe_76_onVLCEndReached,"hxcodec.flixel.VideoHandler","onVLCEndReached",0xbc59ead0,"hxcodec.flixel.VideoHandler.onVLCEndReached","hxcodec/flixel/VideoHandler.hx",76,0x2b376725)
HX_LOCAL_STACK_FRAME(_hx_pos_a13bd488cf04d8fe_116_playVideo,"hxcodec.flixel.VideoHandler","playVideo",0x4d950852,"hxcodec.flixel.VideoHandler.playVideo","hxcodec/flixel/VideoHandler.hx",116,0x2b376725)
HX_LOCAL_STACK_FRAME(_hx_pos_a13bd488cf04d8fe_141_update,"hxcodec.flixel.VideoHandler","update",0xd42b5ebe,"hxcodec.flixel.VideoHandler.update","hxcodec/flixel/VideoHandler.hx",141,0x2b376725)
namespace hxcodec{
namespace flixel{

void VideoHandler_obj::__construct(::hx::Null< int >  __o_IndexModifier){
            		int IndexModifier = __o_IndexModifier.Default(0);
            	HX_STACKFRAME(&_hx_pos_a13bd488cf04d8fe_18_new)
HXLINE(  40)		this->_hx___pauseMusic = false;
HXLINE(  37)		this->finishCallback = null();
HXLINE(  36)		this->openingCallback = null();
HXLINE(  34)		this->useScaleBy = ::hxcodec::flixel::ScaleType_obj::GAME_dyn();
HXLINE(  33)		this->maintainAspectRatio = true;
HXLINE(  32)		this->canUseAutoResize = true;
HXLINE(  29)		this->canUseSound = true;
HXLINE(  25)		this->canSkip = true;
HXLINE(  21)		this->skipKeys = ::Array_obj< int >::fromData( _hx_array_data_3e190319_1,2);
HXLINE(  45)		super::__construct();
HXLINE(  47)		this->onOpening = this->onVLCOpening_dyn();
HXLINE(  48)		this->onEndReached = this->onVLCEndReached_dyn();
HXLINE(  49)		this->onEncounteredError = this->onVLCEncounteredError_dyn();
HXLINE(  51)		::flixel::FlxG_obj::addChildBelowMouse(::hx::ObjectPtr<OBJ_>(this),IndexModifier);
            	}

Dynamic VideoHandler_obj::__CreateEmpty() { return new VideoHandler_obj; }

void *VideoHandler_obj::_hx_vtable = 0;

Dynamic VideoHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VideoHandler_obj > _hx_result = new VideoHandler_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool VideoHandler_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x317b3ab1) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x058240d1) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x058240d1;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x317b3ab1;
		}
	} else {
		if (inClassId<=(int)0x5f06eb14) {
			return inClassId==(int)0x4cc42801 || inClassId==(int)0x5f06eb14;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void VideoHandler_obj::onVLCOpening(){
            	HX_STACKFRAME(&_hx_pos_a13bd488cf04d8fe_55_onVLCOpening)
HXLINE(  62)		int _hx_tmp;
HXDLIN(  62)		bool _hx_tmp1;
HXDLIN(  62)		if (!(::flixel::FlxG_obj::sound->muted)) {
HXLINE(  62)			_hx_tmp1 = !(this->canUseSound);
            		}
            		else {
HXLINE(  62)			_hx_tmp1 = true;
            		}
HXDLIN(  62)		if (_hx_tmp1) {
HXLINE(  62)			_hx_tmp = 0;
            		}
            		else {
HXLINE(  62)			_hx_tmp = 1;
            		}
HXDLIN(  62)		this->set_volume(::Std_obj::_hx_int((( (Float)(_hx_tmp) ) * (::flixel::FlxG_obj::sound->volume * ( (Float)(100) )))));
HXLINE(  65)		if (::hx::IsNotNull( this->openingCallback )) {
HXLINE(  66)			this->openingCallback();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoHandler_obj,onVLCOpening,(void))

void VideoHandler_obj::onVLCEncounteredError(::String msg){
            	HX_STACKFRAME(&_hx_pos_a13bd488cf04d8fe_70_onVLCEncounteredError)
HXLINE(  71)		::openfl::Lib_obj::get_application()->_hx___window->alert(msg,HX_("VLC Error!",ec,1e,8f,e9));
HXLINE(  72)		this->onVLCEndReached();
            	}


HX_DEFINE_DYNAMIC_FUNC1(VideoHandler_obj,onVLCEncounteredError,(void))

void VideoHandler_obj::onVLCEndReached(){
            	HX_STACKFRAME(&_hx_pos_a13bd488cf04d8fe_76_onVLCEndReached)
HXLINE(  82)		bool _hx_tmp;
HXDLIN(  82)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE(  82)			_hx_tmp = this->_hx___pauseMusic;
            		}
            		else {
HXLINE(  82)			_hx_tmp = false;
            		}
HXDLIN(  82)		if (_hx_tmp) {
HXLINE(  83)			::flixel::FlxG_obj::sound->music->resume();
            		}
HXLINE(  86)		if (::openfl::Lib_obj::get_current()->stage->hasEventListener(HX_("enterFrame",f5,03,50,02))) {
HXLINE(  87)			::openfl::Lib_obj::get_current()->stage->removeEventListener(HX_("enterFrame",f5,03,50,02),this->update_dyn(),null());
            		}
HXLINE(  89)		if (::flixel::FlxG_obj::autoPause) {
HXLINE(  91)			if (::flixel::FlxG_obj::signals->focusGained->has(this->resume_dyn())) {
HXLINE(  92)				::flixel::FlxG_obj::signals->focusGained->remove(this->resume_dyn());
            			}
HXLINE(  94)			if (::flixel::FlxG_obj::signals->focusLost->has(this->pause_dyn())) {
HXLINE(  95)				::flixel::FlxG_obj::signals->focusLost->remove(this->pause_dyn());
            			}
            		}
HXLINE(  98)		this->dispose();
HXLINE( 100)		if (::flixel::FlxG_obj::game->contains(::hx::ObjectPtr<OBJ_>(this))) {
HXLINE( 100)			::flixel::FlxG_obj::game->removeChild(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 102)		if (::hx::IsNotNull( this->finishCallback )) {
HXLINE( 103)			this->finishCallback();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoHandler_obj,onVLCEndReached,(void))

int VideoHandler_obj::playVideo(::String Path,::hx::Null< bool >  __o_Loop,::hx::Null< bool >  __o_PauseMusic){
            		bool Loop = __o_Loop.Default(false);
            		bool PauseMusic = __o_PauseMusic.Default(false);
            	HX_STACKFRAME(&_hx_pos_a13bd488cf04d8fe_116_playVideo)
HXLINE( 118)		this->_hx___pauseMusic = PauseMusic;
HXLINE( 120)		bool _hx_tmp;
HXDLIN( 120)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 120)			_hx_tmp = PauseMusic;
            		}
            		else {
HXLINE( 120)			_hx_tmp = false;
            		}
HXDLIN( 120)		if (_hx_tmp) {
HXLINE( 121)			::flixel::FlxG_obj::sound->music->pause();
            		}
HXLINE( 124)		::openfl::Lib_obj::get_current()->stage->addEventListener(HX_("enterFrame",f5,03,50,02),this->update_dyn(),null(),null(),null());
HXLINE( 126)		if (::flixel::FlxG_obj::autoPause) {
HXLINE( 128)			::flixel::FlxG_obj::signals->focusGained->add(this->resume_dyn());
HXLINE( 129)			::flixel::FlxG_obj::signals->focusLost->add(this->pause_dyn());
            		}
HXLINE( 134)		if (::sys::FileSystem_obj::exists((::Sys_obj::getCwd() + Path))) {
HXLINE( 135)			return this->play((::Sys_obj::getCwd() + Path),Loop);
            		}
            		else {
HXLINE( 137)			return this->play(Path,Loop);
            		}
HXLINE( 134)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC3(VideoHandler_obj,playVideo,return )

void VideoHandler_obj::update( ::openfl::events::Event E){
            	HX_STACKFRAME(&_hx_pos_a13bd488cf04d8fe_141_update)
HXLINE( 143)		bool _hx_tmp;
HXDLIN( 143)		bool _hx_tmp1;
HXDLIN( 143)		if (this->canSkip) {
HXLINE( 143)			_hx_tmp1 = ::flixel::FlxG_obj::keys->checkKeyArrayState(this->skipKeys,2);
            		}
            		else {
HXLINE( 143)			_hx_tmp1 = false;
            		}
HXDLIN( 143)		if (_hx_tmp1) {
HXLINE( 143)			_hx_tmp = this->get_isPlaying();
            		}
            		else {
HXLINE( 143)			_hx_tmp = false;
            		}
HXDLIN( 143)		if (_hx_tmp) {
HXLINE( 144)			this->onVLCEndReached();
            		}
HXLINE( 148)		{
HXLINE( 148)			int _g = 0;
HXDLIN( 148)			::Array< ::Dynamic> _g1 = ::flixel::FlxG_obj::touches->list;
HXDLIN( 148)			while((_g < _g1->length)){
HXLINE( 148)				 ::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast<  ::flixel::input::touch::FlxTouch >();
HXDLIN( 148)				_g = (_g + 1);
HXLINE( 149)				bool _hx_tmp;
HXDLIN( 149)				bool _hx_tmp1;
HXDLIN( 149)				if (this->canSkip) {
HXLINE( 149)					_hx_tmp1 = (touch->input->current == 2);
            				}
            				else {
HXLINE( 149)					_hx_tmp1 = false;
            				}
HXDLIN( 149)				if (_hx_tmp1) {
HXLINE( 149)					_hx_tmp = this->get_isPlaying();
            				}
            				else {
HXLINE( 149)					_hx_tmp = false;
            				}
HXDLIN( 149)				if (_hx_tmp) {
HXLINE( 150)					this->onVLCEndReached();
            				}
            			}
            		}
HXLINE( 153)		if (this->canUseAutoResize) {
HXLINE( 155)			bool _hx_tmp;
HXDLIN( 155)			if (!(this->maintainAspectRatio)) {
HXLINE( 155)				if ((this->videoWidth > 0)) {
HXLINE( 155)					_hx_tmp = (this->videoHeight > 0);
            				}
            				else {
HXLINE( 155)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE( 155)				_hx_tmp = false;
            			}
HXDLIN( 155)			if (_hx_tmp) {
HXLINE( 157)				this->set_width(( (Float)(::openfl::Lib_obj::get_current()->stage->stageWidth) ));
HXLINE( 158)				this->set_height(( (Float)(::openfl::Lib_obj::get_current()->stage->stageHeight) ));
            			}
            			else {
HXLINE( 160)				bool _hx_tmp;
HXDLIN( 160)				if ((this->videoWidth > 0)) {
HXLINE( 160)					_hx_tmp = (this->videoHeight > 0);
            				}
            				else {
HXLINE( 160)					_hx_tmp = false;
            				}
HXDLIN( 160)				if (_hx_tmp) {
HXLINE( 162)					Float aspectRatio;
HXDLIN( 162)					if (::hx::IsPointerEq( this->useScaleBy,::hxcodec::flixel::ScaleType_obj::GAME_dyn() )) {
HXLINE( 162)						aspectRatio = (( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(::flixel::FlxG_obj::height) ));
            					}
            					else {
HXLINE( 162)						aspectRatio = (( (Float)(this->videoWidth) ) / ( (Float)(this->videoHeight) ));
            					}
HXLINE( 164)					int _hx_tmp = ::openfl::Lib_obj::get_current()->stage->stageWidth;
HXDLIN( 164)					if (((( (Float)(_hx_tmp) ) / ( (Float)(::openfl::Lib_obj::get_current()->stage->stageHeight) )) > aspectRatio)) {
HXLINE( 167)						this->set_width((( (Float)(::openfl::Lib_obj::get_current()->stage->stageHeight) ) * aspectRatio));
HXLINE( 168)						this->set_height(( (Float)(::openfl::Lib_obj::get_current()->stage->stageHeight) ));
            					}
            					else {
HXLINE( 173)						this->set_width(( (Float)(::openfl::Lib_obj::get_current()->stage->stageWidth) ));
HXLINE( 174)						this->set_height((( (Float)(::openfl::Lib_obj::get_current()->stage->stageWidth) ) * (( (Float)(1) ) / aspectRatio)));
            					}
            				}
            			}
            		}
HXLINE( 180)		int _hx_tmp2;
HXDLIN( 180)		bool _hx_tmp3;
HXDLIN( 180)		if (!(::flixel::FlxG_obj::sound->muted)) {
HXLINE( 180)			_hx_tmp3 = !(this->canUseSound);
            		}
            		else {
HXLINE( 180)			_hx_tmp3 = true;
            		}
HXDLIN( 180)		if (_hx_tmp3) {
HXLINE( 180)			_hx_tmp2 = 0;
            		}
            		else {
HXLINE( 180)			_hx_tmp2 = 1;
            		}
HXDLIN( 180)		this->set_volume(::Std_obj::_hx_int((( (Float)(_hx_tmp2) ) * (::flixel::FlxG_obj::sound->volume * ( (Float)(100) )))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(VideoHandler_obj,update,(void))


::hx::ObjectPtr< VideoHandler_obj > VideoHandler_obj::__new(::hx::Null< int >  __o_IndexModifier) {
	::hx::ObjectPtr< VideoHandler_obj > __this = new VideoHandler_obj();
	__this->__construct(__o_IndexModifier);
	return __this;
}

::hx::ObjectPtr< VideoHandler_obj > VideoHandler_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_IndexModifier) {
	VideoHandler_obj *__this = (VideoHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VideoHandler_obj), true, "hxcodec.flixel.VideoHandler"));
	*(void **)__this = VideoHandler_obj::_hx_vtable;
	__this->__construct(__o_IndexModifier);
	return __this;
}

VideoHandler_obj::VideoHandler_obj()
{
}

void VideoHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VideoHandler);
	HX_MARK_MEMBER_NAME(skipKeys,"skipKeys");
	HX_MARK_MEMBER_NAME(canSkip,"canSkip");
	HX_MARK_MEMBER_NAME(canUseSound,"canUseSound");
	HX_MARK_MEMBER_NAME(canUseAutoResize,"canUseAutoResize");
	HX_MARK_MEMBER_NAME(maintainAspectRatio,"maintainAspectRatio");
	HX_MARK_MEMBER_NAME(useScaleBy,"useScaleBy");
	HX_MARK_MEMBER_NAME(openingCallback,"openingCallback");
	HX_MARK_MEMBER_NAME(finishCallback,"finishCallback");
	HX_MARK_MEMBER_NAME(_hx___pauseMusic,"__pauseMusic");
	 ::hxcodec::vlc::VLCBitmap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VideoHandler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(skipKeys,"skipKeys");
	HX_VISIT_MEMBER_NAME(canSkip,"canSkip");
	HX_VISIT_MEMBER_NAME(canUseSound,"canUseSound");
	HX_VISIT_MEMBER_NAME(canUseAutoResize,"canUseAutoResize");
	HX_VISIT_MEMBER_NAME(maintainAspectRatio,"maintainAspectRatio");
	HX_VISIT_MEMBER_NAME(useScaleBy,"useScaleBy");
	HX_VISIT_MEMBER_NAME(openingCallback,"openingCallback");
	HX_VISIT_MEMBER_NAME(finishCallback,"finishCallback");
	HX_VISIT_MEMBER_NAME(_hx___pauseMusic,"__pauseMusic");
	 ::hxcodec::vlc::VLCBitmap_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val VideoHandler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"canSkip") ) { return ::hx::Val( canSkip ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"skipKeys") ) { return ::hx::Val( skipKeys ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playVideo") ) { return ::hx::Val( playVideo_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"useScaleBy") ) { return ::hx::Val( useScaleBy ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"canUseSound") ) { return ::hx::Val( canUseSound ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__pauseMusic") ) { return ::hx::Val( _hx___pauseMusic ); }
		if (HX_FIELD_EQ(inName,"onVLCOpening") ) { return ::hx::Val( onVLCOpening_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { return ::hx::Val( finishCallback ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"openingCallback") ) { return ::hx::Val( openingCallback ); }
		if (HX_FIELD_EQ(inName,"onVLCEndReached") ) { return ::hx::Val( onVLCEndReached_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"canUseAutoResize") ) { return ::hx::Val( canUseAutoResize ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"maintainAspectRatio") ) { return ::hx::Val( maintainAspectRatio ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"onVLCEncounteredError") ) { return ::hx::Val( onVLCEncounteredError_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VideoHandler_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"canSkip") ) { canSkip=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"skipKeys") ) { skipKeys=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"useScaleBy") ) { useScaleBy=inValue.Cast<  ::hxcodec::flixel::ScaleType >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"canUseSound") ) { canUseSound=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__pauseMusic") ) { _hx___pauseMusic=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { finishCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"openingCallback") ) { openingCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"canUseAutoResize") ) { canUseAutoResize=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"maintainAspectRatio") ) { maintainAspectRatio=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VideoHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("skipKeys",13,d0,5b,bd));
	outFields->push(HX_("canSkip",af,fe,ac,6a));
	outFields->push(HX_("canUseSound",38,af,df,77));
	outFields->push(HX_("canUseAutoResize",ba,eb,10,16));
	outFields->push(HX_("maintainAspectRatio",88,f6,fd,6e));
	outFields->push(HX_("useScaleBy",7a,61,ba,67));
	outFields->push(HX_("__pauseMusic",ef,e8,66,1e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VideoHandler_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(VideoHandler_obj,skipKeys),HX_("skipKeys",13,d0,5b,bd)},
	{::hx::fsBool,(int)offsetof(VideoHandler_obj,canSkip),HX_("canSkip",af,fe,ac,6a)},
	{::hx::fsBool,(int)offsetof(VideoHandler_obj,canUseSound),HX_("canUseSound",38,af,df,77)},
	{::hx::fsBool,(int)offsetof(VideoHandler_obj,canUseAutoResize),HX_("canUseAutoResize",ba,eb,10,16)},
	{::hx::fsBool,(int)offsetof(VideoHandler_obj,maintainAspectRatio),HX_("maintainAspectRatio",88,f6,fd,6e)},
	{::hx::fsObject /*  ::hxcodec::flixel::ScaleType */ ,(int)offsetof(VideoHandler_obj,useScaleBy),HX_("useScaleBy",7a,61,ba,67)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VideoHandler_obj,openingCallback),HX_("openingCallback",3d,71,34,3d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VideoHandler_obj,finishCallback),HX_("finishCallback",38,a1,bc,b4)},
	{::hx::fsBool,(int)offsetof(VideoHandler_obj,_hx___pauseMusic),HX_("__pauseMusic",ef,e8,66,1e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VideoHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String VideoHandler_obj_sMemberFields[] = {
	HX_("skipKeys",13,d0,5b,bd),
	HX_("canSkip",af,fe,ac,6a),
	HX_("canUseSound",38,af,df,77),
	HX_("canUseAutoResize",ba,eb,10,16),
	HX_("maintainAspectRatio",88,f6,fd,6e),
	HX_("useScaleBy",7a,61,ba,67),
	HX_("openingCallback",3d,71,34,3d),
	HX_("finishCallback",38,a1,bc,b4),
	HX_("__pauseMusic",ef,e8,66,1e),
	HX_("onVLCOpening",6a,18,0c,20),
	HX_("onVLCEncounteredError",44,2a,89,db),
	HX_("onVLCEndReached",25,02,54,8c),
	HX_("playVideo",e7,41,e0,57),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class VideoHandler_obj::__mClass;

void VideoHandler_obj::__register()
{
	VideoHandler_obj _hx_dummy;
	VideoHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxcodec.flixel.VideoHandler",19,03,19,3e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VideoHandler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VideoHandler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VideoHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VideoHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxcodec
} // end namespace flixel
