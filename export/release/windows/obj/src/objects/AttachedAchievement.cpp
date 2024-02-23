#include <hxcpp.h>

#ifndef INCLUDED_backend_Achievements
#include <backend/Achievements.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_objects_AttachedAchievement
#include <objects/AttachedAchievement.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2fa6b16f20347eb8_8_new,"objects.AttachedAchievement","new",0x8ce8a023,"objects.AttachedAchievement.new","objects/AttachedAchievement.hx",8,0x6b04bd6e)
HX_LOCAL_STACK_FRAME(_hx_pos_2fa6b16f20347eb8_15_changeAchievement,"objects.AttachedAchievement","changeAchievement",0xc7001be2,"objects.AttachedAchievement.changeAchievement","objects/AttachedAchievement.hx",15,0x6b04bd6e)
HX_LOCAL_STACK_FRAME(_hx_pos_2fa6b16f20347eb8_20_reloadAchievementImage,"objects.AttachedAchievement","reloadAchievementImage",0x0ea50402,"objects.AttachedAchievement.reloadAchievementImage","objects/AttachedAchievement.hx",20,0x6b04bd6e)
HX_LOCAL_STACK_FRAME(_hx_pos_2fa6b16f20347eb8_30_update,"objects.AttachedAchievement","update",0x6300b226,"objects.AttachedAchievement.update","objects/AttachedAchievement.hx",30,0x6b04bd6e)
namespace objects{

void AttachedAchievement_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String name){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_2fa6b16f20347eb8_8_new)
HXLINE(   9)		super::__construct(x,y,null());
HXLINE(  11)		this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  12)		this->changeAchievement(name);
            	}

Dynamic AttachedAchievement_obj::__CreateEmpty() { return new AttachedAchievement_obj; }

void *AttachedAchievement_obj::_hx_vtable = 0;

Dynamic AttachedAchievement_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AttachedAchievement_obj > _hx_result = new AttachedAchievement_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool AttachedAchievement_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x66b7f9f7) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x66b7f9f7;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void AttachedAchievement_obj::changeAchievement(::String tag){
            	HX_STACKFRAME(&_hx_pos_2fa6b16f20347eb8_15_changeAchievement)
HXLINE(  16)		this->tag = tag;
HXLINE(  17)		this->reloadAchievementImage();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AttachedAchievement_obj,changeAchievement,(void))

void AttachedAchievement_obj::reloadAchievementImage(){
            	HX_STACKFRAME(&_hx_pos_2fa6b16f20347eb8_20_reloadAchievementImage)
HXLINE(  21)		if (::backend::Achievements_obj::isAchievementUnlocked(this->tag)) {
HXLINE(  22)			this->loadGraphic(::backend::Paths_obj::image((HX_("achievements/",8b,5e,c1,17) + this->tag),null(),null()),null(),null(),null(),null(),null());
            		}
            		else {
HXLINE(  24)			this->loadGraphic(::backend::Paths_obj::image(HX_("achievements/lockedachievement",ba,b8,0b,f8),null(),null()),null(),null(),null(),null(),null());
            		}
HXLINE(  26)		{
HXLINE(  26)			 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN(  26)			this1->set_x(((Float)0.7));
HXDLIN(  26)			this1->set_y(((Float)0.7));
            		}
HXLINE(  27)		this->updateHitbox();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AttachedAchievement_obj,reloadAchievementImage,(void))

void AttachedAchievement_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_2fa6b16f20347eb8_30_update)
HXLINE(  31)		if (::hx::IsNotNull( this->sprTracker )) {
HXLINE(  32)			this->setPosition((this->sprTracker->x - ( (Float)(130) )),(this->sprTracker->y + 25));
            		}
HXLINE(  34)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< AttachedAchievement_obj > AttachedAchievement_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String name) {
	::hx::ObjectPtr< AttachedAchievement_obj > __this = new AttachedAchievement_obj();
	__this->__construct(__o_x,__o_y,name);
	return __this;
}

::hx::ObjectPtr< AttachedAchievement_obj > AttachedAchievement_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String name) {
	AttachedAchievement_obj *__this = (AttachedAchievement_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AttachedAchievement_obj), true, "objects.AttachedAchievement"));
	*(void **)__this = AttachedAchievement_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,name);
	return __this;
}

AttachedAchievement_obj::AttachedAchievement_obj()
{
}

void AttachedAchievement_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AttachedAchievement);
	HX_MARK_MEMBER_NAME(sprTracker,"sprTracker");
	HX_MARK_MEMBER_NAME(tag,"tag");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AttachedAchievement_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprTracker,"sprTracker");
	HX_VISIT_MEMBER_NAME(tag,"tag");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AttachedAchievement_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tag") ) { return ::hx::Val( tag ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { return ::hx::Val( sprTracker ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"changeAchievement") ) { return ::hx::Val( changeAchievement_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"reloadAchievementImage") ) { return ::hx::Val( reloadAchievementImage_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AttachedAchievement_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tag") ) { tag=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { sprTracker=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AttachedAchievement_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sprTracker",03,a3,e2,78));
	outFields->push(HX_("tag",5a,5a,58,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AttachedAchievement_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(AttachedAchievement_obj,sprTracker),HX_("sprTracker",03,a3,e2,78)},
	{::hx::fsString,(int)offsetof(AttachedAchievement_obj,tag),HX_("tag",5a,5a,58,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AttachedAchievement_obj_sStaticStorageInfo = 0;
#endif

static ::String AttachedAchievement_obj_sMemberFields[] = {
	HX_("sprTracker",03,a3,e2,78),
	HX_("tag",5a,5a,58,00),
	HX_("changeAchievement",df,5c,94,ed),
	HX_("reloadAchievementImage",e5,0d,f3,8e),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class AttachedAchievement_obj::__mClass;

void AttachedAchievement_obj::__register()
{
	AttachedAchievement_obj _hx_dummy;
	AttachedAchievement_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.AttachedAchievement",b1,52,2f,e5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AttachedAchievement_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AttachedAchievement_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AttachedAchievement_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AttachedAchievement_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace objects
