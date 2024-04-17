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
#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif
#ifndef INCLUDED_shaders_GreyscaleEffect
#include <shaders/GreyscaleEffect.h>
#endif
#ifndef INCLUDED_shaders_GreyscaleShader
#include <shaders/GreyscaleShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_569ab79099227fc1_882_new,"shaders.GreyscaleEffect","new",0x3e39c3ce,"shaders.GreyscaleEffect.new","shaders/Shaders.hx",882,0x7800d7f1)
namespace shaders{

void GreyscaleEffect_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_569ab79099227fc1_882_new)
HXDLIN( 882)		this->shader =  ::shaders::GreyscaleShader_obj::__alloc( HX_CTX );
            	}

Dynamic GreyscaleEffect_obj::__CreateEmpty() { return new GreyscaleEffect_obj; }

void *GreyscaleEffect_obj::_hx_vtable = 0;

Dynamic GreyscaleEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GreyscaleEffect_obj > _hx_result = new GreyscaleEffect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GreyscaleEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0917be5a) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0917be5a;
	} else {
		return inClassId==(int)0x1e2e565f;
	}
}


::hx::ObjectPtr< GreyscaleEffect_obj > GreyscaleEffect_obj::__new() {
	::hx::ObjectPtr< GreyscaleEffect_obj > __this = new GreyscaleEffect_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GreyscaleEffect_obj > GreyscaleEffect_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GreyscaleEffect_obj *__this = (GreyscaleEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GreyscaleEffect_obj), true, "shaders.GreyscaleEffect"));
	*(void **)__this = GreyscaleEffect_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GreyscaleEffect_obj::GreyscaleEffect_obj()
{
}

void GreyscaleEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GreyscaleEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_END_CLASS();
}

void GreyscaleEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
}

::hx::Val GreyscaleEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GreyscaleEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::GreyscaleShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GreyscaleEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GreyscaleEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::GreyscaleShader */ ,(int)offsetof(GreyscaleEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GreyscaleEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String GreyscaleEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	::String(null()) };

::hx::Class GreyscaleEffect_obj::__mClass;

void GreyscaleEffect_obj::__register()
{
	GreyscaleEffect_obj _hx_dummy;
	GreyscaleEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.GreyscaleEffect",dc,84,c4,dc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GreyscaleEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GreyscaleEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GreyscaleEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GreyscaleEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
