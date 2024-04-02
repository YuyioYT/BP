#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
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
#ifndef INCLUDED_openfl_display_ShaderParameter_Int
#include <openfl/display/ShaderParameter_Int.h>
#endif
#ifndef INCLUDED_shaders_WiggleEffect
#include <shaders/WiggleEffect.h>
#endif
#ifndef INCLUDED_shaders_WiggleEffectType
#include <shaders/WiggleEffectType.h>
#endif
#ifndef INCLUDED_shaders_WiggleShader
#include <shaders/WiggleShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8009c4ad34b70c87_368_new,"shaders.WiggleEffect","new",0x82f7ac6e,"shaders.WiggleEffect.new","shaders/Shaders.hx",368,0x7800d7f1)
static const Float _hx_array_data_a4f99d7c_1[] = {
	(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_8009c4ad34b70c87_382_update,"shaders.WiggleEffect","update",0x807426bb,"shaders.WiggleEffect.update","shaders/Shaders.hx",382,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_8009c4ad34b70c87_388_setValue,"shaders.WiggleEffect","setValue",0x6aca99a1,"shaders.WiggleEffect.setValue","shaders/Shaders.hx",388,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_8009c4ad34b70c87_392_set_effectType,"shaders.WiggleEffect","set_effectType",0xee53a95a,"shaders.WiggleEffect.set_effectType","shaders/Shaders.hx",392,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_8009c4ad34b70c87_399_set_waveSpeed,"shaders.WiggleEffect","set_waveSpeed",0xdefeb27f,"shaders.WiggleEffect.set_waveSpeed","shaders/Shaders.hx",399,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_8009c4ad34b70c87_406_set_waveFrequency,"shaders.WiggleEffect","set_waveFrequency",0x3e747994,"shaders.WiggleEffect.set_waveFrequency","shaders/Shaders.hx",406,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_8009c4ad34b70c87_413_set_waveAmplitude,"shaders.WiggleEffect","set_waveAmplitude",0xec850c3b,"shaders.WiggleEffect.set_waveAmplitude","shaders/Shaders.hx",413,0x7800d7f1)
namespace shaders{

void WiggleEffect_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_8009c4ad34b70c87_368_new)
HXLINE( 374)		this->waveAmplitude = ((Float)0);
HXLINE( 373)		this->waveFrequency = ((Float)0);
HXLINE( 372)		this->waveSpeed = ((Float)0);
HXLINE( 371)		this->effectType = ::shaders::WiggleEffectType_obj::DREAMY_dyn();
HXLINE( 370)		this->shader =  ::shaders::WiggleShader_obj::__alloc( HX_CTX );
HXLINE( 378)		this->shader->uTime->value = ::Array_obj< Float >::fromData( _hx_array_data_a4f99d7c_1,1);
            	}

Dynamic WiggleEffect_obj::__CreateEmpty() { return new WiggleEffect_obj; }

void *WiggleEffect_obj::_hx_vtable = 0;

Dynamic WiggleEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WiggleEffect_obj > _hx_result = new WiggleEffect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool WiggleEffect_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x498404ea;
}

void WiggleEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_8009c4ad34b70c87_382_update)
HXLINE( 383)		::Array< Float > base = this->shader->uTime->value;
HXDLIN( 383)		int _hx_tmp = 0;
HXDLIN( 383)		base[_hx_tmp] = (base->__get(_hx_tmp) + elapsed);
            	}


HX_DEFINE_DYNAMIC_FUNC1(WiggleEffect_obj,update,(void))

void WiggleEffect_obj::setValue(Float value){
            	HX_STACKFRAME(&_hx_pos_8009c4ad34b70c87_388_setValue)
HXDLIN( 388)		this->shader->uTime->value[0] = value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(WiggleEffect_obj,setValue,(void))

 ::shaders::WiggleEffectType WiggleEffect_obj::set_effectType( ::shaders::WiggleEffectType v){
            	HX_STACKFRAME(&_hx_pos_8009c4ad34b70c87_392_set_effectType)
HXLINE( 393)		this->effectType = v;
HXLINE( 394)		::Array< ::String > _hx_tmp = ::Type_obj::getEnumConstructs(::hx::ClassOf< ::shaders::WiggleEffectType >());
HXDLIN( 394)		int _hx_tmp1 = _hx_tmp->indexOf(::Std_obj::string(v),null());
HXDLIN( 394)		this->shader->effectType->value = ::Array_obj< int >::__new(1)->init(0,_hx_tmp1);
HXLINE( 395)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(WiggleEffect_obj,set_effectType,return )

Float WiggleEffect_obj::set_waveSpeed(Float v){
            	HX_STACKFRAME(&_hx_pos_8009c4ad34b70c87_399_set_waveSpeed)
HXLINE( 400)		this->waveSpeed = v;
HXLINE( 401)		this->shader->uSpeed->value = ::Array_obj< Float >::__new(1)->init(0,this->waveSpeed);
HXLINE( 402)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(WiggleEffect_obj,set_waveSpeed,return )

Float WiggleEffect_obj::set_waveFrequency(Float v){
            	HX_STACKFRAME(&_hx_pos_8009c4ad34b70c87_406_set_waveFrequency)
HXLINE( 407)		this->waveFrequency = v;
HXLINE( 408)		this->shader->uFrequency->value = ::Array_obj< Float >::__new(1)->init(0,this->waveFrequency);
HXLINE( 409)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(WiggleEffect_obj,set_waveFrequency,return )

Float WiggleEffect_obj::set_waveAmplitude(Float v){
            	HX_STACKFRAME(&_hx_pos_8009c4ad34b70c87_413_set_waveAmplitude)
HXLINE( 414)		this->waveAmplitude = v;
HXLINE( 415)		this->shader->uWaveAmplitude->value = ::Array_obj< Float >::__new(1)->init(0,this->waveAmplitude);
HXLINE( 416)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(WiggleEffect_obj,set_waveAmplitude,return )


::hx::ObjectPtr< WiggleEffect_obj > WiggleEffect_obj::__new() {
	::hx::ObjectPtr< WiggleEffect_obj > __this = new WiggleEffect_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< WiggleEffect_obj > WiggleEffect_obj::__alloc(::hx::Ctx *_hx_ctx) {
	WiggleEffect_obj *__this = (WiggleEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WiggleEffect_obj), true, "shaders.WiggleEffect"));
	*(void **)__this = WiggleEffect_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

WiggleEffect_obj::WiggleEffect_obj()
{
}

void WiggleEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WiggleEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(effectType,"effectType");
	HX_MARK_MEMBER_NAME(waveSpeed,"waveSpeed");
	HX_MARK_MEMBER_NAME(waveFrequency,"waveFrequency");
	HX_MARK_MEMBER_NAME(waveAmplitude,"waveAmplitude");
	HX_MARK_END_CLASS();
}

void WiggleEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(effectType,"effectType");
	HX_VISIT_MEMBER_NAME(waveSpeed,"waveSpeed");
	HX_VISIT_MEMBER_NAME(waveFrequency,"waveFrequency");
	HX_VISIT_MEMBER_NAME(waveAmplitude,"waveAmplitude");
}

::hx::Val WiggleEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setValue") ) { return ::hx::Val( setValue_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"waveSpeed") ) { return ::hx::Val( waveSpeed ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"effectType") ) { return ::hx::Val( effectType ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"waveFrequency") ) { return ::hx::Val( waveFrequency ); }
		if (HX_FIELD_EQ(inName,"waveAmplitude") ) { return ::hx::Val( waveAmplitude ); }
		if (HX_FIELD_EQ(inName,"set_waveSpeed") ) { return ::hx::Val( set_waveSpeed_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_effectType") ) { return ::hx::Val( set_effectType_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_waveFrequency") ) { return ::hx::Val( set_waveFrequency_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_waveAmplitude") ) { return ::hx::Val( set_waveAmplitude_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val WiggleEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::WiggleShader >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"waveSpeed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_waveSpeed(inValue.Cast< Float >()) );waveSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"effectType") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_effectType(inValue.Cast<  ::shaders::WiggleEffectType >()) );effectType=inValue.Cast<  ::shaders::WiggleEffectType >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"waveFrequency") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_waveFrequency(inValue.Cast< Float >()) );waveFrequency=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"waveAmplitude") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_waveAmplitude(inValue.Cast< Float >()) );waveAmplitude=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WiggleEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("effectType",eb,95,54,b3));
	outFields->push(HX_("waveSpeed",0e,43,dc,5b));
	outFields->push(HX_("waveFrequency",a3,fd,a6,f7));
	outFields->push(HX_("waveAmplitude",4a,90,b7,a5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WiggleEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::WiggleShader */ ,(int)offsetof(WiggleEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsObject /*  ::shaders::WiggleEffectType */ ,(int)offsetof(WiggleEffect_obj,effectType),HX_("effectType",eb,95,54,b3)},
	{::hx::fsFloat,(int)offsetof(WiggleEffect_obj,waveSpeed),HX_("waveSpeed",0e,43,dc,5b)},
	{::hx::fsFloat,(int)offsetof(WiggleEffect_obj,waveFrequency),HX_("waveFrequency",a3,fd,a6,f7)},
	{::hx::fsFloat,(int)offsetof(WiggleEffect_obj,waveAmplitude),HX_("waveAmplitude",4a,90,b7,a5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *WiggleEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String WiggleEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("effectType",eb,95,54,b3),
	HX_("waveSpeed",0e,43,dc,5b),
	HX_("waveFrequency",a3,fd,a6,f7),
	HX_("waveAmplitude",4a,90,b7,a5),
	HX_("update",09,86,05,87),
	HX_("setValue",6f,e8,ec,3f),
	HX_("set_effectType",a8,06,6a,49),
	HX_("set_waveSpeed",f1,f8,45,62),
	HX_("set_waveFrequency",06,e1,84,21),
	HX_("set_waveAmplitude",ad,73,95,cf),
	::String(null()) };

::hx::Class WiggleEffect_obj::__mClass;

void WiggleEffect_obj::__register()
{
	WiggleEffect_obj _hx_dummy;
	WiggleEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.WiggleEffect",7c,9d,f9,a4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WiggleEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WiggleEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WiggleEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WiggleEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
