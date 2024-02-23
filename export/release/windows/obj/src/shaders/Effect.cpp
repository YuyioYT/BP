#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_shaders_Effect
#include <shaders/Effect.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_1f4c61aac642aad7_3265_update,"shaders.Effect","update",0xfaf18766,"shaders.Effect.update","shaders/Shaders.hx",3265,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_1f4c61aac642aad7_3269_setValue,"shaders.Effect","setValue",0x87e1bb0c,"shaders.Effect.setValue","shaders/Shaders.hx",3269,0x7800d7f1)
namespace shaders{

void Effect_obj::__construct() { }

Dynamic Effect_obj::__CreateEmpty() { return new Effect_obj; }

void *Effect_obj::_hx_vtable = 0;

Dynamic Effect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Effect_obj > _hx_result = new Effect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Effect_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1e2e565f;
}

void Effect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_1f4c61aac642aad7_3265_update)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Effect_obj,update,(void))

void Effect_obj::setValue( ::flixel::graphics::tile::FlxGraphicsShader shader,::String variable,Float value){
            	HX_STACKFRAME(&_hx_pos_1f4c61aac642aad7_3269_setValue)
HXDLIN(3269)		::Reflect_obj::setProperty(::Reflect_obj::getProperty(shader,HX_("variable",3c,12,0d,69)),HX_("value",71,7f,b8,31),::cpp::VirtualArray_obj::__new(1)->init(0,value));
            	}


HX_DEFINE_DYNAMIC_FUNC3(Effect_obj,setValue,(void))


Effect_obj::Effect_obj()
{
}

::hx::Val Effect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setValue") ) { return ::hx::Val( setValue_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Effect_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Effect_obj_sStaticStorageInfo = 0;
#endif

static ::String Effect_obj_sMemberFields[] = {
	HX_("update",09,86,05,87),
	HX_("setValue",6f,e8,ec,3f),
	::String(null()) };

::hx::Class Effect_obj::__mClass;

void Effect_obj::__register()
{
	Effect_obj _hx_dummy;
	Effect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.Effect",71,55,18,97);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Effect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Effect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Effect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Effect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
