#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
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
#ifndef INCLUDED_shaders_Grain
#include <shaders/Grain.h>
#endif
#ifndef INCLUDED_shaders_GrainEffect
#include <shaders/GrainEffect.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d5028b314026d282_905_new,"shaders.GrainEffect","new",0x4d95c63e,"shaders.GrainEffect.new","shaders/Shaders.hx",905,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_d5028b314026d282_922_set_grainsize,"shaders.GrainEffect","set_grainsize",0x238b50bd,"shaders.GrainEffect.set_grainsize","shaders/Shaders.hx",922,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_d5028b314026d282_928_set_lumamount,"shaders.GrainEffect","set_lumamount",0x17fe03dd,"shaders.GrainEffect.set_lumamount","shaders/Shaders.hx",928,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_d5028b314026d282_934_set_lockAlpha,"shaders.GrainEffect","set_lockAlpha",0xc8e954b4,"shaders.GrainEffect.set_lockAlpha","shaders/Shaders.hx",934,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_d5028b314026d282_940_set_coloramount,"shaders.GrainEffect","set_coloramount",0x770eaefc,"shaders.GrainEffect.set_coloramount","shaders/Shaders.hx",940,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_d5028b314026d282_946_update,"shaders.GrainEffect","update",0xbc680eeb,"shaders.GrainEffect.update","shaders/Shaders.hx",946,0x7800d7f1)
namespace shaders{

void GrainEffect_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_d5028b314026d282_905_new)
HXLINE( 911)		this->coloramount = ((Float)0);
HXLINE( 910)		this->lockAlpha = true;
HXLINE( 909)		this->lumamount = ((Float)0);
HXLINE( 908)		this->grainsize = ((Float)0);
HXLINE( 907)		this->shader =  ::shaders::Grain_obj::__alloc( HX_CTX );
HXLINE( 915)		this->set_grainsize(( (Float)(0) ));
HXLINE( 916)		this->set_lumamount(( (Float)(0) ));
HXLINE( 917)		this->set_lockAlpha(true);
HXLINE( 918)		this->set_coloramount(( (Float)(0) ));
HXLINE( 919)		Float _hx_tmp = ::flixel::FlxG_obj::random->_hx_float(0,8,null());
HXDLIN( 919)		this->shader->uTime->value = ::Array_obj< Float >::__new(1)->init(0,_hx_tmp);
            	}

Dynamic GrainEffect_obj::__CreateEmpty() { return new GrainEffect_obj; }

void *GrainEffect_obj::_hx_vtable = 0;

Dynamic GrainEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GrainEffect_obj > _hx_result = new GrainEffect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GrainEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e2e565f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
	} else {
		return inClassId==(int)0x308c6f9e;
	}
}

Float GrainEffect_obj::set_grainsize(Float value){
            	HX_STACKFRAME(&_hx_pos_d5028b314026d282_922_set_grainsize)
HXLINE( 923)		this->grainsize = value;
HXLINE( 924)		this->shader->grainsize->value = ::Array_obj< Float >::__new(1)->init(0,value);
HXLINE( 925)		return this->grainsize;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GrainEffect_obj,set_grainsize,return )

Float GrainEffect_obj::set_lumamount(Float value){
            	HX_STACKFRAME(&_hx_pos_d5028b314026d282_928_set_lumamount)
HXLINE( 929)		this->lumamount = value;
HXLINE( 930)		this->shader->lumamount->value = ::Array_obj< Float >::__new(1)->init(0,value);
HXLINE( 931)		return this->lumamount;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GrainEffect_obj,set_lumamount,return )

bool GrainEffect_obj::set_lockAlpha(bool value){
            	HX_STACKFRAME(&_hx_pos_d5028b314026d282_934_set_lockAlpha)
HXLINE( 935)		this->lockAlpha = value;
HXLINE( 936)		this->shader->lockAlpha->value = ::Array_obj< bool >::__new(1)->init(0,value);
HXLINE( 937)		return this->lockAlpha;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GrainEffect_obj,set_lockAlpha,return )

Float GrainEffect_obj::set_coloramount(Float value){
            	HX_STACKFRAME(&_hx_pos_d5028b314026d282_940_set_coloramount)
HXLINE( 941)		this->coloramount = value;
HXLINE( 942)		this->shader->coloramount->value = ::Array_obj< Float >::__new(1)->init(0,value);
HXLINE( 943)		return this->coloramount;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GrainEffect_obj,set_coloramount,return )

void GrainEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_d5028b314026d282_946_update)
HXLINE( 947)		::Array< Float > base = this->shader->uTime->value;
HXDLIN( 947)		int _hx_tmp = 0;
HXDLIN( 947)		base[_hx_tmp] = (base->__get(_hx_tmp) + elapsed);
            	}



::hx::ObjectPtr< GrainEffect_obj > GrainEffect_obj::__new() {
	::hx::ObjectPtr< GrainEffect_obj > __this = new GrainEffect_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GrainEffect_obj > GrainEffect_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GrainEffect_obj *__this = (GrainEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GrainEffect_obj), true, "shaders.GrainEffect"));
	*(void **)__this = GrainEffect_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GrainEffect_obj::GrainEffect_obj()
{
}

void GrainEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GrainEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(grainsize,"grainsize");
	HX_MARK_MEMBER_NAME(lumamount,"lumamount");
	HX_MARK_MEMBER_NAME(lockAlpha,"lockAlpha");
	HX_MARK_MEMBER_NAME(coloramount,"coloramount");
	HX_MARK_END_CLASS();
}

void GrainEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(grainsize,"grainsize");
	HX_VISIT_MEMBER_NAME(lumamount,"lumamount");
	HX_VISIT_MEMBER_NAME(lockAlpha,"lockAlpha");
	HX_VISIT_MEMBER_NAME(coloramount,"coloramount");
}

::hx::Val GrainEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"grainsize") ) { return ::hx::Val( grainsize ); }
		if (HX_FIELD_EQ(inName,"lumamount") ) { return ::hx::Val( lumamount ); }
		if (HX_FIELD_EQ(inName,"lockAlpha") ) { return ::hx::Val( lockAlpha ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"coloramount") ) { return ::hx::Val( coloramount ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_grainsize") ) { return ::hx::Val( set_grainsize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_lumamount") ) { return ::hx::Val( set_lumamount_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_lockAlpha") ) { return ::hx::Val( set_lockAlpha_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_coloramount") ) { return ::hx::Val( set_coloramount_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GrainEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::Grain >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"grainsize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_grainsize(inValue.Cast< Float >()) );grainsize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lumamount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_lumamount(inValue.Cast< Float >()) );lumamount=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lockAlpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_lockAlpha(inValue.Cast< bool >()) );lockAlpha=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"coloramount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_coloramount(inValue.Cast< Float >()) );coloramount=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GrainEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("grainsize",7c,63,1a,b7));
	outFields->push(HX_("lumamount",9c,16,8d,ab));
	outFields->push(HX_("lockAlpha",73,67,78,5c));
	outFields->push(HX_("coloramount",7b,2f,97,5a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GrainEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::Grain */ ,(int)offsetof(GrainEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(GrainEffect_obj,grainsize),HX_("grainsize",7c,63,1a,b7)},
	{::hx::fsFloat,(int)offsetof(GrainEffect_obj,lumamount),HX_("lumamount",9c,16,8d,ab)},
	{::hx::fsBool,(int)offsetof(GrainEffect_obj,lockAlpha),HX_("lockAlpha",73,67,78,5c)},
	{::hx::fsFloat,(int)offsetof(GrainEffect_obj,coloramount),HX_("coloramount",7b,2f,97,5a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GrainEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String GrainEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("grainsize",7c,63,1a,b7),
	HX_("lumamount",9c,16,8d,ab),
	HX_("lockAlpha",73,67,78,5c),
	HX_("coloramount",7b,2f,97,5a),
	HX_("set_grainsize",5f,19,84,bd),
	HX_("set_lumamount",7f,cc,f6,b1),
	HX_("set_lockAlpha",56,1d,e2,62),
	HX_("set_coloramount",1e,64,44,17),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class GrainEffect_obj::__mClass;

void GrainEffect_obj::__register()
{
	GrainEffect_obj _hx_dummy;
	GrainEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.GrainEffect",4c,8f,72,fe);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GrainEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GrainEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GrainEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GrainEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
