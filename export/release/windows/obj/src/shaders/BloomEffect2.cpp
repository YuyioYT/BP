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
#ifndef INCLUDED_shaders_BloomEffect2
#include <shaders/BloomEffect2.h>
#endif
#ifndef INCLUDED_shaders_BloomShader2
#include <shaders/BloomShader2.h>
#endif
#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_deb94c2145e17922_1093_new,"shaders.BloomEffect2","new",0x5d32a5d0,"shaders.BloomEffect2.new","shaders/Shaders.hx",1093,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_deb94c2145e17922_1099_set_intensity,"shaders.BloomEffect2","set_intensity",0xca317e06,"shaders.BloomEffect2.set_intensity","shaders/Shaders.hx",1099,0x7800d7f1)
namespace shaders{

void BloomEffect2_obj::__construct(Float blurSize,Float intensity){
            	HX_GC_STACKFRAME(&_hx_pos_deb94c2145e17922_1093_new)
HXLINE(1095)		this->shader =  ::shaders::BloomShader2_obj::__alloc( HX_CTX );
HXLINE(1107)		this->shader->blurSize->value = ::Array_obj< Float >::__new(1)->init(0,blurSize);
HXLINE(1108)		this->set_intensity(intensity);
            	}

Dynamic BloomEffect2_obj::__CreateEmpty() { return new BloomEffect2_obj; }

void *BloomEffect2_obj::_hx_vtable = 0;

Dynamic BloomEffect2_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BloomEffect2_obj > _hx_result = new BloomEffect2_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool BloomEffect2_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e2e565f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
	} else {
		return inClassId==(int)0x38ea254c;
	}
}

Float BloomEffect2_obj::set_intensity(Float v){
            	HX_STACKFRAME(&_hx_pos_deb94c2145e17922_1099_set_intensity)
HXLINE(1100)		this->shader->intensity->value = ::Array_obj< Float >::__new(1)->init(0,v);
HXLINE(1101)		this->intensity = v;
HXLINE(1102)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BloomEffect2_obj,set_intensity,return )


::hx::ObjectPtr< BloomEffect2_obj > BloomEffect2_obj::__new(Float blurSize,Float intensity) {
	::hx::ObjectPtr< BloomEffect2_obj > __this = new BloomEffect2_obj();
	__this->__construct(blurSize,intensity);
	return __this;
}

::hx::ObjectPtr< BloomEffect2_obj > BloomEffect2_obj::__alloc(::hx::Ctx *_hx_ctx,Float blurSize,Float intensity) {
	BloomEffect2_obj *__this = (BloomEffect2_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BloomEffect2_obj), true, "shaders.BloomEffect2"));
	*(void **)__this = BloomEffect2_obj::_hx_vtable;
	__this->__construct(blurSize,intensity);
	return __this;
}

BloomEffect2_obj::BloomEffect2_obj()
{
}

void BloomEffect2_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BloomEffect2);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(intensity,"intensity");
	HX_MARK_END_CLASS();
}

void BloomEffect2_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(intensity,"intensity");
}

::hx::Val BloomEffect2_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intensity") ) { return ::hx::Val( intensity ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_intensity") ) { return ::hx::Val( set_intensity_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BloomEffect2_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::BloomShader2 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intensity") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_intensity(inValue.Cast< Float >()) );intensity=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BloomEffect2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("intensity",b3,c6,dd,f4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BloomEffect2_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::BloomShader2 */ ,(int)offsetof(BloomEffect2_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(BloomEffect2_obj,intensity),HX_("intensity",b3,c6,dd,f4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BloomEffect2_obj_sStaticStorageInfo = 0;
#endif

static ::String BloomEffect2_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("intensity",b3,c6,dd,f4),
	HX_("set_intensity",96,7c,47,fb),
	::String(null()) };

::hx::Class BloomEffect2_obj::__mClass;

void BloomEffect2_obj::__register()
{
	BloomEffect2_obj _hx_dummy;
	BloomEffect2_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.BloomEffect2",de,bd,5f,94);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BloomEffect2_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BloomEffect2_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BloomEffect2_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BloomEffect2_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
