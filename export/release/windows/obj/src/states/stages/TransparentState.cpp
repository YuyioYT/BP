#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_backend_BaseStage
#include <backend/BaseStage.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
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
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
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
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_objects_BGSprite
#include <objects/BGSprite.h>
#endif
#ifndef INCLUDED_objects_Character
#include <objects/Character.h>
#endif
#ifndef INCLUDED_states_stages_TransparentState
#include <states/stages/TransparentState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a91d459efd26e63f_6_new,"states.stages.TransparentState","new",0xff5825de,"states.stages.TransparentState.new","states/stages/TransparentState.hx",6,0x61e52132)
HX_LOCAL_STACK_FRAME(_hx_pos_a91d459efd26e63f_12_create,"states.stages.TransparentState","create",0x39f7143e,"states.stages.TransparentState.create","states/stages/TransparentState.hx",12,0x61e52132)
HX_LOCAL_STACK_FRAME(_hx_pos_a91d459efd26e63f_44_eventPushed,"states.stages.TransparentState","eventPushed",0x632d63f1,"states.stages.TransparentState.eventPushed","states/stages/TransparentState.hx",44,0x61e52132)
HX_LOCAL_STACK_FRAME(_hx_pos_a91d459efd26e63f_66_eventCalled,"states.stages.TransparentState","eventCalled",0xa7e8a3b5,"states.stages.TransparentState.eventCalled","states/stages/TransparentState.hx",66,0x61e52132)
HX_LOCAL_STACK_FRAME(_hx_pos_a91d459efd26e63f_89_eventCalled,"states.stages.TransparentState","eventCalled",0xa7e8a3b5,"states.stages.TransparentState.eventCalled","states/stages/TransparentState.hx",89,0x61e52132)
namespace states{
namespace stages{

void TransparentState_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a91d459efd26e63f_6_new)
HXDLIN(   6)		super::__construct();
            	}

Dynamic TransparentState_obj::__CreateEmpty() { return new TransparentState_obj; }

void *TransparentState_obj::_hx_vtable = 0;

Dynamic TransparentState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TransparentState_obj > _hx_result = new TransparentState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TransparentState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4699a6b6) {
		if (inClassId<=(int)0x230cab9d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x230cab9d;
		} else {
			return inClassId==(int)0x4699a6b6;
		}
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void TransparentState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_a91d459efd26e63f_12_create)
HXLINE(  13)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  13)		int bg1 = ::flixel::FlxG_obj::width;
HXDLIN(  13)		int bg2 = ::flixel::FlxG_obj::height;
HXDLIN(  13)		int Alpha = 255;
HXDLIN(  13)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  13)		{
HXLINE(  13)			color = (color & -16711681);
HXDLIN(  13)			color = (color | 65536);
            		}
HXDLIN(  13)		{
HXLINE(  13)			color = (color & -65281);
HXDLIN(  13)			color = (color | 256);
            		}
HXDLIN(  13)		{
HXLINE(  13)			color = (color & -256);
HXDLIN(  13)			color = (color | 1);
            		}
HXDLIN(  13)		{
HXLINE(  13)			color = (color & 16777215);
HXDLIN(  13)			int color1;
HXDLIN(  13)			if ((Alpha > 255)) {
HXLINE(  13)				color1 = 255;
            			}
            			else {
HXLINE(  13)				if ((Alpha < 0)) {
HXLINE(  13)					color1 = 0;
            				}
            				else {
HXLINE(  13)					color1 = Alpha;
            				}
            			}
HXDLIN(  13)			color = (color | (color1 << 24));
            		}
HXDLIN(  13)		 ::flixel::FlxSprite bg3 = bg->makeGraphic(bg1,bg2,color,null(),null());
HXLINE(  14)		if ((( (Float)(this->game->__Field(HX_("defaultCamZoom",01,50,2a,0b),::hx::paccDynamic)) ) < 1)) {
HXLINE(  16)			 ::flixel::math::FlxBasePoint this1 = bg3->scale;
HXDLIN(  16)			Float x = (( (Float)(1) ) / ( (Float)(this->game->__Field(HX_("defaultCamZoom",01,50,2a,0b),::hx::paccDynamic)) ));
HXDLIN(  16)			 ::Dynamic y = null();
HXDLIN(  16)			if (::hx::IsNull( y )) {
HXLINE(  16)				y = x;
            			}
HXDLIN(  16)			this1->set_x((this1->x * x));
HXDLIN(  16)			this1->set_y((this1->y * ( (Float)(y) )));
            		}
HXLINE(  18)		{
HXLINE(  18)			 ::flixel::math::FlxBasePoint this1 = bg3->scrollFactor;
HXDLIN(  18)			this1->set_x(( (Float)(0) ));
HXDLIN(  18)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  19)		this->add(bg3);
HXLINE(  21)		 ::objects::BGSprite stageFront =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("stagefront",2b,fd,b0,c6),-650,600,((Float)0.9),((Float)0.9),null(),null());
HXLINE(  22)		stageFront->setGraphicSize(::Std_obj::_hx_int((stageFront->get_width() * ((Float)1.1))),null());
HXLINE(  23)		stageFront->updateHitbox();
HXLINE(  24)		this->add(stageFront);
HXLINE(  25)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE(  26)			 ::objects::BGSprite stageLight =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("stage_light",55,e5,48,cf),-125,-100,((Float)0.9),((Float)0.9),null(),null());
HXLINE(  27)			stageLight->setGraphicSize(::Std_obj::_hx_int((stageLight->get_width() * ((Float)1.1))),null());
HXLINE(  28)			stageLight->updateHitbox();
HXLINE(  29)			this->add(stageLight);
HXLINE(  30)			 ::objects::BGSprite stageLight1 =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("stage_light",55,e5,48,cf),1225,-100,((Float)0.9),((Float)0.9),null(),null());
HXLINE(  31)			stageLight1->setGraphicSize(::Std_obj::_hx_int((stageLight1->get_width() * ((Float)1.1))),null());
HXLINE(  32)			stageLight1->updateHitbox();
HXLINE(  33)			stageLight1->set_flipX(true);
HXLINE(  34)			this->add(stageLight1);
HXLINE(  36)			 ::objects::BGSprite stageCurtains =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("stagecurtains",df,ec,1a,4b),-500,-300,((Float)1.3),((Float)1.3),null(),null());
HXLINE(  37)			stageCurtains->setGraphicSize(::Std_obj::_hx_int((stageCurtains->get_width() * ((Float)0.9))),null());
HXLINE(  38)			stageCurtains->updateHitbox();
HXLINE(  39)			this->add(stageCurtains);
            		}
            	}


void TransparentState_obj::eventPushed( ::Dynamic event){
            	HX_GC_STACKFRAME(&_hx_pos_a91d459efd26e63f_44_eventPushed)
HXDLIN(  44)		if (::hx::IsEq( event->__Field(HX_("event",1a,c8,c4,75),::hx::paccDynamic),HX_("Dadbattle Spotlight",b3,45,78,e2) )) {
HXLINE(  47)			this->dadbattleBlack =  ::objects::BGSprite_obj::__alloc( HX_CTX ,null(),-800,-400,0,0,null(),null());
HXLINE(  48)			 ::objects::BGSprite _hx_tmp = this->dadbattleBlack;
HXDLIN(  48)			int _hx_tmp1 = ::Std_obj::_hx_int(( (Float)((::flixel::FlxG_obj::width * 2)) ));
HXDLIN(  48)			_hx_tmp->makeGraphic(_hx_tmp1,::Std_obj::_hx_int(( (Float)((::flixel::FlxG_obj::height * 2)) )),-16777216,null(),null());
HXLINE(  49)			this->dadbattleBlack->set_alpha(((Float)0.25));
HXLINE(  50)			this->dadbattleBlack->set_visible(false);
HXLINE(  51)			this->add(this->dadbattleBlack);
HXLINE(  53)			this->dadbattleLight =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("spotlight",94,02,b5,a6),400,-400,null(),null(),null(),null());
HXLINE(  54)			this->dadbattleLight->set_alpha(((Float)0.375));
HXLINE(  55)			this->dadbattleLight->set_blend(0);
HXLINE(  56)			this->dadbattleLight->set_visible(false);
HXLINE(  57)			this->add(this->dadbattleLight);
            		}
            	}


void TransparentState_obj::eventCalled(::String eventName,::String value1,::String value2, ::Dynamic flValue1, ::Dynamic flValue2,Float strumTime){
            	HX_GC_STACKFRAME(&_hx_pos_a91d459efd26e63f_66_eventCalled)
HXDLIN(  66)		 ::states::stages::TransparentState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  67)		if ((eventName == HX_("Dadbattle Spotlight",b3,45,78,e2))) {
HXLINE(  70)			if (::hx::IsNull( flValue1 )) {
HXLINE(  70)				flValue1 = 0;
            			}
HXLINE(  71)			int val = ::Math_obj::round(( (Float)(flValue1) ));
HXLINE(  73)			switch((int)(val)){
            				case (int)1: case (int)2: case (int)3: {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::stages::TransparentState,_gthis) HXARGC(1)
            					void _hx_run( ::flixel::util::FlxTimer tmr){
            						HX_GC_STACKFRAME(&_hx_pos_a91d459efd26e63f_89_eventCalled)
HXLINE(  89)						_gthis->dadbattleLight->set_alpha(((Float)0.375));
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE(  76)					if ((val == 1)) {
HXLINE(  78)						this->dadbattleBlack->set_visible(true);
HXLINE(  79)						this->dadbattleLight->set_visible(true);
HXLINE(  81)						this->game->__SetField(HX_("defaultCamZoom",01,50,2a,0b),(( (Float)(this->game->__Field(HX_("defaultCamZoom",01,50,2a,0b),::hx::paccDynamic)) ) + ((Float)0.12)),::hx::paccDynamic);
            					}
HXLINE(  84)					 ::objects::Character who = ( ( ::objects::Character)(this->game->__Field(HX_("dad",47,36,4c,00),::hx::paccDynamic)) );
HXLINE(  85)					if ((val > 2)) {
HXLINE(  85)						who = ( ( ::objects::Character)(this->game->__Field(HX_("boyfriend",6a,29,b8,e6),::hx::paccDynamic)) );
            					}
HXLINE(  87)					this->dadbattleLight->set_alpha(( (Float)(0) ));
HXLINE(  88)					 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.12), ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE(  91)					 ::objects::BGSprite _hx_tmp = this->dadbattleLight;
HXDLIN(  91)					Float _hx_tmp1 = who->getGraphicMidpoint(null())->x;
HXDLIN(  91)					Float _hx_tmp2 = (_hx_tmp1 - (this->dadbattleLight->get_width() / ( (Float)(2) )));
HXDLIN(  91)					Float who1 = who->y;
HXDLIN(  91)					Float _hx_tmp3 = (who1 + who->get_height());
HXDLIN(  91)					_hx_tmp->setPosition(_hx_tmp2,((_hx_tmp3 - this->dadbattleLight->get_height()) + 50));
            				}
            				break;
            				default:{
HXLINE(  95)					this->dadbattleBlack->set_visible(false);
HXLINE(  96)					this->dadbattleLight->set_visible(false);
HXLINE(  97)					this->game->__SetField(HX_("defaultCamZoom",01,50,2a,0b),(( (Float)(this->game->__Field(HX_("defaultCamZoom",01,50,2a,0b),::hx::paccDynamic)) ) - ((Float)0.12)),::hx::paccDynamic);
            				}
            			}
            		}
            	}



::hx::ObjectPtr< TransparentState_obj > TransparentState_obj::__new() {
	::hx::ObjectPtr< TransparentState_obj > __this = new TransparentState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TransparentState_obj > TransparentState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TransparentState_obj *__this = (TransparentState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TransparentState_obj), true, "states.stages.TransparentState"));
	*(void **)__this = TransparentState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TransparentState_obj::TransparentState_obj()
{
}

void TransparentState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TransparentState);
	HX_MARK_MEMBER_NAME(dadbattleBlack,"dadbattleBlack");
	HX_MARK_MEMBER_NAME(dadbattleLight,"dadbattleLight");
	 ::backend::BaseStage_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TransparentState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dadbattleBlack,"dadbattleBlack");
	HX_VISIT_MEMBER_NAME(dadbattleLight,"dadbattleLight");
	 ::backend::BaseStage_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TransparentState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"eventPushed") ) { return ::hx::Val( eventPushed_dyn() ); }
		if (HX_FIELD_EQ(inName,"eventCalled") ) { return ::hx::Val( eventCalled_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dadbattleBlack") ) { return ::hx::Val( dadbattleBlack ); }
		if (HX_FIELD_EQ(inName,"dadbattleLight") ) { return ::hx::Val( dadbattleLight ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TransparentState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"dadbattleBlack") ) { dadbattleBlack=inValue.Cast<  ::objects::BGSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dadbattleLight") ) { dadbattleLight=inValue.Cast<  ::objects::BGSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TransparentState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("dadbattleBlack",80,86,3f,0f));
	outFields->push(HX_("dadbattleLight",97,41,4a,cf));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TransparentState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::objects::BGSprite */ ,(int)offsetof(TransparentState_obj,dadbattleBlack),HX_("dadbattleBlack",80,86,3f,0f)},
	{::hx::fsObject /*  ::objects::BGSprite */ ,(int)offsetof(TransparentState_obj,dadbattleLight),HX_("dadbattleLight",97,41,4a,cf)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TransparentState_obj_sStaticStorageInfo = 0;
#endif

static ::String TransparentState_obj_sMemberFields[] = {
	HX_("dadbattleBlack",80,86,3f,0f),
	HX_("dadbattleLight",97,41,4a,cf),
	HX_("create",fc,66,0f,7c),
	HX_("eventPushed",73,60,7a,c5),
	HX_("eventCalled",37,a0,35,0a),
	::String(null()) };

::hx::Class TransparentState_obj::__mClass;

void TransparentState_obj::__register()
{
	TransparentState_obj _hx_dummy;
	TransparentState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.stages.TransparentState",ec,9e,64,ac);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TransparentState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TransparentState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TransparentState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TransparentState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
} // end namespace stages
