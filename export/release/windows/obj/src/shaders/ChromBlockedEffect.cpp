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
#ifndef INCLUDED_shaders_ChromBlockedEffect
#include <shaders/ChromBlockedEffect.h>
#endif
#ifndef INCLUDED_shaders_ChromBlockedShader
#include <shaders/ChromBlockedShader.h>
#endif
#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_020f881b391b1d1d_2818_new,"shaders.ChromBlockedEffect","new",0xf1dda3e4,"shaders.ChromBlockedEffect.new","shaders/Shaders.hx",2818,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_020f881b391b1d1d_2830_set_floatGlitchvec2,"shaders.ChromBlockedEffect","set_floatGlitchvec2",0x065f9c36,"shaders.ChromBlockedEffect.set_floatGlitchvec2","shaders/Shaders.hx",2830,0x7800d7f1)
namespace shaders{

void ChromBlockedEffect_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_020f881b391b1d1d_2818_new)
HXLINE(2822)		this->floatGlitchvec2 = ((Float)0);
HXLINE(2826)		this->shader =  ::shaders::ChromBlockedShader_obj::__alloc( HX_CTX );
HXLINE(2827)		this->set_floatGlitchvec2(( (Float)(0) ));
            	}

Dynamic ChromBlockedEffect_obj::__CreateEmpty() { return new ChromBlockedEffect_obj; }

void *ChromBlockedEffect_obj::_hx_vtable = 0;

Dynamic ChromBlockedEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChromBlockedEffect_obj > _hx_result = new ChromBlockedEffect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ChromBlockedEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0632e218) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0632e218;
	} else {
		return inClassId==(int)0x1e2e565f;
	}
}

Float ChromBlockedEffect_obj::set_floatGlitchvec2(Float value){
            	HX_STACKFRAME(&_hx_pos_020f881b391b1d1d_2830_set_floatGlitchvec2)
HXLINE(2831)		this->floatGlitchvec2 = value;
HXLINE(2832)		this->shader->floatGlitch->value = ::Array_obj< Float >::__new(1)->init(0,value);
HXLINE(2833)		return this->floatGlitchvec2;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ChromBlockedEffect_obj,set_floatGlitchvec2,return )


::hx::ObjectPtr< ChromBlockedEffect_obj > ChromBlockedEffect_obj::__new() {
	::hx::ObjectPtr< ChromBlockedEffect_obj > __this = new ChromBlockedEffect_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ChromBlockedEffect_obj > ChromBlockedEffect_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ChromBlockedEffect_obj *__this = (ChromBlockedEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChromBlockedEffect_obj), true, "shaders.ChromBlockedEffect"));
	*(void **)__this = ChromBlockedEffect_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ChromBlockedEffect_obj::ChromBlockedEffect_obj()
{
}

void ChromBlockedEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ChromBlockedEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(floatGlitchvec2,"floatGlitchvec2");
	HX_MARK_END_CLASS();
}

void ChromBlockedEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(floatGlitchvec2,"floatGlitchvec2");
}

::hx::Val ChromBlockedEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"floatGlitchvec2") ) { return ::hx::Val( floatGlitchvec2 ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_floatGlitchvec2") ) { return ::hx::Val( set_floatGlitchvec2_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ChromBlockedEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::ChromBlockedShader >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"floatGlitchvec2") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_floatGlitchvec2(inValue.Cast< Float >()) );floatGlitchvec2=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ChromBlockedEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("floatGlitchvec2",8f,be,5f,6f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ChromBlockedEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::ChromBlockedShader */ ,(int)offsetof(ChromBlockedEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(ChromBlockedEffect_obj,floatGlitchvec2),HX_("floatGlitchvec2",8f,be,5f,6f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ChromBlockedEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String ChromBlockedEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("floatGlitchvec2",8f,be,5f,6f),
	HX_("set_floatGlitchvec2",b2,80,07,37),
	::String(null()) };

::hx::Class ChromBlockedEffect_obj::__mClass;

void ChromBlockedEffect_obj::__register()
{
	ChromBlockedEffect_obj _hx_dummy;
	ChromBlockedEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.ChromBlockedEffect",f2,21,85,1c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChromBlockedEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ChromBlockedEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChromBlockedEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChromBlockedEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
