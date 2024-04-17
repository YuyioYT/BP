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
#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif
#ifndef INCLUDED_shaders_StaticEffect
#include <shaders/StaticEffect.h>
#endif
#ifndef INCLUDED_shaders_StaticShader
#include <shaders/StaticShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_071ce3ef8ccd3a8e_620_new,"shaders.StaticEffect","new",0x00c23131,"shaders.StaticEffect.new","shaders/Shaders.hx",620,0x7800d7f1)
static const Float _hx_array_data_5d4bc4bf_1[] = {
	(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_071ce3ef8ccd3a8e_633_update,"shaders.StaticEffect","update",0xfdf8bdd8,"shaders.StaticEffect.update","shaders/Shaders.hx",633,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_071ce3ef8ccd3a8e_638_set_strength,"shaders.StaticEffect","set_strength",0xc433270d,"shaders.StaticEffect.set_strength","shaders/Shaders.hx",638,0x7800d7f1)
namespace shaders{

void StaticEffect_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_071ce3ef8ccd3a8e_620_new)
HXLINE( 624)		this->strength = ((Float)0);
HXLINE( 622)		this->shader =  ::shaders::StaticShader_obj::__alloc( HX_CTX );
HXLINE( 628)		this->set_strength(( (Float)(0) ));
HXLINE( 629)		this->shader->iTime->value = ::Array_obj< Float >::fromData( _hx_array_data_5d4bc4bf_1,1);
            	}

Dynamic StaticEffect_obj::__CreateEmpty() { return new StaticEffect_obj; }

void *StaticEffect_obj::_hx_vtable = 0;

Dynamic StaticEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StaticEffect_obj > _hx_result = new StaticEffect_obj();
	_hx_result->__construct();
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
            	HX_STACKFRAME(&_hx_pos_071ce3ef8ccd3a8e_633_update)
HXLINE( 634)		::Array< Float > base = this->shader->iTime->value;
HXDLIN( 634)		int _hx_tmp = 0;
HXDLIN( 634)		base[_hx_tmp] = (base->__get(_hx_tmp) + elapsed);
            	}


Float StaticEffect_obj::set_strength(Float value){
            	HX_STACKFRAME(&_hx_pos_071ce3ef8ccd3a8e_638_set_strength)
HXLINE( 639)		this->strength = value;
HXLINE( 640)		this->shader->strength->value = ::Array_obj< Float >::__new(1)->init(0,value);
HXLINE( 641)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(StaticEffect_obj,set_strength,return )


::hx::ObjectPtr< StaticEffect_obj > StaticEffect_obj::__new() {
	::hx::ObjectPtr< StaticEffect_obj > __this = new StaticEffect_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< StaticEffect_obj > StaticEffect_obj::__alloc(::hx::Ctx *_hx_ctx) {
	StaticEffect_obj *__this = (StaticEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StaticEffect_obj), true, "shaders.StaticEffect"));
	*(void **)__this = StaticEffect_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

StaticEffect_obj::StaticEffect_obj()
{
}

void StaticEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StaticEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(strength,"strength");
	HX_MARK_END_CLASS();
}

void StaticEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(strength,"strength");
}

::hx::Val StaticEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { return ::hx::Val( strength ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_strength") ) { return ::hx::Val( set_strength_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StaticEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::StaticShader >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_strength(inValue.Cast< Float >()) );strength=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StaticEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("strength",81,d2,8e,8e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StaticEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::StaticShader */ ,(int)offsetof(StaticEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(StaticEffect_obj,strength),HX_("strength",81,d2,8e,8e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StaticEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String StaticEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("strength",81,d2,8e,8e),
	HX_("update",09,86,05,87),
	HX_("set_strength",fe,a9,a1,58),
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
