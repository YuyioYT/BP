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
#ifndef INCLUDED_shaders_WaterEffect
#include <shaders/WaterEffect.h>
#endif
#ifndef INCLUDED_shaders_WaterShader
#include <shaders/WaterShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_45773d1077fa6a4e_3188_new,"shaders.WaterEffect","new",0xd992801a,"shaders.WaterEffect.new","shaders/Shaders.hx",3188,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_45773d1077fa6a4e_3202_update,"shaders.WaterEffect","update",0xafcfe68f,"shaders.WaterEffect.update","shaders/Shaders.hx",3202,0x7800d7f1)
namespace shaders{

void WaterEffect_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_45773d1077fa6a4e_3188_new)
HXLINE(3193)		this->speed = ((Float)1.0);
HXLINE(3192)		this->iTime = ((Float)0.0);
HXLINE(3191)		this->strength = ((Float)10.0);
HXLINE(3190)		this->shader =  ::shaders::WaterShader_obj::__alloc( HX_CTX );
HXLINE(3197)		this->shader->strength->value = ::Array_obj< Float >::__new(1)->init(0,this->strength);
HXLINE(3198)		this->shader->iTime->value = ::Array_obj< Float >::__new(1)->init(0,this->iTime);
            	}

Dynamic WaterEffect_obj::__CreateEmpty() { return new WaterEffect_obj; }

void *WaterEffect_obj::_hx_vtable = 0;

Dynamic WaterEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WaterEffect_obj > _hx_result = new WaterEffect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool WaterEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0aa4e242) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0aa4e242;
	} else {
		return inClassId==(int)0x1e2e565f;
	}
}

void WaterEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_45773d1077fa6a4e_3202_update)
HXLINE(3203)		this->shader->strength->value = ::Array_obj< Float >::__new(1)->init(0,this->strength);
HXLINE(3204)		 ::shaders::WaterEffect _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(3204)		_hx_tmp->iTime = (_hx_tmp->iTime + (elapsed * this->speed));
HXLINE(3205)		this->shader->iTime->value = ::Array_obj< Float >::__new(1)->init(0,this->iTime);
            	}



::hx::ObjectPtr< WaterEffect_obj > WaterEffect_obj::__new() {
	::hx::ObjectPtr< WaterEffect_obj > __this = new WaterEffect_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< WaterEffect_obj > WaterEffect_obj::__alloc(::hx::Ctx *_hx_ctx) {
	WaterEffect_obj *__this = (WaterEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WaterEffect_obj), true, "shaders.WaterEffect"));
	*(void **)__this = WaterEffect_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

WaterEffect_obj::WaterEffect_obj()
{
}

void WaterEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WaterEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(strength,"strength");
	HX_MARK_MEMBER_NAME(iTime,"iTime");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_END_CLASS();
}

void WaterEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(strength,"strength");
	HX_VISIT_MEMBER_NAME(iTime,"iTime");
	HX_VISIT_MEMBER_NAME(speed,"speed");
}

::hx::Val WaterEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"iTime") ) { return ::hx::Val( iTime ); }
		if (HX_FIELD_EQ(inName,"speed") ) { return ::hx::Val( speed ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { return ::hx::Val( strength ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val WaterEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"iTime") ) { iTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::WaterShader >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { strength=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WaterEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("strength",81,d2,8e,8e));
	outFields->push(HX_("iTime",16,e1,e8,ac));
	outFields->push(HX_("speed",87,97,69,81));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WaterEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::WaterShader */ ,(int)offsetof(WaterEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(WaterEffect_obj,strength),HX_("strength",81,d2,8e,8e)},
	{::hx::fsFloat,(int)offsetof(WaterEffect_obj,iTime),HX_("iTime",16,e1,e8,ac)},
	{::hx::fsFloat,(int)offsetof(WaterEffect_obj,speed),HX_("speed",87,97,69,81)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *WaterEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String WaterEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("strength",81,d2,8e,8e),
	HX_("iTime",16,e1,e8,ac),
	HX_("speed",87,97,69,81),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class WaterEffect_obj::__mClass;

void WaterEffect_obj::__register()
{
	WaterEffect_obj _hx_dummy;
	WaterEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.WaterEffect",28,2b,de,b0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WaterEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WaterEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WaterEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WaterEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
