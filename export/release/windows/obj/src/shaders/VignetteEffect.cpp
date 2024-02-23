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
#ifndef INCLUDED_shaders_VignetteEffect
#include <shaders/VignetteEffect.h>
#endif
#ifndef INCLUDED_shaders_VignetteShader
#include <shaders/VignetteShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_11987f1eb63ad690_2342_new,"shaders.VignetteEffect","new",0x0cfa143d,"shaders.VignetteEffect.new","shaders/Shaders.hx",2342,0x7800d7f1)
namespace shaders{

void VignetteEffect_obj::__construct(Float strength,Float size,Float red,Float green,Float blue){
            	HX_GC_STACKFRAME(&_hx_pos_11987f1eb63ad690_2342_new)
HXLINE(2344)		this->shader =  ::shaders::VignetteShader_obj::__alloc( HX_CTX );
HXLINE(2353)		this->shader->strength->value = ::Array_obj< Float >::__new(1)->init(0,strength);
HXLINE(2354)		this->shader->size->value = ::Array_obj< Float >::__new(1)->init(0,size);
HXLINE(2355)		this->shader->red->value = ::Array_obj< Float >::__new(1)->init(0,red);
HXLINE(2356)		this->shader->green->value = ::Array_obj< Float >::__new(1)->init(0,green);
HXLINE(2357)		this->shader->blue->value = ::Array_obj< Float >::__new(1)->init(0,blue);
            	}

Dynamic VignetteEffect_obj::__CreateEmpty() { return new VignetteEffect_obj; }

void *VignetteEffect_obj::_hx_vtable = 0;

Dynamic VignetteEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VignetteEffect_obj > _hx_result = new VignetteEffect_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool VignetteEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e2e565f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
	} else {
		return inClassId==(int)0x4dffd0b9;
	}
}


::hx::ObjectPtr< VignetteEffect_obj > VignetteEffect_obj::__new(Float strength,Float size,Float red,Float green,Float blue) {
	::hx::ObjectPtr< VignetteEffect_obj > __this = new VignetteEffect_obj();
	__this->__construct(strength,size,red,green,blue);
	return __this;
}

::hx::ObjectPtr< VignetteEffect_obj > VignetteEffect_obj::__alloc(::hx::Ctx *_hx_ctx,Float strength,Float size,Float red,Float green,Float blue) {
	VignetteEffect_obj *__this = (VignetteEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VignetteEffect_obj), true, "shaders.VignetteEffect"));
	*(void **)__this = VignetteEffect_obj::_hx_vtable;
	__this->__construct(strength,size,red,green,blue);
	return __this;
}

VignetteEffect_obj::VignetteEffect_obj()
{
}

void VignetteEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VignetteEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_END_CLASS();
}

void VignetteEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
}

::hx::Val VignetteEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VignetteEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::VignetteShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VignetteEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VignetteEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::VignetteShader */ ,(int)offsetof(VignetteEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VignetteEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String VignetteEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	::String(null()) };

::hx::Class VignetteEffect_obj::__mClass;

void VignetteEffect_obj::__register()
{
	VignetteEffect_obj _hx_dummy;
	VignetteEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.VignetteEffect",cb,31,7a,a4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VignetteEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VignetteEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VignetteEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VignetteEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
