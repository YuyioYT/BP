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
#ifndef INCLUDED_shaders_Tiltshift
#include <shaders/Tiltshift.h>
#endif
#ifndef INCLUDED_shaders_TiltshiftEffect
#include <shaders/TiltshiftEffect.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_625c4b7884703cdc_448_new,"shaders.TiltshiftEffect","new",0x890c99a8,"shaders.TiltshiftEffect.new","shaders/Shaders.hx",448,0x7800d7f1)
namespace shaders{

void TiltshiftEffect_obj::__construct(Float blurAmount,Float center){
            	HX_GC_STACKFRAME(&_hx_pos_625c4b7884703cdc_448_new)
HXLINE( 449)		this->shader =  ::shaders::Tiltshift_obj::__alloc( HX_CTX );
HXLINE( 450)		this->shader->bluramount->value = ::Array_obj< Float >::__new(1)->init(0,blurAmount);
HXLINE( 451)		this->shader->center->value = ::Array_obj< Float >::__new(1)->init(0,center);
            	}

Dynamic TiltshiftEffect_obj::__CreateEmpty() { return new TiltshiftEffect_obj; }

void *TiltshiftEffect_obj::_hx_vtable = 0;

Dynamic TiltshiftEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TiltshiftEffect_obj > _hx_result = new TiltshiftEffect_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TiltshiftEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e2e565f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
	} else {
		return inClassId==(int)0x51f25708;
	}
}


::hx::ObjectPtr< TiltshiftEffect_obj > TiltshiftEffect_obj::__new(Float blurAmount,Float center) {
	::hx::ObjectPtr< TiltshiftEffect_obj > __this = new TiltshiftEffect_obj();
	__this->__construct(blurAmount,center);
	return __this;
}

::hx::ObjectPtr< TiltshiftEffect_obj > TiltshiftEffect_obj::__alloc(::hx::Ctx *_hx_ctx,Float blurAmount,Float center) {
	TiltshiftEffect_obj *__this = (TiltshiftEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TiltshiftEffect_obj), true, "shaders.TiltshiftEffect"));
	*(void **)__this = TiltshiftEffect_obj::_hx_vtable;
	__this->__construct(blurAmount,center);
	return __this;
}

TiltshiftEffect_obj::TiltshiftEffect_obj()
{
}

void TiltshiftEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiltshiftEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_END_CLASS();
}

void TiltshiftEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
}

::hx::Val TiltshiftEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TiltshiftEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::Tiltshift >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiltshiftEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TiltshiftEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::Tiltshift */ ,(int)offsetof(TiltshiftEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TiltshiftEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String TiltshiftEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	::String(null()) };

::hx::Class TiltshiftEffect_obj::__mClass;

void TiltshiftEffect_obj::__register()
{
	TiltshiftEffect_obj _hx_dummy;
	TiltshiftEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.TiltshiftEffect",b6,e5,8c,a6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TiltshiftEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TiltshiftEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TiltshiftEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TiltshiftEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
