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
#ifndef INCLUDED_shaders_ThreeDEffect
#include <shaders/ThreeDEffect.h>
#endif
#ifndef INCLUDED_shaders_ThreeDShader
#include <shaders/ThreeDShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5a2f90f6dc7ee1ac_1284_new,"shaders.ThreeDEffect","new",0x017558a9,"shaders.ThreeDEffect.new","shaders/Shaders.hx",1284,0x7800d7f1)
namespace shaders{

void ThreeDEffect_obj::__construct(::hx::Null< Float >  __o_xrotation,::hx::Null< Float >  __o_yrotation,::hx::Null< Float >  __o_zrotation,::hx::Null< Float >  __o_depth){
            		Float xrotation = __o_xrotation.Default(0);
            		Float yrotation = __o_yrotation.Default(0);
            		Float zrotation = __o_zrotation.Default(0);
            		Float depth = __o_depth.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_5a2f90f6dc7ee1ac_1284_new)
HXLINE(1286)		this->shader =  ::shaders::ThreeDShader_obj::__alloc( HX_CTX );
HXLINE(1288)		this->shader->xrot->value = ::Array_obj< Float >::__new(1)->init(0,xrotation);
HXLINE(1289)		this->shader->yrot->value = ::Array_obj< Float >::__new(1)->init(0,yrotation);
HXLINE(1290)		this->shader->zrot->value = ::Array_obj< Float >::__new(1)->init(0,zrotation);
HXLINE(1291)		this->shader->dept->value = ::Array_obj< Float >::__new(1)->init(0,depth);
            	}

Dynamic ThreeDEffect_obj::__CreateEmpty() { return new ThreeDEffect_obj; }

void *ThreeDEffect_obj::_hx_vtable = 0;

Dynamic ThreeDEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ThreeDEffect_obj > _hx_result = new ThreeDEffect_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool ThreeDEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e2e565f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
	} else {
		return inClassId==(int)0x43a14fdd;
	}
}


::hx::ObjectPtr< ThreeDEffect_obj > ThreeDEffect_obj::__new(::hx::Null< Float >  __o_xrotation,::hx::Null< Float >  __o_yrotation,::hx::Null< Float >  __o_zrotation,::hx::Null< Float >  __o_depth) {
	::hx::ObjectPtr< ThreeDEffect_obj > __this = new ThreeDEffect_obj();
	__this->__construct(__o_xrotation,__o_yrotation,__o_zrotation,__o_depth);
	return __this;
}

::hx::ObjectPtr< ThreeDEffect_obj > ThreeDEffect_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_xrotation,::hx::Null< Float >  __o_yrotation,::hx::Null< Float >  __o_zrotation,::hx::Null< Float >  __o_depth) {
	ThreeDEffect_obj *__this = (ThreeDEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ThreeDEffect_obj), true, "shaders.ThreeDEffect"));
	*(void **)__this = ThreeDEffect_obj::_hx_vtable;
	__this->__construct(__o_xrotation,__o_yrotation,__o_zrotation,__o_depth);
	return __this;
}

ThreeDEffect_obj::ThreeDEffect_obj()
{
}

void ThreeDEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ThreeDEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_END_CLASS();
}

void ThreeDEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
}

::hx::Val ThreeDEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ThreeDEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::ThreeDShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ThreeDEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ThreeDEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::ThreeDShader */ ,(int)offsetof(ThreeDEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ThreeDEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String ThreeDEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	::String(null()) };

::hx::Class ThreeDEffect_obj::__mClass;

void ThreeDEffect_obj::__register()
{
	ThreeDEffect_obj _hx_dummy;
	ThreeDEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.ThreeDEffect",37,d0,87,0f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ThreeDEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ThreeDEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ThreeDEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ThreeDEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
