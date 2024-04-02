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
#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif
#ifndef INCLUDED_shaders_InvertColorsEffect
#include <shaders/InvertColorsEffect.h>
#endif
#ifndef INCLUDED_shaders_InvertShader
#include <shaders/InvertShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e8dc09c8bbb2e20e_1839_new,"shaders.InvertColorsEffect","new",0xf87e67e9,"shaders.InvertColorsEffect.new","shaders/Shaders.hx",1839,0x7800d7f1)
namespace shaders{

void InvertColorsEffect_obj::__construct(bool lockAlpha){
            	HX_GC_STACKFRAME(&_hx_pos_e8dc09c8bbb2e20e_1839_new)
HXDLIN(1839)		this->shader =  ::shaders::InvertShader_obj::__alloc( HX_CTX );
            	}

Dynamic InvertColorsEffect_obj::__CreateEmpty() { return new InvertColorsEffect_obj; }

void *InvertColorsEffect_obj::_hx_vtable = 0;

Dynamic InvertColorsEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InvertColorsEffect_obj > _hx_result = new InvertColorsEffect_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool InvertColorsEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1c35ff9d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1c35ff9d;
	} else {
		return inClassId==(int)0x1e2e565f;
	}
}


::hx::ObjectPtr< InvertColorsEffect_obj > InvertColorsEffect_obj::__new(bool lockAlpha) {
	::hx::ObjectPtr< InvertColorsEffect_obj > __this = new InvertColorsEffect_obj();
	__this->__construct(lockAlpha);
	return __this;
}

::hx::ObjectPtr< InvertColorsEffect_obj > InvertColorsEffect_obj::__alloc(::hx::Ctx *_hx_ctx,bool lockAlpha) {
	InvertColorsEffect_obj *__this = (InvertColorsEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(InvertColorsEffect_obj), true, "shaders.InvertColorsEffect"));
	*(void **)__this = InvertColorsEffect_obj::_hx_vtable;
	__this->__construct(lockAlpha);
	return __this;
}

InvertColorsEffect_obj::InvertColorsEffect_obj()
{
}

void InvertColorsEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InvertColorsEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_END_CLASS();
}

void InvertColorsEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
}

::hx::Val InvertColorsEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val InvertColorsEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::InvertShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InvertColorsEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo InvertColorsEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::InvertShader */ ,(int)offsetof(InvertColorsEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *InvertColorsEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String InvertColorsEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	::String(null()) };

::hx::Class InvertColorsEffect_obj::__mClass;

void InvertColorsEffect_obj::__register()
{
	InvertColorsEffect_obj _hx_dummy;
	InvertColorsEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.InvertColorsEffect",77,3f,88,32);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(InvertColorsEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< InvertColorsEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InvertColorsEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InvertColorsEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
