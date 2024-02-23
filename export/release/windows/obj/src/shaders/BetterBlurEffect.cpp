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
#ifndef INCLUDED_shaders_BetterBlurEffect
#include <shaders/BetterBlurEffect.h>
#endif
#ifndef INCLUDED_shaders_BetterBlurShader
#include <shaders/BetterBlurShader.h>
#endif
#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a03e37bcf91f6aea_2194_new,"shaders.BetterBlurEffect","new",0x986f71ba,"shaders.BetterBlurEffect.new","shaders/Shaders.hx",2194,0x7800d7f1)
namespace shaders{

void BetterBlurEffect_obj::__construct(Float loops,Float quality,Float strength){
            	HX_GC_STACKFRAME(&_hx_pos_a03e37bcf91f6aea_2194_new)
HXLINE(2195)		this->shader =  ::shaders::BetterBlurShader_obj::__alloc( HX_CTX );
HXLINE(2196)		this->shader->loops->value = ::Array_obj< Float >::__new(1)->init(0,loops);
HXLINE(2197)		this->shader->quality->value = ::Array_obj< Float >::__new(1)->init(0,quality);
HXLINE(2198)		this->shader->strength->value = ::Array_obj< Float >::__new(1)->init(0,strength);
            	}

Dynamic BetterBlurEffect_obj::__CreateEmpty() { return new BetterBlurEffect_obj; }

void *BetterBlurEffect_obj::_hx_vtable = 0;

Dynamic BetterBlurEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BetterBlurEffect_obj > _hx_result = new BetterBlurEffect_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool BetterBlurEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e2e565f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
	} else {
		return inClassId==(int)0x6f83176e;
	}
}


::hx::ObjectPtr< BetterBlurEffect_obj > BetterBlurEffect_obj::__new(Float loops,Float quality,Float strength) {
	::hx::ObjectPtr< BetterBlurEffect_obj > __this = new BetterBlurEffect_obj();
	__this->__construct(loops,quality,strength);
	return __this;
}

::hx::ObjectPtr< BetterBlurEffect_obj > BetterBlurEffect_obj::__alloc(::hx::Ctx *_hx_ctx,Float loops,Float quality,Float strength) {
	BetterBlurEffect_obj *__this = (BetterBlurEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BetterBlurEffect_obj), true, "shaders.BetterBlurEffect"));
	*(void **)__this = BetterBlurEffect_obj::_hx_vtable;
	__this->__construct(loops,quality,strength);
	return __this;
}

BetterBlurEffect_obj::BetterBlurEffect_obj()
{
}

void BetterBlurEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BetterBlurEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_END_CLASS();
}

void BetterBlurEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
}

::hx::Val BetterBlurEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BetterBlurEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::BetterBlurShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BetterBlurEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BetterBlurEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::BetterBlurShader */ ,(int)offsetof(BetterBlurEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BetterBlurEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String BetterBlurEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	::String(null()) };

::hx::Class BetterBlurEffect_obj::__mClass;

void BetterBlurEffect_obj::__register()
{
	BetterBlurEffect_obj _hx_dummy;
	BetterBlurEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.BetterBlurEffect",c8,cc,b9,42);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BetterBlurEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BetterBlurEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BetterBlurEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BetterBlurEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
