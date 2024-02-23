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
#ifndef INCLUDED_ex_Param
#include <ex/Param.h>
#endif
#ifndef INCLUDED_ex_ScriptClass
#include <ex/ScriptClass.h>
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
#ifndef INCLUDED_hscriptBase_CType
#include <hscriptBase/CType.h>
#endif
#ifndef INCLUDED_hscriptBase_Error
#include <hscriptBase/Error.h>
#endif
#ifndef INCLUDED_hscriptBase_ErrorDef
#include <hscriptBase/ErrorDef.h>
#endif
#ifndef INCLUDED_hscriptBase_ExprDef
#include <hscriptBase/ExprDef.h>
#endif
#ifndef INCLUDED_hscriptBase_FieldAccess
#include <hscriptBase/FieldAccess.h>
#endif
#ifndef INCLUDED_hscriptBase_FieldKind
#include <hscriptBase/FieldKind.h>
#endif
#ifndef INCLUDED_hscriptBase_Interp
#include <hscriptBase/Interp.h>
#endif
#ifndef INCLUDED_hscriptBase_Printer
#include <hscriptBase/Printer.h>
#endif
#ifndef INCLUDED_tea_SScript
#include <tea/SScript.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8e23cf5e9abbedc9_16_new,"ex.ScriptClass","new",0xf837a784,"ex.ScriptClass.new","ex/ScriptClass.hx",16,0x2226542d)
HX_LOCAL_STACK_FRAME(_hx_pos_8e23cf5e9abbedc9_49_get_className,"ex.ScriptClass","get_className",0x5a9f129e,"ex.ScriptClass.get_className","ex/ScriptClass.hx",49,0x2226542d)
HX_LOCAL_STACK_FRAME(_hx_pos_8e23cf5e9abbedc9_60_superConstructor,"ex.ScriptClass","superConstructor",0x8d40919b,"ex.ScriptClass.superConstructor","ex/ScriptClass.hx",60,0x2226542d)
HX_LOCAL_STACK_FRAME(_hx_pos_8e23cf5e9abbedc9_74_createSuperClass,"ex.ScriptClass","createSuperClass",0x64d6a935,"ex.ScriptClass.createSuperClass","ex/ScriptClass.hx",74,0x2226542d)
HX_LOCAL_STACK_FRAME(_hx_pos_8e23cf5e9abbedc9_101_createSuperClass,"ex.ScriptClass","createSuperClass",0x64d6a935,"ex.ScriptClass.createSuperClass","ex/ScriptClass.hx",101,0x2226542d)
HX_LOCAL_STACK_FRAME(_hx_pos_8e23cf5e9abbedc9_120_callFunction0,"ex.ScriptClass","callFunction0",0x730c79be,"ex.ScriptClass.callFunction0","ex/ScriptClass.hx",120,0x2226542d)
HX_LOCAL_STACK_FRAME(_hx_pos_8e23cf5e9abbedc9_125_callFunction1,"ex.ScriptClass","callFunction1",0x730c79bf,"ex.ScriptClass.callFunction1","ex/ScriptClass.hx",125,0x2226542d)
HX_LOCAL_STACK_FRAME(_hx_pos_8e23cf5e9abbedc9_130_callFunction2,"ex.ScriptClass","callFunction2",0x730c79c0,"ex.ScriptClass.callFunction2","ex/ScriptClass.hx",130,0x2226542d)
HX_LOCAL_STACK_FRAME(_hx_pos_8e23cf5e9abbedc9_135_callFunction3,"ex.ScriptClass","callFunction3",0x730c79c1,"ex.ScriptClass.callFunction3","ex/ScriptClass.hx",135,0x2226542d)
HX_LOCAL_STACK_FRAME(_hx_pos_8e23cf5e9abbedc9_140_callFunction4,"ex.ScriptClass","callFunction4",0x730c79c2,"ex.ScriptClass.callFunction4","ex/ScriptClass.hx",140,0x2226542d)
HX_LOCAL_STACK_FRAME(_hx_pos_8e23cf5e9abbedc9_144_callFunction,"ex.ScriptClass","callFunction",0x55777232,"ex.ScriptClass.callFunction","ex/ScriptClass.hx",144,0x2226542d)
HX_LOCAL_STACK_FRAME(_hx_pos_8e23cf5e9abbedc9_169_callFunction,"ex.ScriptClass","callFunction",0x55777232,"ex.ScriptClass.callFunction","ex/ScriptClass.hx",169,0x2226542d)
HX_LOCAL_STACK_FRAME(_hx_pos_8e23cf5e9abbedc9_265_findFunction,"ex.ScriptClass","findFunction",0x0ab2bccd,"ex.ScriptClass.findFunction","ex/ScriptClass.hx",265,0x2226542d)
HX_LOCAL_STACK_FRAME(_hx_pos_8e23cf5e9abbedc9_288_findVar,"ex.ScriptClass","findVar",0x2bfd2952,"ex.ScriptClass.findVar","ex/ScriptClass.hx",288,0x2226542d)
HX_LOCAL_STACK_FRAME(_hx_pos_8e23cf5e9abbedc9_311_findField,"ex.ScriptClass","findField",0xd36e8fe5,"ex.ScriptClass.findField","ex/ScriptClass.hx",311,0x2226542d)
HX_LOCAL_STACK_FRAME(_hx_pos_8e23cf5e9abbedc9_328_listFunctions,"ex.ScriptClass","listFunctions",0x7d34fe41,"ex.ScriptClass.listFunctions","ex/ScriptClass.hx",328,0x2226542d)
HX_LOCAL_STACK_FRAME(_hx_pos_8e23cf5e9abbedc9_335_buildCaches,"ex.ScriptClass","buildCaches",0x7d68e0e3,"ex.ScriptClass.buildCaches","ex/ScriptClass.hx",335,0x2226542d)
namespace ex{

void ScriptClass_obj::__construct( ::Dynamic c,::cpp::VirtualArray args){
            	HX_GC_STACKFRAME(&_hx_pos_8e23cf5e9abbedc9_16_new)
HXLINE( 332)		this->_cachedVarDecls = null();
HXLINE( 331)		this->_cachedFunctionDecls = null();
HXLINE( 330)		this->_cachedFieldDecls = null();
HXLINE(  21)		this->superClass = null();
HXLINE(  27)		this->_c = c;
HXLINE(  28)		this->_interp =  ::ex::InterpEx_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),null(),null());
HXLINE(  29)		this->buildCaches();
HXLINE(  31)		 ::Dynamic ctorField = this->findField(HX_("new",60,d0,53,00));
HXLINE(  32)		if (::hx::IsNotNull( ctorField )) {
HXLINE(  34)			this->callFunction(HX_("new",60,d0,53,00),args);
HXLINE(  35)			bool _hx_tmp;
HXDLIN(  35)			if (::hx::IsNull( this->superClass )) {
HXLINE(  35)				_hx_tmp = ::hx::IsNotNull( this->_c->__Field(HX_("extend",da,d1,1a,c7),::hx::paccDynamic) );
            			}
            			else {
HXLINE(  35)				_hx_tmp = false;
            			}
HXDLIN(  35)			if (_hx_tmp) {
HXLINE(  37)				 ::ex::InterpEx _this = this->_interp;
HXDLIN(  37)				if (!(_this->resumeError)) {
HXLINE(  37)					 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::ECustom(HX_("super() not called",4e,ec,82,2e)),( (int)(_this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(_this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(_this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(_this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN(  37)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            				}
            			}
            		}
            		else {
HXLINE(  40)			if (::hx::IsNotNull( this->_c->__Field(HX_("extend",da,d1,1a,c7),::hx::paccDynamic) )) {
HXLINE(  42)				this->createSuperClass(args);
            			}
            		}
            	}

Dynamic ScriptClass_obj::__CreateEmpty() { return new ScriptClass_obj; }

void *ScriptClass_obj::_hx_vtable = 0;

Dynamic ScriptClass_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScriptClass_obj > _hx_result = new ScriptClass_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ScriptClass_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0d2d9d8e;
}

::String ScriptClass_obj::get_className(){
            	HX_STACKFRAME(&_hx_pos_8e23cf5e9abbedc9_49_get_className)
HXLINE(  50)		::String name = HX_("",00,00,00,00);
HXLINE(  51)		if (::hx::IsNotNull( this->_c->__Field(HX_("pkg",0c,5a,55,00),::hx::paccDynamic) )) {
HXLINE(  53)			name = (name + ( (::Array< ::String >)(this->_c->__Field(HX_("pkg",0c,5a,55,00),::hx::paccDynamic)) )->join(HX_(".",2e,00,00,00)));
            		}
HXLINE(  55)		name = ( (::String)((name + this->_c->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic))) );
HXLINE(  56)		return name;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScriptClass_obj,get_className,return )

void ScriptClass_obj::superConstructor( ::Dynamic __o_arg0, ::Dynamic __o_arg1, ::Dynamic __o_arg2, ::Dynamic __o_arg3){
            		 ::Dynamic arg0 = __o_arg0;
            		if (::hx::IsNull(__o_arg0)) arg0 = ::ex::Param_obj::Unused_dyn();
            		 ::Dynamic arg1 = __o_arg1;
            		if (::hx::IsNull(__o_arg1)) arg1 = ::ex::Param_obj::Unused_dyn();
            		 ::Dynamic arg2 = __o_arg2;
            		if (::hx::IsNull(__o_arg2)) arg2 = ::ex::Param_obj::Unused_dyn();
            		 ::Dynamic arg3 = __o_arg3;
            		if (::hx::IsNull(__o_arg3)) arg3 = ::ex::Param_obj::Unused_dyn();
            	HX_STACKFRAME(&_hx_pos_8e23cf5e9abbedc9_60_superConstructor)
HXLINE(  61)		::cpp::VirtualArray args = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  62)		if (::hx::IsPointerNotEq( arg0,::ex::Param_obj::Unused_dyn() )) {
HXLINE(  63)			args->push(arg0);
            		}
HXLINE(  64)		if (::hx::IsPointerNotEq( arg1,::ex::Param_obj::Unused_dyn() )) {
HXLINE(  65)			args->push(arg1);
            		}
HXLINE(  66)		if (::hx::IsPointerNotEq( arg2,::ex::Param_obj::Unused_dyn() )) {
HXLINE(  67)			args->push(arg2);
            		}
HXLINE(  68)		if (::hx::IsPointerNotEq( arg3,::ex::Param_obj::Unused_dyn() )) {
HXLINE(  69)			args->push(arg3);
            		}
HXLINE(  70)		this->createSuperClass(args);
            	}


HX_DEFINE_DYNAMIC_FUNC4(ScriptClass_obj,superConstructor,(void))

void ScriptClass_obj::createSuperClass(::cpp::VirtualArray args){
            	HX_GC_STACKFRAME(&_hx_pos_8e23cf5e9abbedc9_74_createSuperClass)
HXDLIN(  74)		::Array< ::Dynamic> args1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,args);
HXDLIN(  74)		 ::ex::ScriptClass _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  75)		if (::hx::IsNull( ::cpp::VirtualArray( args1->__get(0)) )) {
HXLINE(  77)			args1[0] = ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE(  79)		::String extendString =  ::hscriptBase::Printer_obj::__alloc( HX_CTX )->typeToString(this->_c->__Field(HX_("extend",da,d1,1a,c7),::hx::paccDynamic));
HXLINE(  80)		bool _hx_tmp;
HXDLIN(  80)		if (::hx::IsNotNull( this->_c->__Field(HX_("pkg",0c,5a,55,00),::hx::paccDynamic) )) {
HXLINE(  80)			_hx_tmp = (extendString.indexOf(HX_(".",2e,00,00,00),null()) == -1);
            		}
            		else {
HXLINE(  80)			_hx_tmp = false;
            		}
HXDLIN(  80)		if (_hx_tmp) {
HXLINE(  82)			extendString = ((( (::Array< ::String >)(this->_c->__Field(HX_("pkg",0c,5a,55,00),::hx::paccDynamic)) )->join(HX_(".",2e,00,00,00)) + HX_(".",2e,00,00,00)) + extendString);
            		}
HXLINE(  84)		 ::Dynamic classDescriptor = ::ex::InterpEx_obj::findScriptClassDescriptor(extendString);
HXLINE(  85)		this->superClassName = extendString;
HXLINE(  86)		if (::hx::IsNotNull( classDescriptor )) {
HXLINE(  88)			 ::ex::ScriptClass abstractSuperClass =  ::ex::ScriptClass_obj::__alloc( HX_CTX ,classDescriptor,::cpp::VirtualArray( args1->__get(0)));
HXLINE(  89)			this->superClass = abstractSuperClass;
            		}
            		else {
HXLINE(  93)			::hx::Class c = ::Type_obj::resolveClass(extendString);
HXLINE(  94)			if (::hx::IsNull( c )) {
HXLINE(  96)				 ::ex::InterpEx _this = this->_interp;
HXDLIN(  96)				if (!(_this->resumeError)) {
HXLINE(  96)					 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::ECustom((HX_("could not resolve super class: ",59,6c,54,7d) + extendString)),( (int)(_this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(_this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(_this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(_this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN(  96)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            				}
            			}
            			else {
            				HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::ex::ScriptClass,_gthis,::Array< ::Dynamic>,args1,::hx::Class,c) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_8e23cf5e9abbedc9_101_createSuperClass)
HXLINE( 101)					_gthis->superClass = ::Type_obj::createInstance(c,::cpp::VirtualArray( args1->__get(0)));
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 100)				 ::Dynamic createSuperClass =  ::Dynamic(new _hx_Closure_0(_gthis,args1,c));
HXLINE( 103)				 ::Dynamic instance = ::tea::SScript_obj::superClassInstances->get(extendString);
HXLINE( 104)				if (::hx::IsNotNull( instance )) {
HXLINE( 106)					::hx::Class cl = ::Type_obj::getClass(instance);
HXLINE( 107)					bool _hx_tmp;
HXDLIN( 107)					if (::hx::IsNotNull( cl )) {
HXLINE( 107)						_hx_tmp = (extendString == ::Type_obj::getClassName(cl));
            					}
            					else {
HXLINE( 107)						_hx_tmp = false;
            					}
HXDLIN( 107)					if (_hx_tmp) {
HXLINE( 108)						this->superClass = instance;
            					}
            					else {
HXLINE( 110)						createSuperClass();
            					}
            				}
            				else {
HXLINE( 113)					createSuperClass();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScriptClass_obj,createSuperClass,(void))

 ::Dynamic ScriptClass_obj::callFunction0(::String name){
            	HX_STACKFRAME(&_hx_pos_8e23cf5e9abbedc9_120_callFunction0)
HXDLIN( 120)		return this->callFunction(name,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScriptClass_obj,callFunction0,return )

 ::Dynamic ScriptClass_obj::callFunction1(::String name, ::Dynamic arg0){
            	HX_STACKFRAME(&_hx_pos_8e23cf5e9abbedc9_125_callFunction1)
HXDLIN( 125)		return this->callFunction(name,::cpp::VirtualArray_obj::__new(1)->init(0,arg0));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ScriptClass_obj,callFunction1,return )

 ::Dynamic ScriptClass_obj::callFunction2(::String name, ::Dynamic arg0, ::Dynamic arg1){
            	HX_STACKFRAME(&_hx_pos_8e23cf5e9abbedc9_130_callFunction2)
HXDLIN( 130)		return this->callFunction(name,::cpp::VirtualArray_obj::__new(2)->init(0,arg0)->init(1,arg1));
            	}


HX_DEFINE_DYNAMIC_FUNC3(ScriptClass_obj,callFunction2,return )

 ::Dynamic ScriptClass_obj::callFunction3(::String name, ::Dynamic arg0, ::Dynamic arg1, ::Dynamic arg2){
            	HX_STACKFRAME(&_hx_pos_8e23cf5e9abbedc9_135_callFunction3)
HXDLIN( 135)		return this->callFunction(name,::cpp::VirtualArray_obj::__new(3)->init(0,arg0)->init(1,arg1)->init(2,arg2));
            	}


HX_DEFINE_DYNAMIC_FUNC4(ScriptClass_obj,callFunction3,return )

 ::Dynamic ScriptClass_obj::callFunction4(::String name, ::Dynamic arg0, ::Dynamic arg1, ::Dynamic arg2, ::Dynamic arg3){
            	HX_STACKFRAME(&_hx_pos_8e23cf5e9abbedc9_140_callFunction4)
HXDLIN( 140)		return this->callFunction(name,::cpp::VirtualArray_obj::__new(4)->init(0,arg0)->init(1,arg1)->init(2,arg2)->init(3,arg3));
            	}


HX_DEFINE_DYNAMIC_FUNC5(ScriptClass_obj,callFunction4,return )

 ::Dynamic ScriptClass_obj::callFunction(::String name,::cpp::VirtualArray args){
            	HX_GC_STACKFRAME(&_hx_pos_8e23cf5e9abbedc9_144_callFunction)
HXLINE( 145)		 ::Dynamic field = this->findField(name);
HXLINE( 146)		 ::Dynamic r = null();
HXLINE( 148)		if (::hx::IsNotNull( field )) {
HXLINE( 150)			 ::Dynamic fn = this->findFunction(name);
HXLINE( 151)			 ::Dynamic f = this->findField(name);
HXLINE( 152)			if (::hx::IsNotNull( f )) {
HXLINE( 155)				if (!(( (::Array< ::Dynamic>)(f->__Field(HX_("access",a4,95,06,0b),::hx::paccDynamic)) )->contains(::hscriptBase::FieldAccess_obj::AOverride_dyn()))) {
HXLINE( 157)					bool _hx_tmp;
HXDLIN( 157)					if (::hx::IsNotNull( this->superClass )) {
HXLINE( 157)						_hx_tmp = ::hx::IsNotNull( ::Reflect_obj::getProperty(this->superClass,name) );
            					}
            					else {
HXLINE( 157)						_hx_tmp = false;
            					}
HXDLIN( 157)					if (_hx_tmp) {
HXLINE( 158)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((((HX_("Field ",46,02,23,b5) + name) + HX_(" should be declared with 'override' since it is inherited from superclass ",c2,e1,86,30)) + this->get_className())));
            					}
            					else {
            						HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            						bool _hx_run( ::hscriptBase::ExprDef expr){
            							HX_STACKFRAME(&_hx_pos_8e23cf5e9abbedc9_169_callFunction)
HXLINE( 170)							 ::hscriptBase::ExprDef e = expr;
HXLINE( 171)							switch((int)(e->_hx_getIndex())){
            								case (int)1: {
HXLINE( 173)									 ::Dynamic _g = e->_hx_getObject(1);
HXDLIN( 173)									::String v = e->_hx_getString(0);
HXLINE( 174)									if ((v == HX_("super",7b,01,c0,84))) {
HXLINE( 174)										return true;
            									}
            									else {
HXLINE( 174)										return false;
            									}
            								}
            								break;
            								case (int)6: {
HXLINE( 175)									::String _g = e->_hx_getString(1);
HXDLIN( 175)									 ::Dynamic e1 = e->_hx_getObject(0);
HXLINE( 176)									 ::hscriptBase::ExprDef _g1 = e1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 176)									if ((_g1->_hx_getIndex() == 1)) {
HXLINE( 178)										 ::Dynamic _g = _g1->_hx_getObject(1);
HXDLIN( 178)										::String v = _g1->_hx_getString(0);
HXLINE( 179)										if ((v == HX_("super",7b,01,c0,84))) {
HXLINE( 179)											return true;
            										}
            										else {
HXLINE( 179)											return false;
            										}
            									}
            									else {
HXLINE( 181)										return false;
            									}
            								}
            								break;
            								default:{
HXLINE( 183)									return false;
            								}
            							}
HXLINE( 171)							return false;
            						}
            						HX_END_LOCAL_FUNC1(return)

HXLINE( 161)						::String className = null();
HXLINE( 163)						if (::hx::IsNotNull( this->superClass )) {
HXLINE( 164)							className = ::Type_obj::getClassName(this->superClass);
            						}
HXLINE( 165)						if (::hx::IsNull( className )) {
HXLINE( 166)							className = this->superClassName;
            						}
HXLINE( 167)						 ::hscriptBase::ExprDef expr =  ::Dynamic(fn->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic))->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXLINE( 168)						 ::Dynamic isSuper =  ::Dynamic(new _hx_Closure_0());
HXLINE( 186)						if ((expr->_hx_getIndex() == 5)) {
HXLINE( 188)							::Array< ::Dynamic> e = expr->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 189)							{
HXLINE( 189)								int _g = 0;
HXDLIN( 189)								while((_g < e->length)){
HXLINE( 189)									 ::Dynamic i = e->__get(_g);
HXDLIN( 189)									_g = (_g + 1);
HXLINE( 191)									 ::hscriptBase::ExprDef i1 = i->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXLINE( 192)									if (( (bool)(isSuper(i1)) )) {
HXLINE( 193)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((((HX_("Field ",46,02,23,b5) + name) + HX_(" should be declared with 'override' since it is inherited from superclass ",c2,e1,86,30)) + className)));
            									}
            									else {
HXLINE( 195)										if ((i1->_hx_getIndex() == 9)) {
HXLINE( 197)											::Array< ::Dynamic> _g = i1->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 197)											{
HXLINE( 197)												 ::Dynamic e = i1->_hx_getObject(0);
HXLINE( 198)												if (( (bool)(isSuper( ::Dynamic(e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic)))) )) {
HXLINE( 199)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((((HX_("Field ",46,02,23,b5) + name) + HX_(" should be declared with 'override' since it is inherited from superclass ",c2,e1,86,30)) + className)));
            												}
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
HXLINE( 208)			 ::haxe::ds::StringMap previousValues =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 209)			int i = 0;
HXLINE( 210)			{
HXLINE( 210)				int _g = 0;
HXDLIN( 210)				::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(fn->__Field(HX_("args",5d,8d,74,40),::hx::paccDynamic)) );
HXDLIN( 210)				while((_g < _g1->length)){
HXLINE( 210)					 ::Dynamic a = _g1->__get(_g);
HXDLIN( 210)					_g = (_g + 1);
HXLINE( 212)					 ::Dynamic value = null();
HXLINE( 214)					bool _hx_tmp;
HXDLIN( 214)					if (::hx::IsNotNull( args )) {
HXLINE( 214)						_hx_tmp = (i < args->get_length());
            					}
            					else {
HXLINE( 214)						_hx_tmp = false;
            					}
HXDLIN( 214)					if (_hx_tmp) {
HXLINE( 216)						value = args->__get(i);
            					}
            					else {
HXLINE( 218)						if (::hx::IsNotNull( a->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic) )) {
HXLINE( 220)							value = this->_interp->expr(a->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic),null());
            						}
            					}
HXLINE( 223)					if (this->_interp->variables->exists(( (::String)(a->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ))) {
HXLINE( 225)						::String key = ( (::String)(a->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXDLIN( 225)						previousValues->set(key,this->_interp->variables->get( ::Dynamic(a->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic))));
            					}
HXLINE( 227)					this->_interp->variables->set(( (::String)(a->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ),value);
HXLINE( 228)					i = (i + 1);
            				}
            			}
HXLINE( 231)			r = this->_interp->execute(fn->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic));
HXLINE( 233)			{
HXLINE( 233)				int _g2 = 0;
HXDLIN( 233)				::Array< ::Dynamic> _g3 = ( (::Array< ::Dynamic>)(fn->__Field(HX_("args",5d,8d,74,40),::hx::paccDynamic)) );
HXDLIN( 233)				while((_g2 < _g3->length)){
HXLINE( 233)					 ::Dynamic a = _g3->__get(_g2);
HXDLIN( 233)					_g2 = (_g2 + 1);
HXLINE( 235)					if (previousValues->exists(( (::String)(a->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ))) {
HXLINE( 237)						::Dynamic this1 = this->_interp->variables;
HXDLIN( 237)						::String key = ( (::String)(a->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXDLIN( 237)						( ( ::haxe::ds::StringMap)(this1) )->set(key,previousValues->get( ::Dynamic(a->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic))));
            					}
            					else {
HXLINE( 241)						this->_interp->variables->remove(( (::String)(a->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ));
            					}
            				}
            			}
            		}
            		else {
HXLINE( 247)			::cpp::VirtualArray fixedArgs = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 248)			{
HXLINE( 248)				int _g = 0;
HXDLIN( 248)				while((_g < args->get_length())){
HXLINE( 248)					 ::Dynamic a = args->__get(_g);
HXDLIN( 248)					_g = (_g + 1);
HXLINE( 250)					if (::Std_obj::isOfType(a,::hx::ClassOf< ::ex::ScriptClass >())) {
HXLINE( 252)						fixedArgs->push(::hx::TCast<  ::ex::ScriptClass >::cast(a)->superClass);
            					}
            					else {
HXLINE( 256)						fixedArgs->push(a);
            					}
            				}
            			}
HXLINE( 259)			 ::Dynamic r1 = this->superClass;
HXDLIN( 259)			r = ::Reflect_obj::callMethod(r1,::Reflect_obj::field(this->superClass,name),fixedArgs);
            		}
HXLINE( 261)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ScriptClass_obj,callFunction,return )

 ::Dynamic ScriptClass_obj::findFunction(::String name){
            	HX_STACKFRAME(&_hx_pos_8e23cf5e9abbedc9_265_findFunction)
HXLINE( 266)		if (::hx::IsNotNull( this->_cachedFunctionDecls )) {
HXLINE( 268)			return this->_cachedFunctionDecls->get(name);
            		}
HXLINE( 271)		{
HXLINE( 271)			int _g = 0;
HXDLIN( 271)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(this->_c->__Field(HX_("fields",79,8e,8e,80),::hx::paccDynamic)) );
HXDLIN( 271)			while((_g < _g1->length)){
HXLINE( 271)				 ::Dynamic f = _g1->__get(_g);
HXDLIN( 271)				_g = (_g + 1);
HXLINE( 273)				if (::hx::IsEq( f->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic),name )) {
HXLINE( 275)					 ::hscriptBase::FieldKind _g = f->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic);
HXDLIN( 275)					if ((_g->_hx_getIndex() == 0)) {
HXLINE( 277)						 ::Dynamic fn = _g->_hx_getObject(0);
HXLINE( 278)						return fn;
            					}
            				}
            			}
            		}
HXLINE( 284)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScriptClass_obj,findFunction,return )

 ::Dynamic ScriptClass_obj::findVar(::String name){
            	HX_STACKFRAME(&_hx_pos_8e23cf5e9abbedc9_288_findVar)
HXLINE( 289)		if (::hx::IsNotNull( this->_cachedVarDecls )) {
HXLINE( 291)			this->_cachedVarDecls->get_bool(name);
            		}
HXLINE( 294)		{
HXLINE( 294)			int _g = 0;
HXDLIN( 294)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(this->_c->__Field(HX_("fields",79,8e,8e,80),::hx::paccDynamic)) );
HXDLIN( 294)			while((_g < _g1->length)){
HXLINE( 294)				 ::Dynamic f = _g1->__get(_g);
HXDLIN( 294)				_g = (_g + 1);
HXLINE( 296)				if (::hx::IsEq( f->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic),name )) {
HXLINE( 298)					 ::hscriptBase::FieldKind _g = f->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic);
HXDLIN( 298)					if ((_g->_hx_getIndex() == 1)) {
HXLINE( 300)						 ::Dynamic v = _g->_hx_getObject(0);
HXLINE( 301)						return v;
            					}
            				}
            			}
            		}
HXLINE( 307)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScriptClass_obj,findVar,return )

 ::Dynamic ScriptClass_obj::findField(::String name){
            	HX_STACKFRAME(&_hx_pos_8e23cf5e9abbedc9_311_findField)
HXLINE( 312)		if (::hx::IsNotNull( this->_cachedFieldDecls )) {
HXLINE( 314)			return this->_cachedFieldDecls->get(name);
            		}
HXLINE( 317)		{
HXLINE( 317)			int _g = 0;
HXDLIN( 317)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(this->_c->__Field(HX_("fields",79,8e,8e,80),::hx::paccDynamic)) );
HXDLIN( 317)			while((_g < _g1->length)){
HXLINE( 317)				 ::Dynamic f = _g1->__get(_g);
HXDLIN( 317)				_g = (_g + 1);
HXLINE( 319)				if (::hx::IsEq( f->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic),name )) {
HXLINE( 321)					return f;
            				}
            			}
            		}
HXLINE( 324)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScriptClass_obj,findField,return )

 ::haxe::ds::StringMap ScriptClass_obj::listFunctions(){
            	HX_GC_STACKFRAME(&_hx_pos_8e23cf5e9abbedc9_328_listFunctions)
HXDLIN( 328)		if (::hx::IsNotNull( this->_cachedFunctionDecls )) {
HXDLIN( 328)			return this->_cachedFunctionDecls;
            		}
            		else {
HXDLIN( 328)			return  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXDLIN( 328)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScriptClass_obj,listFunctions,return )

void ScriptClass_obj::buildCaches(){
            	HX_GC_STACKFRAME(&_hx_pos_8e23cf5e9abbedc9_335_buildCaches)
HXLINE( 336)		this->_cachedFieldDecls =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 337)		this->_cachedFunctionDecls =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 338)		this->_cachedVarDecls =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 340)		{
HXLINE( 340)			int _g = 0;
HXDLIN( 340)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(this->_c->__Field(HX_("fields",79,8e,8e,80),::hx::paccDynamic)) );
HXDLIN( 340)			while((_g < _g1->length)){
HXLINE( 340)				 ::Dynamic f = _g1->__get(_g);
HXDLIN( 340)				_g = (_g + 1);
HXLINE( 342)				this->_cachedFieldDecls->set(( (::String)(f->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ),f);
HXLINE( 343)				{
HXLINE( 343)					 ::hscriptBase::FieldKind _g2 = f->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic);
HXDLIN( 343)					switch((int)(_g2->_hx_getIndex())){
            						case (int)0: {
HXLINE( 345)							 ::Dynamic fn = _g2->_hx_getObject(0);
HXLINE( 346)							this->_cachedFunctionDecls->set(( (::String)(f->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ),fn);
            						}
            						break;
            						case (int)1: {
HXLINE( 347)							 ::Dynamic v = _g2->_hx_getObject(0);
HXDLIN( 347)							{
HXLINE( 348)								this->_cachedVarDecls->set(( (::String)(f->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ),v);
HXLINE( 349)								if (::hx::IsNotNull( v->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic) )) {
HXLINE( 351)									 ::Dynamic varValue = this->_interp->expr(v->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic),null());
HXLINE( 352)									this->_interp->variables->set(( (::String)(f->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ),varValue);
            								}
            							}
            						}
            						break;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScriptClass_obj,buildCaches,(void))


::hx::ObjectPtr< ScriptClass_obj > ScriptClass_obj::__new( ::Dynamic c,::cpp::VirtualArray args) {
	::hx::ObjectPtr< ScriptClass_obj > __this = new ScriptClass_obj();
	__this->__construct(c,args);
	return __this;
}

::hx::ObjectPtr< ScriptClass_obj > ScriptClass_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic c,::cpp::VirtualArray args) {
	ScriptClass_obj *__this = (ScriptClass_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScriptClass_obj), true, "ex.ScriptClass"));
	*(void **)__this = ScriptClass_obj::_hx_vtable;
	__this->__construct(c,args);
	return __this;
}

ScriptClass_obj::ScriptClass_obj()
{
}

void ScriptClass_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScriptClass);
	HX_MARK_MEMBER_NAME(_c,"_c");
	HX_MARK_MEMBER_NAME(_interp,"_interp");
	HX_MARK_MEMBER_NAME(superClass,"superClass");
	HX_MARK_MEMBER_NAME(superClassName,"superClassName");
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(_cachedFieldDecls,"_cachedFieldDecls");
	HX_MARK_MEMBER_NAME(_cachedFunctionDecls,"_cachedFunctionDecls");
	HX_MARK_MEMBER_NAME(_cachedVarDecls,"_cachedVarDecls");
	HX_MARK_END_CLASS();
}

void ScriptClass_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_c,"_c");
	HX_VISIT_MEMBER_NAME(_interp,"_interp");
	HX_VISIT_MEMBER_NAME(superClass,"superClass");
	HX_VISIT_MEMBER_NAME(superClassName,"superClassName");
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(_cachedFieldDecls,"_cachedFieldDecls");
	HX_VISIT_MEMBER_NAME(_cachedFunctionDecls,"_cachedFunctionDecls");
	HX_VISIT_MEMBER_NAME(_cachedVarDecls,"_cachedVarDecls");
}

::hx::Val ScriptClass_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_c") ) { return ::hx::Val( _c ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_interp") ) { return ::hx::Val( _interp ); }
		if (HX_FIELD_EQ(inName,"findVar") ) { return ::hx::Val( findVar_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_className() : className ); }
		if (HX_FIELD_EQ(inName,"findField") ) { return ::hx::Val( findField_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"superClass") ) { return ::hx::Val( superClass ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buildCaches") ) { return ::hx::Val( buildCaches_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"callFunction") ) { return ::hx::Val( callFunction_dyn() ); }
		if (HX_FIELD_EQ(inName,"findFunction") ) { return ::hx::Val( findFunction_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_className") ) { return ::hx::Val( get_className_dyn() ); }
		if (HX_FIELD_EQ(inName,"callFunction0") ) { return ::hx::Val( callFunction0_dyn() ); }
		if (HX_FIELD_EQ(inName,"callFunction1") ) { return ::hx::Val( callFunction1_dyn() ); }
		if (HX_FIELD_EQ(inName,"callFunction2") ) { return ::hx::Val( callFunction2_dyn() ); }
		if (HX_FIELD_EQ(inName,"callFunction3") ) { return ::hx::Val( callFunction3_dyn() ); }
		if (HX_FIELD_EQ(inName,"callFunction4") ) { return ::hx::Val( callFunction4_dyn() ); }
		if (HX_FIELD_EQ(inName,"listFunctions") ) { return ::hx::Val( listFunctions_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"superClassName") ) { return ::hx::Val( superClassName ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_cachedVarDecls") ) { return ::hx::Val( _cachedVarDecls ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"superConstructor") ) { return ::hx::Val( superConstructor_dyn() ); }
		if (HX_FIELD_EQ(inName,"createSuperClass") ) { return ::hx::Val( createSuperClass_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_cachedFieldDecls") ) { return ::hx::Val( _cachedFieldDecls ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_cachedFunctionDecls") ) { return ::hx::Val( _cachedFunctionDecls ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScriptClass_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_c") ) { _c=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_interp") ) { _interp=inValue.Cast<  ::ex::InterpEx >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"superClass") ) { superClass=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"superClassName") ) { superClassName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_cachedVarDecls") ) { _cachedVarDecls=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_cachedFieldDecls") ) { _cachedFieldDecls=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_cachedFunctionDecls") ) { _cachedFunctionDecls=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScriptClass_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_c",24,53,00,00));
	outFields->push(HX_("_interp",73,8b,fd,0c));
	outFields->push(HX_("superClass",bd,a8,07,a8));
	outFields->push(HX_("superClassName",a8,e9,8f,0f));
	outFields->push(HX_("className",a3,92,3d,dc));
	outFields->push(HX_("_cachedFieldDecls",90,46,68,95));
	outFields->push(HX_("_cachedFunctionDecls",50,dc,0a,a2));
	outFields->push(HX_("_cachedVarDecls",03,4f,f9,02));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScriptClass_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ScriptClass_obj,_c),HX_("_c",24,53,00,00)},
	{::hx::fsObject /*  ::ex::InterpEx */ ,(int)offsetof(ScriptClass_obj,_interp),HX_("_interp",73,8b,fd,0c)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ScriptClass_obj,superClass),HX_("superClass",bd,a8,07,a8)},
	{::hx::fsString,(int)offsetof(ScriptClass_obj,superClassName),HX_("superClassName",a8,e9,8f,0f)},
	{::hx::fsString,(int)offsetof(ScriptClass_obj,className),HX_("className",a3,92,3d,dc)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ScriptClass_obj,_cachedFieldDecls),HX_("_cachedFieldDecls",90,46,68,95)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ScriptClass_obj,_cachedFunctionDecls),HX_("_cachedFunctionDecls",50,dc,0a,a2)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ScriptClass_obj,_cachedVarDecls),HX_("_cachedVarDecls",03,4f,f9,02)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScriptClass_obj_sStaticStorageInfo = 0;
#endif

static ::String ScriptClass_obj_sMemberFields[] = {
	HX_("_c",24,53,00,00),
	HX_("_interp",73,8b,fd,0c),
	HX_("superClass",bd,a8,07,a8),
	HX_("superClassName",a8,e9,8f,0f),
	HX_("className",a3,92,3d,dc),
	HX_("get_className",7a,66,a1,9d),
	HX_("superConstructor",3f,0f,9f,05),
	HX_("createSuperClass",d9,26,35,dd),
	HX_("callFunction0",9a,cd,0e,b6),
	HX_("callFunction1",9b,cd,0e,b6),
	HX_("callFunction2",9c,cd,0e,b6),
	HX_("callFunction3",9d,cd,0e,b6),
	HX_("callFunction4",9e,cd,0e,b6),
	HX_("callFunction",d6,4d,95,4c),
	HX_("findFunction",71,98,d0,01),
	HX_("findVar",2e,f0,74,25),
	HX_("findField",c1,c5,8a,ef),
	HX_("listFunctions",1d,52,37,c0),
	HX_("_cachedFieldDecls",90,46,68,95),
	HX_("_cachedFunctionDecls",50,dc,0a,a2),
	HX_("_cachedVarDecls",03,4f,f9,02),
	HX_("buildCaches",bf,45,63,01),
	::String(null()) };

::hx::Class ScriptClass_obj::__mClass;

void ScriptClass_obj::__register()
{
	ScriptClass_obj _hx_dummy;
	ScriptClass_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ex.ScriptClass",92,d5,6c,49);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScriptClass_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScriptClass_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScriptClass_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScriptClass_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace ex
