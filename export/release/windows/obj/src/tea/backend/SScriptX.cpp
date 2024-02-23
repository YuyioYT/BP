#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hscriptBase_Interp
#include <hscriptBase/Interp.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_tea_SScript
#include <tea/SScript.h>
#endif
#ifndef INCLUDED_tea_backend_SScriptX
#include <tea/backend/SScriptX.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_38f97bdec5f95f63_26_new,"tea.backend.SScriptX","new",0xc97ce9c4,"tea.backend.SScriptX.new","tea/backend/SScriptX.hx",26,0x3ad68c6a)
HX_LOCAL_STACK_FRAME(_hx_pos_38f97bdec5f95f63_148_callFunction,"tea.backend.SScriptX","callFunction",0xf917e7f2,"tea.backend.SScriptX.callFunction","tea/backend/SScriptX.hx",148,0x3ad68c6a)
HX_LOCAL_STACK_FRAME(_hx_pos_38f97bdec5f95f63_218_set,"tea.backend.SScriptX","set",0xc980b506,"tea.backend.SScriptX.set","tea/backend/SScriptX.hx",218,0x3ad68c6a)
HX_LOCAL_STACK_FRAME(_hx_pos_38f97bdec5f95f63_233_doString,"tea.backend.SScriptX","doString",0xef340ad8,"tea.backend.SScriptX.doString","tea/backend/SScriptX.hx",233,0x3ad68c6a)
HX_LOCAL_STACK_FRAME(_hx_pos_38f97bdec5f95f63_250_createClasses,"tea.backend.SScriptX","createClasses",0x9798656e,"tea.backend.SScriptX.createClasses","tea/backend/SScriptX.hx",250,0x3ad68c6a)
HX_LOCAL_STACK_FRAME(_hx_pos_38f97bdec5f95f63_260_clearClasses,"tea.backend.SScriptX","clearClasses",0xf1929ab5,"tea.backend.SScriptX.clearClasses","tea/backend/SScriptX.hx",260,0x3ad68c6a)
HX_LOCAL_STACK_FRAME(_hx_pos_38f97bdec5f95f63_266_set_currentClass,"tea.backend.SScriptX","set_currentClass",0xd4550f58,"tea.backend.SScriptX.set_currentClass","tea/backend/SScriptX.hx",266,0x3ad68c6a)
HX_LOCAL_STACK_FRAME(_hx_pos_38f97bdec5f95f63_278_toString,"tea.backend.SScriptX","toString",0x825b2cc8,"tea.backend.SScriptX.toString","tea/backend/SScriptX.hx",278,0x3ad68c6a)
HX_LOCAL_STACK_FRAME(_hx_pos_38f97bdec5f95f63_281_get_currentSuperClass,"tea.backend.SScriptX","get_currentSuperClass",0x856a6f91,"tea.backend.SScriptX.get_currentSuperClass","tea/backend/SScriptX.hx",281,0x3ad68c6a)
HX_LOCAL_STACK_FRAME(_hx_pos_38f97bdec5f95f63_28_boot,"tea.backend.SScriptX","boot",0x7be8a24e,"tea.backend.SScriptX.boot","tea/backend/SScriptX.hx",28,0x3ad68c6a)
HX_LOCAL_STACK_FRAME(_hx_pos_38f97bdec5f95f63_30_boot,"tea.backend.SScriptX","boot",0x7be8a24e,"tea.backend.SScriptX.boot","tea/backend/SScriptX.hx",30,0x3ad68c6a)
namespace tea{
namespace backend{

void SScriptX_obj::__construct(::String __o_scriptFile, ::tea::SScript tea){
            		::String scriptFile = __o_scriptFile;
            		if (::hx::IsNull(__o_scriptFile)) scriptFile = HX_("",00,00,00,00);
            	HX_GC_STACKFRAME(&_hx_pos_38f97bdec5f95f63_26_new)
HXLINE(  48)		this->classes =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE(  41)		this->interpEX =  ::ex::InterpEx_obj::__alloc( HX_CTX ,null(),false,null());
HXLINE(  82)		bool _hx_tmp;
HXDLIN(  82)		if (::hx::IsNotNull( scriptFile )) {
HXLINE(  82)			_hx_tmp = (scriptFile.length > 0);
            		}
            		else {
HXLINE(  82)			_hx_tmp = false;
            		}
HXDLIN(  82)		if (_hx_tmp) {
HXLINE(  86)			bool _hx_tmp;
HXDLIN(  86)			bool _hx_tmp1;
HXDLIN(  86)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  86)				_hx_tmp1 = ::openfl::utils::Assets_obj::exists(scriptFile,null());
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE(  86)					_hx_tmp1 = false;
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXDLIN(  86)			if (!(_hx_tmp1)) {
HXLINE(  86)				_hx_tmp = ::sys::FileSystem_obj::exists(scriptFile);
            			}
            			else {
HXLINE(  86)				_hx_tmp = true;
            			}
HXDLIN(  86)			if (_hx_tmp) {
HXLINE(  91)				this->scriptFile = scriptFile;
HXLINE(  92)				this->interpEX->origin = scriptFile;
HXLINE(  94)				::String contents;
HXDLIN(  94)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  94)					contents = ::openfl::utils::Assets_obj::getText(scriptFile);
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE(  94)						contents = ::sys::io::File_obj::getContent(scriptFile);
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXLINE(  95)				 ::ex::InterpEx _hx_tmp = this->interpEX;
HXDLIN(  95)				_hx_tmp->addModule(::sys::io::File_obj::getContent(contents));
            			}
            			else {
HXLINE(  99)				this->scriptFile = HX_("",00,00,00,00);
HXLINE( 100)				this->interpEX->addModule(scriptFile);
            			}
            		}
            		else {
HXLINE( 130)			this->scriptFile = HX_("",00,00,00,00);
            		}
HXLINE( 132)		{
HXLINE( 132)			this->classes =  ::Dynamic(::hx::Anon_obj::Create(0));
HXDLIN( 132)			{
HXLINE( 132)				::String value = null();
HXDLIN( 132)				if (::hx::IsNull( value )) {
HXLINE( 132)					this->currentScriptClass = null();
            				}
            				else {
HXLINE( 132)					bool _hx_tmp;
HXDLIN( 132)					if (::hx::IsNotNull( this->classes )) {
HXLINE( 132)						_hx_tmp = ::hx::IsNotNull( ( ( ::ex::ScriptClass)(::Reflect_obj::field(this->classes,value)) ) );
            					}
            					else {
HXLINE( 132)						_hx_tmp = false;
            					}
HXDLIN( 132)					if (_hx_tmp) {
HXLINE( 132)						this->currentScriptClass = ( ( ::ex::ScriptClass)(::Reflect_obj::field(this->classes,value)) );
            					}
            					else {
HXLINE( 132)						this->currentScriptClass = null();
            					}
            				}
HXDLIN( 132)				this->currentClass = value;
            			}
            		}
HXLINE( 133)		{
HXLINE( 133)			if (::hx::IsNotNull( this->scriptFile )) {
HXLINE( 133)				 ::Dynamic i = ::ex::InterpEx_obj::_scriptClassDescriptors->keys();
HXDLIN( 133)				while(( (bool)(i->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 133)					::String i1 = ( (::String)(i->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 133)					{
HXLINE( 133)						 ::Dynamic this1 = this->classes;
HXDLIN( 133)						 ::ex::ScriptClass value = this->interpEX->createScriptClassInstance(i1,null());
HXDLIN( 133)						::Reflect_obj::setField(this1,i1,value);
            					}
            				}
            			}
HXDLIN( 133)			bool _hx_tmp1;
HXDLIN( 133)			if (::hx::IsNotNull( ::Reflect_obj::fields(this->classes) )) {
HXLINE( 133)				_hx_tmp1 = (::Reflect_obj::fields(this->classes)->length > 0);
            			}
            			else {
HXLINE( 133)				_hx_tmp1 = false;
            			}
HXDLIN( 133)			if (_hx_tmp1) {
HXLINE( 133)				::String value = ::Reflect_obj::fields(this->classes)->__get(0);
HXDLIN( 133)				if (::hx::IsNull( value )) {
HXLINE( 133)					this->currentScriptClass = null();
            				}
            				else {
HXLINE( 133)					bool _hx_tmp;
HXDLIN( 133)					if (::hx::IsNotNull( this->classes )) {
HXLINE( 133)						_hx_tmp = ::hx::IsNotNull( ( ( ::ex::ScriptClass)(::Reflect_obj::field(this->classes,value)) ) );
            					}
            					else {
HXLINE( 133)						_hx_tmp = false;
            					}
HXDLIN( 133)					if (_hx_tmp) {
HXLINE( 133)						this->currentScriptClass = ( ( ::ex::ScriptClass)(::Reflect_obj::field(this->classes,value)) );
            					}
            					else {
HXLINE( 133)						this->currentScriptClass = null();
            					}
            				}
HXDLIN( 133)				this->currentClass = value;
            			}
            		}
HXLINE( 135)		this->tea = tea;
            	}

Dynamic SScriptX_obj::__CreateEmpty() { return new SScriptX_obj; }

void *SScriptX_obj::_hx_vtable = 0;

Dynamic SScriptX_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SScriptX_obj > _hx_result = new SScriptX_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool SScriptX_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4caeafde;
}

 ::Dynamic SScriptX_obj::callFunction(::String func,::cpp::VirtualArray args,::String className){
            	HX_GC_STACKFRAME(&_hx_pos_38f97bdec5f95f63_148_callFunction)
HXLINE( 149)		 ::ex::ScriptClass cl;
HXDLIN( 149)		if (::hx::IsNull( className )) {
HXLINE( 149)			cl = null();
            		}
            		else {
HXLINE( 149)			cl = ( ( ::ex::ScriptClass)(::Reflect_obj::field(this->classes,className)) );
            		}
HXLINE( 150)		if (::hx::IsNotNull( cl )) {
HXLINE( 152)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 153)				 ::Dynamic _hx_tmp = cl->callFunction(func,args);
HXLINE( 152)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("className",a3,92,3d,dc),className)
            					->setFixed(1,HX_("succeeded",61,56,29,fb),true)
            					->setFixed(2,HX_("calledFunction",b5,00,41,03),func)
            					->setFixed(3,HX_("exceptions",44,35,34,1d),::tea::backend::SScriptX_obj::NONE)
            					->setFixed(4,HX_("returnValue",a1,4c,95,3e),_hx_tmp));
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 159)					 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXDLIN( 159)					return  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("className",a3,92,3d,dc),className)
            						->setFixed(1,HX_("succeeded",61,56,29,fb),false)
            						->setFixed(2,HX_("calledFunction",b5,00,41,03),func)
            						->setFixed(3,HX_("exceptions",44,35,34,1d),::Array_obj< ::Dynamic>::__new(1)->init(0, ::haxe::Exception_obj::__alloc( HX_CTX ,e->details(),null(),null())))
            						->setFixed(4,HX_("returnValue",a1,4c,95,3e),null()));
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            		else {
HXLINE( 169)			 ::ex::ScriptClass cl = null();
HXLINE( 170)			::Array< ::Dynamic> exceptions = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 171)			{
HXLINE( 171)				int _g = 0;
HXDLIN( 171)				::Array< ::String > _g1 = ::Reflect_obj::fields(this->classes);
HXDLIN( 171)				while((_g < _g1->length)){
HXLINE( 171)					::String i = _g1->__get(_g);
HXDLIN( 171)					_g = (_g + 1);
HXLINE( 173)					cl = ( ( ::ex::ScriptClass)(::Reflect_obj::field(this->classes,i)) );
HXLINE( 174)					try {
            						HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 176)						{
HXLINE( 176)							if (::hx::IsNull( i )) {
HXLINE( 176)								this->currentScriptClass = null();
            							}
            							else {
HXLINE( 176)								bool _hx_tmp;
HXDLIN( 176)								if (::hx::IsNotNull( this->classes )) {
HXLINE( 176)									_hx_tmp = ::hx::IsNotNull( ( ( ::ex::ScriptClass)(::Reflect_obj::field(this->classes,i)) ) );
            								}
            								else {
HXLINE( 176)									_hx_tmp = false;
            								}
HXDLIN( 176)								if (_hx_tmp) {
HXLINE( 176)									this->currentScriptClass = ( ( ::ex::ScriptClass)(::Reflect_obj::field(this->classes,i)) );
            								}
            								else {
HXLINE( 176)									this->currentScriptClass = null();
            								}
            							}
HXDLIN( 176)							this->currentClass = i;
            						}
HXLINE( 178)						 ::Dynamic _hx_tmp = cl->callFunction(func,args);
HXLINE( 177)						return  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("className",a3,92,3d,dc),i)
            							->setFixed(1,HX_("succeeded",61,56,29,fb),true)
            							->setFixed(2,HX_("calledFunction",b5,00,41,03),func)
            							->setFixed(3,HX_("exceptions",44,35,34,1d),::tea::backend::SScriptX_obj::NONE)
            							->setFixed(4,HX_("returnValue",a1,4c,95,3e),_hx_tmp));
            					} catch( ::Dynamic _hx_e) {
            						if (_hx_e.IsClass<  ::Dynamic >() ){
            							HX_STACK_BEGIN_CATCH
            							 ::Dynamic _g = _hx_e;
HXLINE( 185)							 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE( 187)							exceptions->push( ::haxe::Exception_obj::__alloc( HX_CTX ,e->details(),null(),null()));
            						}
            						else {
            							HX_STACK_DO_THROW(_hx_e);
            						}
            					}
            				}
            			}
HXLINE( 191)			if (::hx::IsNull( cl )) {
HXLINE( 193)				if (::hx::IsNotNull( this->scriptFile )) {
HXLINE( 195)					::String _hx_tmp;
HXDLIN( 195)					if ((this->scriptFile.length > 0)) {
HXLINE( 195)						_hx_tmp = this->scriptFile;
            					}
            					else {
HXLINE( 195)						_hx_tmp = HX_("This instance of SScript",be,06,bb,71);
            					}
HXDLIN( 195)					exceptions->push( ::haxe::Exception_obj::__alloc( HX_CTX ,((((HX_("",00,00,00,00) + _hx_tmp) + HX_(" does not have any valid classes in it, returning ",b2,9c,cb,7e)) + null()) + HX_(".",2e,00,00,00)),null(),null()));
            				}
            			}
HXLINE( 199)			return  ::Dynamic(::hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("className",a3,92,3d,dc),className)
            				->setFixed(1,HX_("succeeded",61,56,29,fb),false)
            				->setFixed(2,HX_("calledFunction",b5,00,41,03),func)
            				->setFixed(3,HX_("exceptions",44,35,34,1d),exceptions)
            				->setFixed(4,HX_("returnValue",a1,4c,95,3e),null()));
            		}
HXLINE( 150)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(SScriptX_obj,callFunction,return )

 ::tea::backend::SScriptX SScriptX_obj::set(::String key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_38f97bdec5f95f63_218_set)
HXLINE( 219)		if (::hx::IsNull( this->interpEX )) {
HXLINE( 220)			return null();
            		}
HXLINE( 222)		{
HXLINE( 222)			 ::Dynamic v = value;
HXDLIN( 222)			this->interpEX->variables->set(key,v);
            		}
HXLINE( 223)		{
HXLINE( 223)			int _g = 0;
HXDLIN( 223)			::Array< ::Dynamic> _g1 = ::ex::InterpEx_obj::interps;
HXDLIN( 223)			while((_g < _g1->length)){
HXLINE( 223)				 ::ex::InterpEx i = _g1->__get(_g).StaticCast<  ::ex::InterpEx >();
HXDLIN( 223)				_g = (_g + 1);
HXLINE( 225)				{
HXLINE( 225)					::Dynamic map = ::tea::backend::SScriptX_obj::variables;
HXDLIN( 225)					::Dynamic _g_map = map;
HXDLIN( 225)					 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 225)					while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 225)						::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 225)						 ::Dynamic _g1_value = ::haxe::IMap_obj::get(_g_map,key);
HXDLIN( 225)						::String _g1_key = key;
HXDLIN( 225)						::String l = _g1_key;
HXDLIN( 225)						 ::Dynamic k = _g1_value;
HXLINE( 226)						if (!(i->variables->exists(l))) {
HXLINE( 227)							 ::Dynamic v = k;
HXDLIN( 227)							i->variables->set(l,v);
            						}
            					}
            				}
            			}
            		}
HXLINE( 229)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SScriptX_obj,set,return )

 ::tea::backend::SScriptX SScriptX_obj::doString(::String string,::String origin){
            	HX_GC_STACKFRAME(&_hx_pos_38f97bdec5f95f63_233_doString)
HXLINE( 234)		if ((origin == HX_("SScript",be,42,6a,f7))) {
HXLINE( 235)			origin = HX_("SScriptX",da,23,90,85);
            		}
HXLINE( 237)		 ::haxe::ds::StringMap vars = this->interpEX->variables->copy();
HXLINE( 238)		this->interpEX =  ::ex::InterpEx_obj::__alloc( HX_CTX ,null(),false,null());
HXLINE( 239)		this->interpEX->variables = vars;
HXLINE( 240)		if (::hx::IsNotNull( origin )) {
HXLINE( 241)			this->interpEX->origin = origin;
            		}
HXLINE( 242)		this->interpEX->addModule(string);
HXLINE( 243)		{
HXLINE( 243)			this->classes =  ::Dynamic(::hx::Anon_obj::Create(0));
HXDLIN( 243)			{
HXLINE( 243)				::String value = null();
HXDLIN( 243)				if (::hx::IsNull( value )) {
HXLINE( 243)					this->currentScriptClass = null();
            				}
            				else {
HXLINE( 243)					bool _hx_tmp;
HXDLIN( 243)					if (::hx::IsNotNull( this->classes )) {
HXLINE( 243)						_hx_tmp = ::hx::IsNotNull( ( ( ::ex::ScriptClass)(::Reflect_obj::field(this->classes,value)) ) );
            					}
            					else {
HXLINE( 243)						_hx_tmp = false;
            					}
HXDLIN( 243)					if (_hx_tmp) {
HXLINE( 243)						this->currentScriptClass = ( ( ::ex::ScriptClass)(::Reflect_obj::field(this->classes,value)) );
            					}
            					else {
HXLINE( 243)						this->currentScriptClass = null();
            					}
            				}
HXDLIN( 243)				this->currentClass = value;
            			}
            		}
HXLINE( 244)		{
HXLINE( 244)			if (::hx::IsNotNull( this->scriptFile )) {
HXLINE( 244)				 ::Dynamic i = ::ex::InterpEx_obj::_scriptClassDescriptors->keys();
HXDLIN( 244)				while(( (bool)(i->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 244)					::String i1 = ( (::String)(i->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 244)					{
HXLINE( 244)						 ::Dynamic this1 = this->classes;
HXDLIN( 244)						 ::ex::ScriptClass value = this->interpEX->createScriptClassInstance(i1,null());
HXDLIN( 244)						::Reflect_obj::setField(this1,i1,value);
            					}
            				}
            			}
HXDLIN( 244)			bool _hx_tmp;
HXDLIN( 244)			if (::hx::IsNotNull( ::Reflect_obj::fields(this->classes) )) {
HXLINE( 244)				_hx_tmp = (::Reflect_obj::fields(this->classes)->length > 0);
            			}
            			else {
HXLINE( 244)				_hx_tmp = false;
            			}
HXDLIN( 244)			if (_hx_tmp) {
HXLINE( 244)				::String value = ::Reflect_obj::fields(this->classes)->__get(0);
HXDLIN( 244)				if (::hx::IsNull( value )) {
HXLINE( 244)					this->currentScriptClass = null();
            				}
            				else {
HXLINE( 244)					bool _hx_tmp;
HXDLIN( 244)					if (::hx::IsNotNull( this->classes )) {
HXLINE( 244)						_hx_tmp = ::hx::IsNotNull( ( ( ::ex::ScriptClass)(::Reflect_obj::field(this->classes,value)) ) );
            					}
            					else {
HXLINE( 244)						_hx_tmp = false;
            					}
HXDLIN( 244)					if (_hx_tmp) {
HXLINE( 244)						this->currentScriptClass = ( ( ::ex::ScriptClass)(::Reflect_obj::field(this->classes,value)) );
            					}
            					else {
HXLINE( 244)						this->currentScriptClass = null();
            					}
            				}
HXDLIN( 244)				this->currentClass = value;
            			}
            		}
HXLINE( 246)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SScriptX_obj,doString,return )

void SScriptX_obj::createClasses(){
            	HX_STACKFRAME(&_hx_pos_38f97bdec5f95f63_250_createClasses)
HXLINE( 251)		if (::hx::IsNotNull( this->scriptFile )) {
HXLINE( 252)			 ::Dynamic i = ::ex::InterpEx_obj::_scriptClassDescriptors->keys();
HXDLIN( 252)			while(( (bool)(i->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 252)				::String i1 = ( (::String)(i->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 253)				{
HXLINE( 253)					 ::Dynamic this1 = this->classes;
HXDLIN( 253)					 ::ex::ScriptClass value = this->interpEX->createScriptClassInstance(i1,null());
HXDLIN( 253)					::Reflect_obj::setField(this1,i1,value);
            				}
            			}
            		}
HXLINE( 255)		bool _hx_tmp;
HXDLIN( 255)		if (::hx::IsNotNull( ::Reflect_obj::fields(this->classes) )) {
HXLINE( 255)			_hx_tmp = (::Reflect_obj::fields(this->classes)->length > 0);
            		}
            		else {
HXLINE( 255)			_hx_tmp = false;
            		}
HXDLIN( 255)		if (_hx_tmp) {
HXLINE( 256)			::String value = ::Reflect_obj::fields(this->classes)->__get(0);
HXDLIN( 256)			if (::hx::IsNull( value )) {
HXLINE( 256)				this->currentScriptClass = null();
            			}
            			else {
HXLINE( 256)				bool _hx_tmp;
HXDLIN( 256)				if (::hx::IsNotNull( this->classes )) {
HXLINE( 256)					_hx_tmp = ::hx::IsNotNull( ( ( ::ex::ScriptClass)(::Reflect_obj::field(this->classes,value)) ) );
            				}
            				else {
HXLINE( 256)					_hx_tmp = false;
            				}
HXDLIN( 256)				if (_hx_tmp) {
HXLINE( 256)					this->currentScriptClass = ( ( ::ex::ScriptClass)(::Reflect_obj::field(this->classes,value)) );
            				}
            				else {
HXLINE( 256)					this->currentScriptClass = null();
            				}
            			}
HXDLIN( 256)			this->currentClass = value;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScriptX_obj,createClasses,(void))

void SScriptX_obj::clearClasses(){
            	HX_STACKFRAME(&_hx_pos_38f97bdec5f95f63_260_clearClasses)
HXLINE( 261)		this->classes =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE( 262)		{
HXLINE( 262)			::String value = null();
HXDLIN( 262)			if (::hx::IsNull( value )) {
HXLINE( 262)				this->currentScriptClass = null();
            			}
            			else {
HXLINE( 262)				bool _hx_tmp;
HXDLIN( 262)				if (::hx::IsNotNull( this->classes )) {
HXLINE( 262)					_hx_tmp = ::hx::IsNotNull( ( ( ::ex::ScriptClass)(::Reflect_obj::field(this->classes,value)) ) );
            				}
            				else {
HXLINE( 262)					_hx_tmp = false;
            				}
HXDLIN( 262)				if (_hx_tmp) {
HXLINE( 262)					this->currentScriptClass = ( ( ::ex::ScriptClass)(::Reflect_obj::field(this->classes,value)) );
            				}
            				else {
HXLINE( 262)					this->currentScriptClass = null();
            				}
            			}
HXDLIN( 262)			this->currentClass = value;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScriptX_obj,clearClasses,(void))

::String SScriptX_obj::set_currentClass(::String value){
            	HX_STACKFRAME(&_hx_pos_38f97bdec5f95f63_266_set_currentClass)
HXLINE( 267)		if (::hx::IsNull( value )) {
HXLINE( 268)			this->currentScriptClass = null();
            		}
            		else {
HXLINE( 269)			bool _hx_tmp;
HXDLIN( 269)			if (::hx::IsNotNull( this->classes )) {
HXLINE( 269)				_hx_tmp = ::hx::IsNotNull( ( ( ::ex::ScriptClass)(::Reflect_obj::field(this->classes,value)) ) );
            			}
            			else {
HXLINE( 269)				_hx_tmp = false;
            			}
HXDLIN( 269)			if (_hx_tmp) {
HXLINE( 270)				this->currentScriptClass = ( ( ::ex::ScriptClass)(::Reflect_obj::field(this->classes,value)) );
            			}
            			else {
HXLINE( 272)				this->currentScriptClass = null();
            			}
            		}
HXLINE( 274)		return (this->currentClass = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SScriptX_obj,set_currentClass,return )

::String SScriptX_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_38f97bdec5f95f63_278_toString)
HXDLIN( 278)		return HX_("[ex.SScriptX]",63,e8,25,0a);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScriptX_obj,toString,return )

::hx::Class SScriptX_obj::get_currentSuperClass(){
            	HX_STACKFRAME(&_hx_pos_38f97bdec5f95f63_281_get_currentSuperClass)
HXLINE( 282)		if (::hx::IsNull( this->currentScriptClass )) {
HXLINE( 283)			return null();
            		}
HXLINE( 284)		if (::hx::IsNull( this->currentScriptClass->superClass )) {
HXLINE( 285)			return null();
            		}
HXLINE( 287)		return ::Type_obj::getClass(this->currentScriptClass->superClass);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScriptX_obj,get_currentSuperClass,return )

 ::haxe::ds::StringMap SScriptX_obj::variables;

::Array< ::Dynamic> SScriptX_obj::NONE;


::hx::ObjectPtr< SScriptX_obj > SScriptX_obj::__new(::String __o_scriptFile, ::tea::SScript tea) {
	::hx::ObjectPtr< SScriptX_obj > __this = new SScriptX_obj();
	__this->__construct(__o_scriptFile,tea);
	return __this;
}

::hx::ObjectPtr< SScriptX_obj > SScriptX_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_scriptFile, ::tea::SScript tea) {
	SScriptX_obj *__this = (SScriptX_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SScriptX_obj), true, "tea.backend.SScriptX"));
	*(void **)__this = SScriptX_obj::_hx_vtable;
	__this->__construct(__o_scriptFile,tea);
	return __this;
}

SScriptX_obj::SScriptX_obj()
{
}

void SScriptX_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SScriptX);
	HX_MARK_MEMBER_NAME(tea,"tea");
	HX_MARK_MEMBER_NAME(script,"script");
	HX_MARK_MEMBER_NAME(interpEX,"interpEX");
	HX_MARK_MEMBER_NAME(classes,"classes");
	HX_MARK_MEMBER_NAME(currentClass,"currentClass");
	HX_MARK_MEMBER_NAME(currentScriptClass,"currentScriptClass");
	HX_MARK_MEMBER_NAME(scriptFile,"scriptFile");
	HX_MARK_END_CLASS();
}

void SScriptX_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tea,"tea");
	HX_VISIT_MEMBER_NAME(script,"script");
	HX_VISIT_MEMBER_NAME(interpEX,"interpEX");
	HX_VISIT_MEMBER_NAME(classes,"classes");
	HX_VISIT_MEMBER_NAME(currentClass,"currentClass");
	HX_VISIT_MEMBER_NAME(currentScriptClass,"currentScriptClass");
	HX_VISIT_MEMBER_NAME(scriptFile,"scriptFile");
}

::hx::Val SScriptX_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tea") ) { return ::hx::Val( tea ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"script") ) { return ::hx::Val( script ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"classes") ) { return ::hx::Val( classes ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"interpEX") ) { return ::hx::Val( interpEX ); }
		if (HX_FIELD_EQ(inName,"doString") ) { return ::hx::Val( doString_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scriptFile") ) { return ::hx::Val( scriptFile ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentClass") ) { return ::hx::Val( currentClass ); }
		if (HX_FIELD_EQ(inName,"callFunction") ) { return ::hx::Val( callFunction_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearClasses") ) { return ::hx::Val( clearClasses_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createClasses") ) { return ::hx::Val( createClasses_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_currentClass") ) { return ::hx::Val( set_currentClass_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentSuperClass") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_currentSuperClass() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"currentScriptClass") ) { return ::hx::Val( currentScriptClass ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_currentSuperClass") ) { return ::hx::Val( get_currentSuperClass_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SScriptX_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NONE") ) { outValue = ( NONE ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { outValue = ( variables ); return true; }
	}
	return false;
}

::hx::Val SScriptX_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tea") ) { tea=inValue.Cast<  ::tea::SScript >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"script") ) { script=inValue.Cast<  ::tea::SScript >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"classes") ) { classes=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"interpEX") ) { interpEX=inValue.Cast<  ::ex::InterpEx >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scriptFile") ) { scriptFile=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentClass") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_currentClass(inValue.Cast< ::String >()) );currentClass=inValue.Cast< ::String >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"currentScriptClass") ) { currentScriptClass=inValue.Cast<  ::ex::ScriptClass >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SScriptX_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NONE") ) { NONE=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { variables=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void SScriptX_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("tea",d0,5d,58,00));
	outFields->push(HX_("script",0b,4e,60,47));
	outFields->push(HX_("interpEX",47,d3,77,28));
	outFields->push(HX_("classes",a6,4e,91,69));
	outFields->push(HX_("currentClass",3f,5d,64,8f));
	outFields->push(HX_("currentScriptClass",74,b6,d3,8b));
	outFields->push(HX_("currentSuperClass",56,2a,3d,7f));
	outFields->push(HX_("scriptFile",27,aa,9c,3c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SScriptX_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::tea::SScript */ ,(int)offsetof(SScriptX_obj,tea),HX_("tea",d0,5d,58,00)},
	{::hx::fsObject /*  ::tea::SScript */ ,(int)offsetof(SScriptX_obj,script),HX_("script",0b,4e,60,47)},
	{::hx::fsObject /*  ::ex::InterpEx */ ,(int)offsetof(SScriptX_obj,interpEX),HX_("interpEX",47,d3,77,28)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SScriptX_obj,classes),HX_("classes",a6,4e,91,69)},
	{::hx::fsString,(int)offsetof(SScriptX_obj,currentClass),HX_("currentClass",3f,5d,64,8f)},
	{::hx::fsObject /*  ::ex::ScriptClass */ ,(int)offsetof(SScriptX_obj,currentScriptClass),HX_("currentScriptClass",74,b6,d3,8b)},
	{::hx::fsString,(int)offsetof(SScriptX_obj,scriptFile),HX_("scriptFile",27,aa,9c,3c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo SScriptX_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &SScriptX_obj::variables,HX_("variables",b7,e2,62,82)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &SScriptX_obj::NONE,HX_("NONE",b8,da,ca,33)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SScriptX_obj_sMemberFields[] = {
	HX_("tea",d0,5d,58,00),
	HX_("script",0b,4e,60,47),
	HX_("interpEX",47,d3,77,28),
	HX_("classes",a6,4e,91,69),
	HX_("currentClass",3f,5d,64,8f),
	HX_("currentScriptClass",74,b6,d3,8b),
	HX_("scriptFile",27,aa,9c,3c),
	HX_("callFunction",d6,4d,95,4c),
	HX_("set",a2,9b,57,00),
	HX_("doString",bc,ae,47,a5),
	HX_("createClasses",0a,27,d4,51),
	HX_("clearClasses",99,00,10,45),
	HX_("set_currentClass",3c,37,45,ea),
	HX_("toString",ac,d0,6e,38),
	HX_("get_currentSuperClass",2d,2d,eb,fd),
	::String(null()) };

static void SScriptX_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SScriptX_obj::variables,"variables");
	HX_MARK_MEMBER_NAME(SScriptX_obj::NONE,"NONE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SScriptX_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SScriptX_obj::variables,"variables");
	HX_VISIT_MEMBER_NAME(SScriptX_obj::NONE,"NONE");
};

#endif

::hx::Class SScriptX_obj::__mClass;

static ::String SScriptX_obj_sStaticFields[] = {
	HX_("variables",b7,e2,62,82),
	HX_("NONE",b8,da,ca,33),
	::String(null())
};

void SScriptX_obj::__register()
{
	SScriptX_obj _hx_dummy;
	SScriptX_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tea.backend.SScriptX",d2,f7,d3,e1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SScriptX_obj::__GetStatic;
	__mClass->mSetStaticField = &SScriptX_obj::__SetStatic;
	__mClass->mMarkFunc = SScriptX_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SScriptX_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SScriptX_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SScriptX_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SScriptX_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SScriptX_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SScriptX_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SScriptX_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_38f97bdec5f95f63_28_boot)
HXDLIN(  28)		variables =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_38f97bdec5f95f63_30_boot)
HXDLIN(  30)		NONE = ::Array_obj< ::Dynamic>::__new();
            	}
}

} // end namespace tea
} // end namespace backend
