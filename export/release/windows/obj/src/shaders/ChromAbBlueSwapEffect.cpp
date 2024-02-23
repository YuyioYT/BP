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
#ifndef INCLUDED_shaders_ChromAbBlueSwapEffect
#include <shaders/ChromAbBlueSwapEffect.h>
#endif
#ifndef INCLUDED_shaders_ChromAbBlueSwapShader
#include <shaders/ChromAbBlueSwapShader.h>
#endif
#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1894caa01ecca0c9_2176_new,"shaders.ChromAbBlueSwapEffect","new",0x75cbf73c,"shaders.ChromAbBlueSwapEffect.new","shaders/Shaders.hx",2176,0x7800d7f1)
static const Float _hx_array_data_3e40e94a_1[] = {
	(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_1894caa01ecca0c9_2188_update,"shaders.ChromAbBlueSwapEffect","update",0x7c1410ad,"shaders.ChromAbBlueSwapEffect.update","shaders/Shaders.hx",2188,0x7800d7f1)
namespace shaders{

void ChromAbBlueSwapEffect_obj::__construct(::hx::Null< Float >  __o_strength){
            		Float strength = __o_strength.Default(((Float)0.0));
            	HX_GC_STACKFRAME(&_hx_pos_1894caa01ecca0c9_2176_new)
HXLINE(2179)		this->strength = ((Float)0.0);
HXLINE(2178)		this->shader =  ::shaders::ChromAbBlueSwapShader_obj::__alloc( HX_CTX );
HXLINE(2183)		this->shader->strength->value = ::Array_obj< Float >::fromData( _hx_array_data_3e40e94a_1,1);
            	}

Dynamic ChromAbBlueSwapEffect_obj::__CreateEmpty() { return new ChromAbBlueSwapEffect_obj; }

void *ChromAbBlueSwapEffect_obj::_hx_vtable = 0;

Dynamic ChromAbBlueSwapEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChromAbBlueSwapEffect_obj > _hx_result = new ChromAbBlueSwapEffect_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ChromAbBlueSwapEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e2e565f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
	} else {
		return inClassId==(int)0x4eb1241c;
	}
}

void ChromAbBlueSwapEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_1894caa01ecca0c9_2188_update)
HXDLIN(2188)		this->shader->strength->value[0] = this->strength;
            	}



::hx::ObjectPtr< ChromAbBlueSwapEffect_obj > ChromAbBlueSwapEffect_obj::__new(::hx::Null< Float >  __o_strength) {
	::hx::ObjectPtr< ChromAbBlueSwapEffect_obj > __this = new ChromAbBlueSwapEffect_obj();
	__this->__construct(__o_strength);
	return __this;
}

::hx::ObjectPtr< ChromAbBlueSwapEffect_obj > ChromAbBlueSwapEffect_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_strength) {
	ChromAbBlueSwapEffect_obj *__this = (ChromAbBlueSwapEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChromAbBlueSwapEffect_obj), true, "shaders.ChromAbBlueSwapEffect"));
	*(void **)__this = ChromAbBlueSwapEffect_obj::_hx_vtable;
	__this->__construct(__o_strength);
	return __this;
}

ChromAbBlueSwapEffect_obj::ChromAbBlueSwapEffect_obj()
{
}

void ChromAbBlueSwapEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ChromAbBlueSwapEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(strength,"strength");
	HX_MARK_END_CLASS();
}

void ChromAbBlueSwapEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(strength,"strength");
}

::hx::Val ChromAbBlueSwapEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { return ::hx::Val( strength ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ChromAbBlueSwapEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::ChromAbBlueSwapShader >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { strength=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ChromAbBlueSwapEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("strength",81,d2,8e,8e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ChromAbBlueSwapEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::ChromAbBlueSwapShader */ ,(int)offsetof(ChromAbBlueSwapEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(ChromAbBlueSwapEffect_obj,strength),HX_("strength",81,d2,8e,8e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ChromAbBlueSwapEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String ChromAbBlueSwapEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("strength",81,d2,8e,8e),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class ChromAbBlueSwapEffect_obj::__mClass;

void ChromAbBlueSwapEffect_obj::__register()
{
	ChromAbBlueSwapEffect_obj _hx_dummy;
	ChromAbBlueSwapEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.ChromAbBlueSwapEffect",4a,e9,40,3e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChromAbBlueSwapEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ChromAbBlueSwapEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChromAbBlueSwapEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChromAbBlueSwapEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
