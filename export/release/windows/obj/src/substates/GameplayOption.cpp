#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_objects_Alphabet
#include <objects/Alphabet.h>
#endif
#ifndef INCLUDED_substates_GameplayOption
#include <substates/GameplayOption.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1d6de1494ff6b479_358_new,"substates.GameplayOption","new",0xffbadbb9,"substates.GameplayOption.new","substates/GameplayChangersSubstate.hx",358,0x349481a9)
HX_LOCAL_STACK_FRAME(_hx_pos_1d6de1494ff6b479_435_change,"substates.GameplayOption","change",0x929863b7,"substates.GameplayOption.change","substates/GameplayChangersSubstate.hx",435,0x349481a9)
HX_LOCAL_STACK_FRAME(_hx_pos_1d6de1494ff6b479_442_getValue,"substates.GameplayOption","getValue",0xdf83c102,"substates.GameplayOption.getValue","substates/GameplayChangersSubstate.hx",442,0x349481a9)
HX_LOCAL_STACK_FRAME(_hx_pos_1d6de1494ff6b479_446_setValue,"substates.GameplayOption","setValue",0x8de11a76,"substates.GameplayOption.setValue","substates/GameplayChangersSubstate.hx",446,0x349481a9)
HX_LOCAL_STACK_FRAME(_hx_pos_1d6de1494ff6b479_451_setChild,"substates.GameplayOption","setChild",0xa1e244a1,"substates.GameplayOption.setChild","substates/GameplayChangersSubstate.hx",451,0x349481a9)
HX_LOCAL_STACK_FRAME(_hx_pos_1d6de1494ff6b479_455_get_text,"substates.GameplayOption","get_text",0x1aa8ba3d,"substates.GameplayOption.get_text","substates/GameplayChangersSubstate.hx",455,0x349481a9)
HX_LOCAL_STACK_FRAME(_hx_pos_1d6de1494ff6b479_462_set_text,"substates.GameplayOption","set_text",0xc90613b1,"substates.GameplayOption.set_text","substates/GameplayChangersSubstate.hx",462,0x349481a9)
HX_LOCAL_STACK_FRAME(_hx_pos_1d6de1494ff6b479_470_get_type,"substates.GameplayOption","get_type",0x1ab7e04a,"substates.GameplayOption.get_type","substates/GameplayChangersSubstate.hx",470,0x349481a9)
namespace substates{

void GameplayOption_obj::__construct(::String name,::String variable,::String __o_type, ::Dynamic __o_defaultValue,::Array< ::String > options){
            		::String type = __o_type;
            		if (::hx::IsNull(__o_type)) type = HX_("bool",2a,84,1b,41);
            		 ::Dynamic defaultValue = __o_defaultValue;
            		if (::hx::IsNull(__o_defaultValue)) defaultValue = HX_("null variable value",06,3c,3f,e9);
            	HX_STACKFRAME(&_hx_pos_1d6de1494ff6b479_358_new)
HXLINE( 382)		this->name = HX_("Unknown",6a,4b,cc,ae);
HXLINE( 381)		this->displayFormat = HX_("%v",b1,20,00,00);
HXLINE( 379)		this->decimals = 1;
HXLINE( 378)		this->maxValue = null();
HXLINE( 377)		this->minValue = null();
HXLINE( 376)		this->changeValue = 1;
HXLINE( 375)		this->options = null();
HXLINE( 374)		this->curOption = 0;
HXLINE( 372)		this->defaultValue = null();
HXLINE( 371)		this->variable = null();
HXLINE( 369)		this->scrollSpeed = ((Float)50);
HXLINE( 368)		this->showBoyfriend = false;
HXLINE( 364)		this->type = HX_("bool",2a,84,1b,41);
HXLINE( 362)		this->onChange = null();
HXLINE( 386)		this->name = name;
HXLINE( 387)		this->variable = variable;
HXLINE( 388)		this->type = type;
HXLINE( 389)		this->defaultValue = defaultValue;
HXLINE( 390)		this->options = options;
HXLINE( 392)		if (::hx::IsEq( defaultValue,HX_("null variable value",06,3c,3f,e9) )) {
HXLINE( 394)			::String _hx_switch_0 = type;
            			if (  (_hx_switch_0==HX_("bool",2a,84,1b,41)) ){
HXLINE( 397)				defaultValue = false;
HXDLIN( 397)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==HX_("float",9c,c5,96,02)) ||  (_hx_switch_0==HX_("int",ef,0c,50,00)) ){
HXLINE( 399)				defaultValue = 0;
HXDLIN( 399)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==HX_("percent",c5,aa,da,78)) ){
HXLINE( 401)				defaultValue = 1;
HXDLIN( 401)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==HX_("string",d1,28,30,11)) ){
HXLINE( 403)				defaultValue = HX_("",00,00,00,00);
HXLINE( 404)				if ((options->length > 0)) {
HXLINE( 405)					defaultValue = options->__get(0);
            				}
HXLINE( 402)				goto _hx_goto_0;
            			}
            			_hx_goto_0:;
            		}
HXLINE( 410)		if (::hx::IsNull( this->getValue() )) {
HXLINE( 411)			this->setValue(defaultValue);
            		}
HXLINE( 414)		::String _hx_switch_1 = type;
            		if (  (_hx_switch_1==HX_("percent",c5,aa,da,78)) ){
HXLINE( 423)			this->displayFormat = HX_("%v%",54,7a,1c,00);
HXLINE( 424)			this->changeValue = ((Float)0.01);
HXLINE( 425)			this->minValue = 0;
HXLINE( 426)			this->maxValue = 1;
HXLINE( 427)			this->scrollSpeed = ((Float)0.5);
HXLINE( 428)			this->decimals = 2;
HXLINE( 422)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_1==HX_("string",d1,28,30,11)) ){
HXLINE( 417)			int num = options->indexOf(this->getValue(),null());
HXLINE( 418)			if ((num > -1)) {
HXLINE( 419)				this->curOption = num;
            			}
HXLINE( 416)			goto _hx_goto_1;
            		}
            		_hx_goto_1:;
            	}

Dynamic GameplayOption_obj::__CreateEmpty() { return new GameplayOption_obj; }

void *GameplayOption_obj::_hx_vtable = 0;

Dynamic GameplayOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameplayOption_obj > _hx_result = new GameplayOption_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool GameplayOption_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x10fc4ddd;
}

void GameplayOption_obj::change(){
            	HX_STACKFRAME(&_hx_pos_1d6de1494ff6b479_435_change)
HXDLIN( 435)		if (::hx::IsNotNull( this->onChange )) {
HXLINE( 436)			this->onChange();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameplayOption_obj,change,(void))

 ::Dynamic GameplayOption_obj::getValue(){
            	HX_STACKFRAME(&_hx_pos_1d6de1494ff6b479_442_getValue)
HXDLIN( 442)		return ::backend::ClientPrefs_obj::data->gameplaySettings->get(this->variable);
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameplayOption_obj,getValue,return )

void GameplayOption_obj::setValue( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_1d6de1494ff6b479_446_setValue)
HXDLIN( 446)		::backend::ClientPrefs_obj::data->gameplaySettings->set(this->variable,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameplayOption_obj,setValue,(void))

void GameplayOption_obj::setChild( ::objects::Alphabet child){
            	HX_STACKFRAME(&_hx_pos_1d6de1494ff6b479_451_setChild)
HXDLIN( 451)		this->child = child;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameplayOption_obj,setChild,(void))

::String GameplayOption_obj::get_text(){
            	HX_STACKFRAME(&_hx_pos_1d6de1494ff6b479_455_get_text)
HXLINE( 456)		if (::hx::IsNotNull( this->child )) {
HXLINE( 457)			return this->child->text;
            		}
HXLINE( 459)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameplayOption_obj,get_text,return )

::String GameplayOption_obj::set_text(::String __o_newValue){
            		::String newValue = __o_newValue;
            		if (::hx::IsNull(__o_newValue)) newValue = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_1d6de1494ff6b479_462_set_text)
HXLINE( 463)		if (::hx::IsNotNull( this->child )) {
HXLINE( 464)			this->child->set_text(newValue);
            		}
HXLINE( 466)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameplayOption_obj,set_text,return )

::String GameplayOption_obj::get_type(){
            	HX_STACKFRAME(&_hx_pos_1d6de1494ff6b479_470_get_type)
HXLINE( 471)		::String newValue = HX_("bool",2a,84,1b,41);
HXLINE( 472)		::String _hx_switch_0 = ::StringTools_obj::trim(this->type.toLowerCase());
            		if (  (_hx_switch_0==HX_("fl",46,59,00,00)) ){
HXLINE( 477)			newValue = HX_("float",9c,c5,96,02);
HXDLIN( 477)			goto _hx_goto_9;
            		}
            		if (  (_hx_switch_0==HX_("integer",be,bd,1b,17)) ){
HXLINE( 475)			newValue = HX_("int",ef,0c,50,00);
HXDLIN( 475)			goto _hx_goto_9;
            		}
            		if (  (_hx_switch_0==HX_("float",9c,c5,96,02)) ||  (_hx_switch_0==HX_("int",ef,0c,50,00)) ||  (_hx_switch_0==HX_("percent",c5,aa,da,78)) ||  (_hx_switch_0==HX_("string",d1,28,30,11)) ){
HXLINE( 474)			newValue = this->type;
HXDLIN( 474)			goto _hx_goto_9;
            		}
            		if (  (_hx_switch_0==HX_("str",b1,a8,57,00)) ){
HXLINE( 476)			newValue = HX_("string",d1,28,30,11);
HXDLIN( 476)			goto _hx_goto_9;
            		}
            		_hx_goto_9:;
HXLINE( 479)		this->type = newValue;
HXLINE( 480)		return this->type;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameplayOption_obj,get_type,return )


::hx::ObjectPtr< GameplayOption_obj > GameplayOption_obj::__new(::String name,::String variable,::String __o_type, ::Dynamic __o_defaultValue,::Array< ::String > options) {
	::hx::ObjectPtr< GameplayOption_obj > __this = new GameplayOption_obj();
	__this->__construct(name,variable,__o_type,__o_defaultValue,options);
	return __this;
}

::hx::ObjectPtr< GameplayOption_obj > GameplayOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String name,::String variable,::String __o_type, ::Dynamic __o_defaultValue,::Array< ::String > options) {
	GameplayOption_obj *__this = (GameplayOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameplayOption_obj), true, "substates.GameplayOption"));
	*(void **)__this = GameplayOption_obj::_hx_vtable;
	__this->__construct(name,variable,__o_type,__o_defaultValue,options);
	return __this;
}

GameplayOption_obj::GameplayOption_obj()
{
}

void GameplayOption_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameplayOption);
	HX_MARK_MEMBER_NAME(child,"child");
	HX_MARK_MEMBER_NAME(onChange,"onChange");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(showBoyfriend,"showBoyfriend");
	HX_MARK_MEMBER_NAME(scrollSpeed,"scrollSpeed");
	HX_MARK_MEMBER_NAME(variable,"variable");
	HX_MARK_MEMBER_NAME(defaultValue,"defaultValue");
	HX_MARK_MEMBER_NAME(curOption,"curOption");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(changeValue,"changeValue");
	HX_MARK_MEMBER_NAME(minValue,"minValue");
	HX_MARK_MEMBER_NAME(maxValue,"maxValue");
	HX_MARK_MEMBER_NAME(decimals,"decimals");
	HX_MARK_MEMBER_NAME(displayFormat,"displayFormat");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void GameplayOption_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(child,"child");
	HX_VISIT_MEMBER_NAME(onChange,"onChange");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(showBoyfriend,"showBoyfriend");
	HX_VISIT_MEMBER_NAME(scrollSpeed,"scrollSpeed");
	HX_VISIT_MEMBER_NAME(variable,"variable");
	HX_VISIT_MEMBER_NAME(defaultValue,"defaultValue");
	HX_VISIT_MEMBER_NAME(curOption,"curOption");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(changeValue,"changeValue");
	HX_VISIT_MEMBER_NAME(minValue,"minValue");
	HX_VISIT_MEMBER_NAME(maxValue,"maxValue");
	HX_VISIT_MEMBER_NAME(decimals,"decimals");
	HX_VISIT_MEMBER_NAME(displayFormat,"displayFormat");
	HX_VISIT_MEMBER_NAME(name,"name");
}

::hx::Val GameplayOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_text() ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_type() : type ); }
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"child") ) { return ::hx::Val( child ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"change") ) { return ::hx::Val( change_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return ::hx::Val( options ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { return ::hx::Val( onChange ); }
		if (HX_FIELD_EQ(inName,"variable") ) { return ::hx::Val( variable ); }
		if (HX_FIELD_EQ(inName,"minValue") ) { return ::hx::Val( minValue ); }
		if (HX_FIELD_EQ(inName,"maxValue") ) { return ::hx::Val( maxValue ); }
		if (HX_FIELD_EQ(inName,"decimals") ) { return ::hx::Val( decimals ); }
		if (HX_FIELD_EQ(inName,"getValue") ) { return ::hx::Val( getValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"setValue") ) { return ::hx::Val( setValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"setChild") ) { return ::hx::Val( setChild_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return ::hx::Val( get_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return ::hx::Val( get_type_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"curOption") ) { return ::hx::Val( curOption ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scrollSpeed") ) { return ::hx::Val( scrollSpeed ); }
		if (HX_FIELD_EQ(inName,"changeValue") ) { return ::hx::Val( changeValue ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultValue") ) { return ::hx::Val( defaultValue ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"showBoyfriend") ) { return ::hx::Val( showBoyfriend ); }
		if (HX_FIELD_EQ(inName,"displayFormat") ) { return ::hx::Val( displayFormat ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GameplayOption_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"child") ) { child=inValue.Cast<  ::objects::Alphabet >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { onChange=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"variable") ) { variable=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minValue") ) { minValue=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxValue") ) { maxValue=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"decimals") ) { decimals=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"curOption") ) { curOption=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scrollSpeed") ) { scrollSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"changeValue") ) { changeValue=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultValue") ) { defaultValue=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"showBoyfriend") ) { showBoyfriend=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"displayFormat") ) { displayFormat=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameplayOption_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("child",9c,a9,b9,45));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("showBoyfriend",ad,2c,d6,d6));
	outFields->push(HX_("scrollSpeed",3a,e0,46,cb));
	outFields->push(HX_("variable",3c,12,0d,69));
	outFields->push(HX_("defaultValue",f0,ba,13,e7));
	outFields->push(HX_("curOption",15,ed,07,9c));
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("changeValue",e1,27,7e,57));
	outFields->push(HX_("minValue",7f,ec,ef,28));
	outFields->push(HX_("maxValue",2d,d2,d5,db));
	outFields->push(HX_("decimals",c2,4a,6a,12));
	outFields->push(HX_("displayFormat",19,4b,f1,be));
	outFields->push(HX_("name",4b,72,ff,48));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GameplayOption_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::objects::Alphabet */ ,(int)offsetof(GameplayOption_obj,child),HX_("child",9c,a9,b9,45)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(GameplayOption_obj,onChange),HX_("onChange",ef,87,1f,97)},
	{::hx::fsString,(int)offsetof(GameplayOption_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsBool,(int)offsetof(GameplayOption_obj,showBoyfriend),HX_("showBoyfriend",ad,2c,d6,d6)},
	{::hx::fsFloat,(int)offsetof(GameplayOption_obj,scrollSpeed),HX_("scrollSpeed",3a,e0,46,cb)},
	{::hx::fsString,(int)offsetof(GameplayOption_obj,variable),HX_("variable",3c,12,0d,69)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(GameplayOption_obj,defaultValue),HX_("defaultValue",f0,ba,13,e7)},
	{::hx::fsInt,(int)offsetof(GameplayOption_obj,curOption),HX_("curOption",15,ed,07,9c)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(GameplayOption_obj,options),HX_("options",5e,33,fe,df)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(GameplayOption_obj,changeValue),HX_("changeValue",e1,27,7e,57)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(GameplayOption_obj,minValue),HX_("minValue",7f,ec,ef,28)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(GameplayOption_obj,maxValue),HX_("maxValue",2d,d2,d5,db)},
	{::hx::fsInt,(int)offsetof(GameplayOption_obj,decimals),HX_("decimals",c2,4a,6a,12)},
	{::hx::fsString,(int)offsetof(GameplayOption_obj,displayFormat),HX_("displayFormat",19,4b,f1,be)},
	{::hx::fsString,(int)offsetof(GameplayOption_obj,name),HX_("name",4b,72,ff,48)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GameplayOption_obj_sStaticStorageInfo = 0;
#endif

static ::String GameplayOption_obj_sMemberFields[] = {
	HX_("child",9c,a9,b9,45),
	HX_("onChange",ef,87,1f,97),
	HX_("type",ba,f2,08,4d),
	HX_("showBoyfriend",ad,2c,d6,d6),
	HX_("scrollSpeed",3a,e0,46,cb),
	HX_("variable",3c,12,0d,69),
	HX_("defaultValue",f0,ba,13,e7),
	HX_("curOption",15,ed,07,9c),
	HX_("options",5e,33,fe,df),
	HX_("changeValue",e1,27,7e,57),
	HX_("minValue",7f,ec,ef,28),
	HX_("maxValue",2d,d2,d5,db),
	HX_("decimals",c2,4a,6a,12),
	HX_("displayFormat",19,4b,f1,be),
	HX_("name",4b,72,ff,48),
	HX_("change",70,91,72,b7),
	HX_("getValue",fb,8e,8f,91),
	HX_("setValue",6f,e8,ec,3f),
	HX_("setChild",9a,12,ee,53),
	HX_("get_text",36,88,b4,cc),
	HX_("set_text",aa,e1,11,7b),
	HX_("get_type",43,ae,c3,cc),
	::String(null()) };

::hx::Class GameplayOption_obj::__mClass;

void GameplayOption_obj::__register()
{
	GameplayOption_obj _hx_dummy;
	GameplayOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("substates.GameplayOption",47,8b,ea,0f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GameplayOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GameplayOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameplayOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameplayOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace substates
