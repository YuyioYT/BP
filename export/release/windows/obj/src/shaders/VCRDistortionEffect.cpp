#include <hxcpp.h>

#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
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
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Bool
#include <openfl/display/ShaderParameter_Bool.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif
#ifndef INCLUDED_shaders_VCRDistortionEffect
#include <shaders/VCRDistortionEffect.h>
#endif
#ifndef INCLUDED_shaders_VCRDistortionShader
#include <shaders/VCRDistortionShader.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_738cd521df63558e_1108_new,"shaders.VCRDistortionEffect","new",0xafe61125,"shaders.VCRDistortionEffect.new","shaders/Shaders.hx",1108,0x7800d7f1)
static const Float _hx_array_data_619b9ab3_1[] = {
	(Float)0,
};
static const bool _hx_array_data_619b9ab3_2[] = {
	1,
};
static const bool _hx_array_data_619b9ab3_3[] = {
	1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_738cd521df63558e_1123_update,"shaders.VCRDistortionEffect","update",0x2e924e64,"shaders.VCRDistortionEffect.update","shaders/Shaders.hx",1123,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_738cd521df63558e_1129_setVignette,"shaders.VCRDistortionEffect","setVignette",0xa3781841,"shaders.VCRDistortionEffect.setVignette","shaders/Shaders.hx",1129,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_738cd521df63558e_1133_setPerspective,"shaders.VCRDistortionEffect","setPerspective",0x12153c55,"shaders.VCRDistortionEffect.setPerspective","shaders/Shaders.hx",1133,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_738cd521df63558e_1137_setGlitchModifier,"shaders.VCRDistortionEffect","setGlitchModifier",0x4b1c5f33,"shaders.VCRDistortionEffect.setGlitchModifier","shaders/Shaders.hx",1137,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_738cd521df63558e_1141_setDistortion,"shaders.VCRDistortionEffect","setDistortion",0x7f48fba4,"shaders.VCRDistortionEffect.setDistortion","shaders/Shaders.hx",1141,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_738cd521df63558e_1145_setScanlines,"shaders.VCRDistortionEffect","setScanlines",0x9c9d99fb,"shaders.VCRDistortionEffect.setScanlines","shaders/Shaders.hx",1145,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_738cd521df63558e_1149_setVignetteMoving,"shaders.VCRDistortionEffect","setVignetteMoving",0x20d1a5af,"shaders.VCRDistortionEffect.setVignetteMoving","shaders/Shaders.hx",1149,0x7800d7f1)
namespace shaders{

void VCRDistortionEffect_obj::__construct(Float glitchFactor,::hx::Null< bool >  __o_distortion,::hx::Null< bool >  __o_perspectiveOn,::hx::Null< bool >  __o_vignetteMoving){
            		bool distortion = __o_distortion.Default(true);
            		bool perspectiveOn = __o_perspectiveOn.Default(true);
            		bool vignetteMoving = __o_vignetteMoving.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_738cd521df63558e_1108_new)
HXLINE(1110)		this->shader =  ::shaders::VCRDistortionShader_obj::__alloc( HX_CTX );
HXLINE(1112)		this->shader->iTime->value = ::Array_obj< Float >::fromData( _hx_array_data_619b9ab3_1,1);
HXLINE(1113)		this->shader->vignetteOn->value = ::Array_obj< bool >::fromData( _hx_array_data_619b9ab3_2,1);
HXLINE(1114)		this->shader->perspectiveOn->value = ::Array_obj< bool >::__new(1)->init(0,perspectiveOn);
HXLINE(1115)		this->shader->distortionOn->value = ::Array_obj< bool >::__new(1)->init(0,distortion);
HXLINE(1116)		this->shader->scanlinesOn->value = ::Array_obj< bool >::fromData( _hx_array_data_619b9ab3_3,1);
HXLINE(1117)		this->shader->vignetteMoving->value = ::Array_obj< bool >::__new(1)->init(0,vignetteMoving);
HXLINE(1118)		this->shader->glitchModifier->value = ::Array_obj< Float >::__new(1)->init(0,glitchFactor);
HXLINE(1119)		int _hx_tmp = ::openfl::Lib_obj::get_current()->stage->stageWidth;
HXDLIN(1119)		this->shader->iResolution->value = ::Array_obj< Float >::__new(2)->init(0,_hx_tmp)->init(1,::openfl::Lib_obj::get_current()->stage->stageHeight);
HXLINE(1120)		::states::PlayState_obj::instance->shaderUpdates->push(this->update_dyn());
            	}

Dynamic VCRDistortionEffect_obj::__CreateEmpty() { return new VCRDistortionEffect_obj; }

void *VCRDistortionEffect_obj::_hx_vtable = 0;

Dynamic VCRDistortionEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VCRDistortionEffect_obj > _hx_result = new VCRDistortionEffect_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool VCRDistortionEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x16fc6b31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x16fc6b31;
	} else {
		return inClassId==(int)0x1e2e565f;
	}
}

void VCRDistortionEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_738cd521df63558e_1123_update)
HXLINE(1124)		::Array< Float > base = this->shader->iTime->value;
HXDLIN(1124)		int _hx_tmp = 0;
HXDLIN(1124)		base[_hx_tmp] = (base->__get(_hx_tmp) + elapsed);
HXLINE(1125)		int _hx_tmp1 = ::openfl::Lib_obj::get_current()->stage->stageWidth;
HXDLIN(1125)		this->shader->iResolution->value = ::Array_obj< Float >::__new(2)->init(0,_hx_tmp1)->init(1,::openfl::Lib_obj::get_current()->stage->stageHeight);
            	}


void VCRDistortionEffect_obj::setVignette(bool state){
            	HX_STACKFRAME(&_hx_pos_738cd521df63558e_1129_setVignette)
HXDLIN(1129)		this->shader->vignetteOn->value[0] = state;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VCRDistortionEffect_obj,setVignette,(void))

void VCRDistortionEffect_obj::setPerspective(bool state){
            	HX_STACKFRAME(&_hx_pos_738cd521df63558e_1133_setPerspective)
HXDLIN(1133)		this->shader->perspectiveOn->value[0] = state;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VCRDistortionEffect_obj,setPerspective,(void))

void VCRDistortionEffect_obj::setGlitchModifier(Float modifier){
            	HX_STACKFRAME(&_hx_pos_738cd521df63558e_1137_setGlitchModifier)
HXDLIN(1137)		this->shader->glitchModifier->value[0] = modifier;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VCRDistortionEffect_obj,setGlitchModifier,(void))

void VCRDistortionEffect_obj::setDistortion(bool state){
            	HX_STACKFRAME(&_hx_pos_738cd521df63558e_1141_setDistortion)
HXDLIN(1141)		this->shader->distortionOn->value[0] = state;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VCRDistortionEffect_obj,setDistortion,(void))

void VCRDistortionEffect_obj::setScanlines(bool state){
            	HX_STACKFRAME(&_hx_pos_738cd521df63558e_1145_setScanlines)
HXDLIN(1145)		this->shader->scanlinesOn->value[0] = state;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VCRDistortionEffect_obj,setScanlines,(void))

void VCRDistortionEffect_obj::setVignetteMoving(bool state){
            	HX_STACKFRAME(&_hx_pos_738cd521df63558e_1149_setVignetteMoving)
HXDLIN(1149)		this->shader->vignetteMoving->value[0] = state;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VCRDistortionEffect_obj,setVignetteMoving,(void))


::hx::ObjectPtr< VCRDistortionEffect_obj > VCRDistortionEffect_obj::__new(Float glitchFactor,::hx::Null< bool >  __o_distortion,::hx::Null< bool >  __o_perspectiveOn,::hx::Null< bool >  __o_vignetteMoving) {
	::hx::ObjectPtr< VCRDistortionEffect_obj > __this = new VCRDistortionEffect_obj();
	__this->__construct(glitchFactor,__o_distortion,__o_perspectiveOn,__o_vignetteMoving);
	return __this;
}

::hx::ObjectPtr< VCRDistortionEffect_obj > VCRDistortionEffect_obj::__alloc(::hx::Ctx *_hx_ctx,Float glitchFactor,::hx::Null< bool >  __o_distortion,::hx::Null< bool >  __o_perspectiveOn,::hx::Null< bool >  __o_vignetteMoving) {
	VCRDistortionEffect_obj *__this = (VCRDistortionEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VCRDistortionEffect_obj), true, "shaders.VCRDistortionEffect"));
	*(void **)__this = VCRDistortionEffect_obj::_hx_vtable;
	__this->__construct(glitchFactor,__o_distortion,__o_perspectiveOn,__o_vignetteMoving);
	return __this;
}

VCRDistortionEffect_obj::VCRDistortionEffect_obj()
{
}

void VCRDistortionEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VCRDistortionEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_END_CLASS();
}

void VCRDistortionEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
}

::hx::Val VCRDistortionEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setVignette") ) { return ::hx::Val( setVignette_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setScanlines") ) { return ::hx::Val( setScanlines_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setDistortion") ) { return ::hx::Val( setDistortion_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setPerspective") ) { return ::hx::Val( setPerspective_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setGlitchModifier") ) { return ::hx::Val( setGlitchModifier_dyn() ); }
		if (HX_FIELD_EQ(inName,"setVignetteMoving") ) { return ::hx::Val( setVignetteMoving_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VCRDistortionEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::VCRDistortionShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VCRDistortionEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VCRDistortionEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::VCRDistortionShader */ ,(int)offsetof(VCRDistortionEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VCRDistortionEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String VCRDistortionEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("update",09,86,05,87),
	HX_("setVignette",7c,0a,e0,63),
	HX_("setPerspective",fa,20,b0,68),
	HX_("setGlitchModifier",ae,2f,78,b2),
	HX_("setDistortion",9f,32,3e,1f),
	HX_("setScanlines",60,9b,29,37),
	HX_("setVignetteMoving",2a,76,2d,88),
	::String(null()) };

::hx::Class VCRDistortionEffect_obj::__mClass;

void VCRDistortionEffect_obj::__register()
{
	VCRDistortionEffect_obj _hx_dummy;
	VCRDistortionEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.VCRDistortionEffect",b3,9a,9b,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VCRDistortionEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VCRDistortionEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VCRDistortionEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VCRDistortionEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
