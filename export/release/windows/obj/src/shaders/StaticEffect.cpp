#include <hxcpp.h>

#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif
#ifndef INCLUDED_shaders_StaticEffect
#include <shaders/StaticEffect.h>
#endif
#ifndef INCLUDED_shaders_StaticShader
#include <shaders/StaticShader.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_071ce3ef8ccd3a8e_449_new,"shaders.StaticEffect","new",0x00c23131,"shaders.StaticEffect.new","shaders/Shaders.hx",449,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_071ce3ef8ccd3a8e_460_update,"shaders.StaticEffect","update",0xfdf8bdd8,"shaders.StaticEffect.update","shaders/Shaders.hx",460,0x7800d7f1)
namespace shaders{

void StaticEffect_obj::__construct(Float strength){
            	HX_GC_STACKFRAME(&_hx_pos_071ce3ef8ccd3a8e_449_new)
HXLINE( 451)		this->shader =  ::shaders::StaticShader_obj::__alloc( HX_CTX );
HXLINE( 455)		this->shader->strength->value = ::Array_obj< Float >::__new(1)->init(0,strength);
HXLINE( 456)		Float _hx_tmp = ::flixel::FlxG_obj::random->_hx_float(0,8,null());
HXDLIN( 456)		this->shader->iTime->value = ::Array_obj< Float >::__new(1)->init(0,_hx_tmp);
HXLINE( 457)		::states::PlayState_obj::instance->shaderUpdates->push(this->update_dyn());
            	}

Dynamic StaticEffect_obj::__CreateEmpty() { return new StaticEffect_obj; }

void *StaticEffect_obj::_hx_vtable = 0;

Dynamic StaticEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StaticEffect_obj > _hx_result = new StaticEffect_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool StaticEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x01d62c2d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x01d62c2d;
	} else {
		return inClassId==(int)0x1e2e565f;
	}
}

void StaticEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_071ce3ef8ccd3a8e_460_update)
HXLINE( 461)		::Array< Float > base = this->shader->iTime->value;
HXDLIN( 461)		int _hx_tmp = 0;
HXDLIN( 461)		base[_hx_tmp] = (base->__get(_hx_tmp) + elapsed);
            	}



::hx::ObjectPtr< StaticEffect_obj > StaticEffect_obj::__new(Float strength) {
	::hx::ObjectPtr< StaticEffect_obj > __this = new StaticEffect_obj();
	__this->__construct(strength);
	return __this;
}

::hx::ObjectPtr< StaticEffect_obj > StaticEffect_obj::__alloc(::hx::Ctx *_hx_ctx,Float strength) {
	StaticEffect_obj *__this = (StaticEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StaticEffect_obj), true, "shaders.StaticEffect"));
	*(void **)__this = StaticEffect_obj::_hx_vtable;
	__this->__construct(strength);
	return __this;
}

StaticEffect_obj::StaticEffect_obj()
{
}

void StaticEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StaticEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_END_CLASS();
}

void StaticEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
}

::hx::Val StaticEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StaticEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::StaticShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StaticEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StaticEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::StaticShader */ ,(int)offsetof(StaticEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StaticEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String StaticEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class StaticEffect_obj::__mClass;

void StaticEffect_obj::__register()
{
	StaticEffect_obj _hx_dummy;
	StaticEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.StaticEffect",bf,c4,4b,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StaticEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StaticEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StaticEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StaticEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
