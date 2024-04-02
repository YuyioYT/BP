#include <hxcpp.h>

#ifndef INCLUDED_ManifestResources
#include <ManifestResources.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__assets_fonts_fsb_otf
#include <__ASSET__OPENFL__assets_fonts_fsb_otf.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fd232978015c4eb6_1759_new,"__ASSET__OPENFL__assets_fonts_fsb_otf","new",0x630b1c52,"__ASSET__OPENFL__assets_fonts_fsb_otf.new","ManifestResources.hx",1759,0xf77aa668)

void __ASSET__OPENFL__assets_fonts_fsb_otf_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_fd232978015c4eb6_1759_new)
HXDLIN(1759)		this->_hx___fontPath = (::ManifestResources_obj::rootPath + HX_("assets/fonts/fsb.otf",d1,7e,17,14));
HXDLIN(1759)		this->name = HX_("Fighting Spirit turbo Bold Italic",08,c1,1c,7a);
HXDLIN(1759)		super::__construct(null());
            	}

Dynamic __ASSET__OPENFL__assets_fonts_fsb_otf_obj::__CreateEmpty() { return new __ASSET__OPENFL__assets_fonts_fsb_otf_obj; }

void *__ASSET__OPENFL__assets_fonts_fsb_otf_obj::_hx_vtable = 0;

Dynamic __ASSET__OPENFL__assets_fonts_fsb_otf_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< __ASSET__OPENFL__assets_fonts_fsb_otf_obj > _hx_result = new __ASSET__OPENFL__assets_fonts_fsb_otf_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool __ASSET__OPENFL__assets_fonts_fsb_otf_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e22acf4) {
		if (inClassId<=(int)0x12d0aa2c) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x12d0aa2c;
		} else {
			return inClassId==(int)0x2e22acf4;
		}
	} else {
		return inClassId==(int)0x40cee131;
	}
}


::hx::ObjectPtr< __ASSET__OPENFL__assets_fonts_fsb_otf_obj > __ASSET__OPENFL__assets_fonts_fsb_otf_obj::__new() {
	::hx::ObjectPtr< __ASSET__OPENFL__assets_fonts_fsb_otf_obj > __this = new __ASSET__OPENFL__assets_fonts_fsb_otf_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< __ASSET__OPENFL__assets_fonts_fsb_otf_obj > __ASSET__OPENFL__assets_fonts_fsb_otf_obj::__alloc(::hx::Ctx *_hx_ctx) {
	__ASSET__OPENFL__assets_fonts_fsb_otf_obj *__this = (__ASSET__OPENFL__assets_fonts_fsb_otf_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(__ASSET__OPENFL__assets_fonts_fsb_otf_obj), true, "__ASSET__OPENFL__assets_fonts_fsb_otf"));
	*(void **)__this = __ASSET__OPENFL__assets_fonts_fsb_otf_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

__ASSET__OPENFL__assets_fonts_fsb_otf_obj::__ASSET__OPENFL__assets_fonts_fsb_otf_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *__ASSET__OPENFL__assets_fonts_fsb_otf_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *__ASSET__OPENFL__assets_fonts_fsb_otf_obj_sStaticStorageInfo = 0;
#endif

::hx::Class __ASSET__OPENFL__assets_fonts_fsb_otf_obj::__mClass;

void __ASSET__OPENFL__assets_fonts_fsb_otf_obj::__register()
{
	__ASSET__OPENFL__assets_fonts_fsb_otf_obj _hx_dummy;
	__ASSET__OPENFL__assets_fonts_fsb_otf_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("__ASSET__OPENFL__assets_fonts_fsb_otf",60,4b,56,8d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< __ASSET__OPENFL__assets_fonts_fsb_otf_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = __ASSET__OPENFL__assets_fonts_fsb_otf_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = __ASSET__OPENFL__assets_fonts_fsb_otf_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

