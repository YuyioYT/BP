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
#ifndef INCLUDED_shaders_Grey2Effect
#include <shaders/Grey2Effect.h>
#endif
#ifndef INCLUDED_shaders_Grey2Shader
#include <shaders/Grey2Shader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_087644254e7674ef_553_new,"shaders.Grey2Effect","new",0x4c6d72f6,"shaders.Grey2Effect.new","shaders/Shaders.hx",553,0x7800d7f1)
namespace shaders{

void Grey2Effect_obj::__construct(Float iStrength){
            	HX_GC_STACKFRAME(&_hx_pos_087644254e7674ef_553_new)
HXLINE( 555)		this->shader =  ::shaders::Grey2Shader_obj::__alloc( HX_CTX );
HXLINE( 559)		this->shader->iStrength->value = ::Array_obj< Float >::__new(1)->init(0,iStrength);
            	}

Dynamic Grey2Effect_obj::__CreateEmpty() { return new Grey2Effect_obj; }

void *Grey2Effect_obj::_hx_vtable = 0;

Dynamic Grey2Effect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Grey2Effect_obj > _hx_result = new Grey2Effect_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Grey2Effect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e2e565f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
	} else {
		return inClassId==(int)0x50716056;
	}
}


::hx::ObjectPtr< Grey2Effect_obj > Grey2Effect_obj::__new(Float iStrength) {
	::hx::ObjectPtr< Grey2Effect_obj > __this = new Grey2Effect_obj();
	__this->__construct(iStrength);
	return __this;
}

::hx::ObjectPtr< Grey2Effect_obj > Grey2Effect_obj::__alloc(::hx::Ctx *_hx_ctx,Float iStrength) {
	Grey2Effect_obj *__this = (Grey2Effect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Grey2Effect_obj), true, "shaders.Grey2Effect"));
	*(void **)__this = Grey2Effect_obj::_hx_vtable;
	__this->__construct(iStrength);
	return __this;
}

Grey2Effect_obj::Grey2Effect_obj()
{
}

void Grey2Effect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Grey2Effect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_END_CLASS();
}

void Grey2Effect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
}

::hx::Val Grey2Effect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Grey2Effect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::Grey2Shader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Grey2Effect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Grey2Effect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::Grey2Shader */ ,(int)offsetof(Grey2Effect_obj,shader),HX_("shader",25,bf,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Grey2Effect_obj_sStaticStorageInfo = 0;
#endif

static ::String Grey2Effect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	::String(null()) };

::hx::Class Grey2Effect_obj::__mClass;

void Grey2Effect_obj::__register()
{
	Grey2Effect_obj _hx_dummy;
	Grey2Effect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.Grey2Effect",04,80,57,1e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Grey2Effect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Grey2Effect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Grey2Effect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Grey2Effect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
