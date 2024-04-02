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
#ifndef INCLUDED_shaders_HeatEffect
#include <shaders/HeatEffect.h>
#endif
#ifndef INCLUDED_shaders_HeatShader
#include <shaders/HeatShader.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e0d88bd3a29c87ad_2230_new,"shaders.HeatEffect","new",0x98c67c33,"shaders.HeatEffect.new","shaders/Shaders.hx",2230,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e0d88bd3a29c87ad_2244_update,"shaders.HeatEffect","update",0xd4c7c016,"shaders.HeatEffect.update","shaders/Shaders.hx",2244,0x7800d7f1)
namespace shaders{

void HeatEffect_obj::__construct(Float strength){
            	HX_GC_STACKFRAME(&_hx_pos_e0d88bd3a29c87ad_2230_new)
HXLINE(2233)		this->iTime = ((Float)0.0);
HXLINE(2237)		this->shader =  ::shaders::HeatShader_obj::__alloc( HX_CTX );
HXLINE(2239)		this->shader->strength->value = ::Array_obj< Float >::__new(1)->init(0,strength);
HXLINE(2240)		::states::PlayState_obj::instance->shaderUpdates->push(this->update_dyn());
            	}

Dynamic HeatEffect_obj::__CreateEmpty() { return new HeatEffect_obj; }

void *HeatEffect_obj::_hx_vtable = 0;

Dynamic HeatEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HeatEffect_obj > _hx_result = new HeatEffect_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool HeatEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e2e565f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
	} else {
		return inClassId==(int)0x486810e7;
	}
}

void HeatEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_e0d88bd3a29c87ad_2244_update)
HXLINE(2245)		 ::shaders::HeatEffect _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(2245)		_hx_tmp->iTime = (_hx_tmp->iTime + elapsed);
HXLINE(2246)		this->shader->iTime->value = ::Array_obj< Float >::__new(1)->init(0,this->iTime);
            	}



::hx::ObjectPtr< HeatEffect_obj > HeatEffect_obj::__new(Float strength) {
	::hx::ObjectPtr< HeatEffect_obj > __this = new HeatEffect_obj();
	__this->__construct(strength);
	return __this;
}

::hx::ObjectPtr< HeatEffect_obj > HeatEffect_obj::__alloc(::hx::Ctx *_hx_ctx,Float strength) {
	HeatEffect_obj *__this = (HeatEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HeatEffect_obj), true, "shaders.HeatEffect"));
	*(void **)__this = HeatEffect_obj::_hx_vtable;
	__this->__construct(strength);
	return __this;
}

HeatEffect_obj::HeatEffect_obj()
{
}

void HeatEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HeatEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(iTime,"iTime");
	HX_MARK_END_CLASS();
}

void HeatEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(iTime,"iTime");
}

::hx::Val HeatEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"iTime") ) { return ::hx::Val( iTime ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HeatEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"iTime") ) { iTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::HeatShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HeatEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("iTime",16,e1,e8,ac));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HeatEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::HeatShader */ ,(int)offsetof(HeatEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(HeatEffect_obj,iTime),HX_("iTime",16,e1,e8,ac)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HeatEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String HeatEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("iTime",16,e1,e8,ac),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class HeatEffect_obj::__mClass;

void HeatEffect_obj::__register()
{
	HeatEffect_obj _hx_dummy;
	HeatEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.HeatEffect",c1,e6,c9,17);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HeatEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HeatEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HeatEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HeatEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
