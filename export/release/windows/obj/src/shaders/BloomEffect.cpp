#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
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
#ifndef INCLUDED_shaders_BloomEffect
#include <shaders/BloomEffect.h>
#endif
#ifndef INCLUDED_shaders_BloomShader
#include <shaders/BloomShader.h>
#endif
#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1bd5c785507dc90f_2587_new,"shaders.BloomEffect","new",0xaec0b6c6,"shaders.BloomEffect.new","shaders/Shaders.hx",2587,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_1bd5c785507dc90f_2605_set_effect,"shaders.BloomEffect","set_effect",0xa85dbb28,"shaders.BloomEffect.set_effect","shaders/Shaders.hx",2605,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_1bd5c785507dc90f_2611_set_strength,"shaders.BloomEffect","set_strength",0x0213c6d8,"shaders.BloomEffect.set_strength","shaders/Shaders.hx",2611,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_1bd5c785507dc90f_2617_set_contrast,"shaders.BloomEffect","set_contrast",0xab36e159,"shaders.BloomEffect.set_contrast","shaders/Shaders.hx",2617,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_1bd5c785507dc90f_2623_set_brightness,"shaders.BloomEffect","set_brightness",0x7b5d85e8,"shaders.BloomEffect.set_brightness","shaders/Shaders.hx",2623,0x7800d7f1)
namespace shaders{

void BloomEffect_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_1bd5c785507dc90f_2587_new)
HXLINE(2594)		this->brightness = ((Float)0);
HXLINE(2593)		this->contrast = ((Float)0);
HXLINE(2592)		this->strength = ((Float)0);
HXLINE(2591)		this->effect = ((Float)0);
HXLINE(2589)		this->shader =  ::shaders::BloomShader_obj::__alloc( HX_CTX );
HXLINE(2598)		this->set_effect(( (Float)(0) ));
HXLINE(2599)		this->set_strength(( (Float)(0) ));
HXLINE(2600)		this->set_contrast(( (Float)(0) ));
HXLINE(2601)		this->set_brightness(( (Float)(0) ));
HXLINE(2602)		this->shader->iResolution->value = ::Array_obj< Float >::__new(2)->init(0,::flixel::FlxG_obj::width)->init(1,::flixel::FlxG_obj::height);
            	}

Dynamic BloomEffect_obj::__CreateEmpty() { return new BloomEffect_obj; }

void *BloomEffect_obj::_hx_vtable = 0;

Dynamic BloomEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BloomEffect_obj > _hx_result = new BloomEffect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BloomEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ef52ee) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ef52ee;
	} else {
		return inClassId==(int)0x1e2e565f;
	}
}

Float BloomEffect_obj::set_effect(Float value){
            	HX_STACKFRAME(&_hx_pos_1bd5c785507dc90f_2605_set_effect)
HXLINE(2606)		this->effect = value;
HXLINE(2607)		this->shader->effect->value = ::Array_obj< Float >::__new(1)->init(0,value);
HXLINE(2608)		return this->effect;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BloomEffect_obj,set_effect,return )

Float BloomEffect_obj::set_strength(Float value){
            	HX_STACKFRAME(&_hx_pos_1bd5c785507dc90f_2611_set_strength)
HXLINE(2612)		this->strength = value;
HXLINE(2613)		this->shader->strength->value = ::Array_obj< Float >::__new(1)->init(0,value);
HXLINE(2614)		return this->strength;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BloomEffect_obj,set_strength,return )

Float BloomEffect_obj::set_contrast(Float value){
            	HX_STACKFRAME(&_hx_pos_1bd5c785507dc90f_2617_set_contrast)
HXLINE(2618)		this->contrast = value;
HXLINE(2619)		this->shader->contrast->value = ::Array_obj< Float >::__new(1)->init(0,value);
HXLINE(2620)		return this->contrast;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BloomEffect_obj,set_contrast,return )

Float BloomEffect_obj::set_brightness(Float value){
            	HX_STACKFRAME(&_hx_pos_1bd5c785507dc90f_2623_set_brightness)
HXLINE(2624)		this->brightness = value;
HXLINE(2625)		this->shader->brightness->value = ::Array_obj< Float >::__new(1)->init(0,value);
HXLINE(2626)		return this->brightness;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BloomEffect_obj,set_brightness,return )


::hx::ObjectPtr< BloomEffect_obj > BloomEffect_obj::__new() {
	::hx::ObjectPtr< BloomEffect_obj > __this = new BloomEffect_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BloomEffect_obj > BloomEffect_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BloomEffect_obj *__this = (BloomEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BloomEffect_obj), true, "shaders.BloomEffect"));
	*(void **)__this = BloomEffect_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BloomEffect_obj::BloomEffect_obj()
{
}

void BloomEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BloomEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(effect,"effect");
	HX_MARK_MEMBER_NAME(strength,"strength");
	HX_MARK_MEMBER_NAME(contrast,"contrast");
	HX_MARK_MEMBER_NAME(brightness,"brightness");
	HX_MARK_END_CLASS();
}

void BloomEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(effect,"effect");
	HX_VISIT_MEMBER_NAME(strength,"strength");
	HX_VISIT_MEMBER_NAME(contrast,"contrast");
	HX_VISIT_MEMBER_NAME(brightness,"brightness");
}

::hx::Val BloomEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"effect") ) { return ::hx::Val( effect ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { return ::hx::Val( strength ); }
		if (HX_FIELD_EQ(inName,"contrast") ) { return ::hx::Val( contrast ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"brightness") ) { return ::hx::Val( brightness ); }
		if (HX_FIELD_EQ(inName,"set_effect") ) { return ::hx::Val( set_effect_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_strength") ) { return ::hx::Val( set_strength_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_contrast") ) { return ::hx::Val( set_contrast_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_brightness") ) { return ::hx::Val( set_brightness_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BloomEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::BloomShader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"effect") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_effect(inValue.Cast< Float >()) );effect=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_strength(inValue.Cast< Float >()) );strength=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contrast") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_contrast(inValue.Cast< Float >()) );contrast=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"brightness") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_brightness(inValue.Cast< Float >()) );brightness=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BloomEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("effect",91,5a,a3,60));
	outFields->push(HX_("strength",81,d2,8e,8e));
	outFields->push(HX_("contrast",02,ed,b1,37));
	outFields->push(HX_("brightness",d1,8d,71,65));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BloomEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::BloomShader */ ,(int)offsetof(BloomEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(BloomEffect_obj,effect),HX_("effect",91,5a,a3,60)},
	{::hx::fsFloat,(int)offsetof(BloomEffect_obj,strength),HX_("strength",81,d2,8e,8e)},
	{::hx::fsFloat,(int)offsetof(BloomEffect_obj,contrast),HX_("contrast",02,ed,b1,37)},
	{::hx::fsFloat,(int)offsetof(BloomEffect_obj,brightness),HX_("brightness",d1,8d,71,65)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BloomEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String BloomEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("effect",91,5a,a3,60),
	HX_("strength",81,d2,8e,8e),
	HX_("contrast",02,ed,b1,37),
	HX_("brightness",d1,8d,71,65),
	HX_("set_effect",ce,68,a8,54),
	HX_("set_strength",fe,a9,a1,58),
	HX_("set_contrast",7f,c4,c4,01),
	HX_("set_brightness",8e,fe,86,fb),
	::String(null()) };

::hx::Class BloomEffect_obj::__mClass;

void BloomEffect_obj::__register()
{
	BloomEffect_obj _hx_dummy;
	BloomEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.BloomEffect",d4,9b,28,af);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BloomEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BloomEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BloomEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BloomEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
