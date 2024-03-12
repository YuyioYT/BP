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
#ifndef INCLUDED_flixel_sound_FlxSound
#include <flixel/sound/FlxSound.h>
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
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0e93a72ebaa23754_42_new,"objects.Subtitle","new",0x4d160504,"objects.Subtitle.new","objects/Subtitle.hx",42,0x7ca3f48b)
HX_DEFINE_STACK_FRAME(_hx_pos_0e93a72ebaa23754_40_new,"objects.Subtitle","new",0x4d160504,"objects.Subtitle.new","objects/Subtitle.hx",40,0x7ca3f48b)
HX_DEFINE_STACK_FRAME(_hx_pos_0e93a72ebaa23754_38_new,"objects.Subtitle","new",0x4d160504,"objects.Subtitle.new","objects/Subtitle.hx",38,0x7ca3f48b)
HX_DEFINE_STACK_FRAME(_hx_pos_0e93a72ebaa23754_24_new,"objects.Subtitle","new",0x4d160504,"objects.Subtitle.new","objects/Subtitle.hx",24,0x7ca3f48b)
HX_LOCAL_STACK_FRAME(_hx_pos_0e93a72ebaa23754_48_init,"objects.Subtitle","init",0x22e715ec,"objects.Subtitle.init","objects/Subtitle.hx",48,0x7ca3f48b)
namespace objects{

void Subtitle_obj::__construct(::String text, ::Dynamic typeSpeed,Float showTime, ::Dynamic properties){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2, ::objects::Subtitle,_gthis,Float,showTime) HXARGC(0)
            		void _hx_run(){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::objects::Subtitle,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer timer){
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::objects::Subtitle,_gthis) HXARGC(1)
            				void _hx_run( ::flixel::tweens::FlxTween tween){
            					HX_GC_STACKFRAME(&_hx_pos_0e93a72ebaa23754_42_new)
HXLINE(  42)					_gthis->manager->onSubtitleComplete(_gthis);
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_GC_STACKFRAME(&_hx_pos_0e93a72ebaa23754_40_new)
HXLINE(  40)				::flixel::tweens::FlxTween_obj::tween(_gthis, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_0e93a72ebaa23754_38_new)
HXLINE(  38)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(showTime, ::Dynamic(new _hx_Closure_1(_gthis)),null());
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_0e93a72ebaa23754_24_new)
HXDLIN(  24)		 ::objects::Subtitle _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  25)		properties = this->init(properties);
HXLINE(  27)		super::__construct( ::Dynamic(properties->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)), ::Dynamic(properties->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)),::flixel::FlxG_obj::width,text,36,null());
HXLINE(  28)		this->sounds = null();
HXLINE(  30)		this->setFormat(HX_("Comic Sans MS Bold",f7,90,1e,7c),properties->__Field(HX_("subtitleSize",f9,b4,25,7b),::hx::paccDynamic),-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  31)		this->set_antialiasing(true);
HXLINE(  32)		this->set_borderSize(( (Float)(2) ));
HXLINE(  34)		{
HXLINE(  34)			int axes = ( (int)(properties->__Field(HX_("screenCenter",61,2e,f9,e2),::hx::paccDynamic)) );
HXDLIN(  34)			bool _hx_tmp;
HXDLIN(  34)			if ((axes != 1)) {
HXLINE(  34)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  34)				_hx_tmp = true;
            			}
HXDLIN(  34)			if (_hx_tmp) {
HXLINE(  34)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  34)				this->set_x(((( (Float)(_hx_tmp) ) - this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  34)			bool _hx_tmp1;
HXDLIN(  34)			if ((axes != 16)) {
HXLINE(  34)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  34)				_hx_tmp1 = true;
            			}
HXDLIN(  34)			if (_hx_tmp1) {
HXLINE(  34)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  34)				this->set_y(((( (Float)(_hx_tmp) ) - this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  36)		this->start(properties->__Field(HX_("typeSpeed",6d,f2,41,46),::hx::paccDynamic),false,false,::Array_obj< int >::__new(0), ::Dynamic(new _hx_Closure_2(_gthis,showTime)));
            	}

Dynamic Subtitle_obj::__CreateEmpty() { return new Subtitle_obj; }

void *Subtitle_obj::_hx_vtable = 0;

Dynamic Subtitle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Subtitle_obj > _hx_result = new Subtitle_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Subtitle_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x752f90b6) {
		if (inClassId<=(int)0x55ec573d) {
			if (inClassId<=(int)0x2c01639b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
			} else {
				return inClassId==(int)0x55ec573d;
			}
		} else {
			return inClassId==(int)0x752f90b6;
		}
	} else {
		if (inClassId<=(int)0x7dab0655) {
			return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
		} else {
			return inClassId==(int)0x7f6db02c;
		}
	}
}

 ::Dynamic Subtitle_obj::init( ::Dynamic properties){
            	HX_STACKFRAME(&_hx_pos_0e93a72ebaa23754_48_init)
HXLINE(  49)		if (::hx::IsNull( properties )) {
HXLINE(  49)			properties =  ::Dynamic(::hx::Anon_obj::Create(0));
            		}
HXLINE(  51)		if (::hx::IsNull( properties->__Field(HX_("x",78,00,00,00),::hx::paccDynamic) )) {
HXLINE(  51)			properties->__SetField(HX_("x",78,00,00,00),(( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )),::hx::paccDynamic);
            		}
HXLINE(  52)		if (::hx::IsNull( properties->__Field(HX_("y",79,00,00,00),::hx::paccDynamic) )) {
HXLINE(  52)			properties->__SetField(HX_("y",79,00,00,00),((( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) )) + 100),::hx::paccDynamic);
            		}
HXLINE(  53)		if (::hx::IsNull( properties->__Field(HX_("subtitleSize",f9,b4,25,7b),::hx::paccDynamic) )) {
HXLINE(  53)			properties->__SetField(HX_("subtitleSize",f9,b4,25,7b),36,::hx::paccDynamic);
            		}
HXLINE(  54)		if (::hx::IsNull( properties->__Field(HX_("typeSpeed",6d,f2,41,46),::hx::paccDynamic) )) {
HXLINE(  54)			properties->__SetField(HX_("typeSpeed",6d,f2,41,46),((Float)0.02),::hx::paccDynamic);
            		}
HXLINE(  55)		if (::hx::IsNull( properties->__Field(HX_("screenCenter",61,2e,f9,e2),::hx::paccDynamic) )) {
HXLINE(  55)			properties->__SetField(HX_("screenCenter",61,2e,f9,e2),17,::hx::paccDynamic);
            		}
HXLINE(  57)		return properties;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Subtitle_obj,init,return )


::hx::ObjectPtr< Subtitle_obj > Subtitle_obj::__new(::String text, ::Dynamic typeSpeed,Float showTime, ::Dynamic properties) {
	::hx::ObjectPtr< Subtitle_obj > __this = new Subtitle_obj();
	__this->__construct(text,typeSpeed,showTime,properties);
	return __this;
}

::hx::ObjectPtr< Subtitle_obj > Subtitle_obj::__alloc(::hx::Ctx *_hx_ctx,::String text, ::Dynamic typeSpeed,Float showTime, ::Dynamic properties) {
	Subtitle_obj *__this = (Subtitle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Subtitle_obj), true, "objects.Subtitle"));
	*(void **)__this = Subtitle_obj::_hx_vtable;
	__this->__construct(text,typeSpeed,showTime,properties);
	return __this;
}

Subtitle_obj::Subtitle_obj()
{
}

void Subtitle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Subtitle);
	HX_MARK_MEMBER_NAME(manager,"manager");
	 ::flixel::addons::text::FlxTypeText_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Subtitle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(manager,"manager");
	 ::flixel::addons::text::FlxTypeText_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Subtitle_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return ::hx::Val( manager ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Subtitle_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast<  ::objects::SubtitleManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Subtitle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("manager",6d,92,c1,13));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Subtitle_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::objects::SubtitleManager */ ,(int)offsetof(Subtitle_obj,manager),HX_("manager",6d,92,c1,13)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Subtitle_obj_sStaticStorageInfo = 0;
#endif

static ::String Subtitle_obj_sMemberFields[] = {
	HX_("manager",6d,92,c1,13),
	HX_("init",10,3b,bb,45),
	::String(null()) };

::hx::Class Subtitle_obj::__mClass;

void Subtitle_obj::__register()
{
	Subtitle_obj _hx_dummy;
	Subtitle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.Subtitle",12,73,6e,6d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Subtitle_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Subtitle_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Subtitle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Subtitle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace objects
