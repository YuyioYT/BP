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
#ifndef INCLUDED_shaders_WaveBurstEffect
#include <shaders/WaveBurstEffect.h>
#endif
#ifndef INCLUDED_shaders_WaveBurstShader
#include <shaders/WaveBurstShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7e062c9146d30214_2919_new,"shaders.WaveBurstEffect","new",0x9fe8cd2a,"shaders.WaveBurstEffect.new","shaders/Shaders.hx",2919,0x7800d7f1)
namespace shaders{

void WaveBurstEffect_obj::__construct(Float strength){
            	HX_GC_STACKFRAME(&_hx_pos_7e062c9146d30214_2919_new)
HXLINE(2921)		this->shader =  ::shaders::WaveBurstShader_obj::__alloc( HX_CTX );
HXLINE(2926)		this->shader->strength->value = ::Array_obj< Float >::__new(1)->init(0,strength);
            	}

Dynamic WaveBurstEffect_obj::__CreateEmpty() { return new WaveBurstEffect_obj; }

void *WaveBurstEffect_obj::_hx_vtable = 0;

Dynamic WaveBurstEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WaveBurstEffect_obj > _hx_result = new WaveBurstEffect_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool WaveBurstEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e2e565f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
	} else {
		return inClassId==(int)0x460a218a;
	}
}


::hx::ObjectPtr< WaveBurstEffect_obj > WaveBurstEffect_obj::__new(Float strength) {
	::hx::ObjectPtr< WaveBurstEffect_obj > __this = new WaveBurstEffect_obj();
	__this->__construct(strength);
	return __this;
}

::hx::ObjectPtr< WaveBurstEffect_obj > WaveBurstEffect_obj::__alloc(::hx::Ctx *_hx_ctx,Float strength) {
	WaveBurstEffect_obj *__this = (WaveBurstEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WaveBurstEffect_obj), true, "shaders.WaveBurstEffect"));
	*(void **)__this = WaveBurstEffect_obj::_hx_vtable;
	__this->__construct(strength);
	return __this;
}

WaveBurstEffect_obj::WaveBurstEffect_obj()
{
}

void WaveBurstEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WaveBurstEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_END_CLASS();
}

void WaveBurstEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
}

::hx::Val WaveBurstEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val WaveBurstEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::WaveBurstShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WaveBurstEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WaveBurstEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::WaveBurstShader */ ,(int)offsetof(WaveBurstEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *WaveBurstEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String WaveBurstEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	::String(null()) };

::hx::Class WaveBurstEffect_obj::__mClass;

void WaveBurstEffect_obj::__register()
{
	WaveBurstEffect_obj _hx_dummy;
	WaveBurstEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.WaveBurstEffect",38,b0,a4,9a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WaveBurstEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WaveBurstEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WaveBurstEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WaveBurstEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
