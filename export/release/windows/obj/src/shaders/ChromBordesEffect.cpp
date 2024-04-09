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
#ifndef INCLUDED_shaders_ChromBordesEffect
#include <shaders/ChromBordesEffect.h>
#endif
#ifndef INCLUDED_shaders_ChromBordesEffectShader
#include <shaders/ChromBordesEffectShader.h>
#endif
#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4b71968c71e09700_3075_new,"shaders.ChromBordesEffect","new",0x90b0571b,"shaders.ChromBordesEffect.new","shaders/Shaders.hx",3075,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_4b71968c71e09700_3089_set_aberration,"shaders.ChromBordesEffect","set_aberration",0x131178f3,"shaders.ChromBordesEffect.set_aberration","shaders/Shaders.hx",3089,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_4b71968c71e09700_3095_set_effectTime,"shaders.ChromBordesEffect","set_effectTime",0x58b82d20,"shaders.ChromBordesEffect.set_effectTime","shaders/Shaders.hx",3095,0x7800d7f1)
namespace shaders{

void ChromBordesEffect_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_4b71968c71e09700_3075_new)
HXLINE(3080)		this->effectTime = ((Float)0);
HXLINE(3079)		this->aberration = ((Float)0);
HXLINE(3084)		this->shader =  ::shaders::ChromBordesEffectShader_obj::__alloc( HX_CTX );
HXLINE(3085)		this->set_aberration(( (Float)(0) ));
HXLINE(3086)		this->set_effectTime(( (Float)(0) ));
            	}

Dynamic ChromBordesEffect_obj::__CreateEmpty() { return new ChromBordesEffect_obj; }

void *ChromBordesEffect_obj::_hx_vtable = 0;

Dynamic ChromBordesEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChromBordesEffect_obj > _hx_result = new ChromBordesEffect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ChromBordesEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x161f25df) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x161f25df;
	} else {
		return inClassId==(int)0x1e2e565f;
	}
}

Float ChromBordesEffect_obj::set_aberration(Float value){
            	HX_STACKFRAME(&_hx_pos_4b71968c71e09700_3089_set_aberration)
HXLINE(3090)		this->aberration = value;
HXLINE(3091)		this->shader->aberration->value = ::Array_obj< Float >::__new(1)->init(0,value);
HXLINE(3092)		return this->aberration;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ChromBordesEffect_obj,set_aberration,return )

Float ChromBordesEffect_obj::set_effectTime(Float value){
            	HX_STACKFRAME(&_hx_pos_4b71968c71e09700_3095_set_effectTime)
HXLINE(3096)		this->effectTime = value;
HXLINE(3097)		this->shader->effectTime->value = ::Array_obj< Float >::__new(1)->init(0,value);
HXLINE(3098)		return this->effectTime;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ChromBordesEffect_obj,set_effectTime,return )


::hx::ObjectPtr< ChromBordesEffect_obj > ChromBordesEffect_obj::__new() {
	::hx::ObjectPtr< ChromBordesEffect_obj > __this = new ChromBordesEffect_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ChromBordesEffect_obj > ChromBordesEffect_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ChromBordesEffect_obj *__this = (ChromBordesEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChromBordesEffect_obj), true, "shaders.ChromBordesEffect"));
	*(void **)__this = ChromBordesEffect_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ChromBordesEffect_obj::ChromBordesEffect_obj()
{
}

void ChromBordesEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ChromBordesEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(aberration,"aberration");
	HX_MARK_MEMBER_NAME(effectTime,"effectTime");
	HX_MARK_END_CLASS();
}

void ChromBordesEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(aberration,"aberration");
	HX_VISIT_MEMBER_NAME(effectTime,"effectTime");
}

::hx::Val ChromBordesEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"aberration") ) { return ::hx::Val( aberration ); }
		if (HX_FIELD_EQ(inName,"effectTime") ) { return ::hx::Val( effectTime ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_aberration") ) { return ::hx::Val( set_aberration_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_effectTime") ) { return ::hx::Val( set_effectTime_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ChromBordesEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::ChromBordesEffectShader >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"aberration") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_aberration(inValue.Cast< Float >()) );aberration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"effectTime") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_effectTime(inValue.Cast< Float >()) );effectTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ChromBordesEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("aberration",11,bb,a1,6d));
	outFields->push(HX_("effectTime",3e,6f,48,b3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ChromBordesEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::ChromBordesEffectShader */ ,(int)offsetof(ChromBordesEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(ChromBordesEffect_obj,aberration),HX_("aberration",11,bb,a1,6d)},
	{::hx::fsFloat,(int)offsetof(ChromBordesEffect_obj,effectTime),HX_("effectTime",3e,6f,48,b3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ChromBordesEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String ChromBordesEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("aberration",11,bb,a1,6d),
	HX_("effectTime",3e,6f,48,b3),
	HX_("set_aberration",ce,2b,b7,03),
	HX_("set_effectTime",fb,df,5d,49),
	::String(null()) };

::hx::Class ChromBordesEffect_obj::__mClass;

void ChromBordesEffect_obj::__register()
{
	ChromBordesEffect_obj _hx_dummy;
	ChromBordesEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.ChromBordesEffect",a9,2d,22,62);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChromBordesEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ChromBordesEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChromBordesEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChromBordesEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
