#include <hxcpp.h>

#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_objects_PixelSplashShader
#include <objects/PixelSplashShader.h>
#endif
#ifndef INCLUDED_objects_PixelSplashShaderRef
#include <objects/PixelSplashShaderRef.h>
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
#ifndef INCLUDED_shaders_RGBPalette
#include <shaders/RGBPalette.h>
#endif
#ifndef INCLUDED_shaders_RGBPaletteShader
#include <shaders/RGBPaletteShader.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_637e812d5650d12a_195_new,"objects.PixelSplashShaderRef","new",0xbfb1c94d,"objects.PixelSplashShaderRef.new","objects/NoteSplash.hx",195,0xe471e78a)
static const Float _hx_array_data_83ce1edb_1[] = {
	(Float)0,(Float)0,(Float)0,
};
static const Float _hx_array_data_83ce1edb_2[] = {
	(Float)0,(Float)0,(Float)0,
};
static const Float _hx_array_data_83ce1edb_3[] = {
	(Float)0,(Float)0,(Float)0,
};
static const Float _hx_array_data_83ce1edb_4[] = {
	(Float)1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_637e812d5650d12a_199_copyValues,"objects.PixelSplashShaderRef","copyValues",0x6e00182a,"objects.PixelSplashShaderRef.copyValues","objects/NoteSplash.hx",199,0xe471e78a)
namespace objects{

void PixelSplashShaderRef_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_637e812d5650d12a_195_new)
HXLINE( 196)		this->shader =  ::objects::PixelSplashShader_obj::__alloc( HX_CTX );
HXLINE( 219)		this->shader->r->value = ::Array_obj< Float >::fromData( _hx_array_data_83ce1edb_1,3);
HXLINE( 220)		this->shader->g->value = ::Array_obj< Float >::fromData( _hx_array_data_83ce1edb_2,3);
HXLINE( 221)		this->shader->b->value = ::Array_obj< Float >::fromData( _hx_array_data_83ce1edb_3,3);
HXLINE( 222)		this->shader->mult->value = ::Array_obj< Float >::fromData( _hx_array_data_83ce1edb_4,1);
HXLINE( 224)		Float pixel = ( (Float)(1) );
HXLINE( 225)		if (::states::PlayState_obj::get_isPixelStage()) {
HXLINE( 225)			pixel = ::states::PlayState_obj::daPixelZoom;
            		}
HXLINE( 226)		this->shader->uBlocksize->value = ::Array_obj< Float >::__new(2)->init(0,pixel)->init(1,pixel);
            	}

Dynamic PixelSplashShaderRef_obj::__CreateEmpty() { return new PixelSplashShaderRef_obj; }

void *PixelSplashShaderRef_obj::_hx_vtable = 0;

Dynamic PixelSplashShaderRef_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PixelSplashShaderRef_obj > _hx_result = new PixelSplashShaderRef_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PixelSplashShaderRef_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x59d7d4d5;
}

void PixelSplashShaderRef_obj::copyValues( ::shaders::RGBPalette tempShader){
            	HX_STACKFRAME(&_hx_pos_637e812d5650d12a_199_copyValues)
HXLINE( 200)		bool enabled = false;
HXLINE( 201)		if (::hx::IsNotNull( tempShader )) {
HXLINE( 202)			enabled = true;
            		}
HXLINE( 204)		if (enabled) {
HXLINE( 206)			{
HXLINE( 207)				{
HXLINE( 208)					this->shader->r->value[0] = tempShader->shader->r->value->__get(0);
HXLINE( 209)					this->shader->g->value[0] = tempShader->shader->g->value->__get(0);
HXLINE( 210)					this->shader->b->value[0] = tempShader->shader->b->value->__get(0);
            				}
HXLINE( 207)				{
HXLINE( 208)					this->shader->r->value[1] = tempShader->shader->r->value->__get(1);
HXLINE( 209)					this->shader->g->value[1] = tempShader->shader->g->value->__get(1);
HXLINE( 210)					this->shader->b->value[1] = tempShader->shader->b->value->__get(1);
            				}
HXLINE( 207)				{
HXLINE( 208)					this->shader->r->value[2] = tempShader->shader->r->value->__get(2);
HXLINE( 209)					this->shader->g->value[2] = tempShader->shader->g->value->__get(2);
HXLINE( 210)					this->shader->b->value[2] = tempShader->shader->b->value->__get(2);
            				}
            			}
HXLINE( 212)			this->shader->mult->value[0] = tempShader->shader->mult->value->__get(0);
            		}
            		else {
HXLINE( 214)			this->shader->mult->value[0] = ((Float)0.0);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PixelSplashShaderRef_obj,copyValues,(void))


::hx::ObjectPtr< PixelSplashShaderRef_obj > PixelSplashShaderRef_obj::__new() {
	::hx::ObjectPtr< PixelSplashShaderRef_obj > __this = new PixelSplashShaderRef_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PixelSplashShaderRef_obj > PixelSplashShaderRef_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PixelSplashShaderRef_obj *__this = (PixelSplashShaderRef_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PixelSplashShaderRef_obj), true, "objects.PixelSplashShaderRef"));
	*(void **)__this = PixelSplashShaderRef_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PixelSplashShaderRef_obj::PixelSplashShaderRef_obj()
{
}

void PixelSplashShaderRef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PixelSplashShaderRef);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_END_CLASS();
}

void PixelSplashShaderRef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
}

::hx::Val PixelSplashShaderRef_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copyValues") ) { return ::hx::Val( copyValues_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PixelSplashShaderRef_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::objects::PixelSplashShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PixelSplashShaderRef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PixelSplashShaderRef_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::objects::PixelSplashShader */ ,(int)offsetof(PixelSplashShaderRef_obj,shader),HX_("shader",25,bf,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PixelSplashShaderRef_obj_sStaticStorageInfo = 0;
#endif

static ::String PixelSplashShaderRef_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("copyValues",77,69,7b,05),
	::String(null()) };

::hx::Class PixelSplashShaderRef_obj::__mClass;

void PixelSplashShaderRef_obj::__register()
{
	PixelSplashShaderRef_obj _hx_dummy;
	PixelSplashShaderRef_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.PixelSplashShaderRef",db,1e,ce,83);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PixelSplashShaderRef_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PixelSplashShaderRef_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PixelSplashShaderRef_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PixelSplashShaderRef_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace objects
