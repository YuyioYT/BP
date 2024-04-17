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
#ifndef INCLUDED_shaders_Tiltshift
#include <shaders/Tiltshift.h>
#endif
#ifndef INCLUDED_shaders_TiltshiftEffect
#include <shaders/TiltshiftEffect.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_625c4b7884703cdc_541_new,"shaders.TiltshiftEffect","new",0x890c99a8,"shaders.TiltshiftEffect.new","shaders/Shaders.hx",541,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_625c4b7884703cdc_555_set_bluramount,"shaders.TiltshiftEffect","set_bluramount",0xbb406834,"shaders.TiltshiftEffect.set_bluramount","shaders/Shaders.hx",555,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_625c4b7884703cdc_562_set_center,"shaders.TiltshiftEffect","set_center",0x29f2a3ca,"shaders.TiltshiftEffect.set_center","shaders/Shaders.hx",562,0x7800d7f1)
namespace shaders{

void TiltshiftEffect_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_625c4b7884703cdc_541_new)
HXLINE( 546)		this->center = ((Float)0);
HXLINE( 545)		this->bluramount = ((Float)0);
HXLINE( 543)		this->shader =  ::shaders::Tiltshift_obj::__alloc( HX_CTX );
HXLINE( 550)		this->set_bluramount(( (Float)(0) ));
HXLINE( 551)		this->set_center(( (Float)(0) ));
            	}

Dynamic TiltshiftEffect_obj::__CreateEmpty() { return new TiltshiftEffect_obj; }

void *TiltshiftEffect_obj::_hx_vtable = 0;

Dynamic TiltshiftEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TiltshiftEffect_obj > _hx_result = new TiltshiftEffect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TiltshiftEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e2e565f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
	} else {
		return inClassId==(int)0x51f25708;
	}
}

Float TiltshiftEffect_obj::set_bluramount(Float value){
            	HX_STACKFRAME(&_hx_pos_625c4b7884703cdc_555_set_bluramount)
HXLINE( 556)		this->bluramount = value;
HXLINE( 557)		this->shader->bluramount->value = ::Array_obj< Float >::__new(1)->init(0,value);
HXLINE( 558)		return this->bluramount;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiltshiftEffect_obj,set_bluramount,return )

Float TiltshiftEffect_obj::set_center(Float value){
            	HX_STACKFRAME(&_hx_pos_625c4b7884703cdc_562_set_center)
HXLINE( 563)		this->center = value;
HXLINE( 564)		this->shader->center->value = ::Array_obj< Float >::__new(1)->init(0,value);
HXLINE( 565)		return this->center;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiltshiftEffect_obj,set_center,return )


::hx::ObjectPtr< TiltshiftEffect_obj > TiltshiftEffect_obj::__new() {
	::hx::ObjectPtr< TiltshiftEffect_obj > __this = new TiltshiftEffect_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TiltshiftEffect_obj > TiltshiftEffect_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TiltshiftEffect_obj *__this = (TiltshiftEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TiltshiftEffect_obj), true, "shaders.TiltshiftEffect"));
	*(void **)__this = TiltshiftEffect_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TiltshiftEffect_obj::TiltshiftEffect_obj()
{
}

void TiltshiftEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiltshiftEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(bluramount,"bluramount");
	HX_MARK_MEMBER_NAME(center,"center");
	HX_MARK_END_CLASS();
}

void TiltshiftEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(bluramount,"bluramount");
	HX_VISIT_MEMBER_NAME(center,"center");
}

::hx::Val TiltshiftEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"center") ) { return ::hx::Val( center ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bluramount") ) { return ::hx::Val( bluramount ); }
		if (HX_FIELD_EQ(inName,"set_center") ) { return ::hx::Val( set_center_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_bluramount") ) { return ::hx::Val( set_bluramount_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TiltshiftEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::Tiltshift >(); return inValue; }
		if (HX_FIELD_EQ(inName,"center") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_center(inValue.Cast< Float >()) );center=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bluramount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bluramount(inValue.Cast< Float >()) );bluramount=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiltshiftEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("bluramount",bf,4b,fa,17));
	outFields->push(HX_("center",d5,25,db,05));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TiltshiftEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::Tiltshift */ ,(int)offsetof(TiltshiftEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(TiltshiftEffect_obj,bluramount),HX_("bluramount",bf,4b,fa,17)},
	{::hx::fsFloat,(int)offsetof(TiltshiftEffect_obj,center),HX_("center",d5,25,db,05)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TiltshiftEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String TiltshiftEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("bluramount",bf,4b,fa,17),
	HX_("center",d5,25,db,05),
	HX_("set_bluramount",7c,bc,0f,ae),
	HX_("set_center",12,34,e0,f9),
	::String(null()) };

::hx::Class TiltshiftEffect_obj::__mClass;

void TiltshiftEffect_obj::__register()
{
	TiltshiftEffect_obj _hx_dummy;
	TiltshiftEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.TiltshiftEffect",b6,e5,8c,a6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TiltshiftEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TiltshiftEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TiltshiftEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TiltshiftEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
