#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
#endif
#ifndef INCLUDED_cutscenes_DialogueBoxPsych
#include <cutscenes/DialogueBoxPsych.h>
#endif
#ifndef INCLUDED_cutscenes_DialogueCharacter
#include <cutscenes/DialogueCharacter.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_objects_Alphabet
#include <objects/Alphabet.h>
#endif
#ifndef INCLUDED_objects_TypedAlphabet
#include <objects/TypedAlphabet.h>
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
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_abed4712cfea8e8f_31_new,"cutscenes.DialogueBoxPsych","new",0xe85fdd5f,"cutscenes.DialogueBoxPsych.new","cutscenes/DialogueBoxPsych.hx",31,0xd915d790)
static const ::String _hx_array_data_ebf841ed_1[] = {
	HX_("normal",27,72,69,30),HX_("angry",21,49,e2,22),
};
HX_LOCAL_STACK_FRAME(_hx_pos_abed4712cfea8e8f_108_spawnCharacters,"cutscenes.DialogueBoxPsych","spawnCharacters",0x0d854244,"cutscenes.DialogueBoxPsych.spawnCharacters","cutscenes/DialogueBoxPsych.hx",108,0xd915d790)
HX_LOCAL_STACK_FRAME(_hx_pos_abed4712cfea8e8f_156_update,"cutscenes.DialogueBoxPsych","update",0xc596626a,"cutscenes.DialogueBoxPsych.update","cutscenes/DialogueBoxPsych.hx",156,0xd915d790)
static const ::String _hx_array_data_ebf841ed_17[] = {
	HX_("",00,00,00,00),HX_("center-",b8,f4,e5,19),
};
static const ::String _hx_array_data_ebf841ed_18[] = {
	HX_("",00,00,00,00),HX_("center-",b8,f4,e5,19),
};
HX_LOCAL_STACK_FRAME(_hx_pos_abed4712cfea8e8f_313_startNextDialog,"cutscenes.DialogueBoxPsych","startNextDialog",0xe54a4c9c,"cutscenes.DialogueBoxPsych.startNextDialog","cutscenes/DialogueBoxPsych.hx",313,0xd915d790)
HX_LOCAL_STACK_FRAME(_hx_pos_abed4712cfea8e8f_379_parseDialogue,"cutscenes.DialogueBoxPsych","parseDialogue",0xa663462a,"cutscenes.DialogueBoxPsych.parseDialogue","cutscenes/DialogueBoxPsych.hx",379,0xd915d790)
HX_LOCAL_STACK_FRAME(_hx_pos_abed4712cfea8e8f_389_updateBoxOffsets,"cutscenes.DialogueBoxPsych","updateBoxOffsets",0xdc7869bf,"cutscenes.DialogueBoxPsych.updateBoxOffsets","cutscenes/DialogueBoxPsych.hx",389,0xd915d790)
HX_LOCAL_STACK_FRAME(_hx_pos_abed4712cfea8e8f_33_boot,"cutscenes.DialogueBoxPsych","boot",0x639ad653,"cutscenes.DialogueBoxPsych.boot","cutscenes/DialogueBoxPsych.hx",33,0xd915d790)
HX_LOCAL_STACK_FRAME(_hx_pos_abed4712cfea8e8f_34_boot,"cutscenes.DialogueBoxPsych","boot",0x639ad653,"cutscenes.DialogueBoxPsych.boot","cutscenes/DialogueBoxPsych.hx",34,0xd915d790)
HX_LOCAL_STACK_FRAME(_hx_pos_abed4712cfea8e8f_35_boot,"cutscenes.DialogueBoxPsych","boot",0x639ad653,"cutscenes.DialogueBoxPsych.boot","cutscenes/DialogueBoxPsych.hx",35,0xd915d790)
HX_LOCAL_STACK_FRAME(_hx_pos_abed4712cfea8e8f_104_boot,"cutscenes.DialogueBoxPsych","boot",0x639ad653,"cutscenes.DialogueBoxPsych.boot","cutscenes/DialogueBoxPsych.hx",104,0xd915d790)
HX_LOCAL_STACK_FRAME(_hx_pos_abed4712cfea8e8f_105_boot,"cutscenes.DialogueBoxPsych","boot",0x639ad653,"cutscenes.DialogueBoxPsych.boot","cutscenes/DialogueBoxPsych.hx",105,0xd915d790)
HX_LOCAL_STACK_FRAME(_hx_pos_abed4712cfea8e8f_106_boot,"cutscenes.DialogueBoxPsych","boot",0x639ad653,"cutscenes.DialogueBoxPsych.boot","cutscenes/DialogueBoxPsych.hx",106,0xd915d790)
namespace cutscenes{

void DialogueBoxPsych_obj::__construct( ::Dynamic dialogueList,::String song){
            	HX_GC_STACKFRAME(&_hx_pos_abed4712cfea8e8f_31_new)
HXLINE( 311)		this->lastBoxType = HX_("",00,00,00,00);
HXLINE( 310)		this->lastCharacter = -1;
HXLINE( 154)		this->closeVolume = ((Float)1);
HXLINE( 153)		this->closeSound = HX_("dialogueClose",80,e3,49,e3);
HXLINE( 151)		this->ignoreThisFrame = true;
HXLINE( 150)		this->daText = null();
HXLINE( 102)		this->dialogueEnded = false;
HXLINE( 101)		this->dialogueStarted = false;
HXLINE(  55)		this->curCharacter = HX_("",00,00,00,00);
HXLINE(  53)		this->textBoxTypes = ::Array_obj< ::String >::fromData( _hx_array_data_ebf841ed_1,2);
HXLINE(  51)		this->offsetPos = ((Float)-600);
HXLINE(  50)		this->currentText = 0;
HXLINE(  48)		this->arrayCharacters = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  46)		this->textToType = HX_("",00,00,00,00);
HXLINE(  44)		this->bgFade = null();
HXLINE(  43)		this->skipDialogueThing = null();
HXLINE(  42)		this->nextDialogueThing = null();
HXLINE(  39)		this->dialogueList = null();
HXLINE(  36)		this->scrollSpeed = 4000;
HXLINE(  60)		super::__construct(null(),null(),null());
HXLINE(  62)		bool _hx_tmp;
HXDLIN(  62)		if (::hx::IsNotNull( song )) {
HXLINE(  62)			_hx_tmp = (song != HX_("",00,00,00,00));
            		}
            		else {
HXLINE(  62)			_hx_tmp = false;
            		}
HXDLIN(  62)		if (_hx_tmp) {
HXLINE(  63)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  63)			::String library = null();
HXDLIN(  63)			 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),song,library);
HXDLIN(  63)			_hx_tmp->playMusic(file,0,null(),null());
HXLINE(  64)			{
HXLINE(  64)				 ::flixel::sound::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  64)				 ::Dynamic onComplete = null();
HXDLIN(  64)				if (::hx::IsNull( _this->_channel )) {
HXLINE(  64)					_this->play(null(),null(),null());
            				}
HXDLIN(  64)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE(  64)					_this->fadeTween->cancel();
            				}
HXDLIN(  64)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),( (Float)(1) ),2, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
            		}
HXLINE(  67)		 ::flixel::FlxSprite _hx_tmp1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-500,-500,null());
HXDLIN(  67)		this->bgFade = _hx_tmp1->makeGraphic((::flixel::FlxG_obj::width * 2),(::flixel::FlxG_obj::height * 2),-1,null(),null());
HXLINE(  68)		{
HXLINE(  68)			 ::flixel::math::FlxBasePoint this1 = this->bgFade->scrollFactor;
HXDLIN(  68)			this1->set_x(( (Float)(0) ));
HXDLIN(  68)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  69)		this->bgFade->set_visible(true);
HXLINE(  70)		this->bgFade->set_alpha(( (Float)(0) ));
HXLINE(  71)		this->add(this->bgFade);
HXLINE(  73)		this->dialogueList = dialogueList;
HXLINE(  74)		this->spawnCharacters();
HXLINE(  76)		this->box =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,70,370,null());
HXLINE(  77)		this->box->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  78)		 ::flixel::FlxSprite _hx_tmp2 = this->box;
HXDLIN(  78)		::String library = null();
HXDLIN(  78)		 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(HX_("speech_bubble",49,db,97,da),null(),true);
HXDLIN(  78)		bool xmlExists = false;
HXDLIN(  78)		::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("speech_bubble",49,db,97,da)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN(  78)		if (::sys::FileSystem_obj::exists(xml)) {
HXLINE(  78)			xmlExists = true;
            		}
HXDLIN(  78)		 ::Dynamic _hx_tmp3;
HXDLIN(  78)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  78)			_hx_tmp3 = imageLoaded;
            		}
            		else {
HXLINE(  78)			_hx_tmp3 = ::backend::Paths_obj::image(HX_("speech_bubble",49,db,97,da),library,true);
            		}
HXDLIN(  78)		::String _hx_tmp4;
HXDLIN(  78)		if (xmlExists) {
HXLINE(  78)			_hx_tmp4 = ::sys::io::File_obj::getContent(xml);
            		}
            		else {
HXLINE(  78)			_hx_tmp4 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("speech_bubble",49,db,97,da)) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            		}
HXDLIN(  78)		_hx_tmp2->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp3,_hx_tmp4));
HXLINE(  79)		{
HXLINE(  79)			 ::flixel::math::FlxBasePoint this2 = this->box->scrollFactor;
HXDLIN(  79)			this2->set_x(( (Float)(0) ));
HXDLIN(  79)			this2->set_y(( (Float)(0) ));
            		}
HXLINE(  80)		this->box->animation->addByPrefix(HX_("normal",27,72,69,30),HX_("speech bubble normal",bd,d5,bc,a7),24,null(),null(),null());
HXLINE(  81)		this->box->animation->addByPrefix(HX_("normalOpen",91,41,38,70),HX_("Speech Bubble Normal Open",0d,59,3f,7c),24,false,null(),null());
HXLINE(  82)		this->box->animation->addByPrefix(HX_("angry",21,49,e2,22),HX_("AHH speech bubble",eb,de,b2,20),24,null(),null(),null());
HXLINE(  83)		this->box->animation->addByPrefix(HX_("angryOpen",8b,1d,01,b1),HX_("speech bubble loud open",42,35,10,f0),24,false,null(),null());
HXLINE(  84)		this->box->animation->addByPrefix(HX_("center-normal",df,c0,ab,9c),HX_("speech bubble middle",eb,36,b2,c3),24,null(),null(),null());
HXLINE(  85)		this->box->animation->addByPrefix(HX_("center-normalOpen",49,4c,74,58),HX_("Speech Bubble Middle Open",1f,f1,94,ea),24,false,null(),null());
HXLINE(  86)		this->box->animation->addByPrefix(HX_("center-angry",69,39,92,b0),HX_("AHH Speech Bubble middle",ea,0b,3d,74),24,null(),null(),null());
HXLINE(  87)		this->box->animation->addByPrefix(HX_("center-angryOpen",d3,d1,42,e2),HX_("speech bubble Middle loud open",c3,b9,85,ee),24,false,null(),null());
HXLINE(  88)		this->box->animation->play(HX_("normal",27,72,69,30),true,null(),null());
HXLINE(  89)		this->box->set_visible(false);
HXLINE(  90)		 ::flixel::FlxSprite _hx_tmp5 = this->box;
HXDLIN(  90)		_hx_tmp5->setGraphicSize(::Std_obj::_hx_int((this->box->get_width() * ((Float)0.9))),null());
HXLINE(  91)		this->box->updateHitbox();
HXLINE(  92)		this->add(this->box);
HXLINE(  94)		this->daText =  ::objects::TypedAlphabet_obj::__alloc( HX_CTX ,( (Float)(::cutscenes::DialogueBoxPsych_obj::DEFAULT_TEXT_X) ),( (Float)(::cutscenes::DialogueBoxPsych_obj::DEFAULT_TEXT_Y) ),HX_("",00,00,00,00),null(),null());
HXLINE(  95)		this->daText->setScale(((Float)0.7),null());
HXLINE(  96)		this->add(this->daText);
HXLINE(  98)		this->startNextDialog();
            	}

Dynamic DialogueBoxPsych_obj::__CreateEmpty() { return new DialogueBoxPsych_obj; }

void *DialogueBoxPsych_obj::_hx_vtable = 0;

Dynamic DialogueBoxPsych_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DialogueBoxPsych_obj > _hx_result = new DialogueBoxPsych_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool DialogueBoxPsych_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x35dbe371) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x35dbe371;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void DialogueBoxPsych_obj::spawnCharacters(){
            	HX_GC_STACKFRAME(&_hx_pos_abed4712cfea8e8f_108_spawnCharacters)
HXLINE( 109)		 ::haxe::ds::StringMap charsMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 110)		{
HXLINE( 110)			int _g = 0;
HXDLIN( 110)			int _g1 = ( (::Array< ::Dynamic>)(this->dialogueList->__Field(HX_("dialogue",18,2d,94,a7),::hx::paccDynamic)) )->length;
HXDLIN( 110)			while((_g < _g1)){
HXLINE( 110)				_g = (_g + 1);
HXDLIN( 110)				int i = (_g - 1);
HXLINE( 111)				if (::hx::IsNotNull(  ::Dynamic(this->dialogueList->__Field(HX_("dialogue",18,2d,94,a7),::hx::paccDynamic))->__GetItem(i) )) {
HXLINE( 112)					::String charToAdd = ( (::String)( ::Dynamic(this->dialogueList->__Field(HX_("dialogue",18,2d,94,a7),::hx::paccDynamic))->__GetItem(i)->__Field(HX_("portrait",5b,21,af,b8),::hx::paccDynamic)) );
HXLINE( 113)					bool _hx_tmp;
HXDLIN( 113)					if (charsMap->exists(charToAdd)) {
HXLINE( 113)						_hx_tmp = !(( (bool)(charsMap->get(charToAdd)) ));
            					}
            					else {
HXLINE( 113)						_hx_tmp = true;
            					}
HXDLIN( 113)					if (_hx_tmp) {
HXLINE( 114)						charsMap->set(charToAdd,true);
            					}
            				}
            			}
            		}
HXLINE( 119)		{
HXLINE( 119)			 ::Dynamic individualChar = charsMap->keys();
HXDLIN( 119)			while(( (bool)(individualChar->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 119)				::String individualChar1 = ( (::String)(individualChar->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 120)				Float x = ::cutscenes::DialogueBoxPsych_obj::LEFT_CHAR_X;
HXLINE( 121)				Float y = ::cutscenes::DialogueBoxPsych_obj::DEFAULT_CHAR_Y;
HXLINE( 122)				 ::cutscenes::DialogueCharacter _hx_char =  ::cutscenes::DialogueCharacter_obj::__alloc( HX_CTX ,(x + this->offsetPos),y,individualChar1);
HXLINE( 123)				Float _hx_tmp = _hx_char->get_width();
HXDLIN( 123)				_hx_char->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp * ::cutscenes::DialogueCharacter_obj::DEFAULT_SCALE) * ( (Float)(_hx_char->jsonFile->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic)) ))),null());
HXLINE( 124)				_hx_char->updateHitbox();
HXLINE( 125)				{
HXLINE( 125)					 ::flixel::math::FlxBasePoint this1 = _hx_char->scrollFactor;
HXDLIN( 125)					this1->set_x(( (Float)(0) ));
HXDLIN( 125)					this1->set_y(( (Float)(0) ));
            				}
HXLINE( 126)				_hx_char->set_alpha(((Float)0.00001));
HXLINE( 127)				this->add(_hx_char);
HXLINE( 129)				bool saveY = false;
HXLINE( 130)				::String _hx_switch_0 = ( (::String)(_hx_char->jsonFile->__Field(HX_("dialogue_pos",ad,3b,6d,1a),::hx::paccDynamic)) );
            				if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 132)					_hx_char->set_x((( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )));
HXLINE( 133)					Float char1 = _hx_char->x;
HXDLIN( 133)					_hx_char->set_x((char1 - (_hx_char->get_width() / ( (Float)(2) ))));
HXLINE( 134)					y = _hx_char->y;
HXLINE( 135)					_hx_char->set_y(( (Float)((::flixel::FlxG_obj::height + 50)) ));
HXLINE( 136)					saveY = true;
HXLINE( 131)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 138)					int x1 = ::flixel::FlxG_obj::width;
HXDLIN( 138)					Float x2 = (( (Float)(x1) ) - _hx_char->get_width());
HXDLIN( 138)					x = (x2 + ::cutscenes::DialogueBoxPsych_obj::RIGHT_CHAR_X);
HXLINE( 139)					_hx_char->set_x((x - this->offsetPos));
HXLINE( 137)					goto _hx_goto_4;
            				}
            				_hx_goto_4:;
HXLINE( 141)				x = (x +  ::Dynamic(_hx_char->jsonFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(0));
HXLINE( 142)				y = (y +  ::Dynamic(_hx_char->jsonFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(1));
HXLINE( 143)				_hx_char->set_x((_hx_char->x +  ::Dynamic(_hx_char->jsonFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(0)));
HXLINE( 144)				_hx_char->set_y((_hx_char->y +  ::Dynamic(_hx_char->jsonFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(1)));
HXLINE( 145)				Float _hx_tmp1;
HXDLIN( 145)				if (saveY) {
HXLINE( 145)					_hx_tmp1 = y;
            				}
            				else {
HXLINE( 145)					_hx_tmp1 = x;
            				}
HXDLIN( 145)				_hx_char->startingPos = _hx_tmp1;
HXLINE( 146)				this->arrayCharacters->push(_hx_char);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBoxPsych_obj,spawnCharacters,(void))

void DialogueBoxPsych_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_abed4712cfea8e8f_156_update)
HXLINE( 157)		if (this->ignoreThisFrame) {
HXLINE( 158)			this->ignoreThisFrame = false;
HXLINE( 159)			this->super::update(elapsed);
HXLINE( 160)			return;
            		}
HXLINE( 163)		if (!(this->dialogueEnded)) {
HXLINE( 164)			 ::flixel::FlxSprite fh = this->bgFade;
HXDLIN( 164)			fh->set_alpha((fh->alpha + (((Float)0.5) * elapsed)));
HXLINE( 165)			if ((this->bgFade->alpha > ((Float)0.5))) {
HXLINE( 165)				this->bgFade->set_alpha(((Float)0.5));
            			}
HXLINE( 167)			if (::backend::Controls_obj::instance->get_ACCEPT()) {
HXLINE( 168)				if (!(this->daText->finishedText)) {
HXLINE( 169)					this->daText->finishText();
HXLINE( 170)					if (::hx::IsNotNull( this->skipDialogueThing )) {
HXLINE( 171)						this->skipDialogueThing();
            					}
            				}
            				else {
HXLINE( 173)					if ((this->currentText >= ( (::Array< ::Dynamic>)(this->dialogueList->__Field(HX_("dialogue",18,2d,94,a7),::hx::paccDynamic)) )->length)) {
HXLINE( 174)						this->dialogueEnded = true;
HXLINE( 175)						{
HXLINE( 175)							int _g = 0;
HXDLIN( 175)							int _g1 = this->textBoxTypes->length;
HXDLIN( 175)							while((_g < _g1)){
HXLINE( 175)								_g = (_g + 1);
HXDLIN( 175)								int i = (_g - 1);
HXLINE( 176)								::Array< ::String > checkArray = ::Array_obj< ::String >::fromData( _hx_array_data_ebf841ed_17,2);
HXLINE( 177)								::String animName = this->box->animation->_curAnim->name;
HXLINE( 178)								{
HXLINE( 178)									int _g1 = 0;
HXDLIN( 178)									int _g2 = checkArray->length;
HXDLIN( 178)									while((_g1 < _g2)){
HXLINE( 178)										_g1 = (_g1 + 1);
HXDLIN( 178)										int j = (_g1 - 1);
HXLINE( 179)										bool _hx_tmp;
HXDLIN( 179)										if ((animName != (checkArray->__get(j) + this->textBoxTypes->__get(i)))) {
HXLINE( 179)											_hx_tmp = (animName == ((checkArray->__get(j) + this->textBoxTypes->__get(i)) + HX_("Open",ea,2f,8d,34)));
            										}
            										else {
HXLINE( 179)											_hx_tmp = true;
            										}
HXDLIN( 179)										if (_hx_tmp) {
HXLINE( 180)											this->box->animation->play(((checkArray->__get(j) + this->textBoxTypes->__get(i)) + HX_("Open",ea,2f,8d,34)),true,null(),null());
            										}
            									}
            								}
            							}
            						}
HXLINE( 185)						this->box->animation->_curAnim->set_curFrame((this->box->animation->_curAnim->frames->length - 1));
HXLINE( 186)						this->box->animation->_curAnim->reverse();
HXLINE( 187)						if (::hx::IsNotNull( this->daText )) {
HXLINE( 189)							this->daText->kill();
HXLINE( 190)							this->remove(this->daText,null());
HXLINE( 191)							this->daText->destroy();
            						}
HXLINE( 193)						::cutscenes::DialogueBoxPsych_obj::updateBoxOffsets(this->box);
HXLINE( 194)						{
HXLINE( 194)							 ::flixel::sound::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 194)							 ::Dynamic To = 0;
HXDLIN( 194)							 ::Dynamic onComplete = null();
HXDLIN( 194)							if (::hx::IsNull( To )) {
HXLINE( 194)								To = 0;
            							}
HXDLIN( 194)							if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 194)								_this->fadeTween->cancel();
            							}
HXDLIN( 194)							_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(_this->_volume,( (Float)(To) ),1, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            						}
            					}
            					else {
HXLINE( 196)						this->startNextDialog();
            					}
            				}
HXLINE( 198)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 198)				 ::openfl::media::Sound _hx_tmp1 = ::backend::Paths_obj::sound(this->closeSound,null());
HXDLIN( 198)				_hx_tmp->play(_hx_tmp1,this->closeVolume,null(),null(),null(),null());
            			}
            			else {
HXLINE( 199)				if (this->daText->finishedText) {
HXLINE( 200)					 ::cutscenes::DialogueCharacter _hx_char = this->arrayCharacters->__get(this->lastCharacter).StaticCast<  ::cutscenes::DialogueCharacter >();
HXLINE( 201)					bool _hx_tmp;
HXDLIN( 201)					bool _hx_tmp1;
HXDLIN( 201)					bool _hx_tmp2;
HXDLIN( 201)					if (::hx::IsNotNull( _hx_char )) {
HXLINE( 201)						_hx_tmp2 = ::hx::IsNotNull( _hx_char->animation->_curAnim );
            					}
            					else {
HXLINE( 201)						_hx_tmp2 = false;
            					}
HXDLIN( 201)					if (_hx_tmp2) {
HXLINE( 201)						_hx_tmp1 = _hx_char->animationIsLoop();
            					}
            					else {
HXLINE( 201)						_hx_tmp1 = false;
            					}
HXDLIN( 201)					if (_hx_tmp1) {
HXLINE( 201)						_hx_tmp = _hx_char->animation->get_finished();
            					}
            					else {
HXLINE( 201)						_hx_tmp = false;
            					}
HXDLIN( 201)					if (_hx_tmp) {
HXLINE( 202)						_hx_char->playAnim(_hx_char->animation->_curAnim->name,true);
            					}
            				}
            				else {
HXLINE( 205)					 ::cutscenes::DialogueCharacter _hx_char = this->arrayCharacters->__get(this->lastCharacter).StaticCast<  ::cutscenes::DialogueCharacter >();
HXLINE( 206)					bool _hx_tmp;
HXDLIN( 206)					bool _hx_tmp1;
HXDLIN( 206)					if (::hx::IsNotNull( _hx_char )) {
HXLINE( 206)						_hx_tmp1 = ::hx::IsNotNull( _hx_char->animation->_curAnim );
            					}
            					else {
HXLINE( 206)						_hx_tmp1 = false;
            					}
HXDLIN( 206)					if (_hx_tmp1) {
HXLINE( 206)						_hx_tmp = _hx_char->animation->get_finished();
            					}
            					else {
HXLINE( 206)						_hx_tmp = false;
            					}
HXDLIN( 206)					if (_hx_tmp) {
HXLINE( 207)						_hx_char->animation->_curAnim->restart();
            					}
            				}
            			}
HXLINE( 211)			if (this->box->animation->_curAnim->finished) {
HXLINE( 212)				{
HXLINE( 212)					int _g = 0;
HXDLIN( 212)					int _g1 = this->textBoxTypes->length;
HXDLIN( 212)					while((_g < _g1)){
HXLINE( 212)						_g = (_g + 1);
HXDLIN( 212)						int i = (_g - 1);
HXLINE( 213)						::Array< ::String > checkArray = ::Array_obj< ::String >::fromData( _hx_array_data_ebf841ed_18,2);
HXLINE( 214)						::String animName = this->box->animation->_curAnim->name;
HXLINE( 215)						{
HXLINE( 215)							int _g1 = 0;
HXDLIN( 215)							int _g2 = checkArray->length;
HXDLIN( 215)							while((_g1 < _g2)){
HXLINE( 215)								_g1 = (_g1 + 1);
HXDLIN( 215)								int j = (_g1 - 1);
HXLINE( 216)								bool _hx_tmp;
HXDLIN( 216)								if ((animName != (checkArray->__get(j) + this->textBoxTypes->__get(i)))) {
HXLINE( 216)									_hx_tmp = (animName == ((checkArray->__get(j) + this->textBoxTypes->__get(i)) + HX_("Open",ea,2f,8d,34)));
            								}
            								else {
HXLINE( 216)									_hx_tmp = true;
            								}
HXDLIN( 216)								if (_hx_tmp) {
HXLINE( 217)									this->box->animation->play((checkArray->__get(j) + this->textBoxTypes->__get(i)),true,null(),null());
            								}
            							}
            						}
            					}
            				}
HXLINE( 221)				::cutscenes::DialogueBoxPsych_obj::updateBoxOffsets(this->box);
            			}
HXLINE( 224)			bool _hx_tmp;
HXDLIN( 224)			if ((this->lastCharacter != -1)) {
HXLINE( 224)				_hx_tmp = (this->arrayCharacters->length > 0);
            			}
            			else {
HXLINE( 224)				_hx_tmp = false;
            			}
HXDLIN( 224)			if (_hx_tmp) {
HXLINE( 225)				int _g = 0;
HXDLIN( 225)				int _g1 = this->arrayCharacters->length;
HXDLIN( 225)				while((_g < _g1)){
HXLINE( 225)					_g = (_g + 1);
HXDLIN( 225)					int i = (_g - 1);
HXLINE( 226)					 ::cutscenes::DialogueCharacter _hx_char = this->arrayCharacters->__get(i).StaticCast<  ::cutscenes::DialogueCharacter >();
HXLINE( 227)					if (::hx::IsNotNull( _hx_char )) {
HXLINE( 228)						if ((i != this->lastCharacter)) {
HXLINE( 229)							::String _hx_switch_0 = ( (::String)(_hx_char->jsonFile->__Field(HX_("dialogue_pos",ad,3b,6d,1a),::hx::paccDynamic)) );
            							if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 234)								_hx_char->set_y((_hx_char->y + (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 235)								if ((_hx_char->y > (_hx_char->startingPos + ::flixel::FlxG_obj::height))) {
HXLINE( 235)									_hx_char->set_y((_hx_char->startingPos + ::flixel::FlxG_obj::height));
            								}
HXLINE( 233)								goto _hx_goto_11;
            							}
            							if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE( 231)								_hx_char->set_x((_hx_char->x - (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 232)								if ((_hx_char->x < (_hx_char->startingPos + this->offsetPos))) {
HXLINE( 232)									_hx_char->set_x((_hx_char->startingPos + this->offsetPos));
            								}
HXLINE( 230)								goto _hx_goto_11;
            							}
            							if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 237)								_hx_char->set_x((_hx_char->x + (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 238)								if ((_hx_char->x > (_hx_char->startingPos - this->offsetPos))) {
HXLINE( 238)									_hx_char->set_x((_hx_char->startingPos - this->offsetPos));
            								}
HXLINE( 236)								goto _hx_goto_11;
            							}
            							_hx_goto_11:;
HXLINE( 240)							_hx_char->set_alpha((_hx_char->alpha - (( (Float)(3) ) * elapsed)));
HXLINE( 241)							if ((_hx_char->alpha < ((Float)0.00001))) {
HXLINE( 241)								_hx_char->set_alpha(((Float)0.00001));
            							}
            						}
            						else {
HXLINE( 243)							::String _hx_switch_1 = ( (::String)(_hx_char->jsonFile->__Field(HX_("dialogue_pos",ad,3b,6d,1a),::hx::paccDynamic)) );
            							if (  (_hx_switch_1==HX_("center",d5,25,db,05)) ){
HXLINE( 248)								_hx_char->set_y((_hx_char->y - (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 249)								if ((_hx_char->y < _hx_char->startingPos)) {
HXLINE( 249)									_hx_char->set_y(_hx_char->startingPos);
            								}
HXLINE( 247)								goto _hx_goto_12;
            							}
            							if (  (_hx_switch_1==HX_("left",07,08,b0,47)) ){
HXLINE( 245)								_hx_char->set_x((_hx_char->x + (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 246)								if ((_hx_char->x > _hx_char->startingPos)) {
HXLINE( 246)									_hx_char->set_x(_hx_char->startingPos);
            								}
HXLINE( 244)								goto _hx_goto_12;
            							}
            							if (  (_hx_switch_1==HX_("right",dc,0b,64,e9)) ){
HXLINE( 251)								_hx_char->set_x((_hx_char->x - (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 252)								if ((_hx_char->x < _hx_char->startingPos)) {
HXLINE( 252)									_hx_char->set_x(_hx_char->startingPos);
            								}
HXLINE( 250)								goto _hx_goto_12;
            							}
            							_hx_goto_12:;
HXLINE( 254)							_hx_char->set_alpha((_hx_char->alpha + (( (Float)(3) ) * elapsed)));
HXLINE( 255)							if ((_hx_char->alpha > 1)) {
HXLINE( 255)								_hx_char->set_alpha(( (Float)(1) ));
            							}
            						}
            					}
            				}
            			}
            		}
            		else {
HXLINE( 261)			bool _hx_tmp;
HXDLIN( 261)			if (::hx::IsNotNull( this->box )) {
HXLINE( 261)				_hx_tmp = (this->box->animation->_curAnim->curFrame <= 0);
            			}
            			else {
HXLINE( 261)				_hx_tmp = false;
            			}
HXDLIN( 261)			if (_hx_tmp) {
HXLINE( 262)				this->box->kill();
HXLINE( 263)				this->remove(this->box,null());
HXLINE( 264)				this->box->destroy();
HXLINE( 265)				this->box = null();
            			}
HXLINE( 268)			if (::hx::IsNotNull( this->bgFade )) {
HXLINE( 269)				 ::flixel::FlxSprite fh = this->bgFade;
HXDLIN( 269)				fh->set_alpha((fh->alpha - (((Float)0.5) * elapsed)));
HXLINE( 270)				if ((this->bgFade->alpha <= 0)) {
HXLINE( 271)					this->bgFade->kill();
HXLINE( 272)					this->remove(this->bgFade,null());
HXLINE( 273)					this->bgFade->destroy();
HXLINE( 274)					this->bgFade = null();
            				}
            			}
HXLINE( 278)			{
HXLINE( 278)				int _g = 0;
HXDLIN( 278)				int _g1 = this->arrayCharacters->length;
HXDLIN( 278)				while((_g < _g1)){
HXLINE( 278)					_g = (_g + 1);
HXDLIN( 278)					int i = (_g - 1);
HXLINE( 279)					 ::cutscenes::DialogueCharacter leChar = this->arrayCharacters->__get(i).StaticCast<  ::cutscenes::DialogueCharacter >();
HXLINE( 280)					if (::hx::IsNotNull( leChar )) {
HXLINE( 281)						::String _hx_switch_2 = ( (::String)(this->arrayCharacters->__get(i).StaticCast<  ::cutscenes::DialogueCharacter >()->jsonFile->__Field(HX_("dialogue_pos",ad,3b,6d,1a),::hx::paccDynamic)) );
            						if (  (_hx_switch_2==HX_("center",d5,25,db,05)) ){
HXLINE( 285)							leChar->set_y((leChar->y + (( (Float)(this->scrollSpeed) ) * elapsed)));
HXDLIN( 285)							goto _hx_goto_14;
            						}
            						if (  (_hx_switch_2==HX_("left",07,08,b0,47)) ){
HXLINE( 283)							leChar->set_x((leChar->x - (( (Float)(this->scrollSpeed) ) * elapsed)));
HXDLIN( 283)							goto _hx_goto_14;
            						}
            						if (  (_hx_switch_2==HX_("right",dc,0b,64,e9)) ){
HXLINE( 287)							leChar->set_x((leChar->x + (( (Float)(this->scrollSpeed) ) * elapsed)));
HXDLIN( 287)							goto _hx_goto_14;
            						}
            						_hx_goto_14:;
HXLINE( 289)						leChar->set_alpha((leChar->alpha - (elapsed * ( (Float)(10) ))));
            					}
            				}
            			}
HXLINE( 293)			bool _hx_tmp1;
HXDLIN( 293)			if (::hx::IsNull( this->box )) {
HXLINE( 293)				_hx_tmp1 = ::hx::IsNull( this->bgFade );
            			}
            			else {
HXLINE( 293)				_hx_tmp1 = false;
            			}
HXDLIN( 293)			if (_hx_tmp1) {
HXLINE( 294)				{
HXLINE( 294)					int _g = 0;
HXDLIN( 294)					int _g1 = this->arrayCharacters->length;
HXDLIN( 294)					while((_g < _g1)){
HXLINE( 294)						_g = (_g + 1);
HXDLIN( 294)						int i = (_g - 1);
HXLINE( 295)						 ::cutscenes::DialogueCharacter leChar = this->arrayCharacters->__get(0).StaticCast<  ::cutscenes::DialogueCharacter >();
HXLINE( 296)						if (::hx::IsNotNull( leChar )) {
HXLINE( 297)							this->arrayCharacters->remove(leChar);
HXLINE( 298)							leChar->kill();
HXLINE( 299)							this->remove(leChar,null());
HXLINE( 300)							leChar->destroy();
            						}
            					}
            				}
HXLINE( 303)				this->finishThing();
HXLINE( 304)				this->kill();
            			}
            		}
HXLINE( 307)		this->super::update(elapsed);
            	}


void DialogueBoxPsych_obj::startNextDialog(){
            	HX_STACKFRAME(&_hx_pos_abed4712cfea8e8f_313_startNextDialog)
HXLINE( 314)		 ::Dynamic curDialogue = null();
HXLINE( 315)		while(true){
HXLINE( 316)			curDialogue =  ::Dynamic(this->dialogueList->__Field(HX_("dialogue",18,2d,94,a7),::hx::paccDynamic))->__GetItem(this->currentText);
HXLINE( 315)			if (!(::hx::IsNull( curDialogue ))) {
HXLINE( 315)				goto _hx_goto_19;
            			}
            		}
            		_hx_goto_19:;
HXLINE( 319)		bool _hx_tmp;
HXDLIN( 319)		if (::hx::IsNotNull( curDialogue->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic) )) {
HXLINE( 319)			_hx_tmp = (( (::String)(curDialogue->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic)) ).length < 1);
            		}
            		else {
HXLINE( 319)			_hx_tmp = true;
            		}
HXDLIN( 319)		if (_hx_tmp) {
HXLINE( 319)			curDialogue->__SetField(HX_("text",ad,cc,f9,4c),HX_(" ",20,00,00,00),::hx::paccDynamic);
            		}
HXLINE( 320)		if (::hx::IsNull( curDialogue->__Field(HX_("boxState",06,60,2a,ff),::hx::paccDynamic) )) {
HXLINE( 320)			curDialogue->__SetField(HX_("boxState",06,60,2a,ff),HX_("normal",27,72,69,30),::hx::paccDynamic);
            		}
HXLINE( 321)		bool _hx_tmp1;
HXDLIN( 321)		if (::hx::IsNotNull( curDialogue->__Field(HX_("speed",87,97,69,81),::hx::paccDynamic) )) {
HXLINE( 321)			_hx_tmp1 = ::Math_obj::isNaN(( (Float)(curDialogue->__Field(HX_("speed",87,97,69,81),::hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 321)			_hx_tmp1 = true;
            		}
HXDLIN( 321)		if (_hx_tmp1) {
HXLINE( 321)			curDialogue->__SetField(HX_("speed",87,97,69,81),((Float)0.05),::hx::paccDynamic);
            		}
HXLINE( 323)		::String animName = ( (::String)(curDialogue->__Field(HX_("boxState",06,60,2a,ff),::hx::paccDynamic)) );
HXLINE( 324)		::String boxType = this->textBoxTypes->__get(0);
HXLINE( 325)		{
HXLINE( 325)			int _g = 0;
HXDLIN( 325)			int _g1 = this->textBoxTypes->length;
HXDLIN( 325)			while((_g < _g1)){
HXLINE( 325)				_g = (_g + 1);
HXDLIN( 325)				int i = (_g - 1);
HXLINE( 326)				if ((this->textBoxTypes->__get(i) == animName)) {
HXLINE( 327)					boxType = animName;
            				}
            			}
            		}
HXLINE( 331)		int character = 0;
HXLINE( 332)		this->box->set_visible(true);
HXLINE( 333)		{
HXLINE( 333)			int _g2 = 0;
HXDLIN( 333)			int _g3 = this->arrayCharacters->length;
HXDLIN( 333)			while((_g2 < _g3)){
HXLINE( 333)				_g2 = (_g2 + 1);
HXDLIN( 333)				int i = (_g2 - 1);
HXLINE( 334)				if (::hx::IsEq( this->arrayCharacters->__get(i).StaticCast<  ::cutscenes::DialogueCharacter >()->curCharacter,curDialogue->__Field(HX_("portrait",5b,21,af,b8),::hx::paccDynamic) )) {
HXLINE( 335)					character = i;
HXLINE( 336)					goto _hx_goto_21;
            				}
            			}
            			_hx_goto_21:;
            		}
HXLINE( 339)		::String centerPrefix = HX_("",00,00,00,00);
HXLINE( 340)		::String lePosition = ( (::String)(this->arrayCharacters->__get(character).StaticCast<  ::cutscenes::DialogueCharacter >()->jsonFile->__Field(HX_("dialogue_pos",ad,3b,6d,1a),::hx::paccDynamic)) );
HXLINE( 341)		if ((lePosition == HX_("center",d5,25,db,05))) {
HXLINE( 341)			centerPrefix = HX_("center-",b8,f4,e5,19);
            		}
HXLINE( 343)		if ((character != this->lastCharacter)) {
HXLINE( 344)			this->box->animation->play(((centerPrefix + boxType) + HX_("Open",ea,2f,8d,34)),true,null(),null());
HXLINE( 345)			::cutscenes::DialogueBoxPsych_obj::updateBoxOffsets(this->box);
HXLINE( 346)			this->box->set_flipX((lePosition == HX_("left",07,08,b0,47)));
            		}
            		else {
HXLINE( 347)			if ((boxType != this->lastBoxType)) {
HXLINE( 348)				this->box->animation->play((centerPrefix + boxType),true,null(),null());
HXLINE( 349)				::cutscenes::DialogueBoxPsych_obj::updateBoxOffsets(this->box);
            			}
            		}
HXLINE( 351)		this->lastCharacter = character;
HXLINE( 352)		this->lastBoxType = boxType;
HXLINE( 354)		this->daText->set_text(( (::String)(curDialogue->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic)) ));
HXLINE( 355)		this->daText->delay = ( (Float)(curDialogue->__Field(HX_("speed",87,97,69,81),::hx::paccDynamic)) );
HXLINE( 356)		this->daText->sound = ( (::String)(curDialogue->__Field(HX_("sound",cf,8c,cc,80),::hx::paccDynamic)) );
HXLINE( 357)		bool _hx_tmp2;
HXDLIN( 357)		if (::hx::IsNotNull( this->daText->sound )) {
HXLINE( 357)			_hx_tmp2 = (::StringTools_obj::trim(this->daText->sound) == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 357)			_hx_tmp2 = true;
            		}
HXDLIN( 357)		if (_hx_tmp2) {
HXLINE( 357)			this->daText->sound = HX_("dialogue",18,2d,94,a7);
            		}
HXLINE( 359)		this->daText->set_y(( (Float)(::cutscenes::DialogueBoxPsych_obj::DEFAULT_TEXT_Y) ));
HXLINE( 360)		if ((this->daText->rows > 2)) {
HXLINE( 360)			 ::objects::TypedAlphabet fh = this->daText;
HXDLIN( 360)			fh->set_y((fh->y - ( (Float)(::cutscenes::DialogueBoxPsych_obj::LONG_TEXT_ADD) )));
            		}
HXLINE( 362)		 ::cutscenes::DialogueCharacter _hx_char = this->arrayCharacters->__get(character).StaticCast<  ::cutscenes::DialogueCharacter >();
HXLINE( 363)		if (::hx::IsNotNull( _hx_char )) {
HXLINE( 364)			_hx_char->playAnim(( (::String)(curDialogue->__Field(HX_("expression",98,11,9f,2e),::hx::paccDynamic)) ),this->daText->finishedText);
HXLINE( 365)			if (::hx::IsNotNull( _hx_char->animation->_curAnim )) {
HXLINE( 366)				Float rate = (( (Float)(24) ) - (((( (Float)(curDialogue->__Field(HX_("speed",87,97,69,81),::hx::paccDynamic)) ) - ((Float)0.05)) / ( (Float)(5) )) * ( (Float)(480) )));
HXLINE( 367)				if ((rate < 12)) {
HXLINE( 367)					rate = ( (Float)(12) );
            				}
            				else {
HXLINE( 368)					if ((rate > 48)) {
HXLINE( 368)						rate = ( (Float)(48) );
            					}
            				}
HXLINE( 369)				_hx_char->animation->_curAnim->set_frameRate(rate);
            			}
            		}
HXLINE( 372)		this->currentText++;
HXLINE( 374)		if (::hx::IsNotNull( this->nextDialogueThing )) {
HXLINE( 375)			this->nextDialogueThing();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBoxPsych_obj,startNextDialog,(void))

int DialogueBoxPsych_obj::DEFAULT_TEXT_X;

int DialogueBoxPsych_obj::DEFAULT_TEXT_Y;

int DialogueBoxPsych_obj::LONG_TEXT_ADD;

Float DialogueBoxPsych_obj::LEFT_CHAR_X;

Float DialogueBoxPsych_obj::RIGHT_CHAR_X;

Float DialogueBoxPsych_obj::DEFAULT_CHAR_Y;

 ::Dynamic DialogueBoxPsych_obj::parseDialogue(::String path){
            	HX_STACKFRAME(&_hx_pos_abed4712cfea8e8f_379_parseDialogue)
HXLINE( 381)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 383)			return ::tjson::TJSON_obj::parse(::sys::io::File_obj::getContent(path),null(),null());
            		}
HXLINE( 386)		return ::tjson::TJSON_obj::parse(::openfl::utils::Assets_obj::getText(path),null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DialogueBoxPsych_obj,parseDialogue,return )

void DialogueBoxPsych_obj::updateBoxOffsets( ::flixel::FlxSprite box){
            	HX_STACKFRAME(&_hx_pos_abed4712cfea8e8f_389_updateBoxOffsets)
HXLINE( 390)		box->centerOffsets(null());
HXLINE( 391)		box->updateHitbox();
HXLINE( 392)		if (::StringTools_obj::startsWith(box->animation->_curAnim->name,HX_("angry",21,49,e2,22))) {
HXLINE( 393)			 ::flixel::math::FlxBasePoint this1 = box->offset;
HXDLIN( 393)			this1->set_x(( (Float)(50) ));
HXDLIN( 393)			this1->set_y(( (Float)(65) ));
            		}
            		else {
HXLINE( 394)			if (::StringTools_obj::startsWith(box->animation->_curAnim->name,HX_("center-angry",69,39,92,b0))) {
HXLINE( 395)				 ::flixel::math::FlxBasePoint this1 = box->offset;
HXDLIN( 395)				this1->set_x(( (Float)(50) ));
HXDLIN( 395)				this1->set_y(( (Float)(30) ));
            			}
            			else {
HXLINE( 397)				 ::flixel::math::FlxBasePoint this1 = box->offset;
HXDLIN( 397)				this1->set_x(( (Float)(10) ));
HXDLIN( 397)				this1->set_y(( (Float)(0) ));
            			}
            		}
HXLINE( 400)		if (!(box->flipX)) {
HXLINE( 400)			box->offset->set_y((box->offset->y + 10));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DialogueBoxPsych_obj,updateBoxOffsets,(void))


::hx::ObjectPtr< DialogueBoxPsych_obj > DialogueBoxPsych_obj::__new( ::Dynamic dialogueList,::String song) {
	::hx::ObjectPtr< DialogueBoxPsych_obj > __this = new DialogueBoxPsych_obj();
	__this->__construct(dialogueList,song);
	return __this;
}

::hx::ObjectPtr< DialogueBoxPsych_obj > DialogueBoxPsych_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic dialogueList,::String song) {
	DialogueBoxPsych_obj *__this = (DialogueBoxPsych_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DialogueBoxPsych_obj), true, "cutscenes.DialogueBoxPsych"));
	*(void **)__this = DialogueBoxPsych_obj::_hx_vtable;
	__this->__construct(dialogueList,song);
	return __this;
}

DialogueBoxPsych_obj::DialogueBoxPsych_obj()
{
}

void DialogueBoxPsych_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DialogueBoxPsych);
	HX_MARK_MEMBER_NAME(scrollSpeed,"scrollSpeed");
	HX_MARK_MEMBER_NAME(dialogue,"dialogue");
	HX_MARK_MEMBER_NAME(dialogueList,"dialogueList");
	HX_MARK_MEMBER_NAME(finishThing,"finishThing");
	HX_MARK_MEMBER_NAME(nextDialogueThing,"nextDialogueThing");
	HX_MARK_MEMBER_NAME(skipDialogueThing,"skipDialogueThing");
	HX_MARK_MEMBER_NAME(bgFade,"bgFade");
	HX_MARK_MEMBER_NAME(box,"box");
	HX_MARK_MEMBER_NAME(textToType,"textToType");
	HX_MARK_MEMBER_NAME(arrayCharacters,"arrayCharacters");
	HX_MARK_MEMBER_NAME(currentText,"currentText");
	HX_MARK_MEMBER_NAME(offsetPos,"offsetPos");
	HX_MARK_MEMBER_NAME(textBoxTypes,"textBoxTypes");
	HX_MARK_MEMBER_NAME(curCharacter,"curCharacter");
	HX_MARK_MEMBER_NAME(dialogueStarted,"dialogueStarted");
	HX_MARK_MEMBER_NAME(dialogueEnded,"dialogueEnded");
	HX_MARK_MEMBER_NAME(daText,"daText");
	HX_MARK_MEMBER_NAME(ignoreThisFrame,"ignoreThisFrame");
	HX_MARK_MEMBER_NAME(closeSound,"closeSound");
	HX_MARK_MEMBER_NAME(closeVolume,"closeVolume");
	HX_MARK_MEMBER_NAME(lastCharacter,"lastCharacter");
	HX_MARK_MEMBER_NAME(lastBoxType,"lastBoxType");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DialogueBoxPsych_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scrollSpeed,"scrollSpeed");
	HX_VISIT_MEMBER_NAME(dialogue,"dialogue");
	HX_VISIT_MEMBER_NAME(dialogueList,"dialogueList");
	HX_VISIT_MEMBER_NAME(finishThing,"finishThing");
	HX_VISIT_MEMBER_NAME(nextDialogueThing,"nextDialogueThing");
	HX_VISIT_MEMBER_NAME(skipDialogueThing,"skipDialogueThing");
	HX_VISIT_MEMBER_NAME(bgFade,"bgFade");
	HX_VISIT_MEMBER_NAME(box,"box");
	HX_VISIT_MEMBER_NAME(textToType,"textToType");
	HX_VISIT_MEMBER_NAME(arrayCharacters,"arrayCharacters");
	HX_VISIT_MEMBER_NAME(currentText,"currentText");
	HX_VISIT_MEMBER_NAME(offsetPos,"offsetPos");
	HX_VISIT_MEMBER_NAME(textBoxTypes,"textBoxTypes");
	HX_VISIT_MEMBER_NAME(curCharacter,"curCharacter");
	HX_VISIT_MEMBER_NAME(dialogueStarted,"dialogueStarted");
	HX_VISIT_MEMBER_NAME(dialogueEnded,"dialogueEnded");
	HX_VISIT_MEMBER_NAME(daText,"daText");
	HX_VISIT_MEMBER_NAME(ignoreThisFrame,"ignoreThisFrame");
	HX_VISIT_MEMBER_NAME(closeSound,"closeSound");
	HX_VISIT_MEMBER_NAME(closeVolume,"closeVolume");
	HX_VISIT_MEMBER_NAME(lastCharacter,"lastCharacter");
	HX_VISIT_MEMBER_NAME(lastBoxType,"lastBoxType");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DialogueBoxPsych_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { return ::hx::Val( box ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgFade") ) { return ::hx::Val( bgFade ); }
		if (HX_FIELD_EQ(inName,"daText") ) { return ::hx::Val( daText ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dialogue") ) { return ::hx::Val( dialogue ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"offsetPos") ) { return ::hx::Val( offsetPos ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textToType") ) { return ::hx::Val( textToType ); }
		if (HX_FIELD_EQ(inName,"closeSound") ) { return ::hx::Val( closeSound ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scrollSpeed") ) { return ::hx::Val( scrollSpeed ); }
		if (HX_FIELD_EQ(inName,"finishThing") ) { return ::hx::Val( finishThing ); }
		if (HX_FIELD_EQ(inName,"currentText") ) { return ::hx::Val( currentText ); }
		if (HX_FIELD_EQ(inName,"closeVolume") ) { return ::hx::Val( closeVolume ); }
		if (HX_FIELD_EQ(inName,"lastBoxType") ) { return ::hx::Val( lastBoxType ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dialogueList") ) { return ::hx::Val( dialogueList ); }
		if (HX_FIELD_EQ(inName,"textBoxTypes") ) { return ::hx::Val( textBoxTypes ); }
		if (HX_FIELD_EQ(inName,"curCharacter") ) { return ::hx::Val( curCharacter ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dialogueEnded") ) { return ::hx::Val( dialogueEnded ); }
		if (HX_FIELD_EQ(inName,"lastCharacter") ) { return ::hx::Val( lastCharacter ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"arrayCharacters") ) { return ::hx::Val( arrayCharacters ); }
		if (HX_FIELD_EQ(inName,"dialogueStarted") ) { return ::hx::Val( dialogueStarted ); }
		if (HX_FIELD_EQ(inName,"spawnCharacters") ) { return ::hx::Val( spawnCharacters_dyn() ); }
		if (HX_FIELD_EQ(inName,"ignoreThisFrame") ) { return ::hx::Val( ignoreThisFrame ); }
		if (HX_FIELD_EQ(inName,"startNextDialog") ) { return ::hx::Val( startNextDialog_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nextDialogueThing") ) { return ::hx::Val( nextDialogueThing ); }
		if (HX_FIELD_EQ(inName,"skipDialogueThing") ) { return ::hx::Val( skipDialogueThing ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DialogueBoxPsych_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"LEFT_CHAR_X") ) { outValue = ( LEFT_CHAR_X ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"RIGHT_CHAR_X") ) { outValue = ( RIGHT_CHAR_X ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"LONG_TEXT_ADD") ) { outValue = ( LONG_TEXT_ADD ); return true; }
		if (HX_FIELD_EQ(inName,"parseDialogue") ) { outValue = parseDialogue_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"DEFAULT_TEXT_X") ) { outValue = ( DEFAULT_TEXT_X ); return true; }
		if (HX_FIELD_EQ(inName,"DEFAULT_TEXT_Y") ) { outValue = ( DEFAULT_TEXT_Y ); return true; }
		if (HX_FIELD_EQ(inName,"DEFAULT_CHAR_Y") ) { outValue = ( DEFAULT_CHAR_Y ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateBoxOffsets") ) { outValue = updateBoxOffsets_dyn(); return true; }
	}
	return false;
}

::hx::Val DialogueBoxPsych_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { box=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgFade") ) { bgFade=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"daText") ) { daText=inValue.Cast<  ::objects::TypedAlphabet >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dialogue") ) { dialogue=inValue.Cast<  ::objects::TypedAlphabet >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"offsetPos") ) { offsetPos=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textToType") ) { textToType=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"closeSound") ) { closeSound=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scrollSpeed") ) { scrollSpeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finishThing") ) { finishThing=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentText") ) { currentText=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"closeVolume") ) { closeVolume=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastBoxType") ) { lastBoxType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dialogueList") ) { dialogueList=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textBoxTypes") ) { textBoxTypes=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curCharacter") ) { curCharacter=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dialogueEnded") ) { dialogueEnded=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastCharacter") ) { lastCharacter=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"arrayCharacters") ) { arrayCharacters=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dialogueStarted") ) { dialogueStarted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ignoreThisFrame") ) { ignoreThisFrame=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nextDialogueThing") ) { nextDialogueThing=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skipDialogueThing") ) { skipDialogueThing=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DialogueBoxPsych_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"LEFT_CHAR_X") ) { LEFT_CHAR_X=ioValue.Cast< Float >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"RIGHT_CHAR_X") ) { RIGHT_CHAR_X=ioValue.Cast< Float >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"LONG_TEXT_ADD") ) { LONG_TEXT_ADD=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"DEFAULT_TEXT_X") ) { DEFAULT_TEXT_X=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"DEFAULT_TEXT_Y") ) { DEFAULT_TEXT_Y=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"DEFAULT_CHAR_Y") ) { DEFAULT_CHAR_Y=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

void DialogueBoxPsych_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("scrollSpeed",3a,e0,46,cb));
	outFields->push(HX_("dialogue",18,2d,94,a7));
	outFields->push(HX_("dialogueList",96,e1,d8,0d));
	outFields->push(HX_("bgFade",e1,fd,cd,ab));
	outFields->push(HX_("box",0b,be,4a,00));
	outFields->push(HX_("textToType",62,de,b2,b9));
	outFields->push(HX_("arrayCharacters",a3,23,67,53));
	outFields->push(HX_("currentText",86,a5,8b,85));
	outFields->push(HX_("offsetPos",c1,3b,c0,41));
	outFields->push(HX_("textBoxTypes",3b,d8,65,ca));
	outFields->push(HX_("curCharacter",09,86,7c,d7));
	outFields->push(HX_("dialogueStarted",09,77,22,70));
	outFields->push(HX_("dialogueEnded",c2,14,61,0b));
	outFields->push(HX_("daText",ca,52,61,0d));
	outFields->push(HX_("ignoreThisFrame",7d,81,d2,40));
	outFields->push(HX_("closeSound",f7,e9,ad,4b));
	outFields->push(HX_("closeVolume",b2,4f,a3,19));
	outFields->push(HX_("lastCharacter",73,b6,0a,40));
	outFields->push(HX_("lastBoxType",af,f2,77,51));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DialogueBoxPsych_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(DialogueBoxPsych_obj,scrollSpeed),HX_("scrollSpeed",3a,e0,46,cb)},
	{::hx::fsObject /*  ::objects::TypedAlphabet */ ,(int)offsetof(DialogueBoxPsych_obj,dialogue),HX_("dialogue",18,2d,94,a7)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBoxPsych_obj,dialogueList),HX_("dialogueList",96,e1,d8,0d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBoxPsych_obj,finishThing),HX_("finishThing",9b,aa,8e,36)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBoxPsych_obj,nextDialogueThing),HX_("nextDialogueThing",c3,c2,a1,d9)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBoxPsych_obj,skipDialogueThing),HX_("skipDialogueThing",b7,29,12,4e)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBoxPsych_obj,bgFade),HX_("bgFade",e1,fd,cd,ab)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBoxPsych_obj,box),HX_("box",0b,be,4a,00)},
	{::hx::fsString,(int)offsetof(DialogueBoxPsych_obj,textToType),HX_("textToType",62,de,b2,b9)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(DialogueBoxPsych_obj,arrayCharacters),HX_("arrayCharacters",a3,23,67,53)},
	{::hx::fsInt,(int)offsetof(DialogueBoxPsych_obj,currentText),HX_("currentText",86,a5,8b,85)},
	{::hx::fsFloat,(int)offsetof(DialogueBoxPsych_obj,offsetPos),HX_("offsetPos",c1,3b,c0,41)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(DialogueBoxPsych_obj,textBoxTypes),HX_("textBoxTypes",3b,d8,65,ca)},
	{::hx::fsString,(int)offsetof(DialogueBoxPsych_obj,curCharacter),HX_("curCharacter",09,86,7c,d7)},
	{::hx::fsBool,(int)offsetof(DialogueBoxPsych_obj,dialogueStarted),HX_("dialogueStarted",09,77,22,70)},
	{::hx::fsBool,(int)offsetof(DialogueBoxPsych_obj,dialogueEnded),HX_("dialogueEnded",c2,14,61,0b)},
	{::hx::fsObject /*  ::objects::TypedAlphabet */ ,(int)offsetof(DialogueBoxPsych_obj,daText),HX_("daText",ca,52,61,0d)},
	{::hx::fsBool,(int)offsetof(DialogueBoxPsych_obj,ignoreThisFrame),HX_("ignoreThisFrame",7d,81,d2,40)},
	{::hx::fsString,(int)offsetof(DialogueBoxPsych_obj,closeSound),HX_("closeSound",f7,e9,ad,4b)},
	{::hx::fsFloat,(int)offsetof(DialogueBoxPsych_obj,closeVolume),HX_("closeVolume",b2,4f,a3,19)},
	{::hx::fsInt,(int)offsetof(DialogueBoxPsych_obj,lastCharacter),HX_("lastCharacter",73,b6,0a,40)},
	{::hx::fsString,(int)offsetof(DialogueBoxPsych_obj,lastBoxType),HX_("lastBoxType",af,f2,77,51)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo DialogueBoxPsych_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &DialogueBoxPsych_obj::DEFAULT_TEXT_X,HX_("DEFAULT_TEXT_X",24,d8,31,6c)},
	{::hx::fsInt,(void *) &DialogueBoxPsych_obj::DEFAULT_TEXT_Y,HX_("DEFAULT_TEXT_Y",25,d8,31,6c)},
	{::hx::fsInt,(void *) &DialogueBoxPsych_obj::LONG_TEXT_ADD,HX_("LONG_TEXT_ADD",92,bc,1d,a5)},
	{::hx::fsFloat,(void *) &DialogueBoxPsych_obj::LEFT_CHAR_X,HX_("LEFT_CHAR_X",e7,bb,19,61)},
	{::hx::fsFloat,(void *) &DialogueBoxPsych_obj::RIGHT_CHAR_X,HX_("RIGHT_CHAR_X",d2,58,47,14)},
	{::hx::fsFloat,(void *) &DialogueBoxPsych_obj::DEFAULT_CHAR_Y,HX_("DEFAULT_CHAR_Y",8e,06,1f,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DialogueBoxPsych_obj_sMemberFields[] = {
	HX_("scrollSpeed",3a,e0,46,cb),
	HX_("dialogue",18,2d,94,a7),
	HX_("dialogueList",96,e1,d8,0d),
	HX_("finishThing",9b,aa,8e,36),
	HX_("nextDialogueThing",c3,c2,a1,d9),
	HX_("skipDialogueThing",b7,29,12,4e),
	HX_("bgFade",e1,fd,cd,ab),
	HX_("box",0b,be,4a,00),
	HX_("textToType",62,de,b2,b9),
	HX_("arrayCharacters",a3,23,67,53),
	HX_("currentText",86,a5,8b,85),
	HX_("offsetPos",c1,3b,c0,41),
	HX_("textBoxTypes",3b,d8,65,ca),
	HX_("curCharacter",09,86,7c,d7),
	HX_("dialogueStarted",09,77,22,70),
	HX_("dialogueEnded",c2,14,61,0b),
	HX_("spawnCharacters",c5,32,da,c2),
	HX_("daText",ca,52,61,0d),
	HX_("ignoreThisFrame",7d,81,d2,40),
	HX_("closeSound",f7,e9,ad,4b),
	HX_("closeVolume",b2,4f,a3,19),
	HX_("update",09,86,05,87),
	HX_("lastCharacter",73,b6,0a,40),
	HX_("lastBoxType",af,f2,77,51),
	HX_("startNextDialog",1d,3d,9f,9a),
	::String(null()) };

static void DialogueBoxPsych_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DialogueBoxPsych_obj::DEFAULT_TEXT_X,"DEFAULT_TEXT_X");
	HX_MARK_MEMBER_NAME(DialogueBoxPsych_obj::DEFAULT_TEXT_Y,"DEFAULT_TEXT_Y");
	HX_MARK_MEMBER_NAME(DialogueBoxPsych_obj::LONG_TEXT_ADD,"LONG_TEXT_ADD");
	HX_MARK_MEMBER_NAME(DialogueBoxPsych_obj::LEFT_CHAR_X,"LEFT_CHAR_X");
	HX_MARK_MEMBER_NAME(DialogueBoxPsych_obj::RIGHT_CHAR_X,"RIGHT_CHAR_X");
	HX_MARK_MEMBER_NAME(DialogueBoxPsych_obj::DEFAULT_CHAR_Y,"DEFAULT_CHAR_Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DialogueBoxPsych_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DialogueBoxPsych_obj::DEFAULT_TEXT_X,"DEFAULT_TEXT_X");
	HX_VISIT_MEMBER_NAME(DialogueBoxPsych_obj::DEFAULT_TEXT_Y,"DEFAULT_TEXT_Y");
	HX_VISIT_MEMBER_NAME(DialogueBoxPsych_obj::LONG_TEXT_ADD,"LONG_TEXT_ADD");
	HX_VISIT_MEMBER_NAME(DialogueBoxPsych_obj::LEFT_CHAR_X,"LEFT_CHAR_X");
	HX_VISIT_MEMBER_NAME(DialogueBoxPsych_obj::RIGHT_CHAR_X,"RIGHT_CHAR_X");
	HX_VISIT_MEMBER_NAME(DialogueBoxPsych_obj::DEFAULT_CHAR_Y,"DEFAULT_CHAR_Y");
};

#endif

::hx::Class DialogueBoxPsych_obj::__mClass;

static ::String DialogueBoxPsych_obj_sStaticFields[] = {
	HX_("DEFAULT_TEXT_X",24,d8,31,6c),
	HX_("DEFAULT_TEXT_Y",25,d8,31,6c),
	HX_("LONG_TEXT_ADD",92,bc,1d,a5),
	HX_("LEFT_CHAR_X",e7,bb,19,61),
	HX_("RIGHT_CHAR_X",d2,58,47,14),
	HX_("DEFAULT_CHAR_Y",8e,06,1f,4b),
	HX_("parseDialogue",6b,64,c3,ec),
	HX_("updateBoxOffsets",1e,ea,75,d1),
	::String(null())
};

void DialogueBoxPsych_obj::__register()
{
	DialogueBoxPsych_obj _hx_dummy;
	DialogueBoxPsych_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("cutscenes.DialogueBoxPsych",ed,41,f8,eb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DialogueBoxPsych_obj::__GetStatic;
	__mClass->mSetStaticField = &DialogueBoxPsych_obj::__SetStatic;
	__mClass->mMarkFunc = DialogueBoxPsych_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DialogueBoxPsych_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DialogueBoxPsych_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DialogueBoxPsych_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DialogueBoxPsych_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DialogueBoxPsych_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DialogueBoxPsych_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DialogueBoxPsych_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_abed4712cfea8e8f_33_boot)
HXDLIN(  33)		DEFAULT_TEXT_X = 175;
            	}
{
            	HX_STACKFRAME(&_hx_pos_abed4712cfea8e8f_34_boot)
HXDLIN(  34)		DEFAULT_TEXT_Y = 460;
            	}
{
            	HX_STACKFRAME(&_hx_pos_abed4712cfea8e8f_35_boot)
HXDLIN(  35)		LONG_TEXT_ADD = 24;
            	}
{
            	HX_STACKFRAME(&_hx_pos_abed4712cfea8e8f_104_boot)
HXDLIN( 104)		LEFT_CHAR_X = ((Float)-60);
            	}
{
            	HX_STACKFRAME(&_hx_pos_abed4712cfea8e8f_105_boot)
HXDLIN( 105)		RIGHT_CHAR_X = ((Float)-100);
            	}
{
            	HX_STACKFRAME(&_hx_pos_abed4712cfea8e8f_106_boot)
HXDLIN( 106)		DEFAULT_CHAR_Y = ((Float)60);
            	}
}

} // end namespace cutscenes
