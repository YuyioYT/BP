#include <hxcpp.h>

#ifndef INCLUDED_ex_ParserEx
#include <ex/ParserEx.h>
#endif
#ifndef INCLUDED_hscriptBase_Parser
#include <hscriptBase/Parser.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d136c3ddb5ff7606_3_new,"ex.ParserEx","new",0x37b7261f,"ex.ParserEx.new","ex/ParserEx.hx",3,0x5c66afd0)
namespace ex{

void ParserEx_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d136c3ddb5ff7606_3_new)
HXDLIN(   3)		super::__construct();
            	}

Dynamic ParserEx_obj::__CreateEmpty() { return new ParserEx_obj; }

void *ParserEx_obj::_hx_vtable = 0;

Dynamic ParserEx_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ParserEx_obj > _hx_result = new ParserEx_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ParserEx_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x40ba8d5b) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x40ba8d5b;
	} else {
		return inClassId==(int)0x4d7d9705;
	}
}


::hx::ObjectPtr< ParserEx_obj > ParserEx_obj::__new() {
	::hx::ObjectPtr< ParserEx_obj > __this = new ParserEx_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ParserEx_obj > ParserEx_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ParserEx_obj *__this = (ParserEx_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ParserEx_obj), true, "ex.ParserEx"));
	*(void **)__this = ParserEx_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ParserEx_obj::ParserEx_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ParserEx_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ParserEx_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ParserEx_obj::__mClass;

void ParserEx_obj::__register()
{
	ParserEx_obj _hx_dummy;
	ParserEx_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ex.ParserEx",ad,2a,4c,92);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ParserEx_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ParserEx_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ParserEx_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace ex
