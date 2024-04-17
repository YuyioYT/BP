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
#ifndef INCLUDED_openfl_display_ShaderParameter_Bool
#include <openfl/display/ShaderParameter_Bool.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif
#ifndef INCLUDED_shaders_EyesoresEffect
#include <shaders/EyesoresEffect.h>
#endif
#ifndef INCLUDED_shaders_EyesoresShader
#include <shaders/EyesoresShader.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d09065d5d6f86d63_1618_new,"shaders.EyesoresEffect","new",0x9f54dbf6,"shaders.EyesoresEffect.new","shaders/Shaders.hx",1618,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_d09065d5d6f86d63_1641_update,"shaders.EyesoresEffect","update",0x27235c33,"shaders.EyesoresEffect.update","shaders/Shaders.hx",1641,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_d09065d5d6f86d63_1646_set_ampmul,"shaders.EyesoresEffect","set_ampmul",0x2b407de7,"shaders.EyesoresEffect.set_ampmul","shaders/Shaders.hx",1646,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_d09065d5d6f86d63_1653_set_waveSpeed,"shaders.EyesoresEffect","set_waveSpeed",0x3d759c07,"shaders.EyesoresEffect.set_waveSpeed","shaders/Shaders.hx",1653,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_d09065d5d6f86d63_1659_set_time,"shaders.EyesoresEffect","set_time",0xbef415b4,"shaders.EyesoresEffect.set_time","shaders/Shaders.hx",1659,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_d09065d5d6f86d63_1666_set_enabled,"shaders.EyesoresEffect","set_enabled",0x0f8ffd3a,"shaders.EyesoresEffect.set_enabled","shaders/Shaders.hx",1666,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_d09065d5d6f86d63_1673_set_waveFrequency,"shaders.EyesoresEffect","set_waveFrequency",0xbb92c71c,"shaders.EyesoresEffect.set_waveFrequency","shaders/Shaders.hx",1673,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_d09065d5d6f86d63_1680_set_waveAmplitude,"shaders.EyesoresEffect","set_waveAmplitude",0x69a359c3,"shaders.EyesoresEffect.set_waveAmplitude","shaders/Shaders.hx",1680,0x7800d7f1)
namespace shaders{

void EyesoresEffect_obj::__construct(Float waveSpeed,Float waveFrequency,Float waveAmplitude,Float time,Float ampmul,bool enabled){
            	HX_GC_STACKFRAME(&_hx_pos_d09065d5d6f86d63_1618_new)
HXLINE(1627)		this->enabled = false;
HXLINE(1626)		this->ampmul = ((Float)0);
HXLINE(1625)		this->time = ((Float)0);
HXLINE(1624)		this->waveAmplitude = ((Float)0);
HXLINE(1623)		this->waveFrequency = ((Float)0);
HXLINE(1622)		this->waveSpeed = ((Float)0);
HXLINE(1620)		this->shader =  ::shaders::EyesoresShader_obj::__alloc( HX_CTX );
HXLINE(1631)		::states::PlayState_obj::instance->shaderUpdates->push(this->update_dyn());
HXLINE(1632)		this->set_waveSpeed(waveSpeed);
HXLINE(1633)		this->set_waveFrequency(waveFrequency);
HXLINE(1634)		this->set_waveAmplitude(waveAmplitude);
HXLINE(1635)		this->set_time(time);
HXLINE(1636)		this->set_ampmul(ampmul);
HXLINE(1637)		this->set_enabled(enabled);
            	}

Dynamic EyesoresEffect_obj::__CreateEmpty() { return new EyesoresEffect_obj; }

void *EyesoresEffect_obj::_hx_vtable = 0;

Dynamic EyesoresEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EyesoresEffect_obj > _hx_result = new EyesoresEffect_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool EyesoresEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e2e565f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
	} else {
		return inClassId==(int)0x6a4b9e2a;
	}
}

void EyesoresEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_d09065d5d6f86d63_1641_update)
HXLINE(1642)		::Array< Float > base = this->shader->uTime->value;
HXDLIN(1642)		int _hx_tmp = 0;
HXDLIN(1642)		base[_hx_tmp] = (base->__get(_hx_tmp) + elapsed);
            	}


Float EyesoresEffect_obj::set_ampmul(Float v){
            	HX_STACKFRAME(&_hx_pos_d09065d5d6f86d63_1646_set_ampmul)
HXLINE(1647)		this->ampmul = v;
HXLINE(1648)		this->shader->uampmul->value = ::Array_obj< Float >::__new(1)->init(0,this->ampmul);
HXLINE(1649)		return this->ampmul;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EyesoresEffect_obj,set_ampmul,return )

Float EyesoresEffect_obj::set_waveSpeed(Float v){
            	HX_STACKFRAME(&_hx_pos_d09065d5d6f86d63_1653_set_waveSpeed)
HXLINE(1654)		this->waveSpeed = v;
HXLINE(1655)		this->shader->uSpeed->value = ::Array_obj< Float >::__new(1)->init(0,this->waveSpeed);
HXLINE(1656)		return this->waveSpeed;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EyesoresEffect_obj,set_waveSpeed,return )

Float EyesoresEffect_obj::set_time(Float v){
            	HX_STACKFRAME(&_hx_pos_d09065d5d6f86d63_1659_set_time)
HXLINE(1660)		this->time = v;
HXLINE(1661)		this->shader->uTime->value = ::Array_obj< Float >::__new(1)->init(0,v);
HXLINE(1662)		return this->time;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EyesoresEffect_obj,set_time,return )

bool EyesoresEffect_obj::set_enabled(bool v){
            	HX_STACKFRAME(&_hx_pos_d09065d5d6f86d63_1666_set_enabled)
HXLINE(1667)		this->enabled = v;
HXLINE(1668)		this->shader->uEnabled->value = ::Array_obj< bool >::__new(1)->init(0,this->enabled);
HXLINE(1669)		return this->enabled;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EyesoresEffect_obj,set_enabled,return )

Float EyesoresEffect_obj::set_waveFrequency(Float v){
            	HX_STACKFRAME(&_hx_pos_d09065d5d6f86d63_1673_set_waveFrequency)
HXLINE(1674)		this->waveFrequency = v;
HXLINE(1675)		this->shader->uFrequency->value = ::Array_obj< Float >::__new(1)->init(0,this->waveFrequency);
HXLINE(1676)		return this->waveFrequency;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EyesoresEffect_obj,set_waveFrequency,return )

Float EyesoresEffect_obj::set_waveAmplitude(Float v){
            	HX_STACKFRAME(&_hx_pos_d09065d5d6f86d63_1680_set_waveAmplitude)
HXLINE(1681)		this->waveAmplitude = v;
HXLINE(1682)		this->shader->uWaveAmplitude->value = ::Array_obj< Float >::__new(1)->init(0,this->waveAmplitude);
HXLINE(1683)		return this->waveAmplitude;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EyesoresEffect_obj,set_waveAmplitude,return )


::hx::ObjectPtr< EyesoresEffect_obj > EyesoresEffect_obj::__new(Float waveSpeed,Float waveFrequency,Float waveAmplitude,Float time,Float ampmul,bool enabled) {
	::hx::ObjectPtr< EyesoresEffect_obj > __this = new EyesoresEffect_obj();
	__this->__construct(waveSpeed,waveFrequency,waveAmplitude,time,ampmul,enabled);
	return __this;
}

::hx::ObjectPtr< EyesoresEffect_obj > EyesoresEffect_obj::__alloc(::hx::Ctx *_hx_ctx,Float waveSpeed,Float waveFrequency,Float waveAmplitude,Float time,Float ampmul,bool enabled) {
	EyesoresEffect_obj *__this = (EyesoresEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EyesoresEffect_obj), true, "shaders.EyesoresEffect"));
	*(void **)__this = EyesoresEffect_obj::_hx_vtable;
	__this->__construct(waveSpeed,waveFrequency,waveAmplitude,time,ampmul,enabled);
	return __this;
}

EyesoresEffect_obj::EyesoresEffect_obj()
{
}

void EyesoresEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EyesoresEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(waveSpeed,"waveSpeed");
	HX_MARK_MEMBER_NAME(waveFrequency,"waveFrequency");
	HX_MARK_MEMBER_NAME(waveAmplitude,"waveAmplitude");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(ampmul,"ampmul");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_END_CLASS();
}

void EyesoresEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(waveSpeed,"waveSpeed");
	HX_VISIT_MEMBER_NAME(waveFrequency,"waveFrequency");
	HX_VISIT_MEMBER_NAME(waveAmplitude,"waveAmplitude");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(ampmul,"ampmul");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
}

::hx::Val EyesoresEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return ::hx::Val( time ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"ampmul") ) { return ::hx::Val( ampmul ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return ::hx::Val( enabled ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_time") ) { return ::hx::Val( set_time_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"waveSpeed") ) { return ::hx::Val( waveSpeed ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_ampmul") ) { return ::hx::Val( set_ampmul_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_enabled") ) { return ::hx::Val( set_enabled_dyn() ); }
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

::hx::Val EyesoresEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_time(inValue.Cast< Float >()) );time=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::EyesoresShader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ampmul") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_ampmul(inValue.Cast< Float >()) );ampmul=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_enabled(inValue.Cast< bool >()) );enabled=inValue.Cast< bool >(); return inValue; }
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

void EyesoresEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("waveSpeed",0e,43,dc,5b));
	outFields->push(HX_("waveFrequency",a3,fd,a6,f7));
	outFields->push(HX_("waveAmplitude",4a,90,b7,a5));
	outFields->push(HX_("time",0d,cc,fc,4c));
	outFields->push(HX_("ampmul",80,3c,a6,d5));
	outFields->push(HX_("enabled",81,04,31,7e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EyesoresEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::EyesoresShader */ ,(int)offsetof(EyesoresEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(EyesoresEffect_obj,waveSpeed),HX_("waveSpeed",0e,43,dc,5b)},
	{::hx::fsFloat,(int)offsetof(EyesoresEffect_obj,waveFrequency),HX_("waveFrequency",a3,fd,a6,f7)},
	{::hx::fsFloat,(int)offsetof(EyesoresEffect_obj,waveAmplitude),HX_("waveAmplitude",4a,90,b7,a5)},
	{::hx::fsFloat,(int)offsetof(EyesoresEffect_obj,time),HX_("time",0d,cc,fc,4c)},
	{::hx::fsFloat,(int)offsetof(EyesoresEffect_obj,ampmul),HX_("ampmul",80,3c,a6,d5)},
	{::hx::fsBool,(int)offsetof(EyesoresEffect_obj,enabled),HX_("enabled",81,04,31,7e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EyesoresEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String EyesoresEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("waveSpeed",0e,43,dc,5b),
	HX_("waveFrequency",a3,fd,a6,f7),
	HX_("waveAmplitude",4a,90,b7,a5),
	HX_("time",0d,cc,fc,4c),
	HX_("ampmul",80,3c,a6,d5),
	HX_("enabled",81,04,31,7e),
	HX_("update",09,86,05,87),
	HX_("set_ampmul",bd,4a,ab,c9),
	HX_("set_waveSpeed",f1,f8,45,62),
	HX_("set_time",0a,e1,14,7b),
	HX_("set_enabled",a4,6b,98,0e),
	HX_("set_waveFrequency",06,e1,84,21),
	HX_("set_waveAmplitude",ad,73,95,cf),
	::String(null()) };

::hx::Class EyesoresEffect_obj::__mClass;

void EyesoresEffect_obj::__register()
{
	EyesoresEffect_obj _hx_dummy;
	EyesoresEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.EyesoresEffect",04,69,16,dd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EyesoresEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EyesoresEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EyesoresEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EyesoresEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
