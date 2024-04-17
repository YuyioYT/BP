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
#ifndef INCLUDED_shaders_MotionBlurEffect
#include <shaders/MotionBlurEffect.h>
#endif
#ifndef INCLUDED_shaders_MotionBlurShader
#include <shaders/MotionBlurShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c91bc7cdbcfcebd3_2994_new,"shaders.MotionBlurEffect","new",0x04be6540,"shaders.MotionBlurEffect.new","shaders/Shaders.hx",2994,0x7800d7f1)
namespace shaders{

void MotionBlurEffect_obj::__construct(Float strength){
            	HX_GC_STACKFRAME(&_hx_pos_c91bc7cdbcfcebd3_2994_new)
HXLINE(2995)		this->shader =  ::shaders::MotionBlurShader_obj::__alloc( HX_CTX );
HXLINE(2996)		this->shader->strength->value = ::Array_obj< Float >::__new(1)->init(0,strength);
            	}

Dynamic MotionBlurEffect_obj::__CreateEmpty() { return new MotionBlurEffect_obj; }

void *MotionBlurEffect_obj::_hx_vtable = 0;

Dynamic MotionBlurEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MotionBlurEffect_obj > _hx_result = new MotionBlurEffect_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MotionBlurEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e2e565f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
	} else {
		return inClassId==(int)0x7fb8bbbc;
	}
}


::hx::ObjectPtr< MotionBlurEffect_obj > MotionBlurEffect_obj::__new(Float strength) {
	::hx::ObjectPtr< MotionBlurEffect_obj > __this = new MotionBlurEffect_obj();
	__this->__construct(strength);
	return __this;
}

::hx::ObjectPtr< MotionBlurEffect_obj > MotionBlurEffect_obj::__alloc(::hx::Ctx *_hx_ctx,Float strength) {
	MotionBlurEffect_obj *__this = (MotionBlurEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MotionBlurEffect_obj), true, "shaders.MotionBlurEffect"));
	*(void **)__this = MotionBlurEffect_obj::_hx_vtable;
	__this->__construct(strength);
	return __this;
}

MotionBlurEffect_obj::MotionBlurEffect_obj()
{
}

void MotionBlurEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MotionBlurEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_END_CLASS();
}

void MotionBlurEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
}

::hx::Val MotionBlurEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MotionBlurEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::MotionBlurShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MotionBlurEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MotionBlurEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::MotionBlurShader */ ,(int)offsetof(MotionBlurEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MotionBlurEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String MotionBlurEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	::String(null()) };

::hx::Class MotionBlurEffect_obj::__mClass;

void MotionBlurEffect_obj::__register()
{
	MotionBlurEffect_obj _hx_dummy;
	MotionBlurEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.MotionBlurEffect",4e,05,5b,32);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MotionBlurEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MotionBlurEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MotionBlurEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MotionBlurEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
