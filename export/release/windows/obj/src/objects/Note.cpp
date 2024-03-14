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
#ifndef INCLUDED_backend_Conductor
#include <backend/Conductor.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_NoteTypesConfig
#include <backend/NoteTypesConfig.h>
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
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
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
#ifndef INCLUDED_objects_Note
#include <objects/Note.h>
#endif
#ifndef INCLUDED_objects_StrumNote
#include <objects/StrumNote.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
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
#ifndef INCLUDED_shaders_RGBPalette
#include <shaders/RGBPalette.h>
#endif
#ifndef INCLUDED_shaders_RGBShaderReference
#include <shaders/RGBShaderReference.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0f2eb749edd76d08_34_new,"objects.Note","new",0xbe5710de,"objects.Note.new","objects/Note.hx",34,0x46ada671)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2eb749edd76d08_129_set_multSpeed,"objects.Note","set_multSpeed",0x84589958,"objects.Note.set_multSpeed","objects/Note.hx",129,0x46ada671)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2eb749edd76d08_138_resizeByRatio,"objects.Note","resizeByRatio",0xf3bb821e,"objects.Note.resizeByRatio","objects/Note.hx",138,0x46ada671)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2eb749edd76d08_145_set_texture,"objects.Note","set_texture",0x555d1e7c,"objects.Note.set_texture","objects/Note.hx",145,0x46ada671)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2eb749edd76d08_153_defaultRGB,"objects.Note","defaultRGB",0x41bcb80e,"objects.Note.defaultRGB","objects/Note.hx",153,0x46ada671)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2eb749edd76d08_165_set_noteType,"objects.Note","set_noteType",0x528aaf0b,"objects.Note.set_noteType","objects/Note.hx",165,0x46ada671)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2eb749edd76d08_389_reloadNote,"objects.Note","reloadNote",0xafcaa32d,"objects.Note.reloadNote","objects/Note.hx",389,0x46ada671)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2eb749edd76d08_462_loadNoteAnims,"objects.Note","loadNoteAnims",0x6ae2eee8,"objects.Note.loadNoteAnims","objects/Note.hx",462,0x46ada671)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2eb749edd76d08_476_loadPixelNoteAnims,"objects.Note","loadPixelNoteAnims",0x040b8e92,"objects.Note.loadPixelNoteAnims","objects/Note.hx",476,0x46ada671)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2eb749edd76d08_484_update,"objects.Note","update",0xcdd3284b,"objects.Note.update","objects/Note.hx",484,0x46ada671)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2eb749edd76d08_524_destroy,"objects.Note","destroy",0xd1a68478,"objects.Note.destroy","objects/Note.hx",524,0x46ada671)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2eb749edd76d08_530_followStrumNote,"objects.Note","followStrumNote",0x6f1097a8,"objects.Note.followStrumNote","objects/Note.hx",530,0x46ada671)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2eb749edd76d08_565_SearchForStrum,"objects.Note","SearchForStrum",0xd8a2316a,"objects.Note.SearchForStrum","objects/Note.hx",565,0x46ada671)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2eb749edd76d08_571_SearchForStrum,"objects.Note","SearchForStrum",0xd8a2316a,"objects.Note.SearchForStrum","objects/Note.hx",571,0x46ada671)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2eb749edd76d08_583_SearchForStrum,"objects.Note","SearchForStrum",0xd8a2316a,"objects.Note.SearchForStrum","objects/Note.hx",583,0x46ada671)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2eb749edd76d08_594_GoToStrum,"objects.Note","GoToStrum",0xe3451f64,"objects.Note.GoToStrum","objects/Note.hx",594,0x46ada671)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2eb749edd76d08_605_clipToStrumNote,"objects.Note","clipToStrumNote",0x0408ed6e,"objects.Note.clipToStrumNote","objects/Note.hx",605,0x46ada671)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2eb749edd76d08_368_initializeGlobalRGBShader,"objects.Note","initializeGlobalRGBShader",0xc0ea03bd,"objects.Note.initializeGlobalRGBShader","objects/Note.hx",368,0x46ada671)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2eb749edd76d08_455_getNoteSkinPostfix,"objects.Note","getNoteSkinPostfix",0x6172e2f2,"objects.Note.getNoteSkinPostfix","objects/Note.hx",455,0x46ada671)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2eb749edd76d08_66_boot,"objects.Note","boot",0xc5f0b1f4,"objects.Note.boot","objects/Note.hx",66,0x46ada671)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2eb749edd76d08_75_boot,"objects.Note","boot",0xc5f0b1f4,"objects.Note.boot","objects/Note.hx",75,0x46ada671)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2eb749edd76d08_76_boot,"objects.Note","boot",0xc5f0b1f4,"objects.Note.boot","objects/Note.hx",76,0x46ada671)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2eb749edd76d08_77_boot,"objects.Note","boot",0xc5f0b1f4,"objects.Note.boot","objects/Note.hx",77,0x46ada671)
static const ::String _hx_array_data_50d209ec_24[] = {
	HX_("purple",3c,f6,89,71),HX_("blue",9a,42,19,41),HX_("green",c3,0e,ed,99),HX_("red",51,d9,56,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_0f2eb749edd76d08_78_boot,"objects.Note","boot",0xc5f0b1f4,"objects.Note.boot","objects/Note.hx",78,0x46ada671)
namespace objects{

void Note_obj::__construct(Float strumTime,int noteData, ::objects::Note prevNote, ::Dynamic __o_sustainNote, ::Dynamic __o_inEditor, ::Dynamic createdFrom){
            		 ::Dynamic sustainNote = __o_sustainNote;
            		if (::hx::IsNull(__o_sustainNote)) sustainNote = false;
            		 ::Dynamic inEditor = __o_inEditor;
            		if (::hx::IsNull(__o_inEditor)) inEditor = false;
            	HX_GC_STACKFRAME(&_hx_pos_0f2eb749edd76d08_34_new)
HXLINE( 388)		this->correctionOffset = ((Float)0);
HXLINE( 387)		this->originalHeight = ((Float)6);
HXLINE( 385)		this->_lastNoteOffX = ((Float)0);
HXLINE( 127)		this->alphaMult = ((Float)1.0);
HXLINE( 124)		this->notetolookfor = 0;
HXLINE( 122)		this->altStrum = false;
HXLINE( 121)		this->hitsound = HX_("hitsound",9c,79,fe,2c);
HXLINE( 120)		this->hitsoundChartEditor = true;
HXLINE( 119)		this->hitsoundDisabled = false;
HXLINE( 117)		this->distance = ((Float)2000);
HXLINE( 116)		this->hitCausesMiss = false;
HXLINE( 115)		this->noMissAnimation = false;
HXLINE( 114)		this->noAnimation = false;
HXLINE( 112)		this->noteSize = ((Float)0.7);
HXLINE( 111)		this->noteOffset = ((Float)0);
HXLINE( 109)		this->texture = null();
HXLINE( 107)		this->ratingDisabled = false;
HXLINE( 106)		this->ratingMod = ((Float)0);
HXLINE( 105)		this->rating = HX_("unknown",8a,23,7b,e1);
HXLINE( 104)		this->missHealth = ((Float)0.0475);
HXLINE( 103)		this->hitHealth = ((Float)0.023);
HXLINE( 101)		this->copyAlpha = true;
HXLINE( 100)		this->copyAngle = true;
HXLINE(  99)		this->copyY = true;
HXLINE(  98)		this->copyX = true;
HXLINE(  96)		this->multSpeed = ((Float)1);
HXLINE(  95)		this->multAlpha = ((Float)1);
HXLINE(  94)		this->offsetAngle = ((Float)0);
HXLINE(  93)		this->offsetY = ((Float)0);
HXLINE(  92)		this->offsetX = ((Float)0);
HXLINE(  85)		bool _hx_tmp;
HXDLIN(  85)		if (::hx::IsNotNull( ::states::PlayState_obj::SONG )) {
HXLINE(  85)			_hx_tmp = ::hx::IsNotEq( ::states::PlayState_obj::SONG->__Field(HX_("disableNoteRGB",33,ad,d1,4a),::hx::paccDynamic),true );
            		}
            		else {
HXLINE(  85)			_hx_tmp = true;
            		}
HXLINE(  80)		this->noteSplashData =  ::Dynamic(::hx::Anon_obj::Create(9)
            			->setFixed(0,HX_("texture",db,c8,e0,9e),null())
            			->setFixed(1,HX_("a",61,00,00,00),::backend::ClientPrefs_obj::data->splashAlpha)
            			->setFixed(2,HX_("b",62,00,00,00),-1)
            			->setFixed(3,HX_("g",67,00,00,00),-1)
            			->setFixed(4,HX_("r",72,00,00,00),-1)
            			->setFixed(5,HX_("useRGBShader",cb,ac,57,46),_hx_tmp)
            			->setFixed(6,HX_("antialiasing",f4,16,b3,48),!(::states::PlayState_obj::get_isPixelStage()))
            			->setFixed(7,HX_("useGlobalShader",cf,57,4f,53),false)
            			->setFixed(8,HX_("disabled",7c,41,04,7c),false));
HXLINE(  73)		this->lowPriority = false;
HXLINE(  72)		this->lateHitMult = ((Float)1);
HXLINE(  71)		this->earlyHitMult = ((Float)1);
HXLINE(  70)		this->gfNote = false;
HXLINE(  69)		this->animSuffix = HX_("",00,00,00,00);
HXLINE(  67)		this->inEditor = false;
HXLINE(  63)		this->eventVal2 = HX_("",00,00,00,00);
HXLINE(  62)		this->eventVal1 = HX_("",00,00,00,00);
HXLINE(  61)		this->eventLength = 0;
HXLINE(  60)		this->eventName = HX_("",00,00,00,00);
HXLINE(  58)		this->noteType = null();
HXLINE(  57)		this->isSustainNote = false;
HXLINE(  56)		this->sustainLength = ((Float)0);
HXLINE(  54)		this->blockHit = false;
HXLINE(  52)		this->tail = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  50)		this->spawned = false;
HXLINE(  46)		this->noteWasHit = false;
HXLINE(  45)		this->hitByOpponent = false;
HXLINE(  44)		this->ignoreNote = false;
HXLINE(  43)		this->wasGoodHit = false;
HXLINE(  42)		this->tooLate = false;
HXLINE(  41)		this->canBeHit = false;
HXLINE(  40)		this->noteData = 0;
HXLINE(  39)		this->mustPress = false;
HXLINE(  38)		this->strumTime = ((Float)0);
HXLINE(  36)		this->extraData =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 279)		super::__construct(null(),null(),null());
HXLINE( 281)		this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 282)		if (::hx::IsNull( createdFrom )) {
HXLINE( 282)			createdFrom = ::states::PlayState_obj::instance;
            		}
HXLINE( 284)		if (::hx::IsNull( prevNote )) {
HXLINE( 285)			prevNote = ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 287)		this->prevNote = prevNote;
HXLINE( 288)		this->isSustainNote = ( (bool)(sustainNote) );
HXLINE( 289)		this->inEditor = ( (bool)(inEditor) );
HXLINE( 290)		this->set_moves(false);
HXLINE( 292)		int _hx_tmp1;
HXDLIN( 292)		if (::backend::ClientPrefs_obj::data->middleScroll) {
HXLINE( 292)			_hx_tmp1 = ::states::PlayState_obj::STRUM_X_MIDDLESCROLL;
            		}
            		else {
HXLINE( 292)			_hx_tmp1 = ::states::PlayState_obj::STRUM_X;
            		}
HXDLIN( 292)		this->set_x((this->x + (_hx_tmp1 + 50)));
HXLINE( 294)		this->set_y((this->y - ( (Float)(2000) )));
HXLINE( 295)		this->strumTime = strumTime;
HXLINE( 296)		if (!(( (bool)(inEditor) ))) {
HXLINE( 296)			 ::objects::Note _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)			_hx_tmp->strumTime = (_hx_tmp->strumTime + ::backend::ClientPrefs_obj::data->noteOffset);
            		}
HXLINE( 298)		this->noteData = noteData;
HXLINE( 300)		if ((noteData > -1)) {
HXLINE( 301)			this->set_texture(HX_("",00,00,00,00));
HXLINE( 302)			this->rgbShader =  ::shaders::RGBShaderReference_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),::objects::Note_obj::initializeGlobalRGBShader(noteData));
HXLINE( 303)			bool _hx_tmp;
HXDLIN( 303)			if (::hx::IsNotNull( ::states::PlayState_obj::SONG )) {
HXLINE( 303)				_hx_tmp = ( (bool)(::states::PlayState_obj::SONG->__Field(HX_("disableNoteRGB",33,ad,d1,4a),::hx::paccDynamic)) );
            			}
            			else {
HXLINE( 303)				_hx_tmp = false;
            			}
HXDLIN( 303)			if (_hx_tmp) {
HXLINE( 303)				this->rgbShader->set_enabled(false);
            			}
HXLINE( 305)			this->set_x((this->x + (::objects::Note_obj::swagWidth * ( (Float)(noteData) ))));
HXLINE( 306)			bool _hx_tmp1;
HXDLIN( 306)			if (!(this->isSustainNote)) {
HXLINE( 306)				_hx_tmp1 = (noteData < ::objects::Note_obj::colArray->length);
            			}
            			else {
HXLINE( 306)				_hx_tmp1 = false;
            			}
HXDLIN( 306)			if (_hx_tmp1) {
HXLINE( 307)				::String animToPlay = HX_("",00,00,00,00);
HXLINE( 308)				animToPlay = ::objects::Note_obj::colArray->__get(::hx::Mod(noteData,::objects::Note_obj::colArray->length));
HXLINE( 309)				this->animation->play((animToPlay + HX_("Scroll",2d,4c,f9,7b)),null(),null(),null());
            			}
            		}
HXLINE( 315)		if (::hx::IsNotNull( prevNote )) {
HXLINE( 316)			prevNote->nextNote = ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 318)		bool _hx_tmp11;
HXDLIN( 318)		if (this->isSustainNote) {
HXLINE( 318)			_hx_tmp11 = ::hx::IsNotNull( prevNote );
            		}
            		else {
HXLINE( 318)			_hx_tmp11 = false;
            		}
HXDLIN( 318)		if (_hx_tmp11) {
HXLINE( 320)			this->set_alpha(((Float)0.6));
HXLINE( 321)			this->multAlpha = ((Float)0.6);
HXLINE( 322)			this->hitsoundDisabled = true;
HXLINE( 323)			if (::backend::ClientPrefs_obj::data->downScroll) {
HXLINE( 323)				this->set_flipY(true);
            			}
HXLINE( 325)			 ::objects::Note _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 325)			Float _hx_tmp1 = _hx_tmp->offsetX;
HXDLIN( 325)			_hx_tmp->offsetX = (_hx_tmp1 + (this->get_width() / ( (Float)(2) )));
HXLINE( 326)			this->copyAngle = false;
HXLINE( 328)			this->animation->play((::objects::Note_obj::colArray->__get(::hx::Mod(noteData,::objects::Note_obj::colArray->length)) + HX_("holdend",fc,4b,02,b8)),null(),null(),null());
HXLINE( 330)			this->updateHitbox();
HXLINE( 332)			 ::objects::Note _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 332)			Float _hx_tmp3 = _hx_tmp2->offsetX;
HXDLIN( 332)			_hx_tmp2->offsetX = (_hx_tmp3 - (this->get_width() / ( (Float)(2) )));
HXLINE( 334)			if (::states::PlayState_obj::get_isPixelStage()) {
HXLINE( 335)				 ::objects::Note _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 335)				_hx_tmp->offsetX = (_hx_tmp->offsetX + 30);
            			}
HXLINE( 337)			if (prevNote->isSustainNote) {
HXLINE( 339)				prevNote->animation->play((::objects::Note_obj::colArray->__get(::hx::Mod(prevNote->noteData,::objects::Note_obj::colArray->length)) + HX_("hold",3f,c9,12,45)),null(),null(),null());
HXLINE( 341)				prevNote->scale->set_y((prevNote->scale->y * ((::backend::Conductor_obj::stepCrochet / ( (Float)(100) )) * ((Float)1.05))));
HXLINE( 342)				bool _hx_tmp;
HXDLIN( 342)				if (::hx::IsNotNull( createdFrom )) {
HXLINE( 342)					_hx_tmp = ::hx::IsNotNull( createdFrom->__Field(HX_("songSpeed",72,df,e3,b0),::hx::paccDynamic) );
            				}
            				else {
HXLINE( 342)					_hx_tmp = false;
            				}
HXDLIN( 342)				if (_hx_tmp) {
HXLINE( 342)					prevNote->scale->set_y((prevNote->scale->y * ( (Float)(createdFrom->__Field(HX_("songSpeed",72,df,e3,b0),::hx::paccDynamic)) )));
            				}
HXLINE( 344)				if (::states::PlayState_obj::get_isPixelStage()) {
HXLINE( 345)					prevNote->scale->set_y((prevNote->scale->y * ((Float)1.19)));
HXLINE( 346)					{
HXLINE( 346)						 ::flixel::math::FlxBasePoint this1 = prevNote->scale;
HXDLIN( 346)						Float prevNote1 = prevNote->scale->y;
HXDLIN( 346)						this1->set_y((prevNote1 * (( (Float)(6) ) / this->get_height())));
            					}
            				}
HXLINE( 348)				prevNote->updateHitbox();
            			}
HXLINE( 352)			if (::states::PlayState_obj::get_isPixelStage()) {
HXLINE( 354)				this->scale->set_y((this->scale->y * ::states::PlayState_obj::daPixelZoom));
HXLINE( 355)				this->updateHitbox();
            			}
HXLINE( 357)			this->earlyHitMult = ( (Float)(0) );
            		}
            		else {
HXLINE( 359)			if (!(this->isSustainNote)) {
HXLINE( 361)				this->centerOffsets(null());
HXLINE( 362)				{
HXLINE( 362)					 ::flixel::math::FlxBasePoint this1 = this->origin;
HXDLIN( 362)					Float y = (( (Float)(this->frameHeight) ) * ((Float)0.5));
HXDLIN( 362)					this1->set_x((( (Float)(this->frameWidth) ) * ((Float)0.5)));
HXDLIN( 362)					this1->set_y(y);
            				}
            			}
            		}
HXLINE( 364)		this->set_x((this->x + this->offsetX));
            	}

Dynamic Note_obj::__CreateEmpty() { return new Note_obj; }

void *Note_obj::_hx_vtable = 0;

Dynamic Note_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Note_obj > _hx_result = new Note_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool Note_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x75aeabe6) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x75aeabe6;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

Float Note_obj::set_multSpeed(Float value){
            	HX_STACKFRAME(&_hx_pos_0f2eb749edd76d08_129_set_multSpeed)
HXLINE( 130)		this->resizeByRatio((value / this->multSpeed));
HXLINE( 131)		this->multSpeed = value;
HXLINE( 133)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Note_obj,set_multSpeed,return )

void Note_obj::resizeByRatio(Float ratio){
            	HX_STACKFRAME(&_hx_pos_0f2eb749edd76d08_138_resizeByRatio)
HXDLIN( 138)		bool _hx_tmp;
HXDLIN( 138)		bool _hx_tmp1;
HXDLIN( 138)		if (this->isSustainNote) {
HXDLIN( 138)			_hx_tmp1 = ::hx::IsNotNull( this->animation->_curAnim );
            		}
            		else {
HXDLIN( 138)			_hx_tmp1 = false;
            		}
HXDLIN( 138)		if (_hx_tmp1) {
HXDLIN( 138)			_hx_tmp = !(::StringTools_obj::endsWith(this->animation->_curAnim->name,HX_("end",db,03,4d,00)));
            		}
            		else {
HXDLIN( 138)			_hx_tmp = false;
            		}
HXDLIN( 138)		if (_hx_tmp) {
HXLINE( 140)			this->scale->set_y((this->scale->y * ratio));
HXLINE( 141)			this->updateHitbox();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Note_obj,resizeByRatio,(void))

::String Note_obj::set_texture(::String value){
            	HX_STACKFRAME(&_hx_pos_0f2eb749edd76d08_145_set_texture)
HXLINE( 146)		if ((this->texture != value)) {
HXLINE( 146)			this->reloadNote(value,null());
            		}
HXLINE( 148)		this->texture = value;
HXLINE( 149)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Note_obj,set_texture,return )

void Note_obj::defaultRGB(){
            	HX_STACKFRAME(&_hx_pos_0f2eb749edd76d08_153_defaultRGB)
HXLINE( 154)		::Array< int > arr = ::backend::ClientPrefs_obj::data->arrowRGB->__get(this->noteData).StaticCast< ::Array< int > >();
HXLINE( 155)		if (::states::PlayState_obj::get_isPixelStage()) {
HXLINE( 155)			arr = ::backend::ClientPrefs_obj::data->arrowRGBPixel->__get(this->noteData).StaticCast< ::Array< int > >();
            		}
HXLINE( 157)		bool _hx_tmp;
HXDLIN( 157)		if ((this->noteData > -1)) {
HXLINE( 157)			_hx_tmp = (this->noteData <= arr->length);
            		}
            		else {
HXLINE( 157)			_hx_tmp = false;
            		}
HXDLIN( 157)		if (_hx_tmp) {
HXLINE( 159)			this->rgbShader->set_r(arr->__get(0));
HXLINE( 160)			this->rgbShader->set_g(arr->__get(1));
HXLINE( 161)			this->rgbShader->set_b(arr->__get(2));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Note_obj,defaultRGB,(void))

::String Note_obj::set_noteType(::String value){
            	HX_STACKFRAME(&_hx_pos_0f2eb749edd76d08_165_set_noteType)
HXLINE( 166)		::String _hx_tmp;
HXDLIN( 166)		if (::hx::IsNotNull( ::states::PlayState_obj::SONG )) {
HXLINE( 166)			_hx_tmp = ( (::String)(::states::PlayState_obj::SONG->__Field(HX_("splashSkin",84,03,e1,a1),::hx::paccDynamic)) );
            		}
            		else {
HXLINE( 166)			_hx_tmp = HX_("noteSplashes",a7,57,29,8d);
            		}
HXDLIN( 166)		this->noteSplashData->__SetField(HX_("texture",db,c8,e0,9e),_hx_tmp,::hx::paccDynamic);
HXLINE( 167)		this->defaultRGB();
HXLINE( 169)		bool _hx_tmp1;
HXDLIN( 169)		if ((this->noteData > -1)) {
HXLINE( 169)			_hx_tmp1 = (this->noteType != value);
            		}
            		else {
HXLINE( 169)			_hx_tmp1 = false;
            		}
HXDLIN( 169)		if (_hx_tmp1) {
HXLINE( 170)			::String _hx_switch_0 = value;
            			if (  (_hx_switch_0==HX_("Alt Animation",0d,81,c1,cd)) ){
HXLINE( 203)				this->animSuffix = HX_("-alt",1c,93,08,1e);
HXDLIN( 203)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Alt Strum",d2,f6,fe,6a)) ){
HXLINE( 210)				this->altStrum = true;
HXDLIN( 210)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("GF Sing",10,84,6e,29)) ){
HXLINE( 208)				this->gfNote = true;
HXDLIN( 208)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Hurt Note",a3,41,9e,fe)) ){
HXLINE( 172)				this->ignoreNote = this->mustPress;
HXLINE( 178)				this->rgbShader->set_r(-15724528);
HXLINE( 179)				this->rgbShader->set_g(-65536);
HXLINE( 180)				this->rgbShader->set_b(-6750174);
HXLINE( 183)				this->noteSplashData->__SetField(HX_("r",72,00,00,00),-65536,::hx::paccDynamic);
HXLINE( 184)				this->noteSplashData->__SetField(HX_("g",67,00,00,00),-15724528,::hx::paccDynamic);
HXLINE( 185)				this->noteSplashData->__SetField(HX_("texture",db,c8,e0,9e),HX_("noteSplashes/noteSplashes-electric",db,40,ca,86),::hx::paccDynamic);
HXLINE( 188)				this->lowPriority = true;
HXLINE( 189)				Float _hx_tmp;
HXDLIN( 189)				if (this->isSustainNote) {
HXLINE( 189)					_hx_tmp = ((Float)0.25);
            				}
            				else {
HXLINE( 189)					_hx_tmp = ((Float)0.1);
            				}
HXDLIN( 189)				this->missHealth = _hx_tmp;
HXLINE( 190)				this->hitCausesMiss = true;
HXLINE( 191)				this->hitsound = HX_("cancelMenu",39,a4,43,b7);
HXLINE( 192)				this->hitsoundChartEditor = false;
HXLINE( 171)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("No Animation",65,b2,1a,df)) ){
HXLINE( 205)				this->noAnimation = true;
HXLINE( 206)				this->noMissAnimation = true;
HXLINE( 204)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Restart PC Note",ee,17,a7,41)) ){
HXLINE( 194)				this->reloadNote(HX_("SHUTDOWNNOTE_assets",9a,6b,35,00),null());
HXLINE( 195)				this->noteSplashData->__SetField(HX_("texture",db,c8,e0,9e),HX_("notes/SHUTDOWNnoteSplashes",0b,c5,de,f8),::hx::paccDynamic);
HXLINE( 196)				this->rgbShader->set_r(-460552);
HXLINE( 197)				this->rgbShader->set_g(-14408668);
HXLINE( 198)				this->rgbShader->set_b(-16777216);
HXLINE( 200)				this->noteSplashData->__SetField(HX_("r",72,00,00,00),-1,::hx::paccDynamic);
HXLINE( 201)				this->noteSplashData->__SetField(HX_("g",67,00,00,00),-16777216,::hx::paccDynamic);
HXLINE( 193)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("guitarHero",e4,5b,e6,af)) ){
HXLINE( 212)				 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(HX_("notes/NOTEGH_assets",61,de,ae,b5),null(),true);
HXDLIN( 212)				bool xmlExists = false;
HXDLIN( 212)				::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("notes/NOTEGH_assets",61,de,ae,b5)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 212)				if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 212)					xmlExists = true;
            				}
HXDLIN( 212)				 ::Dynamic _hx_tmp;
HXDLIN( 212)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 212)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE( 212)					_hx_tmp = ::backend::Paths_obj::image(HX_("notes/NOTEGH_assets",61,de,ae,b5),HX_("shared",a5,5e,2b,1d),true);
            				}
HXDLIN( 212)				::String _hx_tmp1;
HXDLIN( 212)				if (xmlExists) {
HXLINE( 212)					_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            				}
            				else {
HXLINE( 212)					_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("notes/NOTEGH_assets",61,de,ae,b5)) + HX_(".xml",69,3e,c3,1e)),null(),HX_("shared",a5,5e,2b,1d),null());
            				}
HXDLIN( 212)				this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 214)				this->animation->addByPrefix(HX_("greenScroll",30,4f,fe,9e),HX_("A Note",51,48,e8,9d),null(),null(),null(),null());
HXLINE( 215)				this->animation->addByPrefix(HX_("greenhold",82,f5,c1,bc),HX_("A Hold Piece",cc,59,df,d9),null(),null(),null(),null());
HXLINE( 216)				this->animation->addByPrefix(HX_("greenholdend",99,eb,5f,39),HX_("A Hold End",39,b0,0c,27),null(),null(),null(),null());
HXLINE( 219)				this->animation->addByPrefix(HX_("redScroll",3e,78,c3,3a),HX_("B Note",b0,a4,43,04),null(),null(),null(),null());
HXLINE( 220)				this->animation->addByPrefix(HX_("redhold",10,1f,bf,bf),HX_("B Hold Piece",6b,c7,9e,1b),null(),null(),null(),null());
HXLINE( 221)				this->animation->addByPrefix(HX_("redholdend",cb,ae,1e,ea),HX_("B Hold End",18,28,57,e7),null(),null(),null(),null());
HXLINE( 223)				this->animation->addByPrefix(HX_("yellowScroll",a1,fa,d0,a5),HX_("C Note",0f,01,9f,6a),null(),null(),null(),null());
HXLINE( 224)				this->animation->addByPrefix(HX_("yellowhold",b3,32,26,f4),HX_("C Hold Piece",0a,35,5e,5d),null(),null(),null(),null());
HXLINE( 225)				this->animation->addByPrefix(HX_("yellowholdend",08,43,e3,2a),HX_("C Hold End",f7,9f,a1,a7),null(),null(),null(),null());
HXLINE( 227)				this->animation->addByPrefix(HX_("blueScroll",47,7e,59,a2),HX_("D Note",6e,5d,fa,d0),null(),null(),null(),null());
HXLINE( 228)				this->animation->addByPrefix(HX_("bluehold",d9,60,aa,a4),HX_("D Hold Piece",a9,a2,1d,9f),null(),null(),null(),null());
HXLINE( 229)				this->animation->addByPrefix(HX_("blueholdend",a2,f0,cd,25),HX_("D Hold End",d6,17,ec,67),null(),null(),null(),null());
HXLINE( 231)				this->animation->addByPrefix(HX_("orangeScroll",9b,e5,3b,4c),HX_("E Note",cd,b9,55,37),null(),null(),null(),null());
HXLINE( 232)				this->animation->addByPrefix(HX_("orangehold",2d,8b,6e,75),HX_("E Hold Piece",48,10,dd,e0),null(),null(),null(),null());
HXLINE( 233)				this->animation->addByPrefix(HX_("orangeholdend",ce,f2,05,22),HX_("E Hold End",b5,8f,36,28),null(),null(),null(),null());
HXLINE( 235)				Float _hx_tmp2 = this->get_width();
HXDLIN( 235)				this->setGraphicSize(::Std_obj::_hx_int((_hx_tmp2 * this->noteSize)),null());
HXLINE( 236)				this->updateHitbox();
HXLINE( 237)				this->set_antialiasing(true);
HXLINE( 211)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("phone",6e,c3,f3,c1)) ||  (_hx_switch_0==HX_("phone-alt",8a,a5,ad,ce)) ){
HXLINE( 240)				if (!(this->isSustainNote)) {
HXLINE( 242)					::String library = null();
HXDLIN( 242)					 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(HX_("notes/PHONENOTE_assets",b0,60,f7,bd),null(),true);
HXDLIN( 242)					bool xmlExists = false;
HXDLIN( 242)					::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("notes/PHONENOTE_assets",b0,60,f7,bd)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 242)					if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 242)						xmlExists = true;
            					}
HXDLIN( 242)					 ::Dynamic _hx_tmp;
HXDLIN( 242)					if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 242)						_hx_tmp = imageLoaded;
            					}
            					else {
HXLINE( 242)						_hx_tmp = ::backend::Paths_obj::image(HX_("notes/PHONENOTE_assets",b0,60,f7,bd),library,true);
            					}
HXDLIN( 242)					::String _hx_tmp1;
HXDLIN( 242)					if (xmlExists) {
HXLINE( 242)						_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            					}
            					else {
HXLINE( 242)						_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("notes/PHONENOTE_assets",b0,60,f7,bd)) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            					}
HXDLIN( 242)					this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
            				}
            				else {
HXLINE( 246)					::String library = null();
HXDLIN( 246)					 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(HX_("notes/PHONENOTE_assets",b0,60,f7,bd),null(),true);
HXDLIN( 246)					bool xmlExists = false;
HXDLIN( 246)					::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("notes/PHONENOTE_assets",b0,60,f7,bd)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 246)					if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 246)						xmlExists = true;
            					}
HXDLIN( 246)					 ::Dynamic _hx_tmp;
HXDLIN( 246)					if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 246)						_hx_tmp = imageLoaded;
            					}
            					else {
HXLINE( 246)						_hx_tmp = ::backend::Paths_obj::image(HX_("notes/PHONENOTE_assets",b0,60,f7,bd),library,true);
            					}
HXDLIN( 246)					::String _hx_tmp1;
HXDLIN( 246)					if (xmlExists) {
HXLINE( 246)						_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            					}
            					else {
HXLINE( 246)						_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("notes/PHONENOTE_assets",b0,60,f7,bd)) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            					}
HXDLIN( 246)					this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
            				}
HXLINE( 248)				this->animation->addByPrefix(HX_("greenScroll",30,4f,fe,9e),HX_("green0",0d,dc,7f,15),null(),null(),null(),null());
HXLINE( 249)				this->animation->addByPrefix(HX_("redScroll",3e,78,c3,3a),HX_("red0",bf,4d,a7,4b),null(),null(),null(),null());
HXLINE( 250)				this->animation->addByPrefix(HX_("blueScroll",47,7e,59,a2),HX_("blue0",56,04,01,b5),null(),null(),null(),null());
HXLINE( 251)				this->animation->addByPrefix(HX_("purpleScroll",69,97,67,99),HX_("purple0",74,7e,2d,e7),null(),null(),null(),null());
HXLINE( 253)				this->animation->addByPrefix(HX_("purpleholdend",40,d5,15,5b),HX_("pruple end hold",6e,7c,17,3a),null(),null(),null(),null());
HXLINE( 254)				this->animation->addByPrefix(HX_("greenholdend",99,eb,5f,39),HX_("green hold end",77,4d,45,46),null(),null(),null(),null());
HXLINE( 255)				this->animation->addByPrefix(HX_("redholdend",cb,ae,1e,ea),HX_("red hold end",29,c1,a0,b6),null(),null(),null(),null());
HXLINE( 256)				this->animation->addByPrefix(HX_("blueholdend",a2,f0,cd,25),HX_("blue hold end",c0,66,05,ae),null(),null(),null(),null());
HXLINE( 258)				this->animation->addByPrefix(HX_("purplehold",7b,8d,da,cd),HX_("purple hold piece",b1,8b,b1,d3),null(),null(),null(),null());
HXLINE( 259)				this->animation->addByPrefix(HX_("greenhold",82,f5,c1,bc),HX_("green hold piece",8a,42,68,ae),null(),null(),null(),null());
HXLINE( 260)				this->animation->addByPrefix(HX_("redhold",10,1f,bf,bf),HX_("red hold piece",bc,86,4d,83),null(),null(),null(),null());
HXLINE( 261)				this->animation->addByPrefix(HX_("bluehold",d9,60,aa,a4),HX_("blue hold piece",13,00,58,99),null(),null(),null(),null());
HXLINE( 263)				Float _hx_tmp = this->get_width();
HXDLIN( 263)				this->setGraphicSize(::Std_obj::_hx_int((_hx_tmp * this->noteSize)),null());
HXLINE( 264)				this->updateHitbox();
HXLINE( 265)				this->set_antialiasing(true);
HXLINE( 267)				this->noteOffset = ( (Float)(20) );
HXLINE( 239)				goto _hx_goto_5;
            			}
            			_hx_goto_5:;
HXLINE( 270)			bool _hx_tmp;
HXDLIN( 270)			if (::hx::IsNotNull( value )) {
HXLINE( 270)				_hx_tmp = (value.length > 1);
            			}
            			else {
HXLINE( 270)				_hx_tmp = false;
            			}
HXDLIN( 270)			if (_hx_tmp) {
HXLINE( 270)				::backend::NoteTypesConfig_obj::applyNoteTypeData(::hx::ObjectPtr<OBJ_>(this),value);
            			}
HXLINE( 271)			bool _hx_tmp1;
HXDLIN( 271)			if ((this->hitsound != HX_("hitsound",9c,79,fe,2c))) {
HXLINE( 271)				_hx_tmp1 = (::backend::ClientPrefs_obj::data->hitsoundVolume > 0);
            			}
            			else {
HXLINE( 271)				_hx_tmp1 = false;
            			}
HXDLIN( 271)			if (_hx_tmp1) {
HXLINE( 271)				::backend::Paths_obj::sound(this->hitsound,null());
            			}
HXLINE( 272)			this->noteType = value;
            		}
HXLINE( 274)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Note_obj,set_noteType,return )

void Note_obj::reloadNote(::String __o_texture,::String __o_postfix){
            		::String texture = __o_texture;
            		if (::hx::IsNull(__o_texture)) texture = HX_("",00,00,00,00);
            		::String postfix = __o_postfix;
            		if (::hx::IsNull(__o_postfix)) postfix = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_0f2eb749edd76d08_389_reloadNote)
HXLINE( 390)		if (::hx::IsNull( texture )) {
HXLINE( 390)			texture = HX_("",00,00,00,00);
            		}
HXLINE( 391)		if (::hx::IsNull( postfix )) {
HXLINE( 391)			postfix = HX_("",00,00,00,00);
            		}
HXLINE( 393)		::String skin = (texture + postfix);
HXLINE( 394)		if ((texture.length < 1)) {
HXLINE( 395)			if (::hx::IsNotNull( ::states::PlayState_obj::SONG )) {
HXLINE( 395)				skin = ( (::String)(::states::PlayState_obj::SONG->__Field(HX_("arrowSkin",e6,d4,f8,07),::hx::paccDynamic)) );
            			}
            			else {
HXLINE( 395)				skin = null();
            			}
HXLINE( 396)			bool _hx_tmp;
HXDLIN( 396)			if (::hx::IsNotNull( skin )) {
HXLINE( 396)				_hx_tmp = (skin.length < 1);
            			}
            			else {
HXLINE( 396)				_hx_tmp = true;
            			}
HXDLIN( 396)			if (_hx_tmp) {
HXLINE( 397)				skin = (::objects::Note_obj::defaultNoteSkin + postfix);
            			}
            		}
HXLINE( 400)		::String animName = null();
HXLINE( 401)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE( 402)			animName = this->animation->_curAnim->name;
            		}
HXLINE( 405)		::String skinPixel = skin;
HXLINE( 406)		Float lastScaleY = this->scale->y;
HXLINE( 407)		::String skinPostfix = ::objects::Note_obj::getNoteSkinPostfix();
HXLINE( 408)		::String customSkin = (skin + skinPostfix);
HXLINE( 409)		::String path;
HXDLIN( 409)		if (::states::PlayState_obj::get_isPixelStage()) {
HXLINE( 409)			path = HX_("pixelUI/",95,50,4f,7e);
            		}
            		else {
HXLINE( 409)			path = HX_("",00,00,00,00);
            		}
HXLINE( 410)		bool _hx_tmp;
HXDLIN( 410)		if ((customSkin != ::objects::Note_obj::_lastValidChecked)) {
HXLINE( 410)			_hx_tmp = ::backend::Paths_obj::fileExists((((HX_("images/",77,50,74,c1) + path) + customSkin) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),null(),null());
            		}
            		else {
HXLINE( 410)			_hx_tmp = true;
            		}
HXDLIN( 410)		if (_hx_tmp) {
HXLINE( 412)			skin = customSkin;
HXLINE( 413)			::objects::Note_obj::_lastValidChecked = customSkin;
            		}
            		else {
HXLINE( 415)			skinPostfix = HX_("",00,00,00,00);
            		}
HXLINE( 417)		if (::states::PlayState_obj::get_isPixelStage()) {
HXLINE( 418)			if (this->isSustainNote) {
HXLINE( 419)				 ::flixel::graphics::FlxGraphic graphic = ::backend::Paths_obj::image((((HX_("pixelUI/",95,50,4f,7e) + skinPixel) + HX_("ENDS",38,24,d7,2d)) + skinPostfix),null(),null());
HXLINE( 420)				this->loadGraphic(graphic,true,::Math_obj::floor((( (Float)(graphic->width) ) / ( (Float)(4) ))),::Math_obj::floor((( (Float)(graphic->height) ) / ( (Float)(2) ))),null(),null());
HXLINE( 421)				this->originalHeight = (( (Float)(graphic->height) ) / ( (Float)(2) ));
            			}
            			else {
HXLINE( 423)				 ::flixel::graphics::FlxGraphic graphic = ::backend::Paths_obj::image(((HX_("pixelUI/",95,50,4f,7e) + skinPixel) + skinPostfix),null(),null());
HXLINE( 424)				this->loadGraphic(graphic,true,::Math_obj::floor((( (Float)(graphic->width) ) / ( (Float)(4) ))),::Math_obj::floor((( (Float)(graphic->height) ) / ( (Float)(5) ))),null(),null());
            			}
HXLINE( 426)			Float _hx_tmp = this->get_width();
HXDLIN( 426)			this->setGraphicSize(::Std_obj::_hx_int((_hx_tmp * ::states::PlayState_obj::daPixelZoom)),null());
HXLINE( 427)			this->loadPixelNoteAnims();
HXLINE( 428)			this->set_antialiasing(false);
HXLINE( 430)			if (this->isSustainNote) {
HXLINE( 431)				 ::objects::Note _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 431)				_hx_tmp->offsetX = (_hx_tmp->offsetX + this->_lastNoteOffX);
HXLINE( 432)				Float _hx_tmp1 = (this->get_width() - ( (Float)(7) ));
HXDLIN( 432)				this->_lastNoteOffX = (_hx_tmp1 * (::states::PlayState_obj::daPixelZoom / ( (Float)(2) )));
HXLINE( 433)				 ::objects::Note _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 433)				_hx_tmp2->offsetX = (_hx_tmp2->offsetX - this->_lastNoteOffX);
            			}
            		}
            		else {
HXLINE( 436)			::String library = null();
HXDLIN( 436)			 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(skin,null(),true);
HXDLIN( 436)			bool xmlExists = false;
HXDLIN( 436)			::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + skin) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 436)			if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 436)				xmlExists = true;
            			}
HXDLIN( 436)			 ::Dynamic _hx_tmp;
HXDLIN( 436)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 436)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE( 436)				_hx_tmp = ::backend::Paths_obj::image(skin,library,true);
            			}
HXDLIN( 436)			::String _hx_tmp1;
HXDLIN( 436)			if (xmlExists) {
HXLINE( 436)				_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            			}
            			else {
HXLINE( 436)				_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + skin) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            			}
HXDLIN( 436)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 437)			this->loadNoteAnims();
HXLINE( 438)			if (!(this->isSustainNote)) {
HXLINE( 440)				this->centerOffsets(null());
HXLINE( 441)				{
HXLINE( 441)					 ::flixel::math::FlxBasePoint this1 = this->origin;
HXDLIN( 441)					Float y = (( (Float)(this->frameHeight) ) * ((Float)0.5));
HXDLIN( 441)					this1->set_x((( (Float)(this->frameWidth) ) * ((Float)0.5)));
HXDLIN( 441)					this1->set_y(y);
            				}
            			}
            		}
HXLINE( 445)		if (this->isSustainNote) {
HXLINE( 446)			this->scale->set_y(lastScaleY);
            		}
HXLINE( 448)		this->updateHitbox();
HXLINE( 450)		if (::hx::IsNotNull( animName )) {
HXLINE( 451)			this->animation->play(animName,true,null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Note_obj,reloadNote,(void))

void Note_obj::loadNoteAnims(){
            	HX_STACKFRAME(&_hx_pos_0f2eb749edd76d08_462_loadNoteAnims)
HXLINE( 463)		if (this->isSustainNote) {
HXLINE( 465)			this->animation->addByPrefix(HX_("purpleholdend",40,d5,15,5b),HX_("pruple end hold",6e,7c,17,3a),24,true,null(),null());
HXLINE( 466)			this->animation->addByPrefix((::objects::Note_obj::colArray->__get(this->noteData) + HX_("holdend",fc,4b,02,b8)),(::objects::Note_obj::colArray->__get(this->noteData) + HX_(" hold end",9a,cc,8a,7a)),24,true,null(),null());
HXLINE( 467)			this->animation->addByPrefix((::objects::Note_obj::colArray->__get(this->noteData) + HX_("hold",3f,c9,12,45)),(::objects::Note_obj::colArray->__get(this->noteData) + HX_(" hold piece",6d,10,66,9e)),24,true,null(),null());
            		}
            		else {
HXLINE( 469)			this->animation->addByPrefix((::objects::Note_obj::colArray->__get(this->noteData) + HX_("Scroll",2d,4c,f9,7b)),(::objects::Note_obj::colArray->__get(this->noteData) + HX_("0",30,00,00,00)),null(),null(),null(),null());
            		}
HXLINE( 471)		this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ((Float)0.7))),null());
HXLINE( 472)		this->updateHitbox();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Note_obj,loadNoteAnims,(void))

void Note_obj::loadPixelNoteAnims(){
            	HX_STACKFRAME(&_hx_pos_0f2eb749edd76d08_476_loadPixelNoteAnims)
HXDLIN( 476)		if (this->isSustainNote) {
HXLINE( 478)			this->animation->add((::objects::Note_obj::colArray->__get(this->noteData) + HX_("holdend",fc,4b,02,b8)),::Array_obj< int >::__new(1)->init(0,(this->noteData + 4)),24,true,null(),null());
HXLINE( 479)			this->animation->add((::objects::Note_obj::colArray->__get(this->noteData) + HX_("hold",3f,c9,12,45)),::Array_obj< int >::__new(1)->init(0,this->noteData),24,true,null(),null());
            		}
            		else {
HXLINE( 480)			this->animation->add((::objects::Note_obj::colArray->__get(this->noteData) + HX_("Scroll",2d,4c,f9,7b)),::Array_obj< int >::__new(1)->init(0,(this->noteData + 4)),24,true,null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Note_obj,loadPixelNoteAnims,(void))

void Note_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_0f2eb749edd76d08_484_update)
HXLINE( 485)		this->super::update(elapsed);
HXLINE( 487)		if (::hx::IsNotNull( this->MyStrum )) {
HXLINE( 489)			this->GoToStrum(this->MyStrum);
            		}
HXLINE( 492)		if (this->mustPress) {
HXLINE( 494)			bool _hx_tmp;
HXDLIN( 494)			if ((this->strumTime > (::backend::Conductor_obj::songPosition - (::backend::Conductor_obj::safeZoneOffset * this->lateHitMult)))) {
HXLINE( 494)				_hx_tmp = (this->strumTime < (::backend::Conductor_obj::songPosition + (::backend::Conductor_obj::safeZoneOffset * this->earlyHitMult)));
            			}
            			else {
HXLINE( 494)				_hx_tmp = false;
            			}
HXDLIN( 494)			this->canBeHit = _hx_tmp;
HXLINE( 497)			bool _hx_tmp1;
HXDLIN( 497)			if ((this->strumTime < (::backend::Conductor_obj::songPosition - ::backend::Conductor_obj::safeZoneOffset))) {
HXLINE( 497)				_hx_tmp1 = !(this->wasGoodHit);
            			}
            			else {
HXLINE( 497)				_hx_tmp1 = false;
            			}
HXDLIN( 497)			if (_hx_tmp1) {
HXLINE( 498)				this->tooLate = true;
            			}
            		}
            		else {
HXLINE( 502)			this->canBeHit = false;
HXLINE( 504)			if ((this->strumTime < (::backend::Conductor_obj::songPosition + (::backend::Conductor_obj::safeZoneOffset * this->earlyHitMult)))) {
HXLINE( 506)				bool _hx_tmp;
HXDLIN( 506)				bool _hx_tmp1;
HXDLIN( 506)				if (this->isSustainNote) {
HXLINE( 506)					_hx_tmp1 = this->prevNote->wasGoodHit;
            				}
            				else {
HXLINE( 506)					_hx_tmp1 = false;
            				}
HXDLIN( 506)				if (!(_hx_tmp1)) {
HXLINE( 506)					_hx_tmp = (this->strumTime <= ::backend::Conductor_obj::songPosition);
            				}
            				else {
HXLINE( 506)					_hx_tmp = true;
            				}
HXDLIN( 506)				if (_hx_tmp) {
HXLINE( 507)					this->wasGoodHit = true;
            				}
            			}
            		}
HXLINE( 511)		bool _hx_tmp;
HXDLIN( 511)		if (this->tooLate) {
HXLINE( 511)			_hx_tmp = !(this->inEditor);
            		}
            		else {
HXLINE( 511)			_hx_tmp = false;
            		}
HXDLIN( 511)		if (_hx_tmp) {
HXLINE( 513)			if ((this->alpha > ((Float)0.3))) {
HXLINE( 514)				this->set_alpha(((Float)0.3));
            			}
            		}
HXLINE( 517)		if (this->tooLate) {
HXLINE( 519)			this->alphaMult = ((Float)0.3);
            		}
            	}


void Note_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_0f2eb749edd76d08_524_destroy)
HXLINE( 525)		this->super::destroy();
HXLINE( 526)		::objects::Note_obj::_lastValidChecked = HX_("",00,00,00,00);
            	}


void Note_obj::followStrumNote( ::objects::StrumNote myStrum,Float fakeCrochet,::hx::Null< Float >  __o_songSpeed){
            		Float songSpeed = __o_songSpeed.Default(1);
            	HX_STACKFRAME(&_hx_pos_0f2eb749edd76d08_530_followStrumNote)
HXLINE( 531)		Float strumX = myStrum->x;
HXLINE( 532)		Float strumY = myStrum->y;
HXLINE( 533)		Float strumAngle = myStrum->angle;
HXLINE( 534)		Float strumAlpha = myStrum->alpha;
HXLINE( 535)		Float strumDirection = myStrum->direction;
HXLINE( 537)		this->distance = (((((Float)0.45) * (::backend::Conductor_obj::songPosition - this->strumTime)) * songSpeed) * this->multSpeed);
HXLINE( 538)		if (!(myStrum->downScroll)) {
HXLINE( 538)			 ::objects::Note _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 538)			_hx_tmp->distance = (_hx_tmp->distance * ( (Float)(-1) ));
            		}
HXLINE( 540)		Float angleDir = ((strumDirection * ::Math_obj::PI) / ( (Float)(180) ));
HXLINE( 541)		if (this->copyAngle) {
HXLINE( 542)			this->set_angle((((strumDirection - ( (Float)(90) )) + strumAngle) + this->offsetAngle));
            		}
HXLINE( 544)		if (this->copyAlpha) {
HXLINE( 545)			this->set_alpha((strumAlpha * this->multAlpha));
            		}
HXLINE( 547)		if (this->copyX) {
HXLINE( 548)			this->set_x(((strumX + this->offsetX) + (::Math_obj::cos(angleDir) * this->distance)));
            		}
HXLINE( 550)		if (this->copyY) {
HXLINE( 552)			this->set_y((((strumY + this->offsetY) + this->correctionOffset) + (::Math_obj::sin(angleDir) * this->distance)));
HXLINE( 553)			bool _hx_tmp;
HXDLIN( 553)			if (myStrum->downScroll) {
HXLINE( 553)				_hx_tmp = this->isSustainNote;
            			}
            			else {
HXLINE( 553)				_hx_tmp = false;
            			}
HXDLIN( 553)			if (_hx_tmp) {
HXLINE( 555)				if (::states::PlayState_obj::get_isPixelStage()) {
HXLINE( 557)					this->set_y((this->y - (::states::PlayState_obj::daPixelZoom * ((Float)9.5))));
            				}
HXLINE( 559)				this->set_y((this->y - ((( (Float)(this->frameHeight) ) * this->scale->y) - (::objects::Note_obj::swagWidth / ( (Float)(2) )))));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Note_obj,followStrumNote,(void))

void Note_obj::SearchForStrum(bool musthit){
            	HX_STACKFRAME(&_hx_pos_0f2eb749edd76d08_565_SearchForStrum)
HXDLIN( 565)		 ::objects::Note _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 566)		 ::states::PlayState state = ::hx::TCast<  ::states::PlayState >::cast(::flixel::FlxG_obj::game->_state);
HXLINE( 567)		if (musthit) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::objects::Note,_gthis) HXARGC(1)
            			void _hx_run( ::objects::StrumNote spr){
            				HX_STACKFRAME(&_hx_pos_0f2eb749edd76d08_571_SearchForStrum)
HXLINE( 571)				if ((spr->ID == _gthis->notetolookfor)) {
HXLINE( 573)					_gthis->GoToStrum(spr);
HXLINE( 574)					_gthis->MyStrum = spr;
HXLINE( 575)					return;
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 569)			state->playerStrums->forEach( ::Dynamic(new _hx_Closure_0(_gthis)),null());
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::objects::Note,_gthis) HXARGC(1)
            			void _hx_run( ::objects::StrumNote spr){
            				HX_STACKFRAME(&_hx_pos_0f2eb749edd76d08_583_SearchForStrum)
HXLINE( 583)				if ((spr->ID == _gthis->notetolookfor)) {
HXLINE( 585)					_gthis->GoToStrum(spr);
HXLINE( 586)					_gthis->MyStrum = spr;
HXLINE( 587)					return;
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 581)			state->opponentStrums->forEach( ::Dynamic(new _hx_Closure_1(_gthis)),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Note_obj,SearchForStrum,(void))

void Note_obj::GoToStrum( ::objects::StrumNote strum){
            	HX_STACKFRAME(&_hx_pos_0f2eb749edd76d08_594_GoToStrum)
HXLINE( 595)		this->set_x((strum->x + this->noteOffset));
HXLINE( 596)		this->set_alpha((strum->alpha * this->alphaMult));
HXLINE( 598)		if ((this->noteType == HX_("shape",21,e3,1c,7c))) {
HXLINE( 600)			this->set_alpha((this->alpha * ((Float)0.5)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Note_obj,GoToStrum,(void))

void Note_obj::clipToStrumNote( ::objects::StrumNote myStrum){
            	HX_GC_STACKFRAME(&_hx_pos_0f2eb749edd76d08_605_clipToStrumNote)
HXLINE( 606)		Float center = ((myStrum->y + this->offsetY) + (::objects::Note_obj::swagWidth / ( (Float)(2) )));
HXLINE( 607)		bool _hx_tmp;
HXDLIN( 607)		bool _hx_tmp1;
HXDLIN( 607)		if (this->isSustainNote) {
HXLINE( 607)			if (!(this->mustPress)) {
HXLINE( 607)				_hx_tmp1 = !(this->ignoreNote);
            			}
            			else {
HXLINE( 607)				_hx_tmp1 = true;
            			}
            		}
            		else {
HXLINE( 607)			_hx_tmp1 = false;
            		}
HXDLIN( 607)		if (_hx_tmp1) {
HXLINE( 608)			if (this->mustPress) {
HXLINE( 608)				if (!(this->wasGoodHit)) {
HXLINE( 608)					if (this->prevNote->wasGoodHit) {
HXLINE( 607)						_hx_tmp = !(this->canBeHit);
            					}
            					else {
HXLINE( 607)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 607)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 607)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 607)			_hx_tmp = false;
            		}
HXDLIN( 607)		if (_hx_tmp) {
HXLINE( 610)			 ::flixel::math::FlxRect swagRect = this->clipRect;
HXLINE( 611)			if (::hx::IsNull( swagRect )) {
HXLINE( 611)				swagRect =  ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,0,0,this->frameWidth,this->frameHeight);
            			}
HXLINE( 613)			if (myStrum->downScroll) {
HXLINE( 615)				Float _hx_tmp = (this->y - (this->offset->y * this->scale->y));
HXDLIN( 615)				if (((_hx_tmp + this->get_height()) >= center)) {
HXLINE( 617)					swagRect->width = ( (Float)(this->frameWidth) );
HXLINE( 618)					swagRect->height = ((center - this->y) / this->scale->y);
HXLINE( 619)					swagRect->y = (( (Float)(this->frameHeight) ) - swagRect->height);
            				}
            			}
            			else {
HXLINE( 622)				if (((this->y + (this->offset->y * this->scale->y)) <= center)) {
HXLINE( 624)					swagRect->y = ((center - this->y) / this->scale->y);
HXLINE( 625)					Float _hx_tmp = this->get_width();
HXDLIN( 625)					swagRect->width = (_hx_tmp / this->scale->x);
HXLINE( 626)					Float _hx_tmp1 = this->get_height();
HXDLIN( 626)					swagRect->height = ((_hx_tmp1 / this->scale->y) - swagRect->y);
            				}
            			}
HXLINE( 628)			this->set_clipRect(swagRect);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Note_obj,clipToStrumNote,(void))

::Array< ::Dynamic> Note_obj::globalRgbShaders;

int Note_obj::SUSTAIN_SIZE;

Float Note_obj::swagWidth;

::Array< ::String > Note_obj::colArray;

::String Note_obj::defaultNoteSkin;

 ::shaders::RGBPalette Note_obj::initializeGlobalRGBShader(int noteData){
            	HX_GC_STACKFRAME(&_hx_pos_0f2eb749edd76d08_368_initializeGlobalRGBShader)
HXLINE( 369)		if (::hx::IsNull( ::objects::Note_obj::globalRgbShaders->__get(noteData).StaticCast<  ::shaders::RGBPalette >() )) {
HXLINE( 371)			 ::shaders::RGBPalette newRGB =  ::shaders::RGBPalette_obj::__alloc( HX_CTX );
HXLINE( 372)			::objects::Note_obj::globalRgbShaders[noteData] = newRGB;
HXLINE( 374)			::Array< int > arr;
HXDLIN( 374)			if (!(::states::PlayState_obj::get_isPixelStage())) {
HXLINE( 374)				arr = ::backend::ClientPrefs_obj::data->arrowRGB->__get(noteData).StaticCast< ::Array< int > >();
            			}
            			else {
HXLINE( 374)				arr = ::backend::ClientPrefs_obj::data->arrowRGBPixel->__get(noteData).StaticCast< ::Array< int > >();
            			}
HXLINE( 375)			bool _hx_tmp;
HXDLIN( 375)			if ((noteData > -1)) {
HXLINE( 375)				_hx_tmp = (noteData <= arr->length);
            			}
            			else {
HXLINE( 375)				_hx_tmp = false;
            			}
HXDLIN( 375)			if (_hx_tmp) {
HXLINE( 377)				newRGB->set_r(arr->__get(0));
HXLINE( 378)				newRGB->set_g(arr->__get(1));
HXLINE( 379)				newRGB->set_b(arr->__get(2));
            			}
            		}
HXLINE( 382)		return ::objects::Note_obj::globalRgbShaders->__get(noteData).StaticCast<  ::shaders::RGBPalette >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Note_obj,initializeGlobalRGBShader,return )

::String Note_obj::_lastValidChecked;

::String Note_obj::getNoteSkinPostfix(){
            	HX_STACKFRAME(&_hx_pos_0f2eb749edd76d08_455_getNoteSkinPostfix)
HXLINE( 456)		::String skin = HX_("",00,00,00,00);
HXLINE( 457)		if ((::backend::ClientPrefs_obj::data->noteSkin != ::backend::ClientPrefs_obj::defaultData->noteSkin)) {
HXLINE( 458)			skin = (HX_("-",2d,00,00,00) + ::StringTools_obj::replace(::StringTools_obj::trim(::backend::ClientPrefs_obj::data->noteSkin).toLowerCase(),HX_(" ",20,00,00,00),HX_("_",5f,00,00,00)));
            		}
HXLINE( 459)		return skin;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Note_obj,getNoteSkinPostfix,return )


::hx::ObjectPtr< Note_obj > Note_obj::__new(Float strumTime,int noteData, ::objects::Note prevNote, ::Dynamic __o_sustainNote, ::Dynamic __o_inEditor, ::Dynamic createdFrom) {
	::hx::ObjectPtr< Note_obj > __this = new Note_obj();
	__this->__construct(strumTime,noteData,prevNote,__o_sustainNote,__o_inEditor,createdFrom);
	return __this;
}

::hx::ObjectPtr< Note_obj > Note_obj::__alloc(::hx::Ctx *_hx_ctx,Float strumTime,int noteData, ::objects::Note prevNote, ::Dynamic __o_sustainNote, ::Dynamic __o_inEditor, ::Dynamic createdFrom) {
	Note_obj *__this = (Note_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Note_obj), true, "objects.Note"));
	*(void **)__this = Note_obj::_hx_vtable;
	__this->__construct(strumTime,noteData,prevNote,__o_sustainNote,__o_inEditor,createdFrom);
	return __this;
}

Note_obj::Note_obj()
{
}

void Note_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Note);
	HX_MARK_MEMBER_NAME(extraData,"extraData");
	HX_MARK_MEMBER_NAME(strumTime,"strumTime");
	HX_MARK_MEMBER_NAME(mustPress,"mustPress");
	HX_MARK_MEMBER_NAME(noteData,"noteData");
	HX_MARK_MEMBER_NAME(canBeHit,"canBeHit");
	HX_MARK_MEMBER_NAME(tooLate,"tooLate");
	HX_MARK_MEMBER_NAME(wasGoodHit,"wasGoodHit");
	HX_MARK_MEMBER_NAME(ignoreNote,"ignoreNote");
	HX_MARK_MEMBER_NAME(hitByOpponent,"hitByOpponent");
	HX_MARK_MEMBER_NAME(noteWasHit,"noteWasHit");
	HX_MARK_MEMBER_NAME(prevNote,"prevNote");
	HX_MARK_MEMBER_NAME(nextNote,"nextNote");
	HX_MARK_MEMBER_NAME(spawned,"spawned");
	HX_MARK_MEMBER_NAME(tail,"tail");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(blockHit,"blockHit");
	HX_MARK_MEMBER_NAME(sustainLength,"sustainLength");
	HX_MARK_MEMBER_NAME(isSustainNote,"isSustainNote");
	HX_MARK_MEMBER_NAME(noteType,"noteType");
	HX_MARK_MEMBER_NAME(eventName,"eventName");
	HX_MARK_MEMBER_NAME(eventLength,"eventLength");
	HX_MARK_MEMBER_NAME(eventVal1,"eventVal1");
	HX_MARK_MEMBER_NAME(eventVal2,"eventVal2");
	HX_MARK_MEMBER_NAME(rgbShader,"rgbShader");
	HX_MARK_MEMBER_NAME(inEditor,"inEditor");
	HX_MARK_MEMBER_NAME(animSuffix,"animSuffix");
	HX_MARK_MEMBER_NAME(gfNote,"gfNote");
	HX_MARK_MEMBER_NAME(earlyHitMult,"earlyHitMult");
	HX_MARK_MEMBER_NAME(lateHitMult,"lateHitMult");
	HX_MARK_MEMBER_NAME(lowPriority,"lowPriority");
	HX_MARK_MEMBER_NAME(noteSplashData,"noteSplashData");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(offsetAngle,"offsetAngle");
	HX_MARK_MEMBER_NAME(multAlpha,"multAlpha");
	HX_MARK_MEMBER_NAME(multSpeed,"multSpeed");
	HX_MARK_MEMBER_NAME(copyX,"copyX");
	HX_MARK_MEMBER_NAME(copyY,"copyY");
	HX_MARK_MEMBER_NAME(copyAngle,"copyAngle");
	HX_MARK_MEMBER_NAME(copyAlpha,"copyAlpha");
	HX_MARK_MEMBER_NAME(hitHealth,"hitHealth");
	HX_MARK_MEMBER_NAME(missHealth,"missHealth");
	HX_MARK_MEMBER_NAME(rating,"rating");
	HX_MARK_MEMBER_NAME(ratingMod,"ratingMod");
	HX_MARK_MEMBER_NAME(ratingDisabled,"ratingDisabled");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(noteOffset,"noteOffset");
	HX_MARK_MEMBER_NAME(noteSize,"noteSize");
	HX_MARK_MEMBER_NAME(noAnimation,"noAnimation");
	HX_MARK_MEMBER_NAME(noMissAnimation,"noMissAnimation");
	HX_MARK_MEMBER_NAME(hitCausesMiss,"hitCausesMiss");
	HX_MARK_MEMBER_NAME(distance,"distance");
	HX_MARK_MEMBER_NAME(hitsoundDisabled,"hitsoundDisabled");
	HX_MARK_MEMBER_NAME(hitsoundChartEditor,"hitsoundChartEditor");
	HX_MARK_MEMBER_NAME(hitsound,"hitsound");
	HX_MARK_MEMBER_NAME(altStrum,"altStrum");
	HX_MARK_MEMBER_NAME(notetolookfor,"notetolookfor");
	HX_MARK_MEMBER_NAME(MyStrum,"MyStrum");
	HX_MARK_MEMBER_NAME(alphaMult,"alphaMult");
	HX_MARK_MEMBER_NAME(_lastNoteOffX,"_lastNoteOffX");
	HX_MARK_MEMBER_NAME(originalHeight,"originalHeight");
	HX_MARK_MEMBER_NAME(correctionOffset,"correctionOffset");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Note_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(extraData,"extraData");
	HX_VISIT_MEMBER_NAME(strumTime,"strumTime");
	HX_VISIT_MEMBER_NAME(mustPress,"mustPress");
	HX_VISIT_MEMBER_NAME(noteData,"noteData");
	HX_VISIT_MEMBER_NAME(canBeHit,"canBeHit");
	HX_VISIT_MEMBER_NAME(tooLate,"tooLate");
	HX_VISIT_MEMBER_NAME(wasGoodHit,"wasGoodHit");
	HX_VISIT_MEMBER_NAME(ignoreNote,"ignoreNote");
	HX_VISIT_MEMBER_NAME(hitByOpponent,"hitByOpponent");
	HX_VISIT_MEMBER_NAME(noteWasHit,"noteWasHit");
	HX_VISIT_MEMBER_NAME(prevNote,"prevNote");
	HX_VISIT_MEMBER_NAME(nextNote,"nextNote");
	HX_VISIT_MEMBER_NAME(spawned,"spawned");
	HX_VISIT_MEMBER_NAME(tail,"tail");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(blockHit,"blockHit");
	HX_VISIT_MEMBER_NAME(sustainLength,"sustainLength");
	HX_VISIT_MEMBER_NAME(isSustainNote,"isSustainNote");
	HX_VISIT_MEMBER_NAME(noteType,"noteType");
	HX_VISIT_MEMBER_NAME(eventName,"eventName");
	HX_VISIT_MEMBER_NAME(eventLength,"eventLength");
	HX_VISIT_MEMBER_NAME(eventVal1,"eventVal1");
	HX_VISIT_MEMBER_NAME(eventVal2,"eventVal2");
	HX_VISIT_MEMBER_NAME(rgbShader,"rgbShader");
	HX_VISIT_MEMBER_NAME(inEditor,"inEditor");
	HX_VISIT_MEMBER_NAME(animSuffix,"animSuffix");
	HX_VISIT_MEMBER_NAME(gfNote,"gfNote");
	HX_VISIT_MEMBER_NAME(earlyHitMult,"earlyHitMult");
	HX_VISIT_MEMBER_NAME(lateHitMult,"lateHitMult");
	HX_VISIT_MEMBER_NAME(lowPriority,"lowPriority");
	HX_VISIT_MEMBER_NAME(noteSplashData,"noteSplashData");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(offsetAngle,"offsetAngle");
	HX_VISIT_MEMBER_NAME(multAlpha,"multAlpha");
	HX_VISIT_MEMBER_NAME(multSpeed,"multSpeed");
	HX_VISIT_MEMBER_NAME(copyX,"copyX");
	HX_VISIT_MEMBER_NAME(copyY,"copyY");
	HX_VISIT_MEMBER_NAME(copyAngle,"copyAngle");
	HX_VISIT_MEMBER_NAME(copyAlpha,"copyAlpha");
	HX_VISIT_MEMBER_NAME(hitHealth,"hitHealth");
	HX_VISIT_MEMBER_NAME(missHealth,"missHealth");
	HX_VISIT_MEMBER_NAME(rating,"rating");
	HX_VISIT_MEMBER_NAME(ratingMod,"ratingMod");
	HX_VISIT_MEMBER_NAME(ratingDisabled,"ratingDisabled");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(noteOffset,"noteOffset");
	HX_VISIT_MEMBER_NAME(noteSize,"noteSize");
	HX_VISIT_MEMBER_NAME(noAnimation,"noAnimation");
	HX_VISIT_MEMBER_NAME(noMissAnimation,"noMissAnimation");
	HX_VISIT_MEMBER_NAME(hitCausesMiss,"hitCausesMiss");
	HX_VISIT_MEMBER_NAME(distance,"distance");
	HX_VISIT_MEMBER_NAME(hitsoundDisabled,"hitsoundDisabled");
	HX_VISIT_MEMBER_NAME(hitsoundChartEditor,"hitsoundChartEditor");
	HX_VISIT_MEMBER_NAME(hitsound,"hitsound");
	HX_VISIT_MEMBER_NAME(altStrum,"altStrum");
	HX_VISIT_MEMBER_NAME(notetolookfor,"notetolookfor");
	HX_VISIT_MEMBER_NAME(MyStrum,"MyStrum");
	HX_VISIT_MEMBER_NAME(alphaMult,"alphaMult");
	HX_VISIT_MEMBER_NAME(_lastNoteOffX,"_lastNoteOffX");
	HX_VISIT_MEMBER_NAME(originalHeight,"originalHeight");
	HX_VISIT_MEMBER_NAME(correctionOffset,"correctionOffset");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Note_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tail") ) { return ::hx::Val( tail ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"copyX") ) { return ::hx::Val( copyX ); }
		if (HX_FIELD_EQ(inName,"copyY") ) { return ::hx::Val( copyY ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"gfNote") ) { return ::hx::Val( gfNote ); }
		if (HX_FIELD_EQ(inName,"rating") ) { return ::hx::Val( rating ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tooLate") ) { return ::hx::Val( tooLate ); }
		if (HX_FIELD_EQ(inName,"spawned") ) { return ::hx::Val( spawned ); }
		if (HX_FIELD_EQ(inName,"offsetX") ) { return ::hx::Val( offsetX ); }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return ::hx::Val( offsetY ); }
		if (HX_FIELD_EQ(inName,"texture") ) { return ::hx::Val( texture ); }
		if (HX_FIELD_EQ(inName,"MyStrum") ) { return ::hx::Val( MyStrum ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noteData") ) { return ::hx::Val( noteData ); }
		if (HX_FIELD_EQ(inName,"canBeHit") ) { return ::hx::Val( canBeHit ); }
		if (HX_FIELD_EQ(inName,"prevNote") ) { return ::hx::Val( prevNote ); }
		if (HX_FIELD_EQ(inName,"nextNote") ) { return ::hx::Val( nextNote ); }
		if (HX_FIELD_EQ(inName,"blockHit") ) { return ::hx::Val( blockHit ); }
		if (HX_FIELD_EQ(inName,"noteType") ) { return ::hx::Val( noteType ); }
		if (HX_FIELD_EQ(inName,"inEditor") ) { return ::hx::Val( inEditor ); }
		if (HX_FIELD_EQ(inName,"noteSize") ) { return ::hx::Val( noteSize ); }
		if (HX_FIELD_EQ(inName,"distance") ) { return ::hx::Val( distance ); }
		if (HX_FIELD_EQ(inName,"hitsound") ) { return ::hx::Val( hitsound ); }
		if (HX_FIELD_EQ(inName,"altStrum") ) { return ::hx::Val( altStrum ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"extraData") ) { return ::hx::Val( extraData ); }
		if (HX_FIELD_EQ(inName,"strumTime") ) { return ::hx::Val( strumTime ); }
		if (HX_FIELD_EQ(inName,"mustPress") ) { return ::hx::Val( mustPress ); }
		if (HX_FIELD_EQ(inName,"eventName") ) { return ::hx::Val( eventName ); }
		if (HX_FIELD_EQ(inName,"eventVal1") ) { return ::hx::Val( eventVal1 ); }
		if (HX_FIELD_EQ(inName,"eventVal2") ) { return ::hx::Val( eventVal2 ); }
		if (HX_FIELD_EQ(inName,"rgbShader") ) { return ::hx::Val( rgbShader ); }
		if (HX_FIELD_EQ(inName,"multAlpha") ) { return ::hx::Val( multAlpha ); }
		if (HX_FIELD_EQ(inName,"multSpeed") ) { return ::hx::Val( multSpeed ); }
		if (HX_FIELD_EQ(inName,"copyAngle") ) { return ::hx::Val( copyAngle ); }
		if (HX_FIELD_EQ(inName,"copyAlpha") ) { return ::hx::Val( copyAlpha ); }
		if (HX_FIELD_EQ(inName,"hitHealth") ) { return ::hx::Val( hitHealth ); }
		if (HX_FIELD_EQ(inName,"ratingMod") ) { return ::hx::Val( ratingMod ); }
		if (HX_FIELD_EQ(inName,"alphaMult") ) { return ::hx::Val( alphaMult ); }
		if (HX_FIELD_EQ(inName,"GoToStrum") ) { return ::hx::Val( GoToStrum_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wasGoodHit") ) { return ::hx::Val( wasGoodHit ); }
		if (HX_FIELD_EQ(inName,"ignoreNote") ) { return ::hx::Val( ignoreNote ); }
		if (HX_FIELD_EQ(inName,"noteWasHit") ) { return ::hx::Val( noteWasHit ); }
		if (HX_FIELD_EQ(inName,"animSuffix") ) { return ::hx::Val( animSuffix ); }
		if (HX_FIELD_EQ(inName,"missHealth") ) { return ::hx::Val( missHealth ); }
		if (HX_FIELD_EQ(inName,"noteOffset") ) { return ::hx::Val( noteOffset ); }
		if (HX_FIELD_EQ(inName,"defaultRGB") ) { return ::hx::Val( defaultRGB_dyn() ); }
		if (HX_FIELD_EQ(inName,"reloadNote") ) { return ::hx::Val( reloadNote_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"eventLength") ) { return ::hx::Val( eventLength ); }
		if (HX_FIELD_EQ(inName,"lateHitMult") ) { return ::hx::Val( lateHitMult ); }
		if (HX_FIELD_EQ(inName,"lowPriority") ) { return ::hx::Val( lowPriority ); }
		if (HX_FIELD_EQ(inName,"offsetAngle") ) { return ::hx::Val( offsetAngle ); }
		if (HX_FIELD_EQ(inName,"noAnimation") ) { return ::hx::Val( noAnimation ); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return ::hx::Val( set_texture_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"earlyHitMult") ) { return ::hx::Val( earlyHitMult ); }
		if (HX_FIELD_EQ(inName,"set_noteType") ) { return ::hx::Val( set_noteType_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hitByOpponent") ) { return ::hx::Val( hitByOpponent ); }
		if (HX_FIELD_EQ(inName,"sustainLength") ) { return ::hx::Val( sustainLength ); }
		if (HX_FIELD_EQ(inName,"isSustainNote") ) { return ::hx::Val( isSustainNote ); }
		if (HX_FIELD_EQ(inName,"hitCausesMiss") ) { return ::hx::Val( hitCausesMiss ); }
		if (HX_FIELD_EQ(inName,"notetolookfor") ) { return ::hx::Val( notetolookfor ); }
		if (HX_FIELD_EQ(inName,"set_multSpeed") ) { return ::hx::Val( set_multSpeed_dyn() ); }
		if (HX_FIELD_EQ(inName,"resizeByRatio") ) { return ::hx::Val( resizeByRatio_dyn() ); }
		if (HX_FIELD_EQ(inName,"_lastNoteOffX") ) { return ::hx::Val( _lastNoteOffX ); }
		if (HX_FIELD_EQ(inName,"loadNoteAnims") ) { return ::hx::Val( loadNoteAnims_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"noteSplashData") ) { return ::hx::Val( noteSplashData ); }
		if (HX_FIELD_EQ(inName,"ratingDisabled") ) { return ::hx::Val( ratingDisabled ); }
		if (HX_FIELD_EQ(inName,"originalHeight") ) { return ::hx::Val( originalHeight ); }
		if (HX_FIELD_EQ(inName,"SearchForStrum") ) { return ::hx::Val( SearchForStrum_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"noMissAnimation") ) { return ::hx::Val( noMissAnimation ); }
		if (HX_FIELD_EQ(inName,"followStrumNote") ) { return ::hx::Val( followStrumNote_dyn() ); }
		if (HX_FIELD_EQ(inName,"clipToStrumNote") ) { return ::hx::Val( clipToStrumNote_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hitsoundDisabled") ) { return ::hx::Val( hitsoundDisabled ); }
		if (HX_FIELD_EQ(inName,"correctionOffset") ) { return ::hx::Val( correctionOffset ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadPixelNoteAnims") ) { return ::hx::Val( loadPixelNoteAnims_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hitsoundChartEditor") ) { return ::hx::Val( hitsoundChartEditor ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Note_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"colArray") ) { outValue = ( colArray ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"swagWidth") ) { outValue = ( swagWidth ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SUSTAIN_SIZE") ) { outValue = ( SUSTAIN_SIZE ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultNoteSkin") ) { outValue = ( defaultNoteSkin ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"globalRgbShaders") ) { outValue = ( globalRgbShaders ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_lastValidChecked") ) { outValue = ( _lastValidChecked ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getNoteSkinPostfix") ) { outValue = getNoteSkinPostfix_dyn(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"initializeGlobalRGBShader") ) { outValue = initializeGlobalRGBShader_dyn(); return true; }
	}
	return false;
}

::hx::Val Note_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tail") ) { tail=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"copyX") ) { copyX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"copyY") ) { copyY=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::objects::Note >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gfNote") ) { gfNote=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rating") ) { rating=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tooLate") ) { tooLate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spawned") ) { spawned=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_texture(inValue.Cast< ::String >()) );texture=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MyStrum") ) { MyStrum=inValue.Cast<  ::objects::StrumNote >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noteData") ) { noteData=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canBeHit") ) { canBeHit=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prevNote") ) { prevNote=inValue.Cast<  ::objects::Note >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextNote") ) { nextNote=inValue.Cast<  ::objects::Note >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blockHit") ) { blockHit=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noteType") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_noteType(inValue.Cast< ::String >()) );noteType=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inEditor") ) { inEditor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noteSize") ) { noteSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"distance") ) { distance=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hitsound") ) { hitsound=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"altStrum") ) { altStrum=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"extraData") ) { extraData=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"strumTime") ) { strumTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mustPress") ) { mustPress=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"eventName") ) { eventName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"eventVal1") ) { eventVal1=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"eventVal2") ) { eventVal2=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rgbShader") ) { rgbShader=inValue.Cast<  ::shaders::RGBShaderReference >(); return inValue; }
		if (HX_FIELD_EQ(inName,"multAlpha") ) { multAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"multSpeed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_multSpeed(inValue.Cast< Float >()) );multSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"copyAngle") ) { copyAngle=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"copyAlpha") ) { copyAlpha=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hitHealth") ) { hitHealth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ratingMod") ) { ratingMod=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alphaMult") ) { alphaMult=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wasGoodHit") ) { wasGoodHit=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ignoreNote") ) { ignoreNote=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noteWasHit") ) { noteWasHit=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animSuffix") ) { animSuffix=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"missHealth") ) { missHealth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noteOffset") ) { noteOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"eventLength") ) { eventLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lateHitMult") ) { lateHitMult=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lowPriority") ) { lowPriority=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetAngle") ) { offsetAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noAnimation") ) { noAnimation=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"earlyHitMult") ) { earlyHitMult=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hitByOpponent") ) { hitByOpponent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sustainLength") ) { sustainLength=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isSustainNote") ) { isSustainNote=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hitCausesMiss") ) { hitCausesMiss=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"notetolookfor") ) { notetolookfor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastNoteOffX") ) { _lastNoteOffX=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"noteSplashData") ) { noteSplashData=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ratingDisabled") ) { ratingDisabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originalHeight") ) { originalHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"noMissAnimation") ) { noMissAnimation=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hitsoundDisabled") ) { hitsoundDisabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"correctionOffset") ) { correctionOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hitsoundChartEditor") ) { hitsoundChartEditor=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Note_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"colArray") ) { colArray=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"swagWidth") ) { swagWidth=ioValue.Cast< Float >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SUSTAIN_SIZE") ) { SUSTAIN_SIZE=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultNoteSkin") ) { defaultNoteSkin=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"globalRgbShaders") ) { globalRgbShaders=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_lastValidChecked") ) { _lastValidChecked=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void Note_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("extraData",da,a4,67,7c));
	outFields->push(HX_("strumTime",f6,2d,21,f4));
	outFields->push(HX_("mustPress",ba,d4,17,60));
	outFields->push(HX_("noteData",3c,7b,96,51));
	outFields->push(HX_("canBeHit",20,a6,d1,1e));
	outFields->push(HX_("tooLate",da,77,57,55));
	outFields->push(HX_("wasGoodHit",ed,7a,9b,17));
	outFields->push(HX_("ignoreNote",24,ee,32,49));
	outFields->push(HX_("hitByOpponent",c7,8a,37,cc));
	outFields->push(HX_("noteWasHit",3c,ca,a4,58));
	outFields->push(HX_("prevNote",85,f8,d7,11));
	outFields->push(HX_("nextNote",85,be,d6,f4));
	outFields->push(HX_("spawned",5a,3b,f7,9e));
	outFields->push(HX_("tail",90,b6,f6,4c));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("blockHit",06,17,97,19));
	outFields->push(HX_("sustainLength",e9,a1,9c,7c));
	outFields->push(HX_("isSustainNote",6b,1e,77,c3));
	outFields->push(HX_("noteType",cc,17,3c,5c));
	outFields->push(HX_("eventName",85,7b,0c,f8));
	outFields->push(HX_("eventLength",a0,e0,54,f2));
	outFields->push(HX_("eventVal1",6a,2f,56,fd));
	outFields->push(HX_("eventVal2",6b,2f,56,fd));
	outFields->push(HX_("rgbShader",12,56,b9,2f));
	outFields->push(HX_("inEditor",72,8b,5b,c4));
	outFields->push(HX_("animSuffix",c2,3f,81,7b));
	outFields->push(HX_("gfNote",b1,99,84,1d));
	outFields->push(HX_("earlyHitMult",80,a9,e2,17));
	outFields->push(HX_("lateHitMult",5d,6d,93,0b));
	outFields->push(HX_("lowPriority",18,40,47,61));
	outFields->push(HX_("noteSplashData",c3,81,0e,16));
	outFields->push(HX_("offsetX",65,09,65,d7));
	outFields->push(HX_("offsetY",66,09,65,d7));
	outFields->push(HX_("offsetAngle",40,c7,62,bb));
	outFields->push(HX_("multAlpha",4e,e9,0f,96));
	outFields->push(HX_("multSpeed",77,d9,e2,f5));
	outFields->push(HX_("copyX",03,83,5f,4a));
	outFields->push(HX_("copyY",04,83,5f,4a));
	outFields->push(HX_("copyAngle",de,67,dd,a8));
	outFields->push(HX_("copyAlpha",69,cb,91,a7));
	outFields->push(HX_("hitHealth",4f,e3,17,31));
	outFields->push(HX_("missHealth",b8,54,21,f6));
	outFields->push(HX_("rating",1d,34,8a,bb));
	outFields->push(HX_("ratingMod",a5,4a,34,09));
	outFields->push(HX_("ratingDisabled",b9,16,ed,99));
	outFields->push(HX_("texture",db,c8,e0,9e));
	outFields->push(HX_("noteOffset",25,a5,53,fe));
	outFields->push(HX_("noteSize",d3,c5,86,5b));
	outFields->push(HX_("noAnimation",83,de,e3,ac));
	outFields->push(HX_("noMissAnimation",67,57,15,92));
	outFields->push(HX_("hitCausesMiss",39,dc,fd,91));
	outFields->push(HX_("distance",35,93,f9,6b));
	outFields->push(HX_("hitsoundDisabled",38,73,71,56));
	outFields->push(HX_("hitsoundChartEditor",ef,d8,ca,29));
	outFields->push(HX_("hitsound",9c,79,fe,2c));
	outFields->push(HX_("altStrum",60,ff,d6,af));
	outFields->push(HX_("notetolookfor",bd,8f,50,3c));
	outFields->push(HX_("MyStrum",1d,2e,69,fa));
	outFields->push(HX_("alphaMult",6e,42,5f,e2));
	outFields->push(HX_("_lastNoteOffX",70,32,e0,9c));
	outFields->push(HX_("originalHeight",18,43,32,3a));
	outFields->push(HX_("correctionOffset",d1,d9,d9,0e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Note_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Note_obj,extraData),HX_("extraData",da,a4,67,7c)},
	{::hx::fsFloat,(int)offsetof(Note_obj,strumTime),HX_("strumTime",f6,2d,21,f4)},
	{::hx::fsBool,(int)offsetof(Note_obj,mustPress),HX_("mustPress",ba,d4,17,60)},
	{::hx::fsInt,(int)offsetof(Note_obj,noteData),HX_("noteData",3c,7b,96,51)},
	{::hx::fsBool,(int)offsetof(Note_obj,canBeHit),HX_("canBeHit",20,a6,d1,1e)},
	{::hx::fsBool,(int)offsetof(Note_obj,tooLate),HX_("tooLate",da,77,57,55)},
	{::hx::fsBool,(int)offsetof(Note_obj,wasGoodHit),HX_("wasGoodHit",ed,7a,9b,17)},
	{::hx::fsBool,(int)offsetof(Note_obj,ignoreNote),HX_("ignoreNote",24,ee,32,49)},
	{::hx::fsBool,(int)offsetof(Note_obj,hitByOpponent),HX_("hitByOpponent",c7,8a,37,cc)},
	{::hx::fsBool,(int)offsetof(Note_obj,noteWasHit),HX_("noteWasHit",3c,ca,a4,58)},
	{::hx::fsObject /*  ::objects::Note */ ,(int)offsetof(Note_obj,prevNote),HX_("prevNote",85,f8,d7,11)},
	{::hx::fsObject /*  ::objects::Note */ ,(int)offsetof(Note_obj,nextNote),HX_("nextNote",85,be,d6,f4)},
	{::hx::fsBool,(int)offsetof(Note_obj,spawned),HX_("spawned",5a,3b,f7,9e)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Note_obj,tail),HX_("tail",90,b6,f6,4c)},
	{::hx::fsObject /*  ::objects::Note */ ,(int)offsetof(Note_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsBool,(int)offsetof(Note_obj,blockHit),HX_("blockHit",06,17,97,19)},
	{::hx::fsFloat,(int)offsetof(Note_obj,sustainLength),HX_("sustainLength",e9,a1,9c,7c)},
	{::hx::fsBool,(int)offsetof(Note_obj,isSustainNote),HX_("isSustainNote",6b,1e,77,c3)},
	{::hx::fsString,(int)offsetof(Note_obj,noteType),HX_("noteType",cc,17,3c,5c)},
	{::hx::fsString,(int)offsetof(Note_obj,eventName),HX_("eventName",85,7b,0c,f8)},
	{::hx::fsInt,(int)offsetof(Note_obj,eventLength),HX_("eventLength",a0,e0,54,f2)},
	{::hx::fsString,(int)offsetof(Note_obj,eventVal1),HX_("eventVal1",6a,2f,56,fd)},
	{::hx::fsString,(int)offsetof(Note_obj,eventVal2),HX_("eventVal2",6b,2f,56,fd)},
	{::hx::fsObject /*  ::shaders::RGBShaderReference */ ,(int)offsetof(Note_obj,rgbShader),HX_("rgbShader",12,56,b9,2f)},
	{::hx::fsBool,(int)offsetof(Note_obj,inEditor),HX_("inEditor",72,8b,5b,c4)},
	{::hx::fsString,(int)offsetof(Note_obj,animSuffix),HX_("animSuffix",c2,3f,81,7b)},
	{::hx::fsBool,(int)offsetof(Note_obj,gfNote),HX_("gfNote",b1,99,84,1d)},
	{::hx::fsFloat,(int)offsetof(Note_obj,earlyHitMult),HX_("earlyHitMult",80,a9,e2,17)},
	{::hx::fsFloat,(int)offsetof(Note_obj,lateHitMult),HX_("lateHitMult",5d,6d,93,0b)},
	{::hx::fsBool,(int)offsetof(Note_obj,lowPriority),HX_("lowPriority",18,40,47,61)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Note_obj,noteSplashData),HX_("noteSplashData",c3,81,0e,16)},
	{::hx::fsFloat,(int)offsetof(Note_obj,offsetX),HX_("offsetX",65,09,65,d7)},
	{::hx::fsFloat,(int)offsetof(Note_obj,offsetY),HX_("offsetY",66,09,65,d7)},
	{::hx::fsFloat,(int)offsetof(Note_obj,offsetAngle),HX_("offsetAngle",40,c7,62,bb)},
	{::hx::fsFloat,(int)offsetof(Note_obj,multAlpha),HX_("multAlpha",4e,e9,0f,96)},
	{::hx::fsFloat,(int)offsetof(Note_obj,multSpeed),HX_("multSpeed",77,d9,e2,f5)},
	{::hx::fsBool,(int)offsetof(Note_obj,copyX),HX_("copyX",03,83,5f,4a)},
	{::hx::fsBool,(int)offsetof(Note_obj,copyY),HX_("copyY",04,83,5f,4a)},
	{::hx::fsBool,(int)offsetof(Note_obj,copyAngle),HX_("copyAngle",de,67,dd,a8)},
	{::hx::fsBool,(int)offsetof(Note_obj,copyAlpha),HX_("copyAlpha",69,cb,91,a7)},
	{::hx::fsFloat,(int)offsetof(Note_obj,hitHealth),HX_("hitHealth",4f,e3,17,31)},
	{::hx::fsFloat,(int)offsetof(Note_obj,missHealth),HX_("missHealth",b8,54,21,f6)},
	{::hx::fsString,(int)offsetof(Note_obj,rating),HX_("rating",1d,34,8a,bb)},
	{::hx::fsFloat,(int)offsetof(Note_obj,ratingMod),HX_("ratingMod",a5,4a,34,09)},
	{::hx::fsBool,(int)offsetof(Note_obj,ratingDisabled),HX_("ratingDisabled",b9,16,ed,99)},
	{::hx::fsString,(int)offsetof(Note_obj,texture),HX_("texture",db,c8,e0,9e)},
	{::hx::fsFloat,(int)offsetof(Note_obj,noteOffset),HX_("noteOffset",25,a5,53,fe)},
	{::hx::fsFloat,(int)offsetof(Note_obj,noteSize),HX_("noteSize",d3,c5,86,5b)},
	{::hx::fsBool,(int)offsetof(Note_obj,noAnimation),HX_("noAnimation",83,de,e3,ac)},
	{::hx::fsBool,(int)offsetof(Note_obj,noMissAnimation),HX_("noMissAnimation",67,57,15,92)},
	{::hx::fsBool,(int)offsetof(Note_obj,hitCausesMiss),HX_("hitCausesMiss",39,dc,fd,91)},
	{::hx::fsFloat,(int)offsetof(Note_obj,distance),HX_("distance",35,93,f9,6b)},
	{::hx::fsBool,(int)offsetof(Note_obj,hitsoundDisabled),HX_("hitsoundDisabled",38,73,71,56)},
	{::hx::fsBool,(int)offsetof(Note_obj,hitsoundChartEditor),HX_("hitsoundChartEditor",ef,d8,ca,29)},
	{::hx::fsString,(int)offsetof(Note_obj,hitsound),HX_("hitsound",9c,79,fe,2c)},
	{::hx::fsBool,(int)offsetof(Note_obj,altStrum),HX_("altStrum",60,ff,d6,af)},
	{::hx::fsInt,(int)offsetof(Note_obj,notetolookfor),HX_("notetolookfor",bd,8f,50,3c)},
	{::hx::fsObject /*  ::objects::StrumNote */ ,(int)offsetof(Note_obj,MyStrum),HX_("MyStrum",1d,2e,69,fa)},
	{::hx::fsFloat,(int)offsetof(Note_obj,alphaMult),HX_("alphaMult",6e,42,5f,e2)},
	{::hx::fsFloat,(int)offsetof(Note_obj,_lastNoteOffX),HX_("_lastNoteOffX",70,32,e0,9c)},
	{::hx::fsFloat,(int)offsetof(Note_obj,originalHeight),HX_("originalHeight",18,43,32,3a)},
	{::hx::fsFloat,(int)offsetof(Note_obj,correctionOffset),HX_("correctionOffset",d1,d9,d9,0e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Note_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Note_obj::globalRgbShaders,HX_("globalRgbShaders",64,e9,df,eb)},
	{::hx::fsInt,(void *) &Note_obj::SUSTAIN_SIZE,HX_("SUSTAIN_SIZE",3d,f9,ae,25)},
	{::hx::fsFloat,(void *) &Note_obj::swagWidth,HX_("swagWidth",1c,87,d9,a6)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Note_obj::colArray,HX_("colArray",39,75,98,0d)},
	{::hx::fsString,(void *) &Note_obj::defaultNoteSkin,HX_("defaultNoteSkin",70,f9,95,84)},
	{::hx::fsString,(void *) &Note_obj::_lastValidChecked,HX_("_lastValidChecked",60,ab,67,ea)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Note_obj_sMemberFields[] = {
	HX_("extraData",da,a4,67,7c),
	HX_("strumTime",f6,2d,21,f4),
	HX_("mustPress",ba,d4,17,60),
	HX_("noteData",3c,7b,96,51),
	HX_("canBeHit",20,a6,d1,1e),
	HX_("tooLate",da,77,57,55),
	HX_("wasGoodHit",ed,7a,9b,17),
	HX_("ignoreNote",24,ee,32,49),
	HX_("hitByOpponent",c7,8a,37,cc),
	HX_("noteWasHit",3c,ca,a4,58),
	HX_("prevNote",85,f8,d7,11),
	HX_("nextNote",85,be,d6,f4),
	HX_("spawned",5a,3b,f7,9e),
	HX_("tail",90,b6,f6,4c),
	HX_("parent",2a,05,7e,ed),
	HX_("blockHit",06,17,97,19),
	HX_("sustainLength",e9,a1,9c,7c),
	HX_("isSustainNote",6b,1e,77,c3),
	HX_("noteType",cc,17,3c,5c),
	HX_("eventName",85,7b,0c,f8),
	HX_("eventLength",a0,e0,54,f2),
	HX_("eventVal1",6a,2f,56,fd),
	HX_("eventVal2",6b,2f,56,fd),
	HX_("rgbShader",12,56,b9,2f),
	HX_("inEditor",72,8b,5b,c4),
	HX_("animSuffix",c2,3f,81,7b),
	HX_("gfNote",b1,99,84,1d),
	HX_("earlyHitMult",80,a9,e2,17),
	HX_("lateHitMult",5d,6d,93,0b),
	HX_("lowPriority",18,40,47,61),
	HX_("noteSplashData",c3,81,0e,16),
	HX_("offsetX",65,09,65,d7),
	HX_("offsetY",66,09,65,d7),
	HX_("offsetAngle",40,c7,62,bb),
	HX_("multAlpha",4e,e9,0f,96),
	HX_("multSpeed",77,d9,e2,f5),
	HX_("copyX",03,83,5f,4a),
	HX_("copyY",04,83,5f,4a),
	HX_("copyAngle",de,67,dd,a8),
	HX_("copyAlpha",69,cb,91,a7),
	HX_("hitHealth",4f,e3,17,31),
	HX_("missHealth",b8,54,21,f6),
	HX_("rating",1d,34,8a,bb),
	HX_("ratingMod",a5,4a,34,09),
	HX_("ratingDisabled",b9,16,ed,99),
	HX_("texture",db,c8,e0,9e),
	HX_("noteOffset",25,a5,53,fe),
	HX_("noteSize",d3,c5,86,5b),
	HX_("noAnimation",83,de,e3,ac),
	HX_("noMissAnimation",67,57,15,92),
	HX_("hitCausesMiss",39,dc,fd,91),
	HX_("distance",35,93,f9,6b),
	HX_("hitsoundDisabled",38,73,71,56),
	HX_("hitsoundChartEditor",ef,d8,ca,29),
	HX_("hitsound",9c,79,fe,2c),
	HX_("altStrum",60,ff,d6,af),
	HX_("notetolookfor",bd,8f,50,3c),
	HX_("MyStrum",1d,2e,69,fa),
	HX_("alphaMult",6e,42,5f,e2),
	HX_("set_multSpeed",5a,8f,4c,fc),
	HX_("resizeByRatio",20,78,af,6b),
	HX_("set_texture",fe,2f,48,2f),
	HX_("defaultRGB",cc,cc,03,26),
	HX_("set_noteType",49,ef,4e,26),
	HX_("_lastNoteOffX",70,32,e0,9c),
	HX_("originalHeight",18,43,32,3a),
	HX_("correctionOffset",d1,d9,d9,0e),
	HX_("reloadNote",eb,b7,11,94),
	HX_("loadNoteAnims",ea,e4,d6,e2),
	HX_("loadPixelNoteAnims",50,91,b2,72),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	HX_("followStrumNote",2a,92,6f,c4),
	HX_("SearchForStrum",28,7d,25,56),
	HX_("GoToStrum",66,6c,c1,6b),
	HX_("clipToStrumNote",f0,e7,67,59),
	::String(null()) };

static void Note_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Note_obj::globalRgbShaders,"globalRgbShaders");
	HX_MARK_MEMBER_NAME(Note_obj::SUSTAIN_SIZE,"SUSTAIN_SIZE");
	HX_MARK_MEMBER_NAME(Note_obj::swagWidth,"swagWidth");
	HX_MARK_MEMBER_NAME(Note_obj::colArray,"colArray");
	HX_MARK_MEMBER_NAME(Note_obj::defaultNoteSkin,"defaultNoteSkin");
	HX_MARK_MEMBER_NAME(Note_obj::_lastValidChecked,"_lastValidChecked");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Note_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Note_obj::globalRgbShaders,"globalRgbShaders");
	HX_VISIT_MEMBER_NAME(Note_obj::SUSTAIN_SIZE,"SUSTAIN_SIZE");
	HX_VISIT_MEMBER_NAME(Note_obj::swagWidth,"swagWidth");
	HX_VISIT_MEMBER_NAME(Note_obj::colArray,"colArray");
	HX_VISIT_MEMBER_NAME(Note_obj::defaultNoteSkin,"defaultNoteSkin");
	HX_VISIT_MEMBER_NAME(Note_obj::_lastValidChecked,"_lastValidChecked");
};

#endif

::hx::Class Note_obj::__mClass;

static ::String Note_obj_sStaticFields[] = {
	HX_("globalRgbShaders",64,e9,df,eb),
	HX_("SUSTAIN_SIZE",3d,f9,ae,25),
	HX_("swagWidth",1c,87,d9,a6),
	HX_("colArray",39,75,98,0d),
	HX_("defaultNoteSkin",70,f9,95,84),
	HX_("initializeGlobalRGBShader",bf,f4,77,5d),
	HX_("_lastValidChecked",60,ab,67,ea),
	HX_("getNoteSkinPostfix",b0,e5,19,d0),
	::String(null())
};

void Note_obj::__register()
{
	Note_obj _hx_dummy;
	Note_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.Note",ec,09,d2,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Note_obj::__GetStatic;
	__mClass->mSetStaticField = &Note_obj::__SetStatic;
	__mClass->mMarkFunc = Note_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Note_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Note_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Note_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Note_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Note_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Note_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Note_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0f2eb749edd76d08_66_boot)
HXDLIN(  66)		globalRgbShaders = ::Array_obj< ::Dynamic>::__new(0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_0f2eb749edd76d08_75_boot)
HXDLIN(  75)		SUSTAIN_SIZE = 44;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0f2eb749edd76d08_76_boot)
HXDLIN(  76)		swagWidth = ((Float)112.);
            	}
{
            	HX_STACKFRAME(&_hx_pos_0f2eb749edd76d08_77_boot)
HXDLIN(  77)		colArray = ::Array_obj< ::String >::fromData( _hx_array_data_50d209ec_24,4);
            	}
{
            	HX_STACKFRAME(&_hx_pos_0f2eb749edd76d08_78_boot)
HXDLIN(  78)		defaultNoteSkin = HX_("noteSkins/NOTE_assets",a5,34,27,1f);
            	}
}

} // end namespace objects
