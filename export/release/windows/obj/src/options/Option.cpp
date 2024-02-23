#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
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
#ifndef INCLUDED_objects_Alphabet
#include <objects/Alphabet.h>
#endif
#ifndef INCLUDED_options_Option
#include <options/Option.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_416f94ddec2d073a_3_new,"options.Option","new",0x24090a17,"options.Option.new","options/Option.hx",3,0x1c4a7d18)
HX_LOCAL_STACK_FRAME(_hx_pos_416f94ddec2d073a_80_change,"options.Option","change",0x38fd0419,"options.Option.change","options/Option.hx",80,0x1c4a7d18)
HX_LOCAL_STACK_FRAME(_hx_pos_416f94ddec2d073a_87_getValue,"options.Option","getValue",0x609abde4,"options.Option.getValue","options/Option.hx",87,0x1c4a7d18)
HX_LOCAL_STACK_FRAME(_hx_pos_416f94ddec2d073a_91_setValue,"options.Option","setValue",0x0ef81758,"options.Option.setValue","options/Option.hx",91,0x1c4a7d18)
HX_LOCAL_STACK_FRAME(_hx_pos_416f94ddec2d073a_95_get_text,"options.Option","get_text",0x9bbfb71f,"options.Option.get_text","options/Option.hx",95,0x1c4a7d18)
HX_LOCAL_STACK_FRAME(_hx_pos_416f94ddec2d073a_102_set_text,"options.Option","set_text",0x4a1d1093,"options.Option.set_text","options/Option.hx",102,0x1c4a7d18)
HX_LOCAL_STACK_FRAME(_hx_pos_416f94ddec2d073a_110_get_type,"options.Option","get_type",0x9bcedd2c,"options.Option.get_type","options/Option.hx",110,0x1c4a7d18)
namespace options{

void Option_obj::__construct(::String name,::String __o_description,::String variable,::String __o_type,::Array< ::String > options){
            		::String description = __o_description;
            		if (::hx::IsNull(__o_description)) description = HX_("",00,00,00,00);
            		::String type = __o_type;
            		if (::hx::IsNull(__o_type)) type = HX_("bool",2a,84,1b,41);
            	HX_STACKFRAME(&_hx_pos_416f94ddec2d073a_3_new)
HXLINE(  26)		this->name = HX_("Unknown",6a,4b,cc,ae);
HXLINE(  25)		this->description = HX_("",00,00,00,00);
HXLINE(  24)		this->displayFormat = HX_("%v",b1,20,00,00);
HXLINE(  22)		this->decimals = 1;
HXLINE(  21)		this->maxValue = null();
HXLINE(  20)		this->minValue = null();
HXLINE(  19)		this->changeValue = 1;
HXLINE(  18)		this->options = null();
HXLINE(  17)		this->curOption = 0;
HXLINE(  15)		this->defaultValue = null();
HXLINE(  14)		this->variable = null();
HXLINE(  13)		this->scrollSpeed = ((Float)50);
HXLINE(   9)		this->type = HX_("bool",2a,84,1b,41);
HXLINE(   7)		this->onChange = null();
HXLINE(  30)		this->name = name;
HXLINE(  31)		this->description = description;
HXLINE(  32)		this->variable = variable;
HXLINE(  33)		this->type = type;
HXLINE(  34)		this->defaultValue = ::Reflect_obj::getProperty(::backend::ClientPrefs_obj::defaultData,variable);
HXLINE(  35)		this->options = options;
HXLINE(  37)		if (::hx::IsEq( this->defaultValue,HX_("null variable value",06,3c,3f,e9) )) {
HXLINE(  39)			::String _hx_switch_0 = type;
            			if (  (_hx_switch_0==HX_("bool",2a,84,1b,41)) ){
HXLINE(  42)				this->defaultValue = false;
HXDLIN(  42)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==HX_("float",9c,c5,96,02)) ||  (_hx_switch_0==HX_("int",ef,0c,50,00)) ){
HXLINE(  44)				this->defaultValue = 0;
HXDLIN(  44)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==HX_("percent",c5,aa,da,78)) ){
HXLINE(  46)				this->defaultValue = 1;
HXDLIN(  46)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==HX_("string",d1,28,30,11)) ){
HXLINE(  48)				this->defaultValue = HX_("",00,00,00,00);
HXLINE(  49)				if ((options->length > 0)) {
HXLINE(  50)					this->defaultValue = options->__get(0);
            				}
HXLINE(  47)				goto _hx_goto_0;
            			}
            			_hx_goto_0:;
            		}
HXLINE(  55)		if (::hx::IsNull( this->getValue() )) {
HXLINE(  56)			this->setValue(this->defaultValue);
            		}
HXLINE(  59)		::String _hx_switch_1 = type;
            		if (  (_hx_switch_1==HX_("percent",c5,aa,da,78)) ){
HXLINE(  68)			this->displayFormat = HX_("%v%",54,7a,1c,00);
HXLINE(  69)			this->changeValue = ((Float)0.01);
HXLINE(  70)			this->minValue = 0;
HXLINE(  71)			this->maxValue = 1;
HXLINE(  72)			this->scrollSpeed = ((Float)0.5);
HXLINE(  73)			this->decimals = 2;
HXLINE(  67)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_1==HX_("string",d1,28,30,11)) ){
HXLINE(  62)			int num = options->indexOf(this->getValue(),null());
HXLINE(  63)			if ((num > -1)) {
HXLINE(  64)				this->curOption = num;
            			}
HXLINE(  61)			goto _hx_goto_1;
            		}
            		_hx_goto_1:;
            	}

Dynamic Option_obj::__CreateEmpty() { return new Option_obj; }

void *Option_obj::_hx_vtable = 0;

Dynamic Option_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Option_obj > _hx_result = new Option_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool Option_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x280eb0f3;
}

void Option_obj::change(){
            	HX_STACKFRAME(&_hx_pos_416f94ddec2d073a_80_change)
HXDLIN(  80)		if (::hx::IsNotNull( this->onChange )) {
HXLINE(  81)			this->onChange();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Option_obj,change,(void))

 ::Dynamic Option_obj::getValue(){
            	HX_STACKFRAME(&_hx_pos_416f94ddec2d073a_87_getValue)
HXDLIN(  87)		return ::Reflect_obj::getProperty(::backend::ClientPrefs_obj::data,this->variable);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Option_obj,getValue,return )

void Option_obj::setValue( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_416f94ddec2d073a_91_setValue)
HXDLIN(  91)		::Reflect_obj::setProperty(::backend::ClientPrefs_obj::data,this->variable,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Option_obj,setValue,(void))

::String Option_obj::get_text(){
            	HX_STACKFRAME(&_hx_pos_416f94ddec2d073a_95_get_text)
HXLINE(  96)		if (::hx::IsNotNull( this->child )) {
HXLINE(  97)			return this->child->text;
            		}
HXLINE(  99)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Option_obj,get_text,return )

::String Option_obj::set_text(::String __o_newValue){
            		::String newValue = __o_newValue;
            		if (::hx::IsNull(__o_newValue)) newValue = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_416f94ddec2d073a_102_set_text)
HXLINE( 103)		if (::hx::IsNotNull( this->child )) {
HXLINE( 104)			this->child->set_text(newValue);
            		}
HXLINE( 106)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Option_obj,set_text,return )

::String Option_obj::get_type(){
            	HX_STACKFRAME(&_hx_pos_416f94ddec2d073a_110_get_type)
HXLINE( 111)		::String newValue = HX_("bool",2a,84,1b,41);
HXLINE( 112)		::String _hx_switch_0 = ::StringTools_obj::trim(this->type.toLowerCase());
            		if (  (_hx_switch_0==HX_("fl",46,59,00,00)) ){
HXLINE( 117)			newValue = HX_("float",9c,c5,96,02);
HXDLIN( 117)			goto _hx_goto_8;
            		}
            		if (  (_hx_switch_0==HX_("integer",be,bd,1b,17)) ){
HXLINE( 115)			newValue = HX_("int",ef,0c,50,00);
HXDLIN( 115)			goto _hx_goto_8;
            		}
            		if (  (_hx_switch_0==HX_("float",9c,c5,96,02)) ||  (_hx_switch_0==HX_("int",ef,0c,50,00)) ||  (_hx_switch_0==HX_("percent",c5,aa,da,78)) ||  (_hx_switch_0==HX_("string",d1,28,30,11)) ){
HXLINE( 114)			newValue = this->type;
HXDLIN( 114)			goto _hx_goto_8;
            		}
            		if (  (_hx_switch_0==HX_("str",b1,a8,57,00)) ){
HXLINE( 116)			newValue = HX_("string",d1,28,30,11);
HXDLIN( 116)			goto _hx_goto_8;
            		}
            		_hx_goto_8:;
HXLINE( 119)		this->type = newValue;
HXLINE( 120)		return this->type;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Option_obj,get_type,return )


::hx::ObjectPtr< Option_obj > Option_obj::__new(::String name,::String __o_description,::String variable,::String __o_type,::Array< ::String > options) {
	::hx::ObjectPtr< Option_obj > __this = new Option_obj();
	__this->__construct(name,__o_description,variable,__o_type,options);
	return __this;
}

::hx::ObjectPtr< Option_obj > Option_obj::__alloc(::hx::Ctx *_hx_ctx,::String name,::String __o_description,::String variable,::String __o_type,::Array< ::String > options) {
	Option_obj *__this = (Option_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Option_obj), true, "options.Option"));
	*(void **)__this = Option_obj::_hx_vtable;
	__this->__construct(name,__o_description,variable,__o_type,options);
	return __this;
}

Option_obj::Option_obj()
{
}

void Option_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Option);
	HX_MARK_MEMBER_NAME(child,"child");
	HX_MARK_MEMBER_NAME(onChange,"onChange");
	HX_MARK_MEMBER_NAME(type,"type");
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
	HX_MARK_MEMBER_NAME(description,"description");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void Option_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(child,"child");
	HX_VISIT_MEMBER_NAME(onChange,"onChange");
	HX_VISIT_MEMBER_NAME(type,"type");
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
	HX_VISIT_MEMBER_NAME(description,"description");
	HX_VISIT_MEMBER_NAME(name,"name");
}

::hx::Val Option_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"description") ) { return ::hx::Val( description ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultValue") ) { return ::hx::Val( defaultValue ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displayFormat") ) { return ::hx::Val( displayFormat ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Option_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"description") ) { description=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultValue") ) { defaultValue=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displayFormat") ) { displayFormat=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Option_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("child",9c,a9,b9,45));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("type",ba,f2,08,4d));
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
	outFields->push(HX_("description",fc,08,1d,5f));
	outFields->push(HX_("name",4b,72,ff,48));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Option_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::objects::Alphabet */ ,(int)offsetof(Option_obj,child),HX_("child",9c,a9,b9,45)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Option_obj,onChange),HX_("onChange",ef,87,1f,97)},
	{::hx::fsString,(int)offsetof(Option_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsFloat,(int)offsetof(Option_obj,scrollSpeed),HX_("scrollSpeed",3a,e0,46,cb)},
	{::hx::fsString,(int)offsetof(Option_obj,variable),HX_("variable",3c,12,0d,69)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Option_obj,defaultValue),HX_("defaultValue",f0,ba,13,e7)},
	{::hx::fsInt,(int)offsetof(Option_obj,curOption),HX_("curOption",15,ed,07,9c)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Option_obj,options),HX_("options",5e,33,fe,df)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Option_obj,changeValue),HX_("changeValue",e1,27,7e,57)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Option_obj,minValue),HX_("minValue",7f,ec,ef,28)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Option_obj,maxValue),HX_("maxValue",2d,d2,d5,db)},
	{::hx::fsInt,(int)offsetof(Option_obj,decimals),HX_("decimals",c2,4a,6a,12)},
	{::hx::fsString,(int)offsetof(Option_obj,displayFormat),HX_("displayFormat",19,4b,f1,be)},
	{::hx::fsString,(int)offsetof(Option_obj,description),HX_("description",fc,08,1d,5f)},
	{::hx::fsString,(int)offsetof(Option_obj,name),HX_("name",4b,72,ff,48)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Option_obj_sStaticStorageInfo = 0;
#endif

static ::String Option_obj_sMemberFields[] = {
	HX_("child",9c,a9,b9,45),
	HX_("onChange",ef,87,1f,97),
	HX_("type",ba,f2,08,4d),
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
	HX_("description",fc,08,1d,5f),
	HX_("name",4b,72,ff,48),
	HX_("change",70,91,72,b7),
	HX_("getValue",fb,8e,8f,91),
	HX_("setValue",6f,e8,ec,3f),
	HX_("get_text",36,88,b4,cc),
	HX_("set_text",aa,e1,11,7b),
	HX_("get_type",43,ae,c3,cc),
	::String(null()) };

::hx::Class Option_obj::__mClass;

void Option_obj::__register()
{
	Option_obj _hx_dummy;
	Option_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.Option",a5,b2,ee,21);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Option_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Option_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Option_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Option_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace options
