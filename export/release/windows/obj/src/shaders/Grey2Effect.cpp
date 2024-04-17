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
#ifndef INCLUDED_shaders_Grey2Effect
#include <shaders/Grey2Effect.h>
#endif
#ifndef INCLUDED_shaders_Grey2Shader
#include <shaders/Grey2Shader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_087644254e7674ef_732_new,"shaders.Grey2Effect","new",0x4c6d72f6,"shaders.Grey2Effect.new","shaders/Shaders.hx",732,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_087644254e7674ef_744_set_iStrength,"shaders.Grey2Effect","set_iStrength",0xfb395003,"shaders.Grey2Effect.set_iStrength","shaders/Shaders.hx",744,0x7800d7f1)
namespace shaders{

void Grey2Effect_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_087644254e7674ef_732_new)
HXLINE( 736)		this->iStrength = ((Float)0);
HXLINE( 734)		this->shader =  ::shaders::Grey2Shader_obj::__alloc( HX_CTX );
HXLINE( 740)		this->set_iStrength(( (Float)(0) ));
            	}

Dynamic Grey2Effect_obj::__CreateEmpty() { return new Grey2Effect_obj; }

void *Grey2Effect_obj::_hx_vtable = 0;

Dynamic Grey2Effect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Grey2Effect_obj > _hx_result = new Grey2Effect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Grey2Effect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e2e565f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
	} else {
		return inClassId==(int)0x50716056;
	}
}

Float Grey2Effect_obj::set_iStrength(Float value){
            	HX_STACKFRAME(&_hx_pos_087644254e7674ef_744_set_iStrength)
HXLINE( 745)		this->iStrength = value;
HXLINE( 746)		this->shader->iStrength->value = ::Array_obj< Float >::__new(1)->init(0,value);
HXLINE( 747)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Grey2Effect_obj,set_iStrength,return )


::hx::ObjectPtr< Grey2Effect_obj > Grey2Effect_obj::__new() {
	::hx::ObjectPtr< Grey2Effect_obj > __this = new Grey2Effect_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Grey2Effect_obj > Grey2Effect_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Grey2Effect_obj *__this = (Grey2Effect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Grey2Effect_obj), true, "shaders.Grey2Effect"));
	*(void **)__this = Grey2Effect_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Grey2Effect_obj::Grey2Effect_obj()
{
}

void Grey2Effect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Grey2Effect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(iStrength,"iStrength");
	HX_MARK_END_CLASS();
}

void Grey2Effect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(iStrength,"iStrength");
}

::hx::Val Grey2Effect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"iStrength") ) { return ::hx::Val( iStrength ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_iStrength") ) { return ::hx::Val( set_iStrength_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Grey2Effect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::Grey2Shader >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"iStrength") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_iStrength(inValue.Cast< Float >()) );iStrength=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Grey2Effect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("iStrength",0a,a0,44,ed));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Grey2Effect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::Grey2Shader */ ,(int)offsetof(Grey2Effect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(Grey2Effect_obj,iStrength),HX_("iStrength",0a,a0,44,ed)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Grey2Effect_obj_sStaticStorageInfo = 0;
#endif

static ::String Grey2Effect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("iStrength",0a,a0,44,ed),
	HX_("set_iStrength",ed,55,ae,f3),
	::String(null()) };

::hx::Class Grey2Effect_obj::__mClass;

void Grey2Effect_obj::__register()
{
	Grey2Effect_obj _hx_dummy;
	Grey2Effect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.Grey2Effect",04,80,57,1e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Grey2Effect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Grey2Effect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Grey2Effect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Grey2Effect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
