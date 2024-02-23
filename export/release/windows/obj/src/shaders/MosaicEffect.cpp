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
#ifndef INCLUDED_shaders_MosaicEffect
#include <shaders/MosaicEffect.h>
#endif
#ifndef INCLUDED_shaders_MosaicShader
#include <shaders/MosaicShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a0dd7da34db916b6_2665_new,"shaders.MosaicEffect","new",0xef9da7cd,"shaders.MosaicEffect.new","shaders/Shaders.hx",2665,0x7800d7f1)
namespace shaders{

void MosaicEffect_obj::__construct(Float strength){
            	HX_GC_STACKFRAME(&_hx_pos_a0dd7da34db916b6_2665_new)
HXLINE(2666)		this->shader =  ::shaders::MosaicShader_obj::__alloc( HX_CTX );
HXLINE(2667)		this->shader->strength->value = ::Array_obj< Float >::__new(1)->init(0,strength);
            	}

Dynamic MosaicEffect_obj::__CreateEmpty() { return new MosaicEffect_obj; }

void *MosaicEffect_obj::_hx_vtable = 0;

Dynamic MosaicEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MosaicEffect_obj > _hx_result = new MosaicEffect_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MosaicEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x181ab0e5) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x181ab0e5;
	} else {
		return inClassId==(int)0x1e2e565f;
	}
}


::hx::ObjectPtr< MosaicEffect_obj > MosaicEffect_obj::__new(Float strength) {
	::hx::ObjectPtr< MosaicEffect_obj > __this = new MosaicEffect_obj();
	__this->__construct(strength);
	return __this;
}

::hx::ObjectPtr< MosaicEffect_obj > MosaicEffect_obj::__alloc(::hx::Ctx *_hx_ctx,Float strength) {
	MosaicEffect_obj *__this = (MosaicEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MosaicEffect_obj), true, "shaders.MosaicEffect"));
	*(void **)__this = MosaicEffect_obj::_hx_vtable;
	__this->__construct(strength);
	return __this;
}

MosaicEffect_obj::MosaicEffect_obj()
{
}

void MosaicEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MosaicEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_END_CLASS();
}

void MosaicEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
}

::hx::Val MosaicEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MosaicEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::MosaicShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MosaicEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MosaicEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::MosaicShader */ ,(int)offsetof(MosaicEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MosaicEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String MosaicEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	::String(null()) };

::hx::Class MosaicEffect_obj::__mClass;

void MosaicEffect_obj::__register()
{
	MosaicEffect_obj _hx_dummy;
	MosaicEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.MosaicEffect",5b,bd,c8,2b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MosaicEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MosaicEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MosaicEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MosaicEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
