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
#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif
#ifndef INCLUDED_shaders_ScanlineEffect2
#include <shaders/ScanlineEffect2.h>
#endif
#ifndef INCLUDED_shaders_ScanlineShader2
#include <shaders/ScanlineShader2.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ee514e1e426de684_125_new,"shaders.ScanlineEffect2","new",0xf4e126a2,"shaders.ScanlineEffect2.new","shaders/Shaders.hx",125,0x7800d7f1)
namespace shaders{

void ScanlineEffect2_obj::__construct(bool lockAlpha){
            	HX_GC_STACKFRAME(&_hx_pos_ee514e1e426de684_125_new)
HXLINE( 126)		this->shader =  ::shaders::ScanlineShader2_obj::__alloc( HX_CTX );
HXLINE( 127)		this->shader->lockAlpha->value = ::Array_obj< bool >::__new(1)->init(0,lockAlpha);
            	}

Dynamic ScanlineEffect2_obj::__CreateEmpty() { return new ScanlineEffect2_obj; }

void *ScanlineEffect2_obj::_hx_vtable = 0;

Dynamic ScanlineEffect2_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScanlineEffect2_obj > _hx_result = new ScanlineEffect2_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ScanlineEffect2_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e2e565f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
	} else {
		return inClassId==(int)0x518a5f02;
	}
}


::hx::ObjectPtr< ScanlineEffect2_obj > ScanlineEffect2_obj::__new(bool lockAlpha) {
	::hx::ObjectPtr< ScanlineEffect2_obj > __this = new ScanlineEffect2_obj();
	__this->__construct(lockAlpha);
	return __this;
}

::hx::ObjectPtr< ScanlineEffect2_obj > ScanlineEffect2_obj::__alloc(::hx::Ctx *_hx_ctx,bool lockAlpha) {
	ScanlineEffect2_obj *__this = (ScanlineEffect2_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScanlineEffect2_obj), true, "shaders.ScanlineEffect2"));
	*(void **)__this = ScanlineEffect2_obj::_hx_vtable;
	__this->__construct(lockAlpha);
	return __this;
}

ScanlineEffect2_obj::ScanlineEffect2_obj()
{
}

void ScanlineEffect2_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScanlineEffect2);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_END_CLASS();
}

void ScanlineEffect2_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
}

::hx::Val ScanlineEffect2_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScanlineEffect2_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::ScanlineShader2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScanlineEffect2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScanlineEffect2_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::ScanlineShader2 */ ,(int)offsetof(ScanlineEffect2_obj,shader),HX_("shader",25,bf,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScanlineEffect2_obj_sStaticStorageInfo = 0;
#endif

static ::String ScanlineEffect2_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	::String(null()) };

::hx::Class ScanlineEffect2_obj::__mClass;

void ScanlineEffect2_obj::__register()
{
	ScanlineEffect2_obj _hx_dummy;
	ScanlineEffect2_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.ScanlineEffect2",b0,ed,24,a6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScanlineEffect2_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScanlineEffect2_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScanlineEffect2_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScanlineEffect2_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
