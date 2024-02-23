#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_shaders_RGBPalette
#include <shaders/RGBPalette.h>
#endif
#ifndef INCLUDED_shaders_RGBPaletteShader
#include <shaders/RGBPaletteShader.h>
#endif
#ifndef INCLUDED_shaders_RGBShaderReference
#include <shaders/RGBShaderReference.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_46c982142a68a835_47_new,"shaders.RGBShaderReference","new",0x601057ab,"shaders.RGBShaderReference.new","shaders/RGBPalette.hx",47,0xd43b990f)
HX_LOCAL_STACK_FRAME(_hx_pos_46c982142a68a835_75_set_r,"shaders.RGBShaderReference","set_r",0xa794cb60,"shaders.RGBShaderReference.set_r","shaders/RGBPalette.hx",75,0xd43b990f)
HX_LOCAL_STACK_FRAME(_hx_pos_46c982142a68a835_80_set_g,"shaders.RGBShaderReference","set_g",0xa794cb55,"shaders.RGBShaderReference.set_g","shaders/RGBPalette.hx",80,0xd43b990f)
HX_LOCAL_STACK_FRAME(_hx_pos_46c982142a68a835_85_set_b,"shaders.RGBShaderReference","set_b",0xa794cb50,"shaders.RGBShaderReference.set_b","shaders/RGBPalette.hx",85,0xd43b990f)
HX_LOCAL_STACK_FRAME(_hx_pos_46c982142a68a835_90_set_mult,"shaders.RGBShaderReference","set_mult",0xb7bba5c2,"shaders.RGBShaderReference.set_mult","shaders/RGBPalette.hx",90,0xd43b990f)
HX_LOCAL_STACK_FRAME(_hx_pos_46c982142a68a835_95_set_enabled,"shaders.RGBShaderReference","set_enabled",0xa56db5ef,"shaders.RGBShaderReference.set_enabled","shaders/RGBPalette.hx",95,0xd43b990f)
HX_LOCAL_STACK_FRAME(_hx_pos_46c982142a68a835_103_cloneOriginal,"shaders.RGBShaderReference","cloneOriginal",0x18efdbd9,"shaders.RGBShaderReference.cloneOriginal","shaders/RGBPalette.hx",103,0xd43b990f)
namespace shaders{

void RGBShaderReference_obj::__construct( ::flixel::FlxSprite owner, ::shaders::RGBPalette ref){
            	HX_STACKFRAME(&_hx_pos_46c982142a68a835_47_new)
HXLINE( 100)		this->allowNew = true;
HXLINE(  53)		this->enabled = true;
HXLINE(  60)		this->parent = ref;
HXLINE(  61)		this->_owner = owner;
HXLINE(  62)		this->_original = ref;
HXLINE(  63)		owner->shader = ref->shader;
HXLINE(  66)		{
HXLINE(  67)			this->r = this->parent->r;
HXLINE(  68)			this->set_g(this->parent->g);
HXLINE(  69)			this->set_b(this->parent->b);
HXLINE(  70)			this->set_mult(this->parent->mult);
            		}
            	}

Dynamic RGBShaderReference_obj::__CreateEmpty() { return new RGBShaderReference_obj; }

void *RGBShaderReference_obj::_hx_vtable = 0;

Dynamic RGBShaderReference_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RGBShaderReference_obj > _hx_result = new RGBShaderReference_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool RGBShaderReference_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x14837897;
}

int RGBShaderReference_obj::set_r(int value){
            	HX_STACKFRAME(&_hx_pos_46c982142a68a835_75_set_r)
HXLINE(  76)		bool _hx_tmp;
HXDLIN(  76)		if (this->allowNew) {
HXLINE(  76)			_hx_tmp = (value != this->_original->r);
            		}
            		else {
HXLINE(  76)			_hx_tmp = false;
            		}
HXDLIN(  76)		if (_hx_tmp) {
HXLINE(  76)			this->cloneOriginal();
            		}
HXLINE(  77)		return (this->r = this->parent->set_r(value));
            	}


HX_DEFINE_DYNAMIC_FUNC1(RGBShaderReference_obj,set_r,return )

int RGBShaderReference_obj::set_g(int value){
            	HX_STACKFRAME(&_hx_pos_46c982142a68a835_80_set_g)
HXLINE(  81)		bool _hx_tmp;
HXDLIN(  81)		if (this->allowNew) {
HXLINE(  81)			_hx_tmp = (value != this->_original->g);
            		}
            		else {
HXLINE(  81)			_hx_tmp = false;
            		}
HXDLIN(  81)		if (_hx_tmp) {
HXLINE(  81)			this->cloneOriginal();
            		}
HXLINE(  82)		return (this->g = this->parent->set_g(value));
            	}


HX_DEFINE_DYNAMIC_FUNC1(RGBShaderReference_obj,set_g,return )

int RGBShaderReference_obj::set_b(int value){
            	HX_STACKFRAME(&_hx_pos_46c982142a68a835_85_set_b)
HXLINE(  86)		bool _hx_tmp;
HXDLIN(  86)		if (this->allowNew) {
HXLINE(  86)			_hx_tmp = (value != this->_original->b);
            		}
            		else {
HXLINE(  86)			_hx_tmp = false;
            		}
HXDLIN(  86)		if (_hx_tmp) {
HXLINE(  86)			this->cloneOriginal();
            		}
HXLINE(  87)		return (this->b = this->parent->set_b(value));
            	}


HX_DEFINE_DYNAMIC_FUNC1(RGBShaderReference_obj,set_b,return )

Float RGBShaderReference_obj::set_mult(Float value){
            	HX_STACKFRAME(&_hx_pos_46c982142a68a835_90_set_mult)
HXLINE(  91)		bool _hx_tmp;
HXDLIN(  91)		if (this->allowNew) {
HXLINE(  91)			_hx_tmp = (value != this->_original->mult);
            		}
            		else {
HXLINE(  91)			_hx_tmp = false;
            		}
HXDLIN(  91)		if (_hx_tmp) {
HXLINE(  91)			this->cloneOriginal();
            		}
HXLINE(  92)		return (this->mult = this->parent->set_mult(value));
            	}


HX_DEFINE_DYNAMIC_FUNC1(RGBShaderReference_obj,set_mult,return )

bool RGBShaderReference_obj::set_enabled(bool value){
            	HX_STACKFRAME(&_hx_pos_46c982142a68a835_95_set_enabled)
HXLINE(  96)		 ::flixel::graphics::tile::FlxGraphicsShader _hx_tmp;
HXDLIN(  96)		if (value) {
HXLINE(  96)			_hx_tmp = this->parent->shader;
            		}
            		else {
HXLINE(  96)			_hx_tmp = null();
            		}
HXDLIN(  96)		this->_owner->shader = _hx_tmp;
HXLINE(  97)		return (this->enabled = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(RGBShaderReference_obj,set_enabled,return )

void RGBShaderReference_obj::cloneOriginal(){
            	HX_GC_STACKFRAME(&_hx_pos_46c982142a68a835_103_cloneOriginal)
HXDLIN( 103)		if (this->allowNew) {
HXLINE( 105)			this->allowNew = false;
HXLINE( 106)			if (::hx::IsInstanceNotEq( this->_original,this->parent )) {
HXLINE( 106)				return;
            			}
HXLINE( 108)			this->parent =  ::shaders::RGBPalette_obj::__alloc( HX_CTX );
HXLINE( 109)			this->parent->set_r(this->_original->r);
HXLINE( 110)			this->parent->set_g(this->_original->g);
HXLINE( 111)			this->parent->set_b(this->_original->b);
HXLINE( 112)			this->parent->set_mult(this->_original->mult);
HXLINE( 113)			this->_owner->shader = this->parent->shader;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(RGBShaderReference_obj,cloneOriginal,(void))


::hx::ObjectPtr< RGBShaderReference_obj > RGBShaderReference_obj::__new( ::flixel::FlxSprite owner, ::shaders::RGBPalette ref) {
	::hx::ObjectPtr< RGBShaderReference_obj > __this = new RGBShaderReference_obj();
	__this->__construct(owner,ref);
	return __this;
}

::hx::ObjectPtr< RGBShaderReference_obj > RGBShaderReference_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxSprite owner, ::shaders::RGBPalette ref) {
	RGBShaderReference_obj *__this = (RGBShaderReference_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RGBShaderReference_obj), true, "shaders.RGBShaderReference"));
	*(void **)__this = RGBShaderReference_obj::_hx_vtable;
	__this->__construct(owner,ref);
	return __this;
}

RGBShaderReference_obj::RGBShaderReference_obj()
{
}

void RGBShaderReference_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RGBShaderReference);
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(mult,"mult");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(_owner,"_owner");
	HX_MARK_MEMBER_NAME(_original,"_original");
	HX_MARK_MEMBER_NAME(allowNew,"allowNew");
	HX_MARK_END_CLASS();
}

void RGBShaderReference_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(r,"r");
	HX_VISIT_MEMBER_NAME(g,"g");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(mult,"mult");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(_owner,"_owner");
	HX_VISIT_MEMBER_NAME(_original,"_original");
	HX_VISIT_MEMBER_NAME(allowNew,"allowNew");
}

::hx::Val RGBShaderReference_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return ::hx::Val( r ); }
		if (HX_FIELD_EQ(inName,"g") ) { return ::hx::Val( g ); }
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { return ::hx::Val( mult ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_r") ) { return ::hx::Val( set_r_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_g") ) { return ::hx::Val( set_g_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_b") ) { return ::hx::Val( set_b_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"_owner") ) { return ::hx::Val( _owner ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return ::hx::Val( enabled ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_mult") ) { return ::hx::Val( set_mult_dyn() ); }
		if (HX_FIELD_EQ(inName,"allowNew") ) { return ::hx::Val( allowNew ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_original") ) { return ::hx::Val( _original ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_enabled") ) { return ::hx::Val( set_enabled_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cloneOriginal") ) { return ::hx::Val( cloneOriginal_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RGBShaderReference_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_r(inValue.Cast< int >()) );r=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_g(inValue.Cast< int >()) );g=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_b(inValue.Cast< int >()) );b=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_mult(inValue.Cast< Float >()) );mult=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::shaders::RGBPalette >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_owner") ) { _owner=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_enabled(inValue.Cast< bool >()) );enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"allowNew") ) { allowNew=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_original") ) { _original=inValue.Cast<  ::shaders::RGBPalette >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RGBShaderReference_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("r",72,00,00,00));
	outFields->push(HX_("g",67,00,00,00));
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("mult",f0,67,65,48));
	outFields->push(HX_("enabled",81,04,31,7e));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("_owner",74,df,5d,34));
	outFields->push(HX_("_original",b0,2b,7e,28));
	outFields->push(HX_("allowNew",57,9f,14,9e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RGBShaderReference_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(RGBShaderReference_obj,r),HX_("r",72,00,00,00)},
	{::hx::fsInt,(int)offsetof(RGBShaderReference_obj,g),HX_("g",67,00,00,00)},
	{::hx::fsInt,(int)offsetof(RGBShaderReference_obj,b),HX_("b",62,00,00,00)},
	{::hx::fsFloat,(int)offsetof(RGBShaderReference_obj,mult),HX_("mult",f0,67,65,48)},
	{::hx::fsBool,(int)offsetof(RGBShaderReference_obj,enabled),HX_("enabled",81,04,31,7e)},
	{::hx::fsObject /*  ::shaders::RGBPalette */ ,(int)offsetof(RGBShaderReference_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(RGBShaderReference_obj,_owner),HX_("_owner",74,df,5d,34)},
	{::hx::fsObject /*  ::shaders::RGBPalette */ ,(int)offsetof(RGBShaderReference_obj,_original),HX_("_original",b0,2b,7e,28)},
	{::hx::fsBool,(int)offsetof(RGBShaderReference_obj,allowNew),HX_("allowNew",57,9f,14,9e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RGBShaderReference_obj_sStaticStorageInfo = 0;
#endif

static ::String RGBShaderReference_obj_sMemberFields[] = {
	HX_("r",72,00,00,00),
	HX_("g",67,00,00,00),
	HX_("b",62,00,00,00),
	HX_("mult",f0,67,65,48),
	HX_("enabled",81,04,31,7e),
	HX_("parent",2a,05,7e,ed),
	HX_("_owner",74,df,5d,34),
	HX_("_original",b0,2b,7e,28),
	HX_("set_r",55,9b,2f,7a),
	HX_("set_g",4a,9b,2f,7a),
	HX_("set_b",45,9b,2f,7a),
	HX_("set_mult",ed,7c,7d,76),
	HX_("set_enabled",a4,6b,98,0e),
	HX_("allowNew",57,9f,14,9e),
	HX_("cloneOriginal",ce,28,7b,2a),
	::String(null()) };

::hx::Class RGBShaderReference_obj::__mClass;

void RGBShaderReference_obj::__register()
{
	RGBShaderReference_obj _hx_dummy;
	RGBShaderReference_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.RGBShaderReference",39,a6,32,ea);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RGBShaderReference_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RGBShaderReference_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RGBShaderReference_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RGBShaderReference_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
