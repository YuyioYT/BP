#include <hxcpp.h>

#ifndef INCLUDED_states_CharacterForm
#include <states/CharacterForm.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3ced9d5735fd4850_56_new,"states.CharacterForm","new",0x5674dab3,"states.CharacterForm.new","states/CharacterSelectState.hx",56,0x58f1a2c5)
namespace states{

void CharacterForm_obj::__construct(::String name,::String polishedName,::Array< Float > noteMs,::String __o_noteType){
            		::String noteType = __o_noteType;
            		if (::hx::IsNull(__o_noteType)) noteType = HX_("normal",27,72,69,30);
            	HX_STACKFRAME(&_hx_pos_3ced9d5735fd4850_56_new)
HXLINE(  57)		this->name = name;
HXLINE(  58)		this->polishedName = polishedName;
HXLINE(  59)		this->noteType = noteType;
HXLINE(  60)		this->noteMs = noteMs;
            	}

Dynamic CharacterForm_obj::__CreateEmpty() { return new CharacterForm_obj; }

void *CharacterForm_obj::_hx_vtable = 0;

Dynamic CharacterForm_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CharacterForm_obj > _hx_result = new CharacterForm_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool CharacterForm_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x47951907;
}


CharacterForm_obj::CharacterForm_obj()
{
}

void CharacterForm_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CharacterForm);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(polishedName,"polishedName");
	HX_MARK_MEMBER_NAME(noteType,"noteType");
	HX_MARK_MEMBER_NAME(noteMs,"noteMs");
	HX_MARK_END_CLASS();
}

void CharacterForm_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(polishedName,"polishedName");
	HX_VISIT_MEMBER_NAME(noteType,"noteType");
	HX_VISIT_MEMBER_NAME(noteMs,"noteMs");
}

::hx::Val CharacterForm_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"noteMs") ) { return ::hx::Val( noteMs ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noteType") ) { return ::hx::Val( noteType ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"polishedName") ) { return ::hx::Val( polishedName ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CharacterForm_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"noteMs") ) { noteMs=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noteType") ) { noteType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"polishedName") ) { polishedName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CharacterForm_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("polishedName",db,ae,f6,08));
	outFields->push(HX_("noteType",cc,17,3c,5c));
	outFields->push(HX_("noteMs",f8,bb,b5,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CharacterForm_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(CharacterForm_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsString,(int)offsetof(CharacterForm_obj,polishedName),HX_("polishedName",db,ae,f6,08)},
	{::hx::fsString,(int)offsetof(CharacterForm_obj,noteType),HX_("noteType",cc,17,3c,5c)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(CharacterForm_obj,noteMs),HX_("noteMs",f8,bb,b5,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CharacterForm_obj_sStaticStorageInfo = 0;
#endif

static ::String CharacterForm_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("polishedName",db,ae,f6,08),
	HX_("noteType",cc,17,3c,5c),
	HX_("noteMs",f8,bb,b5,31),
	::String(null()) };

::hx::Class CharacterForm_obj::__mClass;

void CharacterForm_obj::__register()
{
	CharacterForm_obj _hx_dummy;
	CharacterForm_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.CharacterForm",41,05,47,9a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CharacterForm_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CharacterForm_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CharacterForm_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CharacterForm_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
