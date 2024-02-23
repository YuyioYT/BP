#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
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
#ifndef INCLUDED_ex_ParserEx
#include <ex/ParserEx.h>
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
#ifndef INCLUDED_hscriptBase_Interp
#include <hscriptBase/Interp.h>
#endif
#ifndef INCLUDED_hscriptBase_ModuleDecl
#include <hscriptBase/ModuleDecl.h>
#endif
#ifndef INCLUDED_hscriptBase_Parser
#include <hscriptBase/Parser.h>
#endif
#ifndef INCLUDED_hscriptBase_Printer
#include <hscriptBase/Printer.h>
#endif
#ifndef INCLUDED_tea_backend_SScriptX
#include <tea/backend/SScriptX.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_facc3a65ad65c39b_11_new,"ex.InterpEx","new",0x828ca8d4,"ex.InterpEx.new","ex/InterpEx.hx",11,0x6f1ababb)
HX_LOCAL_STACK_FRAME(_hx_pos_facc3a65ad65c39b_35_posInfos,"ex.InterpEx","posInfos",0x444c851d,"ex.InterpEx.posInfos","ex/InterpEx.hx",35,0x6f1ababb)
HX_LOCAL_STACK_FRAME(_hx_pos_facc3a65ad65c39b_61_cnew,"ex.InterpEx","cnew",0xb1487ce9,"ex.InterpEx.cnew","ex/InterpEx.hx",61,0x6f1ababb)
HX_LOCAL_STACK_FRAME(_hx_pos_facc3a65ad65c39b_99_assign,"ex.InterpEx","assign",0x0f912e3b,"ex.InterpEx.assign","ex/InterpEx.hx",99,0x6f1ababb)
HX_LOCAL_STACK_FRAME(_hx_pos_facc3a65ad65c39b_115_fcall,"ex.InterpEx","fcall",0x21102178,"ex.InterpEx.fcall","ex/InterpEx.hx",115,0x6f1ababb)
HX_LOCAL_STACK_FRAME(_hx_pos_facc3a65ad65c39b_126_call,"ex.InterpEx","call",0xb13ea5aa,"ex.InterpEx.call","ex/InterpEx.hx",126,0x6f1ababb)
HX_LOCAL_STACK_FRAME(_hx_pos_facc3a65ad65c39b_138_get,"ex.InterpEx","get",0x8287590a,"ex.InterpEx.get","ex/InterpEx.hx",138,0x6f1ababb)
HX_LOCAL_STACK_FRAME(_hx_pos_facc3a65ad65c39b_166_set,"ex.InterpEx","set",0x82907416,"ex.InterpEx.set","ex/InterpEx.hx",166,0x6f1ababb)
HX_LOCAL_STACK_FRAME(_hx_pos_facc3a65ad65c39b_192_resolve,"ex.InterpEx","resolve",0xbd603560,"ex.InterpEx.resolve","ex/InterpEx.hx",192,0x6f1ababb)
HX_LOCAL_STACK_FRAME(_hx_pos_facc3a65ad65c39b_248_addModule,"ex.InterpEx","addModule",0x691c1121,"ex.InterpEx.addModule","ex/InterpEx.hx",248,0x6f1ababb)
HX_LOCAL_STACK_FRAME(_hx_pos_facc3a65ad65c39b_255_createScriptClassInstance,"ex.InterpEx","createScriptClassInstance",0xbc51d0ba,"ex.InterpEx.createScriptClassInstance","ex/InterpEx.hx",255,0x6f1ababb)
HX_LOCAL_STACK_FRAME(_hx_pos_facc3a65ad65c39b_265_registerModule,"ex.InterpEx","registerModule",0x8f188f7b,"ex.InterpEx.registerModule","ex/InterpEx.hx",265,0x6f1ababb)
HX_LOCAL_STACK_FRAME(_hx_pos_facc3a65ad65c39b_46_registerScriptClass,"ex.InterpEx","registerScriptClass",0x4e2be8fe,"ex.InterpEx.registerScriptClass","ex/InterpEx.hx",46,0x6f1ababb)
HX_LOCAL_STACK_FRAME(_hx_pos_facc3a65ad65c39b_57_findScriptClassDescriptor,"ex.InterpEx","findScriptClassDescriptor",0x4b1bb777,"ex.InterpEx.findScriptClassDescriptor","ex/InterpEx.hx",57,0x6f1ababb)
HX_LOCAL_STACK_FRAME(_hx_pos_facc3a65ad65c39b_15_boot,"ex.InterpEx","boot",0xb0a0113e,"ex.InterpEx.boot","ex/InterpEx.hx",15,0x6f1ababb)
HX_LOCAL_STACK_FRAME(_hx_pos_facc3a65ad65c39b_43_boot,"ex.InterpEx","boot",0xb0a0113e,"ex.InterpEx.boot","ex/InterpEx.hx",43,0x6f1ababb)
namespace ex{

void InterpEx_obj::__construct( ::ex::ScriptClass proxy, ::Dynamic __o_push, ::haxe::ds::StringMap superClassInstances){
            		 ::Dynamic push = __o_push;
            		if (::hx::IsNull(__o_push)) push = true;
            	HX_GC_STACKFRAME(&_hx_pos_facc3a65ad65c39b_11_new)
HXLINE( 189)		this->_nextCallObject = null();
HXLINE(  19)		this->changedClasses =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  17)		this->origin = HX_("SScriptX",da,23,90,85);
HXLINE(  16)		this->_proxy = null();
HXLINE(  23)		super::__construct();
HXLINE(  24)		this->_proxy = proxy;
HXLINE(  25)		this->variables->set(HX_("Type",da,1e,e2,37),( ( ::Dynamic)(::hx::ClassOf< ::Type >()) ));
HXLINE(  26)		this->variables->set(HX_("Math",e8,6d,2f,33),( ( ::Dynamic)(::hx::ClassOf< ::Math >()) ));
HXLINE(  27)		this->variables->set(HX_("Std",83,60,3f,00),( ( ::Dynamic)(::hx::ClassOf< ::Std >()) ));
HXLINE(  28)		if (( (bool)(push) )) {
HXLINE(  29)			::ex::InterpEx_obj::interps->push(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(  30)		{
HXLINE(  30)			 ::Dynamic i = ::tea::backend::SScriptX_obj::variables->keys();
HXDLIN(  30)			while(( (bool)(i->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  30)				::String i1 = ( (::String)(i->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  31)				if (!(this->variables->exists(i1))) {
HXLINE(  32)					::Dynamic this1 = this->variables;
HXDLIN(  32)					( ( ::haxe::ds::StringMap)(this1) )->set(i1,::tea::backend::SScriptX_obj::variables->get(i1));
            				}
            			}
            		}
            	}

Dynamic InterpEx_obj::__CreateEmpty() { return new InterpEx_obj; }

void *InterpEx_obj::_hx_vtable = 0;

Dynamic InterpEx_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InterpEx_obj > _hx_result = new InterpEx_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool InterpEx_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x03f92a02) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x03f92a02;
	} else {
		return inClassId==(int)0x43235d34;
	}
}

 ::Dynamic InterpEx_obj::posInfos(){
            	HX_STACKFRAME(&_hx_pos_facc3a65ad65c39b_35_posInfos)
HXLINE(  37)		if (::hx::IsNotNull( this->curExpr )) {
HXLINE(  38)			return  ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("fileName",e7,5a,43,62), ::Dynamic(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)))
            				->setFixed(1,HX_("lineNumber",dd,81,22,76), ::Dynamic(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic))));
            		}
HXLINE(  40)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("fileName",e7,5a,43,62),HX_("SScriptX",da,23,90,85))
            			->setFixed(1,HX_("lineNumber",dd,81,22,76),0));
            	}


 ::Dynamic InterpEx_obj::cnew(::String cl,::cpp::VirtualArray args){
            	HX_GC_STACKFRAME(&_hx_pos_facc3a65ad65c39b_61_cnew)
HXLINE(  62)		if (::ex::InterpEx_obj::_scriptClassDescriptors->exists(cl)) {
HXLINE(  64)			 ::ex::ScriptClass proxy =  ::ex::ScriptClass_obj::__alloc( HX_CTX ,::ex::InterpEx_obj::_scriptClassDescriptors->get(cl),args);
HXLINE(  65)			return proxy;
            		}
            		else {
HXLINE(  67)			if (::hx::IsNotNull( this->_proxy )) {
HXLINE(  69)				if (::hx::IsNotNull( this->_proxy->_c->__Field(HX_("pkg",0c,5a,55,00),::hx::paccDynamic) )) {
HXLINE(  71)					::String packagedClass = ((( (::Array< ::String >)(this->_proxy->_c->__Field(HX_("pkg",0c,5a,55,00),::hx::paccDynamic)) )->join(HX_(".",2e,00,00,00)) + HX_(".",2e,00,00,00)) + cl);
HXLINE(  72)					if (::ex::InterpEx_obj::_scriptClassDescriptors->exists(packagedClass)) {
HXLINE(  74)						 ::ex::ScriptClass proxy =  ::ex::ScriptClass_obj::__alloc( HX_CTX ,::ex::InterpEx_obj::_scriptClassDescriptors->get(packagedClass),args);
HXLINE(  75)						return proxy;
            					}
            				}
HXLINE(  79)				bool _hx_tmp;
HXDLIN(  79)				if (::hx::IsNotNull( this->_proxy->_c->__Field(HX_("imports",6e,97,ca,69),::hx::paccDynamic) )) {
HXLINE(  79)					_hx_tmp = ( ( ::haxe::ds::StringMap)( ::Dynamic(this->_proxy->_c->__Field(HX_("imports",6e,97,ca,69),::hx::paccDynamic))) )->exists(cl);
            				}
            				else {
HXLINE(  79)					_hx_tmp = false;
            				}
HXDLIN(  79)				if (_hx_tmp) {
HXLINE(  81)					::String importedClass = ( (::Array< ::String >)(( ( ::haxe::ds::StringMap)( ::Dynamic(this->_proxy->_c->__Field(HX_("imports",6e,97,ca,69),::hx::paccDynamic))) )->get(cl)) )->join(HX_(".",2e,00,00,00));
HXLINE(  82)					if (::ex::InterpEx_obj::_scriptClassDescriptors->exists(importedClass)) {
HXLINE(  84)						 ::ex::ScriptClass proxy =  ::ex::ScriptClass_obj::__alloc( HX_CTX ,::ex::InterpEx_obj::_scriptClassDescriptors->get(importedClass),args);
HXLINE(  85)						return proxy;
            					}
HXLINE(  88)					::hx::Class c = ::Type_obj::resolveClass(importedClass);
HXLINE(  89)					if (::hx::IsNotNull( c )) {
HXLINE(  91)						return ::Type_obj::createInstance(c,args);
            					}
            				}
            			}
            		}
HXLINE(  95)		return this->super::cnew(cl,args);
            	}


 ::Dynamic InterpEx_obj::assign( ::Dynamic e1, ::Dynamic e2){
            	HX_STACKFRAME(&_hx_pos_facc3a65ad65c39b_99_assign)
HXLINE( 100)		 ::Dynamic v = this->expr(e2,null());
HXLINE( 101)		{
HXLINE( 101)			 ::hscriptBase::ExprDef _g = e1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 101)			if ((_g->_hx_getIndex() == 1)) {
HXLINE( 103)				 ::Dynamic _g1 = _g->_hx_getObject(1);
HXDLIN( 103)				{
HXLINE( 103)					::String id = _g->_hx_getString(0);
HXLINE( 104)					bool _hx_tmp;
HXDLIN( 104)					bool _hx_tmp1;
HXDLIN( 104)					if (::hx::IsNotNull( this->_proxy )) {
HXLINE( 104)						_hx_tmp1 = ::hx::IsNotNull( this->_proxy->superClass );
            					}
            					else {
HXLINE( 104)						_hx_tmp1 = false;
            					}
HXDLIN( 104)					if (_hx_tmp1) {
HXLINE( 104)						_hx_tmp = ::Reflect_obj::hasField(this->_proxy->superClass,id);
            					}
            					else {
HXLINE( 104)						_hx_tmp = false;
            					}
HXDLIN( 104)					if (_hx_tmp) {
HXLINE( 106)						::Reflect_obj::setProperty(this->_proxy->superClass,id,v);
HXLINE( 107)						return v;
            					}
            				}
            			}
            		}
HXLINE( 111)		return this->super::assign(e1,e2);
            	}


 ::Dynamic InterpEx_obj::fcall( ::Dynamic o,::String f,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_facc3a65ad65c39b_115_fcall)
HXLINE( 116)		if (::Std_obj::isOfType(o,::hx::ClassOf< ::ex::ScriptClass >())) {
HXLINE( 118)			this->_nextCallObject = null();
HXLINE( 119)			 ::ex::ScriptClass proxy = ::hx::TCast<  ::ex::ScriptClass >::cast(o);
HXLINE( 120)			return proxy->callFunction(f,args);
            		}
HXLINE( 122)		return this->super::fcall(o,f,args);
            	}


 ::Dynamic InterpEx_obj::call( ::Dynamic o, ::Dynamic f,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_facc3a65ad65c39b_126_call)
HXLINE( 128)		bool _hx_tmp;
HXDLIN( 128)		if (::hx::IsNull( o )) {
HXLINE( 128)			_hx_tmp = ::hx::IsNotNull( this->_nextCallObject );
            		}
            		else {
HXLINE( 128)			_hx_tmp = false;
            		}
HXDLIN( 128)		if (_hx_tmp) {
HXLINE( 130)			o = this->_nextCallObject;
            		}
HXLINE( 132)		 ::Dynamic r = this->super::call(o,f,args);
HXLINE( 133)		this->_nextCallObject = null();
HXLINE( 134)		return r;
            	}


 ::Dynamic InterpEx_obj::get( ::Dynamic o,::String f){
            	HX_GC_STACKFRAME(&_hx_pos_facc3a65ad65c39b_138_get)
HXLINE( 139)		if (::hx::IsNull( o )) {
HXLINE( 140)			if (!(this->resumeError)) {
HXLINE( 140)				 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EInvalidAccess(f),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 140)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            			}
            		}
HXLINE( 141)		if (::Std_obj::isOfType(o,::hx::ClassOf< ::ex::ScriptClass >())) {
HXLINE( 143)			 ::ex::ScriptClass proxy = ::hx::TCast<  ::ex::ScriptClass >::cast(o);
HXLINE( 144)			if (proxy->_interp->variables->exists(f)) {
HXLINE( 146)				return proxy->_interp->variables->get(f);
            			}
            			else {
HXLINE( 148)				bool _hx_tmp;
HXDLIN( 148)				if (::hx::IsNotNull( proxy->superClass )) {
HXLINE( 148)					_hx_tmp = ::Reflect_obj::hasField(proxy->superClass,f);
            				}
            				else {
HXLINE( 148)					_hx_tmp = false;
            				}
HXDLIN( 148)				if (_hx_tmp) {
HXLINE( 150)					return ::Reflect_obj::getProperty(proxy->superClass,f);
            				}
            				else {
HXLINE( 154)					try {
            						HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 156)						return ::ex::_AbstractScriptClass::AbstractScriptClass_Impl__obj::resolveField(proxy,f);
            					} catch( ::Dynamic _hx_e) {
            						if (_hx_e.IsClass<  ::Dynamic >() ){
            							HX_STACK_BEGIN_CATCH
            							 ::Dynamic _g = _hx_e;
HXLINE( 158)							{
HXLINE( 158)								null();
            							}
            						}
            						else {
            							HX_STACK_DO_THROW(_hx_e);
            						}
            					}
HXLINE( 159)					if (!(this->resumeError)) {
HXLINE( 159)						 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EUnknownVariable(f),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 159)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            					}
            				}
            			}
            		}
HXLINE( 162)		return this->super::get(o,f);
            	}


 ::Dynamic InterpEx_obj::set( ::Dynamic o,::String f, ::Dynamic v){
            	HX_GC_STACKFRAME(&_hx_pos_facc3a65ad65c39b_166_set)
HXLINE( 167)		if (::hx::IsNull( o )) {
HXLINE( 168)			if (!(this->resumeError)) {
HXLINE( 168)				 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EInvalidAccess(f),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 168)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            			}
            		}
HXLINE( 169)		if (::Std_obj::isOfType(o,::hx::ClassOf< ::ex::ScriptClass >())) {
HXLINE( 171)			 ::ex::ScriptClass proxy = ::hx::TCast<  ::ex::ScriptClass >::cast(o);
HXLINE( 172)			if (proxy->_interp->variables->exists(f)) {
HXLINE( 174)				proxy->_interp->variables->set(f,v);
            			}
            			else {
HXLINE( 176)				bool _hx_tmp;
HXDLIN( 176)				if (::hx::IsNotNull( proxy->superClass )) {
HXLINE( 176)					_hx_tmp = ::Reflect_obj::hasField(proxy->superClass,f);
            				}
            				else {
HXLINE( 176)					_hx_tmp = false;
            				}
HXDLIN( 176)				if (_hx_tmp) {
HXLINE( 178)					::Reflect_obj::setProperty(proxy->superClass,f,v);
            				}
            				else {
HXLINE( 182)					if (!(this->resumeError)) {
HXLINE( 182)						 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EUnknownVariable(f),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 182)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            					}
            				}
            			}
HXLINE( 184)			return v;
            		}
HXLINE( 186)		return this->super::set(o,f,v);
            	}


 ::Dynamic InterpEx_obj::resolve(::String id){
            	HX_GC_STACKFRAME(&_hx_pos_facc3a65ad65c39b_192_resolve)
HXLINE( 193)		this->_nextCallObject = null();
HXLINE( 194)		bool _hx_tmp;
HXDLIN( 194)		if ((id == HX_("super",7b,01,c0,84))) {
HXLINE( 194)			_hx_tmp = ::hx::IsNotNull( this->_proxy );
            		}
            		else {
HXLINE( 194)			_hx_tmp = false;
            		}
HXDLIN( 194)		if (_hx_tmp) {
HXLINE( 196)			if (::hx::IsNull( this->_proxy->superClass )) {
HXLINE( 198)				return this->_proxy->superConstructor_dyn();
            			}
            			else {
HXLINE( 202)				return this->_proxy->superClass;
            			}
            		}
            		else {
HXLINE( 205)			bool _hx_tmp;
HXDLIN( 205)			if ((id == HX_("this",5e,06,fc,4c))) {
HXLINE( 205)				_hx_tmp = ::hx::IsNotNull( this->_proxy );
            			}
            			else {
HXLINE( 205)				_hx_tmp = false;
            			}
HXDLIN( 205)			if (_hx_tmp) {
HXLINE( 207)				return this->_proxy;
            			}
            		}
HXLINE( 210)		 ::Dynamic l = this->locals->get(id);
HXLINE( 211)		if (::hx::IsNotNull( l )) {
HXLINE( 212)			return  ::Dynamic(l->__Field(HX_("r",72,00,00,00),::hx::paccDynamic));
            		}
HXLINE( 213)		 ::Dynamic v = this->variables->get(id);
HXLINE( 214)		bool _hx_tmp1;
HXDLIN( 214)		if (::hx::IsNull( v )) {
HXLINE( 214)			_hx_tmp1 = !(this->variables->exists(id));
            		}
            		else {
HXLINE( 214)			_hx_tmp1 = false;
            		}
HXDLIN( 214)		if (_hx_tmp1) {
HXLINE( 216)			bool _hx_tmp;
HXDLIN( 216)			if (::hx::IsNotNull( this->_proxy )) {
HXLINE( 216)				_hx_tmp = ::hx::IsNotNull( this->_proxy->findFunction(id) );
            			}
            			else {
HXLINE( 216)				_hx_tmp = false;
            			}
HXDLIN( 216)			if (_hx_tmp) {
HXLINE( 218)				this->_nextCallObject = this->_proxy;
HXLINE( 219)				return ::ex::_AbstractScriptClass::AbstractScriptClass_Impl__obj::resolveField(this->_proxy,id);
            			}
            			else {
HXLINE( 221)				bool _hx_tmp;
HXDLIN( 221)				bool _hx_tmp1;
HXDLIN( 221)				if (::hx::IsNotNull( this->_proxy )) {
HXLINE( 221)					_hx_tmp1 = ::hx::IsNotNull( this->_proxy->superClass );
            				}
            				else {
HXLINE( 221)					_hx_tmp1 = false;
            				}
HXDLIN( 221)				if (_hx_tmp1) {
HXLINE( 223)					if (!(::Reflect_obj::hasField(this->_proxy->superClass,id))) {
HXLINE( 221)						_hx_tmp = ::hx::IsNotNull( ::Reflect_obj::getProperty(this->_proxy->superClass,id) );
            					}
            					else {
HXLINE( 221)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 221)					_hx_tmp = false;
            				}
HXDLIN( 221)				if (_hx_tmp) {
HXLINE( 225)					this->_nextCallObject = this->_proxy->superClass;
HXLINE( 226)					return ::Reflect_obj::getProperty(this->_proxy->superClass,id);
            				}
            				else {
HXLINE( 228)					if (::hx::IsNotNull( this->_proxy )) {
HXLINE( 230)						try {
            							HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 232)							 ::Dynamic r = ::ex::_AbstractScriptClass::AbstractScriptClass_Impl__obj::resolveField(this->_proxy,id);
HXLINE( 233)							this->_nextCallObject = this->_proxy;
HXLINE( 234)							return r;
            						} catch( ::Dynamic _hx_e) {
            							if (_hx_e.IsClass<  ::Dynamic >() ){
            								HX_STACK_BEGIN_CATCH
            								 ::Dynamic _g = _hx_e;
HXLINE( 236)								{
HXLINE( 236)									null();
            								}
            							}
            							else {
            								HX_STACK_DO_THROW(_hx_e);
            							}
            						}
HXLINE( 237)						if (!(this->resumeError)) {
HXLINE( 237)							 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EUnknownVariable(id),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 237)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            						}
            					}
            					else {
HXLINE( 241)						if (!(this->resumeError)) {
HXLINE( 241)							 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EUnknownVariable(id),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 241)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            						}
            					}
            				}
            			}
            		}
HXLINE( 244)		return v;
            	}


void InterpEx_obj::addModule(::String moduleContents){
            	HX_GC_STACKFRAME(&_hx_pos_facc3a65ad65c39b_248_addModule)
HXLINE( 249)		 ::ex::ParserEx parser =  ::ex::ParserEx_obj::__alloc( HX_CTX );
HXLINE( 250)		::Array< ::Dynamic> decls = parser->parseModule(moduleContents,this->origin);
HXLINE( 251)		this->registerModule(decls);
            	}


HX_DEFINE_DYNAMIC_FUNC1(InterpEx_obj,addModule,(void))

 ::ex::ScriptClass InterpEx_obj::createScriptClassInstance(::String className,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_facc3a65ad65c39b_255_createScriptClassInstance)
HXLINE( 256)		if (::hx::IsNull( args )) {
HXLINE( 258)			args = ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE( 260)		 ::ex::ScriptClass r = ( ( ::ex::ScriptClass)(this->cnew(className,args)) );
HXLINE( 261)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC2(InterpEx_obj,createScriptClassInstance,return )

void InterpEx_obj::registerModule(::Array< ::Dynamic> module){
            	HX_GC_STACKFRAME(&_hx_pos_facc3a65ad65c39b_265_registerModule)
HXLINE( 266)		::Array< ::String > pkg = null();
HXLINE( 267)		 ::haxe::ds::StringMap imports =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 268)		{
HXLINE( 268)			int _g = 0;
HXDLIN( 268)			while((_g < module->length)){
HXLINE( 268)				 ::hscriptBase::ModuleDecl decl = module->__get(_g).StaticCast<  ::hscriptBase::ModuleDecl >();
HXDLIN( 268)				_g = (_g + 1);
HXLINE( 270)				switch((int)(decl->_hx_getIndex())){
            					case (int)0: {
HXLINE( 272)						::Array< ::String > path = decl->_hx_getObject(0).StaticCast< ::Array< ::String > >();
HXDLIN( 272)						{
HXLINE( 273)							pkg = path;
HXLINE( 274)							::Array< ::String > pkg1 = pkg->copy();
HXLINE( 275)							if ((pkg1->length > 1)) {
HXLINE( 277)								::String s = ( (::String)(pkg1->pop()) );
HXLINE( 278)								this->pkg = (pkg1->join(HX_(".",2e,00,00,00)) + (HX_(".",2e,00,00,00) + s));
            							}
            							else {
HXLINE( 281)								this->pkg = path->__get(0);
            							}
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 282)						 ::Dynamic _g = decl->_hx_getObject(1);
HXDLIN( 282)						{
HXLINE( 282)							::Array< ::String > path = decl->_hx_getObject(0).StaticCast< ::Array< ::String > >();
HXDLIN( 282)							::String asIdent = decl->_hx_getString(2);
HXDLIN( 282)							{
HXLINE( 283)								::String last = path->__get((path->length - 1));
HXLINE( 284)								imports->set(last,path);
            							}
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 285)						 ::Dynamic c = decl->_hx_getObject(0);
HXDLIN( 285)						{
HXLINE( 286)							 ::hscriptBase::CType extend = c->__Field(HX_("extend",da,d1,1a,c7),::hx::paccDynamic);
HXLINE( 287)							if (::hx::IsNotNull( extend )) {
HXLINE( 289)								::String superClassPath =  ::hscriptBase::Printer_obj::__alloc( HX_CTX )->typeToString(extend);
HXLINE( 290)								if (imports->exists(superClassPath)) {
HXLINE( 292)									if (::hx::IsNotNull( extend )) {
HXLINE( 292)										if ((extend->_hx_getIndex() == 0)) {
HXLINE( 294)											::Array< ::String > _g = extend->_hx_getObject(0).StaticCast< ::Array< ::String > >();
HXDLIN( 294)											{
HXLINE( 294)												::Array< ::Dynamic> params = extend->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 295)												extend = ::hscriptBase::CType_obj::CTPath(( (::Array< ::String >)(imports->get(superClassPath)) ),params);
            											}
            										}
            									}
            								}
            							}
HXLINE( 300)							 ::Dynamic classDecl =  ::Dynamic(::hx::Anon_obj::Create(10)
            								->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(c->__Field(HX_("fields",79,8e,8e,80),::hx::paccDynamic)))
            								->setFixed(1,HX_("isPrivate",39,aa,6d,8d), ::Dynamic(c->__Field(HX_("isPrivate",39,aa,6d,8d),::hx::paccDynamic)))
            								->setFixed(2,HX_("implement",a3,71,3f,af), ::Dynamic(c->__Field(HX_("implement",a3,71,3f,af),::hx::paccDynamic)))
            								->setFixed(3,HX_("extend",da,d1,1a,c7),extend)
            								->setFixed(4,HX_("params",46,fb,7a,ed), ::Dynamic(c->__Field(HX_("params",46,fb,7a,ed),::hx::paccDynamic)))
            								->setFixed(5,HX_("pkg",0c,5a,55,00),pkg)
            								->setFixed(6,HX_("isExtern",ea,70,84,1f), ::Dynamic(c->__Field(HX_("isExtern",ea,70,84,1f),::hx::paccDynamic)))
            								->setFixed(7,HX_("meta",c5,4a,59,48), ::Dynamic(c->__Field(HX_("meta",c5,4a,59,48),::hx::paccDynamic)))
            								->setFixed(8,HX_("name",4b,72,ff,48), ::Dynamic(c->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)))
            								->setFixed(9,HX_("imports",6e,97,ca,69),imports));
HXLINE( 312)							::ex::InterpEx_obj::registerScriptClass(classDecl);
            						}
            					}
            					break;
            					case (int)3: {
HXLINE( 313)						 ::Dynamic _g = decl->_hx_getObject(0);
            					}
            					break;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(InterpEx_obj,registerModule,(void))

::Array< ::Dynamic> InterpEx_obj::interps;

 ::haxe::ds::StringMap InterpEx_obj::_scriptClassDescriptors;

void InterpEx_obj::registerScriptClass( ::Dynamic c){
            	HX_STACKFRAME(&_hx_pos_facc3a65ad65c39b_46_registerScriptClass)
HXLINE(  47)		::String name = ( (::String)(c->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXLINE(  48)		if (::hx::IsNotNull( c->__Field(HX_("pkg",0c,5a,55,00),::hx::paccDynamic) )) {
HXLINE(  50)			name = ((( (::Array< ::String >)(c->__Field(HX_("pkg",0c,5a,55,00),::hx::paccDynamic)) )->join(HX_(".",2e,00,00,00)) + HX_(".",2e,00,00,00)) + name);
            		}
HXLINE(  52)		::ex::InterpEx_obj::_scriptClassDescriptors->set(name,c);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InterpEx_obj,registerScriptClass,(void))

 ::Dynamic InterpEx_obj::findScriptClassDescriptor(::String name){
            	HX_STACKFRAME(&_hx_pos_facc3a65ad65c39b_57_findScriptClassDescriptor)
HXDLIN(  57)		return ::ex::InterpEx_obj::_scriptClassDescriptors->get(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InterpEx_obj,findScriptClassDescriptor,return )


::hx::ObjectPtr< InterpEx_obj > InterpEx_obj::__new( ::ex::ScriptClass proxy, ::Dynamic __o_push, ::haxe::ds::StringMap superClassInstances) {
	::hx::ObjectPtr< InterpEx_obj > __this = new InterpEx_obj();
	__this->__construct(proxy,__o_push,superClassInstances);
	return __this;
}

::hx::ObjectPtr< InterpEx_obj > InterpEx_obj::__alloc(::hx::Ctx *_hx_ctx, ::ex::ScriptClass proxy, ::Dynamic __o_push, ::haxe::ds::StringMap superClassInstances) {
	InterpEx_obj *__this = (InterpEx_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(InterpEx_obj), true, "ex.InterpEx"));
	*(void **)__this = InterpEx_obj::_hx_vtable;
	__this->__construct(proxy,__o_push,superClassInstances);
	return __this;
}

InterpEx_obj::InterpEx_obj()
{
}

void InterpEx_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InterpEx);
	HX_MARK_MEMBER_NAME(pkg,"pkg");
	HX_MARK_MEMBER_NAME(_proxy,"_proxy");
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(changedClasses,"changedClasses");
	HX_MARK_MEMBER_NAME(_nextCallObject,"_nextCallObject");
	 ::hscriptBase::Interp_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void InterpEx_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pkg,"pkg");
	HX_VISIT_MEMBER_NAME(_proxy,"_proxy");
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(changedClasses,"changedClasses");
	HX_VISIT_MEMBER_NAME(_nextCallObject,"_nextCallObject");
	 ::hscriptBase::Interp_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val InterpEx_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pkg") ) { return ::hx::Val( pkg ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"cnew") ) { return ::hx::Val( cnew_dyn() ); }
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"fcall") ) { return ::hx::Val( fcall_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_proxy") ) { return ::hx::Val( _proxy ); }
		if (HX_FIELD_EQ(inName,"origin") ) { return ::hx::Val( origin ); }
		if (HX_FIELD_EQ(inName,"assign") ) { return ::hx::Val( assign_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return ::hx::Val( resolve_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"posInfos") ) { return ::hx::Val( posInfos_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addModule") ) { return ::hx::Val( addModule_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"changedClasses") ) { return ::hx::Val( changedClasses ); }
		if (HX_FIELD_EQ(inName,"registerModule") ) { return ::hx::Val( registerModule_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_nextCallObject") ) { return ::hx::Val( _nextCallObject ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"createScriptClassInstance") ) { return ::hx::Val( createScriptClassInstance_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool InterpEx_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"interps") ) { outValue = ( interps ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"registerScriptClass") ) { outValue = registerScriptClass_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_scriptClassDescriptors") ) { outValue = ( _scriptClassDescriptors ); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"findScriptClassDescriptor") ) { outValue = findScriptClassDescriptor_dyn(); return true; }
	}
	return false;
}

::hx::Val InterpEx_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pkg") ) { pkg=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_proxy") ) { _proxy=inValue.Cast<  ::ex::ScriptClass >(); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"changedClasses") ) { changedClasses=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_nextCallObject") ) { _nextCallObject=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool InterpEx_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"interps") ) { interps=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_scriptClassDescriptors") ) { _scriptClassDescriptors=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void InterpEx_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pkg",0c,5a,55,00));
	outFields->push(HX_("_proxy",af,35,77,c4));
	outFields->push(HX_("origin",e6,19,01,4b));
	outFields->push(HX_("changedClasses",12,8c,20,0e));
	outFields->push(HX_("_nextCallObject",6f,f5,6f,e2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo InterpEx_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(InterpEx_obj,pkg),HX_("pkg",0c,5a,55,00)},
	{::hx::fsObject /*  ::ex::ScriptClass */ ,(int)offsetof(InterpEx_obj,_proxy),HX_("_proxy",af,35,77,c4)},
	{::hx::fsString,(int)offsetof(InterpEx_obj,origin),HX_("origin",e6,19,01,4b)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(InterpEx_obj,changedClasses),HX_("changedClasses",12,8c,20,0e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(InterpEx_obj,_nextCallObject),HX_("_nextCallObject",6f,f5,6f,e2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo InterpEx_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &InterpEx_obj::interps,HX_("interps",1f,20,24,17)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &InterpEx_obj::_scriptClassDescriptors,HX_("_scriptClassDescriptors",96,63,e8,65)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String InterpEx_obj_sMemberFields[] = {
	HX_("pkg",0c,5a,55,00),
	HX_("_proxy",af,35,77,c4),
	HX_("origin",e6,19,01,4b),
	HX_("changedClasses",12,8c,20,0e),
	HX_("posInfos",11,82,2e,5a),
	HX_("cnew",dd,ef,c3,41),
	HX_("assign",2f,46,06,4c),
	HX_("fcall",04,44,99,fc),
	HX_("call",9e,18,ba,41),
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	HX_("_nextCallObject",6f,f5,6f,e2),
	HX_("resolve",ec,12,60,67),
	HX_("addModule",ad,69,f7,78),
	HX_("createScriptClassInstance",46,01,b4,df),
	HX_("registerModule",6f,bb,14,87),
	::String(null()) };

static void InterpEx_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InterpEx_obj::interps,"interps");
	HX_MARK_MEMBER_NAME(InterpEx_obj::_scriptClassDescriptors,"_scriptClassDescriptors");
};

#ifdef HXCPP_VISIT_ALLOCS
static void InterpEx_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InterpEx_obj::interps,"interps");
	HX_VISIT_MEMBER_NAME(InterpEx_obj::_scriptClassDescriptors,"_scriptClassDescriptors");
};

#endif

::hx::Class InterpEx_obj::__mClass;

static ::String InterpEx_obj_sStaticFields[] = {
	HX_("interps",1f,20,24,17),
	HX_("_scriptClassDescriptors",96,63,e8,65),
	HX_("registerScriptClass",8a,e8,47,cc),
	HX_("findScriptClassDescriptor",03,e8,7d,6e),
	::String(null())
};

void InterpEx_obj::__register()
{
	InterpEx_obj _hx_dummy;
	InterpEx_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ex.InterpEx",e2,ee,32,e4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &InterpEx_obj::__GetStatic;
	__mClass->mSetStaticField = &InterpEx_obj::__SetStatic;
	__mClass->mMarkFunc = InterpEx_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(InterpEx_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(InterpEx_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< InterpEx_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = InterpEx_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InterpEx_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InterpEx_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void InterpEx_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_facc3a65ad65c39b_15_boot)
HXDLIN(  15)		interps = ::Array_obj< ::Dynamic>::__new(0);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_facc3a65ad65c39b_43_boot)
HXDLIN(  43)		_scriptClassDescriptors =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace ex
