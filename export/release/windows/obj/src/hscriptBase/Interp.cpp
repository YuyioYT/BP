#include <hxcpp.h>

#ifndef INCLUDED_IntIterator
#include <IntIterator.h>
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
#ifndef INCLUDED_ValueType
#include <ValueType.h>
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
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hscriptBase_CType
#include <hscriptBase/CType.h>
#endif
#ifndef INCLUDED_hscriptBase_Const
#include <hscriptBase/Const.h>
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
#ifndef INCLUDED_hscriptBase_Parser
#include <hscriptBase/Parser.h>
#endif
#ifndef INCLUDED_hscriptBase_Token
#include <hscriptBase/Token.h>
#endif
#ifndef INCLUDED_hscriptBase_Tools
#include <hscriptBase/Tools.h>
#endif
#ifndef INCLUDED_hscriptBase__Interp_Stop
#include <hscriptBase/_Interp/Stop.h>
#endif
#ifndef INCLUDED_tea_SScript
#include <tea/SScript.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_23fee00e02910bec_35_new,"hscriptBase.Interp","new",0x969fb2f0,"hscriptBase.Interp.new","hscriptBase/Interp.hx",35,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_64_setScr,"hscriptBase.Interp","setScr",0x5b6b3ed0,"hscriptBase.Interp.setScr","hscriptBase/Interp.hx",64,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_69_setPsr,"hscriptBase.Interp","setPsr",0x5b6905fd,"hscriptBase.Interp.setPsr","hscriptBase/Interp.hx",69,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_85_resetVariables,"hscriptBase.Interp","resetVariables",0x1edc4e58,"hscriptBase.Interp.resetVariables","hscriptBase/Interp.hx",85,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_95_resetVariables,"hscriptBase.Interp","resetVariables",0x1edc4e58,"hscriptBase.Interp.resetVariables","hscriptBase/Interp.hx",95,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_109_posInfos,"hscriptBase.Interp","posInfos",0x4ef35581,"hscriptBase.Interp.posInfos","hscriptBase/Interp.hx",109,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_126_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",126,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_127_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",127,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_128_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",128,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_129_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",129,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_130_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",130,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_131_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",131,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_132_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",132,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_133_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",133,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_134_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",134,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_135_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",135,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_136_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",136,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_137_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",137,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_138_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",138,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_139_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",139,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_140_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",140,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_141_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",141,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_142_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",142,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_143_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",143,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_144_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",144,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_146_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",146,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_147_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",147,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_148_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",148,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_149_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",149,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_150_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",150,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_151_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",151,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_152_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",152,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_153_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",153,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_154_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",154,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_155_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",155,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_156_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",156,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_157_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",157,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_119_initOps,"hscriptBase.Interp","initOps",0x5c23cd92,"hscriptBase.Interp.initOps","hscriptBase/Interp.hx",119,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_161_coalesce,"hscriptBase.Interp","coalesce",0x56144017,"hscriptBase.Interp.coalesce","hscriptBase/Interp.hx",161,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_168_coalesce2,"hscriptBase.Interp","coalesce2",0xfba3d43b,"hscriptBase.Interp.coalesce2","hscriptBase/Interp.hx",168,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_176_setVar,"hscriptBase.Interp","setVar",0x5b6d83d5,"hscriptBase.Interp.setVar","hscriptBase/Interp.hx",176,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_187_assign,"hscriptBase.Interp","assign",0x38025d9f,"hscriptBase.Interp.assign","hscriptBase/Interp.hx",187,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_238_assignOp,"hscriptBase.Interp","assignOp",0x038c88a0,"hscriptBase.Interp.assignOp","hscriptBase/Interp.hx",238,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_236_assignOp,"hscriptBase.Interp","assignOp",0x038c88a0,"hscriptBase.Interp.assignOp","hscriptBase/Interp.hx",236,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_241_evalAssignOp,"hscriptBase.Interp","evalAssignOp",0xc9a0245c,"hscriptBase.Interp.evalAssignOp","hscriptBase/Interp.hx",241,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_272_increment,"hscriptBase.Interp","increment",0x697334bf,"hscriptBase.Interp.increment","hscriptBase/Interp.hx",272,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_324_execute,"hscriptBase.Interp","execute",0x5ca574c5,"hscriptBase.Interp.execute","hscriptBase/Interp.hx",324,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_361_exprReturn,"hscriptBase.Interp","exprReturn",0xd521fb35,"hscriptBase.Interp.exprReturn","hscriptBase/Interp.hx",361,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_376_duplicate,"hscriptBase.Interp","duplicate",0xd88b501b,"hscriptBase.Interp.duplicate","hscriptBase/Interp.hx",376,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_388_restore,"hscriptBase.Interp","restore",0xfb48d1de,"hscriptBase.Interp.restore","hscriptBase/Interp.hx",388,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_394_error,"hscriptBase.Interp","error",0x1e1f7258,"hscriptBase.Interp.error","hscriptBase/Interp.hx",394,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_405_rethrow,"hscriptBase.Interp","rethrow",0x86c31b23,"hscriptBase.Interp.rethrow","hscriptBase/Interp.hx",405,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_409_resolve,"hscriptBase.Interp","resolve",0xf7f87d7c,"hscriptBase.Interp.resolve","hscriptBase/Interp.hx",409,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_419_expr,"hscriptBase.Interp","expr",0x2f3858a5,"hscriptBase.Interp.expr","hscriptBase/Interp.hx",419,0xddaa725f)
static const ::String _hx_array_data_88b7bafe_79[] = {
	HX_("privateField",b7,cc,40,ba),HX_("inlineVar",0e,0a,50,38),HX_("publicField",51,7f,6d,5c),
};
static const ::String _hx_array_data_88b7bafe_80[] = {
	HX_("privateField",b7,cc,40,ba),HX_("inlineFinal",5d,e2,ce,c2),HX_("publicField",51,7f,6d,5c),
};
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_711_expr,"hscriptBase.Interp","expr",0x2f3858a5,"hscriptBase.Interp.expr","hscriptBase/Interp.hx",711,0xddaa725f)
static const ::String _hx_array_data_88b7bafe_82[] = {
	HX_("privateField",b7,cc,40,ba),HX_("inlineVar",0e,0a,50,38),HX_("inlineFinal",5d,e2,ce,c2),HX_("publicField",51,7f,6d,5c),
};
static const int _hx_array_data_88b7bafe_83[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_927_doWhileLoop,"hscriptBase.Interp","doWhileLoop",0x5a5ff43a,"hscriptBase.Interp.doWhileLoop","hscriptBase/Interp.hx",927,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_944_whileLoop,"hscriptBase.Interp","whileLoop",0x190c7145,"hscriptBase.Interp.whileLoop","hscriptBase/Interp.hx",944,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_960_makeIterator,"hscriptBase.Interp","makeIterator",0x887e296c,"hscriptBase.Interp.makeIterator","hscriptBase/Interp.hx",960,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_970_forLoop,"hscriptBase.Interp","forLoop",0x5a01bc9d,"hscriptBase.Interp.forLoop","hscriptBase/Interp.hx",970,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_990_isMap,"hscriptBase.Interp","isMap",0x6c46db62,"hscriptBase.Interp.isMap","hscriptBase/Interp.hx",990,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_994_getMapValue,"hscriptBase.Interp","getMapValue",0xeeb7a47b,"hscriptBase.Interp.getMapValue","hscriptBase/Interp.hx",994,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_998_setMapValue,"hscriptBase.Interp","setMapValue",0xf924ab87,"hscriptBase.Interp.setMapValue","hscriptBase/Interp.hx",998,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_1001_get,"hscriptBase.Interp","get",0x969a6326,"hscriptBase.Interp.get","hscriptBase/Interp.hx",1001,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_1029_set,"hscriptBase.Interp","set",0x96a37e32,"hscriptBase.Interp.set","hscriptBase/Interp.hx",1029,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_1036_fcall,"hscriptBase.Interp","fcall",0xa78eea94,"hscriptBase.Interp.fcall","hscriptBase/Interp.hx",1036,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_1040_call,"hscriptBase.Interp","call",0x2dd4740e,"hscriptBase.Interp.call","hscriptBase/Interp.hx",1040,0xddaa725f)
HX_LOCAL_STACK_FRAME(_hx_pos_23fee00e02910bec_1043_cnew,"hscriptBase.Interp","cnew",0x2dde4b4d,"hscriptBase.Interp.cnew","hscriptBase/Interp.hx",1043,0xddaa725f)
namespace hscriptBase{

void Interp_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_35_new)
HXLINE( 117)		this->inFunc = false;
HXLINE(  53)		this->typecheck = false;
HXLINE(  39)		this->dynamicFuncs =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  76)		this->locals =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  80)		this->declared = ::Array_obj< ::Dynamic>::__new();
HXLINE(  81)		this->resetVariables();
HXLINE(  82)		this->initOps();
            	}

Dynamic Interp_obj::__CreateEmpty() { return new Interp_obj; }

void *Interp_obj::_hx_vtable = 0;

Dynamic Interp_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Interp_obj > _hx_result = new Interp_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Interp_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x43235d34;
}

 ::tea::SScript Interp_obj::setScr( ::tea::SScript s){
            	HX_STACKFRAME(&_hx_pos_23fee00e02910bec_64_setScr)
HXDLIN(  64)		return (this->script = s);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,setScr,return )

 ::hscriptBase::Parser Interp_obj::setPsr( ::hscriptBase::Parser p){
            	HX_STACKFRAME(&_hx_pos_23fee00e02910bec_69_setPsr)
HXDLIN(  69)		return (this->parser = p);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,setPsr,return )

void Interp_obj::resetVariables(){
            	HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_85_resetVariables)
HXDLIN(  85)		 ::hscriptBase::Interp _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  87)		this->variables =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  92)		{
HXLINE(  92)			 ::Dynamic value = null();
HXDLIN(  92)			this->variables->set(HX_("null",87,9e,0e,49),value);
            		}
HXLINE(  93)		this->variables->set(HX_("true",4e,a7,03,4d),true);
HXLINE(  94)		this->variables->set(HX_("false",a3,35,4f,fb),false);
HXLINE(  95)		{
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::hscriptBase::Interp,_gthis) HXARGC(1)
            			void _hx_run(::cpp::VirtualArray el){
            				HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_95_resetVariables)
HXLINE(  96)				 ::Dynamic inf = _gthis->posInfos();
HXLINE(  97)				 ::Dynamic v = el->shift();
HXLINE(  98)				if ((el->get_length() > 0)) {
HXLINE(  98)					inf->__SetField(HX_("customParams",d7,51,18,ed),el,::hx::paccDynamic);
            				}
HXLINE(  99)				 ::Dynamic value = ::haxe::Log_obj::trace;
HXDLIN(  99)				value(::Std_obj::string(v),inf);
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  95)			::Dynamic this1 = this->variables;
HXDLIN(  95)			( ( ::haxe::ds::StringMap)(this1) )->set(HX_("trace",85,8e,1f,16),::Reflect_obj::makeVarArgs( ::Dynamic(new _hx_Closure_0(_gthis))));
            		}
HXLINE( 101)		this->variables->set(HX_("Bool",4a,b0,f4,2b),( ( ::Dynamic)(::hx::ClassOf< bool >()) ));
HXLINE( 102)		this->variables->set(HX_("Int",cf,c4,37,00),( ( ::Dynamic)(::hx::ClassOf< int >()) ));
HXLINE( 103)		this->variables->set(HX_("Float",7c,35,c4,95),( ( ::Dynamic)(::hx::ClassOf< ::Float >()) ));
HXLINE( 104)		this->variables->set(HX_("String",f1,9c,c4,45),( ( ::Dynamic)(::hx::ClassOf< ::String >()) ));
HXLINE( 105)		this->variables->set(HX_("Dynamic",5f,c7,66,03),( ( ::Dynamic)(::hx::ClassOf< ::Dynamic >()) ));
HXLINE( 106)		this->variables->set(HX_("Array",79,dd,bc,b8),( ( ::Dynamic)(::hx::ArrayBase::__mClass) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interp_obj,resetVariables,(void))

 ::Dynamic Interp_obj::posInfos(){
            	HX_STACKFRAME(&_hx_pos_23fee00e02910bec_109_posInfos)
HXLINE( 111)		if (::hx::IsNotNull( this->curExpr )) {
HXLINE( 112)			return  ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("fileName",e7,5a,43,62), ::Dynamic(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)))
            				->setFixed(1,HX_("lineNumber",dd,81,22,76), ::Dynamic(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic))));
            		}
HXLINE( 114)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("fileName",e7,5a,43,62),HX_("SScript",be,42,6a,f7))
            			->setFixed(1,HX_("lineNumber",dd,81,22,76),0));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interp_obj,posInfos,return )

void Interp_obj::initOps(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::hscriptBase::Interp,me) HXARGC(2)
            		 ::Dynamic _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_126_initOps)
HXLINE( 126)			 ::Dynamic _hx_tmp = me->expr(e1,null());
HXDLIN( 126)			return (_hx_tmp + me->expr(e2,null()));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::hscriptBase::Interp,me) HXARGC(2)
            		Float _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_127_initOps)
HXLINE( 127)			 ::Dynamic _hx_tmp = me->expr(e1,null());
HXDLIN( 127)			return (( (Float)(_hx_tmp) ) - ( (Float)(me->expr(e2,null())) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::hscriptBase::Interp,me) HXARGC(2)
            		Float _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_128_initOps)
HXLINE( 128)			 ::Dynamic _hx_tmp = me->expr(e1,null());
HXDLIN( 128)			return (( (Float)(_hx_tmp) ) * ( (Float)(me->expr(e2,null())) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::hscriptBase::Interp,me) HXARGC(2)
            		Float _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_129_initOps)
HXLINE( 129)			 ::Dynamic _hx_tmp = me->expr(e1,null());
HXDLIN( 129)			return (( (Float)(_hx_tmp) ) / ( (Float)(me->expr(e2,null())) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_4, ::hscriptBase::Interp,me) HXARGC(2)
            		Float _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_130_initOps)
HXLINE( 130)			 ::Dynamic _hx_tmp = me->expr(e1,null());
HXDLIN( 130)			return ::hx::Mod(_hx_tmp,me->expr(e2,null()));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_5, ::hscriptBase::Interp,me) HXARGC(2)
            		int _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_131_initOps)
HXLINE( 131)			 ::Dynamic _hx_tmp = me->expr(e1,null());
HXDLIN( 131)			return (( (int)(_hx_tmp) ) & ( (int)(me->expr(e2,null())) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_6, ::hscriptBase::Interp,me) HXARGC(2)
            		int _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_132_initOps)
HXLINE( 132)			 ::Dynamic _hx_tmp = me->expr(e1,null());
HXDLIN( 132)			return (( (int)(_hx_tmp) ) | ( (int)(me->expr(e2,null())) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_7, ::hscriptBase::Interp,me) HXARGC(2)
            		int _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_133_initOps)
HXLINE( 133)			 ::Dynamic _hx_tmp = me->expr(e1,null());
HXDLIN( 133)			return (( (int)(_hx_tmp) ) ^ ( (int)(me->expr(e2,null())) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_8, ::hscriptBase::Interp,me) HXARGC(2)
            		int _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_134_initOps)
HXLINE( 134)			 ::Dynamic _hx_tmp = me->expr(e1,null());
HXDLIN( 134)			return (( (int)(_hx_tmp) ) << ( (int)(me->expr(e2,null())) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_9, ::hscriptBase::Interp,me) HXARGC(2)
            		int _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_135_initOps)
HXLINE( 135)			 ::Dynamic _hx_tmp = me->expr(e1,null());
HXDLIN( 135)			return (( (int)(_hx_tmp) ) >> ( (int)(me->expr(e2,null())) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_10, ::hscriptBase::Interp,me) HXARGC(2)
            		int _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_136_initOps)
HXLINE( 136)			 ::Dynamic _hx_tmp = me->expr(e1,null());
HXDLIN( 136)			return ::hx::UShr(( (int)(_hx_tmp) ),( (int)(me->expr(e2,null())) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_11, ::hscriptBase::Interp,me) HXARGC(2)
            		bool _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_137_initOps)
HXLINE( 137)			 ::Dynamic _hx_tmp = me->expr(e1,null());
HXDLIN( 137)			return ::hx::IsEq( _hx_tmp,me->expr(e2,null()) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_12, ::hscriptBase::Interp,me) HXARGC(2)
            		bool _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_138_initOps)
HXLINE( 138)			 ::Dynamic _hx_tmp = me->expr(e1,null());
HXDLIN( 138)			return ::hx::IsNotEq( _hx_tmp,me->expr(e2,null()) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_13, ::hscriptBase::Interp,me) HXARGC(2)
            		bool _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_139_initOps)
HXLINE( 139)			 ::Dynamic _hx_tmp = me->expr(e1,null());
HXDLIN( 139)			return ::hx::IsGreaterEq( _hx_tmp,me->expr(e2,null()) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_14, ::hscriptBase::Interp,me) HXARGC(2)
            		bool _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_140_initOps)
HXLINE( 140)			 ::Dynamic _hx_tmp = me->expr(e1,null());
HXDLIN( 140)			return ::hx::IsLessEq( _hx_tmp,me->expr(e2,null()) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_15, ::hscriptBase::Interp,me) HXARGC(2)
            		bool _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_141_initOps)
HXLINE( 141)			 ::Dynamic _hx_tmp = me->expr(e1,null());
HXDLIN( 141)			return ::hx::IsGreater( _hx_tmp,me->expr(e2,null()) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_16, ::hscriptBase::Interp,me) HXARGC(2)
            		bool _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_142_initOps)
HXLINE( 142)			 ::Dynamic _hx_tmp = me->expr(e1,null());
HXDLIN( 142)			return ::hx::IsLess( _hx_tmp,me->expr(e2,null()) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_17, ::hscriptBase::Interp,me) HXARGC(2)
            		bool _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_143_initOps)
HXLINE( 143)			if (::hx::IsNotEq( me->expr(e1,null()),true )) {
HXLINE( 143)				return ::hx::IsEq( me->expr(e2,null()),true );
            			}
            			else {
HXLINE( 143)				return true;
            			}
HXDLIN( 143)			return false;
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_18, ::hscriptBase::Interp,me) HXARGC(2)
            		bool _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_144_initOps)
HXLINE( 144)			if (::hx::IsEq( me->expr(e1,null()),true )) {
HXLINE( 144)				return ::hx::IsEq( me->expr(e2,null()),true );
            			}
            			else {
HXLINE( 144)				return false;
            			}
HXDLIN( 144)			return false;
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_19, ::hscriptBase::Interp,me) HXARGC(2)
            		 ::IntIterator _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_146_initOps)
HXLINE( 146)			 ::Dynamic _hx_tmp = me->expr(e1,null());
HXDLIN( 146)			return  ::IntIterator_obj::__alloc( HX_CTX ,( (int)(_hx_tmp) ),( (int)(me->expr(e2,null())) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_20) HXARGC(2)
            		 ::Dynamic _hx_run( ::Dynamic v1, ::Dynamic v2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_147_initOps)
HXLINE( 147)			return (v1 + v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_21) HXARGC(2)
            		Float _hx_run(Float v1,Float v2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_148_initOps)
HXLINE( 148)			return (v1 - v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_22) HXARGC(2)
            		Float _hx_run(Float v1,Float v2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_149_initOps)
HXLINE( 149)			return (v1 * v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_23) HXARGC(2)
            		Float _hx_run(Float v1,Float v2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_150_initOps)
HXLINE( 150)			return (v1 / v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_24) HXARGC(2)
            		Float _hx_run(Float v1,Float v2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_151_initOps)
HXLINE( 151)			return ::hx::Mod(v1,v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_25) HXARGC(2)
            		int _hx_run(int v1,int v2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_152_initOps)
HXLINE( 152)			return (v1 & v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_26) HXARGC(2)
            		int _hx_run(int v1,int v2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_153_initOps)
HXLINE( 153)			return (v1 | v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_27) HXARGC(2)
            		int _hx_run(int v1,int v2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_154_initOps)
HXLINE( 154)			return (v1 ^ v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_28) HXARGC(2)
            		int _hx_run(int v1,int v2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_155_initOps)
HXLINE( 155)			return (v1 << v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_29) HXARGC(2)
            		int _hx_run(int v1,int v2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_156_initOps)
HXLINE( 156)			return (v1 >> v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_30) HXARGC(2)
            		int _hx_run(int v1,int v2){
            			HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_157_initOps)
HXLINE( 157)			return ::hx::UShr(v1,v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_119_initOps)
HXLINE( 120)		 ::hscriptBase::Interp me = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 122)		this->binops =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 126)		this->binops->set(HX_("+",2b,00,00,00), ::Dynamic(new _hx_Closure_0(me)));
HXLINE( 127)		this->binops->set(HX_("-",2d,00,00,00), ::Dynamic(new _hx_Closure_1(me)));
HXLINE( 128)		this->binops->set(HX_("*",2a,00,00,00), ::Dynamic(new _hx_Closure_2(me)));
HXLINE( 129)		this->binops->set(HX_("/",2f,00,00,00), ::Dynamic(new _hx_Closure_3(me)));
HXLINE( 130)		this->binops->set(HX_("%",25,00,00,00), ::Dynamic(new _hx_Closure_4(me)));
HXLINE( 131)		this->binops->set(HX_("&",26,00,00,00), ::Dynamic(new _hx_Closure_5(me)));
HXLINE( 132)		this->binops->set(HX_("|",7c,00,00,00), ::Dynamic(new _hx_Closure_6(me)));
HXLINE( 133)		this->binops->set(HX_("^",5e,00,00,00), ::Dynamic(new _hx_Closure_7(me)));
HXLINE( 134)		this->binops->set(HX_("<<",80,34,00,00), ::Dynamic(new _hx_Closure_8(me)));
HXLINE( 135)		this->binops->set(HX_(">>",40,36,00,00), ::Dynamic(new _hx_Closure_9(me)));
HXLINE( 136)		this->binops->set(HX_(">>>",fe,41,2f,00), ::Dynamic(new _hx_Closure_10(me)));
HXLINE( 137)		this->binops->set(HX_("==",60,35,00,00), ::Dynamic(new _hx_Closure_11(me)));
HXLINE( 138)		this->binops->set(HX_("!=",fc,1c,00,00), ::Dynamic(new _hx_Closure_12(me)));
HXLINE( 139)		this->binops->set(HX_(">=",3f,36,00,00), ::Dynamic(new _hx_Closure_13(me)));
HXLINE( 140)		this->binops->set(HX_("<=",81,34,00,00), ::Dynamic(new _hx_Closure_14(me)));
HXLINE( 141)		this->binops->set(HX_(">",3e,00,00,00), ::Dynamic(new _hx_Closure_15(me)));
HXLINE( 142)		this->binops->set(HX_("<",3c,00,00,00), ::Dynamic(new _hx_Closure_16(me)));
HXLINE( 143)		this->binops->set(HX_("||",80,6c,00,00), ::Dynamic(new _hx_Closure_17(me)));
HXLINE( 144)		this->binops->set(HX_("&&",40,21,00,00), ::Dynamic(new _hx_Closure_18(me)));
HXLINE( 145)		this->binops->set(HX_("=",3d,00,00,00),this->assign_dyn());
HXLINE( 146)		this->binops->set(HX_("...",ee,0f,23,00), ::Dynamic(new _hx_Closure_19(me)));
HXLINE( 147)		this->assignOp(HX_("+=",b2,25,00,00), ::Dynamic(new _hx_Closure_20()));
HXLINE( 148)		this->assignOp(HX_("-=",70,27,00,00), ::Dynamic(new _hx_Closure_21()));
HXLINE( 149)		this->assignOp(HX_("*=",d3,24,00,00), ::Dynamic(new _hx_Closure_22()));
HXLINE( 150)		this->assignOp(HX_("/=",2e,29,00,00), ::Dynamic(new _hx_Closure_23()));
HXLINE( 151)		this->assignOp(HX_("%=",78,20,00,00), ::Dynamic(new _hx_Closure_24()));
HXLINE( 152)		this->assignOp(HX_("&=",57,21,00,00), ::Dynamic(new _hx_Closure_25()));
HXLINE( 153)		this->assignOp(HX_("|=",41,6c,00,00), ::Dynamic(new _hx_Closure_26()));
HXLINE( 154)		this->assignOp(HX_("^=",1f,52,00,00), ::Dynamic(new _hx_Closure_27()));
HXLINE( 155)		this->assignOp(HX_("<<=",bd,bb,2d,00), ::Dynamic(new _hx_Closure_28()));
HXLINE( 156)		this->assignOp(HX_(">>=",fd,41,2f,00), ::Dynamic(new _hx_Closure_29()));
HXLINE( 157)		this->assignOp(HX_(">>>=",7f,7c,2a,29), ::Dynamic(new _hx_Closure_30()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interp_obj,initOps,(void))

 ::Dynamic Interp_obj::coalesce( ::Dynamic e1, ::Dynamic e2){
            	HX_STACKFRAME(&_hx_pos_23fee00e02910bec_161_coalesce)
HXLINE( 162)		 ::hscriptBase::Interp me = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 163)		 ::Dynamic e11 = me->expr(e1,null());
HXLINE( 164)		 ::Dynamic e21 = me->expr(e2,null());
HXLINE( 165)		if (::hx::IsNull( e11 )) {
HXLINE( 165)			return e21;
            		}
            		else {
HXLINE( 165)			return e11;
            		}
HXDLIN( 165)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,coalesce,return )

 ::Dynamic Interp_obj::coalesce2( ::Dynamic e1, ::Dynamic e2){
            	HX_STACKFRAME(&_hx_pos_23fee00e02910bec_168_coalesce2)
HXLINE( 169)		 ::hscriptBase::Interp me = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 170)		 ::Dynamic expr1 = e1;
HXLINE( 171)		 ::Dynamic expr2 = e2;
HXLINE( 172)		 ::Dynamic e11 = me->expr(e1,null());
HXLINE( 173)		if (::hx::IsNull( e11 )) {
HXLINE( 173)			return this->assign(expr1,expr2);
            		}
            		else {
HXLINE( 173)			return e11;
            		}
HXDLIN( 173)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,coalesce2,return )

void Interp_obj::setVar(::String name, ::Dynamic v){
            	HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_176_setVar)
HXLINE( 177)		::String ftype = ::hscriptBase::Tools_obj::getType(this->variables->get(name),null());
HXLINE( 178)		::String stype = ::hscriptBase::Tools_obj::getType(v,null());
HXLINE( 179)		 ::Dynamic cl = this->variables->get(ftype);
HXLINE( 180)		::String clN = ::hscriptBase::Tools_obj::getType(v,true);
HXLINE( 182)		if (this->typecheck) {
HXLINE( 183)			bool _hx_tmp;
HXDLIN( 183)			bool _hx_tmp1;
HXDLIN( 183)			bool _hx_tmp2;
HXDLIN( 183)			if (!(::hscriptBase::Tools_obj::compatibleWithEachOther(ftype,stype))) {
HXLINE( 183)				_hx_tmp2 = (ftype != stype);
            			}
            			else {
HXLINE( 183)				_hx_tmp2 = false;
            			}
HXDLIN( 183)			if (_hx_tmp2) {
HXLINE( 183)				_hx_tmp1 = (ftype != HX_("Anon",6c,b7,4a,2b));
            			}
            			else {
HXLINE( 183)				_hx_tmp1 = false;
            			}
HXDLIN( 183)			if (_hx_tmp1) {
HXLINE( 183)				_hx_tmp = !(::hscriptBase::Tools_obj::compatibleWithEachOtherObjects(cl,clN));
            			}
            			else {
HXLINE( 183)				_hx_tmp = false;
            			}
HXDLIN( 183)			if (_hx_tmp) {
HXLINE( 183)				if (!(this->resumeError)) {
HXLINE( 183)					 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EUnmatchingType(ftype,stype,name),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 183)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            				}
            			}
            		}
HXLINE( 184)		this->variables->set(name,v);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,setVar,(void))

 ::Dynamic Interp_obj::assign( ::Dynamic e1, ::Dynamic e2){
            	HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_187_assign)
HXLINE( 188)		 ::Dynamic v = this->expr(e2,null());
HXLINE( 189)		{
HXLINE( 189)			 ::hscriptBase::ExprDef _g = e1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 189)			switch((int)(_g->_hx_getIndex())){
            				case (int)1: {
HXLINE( 190)					::String id = _g->_hx_getString(0);
HXDLIN( 190)					 ::Dynamic f = _g->_hx_getObject(1);
HXDLIN( 190)					{
HXLINE( 191)						bool _hx_tmp;
HXDLIN( 191)						if (::hx::IsNotNull( this->locals->get(id) )) {
HXLINE( 191)							_hx_tmp = ( (bool)(this->locals->get(id)->__Field(HX_("isFinal",2c,03,20,9d),::hx::paccDynamic)) );
            						}
            						else {
HXLINE( 191)							_hx_tmp = false;
            						}
HXDLIN( 191)						if (_hx_tmp) {
HXLINE( 192)							if (this->resumeError) {
HXLINE( 192)								return null();
            							}
            							else {
HXLINE( 192)								 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EInvalidFinal(id),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 192)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            							}
            						}
HXLINE( 193)						 ::Dynamic l = this->locals->get(id);
HXLINE( 194)						if (::hx::IsNull( l )) {
HXLINE( 196)							if (!(this->variables->exists(id))) {
HXLINE( 197)								if (!(this->resumeError)) {
HXLINE( 197)									 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::ECustom((HX_("Expected var or final for ",3d,a7,df,e2) + id)),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 197)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            								}
            							}
HXLINE( 198)							bool _hx_tmp;
HXDLIN( 198)							if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(this->variables->get(id)),::ValueType_obj::TFunction_dyn() )) {
HXLINE( 198)								_hx_tmp = !(this->dynamicFuncs->exists(id));
            							}
            							else {
HXLINE( 198)								_hx_tmp = false;
            							}
HXDLIN( 198)							if (_hx_tmp) {
HXLINE( 199)								if (!(this->resumeError)) {
HXLINE( 199)									 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EFunctionAssign(id),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 199)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            								}
            							}
HXLINE( 200)							this->setVar(id,v);
            						}
            						else {
HXLINE( 203)							 ::hscriptBase::CType t = l->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXLINE( 204)							if (::hx::IsNotNull( t )) {
HXLINE( 206)								::String ftype = ::hscriptBase::Tools_obj::ctToType(l->__Field(HX_("t",74,00,00,00),::hx::paccDynamic));
HXLINE( 207)								::String stype = ::hscriptBase::Tools_obj::getType(v,null());
HXLINE( 208)								 ::Dynamic cl = this->variables->get(ftype);
HXLINE( 210)								::String clN = ::hscriptBase::Tools_obj::getType(v,true);
HXLINE( 211)								if (this->typecheck) {
HXLINE( 212)									bool _hx_tmp;
HXDLIN( 212)									bool _hx_tmp1;
HXDLIN( 212)									bool _hx_tmp2;
HXDLIN( 212)									if (!(::hscriptBase::Tools_obj::compatibleWithEachOther(ftype,stype))) {
HXLINE( 212)										_hx_tmp2 = (ftype != stype);
            									}
            									else {
HXLINE( 212)										_hx_tmp2 = false;
            									}
HXDLIN( 212)									if (_hx_tmp2) {
HXLINE( 212)										_hx_tmp1 = (ftype != HX_("Anon",6c,b7,4a,2b));
            									}
            									else {
HXLINE( 212)										_hx_tmp1 = false;
            									}
HXDLIN( 212)									if (_hx_tmp1) {
HXLINE( 212)										_hx_tmp = !(::hscriptBase::Tools_obj::compatibleWithEachOtherObjects(cl,clN));
            									}
            									else {
HXLINE( 212)										_hx_tmp = false;
            									}
HXDLIN( 212)									if (_hx_tmp) {
HXLINE( 212)										if (!(this->resumeError)) {
HXLINE( 212)											 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EUnmatchingType(ftype,stype,id),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 212)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            										}
            									}
            								}
            							}
HXLINE( 214)							bool _hx_tmp;
HXDLIN( 214)							bool _hx_tmp1;
HXDLIN( 214)							if (::hx::IsPointerEq( ::Type_obj::_hx_typeof( ::Dynamic(l->__Field(HX_("r",72,00,00,00),::hx::paccDynamic))),::ValueType_obj::TFunction_dyn() )) {
HXLINE( 214)								_hx_tmp1 = ::hx::IsNotNull( l->__Field(HX_("dynamicFunc",63,e2,52,69),::hx::paccDynamic) );
            							}
            							else {
HXLINE( 214)								_hx_tmp1 = false;
            							}
HXDLIN( 214)							if (_hx_tmp1) {
HXLINE( 214)								_hx_tmp = !(( (bool)(l->__Field(HX_("dynamicFunc",63,e2,52,69),::hx::paccDynamic)) ));
            							}
            							else {
HXLINE( 214)								_hx_tmp = false;
            							}
HXDLIN( 214)							if (_hx_tmp) {
HXLINE( 215)								if (!(this->resumeError)) {
HXLINE( 215)									 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EFunctionAssign(id),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 215)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            								}
            							}
HXLINE( 216)							l->__SetField(HX_("r",72,00,00,00),v,::hx::paccDynamic);
            						}
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 218)					 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 218)					::String f = _g->_hx_getString(1);
HXLINE( 219)					v = this->set(this->expr(e,null()),f,v);
            				}
            				break;
            				case (int)18: {
HXLINE( 220)					 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 220)					 ::Dynamic index = _g->_hx_getObject(1);
HXDLIN( 220)					{
HXLINE( 221)						 ::Dynamic arr = this->expr(e,null());
HXLINE( 222)						 ::Dynamic index1 = this->expr(index,null());
HXLINE( 223)						if (::Std_obj::isOfType(arr,::hx::ClassOf< ::haxe::IMap >())) {
HXLINE( 224)							::haxe::IMap_obj::set( ::hx::interface_check(arr,0x09c2bd39),index1,v);
            						}
            						else {
HXLINE( 227)							arr->__SetItem(( (int)(index1) ),v);
            						}
            					}
            				}
            				break;
            				default:{
HXLINE( 231)					if (!(this->resumeError)) {
HXLINE( 231)						 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EInvalidOp(HX_("=",3d,00,00,00)),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 231)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            					}
            				}
            			}
            		}
HXLINE( 233)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,assign,return )

void Interp_obj::assignOp(::String op, ::Dynamic fop){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,::String,op, ::hscriptBase::Interp,me, ::Dynamic,fop) HXARGC(2)
            		 ::Dynamic _hx_run( ::Dynamic e1, ::Dynamic e2){
            			HX_STACKFRAME(&_hx_pos_23fee00e02910bec_238_assignOp)
HXLINE( 238)			return me->evalAssignOp(op,fop,e1,e2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_23fee00e02910bec_236_assignOp)
HXLINE( 237)		 ::hscriptBase::Interp me = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 238)		this->binops->set(op, ::Dynamic(new _hx_Closure_0(op,me,fop)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,assignOp,(void))

 ::Dynamic Interp_obj::evalAssignOp(::String op, ::Dynamic fop, ::Dynamic e1, ::Dynamic e2){
            	HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_241_evalAssignOp)
HXLINE( 242)		 ::Dynamic v;
HXLINE( 243)		{
HXLINE( 243)			 ::hscriptBase::ExprDef _g = e1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 243)			switch((int)(_g->_hx_getIndex())){
            				case (int)1: {
HXLINE( 244)					 ::Dynamic _g1 = _g->_hx_getObject(1);
HXDLIN( 244)					{
HXLINE( 244)						::String id = _g->_hx_getString(0);
HXDLIN( 244)						{
HXLINE( 245)							 ::Dynamic l = this->locals->get(id);
HXLINE( 246)							 ::Dynamic v1 = this->expr(e1,null());
HXDLIN( 246)							v = fop(v1,this->expr(e2,null()));
HXLINE( 247)							if (::hx::IsNull( l )) {
HXLINE( 248)								this->setVar(id,v);
            							}
            							else {
HXLINE( 250)								l->__SetField(HX_("r",72,00,00,00),v,::hx::paccDynamic);
            							}
            						}
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 251)					 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 251)					::String f = _g->_hx_getString(1);
HXDLIN( 251)					{
HXLINE( 252)						 ::Dynamic obj = this->expr(e,null());
HXLINE( 253)						 ::Dynamic v1 = this->get(obj,f);
HXDLIN( 253)						v = fop(v1,this->expr(e2,null()));
HXLINE( 254)						v = this->set(obj,f,v);
            					}
            				}
            				break;
            				case (int)18: {
HXLINE( 255)					 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 255)					 ::Dynamic index = _g->_hx_getObject(1);
HXDLIN( 255)					{
HXLINE( 256)						 ::Dynamic arr = this->expr(e,null());
HXLINE( 257)						 ::Dynamic index1 = this->expr(index,null());
HXLINE( 258)						if (::Std_obj::isOfType(arr,::hx::ClassOf< ::haxe::IMap >())) {
HXLINE( 259)							 ::Dynamic v1 = ::haxe::IMap_obj::get( ::hx::interface_check(arr,0x09c2bd39),index1);
HXDLIN( 259)							v = fop(v1,this->expr(e2,null()));
HXLINE( 260)							::haxe::IMap_obj::set( ::hx::interface_check(arr,0x09c2bd39),index1,v);
            						}
            						else {
HXLINE( 263)							 ::Dynamic arr1 = arr->__GetItem(( (int)(index1) ));
HXDLIN( 263)							v = fop(arr1,this->expr(e2,null()));
HXLINE( 264)							arr->__SetItem(( (int)(index1) ),v);
            						}
            					}
            				}
            				break;
            				default:{
HXLINE( 267)					if (this->resumeError) {
HXLINE( 267)						return null();
            					}
            					else {
HXLINE( 267)						 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EInvalidOp(op),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 267)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            					}
            				}
            			}
            		}
HXLINE( 269)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Interp_obj,evalAssignOp,return )

 ::Dynamic Interp_obj::increment( ::Dynamic e,bool prefix,int delta){
            	HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_272_increment)
HXLINE( 274)		this->curExpr = e;
HXLINE( 275)		 ::hscriptBase::ExprDef e1 = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXLINE( 277)		switch((int)(e1->_hx_getIndex())){
            			case (int)1: {
HXLINE( 278)				 ::Dynamic _g = e1->_hx_getObject(1);
HXDLIN( 278)				::String id = e1->_hx_getString(0);
HXLINE( 279)				 ::Dynamic l = this->locals->get(id);
HXLINE( 280)				 ::Dynamic v;
HXDLIN( 280)				if (::hx::IsNull( l )) {
HXLINE( 280)					v = this->resolve(id);
            				}
            				else {
HXLINE( 280)					v =  ::Dynamic(l->__Field(HX_("r",72,00,00,00),::hx::paccDynamic));
            				}
HXLINE( 281)				if (prefix) {
HXLINE( 282)					v = (v + delta);
HXLINE( 283)					if (::hx::IsNull( l )) {
HXLINE( 283)						this->setVar(id,v);
            					}
            					else {
HXLINE( 283)						l->__SetField(HX_("r",72,00,00,00),v,::hx::paccDynamic);
            					}
            				}
            				else {
HXLINE( 285)					if (::hx::IsNull( l )) {
HXLINE( 285)						this->setVar(id,(v + delta));
            					}
            					else {
HXLINE( 285)						l->__SetField(HX_("r",72,00,00,00),(v + delta),::hx::paccDynamic);
            					}
            				}
HXLINE( 286)				return v;
            			}
            			break;
            			case (int)6: {
HXLINE( 287)				 ::Dynamic e = e1->_hx_getObject(0);
HXDLIN( 287)				::String f = e1->_hx_getString(1);
HXLINE( 288)				 ::Dynamic obj = this->expr(e,null());
HXLINE( 289)				 ::Dynamic v = this->get(obj,f);
HXLINE( 290)				if (prefix) {
HXLINE( 291)					v = (v + delta);
HXLINE( 292)					this->set(obj,f,v);
            				}
            				else {
HXLINE( 294)					this->set(obj,f,(v + delta));
            				}
HXLINE( 295)				return v;
            			}
            			break;
            			case (int)18: {
HXLINE( 296)				 ::Dynamic e = e1->_hx_getObject(0);
HXDLIN( 296)				 ::Dynamic index = e1->_hx_getObject(1);
HXLINE( 297)				 ::Dynamic arr = this->expr(e,null());
HXLINE( 298)				 ::Dynamic index1 = this->expr(index,null());
HXLINE( 299)				if (::Std_obj::isOfType(arr,::hx::ClassOf< ::haxe::IMap >())) {
HXLINE( 300)					int v = ( (int)(::haxe::IMap_obj::get( ::hx::interface_check(arr,0x09c2bd39),index1)) );
HXLINE( 301)					if (prefix) {
HXLINE( 302)						v = (v + delta);
HXLINE( 303)						::haxe::IMap_obj::set( ::hx::interface_check(arr,0x09c2bd39),index1,v);
            					}
            					else {
HXLINE( 306)						::haxe::IMap_obj::set( ::hx::interface_check(arr,0x09c2bd39),index1,(v + delta));
            					}
HXLINE( 308)					return v;
            				}
            				else {
HXLINE( 311)					int v = ( (int)(arr->__GetItem(( (int)(index1) ))) );
HXLINE( 312)					if (prefix) {
HXLINE( 313)						v = (v + delta);
HXLINE( 314)						arr->__SetItem(( (int)(index1) ),v);
            					}
            					else {
HXLINE( 316)						arr->__SetItem(( (int)(index1) ),(v + delta));
            					}
HXLINE( 317)					return v;
            				}
            			}
            			break;
            			default:{
HXLINE( 320)				::String e;
HXDLIN( 320)				if ((delta > 0)) {
HXLINE( 320)					e = HX_("++",a0,25,00,00);
            				}
            				else {
HXLINE( 320)					e = HX_("--",60,27,00,00);
            				}
HXDLIN( 320)				if (this->resumeError) {
HXLINE( 320)					return null();
            				}
            				else {
HXLINE( 320)					 ::hscriptBase::Error e1 =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EInvalidOp(e),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 320)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e1));
            				}
            			}
            		}
HXLINE( 277)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,increment,return )

 ::Dynamic Interp_obj::execute( ::Dynamic expr){
            	HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_324_execute)
HXLINE( 325)		this->depth = 0;
HXLINE( 327)		this->locals =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 331)		this->declared = ::Array_obj< ::Dynamic>::__new();
HXLINE( 332)		 ::Dynamic r = this->exprReturn(expr,null());
HXLINE( 333)		{
HXLINE( 333)			 ::hscriptBase::ExprDef _g = expr->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 333)			if ((_g->_hx_getIndex() == 5)) {
HXLINE( 334)				::Array< ::Dynamic> e = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 334)				{
HXLINE( 335)					int imports = 0;
HXLINE( 336)					int pack = 0;
HXLINE( 337)					{
HXLINE( 337)						int _g1 = 0;
HXDLIN( 337)						while((_g1 < e->length)){
HXLINE( 337)							 ::Dynamic i = e->__get(_g1);
HXDLIN( 337)							_g1 = (_g1 + 1);
HXLINE( 338)							{
HXLINE( 338)								 ::hscriptBase::ExprDef _g = i->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 338)								switch((int)(_g->_hx_getIndex())){
            									case (int)28: {
HXLINE( 346)										 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 346)										::String _g2 = _g->_hx_getString(1);
HXDLIN( 346)										::cpp::VirtualArray _g3 = _g->_hx_getObject(2).StaticCast< ::cpp::VirtualArray >();
HXDLIN( 346)										{
HXLINE( 347)											if ((e->indexOf(i,null()) > (imports + pack))) {
HXLINE( 348)												if (!(this->resumeError)) {
HXLINE( 348)													 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::ECustom(HX_("Unexpected import",b4,ef,ce,52)),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 348)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            												}
            											}
HXLINE( 349)											imports = (imports + 1);
            										}
            									}
            									break;
            									case (int)29: {
HXLINE( 340)										::String _g1 = _g->_hx_getString(0);
HXDLIN( 340)										{
HXLINE( 341)											if ((e->indexOf(i,null()) > 0)) {
HXLINE( 342)												if (!(this->resumeError)) {
HXLINE( 342)													 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::ECustom(HX_("Unexpected package",57,62,29,fa)),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 342)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            												}
            											}
            											else {
HXLINE( 343)												if ((pack > 1)) {
HXLINE( 344)													if (!(this->resumeError)) {
HXLINE( 344)														 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::ECustom(HX_("Multiple packages declared",5d,27,ee,aa)),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 344)														HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            													}
            												}
            											}
HXLINE( 345)											pack = (pack + 1);
            										}
            									}
            									break;
            									default:{
            									}
            								}
            							}
            						}
            					}
HXLINE( 353)					if ((pack > 1)) {
HXLINE( 354)						if (!(this->resumeError)) {
HXLINE( 354)							 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::ECustom(((HX_("Multiple packages (",65,c3,e1,15) + pack) + HX_(") declared",d1,ab,d6,ee))),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 354)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            						}
            					}
            				}
            			}
            		}
HXLINE( 357)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,execute,return )

 ::Dynamic Interp_obj::exprReturn( ::Dynamic e, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_23fee00e02910bec_361_exprReturn)
HXDLIN( 361)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 362)			return this->expr(e,p);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 363)				{
HXLINE( 363)					null();
            				}
HXDLIN( 363)				 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 361)				if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::hscriptBase::_Interp::Stop >())) {
HXLINE( 363)					 ::hscriptBase::_Interp::Stop e = _g1;
HXLINE( 364)					switch((int)(e->_hx_getIndex())){
            						case (int)0: {
HXLINE( 365)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid break",b6,ee,24,9d)));
            						}
            						break;
            						case (int)1: {
HXLINE( 366)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid continue",d0,6a,b7,3f)));
            						}
            						break;
            						case (int)2: {
HXLINE( 368)							 ::Dynamic v = this->returnValue;
HXLINE( 369)							this->returnValue = null();
HXLINE( 370)							return v;
            						}
            						break;
            					}
            				}
            				else {
HXDLIN( 361)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXDLIN( 361)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,exprReturn,return )

 ::haxe::ds::StringMap Interp_obj::duplicate( ::haxe::ds::StringMap h){
            	HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_376_duplicate)
HXLINE( 378)		 ::haxe::ds::StringMap h2 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 382)		{
HXLINE( 382)			 ::Dynamic k = h->keys();
HXDLIN( 382)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 382)				::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 383)				h2->set(k1,h->get(k1));
            			}
            		}
HXLINE( 384)		return h2;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,duplicate,return )

void Interp_obj::restore(int old){
            	HX_STACKFRAME(&_hx_pos_23fee00e02910bec_388_restore)
HXDLIN( 388)		while((this->declared->length > old)){
HXLINE( 389)			 ::Dynamic d = this->declared->pop();
HXLINE( 390)			this->locals->set(( (::String)(d->__Field(HX_("n",6e,00,00,00),::hx::paccDynamic)) ), ::Dynamic(d->__Field(HX_("old",a7,98,54,00),::hx::paccDynamic)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,restore,(void))

 ::Dynamic Interp_obj::error( ::hscriptBase::ErrorDef e,::hx::Null< bool >  __o_rethrow){
            		bool rethrow = __o_rethrow.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_394_error)
HXLINE( 395)		if (this->resumeError) {
HXLINE( 395)			return null();
            		}
HXLINE( 396)		 ::hscriptBase::Error e1 =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,e,( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXLINE( 397)		if (rethrow) {
HXLINE( 397)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e1));
            		}
            		else {
HXLINE( 397)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e1));
            		}
HXDLIN( 397)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,error,return )

void Interp_obj::rethrow( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_23fee00e02910bec_405_rethrow)
HXDLIN( 405)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,rethrow,(void))

 ::Dynamic Interp_obj::resolve(::String id){
            	HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_409_resolve)
HXLINE( 410)		 ::Dynamic l = this->locals->get(id);
HXLINE( 411)		if (::hx::IsNotNull( l )) {
HXLINE( 412)			return  ::Dynamic(l->__Field(HX_("r",72,00,00,00),::hx::paccDynamic));
            		}
HXLINE( 413)		 ::Dynamic v = this->variables->get(id);
HXLINE( 414)		bool _hx_tmp;
HXDLIN( 414)		if (::hx::IsNull( v )) {
HXLINE( 414)			_hx_tmp = !(this->variables->exists(id));
            		}
            		else {
HXLINE( 414)			_hx_tmp = false;
            		}
HXDLIN( 414)		if (_hx_tmp) {
HXLINE( 415)			if (!(this->resumeError)) {
HXLINE( 415)				 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EUnknownVariable(id),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 415)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            			}
            		}
HXLINE( 416)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,resolve,return )

 ::Dynamic Interp_obj::expr( ::Dynamic e, ::Dynamic trk){
            	HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_419_expr)
HXDLIN( 419)		 ::hscriptBase::Interp _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 421)		this->curExpr = e;
HXLINE( 422)		 ::hscriptBase::ExprDef e1 = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXLINE( 424)		switch((int)(e1->_hx_getIndex())){
            			case (int)0: {
HXLINE( 425)				 ::hscriptBase::Const c = e1->_hx_getObject(0).StaticCast<  ::hscriptBase::Const >();
HXLINE( 426)				switch((int)(c->_hx_getIndex())){
            					case (int)0: {
HXLINE( 427)						int v = c->_hx_getInt(0);
HXDLIN( 427)						return v;
            					}
            					break;
            					case (int)1: {
HXLINE( 428)						Float f = c->_hx_getFloat(0);
HXDLIN( 428)						return f;
            					}
            					break;
            					case (int)2: {
HXLINE( 429)						 ::Dynamic _g = c->_hx_getObject(1);
HXDLIN( 429)						::String s = c->_hx_getString(0);
HXDLIN( 429)						return s;
            					}
            					break;
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 434)				 ::Dynamic _g = e1->_hx_getObject(1);
HXDLIN( 434)				::String id = e1->_hx_getString(0);
HXLINE( 435)				return this->resolve(id);
            			}
            			break;
            			case (int)2: {
HXLINE( 436)				::String n = e1->_hx_getString(0);
HXDLIN( 436)				 ::hscriptBase::CType t = e1->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 436)				 ::Dynamic e = e1->_hx_getObject(2);
HXDLIN( 436)				 ::Dynamic tc = e1->_hx_getObject(3);
HXDLIN( 436)				::Array< ::String > g = e1->_hx_getObject(4).StaticCast< ::Array< ::String > >();
HXLINE( 437)				bool _hx_tmp;
HXDLIN( 437)				bool _hx_tmp1;
HXDLIN( 437)				if (::hx::IsNotNull( trk )) {
HXLINE( 437)					_hx_tmp1 = ( (bool)(trk->__Field(HX_("v",76,00,00,00),::hx::paccDynamic)) );
            				}
            				else {
HXLINE( 437)					_hx_tmp1 = false;
            				}
HXDLIN( 437)				if (_hx_tmp1) {
HXLINE( 437)					_hx_tmp = ::Array_obj< ::String >::fromData( _hx_array_data_88b7bafe_79,3)->contains( ::Dynamic(trk->__Field(HX_("f",66,00,00,00),::hx::paccDynamic)));
            				}
            				else {
HXLINE( 437)					_hx_tmp = false;
            				}
HXDLIN( 437)				if (_hx_tmp) {
HXLINE( 438)					if (!(this->resumeError)) {
HXLINE( 438)						 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EUnexpected( ::Dynamic(trk->__Field(HX_("n",6e,00,00,00),::hx::paccDynamic))),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 438)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            					}
            				}
HXLINE( 439)				bool pf = false;
HXLINE( 440)				if (::hx::IsNotNull( tc )) {
HXLINE( 441)					bool pf1;
HXDLIN( 441)					if (::hx::IsNotEq( tc->__Field(HX_("f",66,00,00,00),::hx::paccDynamic),HX_("publicField",51,7f,6d,5c) )) {
HXLINE( 441)						pf1 = ::hx::IsEq( tc->__Field(HX_("f",66,00,00,00),::hx::paccDynamic),HX_("inlineVar",0e,0a,50,38) );
            					}
            					else {
HXLINE( 441)						pf1 = true;
            					}
HXDLIN( 441)					if (!(pf1)) {
HXLINE( 441)						pf = ::hx::IsEq( tc->__Field(HX_("f",66,00,00,00),::hx::paccDynamic),HX_("privateField",b7,cc,40,ba) );
            					}
            					else {
HXLINE( 441)						pf = true;
            					}
HXLINE( 442)					if (pf) {
HXLINE( 442)						pf = ( (bool)(tc->__Field(HX_("v",76,00,00,00),::hx::paccDynamic)) );
            					}
            					else {
HXLINE( 442)						pf = false;
            					}
            				}
HXLINE( 444)				bool _hx_tmp2;
HXDLIN( 444)				if (::hx::IsNotNull( t )) {
HXLINE( 444)					_hx_tmp2 = ::hx::IsNotNull( e );
            				}
            				else {
HXLINE( 444)					_hx_tmp2 = false;
            				}
HXDLIN( 444)				if (_hx_tmp2) {
HXLINE( 446)					 ::Dynamic e1 = this->expr(e,null());
HXLINE( 447)					::String ftype = ::hscriptBase::Tools_obj::ctToType(t);
HXLINE( 448)					::String stype = ::hscriptBase::Tools_obj::getType(e1,null());
HXLINE( 449)					 ::Dynamic cl = this->variables->get(ftype);
HXLINE( 450)					::String clN = ::hscriptBase::Tools_obj::getType(e1,true);
HXLINE( 452)					if (this->typecheck) {
HXLINE( 453)						bool _hx_tmp;
HXDLIN( 453)						bool _hx_tmp1;
HXDLIN( 453)						bool _hx_tmp2;
HXDLIN( 453)						if (!(::hscriptBase::Tools_obj::compatibleWithEachOther(ftype,stype))) {
HXLINE( 453)							_hx_tmp2 = (ftype != stype);
            						}
            						else {
HXLINE( 453)							_hx_tmp2 = false;
            						}
HXDLIN( 453)						if (_hx_tmp2) {
HXLINE( 453)							_hx_tmp1 = (ftype != HX_("Anon",6c,b7,4a,2b));
            						}
            						else {
HXLINE( 453)							_hx_tmp1 = false;
            						}
HXDLIN( 453)						if (_hx_tmp1) {
HXLINE( 453)							_hx_tmp = !(::hscriptBase::Tools_obj::compatibleWithEachOtherObjects(cl,clN));
            						}
            						else {
HXLINE( 453)							_hx_tmp = false;
            						}
HXDLIN( 453)						if (_hx_tmp) {
HXLINE( 453)							if (!(this->resumeError)) {
HXLINE( 453)								 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EUnmatchingType(ftype,stype,n),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 453)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            							}
            						}
            					}
            				}
HXLINE( 455)				if (!(pf)) {
HXLINE( 456)					::Array< ::Dynamic> _hx_tmp = this->declared;
HXDLIN( 456)					_hx_tmp->push( ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("n",6e,00,00,00),n)
            						->setFixed(1,HX_("old",a7,98,54,00),this->locals->get(n))));
HXLINE( 457)					{
HXLINE( 457)						::Dynamic this1 = this->locals;
HXDLIN( 457)						 ::Dynamic value;
HXDLIN( 457)						if (::hx::IsNull( e )) {
HXLINE( 457)							value = null();
            						}
            						else {
HXLINE( 457)							value = this->expr(e,null());
            						}
HXDLIN( 457)						( ( ::haxe::ds::StringMap)(this1) )->set(n, ::Dynamic(::hx::Anon_obj::Create(4)
            							->setFixed(0,HX_("isFinal",2c,03,20,9d),false)
            							->setFixed(1,HX_("isInline",e3,65,a9,f1),null())
            							->setFixed(2,HX_("r",72,00,00,00),value)
            							->setFixed(3,HX_("t",74,00,00,00),t)));
            					}
            				}
            				else {
HXLINE( 459)					if (this->variables->exists(n)) {
HXLINE( 459)						if (!(this->resumeError)) {
HXLINE( 459)							 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EDuplicate(n),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 459)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            						}
            					}
HXLINE( 460)					{
HXLINE( 460)						::Dynamic this1 = this->locals;
HXDLIN( 460)						 ::Dynamic value;
HXDLIN( 460)						if (::hx::IsNull( e )) {
HXLINE( 460)							value = null();
            						}
            						else {
HXLINE( 460)							value = this->expr(e,null());
            						}
HXDLIN( 460)						( ( ::haxe::ds::StringMap)(this1) )->set(n, ::Dynamic(::hx::Anon_obj::Create(4)
            							->setFixed(0,HX_("isFinal",2c,03,20,9d),false)
            							->setFixed(1,HX_("isInline",e3,65,a9,f1),null())
            							->setFixed(2,HX_("r",72,00,00,00),value)
            							->setFixed(3,HX_("t",74,00,00,00),t)));
            					}
HXLINE( 461)					{
HXLINE( 461)						::Dynamic this2 = this->variables;
HXDLIN( 461)						 ::Dynamic value1;
HXDLIN( 461)						if (::hx::IsNull( e )) {
HXLINE( 461)							value1 = null();
            						}
            						else {
HXLINE( 461)							value1 = this->expr(e,null());
            						}
HXDLIN( 461)						( ( ::haxe::ds::StringMap)(this2) )->set(n,value1);
            					}
            				}
HXLINE( 463)				return null();
            			}
            			break;
            			case (int)3: {
HXLINE( 464)				::String n = e1->_hx_getString(0);
HXDLIN( 464)				 ::hscriptBase::CType t = e1->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 464)				 ::Dynamic e = e1->_hx_getObject(2);
HXDLIN( 464)				 ::Dynamic tc = e1->_hx_getObject(3);
HXLINE( 465)				bool _hx_tmp;
HXDLIN( 465)				bool _hx_tmp1;
HXDLIN( 465)				if (::hx::IsNotNull( trk )) {
HXLINE( 465)					_hx_tmp1 = ( (bool)(trk->__Field(HX_("v",76,00,00,00),::hx::paccDynamic)) );
            				}
            				else {
HXLINE( 465)					_hx_tmp1 = false;
            				}
HXDLIN( 465)				if (_hx_tmp1) {
HXLINE( 465)					_hx_tmp = ::Array_obj< ::String >::fromData( _hx_array_data_88b7bafe_80,3)->contains( ::Dynamic(trk->__Field(HX_("f",66,00,00,00),::hx::paccDynamic)));
            				}
            				else {
HXLINE( 465)					_hx_tmp = false;
            				}
HXDLIN( 465)				if (_hx_tmp) {
HXLINE( 466)					if (!(this->resumeError)) {
HXLINE( 466)						 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EUnexpected( ::Dynamic(trk->__Field(HX_("n",6e,00,00,00),::hx::paccDynamic))),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 466)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            					}
            				}
HXLINE( 467)				bool pf = false;
HXLINE( 468)				if (::hx::IsNotNull( tc )) {
HXLINE( 469)					bool pf1;
HXDLIN( 469)					if (::hx::IsNotEq( tc->__Field(HX_("f",66,00,00,00),::hx::paccDynamic),HX_("publicField",51,7f,6d,5c) )) {
HXLINE( 469)						pf1 = ::hx::IsEq( tc->__Field(HX_("f",66,00,00,00),::hx::paccDynamic),HX_("inlineVar",0e,0a,50,38) );
            					}
            					else {
HXLINE( 469)						pf1 = true;
            					}
HXDLIN( 469)					if (!(pf1)) {
HXLINE( 469)						pf = ::hx::IsEq( tc->__Field(HX_("f",66,00,00,00),::hx::paccDynamic),HX_("privateField",b7,cc,40,ba) );
            					}
            					else {
HXLINE( 469)						pf = true;
            					}
HXLINE( 470)					if (pf) {
HXLINE( 470)						pf = ( (bool)(tc->__Field(HX_("v",76,00,00,00),::hx::paccDynamic)) );
            					}
            					else {
HXLINE( 470)						pf = false;
            					}
            				}
HXLINE( 472)				bool _hx_tmp2;
HXDLIN( 472)				if (::hx::IsNotNull( t )) {
HXLINE( 472)					_hx_tmp2 = ::hx::IsNotNull( e );
            				}
            				else {
HXLINE( 472)					_hx_tmp2 = false;
            				}
HXDLIN( 472)				if (_hx_tmp2) {
HXLINE( 474)					 ::Dynamic e1 = this->expr(e,null());
HXLINE( 475)					::String ftype = ::hscriptBase::Tools_obj::ctToType(t);
HXLINE( 476)					::String stype = ::hscriptBase::Tools_obj::getType(e1,null());
HXLINE( 477)					 ::Dynamic cl = this->variables->get(ftype);
HXLINE( 478)					::String clN = ::hscriptBase::Tools_obj::getType(e1,true);
HXLINE( 480)					if (this->typecheck) {
HXLINE( 481)						bool _hx_tmp;
HXDLIN( 481)						bool _hx_tmp1;
HXDLIN( 481)						bool _hx_tmp2;
HXDLIN( 481)						if (!(::hscriptBase::Tools_obj::compatibleWithEachOther(ftype,stype))) {
HXLINE( 481)							_hx_tmp2 = (ftype != stype);
            						}
            						else {
HXLINE( 481)							_hx_tmp2 = false;
            						}
HXDLIN( 481)						if (_hx_tmp2) {
HXLINE( 481)							_hx_tmp1 = (ftype != HX_("Anon",6c,b7,4a,2b));
            						}
            						else {
HXLINE( 481)							_hx_tmp1 = false;
            						}
HXDLIN( 481)						if (_hx_tmp1) {
HXLINE( 481)							_hx_tmp = !(::hscriptBase::Tools_obj::compatibleWithEachOtherObjects(cl,clN));
            						}
            						else {
HXLINE( 481)							_hx_tmp = false;
            						}
HXDLIN( 481)						if (_hx_tmp) {
HXLINE( 481)							if (!(this->resumeError)) {
HXLINE( 481)								 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EUnmatchingType(ftype,stype,n),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 481)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            							}
            						}
            					}
            				}
HXLINE( 483)				if (!(pf)) {
HXLINE( 484)					::Array< ::Dynamic> _hx_tmp = this->declared;
HXDLIN( 484)					_hx_tmp->push( ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("n",6e,00,00,00),n)
            						->setFixed(1,HX_("old",a7,98,54,00),this->locals->get(n))));
HXLINE( 485)					{
HXLINE( 485)						::Dynamic this1 = this->locals;
HXDLIN( 485)						 ::Dynamic value;
HXDLIN( 485)						if (::hx::IsNull( e )) {
HXLINE( 485)							value = null();
            						}
            						else {
HXLINE( 485)							value = this->expr(e,null());
            						}
HXDLIN( 485)						( ( ::haxe::ds::StringMap)(this1) )->set(n, ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("isFinal",2c,03,20,9d),true)
            							->setFixed(1,HX_("r",72,00,00,00),value)));
            					}
            				}
            				else {
HXLINE( 488)					if (this->variables->exists(n)) {
HXLINE( 488)						if (!(this->resumeError)) {
HXLINE( 488)							 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EDuplicate(n),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 488)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            						}
            					}
HXLINE( 489)					{
HXLINE( 489)						::Dynamic this1 = this->locals;
HXDLIN( 489)						 ::Dynamic value;
HXDLIN( 489)						if (::hx::IsNull( e )) {
HXLINE( 489)							value = null();
            						}
            						else {
HXLINE( 489)							value = this->expr(e,null());
            						}
HXDLIN( 489)						( ( ::haxe::ds::StringMap)(this1) )->set(n, ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("isFinal",2c,03,20,9d),true)
            							->setFixed(1,HX_("r",72,00,00,00),value)));
            					}
HXLINE( 490)					{
HXLINE( 490)						::Dynamic this2 = this->variables;
HXDLIN( 490)						 ::Dynamic value1;
HXDLIN( 490)						if (::hx::IsNull( e )) {
HXLINE( 490)							value1 = null();
            						}
            						else {
HXLINE( 490)							value1 = this->expr(e,null());
            						}
HXDLIN( 490)						( ( ::haxe::ds::StringMap)(this2) )->set(n,value1);
            					}
            				}
HXLINE( 492)				return null();
            			}
            			break;
            			case (int)4: {
HXLINE( 493)				 ::Dynamic e = e1->_hx_getObject(0);
HXLINE( 494)				 ::Dynamic trk1;
HXDLIN( 494)				 ::hscriptBase::ExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 494)				switch((int)(_g->_hx_getIndex())){
            					case (int)2: {
HXLINE( 495)						::Array< ::String > _g1 = _g->_hx_getObject(4).StaticCast< ::Array< ::String > >();
HXDLIN( 495)						::String n = _g->_hx_getString(0);
HXDLIN( 495)						 ::hscriptBase::CType t = _g->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 495)						 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN( 495)						 ::Dynamic p = _g->_hx_getObject(3);
HXLINE( 494)						trk1 = p;
            					}
            					break;
            					case (int)3: {
HXLINE( 496)						::String n = _g->_hx_getString(0);
HXDLIN( 496)						 ::hscriptBase::CType t = _g->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 496)						 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN( 496)						 ::Dynamic p = _g->_hx_getObject(3);
HXLINE( 494)						trk1 = p;
            					}
            					break;
            					case (int)5: {
HXLINE( 497)						::Array< ::Dynamic> e = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 498)						 ::Dynamic tr = null();
HXLINE( 499)						if (::hx::IsNotNull( e )) {
HXLINE( 499)							int _g = 0;
HXDLIN( 499)							while((_g < e->length)){
HXLINE( 499)								 ::Dynamic e1 = e->__get(_g);
HXDLIN( 499)								_g = (_g + 1);
HXLINE( 500)								{
HXLINE( 500)									 ::hscriptBase::ExprDef _g1 = e1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 500)									if ((_g1->_hx_getIndex() == 2)) {
HXLINE( 501)										::Array< ::String > _g = _g1->_hx_getObject(4).StaticCast< ::Array< ::String > >();
HXDLIN( 501)										::String n = _g1->_hx_getString(0);
HXDLIN( 501)										 ::hscriptBase::CType t = _g1->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 501)										 ::Dynamic e = _g1->_hx_getObject(2);
HXDLIN( 501)										 ::Dynamic p = _g1->_hx_getObject(3);
HXDLIN( 501)										tr = p;
HXDLIN( 501)										goto _hx_goto_56;
            									}
            									else {
HXLINE( 502)										tr = null();
            									}
            								}
            							}
            							_hx_goto_56:;
            						}
HXLINE( 494)						trk1 = tr;
            					}
            					break;
            					default:{
HXLINE( 494)						trk1 = null();
            					}
            				}
HXLINE( 507)				return this->expr(e,trk1);
            			}
            			break;
            			case (int)5: {
HXLINE( 508)				::Array< ::Dynamic> exprs = e1->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 509)				int old = this->declared->length;
HXLINE( 510)				 ::Dynamic v = null();
HXLINE( 511)				{
HXLINE( 511)					int _g = 0;
HXDLIN( 511)					while((_g < exprs->length)){
HXLINE( 511)						 ::Dynamic e = exprs->__get(_g);
HXDLIN( 511)						_g = (_g + 1);
HXLINE( 512)						 ::Dynamic trk1;
HXDLIN( 512)						 ::hscriptBase::ExprDef _g1 = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 512)						switch((int)(_g1->_hx_getIndex())){
            							case (int)2: {
HXLINE( 513)								::Array< ::String > _g = _g1->_hx_getObject(4).StaticCast< ::Array< ::String > >();
HXDLIN( 513)								::String n = _g1->_hx_getString(0);
HXDLIN( 513)								 ::hscriptBase::CType t = _g1->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 513)								 ::Dynamic e = _g1->_hx_getObject(2);
HXDLIN( 513)								 ::Dynamic p = _g1->_hx_getObject(3);
HXLINE( 512)								trk1 = p;
            							}
            							break;
            							case (int)3: {
HXLINE( 514)								::String n = _g1->_hx_getString(0);
HXDLIN( 514)								 ::hscriptBase::CType t = _g1->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 514)								 ::Dynamic e = _g1->_hx_getObject(2);
HXDLIN( 514)								 ::Dynamic p = _g1->_hx_getObject(3);
HXLINE( 512)								trk1 = p;
            							}
            							break;
            							default:{
HXLINE( 512)								trk1 = null();
            							}
            						}
HXLINE( 517)						v = this->expr(e,null());
            					}
            				}
HXLINE( 519)				this->restore(old);
HXLINE( 520)				return v;
            			}
            			break;
            			case (int)6: {
HXLINE( 521)				 ::Dynamic e = e1->_hx_getObject(0);
HXDLIN( 521)				::String f = e1->_hx_getString(1);
HXLINE( 522)				return this->get(this->expr(e,null()),f);
            			}
            			break;
            			case (int)7: {
HXLINE( 523)				::String op = e1->_hx_getString(0);
HXDLIN( 523)				 ::Dynamic e11 = e1->_hx_getObject(1);
HXDLIN( 523)				 ::Dynamic e2 = e1->_hx_getObject(2);
HXLINE( 524)				 ::Dynamic fop = this->binops->get(op);
HXLINE( 525)				if (::hx::IsNull( fop )) {
HXLINE( 525)					if (!(this->resumeError)) {
HXLINE( 525)						 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EInvalidOp(op),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 525)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            					}
            				}
HXLINE( 526)				return fop(e11,e2);
            			}
            			break;
            			case (int)8: {
HXLINE( 527)				::String op = e1->_hx_getString(0);
HXDLIN( 527)				bool prefix = e1->_hx_getBool(1);
HXDLIN( 527)				 ::Dynamic e = e1->_hx_getObject(2);
HXLINE( 528)				::String _hx_switch_0 = op;
            				if (  (_hx_switch_0==HX_("!",21,00,00,00)) ){
HXLINE( 530)					return ::hx::IsNotEq( this->expr(e,null()),true );
HXDLIN( 530)					goto _hx_goto_58;
            				}
            				if (  (_hx_switch_0==HX_("++",a0,25,00,00)) ){
HXLINE( 534)					return this->increment(e,prefix,1);
HXDLIN( 534)					goto _hx_goto_58;
            				}
            				if (  (_hx_switch_0==HX_("-",2d,00,00,00)) ){
HXLINE( 532)					return -(this->expr(e,null()));
HXDLIN( 532)					goto _hx_goto_58;
            				}
            				if (  (_hx_switch_0==HX_("--",60,27,00,00)) ){
HXLINE( 536)					return this->increment(e,prefix,-1);
HXDLIN( 536)					goto _hx_goto_58;
            				}
            				if (  (_hx_switch_0==HX_("cast",bf,1e,ba,41)) ){
HXLINE( 544)					return this->expr(e,null());
HXDLIN( 544)					goto _hx_goto_58;
            				}
            				if (  (_hx_switch_0==HX_("untyped",71,67,5c,17)) ){
HXLINE( 546)					return this->expr(e,null());
HXDLIN( 546)					goto _hx_goto_58;
            				}
            				if (  (_hx_switch_0==HX_("~",7e,00,00,00)) ){
HXLINE( 541)					return ~(( (int)(this->expr(e,null())) ));
HXDLIN( 541)					goto _hx_goto_58;
            				}
            				/* default */{
HXLINE( 548)					if (!(this->resumeError)) {
HXLINE( 548)						 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EInvalidOp(op),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 548)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            					}
            				}
            				_hx_goto_58:;
            			}
            			break;
            			case (int)9: {
HXLINE( 550)				 ::Dynamic e = e1->_hx_getObject(0);
HXDLIN( 550)				::Array< ::Dynamic> params = e1->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 551)				::String id;
HXDLIN( 551)				 ::hscriptBase::ExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 551)				if ((_g->_hx_getIndex() == 1)) {
HXLINE( 552)					::String v = _g->_hx_getString(0);
HXDLIN( 552)					 ::Dynamic i = _g->_hx_getObject(1);
HXLINE( 551)					id = v;
            				}
            				else {
HXLINE( 551)					id = null();
            				}
HXLINE( 557)				::cpp::VirtualArray args = ::cpp::VirtualArray_obj::__new();
HXLINE( 558)				{
HXLINE( 558)					int _g1 = 0;
HXDLIN( 558)					while((_g1 < params->length)){
HXLINE( 558)						 ::Dynamic p = params->__get(_g1);
HXDLIN( 558)						_g1 = (_g1 + 1);
HXLINE( 559)						args->push(this->expr(p,null()));
            					}
            				}
HXLINE( 561)				 ::hscriptBase::ExprDef _g2 = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 561)				if ((_g2->_hx_getIndex() == 6)) {
HXLINE( 562)					 ::Dynamic e = _g2->_hx_getObject(0);
HXDLIN( 562)					::String f = _g2->_hx_getString(1);
HXLINE( 563)					 ::Dynamic obj = this->expr(e,null());
HXLINE( 564)					if (::hx::IsNull( obj )) {
HXLINE( 564)						if (!(this->resumeError)) {
HXLINE( 564)							 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EInvalidAccess(f),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 564)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            						}
            					}
HXLINE( 565)					return this->fcall(obj,f,args);
            				}
            				else {
HXLINE( 567)					return this->call(null(),this->expr(e,null()),args);
            				}
            			}
            			break;
            			case (int)10: {
HXLINE( 569)				 ::Dynamic econd = e1->_hx_getObject(0);
HXDLIN( 569)				 ::Dynamic e11 = e1->_hx_getObject(1);
HXDLIN( 569)				 ::Dynamic e2 = e1->_hx_getObject(2);
HXLINE( 570)				 ::Dynamic trk1;
HXDLIN( 570)				if (::hx::IsNotNull( e11 )) {
HXLINE( 570)					 ::hscriptBase::ExprDef _g = e11->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 570)					switch((int)(_g->_hx_getIndex())){
            						case (int)2: {
HXLINE( 571)							::Array< ::String > _g1 = _g->_hx_getObject(4).StaticCast< ::Array< ::String > >();
HXDLIN( 571)							::String n = _g->_hx_getString(0);
HXDLIN( 571)							 ::hscriptBase::CType t = _g->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 571)							 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN( 571)							 ::Dynamic p = _g->_hx_getObject(3);
HXLINE( 570)							trk1 = p;
            						}
            						break;
            						case (int)3: {
HXLINE( 572)							::String n = _g->_hx_getString(0);
HXDLIN( 572)							 ::hscriptBase::CType t = _g->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 572)							 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN( 572)							 ::Dynamic p = _g->_hx_getObject(3);
HXLINE( 570)							trk1 = p;
            						}
            						break;
            						case (int)5: {
HXLINE( 573)							::Array< ::Dynamic> e = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 574)							 ::Dynamic tr = null();
HXLINE( 575)							if (::hx::IsNotNull( e )) {
HXLINE( 575)								int _g = 0;
HXDLIN( 575)								while((_g < e->length)){
HXLINE( 575)									 ::Dynamic e1 = e->__get(_g);
HXDLIN( 575)									_g = (_g + 1);
HXLINE( 576)									{
HXLINE( 576)										 ::hscriptBase::ExprDef _g1 = e1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 576)										switch((int)(_g1->_hx_getIndex())){
            											case (int)2: {
HXLINE( 577)												::Array< ::String > _g = _g1->_hx_getObject(4).StaticCast< ::Array< ::String > >();
HXDLIN( 577)												::String n = _g1->_hx_getString(0);
HXDLIN( 577)												 ::hscriptBase::CType t = _g1->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 577)												 ::Dynamic e = _g1->_hx_getObject(2);
HXDLIN( 577)												 ::Dynamic p = _g1->_hx_getObject(3);
HXDLIN( 577)												tr = p;
HXDLIN( 577)												goto _hx_goto_60;
            											}
            											break;
            											case (int)3: {
HXLINE( 578)												::String n = _g1->_hx_getString(0);
HXDLIN( 578)												 ::hscriptBase::CType t = _g1->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 578)												 ::Dynamic e = _g1->_hx_getObject(2);
HXDLIN( 578)												 ::Dynamic p = _g1->_hx_getObject(3);
HXDLIN( 578)												tr = p;
HXDLIN( 578)												goto _hx_goto_60;
            											}
            											break;
            											default:{
HXLINE( 579)												tr = null();
            											}
            										}
            									}
            								}
            								_hx_goto_60:;
            							}
HXLINE( 570)							trk1 = tr;
            						}
            						break;
            						default:{
HXLINE( 570)							trk1 = null();
            						}
            					}
            				}
            				else {
HXLINE( 570)					trk1 = null();
            				}
HXLINE( 585)				 ::Dynamic trk2;
HXDLIN( 585)				if (::hx::IsNotNull( e2 )) {
HXLINE( 585)					 ::hscriptBase::ExprDef _g = e2->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 585)					switch((int)(_g->_hx_getIndex())){
            						case (int)2: {
HXLINE( 586)							::Array< ::String > _g1 = _g->_hx_getObject(4).StaticCast< ::Array< ::String > >();
HXDLIN( 586)							::String n = _g->_hx_getString(0);
HXDLIN( 586)							 ::hscriptBase::CType t = _g->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 586)							 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN( 586)							 ::Dynamic p = _g->_hx_getObject(3);
HXLINE( 585)							trk2 = p;
            						}
            						break;
            						case (int)3: {
HXLINE( 587)							::String n = _g->_hx_getString(0);
HXDLIN( 587)							 ::hscriptBase::CType t = _g->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 587)							 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN( 587)							 ::Dynamic p = _g->_hx_getObject(3);
HXLINE( 585)							trk2 = p;
            						}
            						break;
            						case (int)5: {
HXLINE( 588)							::Array< ::Dynamic> e = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 589)							 ::Dynamic tr = null();
HXLINE( 590)							if (::hx::IsNotNull( e )) {
HXLINE( 590)								int _g = 0;
HXDLIN( 590)								while((_g < e->length)){
HXLINE( 590)									 ::Dynamic e1 = e->__get(_g);
HXDLIN( 590)									_g = (_g + 1);
HXLINE( 591)									{
HXLINE( 591)										 ::hscriptBase::ExprDef _g1 = e1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 591)										switch((int)(_g1->_hx_getIndex())){
            											case (int)2: {
HXLINE( 592)												::Array< ::String > _g = _g1->_hx_getObject(4).StaticCast< ::Array< ::String > >();
HXDLIN( 592)												::String n = _g1->_hx_getString(0);
HXDLIN( 592)												 ::hscriptBase::CType t = _g1->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 592)												 ::Dynamic e = _g1->_hx_getObject(2);
HXDLIN( 592)												 ::Dynamic p = _g1->_hx_getObject(3);
HXDLIN( 592)												tr = p;
HXDLIN( 592)												goto _hx_goto_61;
            											}
            											break;
            											case (int)3: {
HXLINE( 593)												::String n = _g1->_hx_getString(0);
HXDLIN( 593)												 ::hscriptBase::CType t = _g1->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 593)												 ::Dynamic e = _g1->_hx_getObject(2);
HXDLIN( 593)												 ::Dynamic p = _g1->_hx_getObject(3);
HXDLIN( 593)												tr = p;
HXDLIN( 593)												goto _hx_goto_61;
            											}
            											break;
            											default:{
HXLINE( 594)												tr = null();
            											}
            										}
            									}
            								}
            								_hx_goto_61:;
            							}
HXLINE( 585)							trk2 = tr;
            						}
            						break;
            						default:{
HXLINE( 585)							trk2 = null();
            						}
            					}
            				}
            				else {
HXLINE( 585)					trk2 = null();
            				}
HXLINE( 600)				if (::hx::IsEq( this->expr(econd,null()),true )) {
HXLINE( 600)					return this->expr(e11,trk1);
            				}
            				else {
HXLINE( 600)					if (::hx::IsNull( e2 )) {
HXLINE( 600)						return null();
            					}
            					else {
HXLINE( 600)						return this->expr(e2,trk2);
            					}
            				}
            			}
            			break;
            			case (int)11: {
HXLINE( 601)				 ::Dynamic econd = e1->_hx_getObject(0);
HXDLIN( 601)				 ::Dynamic e = e1->_hx_getObject(1);
HXLINE( 602)				 ::Dynamic trk1;
HXDLIN( 602)				 ::hscriptBase::ExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 602)				switch((int)(_g->_hx_getIndex())){
            					case (int)2: {
HXLINE( 603)						::Array< ::String > _g1 = _g->_hx_getObject(4).StaticCast< ::Array< ::String > >();
HXDLIN( 603)						::String n = _g->_hx_getString(0);
HXDLIN( 603)						 ::hscriptBase::CType t = _g->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 603)						 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN( 603)						 ::Dynamic p = _g->_hx_getObject(3);
HXLINE( 602)						trk1 = p;
            					}
            					break;
            					case (int)3: {
HXLINE( 604)						::String n = _g->_hx_getString(0);
HXDLIN( 604)						 ::hscriptBase::CType t = _g->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 604)						 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN( 604)						 ::Dynamic p = _g->_hx_getObject(3);
HXLINE( 602)						trk1 = p;
            					}
            					break;
            					case (int)5: {
HXLINE( 605)						::Array< ::Dynamic> e = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 606)						 ::Dynamic tr = null();
HXLINE( 607)						if (::hx::IsNotNull( e )) {
HXLINE( 607)							int _g = 0;
HXDLIN( 607)							while((_g < e->length)){
HXLINE( 607)								 ::Dynamic e1 = e->__get(_g);
HXDLIN( 607)								_g = (_g + 1);
HXLINE( 608)								{
HXLINE( 608)									 ::hscriptBase::ExprDef _g1 = e1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 608)									switch((int)(_g1->_hx_getIndex())){
            										case (int)2: {
HXLINE( 609)											::Array< ::String > _g = _g1->_hx_getObject(4).StaticCast< ::Array< ::String > >();
HXDLIN( 609)											::String n = _g1->_hx_getString(0);
HXDLIN( 609)											 ::hscriptBase::CType t = _g1->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 609)											 ::Dynamic e = _g1->_hx_getObject(2);
HXDLIN( 609)											 ::Dynamic p = _g1->_hx_getObject(3);
HXDLIN( 609)											tr = p;
HXDLIN( 609)											goto _hx_goto_62;
            										}
            										break;
            										case (int)3: {
HXLINE( 610)											::String n = _g1->_hx_getString(0);
HXDLIN( 610)											 ::hscriptBase::CType t = _g1->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 610)											 ::Dynamic e = _g1->_hx_getObject(2);
HXDLIN( 610)											 ::Dynamic p = _g1->_hx_getObject(3);
HXDLIN( 610)											tr = p;
HXDLIN( 610)											goto _hx_goto_62;
            										}
            										break;
            										default:{
HXLINE( 611)											tr = null();
            										}
            									}
            								}
            							}
            							_hx_goto_62:;
            						}
HXLINE( 602)						trk1 = tr;
            					}
            					break;
            					default:{
HXLINE( 602)						trk1 = null();
            					}
            				}
HXLINE( 617)				this->whileLoop(econd,e,trk1);
HXLINE( 618)				return null();
            			}
            			break;
            			case (int)12: {
HXLINE( 637)				::String v = e1->_hx_getString(0);
HXDLIN( 637)				 ::Dynamic it = e1->_hx_getObject(1);
HXDLIN( 637)				 ::Dynamic e = e1->_hx_getObject(2);
HXLINE( 638)				 ::Dynamic trk1;
HXDLIN( 638)				 ::hscriptBase::ExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 638)				switch((int)(_g->_hx_getIndex())){
            					case (int)2: {
HXLINE( 639)						::Array< ::String > _g1 = _g->_hx_getObject(4).StaticCast< ::Array< ::String > >();
HXDLIN( 639)						::String n = _g->_hx_getString(0);
HXDLIN( 639)						 ::hscriptBase::CType t = _g->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 639)						 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN( 639)						 ::Dynamic p = _g->_hx_getObject(3);
HXLINE( 638)						trk1 = p;
            					}
            					break;
            					case (int)3: {
HXLINE( 640)						::String n = _g->_hx_getString(0);
HXDLIN( 640)						 ::hscriptBase::CType t = _g->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 640)						 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN( 640)						 ::Dynamic p = _g->_hx_getObject(3);
HXLINE( 638)						trk1 = p;
            					}
            					break;
            					case (int)5: {
HXLINE( 641)						::Array< ::Dynamic> e = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 642)						 ::Dynamic tr = null();
HXLINE( 643)						if (::hx::IsNotNull( e )) {
HXLINE( 643)							int _g = 0;
HXDLIN( 643)							while((_g < e->length)){
HXLINE( 643)								 ::Dynamic e1 = e->__get(_g);
HXDLIN( 643)								_g = (_g + 1);
HXLINE( 644)								{
HXLINE( 644)									 ::hscriptBase::ExprDef _g1 = e1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 644)									switch((int)(_g1->_hx_getIndex())){
            										case (int)2: {
HXLINE( 645)											::Array< ::String > _g = _g1->_hx_getObject(4).StaticCast< ::Array< ::String > >();
HXDLIN( 645)											::String n = _g1->_hx_getString(0);
HXDLIN( 645)											 ::hscriptBase::CType t = _g1->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 645)											 ::Dynamic e = _g1->_hx_getObject(2);
HXDLIN( 645)											 ::Dynamic p = _g1->_hx_getObject(3);
HXDLIN( 645)											tr = p;
HXDLIN( 645)											goto _hx_goto_63;
            										}
            										break;
            										case (int)3: {
HXLINE( 646)											::String n = _g1->_hx_getString(0);
HXDLIN( 646)											 ::hscriptBase::CType t = _g1->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 646)											 ::Dynamic e = _g1->_hx_getObject(2);
HXDLIN( 646)											 ::Dynamic p = _g1->_hx_getObject(3);
HXDLIN( 646)											tr = p;
HXDLIN( 646)											goto _hx_goto_63;
            										}
            										break;
            										default:{
HXLINE( 647)											tr = null();
            										}
            									}
            								}
            							}
            							_hx_goto_63:;
            						}
HXLINE( 638)						trk1 = tr;
            					}
            					break;
            					default:{
HXLINE( 638)						trk1 = null();
            					}
            				}
HXLINE( 653)				this->forLoop(v,it,e,trk1);
HXLINE( 654)				return null();
            			}
            			break;
            			case (int)13: {
HXLINE( 898)				 ::Dynamic e11 = e1->_hx_getObject(0);
HXDLIN( 898)				 ::Dynamic e2 = e1->_hx_getObject(1);
HXDLIN( 898)				bool assign = e1->_hx_getBool(2);
HXLINE( 899)				if (assign) {
HXLINE( 899)					return this->coalesce2(e11,e2);
            				}
            				else {
HXLINE( 899)					return this->coalesce(e11,e2);
            				}
            			}
            			break;
            			case (int)14: {
HXLINE( 656)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hscriptBase::_Interp::Stop_obj::SBreak_dyn()));
            			}
            			break;
            			case (int)15: {
HXLINE( 658)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hscriptBase::_Interp::Stop_obj::SContinue_dyn()));
            			}
            			break;
            			case (int)16: {
            				HX_BEGIN_LOCAL_FUNC_S8(::hx::LocalFunc,_hx_Closure_0,::String,name, ::Dynamic,fexpr, ::hscriptBase::Interp,_gthis,::Array< int >,minParams, ::Dynamic,trk1, ::hscriptBase::Interp,me,::Array< ::Dynamic>,params, ::haxe::ds::StringMap,capturedLocals) HXARGC(1)
            				 ::Dynamic _hx_run(::cpp::VirtualArray args){
            					HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_711_expr)
HXLINE( 712)					int f;
HXDLIN( 712)					if (::hx::IsNull( args )) {
HXLINE( 712)						f = 0;
            					}
            					else {
HXLINE( 712)						f = args->get_length();
            					}
HXDLIN( 712)					if ((f != params->length)) {
HXLINE( 713)						if ((args->get_length() < minParams->__get(0))) {
HXLINE( 714)							::String str = (((HX_("Invalid number of parameters. Got ",cb,2b,d9,b1) + args->get_length()) + HX_(", required ",ed,0c,66,93)) + minParams->__get(0));
HXLINE( 715)							if (::hx::IsNotNull( name )) {
HXLINE( 715)								str = (str + ((HX_(" for function '",f6,90,ab,a0) + name) + HX_("'",27,00,00,00)));
            							}
HXLINE( 716)							if (!(_gthis->resumeError)) {
HXLINE( 716)								 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::ECustom(str),( (int)(_gthis->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(_gthis->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(_gthis->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(_gthis->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 716)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            							}
            						}
HXLINE( 719)						::cpp::VirtualArray args2 = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 720)						int extraParams = (args->get_length() - minParams->__get(0));
HXLINE( 721)						int pos = 0;
HXLINE( 722)						{
HXLINE( 722)							int _g = 0;
HXDLIN( 722)							while((_g < params->length)){
HXLINE( 722)								 ::Dynamic p = params->__get(_g);
HXDLIN( 722)								_g = (_g + 1);
HXLINE( 723)								if (( (bool)(p->__Field(HX_("opt",33,9c,54,00),::hx::paccDynamic)) )) {
HXLINE( 724)									if ((extraParams > 0)) {
HXLINE( 725)										pos = (pos + 1);
HXDLIN( 725)										args2->push(args->__get((pos - 1)));
HXLINE( 726)										extraParams = (extraParams - 1);
            									}
            									else {
HXLINE( 728)										args2->push(null());
            									}
            								}
            								else {
HXLINE( 730)									pos = (pos + 1);
HXDLIN( 730)									args2->push(args->__get((pos - 1)));
            								}
            							}
            						}
HXLINE( 731)						args = args2;
            					}
HXLINE( 733)					 ::haxe::ds::StringMap old = me->locals;
HXDLIN( 733)					int depth = me->depth;
HXLINE( 734)					me->depth++;
HXLINE( 735)					me->locals = me->duplicate(capturedLocals);
HXLINE( 736)					{
HXLINE( 736)						int _g = 0;
HXDLIN( 736)						int _g1 = params->length;
HXDLIN( 736)						while((_g < _g1)){
HXLINE( 736)							_g = (_g + 1);
HXDLIN( 736)							int i = (_g - 1);
HXLINE( 737)							me->locals->set(( (::String)(params->__get(i)->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ), ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("r",72,00,00,00),args->__get(i))));
            						}
            					}
HXLINE( 738)					 ::Dynamic r = null();
HXLINE( 739)					int oldDecl = _gthis->declared->length;
HXLINE( 740)					if (_gthis->inTry) {
HXLINE( 741)						try {
            							HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 742)							r = me->exprReturn(fexpr,trk1);
            						} catch( ::Dynamic _hx_e) {
            							if (_hx_e.IsClass<  ::Dynamic >() ){
            								HX_STACK_BEGIN_CATCH
            								 ::Dynamic _g = _hx_e;
HXLINE( 743)								{
HXLINE( 743)									null();
            								}
HXDLIN( 743)								 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 744)								me->locals = old;
HXLINE( 745)								me->depth = depth;
HXLINE( 749)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            							}
            							else {
            								HX_STACK_DO_THROW(_hx_e);
            							}
            						}
            					}
            					else {
HXLINE( 753)						r = me->exprReturn(fexpr,trk1);
            					}
HXLINE( 755)					_gthis->restore(oldDecl);
HXLINE( 756)					me->locals = old;
HXLINE( 757)					me->depth = depth;
HXLINE( 758)					return r;
            				}
            				HX_END_LOCAL_FUNC1(return)

HXLINE( 672)				 ::hscriptBase::CType _g = e1->_hx_getObject(3).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 672)				::Array< ::Dynamic> params = e1->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 672)				 ::Dynamic fexpr = e1->_hx_getObject(1);
HXDLIN( 672)				::String name = e1->_hx_getString(2);
HXDLIN( 672)				 ::Dynamic t = e1->_hx_getObject(4);
HXDLIN( 672)				 ::Dynamic d = e1->_hx_getObject(5);
HXLINE( 673)				 ::Dynamic trk1;
HXDLIN( 673)				 ::hscriptBase::ExprDef _g1 = fexpr->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 673)				switch((int)(_g1->_hx_getIndex())){
            					case (int)2: {
HXLINE( 674)						::Array< ::String > _g = _g1->_hx_getObject(4).StaticCast< ::Array< ::String > >();
HXDLIN( 674)						::String n = _g1->_hx_getString(0);
HXDLIN( 674)						 ::hscriptBase::CType t = _g1->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 674)						 ::Dynamic e = _g1->_hx_getObject(2);
HXDLIN( 674)						 ::Dynamic p = _g1->_hx_getObject(3);
HXLINE( 673)						trk1 = p;
            					}
            					break;
            					case (int)3: {
HXLINE( 675)						::String n = _g1->_hx_getString(0);
HXDLIN( 675)						 ::hscriptBase::CType t = _g1->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 675)						 ::Dynamic e = _g1->_hx_getObject(2);
HXDLIN( 675)						 ::Dynamic p = _g1->_hx_getObject(3);
HXLINE( 673)						trk1 = p;
            					}
            					break;
            					case (int)5: {
HXLINE( 676)						::Array< ::Dynamic> e = _g1->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 677)						 ::Dynamic tr = null();
HXLINE( 678)						if (::hx::IsNotNull( e )) {
HXLINE( 678)							int _g = 0;
HXDLIN( 678)							while((_g < e->length)){
HXLINE( 678)								 ::Dynamic e1 = e->__get(_g);
HXDLIN( 678)								_g = (_g + 1);
HXLINE( 679)								{
HXLINE( 679)									 ::hscriptBase::ExprDef _g1 = e1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 679)									switch((int)(_g1->_hx_getIndex())){
            										case (int)2: {
HXLINE( 680)											::Array< ::String > _g = _g1->_hx_getObject(4).StaticCast< ::Array< ::String > >();
HXDLIN( 680)											::String n = _g1->_hx_getString(0);
HXDLIN( 680)											 ::hscriptBase::CType t = _g1->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 680)											 ::Dynamic e = _g1->_hx_getObject(2);
HXDLIN( 680)											 ::Dynamic p = _g1->_hx_getObject(3);
HXDLIN( 680)											tr = p;
HXDLIN( 680)											goto _hx_goto_64;
            										}
            										break;
            										case (int)3: {
HXLINE( 681)											::String n = _g1->_hx_getString(0);
HXDLIN( 681)											 ::hscriptBase::CType t = _g1->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 681)											 ::Dynamic e = _g1->_hx_getObject(2);
HXDLIN( 681)											 ::Dynamic p = _g1->_hx_getObject(3);
HXDLIN( 681)											tr = p;
HXDLIN( 681)											goto _hx_goto_64;
            										}
            										break;
            										default:{
HXLINE( 682)											tr = null();
            										}
            									}
            								}
            							}
            							_hx_goto_64:;
            						}
HXLINE( 673)						trk1 = tr;
            					}
            					break;
            					default:{
HXLINE( 673)						trk1 = null();
            					}
            				}
HXLINE( 688)				bool all = ::hx::IsNotNull( trk1 );
HXLINE( 689)				::Array< ::String > unall = ::Array_obj< ::String >::fromData( _hx_array_data_88b7bafe_82,4);
HXLINE( 690)				unall = unall->copy()->copy();
HXLINE( 691)				bool all1;
HXDLIN( 691)				if (all) {
HXLINE( 691)					all1 = all;
            				}
            				else {
HXLINE( 691)					all1 = false;
            				}
HXDLIN( 691)				if (all1) {
HXLINE( 691)					all = ( (bool)(trk1->__Field(HX_("v",76,00,00,00),::hx::paccDynamic)) );
            				}
            				else {
HXLINE( 691)					all = false;
            				}
HXLINE( 692)				bool all2;
HXDLIN( 692)				if (all) {
HXLINE( 692)					all2 = all;
            				}
            				else {
HXLINE( 692)					all2 = false;
            				}
HXDLIN( 692)				if (all2) {
HXLINE( 692)					all = unall->contains( ::Dynamic(trk1->__Field(HX_("f",66,00,00,00),::hx::paccDynamic)));
            				}
            				else {
HXLINE( 692)					all = false;
            				}
HXLINE( 693)				if (all) {
HXLINE( 694)					this->parser->unexpected(::hscriptBase::Token_obj::TId( ::Dynamic(trk1->__Field(HX_("n",6e,00,00,00),::hx::paccDynamic))));
            				}
HXLINE( 695)				bool inl = false;
HXLINE( 696)				if (::hx::IsNotNull( t )) {
HXLINE( 697)					bool inl1;
HXDLIN( 697)					if (::hx::IsNotEq( t->__Field(HX_("f",66,00,00,00),::hx::paccDynamic),HX_("inlineFunc",3d,82,34,03) )) {
HXLINE( 697)						inl1 = ::hx::IsEq( t->__Field(HX_("f",66,00,00,00),::hx::paccDynamic),HX_("publicField",51,7f,6d,5c) );
            					}
            					else {
HXLINE( 697)						inl1 = true;
            					}
HXDLIN( 697)					if (!(inl1)) {
HXLINE( 697)						if (::hx::IsEq( t->__Field(HX_("f",66,00,00,00),::hx::paccDynamic),HX_("privateField",b7,cc,40,ba) )) {
HXLINE( 697)							inl = ( (bool)(t->__Field(HX_("v",76,00,00,00),::hx::paccDynamic)) );
            						}
            						else {
HXLINE( 697)							inl = false;
            						}
            					}
            					else {
HXLINE( 697)						inl = true;
            					}
            				}
HXLINE( 699)				if (inl) {
HXLINE( 700)					bool _hx_tmp;
HXDLIN( 700)					if (!(this->locals->exists(name))) {
HXLINE( 700)						_hx_tmp = this->variables->exists(name);
            					}
            					else {
HXLINE( 700)						_hx_tmp = true;
            					}
HXDLIN( 700)					if (_hx_tmp) {
HXLINE( 700)						if (!(this->resumeError)) {
HXLINE( 700)							 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EDuplicate(name),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 700)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            						}
            					}
            				}
HXLINE( 702)				 ::haxe::ds::StringMap capturedLocals = this->duplicate(this->locals);
HXLINE( 703)				 ::hscriptBase::Interp me = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 704)				bool hasOpt = false;
HXDLIN( 704)				::Array< int > minParams = ::Array_obj< int >::fromData( _hx_array_data_88b7bafe_83,1);
HXLINE( 705)				{
HXLINE( 705)					int _g2 = 0;
HXDLIN( 705)					while((_g2 < params->length)){
HXLINE( 705)						 ::Dynamic p = params->__get(_g2);
HXDLIN( 705)						_g2 = (_g2 + 1);
HXLINE( 706)						if (( (bool)(p->__Field(HX_("opt",33,9c,54,00),::hx::paccDynamic)) )) {
HXLINE( 707)							hasOpt = true;
            						}
            						else {
HXLINE( 709)							minParams[0]++;
            						}
            					}
            				}
HXLINE( 710)				 ::Dynamic f =  ::Dynamic(new _hx_Closure_0(name,fexpr,_gthis,minParams,trk1,me,params,capturedLocals));
HXLINE( 760)				 ::Dynamic f1 = ::Reflect_obj::makeVarArgs(f);
HXLINE( 761)				if (::hx::IsNotNull( name )) {
HXLINE( 762)					if ((this->depth == 0)) {
HXLINE( 764)						this->variables->set(name,f1);
            					}
            					else {
HXLINE( 766)						if (inl) {
HXLINE( 767)							if (!(this->resumeError)) {
HXLINE( 767)								 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EUnexpected( ::Dynamic(t->__Field(HX_("n",6e,00,00,00),::hx::paccDynamic))),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 767)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            							}
            						}
HXLINE( 769)						::Array< ::Dynamic> _hx_tmp = this->declared;
HXDLIN( 769)						::String name1 = name;
HXDLIN( 769)						_hx_tmp->push( ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("n",6e,00,00,00),name1)
            							->setFixed(1,HX_("old",a7,98,54,00),this->locals->get(name))));
HXLINE( 770)						 ::Dynamic ref =  ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("isInline",e3,65,a9,f1),inl)
            							->setFixed(1,HX_("r",72,00,00,00),f1));
HXLINE( 771)						this->locals->set(name,ref);
HXLINE( 772)						capturedLocals->set(name,ref);
            					}
            				}
HXLINE( 775)				bool _hx_tmp;
HXDLIN( 775)				if (::hx::IsNotNull( d )) {
HXLINE( 775)					_hx_tmp = ( (bool)(d->__Field(HX_("v",76,00,00,00),::hx::paccDynamic)) );
            				}
            				else {
HXLINE( 775)					_hx_tmp = false;
            				}
HXDLIN( 775)				if (_hx_tmp) {
HXLINE( 777)					this->dynamicFuncs->set(name,true);
HXLINE( 778)					if (this->locals->exists(name)) {
HXLINE( 779)						this->locals->get(name)->__SetField(HX_("dynamicFunc",63,e2,52,69),true,::hx::paccDynamic);
            					}
            				}
HXLINE( 781)				return f1;
            			}
            			break;
            			case (int)17: {
HXLINE( 659)				 ::Dynamic e = e1->_hx_getObject(0);
HXLINE( 660)				 ::Dynamic _hx_tmp;
HXDLIN( 660)				if (::hx::IsNull( e )) {
HXLINE( 660)					_hx_tmp = null();
            				}
            				else {
HXLINE( 660)					_hx_tmp = this->expr(e,null());
            				}
HXDLIN( 660)				this->returnValue = _hx_tmp;
HXLINE( 661)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hscriptBase::_Interp::Stop_obj::SReturn_dyn()));
            			}
            			break;
            			case (int)18: {
HXLINE( 824)				 ::Dynamic e = e1->_hx_getObject(0);
HXDLIN( 824)				 ::Dynamic index = e1->_hx_getObject(1);
HXLINE( 825)				 ::Dynamic arr = this->expr(e,null());
HXLINE( 826)				 ::Dynamic index1 = this->expr(index,null());
HXLINE( 827)				if (::Std_obj::isOfType(arr,::hx::ClassOf< ::haxe::IMap >())) {
HXLINE( 828)					return ::haxe::IMap_obj::get( ::hx::interface_check(arr,0x09c2bd39),index1);
            				}
            				else {
HXLINE( 831)					return arr->__GetItem(( (int)(index1) ));
            				}
            			}
            			break;
            			case (int)19: {
HXLINE( 782)				::Array< ::Dynamic> arr = e1->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 783)				bool _hx_tmp;
HXDLIN( 783)				if ((arr->length > 0)) {
HXLINE( 783)					 ::hscriptBase::ExprDef _g = arr->__get(0)->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 783)					if ((_g->_hx_getIndex() == 7)) {
HXLINE( 783)						 ::Dynamic _g1 = _g->_hx_getObject(1);
HXDLIN( 783)						 ::Dynamic _g2 = _g->_hx_getObject(2);
HXDLIN( 783)						if ((_g->_hx_getString(0) == HX_("=>",61,35,00,00))) {
HXLINE( 783)							_hx_tmp = true;
            						}
            						else {
HXLINE( 783)							_hx_tmp = false;
            						}
            					}
            					else {
HXLINE( 783)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 783)					_hx_tmp = false;
            				}
HXDLIN( 783)				if (_hx_tmp) {
HXLINE( 784)					bool isAllString = true;
HXLINE( 785)					bool isAllInt = true;
HXLINE( 786)					bool isAllObject = true;
HXLINE( 787)					bool isAllEnum = true;
HXLINE( 788)					::cpp::VirtualArray keys = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 789)					::cpp::VirtualArray values = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 790)					{
HXLINE( 790)						int _g = 0;
HXDLIN( 790)						while((_g < arr->length)){
HXLINE( 790)							 ::Dynamic e = arr->__get(_g);
HXDLIN( 790)							_g = (_g + 1);
HXLINE( 791)							{
HXLINE( 791)								 ::hscriptBase::ExprDef _g1 = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 791)								if ((_g1->_hx_getIndex() == 7)) {
HXLINE( 792)									if ((_g1->_hx_getString(0) == HX_("=>",61,35,00,00))) {
HXLINE( 792)										 ::Dynamic eKey = _g1->_hx_getObject(1);
HXDLIN( 792)										 ::Dynamic eValue = _g1->_hx_getObject(2);
HXDLIN( 792)										{
HXLINE( 793)											 ::Dynamic key = this->expr(eKey,null());
HXLINE( 794)											 ::Dynamic value = this->expr(eValue,null());
HXLINE( 795)											if (isAllString) {
HXLINE( 795)												isAllString = ::Std_obj::isOfType(key,::hx::ClassOf< ::String >());
            											}
            											else {
HXLINE( 795)												isAllString = false;
            											}
HXLINE( 796)											if (isAllInt) {
HXLINE( 796)												isAllInt = ::Std_obj::isOfType(key,::hx::ClassOf< int >());
            											}
            											else {
HXLINE( 796)												isAllInt = false;
            											}
HXLINE( 797)											if (isAllObject) {
HXLINE( 797)												isAllObject = ::Reflect_obj::isObject(key);
            											}
            											else {
HXLINE( 797)												isAllObject = false;
            											}
HXLINE( 798)											if (isAllEnum) {
HXLINE( 798)												isAllEnum = ::Reflect_obj::isEnumValue(key);
            											}
            											else {
HXLINE( 798)												isAllEnum = false;
            											}
HXLINE( 799)											keys->push(key);
HXLINE( 800)											values->push(value);
            										}
            									}
            									else {
HXLINE( 802)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("=> expected",17,e5,65,e5)));
            									}
            								}
            								else {
HXLINE( 802)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("=> expected",17,e5,65,e5)));
            								}
            							}
            						}
            					}
HXLINE( 805)					 ::Dynamic map;
HXLINE( 806)					if (isAllInt) {
HXLINE( 805)						map =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            					}
            					else {
HXLINE( 807)						if (isAllString) {
HXLINE( 805)							map =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            						}
            						else {
HXLINE( 808)							if (isAllEnum) {
HXLINE( 805)								map =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
            							}
            							else {
HXLINE( 809)								if (isAllObject) {
HXLINE( 805)									map =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            								}
            								else {
HXLINE( 810)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Inconsistent key types",af,4f,50,a9)));
            								}
            							}
            						}
            					}
HXLINE( 812)					{
HXLINE( 812)						int _g1 = 0;
HXDLIN( 812)						int _g2 = keys->get_length();
HXDLIN( 812)						while((_g1 < _g2)){
HXLINE( 812)							_g1 = (_g1 + 1);
HXDLIN( 812)							int n = (_g1 - 1);
HXLINE( 813)							::haxe::IMap_obj::set( ::hx::interface_check(map,0x09c2bd39),keys->__get(n),values->__get(n));
            						}
            					}
HXLINE( 815)					return map;
            				}
            				else {
HXLINE( 818)					::cpp::VirtualArray a = ::cpp::VirtualArray_obj::__new();
HXLINE( 819)					{
HXLINE( 819)						int _g = 0;
HXDLIN( 819)						while((_g < arr->length)){
HXLINE( 819)							 ::Dynamic e = arr->__get(_g);
HXDLIN( 819)							_g = (_g + 1);
HXLINE( 820)							a->push(this->expr(e,null()));
            						}
            					}
HXLINE( 822)					return a;
            				}
            			}
            			break;
            			case (int)20: {
HXLINE( 833)				::String cl = e1->_hx_getString(0);
HXDLIN( 833)				::Array< ::Dynamic> params = e1->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 834)				::cpp::VirtualArray a = ::cpp::VirtualArray_obj::__new();
HXLINE( 835)				{
HXLINE( 835)					int _g = 0;
HXDLIN( 835)					while((_g < params->length)){
HXLINE( 835)						 ::Dynamic e = params->__get(_g);
HXDLIN( 835)						_g = (_g + 1);
HXLINE( 836)						a->push(this->expr(e,null()));
            					}
            				}
HXLINE( 837)				return this->cnew(cl,a);
            			}
            			break;
            			case (int)21: {
HXLINE( 838)				 ::Dynamic e = e1->_hx_getObject(0);
HXLINE( 839)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(this->expr(e,null())));
            			}
            			break;
            			case (int)22: {
HXLINE( 840)				 ::hscriptBase::CType _g = e1->_hx_getObject(2).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 840)				 ::Dynamic e = e1->_hx_getObject(0);
HXDLIN( 840)				::String n = e1->_hx_getString(1);
HXDLIN( 840)				 ::Dynamic ecatch = e1->_hx_getObject(3);
HXLINE( 841)				 ::Dynamic trk1;
HXDLIN( 841)				 ::hscriptBase::ExprDef _g1 = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 841)				switch((int)(_g1->_hx_getIndex())){
            					case (int)2: {
HXLINE( 842)						::Array< ::String > _g = _g1->_hx_getObject(4).StaticCast< ::Array< ::String > >();
HXDLIN( 842)						::String n = _g1->_hx_getString(0);
HXDLIN( 842)						 ::hscriptBase::CType t = _g1->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 842)						 ::Dynamic e = _g1->_hx_getObject(2);
HXDLIN( 842)						 ::Dynamic p = _g1->_hx_getObject(3);
HXLINE( 841)						trk1 = p;
            					}
            					break;
            					case (int)3: {
HXLINE( 843)						::String n = _g1->_hx_getString(0);
HXDLIN( 843)						 ::hscriptBase::CType t = _g1->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 843)						 ::Dynamic e = _g1->_hx_getObject(2);
HXDLIN( 843)						 ::Dynamic p = _g1->_hx_getObject(3);
HXLINE( 841)						trk1 = p;
            					}
            					break;
            					case (int)5: {
HXLINE( 844)						::Array< ::Dynamic> e = _g1->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 845)						 ::Dynamic tr = null();
HXLINE( 846)						if (::hx::IsNotNull( e )) {
HXLINE( 846)							int _g = 0;
HXDLIN( 846)							while((_g < e->length)){
HXLINE( 846)								 ::Dynamic e1 = e->__get(_g);
HXDLIN( 846)								_g = (_g + 1);
HXLINE( 847)								{
HXLINE( 847)									 ::hscriptBase::ExprDef _g1 = e1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 847)									switch((int)(_g1->_hx_getIndex())){
            										case (int)2: {
HXLINE( 848)											::Array< ::String > _g = _g1->_hx_getObject(4).StaticCast< ::Array< ::String > >();
HXDLIN( 848)											::String n = _g1->_hx_getString(0);
HXDLIN( 848)											 ::hscriptBase::CType t = _g1->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 848)											 ::Dynamic e = _g1->_hx_getObject(2);
HXDLIN( 848)											 ::Dynamic p = _g1->_hx_getObject(3);
HXDLIN( 848)											tr = p;
HXDLIN( 848)											goto _hx_goto_72;
            										}
            										break;
            										case (int)3: {
HXLINE( 849)											::String n = _g1->_hx_getString(0);
HXDLIN( 849)											 ::hscriptBase::CType t = _g1->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 849)											 ::Dynamic e = _g1->_hx_getObject(2);
HXDLIN( 849)											 ::Dynamic p = _g1->_hx_getObject(3);
HXDLIN( 849)											tr = p;
HXDLIN( 849)											goto _hx_goto_72;
            										}
            										break;
            										default:{
HXLINE( 850)											tr = null();
            										}
            									}
            								}
            							}
            							_hx_goto_72:;
            						}
HXLINE( 841)						trk1 = tr;
            					}
            					break;
            					default:{
HXLINE( 841)						trk1 = null();
            					}
            				}
HXLINE( 856)				 ::Dynamic trk2;
HXDLIN( 856)				 ::hscriptBase::ExprDef _g2 = ecatch->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 856)				switch((int)(_g2->_hx_getIndex())){
            					case (int)2: {
HXLINE( 857)						::Array< ::String > _g = _g2->_hx_getObject(4).StaticCast< ::Array< ::String > >();
HXDLIN( 857)						::String n = _g2->_hx_getString(0);
HXDLIN( 857)						 ::hscriptBase::CType t = _g2->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 857)						 ::Dynamic e = _g2->_hx_getObject(2);
HXDLIN( 857)						 ::Dynamic p = _g2->_hx_getObject(3);
HXLINE( 856)						trk2 = p;
            					}
            					break;
            					case (int)3: {
HXLINE( 858)						::String n = _g2->_hx_getString(0);
HXDLIN( 858)						 ::hscriptBase::CType t = _g2->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 858)						 ::Dynamic e = _g2->_hx_getObject(2);
HXDLIN( 858)						 ::Dynamic p = _g2->_hx_getObject(3);
HXLINE( 856)						trk2 = p;
            					}
            					break;
            					case (int)5: {
HXLINE( 859)						::Array< ::Dynamic> e = _g2->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 860)						 ::Dynamic tr = null();
HXLINE( 861)						if (::hx::IsNotNull( e )) {
HXLINE( 861)							int _g = 0;
HXDLIN( 861)							while((_g < e->length)){
HXLINE( 861)								 ::Dynamic e1 = e->__get(_g);
HXDLIN( 861)								_g = (_g + 1);
HXLINE( 862)								{
HXLINE( 862)									 ::hscriptBase::ExprDef _g1 = e1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 862)									switch((int)(_g1->_hx_getIndex())){
            										case (int)2: {
HXLINE( 863)											::Array< ::String > _g = _g1->_hx_getObject(4).StaticCast< ::Array< ::String > >();
HXDLIN( 863)											::String n = _g1->_hx_getString(0);
HXDLIN( 863)											 ::hscriptBase::CType t = _g1->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 863)											 ::Dynamic e = _g1->_hx_getObject(2);
HXDLIN( 863)											 ::Dynamic p = _g1->_hx_getObject(3);
HXDLIN( 863)											tr = p;
HXDLIN( 863)											goto _hx_goto_73;
            										}
            										break;
            										case (int)3: {
HXLINE( 864)											::String n = _g1->_hx_getString(0);
HXDLIN( 864)											 ::hscriptBase::CType t = _g1->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 864)											 ::Dynamic e = _g1->_hx_getObject(2);
HXDLIN( 864)											 ::Dynamic p = _g1->_hx_getObject(3);
HXDLIN( 864)											tr = p;
HXDLIN( 864)											goto _hx_goto_73;
            										}
            										break;
            										default:{
HXLINE( 865)											tr = null();
            										}
            									}
            								}
            							}
            							_hx_goto_73:;
            						}
HXLINE( 856)						trk2 = tr;
            					}
            					break;
            					default:{
HXLINE( 856)						trk2 = null();
            					}
            				}
HXLINE( 871)				int old = this->declared->length;
HXLINE( 872)				bool oldTry = this->inTry;
HXLINE( 873)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 874)					this->inTry = true;
HXLINE( 875)					 ::Dynamic v = this->expr(e,trk1);
HXLINE( 876)					this->restore(old);
HXLINE( 877)					this->inTry = oldTry;
HXLINE( 878)					return v;
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 879)						{
HXLINE( 879)							null();
            						}
HXDLIN( 879)						 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 873)						if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::hscriptBase::_Interp::Stop >())) {
HXLINE( 879)							 ::hscriptBase::_Interp::Stop err = _g1;
HXLINE( 880)							this->inTry = oldTry;
HXLINE( 881)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(err));
            						}
            						else {
HXLINE( 882)							 ::Dynamic err = _g1;
HXLINE( 884)							this->restore(old);
HXLINE( 885)							this->inTry = oldTry;
HXLINE( 887)							::Array< ::Dynamic> _hx_tmp = this->declared;
HXDLIN( 887)							_hx_tmp->push( ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("n",6e,00,00,00),n)
            								->setFixed(1,HX_("old",a7,98,54,00),this->locals->get(n))));
HXLINE( 888)							this->locals->set(n, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("r",72,00,00,00),err)));
HXLINE( 889)							 ::Dynamic v = this->expr(ecatch,trk1);
HXLINE( 890)							this->restore(old);
HXLINE( 891)							return v;
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
            			break;
            			case (int)23: {
HXLINE( 893)				::Array< ::Dynamic> fl = e1->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 894)				 ::Dynamic o =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE( 895)				{
HXLINE( 895)					int _g = 0;
HXDLIN( 895)					while((_g < fl->length)){
HXLINE( 895)						 ::Dynamic f = fl->__get(_g);
HXDLIN( 895)						_g = (_g + 1);
HXLINE( 896)						::String f1 = ( (::String)(f->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXDLIN( 896)						this->set(o,f1,this->expr(f->__Field(HX_("e",65,00,00,00),::hx::paccDynamic),null()));
            					}
            				}
HXLINE( 897)				return o;
            			}
            			break;
            			case (int)24: {
HXLINE( 900)				 ::Dynamic econd = e1->_hx_getObject(0);
HXDLIN( 900)				 ::Dynamic e11 = e1->_hx_getObject(1);
HXDLIN( 900)				 ::Dynamic e2 = e1->_hx_getObject(2);
HXLINE( 901)				if (::hx::IsEq( this->expr(econd,null()),true )) {
HXLINE( 901)					return this->expr(e11,null());
            				}
            				else {
HXLINE( 901)					return this->expr(e2,null());
            				}
            			}
            			break;
            			case (int)25: {
HXLINE( 902)				 ::Dynamic e = e1->_hx_getObject(0);
HXDLIN( 902)				::Array< ::Dynamic> cases = e1->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 902)				 ::Dynamic def = e1->_hx_getObject(2);
HXLINE( 903)				 ::Dynamic val = this->expr(e,null());
HXLINE( 904)				bool match = false;
HXLINE( 905)				{
HXLINE( 905)					int _g = 0;
HXDLIN( 905)					while((_g < cases->length)){
HXLINE( 905)						 ::Dynamic c = cases->__get(_g);
HXDLIN( 905)						_g = (_g + 1);
HXLINE( 906)						{
HXLINE( 906)							int _g1 = 0;
HXDLIN( 906)							::Array< ::Dynamic> _g2 = ( (::Array< ::Dynamic>)(c->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) );
HXDLIN( 906)							while((_g1 < _g2->length)){
HXLINE( 906)								 ::Dynamic v = _g2->__get(_g1);
HXDLIN( 906)								_g1 = (_g1 + 1);
HXLINE( 907)								if (::hx::IsEq( this->expr(v,null()),val )) {
HXLINE( 908)									match = true;
HXLINE( 909)									goto _hx_goto_76;
            								}
            							}
            							_hx_goto_76:;
            						}
HXLINE( 911)						if (match) {
HXLINE( 912)							val = this->expr(c->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic),null());
HXLINE( 913)							goto _hx_goto_75;
            						}
            					}
            					_hx_goto_75:;
            				}
HXLINE( 916)				if (!(match)) {
HXLINE( 917)					if (::hx::IsNull( def )) {
HXLINE( 917)						val = null();
            					}
            					else {
HXLINE( 917)						val = this->expr(def,null());
            					}
            				}
HXLINE( 918)				return val;
            			}
            			break;
            			case (int)26: {
HXLINE( 619)				 ::Dynamic econd = e1->_hx_getObject(0);
HXDLIN( 619)				 ::Dynamic e = e1->_hx_getObject(1);
HXLINE( 620)				 ::Dynamic trk1;
HXDLIN( 620)				 ::hscriptBase::ExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 620)				switch((int)(_g->_hx_getIndex())){
            					case (int)2: {
HXLINE( 621)						::Array< ::String > _g1 = _g->_hx_getObject(4).StaticCast< ::Array< ::String > >();
HXDLIN( 621)						::String n = _g->_hx_getString(0);
HXDLIN( 621)						 ::hscriptBase::CType t = _g->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 621)						 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN( 621)						 ::Dynamic p = _g->_hx_getObject(3);
HXLINE( 620)						trk1 = p;
            					}
            					break;
            					case (int)3: {
HXLINE( 622)						::String n = _g->_hx_getString(0);
HXDLIN( 622)						 ::hscriptBase::CType t = _g->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 622)						 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN( 622)						 ::Dynamic p = _g->_hx_getObject(3);
HXLINE( 620)						trk1 = p;
            					}
            					break;
            					case (int)5: {
HXLINE( 623)						::Array< ::Dynamic> e = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 624)						 ::Dynamic tr = null();
HXLINE( 625)						if (::hx::IsNotNull( e )) {
HXLINE( 625)							int _g = 0;
HXDLIN( 625)							while((_g < e->length)){
HXLINE( 625)								 ::Dynamic e1 = e->__get(_g);
HXDLIN( 625)								_g = (_g + 1);
HXLINE( 626)								{
HXLINE( 626)									 ::hscriptBase::ExprDef _g1 = e1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 626)									switch((int)(_g1->_hx_getIndex())){
            										case (int)2: {
HXLINE( 627)											::Array< ::String > _g = _g1->_hx_getObject(4).StaticCast< ::Array< ::String > >();
HXDLIN( 627)											::String n = _g1->_hx_getString(0);
HXDLIN( 627)											 ::hscriptBase::CType t = _g1->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 627)											 ::Dynamic e = _g1->_hx_getObject(2);
HXDLIN( 627)											 ::Dynamic p = _g1->_hx_getObject(3);
HXDLIN( 627)											tr = p;
HXDLIN( 627)											goto _hx_goto_77;
            										}
            										break;
            										case (int)3: {
HXLINE( 628)											::String n = _g1->_hx_getString(0);
HXDLIN( 628)											 ::hscriptBase::CType t = _g1->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 628)											 ::Dynamic e = _g1->_hx_getObject(2);
HXDLIN( 628)											 ::Dynamic p = _g1->_hx_getObject(3);
HXDLIN( 628)											tr = p;
HXDLIN( 628)											goto _hx_goto_77;
            										}
            										break;
            										default:{
HXLINE( 629)											tr = null();
            										}
            									}
            								}
            							}
            							_hx_goto_77:;
            						}
HXLINE( 620)						trk1 = tr;
            					}
            					break;
            					default:{
HXLINE( 620)						trk1 = null();
            					}
            				}
HXLINE( 635)				this->doWhileLoop(econd,e,trk1);
HXLINE( 636)				return null();
            			}
            			break;
            			case (int)27: {
HXLINE( 662)				 ::Dynamic e = e1->_hx_getObject(0);
HXDLIN( 662)				::String c = e1->_hx_getString(1);
HXLINE( 663)				bool _hx_tmp;
HXDLIN( 663)				if (::hx::IsNotNull( c )) {
HXLINE( 663)					_hx_tmp = ::hx::IsNotNull( e );
            				}
            				else {
HXLINE( 663)					_hx_tmp = false;
            				}
HXDLIN( 663)				if (_hx_tmp) {
HXLINE( 664)					this->variables->set(c,e);
            				}
HXLINE( 666)				return null();
            			}
            			break;
            			case (int)28: {
HXLINE( 662)				::cpp::VirtualArray _g = e1->_hx_getObject(2).StaticCast< ::cpp::VirtualArray >();
HXDLIN( 662)				 ::Dynamic e = e1->_hx_getObject(0);
HXDLIN( 662)				::String c = e1->_hx_getString(1);
HXLINE( 663)				bool _hx_tmp;
HXDLIN( 663)				if (::hx::IsNotNull( c )) {
HXLINE( 663)					_hx_tmp = ::hx::IsNotNull( e );
            				}
            				else {
HXLINE( 663)					_hx_tmp = false;
            				}
HXDLIN( 663)				if (_hx_tmp) {
HXLINE( 664)					this->variables->set(c,e);
            				}
HXLINE( 666)				return null();
            			}
            			break;
            			case (int)29: {
HXLINE( 667)				::String p = e1->_hx_getString(0);
HXLINE( 668)				if ((p != p.toLowerCase())) {
HXLINE( 669)					if (!(this->resumeError)) {
HXLINE( 669)						 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::ECustom(HX_("Package path cannot have capital letters.",35,83,c8,a8)),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 669)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            					}
            				}
HXLINE( 670)				::String _hx_tmp;
HXDLIN( 670)				if (::hx::IsNull( p )) {
HXLINE( 670)					_hx_tmp = HX_("",00,00,00,00);
            				}
            				else {
HXLINE( 670)					_hx_tmp = p;
            				}
HXDLIN( 670)				this->script->setPackagePath(_hx_tmp);
HXLINE( 671)				return null();
            			}
            			break;
            			case (int)30: {
HXLINE( 919)				::String _g = e1->_hx_getString(0);
HXDLIN( 919)				::Array< ::Dynamic> _g1 = e1->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 919)				 ::Dynamic e = e1->_hx_getObject(2);
HXLINE( 920)				return this->expr(e,null());
            			}
            			break;
            			case (int)31: {
HXLINE( 921)				 ::hscriptBase::CType _g = e1->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 921)				 ::Dynamic e = e1->_hx_getObject(0);
HXLINE( 922)				return this->expr(e,null());
            			}
            			break;
            		}
HXLINE( 924)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,expr,return )

void Interp_obj::doWhileLoop( ::Dynamic econd, ::Dynamic e, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_23fee00e02910bec_927_doWhileLoop)
HXLINE( 928)		int old = this->declared->length;
HXLINE( 929)		while(true){
HXLINE( 930)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 931)				this->expr(e,p);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 932)					{
HXLINE( 932)						null();
            					}
HXDLIN( 932)					 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 930)					if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::hscriptBase::_Interp::Stop >())) {
HXLINE( 932)						 ::hscriptBase::_Interp::Stop err = _g1;
HXLINE( 933)						switch((int)(err->_hx_getIndex())){
            							case (int)0: {
HXLINE( 935)								goto _hx_goto_84;
            							}
            							break;
            							case (int)1: {
            							}
            							break;
            							case (int)2: {
HXLINE( 936)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(err));
            							}
            							break;
            						}
            					}
            					else {
HXLINE( 930)						HX_STACK_DO_THROW(_g);
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE( 929)			if (!(::hx::IsEq( this->expr(econd,p),true ))) {
HXLINE( 929)				goto _hx_goto_84;
            			}
            		}
            		_hx_goto_84:;
HXLINE( 941)		this->restore(old);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,doWhileLoop,(void))

void Interp_obj::whileLoop( ::Dynamic econd, ::Dynamic e, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_23fee00e02910bec_944_whileLoop)
HXLINE( 945)		int old = this->declared->length;
HXLINE( 946)		while(::hx::IsEq( this->expr(econd,null()),true )){
HXLINE( 947)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 948)				this->expr(e,p);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 949)					{
HXLINE( 949)						null();
            					}
HXDLIN( 949)					 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 947)					if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::hscriptBase::_Interp::Stop >())) {
HXLINE( 949)						 ::hscriptBase::_Interp::Stop err = _g1;
HXLINE( 950)						switch((int)(err->_hx_getIndex())){
            							case (int)0: {
HXLINE( 952)								goto _hx_goto_86;
            							}
            							break;
            							case (int)1: {
            							}
            							break;
            							case (int)2: {
HXLINE( 953)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(err));
            							}
            							break;
            						}
            					}
            					else {
HXLINE( 947)						HX_STACK_DO_THROW(_g);
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            		_hx_goto_86:;
HXLINE( 957)		this->restore(old);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,whileLoop,(void))

 ::Dynamic Interp_obj::makeIterator( ::Dynamic v){
            	HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_960_makeIterator)
HXLINE( 964)		if (::hx::IsNotNull( v->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic) )) {
HXLINE( 964)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 964)				v = v->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 964)					{
HXLINE( 964)						null();
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
HXLINE( 966)		bool _hx_tmp;
HXDLIN( 966)		if (::hx::IsNotNull( v->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic) )) {
HXLINE( 966)			_hx_tmp = ::hx::IsNull( v->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 966)			_hx_tmp = true;
            		}
HXDLIN( 966)		if (_hx_tmp) {
HXLINE( 966)			if (!(this->resumeError)) {
HXLINE( 966)				 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EInvalidIterator(v),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN( 966)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            			}
            		}
HXLINE( 967)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,makeIterator,return )

void Interp_obj::forLoop(::String n, ::Dynamic it, ::Dynamic e, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_23fee00e02910bec_970_forLoop)
HXLINE( 971)		int old = this->declared->length;
HXLINE( 972)		::Array< ::Dynamic> _hx_tmp = this->declared;
HXDLIN( 972)		_hx_tmp->push( ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("n",6e,00,00,00),n)
            			->setFixed(1,HX_("old",a7,98,54,00),this->locals->get(n))));
HXLINE( 973)		 ::Dynamic it1 = this->makeIterator(this->expr(it,null()));
HXLINE( 974)		while(( (bool)(it1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 975)			{
HXLINE( 975)				::Dynamic this1 = this->locals;
HXDLIN( 975)				( ( ::haxe::ds::StringMap)(this1) )->set(n, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("r",72,00,00,00),it1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)())));
            			}
HXLINE( 976)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 977)				this->expr(e,p);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 978)					{
HXLINE( 978)						null();
            					}
HXDLIN( 978)					 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 976)					if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::hscriptBase::_Interp::Stop >())) {
HXLINE( 978)						 ::hscriptBase::_Interp::Stop err = _g1;
HXLINE( 979)						switch((int)(err->_hx_getIndex())){
            							case (int)0: {
HXLINE( 981)								goto _hx_goto_89;
            							}
            							break;
            							case (int)1: {
            							}
            							break;
            							case (int)2: {
HXLINE( 982)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(err));
            							}
            							break;
            						}
            					}
            					else {
HXLINE( 976)						HX_STACK_DO_THROW(_g);
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            		_hx_goto_89:;
HXLINE( 986)		this->restore(old);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Interp_obj,forLoop,(void))

bool Interp_obj::isMap( ::Dynamic o){
            	HX_STACKFRAME(&_hx_pos_23fee00e02910bec_990_isMap)
HXDLIN( 990)		return ::Std_obj::isOfType(o,::hx::ClassOf< ::haxe::IMap >());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,isMap,return )

 ::Dynamic Interp_obj::getMapValue( ::Dynamic map, ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_23fee00e02910bec_994_getMapValue)
HXDLIN( 994)		return ::haxe::IMap_obj::get( ::hx::interface_check(map,0x09c2bd39),key);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,getMapValue,return )

void Interp_obj::setMapValue( ::Dynamic map, ::Dynamic key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_23fee00e02910bec_998_setMapValue)
HXDLIN( 998)		::haxe::IMap_obj::set( ::hx::interface_check(map,0x09c2bd39),key,value);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,setMapValue,(void))

 ::Dynamic Interp_obj::get( ::Dynamic o,::String f){
            	HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_1001_get)
HXLINE(1002)		if (::hx::IsNull( o )) {
HXLINE(1002)			if (!(this->resumeError)) {
HXLINE(1002)				 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EInvalidAccess(f),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN(1002)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            			}
            		}
HXLINE(1012)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(1013)			 ::Dynamic prop = null();
HXLINE(1014)			prop = ::Reflect_obj::getProperty(o,f);
HXLINE(1016)			if (::hx::IsNull( prop )) {
HXLINE(1018)				prop = ::Reflect_obj::field(o,f);
            			}
HXLINE(1020)			return prop;
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(1022)				 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE(1023)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(1012)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,get,return )

 ::Dynamic Interp_obj::set( ::Dynamic o,::String f, ::Dynamic v){
            	HX_GC_STACKFRAME(&_hx_pos_23fee00e02910bec_1029_set)
HXLINE(1030)		if (::hx::IsNull( o )) {
HXLINE(1030)			if (!(this->resumeError)) {
HXLINE(1030)				 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,::hscriptBase::ErrorDef_obj::EInvalidAccess(f),( (int)(this->curExpr->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) ),( (::String)(this->curExpr->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic)) ),( (int)(this->curExpr->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) ));
HXDLIN(1030)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            			}
            		}
HXLINE(1031)		::Reflect_obj::setProperty(o,f,v);
HXLINE(1032)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,set,return )

 ::Dynamic Interp_obj::fcall( ::Dynamic o,::String f,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_23fee00e02910bec_1036_fcall)
HXDLIN(1036)		return this->call(o,this->get(o,f),args);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,fcall,return )

 ::Dynamic Interp_obj::call( ::Dynamic o, ::Dynamic f,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_23fee00e02910bec_1040_call)
HXDLIN(1040)		return ::Reflect_obj::callMethod(o,f,args);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,call,return )

 ::Dynamic Interp_obj::cnew(::String cl,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_23fee00e02910bec_1043_cnew)
HXLINE(1044)		::hx::Class c = ::Type_obj::resolveClass(cl);
HXLINE(1045)		if (::hx::IsNull( c )) {
HXLINE(1045)			c = this->resolve(cl);
            		}
HXLINE(1046)		return ::Type_obj::createInstance(c,args);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,cnew,return )


::hx::ObjectPtr< Interp_obj > Interp_obj::__new() {
	::hx::ObjectPtr< Interp_obj > __this = new Interp_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Interp_obj > Interp_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Interp_obj *__this = (Interp_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Interp_obj), true, "hscriptBase.Interp"));
	*(void **)__this = Interp_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Interp_obj::Interp_obj()
{
}

void Interp_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Interp);
	HX_MARK_MEMBER_NAME(variables,"variables");
	HX_MARK_MEMBER_NAME(dynamicFuncs,"dynamicFuncs");
	HX_MARK_MEMBER_NAME(locals,"locals");
	HX_MARK_MEMBER_NAME(binops,"binops");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(inTry,"inTry");
	HX_MARK_MEMBER_NAME(declared,"declared");
	HX_MARK_MEMBER_NAME(returnValue,"returnValue");
	HX_MARK_MEMBER_NAME(typecheck,"typecheck");
	HX_MARK_MEMBER_NAME(parser,"parser");
	HX_MARK_MEMBER_NAME(script,"script");
	HX_MARK_MEMBER_NAME(curExpr,"curExpr");
	HX_MARK_MEMBER_NAME(resumeError,"resumeError");
	HX_MARK_MEMBER_NAME(inFunc,"inFunc");
	HX_MARK_END_CLASS();
}

void Interp_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(variables,"variables");
	HX_VISIT_MEMBER_NAME(dynamicFuncs,"dynamicFuncs");
	HX_VISIT_MEMBER_NAME(locals,"locals");
	HX_VISIT_MEMBER_NAME(binops,"binops");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(inTry,"inTry");
	HX_VISIT_MEMBER_NAME(declared,"declared");
	HX_VISIT_MEMBER_NAME(returnValue,"returnValue");
	HX_VISIT_MEMBER_NAME(typecheck,"typecheck");
	HX_VISIT_MEMBER_NAME(parser,"parser");
	HX_VISIT_MEMBER_NAME(script,"script");
	HX_VISIT_MEMBER_NAME(curExpr,"curExpr");
	HX_VISIT_MEMBER_NAME(resumeError,"resumeError");
	HX_VISIT_MEMBER_NAME(inFunc,"inFunc");
}

::hx::Val Interp_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"expr") ) { return ::hx::Val( expr_dyn() ); }
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
		if (HX_FIELD_EQ(inName,"cnew") ) { return ::hx::Val( cnew_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { return ::hx::Val( depth ); }
		if (HX_FIELD_EQ(inName,"inTry") ) { return ::hx::Val( inTry ); }
		if (HX_FIELD_EQ(inName,"error") ) { return ::hx::Val( error_dyn() ); }
		if (HX_FIELD_EQ(inName,"isMap") ) { return ::hx::Val( isMap_dyn() ); }
		if (HX_FIELD_EQ(inName,"fcall") ) { return ::hx::Val( fcall_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"locals") ) { return ::hx::Val( locals ); }
		if (HX_FIELD_EQ(inName,"binops") ) { return ::hx::Val( binops ); }
		if (HX_FIELD_EQ(inName,"parser") ) { return ::hx::Val( parser ); }
		if (HX_FIELD_EQ(inName,"script") ) { return ::hx::Val( script ); }
		if (HX_FIELD_EQ(inName,"setScr") ) { return ::hx::Val( setScr_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPsr") ) { return ::hx::Val( setPsr_dyn() ); }
		if (HX_FIELD_EQ(inName,"inFunc") ) { return ::hx::Val( inFunc ); }
		if (HX_FIELD_EQ(inName,"setVar") ) { return ::hx::Val( setVar_dyn() ); }
		if (HX_FIELD_EQ(inName,"assign") ) { return ::hx::Val( assign_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curExpr") ) { return ::hx::Val( curExpr ); }
		if (HX_FIELD_EQ(inName,"initOps") ) { return ::hx::Val( initOps_dyn() ); }
		if (HX_FIELD_EQ(inName,"execute") ) { return ::hx::Val( execute_dyn() ); }
		if (HX_FIELD_EQ(inName,"restore") ) { return ::hx::Val( restore_dyn() ); }
		if (HX_FIELD_EQ(inName,"rethrow") ) { return ::hx::Val( rethrow_dyn() ); }
		if (HX_FIELD_EQ(inName,"resolve") ) { return ::hx::Val( resolve_dyn() ); }
		if (HX_FIELD_EQ(inName,"forLoop") ) { return ::hx::Val( forLoop_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"declared") ) { return ::hx::Val( declared ); }
		if (HX_FIELD_EQ(inName,"posInfos") ) { return ::hx::Val( posInfos_dyn() ); }
		if (HX_FIELD_EQ(inName,"coalesce") ) { return ::hx::Val( coalesce_dyn() ); }
		if (HX_FIELD_EQ(inName,"assignOp") ) { return ::hx::Val( assignOp_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { return ::hx::Val( variables ); }
		if (HX_FIELD_EQ(inName,"typecheck") ) { return ::hx::Val( typecheck ); }
		if (HX_FIELD_EQ(inName,"coalesce2") ) { return ::hx::Val( coalesce2_dyn() ); }
		if (HX_FIELD_EQ(inName,"increment") ) { return ::hx::Val( increment_dyn() ); }
		if (HX_FIELD_EQ(inName,"duplicate") ) { return ::hx::Val( duplicate_dyn() ); }
		if (HX_FIELD_EQ(inName,"whileLoop") ) { return ::hx::Val( whileLoop_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"exprReturn") ) { return ::hx::Val( exprReturn_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"returnValue") ) { return ::hx::Val( returnValue ); }
		if (HX_FIELD_EQ(inName,"resumeError") ) { return ::hx::Val( resumeError ); }
		if (HX_FIELD_EQ(inName,"doWhileLoop") ) { return ::hx::Val( doWhileLoop_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMapValue") ) { return ::hx::Val( getMapValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMapValue") ) { return ::hx::Val( setMapValue_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dynamicFuncs") ) { return ::hx::Val( dynamicFuncs ); }
		if (HX_FIELD_EQ(inName,"evalAssignOp") ) { return ::hx::Val( evalAssignOp_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeIterator") ) { return ::hx::Val( makeIterator_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resetVariables") ) { return ::hx::Val( resetVariables_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Interp_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inTry") ) { inTry=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"locals") ) { locals=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"binops") ) { binops=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parser") ) { parser=inValue.Cast<  ::hscriptBase::Parser >(); return inValue; }
		if (HX_FIELD_EQ(inName,"script") ) { script=inValue.Cast<  ::tea::SScript >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inFunc") ) { inFunc=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curExpr") ) { curExpr=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"declared") ) { declared=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { variables=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"typecheck") ) { typecheck=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"returnValue") ) { returnValue=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resumeError") ) { resumeError=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dynamicFuncs") ) { dynamicFuncs=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Interp_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("variables",b7,e2,62,82));
	outFields->push(HX_("dynamicFuncs",b0,34,33,bf));
	outFields->push(HX_("locals",a8,74,bf,59));
	outFields->push(HX_("binops",cb,59,16,ed));
	outFields->push(HX_("depth",03,f1,29,d7));
	outFields->push(HX_("inTry",56,82,08,be));
	outFields->push(HX_("declared",fa,58,bc,c4));
	outFields->push(HX_("returnValue",a1,4c,95,3e));
	outFields->push(HX_("typecheck",ce,83,61,77));
	outFields->push(HX_("parser",df,9c,88,ed));
	outFields->push(HX_("script",0b,4e,60,47));
	outFields->push(HX_("curExpr",d5,6e,33,ae));
	outFields->push(HX_("resumeError",db,9e,f3,43));
	outFields->push(HX_("inFunc",c9,c9,2a,80));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Interp_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Interp_obj,variables),HX_("variables",b7,e2,62,82)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Interp_obj,dynamicFuncs),HX_("dynamicFuncs",b0,34,33,bf)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Interp_obj,locals),HX_("locals",a8,74,bf,59)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Interp_obj,binops),HX_("binops",cb,59,16,ed)},
	{::hx::fsInt,(int)offsetof(Interp_obj,depth),HX_("depth",03,f1,29,d7)},
	{::hx::fsBool,(int)offsetof(Interp_obj,inTry),HX_("inTry",56,82,08,be)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Interp_obj,declared),HX_("declared",fa,58,bc,c4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Interp_obj,returnValue),HX_("returnValue",a1,4c,95,3e)},
	{::hx::fsBool,(int)offsetof(Interp_obj,typecheck),HX_("typecheck",ce,83,61,77)},
	{::hx::fsObject /*  ::hscriptBase::Parser */ ,(int)offsetof(Interp_obj,parser),HX_("parser",df,9c,88,ed)},
	{::hx::fsObject /*  ::tea::SScript */ ,(int)offsetof(Interp_obj,script),HX_("script",0b,4e,60,47)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Interp_obj,curExpr),HX_("curExpr",d5,6e,33,ae)},
	{::hx::fsBool,(int)offsetof(Interp_obj,resumeError),HX_("resumeError",db,9e,f3,43)},
	{::hx::fsBool,(int)offsetof(Interp_obj,inFunc),HX_("inFunc",c9,c9,2a,80)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Interp_obj_sStaticStorageInfo = 0;
#endif

static ::String Interp_obj_sMemberFields[] = {
	HX_("variables",b7,e2,62,82),
	HX_("dynamicFuncs",b0,34,33,bf),
	HX_("locals",a8,74,bf,59),
	HX_("binops",cb,59,16,ed),
	HX_("depth",03,f1,29,d7),
	HX_("inTry",56,82,08,be),
	HX_("declared",fa,58,bc,c4),
	HX_("returnValue",a1,4c,95,3e),
	HX_("typecheck",ce,83,61,77),
	HX_("parser",df,9c,88,ed),
	HX_("script",0b,4e,60,47),
	HX_("curExpr",d5,6e,33,ae),
	HX_("setScr",60,27,6f,6f),
	HX_("setPsr",8d,ee,6c,6f),
	HX_("resumeError",db,9e,f3,43),
	HX_("resetVariables",e8,46,d3,dc),
	HX_("posInfos",11,82,2e,5a),
	HX_("inFunc",c9,c9,2a,80),
	HX_("initOps",02,63,8b,cb),
	HX_("coalesce",a7,6c,4f,61),
	HX_("coalesce2",ab,a5,2f,c4),
	HX_("setVar",65,6c,71,6f),
	HX_("assign",2f,46,06,4c),
	HX_("assignOp",30,b5,c7,0e),
	HX_("evalAssignOp",ec,d8,94,19),
	HX_("increment",2f,06,ff,31),
	HX_("execute",35,0a,0d,cc),
	HX_("exprReturn",c5,6b,ed,86),
	HX_("duplicate",8b,21,17,a1),
	HX_("restore",4e,67,b0,6a),
	HX_("error",c8,cb,29,73),
	HX_("rethrow",93,b0,2a,f6),
	HX_("resolve",ec,12,60,67),
	HX_("expr",35,fd,1d,43),
	HX_("doWhileLoop",aa,01,97,3a),
	HX_("whileLoop",b5,42,98,e1),
	HX_("makeIterator",fc,dd,72,d8),
	HX_("forLoop",0d,52,69,c9),
	HX_("isMap",d2,34,51,c1),
	HX_("getMapValue",eb,b1,ee,ce),
	HX_("setMapValue",f7,b8,5b,d9),
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	HX_("fcall",04,44,99,fc),
	HX_("call",9e,18,ba,41),
	HX_("cnew",dd,ef,c3,41),
	::String(null()) };

::hx::Class Interp_obj::__mClass;

void Interp_obj::__register()
{
	Interp_obj _hx_dummy;
	Interp_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hscriptBase.Interp",fe,ba,b7,88);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Interp_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Interp_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Interp_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Interp_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hscriptBase
