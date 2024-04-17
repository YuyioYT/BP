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
#ifndef INCLUDED_shaders_BlockedGlitchEffect
#include <shaders/BlockedGlitchEffect.h>
#endif
#ifndef INCLUDED_shaders_BlockedGlitchShader
#include <shaders/BlockedGlitchShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_38a5679fe7ab0425_1739_new,"shaders.BlockedGlitchEffect","new",0x66afcc84,"shaders.BlockedGlitchEffect.new","shaders/Shaders.hx",1739,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_38a5679fe7ab0425_1758_update,"shaders.BlockedGlitchEffect","update",0xf51ab865,"shaders.BlockedGlitchEffect.update","shaders/Shaders.hx",1758,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_38a5679fe7ab0425_1762_set_resolution,"shaders.BlockedGlitchEffect","set_resolution",0x03b79445,"shaders.BlockedGlitchEffect.set_resolution","shaders/Shaders.hx",1762,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_38a5679fe7ab0425_1767_set_hasColorTransform,"shaders.BlockedGlitchEffect","set_hasColorTransform",0x7283ba8a,"shaders.BlockedGlitchEffect.set_hasColorTransform","shaders/Shaders.hx",1767,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_38a5679fe7ab0425_1773_set_colorMultiplier,"shaders.BlockedGlitchEffect","set_colorMultiplier",0x91865d0b,"shaders.BlockedGlitchEffect.set_colorMultiplier","shaders/Shaders.hx",1773,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_38a5679fe7ab0425_1779_set_time,"shaders.BlockedGlitchEffect","set_time",0x7ea06266,"shaders.BlockedGlitchEffect.set_time","shaders/Shaders.hx",1779,0x7800d7f1)
HX_LOCAL_STACK_FRAME(_hx_pos_38a5679fe7ab0425_1786_set_Enabled,"shaders.BlockedGlitchEffect","set_Enabled",0xe29453a8,"shaders.BlockedGlitchEffect.set_Enabled","shaders/Shaders.hx",1786,0x7800d7f1)
namespace shaders{

void BlockedGlitchEffect_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_38a5679fe7ab0425_1739_new)
HXLINE(1748)		this->Enabled = false;
HXLINE(1746)		this->hasColorTransform = false;
HXLINE(1745)		this->colorMultiplier = ((Float)0);
HXLINE(1744)		this->resolution = ((Float)0);
HXLINE(1743)		this->time = ((Float)0);
HXLINE(1741)		this->shader =  ::shaders::BlockedGlitchShader_obj::__alloc( HX_CTX );
HXLINE(1752)		this->set_time(( (Float)(0) ));
HXLINE(1753)		this->set_resolution(( (Float)(0) ));
HXLINE(1754)		this->set_colorMultiplier(( (Float)(0) ));
HXLINE(1755)		this->set_hasColorTransform(false);
            	}

Dynamic BlockedGlitchEffect_obj::__CreateEmpty() { return new BlockedGlitchEffect_obj; }

void *BlockedGlitchEffect_obj::_hx_vtable = 0;

Dynamic BlockedGlitchEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BlockedGlitchEffect_obj > _hx_result = new BlockedGlitchEffect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BlockedGlitchEffect_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x25fbfce4;
}

void BlockedGlitchEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_38a5679fe7ab0425_1758_update)
HXLINE(1759)		::Array< Float > base = this->shader->time->value;
HXDLIN(1759)		int _hx_tmp = 0;
HXDLIN(1759)		base[_hx_tmp] = (base->__get(_hx_tmp) + elapsed);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BlockedGlitchEffect_obj,update,(void))

Float BlockedGlitchEffect_obj::set_resolution(Float v){
            	HX_STACKFRAME(&_hx_pos_38a5679fe7ab0425_1762_set_resolution)
HXLINE(1763)		this->resolution = v;
HXLINE(1764)		this->shader->screenSize->value = ::Array_obj< Float >::__new(1)->init(0,this->resolution);
HXLINE(1765)		return this->resolution;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BlockedGlitchEffect_obj,set_resolution,return )

bool BlockedGlitchEffect_obj::set_hasColorTransform(bool value){
            	HX_STACKFRAME(&_hx_pos_38a5679fe7ab0425_1767_set_hasColorTransform)
HXLINE(1768)		this->hasColorTransform = value;
HXLINE(1769)		this->shader->hasColorTransform->value = ::Array_obj< bool >::__new(1)->init(0,this->hasColorTransform);
HXLINE(1770)		return this->hasColorTransform;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BlockedGlitchEffect_obj,set_hasColorTransform,return )

Float BlockedGlitchEffect_obj::set_colorMultiplier(Float value){
            	HX_STACKFRAME(&_hx_pos_38a5679fe7ab0425_1773_set_colorMultiplier)
HXLINE(1774)		this->colorMultiplier = value;
HXLINE(1775)		this->shader->colorMultiplier->value = ::Array_obj< Float >::__new(1)->init(0,value);
HXLINE(1776)		return this->colorMultiplier;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BlockedGlitchEffect_obj,set_colorMultiplier,return )

Float BlockedGlitchEffect_obj::set_time(Float value){
            	HX_STACKFRAME(&_hx_pos_38a5679fe7ab0425_1779_set_time)
HXLINE(1780)		this->time = value;
HXLINE(1781)		this->shader->time->value = ::Array_obj< Float >::__new(1)->init(0,value);
HXLINE(1782)		return this->time;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BlockedGlitchEffect_obj,set_time,return )

bool BlockedGlitchEffect_obj::set_Enabled(bool v){
            	HX_STACKFRAME(&_hx_pos_38a5679fe7ab0425_1786_set_Enabled)
HXLINE(1787)		this->Enabled = v;
HXLINE(1788)		this->shader->enabled->value = ::Array_obj< bool >::__new(1)->init(0,this->Enabled);
HXLINE(1789)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BlockedGlitchEffect_obj,set_Enabled,return )


::hx::ObjectPtr< BlockedGlitchEffect_obj > BlockedGlitchEffect_obj::__new() {
	::hx::ObjectPtr< BlockedGlitchEffect_obj > __this = new BlockedGlitchEffect_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BlockedGlitchEffect_obj > BlockedGlitchEffect_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BlockedGlitchEffect_obj *__this = (BlockedGlitchEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BlockedGlitchEffect_obj), true, "shaders.BlockedGlitchEffect"));
	*(void **)__this = BlockedGlitchEffect_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BlockedGlitchEffect_obj::BlockedGlitchEffect_obj()
{
}

void BlockedGlitchEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BlockedGlitchEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(resolution,"resolution");
	HX_MARK_MEMBER_NAME(colorMultiplier,"colorMultiplier");
	HX_MARK_MEMBER_NAME(hasColorTransform,"hasColorTransform");
	HX_MARK_MEMBER_NAME(Enabled,"Enabled");
	HX_MARK_END_CLASS();
}

void BlockedGlitchEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(resolution,"resolution");
	HX_VISIT_MEMBER_NAME(colorMultiplier,"colorMultiplier");
	HX_VISIT_MEMBER_NAME(hasColorTransform,"hasColorTransform");
	HX_VISIT_MEMBER_NAME(Enabled,"Enabled");
}

::hx::Val BlockedGlitchEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return ::hx::Val( time ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Enabled") ) { return ::hx::Val( Enabled ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_time") ) { return ::hx::Val( set_time_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resolution") ) { return ::hx::Val( resolution ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_Enabled") ) { return ::hx::Val( set_Enabled_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_resolution") ) { return ::hx::Val( set_resolution_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"colorMultiplier") ) { return ::hx::Val( colorMultiplier ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hasColorTransform") ) { return ::hx::Val( hasColorTransform ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_colorMultiplier") ) { return ::hx::Val( set_colorMultiplier_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"set_hasColorTransform") ) { return ::hx::Val( set_hasColorTransform_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BlockedGlitchEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_time(inValue.Cast< Float >()) );time=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::BlockedGlitchShader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Enabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_Enabled(inValue.Cast< bool >()) );Enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resolution") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_resolution(inValue.Cast< Float >()) );resolution=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"colorMultiplier") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_colorMultiplier(inValue.Cast< Float >()) );colorMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hasColorTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_hasColorTransform(inValue.Cast< bool >()) );hasColorTransform=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BlockedGlitchEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("time",0d,cc,fc,4c));
	outFields->push(HX_("resolution",2c,35,49,6d));
	outFields->push(HX_("colorMultiplier",c4,16,81,50));
	outFields->push(HX_("hasColorTransform",83,14,eb,f0));
	outFields->push(HX_("Enabled",61,2c,82,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BlockedGlitchEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::BlockedGlitchShader */ ,(int)offsetof(BlockedGlitchEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(BlockedGlitchEffect_obj,time),HX_("time",0d,cc,fc,4c)},
	{::hx::fsFloat,(int)offsetof(BlockedGlitchEffect_obj,resolution),HX_("resolution",2c,35,49,6d)},
	{::hx::fsFloat,(int)offsetof(BlockedGlitchEffect_obj,colorMultiplier),HX_("colorMultiplier",c4,16,81,50)},
	{::hx::fsBool,(int)offsetof(BlockedGlitchEffect_obj,hasColorTransform),HX_("hasColorTransform",83,14,eb,f0)},
	{::hx::fsBool,(int)offsetof(BlockedGlitchEffect_obj,Enabled),HX_("Enabled",61,2c,82,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BlockedGlitchEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String BlockedGlitchEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("time",0d,cc,fc,4c),
	HX_("resolution",2c,35,49,6d),
	HX_("colorMultiplier",c4,16,81,50),
	HX_("hasColorTransform",83,14,eb,f0),
	HX_("Enabled",61,2c,82,4b),
	HX_("update",09,86,05,87),
	HX_("set_resolution",e9,a5,5e,03),
	HX_("set_hasColorTransform",66,e5,a1,c3),
	HX_("set_colorMultiplier",e7,d8,28,18),
	HX_("set_time",0a,e1,14,7b),
	HX_("set_Enabled",84,93,e9,db),
	::String(null()) };

::hx::Class BlockedGlitchEffect_obj::__mClass;

void BlockedGlitchEffect_obj::__register()
{
	BlockedGlitchEffect_obj _hx_dummy;
	BlockedGlitchEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.BlockedGlitchEffect",92,7a,ae,e5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BlockedGlitchEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BlockedGlitchEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BlockedGlitchEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BlockedGlitchEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
