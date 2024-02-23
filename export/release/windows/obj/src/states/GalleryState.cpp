#include <hxcpp.h>

#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Controls
#include <backend/Controls.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
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
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSound
#include <flixel/sound/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_states_GalleryState
#include <states/GalleryState.h>
#endif
#ifndef INCLUDED_states_MainMenuState
#include <states/MainMenuState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_47ca6c36334795a8_3_new,"states.GalleryState","new",0xb9dbe55d,"states.GalleryState.new","states/GalleryState.hx",3,0x9336ddd2)
static const ::String _hx_array_data_f994f2eb_1[] = {
	HX_("antagonism",d7,56,b2,8d),HX_("antagonism2",7b,a5,59,6e),HX_("bp",ce,55,00,00),HX_("enimatic",9a,3e,bc,6d),HX_("expunged",10,f2,d4,7d),HX_("gates to hell",6a,fb,19,10),HX_("Reality breaker",3c,7c,dc,70),HX_("Rsod",36,23,8b,36),
};
HX_LOCAL_STACK_FRAME(_hx_pos_47ca6c36334795a8_12_create,"states.GalleryState","create",0x4706ce1f,"states.GalleryState.create","states/GalleryState.hx",12,0x9336ddd2)
HX_LOCAL_STACK_FRAME(_hx_pos_47ca6c36334795a8_33_update,"states.GalleryState","update",0x51fced2c,"states.GalleryState.update","states/GalleryState.hx",33,0x9336ddd2)
HX_LOCAL_STACK_FRAME(_hx_pos_47ca6c36334795a8_50_changeSelection,"states.GalleryState","changeSelection",0x2747b539,"states.GalleryState.changeSelection","states/GalleryState.hx",50,0x9336ddd2)
namespace states{

void GalleryState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_47ca6c36334795a8_3_new)
HXLINE(   9)		this->screenHeight = ::flixel::FlxG_obj::height;
HXLINE(   8)		this->screenWidth = ::flixel::FlxG_obj::width;
HXLINE(   5)		this->gallerySprite = ::Array_obj< ::String >::fromData( _hx_array_data_f994f2eb_1,8);
HXLINE(   3)		super::__construct(TransIn,TransOut);
            	}

Dynamic GalleryState_obj::__CreateEmpty() { return new GalleryState_obj; }

void *GalleryState_obj::_hx_vtable = 0;

Dynamic GalleryState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GalleryState_obj > _hx_result = new GalleryState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GalleryState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x53aaab8a || inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x79768e81 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void GalleryState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_47ca6c36334795a8_12_create)
HXLINE(  13)		this->super::create();
HXLINE(  15)		this->grpgallerySprites =  ::flixel::group::FlxTypedSpriteGroup_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  16)		this->add(this->grpgallerySprites);
HXLINE(  18)		{
HXLINE(  18)			int _g = 0;
HXDLIN(  18)			int _g1 = this->gallerySprite->length;
HXDLIN(  18)			while((_g < _g1)){
HXLINE(  18)				_g = (_g + 1);
HXDLIN(  18)				int i = (_g - 1);
HXLINE(  20)				 ::flixel::FlxSprite gallerySprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,300,0,null());
HXDLIN(  20)				 ::flixel::FlxSprite gallerySprite1 = gallerySprite->loadGraphic(::backend::Paths_obj::image((HX_("gallery/",5d,ff,d8,65) + this->gallerySprite->__get(i)),null(),null()),null(),null(),null(),null(),null());
HXLINE(  21)				{
HXLINE(  21)					 ::flixel::math::FlxBasePoint this1 = gallerySprite1->scale;
HXDLIN(  21)					int x = this->screenWidth;
HXDLIN(  21)					Float x1 = (( (Float)(x) ) / gallerySprite1->get_width());
HXDLIN(  21)					int y = this->screenHeight;
HXDLIN(  21)					Float y1 = (( (Float)(y) ) / gallerySprite1->get_height());
HXDLIN(  21)					this1->set_x(x1);
HXDLIN(  21)					this1->set_y(y1);
            				}
HXLINE(  22)				{
HXLINE(  22)					int axes = 17;
HXDLIN(  22)					bool _hx_tmp;
HXDLIN(  22)					if ((axes != 1)) {
HXLINE(  22)						_hx_tmp = (axes == 17);
            					}
            					else {
HXLINE(  22)						_hx_tmp = true;
            					}
HXDLIN(  22)					if (_hx_tmp) {
HXLINE(  22)						int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  22)						gallerySprite1->set_x(((( (Float)(_hx_tmp) ) - gallerySprite1->get_width()) / ( (Float)(2) )));
            					}
HXDLIN(  22)					bool _hx_tmp1;
HXDLIN(  22)					if ((axes != 16)) {
HXLINE(  22)						_hx_tmp1 = (axes == 17);
            					}
            					else {
HXLINE(  22)						_hx_tmp1 = true;
            					}
HXDLIN(  22)					if (_hx_tmp1) {
HXLINE(  22)						int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  22)						gallerySprite1->set_y(((( (Float)(_hx_tmp) ) - gallerySprite1->get_height()) / ( (Float)(2) )));
            					}
            				}
HXLINE(  23)				gallerySprite1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  24)				gallerySprite1->set_x(gallerySprite1->x);
HXLINE(  25)				gallerySprite1->set_y(gallerySprite1->y);
HXLINE(  26)				this->grpgallerySprites->add(gallerySprite1).StaticCast<  ::flixel::FlxSprite >();
            			}
            		}
HXLINE(  29)		this->changeSelection(null());
            	}


void GalleryState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_47ca6c36334795a8_33_update)
HXLINE(  34)		this->super::update(elapsed);
HXLINE(  36)		if (this->get_controls()->get_UI_LEFT_P()) {
HXLINE(  37)			this->changeSelection(-1);
            		}
HXLINE(  39)		if (this->get_controls()->get_UI_RIGHT_P()) {
HXLINE(  40)			this->changeSelection(1);
            		}
HXLINE(  43)		if (this->get_controls()->get_BACK()) {
HXLINE(  45)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  45)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE(  46)			::backend::MusicBeatState_obj::switchState( ::states::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            		}
            	}


void GalleryState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_47ca6c36334795a8_50_changeSelection)
HXLINE(  51)		 ::states::GalleryState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  51)		_hx_tmp->curSelected = (_hx_tmp->curSelected + change);
HXLINE(  52)		if ((this->curSelected < 0)) {
HXLINE(  53)			this->curSelected = (this->gallerySprite->length - 1);
            		}
HXLINE(  54)		if ((this->curSelected >= this->gallerySprite->length)) {
HXLINE(  55)			this->curSelected = 0;
            		}
HXLINE(  57)		{
HXLINE(  57)			int _g = 0;
HXDLIN(  57)			int _g1 = this->grpgallerySprites->group->members->get_length();
HXDLIN(  57)			while((_g < _g1)){
HXLINE(  57)				_g = (_g + 1);
HXDLIN(  57)				int i = (_g - 1);
HXLINE(  58)				 ::flixel::FlxSprite item = Dynamic( this->grpgallerySprites->group->members->__get(i)).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  60)				if ((i == this->curSelected)) {
HXLINE(  61)					item->set_alpha(( (Float)(1) ));
            				}
            				else {
HXLINE(  63)					item->set_alpha(( (Float)(0) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(GalleryState_obj,changeSelection,(void))


::hx::ObjectPtr< GalleryState_obj > GalleryState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< GalleryState_obj > __this = new GalleryState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< GalleryState_obj > GalleryState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	GalleryState_obj *__this = (GalleryState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GalleryState_obj), true, "states.GalleryState"));
	*(void **)__this = GalleryState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

GalleryState_obj::GalleryState_obj()
{
}

void GalleryState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GalleryState);
	HX_MARK_MEMBER_NAME(gallerySprite,"gallerySprite");
	HX_MARK_MEMBER_NAME(grpgallerySprites,"grpgallerySprites");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(screenWidth,"screenWidth");
	HX_MARK_MEMBER_NAME(screenHeight,"screenHeight");
	 ::backend::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GalleryState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gallerySprite,"gallerySprite");
	HX_VISIT_MEMBER_NAME(grpgallerySprites,"grpgallerySprites");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(screenWidth,"screenWidth");
	HX_VISIT_MEMBER_NAME(screenHeight,"screenHeight");
	 ::backend::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GalleryState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"screenWidth") ) { return ::hx::Val( screenWidth ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenHeight") ) { return ::hx::Val( screenHeight ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gallerySprite") ) { return ::hx::Val( gallerySprite ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"grpgallerySprites") ) { return ::hx::Val( grpgallerySprites ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GalleryState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenWidth") ) { screenWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenHeight") ) { screenHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gallerySprite") ) { gallerySprite=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"grpgallerySprites") ) { grpgallerySprites=inValue.Cast<  ::flixel::group::FlxTypedSpriteGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GalleryState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("gallerySprite",37,8a,bf,c8));
	outFields->push(HX_("grpgallerySprites",01,19,7b,70));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("screenWidth",fa,02,e8,81));
	outFields->push(HX_("screenHeight",73,10,6a,df));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GalleryState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(GalleryState_obj,gallerySprite),HX_("gallerySprite",37,8a,bf,c8)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedSpriteGroup */ ,(int)offsetof(GalleryState_obj,grpgallerySprites),HX_("grpgallerySprites",01,19,7b,70)},
	{::hx::fsInt,(int)offsetof(GalleryState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsInt,(int)offsetof(GalleryState_obj,screenWidth),HX_("screenWidth",fa,02,e8,81)},
	{::hx::fsInt,(int)offsetof(GalleryState_obj,screenHeight),HX_("screenHeight",73,10,6a,df)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GalleryState_obj_sStaticStorageInfo = 0;
#endif

static ::String GalleryState_obj_sMemberFields[] = {
	HX_("gallerySprite",37,8a,bf,c8),
	HX_("grpgallerySprites",01,19,7b,70),
	HX_("curSelected",fb,eb,ab,32),
	HX_("screenWidth",fa,02,e8,81),
	HX_("screenHeight",73,10,6a,df),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	::String(null()) };

::hx::Class GalleryState_obj::__mClass;

void GalleryState_obj::__register()
{
	GalleryState_obj _hx_dummy;
	GalleryState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.GalleryState",eb,f2,94,f9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GalleryState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GalleryState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GalleryState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GalleryState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
