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
#ifndef INCLUDED_shaders_BlurEffect
#include <shaders/BlurEffect.h>
#endif
#ifndef INCLUDED_shaders_BlurShader
#include <shaders/BlurShader.h>
#endif
#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1e62d6610d31b45b_2295_new,"shaders.BlurEffect","new",0x1231b06a,"shaders.BlurEffect.new","shaders/Shaders.hx",2295,0x7800d7f1)
namespace shaders{

void BlurEffect_obj::__construct(Float strength,Float strengthY){
            	HX_GC_STACKFRAME(&_hx_pos_1e62d6610d31b45b_2295_new)
HXLINE(2296)		this->shader =  ::shaders::BlurShader_obj::__alloc( HX_CTX );
HXLINE(2297)		this->shader->strength->value = ::Array_obj< Float >::__new(1)->init(0,strength);
HXLINE(2298)		this->shader->strengthY->value = ::Array_obj< Float >::__new(1)->init(0,strengthY);
            	}

Dynamic BlurEffect_obj::__CreateEmpty() { return new BlurEffect_obj; }

void *BlurEffect_obj::_hx_vtable = 0;

Dynamic BlurEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BlurEffect_obj > _hx_result = new BlurEffect_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool BlurEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e2e565f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
	} else {
		return inClassId==(int)0x52df0366;
	}
}


::hx::ObjectPtr< BlurEffect_obj > BlurEffect_obj::__new(Float strength,Float strengthY) {
	::hx::ObjectPtr< BlurEffect_obj > __this = new BlurEffect_obj();
	__this->__construct(strength,strengthY);
	return __this;
}

::hx::ObjectPtr< BlurEffect_obj > BlurEffect_obj::__alloc(::hx::Ctx *_hx_ctx,Float strength,Float strengthY) {
	BlurEffect_obj *__this = (BlurEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BlurEffect_obj), true, "shaders.BlurEffect"));
	*(void **)__this = BlurEffect_obj::_hx_vtable;
	__this->__construct(strength,strengthY);
	return __this;
}

BlurEffect_obj::BlurEffect_obj()
{
}

void BlurEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BlurEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_END_CLASS();
}

void BlurEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
}

::hx::Val BlurEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BlurEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::BlurShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BlurEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BlurEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::BlurShader */ ,(int)offsetof(BlurEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BlurEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String BlurEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	::String(null()) };

::hx::Class BlurEffect_obj::__mClass;

void BlurEffect_obj::__register()
{
	BlurEffect_obj _hx_dummy;
	BlurEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.BlurEffect",78,f3,6a,7f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BlurEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BlurEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BlurEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BlurEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
