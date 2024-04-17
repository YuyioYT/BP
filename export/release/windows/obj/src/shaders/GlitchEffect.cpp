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
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_shaders_GlitchEffect
#include <shaders/GlitchEffect.h>
#endif
#ifndef INCLUDED_shaders_GlitchShader
#include <shaders/GlitchShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_58f7148e0c889b43_1836_new,"shaders.GlitchEffect","new",0x11e96738,"shaders.GlitchEffect.new","shaders/Shaders.hx",1836,0x7800d7f1)
static const Float _hx_array_data_bc6fab46_1[] = {
	(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_58f7148e0c889b43_1850_update,"shaders.GlitchEffect","update",0x9557c631,"shaders.GlitchEffect.update","shaders/Shaders.hx",1850,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_58f7148e0c889b43_1856_set_waveSpeed,"shaders.GlitchEffect","set_waveSpeed",0x2e9d8dc9,"shaders.GlitchEffect.set_waveSpeed","shaders/Shaders.hx",1856,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_58f7148e0c889b43_1863_set_waveFrequency,"shaders.GlitchEffect","set_waveFrequency",0x11c3c1de,"shaders.GlitchEffect.set_waveFrequency","shaders/Shaders.hx",1863,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_58f7148e0c889b43_1870_set_waveAmplitude,"shaders.GlitchEffect","set_waveAmplitude",0xbfd45485,"shaders.GlitchEffect.set_waveAmplitude","shaders/Shaders.hx",1870,0x7800d7f1)
namespace shaders{

void GlitchEffect_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_58f7148e0c889b43_1836_new)
HXLINE(1842)		this->waveAmplitude = ((Float)0);
HXLINE(1841)		this->waveFrequency = ((Float)0);
HXLINE(1840)		this->waveSpeed = ((Float)0);
HXLINE(1838)		this->shader =  ::shaders::GlitchShader_obj::__alloc( HX_CTX );
HXLINE(1846)		this->shader->uTime->value = ::Array_obj< Float >::fromData( _hx_array_data_bc6fab46_1,1);
            	}

Dynamic GlitchEffect_obj::__CreateEmpty() { return new GlitchEffect_obj; }

void *GlitchEffect_obj::_hx_vtable = 0;

Dynamic GlitchEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GlitchEffect_obj > _hx_result = new GlitchEffect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GlitchEffect_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x60fa12b4;
}

void GlitchEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_58f7148e0c889b43_1850_update)
HXLINE(1851)		::Array< Float > base = this->shader->uTime->value;
HXDLIN(1851)		int _hx_tmp = 0;
HXDLIN(1851)		base[_hx_tmp] = (base->__get(_hx_tmp) + elapsed);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlitchEffect_obj,update,(void))

Float GlitchEffect_obj::set_waveSpeed(Float v){
            	HX_STACKFRAME(&_hx_pos_58f7148e0c889b43_1856_set_waveSpeed)
HXLINE(1857)		this->waveSpeed = v;
HXLINE(1858)		this->shader->uSpeed->value = ::Array_obj< Float >::__new(1)->init(0,this->waveSpeed);
HXLINE(1859)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlitchEffect_obj,set_waveSpeed,return )

Float GlitchEffect_obj::set_waveFrequency(Float v){
            	HX_STACKFRAME(&_hx_pos_58f7148e0c889b43_1863_set_waveFrequency)
HXLINE(1864)		this->waveFrequency = v;
HXLINE(1865)		this->shader->uFrequency->value = ::Array_obj< Float >::__new(1)->init(0,this->waveFrequency);
HXLINE(1866)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlitchEffect_obj,set_waveFrequency,return )

Float GlitchEffect_obj::set_waveAmplitude(Float v){
            	HX_STACKFRAME(&_hx_pos_58f7148e0c889b43_1870_set_waveAmplitude)
HXLINE(1871)		this->waveAmplitude = v;
HXLINE(1872)		this->shader->uWaveAmplitude->value = ::Array_obj< Float >::__new(1)->init(0,this->waveAmplitude);
HXLINE(1873)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlitchEffect_obj,set_waveAmplitude,return )


::hx::ObjectPtr< GlitchEffect_obj > GlitchEffect_obj::__new() {
	::hx::ObjectPtr< GlitchEffect_obj > __this = new GlitchEffect_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GlitchEffect_obj > GlitchEffect_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GlitchEffect_obj *__this = (GlitchEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GlitchEffect_obj), true, "shaders.GlitchEffect"));
	*(void **)__this = GlitchEffect_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GlitchEffect_obj::GlitchEffect_obj()
{
}

void GlitchEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GlitchEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(waveSpeed,"waveSpeed");
	HX_MARK_MEMBER_NAME(waveFrequency,"waveFrequency");
	HX_MARK_MEMBER_NAME(waveAmplitude,"waveAmplitude");
	HX_MARK_END_CLASS();
}

void GlitchEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(waveSpeed,"waveSpeed");
	HX_VISIT_MEMBER_NAME(waveFrequency,"waveFrequency");
	HX_VISIT_MEMBER_NAME(waveAmplitude,"waveAmplitude");
}

::hx::Val GlitchEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

::hx::Val GlitchEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::GlitchShader >(); return inValue; }
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

void GlitchEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("waveSpeed",0e,43,dc,5b));
	outFields->push(HX_("waveFrequency",a3,fd,a6,f7));
	outFields->push(HX_("waveAmplitude",4a,90,b7,a5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GlitchEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::GlitchShader */ ,(int)offsetof(GlitchEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(GlitchEffect_obj,waveSpeed),HX_("waveSpeed",0e,43,dc,5b)},
	{::hx::fsFloat,(int)offsetof(GlitchEffect_obj,waveFrequency),HX_("waveFrequency",a3,fd,a6,f7)},
	{::hx::fsFloat,(int)offsetof(GlitchEffect_obj,waveAmplitude),HX_("waveAmplitude",4a,90,b7,a5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GlitchEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String GlitchEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("waveSpeed",0e,43,dc,5b),
	HX_("waveFrequency",a3,fd,a6,f7),
	HX_("waveAmplitude",4a,90,b7,a5),
	HX_("update",09,86,05,87),
	HX_("set_waveSpeed",f1,f8,45,62),
	HX_("set_waveFrequency",06,e1,84,21),
	HX_("set_waveAmplitude",ad,73,95,cf),
	::String(null()) };

::hx::Class GlitchEffect_obj::__mClass;

void GlitchEffect_obj::__register()
{
	GlitchEffect_obj _hx_dummy;
	GlitchEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.GlitchEffect",46,ab,6f,bc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GlitchEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GlitchEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GlitchEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GlitchEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
