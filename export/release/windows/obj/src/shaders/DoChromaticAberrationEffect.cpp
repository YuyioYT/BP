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
#ifndef INCLUDED_shaders_ChromaticAberrationShader
#include <shaders/ChromaticAberrationShader.h>
#endif
#ifndef INCLUDED_shaders_DoChromaticAberrationEffect
#include <shaders/DoChromaticAberrationEffect.h>
#endif
#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_00430a225f970c9c_99_new,"shaders.DoChromaticAberrationEffect","new",0xc66b74c1,"shaders.DoChromaticAberrationEffect.new","shaders/Shaders.hx",99,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_00430a225f970c9c_111_set_offset,"shaders.DoChromaticAberrationEffect","set_offset",0x8c46bf8f,"shaders.DoChromaticAberrationEffect.set_offset","shaders/Shaders.hx",111,0x7800d7f1)
static const Float _hx_array_data_0708004f_2[] = {
	0.0,
};
namespace shaders{

void DoChromaticAberrationEffect_obj::__construct(::hx::Null< Float >  __o_offset){
            		Float offset = __o_offset.Default(((Float)0.00));
            	HX_GC_STACKFRAME(&_hx_pos_00430a225f970c9c_99_new)
HXLINE( 102)		this->offset = ((Float)0.0);
HXLINE( 106)		this->shader =  ::shaders::ChromaticAberrationShader_obj::__alloc( HX_CTX );
HXLINE( 107)		this->set_offset(offset);
            	}

Dynamic DoChromaticAberrationEffect_obj::__CreateEmpty() { return new DoChromaticAberrationEffect_obj; }

void *DoChromaticAberrationEffect_obj::_hx_vtable = 0;

Dynamic DoChromaticAberrationEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DoChromaticAberrationEffect_obj > _hx_result = new DoChromaticAberrationEffect_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DoChromaticAberrationEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x04fb24a1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x04fb24a1;
	} else {
		return inClassId==(int)0x1e2e565f;
	}
}

Float DoChromaticAberrationEffect_obj::set_offset(Float v){
            	HX_STACKFRAME(&_hx_pos_00430a225f970c9c_111_set_offset)
HXLINE( 112)		this->offset = v;
HXLINE( 113)		this->shader->rOffset->value = ::Array_obj< Float >::__new(1)->init(0,v);
HXLINE( 114)		this->shader->gOffset->value = ::Array_obj< Float >::fromData( _hx_array_data_0708004f_2,1);
HXLINE( 115)		this->shader->bOffset->value = ::Array_obj< Float >::__new(1)->init(0,(v * ( (Float)(-1) )));
HXLINE( 116)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DoChromaticAberrationEffect_obj,set_offset,return )


::hx::ObjectPtr< DoChromaticAberrationEffect_obj > DoChromaticAberrationEffect_obj::__new(::hx::Null< Float >  __o_offset) {
	::hx::ObjectPtr< DoChromaticAberrationEffect_obj > __this = new DoChromaticAberrationEffect_obj();
	__this->__construct(__o_offset);
	return __this;
}

::hx::ObjectPtr< DoChromaticAberrationEffect_obj > DoChromaticAberrationEffect_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_offset) {
	DoChromaticAberrationEffect_obj *__this = (DoChromaticAberrationEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DoChromaticAberrationEffect_obj), true, "shaders.DoChromaticAberrationEffect"));
	*(void **)__this = DoChromaticAberrationEffect_obj::_hx_vtable;
	__this->__construct(__o_offset);
	return __this;
}

DoChromaticAberrationEffect_obj::DoChromaticAberrationEffect_obj()
{
}

void DoChromaticAberrationEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DoChromaticAberrationEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_END_CLASS();
}

void DoChromaticAberrationEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(offset,"offset");
}

::hx::Val DoChromaticAberrationEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_offset") ) { return ::hx::Val( set_offset_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DoChromaticAberrationEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::ChromaticAberrationShader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_offset(inValue.Cast< Float >()) );offset=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DoChromaticAberrationEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("offset",93,97,3f,60));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DoChromaticAberrationEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::ChromaticAberrationShader */ ,(int)offsetof(DoChromaticAberrationEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(DoChromaticAberrationEffect_obj,offset),HX_("offset",93,97,3f,60)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DoChromaticAberrationEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String DoChromaticAberrationEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("offset",93,97,3f,60),
	HX_("set_offset",d0,a5,44,54),
	::String(null()) };

::hx::Class DoChromaticAberrationEffect_obj::__mClass;

void DoChromaticAberrationEffect_obj::__register()
{
	DoChromaticAberrationEffect_obj _hx_dummy;
	DoChromaticAberrationEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.DoChromaticAberrationEffect",4f,00,08,07);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DoChromaticAberrationEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DoChromaticAberrationEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DoChromaticAberrationEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DoChromaticAberrationEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
