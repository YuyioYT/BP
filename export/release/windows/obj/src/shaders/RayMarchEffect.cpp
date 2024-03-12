#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif
#ifndef INCLUDED_shaders_RayMarchEffect
#include <shaders/RayMarchEffect.h>
#endif
#ifndef INCLUDED_shaders_RayMarchShader
#include <shaders/RayMarchShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_10a2983fb7094d10_3248_new,"shaders.RayMarchEffect","new",0x076dc6bc,"shaders.RayMarchEffect.new","shaders/Shaders.hx",3248,0x7800d7f1)
static const Float _hx_array_data_77e4f8ca_1[] = {
	(Float)1280,(Float)720,
};
static const Float _hx_array_data_77e4f8ca_2[] = {
	(Float)0,(Float)0,(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_10a2983fb7094d10_3261_update,"shaders.RayMarchEffect","update",0x0cd8f12d,"shaders.RayMarchEffect.update","shaders/Shaders.hx",3261,0x7800d7f1)
static const Float _hx_array_data_77e4f8ca_4[] = {
	(Float)1280,(Float)720,
};
HX_LOCAL_STACK_FRAME(_hx_pos_10a2983fb7094d10_3268_setPoint,"shaders.RayMarchEffect","setPoint",0x06a39972,"shaders.RayMarchEffect.setPoint","shaders/Shaders.hx",3268,0x7800d7f1)
namespace shaders{

void RayMarchEffect_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_10a2983fb7094d10_3248_new)
HXLINE(3254)		this->zoom = ((Float)-2);
HXLINE(3253)		this->z = ((Float)0);
HXLINE(3252)		this->y = ((Float)0);
HXLINE(3251)		this->x = ((Float)0);
HXLINE(3250)		this->shader =  ::shaders::RayMarchShader_obj::__alloc( HX_CTX );
HXLINE(3256)		this->shader->iResolution->value = ::Array_obj< Float >::fromData( _hx_array_data_77e4f8ca_1,2);
HXLINE(3257)		this->shader->rotation->value = ::Array_obj< Float >::fromData( _hx_array_data_77e4f8ca_2,3);
HXLINE(3258)		this->shader->zoom->value = ::Array_obj< Float >::__new(1)->init(0,this->zoom);
            	}

Dynamic RayMarchEffect_obj::__CreateEmpty() { return new RayMarchEffect_obj; }

void *RayMarchEffect_obj::_hx_vtable = 0;

Dynamic RayMarchEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RayMarchEffect_obj > _hx_result = new RayMarchEffect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RayMarchEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e2e565f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
	} else {
		return inClassId==(int)0x216a97b8;
	}
}

void RayMarchEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_10a2983fb7094d10_3261_update)
HXLINE(3262)		this->shader->iResolution->value = ::Array_obj< Float >::fromData( _hx_array_data_77e4f8ca_4,2);
HXLINE(3264)		this->shader->rotation->value = ::Array_obj< Float >::__new(3)->init(0,(this->x * (::Math_obj::PI / ( (Float)(180) ))))->init(1,(this->y * (::Math_obj::PI / ( (Float)(180) ))))->init(2,(this->z * (::Math_obj::PI / ( (Float)(180) ))));
HXLINE(3265)		this->shader->zoom->value = ::Array_obj< Float >::__new(1)->init(0,this->zoom);
            	}


void RayMarchEffect_obj::setPoint(){
            	HX_STACKFRAME(&_hx_pos_10a2983fb7094d10_3268_setPoint)
            	}


HX_DEFINE_DYNAMIC_FUNC0(RayMarchEffect_obj,setPoint,(void))


::hx::ObjectPtr< RayMarchEffect_obj > RayMarchEffect_obj::__new() {
	::hx::ObjectPtr< RayMarchEffect_obj > __this = new RayMarchEffect_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< RayMarchEffect_obj > RayMarchEffect_obj::__alloc(::hx::Ctx *_hx_ctx) {
	RayMarchEffect_obj *__this = (RayMarchEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RayMarchEffect_obj), true, "shaders.RayMarchEffect"));
	*(void **)__this = RayMarchEffect_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

RayMarchEffect_obj::RayMarchEffect_obj()
{
}

void RayMarchEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RayMarchEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_END_CLASS();
}

void RayMarchEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(z,"z");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
}

::hx::Val RayMarchEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		if (HX_FIELD_EQ(inName,"z") ) { return ::hx::Val( z ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { return ::hx::Val( zoom ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setPoint") ) { return ::hx::Val( setPoint_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RayMarchEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { zoom=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::RayMarchShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RayMarchEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("z",7a,00,00,00));
	outFields->push(HX_("zoom",13,a3,f8,50));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RayMarchEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::RayMarchShader */ ,(int)offsetof(RayMarchEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(RayMarchEffect_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(RayMarchEffect_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(RayMarchEffect_obj,z),HX_("z",7a,00,00,00)},
	{::hx::fsFloat,(int)offsetof(RayMarchEffect_obj,zoom),HX_("zoom",13,a3,f8,50)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RayMarchEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String RayMarchEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("z",7a,00,00,00),
	HX_("zoom",13,a3,f8,50),
	HX_("update",09,86,05,87),
	HX_("setPoint",4e,1d,c4,d4),
	::String(null()) };

::hx::Class RayMarchEffect_obj::__mClass;

void RayMarchEffect_obj::__register()
{
	RayMarchEffect_obj _hx_dummy;
	RayMarchEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.RayMarchEffect",ca,f8,e4,77);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RayMarchEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RayMarchEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RayMarchEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RayMarchEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
