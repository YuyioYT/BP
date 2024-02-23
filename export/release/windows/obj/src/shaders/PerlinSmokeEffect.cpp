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
#ifndef INCLUDED_shaders_PerlinSmokeEffect
#include <shaders/PerlinSmokeEffect.h>
#endif
#ifndef INCLUDED_shaders_PerlinSmokeShader
#include <shaders/PerlinSmokeShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7f0be9248f1d034f_2769_new,"shaders.PerlinSmokeEffect","new",0x4132993e,"shaders.PerlinSmokeEffect.new","shaders/Shaders.hx",2769,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_7f0be9248f1d034f_2784_update,"shaders.PerlinSmokeEffect","update",0x6a511beb,"shaders.PerlinSmokeEffect.update","shaders/Shaders.hx",2784,0x7800d7f1)
namespace shaders{

void PerlinSmokeEffect_obj::__construct(Float waveStrength,Float smokeStrength){
            	HX_GC_STACKFRAME(&_hx_pos_7f0be9248f1d034f_2769_new)
HXLINE(2775)		this->iTime = ((Float)0.0);
HXLINE(2774)		this->speed = ((Float)1);
HXLINE(2771)		this->shader =  ::shaders::PerlinSmokeShader_obj::__alloc( HX_CTX );
HXLINE(2778)		this->shader->waveStrength->value = ::Array_obj< Float >::__new(1)->init(0,waveStrength);
HXLINE(2779)		this->shader->smokeStrength->value = ::Array_obj< Float >::__new(1)->init(0,smokeStrength);
            	}

Dynamic PerlinSmokeEffect_obj::__CreateEmpty() { return new PerlinSmokeEffect_obj; }

void *PerlinSmokeEffect_obj::_hx_vtable = 0;

Dynamic PerlinSmokeEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PerlinSmokeEffect_obj > _hx_result = new PerlinSmokeEffect_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool PerlinSmokeEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e2e565f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
	} else {
		return inClassId==(int)0x4d0bcc1e;
	}
}

void PerlinSmokeEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_7f0be9248f1d034f_2784_update)
HXLINE(2787)		 ::shaders::PerlinSmokeEffect _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(2787)		_hx_tmp->iTime = (_hx_tmp->iTime + (elapsed * this->speed));
HXLINE(2788)		this->shader->iTime->value = ::Array_obj< Float >::__new(1)->init(0,this->iTime);
            	}



::hx::ObjectPtr< PerlinSmokeEffect_obj > PerlinSmokeEffect_obj::__new(Float waveStrength,Float smokeStrength) {
	::hx::ObjectPtr< PerlinSmokeEffect_obj > __this = new PerlinSmokeEffect_obj();
	__this->__construct(waveStrength,smokeStrength);
	return __this;
}

::hx::ObjectPtr< PerlinSmokeEffect_obj > PerlinSmokeEffect_obj::__alloc(::hx::Ctx *_hx_ctx,Float waveStrength,Float smokeStrength) {
	PerlinSmokeEffect_obj *__this = (PerlinSmokeEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PerlinSmokeEffect_obj), true, "shaders.PerlinSmokeEffect"));
	*(void **)__this = PerlinSmokeEffect_obj::_hx_vtable;
	__this->__construct(waveStrength,smokeStrength);
	return __this;
}

PerlinSmokeEffect_obj::PerlinSmokeEffect_obj()
{
}

void PerlinSmokeEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PerlinSmokeEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(iTime,"iTime");
	HX_MARK_END_CLASS();
}

void PerlinSmokeEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(iTime,"iTime");
}

::hx::Val PerlinSmokeEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return ::hx::Val( speed ); }
		if (HX_FIELD_EQ(inName,"iTime") ) { return ::hx::Val( iTime ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PerlinSmokeEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iTime") ) { iTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::PerlinSmokeShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PerlinSmokeEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("speed",87,97,69,81));
	outFields->push(HX_("iTime",16,e1,e8,ac));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PerlinSmokeEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::PerlinSmokeShader */ ,(int)offsetof(PerlinSmokeEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(PerlinSmokeEffect_obj,speed),HX_("speed",87,97,69,81)},
	{::hx::fsFloat,(int)offsetof(PerlinSmokeEffect_obj,iTime),HX_("iTime",16,e1,e8,ac)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PerlinSmokeEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String PerlinSmokeEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("speed",87,97,69,81),
	HX_("iTime",16,e1,e8,ac),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class PerlinSmokeEffect_obj::__mClass;

void PerlinSmokeEffect_obj::__register()
{
	PerlinSmokeEffect_obj _hx_dummy;
	PerlinSmokeEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.PerlinSmokeEffect",4c,e2,69,e8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PerlinSmokeEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PerlinSmokeEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PerlinSmokeEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PerlinSmokeEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
