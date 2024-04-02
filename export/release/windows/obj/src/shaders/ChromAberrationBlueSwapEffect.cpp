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
#ifndef INCLUDED_shaders_ChromAberrationBlueSwapEffect
#include <shaders/ChromAberrationBlueSwapEffect.h>
#endif
#ifndef INCLUDED_shaders_ChromAberrationBlueSwapShader
#include <shaders/ChromAberrationBlueSwapShader.h>
#endif
#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_807ca2a15f7b3d7b_3028_new,"shaders.ChromAberrationBlueSwapEffect","new",0x1ad96c6c,"shaders.ChromAberrationBlueSwapEffect.new","shaders/Shaders.hx",3028,0x7800d7f1)
namespace shaders{

void ChromAberrationBlueSwapEffect_obj::__construct(Float strength){
            	HX_GC_STACKFRAME(&_hx_pos_807ca2a15f7b3d7b_3028_new)
HXLINE(3029)		this->shader =  ::shaders::ChromAberrationBlueSwapShader_obj::__alloc( HX_CTX );
HXLINE(3030)		this->shader->strength->value = ::Array_obj< Float >::__new(1)->init(0,strength);
            	}

Dynamic ChromAberrationBlueSwapEffect_obj::__CreateEmpty() { return new ChromAberrationBlueSwapEffect_obj; }

void *ChromAberrationBlueSwapEffect_obj::_hx_vtable = 0;

Dynamic ChromAberrationBlueSwapEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChromAberrationBlueSwapEffect_obj > _hx_result = new ChromAberrationBlueSwapEffect_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ChromAberrationBlueSwapEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e2e565f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
	} else {
		return inClassId==(int)0x3202634c;
	}
}


::hx::ObjectPtr< ChromAberrationBlueSwapEffect_obj > ChromAberrationBlueSwapEffect_obj::__new(Float strength) {
	::hx::ObjectPtr< ChromAberrationBlueSwapEffect_obj > __this = new ChromAberrationBlueSwapEffect_obj();
	__this->__construct(strength);
	return __this;
}

::hx::ObjectPtr< ChromAberrationBlueSwapEffect_obj > ChromAberrationBlueSwapEffect_obj::__alloc(::hx::Ctx *_hx_ctx,Float strength) {
	ChromAberrationBlueSwapEffect_obj *__this = (ChromAberrationBlueSwapEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChromAberrationBlueSwapEffect_obj), true, "shaders.ChromAberrationBlueSwapEffect"));
	*(void **)__this = ChromAberrationBlueSwapEffect_obj::_hx_vtable;
	__this->__construct(strength);
	return __this;
}

ChromAberrationBlueSwapEffect_obj::ChromAberrationBlueSwapEffect_obj()
{
}

void ChromAberrationBlueSwapEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ChromAberrationBlueSwapEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_END_CLASS();
}

void ChromAberrationBlueSwapEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
}

::hx::Val ChromAberrationBlueSwapEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ChromAberrationBlueSwapEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::ChromAberrationBlueSwapShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ChromAberrationBlueSwapEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ChromAberrationBlueSwapEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::ChromAberrationBlueSwapShader */ ,(int)offsetof(ChromAberrationBlueSwapEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ChromAberrationBlueSwapEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String ChromAberrationBlueSwapEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	::String(null()) };

::hx::Class ChromAberrationBlueSwapEffect_obj::__mClass;

void ChromAberrationBlueSwapEffect_obj::__register()
{
	ChromAberrationBlueSwapEffect_obj _hx_dummy;
	ChromAberrationBlueSwapEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.ChromAberrationBlueSwapEffect",7a,06,c0,75);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChromAberrationBlueSwapEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ChromAberrationBlueSwapEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChromAberrationBlueSwapEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChromAberrationBlueSwapEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
