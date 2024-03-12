#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_text_FlxTypeText
#include <flixel/addons/text/FlxTypeText.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_objects_Subtitle
#include <objects/Subtitle.h>
#endif
#ifndef INCLUDED_objects_SubtitleManager
#include <objects/SubtitleManager.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ee7f7b8d6b92ac14_8_new,"objects.SubtitleManager","new",0x399427ed,"objects.SubtitleManager.new","objects/SubtitleManager.hx",8,0x7cb30864)
HX_LOCAL_STACK_FRAME(_hx_pos_ee7f7b8d6b92ac14_11_addSubtitle,"objects.SubtitleManager","addSubtitle",0xd66f5fe6,"objects.SubtitleManager.addSubtitle","objects/SubtitleManager.hx",11,0x7cb30864)
HX_LOCAL_STACK_FRAME(_hx_pos_ee7f7b8d6b92ac14_20_onSubtitleComplete,"objects.SubtitleManager","onSubtitleComplete",0x5bf86b43,"objects.SubtitleManager.onSubtitleComplete","objects/SubtitleManager.hx",20,0x7cb30864)
namespace objects{

void SubtitleManager_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_ee7f7b8d6b92ac14_8_new)
HXDLIN(   8)		super::__construct(MaxSize);
            	}

Dynamic SubtitleManager_obj::__CreateEmpty() { return new SubtitleManager_obj; }

void *SubtitleManager_obj::_hx_vtable = 0;

Dynamic SubtitleManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SubtitleManager_obj > _hx_result = new SubtitleManager_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SubtitleManager_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x20b4a725) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x20b4a725;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void SubtitleManager_obj::addSubtitle(::String text, ::Dynamic typeSpeed,Float showTime, ::Dynamic properties){
            	HX_GC_STACKFRAME(&_hx_pos_ee7f7b8d6b92ac14_11_addSubtitle)
HXLINE(  12)		 ::objects::Subtitle subtitle =  ::objects::Subtitle_obj::__alloc( HX_CTX ,text,typeSpeed,showTime,properties);
HXLINE(  13)		int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  13)		subtitle->set_x(((( (Float)(_hx_tmp) ) - subtitle->get_width()) / ( (Float)(2) )));
HXLINE(  14)		int _hx_tmp1 = ::flixel::FlxG_obj::height;
HXDLIN(  14)		subtitle->set_y((((( (Float)(_hx_tmp1) ) - subtitle->get_height()) / ( (Float)(2) )) - ( (Float)(200) )));
HXLINE(  15)		subtitle->manager = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  16)		this->add(subtitle);
            	}


HX_DEFINE_DYNAMIC_FUNC4(SubtitleManager_obj,addSubtitle,(void))

void SubtitleManager_obj::onSubtitleComplete( ::objects::Subtitle subtitle){
            	HX_STACKFRAME(&_hx_pos_ee7f7b8d6b92ac14_20_onSubtitleComplete)
HXDLIN(  20)		this->remove(subtitle,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(SubtitleManager_obj,onSubtitleComplete,(void))


::hx::ObjectPtr< SubtitleManager_obj > SubtitleManager_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< SubtitleManager_obj > __this = new SubtitleManager_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< SubtitleManager_obj > SubtitleManager_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	SubtitleManager_obj *__this = (SubtitleManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SubtitleManager_obj), true, "objects.SubtitleManager"));
	*(void **)__this = SubtitleManager_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

SubtitleManager_obj::SubtitleManager_obj()
{
}

::hx::Val SubtitleManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"addSubtitle") ) { return ::hx::Val( addSubtitle_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onSubtitleComplete") ) { return ::hx::Val( onSubtitleComplete_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SubtitleManager_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SubtitleManager_obj_sStaticStorageInfo = 0;
#endif

static ::String SubtitleManager_obj_sMemberFields[] = {
	HX_("addSubtitle",59,33,89,23),
	HX_("onSubtitleComplete",30,3c,b8,19),
	::String(null()) };

::hx::Class SubtitleManager_obj::__mClass;

void SubtitleManager_obj::__register()
{
	SubtitleManager_obj _hx_dummy;
	SubtitleManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.SubtitleManager",7b,ad,34,cc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SubtitleManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SubtitleManager_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SubtitleManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SubtitleManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace objects
