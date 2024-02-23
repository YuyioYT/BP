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
#ifndef INCLUDED_shaders_DistortBGEffect
#include <shaders/DistortBGEffect.h>
#endif
#ifndef INCLUDED_shaders_DistortBGShader
#include <shaders/DistortBGShader.h>
#endif
#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fcf60bc2f02d5147_1591_new,"shaders.DistortBGEffect","new",0x2cfdf613,"shaders.DistortBGEffect.new","shaders/Shaders.hx",1591,0x7800d7f1)
static const Float _hx_array_data_7486f0a1_1[] = {
	(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_fcf60bc2f02d5147_1609_update,"shaders.DistortBGEffect","update",0x0bd1b236,"shaders.DistortBGEffect.update","shaders/Shaders.hx",1609,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fcf60bc2f02d5147_1615_set_waveSpeed,"shaders.DistortBGEffect","set_waveSpeed",0x08755c64,"shaders.DistortBGEffect.set_waveSpeed","shaders/Shaders.hx",1615,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fcf60bc2f02d5147_1622_set_waveFrequency,"shaders.DistortBGEffect","set_waveFrequency",0xedb679f9,"shaders.DistortBGEffect.set_waveFrequency","shaders/Shaders.hx",1622,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fcf60bc2f02d5147_1629_set_waveAmplitude,"shaders.DistortBGEffect","set_waveAmplitude",0x9bc70ca0,"shaders.DistortBGEffect.set_waveAmplitude","shaders/Shaders.hx",1629,0x7800d7f1)
namespace shaders{

void DistortBGEffect_obj::__construct(Float waveSpeed,Float waveFrequency,Float waveAmplitude){
            	HX_GC_STACKFRAME(&_hx_pos_fcf60bc2f02d5147_1591_new)
HXLINE(1597)		this->waveAmplitude = ((Float)0);
HXLINE(1596)		this->waveFrequency = ((Float)0);
HXLINE(1595)		this->waveSpeed = ((Float)0);
HXLINE(1593)		this->shader =  ::shaders::DistortBGShader_obj::__alloc( HX_CTX );
HXLINE(1601)		this->set_waveSpeed(waveSpeed);
HXLINE(1602)		this->set_waveFrequency(waveFrequency);
HXLINE(1603)		this->set_waveAmplitude(waveAmplitude);
HXLINE(1604)		this->shader->uTime->value = ::Array_obj< Float >::fromData( _hx_array_data_7486f0a1_1,1);
HXLINE(1605)		::states::PlayState_obj::instance->shaderUpdates->push(this->update_dyn());
            	}

Dynamic DistortBGEffect_obj::__CreateEmpty() { return new DistortBGEffect_obj; }

void *DistortBGEffect_obj::_hx_vtable = 0;

Dynamic DistortBGEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DistortBGEffect_obj > _hx_result = new DistortBGEffect_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool DistortBGEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e2e565f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
	} else {
		return inClassId==(int)0x1fec61f3;
	}
}

void DistortBGEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_fcf60bc2f02d5147_1609_update)
HXLINE(1610)		::Array< Float > base = this->shader->uTime->value;
HXDLIN(1610)		int _hx_tmp = 0;
HXDLIN(1610)		base[_hx_tmp] = (base->__get(_hx_tmp) + elapsed);
            	}


Float DistortBGEffect_obj::set_waveSpeed(Float v){
            	HX_STACKFRAME(&_hx_pos_fcf60bc2f02d5147_1615_set_waveSpeed)
HXLINE(1616)		this->waveSpeed = v;
HXLINE(1617)		this->shader->uSpeed->value = ::Array_obj< Float >::__new(1)->init(0,this->waveSpeed);
HXLINE(1618)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DistortBGEffect_obj,set_waveSpeed,return )

Float DistortBGEffect_obj::set_waveFrequency(Float v){
            	HX_STACKFRAME(&_hx_pos_fcf60bc2f02d5147_1622_set_waveFrequency)
HXLINE(1623)		this->waveFrequency = v;
HXLINE(1624)		this->shader->uFrequency->value = ::Array_obj< Float >::__new(1)->init(0,this->waveFrequency);
HXLINE(1625)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DistortBGEffect_obj,set_waveFrequency,return )

Float DistortBGEffect_obj::set_waveAmplitude(Float v){
            	HX_STACKFRAME(&_hx_pos_fcf60bc2f02d5147_1629_set_waveAmplitude)
HXLINE(1630)		this->waveAmplitude = v;
HXLINE(1631)		this->shader->uWaveAmplitude->value = ::Array_obj< Float >::__new(1)->init(0,this->waveAmplitude);
HXLINE(1632)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DistortBGEffect_obj,set_waveAmplitude,return )


::hx::ObjectPtr< DistortBGEffect_obj > DistortBGEffect_obj::__new(Float waveSpeed,Float waveFrequency,Float waveAmplitude) {
	::hx::ObjectPtr< DistortBGEffect_obj > __this = new DistortBGEffect_obj();
	__this->__construct(waveSpeed,waveFrequency,waveAmplitude);
	return __this;
}

::hx::ObjectPtr< DistortBGEffect_obj > DistortBGEffect_obj::__alloc(::hx::Ctx *_hx_ctx,Float waveSpeed,Float waveFrequency,Float waveAmplitude) {
	DistortBGEffect_obj *__this = (DistortBGEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DistortBGEffect_obj), true, "shaders.DistortBGEffect"));
	*(void **)__this = DistortBGEffect_obj::_hx_vtable;
	__this->__construct(waveSpeed,waveFrequency,waveAmplitude);
	return __this;
}

DistortBGEffect_obj::DistortBGEffect_obj()
{
}

void DistortBGEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DistortBGEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(waveSpeed,"waveSpeed");
	HX_MARK_MEMBER_NAME(waveFrequency,"waveFrequency");
	HX_MARK_MEMBER_NAME(waveAmplitude,"waveAmplitude");
	HX_MARK_END_CLASS();
}

void DistortBGEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(waveSpeed,"waveSpeed");
	HX_VISIT_MEMBER_NAME(waveFrequency,"waveFrequency");
	HX_VISIT_MEMBER_NAME(waveAmplitude,"waveAmplitude");
}

::hx::Val DistortBGEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"waveSpeed") ) { return ::hx::Val( waveSpeed ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"waveFrequency") ) { return ::hx::Val( waveFrequency ); }
		if (HX_FIELD_EQ(inName,"waveAmplitude") ) { return ::hx::Val( waveAmplitude ); }
		if (HX_FIELD_EQ(inName,"set_waveSpeed") ) { return ::hx::Val( set_waveSpeed_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_waveFrequency") ) { return ::hx::Val( set_waveFrequency_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_waveAmplitude") ) { return ::hx::Val( set_waveAmplitude_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DistortBGEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::DistortBGShader >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"waveSpeed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_waveSpeed(inValue.Cast< Float >()) );waveSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"waveFrequency") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_waveFrequency(inValue.Cast< Float >()) );waveFrequency=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"waveAmplitude") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_waveAmplitude(inValue.Cast< Float >()) );waveAmplitude=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DistortBGEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("waveSpeed",0e,43,dc,5b));
	outFields->push(HX_("waveFrequency",a3,fd,a6,f7));
	outFields->push(HX_("waveAmplitude",4a,90,b7,a5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DistortBGEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::DistortBGShader */ ,(int)offsetof(DistortBGEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(DistortBGEffect_obj,waveSpeed),HX_("waveSpeed",0e,43,dc,5b)},
	{::hx::fsFloat,(int)offsetof(DistortBGEffect_obj,waveFrequency),HX_("waveFrequency",a3,fd,a6,f7)},
	{::hx::fsFloat,(int)offsetof(DistortBGEffect_obj,waveAmplitude),HX_("waveAmplitude",4a,90,b7,a5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DistortBGEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String DistortBGEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("waveSpeed",0e,43,dc,5b),
	HX_("waveFrequency",a3,fd,a6,f7),
	HX_("waveAmplitude",4a,90,b7,a5),
	HX_("update",09,86,05,87),
	HX_("set_waveSpeed",f1,f8,45,62),
	HX_("set_waveFrequency",06,e1,84,21),
	HX_("set_waveAmplitude",ad,73,95,cf),
	::String(null()) };

::hx::Class DistortBGEffect_obj::__mClass;

void DistortBGEffect_obj::__register()
{
	DistortBGEffect_obj _hx_dummy;
	DistortBGEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.DistortBGEffect",a1,f0,86,74);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DistortBGEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DistortBGEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DistortBGEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DistortBGEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
