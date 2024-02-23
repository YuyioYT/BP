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
#ifndef INCLUDED_shaders_ChromaticBlurEffect
#include <shaders/ChromaticBlurEffect.h>
#endif
#ifndef INCLUDED_shaders_ChromaticBlurShader
#include <shaders/ChromaticBlurShader.h>
#endif
#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_107617739d26abc5_1170_new,"shaders.ChromaticBlurEffect","new",0x30720262,"shaders.ChromaticBlurEffect.new","shaders/Shaders.hx",1170,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_107617739d26abc5_1178_update,"shaders.ChromaticBlurEffect","update",0xcba50147,"shaders.ChromaticBlurEffect.update","shaders/Shaders.hx",1178,0x7800d7f1)
namespace shaders{

void ChromaticBlurEffect_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_107617739d26abc5_1170_new)
HXDLIN(1170)		this->shader =  ::shaders::ChromaticBlurShader_obj::__alloc( HX_CTX );
            	}

Dynamic ChromaticBlurEffect_obj::__CreateEmpty() { return new ChromaticBlurEffect_obj; }

void *ChromaticBlurEffect_obj::_hx_vtable = 0;

Dynamic ChromaticBlurEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChromaticBlurEffect_obj > _hx_result = new ChromaticBlurEffect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ChromaticBlurEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e2e565f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
	} else {
		return inClassId==(int)0x31fa6bc2;
	}
}

void ChromaticBlurEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_107617739d26abc5_1178_update)
            	}



::hx::ObjectPtr< ChromaticBlurEffect_obj > ChromaticBlurEffect_obj::__new() {
	::hx::ObjectPtr< ChromaticBlurEffect_obj > __this = new ChromaticBlurEffect_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ChromaticBlurEffect_obj > ChromaticBlurEffect_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ChromaticBlurEffect_obj *__this = (ChromaticBlurEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChromaticBlurEffect_obj), true, "shaders.ChromaticBlurEffect"));
	*(void **)__this = ChromaticBlurEffect_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ChromaticBlurEffect_obj::ChromaticBlurEffect_obj()
{
}

void ChromaticBlurEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ChromaticBlurEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_END_CLASS();
}

void ChromaticBlurEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
}

::hx::Val ChromaticBlurEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ChromaticBlurEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::ChromaticBlurShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ChromaticBlurEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ChromaticBlurEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::ChromaticBlurShader */ ,(int)offsetof(ChromaticBlurEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ChromaticBlurEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String ChromaticBlurEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class ChromaticBlurEffect_obj::__mClass;

void ChromaticBlurEffect_obj::__register()
{
	ChromaticBlurEffect_obj _hx_dummy;
	ChromaticBlurEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.ChromaticBlurEffect",70,e9,ac,f1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChromaticBlurEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ChromaticBlurEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChromaticBlurEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChromaticBlurEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
