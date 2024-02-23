#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_hscriptBase_CType
#include <hscriptBase/CType.h>
#endif
#ifndef INCLUDED_hscriptBase_Const
#include <hscriptBase/Const.h>
#endif
#ifndef INCLUDED_hscriptBase_ExprDef
#include <hscriptBase/ExprDef.h>
#endif
#ifndef INCLUDED_hscriptBase_Tools
#include <hscriptBase/Tools.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_de4bd1e9ccf40d5b_36_iter,"hscriptBase.Tools","iter",0x3ecb7e75,"hscriptBase.Tools.iter","hscriptBase/Tools.hx",36,0x6c897c2e)
HX_LOCAL_STACK_FRAME(_hx_pos_de4bd1e9ccf40d5b_72_map,"hscriptBase.Tools","map",0xcb7c6bdf,"hscriptBase.Tools.map","hscriptBase/Tools.hx",72,0x6c897c2e)
HX_LOCAL_STACK_FRAME(_hx_pos_de4bd1e9ccf40d5b_104_getIdent,"hscriptBase.Tools","getIdent",0x9f707e57,"hscriptBase.Tools.getIdent","hscriptBase/Tools.hx",104,0x6c897c2e)
HX_LOCAL_STACK_FRAME(_hx_pos_de4bd1e9ccf40d5b_115_ctToType,"hscriptBase.Tools","ctToType",0x35b2ef43,"hscriptBase.Tools.ctToType","hscriptBase/Tools.hx",115,0x6c897c2e)
HX_LOCAL_STACK_FRAME(_hx_pos_de4bd1e9ccf40d5b_112_ctToType,"hscriptBase.Tools","ctToType",0x35b2ef43,"hscriptBase.Tools.ctToType","hscriptBase/Tools.hx",112,0x6c897c2e)
HX_LOCAL_STACK_FRAME(_hx_pos_de4bd1e9ccf40d5b_127_compatibleWithEachOther,"hscriptBase.Tools","compatibleWithEachOther",0xd2e012f8,"hscriptBase.Tools.compatibleWithEachOther","hscriptBase/Tools.hx",127,0x6c897c2e)
HX_LOCAL_STACK_FRAME(_hx_pos_de4bd1e9ccf40d5b_146_compatibleWithEachOtherObjects,"hscriptBase.Tools","compatibleWithEachOtherObjects",0x8da54cbc,"hscriptBase.Tools.compatibleWithEachOtherObjects","hscriptBase/Tools.hx",146,0x6c897c2e)
HX_LOCAL_STACK_FRAME(_hx_pos_de4bd1e9ccf40d5b_163_getType,"hscriptBase.Tools","getType",0xa5526133,"hscriptBase.Tools.getType","hscriptBase/Tools.hx",163,0x6c897c2e)
HX_LOCAL_STACK_FRAME(_hx_pos_de4bd1e9ccf40d5b_161_getType,"hscriptBase.Tools","getType",0xa5526133,"hscriptBase.Tools.getType","hscriptBase/Tools.hx",161,0x6c897c2e)
HX_LOCAL_STACK_FRAME(_hx_pos_de4bd1e9ccf40d5b_185_expr,"hscriptBase.Tools","expr",0x3c29b692,"hscriptBase.Tools.expr","hscriptBase/Tools.hx",185,0x6c897c2e)
HX_LOCAL_STACK_FRAME(_hx_pos_de4bd1e9ccf40d5b_193_mk,"hscriptBase.Tools","mk",0x9998177b,"hscriptBase.Tools.mk","hscriptBase/Tools.hx",193,0x6c897c2e)
HX_LOCAL_STACK_FRAME(_hx_pos_de4bd1e9ccf40d5b_28_boot,"hscriptBase.Tools","boot",0x3a273d8f,"hscriptBase.Tools.boot","hscriptBase/Tools.hx",28,0x6c897c2e)
static const ::String _hx_array_data_66bd2431_28[] = {
	HX_("import",65,a1,82,08),HX_("package",86,2b,b1,41),HX_("if",dd,5b,00,00),HX_("var",e7,de,59,00),HX_("for",09,c7,4d,00),HX_("while",b1,43,bd,c9),HX_("final",76,5f,9a,00),HX_("do",8b,57,00,00),HX_("as",f2,54,00,00),HX_("using",44,75,35,aa),HX_("break",bf,24,ec,b8),HX_("continue",67,e0,c8,31),HX_("public",a9,80,f3,66),HX_("private",03,2d,6f,89),HX_("static",ae,dc,fb,05),HX_("overload",7a,65,35,45),HX_("override",4c,22,28,49),HX_("class",38,78,58,48),HX_("function",18,ab,52,14),HX_("else",b9,e4,14,43),HX_("try",3b,69,58,00),HX_("catch",3b,7c,21,41),HX_("abstract",e2,c0,7e,a8),HX_("case",b0,1e,ba,41),HX_("switch",f4,49,79,c5),HX_("untyped",71,67,5c,17),HX_("cast",bf,1e,ba,41),HX_("typedef",4b,37,d8,f8),HX_("dynamic",7f,9f,15,36),HX_("default",c1,d8,c3,9b),HX_("enum",01,6b,16,43),HX_("extern",60,d5,1a,c7),HX_("extends",59,cd,5c,70),HX_("implements",70,fd,43,a8),HX_("in",e5,5b,00,00),HX_("macro",0c,70,16,03),HX_("new",60,d0,53,00),HX_("null",87,9e,0e,49),HX_("return",b0,a4,2d,09),HX_("throw",26,5d,90,0f),HX_("from",6a,a5,c2,43),HX_("to",7b,65,00,00),HX_("super",7b,01,c0,84),
};
namespace hscriptBase{

void Tools_obj::__construct() { }

Dynamic Tools_obj::__CreateEmpty() { return new Tools_obj; }

void *Tools_obj::_hx_vtable = 0;

Dynamic Tools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tools_obj > _hx_result = new Tools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Tools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3f653abb;
}

::Array< ::String > Tools_obj::keys;

void Tools_obj::iter( ::Dynamic e, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_de4bd1e9ccf40d5b_36_iter)
HXDLIN(  36)		 ::hscriptBase::ExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN(  36)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE(  37)				 ::hscriptBase::Const _g1 = _g->_hx_getObject(0).StaticCast<  ::hscriptBase::Const >();
            			}
            			break;
            			case (int)1: {
HXLINE(  37)				::String _g1 = _g->_hx_getString(0);
HXDLIN(  37)				 ::Dynamic _g2 = _g->_hx_getObject(1);
            			}
            			break;
            			case (int)2: {
HXLINE(  38)				::String _g1 = _g->_hx_getString(0);
HXDLIN(  38)				 ::hscriptBase::CType _g2 = _g->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN(  38)				 ::Dynamic _g3 = _g->_hx_getObject(3);
HXDLIN(  38)				::Array< ::String > _g4 = _g->_hx_getObject(4).StaticCast< ::Array< ::String > >();
HXDLIN(  38)				{
HXLINE(  38)					 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN(  38)					if (::hx::IsNotNull( e )) {
HXLINE(  38)						f(e);
            					}
            				}
            			}
            			break;
            			case (int)4: {
HXLINE(  39)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  39)				f(e);
            			}
            			break;
            			case (int)5: {
HXLINE(  40)				::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  40)				{
HXLINE(  40)					int _g1 = 0;
HXDLIN(  40)					while((_g1 < el->length)){
HXLINE(  40)						 ::Dynamic e = el->__get(_g1);
HXDLIN(  40)						_g1 = (_g1 + 1);
HXDLIN(  40)						f(e);
            					}
            				}
            			}
            			break;
            			case (int)6: {
HXLINE(  41)				::String _g1 = _g->_hx_getString(1);
HXDLIN(  41)				{
HXLINE(  41)					 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  41)					f(e);
            				}
            			}
            			break;
            			case (int)7: {
HXLINE(  42)				::String _g1 = _g->_hx_getString(0);
HXDLIN(  42)				{
HXLINE(  42)					 ::Dynamic e1 = _g->_hx_getObject(1);
HXDLIN(  42)					 ::Dynamic e2 = _g->_hx_getObject(2);
HXDLIN(  42)					{
HXLINE(  42)						f(e1);
HXDLIN(  42)						f(e2);
            					}
            				}
            			}
            			break;
            			case (int)8: {
HXLINE(  43)				::String _g1 = _g->_hx_getString(0);
HXDLIN(  43)				bool _g2 = _g->_hx_getBool(1);
HXDLIN(  43)				{
HXLINE(  43)					 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN(  43)					f(e);
            				}
            			}
            			break;
            			case (int)9: {
HXLINE(  44)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  44)				::Array< ::Dynamic> args = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  44)				{
HXLINE(  44)					f(e);
HXDLIN(  44)					{
HXLINE(  44)						int _g1 = 0;
HXDLIN(  44)						while((_g1 < args->length)){
HXLINE(  44)							 ::Dynamic a = args->__get(_g1);
HXDLIN(  44)							_g1 = (_g1 + 1);
HXDLIN(  44)							f(a);
            						}
            					}
            				}
            			}
            			break;
            			case (int)10: {
HXLINE(  45)				 ::Dynamic c = _g->_hx_getObject(0);
HXDLIN(  45)				 ::Dynamic e1 = _g->_hx_getObject(1);
HXDLIN(  45)				 ::Dynamic e2 = _g->_hx_getObject(2);
HXDLIN(  45)				{
HXLINE(  45)					f(c);
HXDLIN(  45)					f(e1);
HXDLIN(  45)					if (::hx::IsNotNull( e2 )) {
HXLINE(  45)						f(e2);
            					}
            				}
            			}
            			break;
            			case (int)11: {
HXLINE(  46)				 ::Dynamic c = _g->_hx_getObject(0);
HXDLIN(  46)				 ::Dynamic e = _g->_hx_getObject(1);
HXDLIN(  46)				{
HXLINE(  46)					f(c);
HXDLIN(  46)					f(e);
            				}
            			}
            			break;
            			case (int)12: {
HXLINE(  48)				::String _g1 = _g->_hx_getString(0);
HXDLIN(  48)				{
HXLINE(  48)					 ::Dynamic it = _g->_hx_getObject(1);
HXDLIN(  48)					 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN(  48)					{
HXLINE(  48)						f(it);
HXDLIN(  48)						f(e);
            					}
            				}
            			}
            			break;
            			case (int)14: case (int)15: {
            			}
            			break;
            			case (int)16: {
HXLINE(  50)				::Array< ::Dynamic> _g1 = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  50)				::String _g2 = _g->_hx_getString(2);
HXDLIN(  50)				 ::hscriptBase::CType _g3 = _g->_hx_getObject(3).StaticCast<  ::hscriptBase::CType >();
HXDLIN(  50)				 ::Dynamic _g4 = _g->_hx_getObject(4);
HXDLIN(  50)				 ::Dynamic _g5 = _g->_hx_getObject(5);
HXDLIN(  50)				{
HXLINE(  50)					 ::Dynamic e = _g->_hx_getObject(1);
HXDLIN(  50)					f(e);
            				}
            			}
            			break;
            			case (int)17: {
HXLINE(  51)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  51)				if (::hx::IsNotNull( e )) {
HXLINE(  51)					f(e);
            				}
            			}
            			break;
            			case (int)18: {
HXLINE(  52)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  52)				 ::Dynamic i = _g->_hx_getObject(1);
HXDLIN(  52)				{
HXLINE(  52)					f(e);
HXDLIN(  52)					f(i);
            				}
            			}
            			break;
            			case (int)19: {
HXLINE(  53)				::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  53)				{
HXLINE(  53)					int _g1 = 0;
HXDLIN(  53)					while((_g1 < el->length)){
HXLINE(  53)						 ::Dynamic e = el->__get(_g1);
HXDLIN(  53)						_g1 = (_g1 + 1);
HXDLIN(  53)						f(e);
            					}
            				}
            			}
            			break;
            			case (int)20: {
HXLINE(  54)				::String _g1 = _g->_hx_getString(0);
HXDLIN(  54)				{
HXLINE(  54)					::Array< ::Dynamic> el = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  54)					{
HXLINE(  54)						int _g2 = 0;
HXDLIN(  54)						while((_g2 < el->length)){
HXLINE(  54)							 ::Dynamic e = el->__get(_g2);
HXDLIN(  54)							_g2 = (_g2 + 1);
HXDLIN(  54)							f(e);
            						}
            					}
            				}
            			}
            			break;
            			case (int)21: {
HXLINE(  55)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  55)				f(e);
            			}
            			break;
            			case (int)22: {
HXLINE(  56)				::String _g1 = _g->_hx_getString(1);
HXDLIN(  56)				 ::hscriptBase::CType _g2 = _g->_hx_getObject(2).StaticCast<  ::hscriptBase::CType >();
HXDLIN(  56)				{
HXLINE(  56)					 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  56)					 ::Dynamic c = _g->_hx_getObject(3);
HXDLIN(  56)					{
HXLINE(  56)						f(e);
HXDLIN(  56)						f(c);
            					}
            				}
            			}
            			break;
            			case (int)23: {
HXLINE(  57)				::Array< ::Dynamic> fl = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  57)				{
HXLINE(  57)					int _g1 = 0;
HXDLIN(  57)					while((_g1 < fl->length)){
HXLINE(  57)						 ::Dynamic fi = fl->__get(_g1);
HXDLIN(  57)						_g1 = (_g1 + 1);
HXDLIN(  57)						f( ::Dynamic(fi->__Field(HX_("e",65,00,00,00),::hx::paccDynamic)));
            					}
            				}
            			}
            			break;
            			case (int)24: {
HXLINE(  58)				 ::Dynamic c = _g->_hx_getObject(0);
HXDLIN(  58)				 ::Dynamic e1 = _g->_hx_getObject(1);
HXDLIN(  58)				 ::Dynamic e2 = _g->_hx_getObject(2);
HXDLIN(  58)				{
HXLINE(  58)					f(c);
HXDLIN(  58)					f(e1);
HXDLIN(  58)					f(e2);
            				}
            			}
            			break;
            			case (int)25: {
HXLINE(  59)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  59)				::Array< ::Dynamic> cases = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  59)				 ::Dynamic def = _g->_hx_getObject(2);
HXDLIN(  59)				{
HXLINE(  60)					f(e);
HXLINE(  61)					{
HXLINE(  61)						int _g1 = 0;
HXDLIN(  61)						while((_g1 < cases->length)){
HXLINE(  61)							 ::Dynamic c = cases->__get(_g1);
HXDLIN(  61)							_g1 = (_g1 + 1);
HXLINE(  62)							{
HXLINE(  62)								int _g = 0;
HXDLIN(  62)								::Array< ::Dynamic> _g2 = ( (::Array< ::Dynamic>)(c->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) );
HXDLIN(  62)								while((_g < _g2->length)){
HXLINE(  62)									 ::Dynamic v = _g2->__get(_g);
HXDLIN(  62)									_g = (_g + 1);
HXDLIN(  62)									f(v);
            								}
            							}
HXLINE(  63)							f( ::Dynamic(c->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic)));
            						}
            					}
HXLINE(  65)					if (::hx::IsNotNull( def )) {
HXLINE(  65)						f(def);
            					}
            				}
            			}
            			break;
            			case (int)26: {
HXLINE(  47)				 ::Dynamic c = _g->_hx_getObject(0);
HXDLIN(  47)				 ::Dynamic e = _g->_hx_getObject(1);
HXDLIN(  47)				{
HXLINE(  47)					f(c);
HXDLIN(  47)					f(e);
            				}
            			}
            			break;
            			case (int)30: {
HXLINE(  66)				::String name = _g->_hx_getString(0);
HXDLIN(  66)				::Array< ::Dynamic> args = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  66)				 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN(  66)				{
HXLINE(  66)					if (::hx::IsNotNull( args )) {
HXLINE(  66)						int _g = 0;
HXDLIN(  66)						while((_g < args->length)){
HXLINE(  66)							 ::Dynamic a = args->__get(_g);
HXDLIN(  66)							_g = (_g + 1);
HXDLIN(  66)							f(a);
            						}
            					}
HXDLIN(  66)					f(e);
            				}
            			}
            			break;
            			case (int)31: {
HXLINE(  67)				 ::hscriptBase::CType _g1 = _g->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN(  67)				{
HXLINE(  67)					 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  67)					f(e);
            				}
            			}
            			break;
            			default:{
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,iter,(void))

 ::Dynamic Tools_obj::map( ::Dynamic e, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_de4bd1e9ccf40d5b_72_map)
HXLINE(  73)		 ::hscriptBase::ExprDef edef;
HXDLIN(  73)		 ::hscriptBase::ExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN(  73)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE(  74)				 ::hscriptBase::Const _g1 = _g->_hx_getObject(0).StaticCast<  ::hscriptBase::Const >();
HXLINE(  73)				edef = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            			}
            			break;
            			case (int)1: {
HXLINE(  74)				::String _g1 = _g->_hx_getString(0);
HXDLIN(  74)				 ::Dynamic _g2 = _g->_hx_getObject(1);
HXLINE(  73)				edef = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            			}
            			break;
            			case (int)2: {
HXLINE(  75)				 ::Dynamic _g1 = _g->_hx_getObject(3);
HXDLIN(  75)				::Array< ::String > _g2 = _g->_hx_getObject(4).StaticCast< ::Array< ::String > >();
HXDLIN(  75)				::String n = _g->_hx_getString(0);
HXDLIN(  75)				 ::hscriptBase::CType t = _g->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN(  75)				 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN(  75)				 ::Dynamic edef1;
HXDLIN(  75)				if (::hx::IsNotNull( e )) {
HXLINE(  75)					edef1 = f(e);
            				}
            				else {
HXLINE(  75)					edef1 = null();
            				}
HXLINE(  73)				edef = ::hscriptBase::ExprDef_obj::EVar(n,t,edef1,null(),null());
            			}
            			break;
            			case (int)4: {
HXLINE(  76)				 ::Dynamic e = _g->_hx_getObject(0);
HXLINE(  73)				edef = ::hscriptBase::ExprDef_obj::EParent(f(e));
            			}
            			break;
            			case (int)5: {
HXLINE(  77)				::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  77)				::Array< ::Dynamic> _g1 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  77)				{
HXLINE(  77)					int _g2 = 0;
HXDLIN(  77)					while((_g2 < el->length)){
HXLINE(  77)						 ::Dynamic e = el->__get(_g2);
HXDLIN(  77)						_g2 = (_g2 + 1);
HXDLIN(  77)						_g1->push(f(e));
            					}
            				}
HXLINE(  73)				edef = ::hscriptBase::ExprDef_obj::EBlock(_g1);
            			}
            			break;
            			case (int)6: {
HXLINE(  78)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  78)				::String fi = _g->_hx_getString(1);
HXLINE(  73)				edef = ::hscriptBase::ExprDef_obj::EField(f(e),fi);
            			}
            			break;
            			case (int)7: {
HXLINE(  79)				::String op = _g->_hx_getString(0);
HXDLIN(  79)				 ::Dynamic e1 = _g->_hx_getObject(1);
HXDLIN(  79)				 ::Dynamic e2 = _g->_hx_getObject(2);
HXDLIN(  79)				 ::Dynamic edef1 = f(e1);
HXLINE(  73)				edef = ::hscriptBase::ExprDef_obj::EBinop(op,edef1,f(e2));
            			}
            			break;
            			case (int)8: {
HXLINE(  80)				::String op = _g->_hx_getString(0);
HXDLIN(  80)				bool pre = _g->_hx_getBool(1);
HXDLIN(  80)				 ::Dynamic e = _g->_hx_getObject(2);
HXLINE(  73)				edef = ::hscriptBase::ExprDef_obj::EUnop(op,pre,f(e));
            			}
            			break;
            			case (int)9: {
HXLINE(  81)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  81)				::Array< ::Dynamic> args = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  81)				 ::Dynamic edef1 = f(e);
HXDLIN(  81)				::Array< ::Dynamic> _g1 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  81)				{
HXLINE(  81)					int _g2 = 0;
HXDLIN(  81)					while((_g2 < args->length)){
HXLINE(  81)						 ::Dynamic a = args->__get(_g2);
HXDLIN(  81)						_g2 = (_g2 + 1);
HXDLIN(  81)						_g1->push(f(a));
            					}
            				}
HXLINE(  73)				edef = ::hscriptBase::ExprDef_obj::ECall(edef1,_g1);
            			}
            			break;
            			case (int)10: {
HXLINE(  82)				 ::Dynamic c = _g->_hx_getObject(0);
HXDLIN(  82)				 ::Dynamic e1 = _g->_hx_getObject(1);
HXDLIN(  82)				 ::Dynamic e2 = _g->_hx_getObject(2);
HXDLIN(  82)				 ::Dynamic edef1 = f(c);
HXDLIN(  82)				 ::Dynamic edef2 = f(e1);
HXDLIN(  82)				 ::Dynamic edef3;
HXDLIN(  82)				if (::hx::IsNotNull( e2 )) {
HXLINE(  82)					edef3 = f(e2);
            				}
            				else {
HXLINE(  82)					edef3 = null();
            				}
HXLINE(  73)				edef = ::hscriptBase::ExprDef_obj::EIf(edef1,edef2,edef3);
            			}
            			break;
            			case (int)11: {
HXLINE(  83)				 ::Dynamic c = _g->_hx_getObject(0);
HXDLIN(  83)				 ::Dynamic e = _g->_hx_getObject(1);
HXDLIN(  83)				 ::Dynamic edef1 = f(c);
HXLINE(  73)				edef = ::hscriptBase::ExprDef_obj::EWhile(edef1,f(e));
            			}
            			break;
            			case (int)12: {
HXLINE(  85)				::String v = _g->_hx_getString(0);
HXDLIN(  85)				 ::Dynamic it = _g->_hx_getObject(1);
HXDLIN(  85)				 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN(  85)				 ::Dynamic edef1 = f(it);
HXLINE(  73)				edef = ::hscriptBase::ExprDef_obj::EFor(v,edef1,f(e));
            			}
            			break;
            			case (int)14: case (int)15: {
HXLINE(  73)				edef = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            			}
            			break;
            			case (int)16: {
HXLINE(  86)				 ::Dynamic _g1 = _g->_hx_getObject(4);
HXDLIN(  86)				 ::Dynamic _g2 = _g->_hx_getObject(5);
HXDLIN(  86)				::Array< ::Dynamic> args = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  86)				 ::Dynamic e = _g->_hx_getObject(1);
HXDLIN(  86)				::String name = _g->_hx_getString(2);
HXDLIN(  86)				 ::hscriptBase::CType t = _g->_hx_getObject(3).StaticCast<  ::hscriptBase::CType >();
HXLINE(  73)				edef = ::hscriptBase::ExprDef_obj::EFunction(args,f(e),name,t,null(),null());
            			}
            			break;
            			case (int)17: {
HXLINE(  87)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  87)				 ::Dynamic edef1;
HXDLIN(  87)				if (::hx::IsNotNull( e )) {
HXLINE(  87)					edef1 = f(e);
            				}
            				else {
HXLINE(  87)					edef1 = null();
            				}
HXLINE(  73)				edef = ::hscriptBase::ExprDef_obj::EReturn(edef1);
            			}
            			break;
            			case (int)18: {
HXLINE(  88)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  88)				 ::Dynamic i = _g->_hx_getObject(1);
HXDLIN(  88)				 ::Dynamic edef1 = f(e);
HXLINE(  73)				edef = ::hscriptBase::ExprDef_obj::EArray(edef1,f(i));
            			}
            			break;
            			case (int)19: {
HXLINE(  89)				::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  89)				::Array< ::Dynamic> _g1 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  89)				{
HXLINE(  89)					int _g2 = 0;
HXDLIN(  89)					while((_g2 < el->length)){
HXLINE(  89)						 ::Dynamic e = el->__get(_g2);
HXDLIN(  89)						_g2 = (_g2 + 1);
HXDLIN(  89)						_g1->push(f(e));
            					}
            				}
HXLINE(  73)				edef = ::hscriptBase::ExprDef_obj::EArrayDecl(_g1);
            			}
            			break;
            			case (int)20: {
HXLINE(  90)				::String cl = _g->_hx_getString(0);
HXDLIN(  90)				::Array< ::Dynamic> el = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  90)				::Array< ::Dynamic> _g1 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  90)				{
HXLINE(  90)					int _g2 = 0;
HXDLIN(  90)					while((_g2 < el->length)){
HXLINE(  90)						 ::Dynamic e = el->__get(_g2);
HXDLIN(  90)						_g2 = (_g2 + 1);
HXDLIN(  90)						_g1->push(f(e));
            					}
            				}
HXLINE(  73)				edef = ::hscriptBase::ExprDef_obj::ENew(cl,_g1);
            			}
            			break;
            			case (int)21: {
HXLINE(  91)				 ::Dynamic e = _g->_hx_getObject(0);
HXLINE(  73)				edef = ::hscriptBase::ExprDef_obj::EThrow(f(e));
            			}
            			break;
            			case (int)22: {
HXLINE(  92)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  92)				::String v = _g->_hx_getString(1);
HXDLIN(  92)				 ::hscriptBase::CType t = _g->_hx_getObject(2).StaticCast<  ::hscriptBase::CType >();
HXDLIN(  92)				 ::Dynamic c = _g->_hx_getObject(3);
HXDLIN(  92)				 ::Dynamic edef1 = f(e);
HXLINE(  73)				edef = ::hscriptBase::ExprDef_obj::ETry(edef1,v,t,f(c));
            			}
            			break;
            			case (int)23: {
HXLINE(  93)				::Array< ::Dynamic> fl = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  93)				::Array< ::Dynamic> _g1 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  93)				{
HXLINE(  93)					int _g2 = 0;
HXDLIN(  93)					while((_g2 < fl->length)){
HXLINE(  93)						 ::Dynamic fi = fl->__get(_g2);
HXDLIN(  93)						_g2 = (_g2 + 1);
HXDLIN(  93)						::String fi1 = ( (::String)(fi->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXDLIN(  93)						_g1->push( ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("e",65,00,00,00),f( ::Dynamic(fi->__Field(HX_("e",65,00,00,00),::hx::paccDynamic))))
            							->setFixed(1,HX_("name",4b,72,ff,48),fi1)));
            					}
            				}
HXLINE(  73)				edef = ::hscriptBase::ExprDef_obj::EObject(_g1);
            			}
            			break;
            			case (int)24: {
HXLINE(  94)				 ::Dynamic c = _g->_hx_getObject(0);
HXDLIN(  94)				 ::Dynamic e1 = _g->_hx_getObject(1);
HXDLIN(  94)				 ::Dynamic e2 = _g->_hx_getObject(2);
HXDLIN(  94)				 ::Dynamic edef1 = f(c);
HXDLIN(  94)				 ::Dynamic edef2 = f(e1);
HXLINE(  73)				edef = ::hscriptBase::ExprDef_obj::ETernary(edef1,edef2,f(e2));
            			}
            			break;
            			case (int)25: {
HXLINE(  95)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  95)				::Array< ::Dynamic> cases = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  95)				 ::Dynamic def = _g->_hx_getObject(2);
HXDLIN(  95)				 ::Dynamic edef1 = f(e);
HXDLIN(  95)				::Array< ::Dynamic> _g1 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  95)				{
HXLINE(  95)					int _g2 = 0;
HXDLIN(  95)					while((_g2 < cases->length)){
HXLINE(  95)						 ::Dynamic c = cases->__get(_g2);
HXDLIN(  95)						_g2 = (_g2 + 1);
HXDLIN(  95)						::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  95)						{
HXLINE(  95)							int _g3 = 0;
HXDLIN(  95)							::Array< ::Dynamic> _g4 = ( (::Array< ::Dynamic>)(c->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) );
HXDLIN(  95)							while((_g3 < _g4->length)){
HXLINE(  95)								 ::Dynamic v = _g4->__get(_g3);
HXDLIN(  95)								_g3 = (_g3 + 1);
HXDLIN(  95)								_g->push(f(v));
            							}
            						}
HXDLIN(  95)						_g1->push( ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("expr",35,fd,1d,43),f( ::Dynamic(c->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic))))
            							->setFixed(1,HX_("values",e2,03,b7,4f),_g)));
            					}
            				}
HXDLIN(  95)				 ::Dynamic edef2;
HXDLIN(  95)				if (::hx::IsNull( def )) {
HXLINE(  95)					edef2 = null();
            				}
            				else {
HXLINE(  95)					edef2 = f(def);
            				}
HXLINE(  73)				edef = ::hscriptBase::ExprDef_obj::ESwitch(edef1,_g1,edef2);
            			}
            			break;
            			case (int)26: {
HXLINE(  84)				 ::Dynamic c = _g->_hx_getObject(0);
HXDLIN(  84)				 ::Dynamic e = _g->_hx_getObject(1);
HXDLIN(  84)				 ::Dynamic edef1 = f(c);
HXLINE(  73)				edef = ::hscriptBase::ExprDef_obj::EDoWhile(edef1,f(e));
            			}
            			break;
            			case (int)30: {
HXLINE(  96)				::String name = _g->_hx_getString(0);
HXDLIN(  96)				::Array< ::Dynamic> args = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  96)				 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN(  96)				::Array< ::Dynamic> edef1;
HXDLIN(  96)				if (::hx::IsNull( args )) {
HXLINE(  96)					edef1 = null();
            				}
            				else {
HXLINE(  96)					::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  96)					{
HXLINE(  96)						int _g1 = 0;
HXDLIN(  96)						while((_g1 < args->length)){
HXLINE(  96)							 ::Dynamic a = args->__get(_g1);
HXDLIN(  96)							_g1 = (_g1 + 1);
HXDLIN(  96)							_g->push(f(a));
            						}
            					}
HXDLIN(  96)					edef1 = _g;
            				}
HXLINE(  73)				edef = ::hscriptBase::ExprDef_obj::EMeta(name,edef1,f(e));
            			}
            			break;
            			case (int)31: {
HXLINE(  97)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN(  97)				 ::hscriptBase::CType t = _g->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXLINE(  73)				edef = ::hscriptBase::ExprDef_obj::ECheckType(f(e),t);
            			}
            			break;
            			default:{
HXLINE(  73)				edef = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            			}
            		}
HXLINE( 100)		return  ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("e",65,00,00,00),edef)
            			->setFixed(1,HX_("line",f4,17,b3,47), ::Dynamic(e->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)))
            			->setFixed(2,HX_("pmax",34,f0,5a,4a), ::Dynamic(e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)))
            			->setFixed(3,HX_("pmin",22,f7,5a,4a), ::Dynamic(e->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)))
            			->setFixed(4,HX_("origin",e6,19,01,4b), ::Dynamic(e->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,map,return )

::String Tools_obj::getIdent( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_de4bd1e9ccf40d5b_104_getIdent)
HXDLIN( 104)		 ::hscriptBase::ExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 104)		switch((int)(_g->_hx_getIndex())){
            			case (int)1: {
HXLINE( 105)				 ::Dynamic _g1 = _g->_hx_getObject(1);
HXDLIN( 105)				::String v = _g->_hx_getString(0);
HXDLIN( 105)				return v;
            			}
            			break;
            			case (int)6: {
HXLINE( 106)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 106)				::String f = _g->_hx_getString(1);
HXDLIN( 106)				return ::hscriptBase::Tools_obj::getIdent(e);
            			}
            			break;
            			case (int)18: {
HXLINE( 107)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 107)				 ::Dynamic i = _g->_hx_getObject(1);
HXDLIN( 107)				return ::hscriptBase::Tools_obj::getIdent(e);
            			}
            			break;
            			default:{
HXLINE( 108)				return null();
            			}
            		}
HXLINE( 104)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,getIdent,return )

::String Tools_obj::ctToType( ::hscriptBase::CType ct){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		::String _hx_run( ::hscriptBase::CType ct){
            			HX_STACKFRAME(&_hx_pos_de4bd1e9ccf40d5b_115_ctToType)
HXLINE( 115)			 ::hscriptBase::CType _g = ct;
HXDLIN( 115)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE( 116)					::Array< ::String > path = _g->_hx_getObject(0).StaticCast< ::Array< ::String > >();
HXDLIN( 116)					::Array< ::Dynamic> params = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 116)					if ((path->__get(0) == HX_("Null",a7,ca,e7,33))) {
HXLINE( 117)						return ::hscriptBase::Tools_obj::ctToType(params->__get(0).StaticCast<  ::hscriptBase::CType >());
            					}
HXLINE( 118)					return path->__get(0);
            				}
            				break;
            				case (int)1: {
HXLINE( 119)					::Array< ::Dynamic> _g1 = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 119)					 ::hscriptBase::CType _g2 = _g->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 119)					return HX_("Function",38,67,04,ee);
            				}
            				break;
            				case (int)2: {
HXLINE( 120)					::Array< ::Dynamic> fields = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 120)					return HX_("Anon",6c,b7,4a,2b);
            				}
            				break;
            				case (int)3: {
HXLINE( 119)					 ::hscriptBase::CType _g1 = _g->_hx_getObject(0).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 119)					return HX_("Function",38,67,04,ee);
            				}
            				break;
            				default:{
HXLINE( 121)					return null();
            				}
            			}
HXLINE( 115)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_de4bd1e9ccf40d5b_112_ctToType)
HXLINE( 113)		 ::Dynamic ctToType =  ::Dynamic(new _hx_Closure_0());
HXLINE( 124)		return ( (::String)(ctToType(ct)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,ctToType,return )

bool Tools_obj::compatibleWithEachOther(::String v,::String v2){
            	HX_STACKFRAME(&_hx_pos_de4bd1e9ccf40d5b_127_compatibleWithEachOther)
HXLINE( 128)		::hx::Class c = ::Type_obj::resolveClass(v);
HXDLIN( 128)		::hx::Class c1 = ::Type_obj::resolveClass(v2);
HXLINE( 129)		bool _hx_tmp;
HXDLIN( 129)		if (::hx::IsNotNull( c )) {
HXLINE( 129)			_hx_tmp = ::hx::IsNotNull( c1 );
            		}
            		else {
HXLINE( 129)			_hx_tmp = false;
            		}
HXDLIN( 129)		if (_hx_tmp) {
HXLINE( 131)			::hx::Class superC = ::Type_obj::getSuperClass(c);
HXLINE( 132)			bool _hx_tmp;
HXDLIN( 132)			if (::hx::IsNotNull( superC )) {
HXLINE( 132)				_hx_tmp = ::hx::IsPointerEq( c1,superC );
            			}
            			else {
HXLINE( 132)				_hx_tmp = false;
            			}
HXDLIN( 132)			if (_hx_tmp) {
HXLINE( 133)				return true;
            			}
            		}
HXLINE( 141)		bool chance;
HXDLIN( 141)		if ((v == HX_("Float",7c,35,c4,95))) {
HXLINE( 141)			chance = (v2 == HX_("Int",cf,c4,37,00));
            		}
            		else {
HXLINE( 141)			chance = false;
            		}
HXLINE( 142)		bool secondChance;
HXDLIN( 142)		if ((v != HX_("Dynamic",5f,c7,66,03))) {
HXLINE( 142)			secondChance = (v2 == HX_("null",87,9e,0e,49));
            		}
            		else {
HXLINE( 142)			secondChance = true;
            		}
HXLINE( 143)		if (!(chance)) {
HXLINE( 143)			return secondChance;
            		}
            		else {
HXLINE( 143)			return true;
            		}
HXDLIN( 143)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,compatibleWithEachOther,return )

bool Tools_obj::compatibleWithEachOtherObjects(::hx::Class v,::String v2){
            	HX_STACKFRAME(&_hx_pos_de4bd1e9ccf40d5b_146_compatibleWithEachOtherObjects)
HXLINE( 147)		bool _hx_tmp;
HXDLIN( 147)		if (::hx::IsNotNull( v )) {
HXLINE( 147)			_hx_tmp = ::Std_obj::isOfType(v,::hx::ClassOf< ::hx::Class >());
            		}
            		else {
HXLINE( 147)			_hx_tmp = false;
            		}
HXDLIN( 147)		if (_hx_tmp) {
HXLINE( 148)			if (::hx::IsNotNull( v2 )) {
HXLINE( 150)				::hx::Class cl = ::Type_obj::resolveClass(v2);
HXLINE( 151)				::hx::Class superC = ::Type_obj::getSuperClass(cl);
HXDLIN( 151)				::hx::Class superC2 = ::Type_obj::getSuperClass(v);
HXLINE( 152)				bool _hx_tmp;
HXDLIN( 152)				if (::hx::IsNotNull( superC )) {
HXLINE( 152)					_hx_tmp = ::hx::IsPointerEq( superC,v );
            				}
            				else {
HXLINE( 152)					_hx_tmp = false;
            				}
HXDLIN( 152)				if (_hx_tmp) {
HXLINE( 153)					return true;
            				}
HXLINE( 154)				bool _hx_tmp1;
HXDLIN( 154)				if (::hx::IsNotNull( superC2 )) {
HXLINE( 154)					_hx_tmp1 = ::hx::IsPointerEq( superC2,cl );
            				}
            				else {
HXLINE( 154)					_hx_tmp1 = false;
            				}
HXDLIN( 154)				if (_hx_tmp1) {
HXLINE( 155)					return true;
            				}
            			}
            		}
HXLINE( 158)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,compatibleWithEachOtherObjects,return )

::String Tools_obj::getType( ::Dynamic v, ::Dynamic __o_fn){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,fn) HXARGC(1)
            		::String _hx_run( ::Dynamic v){
            			HX_STACKFRAME(&_hx_pos_de4bd1e9ccf40d5b_163_getType)
HXLINE( 163)			 ::ValueType _g = ::Type_obj::_hx_typeof(v);
HXDLIN( 163)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE( 164)					return HX_("null",87,9e,0e,49);
            				}
            				break;
            				case (int)1: {
HXLINE( 165)					return HX_("Int",cf,c4,37,00);
            				}
            				break;
            				case (int)2: {
HXLINE( 166)					return HX_("Float",7c,35,c4,95);
            				}
            				break;
            				case (int)3: {
HXLINE( 167)					return HX_("Bool",4a,b0,f4,2b);
            				}
            				break;
            				case (int)5: {
HXLINE( 176)					return HX_("Function",38,67,04,ee);
            				}
            				break;
            				case (int)6: {
HXLINE( 168)					::hx::Class v = _g->_hx_getObject(0).StaticCast< ::hx::Class >();
HXDLIN( 168)					::String name = ::Type_obj::getClassName(v);
HXLINE( 169)					if (( (bool)(fn) )) {
HXLINE( 169)						return name;
            					}
HXLINE( 170)					if ((name.indexOf(HX_(".",2e,00,00,00),null()) != -1)) {
HXLINE( 172)						::Array< ::String > split = name.split(HX_(".",2e,00,00,00));
HXLINE( 173)						name = split->__get((split->length - 1));
            					}
HXLINE( 175)					return name;
            				}
            				break;
            				default:{
HXLINE( 177)					::String string = ((HX_("",00,00,00,00) + ::Std_obj::string(::Type_obj::_hx_typeof(v))) + HX_("",00,00,00,00));
HXDLIN( 177)					return ::StringTools_obj::replace(string,HX_("T",54,00,00,00),HX_("",00,00,00,00));
            				}
            			}
HXLINE( 163)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            		 ::Dynamic fn = __o_fn;
            		if (::hx::IsNull(__o_fn)) fn = false;
            	HX_STACKFRAME(&_hx_pos_de4bd1e9ccf40d5b_161_getType)
HXLINE( 162)		 ::Dynamic getType =  ::Dynamic(new _hx_Closure_0(fn));
HXLINE( 180)		return ( (::String)(getType(v)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,getType,return )

 ::hscriptBase::ExprDef Tools_obj::expr( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_de4bd1e9ccf40d5b_185_expr)
HXDLIN( 185)		return e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,expr,return )

 ::Dynamic Tools_obj::mk( ::hscriptBase::ExprDef e, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_de4bd1e9ccf40d5b_193_mk)
HXDLIN( 193)		return  ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("e",65,00,00,00),e)
            			->setFixed(1,HX_("line",f4,17,b3,47), ::Dynamic(p->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)))
            			->setFixed(2,HX_("pmax",34,f0,5a,4a), ::Dynamic(p->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)))
            			->setFixed(3,HX_("pmin",22,f7,5a,4a), ::Dynamic(p->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)))
            			->setFixed(4,HX_("origin",e6,19,01,4b), ::Dynamic(p->__Field(HX_("origin",e6,19,01,4b),::hx::paccDynamic))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,mk,return )


Tools_obj::Tools_obj()
{
}

bool Tools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"mk") ) { outValue = mk_dyn(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { outValue = map_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { outValue = ( keys ); return true; }
		if (HX_FIELD_EQ(inName,"iter") ) { outValue = iter_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"expr") ) { outValue = expr_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { outValue = getType_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getIdent") ) { outValue = getIdent_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ctToType") ) { outValue = ctToType_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"compatibleWithEachOther") ) { outValue = compatibleWithEachOther_dyn(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"compatibleWithEachOtherObjects") ) { outValue = compatibleWithEachOtherObjects_dyn(); return true; }
	}
	return false;
}

bool Tools_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { keys=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Tools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Tools_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Tools_obj::keys,HX_("keys",f4,e1,06,47)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Tools_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tools_obj::keys,"keys");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Tools_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tools_obj::keys,"keys");
};

#endif

::hx::Class Tools_obj::__mClass;

static ::String Tools_obj_sStaticFields[] = {
	HX_("keys",f4,e1,06,47),
	HX_("iter",18,c5,bf,45),
	HX_("map",9c,0a,53,00),
	HX_("getIdent",7a,52,50,17),
	HX_("ctToType",66,c3,92,ad),
	HX_("compatibleWithEachOther",35,5e,84,2b),
	HX_("compatibleWithEachOtherObjects",1f,93,f5,b9),
	HX_("getType",70,a2,8b,1f),
	HX_("expr",35,fd,1d,43),
	HX_("mk",5e,5f,00,00),
	::String(null())
};

void Tools_obj::__register()
{
	Tools_obj _hx_dummy;
	Tools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hscriptBase.Tools",31,24,bd,66);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tools_obj::__GetStatic;
	__mClass->mSetStaticField = &Tools_obj::__SetStatic;
	__mClass->mMarkFunc = Tools_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Tools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Tools_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Tools_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Tools_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_de4bd1e9ccf40d5b_28_boot)
HXDLIN(  28)		keys = ::Array_obj< ::String >::fromData( _hx_array_data_66bd2431_28,43);
            	}
}

} // end namespace hscriptBase
