#include <hxcpp.h>

#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
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
#ifndef INCLUDED_shaders_PulseEffect
#include <shaders/PulseEffect.h>
#endif
#ifndef INCLUDED_shaders_PulseShader
#include <shaders/PulseShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b43969b3ad08500f_1785_new,"shaders.PulseEffect","new",0xdb64459c,"shaders.PulseEffect.new","shaders/Shaders.hx",1785,0x7800d7f1)
static const Float _hx_array_data_9d3a87aa_1[] = {
	(Float)0,
};
static const Float _hx_array_data_9d3a87aa_2[] = {
	(Float)0,
};
static const bool _hx_array_data_9d3a87aa_3[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_b43969b3ad08500f_1802_update,"shaders.PulseEffect","update",0x7394fe4d,"shaders.PulseEffect.update","shaders/Shaders.hx",1802,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b43969b3ad08500f_1808_set_waveSpeed,"shaders.PulseEffect","set_waveSpeed",0x8c7bd12d,"shaders.PulseEffect.set_waveSpeed","shaders/Shaders.hx",1808,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b43969b3ad08500f_1815_set_Enabled,"shaders.PulseEffect","set_Enabled",0x0c8ba4c0,"shaders.PulseEffect.set_Enabled","shaders/Shaders.hx",1815,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b43969b3ad08500f_1822_set_waveFrequency,"shaders.PulseEffect","set_waveFrequency",0x23918742,"shaders.PulseEffect.set_waveFrequency","shaders/Shaders.hx",1822,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b43969b3ad08500f_1829_set_waveAmplitude,"shaders.PulseEffect","set_waveAmplitude",0xd1a219e9,"shaders.PulseEffect.set_waveAmplitude","shaders/Shaders.hx",1829,0x7800d7f1)
namespace shaders{

void PulseEffect_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_b43969b3ad08500f_1785_new)
HXLINE(1792)		this->Enabled = false;
HXLINE(1791)		this->waveAmplitude = ((Float)0);
HXLINE(1790)		this->waveFrequency = ((Float)0);
HXLINE(1789)		this->waveSpeed = ((Float)0);
HXLINE(1787)		this->shader =  ::shaders::PulseShader_obj::__alloc( HX_CTX );
HXLINE(1796)		this->shader->uTime->value = ::Array_obj< Float >::fromData( _hx_array_data_9d3a87aa_1,1);
HXLINE(1797)		this->shader->uampmul->value = ::Array_obj< Float >::fromData( _hx_array_data_9d3a87aa_2,1);
HXLINE(1798)		this->shader->uEnabled->value = ::Array_obj< bool >::fromData( _hx_array_data_9d3a87aa_3,1);
            	}

Dynamic PulseEffect_obj::__CreateEmpty() { return new PulseEffect_obj; }

void *PulseEffect_obj::_hx_vtable = 0;

Dynamic PulseEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PulseEffect_obj > _hx_result = new PulseEffect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PulseEffect_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0ad7aa28;
}

void PulseEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_b43969b3ad08500f_1802_update)
HXLINE(1803)		::Array< Float > base = this->shader->uTime->value;
HXDLIN(1803)		int _hx_tmp = 0;
HXDLIN(1803)		base[_hx_tmp] = (base->__get(_hx_tmp) + elapsed);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PulseEffect_obj,update,(void))

Float PulseEffect_obj::set_waveSpeed(Float v){
            	HX_STACKFRAME(&_hx_pos_b43969b3ad08500f_1808_set_waveSpeed)
HXLINE(1809)		this->waveSpeed = v;
HXLINE(1810)		this->shader->uSpeed->value = ::Array_obj< Float >::__new(1)->init(0,this->waveSpeed);
HXLINE(1811)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PulseEffect_obj,set_waveSpeed,return )

bool PulseEffect_obj::set_Enabled(bool v){
            	HX_STACKFRAME(&_hx_pos_b43969b3ad08500f_1815_set_Enabled)
HXLINE(1816)		this->Enabled = v;
HXLINE(1817)		this->shader->uEnabled->value = ::Array_obj< bool >::__new(1)->init(0,this->Enabled);
HXLINE(1818)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PulseEffect_obj,set_Enabled,return )

Float PulseEffect_obj::set_waveFrequency(Float v){
            	HX_STACKFRAME(&_hx_pos_b43969b3ad08500f_1822_set_waveFrequency)
HXLINE(1823)		this->waveFrequency = v;
HXLINE(1824)		this->shader->uFrequency->value = ::Array_obj< Float >::__new(1)->init(0,this->waveFrequency);
HXLINE(1825)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PulseEffect_obj,set_waveFrequency,return )

Float PulseEffect_obj::set_waveAmplitude(Float v){
            	HX_STACKFRAME(&_hx_pos_b43969b3ad08500f_1829_set_waveAmplitude)
HXLINE(1830)		this->waveAmplitude = v;
HXLINE(1831)		this->shader->uWaveAmplitude->value = ::Array_obj< Float >::__new(1)->init(0,this->waveAmplitude);
HXLINE(1832)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PulseEffect_obj,set_waveAmplitude,return )


::hx::ObjectPtr< PulseEffect_obj > PulseEffect_obj::__new() {
	::hx::ObjectPtr< PulseEffect_obj > __this = new PulseEffect_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PulseEffect_obj > PulseEffect_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PulseEffect_obj *__this = (PulseEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PulseEffect_obj), true, "shaders.PulseEffect"));
	*(void **)__this = PulseEffect_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PulseEffect_obj::PulseEffect_obj()
{
}

void PulseEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PulseEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(waveSpeed,"waveSpeed");
	HX_MARK_MEMBER_NAME(waveFrequency,"waveFrequency");
	HX_MARK_MEMBER_NAME(waveAmplitude,"waveAmplitude");
	HX_MARK_MEMBER_NAME(Enabled,"Enabled");
	HX_MARK_END_CLASS();
}

void PulseEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(waveSpeed,"waveSpeed");
	HX_VISIT_MEMBER_NAME(waveFrequency,"waveFrequency");
	HX_VISIT_MEMBER_NAME(waveAmplitude,"waveAmplitude");
	HX_VISIT_MEMBER_NAME(Enabled,"Enabled");
}

::hx::Val PulseEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Enabled") ) { return ::hx::Val( Enabled ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"waveSpeed") ) { return ::hx::Val( waveSpeed ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_Enabled") ) { return ::hx::Val( set_Enabled_dyn() ); }
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

::hx::Val PulseEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::PulseShader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Enabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_Enabled(inValue.Cast< bool >()) );Enabled=inValue.Cast< bool >(); return inValue; }
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

void PulseEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("waveSpeed",0e,43,dc,5b));
	outFields->push(HX_("waveFrequency",a3,fd,a6,f7));
	outFields->push(HX_("waveAmplitude",4a,90,b7,a5));
	outFields->push(HX_("Enabled",61,2c,82,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PulseEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::PulseShader */ ,(int)offsetof(PulseEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(PulseEffect_obj,waveSpeed),HX_("waveSpeed",0e,43,dc,5b)},
	{::hx::fsFloat,(int)offsetof(PulseEffect_obj,waveFrequency),HX_("waveFrequency",a3,fd,a6,f7)},
	{::hx::fsFloat,(int)offsetof(PulseEffect_obj,waveAmplitude),HX_("waveAmplitude",4a,90,b7,a5)},
	{::hx::fsBool,(int)offsetof(PulseEffect_obj,Enabled),HX_("Enabled",61,2c,82,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PulseEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String PulseEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("waveSpeed",0e,43,dc,5b),
	HX_("waveFrequency",a3,fd,a6,f7),
	HX_("waveAmplitude",4a,90,b7,a5),
	HX_("Enabled",61,2c,82,4b),
	HX_("update",09,86,05,87),
	HX_("set_waveSpeed",f1,f8,45,62),
	HX_("set_Enabled",84,93,e9,db),
	HX_("set_waveFrequency",06,e1,84,21),
	HX_("set_waveAmplitude",ad,73,95,cf),
	::String(null()) };

::hx::Class PulseEffect_obj::__mClass;

void PulseEffect_obj::__register()
{
	PulseEffect_obj _hx_dummy;
	PulseEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.PulseEffect",aa,87,3a,9d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PulseEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PulseEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PulseEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PulseEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
