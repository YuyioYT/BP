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
#ifndef INCLUDED_shaders_SobelEffect
#include <shaders/SobelEffect.h>
#endif
#ifndef INCLUDED_shaders_SobelShader
#include <shaders/SobelShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_623e4febe088f67b_2600_new,"shaders.SobelEffect","new",0x3e5f39b0,"shaders.SobelEffect.new","shaders/Shaders.hx",2600,0x7800d7f1)
namespace shaders{

void SobelEffect_obj::__construct(Float strength,Float intensity){
            	HX_GC_STACKFRAME(&_hx_pos_623e4febe088f67b_2600_new)
HXLINE(2601)		this->shader =  ::shaders::SobelShader_obj::__alloc( HX_CTX );
HXLINE(2602)		this->shader->strength->value = ::Array_obj< Float >::__new(1)->init(0,strength);
HXLINE(2603)		this->shader->intensity->value = ::Array_obj< Float >::__new(1)->init(0,intensity);
            	}

Dynamic SobelEffect_obj::__CreateEmpty() { return new SobelEffect_obj; }

void *SobelEffect_obj::_hx_vtable = 0;

Dynamic SobelEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SobelEffect_obj > _hx_result = new SobelEffect_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool SobelEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c1d4668) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c1d4668;
	} else {
		return inClassId==(int)0x1e2e565f;
	}
}


::hx::ObjectPtr< SobelEffect_obj > SobelEffect_obj::__new(Float strength,Float intensity) {
	::hx::ObjectPtr< SobelEffect_obj > __this = new SobelEffect_obj();
	__this->__construct(strength,intensity);
	return __this;
}

::hx::ObjectPtr< SobelEffect_obj > SobelEffect_obj::__alloc(::hx::Ctx *_hx_ctx,Float strength,Float intensity) {
	SobelEffect_obj *__this = (SobelEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SobelEffect_obj), true, "shaders.SobelEffect"));
	*(void **)__this = SobelEffect_obj::_hx_vtable;
	__this->__construct(strength,intensity);
	return __this;
}

SobelEffect_obj::SobelEffect_obj()
{
}

void SobelEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SobelEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_END_CLASS();
}

void SobelEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
}

::hx::Val SobelEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SobelEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::SobelShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SobelEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SobelEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::SobelShader */ ,(int)offsetof(SobelEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SobelEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String SobelEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	::String(null()) };

::hx::Class SobelEffect_obj::__mClass;

void SobelEffect_obj::__register()
{
	SobelEffect_obj _hx_dummy;
	SobelEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.SobelEffect",be,e1,fc,62);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SobelEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SobelEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SobelEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SobelEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
