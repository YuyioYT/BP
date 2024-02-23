#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_BaseStage
#include <backend/BaseStage.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
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
#ifndef INCLUDED_cutscenes_DialogueBox
#include <cutscenes/DialogueBox.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_objects_BGSprite
#include <objects/BGSprite.h>
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
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_states_stages_School
#include <states/stages/School.h>
#endif
#ifndef INCLUDED_states_stages_objects_BackgroundGirls
#include <states/stages/objects/BackgroundGirls.h>
#endif
#ifndef INCLUDED_substates_GameOverSubstate
#include <substates/GameOverSubstate.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_628fdf92be9f29ca_13_new,"states.stages.School","new",0xc3fbf933,"states.stages.School.new","states/stages/School.hx",13,0xfaa6b77d)
HX_LOCAL_STACK_FRAME(_hx_pos_628fdf92be9f29ca_17_create,"states.stages.School","create",0x6d684409,"states.stages.School.create","states/stages/School.hx",17,0xfaa6b77d)
static const int _hx_array_data_413ce3c1_3[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,(int)15,(int)16,(int)17,(int)18,
};
static const ::String _hx_array_data_413ce3c1_4[] = {
	HX_("PETALS ALL",0a,57,91,88),
};
HX_LOCAL_STACK_FRAME(_hx_pos_628fdf92be9f29ca_98_beatHit,"states.stages.School","beatHit",0xb06d78d0,"states.stages.School.beatHit","states/stages/School.hx",98,0xfaa6b77d)
HX_LOCAL_STACK_FRAME(_hx_pos_628fdf92be9f29ca_104_eventCalled,"states.stages.School","eventCalled",0x4b3f540a,"states.stages.School.eventCalled","states/stages/School.hx",104,0xfaa6b77d)
HX_LOCAL_STACK_FRAME(_hx_pos_628fdf92be9f29ca_113_initDoof,"states.stages.School","initDoof",0xe6391adf,"states.stages.School.initDoof","states/stages/School.hx",113,0xfaa6b77d)
HX_LOCAL_STACK_FRAME(_hx_pos_628fdf92be9f29ca_141_schoolIntro,"states.stages.School","schoolIntro",0x885a112b,"states.stages.School.schoolIntro","states/stages/School.hx",141,0xfaa6b77d)
HX_LOCAL_STACK_FRAME(_hx_pos_628fdf92be9f29ca_134_schoolIntro,"states.stages.School","schoolIntro",0x885a112b,"states.stages.School.schoolIntro","states/stages/School.hx",134,0xfaa6b77d)
namespace states{
namespace stages{

void School_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_628fdf92be9f29ca_13_new)
HXLINE( 111)		this->doof = null();
HXLINE(  13)		super::__construct();
            	}

Dynamic School_obj::__CreateEmpty() { return new School_obj; }

void *School_obj::_hx_vtable = 0;

Dynamic School_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< School_obj > _hx_result = new School_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool School_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x230cab9d) {
		if (inClassId<=(int)0x1e7b376f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1e7b376f;
		} else {
			return inClassId==(int)0x230cab9d;
		}
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void School_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_628fdf92be9f29ca_17_create)
HXLINE(  18)		 ::Dynamic _song = ::states::PlayState_obj::SONG;
HXLINE(  19)		bool _hx_tmp;
HXDLIN(  19)		if (::hx::IsNotNull( _song->__Field(HX_("gameOverSound",89,f8,70,3c),::hx::paccDynamic) )) {
HXLINE(  19)			_hx_tmp = (::StringTools_obj::trim(( (::String)(_song->__Field(HX_("gameOverSound",89,f8,70,3c),::hx::paccDynamic)) )).length < 1);
            		}
            		else {
HXLINE(  19)			_hx_tmp = true;
            		}
HXDLIN(  19)		if (_hx_tmp) {
HXLINE(  19)			::substates::GameOverSubstate_obj::deathSoundName = HX_("fnf_loss_sfx-pixel",23,e5,94,32);
            		}
HXLINE(  20)		bool _hx_tmp1;
HXDLIN(  20)		if (::hx::IsNotNull( _song->__Field(HX_("gameOverLoop",ea,8f,ff,6a),::hx::paccDynamic) )) {
HXLINE(  20)			_hx_tmp1 = (::StringTools_obj::trim(( (::String)(_song->__Field(HX_("gameOverLoop",ea,8f,ff,6a),::hx::paccDynamic)) )).length < 1);
            		}
            		else {
HXLINE(  20)			_hx_tmp1 = true;
            		}
HXDLIN(  20)		if (_hx_tmp1) {
HXLINE(  20)			::substates::GameOverSubstate_obj::loopSoundName = HX_("gameOver-pixel",1f,66,58,00);
            		}
HXLINE(  21)		bool _hx_tmp2;
HXDLIN(  21)		if (::hx::IsNotNull( _song->__Field(HX_("gameOverEnd",15,2d,a9,8d),::hx::paccDynamic) )) {
HXLINE(  21)			_hx_tmp2 = (::StringTools_obj::trim(( (::String)(_song->__Field(HX_("gameOverEnd",15,2d,a9,8d),::hx::paccDynamic)) )).length < 1);
            		}
            		else {
HXLINE(  21)			_hx_tmp2 = true;
            		}
HXDLIN(  21)		if (_hx_tmp2) {
HXLINE(  21)			::substates::GameOverSubstate_obj::endSoundName = HX_("gameOverEnd-pixel",0e,ae,3e,22);
            		}
HXLINE(  22)		bool _hx_tmp3;
HXDLIN(  22)		if (::hx::IsNotNull( _song->__Field(HX_("gameOverChar",5c,48,07,65),::hx::paccDynamic) )) {
HXLINE(  22)			_hx_tmp3 = (::StringTools_obj::trim(( (::String)(_song->__Field(HX_("gameOverChar",5c,48,07,65),::hx::paccDynamic)) )).length < 1);
            		}
            		else {
HXLINE(  22)			_hx_tmp3 = true;
            		}
HXDLIN(  22)		if (_hx_tmp3) {
HXLINE(  22)			::substates::GameOverSubstate_obj::characterName = HX_("bf-pixel-dead",34,d0,3d,c4);
            		}
HXLINE(  24)		 ::objects::BGSprite bgSky =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("weeb/weebSky",52,34,cf,a4),0,0,((Float)0.1),((Float)0.1),null(),null());
HXLINE(  25)		this->add(bgSky);
HXLINE(  26)		bgSky->set_antialiasing(false);
HXLINE(  28)		int repositionShit = -200;
HXLINE(  30)		 ::objects::BGSprite bgSchool =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("weeb/weebSchool",a3,21,c0,f5),repositionShit,0,((Float)0.6),((Float)0.90),null(),null());
HXLINE(  31)		this->add(bgSchool);
HXLINE(  32)		bgSchool->set_antialiasing(false);
HXLINE(  34)		 ::objects::BGSprite bgStreet =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("weeb/weebStreet",32,81,24,c6),repositionShit,0,((Float)0.95),((Float)0.95),null(),null());
HXLINE(  35)		this->add(bgStreet);
HXLINE(  36)		bgStreet->set_antialiasing(false);
HXLINE(  38)		Float widShit = bgSky->get_width();
HXDLIN(  38)		int widShit1 = ::Std_obj::_hx_int((widShit * ::states::PlayState_obj::daPixelZoom));
HXLINE(  39)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE(  40)			 ::objects::BGSprite fgTrees =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("weeb/weebTreesBack",4d,ac,bd,40),(repositionShit + 170),130,((Float)0.9),((Float)0.9),null(),null());
HXLINE(  41)			fgTrees->setGraphicSize(::Std_obj::_hx_int((( (Float)(widShit1) ) * ((Float)0.8))),null());
HXLINE(  42)			fgTrees->updateHitbox();
HXLINE(  43)			this->add(fgTrees);
HXLINE(  44)			fgTrees->set_antialiasing(false);
            		}
HXLINE(  47)		 ::flixel::FlxSprite bgTrees =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(repositionShit - 380),-800,null());
HXLINE(  48)		::String library = null();
HXDLIN(  48)		 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(HX_("weeb/weebTrees",06,ab,3a,76),null(),true);
HXDLIN(  48)		bool txtExists = false;
HXDLIN(  48)		::String txt = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/weebTrees",06,ab,3a,76)) + HX_(".txt",02,3f,c0,1e)));
HXDLIN(  48)		if (::sys::FileSystem_obj::exists(txt)) {
HXLINE(  48)			txtExists = true;
            		}
HXDLIN(  48)		 ::Dynamic _hx_tmp4;
HXDLIN(  48)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  48)			_hx_tmp4 = imageLoaded;
            		}
            		else {
HXLINE(  48)			_hx_tmp4 = ::backend::Paths_obj::image(HX_("weeb/weebTrees",06,ab,3a,76),library,true);
            		}
HXDLIN(  48)		::String _hx_tmp5;
HXDLIN(  48)		if (txtExists) {
HXLINE(  48)			_hx_tmp5 = ::sys::io::File_obj::getContent(txt);
            		}
            		else {
HXLINE(  48)			_hx_tmp5 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/weebTrees",06,ab,3a,76)) + HX_(".txt",02,3f,c0,1e)),null(),library,null());
            		}
HXDLIN(  48)		bgTrees->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSpriteSheetPacker(_hx_tmp4,_hx_tmp5));
HXLINE(  49)		bgTrees->animation->add(HX_("treeLoop",e2,72,7f,2b),::Array_obj< int >::fromData( _hx_array_data_413ce3c1_3,19),12,null(),null(),null());
HXLINE(  50)		bgTrees->animation->play(HX_("treeLoop",e2,72,7f,2b),null(),null(),null());
HXLINE(  51)		{
HXLINE(  51)			 ::flixel::math::FlxBasePoint this1 = bgTrees->scrollFactor;
HXDLIN(  51)			this1->set_x(((Float)0.85));
HXDLIN(  51)			this1->set_y(((Float)0.85));
            		}
HXLINE(  52)		this->add(bgTrees);
HXLINE(  53)		bgTrees->set_antialiasing(false);
HXLINE(  55)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE(  56)			 ::objects::BGSprite treeLeaves =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("weeb/petals",8d,ca,2b,c2),repositionShit,-40,((Float)0.85),((Float)0.85),::Array_obj< ::String >::fromData( _hx_array_data_413ce3c1_4,1),true);
HXLINE(  57)			treeLeaves->setGraphicSize(widShit1,null());
HXLINE(  58)			treeLeaves->updateHitbox();
HXLINE(  59)			this->add(treeLeaves);
HXLINE(  60)			treeLeaves->set_antialiasing(false);
            		}
HXLINE(  63)		bgSky->setGraphicSize(widShit1,null());
HXLINE(  64)		bgSchool->setGraphicSize(widShit1,null());
HXLINE(  65)		bgStreet->setGraphicSize(widShit1,null());
HXLINE(  66)		bgTrees->setGraphicSize(::Std_obj::_hx_int((( (Float)(widShit1) ) * ((Float)1.4))),null());
HXLINE(  68)		bgSky->updateHitbox();
HXLINE(  69)		bgSchool->updateHitbox();
HXLINE(  70)		bgStreet->updateHitbox();
HXLINE(  71)		bgTrees->updateHitbox();
HXLINE(  73)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE(  74)			this->bgGirls =  ::states::stages::objects::BackgroundGirls_obj::__alloc( HX_CTX ,( (Float)(-100) ),( (Float)(190) ));
HXLINE(  75)			{
HXLINE(  75)				 ::flixel::math::FlxBasePoint this1 = this->bgGirls->scrollFactor;
HXDLIN(  75)				this1->set_x(((Float)0.9));
HXDLIN(  75)				this1->set_y(((Float)0.9));
            			}
HXLINE(  76)			this->add(this->bgGirls);
            		}
HXLINE(  78)		this->setDefaultGF(HX_("gf-pixel",98,3e,8c,55));
HXLINE(  80)		::String _hx_switch_0 = ( (::String)(this->game->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) );
            		if (  (_hx_switch_0==HX_("roses",04,6c,64,ed)) ){
HXLINE(  86)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  86)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("ANGRY_TEXT_BOX",57,5c,5c,19),null()),null(),null(),null(),null(),null());
HXDLIN(  86)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("senpai",3c,df,8d,6b)) ){
HXLINE(  83)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  83)			::String library = null();
HXDLIN(  83)			 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("Lunchbox",c1,34,3f,3d),library);
HXDLIN(  83)			_hx_tmp->playMusic(file,0,null(),null());
HXLINE(  84)			{
HXLINE(  84)				 ::flixel::sound::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  84)				 ::Dynamic onComplete = null();
HXDLIN(  84)				if (::hx::IsNull( _this->_channel )) {
HXLINE(  84)					_this->play(null(),null(),null());
            				}
HXDLIN(  84)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE(  84)					_this->fadeTween->cancel();
            				}
HXDLIN(  84)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.8),1, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
HXLINE(  82)			goto _hx_goto_1;
            		}
            		_hx_goto_1:;
HXLINE(  88)		bool _hx_tmp6;
HXDLIN(  88)		if (::states::PlayState_obj::isStoryMode) {
HXLINE(  88)			_hx_tmp6 = !(::states::PlayState_obj::seenCutscene);
            		}
            		else {
HXLINE(  88)			_hx_tmp6 = false;
            		}
HXDLIN(  88)		if (_hx_tmp6) {
HXLINE(  90)			if ((( (::String)(this->game->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) ) == HX_("roses",04,6c,64,ed))) {
HXLINE(  90)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  90)				_hx_tmp->play(::backend::Paths_obj::sound(HX_("ANGRY",01,81,d0,a0),null()),null(),null(),null(),null(),null());
            			}
HXLINE(  91)			this->initDoof();
HXLINE(  92)			this->setStartCallback(this->schoolIntro_dyn());
            		}
            	}


void School_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_628fdf92be9f29ca_98_beatHit)
HXDLIN(  98)		if (::hx::IsNotNull( this->bgGirls )) {
HXDLIN(  98)			this->bgGirls->dance();
            		}
            	}


void School_obj::eventCalled(::String eventName,::String value1,::String value2, ::Dynamic flValue1, ::Dynamic flValue2,Float strumTime){
            	HX_STACKFRAME(&_hx_pos_628fdf92be9f29ca_104_eventCalled)
HXDLIN( 104)		if ((eventName == HX_("BG Freaks Expression",4d,76,b1,17))) {
HXLINE( 107)			if (::hx::IsNotNull( this->bgGirls )) {
HXLINE( 107)				this->bgGirls->swapDanceType();
            			}
            		}
            	}


void School_obj::initDoof(){
            	HX_GC_STACKFRAME(&_hx_pos_628fdf92be9f29ca_113_initDoof)
HXLINE( 114)		::String library = null();
HXDLIN( 114)		::String file = ::backend::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + (((( (::String)(this->game->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) ) + HX_("/",2f,00,00,00)) + ( (::String)(this->game->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) )) + HX_("Dialogue",38,e9,45,81))) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library,null());
HXLINE( 116)		if (!(::sys::FileSystem_obj::exists(file))) {
HXLINE( 121)			this->startCountdown();
HXLINE( 122)			return;
            		}
HXLINE( 125)		::String path = file;
HXDLIN( 125)		::String daList = null();
HXDLIN( 125)		::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXDLIN( 125)		path = formatted->__get((formatted->length - 1));
HXDLIN( 125)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 125)			daList = ::sys::io::File_obj::getContent(path);
            		}
HXDLIN( 125)		::Array< ::String > _hx_tmp;
HXDLIN( 125)		if (::hx::IsNotNull( daList )) {
HXLINE( 125)			::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXDLIN( 125)			daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXDLIN( 125)			{
HXLINE( 125)				int _g = 0;
HXDLIN( 125)				int _g1 = daList1->length;
HXDLIN( 125)				while((_g < _g1)){
HXLINE( 125)					_g = (_g + 1);
HXDLIN( 125)					int i = (_g - 1);
HXDLIN( 125)					daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            				}
            			}
HXDLIN( 125)			_hx_tmp = daList1;
            		}
            		else {
HXLINE( 125)			_hx_tmp = ::Array_obj< ::String >::__new(0);
            		}
HXDLIN( 125)		this->doof =  ::cutscenes::DialogueBox_obj::__alloc( HX_CTX ,false,_hx_tmp);
HXLINE( 126)		this->doof->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,( ( ::flixel::FlxCamera)(this->game->__Field(HX_("camHUD",e8,2b,76,b7),::hx::paccDynamic)) )));
HXLINE( 127)		{
HXLINE( 127)			 ::flixel::math::FlxBasePoint this1 = this->doof->scrollFactor;
HXDLIN( 127)			this1->set_x(( (Float)(0) ));
HXDLIN( 127)			this1->set_y(( (Float)(0) ));
            		}
HXLINE( 128)		this->doof->finishThing = this->startCountdown_dyn();
HXLINE( 129)		this->doof->nextDialogueThing = ::states::PlayState_obj::instance->startNextDialogue_dyn();
HXLINE( 130)		this->doof->skipDialogueThing = ::states::PlayState_obj::instance->skipDialogue_dyn();
            	}


HX_DEFINE_DYNAMIC_FUNC0(School_obj,initDoof,(void))

void School_obj::schoolIntro(){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::states::stages::School,_gthis, ::flixel::FlxSprite,black1) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_628fdf92be9f29ca_141_schoolIntro)
HXLINE( 142)			black1->set_alpha((black1->alpha - ((Float)0.15)));
HXLINE( 144)			if ((black1->alpha > 0)) {
HXLINE( 145)				tmr->reset(((Float)0.3));
            			}
            			else {
HXLINE( 148)				if (::hx::IsNotNull( _gthis->doof )) {
HXLINE( 149)					_gthis->add(_gthis->doof);
            				}
            				else {
HXLINE( 151)					_gthis->startCountdown();
            				}
HXLINE( 153)				_gthis->remove(black1);
HXLINE( 154)				black1->destroy();
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_628fdf92be9f29ca_134_schoolIntro)
HXDLIN( 134)		 ::states::stages::School _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 135)		this->game->__SetField(HX_("inCutscene",8f,21,01,56),true,::hx::paccDynamic);
HXLINE( 136)		 ::flixel::FlxSprite black =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-100,-100,null());
HXDLIN( 136)		 ::flixel::FlxSprite black1 = black->makeGraphic((::flixel::FlxG_obj::width * 2),(::flixel::FlxG_obj::height * 2),-16777216,null(),null());
HXLINE( 137)		{
HXLINE( 137)			 ::flixel::math::FlxBasePoint this1 = black1->scrollFactor;
HXDLIN( 137)			this1->set_x(( (Float)(0) ));
HXDLIN( 137)			this1->set_y(( (Float)(0) ));
            		}
HXLINE( 138)		if ((( (::String)(this->game->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) ) == HX_("senpai",3c,df,8d,6b))) {
HXLINE( 138)			this->add(black1);
            		}
HXLINE( 140)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.3), ::Dynamic(new _hx_Closure_0(_gthis,black1)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(School_obj,schoolIntro,(void))


::hx::ObjectPtr< School_obj > School_obj::__new() {
	::hx::ObjectPtr< School_obj > __this = new School_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< School_obj > School_obj::__alloc(::hx::Ctx *_hx_ctx) {
	School_obj *__this = (School_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(School_obj), true, "states.stages.School"));
	*(void **)__this = School_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

School_obj::School_obj()
{
}

void School_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(School);
	HX_MARK_MEMBER_NAME(bgGirls,"bgGirls");
	HX_MARK_MEMBER_NAME(doof,"doof");
	 ::backend::BaseStage_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void School_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bgGirls,"bgGirls");
	HX_VISIT_MEMBER_NAME(doof,"doof");
	 ::backend::BaseStage_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val School_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"doof") ) { return ::hx::Val( doof ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgGirls") ) { return ::hx::Val( bgGirls ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"initDoof") ) { return ::hx::Val( initDoof_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"eventCalled") ) { return ::hx::Val( eventCalled_dyn() ); }
		if (HX_FIELD_EQ(inName,"schoolIntro") ) { return ::hx::Val( schoolIntro_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val School_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"doof") ) { doof=inValue.Cast<  ::cutscenes::DialogueBox >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgGirls") ) { bgGirls=inValue.Cast<  ::states::stages::objects::BackgroundGirls >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void School_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bgGirls",92,16,2b,41));
	outFields->push(HX_("doof",62,f1,6d,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo School_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::states::stages::objects::BackgroundGirls */ ,(int)offsetof(School_obj,bgGirls),HX_("bgGirls",92,16,2b,41)},
	{::hx::fsObject /*  ::cutscenes::DialogueBox */ ,(int)offsetof(School_obj,doof),HX_("doof",62,f1,6d,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *School_obj_sStaticStorageInfo = 0;
#endif

static ::String School_obj_sMemberFields[] = {
	HX_("bgGirls",92,16,2b,41),
	HX_("create",fc,66,0f,7c),
	HX_("beatHit",7d,ea,04,74),
	HX_("eventCalled",37,a0,35,0a),
	HX_("doof",62,f1,6d,42),
	HX_("initDoof",92,20,25,47),
	HX_("schoolIntro",58,5d,50,47),
	::String(null()) };

::hx::Class School_obj::__mClass;

void School_obj::__register()
{
	School_obj _hx_dummy;
	School_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.stages.School",c1,e3,3c,41);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(School_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< School_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = School_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = School_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
} // end namespace stages
