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
#ifndef INCLUDED_openfl_display_ShaderParameter_Bool
#include <openfl/display/ShaderParameter_Bool.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_shaders_BarrelBlurEffect
#include <shaders/BarrelBlurEffect.h>
#endif
#ifndef INCLUDED_shaders_BarrelBlurShader
#include <shaders/BarrelBlurShader.h>
#endif
#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2b630411b78e8674_2698_new,"shaders.BarrelBlurEffect","new",0xdba5e070,"shaders.BarrelBlurEffect.new","shaders/Shaders.hx",2698,0x7800d7f1)
static const Float _hx_array_data_d8b9287e_1[] = {
	0.0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_2b630411b78e8674_2723_update,"shaders.BarrelBlurEffect","update",0xa8f0dff9,"shaders.BarrelBlurEffect.update","shaders/Shaders.hx",2723,0x7800d7f1)
namespace shaders{

void BarrelBlurEffect_obj::__construct(Float barrel,Float zoom,bool doChroma,Float angle,Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_2b630411b78e8674_2698_new)
HXLINE(2704)		this->iTime = ((Float)0.0);
HXLINE(2700)		this->shader =  ::shaders::BarrelBlurShader_obj::__alloc( HX_CTX );
HXLINE(2713)		this->shader->barrel->value = ::Array_obj< Float >::__new(1)->init(0,barrel);
HXLINE(2714)		this->shader->zoom->value = ::Array_obj< Float >::__new(1)->init(0,zoom);
HXLINE(2715)		this->shader->doChroma->value = ::Array_obj< bool >::__new(1)->init(0,doChroma);
HXLINE(2716)		this->shader->angle->value = ::Array_obj< Float >::__new(1)->init(0,angle);
HXLINE(2717)		this->shader->iTime->value = ::Array_obj< Float >::fromData( _hx_array_data_d8b9287e_1,1);
HXLINE(2718)		this->shader->x->value = ::Array_obj< Float >::__new(1)->init(0,x);
HXLINE(2719)		this->shader->y->value = ::Array_obj< Float >::__new(1)->init(0,y);
            	}

Dynamic BarrelBlurEffect_obj::__CreateEmpty() { return new BarrelBlurEffect_obj; }

void *BarrelBlurEffect_obj::_hx_vtable = 0;

Dynamic BarrelBlurEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BarrelBlurEffect_obj > _hx_result = new BarrelBlurEffect_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool BarrelBlurEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e2e565f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
	} else {
		return inClassId==(int)0x2616deec;
	}
}

void BarrelBlurEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_2b630411b78e8674_2723_update)
HXLINE(2728)		 ::shaders::BarrelBlurEffect _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(2728)		_hx_tmp->iTime = (_hx_tmp->iTime + elapsed);
HXLINE(2729)		this->shader->iTime->value = ::Array_obj< Float >::__new(1)->init(0,this->iTime);
            	}



::hx::ObjectPtr< BarrelBlurEffect_obj > BarrelBlurEffect_obj::__new(Float barrel,Float zoom,bool doChroma,Float angle,Float x,Float y) {
	::hx::ObjectPtr< BarrelBlurEffect_obj > __this = new BarrelBlurEffect_obj();
	__this->__construct(barrel,zoom,doChroma,angle,x,y);
	return __this;
}

::hx::ObjectPtr< BarrelBlurEffect_obj > BarrelBlurEffect_obj::__alloc(::hx::Ctx *_hx_ctx,Float barrel,Float zoom,bool doChroma,Float angle,Float x,Float y) {
	BarrelBlurEffect_obj *__this = (BarrelBlurEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BarrelBlurEffect_obj), true, "shaders.BarrelBlurEffect"));
	*(void **)__this = BarrelBlurEffect_obj::_hx_vtable;
	__this->__construct(barrel,zoom,doChroma,angle,x,y);
	return __this;
}

BarrelBlurEffect_obj::BarrelBlurEffect_obj()
{
}

void BarrelBlurEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BarrelBlurEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(iTime,"iTime");
	HX_MARK_END_CLASS();
}

void BarrelBlurEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(iTime,"iTime");
}

::hx::Val BarrelBlurEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"iTime") ) { return ::hx::Val( iTime ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BarrelBlurEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"iTime") ) { iTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::BarrelBlurShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BarrelBlurEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("iTime",16,e1,e8,ac));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BarrelBlurEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::BarrelBlurShader */ ,(int)offsetof(BarrelBlurEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(BarrelBlurEffect_obj,iTime),HX_("iTime",16,e1,e8,ac)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BarrelBlurEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String BarrelBlurEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("iTime",16,e1,e8,ac),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class BarrelBlurEffect_obj::__mClass;

void BarrelBlurEffect_obj::__register()
{
	BarrelBlurEffect_obj _hx_dummy;
	BarrelBlurEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.BarrelBlurEffect",7e,28,b9,d8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BarrelBlurEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BarrelBlurEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BarrelBlurEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BarrelBlurEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
