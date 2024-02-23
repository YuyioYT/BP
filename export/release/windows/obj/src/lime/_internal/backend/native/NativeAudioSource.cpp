#include <hxcpp.h>

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe__CallStack_CallStack_Impl_
#include <haxe/_CallStack/CallStack_Impl_.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeAudioSource
#include <lime/_internal/backend/native/NativeAudioSource.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_media_AudioSource
#include <lime/media/AudioSource.h>
#endif
#ifndef INCLUDED_lime_media_openal_AL
#include <lime/media/openal/AL.h>
#endif
#ifndef INCLUDED_lime_media_vorbis_VorbisFile
#include <lime/media/vorbis/VorbisFile.h>
#endif
#ifndef INCLUDED_lime_media_vorbis_VorbisInfo
#include <lime/media/vorbis/VorbisInfo.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_19_new,"lime._internal.backend.native.NativeAudioSource","new",0xc4558c9a,"lime._internal.backend.native.NativeAudioSource.new","lime/_internal/backend/native/NativeAudioSource.hx",19,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_60_dispose,"lime._internal.backend.native.NativeAudioSource","dispose",0xce19e1d9,"lime._internal.backend.native.NativeAudioSource.dispose","lime/_internal/backend/native/NativeAudioSource.hx",60,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_81_init,"lime._internal.backend.native.NativeAudioSource","init",0x033e3196,"lime._internal.backend.native.NativeAudioSource.init","lime/_internal/backend/native/NativeAudioSource.hx",81,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_160_play,"lime._internal.backend.native.NativeAudioSource","play",0x07dd247a,"lime._internal.backend.native.NativeAudioSource.play","lime/_internal/backend/native/NativeAudioSource.hx",160,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_188_pause,"lime._internal.backend.native.NativeAudioSource","pause",0xd26c95b0,"lime._internal.backend.native.NativeAudioSource.pause","lime/_internal/backend/native/NativeAudioSource.hx",188,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_206_readVorbisFileBuffer,"lime._internal.backend.native.NativeAudioSource","readVorbisFileBuffer",0x5a6427cb,"lime._internal.backend.native.NativeAudioSource.readVorbisFileBuffer","lime/_internal/backend/native/NativeAudioSource.hx",206,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_245_refillBuffers,"lime._internal.backend.native.NativeAudioSource","refillBuffers",0x8dd34f17,"lime._internal.backend.native.NativeAudioSource.refillBuffers","lime/_internal/backend/native/NativeAudioSource.hx",245,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_310_stop,"lime._internal.backend.native.NativeAudioSource","stop",0x09dee688,"lime._internal.backend.native.NativeAudioSource.stop","lime/_internal/backend/native/NativeAudioSource.hx",310,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_334_streamTimer_onRun,"lime._internal.backend.native.NativeAudioSource","streamTimer_onRun",0xd26ae54c,"lime._internal.backend.native.NativeAudioSource.streamTimer_onRun","lime/_internal/backend/native/NativeAudioSource.hx",334,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_338_timer_onRun,"lime._internal.backend.native.NativeAudioSource","timer_onRun",0x98b8aa6c,"lime._internal.backend.native.NativeAudioSource.timer_onRun","lime/_internal/backend/native/NativeAudioSource.hx",338,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_358_getCurrentTime,"lime._internal.backend.native.NativeAudioSource","getCurrentTime",0xb0ab91f6,"lime._internal.backend.native.NativeAudioSource.getCurrentTime","lime/_internal/backend/native/NativeAudioSource.hx",358,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_389_setCurrentTime,"lime._internal.backend.native.NativeAudioSource","setCurrentTime",0xd0cb7a6a,"lime._internal.backend.native.NativeAudioSource.setCurrentTime","lime/_internal/backend/native/NativeAudioSource.hx",389,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_455_getGain,"lime._internal.backend.native.NativeAudioSource","getGain",0x29af016f,"lime._internal.backend.native.NativeAudioSource.getGain","lime/_internal/backend/native/NativeAudioSource.hx",455,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_466_setGain,"lime._internal.backend.native.NativeAudioSource","setGain",0x1cb0927b,"lime._internal.backend.native.NativeAudioSource.setGain","lime/_internal/backend/native/NativeAudioSource.hx",466,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_476_getLength,"lime._internal.backend.native.NativeAudioSource","getLength",0x8531c1d6,"lime._internal.backend.native.NativeAudioSource.getLength","lime/_internal/backend/native/NativeAudioSource.hx",476,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_486_setLength,"lime._internal.backend.native.NativeAudioSource","setLength",0x6882ade2,"lime._internal.backend.native.NativeAudioSource.setLength","lime/_internal/backend/native/NativeAudioSource.hx",486,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_508_getLoops,"lime._internal.backend.native.NativeAudioSource","getLoops",0x39b8b29f,"lime._internal.backend.native.NativeAudioSource.getLoops","lime/_internal/backend/native/NativeAudioSource.hx",508,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_513_setLoops,"lime._internal.backend.native.NativeAudioSource","setLoops",0xe8160c13,"lime._internal.backend.native.NativeAudioSource.setLoops","lime/_internal/backend/native/NativeAudioSource.hx",513,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_518_getPitch,"lime._internal.backend.native.NativeAudioSource","getPitch",0x835f7cd0,"lime._internal.backend.native.NativeAudioSource.getPitch","lime/_internal/backend/native/NativeAudioSource.hx",518,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_529_setPitch,"lime._internal.backend.native.NativeAudioSource","setPitch",0x31bcd644,"lime._internal.backend.native.NativeAudioSource.setPitch","lime/_internal/backend/native/NativeAudioSource.hx",529,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_555_getPosition,"lime._internal.backend.native.NativeAudioSource","getPosition",0x31bde999,"lime._internal.backend.native.NativeAudioSource.getPosition","lime/_internal/backend/native/NativeAudioSource.hx",555,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_570_setPosition,"lime._internal.backend.native.NativeAudioSource","setPosition",0x3c2af0a5,"lime._internal.backend.native.NativeAudioSource.setPosition","lime/_internal/backend/native/NativeAudioSource.hx",570,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_21_boot,"lime._internal.backend.native.NativeAudioSource","boot",0xfe9e7ab8,"lime._internal.backend.native.NativeAudioSource.boot","lime/_internal/backend/native/NativeAudioSource.hx",21,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_23_boot,"lime._internal.backend.native.NativeAudioSource","boot",0xfe9e7ab8,"lime._internal.backend.native.NativeAudioSource.boot","lime/_internal/backend/native/NativeAudioSource.hx",23,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_27_boot,"lime._internal.backend.native.NativeAudioSource","boot",0xfe9e7ab8,"lime._internal.backend.native.NativeAudioSource.boot","lime/_internal/backend/native/NativeAudioSource.hx",27,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_29_boot,"lime._internal.backend.native.NativeAudioSource","boot",0xfe9e7ab8,"lime._internal.backend.native.NativeAudioSource.boot","lime/_internal/backend/native/NativeAudioSource.hx",29,0xce8e0834)
namespace lime{
namespace _internal{
namespace backend{
namespace native{

void NativeAudioSource_obj::__construct( ::lime::media::AudioSource parent){
            	HX_GC_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_19_new)
HXLINE(  50)		this->disposed = false;
HXLINE(  54)		this->parent = parent;
HXLINE(  56)		this->position =  ::lime::math::Vector4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}

Dynamic NativeAudioSource_obj::__CreateEmpty() { return new NativeAudioSource_obj; }

void *NativeAudioSource_obj::_hx_vtable = 0;

Dynamic NativeAudioSource_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NativeAudioSource_obj > _hx_result = new NativeAudioSource_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NativeAudioSource_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2c353d12;
}

void NativeAudioSource_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_60_dispose)
HXLINE(  61)		if (::hx::IsNotNull( this->handle )) {
HXLINE(  63)			this->stop();
HXLINE(  64)			::lime::media::openal::AL_obj::sourcei(this->handle,4105,null());
HXLINE(  65)			::lime::media::openal::AL_obj::deleteSource(this->handle);
HXLINE(  66)			if (::hx::IsNotNull( this->buffers )) {
HXLINE(  68)				{
HXLINE(  68)					int _g = 0;
HXDLIN(  68)					::cpp::VirtualArray _g1 = this->buffers;
HXDLIN(  68)					while((_g < _g1->get_length())){
HXLINE(  68)						 ::Dynamic buffer = _g1->__get(_g);
HXDLIN(  68)						_g = (_g + 1);
HXLINE(  70)						::lime::media::openal::AL_obj::deleteBuffer(buffer);
            					}
            				}
HXLINE(  72)				this->buffers = null();
            			}
HXLINE(  74)			this->handle = null();
            		}
HXLINE(  76)		this->disposed = true;
HXLINE(  77)		::lime::_internal::backend::native::NativeAudioSource_obj::initBuffers->remove(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,dispose,(void))

void NativeAudioSource_obj::init(){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_81_init)
HXLINE(  82)		this->dataLength = 0;
HXLINE(  83)		this->format = 0;
HXLINE(  85)		if ((this->parent->buffer->channels == 1)) {
HXLINE(  87)			if ((this->parent->buffer->bitsPerSample == 8)) {
HXLINE(  89)				this->format = 4352;
            			}
            			else {
HXLINE(  91)				if ((this->parent->buffer->bitsPerSample == 16)) {
HXLINE(  93)					this->format = 4353;
            				}
            			}
            		}
            		else {
HXLINE(  96)			if ((this->parent->buffer->channels == 2)) {
HXLINE(  98)				if ((this->parent->buffer->bitsPerSample == 8)) {
HXLINE( 100)					this->format = 4354;
            				}
            				else {
HXLINE( 102)					if ((this->parent->buffer->bitsPerSample == 16)) {
HXLINE( 104)						this->format = 4355;
            					}
            				}
            			}
            		}
HXLINE( 108)		if (::hx::IsNotNull( this->parent->buffer->_hx___srcVorbisFile )) {
HXLINE( 110)			this->stream = true;
HXLINE( 112)			 ::lime::media::vorbis::VorbisFile vorbisFile = this->parent->buffer->_hx___srcVorbisFile;
HXLINE( 113)			this->pcmTotal = vorbisFile->pcmTotal(null());
HXLINE( 114)			 ::lime::media::vorbis::VorbisInfo info = vorbisFile->info(null());
HXLINE( 115)			this->sampleRate = info->rate;
HXLINE( 116)			 cpp::Int64Struct a = this->pcmTotal;
HXDLIN( 116)			 cpp::Int64Struct a1 = _hx_int64_mul(a,( ::cpp::Int64Struct(this->parent->buffer->channels)));
HXDLIN( 116)			 cpp::Int64Struct a2 = ( ::cpp::Int64Struct(this->parent->buffer->bitsPerSample));
HXDLIN( 116)			 cpp::Int64Struct b = ( ::cpp::Int64Struct(8));
HXDLIN( 116)			if (_hx_int64_is_zero(b)) {
HXLINE( 116)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("divide by zero",6a,d2,eb,57)));
            			}
HXDLIN( 116)			 cpp::Int64Struct _dataLength = _hx_int64_mul(a1,_hx_int64_div(a2,b));
HXLINE( 117)			int _hx_tmp = _hx_int64_high(_dataLength);
HXDLIN( 117)			if ((_hx_tmp != (_hx_int64_low(_dataLength) >> 31))) {
HXLINE( 117)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Overflow",62,9f,ed,1a)));
            			}
HXDLIN( 117)			this->dataLength = _hx_int64_low(_dataLength);
HXLINE( 119)			this->buffers = ::cpp::VirtualArray_obj::__new();
HXLINE( 120)			this->bufferTimeBlocks = ::Array_obj< Float >::__new();
HXLINE( 122)			{
HXLINE( 122)				int _g = 0;
HXDLIN( 122)				int _g1 = ::lime::_internal::backend::native::NativeAudioSource_obj::STREAM_NUM_BUFFERS;
HXDLIN( 122)				while((_g < _g1)){
HXLINE( 122)					_g = (_g + 1);
HXDLIN( 122)					int i = (_g - 1);
HXLINE( 124)					::cpp::VirtualArray _hx_tmp = this->buffers;
HXDLIN( 124)					_hx_tmp->push(::lime::media::openal::AL_obj::createBuffer());
HXLINE( 125)					this->bufferTimeBlocks->push(0);
            				}
            			}
HXLINE( 128)			this->handle = ::lime::media::openal::AL_obj::createSource();
HXLINE( 130)			 cpp::Int64Struct x = this->pcmTotal;
HXDLIN( 130)			int _hx_tmp1 = _hx_int64_high(x);
HXDLIN( 130)			if ((_hx_tmp1 != (_hx_int64_low(x) >> 31))) {
HXLINE( 130)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Overflow",62,9f,ed,1a)));
            			}
HXDLIN( 130)			this->samples = ( (Float)(_hx_int64_low(x)) );
            		}
            		else {
HXLINE( 134)			if (::hx::IsNull( this->parent->buffer->_hx___srcBuffer )) {
HXLINE( 136)				this->parent->buffer->_hx___srcBuffer = ::lime::media::openal::AL_obj::createBuffer();
HXLINE( 138)				if (::hx::IsNotNull( this->parent->buffer->_hx___srcBuffer )) {
HXLINE( 140)					::lime::media::openal::AL_obj::bufferData(this->parent->buffer->_hx___srcBuffer,this->format,this->parent->buffer->data,this->parent->buffer->data->length,this->parent->buffer->sampleRate);
            				}
            			}
HXLINE( 144)			this->dataLength = this->parent->buffer->data->length;
HXLINE( 146)			this->handle = ::lime::media::openal::AL_obj::createSource();
HXLINE( 148)			if (::hx::IsNotNull( this->handle )) {
HXLINE( 150)				::lime::media::openal::AL_obj::sourcei(this->handle,4105,this->parent->buffer->_hx___srcBuffer);
            			}
HXLINE( 153)			 cpp::Int64Struct a = _hx_int64_make(0,this->dataLength);
HXDLIN( 153)			 cpp::Int64Struct a1 = _hx_int64_mul(a,( ::cpp::Int64Struct(8)));
HXDLIN( 153)			 cpp::Int64Struct b = ( ::cpp::Int64Struct((this->parent->buffer->channels * this->parent->buffer->bitsPerSample)));
HXDLIN( 153)			if (_hx_int64_is_zero(b)) {
HXLINE( 153)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("divide by zero",6a,d2,eb,57)));
            			}
HXDLIN( 153)			 cpp::Int64Struct x = _hx_int64_div(a1,b);
HXDLIN( 153)			int _hx_tmp = _hx_int64_high(x);
HXDLIN( 153)			if ((_hx_tmp != (_hx_int64_low(x) >> 31))) {
HXLINE( 153)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Overflow",62,9f,ed,1a)));
            			}
HXDLIN( 153)			this->samples = ( (Float)(_hx_int64_low(x)) );
            		}
HXLINE( 156)		::lime::_internal::backend::native::NativeAudioSource_obj::initBuffers->push(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,init,(void))

void NativeAudioSource_obj::play(){
            	HX_GC_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_160_play)
HXLINE( 161)		if (this->disposed) {
HXLINE( 162)			::haxe::Log_obj::trace(HX_("TRIED TO PLAY DISPOSED?? WTFFF",eb,3f,a3,35),::hx::SourceInfo(HX_("source/lime/_internal/backend/native/NativeAudioSource.hx",28,34,8e,78),162,HX_("lime._internal.backend.native.NativeAudioSource",a8,f7,00,71),HX_("play",f4,2d,5a,4a)));
HXLINE( 163)			 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 163)			::String _hx_tmp1 = ::haxe::_CallStack::CallStack_Impl__obj::toString(::haxe::_CallStack::CallStack_Impl__obj::callStack());
HXDLIN( 163)			_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/lime/_internal/backend/native/NativeAudioSource.hx",28,34,8e,78),163,HX_("lime._internal.backend.native.NativeAudioSource",a8,f7,00,71),HX_("play",f4,2d,5a,4a)));
            		}
HXLINE( 165)		bool _hx_tmp;
HXDLIN( 165)		if (!(this->playing)) {
HXLINE( 165)			_hx_tmp = ::hx::IsNull( this->handle );
            		}
            		else {
HXLINE( 165)			_hx_tmp = true;
            		}
HXDLIN( 165)		if (_hx_tmp) {
HXLINE( 167)			return;
            		}
HXLINE( 170)		this->playing = true;
HXLINE( 172)		if (this->stream) {
HXLINE( 174)			this->setCurrentTime(this->getCurrentTime());
HXLINE( 176)			this->streamTimer =  ::haxe::Timer_obj::__alloc( HX_CTX ,( (Float)(::lime::_internal::backend::native::NativeAudioSource_obj::STREAM_TIMER_FREQUENCY) ));
HXLINE( 177)			this->streamTimer->run = this->streamTimer_onRun_dyn();
            		}
            		else {
HXLINE( 181)			Float time;
HXDLIN( 181)			if (this->completed) {
HXLINE( 181)				time = ( (Float)(0) );
            			}
            			else {
HXLINE( 181)				time = this->getCurrentTime();
            			}
HXLINE( 183)			this->setCurrentTime(time);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,play,(void))

void NativeAudioSource_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_188_pause)
HXLINE( 189)		this->playing = false;
HXLINE( 191)		if (::hx::IsNull( this->handle )) {
HXLINE( 191)			return;
            		}
HXLINE( 192)		::lime::media::openal::AL_obj::sourcePause(this->handle);
HXLINE( 194)		if (::hx::IsNotNull( this->streamTimer )) {
HXLINE( 196)			this->streamTimer->stop();
            		}
HXLINE( 199)		if (::hx::IsNotNull( this->timer )) {
HXLINE( 201)			this->timer->stop();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,pause,(void))

 ::lime::utils::ArrayBufferView NativeAudioSource_obj::readVorbisFileBuffer( ::lime::media::vorbis::VorbisFile vorbisFile,int length){
            	HX_GC_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_206_readVorbisFileBuffer)
HXLINE( 208)		 ::haxe::io::Bytes buffer = null();
HXDLIN( 208)		::cpp::VirtualArray array = null();
HXDLIN( 208)		 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 208)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 208)		 ::Dynamic len = null();
HXDLIN( 208)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 208)		if (::hx::IsNotNull( length )) {
HXLINE( 208)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,length,4);
            		}
            		else {
HXLINE( 208)			if (::hx::IsNotNull( array )) {
HXLINE( 208)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 208)				_this->byteOffset = 0;
HXDLIN( 208)				_this->length = array->get_length();
HXDLIN( 208)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 208)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 208)				_this->buffer = this2;
HXDLIN( 208)				_this->copyFromArray(array,null());
HXDLIN( 208)				this1 = _this;
            			}
            			else {
HXLINE( 208)				if (::hx::IsNotNull( vector )) {
HXLINE( 208)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 208)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 208)					_this->byteOffset = 0;
HXDLIN( 208)					_this->length = array->get_length();
HXDLIN( 208)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 208)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 208)					_this->buffer = this2;
HXDLIN( 208)					_this->copyFromArray(array,null());
HXDLIN( 208)					this1 = _this;
            				}
            				else {
HXLINE( 208)					if (::hx::IsNotNull( view )) {
HXLINE( 208)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 208)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 208)						int srcLength = view->length;
HXDLIN( 208)						int srcByteOffset = view->byteOffset;
HXDLIN( 208)						int srcElementSize = view->bytesPerElement;
HXDLIN( 208)						int elementSize = _this->bytesPerElement;
HXDLIN( 208)						if ((view->type == _this->type)) {
HXLINE( 208)							int srcLength = srcData->length;
HXDLIN( 208)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 208)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 208)							_this->buffer = this1;
HXDLIN( 208)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE( 208)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 208)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 208)						_this->byteOffset = 0;
HXDLIN( 208)						_this->length = srcLength;
HXDLIN( 208)						this1 = _this;
            					}
            					else {
HXLINE( 208)						if (::hx::IsNotNull( buffer )) {
HXLINE( 208)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 208)							int in_byteOffset = 0;
HXDLIN( 208)							if ((in_byteOffset < 0)) {
HXLINE( 208)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 208)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 208)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 208)							int bufferByteLength = buffer->length;
HXDLIN( 208)							int elementSize = _this->bytesPerElement;
HXDLIN( 208)							int newByteLength = bufferByteLength;
HXDLIN( 208)							if (::hx::IsNull( len )) {
HXLINE( 208)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 208)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 208)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 208)								if ((newByteLength < 0)) {
HXLINE( 208)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE( 208)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 208)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 208)								if ((newRange > bufferByteLength)) {
HXLINE( 208)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 208)							_this->buffer = buffer;
HXDLIN( 208)							_this->byteOffset = in_byteOffset;
HXDLIN( 208)							_this->byteLength = newByteLength;
HXDLIN( 208)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 208)							this1 = _this;
            						}
            						else {
HXLINE( 208)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 208)		 ::lime::utils::ArrayBufferView buffer1 = this1;
HXLINE( 209)		int read = 0;
HXDLIN( 209)		int total = 0;
HXDLIN( 209)		int readMax;
HXLINE( 211)		{
HXLINE( 211)			int _g = 0;
HXDLIN( 211)			int _g1 = (::lime::_internal::backend::native::NativeAudioSource_obj::STREAM_NUM_BUFFERS - 1);
HXDLIN( 211)			while((_g < _g1)){
HXLINE( 211)				_g = (_g + 1);
HXDLIN( 211)				int i = (_g - 1);
HXLINE( 213)				this->bufferTimeBlocks[i] = this->bufferTimeBlocks->__get((i + 1));
            			}
            		}
HXLINE( 215)		this->bufferTimeBlocks[(::lime::_internal::backend::native::NativeAudioSource_obj::STREAM_NUM_BUFFERS - 1)] = vorbisFile->timeTell();
HXLINE( 217)		while((total < length)){
HXLINE( 219)			readMax = 4096;
HXLINE( 221)			if ((readMax > (length - total))) {
HXLINE( 223)				readMax = (length - total);
            			}
HXLINE( 226)			read = vorbisFile->read(buffer1->buffer,total,readMax,null(),null(),null());
HXLINE( 228)			if ((read > 0)) {
HXLINE( 230)				total = (total + read);
            			}
            			else {
HXLINE( 234)				goto _hx_goto_8;
            			}
            		}
            		_hx_goto_8:;
HXLINE( 238)		return buffer1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeAudioSource_obj,readVorbisFileBuffer,return )

void NativeAudioSource_obj::refillBuffers(::cpp::VirtualArray buffers){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_245_refillBuffers)
HXLINE( 247)		 ::lime::media::vorbis::VorbisFile vorbisFile = null();
HXLINE( 248)		int position = 0;
HXLINE( 250)		if (::hx::IsNull( buffers )) {
HXLINE( 252)			int buffersProcessed = ( (int)(::lime::media::openal::AL_obj::getSourcei(this->handle,4118)) );
HXLINE( 254)			if ((buffersProcessed > 0)) {
HXLINE( 256)				vorbisFile = this->parent->buffer->_hx___srcVorbisFile;
HXLINE( 257)				 cpp::Int64Struct x = vorbisFile->pcmTell();
HXDLIN( 257)				int position1 = _hx_int64_high(x);
HXDLIN( 257)				if ((position1 != (_hx_int64_low(x) >> 31))) {
HXLINE( 257)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Overflow",62,9f,ed,1a)));
            				}
HXDLIN( 257)				position = _hx_int64_low(x);
HXLINE( 259)				if ((position < this->dataLength)) {
HXLINE( 261)					buffers = ::lime::media::openal::AL_obj::sourceUnqueueBuffers(this->handle,buffersProcessed);
            				}
            			}
            		}
HXLINE( 266)		if (::hx::IsNotNull( buffers )) {
HXLINE( 268)			if (::hx::IsNull( vorbisFile )) {
HXLINE( 270)				vorbisFile = this->parent->buffer->_hx___srcVorbisFile;
HXLINE( 271)				 cpp::Int64Struct x = vorbisFile->pcmTell();
HXDLIN( 271)				int position1 = _hx_int64_high(x);
HXDLIN( 271)				if ((position1 != (_hx_int64_low(x) >> 31))) {
HXLINE( 271)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Overflow",62,9f,ed,1a)));
            				}
HXDLIN( 271)				position = _hx_int64_low(x);
            			}
HXLINE( 274)			int numBuffers = 0;
HXLINE( 275)			 ::lime::utils::ArrayBufferView data;
HXLINE( 277)			{
HXLINE( 277)				int _g = 0;
HXDLIN( 277)				while((_g < buffers->get_length())){
HXLINE( 277)					 ::Dynamic buffer = buffers->__get(_g);
HXDLIN( 277)					_g = (_g + 1);
HXLINE( 279)					if (((this->dataLength - position) >= ::lime::_internal::backend::native::NativeAudioSource_obj::STREAM_BUFFER_SIZE)) {
HXLINE( 281)						data = this->readVorbisFileBuffer(vorbisFile,::lime::_internal::backend::native::NativeAudioSource_obj::STREAM_BUFFER_SIZE);
HXLINE( 282)						::lime::media::openal::AL_obj::bufferData(buffer,this->format,data,data->length,this->parent->buffer->sampleRate);
HXLINE( 283)						position = (position + ::lime::_internal::backend::native::NativeAudioSource_obj::STREAM_BUFFER_SIZE);
HXLINE( 284)						numBuffers = (numBuffers + 1);
            					}
            					else {
HXLINE( 286)						if ((position < this->dataLength)) {
HXLINE( 288)							data = this->readVorbisFileBuffer(vorbisFile,(this->dataLength - position));
HXLINE( 289)							::lime::media::openal::AL_obj::bufferData(buffer,this->format,data,data->length,this->parent->buffer->sampleRate);
HXLINE( 290)							numBuffers = (numBuffers + 1);
HXLINE( 291)							goto _hx_goto_10;
            						}
            					}
            				}
            				_hx_goto_10:;
            			}
HXLINE( 295)			::lime::media::openal::AL_obj::sourceQueueBuffers(this->handle,numBuffers,buffers);
HXLINE( 301)			bool _hx_tmp;
HXDLIN( 301)			bool _hx_tmp1;
HXDLIN( 301)			if (this->playing) {
HXLINE( 301)				_hx_tmp1 = ::hx::IsNotNull( this->handle );
            			}
            			else {
HXLINE( 301)				_hx_tmp1 = false;
            			}
HXDLIN( 301)			if (_hx_tmp1) {
HXLINE( 301)				_hx_tmp = ::hx::IsEq( ::lime::media::openal::AL_obj::getSourcei(this->handle,4112),4116 );
            			}
            			else {
HXLINE( 301)				_hx_tmp = false;
            			}
HXDLIN( 301)			if (_hx_tmp) {
HXLINE( 303)				::lime::media::openal::AL_obj::sourcePlay(this->handle);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeAudioSource_obj,refillBuffers,(void))

void NativeAudioSource_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_310_stop)
HXLINE( 311)		bool _hx_tmp;
HXDLIN( 311)		bool _hx_tmp1;
HXDLIN( 311)		if (this->playing) {
HXLINE( 311)			_hx_tmp1 = ::hx::IsNotNull( this->handle );
            		}
            		else {
HXLINE( 311)			_hx_tmp1 = false;
            		}
HXDLIN( 311)		if (_hx_tmp1) {
HXLINE( 311)			_hx_tmp = ::hx::IsEq( ::lime::media::openal::AL_obj::getSourcei(this->handle,4112),4114 );
            		}
            		else {
HXLINE( 311)			_hx_tmp = false;
            		}
HXDLIN( 311)		if (_hx_tmp) {
HXLINE( 313)			::lime::media::openal::AL_obj::sourceStop(this->handle);
            		}
HXLINE( 316)		this->playing = false;
HXLINE( 318)		if (::hx::IsNotNull( this->streamTimer )) {
HXLINE( 320)			this->streamTimer->stop();
            		}
HXLINE( 323)		if (::hx::IsNotNull( this->timer )) {
HXLINE( 325)			this->timer->stop();
            		}
HXLINE( 328)		this->setCurrentTime(( (Float)(0) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,stop,(void))

void NativeAudioSource_obj::streamTimer_onRun(){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_334_streamTimer_onRun)
HXDLIN( 334)		this->refillBuffers(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,streamTimer_onRun,(void))

void NativeAudioSource_obj::timer_onRun(){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_338_timer_onRun)
HXLINE( 339)		if ((this->loops > 0)) {
HXLINE( 341)			this->playing = false;
HXLINE( 342)			this->loops--;
HXLINE( 343)			this->setCurrentTime(( (Float)(0) ));
HXLINE( 344)			this->play();
HXLINE( 345)			return;
            		}
            		else {
HXLINE( 349)			this->stop();
            		}
HXLINE( 352)		this->completed = true;
HXLINE( 353)		this->parent->onComplete->dispatch();
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,timer_onRun,(void))

Float NativeAudioSource_obj::getCurrentTime(){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_358_getCurrentTime)
HXLINE( 359)		if (this->completed) {
HXLINE( 361)			return this->getLength();
            		}
            		else {
HXLINE( 363)			if (::hx::IsNotNull( this->handle )) {
HXLINE( 365)				if (this->stream) {
HXLINE( 367)					int time = ::Std_obj::_hx_int((this->bufferTimeBlocks->__get(0) * ( (Float)(1000) )));
HXDLIN( 367)					int time1 = (time + ::Std_obj::_hx_int((::lime::media::openal::AL_obj::getSourcef(this->handle,4132) * ( (Float)(1000) ))));
HXDLIN( 367)					int time2 = (time1 - this->parent->offset);
HXLINE( 368)					if ((time2 < 0)) {
HXLINE( 368)						return ( (Float)(0) );
            					}
HXLINE( 369)					return ( (Float)(time2) );
            				}
            				else {
HXLINE( 373)					int offset = ( (int)(::lime::media::openal::AL_obj::getSourcei(this->handle,4134)) );
HXLINE( 374)					Float ratio = (( (Float)(offset) ) / ( (Float)(this->dataLength) ));
HXLINE( 375)					Float totalSeconds = (this->samples / ( (Float)(this->parent->buffer->sampleRate) ));
HXLINE( 377)					Float time = (((totalSeconds * ratio) * ( (Float)(1000) )) - ( (Float)(this->parent->offset) ));
HXLINE( 380)					if ((time < 0)) {
HXLINE( 380)						return ( (Float)(0) );
            					}
HXLINE( 381)					return time;
            				}
            			}
            		}
HXLINE( 385)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,getCurrentTime,return )

Float NativeAudioSource_obj::setCurrentTime(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_389_setCurrentTime)
HXLINE( 396)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 398)			if (this->stream) {
HXLINE( 400)				::lime::media::openal::AL_obj::sourceStop(this->handle);
HXLINE( 402)				this->parent->buffer->_hx___srcVorbisFile->timeSeek(((value + this->parent->offset) / ( (Float)(1000) )));
HXLINE( 403)				::lime::media::openal::AL_obj::sourceUnqueueBuffers(this->handle,::lime::_internal::backend::native::NativeAudioSource_obj::STREAM_NUM_BUFFERS);
HXLINE( 404)				this->refillBuffers(this->buffers);
HXLINE( 406)				if (this->playing) {
HXLINE( 406)					::lime::media::openal::AL_obj::sourcePlay(this->handle);
            				}
            			}
            			else {
HXLINE( 408)				if (::hx::IsNotNull( this->parent->buffer )) {
HXLINE( 410)					::lime::media::openal::AL_obj::sourceRewind(this->handle);
HXLINE( 414)					Float secondOffset = ((value + this->parent->offset) / ( (Float)(1000) ));
HXLINE( 415)					Float totalSeconds = (this->samples / ( (Float)(this->parent->buffer->sampleRate) ));
HXLINE( 417)					if ((secondOffset < 0)) {
HXLINE( 417)						secondOffset = ( (Float)(0) );
            					}
            					else {
HXLINE( 418)						if ((secondOffset > totalSeconds)) {
HXLINE( 418)							secondOffset = totalSeconds;
            						}
            					}
HXLINE( 420)					Float ratio = (secondOffset / totalSeconds);
HXLINE( 421)					int totalOffset = ::Std_obj::_hx_int((( (Float)(this->dataLength) ) * ratio));
HXLINE( 423)					::lime::media::openal::AL_obj::sourcei(this->handle,4134,totalOffset);
HXLINE( 424)					if (this->playing) {
HXLINE( 424)						::lime::media::openal::AL_obj::sourcePlay(this->handle);
            					}
            				}
            			}
            		}
HXLINE( 428)		if (this->playing) {
HXLINE( 430)			if (::hx::IsNotNull( this->timer )) {
HXLINE( 432)				this->timer->stop();
            			}
HXLINE( 435)			Float timeRemaining = (this->getLength() - value);
HXDLIN( 435)			Float timeRemaining1 = (timeRemaining / this->getPitch());
HXLINE( 437)			if ((timeRemaining1 > 0)) {
HXLINE( 439)				this->completed = false;
HXLINE( 440)				this->timer =  ::haxe::Timer_obj::__alloc( HX_CTX ,timeRemaining1);
HXLINE( 441)				this->timer->run = this->timer_onRun_dyn();
            			}
            			else {
HXLINE( 445)				this->playing = false;
HXLINE( 446)				this->completed = true;
            			}
            		}
HXLINE( 450)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeAudioSource_obj,setCurrentTime,return )

Float NativeAudioSource_obj::getGain(){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_455_getGain)
HXDLIN( 455)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 457)			return ::lime::media::openal::AL_obj::getSourcef(this->handle,4106);
            		}
            		else {
HXLINE( 461)			return ( (Float)(1) );
            		}
HXLINE( 455)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,getGain,return )

Float NativeAudioSource_obj::setGain(Float value){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_466_setGain)
HXLINE( 467)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 469)			::lime::media::openal::AL_obj::sourcef(this->handle,4106,value);
            		}
HXLINE( 472)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeAudioSource_obj,setGain,return )

Float NativeAudioSource_obj::getLength(){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_476_getLength)
HXLINE( 477)		if (::hx::IsNotNull( this->length )) {
HXLINE( 479)			return ( (Float)(this->length) );
            		}
HXLINE( 482)		return (((this->samples / ( (Float)(this->parent->buffer->sampleRate) )) * ( (Float)(1000) )) - ( (Float)(this->parent->offset) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,getLength,return )

Float NativeAudioSource_obj::setLength(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_486_setLength)
HXLINE( 487)		bool _hx_tmp;
HXDLIN( 487)		if (this->playing) {
HXLINE( 487)			_hx_tmp = ::hx::IsNotEq( this->length,value );
            		}
            		else {
HXLINE( 487)			_hx_tmp = false;
            		}
HXDLIN( 487)		if (_hx_tmp) {
HXLINE( 489)			if (::hx::IsNotNull( this->timer )) {
HXLINE( 491)				this->timer->stop();
            			}
HXLINE( 494)			Float timeRemaining = (value - this->getCurrentTime());
HXDLIN( 494)			Float timeRemaining1 = (timeRemaining / this->getPitch());
HXLINE( 496)			if ((timeRemaining1 > 0)) {
HXLINE( 498)				this->timer =  ::haxe::Timer_obj::__alloc( HX_CTX ,timeRemaining1);
HXLINE( 499)				this->timer->run = this->timer_onRun_dyn();
            			}
            		}
HXLINE( 503)		return ( (Float)((this->length = value)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeAudioSource_obj,setLength,return )

int NativeAudioSource_obj::getLoops(){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_508_getLoops)
HXDLIN( 508)		return this->loops;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,getLoops,return )

int NativeAudioSource_obj::setLoops(int value){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_513_setLoops)
HXDLIN( 513)		return (this->loops = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeAudioSource_obj,setLoops,return )

Float NativeAudioSource_obj::getPitch(){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_518_getPitch)
HXDLIN( 518)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 520)			return ::lime::media::openal::AL_obj::getSourcef(this->handle,4099);
            		}
            		else {
HXLINE( 524)			return ( (Float)(1) );
            		}
HXLINE( 518)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,getPitch,return )

Float NativeAudioSource_obj::setPitch(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_529_setPitch)
HXLINE( 530)		bool _hx_tmp;
HXDLIN( 530)		if (this->playing) {
HXLINE( 530)			_hx_tmp = (value != this->getPitch());
            		}
            		else {
HXLINE( 530)			_hx_tmp = false;
            		}
HXDLIN( 530)		if (_hx_tmp) {
HXLINE( 532)			if (::hx::IsNotNull( this->timer )) {
HXLINE( 534)				this->timer->stop();
            			}
HXLINE( 537)			Float timeRemaining = this->getLength();
HXDLIN( 537)			Float timeRemaining1 = ((timeRemaining - this->getCurrentTime()) / value);
HXLINE( 539)			if ((timeRemaining1 > 0)) {
HXLINE( 541)				this->timer =  ::haxe::Timer_obj::__alloc( HX_CTX ,timeRemaining1);
HXLINE( 542)				this->timer->run = this->timer_onRun_dyn();
            			}
            		}
HXLINE( 546)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 548)			::lime::media::openal::AL_obj::sourcef(this->handle,4099,value);
            		}
HXLINE( 551)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeAudioSource_obj,setPitch,return )

 ::lime::math::Vector4 NativeAudioSource_obj::getPosition(){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_555_getPosition)
HXLINE( 556)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 559)			::Array< Float > value = ::lime::media::openal::AL_obj::getSource3f(this->handle,4100);
HXLINE( 560)			this->position->x = value->__get(0);
HXLINE( 561)			this->position->y = value->__get(1);
HXLINE( 562)			this->position->z = value->__get(2);
            		}
HXLINE( 566)		return this->position;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,getPosition,return )

 ::lime::math::Vector4 NativeAudioSource_obj::setPosition( ::lime::math::Vector4 value){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_570_setPosition)
HXLINE( 571)		this->position->x = value->x;
HXLINE( 572)		this->position->y = value->y;
HXLINE( 573)		this->position->z = value->z;
HXLINE( 574)		this->position->w = value->w;
HXLINE( 576)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 578)			::lime::media::openal::AL_obj::distanceModel(0);
HXLINE( 579)			::lime::media::openal::AL_obj::source3f(this->handle,4100,this->position->x,this->position->y,this->position->z);
            		}
HXLINE( 582)		return this->position;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeAudioSource_obj,setPosition,return )

::Array< ::Dynamic> NativeAudioSource_obj::initBuffers;

int NativeAudioSource_obj::STREAM_BUFFER_SIZE;

int NativeAudioSource_obj::STREAM_NUM_BUFFERS;

int NativeAudioSource_obj::STREAM_TIMER_FREQUENCY;


::hx::ObjectPtr< NativeAudioSource_obj > NativeAudioSource_obj::__new( ::lime::media::AudioSource parent) {
	::hx::ObjectPtr< NativeAudioSource_obj > __this = new NativeAudioSource_obj();
	__this->__construct(parent);
	return __this;
}

::hx::ObjectPtr< NativeAudioSource_obj > NativeAudioSource_obj::__alloc(::hx::Ctx *_hx_ctx, ::lime::media::AudioSource parent) {
	NativeAudioSource_obj *__this = (NativeAudioSource_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NativeAudioSource_obj), true, "lime._internal.backend.native.NativeAudioSource"));
	*(void **)__this = NativeAudioSource_obj::_hx_vtable;
	__this->__construct(parent);
	return __this;
}

NativeAudioSource_obj::NativeAudioSource_obj()
{
}

void NativeAudioSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeAudioSource);
	HX_MARK_MEMBER_NAME(buffers,"buffers");
	HX_MARK_MEMBER_NAME(bufferTimeBlocks,"bufferTimeBlocks");
	HX_MARK_MEMBER_NAME(completed,"completed");
	HX_MARK_MEMBER_NAME(dataLength,"dataLength");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(loops,"loops");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(playing,"playing");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(samples,"samples");
	HX_MARK_MEMBER_NAME(stream,"stream");
	HX_MARK_MEMBER_NAME(streamTimer,"streamTimer");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(pcmTotal,"pcmTotal");
	HX_MARK_MEMBER_NAME(sampleRate,"sampleRate");
	HX_MARK_MEMBER_NAME(disposed,"disposed");
	HX_MARK_END_CLASS();
}

void NativeAudioSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffers,"buffers");
	HX_VISIT_MEMBER_NAME(bufferTimeBlocks,"bufferTimeBlocks");
	HX_VISIT_MEMBER_NAME(completed,"completed");
	HX_VISIT_MEMBER_NAME(dataLength,"dataLength");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(loops,"loops");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(playing,"playing");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(samples,"samples");
	HX_VISIT_MEMBER_NAME(stream,"stream");
	HX_VISIT_MEMBER_NAME(streamTimer,"streamTimer");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(pcmTotal,"pcmTotal");
	HX_VISIT_MEMBER_NAME(sampleRate,"sampleRate");
	HX_VISIT_MEMBER_NAME(disposed,"disposed");
}

::hx::Val NativeAudioSource_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { return ::hx::Val( loops ); }
		if (HX_FIELD_EQ(inName,"timer") ) { return ::hx::Val( timer ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return ::hx::Val( format ); }
		if (HX_FIELD_EQ(inName,"handle") ) { return ::hx::Val( handle ); }
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length ); }
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"stream") ) { return ::hx::Val( stream ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buffers") ) { return ::hx::Val( buffers ); }
		if (HX_FIELD_EQ(inName,"playing") ) { return ::hx::Val( playing ); }
		if (HX_FIELD_EQ(inName,"samples") ) { return ::hx::Val( samples ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"getGain") ) { return ::hx::Val( getGain_dyn() ); }
		if (HX_FIELD_EQ(inName,"setGain") ) { return ::hx::Val( setGain_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return ::hx::Val( position ); }
		if (HX_FIELD_EQ(inName,"pcmTotal") ) { return ::hx::Val( pcmTotal ); }
		if (HX_FIELD_EQ(inName,"disposed") ) { return ::hx::Val( disposed ); }
		if (HX_FIELD_EQ(inName,"getLoops") ) { return ::hx::Val( getLoops_dyn() ); }
		if (HX_FIELD_EQ(inName,"setLoops") ) { return ::hx::Val( setLoops_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPitch") ) { return ::hx::Val( getPitch_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPitch") ) { return ::hx::Val( setPitch_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"completed") ) { return ::hx::Val( completed ); }
		if (HX_FIELD_EQ(inName,"getLength") ) { return ::hx::Val( getLength_dyn() ); }
		if (HX_FIELD_EQ(inName,"setLength") ) { return ::hx::Val( setLength_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataLength") ) { return ::hx::Val( dataLength ); }
		if (HX_FIELD_EQ(inName,"sampleRate") ) { return ::hx::Val( sampleRate ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"streamTimer") ) { return ::hx::Val( streamTimer ); }
		if (HX_FIELD_EQ(inName,"timer_onRun") ) { return ::hx::Val( timer_onRun_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPosition") ) { return ::hx::Val( getPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return ::hx::Val( setPosition_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"refillBuffers") ) { return ::hx::Val( refillBuffers_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getCurrentTime") ) { return ::hx::Val( getCurrentTime_dyn() ); }
		if (HX_FIELD_EQ(inName,"setCurrentTime") ) { return ::hx::Val( setCurrentTime_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bufferTimeBlocks") ) { return ::hx::Val( bufferTimeBlocks ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"streamTimer_onRun") ) { return ::hx::Val( streamTimer_onRun_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"readVorbisFileBuffer") ) { return ::hx::Val( readVorbisFileBuffer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool NativeAudioSource_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"initBuffers") ) { outValue = ( initBuffers ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"STREAM_BUFFER_SIZE") ) { outValue = ( STREAM_BUFFER_SIZE ); return true; }
		if (HX_FIELD_EQ(inName,"STREAM_NUM_BUFFERS") ) { outValue = ( STREAM_NUM_BUFFERS ); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"STREAM_TIMER_FREQUENCY") ) { outValue = ( STREAM_TIMER_FREQUENCY ); return true; }
	}
	return false;
}

::hx::Val NativeAudioSource_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { loops=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast<  ::haxe::Timer >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::lime::media::AudioSource >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stream") ) { stream=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buffers") ) { buffers=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"playing") ) { playing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"samples") ) { samples=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast<  ::lime::math::Vector4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pcmTotal") ) { pcmTotal=inValue.Cast<  cpp::Int64Struct >(); return inValue; }
		if (HX_FIELD_EQ(inName,"disposed") ) { disposed=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"completed") ) { completed=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataLength") ) { dataLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sampleRate") ) { sampleRate=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"streamTimer") ) { streamTimer=inValue.Cast<  ::haxe::Timer >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bufferTimeBlocks") ) { bufferTimeBlocks=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NativeAudioSource_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"initBuffers") ) { initBuffers=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"STREAM_BUFFER_SIZE") ) { STREAM_BUFFER_SIZE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"STREAM_NUM_BUFFERS") ) { STREAM_NUM_BUFFERS=ioValue.Cast< int >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"STREAM_TIMER_FREQUENCY") ) { STREAM_TIMER_FREQUENCY=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void NativeAudioSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("buffers",73,a3,90,b1));
	outFields->push(HX_("bufferTimeBlocks",93,77,27,43));
	outFields->push(HX_("completed",8b,a1,38,4f));
	outFields->push(HX_("dataLength",b0,5a,a9,8a));
	outFields->push(HX_("format",37,8f,8e,fd));
	outFields->push(HX_("handle",a8,83,fd,b7));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("loops",8f,f1,f9,78));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("playing",6e,0f,18,8a));
	outFields->push(HX_("position",a9,a0,fa,ca));
	outFields->push(HX_("samples",09,c5,c9,83));
	outFields->push(HX_("stream",80,14,2d,11));
	outFields->push(HX_("streamTimer",25,cb,fb,7f));
	outFields->push(HX_("timer",c5,bf,35,10));
	outFields->push(HX_("pcmTotal",4a,f2,24,57));
	outFields->push(HX_("sampleRate",2a,3c,4c,67));
	outFields->push(HX_("disposed",e5,0a,a4,27));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NativeAudioSource_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(NativeAudioSource_obj,buffers),HX_("buffers",73,a3,90,b1)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(NativeAudioSource_obj,bufferTimeBlocks),HX_("bufferTimeBlocks",93,77,27,43)},
	{::hx::fsBool,(int)offsetof(NativeAudioSource_obj,completed),HX_("completed",8b,a1,38,4f)},
	{::hx::fsInt,(int)offsetof(NativeAudioSource_obj,dataLength),HX_("dataLength",b0,5a,a9,8a)},
	{::hx::fsInt,(int)offsetof(NativeAudioSource_obj,format),HX_("format",37,8f,8e,fd)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NativeAudioSource_obj,handle),HX_("handle",a8,83,fd,b7)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NativeAudioSource_obj,length),HX_("length",e6,94,07,9f)},
	{::hx::fsInt,(int)offsetof(NativeAudioSource_obj,loops),HX_("loops",8f,f1,f9,78)},
	{::hx::fsObject /*  ::lime::media::AudioSource */ ,(int)offsetof(NativeAudioSource_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsBool,(int)offsetof(NativeAudioSource_obj,playing),HX_("playing",6e,0f,18,8a)},
	{::hx::fsObject /*  ::lime::math::Vector4 */ ,(int)offsetof(NativeAudioSource_obj,position),HX_("position",a9,a0,fa,ca)},
	{::hx::fsFloat,(int)offsetof(NativeAudioSource_obj,samples),HX_("samples",09,c5,c9,83)},
	{::hx::fsBool,(int)offsetof(NativeAudioSource_obj,stream),HX_("stream",80,14,2d,11)},
	{::hx::fsObject /*  ::haxe::Timer */ ,(int)offsetof(NativeAudioSource_obj,streamTimer),HX_("streamTimer",25,cb,fb,7f)},
	{::hx::fsObject /*  ::haxe::Timer */ ,(int)offsetof(NativeAudioSource_obj,timer),HX_("timer",c5,bf,35,10)},
	{::hx::fsUnknown /*  cpp::Int64Struct */ ,(int)offsetof(NativeAudioSource_obj,pcmTotal),HX_("pcmTotal",4a,f2,24,57)},
	{::hx::fsInt,(int)offsetof(NativeAudioSource_obj,sampleRate),HX_("sampleRate",2a,3c,4c,67)},
	{::hx::fsBool,(int)offsetof(NativeAudioSource_obj,disposed),HX_("disposed",e5,0a,a4,27)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo NativeAudioSource_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &NativeAudioSource_obj::initBuffers,HX_("initBuffers",43,12,fb,69)},
	{::hx::fsInt,(void *) &NativeAudioSource_obj::STREAM_BUFFER_SIZE,HX_("STREAM_BUFFER_SIZE",21,aa,29,ff)},
	{::hx::fsInt,(void *) &NativeAudioSource_obj::STREAM_NUM_BUFFERS,HX_("STREAM_NUM_BUFFERS",7b,0f,d0,ac)},
	{::hx::fsInt,(void *) &NativeAudioSource_obj::STREAM_TIMER_FREQUENCY,HX_("STREAM_TIMER_FREQUENCY",23,49,97,07)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String NativeAudioSource_obj_sMemberFields[] = {
	HX_("buffers",73,a3,90,b1),
	HX_("bufferTimeBlocks",93,77,27,43),
	HX_("completed",8b,a1,38,4f),
	HX_("dataLength",b0,5a,a9,8a),
	HX_("format",37,8f,8e,fd),
	HX_("handle",a8,83,fd,b7),
	HX_("length",e6,94,07,9f),
	HX_("loops",8f,f1,f9,78),
	HX_("parent",2a,05,7e,ed),
	HX_("playing",6e,0f,18,8a),
	HX_("position",a9,a0,fa,ca),
	HX_("samples",09,c5,c9,83),
	HX_("stream",80,14,2d,11),
	HX_("streamTimer",25,cb,fb,7f),
	HX_("timer",c5,bf,35,10),
	HX_("pcmTotal",4a,f2,24,57),
	HX_("sampleRate",2a,3c,4c,67),
	HX_("disposed",e5,0a,a4,27),
	HX_("dispose",9f,80,4c,bb),
	HX_("init",10,3b,bb,45),
	HX_("play",f4,2d,5a,4a),
	HX_("pause",f6,d6,57,bd),
	HX_("readVorbisFileBuffer",45,45,75,21),
	HX_("refillBuffers",5d,46,6a,d5),
	HX_("stop",02,f0,5b,4c),
	HX_("streamTimer_onRun",92,f7,55,e4),
	HX_("timer_onRun",32,24,e9,57),
	HX_("getCurrentTime",f0,f7,2c,0d),
	HX_("setCurrentTime",64,e0,4c,2d),
	HX_("getGain",35,a0,e1,16),
	HX_("setGain",41,31,e3,09),
	HX_("getLength",1c,1e,5e,1b),
	HX_("setLength",28,0a,af,fe),
	HX_("getLoops",19,01,d1,d8),
	HX_("setLoops",8d,5a,2e,87),
	HX_("getPitch",4a,cb,77,22),
	HX_("setPitch",be,24,d5,d0),
	HX_("getPosition",5f,63,ee,f0),
	HX_("setPosition",6b,6a,5b,fb),
	::String(null()) };

static void NativeAudioSource_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeAudioSource_obj::initBuffers,"initBuffers");
	HX_MARK_MEMBER_NAME(NativeAudioSource_obj::STREAM_BUFFER_SIZE,"STREAM_BUFFER_SIZE");
	HX_MARK_MEMBER_NAME(NativeAudioSource_obj::STREAM_NUM_BUFFERS,"STREAM_NUM_BUFFERS");
	HX_MARK_MEMBER_NAME(NativeAudioSource_obj::STREAM_TIMER_FREQUENCY,"STREAM_TIMER_FREQUENCY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NativeAudioSource_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeAudioSource_obj::initBuffers,"initBuffers");
	HX_VISIT_MEMBER_NAME(NativeAudioSource_obj::STREAM_BUFFER_SIZE,"STREAM_BUFFER_SIZE");
	HX_VISIT_MEMBER_NAME(NativeAudioSource_obj::STREAM_NUM_BUFFERS,"STREAM_NUM_BUFFERS");
	HX_VISIT_MEMBER_NAME(NativeAudioSource_obj::STREAM_TIMER_FREQUENCY,"STREAM_TIMER_FREQUENCY");
};

#endif

::hx::Class NativeAudioSource_obj::__mClass;

static ::String NativeAudioSource_obj_sStaticFields[] = {
	HX_("initBuffers",43,12,fb,69),
	HX_("STREAM_BUFFER_SIZE",21,aa,29,ff),
	HX_("STREAM_NUM_BUFFERS",7b,0f,d0,ac),
	HX_("STREAM_TIMER_FREQUENCY",23,49,97,07),
	::String(null())
};

void NativeAudioSource_obj::__register()
{
	NativeAudioSource_obj _hx_dummy;
	NativeAudioSource_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.backend.native.NativeAudioSource",a8,f7,00,71);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeAudioSource_obj::__GetStatic;
	__mClass->mSetStaticField = &NativeAudioSource_obj::__SetStatic;
	__mClass->mMarkFunc = NativeAudioSource_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NativeAudioSource_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NativeAudioSource_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NativeAudioSource_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NativeAudioSource_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NativeAudioSource_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NativeAudioSource_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NativeAudioSource_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_21_boot)
HXDLIN(  21)		initBuffers = ::Array_obj< ::Dynamic>::__new(0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_23_boot)
HXDLIN(  23)		STREAM_BUFFER_SIZE = 48000;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_27_boot)
HXDLIN(  27)		STREAM_NUM_BUFFERS = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_29_boot)
HXDLIN(  29)		STREAM_TIMER_FREQUENCY = 100;
            	}
}

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native
