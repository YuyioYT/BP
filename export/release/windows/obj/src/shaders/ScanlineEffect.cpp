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
#ifndef INCLUDED_openfl_display_ShaderParameter_Bool
#include <openfl/display/ShaderParameter_Bool.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif
#ifndef INCLUDED_shaders_ScanlineEffect
#include <shaders/ScanlineEffect.h>
#endif
#ifndef INCLUDED_shaders_ScanlineShader
#include <shaders/ScanlineShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ab5f48686d42641c_161_new,"shaders.ScanlineEffect","new",0xe1f1b634,"shaders.ScanlineEffect.new","shaders/Shaders.hx",161,0x7800d7f1)
namespace shaders{

void ScanlineEffect_obj::__construct(Float strength,Float pixelsBetweenEachLine,bool smooth){
            	HX_GC_STACKFRAME(&_hx_pos_ab5f48686d42641c_161_new)
HXLINE( 162)		this->shader =  ::shaders::ScanlineShader_obj::__alloc( HX_CTX );
HXLINE( 163)		this->shader->strength->value = ::Array_obj< Float >::__new(1)->init(0,strength);
HXLINE( 164)		this->shader->pixelsBetweenEachLine->value = ::Array_obj< Float >::__new(1)->init(0,pixelsBetweenEachLine);
HXLINE( 165)		this->shader->smoothVar->value = ::Array_obj< bool >::__new(1)->init(0,smooth);
            	}

Dynamic ScanlineEffect_obj::__CreateEmpty() { return new ScanlineEffect_obj; }

void *ScanlineEffect_obj::_hx_vtable = 0;

Dynamic ScanlineEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScanlineEffect_obj > _hx_result = new ScanlineEffect_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ScanlineEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e2e565f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
	} else {
		return inClassId==(int)0x254b364c;
	}
}


::hx::ObjectPtr< ScanlineEffect_obj > ScanlineEffect_obj::__new(Float strength,Float pixelsBetweenEachLine,bool smooth) {
	::hx::ObjectPtr< ScanlineEffect_obj > __this = new ScanlineEffect_obj();
	__this->__construct(strength,pixelsBetweenEachLine,smooth);
	return __this;
}

::hx::ObjectPtr< ScanlineEffect_obj > ScanlineEffect_obj::__alloc(::hx::Ctx *_hx_ctx,Float strength,Float pixelsBetweenEachLine,bool smooth) {
	ScanlineEffect_obj *__this = (ScanlineEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScanlineEffect_obj), true, "shaders.ScanlineEffect"));
	*(void **)__this = ScanlineEffect_obj::_hx_vtable;
	__this->__construct(strength,pixelsBetweenEachLine,smooth);
	return __this;
}

ScanlineEffect_obj::ScanlineEffect_obj()
{
}

void ScanlineEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScanlineEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_END_CLASS();
}

void ScanlineEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
}

::hx::Val ScanlineEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScanlineEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::ScanlineShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScanlineEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScanlineEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::ScanlineShader */ ,(int)offsetof(ScanlineEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScanlineEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String ScanlineEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	::String(null()) };

::hx::Class ScanlineEffect_obj::__mClass;

void ScanlineEffect_obj::__register()
{
	ScanlineEffect_obj _hx_dummy;
	ScanlineEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.ScanlineEffect",42,cc,ed,09);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScanlineEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScanlineEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScanlineEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScanlineEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
