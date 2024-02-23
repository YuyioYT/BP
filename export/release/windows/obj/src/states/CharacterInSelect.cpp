#include <hxcpp.h>

#ifndef INCLUDED_states_CharacterForm
#include <states/CharacterForm.h>
#endif
#ifndef INCLUDED_states_CharacterInSelect
#include <states/CharacterInSelect.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7abbc6cb06c5d004_42_new,"states.CharacterInSelect","new",0x6b3b6330,"states.CharacterInSelect.new","states/CharacterSelectState.hx",42,0x58f1a2c5)
namespace states{

void CharacterInSelect_obj::__construct(::String name,::Array< Float > noteMs,::Array< ::Dynamic> forms){
            	HX_STACKFRAME(&_hx_pos_7abbc6cb06c5d004_42_new)
HXLINE(  43)		this->name = name;
HXLINE(  44)		this->noteMs = noteMs;
HXLINE(  45)		this->forms = forms;
            	}

Dynamic CharacterInSelect_obj::__CreateEmpty() { return new CharacterInSelect_obj; }

void *CharacterInSelect_obj::_hx_vtable = 0;

Dynamic CharacterInSelect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CharacterInSelect_obj > _hx_result = new CharacterInSelect_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool CharacterInSelect_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0bd0ba04;
}


::hx::ObjectPtr< CharacterInSelect_obj > CharacterInSelect_obj::__new(::String name,::Array< Float > noteMs,::Array< ::Dynamic> forms) {
	::hx::ObjectPtr< CharacterInSelect_obj > __this = new CharacterInSelect_obj();
	__this->__construct(name,noteMs,forms);
	return __this;
}

::hx::ObjectPtr< CharacterInSelect_obj > CharacterInSelect_obj::__alloc(::hx::Ctx *_hx_ctx,::String name,::Array< Float > noteMs,::Array< ::Dynamic> forms) {
	CharacterInSelect_obj *__this = (CharacterInSelect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CharacterInSelect_obj), true, "states.CharacterInSelect"));
	*(void **)__this = CharacterInSelect_obj::_hx_vtable;
	__this->__construct(name,noteMs,forms);
	return __this;
}

CharacterInSelect_obj::CharacterInSelect_obj()
{
}

void CharacterInSelect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CharacterInSelect);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(noteMs,"noteMs");
	HX_MARK_MEMBER_NAME(forms,"forms");
	HX_MARK_END_CLASS();
}

void CharacterInSelect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(noteMs,"noteMs");
	HX_VISIT_MEMBER_NAME(forms,"forms");
}

::hx::Val CharacterInSelect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"forms") ) { return ::hx::Val( forms ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"noteMs") ) { return ::hx::Val( noteMs ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CharacterInSelect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"forms") ) { forms=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"noteMs") ) { noteMs=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CharacterInSelect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("noteMs",f8,bb,b5,31));
	outFields->push(HX_("forms",af,ba,94,04));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CharacterInSelect_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(CharacterInSelect_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(CharacterInSelect_obj,noteMs),HX_("noteMs",f8,bb,b5,31)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CharacterInSelect_obj,forms),HX_("forms",af,ba,94,04)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CharacterInSelect_obj_sStaticStorageInfo = 0;
#endif

static ::String CharacterInSelect_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("noteMs",f8,bb,b5,31),
	HX_("forms",af,ba,94,04),
	::String(null()) };

::hx::Class CharacterInSelect_obj::__mClass;

void CharacterInSelect_obj::__register()
{
	CharacterInSelect_obj _hx_dummy;
	CharacterInSelect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.CharacterInSelect",3e,4b,26,01);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CharacterInSelect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CharacterInSelect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CharacterInSelect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CharacterInSelect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
