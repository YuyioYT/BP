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
#ifndef INCLUDED_shaders_FuckingTriangle
#include <shaders/FuckingTriangle.h>
#endif
#ifndef INCLUDED_shaders_FuckingTriangleEffect
#include <shaders/FuckingTriangleEffect.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_68295b01e97973bd_1317_new,"shaders.FuckingTriangleEffect","new",0x36833076,"shaders.FuckingTriangleEffect.new","shaders/Shaders.hx",1317,0x7800d7f1)
namespace shaders{

void FuckingTriangleEffect_obj::__construct(Float rotx,Float roty){
            	HX_GC_STACKFRAME(&_hx_pos_68295b01e97973bd_1317_new)
HXLINE(1319)		this->shader =  ::shaders::FuckingTriangle_obj::__alloc( HX_CTX );
HXLINE(1322)		this->shader->rotX->value = ::Array_obj< Float >::__new(1)->init(0,rotx);
HXLINE(1323)		this->shader->rotY->value = ::Array_obj< Float >::__new(1)->init(0,roty);
            	}

Dynamic FuckingTriangleEffect_obj::__CreateEmpty() { return new FuckingTriangleEffect_obj; }

void *FuckingTriangleEffect_obj::_hx_vtable = 0;

Dynamic FuckingTriangleEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FuckingTriangleEffect_obj > _hx_result = new FuckingTriangleEffect_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FuckingTriangleEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e2e565f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
	} else {
		return inClassId==(int)0x60d0b856;
	}
}


::hx::ObjectPtr< FuckingTriangleEffect_obj > FuckingTriangleEffect_obj::__new(Float rotx,Float roty) {
	::hx::ObjectPtr< FuckingTriangleEffect_obj > __this = new FuckingTriangleEffect_obj();
	__this->__construct(rotx,roty);
	return __this;
}

::hx::ObjectPtr< FuckingTriangleEffect_obj > FuckingTriangleEffect_obj::__alloc(::hx::Ctx *_hx_ctx,Float rotx,Float roty) {
	FuckingTriangleEffect_obj *__this = (FuckingTriangleEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FuckingTriangleEffect_obj), true, "shaders.FuckingTriangleEffect"));
	*(void **)__this = FuckingTriangleEffect_obj::_hx_vtable;
	__this->__construct(rotx,roty);
	return __this;
}

FuckingTriangleEffect_obj::FuckingTriangleEffect_obj()
{
}

void FuckingTriangleEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FuckingTriangleEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_END_CLASS();
}

void FuckingTriangleEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
}

::hx::Val FuckingTriangleEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FuckingTriangleEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::FuckingTriangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FuckingTriangleEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FuckingTriangleEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::FuckingTriangle */ ,(int)offsetof(FuckingTriangleEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FuckingTriangleEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String FuckingTriangleEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	::String(null()) };

::hx::Class FuckingTriangleEffect_obj::__mClass;

void FuckingTriangleEffect_obj::__register()
{
	FuckingTriangleEffect_obj _hx_dummy;
	FuckingTriangleEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.FuckingTriangleEffect",84,7d,60,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FuckingTriangleEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FuckingTriangleEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FuckingTriangleEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FuckingTriangleEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
