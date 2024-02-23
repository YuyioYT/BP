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
#ifndef INCLUDED_shaders_RainEffect
#include <shaders/RainEffect.h>
#endif
#ifndef INCLUDED_shaders_RainShader
#include <shaders/RainShader.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2162f18c63617506_1886_new,"shaders.RainEffect","new",0x254eb157,"shaders.RainEffect.new","shaders/Shaders.hx",1886,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_2162f18c63617506_1899_update,"shaders.RainEffect","update",0xed5a5972,"shaders.RainEffect.update","shaders/Shaders.hx",1899,0x7800d7f1)
namespace shaders{

void RainEffect_obj::__construct(Float iTime){
            	HX_GC_STACKFRAME(&_hx_pos_2162f18c63617506_1886_new)
HXLINE(1889)		this->iTime = ((Float)0.0);
HXLINE(1893)		this->shader =  ::shaders::RainShader_obj::__alloc( HX_CTX );
HXLINE(1894)		this->shader->iTime->value = ::Array_obj< Float >::__new(1)->init(0,iTime);
HXLINE(1895)		::states::PlayState_obj::instance->shaderUpdates->push(this->update_dyn());
            	}

Dynamic RainEffect_obj::__CreateEmpty() { return new RainEffect_obj; }

void *RainEffect_obj::_hx_vtable = 0;

Dynamic RainEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RainEffect_obj > _hx_result = new RainEffect_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RainEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e2e565f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
	} else {
		return inClassId==(int)0x4f9de40b;
	}
}

void RainEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_2162f18c63617506_1899_update)
HXLINE(1900)		 ::shaders::RainEffect _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(1900)		_hx_tmp->iTime = (_hx_tmp->iTime + elapsed);
HXLINE(1901)		this->shader->iTime->value = ::Array_obj< Float >::__new(1)->init(0,this->iTime);
            	}



::hx::ObjectPtr< RainEffect_obj > RainEffect_obj::__new(Float iTime) {
	::hx::ObjectPtr< RainEffect_obj > __this = new RainEffect_obj();
	__this->__construct(iTime);
	return __this;
}

::hx::ObjectPtr< RainEffect_obj > RainEffect_obj::__alloc(::hx::Ctx *_hx_ctx,Float iTime) {
	RainEffect_obj *__this = (RainEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RainEffect_obj), true, "shaders.RainEffect"));
	*(void **)__this = RainEffect_obj::_hx_vtable;
	__this->__construct(iTime);
	return __this;
}

RainEffect_obj::RainEffect_obj()
{
}

void RainEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RainEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(iTime,"iTime");
	HX_MARK_END_CLASS();
}

void RainEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(iTime,"iTime");
}

::hx::Val RainEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

::hx::Val RainEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"iTime") ) { iTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::RainShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RainEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("iTime",16,e1,e8,ac));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RainEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::RainShader */ ,(int)offsetof(RainEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(RainEffect_obj,iTime),HX_("iTime",16,e1,e8,ac)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RainEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String RainEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("iTime",16,e1,e8,ac),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class RainEffect_obj::__mClass;

void RainEffect_obj::__register()
{
	RainEffect_obj _hx_dummy;
	RainEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.RainEffect",e5,b9,ff,1e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RainEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RainEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RainEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RainEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
