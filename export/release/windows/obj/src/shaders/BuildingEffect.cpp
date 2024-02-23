#include <hxcpp.h>

#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_shaders_BuildingEffect
#include <shaders/BuildingEffect.h>
#endif
#ifndef INCLUDED_shaders_BuildingShader
#include <shaders/BuildingShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3d5c92a83522b688_15_new,"shaders.BuildingEffect","new",0xda4fe277,"shaders.BuildingEffect.new","shaders/Shaders.hx",15,0x7800d7f1)
static const Float _hx_array_data_6109db05_1[] = {
	(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_3d5c92a83522b688_20_addAlpha,"shaders.BuildingEffect","addAlpha",0xae2bc806,"shaders.BuildingEffect.addAlpha","shaders/Shaders.hx",20,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_3d5c92a83522b688_25_setAlpha,"shaders.BuildingEffect","setAlpha",0x43030ae5,"shaders.BuildingEffect.setAlpha","shaders/Shaders.hx",25,0x7800d7f1)
namespace shaders{

void BuildingEffect_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_3d5c92a83522b688_15_new)
HXLINE(  16)		this->shader =  ::shaders::BuildingShader_obj::__alloc( HX_CTX );
HXLINE(  18)		this->shader->alphaShit->value = ::Array_obj< Float >::fromData( _hx_array_data_6109db05_1,1);
            	}

Dynamic BuildingEffect_obj::__CreateEmpty() { return new BuildingEffect_obj; }

void *BuildingEffect_obj::_hx_vtable = 0;

Dynamic BuildingEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BuildingEffect_obj > _hx_result = new BuildingEffect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BuildingEffect_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a8f79f3;
}

void BuildingEffect_obj::addAlpha(Float alpha){
            	HX_STACKFRAME(&_hx_pos_3d5c92a83522b688_20_addAlpha)
HXLINE(  21)		::haxe::Log_obj::trace(this->shader->alphaShit->value->__get(0),::hx::SourceInfo(HX_("source/shaders/Shaders.hx",e5,b3,1c,bf),21,HX_("shaders.BuildingEffect",05,db,09,61),HX_("addAlpha",7d,cd,f3,9a)));
HXLINE(  22)		::Array< Float > base = this->shader->alphaShit->value;
HXDLIN(  22)		int _hx_tmp = 0;
HXDLIN(  22)		base[_hx_tmp] = (base->__get(_hx_tmp) + alpha);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BuildingEffect_obj,addAlpha,(void))

void BuildingEffect_obj::setAlpha(Float alpha){
            	HX_STACKFRAME(&_hx_pos_3d5c92a83522b688_25_setAlpha)
HXDLIN(  25)		this->shader->alphaShit->value[0] = alpha;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BuildingEffect_obj,setAlpha,(void))


::hx::ObjectPtr< BuildingEffect_obj > BuildingEffect_obj::__new() {
	::hx::ObjectPtr< BuildingEffect_obj > __this = new BuildingEffect_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BuildingEffect_obj > BuildingEffect_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BuildingEffect_obj *__this = (BuildingEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BuildingEffect_obj), true, "shaders.BuildingEffect"));
	*(void **)__this = BuildingEffect_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BuildingEffect_obj::BuildingEffect_obj()
{
}

void BuildingEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BuildingEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_END_CLASS();
}

void BuildingEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
}

::hx::Val BuildingEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addAlpha") ) { return ::hx::Val( addAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"setAlpha") ) { return ::hx::Val( setAlpha_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BuildingEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::BuildingShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BuildingEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BuildingEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::BuildingShader */ ,(int)offsetof(BuildingEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BuildingEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String BuildingEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("addAlpha",7d,cd,f3,9a),
	HX_("setAlpha",5c,10,cb,2f),
	::String(null()) };

::hx::Class BuildingEffect_obj::__mClass;

void BuildingEffect_obj::__register()
{
	BuildingEffect_obj _hx_dummy;
	BuildingEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.BuildingEffect",05,db,09,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BuildingEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BuildingEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BuildingEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BuildingEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
