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
#ifndef INCLUDED_shaders_ChromaticAberrationEffect
#include <shaders/ChromaticAberrationEffect.h>
#endif
#ifndef INCLUDED_shaders_ChromaticAberrationShader
#include <shaders/ChromaticAberrationShader.h>
#endif
#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a219f57715d777bd_83_new,"shaders.ChromaticAberrationEffect","new",0xca1e154c,"shaders.ChromaticAberrationEffect.new","shaders/Shaders.hx",83,0x7800d7f1)
static const Float _hx_array_data_1586bf5a_1[] = {
	0.0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a219f57715d777bd_91_setChrome,"shaders.ChromaticAberrationEffect","setChrome",0x68f62ca8,"shaders.ChromaticAberrationEffect.setChrome","shaders/Shaders.hx",91,0x7800d7f1)
static const Float _hx_array_data_1586bf5a_3[] = {
	0.0,
};
namespace shaders{

void ChromaticAberrationEffect_obj::__construct(::hx::Null< Float >  __o_offset){
            		Float offset = __o_offset.Default(((Float)0.00));
            	HX_GC_STACKFRAME(&_hx_pos_a219f57715d777bd_83_new)
HXLINE(  84)		this->shader =  ::shaders::ChromaticAberrationShader_obj::__alloc( HX_CTX );
HXLINE(  85)		this->shader->rOffset->value = ::Array_obj< Float >::__new(1)->init(0,offset);
HXLINE(  86)		this->shader->gOffset->value = ::Array_obj< Float >::fromData( _hx_array_data_1586bf5a_1,1);
HXLINE(  87)		this->shader->bOffset->value = ::Array_obj< Float >::__new(1)->init(0,-(offset));
            	}

Dynamic ChromaticAberrationEffect_obj::__CreateEmpty() { return new ChromaticAberrationEffect_obj; }

void *ChromaticAberrationEffect_obj::_hx_vtable = 0;

Dynamic ChromaticAberrationEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChromaticAberrationEffect_obj > _hx_result = new ChromaticAberrationEffect_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ChromaticAberrationEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e2e565f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
	} else {
		return inClassId==(int)0x45c1cb2c;
	}
}

void ChromaticAberrationEffect_obj::setChrome(Float chromeOffset){
            	HX_STACKFRAME(&_hx_pos_a219f57715d777bd_91_setChrome)
HXLINE(  92)		this->shader->rOffset->value = ::Array_obj< Float >::__new(1)->init(0,chromeOffset);
HXLINE(  93)		this->shader->gOffset->value = ::Array_obj< Float >::fromData( _hx_array_data_1586bf5a_3,1);
HXLINE(  94)		this->shader->bOffset->value = ::Array_obj< Float >::__new(1)->init(0,(chromeOffset * ( (Float)(-1) )));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ChromaticAberrationEffect_obj,setChrome,(void))


::hx::ObjectPtr< ChromaticAberrationEffect_obj > ChromaticAberrationEffect_obj::__new(::hx::Null< Float >  __o_offset) {
	::hx::ObjectPtr< ChromaticAberrationEffect_obj > __this = new ChromaticAberrationEffect_obj();
	__this->__construct(__o_offset);
	return __this;
}

::hx::ObjectPtr< ChromaticAberrationEffect_obj > ChromaticAberrationEffect_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_offset) {
	ChromaticAberrationEffect_obj *__this = (ChromaticAberrationEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChromaticAberrationEffect_obj), true, "shaders.ChromaticAberrationEffect"));
	*(void **)__this = ChromaticAberrationEffect_obj::_hx_vtable;
	__this->__construct(__o_offset);
	return __this;
}

ChromaticAberrationEffect_obj::ChromaticAberrationEffect_obj()
{
}

void ChromaticAberrationEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ChromaticAberrationEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(chromeOffset,"chromeOffset");
	HX_MARK_END_CLASS();
}

void ChromaticAberrationEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(chromeOffset,"chromeOffset");
}

::hx::Val ChromaticAberrationEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setChrome") ) { return ::hx::Val( setChrome_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"chromeOffset") ) { return ::hx::Val( chromeOffset ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ChromaticAberrationEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::ChromaticAberrationShader >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"chromeOffset") ) { chromeOffset=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ChromaticAberrationEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("chromeOffset",ad,5c,7f,36));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ChromaticAberrationEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::ChromaticAberrationShader */ ,(int)offsetof(ChromaticAberrationEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(ChromaticAberrationEffect_obj,chromeOffset),HX_("chromeOffset",ad,5c,7f,36)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ChromaticAberrationEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String ChromaticAberrationEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("chromeOffset",ad,5c,7f,36),
	HX_("setChrome",bc,6e,57,22),
	::String(null()) };

::hx::Class ChromaticAberrationEffect_obj::__mClass;

void ChromaticAberrationEffect_obj::__register()
{
	ChromaticAberrationEffect_obj _hx_dummy;
	ChromaticAberrationEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.ChromaticAberrationEffect",5a,bf,86,15);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChromaticAberrationEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ChromaticAberrationEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChromaticAberrationEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChromaticAberrationEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
