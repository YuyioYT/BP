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
#ifndef INCLUDED_shaders_MirrorRepeatEffect
#include <shaders/MirrorRepeatEffect.h>
#endif
#ifndef INCLUDED_shaders_MirrorRepeatShader
#include <shaders/MirrorRepeatShader.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_210832529457f9ca_2270_new,"shaders.MirrorRepeatEffect","new",0xcab94a7d,"shaders.MirrorRepeatEffect.new","shaders/Shaders.hx",2270,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_210832529457f9ca_2291_update,"shaders.MirrorRepeatEffect","update",0x40f37c0c,"shaders.MirrorRepeatEffect.update","shaders/Shaders.hx",2291,0x7800d7f1)
namespace shaders{

void MirrorRepeatEffect_obj::__construct(Float zoom,Float angle,Float iTime,Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_210832529457f9ca_2270_new)
HXLINE(2274)		this->iTime = ((Float)0.0);
HXLINE(2281)		this->shader =  ::shaders::MirrorRepeatShader_obj::__alloc( HX_CTX );
HXLINE(2282)		this->shader->zoom->value = ::Array_obj< Float >::__new(1)->init(0,zoom);
HXLINE(2283)		this->shader->angle->value = ::Array_obj< Float >::__new(1)->init(0,angle);
HXLINE(2284)		this->shader->iTime->value = ::Array_obj< Float >::__new(1)->init(0,iTime);
HXLINE(2285)		this->shader->x->value = ::Array_obj< Float >::__new(1)->init(0,x);
HXLINE(2286)		this->shader->y->value = ::Array_obj< Float >::__new(1)->init(0,y);
HXLINE(2287)		::states::PlayState_obj::instance->shaderUpdates->push(this->update_dyn());
            	}

Dynamic MirrorRepeatEffect_obj::__CreateEmpty() { return new MirrorRepeatEffect_obj; }

void *MirrorRepeatEffect_obj::_hx_vtable = 0;

Dynamic MirrorRepeatEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MirrorRepeatEffect_obj > _hx_result = new MirrorRepeatEffect_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool MirrorRepeatEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e2e565f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
	} else {
		return inClassId==(int)0x295bf5f9;
	}
}

void MirrorRepeatEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_210832529457f9ca_2291_update)
HXLINE(2294)		 ::shaders::MirrorRepeatEffect _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(2294)		_hx_tmp->iTime = (_hx_tmp->iTime + elapsed);
HXLINE(2295)		this->shader->iTime->value = ::Array_obj< Float >::__new(1)->init(0,this->iTime);
            	}



::hx::ObjectPtr< MirrorRepeatEffect_obj > MirrorRepeatEffect_obj::__new(Float zoom,Float angle,Float iTime,Float x,Float y) {
	::hx::ObjectPtr< MirrorRepeatEffect_obj > __this = new MirrorRepeatEffect_obj();
	__this->__construct(zoom,angle,iTime,x,y);
	return __this;
}

::hx::ObjectPtr< MirrorRepeatEffect_obj > MirrorRepeatEffect_obj::__alloc(::hx::Ctx *_hx_ctx,Float zoom,Float angle,Float iTime,Float x,Float y) {
	MirrorRepeatEffect_obj *__this = (MirrorRepeatEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MirrorRepeatEffect_obj), true, "shaders.MirrorRepeatEffect"));
	*(void **)__this = MirrorRepeatEffect_obj::_hx_vtable;
	__this->__construct(zoom,angle,iTime,x,y);
	return __this;
}

MirrorRepeatEffect_obj::MirrorRepeatEffect_obj()
{
}

void MirrorRepeatEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MirrorRepeatEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(iTime,"iTime");
	HX_MARK_END_CLASS();
}

void MirrorRepeatEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(iTime,"iTime");
}

::hx::Val MirrorRepeatEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

::hx::Val MirrorRepeatEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"iTime") ) { iTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::MirrorRepeatShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MirrorRepeatEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("iTime",16,e1,e8,ac));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MirrorRepeatEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::MirrorRepeatShader */ ,(int)offsetof(MirrorRepeatEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(MirrorRepeatEffect_obj,iTime),HX_("iTime",16,e1,e8,ac)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MirrorRepeatEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String MirrorRepeatEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("iTime",16,e1,e8,ac),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class MirrorRepeatEffect_obj::__mClass;

void MirrorRepeatEffect_obj::__register()
{
	MirrorRepeatEffect_obj _hx_dummy;
	MirrorRepeatEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.MirrorRepeatEffect",0b,48,51,80);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MirrorRepeatEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MirrorRepeatEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MirrorRepeatEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MirrorRepeatEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
