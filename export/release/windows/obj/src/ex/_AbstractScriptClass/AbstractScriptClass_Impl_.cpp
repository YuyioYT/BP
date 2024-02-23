#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ex_InterpEx
#include <ex/InterpEx.h>
#endif
#ifndef INCLUDED_ex_ScriptClass
#include <ex/ScriptClass.h>
#endif
#ifndef INCLUDED_ex__AbstractScriptClass_AbstractScriptClass_Impl_
#include <ex/_AbstractScriptClass/AbstractScriptClass_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hscriptBase_Error
#include <hscriptBase/Error.h>
#endif
#ifndef INCLUDED_hscriptBase_ErrorDef
#include <hscriptBase/ErrorDef.h>
#endif
#ifndef INCLUDED_hscriptBase_Interp
#include <hscriptBase/Interp.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c35465bd132fb15a_9_resolveField,"ex._AbstractScriptClass.AbstractScriptClass_Impl_","resolveField",0x5f57b3b8,"ex._AbstractScriptClass.AbstractScriptClass_Impl_.resolveField","ex/AbstractScriptClass.hx",9,0x920d8caf)
HX_LOCAL_STACK_FRAME(_hx_pos_c35465bd132fb15a_31_resolveField,"ex._AbstractScriptClass.AbstractScriptClass_Impl_","resolveField",0x5f57b3b8,"ex._AbstractScriptClass.AbstractScriptClass_Impl_.resolveField","ex/AbstractScriptClass.hx",31,0x920d8caf)
HX_LOCAL_STACK_FRAME(_hx_pos_c35465bd132fb15a_32_resolveField,"ex._AbstractScriptClass.AbstractScriptClass_Impl_","resolveField",0x5f57b3b8,"ex._AbstractScriptClass.AbstractScriptClass_Impl_.resolveField","ex/AbstractScriptClass.hx",32,0x920d8caf)
HX_LOCAL_STACK_FRAME(_hx_pos_c35465bd132fb15a_33_resolveField,"ex._AbstractScriptClass.AbstractScriptClass_Impl_","resolveField",0x5f57b3b8,"ex._AbstractScriptClass.AbstractScriptClass_Impl_.resolveField","ex/AbstractScriptClass.hx",33,0x920d8caf)
HX_LOCAL_STACK_FRAME(_hx_pos_c35465bd132fb15a_34_resolveField,"ex._AbstractScriptClass.AbstractScriptClass_Impl_","resolveField",0x5f57b3b8,"ex._AbstractScriptClass.AbstractScriptClass_Impl_.resolveField","ex/AbstractScriptClass.hx",34,0x920d8caf)
HX_LOCAL_STACK_FRAME(_hx_pos_c35465bd132fb15a_35_resolveField,"ex._AbstractScriptClass.AbstractScriptClass_Impl_","resolveField",0x5f57b3b8,"ex._AbstractScriptClass.AbstractScriptClass_Impl_.resolveField","ex/AbstractScriptClass.hx",35,0x920d8caf)
HX_LOCAL_STACK_FRAME(_hx_pos_c35465bd132fb15a_90_fieldRead,"ex._AbstractScriptClass.AbstractScriptClass_Impl_","fieldRead",0x778c1d66,"ex._AbstractScriptClass.AbstractScriptClass_Impl_.fieldRead","ex/AbstractScriptClass.hx",90,0x920d8caf)
HX_LOCAL_STACK_FRAME(_hx_pos_c35465bd132fb15a_94_fieldWrite,"ex._AbstractScriptClass.AbstractScriptClass_Impl_","fieldWrite",0x0cac68cf,"ex._AbstractScriptClass.AbstractScriptClass_Impl_.fieldWrite","ex/AbstractScriptClass.hx",94,0x920d8caf)
namespace ex{
namespace _AbstractScriptClass{

void AbstractScriptClass_Impl__obj::__construct() { }

Dynamic AbstractScriptClass_Impl__obj::__CreateEmpty() { return new AbstractScriptClass_Impl__obj; }

void *AbstractScriptClass_Impl__obj::_hx_vtable = 0;

Dynamic AbstractScriptClass_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AbstractScriptClass_Impl__obj > _hx_result = new AbstractScriptClass_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AbstractScriptClass_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6da6aa68;
}

 ::Dynamic AbstractScriptClass_Impl__obj::resolveField( ::ex::ScriptClass this1,::String name){
            	HX_GC_STACKFRAME(&_hx_pos_c35465bd132fb15a_9_resolveField)
HXLINE(  10)		::String _hx_switch_0 = name;
            		if (  (_hx_switch_0==HX_("callFunction",d6,4d,95,4c)) ){
HXLINE(  19)			return this1->callFunction_dyn();
HXDLIN(  19)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("createSuperClass",d9,26,35,dd)) ){
HXLINE(  15)			return this1->createSuperClass_dyn();
HXDLIN(  15)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("findFunction",71,98,d0,01)) ){
HXLINE(  17)			return this1->findFunction_dyn();
HXDLIN(  17)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("superClass",bd,a8,07,a8)) ){
HXLINE(  13)			return this1->superClass;
HXDLIN(  13)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  21)			if (::hx::IsNotNull( this1->findFunction(name) )) {
HXLINE(  23)				 ::Dynamic fn = this1->findFunction(name);
HXLINE(  24)				int nargs = 0;
HXLINE(  25)				if (::hx::IsNotNull( fn->__Field(HX_("args",5d,8d,74,40),::hx::paccDynamic) )) {
HXLINE(  27)					nargs = ( (::Array< ::Dynamic>)(fn->__Field(HX_("args",5d,8d,74,40),::hx::paccDynamic)) )->length;
            				}
HXLINE(  29)				switch((int)(nargs)){
            					case (int)0: {
            						HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::String,name1, ::Dynamic,_g) HXARGC(0)
            						 ::Dynamic _hx_run(){
            							HX_GC_STACKFRAME(&_hx_pos_c35465bd132fb15a_31_resolveField)
HXLINE(  31)							return _g(name1);
            						}
            						HX_END_LOCAL_FUNC0(return)

HXLINE(  31)						 ::Dynamic _g = this1->callFunction0_dyn();
HXDLIN(  31)						::String name1 = name;
HXDLIN(  31)						return  ::Dynamic(new _hx_Closure_0(name1,_g));
            					}
            					break;
            					case (int)1: {
            						HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,::String,name1, ::Dynamic,_g) HXARGC(1)
            						 ::Dynamic _hx_run( ::Dynamic arg0){
            							HX_GC_STACKFRAME(&_hx_pos_c35465bd132fb15a_32_resolveField)
HXLINE(  32)							return _g(name1,arg0);
            						}
            						HX_END_LOCAL_FUNC1(return)

HXLINE(  32)						 ::Dynamic _g = this1->callFunction1_dyn();
HXDLIN(  32)						::String name1 = name;
HXDLIN(  32)						return  ::Dynamic(new _hx_Closure_1(name1,_g));
            					}
            					break;
            					case (int)2: {
            						HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2,::String,name1, ::Dynamic,_g) HXARGC(2)
            						 ::Dynamic _hx_run( ::Dynamic arg0, ::Dynamic arg1){
            							HX_GC_STACKFRAME(&_hx_pos_c35465bd132fb15a_33_resolveField)
HXLINE(  33)							return _g(name1,arg0,arg1);
            						}
            						HX_END_LOCAL_FUNC2(return)

HXLINE(  33)						 ::Dynamic _g = this1->callFunction2_dyn();
HXDLIN(  33)						::String name1 = name;
HXDLIN(  33)						return  ::Dynamic(new _hx_Closure_2(name1,_g));
            					}
            					break;
            					case (int)3: {
            						HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_3,::String,name1, ::Dynamic,_g) HXARGC(3)
            						 ::Dynamic _hx_run( ::Dynamic arg0, ::Dynamic arg1, ::Dynamic arg2){
            							HX_GC_STACKFRAME(&_hx_pos_c35465bd132fb15a_34_resolveField)
HXLINE(  34)							return _g(name1,arg0,arg1,arg2);
            						}
            						HX_END_LOCAL_FUNC3(return)

HXLINE(  34)						 ::Dynamic _g = this1->callFunction3_dyn();
HXDLIN(  34)						::String name1 = name;
HXDLIN(  34)						return  ::Dynamic(new _hx_Closure_3(name1,_g));
            					}
            					break;
            					case (int)4: {
            						HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_4,::String,name1, ::Dynamic,_g) HXARGC(4)
            						 ::Dynamic _hx_run( ::Dynamic arg0, ::Dynamic arg1, ::Dynamic arg2, ::Dynamic arg3){
            							HX_GC_STACKFRAME(&_hx_pos_c35465bd132fb15a_35_resolveField)
HXLINE(  35)							return _g(name1,arg0,arg1,arg2,arg3);
            						}
            						HX_END_LOCAL_FUNC4(return)

HXLINE(  35)						 ::Dynamic _g = this1->callFunction4_dyn();
HXDLIN(  35)						::String name1 = name;
HXDLIN(  35)						return  ::Dynamic(new _hx_Closure_4(name1,_g));
            					}
            					break;
            					default:{
HXLINE(  36)						 ::ex::InterpEx _this = this1->_interp;
HXDLIN(  36)						if (!(_this->resumeError)) {
HXLINE(  36)							 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::ECustom(HX_("only 4 params allowed in script class functions (.bind limitation)",6b,b5,61,a2)),( (int)(_this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(_this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(_this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(_this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN(  36)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            						}
            					}
            				}
            			}
            			else {
HXLINE(  39)				if (::hx::IsNotNull( this1->findVar(name) )) {
HXLINE(  41)					 ::Dynamic v = this1->findVar(name);
HXLINE(  43)					 ::Dynamic varValue = null();
HXLINE(  44)					if ((this1->_interp->variables->exists(name) == false)) {
HXLINE(  46)						if (::hx::IsNotNull( v->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic) )) {
HXLINE(  48)							varValue = this1->_interp->expr(v->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic),null());
HXLINE(  49)							this1->_interp->variables->set(name,varValue);
            						}
            					}
            					else {
HXLINE(  54)						varValue = this1->_interp->variables->get(name);
            					}
HXLINE(  56)					return varValue;
            				}
            				else {
HXLINE(  58)					if (::Reflect_obj::isFunction(::Reflect_obj::getProperty(this1->superClass,name))) {
HXLINE(  60)						return ::Reflect_obj::getProperty(this1->superClass,name);
            					}
            					else {
HXLINE(  62)						if (::Reflect_obj::hasField(this1->superClass,name)) {
HXLINE(  64)							return ::Reflect_obj::field(this1->superClass,name);
            						}
            						else {
HXLINE(  66)							bool _hx_tmp;
HXDLIN(  66)							if (::hx::IsNotNull( this1->superClass )) {
HXLINE(  66)								_hx_tmp = ::Std_obj::isOfType(this1->superClass,::hx::ClassOf< ::ex::ScriptClass >());
            							}
            							else {
HXLINE(  66)								_hx_tmp = false;
            							}
HXDLIN(  66)							if (_hx_tmp) {
HXLINE(  68)								 ::ex::ScriptClass superScriptClass = ::hx::TCast<  ::ex::ScriptClass >::cast(this1->superClass);
HXLINE(  69)								try {
            									HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  71)									return ::ex::_AbstractScriptClass::AbstractScriptClass_Impl__obj::fieldRead(superScriptClass,name);
            								} catch( ::Dynamic _hx_e) {
            									if (_hx_e.IsClass<  ::Dynamic >() ){
            										HX_STACK_BEGIN_CATCH
            										 ::Dynamic _g = _hx_e;
HXLINE(  73)										{
HXLINE(  73)											null();
            										}
            									}
            									else {
            										HX_STACK_DO_THROW(_hx_e);
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            		_hx_goto_0:;
HXLINE(  77)		if (::hx::IsNull( this1->superClass )) {
HXLINE(  79)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("field '",41,d3,2d,fc) + name) + HX_("' does not exist in script class '",81,39,73,9e)) + this1->get_className()) + HX_("'",27,00,00,00))));
            		}
            		else {
HXLINE(  83)			::String _hx_tmp = ((((HX_("field '",41,d3,2d,fc) + name) + HX_("' does not exist in script class '",81,39,73,9e)) + this1->get_className()) + HX_("' or super class '",f6,d2,52,57));
HXDLIN(  83)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((_hx_tmp + ::Type_obj::getClassName(::Type_obj::getClass(this1->superClass))) + HX_("'",27,00,00,00))));
            		}
HXLINE(  77)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AbstractScriptClass_Impl__obj,resolveField,return )

 ::Dynamic AbstractScriptClass_Impl__obj::fieldRead( ::ex::ScriptClass this1,::String name){
            	HX_STACKFRAME(&_hx_pos_c35465bd132fb15a_90_fieldRead)
HXDLIN(  90)		return ::ex::_AbstractScriptClass::AbstractScriptClass_Impl__obj::resolveField(this1,name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AbstractScriptClass_Impl__obj,fieldRead,return )

 ::Dynamic AbstractScriptClass_Impl__obj::fieldWrite( ::ex::ScriptClass this1,::String name, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_c35465bd132fb15a_94_fieldWrite)
HXLINE(  98)		if (::hx::IsNotNull( this1->findVar(name) )) {
HXLINE( 100)			this1->_interp->variables->set(name,value);
HXLINE( 101)			return value;
            		}
            		else {
HXLINE( 103)			if (::Reflect_obj::hasField(this1->superClass,name)) {
HXLINE( 105)				::Reflect_obj::setProperty(this1->superClass,name,value);
HXLINE( 106)				return value;
            			}
            			else {
HXLINE( 108)				bool _hx_tmp;
HXDLIN( 108)				if (::hx::IsNotNull( this1->superClass )) {
HXLINE( 108)					_hx_tmp = ::Std_obj::isOfType(this1->superClass,::hx::ClassOf< ::ex::ScriptClass >());
            				}
            				else {
HXLINE( 108)					_hx_tmp = false;
            				}
HXDLIN( 108)				if (_hx_tmp) {
HXLINE( 110)					 ::ex::ScriptClass superScriptClass = ::hx::TCast<  ::ex::ScriptClass >::cast(this1->superClass);
HXLINE( 111)					try {
            						HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 113)						return ::ex::_AbstractScriptClass::AbstractScriptClass_Impl__obj::fieldWrite(superScriptClass,name,value);
            					} catch( ::Dynamic _hx_e) {
            						if (_hx_e.IsClass<  ::Dynamic >() ){
            							HX_STACK_BEGIN_CATCH
            							 ::Dynamic _g = _hx_e;
HXLINE( 115)							{
HXLINE( 115)								null();
            							}
            						}
            						else {
            							HX_STACK_DO_THROW(_hx_e);
            						}
            					}
            				}
            			}
            		}
HXLINE( 119)		if (::hx::IsNull( this1->superClass )) {
HXLINE( 121)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("field '",41,d3,2d,fc) + name) + HX_("' does not exist in script class '",81,39,73,9e)) + this1->get_className()) + HX_("'",27,00,00,00))));
            		}
            		else {
HXLINE( 125)			::String _hx_tmp = ((((HX_("field '",41,d3,2d,fc) + name) + HX_("' does not exist in script class '",81,39,73,9e)) + this1->get_className()) + HX_("' or super class '",f6,d2,52,57));
HXDLIN( 125)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((_hx_tmp + ::Type_obj::getClassName(::Type_obj::getClass(this1->superClass))) + HX_("'",27,00,00,00))));
            		}
HXLINE( 119)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AbstractScriptClass_Impl__obj,fieldWrite,return )


AbstractScriptClass_Impl__obj::AbstractScriptClass_Impl__obj()
{
}

bool AbstractScriptClass_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fieldRead") ) { outValue = fieldRead_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fieldWrite") ) { outValue = fieldWrite_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resolveField") ) { outValue = resolveField_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AbstractScriptClass_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AbstractScriptClass_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class AbstractScriptClass_Impl__obj::__mClass;

static ::String AbstractScriptClass_Impl__obj_sStaticFields[] = {
	HX_("resolveField",2e,da,18,39),
	HX_("fieldRead",30,f1,f5,e2),
	HX_("fieldWrite",c5,e5,db,9d),
	::String(null())
};

void AbstractScriptClass_Impl__obj::__register()
{
	AbstractScriptClass_Impl__obj _hx_dummy;
	AbstractScriptClass_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ex._AbstractScriptClass.AbstractScriptClass_Impl_",24,4d,eb,4d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AbstractScriptClass_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AbstractScriptClass_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AbstractScriptClass_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AbstractScriptClass_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AbstractScriptClass_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace ex
} // end namespace _AbstractScriptClass
