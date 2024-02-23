#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_objects_BGSprite
#include <objects/BGSprite.h>
#endif
#ifndef INCLUDED_objects_Character
#include <objects/Character.h>
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
#ifndef INCLUDED_states_stages_Spooky
#include <states/stages/Spooky.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b06d4ffaeb06ae42_5_new,"states.stages.Spooky","new",0xed67862a,"states.stages.Spooky.new","states/stages/Spooky.hx",5,0xc04a3666)
HX_LOCAL_STACK_FRAME(_hx_pos_b06d4ffaeb06ae42_10_create,"states.stages.Spooky","create",0xe5ffeb72,"states.stages.Spooky.create","states/stages/Spooky.hx",10,0xc04a3666)
static const ::String _hx_array_data_c212e938_2[] = {
	HX_("halloweem bg0",37,fc,3c,6c),HX_("halloweem bg lightning strike",af,54,50,5b),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b06d4ffaeb06ae42_33_createPost,"states.stages.Spooky","createPost",0x54b53cf2,"states.stages.Spooky.createPost","states/stages/Spooky.hx",33,0xc04a3666)
HX_LOCAL_STACK_FRAME(_hx_pos_b06d4ffaeb06ae42_45_beatHit,"states.stages.Spooky","beatHit",0xbc884d47,"states.stages.Spooky.beatHit","states/stages/Spooky.hx",45,0xc04a3666)
HX_LOCAL_STACK_FRAME(_hx_pos_b06d4ffaeb06ae42_52_lightningStrikeShit,"states.stages.Spooky","lightningStrikeShit",0xfc6e3a86,"states.stages.Spooky.lightningStrikeShit","states/stages/Spooky.hx",52,0xc04a3666)
HX_LOCAL_STACK_FRAME(_hx_pos_b06d4ffaeb06ae42_109_monsterCutscene,"states.stages.Spooky","monsterCutscene",0x3f96138e,"states.stages.Spooky.monsterCutscene","states/stages/Spooky.hx",109,0xc04a3666)
HX_LOCAL_STACK_FRAME(_hx_pos_b06d4ffaeb06ae42_89_monsterCutscene,"states.stages.Spooky","monsterCutscene",0x3f96138e,"states.stages.Spooky.monsterCutscene","states/stages/Spooky.hx",89,0xc04a3666)
namespace states{
namespace stages{

void Spooky_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b06d4ffaeb06ae42_5_new)
HXLINE(  42)		this->lightningOffset = 8;
HXLINE(  41)		this->lightningStrikeBeat = 0;
HXLINE(   5)		super::__construct();
            	}

Dynamic Spooky_obj::__CreateEmpty() { return new Spooky_obj; }

void *Spooky_obj::_hx_vtable = 0;

Dynamic Spooky_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Spooky_obj > _hx_result = new Spooky_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Spooky_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x230cab9d) {
		if (inClassId<=(int)0x187e3082) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x187e3082;
		} else {
			return inClassId==(int)0x230cab9d;
		}
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void Spooky_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_b06d4ffaeb06ae42_10_create)
HXLINE(  11)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE(  12)			this->halloweenBG =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("halloween_bg",77,a6,29,9b),-200,-100,null(),null(),::Array_obj< ::String >::fromData( _hx_array_data_c212e938_2,2),null());
            		}
            		else {
HXLINE(  14)			this->halloweenBG =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("halloween_bg_low",8c,47,c1,2b),-200,-100,null(),null(),null(),null());
            		}
HXLINE(  16)		this->add(this->halloweenBG);
HXLINE(  19)		this->precacheSound(HX_("thunder_1",16,4b,9e,a5));
HXLINE(  20)		this->precacheSound(HX_("thunder_2",17,4b,9e,a5));
HXLINE(  23)		bool _hx_tmp;
HXDLIN(  23)		if (::states::PlayState_obj::isStoryMode) {
HXLINE(  23)			_hx_tmp = !(::states::PlayState_obj::seenCutscene);
            		}
            		else {
HXLINE(  23)			_hx_tmp = false;
            		}
HXDLIN(  23)		if (_hx_tmp) {
HXLINE(  25)			if ((( (::String)(this->game->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) ) == HX_("monster",1a,54,b0,b8))) {
HXLINE(  28)				this->setStartCallback(this->monsterCutscene_dyn());
            			}
            		}
            	}


void Spooky_obj::createPost(){
            	HX_GC_STACKFRAME(&_hx_pos_b06d4ffaeb06ae42_33_createPost)
HXLINE(  34)		this->halloweenWhite =  ::objects::BGSprite_obj::__alloc( HX_CTX ,null(),-800,-400,0,0,null(),null());
HXLINE(  35)		 ::objects::BGSprite _hx_tmp = this->halloweenWhite;
HXDLIN(  35)		int _hx_tmp1 = ::Std_obj::_hx_int(( (Float)((::flixel::FlxG_obj::width * 2)) ));
HXDLIN(  35)		_hx_tmp->makeGraphic(_hx_tmp1,::Std_obj::_hx_int(( (Float)((::flixel::FlxG_obj::height * 2)) )),-1,null(),null());
HXLINE(  36)		this->halloweenWhite->set_alpha(( (Float)(0) ));
HXLINE(  37)		this->halloweenWhite->set_blend(0);
HXLINE(  38)		this->add(this->halloweenWhite);
            	}


void Spooky_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_b06d4ffaeb06ae42_45_beatHit)
HXDLIN(  45)		bool _hx_tmp;
HXDLIN(  45)		if ((::flixel::FlxG_obj::random->_hx_float(0,100,null()) < 10)) {
HXDLIN(  45)			_hx_tmp = (this->curBeat > (this->lightningStrikeBeat + this->lightningOffset));
            		}
            		else {
HXDLIN(  45)			_hx_tmp = false;
            		}
HXDLIN(  45)		if (_hx_tmp) {
HXLINE(  47)			this->lightningStrikeShit();
            		}
            	}


void Spooky_obj::lightningStrikeShit(){
            	HX_STACKFRAME(&_hx_pos_b06d4ffaeb06ae42_52_lightningStrikeShit)
HXLINE(  53)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  53)		::String library = null();
HXDLIN(  53)		_hx_tmp->play(::backend::Paths_obj::sound((HX_("thunder_",bb,58,cf,2f) + ::flixel::FlxG_obj::random->_hx_int(1,2,null())),library),null(),null(),null(),null(),null());
HXLINE(  54)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE(  54)			this->halloweenBG->animation->play(HX_("halloweem bg lightning strike",af,54,50,5b),null(),null(),null());
            		}
HXLINE(  56)		this->lightningStrikeBeat = this->curBeat;
HXLINE(  57)		this->lightningOffset = ::flixel::FlxG_obj::random->_hx_int(8,24,null());
HXLINE(  59)		if (( ( ::objects::Character)(this->game->__Field(HX_("boyfriend",6a,29,b8,e6),::hx::paccDynamic)) )->animOffsets->exists(HX_("scared",20,78,2a,3c))) {
HXLINE(  60)			( ( ::objects::Character)(this->game->__Field(HX_("boyfriend",6a,29,b8,e6),::hx::paccDynamic)) )->playAnim(HX_("scared",20,78,2a,3c),true,null(),null());
            		}
HXLINE(  63)		if (( ( ::objects::Character)(this->game->__Field(HX_("dad",47,36,4c,00),::hx::paccDynamic)) )->animOffsets->exists(HX_("scared",20,78,2a,3c))) {
HXLINE(  64)			( ( ::objects::Character)(this->game->__Field(HX_("dad",47,36,4c,00),::hx::paccDynamic)) )->playAnim(HX_("scared",20,78,2a,3c),true,null(),null());
            		}
HXLINE(  67)		bool _hx_tmp1;
HXDLIN(  67)		if (::hx::IsNotNull( ( ( ::objects::Character)(this->game->__Field(HX_("gf",1f,5a,00,00),::hx::paccDynamic)) ) )) {
HXLINE(  67)			_hx_tmp1 = ( ( ::objects::Character)(this->game->__Field(HX_("gf",1f,5a,00,00),::hx::paccDynamic)) )->animOffsets->exists(HX_("scared",20,78,2a,3c));
            		}
            		else {
HXLINE(  67)			_hx_tmp1 = false;
            		}
HXDLIN(  67)		if (_hx_tmp1) {
HXLINE(  68)			( ( ::objects::Character)(this->game->__Field(HX_("gf",1f,5a,00,00),::hx::paccDynamic)) )->playAnim(HX_("scared",20,78,2a,3c),true,null(),null());
            		}
HXLINE(  71)		if (::backend::ClientPrefs_obj::data->camZooms) {
HXLINE(  72)			 ::flixel::FlxCamera fh = ::flixel::FlxG_obj::camera;
HXDLIN(  72)			fh->set_zoom((fh->zoom + ((Float)0.015)));
HXLINE(  73)			 ::flixel::FlxCamera fh1 = ( ( ::flixel::FlxCamera)(this->game->__Field(HX_("camHUD",e8,2b,76,b7),::hx::paccDynamic)) );
HXDLIN(  73)			fh1->set_zoom((fh1->zoom + ((Float)0.03)));
HXLINE(  75)			if (!(( (bool)(this->game->__Field(HX_("camZooming",60,3b,bf,d6),::hx::paccDynamic)) ))) {
HXLINE(  76)				::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("zoom",13,a3,f8,50),( (Float)(this->game->__Field(HX_("defaultCamZoom",01,50,2a,0b),::hx::paccDynamic)) ))),((Float)0.5),null());
HXLINE(  77)				::flixel::tweens::FlxTween_obj::tween(( ( ::flixel::FlxCamera)(this->game->__Field(HX_("camHUD",e8,2b,76,b7),::hx::paccDynamic)) ), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("zoom",13,a3,f8,50),1)),((Float)0.5),null());
            			}
            		}
HXLINE(  81)		if (::backend::ClientPrefs_obj::data->flashing) {
HXLINE(  82)			this->halloweenWhite->set_alpha(((Float)0.4));
HXLINE(  83)			::flixel::tweens::FlxTween_obj::tween(this->halloweenWhite, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),((Float)0.5))),((Float)0.075),null());
HXLINE(  84)			::flixel::tweens::FlxTween_obj::tween(this->halloweenWhite, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.25), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.15))));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Spooky_obj,lightningStrikeShit,(void))

void Spooky_obj::monsterCutscene(){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::states::stages::Spooky,_gthis, ::flixel::FlxSprite,whiteScreen2) HXARGC(1)
            		void _hx_run( ::flixel::tweens::FlxTween twn){
            			HX_GC_STACKFRAME(&_hx_pos_b06d4ffaeb06ae42_109_monsterCutscene)
HXLINE( 110)			_gthis->remove(whiteScreen2);
HXLINE( 111)			whiteScreen2->destroy();
HXLINE( 113)			( ( ::flixel::FlxCamera)(_gthis->game->__Field(HX_("camHUD",e8,2b,76,b7),::hx::paccDynamic)) )->set_visible(true);
HXLINE( 114)			_gthis->startCountdown();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_b06d4ffaeb06ae42_89_monsterCutscene)
HXDLIN(  89)		 ::states::stages::Spooky _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  90)		this->game->__SetField(HX_("inCutscene",8f,21,01,56),true,::hx::paccDynamic);
HXLINE(  91)		( ( ::flixel::FlxCamera)(this->game->__Field(HX_("camHUD",e8,2b,76,b7),::hx::paccDynamic)) )->set_visible(false);
HXLINE(  93)		{
HXLINE(  93)			 ::flixel::FlxCamera _this = ::flixel::FlxG_obj::camera;
HXDLIN(  93)			Float x = (( ( ::objects::Character)(this->game->__Field(HX_("dad",47,36,4c,00),::hx::paccDynamic)) )->getMidpoint(null())->x + 150);
HXDLIN(  93)			 ::flixel::math::FlxBasePoint this1 =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,x,(( ( ::objects::Character)(this->game->__Field(HX_("dad",47,36,4c,00),::hx::paccDynamic)) )->getMidpoint(null())->y - ( (Float)(100) )));
HXDLIN(  93)			 ::flixel::math::FlxBasePoint point = this1;
HXDLIN(  93)			{
HXLINE(  93)				 ::flixel::math::FlxBasePoint this2 = _this->scroll;
HXDLIN(  93)				Float y = (point->y - (( (Float)(_this->height) ) * ((Float)0.5)));
HXDLIN(  93)				this2->set_x((point->x - (( (Float)(_this->width) ) * ((Float)0.5))));
HXDLIN(  93)				this2->set_y(y);
            			}
HXDLIN(  93)			if (point->_weak) {
HXLINE(  93)				point->put();
            			}
            		}
HXLINE(  96)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  96)		::String library = null();
HXDLIN(  96)		_hx_tmp->play(::backend::Paths_obj::sound((HX_("thunder_",bb,58,cf,2f) + ::flixel::FlxG_obj::random->_hx_int(1,2,null())),library),null(),null(),null(),null(),null());
HXLINE(  97)		if (::hx::IsNotNull( ( ( ::objects::Character)(this->game->__Field(HX_("gf",1f,5a,00,00),::hx::paccDynamic)) ) )) {
HXLINE(  97)			( ( ::objects::Character)(this->game->__Field(HX_("gf",1f,5a,00,00),::hx::paccDynamic)) )->playAnim(HX_("scared",20,78,2a,3c),true,null(),null());
            		}
HXLINE(  98)		( ( ::objects::Character)(this->game->__Field(HX_("boyfriend",6a,29,b8,e6),::hx::paccDynamic)) )->playAnim(HX_("scared",20,78,2a,3c),true,null(),null());
HXLINE( 101)		 ::flixel::FlxSprite whiteScreen =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN( 101)		int whiteScreen1 = ::Std_obj::_hx_int(( (Float)((::flixel::FlxG_obj::width * 2)) ));
HXDLIN( 101)		 ::flixel::FlxSprite whiteScreen2 = whiteScreen->makeGraphic(whiteScreen1,::Std_obj::_hx_int(( (Float)((::flixel::FlxG_obj::height * 2)) )),-1,null(),null());
HXLINE( 102)		{
HXLINE( 102)			 ::flixel::math::FlxBasePoint this3 = whiteScreen2->scrollFactor;
HXDLIN( 102)			this3->set_x(( (Float)(0) ));
HXDLIN( 102)			this3->set_y(( (Float)(0) ));
            		}
HXLINE( 103)		whiteScreen2->set_blend(0);
HXLINE( 104)		this->add(whiteScreen2);
HXLINE( 105)		::flixel::tweens::FlxTween_obj::tween(whiteScreen2, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),0)),1, ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.1))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())
            			->setFixed(2,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis,whiteScreen2)))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Spooky_obj,monsterCutscene,(void))


::hx::ObjectPtr< Spooky_obj > Spooky_obj::__new() {
	::hx::ObjectPtr< Spooky_obj > __this = new Spooky_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Spooky_obj > Spooky_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Spooky_obj *__this = (Spooky_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Spooky_obj), true, "states.stages.Spooky"));
	*(void **)__this = Spooky_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Spooky_obj::Spooky_obj()
{
}

void Spooky_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Spooky);
	HX_MARK_MEMBER_NAME(halloweenBG,"halloweenBG");
	HX_MARK_MEMBER_NAME(halloweenWhite,"halloweenWhite");
	HX_MARK_MEMBER_NAME(lightningStrikeBeat,"lightningStrikeBeat");
	HX_MARK_MEMBER_NAME(lightningOffset,"lightningOffset");
	 ::backend::BaseStage_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Spooky_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(halloweenBG,"halloweenBG");
	HX_VISIT_MEMBER_NAME(halloweenWhite,"halloweenWhite");
	HX_VISIT_MEMBER_NAME(lightningStrikeBeat,"lightningStrikeBeat");
	HX_VISIT_MEMBER_NAME(lightningOffset,"lightningOffset");
	 ::backend::BaseStage_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Spooky_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createPost") ) { return ::hx::Val( createPost_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"halloweenBG") ) { return ::hx::Val( halloweenBG ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"halloweenWhite") ) { return ::hx::Val( halloweenWhite ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lightningOffset") ) { return ::hx::Val( lightningOffset ); }
		if (HX_FIELD_EQ(inName,"monsterCutscene") ) { return ::hx::Val( monsterCutscene_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lightningStrikeBeat") ) { return ::hx::Val( lightningStrikeBeat ); }
		if (HX_FIELD_EQ(inName,"lightningStrikeShit") ) { return ::hx::Val( lightningStrikeShit_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Spooky_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"halloweenBG") ) { halloweenBG=inValue.Cast<  ::objects::BGSprite >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"halloweenWhite") ) { halloweenWhite=inValue.Cast<  ::objects::BGSprite >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lightningOffset") ) { lightningOffset=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lightningStrikeBeat") ) { lightningStrikeBeat=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Spooky_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("halloweenBG",92,b2,88,5c));
	outFields->push(HX_("halloweenWhite",dc,ff,7d,5e));
	outFields->push(HX_("lightningStrikeBeat",72,e2,3d,b6));
	outFields->push(HX_("lightningOffset",3d,a8,e5,e6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Spooky_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::objects::BGSprite */ ,(int)offsetof(Spooky_obj,halloweenBG),HX_("halloweenBG",92,b2,88,5c)},
	{::hx::fsObject /*  ::objects::BGSprite */ ,(int)offsetof(Spooky_obj,halloweenWhite),HX_("halloweenWhite",dc,ff,7d,5e)},
	{::hx::fsInt,(int)offsetof(Spooky_obj,lightningStrikeBeat),HX_("lightningStrikeBeat",72,e2,3d,b6)},
	{::hx::fsInt,(int)offsetof(Spooky_obj,lightningOffset),HX_("lightningOffset",3d,a8,e5,e6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Spooky_obj_sStaticStorageInfo = 0;
#endif

static ::String Spooky_obj_sMemberFields[] = {
	HX_("halloweenBG",92,b2,88,5c),
	HX_("halloweenWhite",dc,ff,7d,5e),
	HX_("create",fc,66,0f,7c),
	HX_("createPost",7c,45,ea,5c),
	HX_("lightningStrikeBeat",72,e2,3d,b6),
	HX_("lightningOffset",3d,a8,e5,e6),
	HX_("beatHit",7d,ea,04,74),
	HX_("lightningStrikeShit",bc,d0,7c,c1),
	HX_("monsterCutscene",c4,d6,63,5f),
	::String(null()) };

::hx::Class Spooky_obj::__mClass;

void Spooky_obj::__register()
{
	Spooky_obj _hx_dummy;
	Spooky_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.stages.Spooky",38,e9,12,c2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Spooky_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Spooky_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Spooky_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Spooky_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
} // end namespace stages
