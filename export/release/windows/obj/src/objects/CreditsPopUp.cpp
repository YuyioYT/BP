#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_CoolUtil
#include <backend/CoolUtil.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_objects_Character
#include <objects/Character.h>
#endif
#ifndef INCLUDED_objects_CreditsPopUp
#include <objects/CreditsPopUp.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fb31f1054f8a3366_12_new,"objects.CreditsPopUp","new",0x170ee4be,"objects.CreditsPopUp.new","objects/CreditsPopUp.hx",12,0xee52a591)
HX_LOCAL_STACK_FRAME(_hx_pos_fb31f1054f8a3366_99_rescaleBG,"objects.CreditsPopUp","rescaleBG",0x2c92b65a,"objects.CreditsPopUp.rescaleBG","objects/CreditsPopUp.hx",99,0xee52a591)
namespace objects{

void CreditsPopUp_obj::__construct(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_fb31f1054f8a3366_12_new)
HXLINE(  17)		this->dad = null();
HXLINE(  25)		super::__construct(x,y,null());
HXLINE(  27)		::String _hx_switch_0 = ( (::String)(::states::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase();
            		if (  (_hx_switch_0==HX_("acquaintance",43,59,59,c9)) ){
HXLINE(  44)			this->songCreator = HX_("Aadsta",bc,b7,81,19);
HXDLIN(  44)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("annihilation",f2,4e,50,0e)) ||  (_hx_switch_0==HX_("reality breaking",13,62,18,36)) ||  (_hx_switch_0==HX_("reality breaking old",1a,d4,09,6d)) ||  (_hx_switch_0==HX_("reality breaking oldest",6c,40,4f,d1)) ||  (_hx_switch_0==HX_("technology",0c,d3,aa,8a)) ){
HXLINE(  34)			this->songCreator = HX_("Pyramix",84,aa,02,44);
HXDLIN(  34)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("antagonism 12 min",fc,ae,f0,11)) ){
HXLINE(  50)			this->songCreator = HX_("Randomness, Bokvae, Aadsta and Villezen",e0,19,7c,4c);
HXDLIN(  50)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("brain freeze",81,a2,0f,65)) ){
HXLINE(  56)			this->songCreator = HX_("Emperor yami",8c,e2,2a,c3);
HXDLIN(  56)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("cataclysmic",79,68,e6,2e)) ||  (_hx_switch_0==HX_("tyranny",45,24,08,1d)) ){
HXLINE(  48)			this->songCreator = HX_("kae",0f,86,51,00);
HXDLIN(  48)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("defraud",03,54,f1,a6)) ){
HXLINE(  54)			this->songCreator = HX_("Te Russextreme",fa,ec,0e,b4);
HXDLIN(  54)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("delivery",f4,83,96,b1)) ){
HXLINE(  42)			this->songCreator = HX_("Tsuchi",ee,75,b0,1a);
HXDLIN(  42)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("devastation",08,1b,0c,52)) ){
HXLINE(  46)			this->songCreator = HX_("TangerineReal",cb,bb,77,a3);
HXDLIN(  46)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("disposition",f7,db,d9,c2)) ||  (_hx_switch_0==HX_("disposition old",fe,0f,d8,b1)) ||  (_hx_switch_0==HX_("disposition oldest",08,8b,8c,97)) ||  (_hx_switch_0==HX_("dissertation",53,aa,9d,4b)) ||  (_hx_switch_0==HX_("punge",27,c1,8a,ca)) ||  (_hx_switch_0==HX_("rebound",ab,03,97,9d)) ||  (_hx_switch_0==HX_("roundabout",3f,fb,c6,30)) ||  (_hx_switch_0==HX_("rsod",16,f7,b1,4b)) ||  (_hx_switch_0==HX_("rsod old",9d,a6,c5,31)) ||  (_hx_switch_0==HX_("rsod oldest",c9,a1,d9,98)) ){
HXLINE(  36)			this->songCreator = HX_("Shredboi",c0,0b,9f,6e);
HXDLIN(  36)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("beefin'",3e,4e,77,b8)) ||  (_hx_switch_0==HX_("double act",c3,4c,7d,0e)) ||  (_hx_switch_0==HX_("rascal",aa,64,dc,ba)) ){
HXLINE(  40)			this->songCreator = HX_("Villezen",31,22,31,e6);
HXDLIN(  40)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("fallowed",82,69,46,33)) ){
HXLINE(  32)			this->songCreator = HX_("Randomness and Bezieanims",5e,cb,4d,91);
HXDLIN(  32)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("fast food",a2,36,6a,78)) ){
HXLINE(  52)			this->songCreator = HX_("Randy the slope",30,e4,43,9a);
HXDLIN(  52)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("shattered",b8,12,8d,2f)) ||  (_hx_switch_0==HX_("triple threat",1c,c4,6d,2e)) ){
HXLINE(  30)			this->songCreator = HX_("Randomness",3a,64,af,c4);
HXDLIN(  30)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("upheaval",38,cb,7f,52)) ){
HXLINE(  38)			this->songCreator = HX_("Randomness , Bezie",f9,2b,61,fe);
HXDLIN(  38)			goto _hx_goto_0;
            		}
            		_hx_goto_0:;
HXLINE(  59)		this->funnyText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,1,0,650,(HX_("Song By ",9e,40,0a,f2) + this->songCreator),16,null());
HXLINE(  60)		this->funnyText->setFormat(HX_("fsb.otf",28,19,99,18),30,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  61)		this->funnyText->set_borderSize(( (Float)(2) ));
HXLINE(  62)		this->funnyText->set_antialiasing(true);
HXLINE(  64)		this->bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(460,50,-1,null(),null());
HXLINE(  65)		this->bg->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  66)		this->add(this->bg);
HXLINE(  67)		this->rescaleBG();
HXLINE(  70)		::String _hx_switch_1 = ( (::String)(::states::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase();
            		if (  (_hx_switch_1==HX_("acquaintance",43,59,59,c9)) ){
HXLINE(  83)			this->bg->set_color(-8388480);
HXDLIN(  83)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_1==HX_("annihilation",f2,4e,50,0e)) ){
HXLINE(  89)			this->bg->set_color(-16777216);
HXDLIN(  89)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_1==HX_("antagonism 12 min",fc,ae,f0,11)) ||  (_hx_switch_1==HX_("cataclysmic",79,68,e6,2e)) ||  (_hx_switch_1==HX_("punge",27,c1,8a,ca)) ||  (_hx_switch_1==HX_("rsod",16,f7,b1,4b)) ||  (_hx_switch_1==HX_("rsod old",9d,a6,c5,31)) ||  (_hx_switch_1==HX_("rsod oldest",c9,a1,d9,98)) ||  (_hx_switch_1==HX_("tyranny",45,24,08,1d)) ){
HXLINE(  85)			 ::flixel::FlxSprite _hx_tmp = this->bg;
HXDLIN(  85)			int Alpha = 255;
HXDLIN(  85)			int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  85)			{
HXLINE(  85)				color = (color & -16711681);
HXDLIN(  85)				color = (color | 11141120);
            			}
HXDLIN(  85)			{
HXLINE(  85)				color = (color & -65281);
HXDLIN(  85)				color = (color | 0);
            			}
HXDLIN(  85)			{
HXLINE(  85)				color = (color & -256);
HXDLIN(  85)				color = (color | 0);
            			}
HXDLIN(  85)			{
HXLINE(  85)				color = (color & 16777215);
HXDLIN(  85)				int color1;
HXDLIN(  85)				if ((Alpha > 255)) {
HXLINE(  85)					color1 = 255;
            				}
            				else {
HXLINE(  85)					if ((Alpha < 0)) {
HXLINE(  85)						color1 = 0;
            					}
            					else {
HXLINE(  85)						color1 = Alpha;
            					}
            				}
HXDLIN(  85)				color = (color | (color1 << 24));
            			}
HXDLIN(  85)			_hx_tmp->set_color(color);
HXDLIN(  85)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_1==HX_("defraud",03,54,f1,a6)) ||  (_hx_switch_1==HX_("shattered",b8,12,8d,2f)) ||  (_hx_switch_1==HX_("triple threat",1c,c4,6d,2e)) ){
HXLINE(  73)			this->bg->set_color(-16744448);
HXDLIN(  73)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_1==HX_("brain freeze",81,a2,0f,65)) ||  (_hx_switch_1==HX_("delivery",f4,83,96,b1)) ||  (_hx_switch_1==HX_("devastation",08,1b,0c,52)) ||  (_hx_switch_1==HX_("fast food",a2,36,6a,78)) ||  (_hx_switch_1==HX_("rascal",aa,64,dc,ba)) ){
HXLINE(  77)			this->bg->set_color(-23296);
HXDLIN(  77)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_1==HX_("disposition",f7,db,d9,c2)) ||  (_hx_switch_1==HX_("disposition old",fe,0f,d8,b1)) ||  (_hx_switch_1==HX_("disposition oldest",08,8b,8c,97)) ||  (_hx_switch_1==HX_("dissertation",53,aa,9d,4b)) ||  (_hx_switch_1==HX_("reality breaking",13,62,18,36)) ||  (_hx_switch_1==HX_("reality breaking old",1a,d4,09,6d)) ||  (_hx_switch_1==HX_("reality breaking oldest",6c,40,4f,d1)) ||  (_hx_switch_1==HX_("rebound",ab,03,97,9d)) ||  (_hx_switch_1==HX_("upheaval",38,cb,7f,52)) ){
HXLINE(  79)			this->bg->set_color(-1);
HXDLIN(  79)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_1==HX_("beefin'",3e,4e,77,b8)) ||  (_hx_switch_1==HX_("double act",c3,4c,7d,0e)) ){
HXLINE(  87)			this->bg->set_color(-256);
HXDLIN(  87)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_1==HX_("fallowed",82,69,46,33)) ){
HXLINE(  75)			this->bg->set_color(-65536);
HXDLIN(  75)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_1==HX_("roundabout",3f,fb,c6,30)) ||  (_hx_switch_1==HX_("technology",0c,d3,aa,8a)) ){
HXLINE(  81)			this->bg->set_color(-16776961);
HXDLIN(  81)			goto _hx_goto_1;
            		}
            		_hx_goto_1:;
HXLINE(  92)		this->add(this->funnyText);
HXLINE(  94)		Float yValues = this->bg->get_height();
HXDLIN(  94)		::Array< Float > yValues1 = ::backend::CoolUtil_obj::getMinAndMax(yValues,this->funnyText->get_height());
HXLINE(  95)		this->funnyText->set_y((this->funnyText->y + ((yValues1->__get(0) - yValues1->__get(1)) / ( (Float)(2) ))));
            	}

Dynamic CreditsPopUp_obj::__CreateEmpty() { return new CreditsPopUp_obj; }

void *CreditsPopUp_obj::_hx_vtable = 0;

Dynamic CreditsPopUp_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CreditsPopUp_obj > _hx_result = new CreditsPopUp_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CreditsPopUp_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x288ce903) {
			if (inClassId<=(int)0x1bc825e2) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1bc825e2;
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

void CreditsPopUp_obj::rescaleBG(){
            	HX_STACKFRAME(&_hx_pos_fb31f1054f8a3366_99_rescaleBG)
HXLINE( 100)		 ::flixel::FlxSprite _hx_tmp = this->bg;
HXDLIN( 100)		int _hx_tmp1 = ::Std_obj::_hx_int(((this->funnyText->textField->get_textWidth() + ((Float)0.7)) + ((Float)0.5)));
HXDLIN( 100)		_hx_tmp->setGraphicSize(_hx_tmp1,::Std_obj::_hx_int((this->funnyText->get_height() + ((Float)0.5))));
HXLINE( 101)		this->bg->updateHitbox();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CreditsPopUp_obj,rescaleBG,(void))


::hx::ObjectPtr< CreditsPopUp_obj > CreditsPopUp_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< CreditsPopUp_obj > __this = new CreditsPopUp_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< CreditsPopUp_obj > CreditsPopUp_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	CreditsPopUp_obj *__this = (CreditsPopUp_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CreditsPopUp_obj), true, "objects.CreditsPopUp"));
	*(void **)__this = CreditsPopUp_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

CreditsPopUp_obj::CreditsPopUp_obj()
{
}

void CreditsPopUp_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CreditsPopUp);
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(bgHeading,"bgHeading");
	HX_MARK_MEMBER_NAME(dad,"dad");
	HX_MARK_MEMBER_NAME(funnyText,"funnyText");
	HX_MARK_MEMBER_NAME(funnyIcon,"funnyIcon");
	HX_MARK_MEMBER_NAME(iconOffset,"iconOffset");
	HX_MARK_MEMBER_NAME(songCreator,"songCreator");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CreditsPopUp_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(bgHeading,"bgHeading");
	HX_VISIT_MEMBER_NAME(dad,"dad");
	HX_VISIT_MEMBER_NAME(funnyText,"funnyText");
	HX_VISIT_MEMBER_NAME(funnyIcon,"funnyIcon");
	HX_VISIT_MEMBER_NAME(iconOffset,"iconOffset");
	HX_VISIT_MEMBER_NAME(songCreator,"songCreator");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CreditsPopUp_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"dad") ) { return ::hx::Val( dad ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bgHeading") ) { return ::hx::Val( bgHeading ); }
		if (HX_FIELD_EQ(inName,"funnyText") ) { return ::hx::Val( funnyText ); }
		if (HX_FIELD_EQ(inName,"funnyIcon") ) { return ::hx::Val( funnyIcon ); }
		if (HX_FIELD_EQ(inName,"rescaleBG") ) { return ::hx::Val( rescaleBG_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"iconOffset") ) { return ::hx::Val( iconOffset ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"songCreator") ) { return ::hx::Val( songCreator ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CreditsPopUp_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"dad") ) { dad=inValue.Cast<  ::objects::Character >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bgHeading") ) { bgHeading=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"funnyText") ) { funnyText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"funnyIcon") ) { funnyIcon=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"iconOffset") ) { iconOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"songCreator") ) { songCreator=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CreditsPopUp_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("bgHeading",7d,9c,12,f4));
	outFields->push(HX_("dad",47,36,4c,00));
	outFields->push(HX_("funnyText",17,e0,07,ed));
	outFields->push(HX_("funnyIcon",e3,fa,c0,e5));
	outFields->push(HX_("iconOffset",ec,53,d3,b1));
	outFields->push(HX_("songCreator",57,17,f7,c9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CreditsPopUp_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CreditsPopUp_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CreditsPopUp_obj,bgHeading),HX_("bgHeading",7d,9c,12,f4)},
	{::hx::fsObject /*  ::objects::Character */ ,(int)offsetof(CreditsPopUp_obj,dad),HX_("dad",47,36,4c,00)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CreditsPopUp_obj,funnyText),HX_("funnyText",17,e0,07,ed)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CreditsPopUp_obj,funnyIcon),HX_("funnyIcon",e3,fa,c0,e5)},
	{::hx::fsFloat,(int)offsetof(CreditsPopUp_obj,iconOffset),HX_("iconOffset",ec,53,d3,b1)},
	{::hx::fsString,(int)offsetof(CreditsPopUp_obj,songCreator),HX_("songCreator",57,17,f7,c9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CreditsPopUp_obj_sStaticStorageInfo = 0;
#endif

static ::String CreditsPopUp_obj_sMemberFields[] = {
	HX_("bg",c5,55,00,00),
	HX_("bgHeading",7d,9c,12,f4),
	HX_("dad",47,36,4c,00),
	HX_("funnyText",17,e0,07,ed),
	HX_("funnyIcon",e3,fa,c0,e5),
	HX_("iconOffset",ec,53,d3,b1),
	HX_("songCreator",57,17,f7,c9),
	HX_("rescaleBG",7c,07,6f,e5),
	::String(null()) };

::hx::Class CreditsPopUp_obj::__mClass;

void CreditsPopUp_obj::__register()
{
	CreditsPopUp_obj _hx_dummy;
	CreditsPopUp_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.CreditsPopUp",cc,6d,5a,a0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CreditsPopUp_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CreditsPopUp_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CreditsPopUp_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CreditsPopUp_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace objects
