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
#ifndef INCLUDED_shaders_PaletteEffect
#include <shaders/PaletteEffect.h>
#endif
#ifndef INCLUDED_shaders_PaletteShader
#include <shaders/PaletteShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_430c8fb2ae83bd83_3649_new,"shaders.PaletteEffect","new",0xe9a3e77e,"shaders.PaletteEffect.new","shaders/Shaders.hx",3649,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_430c8fb2ae83bd83_3662_update,"shaders.PaletteEffect","update",0x977235ab,"shaders.PaletteEffect.update","shaders/Shaders.hx",3662,0x7800d7f1)
namespace shaders{

void PaletteEffect_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_430c8fb2ae83bd83_3649_new)
HXLINE(3653)		this->paletteSize = ((Float)8.0);
HXLINE(3652)		this->strength = ((Float)0.0);
HXLINE(3651)		this->shader =  ::shaders::PaletteShader_obj::__alloc( HX_CTX );
HXLINE(3657)		this->shader->strength->value = ::Array_obj< Float >::__new(1)->init(0,this->strength);
HXLINE(3658)		this->shader->paletteSize->value = ::Array_obj< Float >::__new(1)->init(0,this->paletteSize);
            	}

Dynamic PaletteEffect_obj::__CreateEmpty() { return new PaletteEffect_obj; }

void *PaletteEffect_obj::_hx_vtable = 0;

Dynamic PaletteEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PaletteEffect_obj > _hx_result = new PaletteEffect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PaletteEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0a97295e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0a97295e;
	} else {
		return inClassId==(int)0x1e2e565f;
	}
}

void PaletteEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_430c8fb2ae83bd83_3662_update)
HXLINE(3663)		this->shader->strength->value = ::Array_obj< Float >::__new(1)->init(0,this->strength);
HXLINE(3664)		this->shader->paletteSize->value = ::Array_obj< Float >::__new(1)->init(0,this->paletteSize);
            	}



::hx::ObjectPtr< PaletteEffect_obj > PaletteEffect_obj::__new() {
	::hx::ObjectPtr< PaletteEffect_obj > __this = new PaletteEffect_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PaletteEffect_obj > PaletteEffect_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PaletteEffect_obj *__this = (PaletteEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PaletteEffect_obj), true, "shaders.PaletteEffect"));
	*(void **)__this = PaletteEffect_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PaletteEffect_obj::PaletteEffect_obj()
{
}

void PaletteEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PaletteEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(strength,"strength");
	HX_MARK_MEMBER_NAME(paletteSize,"paletteSize");
	HX_MARK_END_CLASS();
}

void PaletteEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(strength,"strength");
	HX_VISIT_MEMBER_NAME(paletteSize,"paletteSize");
}

::hx::Val PaletteEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { return ::hx::Val( strength ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"paletteSize") ) { return ::hx::Val( paletteSize ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PaletteEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::PaletteShader >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { strength=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"paletteSize") ) { paletteSize=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PaletteEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("strength",81,d2,8e,8e));
	outFields->push(HX_("paletteSize",dc,b8,0a,64));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PaletteEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::PaletteShader */ ,(int)offsetof(PaletteEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(PaletteEffect_obj,strength),HX_("strength",81,d2,8e,8e)},
	{::hx::fsFloat,(int)offsetof(PaletteEffect_obj,paletteSize),HX_("paletteSize",dc,b8,0a,64)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PaletteEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String PaletteEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("strength",81,d2,8e,8e),
	HX_("paletteSize",dc,b8,0a,64),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class PaletteEffect_obj::__mClass;

void PaletteEffect_obj::__register()
{
	PaletteEffect_obj _hx_dummy;
	PaletteEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.PaletteEffect",8c,10,07,b6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PaletteEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PaletteEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PaletteEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PaletteEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
