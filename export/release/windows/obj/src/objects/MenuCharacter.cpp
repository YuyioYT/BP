#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_objects_MenuCharacter
#include <objects/MenuCharacter.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_tjson_TJSON
#include <tjson/TJSON.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_20dfc3cfbfb3b201_19_new,"objects.MenuCharacter","new",0x7a7e91c2,"objects.MenuCharacter.new","objects/MenuCharacter.hx",19,0xfc0a2def)
HX_LOCAL_STACK_FRAME(_hx_pos_20dfc3cfbfb3b201_33_changeCharacter,"objects.MenuCharacter","changeCharacter",0xdfe4c87b,"objects.MenuCharacter.changeCharacter","objects/MenuCharacter.hx",33,0xfc0a2def)
HX_LOCAL_STACK_FRAME(_hx_pos_20dfc3cfbfb3b201_23_boot,"objects.MenuCharacter","boot",0xac59f890,"objects.MenuCharacter.boot","objects/MenuCharacter.hx",23,0xfc0a2def)
namespace objects{

void MenuCharacter_obj::__construct(Float x,::String __o_character){
            		::String character = __o_character;
            		if (::hx::IsNull(__o_character)) character = HX_("bf",c4,55,00,00);
            	HX_STACKFRAME(&_hx_pos_20dfc3cfbfb3b201_19_new)
HXLINE(  22)		this->hasConfirmAnimation = false;
HXLINE(  27)		super::__construct(x,null(),null());
HXLINE(  29)		this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  30)		this->changeCharacter(character);
            	}

Dynamic MenuCharacter_obj::__CreateEmpty() { return new MenuCharacter_obj; }

void *MenuCharacter_obj::_hx_vtable = 0;

Dynamic MenuCharacter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuCharacter_obj > _hx_result = new MenuCharacter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MenuCharacter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7839a3fa) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x7839a3fa;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void MenuCharacter_obj::changeCharacter(::String __o_character){
            		::String character = __o_character;
            		if (::hx::IsNull(__o_character)) character = HX_("bf",c4,55,00,00);
            	HX_STACKFRAME(&_hx_pos_20dfc3cfbfb3b201_33_changeCharacter)
HXLINE(  34)		if (::hx::IsNull( character )) {
HXLINE(  34)			character = HX_("",00,00,00,00);
            		}
HXLINE(  35)		if ((character == this->character)) {
HXLINE(  35)			return;
            		}
HXLINE(  37)		this->character = character;
HXLINE(  38)		this->set_visible(true);
HXLINE(  40)		bool dontPlayAnim = false;
HXLINE(  41)		{
HXLINE(  41)			 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN(  41)			this1->set_x(( (Float)(1) ));
HXDLIN(  41)			this1->set_y(( (Float)(1) ));
            		}
HXLINE(  42)		this->updateHitbox();
HXLINE(  44)		this->hasConfirmAnimation = false;
HXLINE(  45)		if (::hx::IsNull( character )) {
HXLINE(  50)			::String characterPath = ((HX_("images/menucharacters/",6f,fa,bf,a6) + character) + HX_(".json",56,f1,d6,c2));
HXLINE(  51)			::String rawJson = null();
HXLINE(  54)			::String path = ::backend::Paths_obj::modFolders(characterPath);
HXLINE(  55)			if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE(  56)				::String file = characterPath;
HXDLIN(  56)				if (::hx::IsNull( file )) {
HXLINE(  56)					file = HX_("",00,00,00,00);
            				}
HXDLIN(  56)				path = (HX_("assets/",4c,2a,dc,36) + file);
            			}
HXLINE(  59)			if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE(  60)				::String file = ((HX_("images/menucharacters/",6f,fa,bf,a6) + ::objects::MenuCharacter_obj::DEFAULT_CHARACTER) + HX_(".json",56,f1,d6,c2));
HXDLIN(  60)				if (::hx::IsNull( file )) {
HXLINE(  60)					file = HX_("",00,00,00,00);
            				}
HXDLIN(  60)				path = (HX_("assets/",4c,2a,dc,36) + file);
            			}
HXLINE(  62)			rawJson = ::sys::io::File_obj::getContent(path);
HXLINE(  72)			 ::Dynamic charFile = ::tjson::TJSON_obj::parse(rawJson,null(),null());
HXLINE(  73)			::String key = ( (::String)((HX_("menucharacters/",06,2d,77,01) + charFile->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic))) );
HXDLIN(  73)			::String library = null();
HXDLIN(  73)			 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(key,null(),true);
HXDLIN(  73)			bool xmlExists = false;
HXDLIN(  73)			::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)));
HXDLIN(  73)			if (::sys::FileSystem_obj::exists(xml)) {
HXLINE(  73)				xmlExists = true;
            			}
HXDLIN(  73)			 ::Dynamic _hx_tmp;
HXDLIN(  73)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  73)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE(  73)				_hx_tmp = ::backend::Paths_obj::image(key,library,true);
            			}
HXDLIN(  73)			::String _hx_tmp1;
HXDLIN(  73)			if (xmlExists) {
HXLINE(  73)				_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            			}
            			else {
HXLINE(  73)				_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            			}
HXDLIN(  73)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  74)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),( (::String)(charFile->__Field(HX_("idle_anim",5c,d2,54,bd),::hx::paccDynamic)) ),24,null(),null(),null());
HXLINE(  76)			::String confirmAnim = ( (::String)(charFile->__Field(HX_("confirm_anim",f0,e4,4f,7c),::hx::paccDynamic)) );
HXLINE(  77)			bool _hx_tmp2;
HXDLIN(  77)			bool _hx_tmp3;
HXDLIN(  77)			if (::hx::IsNotNull( confirmAnim )) {
HXLINE(  77)				_hx_tmp3 = (confirmAnim.length > 0);
            			}
            			else {
HXLINE(  77)				_hx_tmp3 = false;
            			}
HXDLIN(  77)			if (_hx_tmp3) {
HXLINE(  77)				_hx_tmp2 = ::hx::IsNotEq( confirmAnim,charFile->__Field(HX_("idle_anim",5c,d2,54,bd),::hx::paccDynamic) );
            			}
            			else {
HXLINE(  77)				_hx_tmp2 = false;
            			}
HXDLIN(  77)			if (_hx_tmp2) {
HXLINE(  79)				this->animation->addByPrefix(HX_("confirm",00,9d,39,10),confirmAnim,24,false,null(),null());
HXLINE(  80)				if (::hx::IsNotNull( this->animation->_animations->get(HX_("confirm",00,9d,39,10)) )) {
HXLINE(  81)					this->hasConfirmAnimation = true;
            				}
            			}
HXLINE(  84)			this->set_flipX(::hx::IsEq( charFile->__Field(HX_("flipX",0b,45,92,02),::hx::paccDynamic),true ));
HXLINE(  86)			if (::hx::IsNotEq( charFile->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic),1 )) {
HXLINE(  87)				{
HXLINE(  87)					 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN(  87)					Float y = ( (Float)(charFile->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic)) );
HXDLIN(  87)					this1->set_x(( (Float)(charFile->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic)) ));
HXDLIN(  87)					this1->set_y(y);
            				}
HXLINE(  88)				this->updateHitbox();
            			}
HXLINE(  90)			{
HXLINE(  90)				 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN(  90)				Float y = ( (Float)( ::Dynamic(charFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(1)) );
HXDLIN(  90)				this1->set_x(( (Float)( ::Dynamic(charFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(0)) ));
HXDLIN(  90)				this1->set_y(y);
            			}
HXLINE(  91)			this->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            		}
            		else {
HXLINE(  45)			if ((character == HX_("",00,00,00,00))) {
HXLINE(  47)				this->set_visible(false);
HXLINE(  48)				dontPlayAnim = true;
            			}
            			else {
HXLINE(  50)				::String characterPath = ((HX_("images/menucharacters/",6f,fa,bf,a6) + character) + HX_(".json",56,f1,d6,c2));
HXLINE(  51)				::String rawJson = null();
HXLINE(  54)				::String path = ::backend::Paths_obj::modFolders(characterPath);
HXLINE(  55)				if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE(  56)					::String file = characterPath;
HXDLIN(  56)					if (::hx::IsNull( file )) {
HXLINE(  56)						file = HX_("",00,00,00,00);
            					}
HXDLIN(  56)					path = (HX_("assets/",4c,2a,dc,36) + file);
            				}
HXLINE(  59)				if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE(  60)					::String file = ((HX_("images/menucharacters/",6f,fa,bf,a6) + ::objects::MenuCharacter_obj::DEFAULT_CHARACTER) + HX_(".json",56,f1,d6,c2));
HXDLIN(  60)					if (::hx::IsNull( file )) {
HXLINE(  60)						file = HX_("",00,00,00,00);
            					}
HXDLIN(  60)					path = (HX_("assets/",4c,2a,dc,36) + file);
            				}
HXLINE(  62)				rawJson = ::sys::io::File_obj::getContent(path);
HXLINE(  72)				 ::Dynamic charFile = ::tjson::TJSON_obj::parse(rawJson,null(),null());
HXLINE(  73)				::String key = ( (::String)((HX_("menucharacters/",06,2d,77,01) + charFile->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic))) );
HXDLIN(  73)				::String library = null();
HXDLIN(  73)				 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(key,null(),true);
HXDLIN(  73)				bool xmlExists = false;
HXDLIN(  73)				::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)));
HXDLIN(  73)				if (::sys::FileSystem_obj::exists(xml)) {
HXLINE(  73)					xmlExists = true;
            				}
HXDLIN(  73)				 ::Dynamic _hx_tmp;
HXDLIN(  73)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  73)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE(  73)					_hx_tmp = ::backend::Paths_obj::image(key,library,true);
            				}
HXDLIN(  73)				::String _hx_tmp1;
HXDLIN(  73)				if (xmlExists) {
HXLINE(  73)					_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            				}
            				else {
HXLINE(  73)					_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            				}
HXDLIN(  73)				this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  74)				this->animation->addByPrefix(HX_("idle",14,a7,b3,45),( (::String)(charFile->__Field(HX_("idle_anim",5c,d2,54,bd),::hx::paccDynamic)) ),24,null(),null(),null());
HXLINE(  76)				::String confirmAnim = ( (::String)(charFile->__Field(HX_("confirm_anim",f0,e4,4f,7c),::hx::paccDynamic)) );
HXLINE(  77)				bool _hx_tmp2;
HXDLIN(  77)				bool _hx_tmp3;
HXDLIN(  77)				if (::hx::IsNotNull( confirmAnim )) {
HXLINE(  77)					_hx_tmp3 = (confirmAnim.length > 0);
            				}
            				else {
HXLINE(  77)					_hx_tmp3 = false;
            				}
HXDLIN(  77)				if (_hx_tmp3) {
HXLINE(  77)					_hx_tmp2 = ::hx::IsNotEq( confirmAnim,charFile->__Field(HX_("idle_anim",5c,d2,54,bd),::hx::paccDynamic) );
            				}
            				else {
HXLINE(  77)					_hx_tmp2 = false;
            				}
HXDLIN(  77)				if (_hx_tmp2) {
HXLINE(  79)					this->animation->addByPrefix(HX_("confirm",00,9d,39,10),confirmAnim,24,false,null(),null());
HXLINE(  80)					if (::hx::IsNotNull( this->animation->_animations->get(HX_("confirm",00,9d,39,10)) )) {
HXLINE(  81)						this->hasConfirmAnimation = true;
            					}
            				}
HXLINE(  84)				this->set_flipX(::hx::IsEq( charFile->__Field(HX_("flipX",0b,45,92,02),::hx::paccDynamic),true ));
HXLINE(  86)				if (::hx::IsNotEq( charFile->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic),1 )) {
HXLINE(  87)					{
HXLINE(  87)						 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN(  87)						Float y = ( (Float)(charFile->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic)) );
HXDLIN(  87)						this1->set_x(( (Float)(charFile->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic)) ));
HXDLIN(  87)						this1->set_y(y);
            					}
HXLINE(  88)					this->updateHitbox();
            				}
HXLINE(  90)				{
HXLINE(  90)					 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN(  90)					Float y = ( (Float)( ::Dynamic(charFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(1)) );
HXDLIN(  90)					this1->set_x(( (Float)( ::Dynamic(charFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(0)) ));
HXDLIN(  90)					this1->set_y(y);
            				}
HXLINE(  91)				this->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuCharacter_obj,changeCharacter,(void))

::String MenuCharacter_obj::DEFAULT_CHARACTER;


::hx::ObjectPtr< MenuCharacter_obj > MenuCharacter_obj::__new(Float x,::String __o_character) {
	::hx::ObjectPtr< MenuCharacter_obj > __this = new MenuCharacter_obj();
	__this->__construct(x,__o_character);
	return __this;
}

::hx::ObjectPtr< MenuCharacter_obj > MenuCharacter_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,::String __o_character) {
	MenuCharacter_obj *__this = (MenuCharacter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuCharacter_obj), true, "objects.MenuCharacter"));
	*(void **)__this = MenuCharacter_obj::_hx_vtable;
	__this->__construct(x,__o_character);
	return __this;
}

MenuCharacter_obj::MenuCharacter_obj()
{
}

void MenuCharacter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuCharacter);
	HX_MARK_MEMBER_NAME(character,"character");
	HX_MARK_MEMBER_NAME(hasConfirmAnimation,"hasConfirmAnimation");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuCharacter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(character,"character");
	HX_VISIT_MEMBER_NAME(hasConfirmAnimation,"hasConfirmAnimation");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MenuCharacter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"character") ) { return ::hx::Val( character ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeCharacter") ) { return ::hx::Val( changeCharacter_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hasConfirmAnimation") ) { return ::hx::Val( hasConfirmAnimation ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MenuCharacter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"DEFAULT_CHARACTER") ) { outValue = ( DEFAULT_CHARACTER ); return true; }
	}
	return false;
}

::hx::Val MenuCharacter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"character") ) { character=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hasConfirmAnimation") ) { hasConfirmAnimation=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MenuCharacter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"DEFAULT_CHARACTER") ) { DEFAULT_CHARACTER=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void MenuCharacter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("character",a9,db,d1,41));
	outFields->push(HX_("hasConfirmAnimation",5e,81,e2,2b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MenuCharacter_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(MenuCharacter_obj,character),HX_("character",a9,db,d1,41)},
	{::hx::fsBool,(int)offsetof(MenuCharacter_obj,hasConfirmAnimation),HX_("hasConfirmAnimation",5e,81,e2,2b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MenuCharacter_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &MenuCharacter_obj::DEFAULT_CHARACTER,HX_("DEFAULT_CHARACTER",2b,e7,14,33)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MenuCharacter_obj_sMemberFields[] = {
	HX_("character",a9,db,d1,41),
	HX_("hasConfirmAnimation",5e,81,e2,2b),
	HX_("changeCharacter",19,7c,6c,fc),
	::String(null()) };

static void MenuCharacter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuCharacter_obj::DEFAULT_CHARACTER,"DEFAULT_CHARACTER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MenuCharacter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuCharacter_obj::DEFAULT_CHARACTER,"DEFAULT_CHARACTER");
};

#endif

::hx::Class MenuCharacter_obj::__mClass;

static ::String MenuCharacter_obj_sStaticFields[] = {
	HX_("DEFAULT_CHARACTER",2b,e7,14,33),
	::String(null())
};

void MenuCharacter_obj::__register()
{
	MenuCharacter_obj _hx_dummy;
	MenuCharacter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.MenuCharacter",d0,48,a6,f3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MenuCharacter_obj::__GetStatic;
	__mClass->mSetStaticField = &MenuCharacter_obj::__SetStatic;
	__mClass->mMarkFunc = MenuCharacter_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MenuCharacter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuCharacter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuCharacter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MenuCharacter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuCharacter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuCharacter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MenuCharacter_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_20dfc3cfbfb3b201_23_boot)
HXDLIN(  23)		DEFAULT_CHARACTER = HX_("bf",c4,55,00,00);
            	}
}

} // end namespace objects
