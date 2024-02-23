#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_DateTools
#include <DateTools.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hscriptBase_Interp
#include <hscriptBase/Interp.h>
#endif
#ifndef INCLUDED_hscriptBase_Parser
#include <hscriptBase/Parser.h>
#endif
#ifndef INCLUDED_hscriptBase_Tools
#include <hscriptBase/Tools.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_macro_Macro
#include <macro/Macro.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_ffc4a688e712d40b_47_new,"tea.SScript","new",0x7a4ca312,"tea.SScript.new","tea/SScript.hx",47,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_365_execute,"tea.SScript","execute",0x452a1de7,"tea.SScript.execute","tea/SScript.hx",365,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_409_set,"tea.SScript","set",0x7a506e54,"tea.SScript.set","tea/SScript.hx",409,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_401_set,"tea.SScript","set",0x7a506e54,"tea.SScript.set","tea/SScript.hx",401,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_454_setClass,"tea.SScript","setClass",0xd6e10944,"tea.SScript.setClass","tea/SScript.hx",454,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_488_setClassString,"tea.SScript","setClassString",0x4845f135,"tea.SScript.setClassString","tea/SScript.hx",488,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_519_locals,"tea.SScript","locals",0xaf3ddd36,"tea.SScript.locals","tea/SScript.hx",519,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_554_unset,"tea.SScript","unset",0x2ec7561b,"tea.SScript.unset","tea/SScript.hx",554,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_589_get,"tea.SScript","get",0x7a475348,"tea.SScript.get","tea/SScript.hx",589,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_676_call,"tea.SScript","call",0x8179a1ac,"tea.SScript.call","tea/SScript.hx",676,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_650_call,"tea.SScript","call",0x8179a1ac,"tea.SScript.call","tea/SScript.hx",650,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_776_clear,"tea.SScript","clear",0xd033d4bf,"tea.SScript.clear","tea/SScript.hx",776,0x727e4fdf)
static const ::String _hx_array_data_6e1d7220_20[] = {
	HX_("true",4e,a7,03,4d),HX_("false",a3,35,4f,fb),HX_("null",87,9e,0e,49),HX_("trace",85,8e,1f,16),
};
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_804_exists,"tea.SScript","exists",0x155e866a,"tea.SScript.exists","tea/SScript.hx",804,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_833_preset,"tea.SScript","preset",0x043f1bed,"tea.SScript.preset","tea/SScript.hx",833,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_858_doFile,"tea.SScript","doFile",0x693ddc35,"tea.SScript.doFile","tea/SScript.hx",858,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_946_doString,"tea.SScript","doString",0x259bd6ca,"tea.SScript.doString","tea/SScript.hx",946,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1039_toString,"tea.SScript","toString",0xb8c2f8ba,"tea.SScript.toString","tea/SScript.hx",1039,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1152_destroy,"tea.SScript","destroy",0x9da340ac,"tea.SScript.destroy","tea/SScript.hx",1152,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1180_get_variables,"tea.SScript","get_variables",0xf2609bc0,"tea.SScript.get_variables","tea/SScript.hx",1180,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1188_setPackagePath,"tea.SScript","setPackagePath",0xc5cc5a57,"tea.SScript.setPackagePath","tea/SScript.hx",1188,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1196_get_packagePath,"tea.SScript","get_packagePath",0xbba44594,"tea.SScript.get_packagePath","tea/SScript.hx",1196,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1204_get_classes,"tea.SScript","get_classes",0xd581836f,"tea.SScript.get_classes","tea/SScript.hx",1204,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1220_get_currentScriptClass,"tea.SScript","get_currentScriptClass",0x4775144b,"tea.SScript.get_currentScriptClass","tea/SScript.hx",1220,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1228_get_currentSuperClass,"tea.SScript","get_currentSuperClass",0x9398945f,"tea.SScript.get_currentSuperClass","tea/SScript.hx",1228,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1236_set_currentClass,"tea.SScript","set_currentClass",0x20351d4a,"tea.SScript.set_currentClass","tea/SScript.hx",1236,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1244_get_currentClass,"tea.SScript","get_currentClass",0xc9f32fd6,"tea.SScript.get_currentClass","tea/SScript.hx",1244,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1252_get_exMode,"tea.SScript","get_exMode",0xf99b44cd,"tea.SScript.get_exMode","tea/SScript.hx",1252,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1266_set_customOrigin,"tea.SScript","set_customOrigin",0xdb6f3082,"tea.SScript.set_customOrigin","tea/SScript.hx",1266,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1071_listScripts,"tea.SScript","listScripts",0xc9d943fc,"tea.SScript.listScripts","tea/SScript.hx",1071,0x727e4fdf)
static const ::String _hx_array_data_6e1d7220_42[] = {
	HX_("hx",10,5b,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1261_get_BlankReg,"tea.SScript","get_BlankReg",0xb5f7b597,"tea.SScript.get_BlankReg","tea/SScript.hx",1261,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1276_set_defaultTypeCheck,"tea.SScript","set_defaultTypeCheck",0x4b207c38,"tea.SScript.set_defaultTypeCheck","tea/SScript.hx",1276,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1287_set_defaultClassSupport,"tea.SScript","set_defaultClassSupport",0x15ee9c6d,"tea.SScript.set_defaultClassSupport","tea/SScript.hx",1287,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_52_boot,"tea.SScript","boot",0x80db0d40,"tea.SScript.boot","tea/SScript.hx",52,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_57_boot,"tea.SScript","boot",0x80db0d40,"tea.SScript.boot","tea/SScript.hx",57,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_95_boot,"tea.SScript","boot",0x80db0d40,"tea.SScript.boot","tea/SScript.hx",95,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_108_boot,"tea.SScript","boot",0x80db0d40,"tea.SScript.boot","tea/SScript.hx",108,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_113_boot,"tea.SScript","boot",0x80db0d40,"tea.SScript.boot","tea/SScript.hx",113,0x727e4fdf)
namespace tea{

void SScript_obj::__construct(::String __o_scriptPath, ::Dynamic __o_preset, ::Dynamic __o_startExecute){
            		::String scriptPath = __o_scriptPath;
            		if (::hx::IsNull(__o_scriptPath)) scriptPath = HX_("",00,00,00,00);
            		 ::Dynamic preset = __o_preset;
            		if (::hx::IsNull(__o_preset)) preset = true;
            		 ::Dynamic startExecute = __o_startExecute;
            		if (::hx::IsNull(__o_startExecute)) startExecute = true;
            	HX_GC_STACKFRAME(&_hx_pos_ffc4a688e712d40b_47_new)
HXLINE( 245)		this->parsingExceptions = ::Array_obj< ::Dynamic>::__new();
HXLINE( 215)		this->packagePath = HX_("",00,00,00,00);
HXLINE( 205)		this->debugTraces = false;
HXLINE( 200)		this->traces = false;
HXLINE( 195)		this->scriptFile = HX_("",00,00,00,00);
HXLINE( 190)		this->active = true;
HXLINE( 183)		this->script = HX_("",00,00,00,00);
HXLINE( 160)		this->notAllowedClasses = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 155)		this->lastReportedCallTime = ((Float)-1);
HXLINE( 148)		this->lastReportedTime = ((Float)-1);
HXLINE( 141)		this->classSupport = false;
HXLINE( 136)		this->typeCheck = false;
HXLINE( 258)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 258)		Float time;
HXDLIN( 258)		if ((timer > 0)) {
HXLINE( 258)			time = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE( 258)			time = ( (Float)(0) );
            		}
HXLINE( 261)		if (::hx::IsNull( ::tea::SScript_obj::defines )) {
HXLINE( 263)			::tea::SScript_obj::defines =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 265)			::String contents = null();
HXLINE( 266)			::String path = ::macro::Macro_obj::get_definePath();
HXLINE( 268)			if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 270)				contents = ::sys::io::File_obj::getContent(path);
HXLINE( 271)				::sys::FileSystem_obj::deleteFile(path);
HXLINE( 273)				{
HXLINE( 273)					int _g = 0;
HXDLIN( 273)					::Array< ::String > _g1 = contents.split(HX_("\n",0a,00,00,00));
HXDLIN( 273)					while((_g < _g1->length)){
HXLINE( 273)						::String i = _g1->__get(_g);
HXDLIN( 273)						_g = (_g + 1);
HXLINE( 275)						i = ::StringTools_obj::trim(i);
HXLINE( 277)						::String d1 = null();
HXDLIN( 277)						::String d2 = null();
HXLINE( 278)						::Array< ::String > define = i.split(HX_("|",7c,00,00,00));
HXLINE( 279)						if ((define->length == 2)) {
HXLINE( 281)							d1 = define->__get(0);
HXLINE( 282)							d2 = define->__get(1);
            						}
            						else {
HXLINE( 284)							if ((define->length == 1)) {
HXLINE( 286)								d1 = define->__get(0);
HXLINE( 287)								d2 = HX_("1",31,00,00,00);
            							}
            						}
HXLINE( 290)						if (::hx::IsNotNull( d1 )) {
HXLINE( 291)							::String v;
HXDLIN( 291)							if (::hx::IsNotNull( d2 )) {
HXLINE( 291)								v = d2;
            							}
            							else {
HXLINE( 291)								v = HX_("1",31,00,00,00);
            							}
HXDLIN( 291)							::tea::SScript_obj::defines->set(d1,v);
            						}
            					}
            				}
            			}
            			else {
HXLINE( 296)				::tea::SScript_obj::defines->set(HX_("true",4e,a7,03,4d),HX_("1",31,00,00,00));
HXLINE( 297)				::tea::SScript_obj::defines->set(HX_("haxe",26,34,08,45),HX_("1",31,00,00,00));
HXLINE( 298)				::tea::SScript_obj::defines->set(HX_("sys",0d,ad,57,00),HX_("1",31,00,00,00));
HXLINE( 301)				::tea::SScript_obj::defines->set(HX_("hscriptPos",e1,92,07,49),HX_("1",31,00,00,00));
            			}
            		}
HXLINE( 317)		if (::hx::IsNotNull( ::tea::SScript_obj::defaultTypeCheck )) {
HXLINE( 318)			this->typeCheck = ( (bool)(::tea::SScript_obj::defaultTypeCheck) );
            		}
HXLINE( 319)		if (::hx::IsNotNull( ::tea::SScript_obj::defaultClassSupport )) {
HXLINE( 320)			this->classSupport = ( (bool)(::tea::SScript_obj::defaultClassSupport) );
            		}
HXLINE( 322)		this->interp =  ::hscriptBase::Interp_obj::__alloc( HX_CTX );
HXLINE( 323)		this->interp->typecheck = this->typeCheck;
HXLINE( 324)		this->interp->script = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 326)		this->parser =  ::hscriptBase::Parser_obj::__alloc( HX_CTX );
HXLINE( 327)		this->parser->script = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 328)		this->parser->interp = this->interp;
HXLINE( 329)		this->interp->parser = this->parser;
HXLINE( 331)		if (( (bool)(preset) )) {
HXLINE( 332)			this->preset();
            		}
HXLINE( 334)		{
HXLINE( 334)			::Dynamic map = ::tea::SScript_obj::globalVariables;
HXDLIN( 334)			::Dynamic _g_map = map;
HXDLIN( 334)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 334)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 334)				::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 334)				 ::Dynamic _g1_value = ::haxe::IMap_obj::get(_g_map,key);
HXDLIN( 334)				::String _g1_key = key;
HXDLIN( 334)				::String i = _g1_key;
HXDLIN( 334)				 ::Dynamic k = _g1_value;
HXLINE( 335)				if (::hx::IsNotNull( i )) {
HXLINE( 336)					this->set(i,k);
            				}
            			}
            		}
HXLINE( 338)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 340)			this->doFile(scriptPath);
HXLINE( 341)			if (( (bool)(startExecute) )) {
HXLINE( 342)				this->execute();
            			}
HXLINE( 343)			if (this->debugTraces) {
HXLINE( 345)				if ((this->lastReportedTime == 0)) {
HXLINE( 346)					::haxe::Log_obj::trace(HX_("SScript instance created instantly (0s)",11,34,5c,3a),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),346,HX_("tea.SScript",20,72,1d,6e),HX_("new",60,d0,53,00)));
            				}
            				else {
HXLINE( 348)					::haxe::Log_obj::trace(((HX_("SScript instance created in ",fa,89,6b,12) + this->lastReportedTime) + HX_("s",73,00,00,00)),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),348,HX_("tea.SScript",20,72,1d,6e),HX_("new",60,d0,53,00)));
            				}
            			}
HXLINE( 350)			int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 350)			Float _hx_tmp;
HXDLIN( 350)			if ((timer > 0)) {
HXLINE( 350)				_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            			}
            			else {
HXLINE( 350)				_hx_tmp = ( (Float)(0) );
            			}
HXDLIN( 350)			this->lastReportedTime = (_hx_tmp - time);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 355)				this->lastReportedTime = ( (Float)(-1) );
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}

Dynamic SScript_obj::__CreateEmpty() { return new SScript_obj; }

void *SScript_obj::_hx_vtable = 0;

Dynamic SScript_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SScript_obj > _hx_result = new SScript_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool SScript_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1f20a2ee;
}

void SScript_obj::execute(){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_365_execute)
HXLINE( 366)		if (this->_destroyed) {
HXLINE( 367)			return;
            		}
HXLINE( 369)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE( 370)			return;
            		}
HXLINE( 372)		bool _hx_tmp;
HXDLIN( 372)		if (::hx::IsNotNull( this->interp )) {
HXLINE( 372)			_hx_tmp = !(this->active);
            		}
            		else {
HXLINE( 372)			_hx_tmp = true;
            		}
HXDLIN( 372)		if (_hx_tmp) {
HXLINE( 373)			return;
            		}
HXLINE( 375)		::String origin;
HXLINE( 376)		bool origin1;
HXDLIN( 376)		if (::hx::IsNotNull( this->customOrigin )) {
HXLINE( 376)			origin1 = (this->customOrigin.length > 0);
            		}
            		else {
HXLINE( 376)			origin1 = false;
            		}
HXDLIN( 376)		if (origin1) {
HXLINE( 375)			origin = this->customOrigin;
            		}
            		else {
HXLINE( 378)			bool origin1;
HXDLIN( 378)			if (::hx::IsNotNull( this->scriptFile )) {
HXLINE( 378)				origin1 = (this->scriptFile.length > 0);
            			}
            			else {
HXLINE( 378)				origin1 = false;
            			}
HXDLIN( 378)			if (origin1) {
HXLINE( 375)				origin = this->scriptFile;
            			}
            			else {
HXLINE( 375)				origin = HX_("SScript",be,42,6a,f7);
            			}
            		}
HXLINE( 384)		bool _hx_tmp1;
HXDLIN( 384)		if (::hx::IsNotNull( this->script )) {
HXLINE( 384)			_hx_tmp1 = (this->script.length > 0);
            		}
            		else {
HXLINE( 384)			_hx_tmp1 = false;
            		}
HXDLIN( 384)		if (_hx_tmp1) {
HXLINE( 386)			 ::Dynamic expr = this->parser->parseString(this->script,origin);
HXLINE( 387)			 ::Dynamic r = this->interp->execute(expr);
HXLINE( 388)			this->returnValue = r;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,execute,(void))

 ::tea::SScript SScript_obj::set(::String key, ::Dynamic obj){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::tea::SScript,_gthis) HXARGC(2)
            		void _hx_run(::String key, ::Dynamic obj){
            			HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_409_set)
HXLINE( 410)			if (::hx::IsNull( key )) {
HXLINE( 411)				return;
            			}
HXLINE( 413)			if (::hscriptBase::Tools_obj::keys->contains(key)) {
HXLINE( 414)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("",00,00,00,00) + key) + HX_(" is a keyword, set something else",e5,46,d7,e6))));
            			}
            			else {
HXLINE( 415)				bool setVar;
HXDLIN( 415)				if (::hx::IsNotNull( obj )) {
HXLINE( 415)					setVar = ::macro::Macro_obj::macroClasses->contains(obj);
            				}
            				else {
HXLINE( 415)					setVar = false;
            				}
HXDLIN( 415)				if (setVar) {
HXLINE( 416)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("",00,00,00,00) + key) + HX_(" cannot be a Macro class (tried to set ",80,82,e6,c4)) + ::Type_obj::getClassName(obj)) + HX_(")",29,00,00,00))));
            				}
            			}
HXLINE( 418)			if (_gthis->classSupport) {
HXLINE( 419)				 ::Dynamic v = obj;
HXDLIN( 419)				::tea::backend::SScriptX_obj::variables->set(key,v);
            			}
HXLINE( 421)			if (::hx::IsNotNull( _gthis->scriptX )) {
HXLINE( 423)				 ::Dynamic value = obj;
HXLINE( 424)				_gthis->scriptX->set(key,value);
            			}
            			else {
HXLINE( 428)				bool setVar;
HXDLIN( 428)				if (::hx::IsNotNull( _gthis->interp )) {
HXLINE( 428)					setVar = !(_gthis->active);
            				}
            				else {
HXLINE( 428)					setVar = true;
            				}
HXDLIN( 428)				if (setVar) {
HXLINE( 430)					if (_gthis->traces) {
HXLINE( 432)						if (::hx::IsNull( _gthis->interp )) {
HXLINE( 433)							::haxe::Log_obj::trace(HX_("This script is unusable!",cd,d5,e4,32),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),433,HX_("tea.SScript",20,72,1d,6e),HX_("set",a2,9b,57,00)));
            						}
            						else {
HXLINE( 435)							::haxe::Log_obj::trace(HX_("This script is not active!",ab,75,7e,36),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),435,HX_("tea.SScript",20,72,1d,6e),HX_("set",a2,9b,57,00)));
            						}
            					}
            				}
            				else {
HXLINE( 439)					 ::Dynamic v = obj;
HXDLIN( 439)					_gthis->interp->variables->set(key,v);
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_401_set)
HXDLIN( 401)		 ::tea::SScript _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 402)		if (this->_destroyed) {
HXLINE( 403)			return null();
            		}
HXLINE( 405)		bool _hx_tmp;
HXDLIN( 405)		bool _hx_tmp1;
HXDLIN( 405)		if (::hx::IsNotNull( obj )) {
HXLINE( 405)			_hx_tmp1 = ::Std_obj::isOfType(obj,::hx::ClassOf< ::hx::Class >());
            		}
            		else {
HXLINE( 405)			_hx_tmp1 = false;
            		}
HXDLIN( 405)		if (_hx_tmp1) {
HXLINE( 405)			_hx_tmp = this->notAllowedClasses->contains(obj);
            		}
            		else {
HXLINE( 405)			_hx_tmp = false;
            		}
HXDLIN( 405)		if (_hx_tmp) {
HXLINE( 406)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Tried to set ",0d,8f,18,62) + ::Type_obj::getClassName(obj)) + HX_(" which is not allowed.",46,be,51,07))));
            		}
HXLINE( 408)		 ::Dynamic setVar =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 443)		setVar(key,obj);
HXLINE( 444)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SScript_obj,set,return )

 ::tea::SScript SScript_obj::setClass(::hx::Class cl){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_454_setClass)
HXLINE( 455)		if (this->_destroyed) {
HXLINE( 456)			return null();
            		}
HXLINE( 458)		if (::hx::IsNull( cl )) {
HXLINE( 460)			if (this->traces) {
HXLINE( 462)				::haxe::Log_obj::trace(HX_("Class cannot be null",ef,ce,40,49),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),462,HX_("tea.SScript",20,72,1d,6e),HX_("setClass",36,e1,8c,56)));
            			}
HXLINE( 465)			return null();
            		}
HXLINE( 468)		::String clName = ::Type_obj::getClassName(cl);
HXLINE( 469)		if (::hx::IsNotNull( clName )) {
HXLINE( 471)			if ((clName.split(HX_(".",2e,00,00,00))->length > 1)) {
HXLINE( 473)				clName = clName.split(HX_(".",2e,00,00,00))->__get((clName.split(HX_(".",2e,00,00,00))->length - 1));
            			}
HXLINE( 476)			this->set(clName,cl);
            		}
HXLINE( 478)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SScript_obj,setClass,return )

 ::tea::SScript SScript_obj::setClassString(::String cl){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_488_setClassString)
HXLINE( 489)		if (this->_destroyed) {
HXLINE( 490)			return null();
            		}
HXLINE( 492)		bool _hx_tmp;
HXDLIN( 492)		if (::hx::IsNotNull( cl )) {
HXLINE( 492)			_hx_tmp = (cl.length < 1);
            		}
            		else {
HXLINE( 492)			_hx_tmp = true;
            		}
HXDLIN( 492)		if (_hx_tmp) {
HXLINE( 494)			if (this->traces) {
HXLINE( 495)				::haxe::Log_obj::trace(HX_("Class cannot be null",ef,ce,40,49),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),495,HX_("tea.SScript",20,72,1d,6e),HX_("setClassString",a7,4a,37,30)));
            			}
HXLINE( 497)			return null();
            		}
HXLINE( 500)		::hx::Class cls = ::Type_obj::resolveClass(cl);
HXLINE( 501)		if (::hx::IsNotNull( cls )) {
HXLINE( 503)			if ((cl.split(HX_(".",2e,00,00,00))->length > 1)) {
HXLINE( 505)				cl = cl.split(HX_(".",2e,00,00,00))->__get((cl.split(HX_(".",2e,00,00,00))->length - 1));
            			}
HXLINE( 508)			this->set(cl,cls);
            		}
HXLINE( 510)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SScript_obj,setClassString,return )

 ::haxe::ds::StringMap SScript_obj::locals(){
            	HX_GC_STACKFRAME(&_hx_pos_ffc4a688e712d40b_519_locals)
HXLINE( 520)		if (this->_destroyed) {
HXLINE( 521)			return null();
            		}
HXLINE( 523)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE( 525)			 ::haxe::ds::StringMap newMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 526)			if (::hx::IsNotNull( this->scriptX->interpEX->locals )) {
HXLINE( 527)				 ::Dynamic i = this->scriptX->interpEX->locals->keys();
HXDLIN( 527)				while(( (bool)(i->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 527)					::String i1 = ( (::String)(i->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 529)					 ::Dynamic v = this->scriptX->interpEX->locals->get(i1);
HXLINE( 530)					if (::hx::IsNotNull( v )) {
HXLINE( 531)						 ::Dynamic v1 =  ::Dynamic(v->__Field(HX_("r",72,00,00,00),::hx::paccDynamic));
HXDLIN( 531)						newMap->set(i1,v1);
            					}
            				}
            			}
HXLINE( 533)			return newMap;
            		}
HXLINE( 536)		 ::haxe::ds::StringMap newMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 537)		{
HXLINE( 537)			 ::Dynamic i = this->interp->locals->keys();
HXDLIN( 537)			while(( (bool)(i->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 537)				::String i1 = ( (::String)(i->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 539)				 ::Dynamic v = this->interp->locals->get(i1);
HXLINE( 540)				if (::hx::IsNotNull( v )) {
HXLINE( 541)					 ::Dynamic v1 =  ::Dynamic(v->__Field(HX_("r",72,00,00,00),::hx::paccDynamic));
HXDLIN( 541)					newMap->set(i1,v1);
            				}
            			}
            		}
HXLINE( 543)		return newMap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,locals,return )

 ::tea::SScript SScript_obj::unset(::String key){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_554_unset)
HXLINE( 555)		if (this->_destroyed) {
HXLINE( 556)			return null();
            		}
HXLINE( 558)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE( 560)			this->scriptX->interpEX->variables->remove(key);
HXLINE( 561)			::tea::backend::SScriptX_obj::variables->remove(key);
HXLINE( 562)			{
HXLINE( 562)				int _g = 0;
HXDLIN( 562)				::Array< ::Dynamic> _g1 = ::ex::InterpEx_obj::interps;
HXDLIN( 562)				while((_g < _g1->length)){
HXLINE( 562)					 ::ex::InterpEx i = _g1->__get(_g).StaticCast<  ::ex::InterpEx >();
HXDLIN( 562)					_g = (_g + 1);
HXLINE( 564)					bool _hx_tmp;
HXDLIN( 564)					if (::hx::IsNotNull( i->variables )) {
HXLINE( 564)						_hx_tmp = i->variables->exists(key);
            					}
            					else {
HXLINE( 564)						_hx_tmp = false;
            					}
HXDLIN( 564)					if (_hx_tmp) {
HXLINE( 565)						i->variables->remove(key);
            					}
            					else {
HXLINE( 566)						bool _hx_tmp;
HXDLIN( 566)						if (::hx::IsNotNull( i->locals )) {
HXLINE( 566)							_hx_tmp = i->locals->exists(key);
            						}
            						else {
HXLINE( 566)							_hx_tmp = false;
            						}
HXDLIN( 566)						if (_hx_tmp) {
HXLINE( 567)							i->locals->remove(key);
            						}
            					}
            				}
            			}
            		}
            		else {
HXLINE( 572)			bool _hx_tmp;
HXDLIN( 572)			bool _hx_tmp1;
HXDLIN( 572)			bool _hx_tmp2;
HXDLIN( 572)			if (::hx::IsNotNull( this->interp )) {
HXLINE( 572)				_hx_tmp2 = !(this->active);
            			}
            			else {
HXLINE( 572)				_hx_tmp2 = true;
            			}
HXDLIN( 572)			if (!(_hx_tmp2)) {
HXLINE( 572)				_hx_tmp1 = ::hx::IsNull( key );
            			}
            			else {
HXLINE( 572)				_hx_tmp1 = true;
            			}
HXDLIN( 572)			if (!(_hx_tmp1)) {
HXLINE( 572)				_hx_tmp = !(this->interp->variables->exists(key));
            			}
            			else {
HXLINE( 572)				_hx_tmp = true;
            			}
HXDLIN( 572)			if (_hx_tmp) {
HXLINE( 573)				return null();
            			}
HXLINE( 575)			this->interp->variables->remove(key);
            		}
HXLINE( 578)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SScript_obj,unset,return )

 ::Dynamic SScript_obj::get(::String key){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_589_get)
HXLINE( 590)		if (this->_destroyed) {
HXLINE( 591)			return null();
            		}
HXLINE( 593)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE( 597)			 ::haxe::ds::StringMap l = this->locals();
HXLINE( 598)			if (l->exists(key)) {
HXLINE( 599)				return l->get(key);
            			}
            			else {
HXLINE( 600)				if (this->scriptX->interpEX->variables->exists(key)) {
HXLINE( 601)					return this->scriptX->interpEX->variables->get(key);
            				}
            				else {
HXLINE( 602)					if (::hx::IsNotNull( this->get_classes() )) {
HXLINE( 604)						{
HXLINE( 604)							::Dynamic map = this->get_classes();
HXDLIN( 604)							::Dynamic _g_map = map;
HXDLIN( 604)							 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 604)							while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 604)								::String key1 = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 604)								 ::ex::ScriptClass _g1_value = ( ( ::ex::ScriptClass)(::haxe::IMap_obj::get(_g_map,key1)) );
HXDLIN( 604)								::String _g1_key = key1;
HXDLIN( 604)								::String k = _g1_key;
HXDLIN( 604)								 ::ex::ScriptClass i = _g1_value;
HXLINE( 606)								bool _hx_tmp;
HXDLIN( 606)								bool _hx_tmp1;
HXDLIN( 606)								if (::hx::IsNotNull( i )) {
HXLINE( 606)									_hx_tmp1 = i->listFunctions()->exists(key);
            								}
            								else {
HXLINE( 606)									_hx_tmp1 = false;
            								}
HXDLIN( 606)								if (_hx_tmp1) {
HXLINE( 606)									_hx_tmp = ::hx::IsNotNull( i->listFunctions()->get(key) );
            								}
            								else {
HXLINE( 606)									_hx_tmp = false;
            								}
HXDLIN( 606)								if (_hx_tmp) {
HXLINE( 607)									return HX_("#fun",fc,43,70,17);
            								}
            							}
            						}
HXLINE( 609)						return null();
            					}
            					else {
HXLINE( 611)						if (::tea::backend::SScriptX_obj::variables->exists(key)) {
HXLINE( 612)							return ::tea::backend::SScriptX_obj::variables->get(key);
            						}
            						else {
HXLINE( 614)							return null();
            						}
            					}
            				}
            			}
            		}
HXLINE( 618)		bool _hx_tmp;
HXDLIN( 618)		if (::hx::IsNotNull( this->interp )) {
HXLINE( 618)			_hx_tmp = !(this->active);
            		}
            		else {
HXLINE( 618)			_hx_tmp = true;
            		}
HXDLIN( 618)		if (_hx_tmp) {
HXLINE( 620)			if (this->traces) {
HXLINE( 622)				if (::hx::IsNull( this->interp )) {
HXLINE( 623)					::haxe::Log_obj::trace(HX_("This script is unusable!",cd,d5,e4,32),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),623,HX_("tea.SScript",20,72,1d,6e),HX_("get",96,80,4e,00)));
            				}
            				else {
HXLINE( 625)					::haxe::Log_obj::trace(HX_("This script is not active!",ab,75,7e,36),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),625,HX_("tea.SScript",20,72,1d,6e),HX_("get",96,80,4e,00)));
            				}
            			}
HXLINE( 628)			return null();
            		}
HXLINE( 631)		 ::haxe::ds::StringMap l = this->locals();
HXLINE( 632)		if (l->exists(key)) {
HXLINE( 633)			return l->get(key);
            		}
HXLINE( 635)		if (this->exists(key)) {
HXLINE( 635)			return this->interp->variables->get(key);
            		}
            		else {
HXLINE( 635)			return null();
            		}
HXDLIN( 635)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SScript_obj,get,return )

 ::Dynamic SScript_obj::call(::String func,::cpp::VirtualArray args,::String className){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,caller,::Array< ::String >,pushedExceptions) HXARGC(1)
            		void _hx_run(::String e){
            			HX_GC_STACKFRAME(&_hx_pos_ffc4a688e712d40b_676_call)
HXLINE( 677)			if (!(pushedExceptions->contains(e))) {
HXLINE( 678)				::Array< ::Dynamic> caller1 = ( (::Array< ::Dynamic>)(caller->__get(0)->__Field(HX_("exceptions",44,35,34,1d),::hx::paccDynamic)) );
HXDLIN( 678)				caller1->push( ::haxe::Exception_obj::__alloc( HX_CTX ,e,null(),null()));
            			}
HXLINE( 680)			pushedExceptions->push(e);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_ffc4a688e712d40b_650_call)
HXLINE( 651)		if (this->_destroyed) {
HXLINE( 652)			return null();
            		}
HXLINE( 654)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 654)		Float time;
HXDLIN( 654)		if ((timer > 0)) {
HXLINE( 654)			time = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE( 654)			time = ( (Float)(0) );
            		}
HXLINE( 656)		::String scriptFile;
HXDLIN( 656)		bool scriptFile1;
HXDLIN( 656)		if (::hx::IsNotNull( this->scriptFile )) {
HXLINE( 656)			scriptFile1 = (this->scriptFile.length > 0);
            		}
            		else {
HXLINE( 656)			scriptFile1 = false;
            		}
HXDLIN( 656)		if (scriptFile1) {
HXLINE( 656)			scriptFile = this->scriptFile;
            		}
            		else {
HXLINE( 656)			scriptFile = HX_("",00,00,00,00);
            		}
HXLINE( 657)		::Array< ::Dynamic> caller = ::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("succeeded",61,56,29,fb),false)
            			->setFixed(1,HX_("calledFunction",b5,00,41,03),func)
            			->setFixed(2,HX_("exceptions",44,35,34,1d),::Array_obj< ::Dynamic>::__new(0))
            			->setFixed(3,HX_("returnValue",a1,4c,95,3e),null())));
HXLINE( 663)		bool _hx_tmp;
HXDLIN( 663)		if (::hx::IsNotNull( scriptFile )) {
HXLINE( 663)			_hx_tmp = (scriptFile.length > 0);
            		}
            		else {
HXLINE( 663)			_hx_tmp = false;
            		}
HXDLIN( 663)		if (_hx_tmp) {
HXLINE( 664)			caller[0] =  ::Dynamic(::hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("succeeded",61,56,29,fb),false)
            				->setFixed(1,HX_("calledFunction",b5,00,41,03),func)
            				->setFixed(2,HX_("exceptions",44,35,34,1d),::Array_obj< ::Dynamic>::__new(0))
            				->setFixed(3,HX_("returnValue",a1,4c,95,3e),null())
            				->setFixed(4,HX_("fileName",e7,5a,43,62),scriptFile));
            		}
HXLINE( 671)		if (::hx::IsNull( args )) {
HXLINE( 672)			args = ::cpp::VirtualArray_obj::__new();
            		}
HXLINE( 674)		::Array< ::String > pushedExceptions = ::Array_obj< ::String >::__new();
HXLINE( 675)		 ::Dynamic pushException =  ::Dynamic(new _hx_Closure_0(caller,pushedExceptions));
HXLINE( 682)		if (::hx::IsNull( func )) {
HXLINE( 684)			if (this->traces) {
HXLINE( 685)				::haxe::Log_obj::trace(((HX_("Function name cannot be null for ",63,f7,68,cd) + scriptFile) + HX_("!",21,00,00,00)),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),685,HX_("tea.SScript",20,72,1d,6e),HX_("call",9e,18,ba,41)));
            			}
HXLINE( 687)			pushException(((HX_("Function name cannot be null for ",63,f7,68,cd) + scriptFile) + HX_("!",21,00,00,00)));
HXLINE( 688)			return caller->__get(0);
            		}
HXLINE( 690)		 ::Dynamic callX = null();
HXLINE( 691)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE( 693)			callX = this->scriptX->callFunction(func,null(),null());
            		}
            		else {
HXLINE( 697)			bool _hx_tmp;
HXDLIN( 697)			if (this->exists(func)) {
HXLINE( 697)				_hx_tmp = ::hx::IsPointerNotEq( ::Type_obj::_hx_typeof(this->get(func)),::ValueType_obj::TFunction_dyn() );
            			}
            			else {
HXLINE( 697)				_hx_tmp = false;
            			}
HXDLIN( 697)			if (_hx_tmp) {
HXLINE( 699)				if (this->traces) {
HXLINE( 700)					::haxe::Log_obj::trace(((HX_("",00,00,00,00) + func) + HX_(" is not a function",fa,f7,c7,36)),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),700,HX_("tea.SScript",20,72,1d,6e),HX_("call",9e,18,ba,41)));
            				}
HXLINE( 702)				pushException(((HX_("",00,00,00,00) + func) + HX_(" is not a function",fa,f7,c7,36)));
            			}
            			else {
HXLINE( 705)				bool _hx_tmp;
HXDLIN( 705)				if (::hx::IsNotNull( this->interp )) {
HXLINE( 705)					_hx_tmp = !(this->exists(func));
            				}
            				else {
HXLINE( 705)					_hx_tmp = true;
            				}
HXDLIN( 705)				if (_hx_tmp) {
HXLINE( 707)					if (::hx::IsNull( this->interp )) {
HXLINE( 709)						if (this->traces) {
HXLINE( 710)							::haxe::Log_obj::trace(HX_("Interpreter is null!",4a,de,45,aa),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),710,HX_("tea.SScript",20,72,1d,6e),HX_("call",9e,18,ba,41)));
            						}
HXLINE( 712)						pushException(HX_("Interpreter is null!",4a,de,45,aa));
            					}
            					else {
HXLINE( 716)						if (this->traces) {
HXLINE( 717)							::haxe::Log_obj::trace(((((HX_("Function ",e8,e9,d5,55) + func) + HX_(" does not exist in ",de,a3,13,4c)) + scriptFile) + HX_(".",2e,00,00,00)),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),717,HX_("tea.SScript",20,72,1d,6e),HX_("call",9e,18,ba,41)));
            						}
HXLINE( 719)						bool _hx_tmp;
HXDLIN( 719)						if (::hx::IsNotNull( scriptFile )) {
HXLINE( 719)							_hx_tmp = (scriptFile.length > 1);
            						}
            						else {
HXLINE( 719)							_hx_tmp = false;
            						}
HXDLIN( 719)						if (_hx_tmp) {
HXLINE( 720)							pushException(((((HX_("Function ",e8,e9,d5,55) + func) + HX_(" does not exist in ",de,a3,13,4c)) + scriptFile) + HX_(".",2e,00,00,00)));
            						}
            						else {
HXLINE( 722)							pushException(((HX_("Function ",e8,e9,d5,55) + func) + HX_(" does not exist in SScript instance.",79,fd,5b,f3)));
            						}
            					}
            				}
            				else {
HXLINE( 727)					 ::Dynamic oldCaller = caller->__get(0);
HXLINE( 728)					try {
            						HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 730)						 ::Dynamic functionField = ::Reflect_obj::callMethod(::hx::ObjectPtr<OBJ_>(this),this->get(func),args);
HXLINE( 731)						caller[0] =  ::Dynamic(::hx::Anon_obj::Create(4)
            							->setFixed(0,HX_("succeeded",61,56,29,fb),true)
            							->setFixed(1,HX_("calledFunction",b5,00,41,03),func)
            							->setFixed(2,HX_("exceptions",44,35,34,1d), ::Dynamic(caller->__get(0)->__Field(HX_("exceptions",44,35,34,1d),::hx::paccDynamic)))
            							->setFixed(3,HX_("returnValue",a1,4c,95,3e),functionField));
HXLINE( 737)						bool _hx_tmp;
HXDLIN( 737)						if (::hx::IsNotNull( scriptFile )) {
HXLINE( 737)							_hx_tmp = (scriptFile.length > 0);
            						}
            						else {
HXLINE( 737)							_hx_tmp = false;
            						}
HXDLIN( 737)						if (_hx_tmp) {
HXLINE( 738)							caller[0] =  ::Dynamic(::hx::Anon_obj::Create(5)
            								->setFixed(0,HX_("succeeded",61,56,29,fb),true)
            								->setFixed(1,HX_("calledFunction",b5,00,41,03),func)
            								->setFixed(2,HX_("exceptions",44,35,34,1d), ::Dynamic(caller->__get(0)->__Field(HX_("exceptions",44,35,34,1d),::hx::paccDynamic)))
            								->setFixed(3,HX_("returnValue",a1,4c,95,3e),functionField)
            								->setFixed(4,HX_("fileName",e7,5a,43,62),scriptFile));
            						}
            					} catch( ::Dynamic _hx_e) {
            						if (_hx_e.IsClass<  ::Dynamic >() ){
            							HX_STACK_BEGIN_CATCH
            							 ::Dynamic _g = _hx_e;
HXLINE( 746)							 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE( 747)							{
HXLINE( 748)								caller[0] = oldCaller;
HXLINE( 749)								 ::Dynamic pushException1 = pushException;
HXDLIN( 749)								pushException1(e->details());
            							}
            						}
            						else {
            							HX_STACK_DO_THROW(_hx_e);
            						}
            					}
            				}
            			}
            		}
HXLINE( 753)		int timer1 = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 753)		Float _hx_tmp1;
HXDLIN( 753)		if ((timer1 > 0)) {
HXLINE( 753)			_hx_tmp1 = (( (Float)(timer1) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE( 753)			_hx_tmp1 = ( (Float)(0) );
            		}
HXDLIN( 753)		this->lastReportedCallTime = (_hx_tmp1 - time);
HXLINE( 755)		bool _hx_tmp2;
HXDLIN( 755)		if (!(( (bool)(caller->__get(0)->__Field(HX_("succeeded",61,56,29,fb),::hx::paccDynamic)) ))) {
HXLINE( 755)			if (::hx::IsNotNull( callX )) {
HXLINE( 755)				_hx_tmp2 = !(( (bool)(callX->__Field(HX_("succeeded",61,56,29,fb),::hx::paccDynamic)) ));
            			}
            			else {
HXLINE( 755)				_hx_tmp2 = true;
            			}
            		}
            		else {
HXLINE( 755)			_hx_tmp2 = false;
            		}
HXDLIN( 755)		if (_hx_tmp2) {
HXLINE( 757)			this->lastReportedCallTime = ( (Float)(-1) );
HXLINE( 758)			{
HXLINE( 758)				int _g = 0;
HXDLIN( 758)				::Array< ::Dynamic> _g1 = this->parsingExceptions;
HXDLIN( 758)				while((_g < _g1->length)){
HXLINE( 758)					 ::haxe::Exception i = _g1->__get(_g).StaticCast<  ::haxe::Exception >();
HXDLIN( 758)					_g = (_g + 1);
HXLINE( 760)					 ::Dynamic pushException1 = pushException;
HXDLIN( 760)					pushException1(i->details());
HXLINE( 762)					if (::hx::IsNotNull( callX )) {
HXLINE( 763)						::Array< ::Dynamic> callX1 = ( (::Array< ::Dynamic>)(callX->__Field(HX_("exceptions",44,35,34,1d),::hx::paccDynamic)) );
HXDLIN( 763)						callX1->push( ::haxe::Exception_obj::__alloc( HX_CTX ,i->details(),null(),null()));
            					}
            				}
            			}
            		}
HXLINE( 767)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE( 767)			return callX;
            		}
            		else {
HXLINE( 767)			return caller->__get(0);
            		}
HXDLIN( 767)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(SScript_obj,call,return )

 ::tea::SScript SScript_obj::clear(){
            	HX_GC_STACKFRAME(&_hx_pos_ffc4a688e712d40b_776_clear)
HXLINE( 777)		if (this->_destroyed) {
HXLINE( 778)			return null();
            		}
HXLINE( 780)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE( 782)			this->scriptX->interpEX->variables =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 783)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 786)		if (::hx::IsNull( this->interp )) {
HXLINE( 787)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 789)		::Array< ::String > importantThings = ::Array_obj< ::String >::fromData( _hx_array_data_6e1d7220_20,4);
HXLINE( 791)		{
HXLINE( 791)			 ::Dynamic i = this->interp->variables->keys();
HXDLIN( 791)			while(( (bool)(i->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 791)				::String i1 = ( (::String)(i->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 792)				if (!(importantThings->contains(i1))) {
HXLINE( 793)					this->interp->variables->remove(i1);
            				}
            			}
            		}
HXLINE( 795)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,clear,return )

bool SScript_obj::exists(::String key){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_804_exists)
HXLINE( 805)		if (this->_destroyed) {
HXLINE( 806)			return false;
            		}
HXLINE( 808)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE( 810)			bool _hx_tmp;
HXDLIN( 810)			bool _hx_tmp1;
HXDLIN( 810)			if (::hx::IsNotNull( this->scriptX->currentScriptClass )) {
HXLINE( 810)				_hx_tmp1 = ::hx::IsNotNull( this->scriptX->currentScriptClass->listFunctions() );
            			}
            			else {
HXLINE( 810)				_hx_tmp1 = false;
            			}
HXDLIN( 810)			if (_hx_tmp1) {
HXLINE( 810)				_hx_tmp = this->scriptX->currentScriptClass->listFunctions()->exists(key);
            			}
            			else {
HXLINE( 810)				_hx_tmp = false;
            			}
HXDLIN( 810)			if (_hx_tmp) {
HXLINE( 813)				return true;
            			}
HXLINE( 815)			 ::haxe::ds::StringMap l = this->locals();
HXLINE( 816)			 ::haxe::ds::StringMap v = this->scriptX->interpEX->variables;
HXLINE( 817)			bool _hx_tmp2;
HXDLIN( 817)			if (::hx::IsNotNull( l )) {
HXLINE( 817)				_hx_tmp2 = l->exists(key);
            			}
            			else {
HXLINE( 817)				_hx_tmp2 = false;
            			}
HXDLIN( 817)			if (_hx_tmp2) {
HXLINE( 817)				return true;
            			}
            			else {
HXLINE( 817)				bool _hx_tmp;
HXDLIN( 817)				if (::hx::IsNotNull( v )) {
HXLINE( 817)					_hx_tmp = v->exists(key);
            				}
            				else {
HXLINE( 817)					_hx_tmp = false;
            				}
HXDLIN( 817)				if (_hx_tmp) {
HXLINE( 817)					return true;
            				}
            				else {
HXLINE( 817)					return false;
            				}
            			}
            		}
HXLINE( 820)		if (::hx::IsNull( this->interp )) {
HXLINE( 821)			return false;
            		}
HXLINE( 822)		if (this->locals()->exists(key)) {
HXLINE( 823)			return this->locals()->exists(key);
            		}
HXLINE( 825)		return this->interp->variables->exists(key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SScript_obj,exists,return )

void SScript_obj::preset(){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_833_preset)
HXLINE( 834)		if (this->_destroyed) {
HXLINE( 835)			return;
            		}
HXLINE( 837)		this->setClass(::hx::ClassOf< ::Date >());
HXLINE( 838)		this->setClass(::hx::ClassOf< ::DateTools >());
HXLINE( 839)		this->setClass(::hx::ClassOf< ::Math >());
HXLINE( 840)		this->setClass(::hx::ClassOf< ::Std >());
HXLINE( 841)		this->setClass(::hx::ClassOf< ::tea::SScript >());
HXLINE( 842)		this->setClass(::hx::ClassOf< ::StringTools >());
HXLINE( 845)		this->setClass(::hx::ClassOf< ::sys::io::File >());
HXLINE( 846)		this->setClass(::hx::ClassOf< ::sys::FileSystem >());
HXLINE( 847)		this->setClass(::hx::ClassOf< ::Sys >());
HXLINE( 851)		this->setClass(::hx::ClassOf< ::openfl::utils::Assets >());
HXLINE( 854)		this->set(HX_("this",5e,06,fc,4c),::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,preset,(void))

void SScript_obj::doFile(::String scriptPath){
            	HX_GC_STACKFRAME(&_hx_pos_ffc4a688e712d40b_858_doFile)
HXLINE( 859)		if (this->_destroyed) {
HXLINE( 860)			return;
            		}
HXLINE( 862)		bool _hx_tmp;
HXDLIN( 862)		bool _hx_tmp1;
HXDLIN( 862)		if (::hx::IsNotNull( scriptPath )) {
HXLINE( 862)			_hx_tmp1 = (scriptPath.length < 1);
            		}
            		else {
HXLINE( 862)			_hx_tmp1 = true;
            		}
HXDLIN( 862)		if (!(_hx_tmp1)) {
HXLINE( 862)			_hx_tmp = ::tea::SScript_obj::get_BlankReg()->match(scriptPath);
            		}
            		else {
HXLINE( 862)			_hx_tmp = true;
            		}
HXDLIN( 862)		if (_hx_tmp) {
HXLINE( 863)			return;
            		}
HXLINE( 865)		if (this->classSupport) {
HXLINE( 867)			bool _hx_tmp;
HXDLIN( 867)			if (::hx::IsNotNull( scriptPath )) {
HXLINE( 867)				_hx_tmp = (scriptPath.length > 0);
            			}
            			else {
HXLINE( 867)				_hx_tmp = false;
            			}
HXDLIN( 867)			if (_hx_tmp) {
HXLINE( 868)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 869)					this->scriptX =  ::tea::backend::SScriptX_obj::__alloc( HX_CTX ,scriptPath,::hx::ObjectPtr<OBJ_>(this));
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 870)						 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE( 871)						{
HXLINE( 872)							::Array< ::Dynamic> _hx_tmp = this->parsingExceptions;
HXDLIN( 872)							_hx_tmp->push( ::haxe::Exception_obj::__alloc( HX_CTX ,e->details(),null(),null()));
HXLINE( 873)							this->scriptX = null();
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
            		}
HXLINE( 877)		bool _hx_tmp2;
HXDLIN( 877)		if (::hx::IsNotNull( scriptPath )) {
HXLINE( 877)			_hx_tmp2 = (scriptPath.length > 0);
            		}
            		else {
HXLINE( 877)			_hx_tmp2 = false;
            		}
HXDLIN( 877)		if (_hx_tmp2) {
HXLINE( 881)			bool _hx_tmp;
HXDLIN( 881)			bool _hx_tmp1;
HXDLIN( 881)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 881)				_hx_tmp1 = ::openfl::utils::Assets_obj::exists(scriptPath,null());
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 881)					_hx_tmp1 = false;
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXDLIN( 881)			if (!(_hx_tmp1)) {
HXLINE( 881)				_hx_tmp = ::sys::FileSystem_obj::exists(scriptPath);
            			}
            			else {
HXLINE( 881)				_hx_tmp = true;
            			}
HXDLIN( 881)			if (_hx_tmp) {
HXLINE( 886)				this->scriptFile = scriptPath;
HXLINE( 888)				::String _hx_tmp;
HXDLIN( 888)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 888)					_hx_tmp = ::openfl::utils::Assets_obj::getText(scriptPath);
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 888)						_hx_tmp = null();
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXDLIN( 888)				this->script = _hx_tmp;
HXLINE( 889)				if (::hx::IsNull( this->script )) {
HXLINE( 890)					this->script = ::sys::io::File_obj::getContent(scriptPath);
            				}
            			}
            			else {
HXLINE( 897)				this->scriptFile = HX_("",00,00,00,00);
HXLINE( 898)				this->script = scriptPath;
            			}
HXLINE( 921)			if (::hx::IsNotNull( this->scriptX )) {
HXLINE( 923)				bool _hx_tmp;
HXDLIN( 923)				if (::hx::IsNotNull( this->scriptX->scriptFile )) {
HXLINE( 923)					_hx_tmp = (this->scriptX->scriptFile.length > 0);
            				}
            				else {
HXLINE( 923)					_hx_tmp = false;
            				}
HXDLIN( 923)				if (_hx_tmp) {
HXLINE( 924)					::tea::SScript_obj::global->set(this->scriptX->scriptFile,::hx::ObjectPtr<OBJ_>(this));
            				}
            			}
            			else {
HXLINE( 926)				bool _hx_tmp;
HXDLIN( 926)				if (::hx::IsNotNull( this->scriptFile )) {
HXLINE( 926)					_hx_tmp = (this->scriptFile.length > 0);
            				}
            				else {
HXLINE( 926)					_hx_tmp = false;
            				}
HXDLIN( 926)				if (_hx_tmp) {
HXLINE( 927)					::tea::SScript_obj::global->set(this->scriptFile,::hx::ObjectPtr<OBJ_>(this));
            				}
            				else {
HXLINE( 928)					bool _hx_tmp;
HXDLIN( 928)					if (::hx::IsNotNull( this->script )) {
HXLINE( 928)						_hx_tmp = (this->script.length > 0);
            					}
            					else {
HXLINE( 928)						_hx_tmp = false;
            					}
HXDLIN( 928)					if (_hx_tmp) {
HXLINE( 929)						::tea::SScript_obj::global->set(this->script,::hx::ObjectPtr<OBJ_>(this));
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SScript_obj,doFile,(void))

 ::tea::SScript SScript_obj::doString(::String string,::String origin){
            	HX_GC_STACKFRAME(&_hx_pos_ffc4a688e712d40b_946_doString)
HXLINE( 947)		if (this->_destroyed) {
HXLINE( 948)			return null();
            		}
HXLINE( 950)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 950)		Float time;
HXDLIN( 950)		if ((timer > 0)) {
HXLINE( 950)			time = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE( 950)			time = ( (Float)(0) );
            		}
HXLINE( 951)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 954)			::String og = origin;
HXLINE( 955)			bool _hx_tmp;
HXDLIN( 955)			if (::hx::IsNotNull( og )) {
HXLINE( 955)				_hx_tmp = (og.length > 0);
            			}
            			else {
HXLINE( 955)				_hx_tmp = false;
            			}
HXDLIN( 955)			if (_hx_tmp) {
HXLINE( 956)				this->set_customOrigin(og);
            			}
HXLINE( 957)			bool _hx_tmp1;
HXDLIN( 957)			if (::hx::IsNotNull( og )) {
HXLINE( 957)				_hx_tmp1 = (og.length < 1);
            			}
            			else {
HXLINE( 957)				_hx_tmp1 = true;
            			}
HXDLIN( 957)			if (_hx_tmp1) {
HXLINE( 958)				og = this->customOrigin;
            			}
HXLINE( 959)			bool _hx_tmp2;
HXDLIN( 959)			if (::hx::IsNotNull( og )) {
HXLINE( 959)				_hx_tmp2 = (og.length < 1);
            			}
            			else {
HXLINE( 959)				_hx_tmp2 = true;
            			}
HXDLIN( 959)			if (_hx_tmp2) {
HXLINE( 960)				og = HX_("SScript",be,42,6a,f7);
            			}
HXLINE( 962)			bool _hx_tmp3;
HXDLIN( 962)			bool _hx_tmp4;
HXDLIN( 962)			if (::hx::IsNotNull( string )) {
HXLINE( 962)				_hx_tmp4 = (string.length < 1);
            			}
            			else {
HXLINE( 962)				_hx_tmp4 = true;
            			}
HXDLIN( 962)			if (!(_hx_tmp4)) {
HXLINE( 962)				_hx_tmp3 = ::tea::SScript_obj::get_BlankReg()->match(string);
            			}
            			else {
HXLINE( 962)				_hx_tmp3 = true;
            			}
HXDLIN( 962)			if (_hx_tmp3) {
HXLINE( 963)				return ::hx::ObjectPtr<OBJ_>(this);
            			}
            			else {
HXLINE( 965)				bool _hx_tmp;
HXDLIN( 965)				bool _hx_tmp1;
HXDLIN( 965)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 965)					_hx_tmp1 = ::openfl::utils::Assets_obj::exists(string,null());
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 965)						_hx_tmp1 = false;
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXDLIN( 965)				if (!(_hx_tmp1)) {
HXLINE( 965)					_hx_tmp = ::sys::FileSystem_obj::exists(string);
            				}
            				else {
HXLINE( 965)					_hx_tmp = true;
            				}
HXDLIN( 965)				if (_hx_tmp) {
HXLINE( 968)					og = (HX_("",00,00,00,00) + string);
HXLINE( 970)					this->scriptFile = string;
HXLINE( 971)					string = ::sys::io::File_obj::getContent(string);
            				}
            			}
HXLINE( 983)			if (::hx::IsNotNull( this->scriptX )) {
HXLINE( 985)				::tea::SScript_obj::global->set(string,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 987)				this->scriptX->doString(string,og);
HXLINE( 988)				return ::hx::ObjectPtr<OBJ_>(this);
            			}
HXLINE( 990)			bool _hx_tmp5;
HXDLIN( 990)			if (this->active) {
HXLINE( 990)				_hx_tmp5 = ::hx::IsNull( this->interp );
            			}
            			else {
HXLINE( 990)				_hx_tmp5 = true;
            			}
HXDLIN( 990)			if (_hx_tmp5) {
HXLINE( 991)				return null();
            			}
HXLINE( 993)			if (::hx::IsNull( this->scriptX )) {
HXLINE( 995)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 997)					this->script = string;
HXLINE( 999)					bool _hx_tmp;
HXDLIN( 999)					if (::hx::IsNotNull( this->script )) {
HXLINE( 999)						_hx_tmp = (this->script.length > 0);
            					}
            					else {
HXLINE( 999)						_hx_tmp = false;
            					}
HXDLIN( 999)					if (_hx_tmp) {
HXLINE(1000)						::tea::SScript_obj::global->set(this->script,::hx::ObjectPtr<OBJ_>(this));
            					}
HXLINE(1002)					 ::Dynamic expr = this->parser->parseString(this->script,og);
HXLINE(1003)					 ::Dynamic r = this->interp->execute(expr);
HXLINE(1004)					this->returnValue = r;
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE(1006)						 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE(1007)						{
HXLINE(1008)							this->script = HX_("",00,00,00,00);
HXLINE(1009)							::Array< ::Dynamic> _hx_tmp = this->parsingExceptions;
HXDLIN(1009)							_hx_tmp->push( ::haxe::Exception_obj::__alloc( HX_CTX ,e->details(),null(),null()));
HXLINE(1011)							if (this->classSupport) {
HXLINE(1013)								try {
            									HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(1014)									this->scriptX =  ::tea::backend::SScriptX_obj::__alloc( HX_CTX ,string,::hx::ObjectPtr<OBJ_>(this));
            								} catch( ::Dynamic _hx_e) {
            									if (_hx_e.IsClass<  ::Dynamic >() ){
            										HX_STACK_BEGIN_CATCH
            										 ::Dynamic _g = _hx_e;
HXLINE(1017)										this->scriptX = null();
            									}
            									else {
            										HX_STACK_DO_THROW(_hx_e);
            									}
            								}
            							}
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
HXLINE(1023)			int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(1023)			Float _hx_tmp6;
HXDLIN(1023)			if ((timer > 0)) {
HXLINE(1023)				_hx_tmp6 = (( (Float)(timer) ) / ( (Float)(1000) ));
            			}
            			else {
HXLINE(1023)				_hx_tmp6 = ( (Float)(0) );
            			}
HXDLIN(1023)			this->lastReportedTime = (_hx_tmp6 - time);
HXLINE(1025)			if (this->debugTraces) {
HXLINE(1027)				if ((this->lastReportedTime == 0)) {
HXLINE(1028)					::haxe::Log_obj::trace(HX_("SScript instance created instantly (0s)",11,34,5c,3a),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),1028,HX_("tea.SScript",20,72,1d,6e),HX_("doString",bc,ae,47,a5)));
            				}
            				else {
HXLINE(1030)					::haxe::Log_obj::trace(((HX_("SScript instance created in ",fa,89,6b,12) + this->lastReportedTime) + HX_("s",73,00,00,00)),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),1030,HX_("tea.SScript",20,72,1d,6e),HX_("doString",bc,ae,47,a5)));
            				}
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(1033)				this->lastReportedTime = ( (Float)(-1) );
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(1035)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SScript_obj,doString,return )

::String SScript_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1039_toString)
HXLINE(1040)		if (this->_destroyed) {
HXLINE(1041)			return HX_("null",87,9e,0e,49);
            		}
HXLINE(1043)		bool _hx_tmp;
HXDLIN(1043)		if (::hx::IsNotNull( this->scriptFile )) {
HXLINE(1043)			_hx_tmp = (this->scriptFile.length > 0);
            		}
            		else {
HXLINE(1043)			_hx_tmp = false;
            		}
HXDLIN(1043)		if (_hx_tmp) {
HXLINE(1044)			return this->scriptFile;
            		}
HXLINE(1046)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE(1046)			return HX_("[SScriptX SScriptX]",98,a2,25,6d);
            		}
            		else {
HXLINE(1046)			return HX_("[SScript SScript]",dc,5f,eb,25);
            		}
HXDLIN(1046)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,toString,return )

void SScript_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1152_destroy)
HXLINE(1153)		if (::tea::SScript_obj::global->exists(this->script)) {
HXLINE(1154)			::tea::SScript_obj::global->remove(this->script);
            		}
HXLINE(1155)		if (::tea::SScript_obj::global->exists(this->scriptFile)) {
HXLINE(1156)			::tea::SScript_obj::global->remove(this->scriptFile);
            		}
HXLINE(1158)		if (this->classSupport) {
HXLINE(1159)			::Dynamic map = this->interp->variables;
HXDLIN(1159)			::Dynamic _g_map = map;
HXDLIN(1159)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN(1159)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1159)				::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(1159)				 ::Dynamic _g1_value = ::haxe::IMap_obj::get(_g_map,key);
HXDLIN(1159)				::String _g1_key = key;
HXDLIN(1159)				::String i = _g1_key;
HXDLIN(1159)				 ::Dynamic k = _g1_value;
HXLINE(1160)				if (::tea::backend::SScriptX_obj::variables->exists(i)) {
HXLINE(1161)					::tea::backend::SScriptX_obj::variables->remove(i);
            				}
            			}
            		}
HXLINE(1163)		this->interp->variables->clear();
HXLINE(1164)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE(1165)			this->scriptX->interpEX->variables->clear();
            		}
HXLINE(1167)		this->parser = null();
HXLINE(1168)		this->interp = null();
HXLINE(1169)		this->scriptX = null();
HXLINE(1170)		this->script = null();
HXLINE(1171)		this->scriptFile = null();
HXLINE(1172)		this->active = false;
HXLINE(1173)		this->notAllowedClasses = null();
HXLINE(1174)		this->lastReportedCallTime = ( (Float)(-1) );
HXLINE(1175)		this->lastReportedTime = ( (Float)(-1) );
HXLINE(1176)		this->_destroyed = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,destroy,(void))

 ::haxe::ds::StringMap SScript_obj::get_variables(){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1180_get_variables)
HXLINE(1181)		if (this->_destroyed) {
HXLINE(1182)			return null();
            		}
HXLINE(1184)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE(1184)			return this->scriptX->interpEX->variables;
            		}
            		else {
HXLINE(1184)			return this->interp->variables;
            		}
HXDLIN(1184)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,get_variables,return )

::String SScript_obj::setPackagePath(::String p){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1188_setPackagePath)
HXLINE(1189)		if (this->_destroyed) {
HXLINE(1190)			return null();
            		}
HXLINE(1192)		return (this->packagePath = p);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SScript_obj,setPackagePath,return )

::String SScript_obj::get_packagePath(){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1196_get_packagePath)
HXLINE(1197)		if (this->_destroyed) {
HXLINE(1198)			return null();
            		}
HXLINE(1200)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE(1200)			return this->scriptX->interpEX->pkg;
            		}
            		else {
HXLINE(1200)			return this->packagePath;
            		}
HXDLIN(1200)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,get_packagePath,return )

 ::haxe::ds::StringMap SScript_obj::get_classes(){
            	HX_GC_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1204_get_classes)
HXLINE(1205)		if (this->_destroyed) {
HXLINE(1206)			return null();
            		}
HXLINE(1208)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE(1210)			 ::haxe::ds::StringMap newMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(1211)			{
HXLINE(1211)				 ::Dynamic access = this->scriptX->classes;
HXDLIN(1211)				 ::Dynamic _g_access = access;
HXDLIN(1211)				::Array< ::String > _g_keys = ::Reflect_obj::fields(access);
HXDLIN(1211)				int _g_index = 0;
HXDLIN(1211)				while((_g_index < _g_keys->length)){
HXLINE(1211)					_g_index = (_g_index + 1);
HXDLIN(1211)					::String key = _g_keys->__get((_g_index - 1));
HXDLIN(1211)					 ::ex::ScriptClass _g1_value = ( ( ::ex::ScriptClass)(::Reflect_obj::field(_g_access,key)) );
HXDLIN(1211)					::String _g1_key = key;
HXDLIN(1211)					::String i = _g1_key;
HXDLIN(1211)					 ::ex::ScriptClass k = _g1_value;
HXLINE(1212)					bool _hx_tmp;
HXDLIN(1212)					if (::hx::IsNotNull( i )) {
HXLINE(1212)						_hx_tmp = ::hx::IsNotNull( k );
            					}
            					else {
HXLINE(1212)						_hx_tmp = false;
            					}
HXDLIN(1212)					if (_hx_tmp) {
HXLINE(1213)						newMap->set(i,k);
            					}
            				}
            			}
HXLINE(1214)			return newMap;
            		}
            		else {
HXLINE(1216)			return  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(1208)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,get_classes,return )

 ::ex::ScriptClass SScript_obj::get_currentScriptClass(){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1220_get_currentScriptClass)
HXLINE(1221)		if (this->_destroyed) {
HXLINE(1222)			return null();
            		}
HXLINE(1224)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE(1224)			return this->scriptX->currentScriptClass;
            		}
            		else {
HXLINE(1224)			return null();
            		}
HXDLIN(1224)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,get_currentScriptClass,return )

::hx::Class SScript_obj::get_currentSuperClass(){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1228_get_currentSuperClass)
HXLINE(1229)		if (this->_destroyed) {
HXLINE(1230)			return null();
            		}
HXLINE(1232)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE(1232)			return this->scriptX->get_currentSuperClass();
            		}
            		else {
HXLINE(1232)			return null();
            		}
HXDLIN(1232)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,get_currentSuperClass,return )

::String SScript_obj::set_currentClass(::String value){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1236_set_currentClass)
HXLINE(1237)		if (this->_destroyed) {
HXLINE(1238)			return null();
            		}
HXLINE(1240)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE(1240)			 ::tea::backend::SScriptX _this = this->scriptX;
HXDLIN(1240)			if (::hx::IsNull( value )) {
HXLINE(1240)				_this->currentScriptClass = null();
            			}
            			else {
HXLINE(1240)				bool _hx_tmp;
HXDLIN(1240)				if (::hx::IsNotNull( _this->classes )) {
HXLINE(1240)					_hx_tmp = ::hx::IsNotNull( ( ( ::ex::ScriptClass)(::Reflect_obj::field(_this->classes,value)) ) );
            				}
            				else {
HXLINE(1240)					_hx_tmp = false;
            				}
HXDLIN(1240)				if (_hx_tmp) {
HXLINE(1240)					_this->currentScriptClass = ( ( ::ex::ScriptClass)(::Reflect_obj::field(_this->classes,value)) );
            				}
            				else {
HXLINE(1240)					_this->currentScriptClass = null();
            				}
            			}
HXDLIN(1240)			return (_this->currentClass = value);
            		}
            		else {
HXLINE(1240)			return null();
            		}
HXDLIN(1240)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SScript_obj,set_currentClass,return )

::String SScript_obj::get_currentClass(){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1244_get_currentClass)
HXLINE(1245)		if (this->_destroyed) {
HXLINE(1246)			return null();
            		}
HXLINE(1248)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE(1248)			return this->scriptX->currentClass;
            		}
            		else {
HXLINE(1248)			return null();
            		}
HXDLIN(1248)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,get_currentClass,return )

bool SScript_obj::get_exMode(){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1252_get_exMode)
HXLINE(1253)		if (this->_destroyed) {
HXLINE(1254)			return false;
            		}
HXLINE(1256)		return ::hx::IsNotNull( this->scriptX );
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,get_exMode,return )

::String SScript_obj::set_customOrigin(::String value){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1266_set_customOrigin)
HXLINE(1267)		if (this->_destroyed) {
HXLINE(1268)			return null();
            		}
HXLINE(1270)		this->parser->origin = value;
HXLINE(1271)		return (this->customOrigin = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SScript_obj,set_customOrigin,return )

 ::Dynamic SScript_obj::defaultTypeCheck;

 ::Dynamic SScript_obj::defaultClassSupport;

 ::haxe::ds::StringMap SScript_obj::superClassInstances;

 ::haxe::ds::StringMap SScript_obj::globalVariables;

 ::haxe::ds::StringMap SScript_obj::global;

 ::haxe::ds::StringMap SScript_obj::defines;

::Array< ::Dynamic> SScript_obj::listScripts(::String path,::Array< ::String > extensions){
            	HX_GC_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1071_listScripts)
HXLINE(1072)		if (!(::StringTools_obj::endsWith(path,HX_("/",2f,00,00,00)))) {
HXLINE(1073)			path = (path + HX_("/",2f,00,00,00));
            		}
HXLINE(1075)		bool _hx_tmp;
HXDLIN(1075)		if (::hx::IsNotNull( extensions )) {
HXLINE(1075)			_hx_tmp = (extensions->length < 1);
            		}
            		else {
HXLINE(1075)			_hx_tmp = true;
            		}
HXDLIN(1075)		if (_hx_tmp) {
HXLINE(1076)			extensions = ::Array_obj< ::String >::fromData( _hx_array_data_6e1d7220_42,1);
            		}
HXLINE(1078)		::Array< ::Dynamic> list = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1080)		bool _hx_tmp1;
HXDLIN(1080)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE(1080)			_hx_tmp1 = ::sys::FileSystem_obj::isDirectory(path);
            		}
            		else {
HXLINE(1080)			_hx_tmp1 = false;
            		}
HXDLIN(1080)		if (_hx_tmp1) {
HXLINE(1082)			::Array< ::String > files = ::sys::FileSystem_obj::readDirectory(path);
HXLINE(1083)			{
HXLINE(1083)				int _g = 0;
HXDLIN(1083)				while((_g < files->length)){
HXLINE(1083)					::String i = files->__get(_g);
HXDLIN(1083)					_g = (_g + 1);
HXLINE(1085)					bool hasExtension = false;
HXLINE(1086)					{
HXLINE(1086)						int _g1 = 0;
HXDLIN(1086)						while((_g1 < extensions->length)){
HXLINE(1086)							::String l = extensions->__get(_g1);
HXDLIN(1086)							_g1 = (_g1 + 1);
HXLINE(1088)							if (::StringTools_obj::endsWith(i,l)) {
HXLINE(1090)								hasExtension = true;
HXLINE(1091)								goto _hx_goto_40;
            							}
            						}
            						_hx_goto_40:;
            					}
HXLINE(1094)					bool _hx_tmp;
HXDLIN(1094)					if (hasExtension) {
HXLINE(1094)						_hx_tmp = ::sys::FileSystem_obj::exists((path + i));
            					}
            					else {
HXLINE(1094)						_hx_tmp = false;
            					}
HXDLIN(1094)					if (_hx_tmp) {
HXLINE(1095)						list->push( ::tea::SScript_obj::__alloc( HX_CTX ,(path + i),null(),null()));
            					}
            				}
            			}
            		}
HXLINE(1143)		return list;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SScript_obj,listScripts,return )

 ::EReg SScript_obj::get_BlankReg(){
            	HX_GC_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1261_get_BlankReg)
HXDLIN(1261)		return  ::EReg_obj::__alloc( HX_CTX ,HX_("^[\n\r\t]$",30,29,fc,71),HX_("",00,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,get_BlankReg,return )

 ::Dynamic SScript_obj::set_defaultTypeCheck( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1276_set_defaultTypeCheck)
HXLINE(1277)		{
HXLINE(1277)			 ::Dynamic i = ::tea::SScript_obj::global->iterator();
HXDLIN(1277)			while(( (bool)(i->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1277)				 ::tea::SScript i1 = ( ( ::tea::SScript)(i->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(1279)				bool _hx_tmp;
HXDLIN(1279)				if (::hx::IsNull( value )) {
HXLINE(1279)					_hx_tmp = false;
            				}
            				else {
HXLINE(1279)					_hx_tmp = ( (bool)(value) );
            				}
HXDLIN(1279)				i1->typeCheck = _hx_tmp;
HXLINE(1280)				i1->execute();
            			}
            		}
HXLINE(1283)		return (::tea::SScript_obj::defaultTypeCheck = value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SScript_obj,set_defaultTypeCheck,return )

 ::Dynamic SScript_obj::set_defaultClassSupport( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1287_set_defaultClassSupport)
HXLINE(1288)		{
HXLINE(1288)			 ::Dynamic i = ::tea::SScript_obj::global->iterator();
HXDLIN(1288)			while(( (bool)(i->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1288)				 ::tea::SScript i1 = ( ( ::tea::SScript)(i->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(1290)				bool _hx_tmp;
HXDLIN(1290)				if (::hx::IsNull( value )) {
HXLINE(1290)					_hx_tmp = false;
            				}
            				else {
HXLINE(1290)					_hx_tmp = ( (bool)(value) );
            				}
HXDLIN(1290)				i1->classSupport = _hx_tmp;
HXLINE(1291)				i1->execute();
            			}
            		}
HXLINE(1294)		return (::tea::SScript_obj::defaultClassSupport = value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SScript_obj,set_defaultClassSupport,return )


::hx::ObjectPtr< SScript_obj > SScript_obj::__new(::String __o_scriptPath, ::Dynamic __o_preset, ::Dynamic __o_startExecute) {
	::hx::ObjectPtr< SScript_obj > __this = new SScript_obj();
	__this->__construct(__o_scriptPath,__o_preset,__o_startExecute);
	return __this;
}

::hx::ObjectPtr< SScript_obj > SScript_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_scriptPath, ::Dynamic __o_preset, ::Dynamic __o_startExecute) {
	SScript_obj *__this = (SScript_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SScript_obj), true, "tea.SScript"));
	*(void **)__this = SScript_obj::_hx_vtable;
	__this->__construct(__o_scriptPath,__o_preset,__o_startExecute);
	return __this;
}

SScript_obj::SScript_obj()
{
}

void SScript_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SScript);
	HX_MARK_MEMBER_NAME(customOrigin,"customOrigin");
	HX_MARK_MEMBER_NAME(returnValue,"returnValue");
	HX_MARK_MEMBER_NAME(typeCheck,"typeCheck");
	HX_MARK_MEMBER_NAME(classSupport,"classSupport");
	HX_MARK_MEMBER_NAME(lastReportedTime,"lastReportedTime");
	HX_MARK_MEMBER_NAME(lastReportedCallTime,"lastReportedCallTime");
	HX_MARK_MEMBER_NAME(notAllowedClasses,"notAllowedClasses");
	HX_MARK_MEMBER_NAME(interp,"interp");
	HX_MARK_MEMBER_NAME(parser,"parser");
	HX_MARK_MEMBER_NAME(script,"script");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(scriptFile,"scriptFile");
	HX_MARK_MEMBER_NAME(traces,"traces");
	HX_MARK_MEMBER_NAME(debugTraces,"debugTraces");
	HX_MARK_MEMBER_NAME(packagePath,"packagePath");
	HX_MARK_MEMBER_NAME(parsingExceptions,"parsingExceptions");
	HX_MARK_MEMBER_NAME(scriptX,"scriptX");
	HX_MARK_MEMBER_NAME(_destroyed,"_destroyed");
	HX_MARK_END_CLASS();
}

void SScript_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(customOrigin,"customOrigin");
	HX_VISIT_MEMBER_NAME(returnValue,"returnValue");
	HX_VISIT_MEMBER_NAME(typeCheck,"typeCheck");
	HX_VISIT_MEMBER_NAME(classSupport,"classSupport");
	HX_VISIT_MEMBER_NAME(lastReportedTime,"lastReportedTime");
	HX_VISIT_MEMBER_NAME(lastReportedCallTime,"lastReportedCallTime");
	HX_VISIT_MEMBER_NAME(notAllowedClasses,"notAllowedClasses");
	HX_VISIT_MEMBER_NAME(interp,"interp");
	HX_VISIT_MEMBER_NAME(parser,"parser");
	HX_VISIT_MEMBER_NAME(script,"script");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(scriptFile,"scriptFile");
	HX_VISIT_MEMBER_NAME(traces,"traces");
	HX_VISIT_MEMBER_NAME(debugTraces,"debugTraces");
	HX_VISIT_MEMBER_NAME(packagePath,"packagePath");
	HX_VISIT_MEMBER_NAME(parsingExceptions,"parsingExceptions");
	HX_VISIT_MEMBER_NAME(scriptX,"scriptX");
	HX_VISIT_MEMBER_NAME(_destroyed,"_destroyed");
}

::hx::Val SScript_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"unset") ) { return ::hx::Val( unset_dyn() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"interp") ) { return ::hx::Val( interp ); }
		if (HX_FIELD_EQ(inName,"parser") ) { return ::hx::Val( parser ); }
		if (HX_FIELD_EQ(inName,"script") ) { return ::hx::Val( script ); }
		if (HX_FIELD_EQ(inName,"active") ) { return ::hx::Val( active ); }
		if (HX_FIELD_EQ(inName,"traces") ) { return ::hx::Val( traces ); }
		if (HX_FIELD_EQ(inName,"exMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_exMode() ); }
		if (HX_FIELD_EQ(inName,"locals") ) { return ::hx::Val( locals_dyn() ); }
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"preset") ) { return ::hx::Val( preset_dyn() ); }
		if (HX_FIELD_EQ(inName,"doFile") ) { return ::hx::Val( doFile_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"classes") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_classes() ); }
		if (HX_FIELD_EQ(inName,"scriptX") ) { return ::hx::Val( scriptX ); }
		if (HX_FIELD_EQ(inName,"execute") ) { return ::hx::Val( execute_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setClass") ) { return ::hx::Val( setClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"doString") ) { return ::hx::Val( doString_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"typeCheck") ) { return ::hx::Val( typeCheck ); }
		if (HX_FIELD_EQ(inName,"variables") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_variables() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scriptFile") ) { return ::hx::Val( scriptFile ); }
		if (HX_FIELD_EQ(inName,"_destroyed") ) { return ::hx::Val( _destroyed ); }
		if (HX_FIELD_EQ(inName,"get_exMode") ) { return ::hx::Val( get_exMode_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"returnValue") ) { return ::hx::Val( returnValue ); }
		if (HX_FIELD_EQ(inName,"debugTraces") ) { return ::hx::Val( debugTraces ); }
		if (HX_FIELD_EQ(inName,"packagePath") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_packagePath() : packagePath ); }
		if (HX_FIELD_EQ(inName,"get_classes") ) { return ::hx::Val( get_classes_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"customOrigin") ) { return ::hx::Val( customOrigin ); }
		if (HX_FIELD_EQ(inName,"classSupport") ) { return ::hx::Val( classSupport ); }
		if (HX_FIELD_EQ(inName,"currentClass") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_currentClass() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_variables") ) { return ::hx::Val( get_variables_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setClassString") ) { return ::hx::Val( setClassString_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPackagePath") ) { return ::hx::Val( setPackagePath_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_packagePath") ) { return ::hx::Val( get_packagePath_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lastReportedTime") ) { return ::hx::Val( lastReportedTime ); }
		if (HX_FIELD_EQ(inName,"set_currentClass") ) { return ::hx::Val( set_currentClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_currentClass") ) { return ::hx::Val( get_currentClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_customOrigin") ) { return ::hx::Val( set_customOrigin_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"notAllowedClasses") ) { return ::hx::Val( notAllowedClasses ); }
		if (HX_FIELD_EQ(inName,"currentSuperClass") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_currentSuperClass() ); }
		if (HX_FIELD_EQ(inName,"parsingExceptions") ) { return ::hx::Val( parsingExceptions ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"currentScriptClass") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_currentScriptClass() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lastReportedCallTime") ) { return ::hx::Val( lastReportedCallTime ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_currentSuperClass") ) { return ::hx::Val( get_currentSuperClass_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_currentScriptClass") ) { return ::hx::Val( get_currentScriptClass_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SScript_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"global") ) { outValue = ( global ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"defines") ) { outValue = ( defines ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"BlankReg") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_BlankReg() ); return true; } }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"listScripts") ) { outValue = listScripts_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_BlankReg") ) { outValue = get_BlankReg_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"globalVariables") ) { outValue = ( globalVariables ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"defaultTypeCheck") ) { outValue = ( defaultTypeCheck ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"defaultClassSupport") ) { outValue = ( defaultClassSupport ); return true; }
		if (HX_FIELD_EQ(inName,"superClassInstances") ) { outValue = ( superClassInstances ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_defaultTypeCheck") ) { outValue = set_defaultTypeCheck_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"set_defaultClassSupport") ) { outValue = set_defaultClassSupport_dyn(); return true; }
	}
	return false;
}

::hx::Val SScript_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"interp") ) { interp=inValue.Cast<  ::hscriptBase::Interp >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parser") ) { parser=inValue.Cast<  ::hscriptBase::Parser >(); return inValue; }
		if (HX_FIELD_EQ(inName,"script") ) { script=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"traces") ) { traces=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scriptX") ) { scriptX=inValue.Cast<  ::tea::backend::SScriptX >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"typeCheck") ) { typeCheck=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scriptFile") ) { scriptFile=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_destroyed") ) { _destroyed=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"returnValue") ) { returnValue=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugTraces") ) { debugTraces=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"packagePath") ) { packagePath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"customOrigin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_customOrigin(inValue.Cast< ::String >()) );customOrigin=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"classSupport") ) { classSupport=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentClass") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_currentClass(inValue.Cast< ::String >()) ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lastReportedTime") ) { lastReportedTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"notAllowedClasses") ) { notAllowedClasses=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parsingExceptions") ) { parsingExceptions=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lastReportedCallTime") ) { lastReportedCallTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SScript_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"global") ) { global=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"defines") ) { defines=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"globalVariables") ) { globalVariables=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"defaultTypeCheck") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_defaultTypeCheck(ioValue.Cast<  ::Dynamic >()) ); else defaultTypeCheck=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"defaultClassSupport") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_defaultClassSupport(ioValue.Cast<  ::Dynamic >()) ); else defaultClassSupport=ioValue.Cast<  ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"superClassInstances") ) { superClassInstances=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void SScript_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("customOrigin",77,70,9e,4a));
	outFields->push(HX_("returnValue",a1,4c,95,3e));
	outFields->push(HX_("typeCheck",ae,f3,8e,0a));
	outFields->push(HX_("classSupport",b7,b2,a3,25));
	outFields->push(HX_("lastReportedTime",36,a7,34,87));
	outFields->push(HX_("lastReportedCallTime",74,db,fa,f3));
	outFields->push(HX_("notAllowedClasses",d1,82,87,c7));
	outFields->push(HX_("variables",b7,e2,62,82));
	outFields->push(HX_("interp",d4,79,86,9e));
	outFields->push(HX_("parser",df,9c,88,ed));
	outFields->push(HX_("script",0b,4e,60,47));
	outFields->push(HX_("active",c6,41,46,16));
	outFields->push(HX_("scriptFile",27,aa,9c,3c));
	outFields->push(HX_("traces",4e,26,7d,45));
	outFields->push(HX_("debugTraces",01,ed,ef,4d));
	outFields->push(HX_("exMode",76,0d,5b,ad));
	outFields->push(HX_("packagePath",4b,78,ff,05));
	outFields->push(HX_("classes",a6,4e,91,69));
	outFields->push(HX_("currentClass",3f,5d,64,8f));
	outFields->push(HX_("currentScriptClass",74,b6,d3,8b));
	outFields->push(HX_("currentSuperClass",56,2a,3d,7f));
	outFields->push(HX_("parsingExceptions",94,01,6c,59));
	outFields->push(HX_("scriptX",ed,fb,e3,2c));
	outFields->push(HX_("_destroyed",9a,b3,c9,4f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SScript_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(SScript_obj,customOrigin),HX_("customOrigin",77,70,9e,4a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SScript_obj,returnValue),HX_("returnValue",a1,4c,95,3e)},
	{::hx::fsBool,(int)offsetof(SScript_obj,typeCheck),HX_("typeCheck",ae,f3,8e,0a)},
	{::hx::fsBool,(int)offsetof(SScript_obj,classSupport),HX_("classSupport",b7,b2,a3,25)},
	{::hx::fsFloat,(int)offsetof(SScript_obj,lastReportedTime),HX_("lastReportedTime",36,a7,34,87)},
	{::hx::fsFloat,(int)offsetof(SScript_obj,lastReportedCallTime),HX_("lastReportedCallTime",74,db,fa,f3)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(SScript_obj,notAllowedClasses),HX_("notAllowedClasses",d1,82,87,c7)},
	{::hx::fsObject /*  ::hscriptBase::Interp */ ,(int)offsetof(SScript_obj,interp),HX_("interp",d4,79,86,9e)},
	{::hx::fsObject /*  ::hscriptBase::Parser */ ,(int)offsetof(SScript_obj,parser),HX_("parser",df,9c,88,ed)},
	{::hx::fsString,(int)offsetof(SScript_obj,script),HX_("script",0b,4e,60,47)},
	{::hx::fsBool,(int)offsetof(SScript_obj,active),HX_("active",c6,41,46,16)},
	{::hx::fsString,(int)offsetof(SScript_obj,scriptFile),HX_("scriptFile",27,aa,9c,3c)},
	{::hx::fsBool,(int)offsetof(SScript_obj,traces),HX_("traces",4e,26,7d,45)},
	{::hx::fsBool,(int)offsetof(SScript_obj,debugTraces),HX_("debugTraces",01,ed,ef,4d)},
	{::hx::fsString,(int)offsetof(SScript_obj,packagePath),HX_("packagePath",4b,78,ff,05)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(SScript_obj,parsingExceptions),HX_("parsingExceptions",94,01,6c,59)},
	{::hx::fsObject /*  ::tea::backend::SScriptX */ ,(int)offsetof(SScript_obj,scriptX),HX_("scriptX",ed,fb,e3,2c)},
	{::hx::fsBool,(int)offsetof(SScript_obj,_destroyed),HX_("_destroyed",9a,b3,c9,4f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo SScript_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &SScript_obj::defaultTypeCheck,HX_("defaultTypeCheck",ad,5a,87,cd)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &SScript_obj::defaultClassSupport,HX_("defaultClassSupport",18,75,fc,a1)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &SScript_obj::superClassInstances,HX_("superClassInstances",c1,3a,ab,61)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &SScript_obj::globalVariables,HX_("globalVariables",d4,cc,01,94)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &SScript_obj::global,HX_("global",63,31,b2,a7)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &SScript_obj::defines,HX_("defines",d8,37,08,a1)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SScript_obj_sMemberFields[] = {
	HX_("customOrigin",77,70,9e,4a),
	HX_("returnValue",a1,4c,95,3e),
	HX_("typeCheck",ae,f3,8e,0a),
	HX_("classSupport",b7,b2,a3,25),
	HX_("lastReportedTime",36,a7,34,87),
	HX_("lastReportedCallTime",74,db,fa,f3),
	HX_("notAllowedClasses",d1,82,87,c7),
	HX_("interp",d4,79,86,9e),
	HX_("parser",df,9c,88,ed),
	HX_("script",0b,4e,60,47),
	HX_("active",c6,41,46,16),
	HX_("scriptFile",27,aa,9c,3c),
	HX_("traces",4e,26,7d,45),
	HX_("debugTraces",01,ed,ef,4d),
	HX_("packagePath",4b,78,ff,05),
	HX_("parsingExceptions",94,01,6c,59),
	HX_("scriptX",ed,fb,e3,2c),
	HX_("_destroyed",9a,b3,c9,4f),
	HX_("execute",35,0a,0d,cc),
	HX_("set",a2,9b,57,00),
	HX_("setClass",36,e1,8c,56),
	HX_("setClassString",a7,4a,37,30),
	HX_("locals",a8,74,bf,59),
	HX_("unset",e9,f2,ee,a6),
	HX_("get",96,80,4e,00),
	HX_("call",9e,18,ba,41),
	HX_("clear",8d,71,5b,48),
	HX_("exists",dc,1d,e0,bf),
	HX_("preset",5f,b3,c0,ae),
	HX_("doFile",a7,73,bf,13),
	HX_("doString",bc,ae,47,a5),
	HX_("toString",ac,d0,6e,38),
	HX_("destroy",fa,2c,86,24),
	HX_("get_variables",8e,b6,c6,43),
	HX_("setPackagePath",c9,b3,bd,ad),
	HX_("get_packagePath",e2,2f,e1,c6),
	HX_("get_classes",bd,ae,8b,ef),
	HX_("get_currentScriptClass",bd,2f,68,e5),
	HX_("get_currentSuperClass",2d,2d,eb,fd),
	HX_("set_currentClass",3c,37,45,ea),
	HX_("get_currentClass",c8,49,03,94),
	HX_("get_exMode",3f,7d,e2,9d),
	HX_("set_customOrigin",74,4a,7f,a5),
	::String(null()) };

static void SScript_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SScript_obj::defaultTypeCheck,"defaultTypeCheck");
	HX_MARK_MEMBER_NAME(SScript_obj::defaultClassSupport,"defaultClassSupport");
	HX_MARK_MEMBER_NAME(SScript_obj::superClassInstances,"superClassInstances");
	HX_MARK_MEMBER_NAME(SScript_obj::globalVariables,"globalVariables");
	HX_MARK_MEMBER_NAME(SScript_obj::global,"global");
	HX_MARK_MEMBER_NAME(SScript_obj::defines,"defines");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SScript_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SScript_obj::defaultTypeCheck,"defaultTypeCheck");
	HX_VISIT_MEMBER_NAME(SScript_obj::defaultClassSupport,"defaultClassSupport");
	HX_VISIT_MEMBER_NAME(SScript_obj::superClassInstances,"superClassInstances");
	HX_VISIT_MEMBER_NAME(SScript_obj::globalVariables,"globalVariables");
	HX_VISIT_MEMBER_NAME(SScript_obj::global,"global");
	HX_VISIT_MEMBER_NAME(SScript_obj::defines,"defines");
};

#endif

::hx::Class SScript_obj::__mClass;

static ::String SScript_obj_sStaticFields[] = {
	HX_("defaultTypeCheck",ad,5a,87,cd),
	HX_("defaultClassSupport",18,75,fc,a1),
	HX_("superClassInstances",c1,3a,ab,61),
	HX_("globalVariables",d4,cc,01,94),
	HX_("global",63,31,b2,a7),
	HX_("defines",d8,37,08,a1),
	HX_("listScripts",4a,6f,e3,e3),
	HX_("get_BlankReg",89,6e,d3,64),
	HX_("set_defaultTypeCheck",2a,77,a9,b8),
	HX_("set_defaultClassSupport",bb,84,b3,ac),
	::String(null())
};

void SScript_obj::__register()
{
	SScript_obj _hx_dummy;
	SScript_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tea.SScript",20,72,1d,6e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SScript_obj::__GetStatic;
	__mClass->mSetStaticField = &SScript_obj::__SetStatic;
	__mClass->mMarkFunc = SScript_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SScript_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SScript_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SScript_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SScript_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SScript_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SScript_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SScript_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_52_boot)
HXDLIN(  52)		defaultTypeCheck = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_57_boot)
HXDLIN(  57)		defaultClassSupport = null();
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_ffc4a688e712d40b_95_boot)
HXDLIN(  95)		superClassInstances =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_ffc4a688e712d40b_108_boot)
HXDLIN( 108)		globalVariables =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_ffc4a688e712d40b_113_boot)
HXDLIN( 113)		global =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace tea
