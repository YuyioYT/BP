#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
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
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_objects_AchievementPopup
#include <objects/AchievementPopup.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_85ffab17b7da0122_48_new,"objects.AchievementPopup","new",0x219c50a9,"objects.AchievementPopup.new","objects/AchievementPopup.hx",48,0x69fcdb86)
HX_DEFINE_STACK_FRAME(_hx_pos_85ffab17b7da0122_46_new,"objects.AchievementPopup","new",0x219c50a9,"objects.AchievementPopup.new","objects/AchievementPopup.hx",46,0x69fcdb86)
HX_DEFINE_STACK_FRAME(_hx_pos_85ffab17b7da0122_5_new,"objects.AchievementPopup","new",0x219c50a9,"objects.AchievementPopup.new","objects/AchievementPopup.hx",5,0x69fcdb86)
HX_LOCAL_STACK_FRAME(_hx_pos_85ffab17b7da0122_57_destroy,"objects.AchievementPopup","destroy",0xdc4f05c3,"objects.AchievementPopup.destroy","objects/AchievementPopup.hx",57,0x69fcdb86)
namespace objects{

void AchievementPopup_obj::__construct(::String name, ::flixel::FlxCamera camera){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::objects::AchievementPopup,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::tweens::FlxTween twn){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::objects::AchievementPopup,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween twn){
            				HX_GC_STACKFRAME(&_hx_pos_85ffab17b7da0122_48_new)
HXLINE(  49)				_gthis->alphaTween = null();
HXLINE(  50)				_gthis->remove(_gthis,null()).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  51)				if (::hx::IsNotNull( _gthis->onFinish )) {
HXLINE(  51)					_gthis->onFinish();
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_85ffab17b7da0122_46_new)
HXLINE(  46)			_gthis->alphaTween = ::flixel::tweens::FlxTween_obj::tween(_gthis, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)2.5))
            				->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_85ffab17b7da0122_5_new)
HXLINE(   6)		this->onFinish = null();
HXLINE(   9)		 ::objects::AchievementPopup _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  10)		super::__construct(this->x,this->y,null());
HXLINE(  11)		::backend::ClientPrefs_obj::saveSettings();
HXLINE(  13)		int id = ::backend::Achievements_obj::getAchievementIndex(name);
HXLINE(  14)		 ::flixel::FlxSprite achievementBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,60,50,null())->makeGraphic(420,120,-16777216,null(),null());
HXLINE(  15)		{
HXLINE(  15)			 ::flixel::math::FlxBasePoint this1 = achievementBG->scrollFactor;
HXDLIN(  15)			this1->set_x(( (Float)(0) ));
HXDLIN(  15)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  17)		 ::flixel::FlxSprite achievementIcon =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(achievementBG->x + 10),(achievementBG->y + 10),null());
HXDLIN(  17)		 ::flixel::FlxSprite achievementIcon1 = achievementIcon->loadGraphic(::backend::Paths_obj::image((HX_("achievements/",8b,5e,c1,17) + name),null(),null()),null(),null(),null(),null(),null());
HXLINE(  18)		achievementIcon1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  19)		{
HXLINE(  19)			 ::flixel::math::FlxBasePoint this2 = achievementIcon1->scrollFactor;
HXDLIN(  19)			this2->set_x(( (Float)(0) ));
HXDLIN(  19)			this2->set_y(( (Float)(0) ));
            		}
HXLINE(  20)		achievementIcon1->setGraphicSize(::Std_obj::_hx_int((achievementIcon1->get_width() * ((Float)0.66666666666666663))),null());
HXLINE(  21)		achievementIcon1->updateHitbox();
HXLINE(  23)		Float achievementIcon2 = achievementIcon1->x;
HXDLIN(  23)		Float achievementName = ((achievementIcon2 + achievementIcon1->get_width()) + 20);
HXDLIN(  23)		 ::flixel::text::FlxText achievementName1 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,achievementName,(achievementIcon1->y + 16),280,( (::String)(::backend::Achievements_obj::achievementsStuff->__get(id)->__GetItem(0)) ),16,null());
HXLINE(  24)		::String file = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  24)		::String _hx_tmp;
HXDLIN(  24)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  24)			_hx_tmp = file;
            		}
            		else {
HXLINE(  24)			_hx_tmp = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  24)		achievementName1->setFormat(_hx_tmp,16,-1,HX_("left",07,08,b0,47),null(),null(),null());
HXLINE(  25)		{
HXLINE(  25)			 ::flixel::math::FlxBasePoint this3 = achievementName1->scrollFactor;
HXDLIN(  25)			this3->set_x(( (Float)(0) ));
HXDLIN(  25)			this3->set_y(( (Float)(0) ));
            		}
HXLINE(  27)		 ::flixel::text::FlxText achievementText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,achievementName1->x,(achievementName1->y + 32),280,( (::String)(::backend::Achievements_obj::achievementsStuff->__get(id)->__GetItem(1)) ),16,null());
HXLINE(  28)		::String file1 = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  28)		::String _hx_tmp1;
HXDLIN(  28)		if (::sys::FileSystem_obj::exists(file1)) {
HXLINE(  28)			_hx_tmp1 = file1;
            		}
            		else {
HXLINE(  28)			_hx_tmp1 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  28)		achievementText->setFormat(_hx_tmp1,16,-1,HX_("left",07,08,b0,47),null(),null(),null());
HXLINE(  29)		{
HXLINE(  29)			 ::flixel::math::FlxBasePoint this4 = achievementText->scrollFactor;
HXDLIN(  29)			this4->set_x(( (Float)(0) ));
HXDLIN(  29)			this4->set_y(( (Float)(0) ));
            		}
HXLINE(  31)		this->add(achievementBG);
HXLINE(  32)		this->add(achievementName1);
HXLINE(  33)		this->add(achievementText);
HXLINE(  34)		this->add(achievementIcon1);
HXLINE(  36)		::Array< ::Dynamic> cam = ::flixel::FlxCamera_obj::_defaultCameras;
HXLINE(  37)		if (::hx::IsNotNull( camera )) {
HXLINE(  38)			cam = ::Array_obj< ::Dynamic>::__new(1)->init(0,camera);
            		}
HXLINE(  40)		this->set_alpha(( (Float)(0) ));
HXLINE(  41)		achievementBG->set_cameras(cam);
HXLINE(  42)		achievementName1->set_cameras(cam);
HXLINE(  43)		achievementText->set_cameras(cam);
HXLINE(  44)		achievementIcon1->set_cameras(cam);
HXLINE(  45)		this->alphaTween = ::flixel::tweens::FlxTween_obj::tween(::hx::ObjectPtr<OBJ_>(this), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_1(_gthis)))));
            	}

Dynamic AchievementPopup_obj::__CreateEmpty() { return new AchievementPopup_obj; }

void *AchievementPopup_obj::_hx_vtable = 0;

Dynamic AchievementPopup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AchievementPopup_obj > _hx_result = new AchievementPopup_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool AchievementPopup_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6e030d69) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x6e030d69;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void AchievementPopup_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_85ffab17b7da0122_57_destroy)
HXLINE(  58)		if (::hx::IsNotNull( this->alphaTween )) {
HXLINE(  59)			this->alphaTween->cancel();
            		}
HXLINE(  61)		this->super::destroy();
            	}



::hx::ObjectPtr< AchievementPopup_obj > AchievementPopup_obj::__new(::String name, ::flixel::FlxCamera camera) {
	::hx::ObjectPtr< AchievementPopup_obj > __this = new AchievementPopup_obj();
	__this->__construct(name,camera);
	return __this;
}

::hx::ObjectPtr< AchievementPopup_obj > AchievementPopup_obj::__alloc(::hx::Ctx *_hx_ctx,::String name, ::flixel::FlxCamera camera) {
	AchievementPopup_obj *__this = (AchievementPopup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AchievementPopup_obj), true, "objects.AchievementPopup"));
	*(void **)__this = AchievementPopup_obj::_hx_vtable;
	__this->__construct(name,camera);
	return __this;
}

AchievementPopup_obj::AchievementPopup_obj()
{
}

void AchievementPopup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AchievementPopup);
	HX_MARK_MEMBER_NAME(onFinish,"onFinish");
	HX_MARK_MEMBER_NAME(alphaTween,"alphaTween");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AchievementPopup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onFinish,"onFinish");
	HX_VISIT_MEMBER_NAME(alphaTween,"alphaTween");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AchievementPopup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onFinish") ) { return ::hx::Val( onFinish ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alphaTween") ) { return ::hx::Val( alphaTween ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AchievementPopup_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"onFinish") ) { onFinish=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alphaTween") ) { alphaTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AchievementPopup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("alphaTween",2d,fe,15,3a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AchievementPopup_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AchievementPopup_obj,onFinish),HX_("onFinish",d2,36,2c,66)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(AchievementPopup_obj,alphaTween),HX_("alphaTween",2d,fe,15,3a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AchievementPopup_obj_sStaticStorageInfo = 0;
#endif

static ::String AchievementPopup_obj_sMemberFields[] = {
	HX_("onFinish",d2,36,2c,66),
	HX_("alphaTween",2d,fe,15,3a),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

::hx::Class AchievementPopup_obj::__mClass;

void AchievementPopup_obj::__register()
{
	AchievementPopup_obj _hx_dummy;
	AchievementPopup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.AchievementPopup",37,c8,d2,62);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AchievementPopup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AchievementPopup_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AchievementPopup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AchievementPopup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace objects
