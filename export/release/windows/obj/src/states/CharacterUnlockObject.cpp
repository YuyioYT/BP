#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
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
#ifndef INCLUDED_objects_HealthIcon
#include <objects/HealthIcon.h>
#endif
#ifndef INCLUDED_states_CharacterUnlockObject
#include <states/CharacterUnlockObject.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_14a1d528f4b058de_652_new,"states.CharacterUnlockObject","new",0xea2c5a92,"states.CharacterUnlockObject.new","states/CharacterSelectionState.hx",652,0x0339acdd)
HX_DEFINE_STACK_FRAME(_hx_pos_14a1d528f4b058de_650_new,"states.CharacterUnlockObject","new",0xea2c5a92,"states.CharacterUnlockObject.new","states/CharacterSelectionState.hx",650,0x0339acdd)
HX_DEFINE_STACK_FRAME(_hx_pos_14a1d528f4b058de_605_new,"states.CharacterUnlockObject","new",0xea2c5a92,"states.CharacterUnlockObject.new","states/CharacterSelectionState.hx",605,0x0339acdd)
HX_LOCAL_STACK_FRAME(_hx_pos_14a1d528f4b058de_661_destroy,"states.CharacterUnlockObject","destroy",0xf074b82c,"states.CharacterUnlockObject.destroy","states/CharacterSelectionState.hx",661,0x0339acdd)
namespace states{

void CharacterUnlockObject_obj::__construct(::String name, ::flixel::FlxCamera camera,::String characterIcon,::hx::Null< int >  __o_color){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::states::CharacterUnlockObject,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::tweens::FlxTween twn){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::CharacterUnlockObject,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween twn){
            				HX_GC_STACKFRAME(&_hx_pos_14a1d528f4b058de_652_new)
HXLINE( 653)				_gthis->alphaTween = null();
HXLINE( 654)				_gthis->remove(_gthis,null()).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 655)				if (::hx::IsNotNull( _gthis->onFinish )) {
HXLINE( 655)					_gthis->onFinish();
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_14a1d528f4b058de_650_new)
HXLINE( 650)			_gthis->alphaTween = ::flixel::tweens::FlxTween_obj::tween(_gthis, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)2.5))
            				->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		int color = __o_color.Default(-16777216);
            	HX_GC_STACKFRAME(&_hx_pos_14a1d528f4b058de_605_new)
HXLINE( 606)		this->onFinish = null();
HXLINE( 609)		 ::states::CharacterUnlockObject _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 610)		super::__construct(this->x,this->y,null());
HXLINE( 611)		::backend::ClientPrefs_obj::saveSettings();
HXLINE( 613)		 ::flixel::FlxSprite characterBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,60,50,null())->makeGraphic(420,120,color,null(),null());
HXLINE( 614)		{
HXLINE( 614)			 ::flixel::math::FlxBasePoint this1 = characterBG->scrollFactor;
HXDLIN( 614)			this1->set_x(( (Float)(0) ));
HXDLIN( 614)			this1->set_y(( (Float)(0) ));
            		}
HXLINE( 616)		 ::objects::HealthIcon characterIcon1 =  ::objects::HealthIcon_obj::__alloc( HX_CTX ,characterIcon,false,null());
HXLINE( 617)		characterIcon1->animation->_curAnim->set_curFrame(2);
HXLINE( 618)		characterIcon1->set_x((characterBG->x + 10));
HXLINE( 619)		characterIcon1->set_y((characterBG->y + 10));
HXLINE( 620)		{
HXLINE( 620)			 ::flixel::math::FlxBasePoint this2 = characterIcon1->scrollFactor;
HXDLIN( 620)			this2->set_x(( (Float)(0) ));
HXDLIN( 620)			this2->set_y(( (Float)(0) ));
            		}
HXLINE( 621)		characterIcon1->setGraphicSize(::Std_obj::_hx_int((characterIcon1->get_width() * ((Float)0.66666666666666663))),null());
HXLINE( 622)		characterIcon1->updateHitbox();
HXLINE( 623)		characterIcon1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 625)		Float characterIcon2 = characterIcon1->x;
HXDLIN( 625)		Float characterName = ((characterIcon2 + characterIcon1->get_width()) + 20);
HXDLIN( 625)		 ::flixel::text::FlxText characterName1 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,characterName,(characterIcon1->y + 16),280,name,16,null());
HXLINE( 626)		::String file = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN( 626)		::String _hx_tmp;
HXDLIN( 626)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 626)			_hx_tmp = file;
            		}
            		else {
HXLINE( 626)			_hx_tmp = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN( 626)		characterName1->setFormat(_hx_tmp,16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 627)		{
HXLINE( 627)			 ::flixel::math::FlxBasePoint this3 = characterName1->scrollFactor;
HXDLIN( 627)			this3->set_x(( (Float)(0) ));
HXDLIN( 627)			this3->set_y(( (Float)(0) ));
            		}
HXLINE( 629)		 ::flixel::text::FlxText characterText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,characterName1->x,(characterName1->y + 32),280,HX_("Play as this character in freeplay!",3d,fc,64,6e),16,null());
HXLINE( 630)		::String file1 = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN( 630)		::String _hx_tmp1;
HXDLIN( 630)		if (::sys::FileSystem_obj::exists(file1)) {
HXLINE( 630)			_hx_tmp1 = file1;
            		}
            		else {
HXLINE( 630)			_hx_tmp1 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN( 630)		characterText->setFormat(_hx_tmp1,16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 631)		{
HXLINE( 631)			 ::flixel::math::FlxBasePoint this4 = characterText->scrollFactor;
HXDLIN( 631)			this4->set_x(( (Float)(0) ));
HXDLIN( 631)			this4->set_y(( (Float)(0) ));
            		}
HXLINE( 633)		this->add(characterBG);
HXLINE( 634)		this->add(characterName1);
HXLINE( 635)		this->add(characterText);
HXLINE( 636)		this->add(characterIcon1);
HXLINE( 638)		 ::flixel::FlxCamera cam = null();
HXLINE( 639)		if (::hx::IsNotNull( camera )) {
HXLINE( 640)			cam = camera;
            		}
HXLINE( 642)		this->set_alpha(( (Float)(0) ));
HXLINE( 643)		if (::hx::IsNotNull( cam )) {
HXLINE( 644)			characterBG->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,cam));
HXLINE( 645)			characterName1->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,cam));
HXLINE( 646)			characterText->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,cam));
HXLINE( 647)			characterIcon1->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,cam));
            		}
HXLINE( 649)		this->alphaTween = ::flixel::tweens::FlxTween_obj::tween(::hx::ObjectPtr<OBJ_>(this), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_1(_gthis)))));
            	}

Dynamic CharacterUnlockObject_obj::__CreateEmpty() { return new CharacterUnlockObject_obj; }

void *CharacterUnlockObject_obj::_hx_vtable = 0;

Dynamic CharacterUnlockObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CharacterUnlockObject_obj > _hx_result = new CharacterUnlockObject_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool CharacterUnlockObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x288ce903) {
			if (inClassId<=(int)0x0520ab4a) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0520ab4a;
			} else {
				return inClassId==(int)0x288ce903;
			}
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void CharacterUnlockObject_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_14a1d528f4b058de_661_destroy)
HXLINE( 662)		if (::hx::IsNotNull( this->alphaTween )) {
HXLINE( 663)			this->alphaTween->cancel();
            		}
HXLINE( 665)		this->super::destroy();
            	}



::hx::ObjectPtr< CharacterUnlockObject_obj > CharacterUnlockObject_obj::__new(::String name, ::flixel::FlxCamera camera,::String characterIcon,::hx::Null< int >  __o_color) {
	::hx::ObjectPtr< CharacterUnlockObject_obj > __this = new CharacterUnlockObject_obj();
	__this->__construct(name,camera,characterIcon,__o_color);
	return __this;
}

::hx::ObjectPtr< CharacterUnlockObject_obj > CharacterUnlockObject_obj::__alloc(::hx::Ctx *_hx_ctx,::String name, ::flixel::FlxCamera camera,::String characterIcon,::hx::Null< int >  __o_color) {
	CharacterUnlockObject_obj *__this = (CharacterUnlockObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CharacterUnlockObject_obj), true, "states.CharacterUnlockObject"));
	*(void **)__this = CharacterUnlockObject_obj::_hx_vtable;
	__this->__construct(name,camera,characterIcon,__o_color);
	return __this;
}

CharacterUnlockObject_obj::CharacterUnlockObject_obj()
{
}

void CharacterUnlockObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CharacterUnlockObject);
	HX_MARK_MEMBER_NAME(onFinish,"onFinish");
	HX_MARK_MEMBER_NAME(alphaTween,"alphaTween");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CharacterUnlockObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onFinish,"onFinish");
	HX_VISIT_MEMBER_NAME(alphaTween,"alphaTween");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CharacterUnlockObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

::hx::Val CharacterUnlockObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
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

void CharacterUnlockObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("alphaTween",2d,fe,15,3a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CharacterUnlockObject_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(CharacterUnlockObject_obj,onFinish),HX_("onFinish",d2,36,2c,66)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(CharacterUnlockObject_obj,alphaTween),HX_("alphaTween",2d,fe,15,3a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CharacterUnlockObject_obj_sStaticStorageInfo = 0;
#endif

static ::String CharacterUnlockObject_obj_sMemberFields[] = {
	HX_("onFinish",d2,36,2c,66),
	HX_("alphaTween",2d,fe,15,3a),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

::hx::Class CharacterUnlockObject_obj::__mClass;

void CharacterUnlockObject_obj::__register()
{
	CharacterUnlockObject_obj _hx_dummy;
	CharacterUnlockObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.CharacterUnlockObject",a0,69,eb,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CharacterUnlockObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CharacterUnlockObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CharacterUnlockObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CharacterUnlockObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
