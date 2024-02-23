#include <hxcpp.h>

#ifndef INCLUDED_5f5af744d9ff5693
#define INCLUDED_5f5af744d9ff5693
#include "cpp/Pointer.h"
#endif
#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_f6e4a6bd16e728f7
#define INCLUDED_f6e4a6bd16e728f7
#include "vlc/vlc.h"
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_hxcodec_vlc_VLCBitmap
#include <hxcodec/vlc/VLCBitmap.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3158faa035054fd5_88_new,"hxcodec.vlc.VLCBitmap","new",0x6e892e65,"hxcodec.vlc.VLCBitmap.new","hxcodec/vlc/VLCBitmap.hx",88,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_141_play,"hxcodec.vlc.VLCBitmap","play",0x4ad7144f,"hxcodec.vlc.VLCBitmap.play","hxcodec/vlc/VLCBitmap.hx",141,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_201_stop,"hxcodec.vlc.VLCBitmap","stop",0x4cd8d65d,"hxcodec.vlc.VLCBitmap.stop","hxcodec/vlc/VLCBitmap.hx",201,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_207_pause,"hxcodec.vlc.VLCBitmap","pause",0x2a24803b,"hxcodec.vlc.VLCBitmap.pause","hxcodec/vlc/VLCBitmap.hx",207,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_213_resume,"hxcodec.vlc.VLCBitmap","resume",0xcecbdcc8,"hxcodec.vlc.VLCBitmap.resume","hxcodec/vlc/VLCBitmap.hx",213,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_218_dispose,"hxcodec.vlc.VLCBitmap","dispose",0x7389c524,"hxcodec.vlc.VLCBitmap.dispose","hxcodec/vlc/VLCBitmap.hx",218,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_262_onEnterFrame,"hxcodec.vlc.VLCBitmap","onEnterFrame",0x9736df4f,"hxcodec.vlc.VLCBitmap.onEnterFrame","hxcodec/vlc/VLCBitmap.hx",262,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_274_render,"hxcodec.vlc.VLCBitmap","render",0xcb70de71,"hxcodec.vlc.VLCBitmap.render","hxcodec/vlc/VLCBitmap.hx",274,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_307_checkFlags,"hxcodec.vlc.VLCBitmap","checkFlags",0xa8cac9fa,"hxcodec.vlc.VLCBitmap.checkFlags","hxcodec/vlc/VLCBitmap.hx",307,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_367_get_time,"hxcodec.vlc.VLCBitmap","get_time",0x4a163771,"hxcodec.vlc.VLCBitmap.get_time","hxcodec/vlc/VLCBitmap.hx",367,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_381_set_time,"hxcodec.vlc.VLCBitmap","set_time",0xf87390e5,"hxcodec.vlc.VLCBitmap.set_time","hxcodec/vlc/VLCBitmap.hx",381,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_389_get_position,"hxcodec.vlc.VLCBitmap","get_position",0x3cb78e0d,"hxcodec.vlc.VLCBitmap.get_position","hxcodec/vlc/VLCBitmap.hx",389,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_397_set_position,"hxcodec.vlc.VLCBitmap","set_position",0x51b0b181,"hxcodec.vlc.VLCBitmap.set_position","hxcodec/vlc/VLCBitmap.hx",397,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_405_get_length,"hxcodec.vlc.VLCBitmap","get_length",0x25dda14a,"hxcodec.vlc.VLCBitmap.get_length","hxcodec/vlc/VLCBitmap.hx",405,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_419_get_duration,"hxcodec.vlc.VLCBitmap","get_duration",0x864afcb8,"hxcodec.vlc.VLCBitmap.get_duration","hxcodec/vlc/VLCBitmap.hx",419,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_433_get_mrl,"hxcodec.vlc.VLCBitmap","get_mrl",0xdf052683,"hxcodec.vlc.VLCBitmap.get_mrl","hxcodec/vlc/VLCBitmap.hx",433,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_441_get_volume,"hxcodec.vlc.VLCBitmap","get_volume",0xe629363e,"hxcodec.vlc.VLCBitmap.get_volume","hxcodec/vlc/VLCBitmap.hx",441,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_449_set_volume,"hxcodec.vlc.VLCBitmap","set_volume",0xe9a6d4b2,"hxcodec.vlc.VLCBitmap.set_volume","hxcodec/vlc/VLCBitmap.hx",449,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_457_get_delay,"hxcodec.vlc.VLCBitmap","get_delay",0x504b639f,"hxcodec.vlc.VLCBitmap.get_delay","hxcodec/vlc/VLCBitmap.hx",457,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_471_set_delay,"hxcodec.vlc.VLCBitmap","set_delay",0x339c4fab,"hxcodec.vlc.VLCBitmap.set_delay","hxcodec/vlc/VLCBitmap.hx",471,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_479_get_rate,"hxcodec.vlc.VLCBitmap","get_rate",0x48bdbe44,"hxcodec.vlc.VLCBitmap.get_rate","hxcodec/vlc/VLCBitmap.hx",479,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_487_set_rate,"hxcodec.vlc.VLCBitmap","set_rate",0xf71b17b8,"hxcodec.vlc.VLCBitmap.set_rate","hxcodec/vlc/VLCBitmap.hx",487,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_495_get_fps,"hxcodec.vlc.VLCBitmap","get_fps",0xdeffd505,"hxcodec.vlc.VLCBitmap.get_fps","hxcodec/vlc/VLCBitmap.hx",495,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_503_get_isPlaying,"hxcodec.vlc.VLCBitmap","get_isPlaying",0xa1a956c0,"hxcodec.vlc.VLCBitmap.get_isPlaying","hxcodec/vlc/VLCBitmap.hx",503,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_511_get_isSeekable,"hxcodec.vlc.VLCBitmap","get_isSeekable",0xdf822f80,"hxcodec.vlc.VLCBitmap.get_isSeekable","hxcodec/vlc/VLCBitmap.hx",511,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_519_get_canPause,"hxcodec.vlc.VLCBitmap","get_canPause",0x9da8062a,"hxcodec.vlc.VLCBitmap.get_canPause","hxcodec/vlc/VLCBitmap.hx",519,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_527_set_height,"hxcodec.vlc.VLCBitmap","set_height",0x8c9fb2bf,"hxcodec.vlc.VLCBitmap.set_height","hxcodec/vlc/VLCBitmap.hx",527,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_539_set_width,"hxcodec.vlc.VLCBitmap","set_width",0x26d82e2e,"hxcodec.vlc.VLCBitmap.set_width","hxcodec/vlc/VLCBitmap.hx",539,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_551_set_bitmapData,"hxcodec.vlc.VLCBitmap","set_bitmapData",0x60beac91,"hxcodec.vlc.VLCBitmap.set_bitmapData","hxcodec/vlc/VLCBitmap.hx",551,0xff27b42d)
namespace hxcodec{
namespace vlc{


static unsigned format_setup(void **data, char *chroma, unsigned *width, unsigned *height, unsigned *pitches, unsigned *lines)
{
	VLCBitmap_obj *self = (VLCBitmap_obj*)(*data);

	unsigned _w = (*width);
	unsigned _h = (*height);

	(*pitches) = _w * 4;
	(*lines) = _h;

	memcpy(chroma, "RV32", 4);

	self->videoWidth = _w;
	self->videoHeight = _h;

	if (self->pixels != nullptr)
		delete self->pixels;

	self->pixels = new unsigned char[_w *_h * 4];
	return 1;
}

static void *lock(void *data, void **p_pixels)
{
	VLCBitmap_obj *self = (VLCBitmap_obj*) data;
	*p_pixels = self->pixels;
	return nullptr; /* picture identifier, not needed here */
}

static void callbacks(const libvlc_event_t *event, void *data)
{
	VLCBitmap_obj *self = (VLCBitmap_obj*) data;

	switch (event->type)
	{
		case libvlc_MediaPlayerOpening:
			self->flags[0] = true;
			break;
		case libvlc_MediaPlayerPlaying:
			self->flags[1] = true;
			break;
		case libvlc_MediaPlayerPaused:
			self->flags[2] = true;
			break;
		case libvlc_MediaPlayerStopped:
			self->flags[3] = true;
			break;
		case libvlc_MediaPlayerEndReached:
			self->flags[4] = true;
			break;
		case libvlc_MediaPlayerEncounteredError:
			self->flags[5] = true;
			break;
		case libvlc_MediaPlayerForward:
			self->flags[6] = true;
			break;
		case libvlc_MediaPlayerBackward:
			self->flags[7] = true;
			break;
	}
}
void VLCBitmap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_88_new)
HXLINE( 259)		this->currentTime = ((Float)0);
HXLINE( 120)		this->buffer = ::Array_obj< unsigned char >::__new(0);
HXLINE( 118)		this->flags = ::Array_obj< bool >::__new(0);
HXLINE(  92)		this->videoHeight = ( (unsigned int)(0) );
HXLINE(  91)		this->videoWidth = ( (unsigned int)(0) );
HXLINE( 131)		super::__construct(this->get_bitmapData(),1,true);
HXLINE( 133)		{
HXLINE( 134)			this->flags[0] = false;
HXDLIN( 134)			this->flags[1] = false;
HXDLIN( 134)			this->flags[2] = false;
HXDLIN( 134)			this->flags[3] = false;
HXDLIN( 134)			this->flags[4] = false;
HXDLIN( 134)			this->flags[5] = false;
HXDLIN( 134)			this->flags[6] = false;
            		}
HXLINE( 136)		this->instance = libvlc_new(0,null());
            	}

Dynamic VLCBitmap_obj::__CreateEmpty() { return new VLCBitmap_obj; }

void *VLCBitmap_obj::_hx_vtable = 0;

Dynamic VLCBitmap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VLCBitmap_obj > _hx_result = new VLCBitmap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VLCBitmap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x317b3ab1) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x317b3ab1;
		}
	} else {
		return inClassId==(int)0x4cc42801 || inClassId==(int)0x6b353933;
	}
}

int VLCBitmap_obj::play(::String location,::hx::Null< bool >  __o_loop){
            		bool loop = __o_loop.Default(false);
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_141_play)
HXLINE( 142)		bool _hx_tmp;
HXDLIN( 142)		if (!(::StringTools_obj::startsWith(location,HX_("https://",cf,b4,ae,3e)))) {
HXLINE( 142)			_hx_tmp = ::StringTools_obj::startsWith(location,HX_("file://",de,92,3b,ff));
            		}
            		else {
HXLINE( 142)			_hx_tmp = true;
            		}
HXDLIN( 142)		if (_hx_tmp) {
HXLINE( 148)			const char* this1 = location.utf8_str();
HXDLIN( 148)			this->mediaItem = libvlc_media_new_location(this->instance,this1);
            		}
            		else {
HXLINE( 152)			::String path = ::haxe::io::Path_obj::normalize(location).split(HX_("/",2f,00,00,00))->join(HX_("\\",5c,00,00,00));
HXLINE( 158)			const char* this1 = path.utf8_str();
HXDLIN( 158)			this->mediaItem = libvlc_media_new_path(this->instance,this1);
            		}
HXLINE( 161)		this->mediaPlayer = libvlc_media_player_new_from_media(this->mediaItem);
HXLINE( 163)		libvlc_media_parse(this->mediaItem);
HXLINE( 164)		const char* _hx_tmp1;
HXDLIN( 164)		if (loop) {
HXLINE( 164)			const char* this1 = HX_("input-repeat=65535",d9,23,75,20).utf8_str();
HXDLIN( 164)			_hx_tmp1 = this1;
            		}
            		else {
HXLINE( 164)			const char* this1 = HX_("input-repeat=0",51,79,b7,c1).utf8_str();
HXDLIN( 164)			_hx_tmp1 = this1;
            		}
HXDLIN( 164)		libvlc_media_add_option(this->mediaItem,_hx_tmp1);
HXLINE( 165)		libvlc_media_release(this->mediaItem);
HXLINE( 167)		if (::hx::IsNotNull( this->texture )) {
HXLINE( 169)			this->texture->dispose();
HXLINE( 170)			this->texture = null();
            		}
HXLINE( 173)		if (::hx::IsNotNull( this->get_bitmapData() )) {
HXLINE( 175)			this->get_bitmapData()->dispose();
HXLINE( 176)			this->set_bitmapData(null());
            		}
HXLINE( 179)		bool _hx_tmp2;
HXDLIN( 179)		if (::hx::IsNotNull( this->buffer )) {
HXLINE( 179)			_hx_tmp2 = (this->buffer->length > 0);
            		}
            		else {
HXLINE( 179)			_hx_tmp2 = false;
            		}
HXDLIN( 179)		if (_hx_tmp2) {
HXLINE( 180)			this->buffer = ::Array_obj< unsigned char >::__new(0);
            		}
HXLINE( 182)		 libvlc_media_player_t* _hx_tmp3 = this->mediaPlayer;
HXDLIN( 182)		libvlc_video_set_format_callbacks(_hx_tmp3,format_setup,null());
HXLINE( 183)		::cpp::Pointer< void > tmp = this;
HXDLIN( 183)		 libvlc_media_player_t* _hx_tmp4 = this->mediaPlayer;
HXDLIN( 183)		libvlc_video_set_callbacks(_hx_tmp4,lock,null(),null(),tmp);
HXLINE( 185)		this->eventManager = libvlc_media_player_event_manager(this->mediaPlayer);
HXLINE( 187)		::cpp::Pointer< void > tmp1 = this;
HXDLIN( 187)		 libvlc_event_manager_t* _hx_tmp5 = this->eventManager;
HXDLIN( 187)		libvlc_event_attach(_hx_tmp5,258,callbacks,tmp1);
HXLINE( 188)		::cpp::Pointer< void > tmp2 = this;
HXDLIN( 188)		 libvlc_event_manager_t* _hx_tmp6 = this->eventManager;
HXDLIN( 188)		libvlc_event_attach(_hx_tmp6,260,callbacks,tmp2);
HXLINE( 189)		::cpp::Pointer< void > tmp3 = this;
HXDLIN( 189)		 libvlc_event_manager_t* _hx_tmp7 = this->eventManager;
HXDLIN( 189)		libvlc_event_attach(_hx_tmp7,261,callbacks,tmp3);
HXLINE( 190)		::cpp::Pointer< void > tmp4 = this;
HXDLIN( 190)		 libvlc_event_manager_t* _hx_tmp8 = this->eventManager;
HXDLIN( 190)		libvlc_event_attach(_hx_tmp8,262,callbacks,tmp4);
HXLINE( 191)		::cpp::Pointer< void > tmp5 = this;
HXDLIN( 191)		 libvlc_event_manager_t* _hx_tmp9 = this->eventManager;
HXDLIN( 191)		libvlc_event_attach(_hx_tmp9,265,callbacks,tmp5);
HXLINE( 192)		::cpp::Pointer< void > tmp6 = this;
HXDLIN( 192)		 libvlc_event_manager_t* _hx_tmp10 = this->eventManager;
HXDLIN( 192)		libvlc_event_attach(_hx_tmp10,266,callbacks,tmp6);
HXLINE( 193)		::cpp::Pointer< void > tmp7 = this;
HXDLIN( 193)		 libvlc_event_manager_t* _hx_tmp11 = this->eventManager;
HXDLIN( 193)		libvlc_event_attach(_hx_tmp11,263,callbacks,tmp7);
HXLINE( 194)		::cpp::Pointer< void > tmp8 = this;
HXDLIN( 194)		 libvlc_event_manager_t* _hx_tmp12 = this->eventManager;
HXDLIN( 194)		libvlc_event_attach(_hx_tmp12,264,callbacks,tmp8);
HXLINE( 196)		return libvlc_media_player_play(this->mediaPlayer);
            	}


HX_DEFINE_DYNAMIC_FUNC2(VLCBitmap_obj,play,return )

void VLCBitmap_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_201_stop)
HXDLIN( 201)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 202)			libvlc_media_player_stop(this->mediaPlayer);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,stop,(void))

void VLCBitmap_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_207_pause)
HXDLIN( 207)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 208)			libvlc_media_player_set_pause(this->mediaPlayer,1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,pause,(void))

void VLCBitmap_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_213_resume)
HXDLIN( 213)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 214)			libvlc_media_player_set_pause(this->mediaPlayer,0);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,resume,(void))

void VLCBitmap_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_218_dispose)
HXLINE( 223)		if (this->get_isPlaying()) {
HXLINE( 224)			this->stop();
            		}
HXLINE( 226)		if (this->stage->hasEventListener(HX_("enterFrame",f5,03,50,02))) {
HXLINE( 227)			this->stage->removeEventListener(HX_("enterFrame",f5,03,50,02),this->onEnterFrame_dyn(),null());
            		}
HXLINE( 229)		if (::hx::IsNotNull( this->texture )) {
HXLINE( 231)			this->texture->dispose();
HXLINE( 232)			this->texture = null();
            		}
HXLINE( 235)		if (::hx::IsNotNull( this->get_bitmapData() )) {
HXLINE( 237)			this->get_bitmapData()->dispose();
HXLINE( 238)			this->set_bitmapData(null());
            		}
HXLINE( 241)		bool _hx_tmp;
HXDLIN( 241)		if (::hx::IsNotNull( this->buffer )) {
HXLINE( 241)			_hx_tmp = (this->buffer->length > 0);
            		}
            		else {
HXLINE( 241)			_hx_tmp = false;
            		}
HXDLIN( 241)		if (_hx_tmp) {
HXLINE( 242)			this->buffer = ::Array_obj< unsigned char >::__new(0);
            		}
HXLINE( 244)		this->onOpening = null();
HXLINE( 245)		this->onPlaying = null();
HXLINE( 246)		this->onStopped = null();
HXLINE( 247)		this->onPaused = null();
HXLINE( 248)		this->onEndReached = null();
HXLINE( 249)		this->onEncounteredError = null();
HXLINE( 250)		this->onForward = null();
HXLINE( 251)		this->onBackward = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,dispose,(void))

void VLCBitmap_obj::onEnterFrame( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_262_onEnterFrame)
HXLINE( 263)		this->checkFlags();
HXLINE( 265)		bool _hx_tmp;
HXDLIN( 265)		bool _hx_tmp1;
HXDLIN( 265)		if (this->get_isPlaying()) {
HXLINE( 265)			if ((this->videoWidth > 0)) {
HXLINE( 265)				_hx_tmp1 = (this->videoHeight > 0);
            			}
            			else {
HXLINE( 265)				_hx_tmp1 = false;
            			}
            		}
            		else {
HXLINE( 265)			_hx_tmp1 = false;
            		}
HXDLIN( 265)		if (_hx_tmp1) {
HXLINE( 265)			_hx_tmp = ::hx::IsNotNull( this->pixels );
            		}
            		else {
HXLINE( 265)			_hx_tmp = false;
            		}
HXDLIN( 265)		if (_hx_tmp) {
HXLINE( 267)			int time = ::openfl::Lib_obj::getTimer();
HXLINE( 268)			int elements = ( (int)(((this->videoWidth * this->videoHeight) * ( (unsigned int)(4) ))) );
HXLINE( 269)			this->render(::Math_obj::abs((( (Float)(time) ) - this->currentTime)),elements);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(VLCBitmap_obj,onEnterFrame,(void))

void VLCBitmap_obj::render(Float deltaTime,int elementsCount){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_274_render)
HXLINE( 276)		if (::hx::IsNull( this->texture )) {
HXLINE( 277)			this->texture = ::openfl::Lib_obj::get_current()->stage->context3D->createRectangleTexture(( (int)(this->videoWidth) ),( (int)(this->videoHeight) ),1,true);
            		}
HXLINE( 280)		bool _hx_tmp;
HXDLIN( 280)		if (::hx::IsNull( this->get_bitmapData() )) {
HXLINE( 280)			_hx_tmp = ::hx::IsNotNull( this->texture );
            		}
            		else {
HXLINE( 280)			_hx_tmp = false;
            		}
HXDLIN( 280)		if (_hx_tmp) {
HXLINE( 281)			this->set_bitmapData(::openfl::display::BitmapData_obj::fromTexture(this->texture));
            		}
HXLINE( 283)		Float _hx_tmp1 = this->get_fps();
HXDLIN( 283)		if ((deltaTime > (( (Float)(1000) ) / (_hx_tmp1 * this->get_rate())))) {
HXLINE( 285)			this->currentTime = deltaTime;
HXLINE( 287)			::cpp::Pointer< unsigned char > tmp = cpp::Pointer_obj::fromRaw(this->pixels);
HXDLIN( 287)			this->buffer->setUnmanagedData(tmp,elementsCount);
HXLINE( 289)			bool _hx_tmp;
HXDLIN( 289)			if (::hx::IsNotNull( this->texture )) {
HXLINE( 289)				if (::hx::IsNotNull( this->buffer )) {
HXLINE( 289)					_hx_tmp = (this->buffer->length > 0);
            				}
            				else {
HXLINE( 289)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE( 289)				_hx_tmp = false;
            			}
HXDLIN( 289)			if (_hx_tmp) {
HXLINE( 291)				 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofData(this->buffer);
HXLINE( 292)				if ((bytes->length >= elementsCount)) {
HXLINE( 294)					 ::openfl::display3D::textures::RectangleTexture _hx_tmp = this->texture;
HXDLIN( 294)					_hx_tmp->uploadFromByteArray(::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(bytes),0);
HXLINE( 295)					this->set_width((this->get_width() + 1));
HXLINE( 296)					this->set_width((this->get_width() - ( (Float)(1) )));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(VLCBitmap_obj,render,(void))

void VLCBitmap_obj::checkFlags(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_307_checkFlags)
HXLINE( 308)		if (this->flags->__get(0)) {
HXLINE( 310)			this->flags[0] = false;
HXLINE( 311)			if (::hx::IsNotNull( this->onOpening )) {
HXLINE( 312)				this->onOpening();
            			}
            		}
HXLINE( 315)		if (this->flags->__get(1)) {
HXLINE( 317)			this->flags[1] = false;
HXLINE( 318)			if (::hx::IsNotNull( this->onPlaying )) {
HXLINE( 319)				this->onPlaying();
            			}
            		}
HXLINE( 322)		if (this->flags->__get(2)) {
HXLINE( 324)			this->flags[2] = false;
HXLINE( 325)			if (::hx::IsNotNull( this->onPaused )) {
HXLINE( 326)				this->onPaused();
            			}
            		}
HXLINE( 329)		if (this->flags->__get(3)) {
HXLINE( 331)			this->flags[3] = false;
HXLINE( 332)			if (::hx::IsNotNull( this->onStopped )) {
HXLINE( 333)				this->onStopped();
            			}
            		}
HXLINE( 336)		if (this->flags->__get(4)) {
HXLINE( 338)			this->flags[4] = false;
HXLINE( 339)			if (::hx::IsNotNull( this->onEndReached )) {
HXLINE( 340)				this->onEndReached();
            			}
            		}
HXLINE( 343)		if (this->flags->__get(5)) {
HXLINE( 345)			this->flags[5] = false;
HXLINE( 346)			if (::hx::IsNotNull( this->onEncounteredError )) {
HXLINE( 347)				 ::Dynamic _hx_tmp = this->onEncounteredError;
HXDLIN( 347)				_hx_tmp(::hx::TCast< ::String >::cast(libvlc_errmsg()));
            			}
            		}
HXLINE( 350)		if (this->flags->__get(6)) {
HXLINE( 352)			this->flags[6] = false;
HXLINE( 353)			if (::hx::IsNotNull( this->onForward )) {
HXLINE( 354)				this->onForward();
            			}
            		}
HXLINE( 357)		if (this->flags->__get(7)) {
HXLINE( 359)			this->flags[7] = false;
HXLINE( 360)			if (::hx::IsNotNull( this->onBackward )) {
HXLINE( 361)				this->onBackward();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,checkFlags,(void))

int VLCBitmap_obj::get_time(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_367_get_time)
HXLINE( 368)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 373)			return ( (int)(libvlc_media_player_get_time(this->mediaPlayer)) );
            		}
HXLINE( 377)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,get_time,return )

int VLCBitmap_obj::set_time(int value){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_381_set_time)
HXLINE( 382)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 383)			libvlc_media_player_set_time(this->mediaPlayer,( (::cpp::Int64)(value) ));
            		}
HXLINE( 385)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VLCBitmap_obj,set_time,return )

Float VLCBitmap_obj::get_position(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_389_get_position)
HXLINE( 390)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 391)			return libvlc_media_player_get_position(this->mediaPlayer);
            		}
HXLINE( 393)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,get_position,return )

Float VLCBitmap_obj::set_position(Float value){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_397_set_position)
HXLINE( 398)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 399)			libvlc_media_player_set_position(this->mediaPlayer,value);
            		}
HXLINE( 401)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VLCBitmap_obj,set_position,return )

int VLCBitmap_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_405_get_length)
HXLINE( 406)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 411)			return ( (int)(libvlc_media_player_get_length(this->mediaPlayer)) );
            		}
HXLINE( 415)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,get_length,return )

int VLCBitmap_obj::get_duration(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_419_get_duration)
HXLINE( 420)		if (::hx::IsNotNull( this->mediaItem )) {
HXLINE( 425)			return ( (int)(libvlc_media_get_duration(this->mediaItem)) );
            		}
HXLINE( 429)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,get_duration,return )

::String VLCBitmap_obj::get_mrl(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_433_get_mrl)
HXLINE( 434)		if (::hx::IsNotNull( this->mediaItem )) {
HXLINE( 435)			return ::hx::TCast< ::String >::cast(libvlc_media_get_mrl(this->mediaItem));
            		}
HXLINE( 437)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,get_mrl,return )

int VLCBitmap_obj::get_volume(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_441_get_volume)
HXLINE( 442)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 443)			return libvlc_audio_get_volume(this->mediaPlayer);
            		}
HXLINE( 445)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,get_volume,return )

int VLCBitmap_obj::set_volume(int value){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_449_set_volume)
HXLINE( 450)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 451)			libvlc_audio_set_volume(this->mediaPlayer,value);
            		}
HXLINE( 453)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VLCBitmap_obj,set_volume,return )

int VLCBitmap_obj::get_delay(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_457_get_delay)
HXLINE( 458)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 463)			return ( (int)(libvlc_audio_get_delay(this->mediaPlayer)) );
            		}
HXLINE( 467)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,get_delay,return )

int VLCBitmap_obj::set_delay(int value){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_471_set_delay)
HXLINE( 472)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 473)			libvlc_audio_set_delay(this->mediaPlayer,( (::cpp::Int64)(value) ));
            		}
HXLINE( 475)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VLCBitmap_obj,set_delay,return )

Float VLCBitmap_obj::get_rate(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_479_get_rate)
HXLINE( 480)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 481)			return libvlc_media_player_get_rate(this->mediaPlayer);
            		}
HXLINE( 483)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,get_rate,return )

Float VLCBitmap_obj::set_rate(Float value){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_487_set_rate)
HXLINE( 488)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 489)			libvlc_media_player_set_rate(this->mediaPlayer,value);
            		}
HXLINE( 491)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VLCBitmap_obj,set_rate,return )

Float VLCBitmap_obj::get_fps(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_495_get_fps)
HXLINE( 496)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 497)			return libvlc_media_player_get_fps(this->mediaPlayer);
            		}
HXLINE( 499)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,get_fps,return )

bool VLCBitmap_obj::get_isPlaying(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_503_get_isPlaying)
HXLINE( 504)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 505)			return libvlc_media_player_is_playing(this->mediaPlayer);
            		}
HXLINE( 507)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,get_isPlaying,return )

bool VLCBitmap_obj::get_isSeekable(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_511_get_isSeekable)
HXLINE( 512)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 513)			return libvlc_media_player_is_seekable(this->mediaPlayer);
            		}
HXLINE( 515)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,get_isSeekable,return )

bool VLCBitmap_obj::get_canPause(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_519_get_canPause)
HXLINE( 520)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 521)			return libvlc_media_player_can_pause(this->mediaPlayer);
            		}
HXLINE( 523)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,get_canPause,return )

Float VLCBitmap_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_527_set_height)
HXLINE( 528)		if (::hx::IsNotNull( this->_hx___bitmapData )) {
HXLINE( 529)			this->set_scaleY((value / ( (Float)(this->_hx___bitmapData->height) )));
            		}
            		else {
HXLINE( 530)			if ((this->videoHeight != 0)) {
HXLINE( 531)				this->set_scaleY((value / ( (Float)(this->videoHeight) )));
            			}
            			else {
HXLINE( 533)				this->set_scaleY(( (Float)(1) ));
            			}
            		}
HXLINE( 535)		return value;
            	}


Float VLCBitmap_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_539_set_width)
HXLINE( 540)		if (::hx::IsNotNull( this->_hx___bitmapData )) {
HXLINE( 541)			this->set_scaleX((value / ( (Float)(this->_hx___bitmapData->width) )));
            		}
            		else {
HXLINE( 542)			if ((this->videoWidth != 0)) {
HXLINE( 543)				this->set_scaleX((value / ( (Float)(this->videoWidth) )));
            			}
            			else {
HXLINE( 545)				this->set_scaleX(( (Float)(1) ));
            			}
            		}
HXLINE( 547)		return value;
            	}


 ::openfl::display::BitmapData VLCBitmap_obj::set_bitmapData( ::openfl::display::BitmapData value){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_551_set_bitmapData)
HXLINE( 552)		this->_hx___bitmapData = value;
HXLINE( 553)		if (!(this->_hx___renderDirty)) {
HXLINE( 553)			this->_hx___renderDirty = true;
HXDLIN( 553)			this->_hx___setParentRenderDirty();
            		}
HXLINE( 554)		this->_hx___imageVersion = -1;
HXLINE( 555)		return this->_hx___bitmapData;
            	}



::hx::ObjectPtr< VLCBitmap_obj > VLCBitmap_obj::__new() {
	::hx::ObjectPtr< VLCBitmap_obj > __this = new VLCBitmap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< VLCBitmap_obj > VLCBitmap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	VLCBitmap_obj *__this = (VLCBitmap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VLCBitmap_obj), true, "hxcodec.vlc.VLCBitmap"));
	*(void **)__this = VLCBitmap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VLCBitmap_obj::VLCBitmap_obj()
{
}

void VLCBitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VLCBitmap);
	HX_MARK_MEMBER_NAME(videoWidth,"videoWidth");
	HX_MARK_MEMBER_NAME(videoHeight,"videoHeight");
	HX_MARK_MEMBER_NAME(onOpening,"onOpening");
	HX_MARK_MEMBER_NAME(onPlaying,"onPlaying");
	HX_MARK_MEMBER_NAME(onPaused,"onPaused");
	HX_MARK_MEMBER_NAME(onStopped,"onStopped");
	HX_MARK_MEMBER_NAME(onEndReached,"onEndReached");
	HX_MARK_MEMBER_NAME(onEncounteredError,"onEncounteredError");
	HX_MARK_MEMBER_NAME(onForward,"onForward");
	HX_MARK_MEMBER_NAME(onBackward,"onBackward");
	HX_MARK_MEMBER_NAME(flags,"flags");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(instance,"instance");
	HX_MARK_MEMBER_NAME(mediaPlayer,"mediaPlayer");
	HX_MARK_MEMBER_NAME(mediaItem,"mediaItem");
	HX_MARK_MEMBER_NAME(eventManager,"eventManager");
	HX_MARK_MEMBER_NAME(currentTime,"currentTime");
	 ::openfl::display::Bitmap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VLCBitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(videoWidth,"videoWidth");
	HX_VISIT_MEMBER_NAME(videoHeight,"videoHeight");
	HX_VISIT_MEMBER_NAME(onOpening,"onOpening");
	HX_VISIT_MEMBER_NAME(onPlaying,"onPlaying");
	HX_VISIT_MEMBER_NAME(onPaused,"onPaused");
	HX_VISIT_MEMBER_NAME(onStopped,"onStopped");
	HX_VISIT_MEMBER_NAME(onEndReached,"onEndReached");
	HX_VISIT_MEMBER_NAME(onEncounteredError,"onEncounteredError");
	HX_VISIT_MEMBER_NAME(onForward,"onForward");
	HX_VISIT_MEMBER_NAME(onBackward,"onBackward");
	HX_VISIT_MEMBER_NAME(flags,"flags");
	HX_VISIT_MEMBER_NAME(pixels,"pixels");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(instance,"instance");
	HX_VISIT_MEMBER_NAME(mediaPlayer,"mediaPlayer");
	HX_VISIT_MEMBER_NAME(mediaItem,"mediaItem");
	HX_VISIT_MEMBER_NAME(eventManager,"eventManager");
	HX_VISIT_MEMBER_NAME(currentTime,"currentTime");
	 ::openfl::display::Bitmap_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val VLCBitmap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mrl") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mrl() ); }
		if (HX_FIELD_EQ(inName,"fps") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_fps() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_time() ); }
		if (HX_FIELD_EQ(inName,"rate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_rate() ); }
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_delay() ); }
		if (HX_FIELD_EQ(inName,"flags") ) { return ::hx::Val( flags ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_volume() ); }
		if (HX_FIELD_EQ(inName,"buffer") ) { return ::hx::Val( buffer ); }
		if (HX_FIELD_EQ(inName,"resume") ) { return ::hx::Val( resume_dyn() ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return ::hx::Val( texture ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mrl") ) { return ::hx::Val( get_mrl_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_fps") ) { return ::hx::Val( get_fps_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_position() ); }
		if (HX_FIELD_EQ(inName,"duration") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_duration() ); }
		if (HX_FIELD_EQ(inName,"canPause") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_canPause() ); }
		if (HX_FIELD_EQ(inName,"onPaused") ) { return ::hx::Val( onPaused ); }
		if (HX_FIELD_EQ(inName,"get_time") ) { return ::hx::Val( get_time_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_time") ) { return ::hx::Val( set_time_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_rate") ) { return ::hx::Val( get_rate_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_rate") ) { return ::hx::Val( set_rate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isPlaying") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isPlaying() ); }
		if (HX_FIELD_EQ(inName,"onOpening") ) { return ::hx::Val( onOpening ); }
		if (HX_FIELD_EQ(inName,"onPlaying") ) { return ::hx::Val( onPlaying ); }
		if (HX_FIELD_EQ(inName,"onStopped") ) { return ::hx::Val( onStopped ); }
		if (HX_FIELD_EQ(inName,"onForward") ) { return ::hx::Val( onForward ); }
		if (HX_FIELD_EQ(inName,"get_delay") ) { return ::hx::Val( get_delay_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_delay") ) { return ::hx::Val( set_delay_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"videoWidth") ) { return ::hx::Val( videoWidth ); }
		if (HX_FIELD_EQ(inName,"isSeekable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isSeekable() ); }
		if (HX_FIELD_EQ(inName,"onBackward") ) { return ::hx::Val( onBackward ); }
		if (HX_FIELD_EQ(inName,"checkFlags") ) { return ::hx::Val( checkFlags_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_volume") ) { return ::hx::Val( get_volume_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_volume") ) { return ::hx::Val( set_volume_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"videoHeight") ) { return ::hx::Val( videoHeight ); }
		if (HX_FIELD_EQ(inName,"currentTime") ) { return ::hx::Val( currentTime ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onEndReached") ) { return ::hx::Val( onEndReached ); }
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return ::hx::Val( onEnterFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return ::hx::Val( get_position_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return ::hx::Val( set_position_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_duration") ) { return ::hx::Val( get_duration_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_canPause") ) { return ::hx::Val( get_canPause_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_isPlaying") ) { return ::hx::Val( get_isPlaying_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_isSeekable") ) { return ::hx::Val( get_isSeekable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bitmapData") ) { return ::hx::Val( set_bitmapData_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onEncounteredError") ) { return ::hx::Val( onEncounteredError ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VLCBitmap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_time(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"rate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_rate(inValue.Cast< Float >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_delay(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"flags") ) { flags=inValue.Cast< ::Array< bool > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_volume(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::Array< unsigned char > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast<  ::openfl::display3D::textures::RectangleTexture >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_position(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"onPaused") ) { onPaused=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onOpening") ) { onOpening=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onPlaying") ) { onPlaying=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onStopped") ) { onStopped=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onForward") ) { onForward=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"videoWidth") ) { videoWidth=inValue.Cast< unsigned int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onBackward") ) { onBackward=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"videoHeight") ) { videoHeight=inValue.Cast< unsigned int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentTime") ) { currentTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onEndReached") ) { onEndReached=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onEncounteredError") ) { onEncounteredError=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VLCBitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("videoWidth",8b,f3,30,a6));
	outFields->push(HX_("videoHeight",c2,9e,f3,7a));
	outFields->push(HX_("time",0d,cc,fc,4c));
	outFields->push(HX_("position",a9,a0,fa,ca));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("mrl",67,19,53,00));
	outFields->push(HX_("volume",da,29,53,5f));
	outFields->push(HX_("delay",83,d7,26,d7));
	outFields->push(HX_("rate",e0,52,a4,4b));
	outFields->push(HX_("fps",e9,c7,4d,00));
	outFields->push(HX_("isPlaying",a4,8c,16,8e));
	outFields->push(HX_("isSeekable",1c,21,a4,d2));
	outFields->push(HX_("canPause",c6,18,eb,2b));
	outFields->push(HX_("flags",47,2b,8c,02));
	outFields->push(HX_("pixels",2d,ef,a9,8c));
	outFields->push(HX_("buffer",00,bd,94,d0));
	outFields->push(HX_("texture",db,c8,e0,9e));
	outFields->push(HX_("instance",95,1f,e1,59));
	outFields->push(HX_("mediaPlayer",65,27,02,c6));
	outFields->push(HX_("mediaItem",17,38,03,a6));
	outFields->push(HX_("eventManager",73,89,16,a4));
	outFields->push(HX_("currentTime",e6,a4,8e,85));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VLCBitmap_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* unsigned int */ ,(int)offsetof(VLCBitmap_obj,videoWidth),HX_("videoWidth",8b,f3,30,a6)},
	{::hx::fsUnknown /* unsigned int */ ,(int)offsetof(VLCBitmap_obj,videoHeight),HX_("videoHeight",c2,9e,f3,7a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VLCBitmap_obj,onOpening),HX_("onOpening",f9,bb,ef,17)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VLCBitmap_obj,onPlaying),HX_("onPlaying",0f,c8,c2,61)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VLCBitmap_obj,onPaused),HX_("onPaused",2d,37,31,cf)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VLCBitmap_obj,onStopped),HX_("onStopped",ae,8a,0c,1b)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VLCBitmap_obj,onEndReached),HX_("onEndReached",f6,c1,9d,80)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VLCBitmap_obj,onEncounteredError),HX_("onEncounteredError",d5,1c,32,23)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VLCBitmap_obj,onForward),HX_("onForward",66,9a,75,bd)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VLCBitmap_obj,onBackward),HX_("onBackward",22,b0,cf,04)},
	{::hx::fsObject /* ::Array< bool > */ ,(int)offsetof(VLCBitmap_obj,flags),HX_("flags",47,2b,8c,02)},
	{::hx::fsUnknown /* unsigned char* */ ,(int)offsetof(VLCBitmap_obj,pixels),HX_("pixels",2d,ef,a9,8c)},
	{::hx::fsObject /* ::Array< unsigned char > */ ,(int)offsetof(VLCBitmap_obj,buffer),HX_("buffer",00,bd,94,d0)},
	{::hx::fsObject /*  ::openfl::display3D::textures::RectangleTexture */ ,(int)offsetof(VLCBitmap_obj,texture),HX_("texture",db,c8,e0,9e)},
	{::hx::fsUnknown /*  libvlc_instance_t* */ ,(int)offsetof(VLCBitmap_obj,instance),HX_("instance",95,1f,e1,59)},
	{::hx::fsUnknown /*  libvlc_media_player_t* */ ,(int)offsetof(VLCBitmap_obj,mediaPlayer),HX_("mediaPlayer",65,27,02,c6)},
	{::hx::fsUnknown /*  libvlc_media_t* */ ,(int)offsetof(VLCBitmap_obj,mediaItem),HX_("mediaItem",17,38,03,a6)},
	{::hx::fsUnknown /*  libvlc_event_manager_t* */ ,(int)offsetof(VLCBitmap_obj,eventManager),HX_("eventManager",73,89,16,a4)},
	{::hx::fsFloat,(int)offsetof(VLCBitmap_obj,currentTime),HX_("currentTime",e6,a4,8e,85)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VLCBitmap_obj_sStaticStorageInfo = 0;
#endif

static ::String VLCBitmap_obj_sMemberFields[] = {
	HX_("videoWidth",8b,f3,30,a6),
	HX_("videoHeight",c2,9e,f3,7a),
	HX_("onOpening",f9,bb,ef,17),
	HX_("onPlaying",0f,c8,c2,61),
	HX_("onPaused",2d,37,31,cf),
	HX_("onStopped",ae,8a,0c,1b),
	HX_("onEndReached",f6,c1,9d,80),
	HX_("onEncounteredError",d5,1c,32,23),
	HX_("onForward",66,9a,75,bd),
	HX_("onBackward",22,b0,cf,04),
	HX_("flags",47,2b,8c,02),
	HX_("buffer",00,bd,94,d0),
	HX_("texture",db,c8,e0,9e),
	HX_("play",f4,2d,5a,4a),
	HX_("stop",02,f0,5b,4c),
	HX_("pause",f6,d6,57,bd),
	HX_("resume",ad,69,84,08),
	HX_("dispose",9f,80,4c,bb),
	HX_("currentTime",e6,a4,8e,85),
	HX_("onEnterFrame",f4,a5,93,da),
	HX_("render",56,6b,29,05),
	HX_("checkFlags",5f,2d,7c,12),
	HX_("get_time",96,87,b7,cc),
	HX_("set_time",0a,e1,14,7b),
	HX_("get_position",b2,54,14,80),
	HX_("set_position",26,78,0d,95),
	HX_("get_length",af,04,8f,8f),
	HX_("get_duration",5d,c3,a7,c9),
	HX_("get_mrl",fe,e1,c7,26),
	HX_("get_volume",a3,99,da,4f),
	HX_("set_volume",17,38,58,53),
	HX_("get_delay",da,33,d0,1a),
	HX_("set_delay",e6,1f,21,fe),
	HX_("get_rate",69,0e,5f,cb),
	HX_("set_rate",dd,67,bc,79),
	HX_("get_fps",80,90,c2,26),
	HX_("get_isPlaying",7b,60,7a,4f),
	HX_("get_isSeekable",65,a9,99,48),
	HX_("get_canPause",cf,cc,04,e1),
	HX_("set_height",24,16,51,f6),
	HX_("set_width",69,fe,5c,f1),
	HX_("set_bitmapData",76,26,d6,c9),
	::String(null()) };

::hx::Class VLCBitmap_obj::__mClass;

void VLCBitmap_obj::__register()
{
	VLCBitmap_obj _hx_dummy;
	VLCBitmap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxcodec.vlc.VLCBitmap",f3,17,97,96);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VLCBitmap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VLCBitmap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VLCBitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VLCBitmap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxcodec
} // end namespace vlc
