#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_cutscenes_DialogueBox
#include <cutscenes/DialogueBox.h>
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
#ifndef INCLUDED_flixel_addons_text_FlxTypeText
#include <flixel/addons/text/FlxTypeText.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_8116a89da7f4c21e_38_new,"cutscenes.DialogueBox","new",0xc13df860,"cutscenes.DialogueBox.new","cutscenes/DialogueBox.hx",38,0x748ed2d1)
HX_DEFINE_STACK_FRAME(_hx_pos_8116a89da7f4c21e_5_new,"cutscenes.DialogueBox","new",0xc13df860,"cutscenes.DialogueBox.new","cutscenes/DialogueBox.hx",5,0x748ed2d1)
static const int _hx_array_data_c08a886e_3[] = {
	(int)4,
};
static const int _hx_array_data_c08a886e_4[] = {
	(int)4,
};
static const int _hx_array_data_c08a886e_5[] = {
	(int)11,
};
HX_LOCAL_STACK_FRAME(_hx_pos_8116a89da7f4c21e_129_update,"cutscenes.DialogueBox","update",0x24e45e09,"cutscenes.DialogueBox.update","cutscenes/DialogueBox.hx",129,0x748ed2d1)
HX_LOCAL_STACK_FRAME(_hx_pos_8116a89da7f4c21e_172_update,"cutscenes.DialogueBox","update",0x24e45e09,"cutscenes.DialogueBox.update","cutscenes/DialogueBox.hx",172,0x748ed2d1)
HX_LOCAL_STACK_FRAME(_hx_pos_8116a89da7f4c21e_183_update,"cutscenes.DialogueBox","update",0x24e45e09,"cutscenes.DialogueBox.update","cutscenes/DialogueBox.hx",183,0x748ed2d1)
HX_LOCAL_STACK_FRAME(_hx_pos_8116a89da7f4c21e_222_startDialogue,"cutscenes.DialogueBox","startDialogue",0x367bb79a,"cutscenes.DialogueBox.startDialogue","cutscenes/DialogueBox.hx",222,0x748ed2d1)
HX_LOCAL_STACK_FRAME(_hx_pos_8116a89da7f4c21e_213_startDialogue,"cutscenes.DialogueBox","startDialogue",0x367bb79a,"cutscenes.DialogueBox.startDialogue","cutscenes/DialogueBox.hx",213,0x748ed2d1)
HX_LOCAL_STACK_FRAME(_hx_pos_8116a89da7f4c21e_252_cleanDialog,"cutscenes.DialogueBox","cleanDialog",0x121c5f31,"cutscenes.DialogueBox.cleanDialog","cutscenes/DialogueBox.hx",252,0x748ed2d1)
namespace cutscenes{

void DialogueBox_obj::__construct(::hx::Null< bool >  __o_talkingRight,::Array< ::String > dialogueList){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::cutscenes::DialogueBox,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_8116a89da7f4c21e_38_new)
HXLINE(  39)			 ::flixel::FlxSprite fh = _gthis->bgFade;
HXDLIN(  39)			fh->set_alpha((fh->alpha + ((Float)0.13999999999999999)));
HXLINE(  40)			if ((_gthis->bgFade->alpha > ((Float)0.7))) {
HXLINE(  41)				_gthis->bgFade->set_alpha(((Float)0.7));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		bool talkingRight = __o_talkingRight.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_8116a89da7f4c21e_5_new)
HXLINE( 210)		this->isEnding = false;
HXLINE( 126)		this->dialogueEnded = false;
HXLINE( 125)		this->dialogueStarted = false;
HXLINE( 124)		this->dialogueOpened = false;
HXLINE(  20)		this->skipDialogueThing = null();
HXLINE(  19)		this->nextDialogueThing = null();
HXLINE(  11)		this->dialogueList = ::Array_obj< ::String >::__new(0);
HXLINE(   9)		this->curCharacter = HX_("",00,00,00,00);
HXLINE(  29)		 ::cutscenes::DialogueBox _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  30)		super::__construct(null(),null(),null());
HXLINE(  32)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-200,-200,null());
HXDLIN(  32)		int _hx_tmp1 = ::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)1.3)));
HXDLIN(  32)		this->bgFade = _hx_tmp->makeGraphic(_hx_tmp1,::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::height) ) * ((Float)1.3))),-4988968,null(),null());
HXLINE(  33)		{
HXLINE(  33)			 ::flixel::math::FlxBasePoint this1 = this->bgFade->scrollFactor;
HXDLIN(  33)			this1->set_x(( (Float)(0) ));
HXDLIN(  33)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  34)		this->bgFade->set_alpha(( (Float)(0) ));
HXLINE(  35)		this->add(this->bgFade);
HXLINE(  37)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.83), ::Dynamic(new _hx_Closure_0(_gthis)),5);
HXLINE(  44)		this->box =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-20,45,null());
HXLINE(  46)		bool hasDialog = true;
HXLINE(  47)		::String _hx_switch_0 = ( (::String)(::states::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase();
            		if (  (_hx_switch_0==HX_("roses",04,6c,64,ed)) ){
HXLINE(  54)			 ::flixel::FlxSprite _hx_tmp = this->box;
HXDLIN(  54)			::String library = null();
HXDLIN(  54)			 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(HX_("weeb/pixelUI/dialogueBox-senpaiMad",61,55,ee,84),null(),true);
HXDLIN(  54)			bool xmlExists = false;
HXDLIN(  54)			::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-senpaiMad",61,55,ee,84)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN(  54)			if (::sys::FileSystem_obj::exists(xml)) {
HXLINE(  54)				xmlExists = true;
            			}
HXDLIN(  54)			 ::Dynamic _hx_tmp1;
HXDLIN(  54)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  54)				_hx_tmp1 = imageLoaded;
            			}
            			else {
HXLINE(  54)				_hx_tmp1 = ::backend::Paths_obj::image(HX_("weeb/pixelUI/dialogueBox-senpaiMad",61,55,ee,84),library,true);
            			}
HXDLIN(  54)			::String _hx_tmp2;
HXDLIN(  54)			if (xmlExists) {
HXLINE(  54)				_hx_tmp2 = ::sys::io::File_obj::getContent(xml);
            			}
            			else {
HXLINE(  54)				_hx_tmp2 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-senpaiMad",61,55,ee,84)) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            			}
HXDLIN(  54)			_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,_hx_tmp2));
HXLINE(  55)			this->box->animation->addByPrefix(HX_("normalOpen",91,41,38,70),HX_("SENPAI ANGRY IMPACT SPEECH",f9,17,39,87),24,false,null(),null());
HXLINE(  56)			this->box->animation->addByIndices(HX_("normal",27,72,69,30),HX_("SENPAI ANGRY IMPACT SPEECH instance 1",ad,5b,57,ef),::Array_obj< int >::fromData( _hx_array_data_c08a886e_3,1),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE(  53)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("senpai",3c,df,8d,6b)) ){
HXLINE(  50)			 ::flixel::FlxSprite _hx_tmp = this->box;
HXDLIN(  50)			::String library = null();
HXDLIN(  50)			 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(HX_("weeb/pixelUI/dialogueBox-pixel",b3,f0,21,da),null(),true);
HXDLIN(  50)			bool xmlExists = false;
HXDLIN(  50)			::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-pixel",b3,f0,21,da)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN(  50)			if (::sys::FileSystem_obj::exists(xml)) {
HXLINE(  50)				xmlExists = true;
            			}
HXDLIN(  50)			 ::Dynamic _hx_tmp1;
HXDLIN(  50)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  50)				_hx_tmp1 = imageLoaded;
            			}
            			else {
HXLINE(  50)				_hx_tmp1 = ::backend::Paths_obj::image(HX_("weeb/pixelUI/dialogueBox-pixel",b3,f0,21,da),library,true);
            			}
HXDLIN(  50)			::String _hx_tmp2;
HXDLIN(  50)			if (xmlExists) {
HXLINE(  50)				_hx_tmp2 = ::sys::io::File_obj::getContent(xml);
            			}
            			else {
HXLINE(  50)				_hx_tmp2 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-pixel",b3,f0,21,da)) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            			}
HXDLIN(  50)			_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,_hx_tmp2));
HXLINE(  51)			this->box->animation->addByPrefix(HX_("normalOpen",91,41,38,70),HX_("Text Box Appear",bd,48,54,1a),24,false,null(),null());
HXLINE(  52)			this->box->animation->addByIndices(HX_("normal",27,72,69,30),HX_("Text Box Appear instance 1",69,19,3a,07),::Array_obj< int >::fromData( _hx_array_data_c08a886e_4,1),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE(  49)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("thorns",9c,bf,c7,8c)) ){
HXLINE(  58)			 ::flixel::FlxSprite _hx_tmp = this->box;
HXDLIN(  58)			::String library = null();
HXDLIN(  58)			 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(HX_("weeb/pixelUI/dialogueBox-evil",07,6d,f9,cc),null(),true);
HXDLIN(  58)			bool xmlExists = false;
HXDLIN(  58)			::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-evil",07,6d,f9,cc)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN(  58)			if (::sys::FileSystem_obj::exists(xml)) {
HXLINE(  58)				xmlExists = true;
            			}
HXDLIN(  58)			 ::Dynamic _hx_tmp1;
HXDLIN(  58)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  58)				_hx_tmp1 = imageLoaded;
            			}
            			else {
HXLINE(  58)				_hx_tmp1 = ::backend::Paths_obj::image(HX_("weeb/pixelUI/dialogueBox-evil",07,6d,f9,cc),library,true);
            			}
HXDLIN(  58)			::String _hx_tmp2;
HXDLIN(  58)			if (xmlExists) {
HXLINE(  58)				_hx_tmp2 = ::sys::io::File_obj::getContent(xml);
            			}
            			else {
HXLINE(  58)				_hx_tmp2 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-evil",07,6d,f9,cc)) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            			}
HXDLIN(  58)			_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,_hx_tmp2));
HXLINE(  59)			this->box->animation->addByPrefix(HX_("normalOpen",91,41,38,70),HX_("Spirit Textbox spawn",ea,ee,35,84),24,false,null(),null());
HXLINE(  60)			this->box->animation->addByIndices(HX_("normal",27,72,69,30),HX_("Spirit Textbox spawn instance 1",5c,78,b4,46),::Array_obj< int >::fromData( _hx_array_data_c08a886e_5,1),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE(  62)			 ::flixel::FlxSprite face =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,320,170,null());
HXDLIN(  62)			 ::flixel::FlxSprite face1 = face->loadGraphic(::backend::Paths_obj::image(HX_("weeb/spiritFaceForward",93,1c,29,2a),null(),null()),null(),null(),null(),null(),null());
HXLINE(  63)			face1->setGraphicSize(::Std_obj::_hx_int((face1->get_width() * ( (Float)(6) ))),null());
HXLINE(  64)			this->add(face1);
HXLINE(  57)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  66)			hasDialog = false;
            		}
            		_hx_goto_0:;
HXLINE(  69)		this->dialogueList = dialogueList;
HXLINE(  71)		if (!(hasDialog)) {
HXLINE(  72)			return;
            		}
HXLINE(  74)		this->portraitLeft =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-20,40,null());
HXLINE(  75)		 ::flixel::FlxSprite _hx_tmp2 = this->portraitLeft;
HXDLIN(  75)		::String library = null();
HXDLIN(  75)		 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(HX_("weeb/senpaiPortrait",9b,ed,4f,6d),null(),true);
HXDLIN(  75)		bool xmlExists = false;
HXDLIN(  75)		::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/senpaiPortrait",9b,ed,4f,6d)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN(  75)		if (::sys::FileSystem_obj::exists(xml)) {
HXLINE(  75)			xmlExists = true;
            		}
HXDLIN(  75)		 ::Dynamic _hx_tmp3;
HXDLIN(  75)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  75)			_hx_tmp3 = imageLoaded;
            		}
            		else {
HXLINE(  75)			_hx_tmp3 = ::backend::Paths_obj::image(HX_("weeb/senpaiPortrait",9b,ed,4f,6d),library,true);
            		}
HXDLIN(  75)		::String _hx_tmp4;
HXDLIN(  75)		if (xmlExists) {
HXLINE(  75)			_hx_tmp4 = ::sys::io::File_obj::getContent(xml);
            		}
            		else {
HXLINE(  75)			_hx_tmp4 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/senpaiPortrait",9b,ed,4f,6d)) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            		}
HXDLIN(  75)		_hx_tmp2->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp3,_hx_tmp4));
HXLINE(  76)		this->portraitLeft->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Senpai Portrait Enter",d7,e0,09,14),24,false,null(),null());
HXLINE(  77)		 ::flixel::FlxSprite _hx_tmp5 = this->portraitLeft;
HXDLIN(  77)		Float _hx_tmp6 = this->portraitLeft->get_width();
HXDLIN(  77)		_hx_tmp5->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp6 * ::states::PlayState_obj::daPixelZoom) * ((Float)0.9))),null());
HXLINE(  78)		this->portraitLeft->updateHitbox();
HXLINE(  79)		{
HXLINE(  79)			 ::flixel::math::FlxBasePoint this2 = this->portraitLeft->scrollFactor;
HXDLIN(  79)			this2->set_x(( (Float)(0) ));
HXDLIN(  79)			this2->set_y(( (Float)(0) ));
            		}
HXLINE(  80)		this->add(this->portraitLeft);
HXLINE(  81)		this->portraitLeft->set_visible(false);
HXLINE(  83)		this->portraitRight =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,40,null());
HXLINE(  84)		 ::flixel::FlxSprite _hx_tmp7 = this->portraitRight;
HXDLIN(  84)		::String library1 = null();
HXDLIN(  84)		 ::flixel::graphics::FlxGraphic imageLoaded1 = ::backend::Paths_obj::image(HX_("weeb/bfPortrait",23,ea,7a,a3),null(),true);
HXDLIN(  84)		bool xmlExists1 = false;
HXDLIN(  84)		::String xml1 = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/bfPortrait",23,ea,7a,a3)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN(  84)		if (::sys::FileSystem_obj::exists(xml1)) {
HXLINE(  84)			xmlExists1 = true;
            		}
HXDLIN(  84)		 ::Dynamic _hx_tmp8;
HXDLIN(  84)		if (::hx::IsNotNull( imageLoaded1 )) {
HXLINE(  84)			_hx_tmp8 = imageLoaded1;
            		}
            		else {
HXLINE(  84)			_hx_tmp8 = ::backend::Paths_obj::image(HX_("weeb/bfPortrait",23,ea,7a,a3),library1,true);
            		}
HXDLIN(  84)		::String _hx_tmp9;
HXDLIN(  84)		if (xmlExists1) {
HXLINE(  84)			_hx_tmp9 = ::sys::io::File_obj::getContent(xml1);
            		}
            		else {
HXLINE(  84)			_hx_tmp9 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/bfPortrait",23,ea,7a,a3)) + HX_(".xml",69,3e,c3,1e)),null(),library1,null());
            		}
HXDLIN(  84)		_hx_tmp7->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp8,_hx_tmp9));
HXLINE(  85)		this->portraitRight->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Boyfriend portrait enter",a9,02,f8,de),24,false,null(),null());
HXLINE(  86)		 ::flixel::FlxSprite _hx_tmp10 = this->portraitRight;
HXDLIN(  86)		Float _hx_tmp11 = this->portraitRight->get_width();
HXDLIN(  86)		_hx_tmp10->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp11 * ::states::PlayState_obj::daPixelZoom) * ((Float)0.9))),null());
HXLINE(  87)		this->portraitRight->updateHitbox();
HXLINE(  88)		{
HXLINE(  88)			 ::flixel::math::FlxBasePoint this3 = this->portraitRight->scrollFactor;
HXDLIN(  88)			this3->set_x(( (Float)(0) ));
HXDLIN(  88)			this3->set_y(( (Float)(0) ));
            		}
HXLINE(  89)		this->add(this->portraitRight);
HXLINE(  90)		this->portraitRight->set_visible(false);
HXLINE(  92)		this->box->animation->play(HX_("normalOpen",91,41,38,70),null(),null(),null());
HXLINE(  93)		 ::flixel::FlxSprite _hx_tmp12 = this->box;
HXDLIN(  93)		Float _hx_tmp13 = this->box->get_width();
HXDLIN(  93)		_hx_tmp12->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp13 * ::states::PlayState_obj::daPixelZoom) * ((Float)0.9))),null());
HXLINE(  94)		this->box->updateHitbox();
HXLINE(  95)		this->add(this->box);
HXLINE(  97)		{
HXLINE(  97)			 ::flixel::FlxSprite _this = this->box;
HXDLIN(  97)			int axes = 1;
HXDLIN(  97)			bool _hx_tmp14;
HXDLIN(  97)			if ((axes != 1)) {
HXLINE(  97)				_hx_tmp14 = (axes == 17);
            			}
            			else {
HXLINE(  97)				_hx_tmp14 = true;
            			}
HXDLIN(  97)			if (_hx_tmp14) {
HXLINE(  97)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  97)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  97)			bool _hx_tmp15;
HXDLIN(  97)			if ((axes != 16)) {
HXLINE(  97)				_hx_tmp15 = (axes == 17);
            			}
            			else {
HXLINE(  97)				_hx_tmp15 = true;
            			}
HXDLIN(  97)			if (_hx_tmp15) {
HXLINE(  97)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  97)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  98)		{
HXLINE(  98)			 ::flixel::FlxSprite _this1 = this->portraitLeft;
HXDLIN(  98)			int axes1 = 1;
HXDLIN(  98)			bool _hx_tmp16;
HXDLIN(  98)			if ((axes1 != 1)) {
HXLINE(  98)				_hx_tmp16 = (axes1 == 17);
            			}
            			else {
HXLINE(  98)				_hx_tmp16 = true;
            			}
HXDLIN(  98)			if (_hx_tmp16) {
HXLINE(  98)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  98)				_this1->set_x(((( (Float)(_hx_tmp) ) - _this1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  98)			bool _hx_tmp17;
HXDLIN(  98)			if ((axes1 != 16)) {
HXLINE(  98)				_hx_tmp17 = (axes1 == 17);
            			}
            			else {
HXLINE(  98)				_hx_tmp17 = true;
            			}
HXDLIN(  98)			if (_hx_tmp17) {
HXLINE(  98)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  98)				_this1->set_y(((( (Float)(_hx_tmp) ) - _this1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 100)		 ::flixel::FlxSprite _hx_tmp18 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,1042,590,null());
HXDLIN( 100)		this->handSelect = _hx_tmp18->loadGraphic(::backend::Paths_obj::image(HX_("weeb/pixelUI/hand_textbox",67,1b,cd,60),null(),null()),null(),null(),null(),null(),null());
HXLINE( 101)		 ::flixel::FlxSprite _hx_tmp19 = this->handSelect;
HXDLIN( 101)		Float _hx_tmp20 = this->handSelect->get_width();
HXDLIN( 101)		_hx_tmp19->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp20 * ::states::PlayState_obj::daPixelZoom) * ((Float)0.9))),null());
HXLINE( 102)		this->handSelect->updateHitbox();
HXLINE( 103)		this->handSelect->set_visible(false);
HXLINE( 104)		this->add(this->handSelect);
HXLINE( 107)		bool _hx_tmp21 = !(talkingRight);
HXLINE( 112)		this->dropText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,242,502,::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.6))),HX_("",00,00,00,00),32,null());
HXLINE( 113)		this->dropText->set_font(HX_("Pixel Arial 11 Bold",ae,17,c6,45));
HXLINE( 114)		this->dropText->set_color(-2583404);
HXLINE( 115)		this->add(this->dropText);
HXLINE( 117)		this->swagDialogue =  ::flixel::addons::text::FlxTypeText_obj::__alloc( HX_CTX ,( (Float)(240) ),( (Float)(500) ),::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.6))),HX_("",00,00,00,00),32,null());
HXLINE( 118)		this->swagDialogue->set_font(HX_("Pixel Arial 11 Bold",ae,17,c6,45));
HXLINE( 119)		this->swagDialogue->set_color(-12640223);
HXLINE( 120)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp22 = ::flixel::FlxG_obj::sound;
HXDLIN( 120)		 ::flixel::sound::FlxSound _hx_tmp23 = _hx_tmp22->load(::backend::Paths_obj::sound(HX_("pixelText",53,7a,83,06),null()),((Float)0.6),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 120)		this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp23);
HXLINE( 121)		this->add(this->swagDialogue);
            	}

Dynamic DialogueBox_obj::__CreateEmpty() { return new DialogueBox_obj; }

void *DialogueBox_obj::_hx_vtable = 0;

Dynamic DialogueBox_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DialogueBox_obj > _hx_result = new DialogueBox_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool DialogueBox_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x288ce903) {
			if (inClassId<=(int)0x24d2556a) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x24d2556a;
			} else {
				return inClassId==(int)0x288ce903;
			}
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void DialogueBox_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_8116a89da7f4c21e_129_update)
HXDLIN( 129)		 ::cutscenes::DialogueBox _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 131)		if ((( (::String)(::states::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("roses",04,6c,64,ed))) {
HXLINE( 132)			this->portraitLeft->set_visible(false);
            		}
HXLINE( 133)		if ((( (::String)(::states::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("thorns",9c,bf,c7,8c))) {
HXLINE( 135)			this->portraitLeft->set_visible(false);
HXLINE( 136)			this->swagDialogue->set_color(-1);
HXLINE( 137)			this->dropText->set_color(-16777216);
            		}
HXLINE( 140)		this->dropText->set_text(this->swagDialogue->text);
HXLINE( 142)		if (::hx::IsNotNull( this->box->animation->_curAnim )) {
HXLINE( 144)			bool _hx_tmp;
HXDLIN( 144)			if ((this->box->animation->_curAnim->name == HX_("normalOpen",91,41,38,70))) {
HXLINE( 144)				_hx_tmp = this->box->animation->_curAnim->finished;
            			}
            			else {
HXLINE( 144)				_hx_tmp = false;
            			}
HXDLIN( 144)			if (_hx_tmp) {
HXLINE( 146)				this->box->animation->play(HX_("normal",27,72,69,30),null(),null(),null());
HXLINE( 147)				this->dialogueOpened = true;
            			}
            		}
HXLINE( 151)		bool _hx_tmp;
HXDLIN( 151)		if (this->dialogueOpened) {
HXLINE( 151)			_hx_tmp = !(this->dialogueStarted);
            		}
            		else {
HXLINE( 151)			_hx_tmp = false;
            		}
HXDLIN( 151)		if (_hx_tmp) {
HXLINE( 153)			this->startDialogue();
HXLINE( 154)			this->dialogueStarted = true;
            		}
HXLINE( 157)		if (::backend::Controls_obj::instance->get_ACCEPT()) {
HXLINE( 159)			if (this->dialogueEnded) {
HXLINE( 161)				bool _hx_tmp;
HXDLIN( 161)				if (::hx::IsNull( this->dialogueList->__get(1) )) {
HXLINE( 161)					_hx_tmp = ::hx::IsNotNull( this->dialogueList->__get(0) );
            				}
            				else {
HXLINE( 161)					_hx_tmp = false;
            				}
HXDLIN( 161)				if (_hx_tmp) {
HXLINE( 163)					if (!(this->isEnding)) {
            						HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::cutscenes::DialogueBox,_gthis) HXARGC(1)
            						void _hx_run( ::flixel::util::FlxTimer tmr){
            							HX_GC_STACKFRAME(&_hx_pos_8116a89da7f4c21e_172_update)
HXLINE( 173)							 ::flixel::FlxSprite fh = _gthis->box;
HXDLIN( 173)							fh->set_alpha((fh->alpha - ((Float)0.2)));
HXLINE( 174)							 ::flixel::FlxSprite fh1 = _gthis->bgFade;
HXDLIN( 174)							fh1->set_alpha((fh1->alpha - ((Float)0.13999999999999999)));
HXLINE( 175)							_gthis->portraitLeft->set_visible(false);
HXLINE( 176)							_gthis->portraitRight->set_visible(false);
HXLINE( 177)							 ::flixel::addons::text::FlxTypeText fh2 = _gthis->swagDialogue;
HXDLIN( 177)							fh2->set_alpha((fh2->alpha - ((Float)0.2)));
HXLINE( 178)							 ::flixel::FlxSprite fh3 = _gthis->handSelect;
HXDLIN( 178)							fh3->set_alpha((fh3->alpha - ((Float)0.2)));
HXLINE( 179)							_gthis->dropText->set_alpha(_gthis->swagDialogue->alpha);
            						}
            						HX_END_LOCAL_FUNC1((void))

            						HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::cutscenes::DialogueBox,_gthis) HXARGC(1)
            						void _hx_run( ::flixel::util::FlxTimer tmr){
            							HX_GC_STACKFRAME(&_hx_pos_8116a89da7f4c21e_183_update)
HXLINE( 184)							_gthis->finishThing();
HXLINE( 185)							_gthis->kill();
            						}
            						HX_END_LOCAL_FUNC1((void))

HXLINE( 165)						this->isEnding = true;
HXLINE( 166)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 166)						_hx_tmp->play(::backend::Paths_obj::sound(HX_("clickText",15,39,f9,2b),null()),((Float)0.8),null(),null(),null(),null());
HXLINE( 168)						bool _hx_tmp1;
HXDLIN( 168)						if ((( (::String)(::states::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() != HX_("senpai",3c,df,8d,6b))) {
HXLINE( 168)							_hx_tmp1 = (( (::String)(::states::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("thorns",9c,bf,c7,8c));
            						}
            						else {
HXLINE( 168)							_hx_tmp1 = true;
            						}
HXDLIN( 168)						if (_hx_tmp1) {
HXLINE( 169)							 ::flixel::sound::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 169)							 ::Dynamic To = 0;
HXDLIN( 169)							 ::Dynamic onComplete = null();
HXDLIN( 169)							if (::hx::IsNull( To )) {
HXLINE( 169)								To = 0;
            							}
HXDLIN( 169)							if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 169)								_this->fadeTween->cancel();
            							}
HXDLIN( 169)							_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(_this->_volume,( (Float)(To) ),((Float)1.5), ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            						}
HXLINE( 171)						 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.2), ::Dynamic(new _hx_Closure_0(_gthis)),5);
HXLINE( 182)						 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)1.5), ::Dynamic(new _hx_Closure_1(_gthis)),null());
            					}
            				}
            				else {
HXLINE( 191)					this->dialogueList->remove(this->dialogueList->__get(0));
HXLINE( 192)					this->startDialogue();
HXLINE( 193)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 193)					_hx_tmp->play(::backend::Paths_obj::sound(HX_("clickText",15,39,f9,2b),null()),((Float)0.8),null(),null(),null(),null());
            				}
            			}
            			else {
HXLINE( 196)				if (this->dialogueStarted) {
HXLINE( 198)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 198)					_hx_tmp->play(::backend::Paths_obj::sound(HX_("clickText",15,39,f9,2b),null()),((Float)0.8),null(),null(),null(),null());
HXLINE( 199)					this->swagDialogue->skip();
HXLINE( 201)					if (::hx::IsNotNull( this->skipDialogueThing )) {
HXLINE( 202)						this->skipDialogueThing();
            					}
            				}
            			}
            		}
HXLINE( 207)		this->super::update(elapsed);
            	}


void DialogueBox_obj::startDialogue(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::cutscenes::DialogueBox,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_8116a89da7f4c21e_222_startDialogue)
HXLINE( 223)			_gthis->handSelect->set_visible(true);
HXLINE( 224)			_gthis->dialogueEnded = true;
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_8116a89da7f4c21e_213_startDialogue)
HXDLIN( 213)		 ::cutscenes::DialogueBox _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 214)		this->cleanDialog();
HXLINE( 220)		this->swagDialogue->resetText(this->dialogueList->__get(0));
HXLINE( 221)		this->swagDialogue->start(((Float)0.04),true,null(),null(),null());
HXLINE( 222)		this->swagDialogue->completeCallback =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 227)		this->handSelect->set_visible(false);
HXLINE( 228)		this->dialogueEnded = false;
HXLINE( 229)		::String _hx_switch_0 = this->curCharacter;
            		if (  (_hx_switch_0==HX_("bf",c4,55,00,00)) ){
HXLINE( 239)			this->portraitLeft->set_visible(false);
HXLINE( 240)			if (!(this->portraitRight->visible)) {
HXLINE( 242)				this->portraitRight->set_visible(true);
HXLINE( 243)				this->portraitRight->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
            			}
HXLINE( 238)			goto _hx_goto_9;
            		}
            		if (  (_hx_switch_0==HX_("dad",47,36,4c,00)) ){
HXLINE( 232)			this->portraitRight->set_visible(false);
HXLINE( 233)			if (!(this->portraitLeft->visible)) {
HXLINE( 235)				if ((( (::String)(::states::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("senpai",3c,df,8d,6b))) {
HXLINE( 235)					this->portraitLeft->set_visible(true);
            				}
HXLINE( 236)				this->portraitLeft->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
            			}
HXLINE( 231)			goto _hx_goto_9;
            		}
            		_hx_goto_9:;
HXLINE( 246)		if (::hx::IsNotNull( this->nextDialogueThing )) {
HXLINE( 247)			this->nextDialogueThing();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBox_obj,startDialogue,(void))

void DialogueBox_obj::cleanDialog(){
            	HX_STACKFRAME(&_hx_pos_8116a89da7f4c21e_252_cleanDialog)
HXLINE( 253)		::Array< ::String > splitName = this->dialogueList->__get(0).split(HX_(":",3a,00,00,00));
HXLINE( 254)		this->curCharacter = splitName->__get(1);
HXLINE( 255)		this->dialogueList[0] = ::StringTools_obj::trim(this->dialogueList->__get(0).substr((splitName->__get(1).length + 2),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBox_obj,cleanDialog,(void))


::hx::ObjectPtr< DialogueBox_obj > DialogueBox_obj::__new(::hx::Null< bool >  __o_talkingRight,::Array< ::String > dialogueList) {
	::hx::ObjectPtr< DialogueBox_obj > __this = new DialogueBox_obj();
	__this->__construct(__o_talkingRight,dialogueList);
	return __this;
}

::hx::ObjectPtr< DialogueBox_obj > DialogueBox_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_talkingRight,::Array< ::String > dialogueList) {
	DialogueBox_obj *__this = (DialogueBox_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DialogueBox_obj), true, "cutscenes.DialogueBox"));
	*(void **)__this = DialogueBox_obj::_hx_vtable;
	__this->__construct(__o_talkingRight,dialogueList);
	return __this;
}

DialogueBox_obj::DialogueBox_obj()
{
}

void DialogueBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DialogueBox);
	HX_MARK_MEMBER_NAME(box,"box");
	HX_MARK_MEMBER_NAME(curCharacter,"curCharacter");
	HX_MARK_MEMBER_NAME(dialogueList,"dialogueList");
	HX_MARK_MEMBER_NAME(swagDialogue,"swagDialogue");
	HX_MARK_MEMBER_NAME(dropText,"dropText");
	HX_MARK_MEMBER_NAME(finishThing,"finishThing");
	HX_MARK_MEMBER_NAME(nextDialogueThing,"nextDialogueThing");
	HX_MARK_MEMBER_NAME(skipDialogueThing,"skipDialogueThing");
	HX_MARK_MEMBER_NAME(portraitLeft,"portraitLeft");
	HX_MARK_MEMBER_NAME(portraitRight,"portraitRight");
	HX_MARK_MEMBER_NAME(handSelect,"handSelect");
	HX_MARK_MEMBER_NAME(bgFade,"bgFade");
	HX_MARK_MEMBER_NAME(dialogueOpened,"dialogueOpened");
	HX_MARK_MEMBER_NAME(dialogueStarted,"dialogueStarted");
	HX_MARK_MEMBER_NAME(dialogueEnded,"dialogueEnded");
	HX_MARK_MEMBER_NAME(isEnding,"isEnding");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DialogueBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(box,"box");
	HX_VISIT_MEMBER_NAME(curCharacter,"curCharacter");
	HX_VISIT_MEMBER_NAME(dialogueList,"dialogueList");
	HX_VISIT_MEMBER_NAME(swagDialogue,"swagDialogue");
	HX_VISIT_MEMBER_NAME(dropText,"dropText");
	HX_VISIT_MEMBER_NAME(finishThing,"finishThing");
	HX_VISIT_MEMBER_NAME(nextDialogueThing,"nextDialogueThing");
	HX_VISIT_MEMBER_NAME(skipDialogueThing,"skipDialogueThing");
	HX_VISIT_MEMBER_NAME(portraitLeft,"portraitLeft");
	HX_VISIT_MEMBER_NAME(portraitRight,"portraitRight");
	HX_VISIT_MEMBER_NAME(handSelect,"handSelect");
	HX_VISIT_MEMBER_NAME(bgFade,"bgFade");
	HX_VISIT_MEMBER_NAME(dialogueOpened,"dialogueOpened");
	HX_VISIT_MEMBER_NAME(dialogueStarted,"dialogueStarted");
	HX_VISIT_MEMBER_NAME(dialogueEnded,"dialogueEnded");
	HX_VISIT_MEMBER_NAME(isEnding,"isEnding");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DialogueBox_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { return ::hx::Val( box ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgFade") ) { return ::hx::Val( bgFade ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dropText") ) { return ::hx::Val( dropText ); }
		if (HX_FIELD_EQ(inName,"isEnding") ) { return ::hx::Val( isEnding ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"handSelect") ) { return ::hx::Val( handSelect ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"finishThing") ) { return ::hx::Val( finishThing ); }
		if (HX_FIELD_EQ(inName,"cleanDialog") ) { return ::hx::Val( cleanDialog_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { return ::hx::Val( curCharacter ); }
		if (HX_FIELD_EQ(inName,"dialogueList") ) { return ::hx::Val( dialogueList ); }
		if (HX_FIELD_EQ(inName,"swagDialogue") ) { return ::hx::Val( swagDialogue ); }
		if (HX_FIELD_EQ(inName,"portraitLeft") ) { return ::hx::Val( portraitLeft ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"portraitRight") ) { return ::hx::Val( portraitRight ); }
		if (HX_FIELD_EQ(inName,"dialogueEnded") ) { return ::hx::Val( dialogueEnded ); }
		if (HX_FIELD_EQ(inName,"startDialogue") ) { return ::hx::Val( startDialogue_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dialogueOpened") ) { return ::hx::Val( dialogueOpened ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dialogueStarted") ) { return ::hx::Val( dialogueStarted ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nextDialogueThing") ) { return ::hx::Val( nextDialogueThing ); }
		if (HX_FIELD_EQ(inName,"skipDialogueThing") ) { return ::hx::Val( skipDialogueThing ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DialogueBox_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { box=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgFade") ) { bgFade=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dropText") ) { dropText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isEnding") ) { isEnding=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"handSelect") ) { handSelect=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"finishThing") ) { finishThing=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { curCharacter=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dialogueList") ) { dialogueList=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"swagDialogue") ) { swagDialogue=inValue.Cast<  ::flixel::addons::text::FlxTypeText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"portraitLeft") ) { portraitLeft=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"portraitRight") ) { portraitRight=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dialogueEnded") ) { dialogueEnded=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dialogueOpened") ) { dialogueOpened=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dialogueStarted") ) { dialogueStarted=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nextDialogueThing") ) { nextDialogueThing=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skipDialogueThing") ) { skipDialogueThing=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DialogueBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("box",0b,be,4a,00));
	outFields->push(HX_("curCharacter",09,86,7c,d7));
	outFields->push(HX_("dialogueList",96,e1,d8,0d));
	outFields->push(HX_("swagDialogue",c2,ad,00,ad));
	outFields->push(HX_("dropText",7c,74,94,f2));
	outFields->push(HX_("portraitLeft",02,9f,53,0d));
	outFields->push(HX_("portraitRight",81,90,e4,12));
	outFields->push(HX_("handSelect",cb,77,90,7c));
	outFields->push(HX_("bgFade",e1,fd,cd,ab));
	outFields->push(HX_("dialogueOpened",e1,e5,9f,10));
	outFields->push(HX_("dialogueStarted",09,77,22,70));
	outFields->push(HX_("dialogueEnded",c2,14,61,0b));
	outFields->push(HX_("isEnding",71,3f,f2,52));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DialogueBox_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,box),HX_("box",0b,be,4a,00)},
	{::hx::fsString,(int)offsetof(DialogueBox_obj,curCharacter),HX_("curCharacter",09,86,7c,d7)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(DialogueBox_obj,dialogueList),HX_("dialogueList",96,e1,d8,0d)},
	{::hx::fsObject /*  ::flixel::addons::text::FlxTypeText */ ,(int)offsetof(DialogueBox_obj,swagDialogue),HX_("swagDialogue",c2,ad,00,ad)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(DialogueBox_obj,dropText),HX_("dropText",7c,74,94,f2)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBox_obj,finishThing),HX_("finishThing",9b,aa,8e,36)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBox_obj,nextDialogueThing),HX_("nextDialogueThing",c3,c2,a1,d9)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBox_obj,skipDialogueThing),HX_("skipDialogueThing",b7,29,12,4e)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,portraitLeft),HX_("portraitLeft",02,9f,53,0d)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,portraitRight),HX_("portraitRight",81,90,e4,12)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,handSelect),HX_("handSelect",cb,77,90,7c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,bgFade),HX_("bgFade",e1,fd,cd,ab)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,dialogueOpened),HX_("dialogueOpened",e1,e5,9f,10)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,dialogueStarted),HX_("dialogueStarted",09,77,22,70)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,dialogueEnded),HX_("dialogueEnded",c2,14,61,0b)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,isEnding),HX_("isEnding",71,3f,f2,52)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DialogueBox_obj_sStaticStorageInfo = 0;
#endif

static ::String DialogueBox_obj_sMemberFields[] = {
	HX_("box",0b,be,4a,00),
	HX_("curCharacter",09,86,7c,d7),
	HX_("dialogueList",96,e1,d8,0d),
	HX_("swagDialogue",c2,ad,00,ad),
	HX_("dropText",7c,74,94,f2),
	HX_("finishThing",9b,aa,8e,36),
	HX_("nextDialogueThing",c3,c2,a1,d9),
	HX_("skipDialogueThing",b7,29,12,4e),
	HX_("portraitLeft",02,9f,53,0d),
	HX_("portraitRight",81,90,e4,12),
	HX_("handSelect",cb,77,90,7c),
	HX_("bgFade",e1,fd,cd,ab),
	HX_("dialogueOpened",e1,e5,9f,10),
	HX_("dialogueStarted",09,77,22,70),
	HX_("dialogueEnded",c2,14,61,0b),
	HX_("update",09,86,05,87),
	HX_("isEnding",71,3f,f2,52),
	HX_("startDialogue",9a,8f,4f,ac),
	HX_("cleanDialog",31,37,ca,9e),
	::String(null()) };

::hx::Class DialogueBox_obj::__mClass;

void DialogueBox_obj::__register()
{
	DialogueBox_obj _hx_dummy;
	DialogueBox_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("cutscenes.DialogueBox",6e,88,8a,c0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DialogueBox_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DialogueBox_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DialogueBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DialogueBox_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace cutscenes
