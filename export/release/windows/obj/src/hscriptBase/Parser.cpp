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
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
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
#ifndef INCLUDED_hscriptBase_FieldAccess
#include <hscriptBase/FieldAccess.h>
#endif
#ifndef INCLUDED_hscriptBase_FieldKind
#include <hscriptBase/FieldKind.h>
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
#ifndef INCLUDED_hscriptBase_Token
#include <hscriptBase/Token.h>
#endif
#ifndef INCLUDED_tea_SScript
#include <tea/SScript.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_948055e9f9c336b1_52_new,"hscriptBase.Parser","new",0xea57b77b,"hscriptBase.Parser.new","hscriptBase/Parser.hx",52,0x85a58834)
static const ::String _hx_array_data_d7b9de09_3[] = {
	HX_("%",25,00,00,00),
};
static const ::String _hx_array_data_d7b9de09_4[] = {
	HX_("*",2a,00,00,00),HX_("/",2f,00,00,00),
};
static const ::String _hx_array_data_d7b9de09_5[] = {
	HX_("+",2b,00,00,00),HX_("-",2d,00,00,00),
};
static const ::String _hx_array_data_d7b9de09_6[] = {
	HX_("<<",80,34,00,00),HX_(">>",40,36,00,00),HX_(">>>",fe,41,2f,00),
};
static const ::String _hx_array_data_d7b9de09_7[] = {
	HX_("|",7c,00,00,00),HX_("&",26,00,00,00),HX_("^",5e,00,00,00),
};
static const ::String _hx_array_data_d7b9de09_8[] = {
	HX_("==",60,35,00,00),HX_("!=",fc,1c,00,00),HX_(">",3e,00,00,00),HX_("<",3c,00,00,00),HX_(">=",3f,36,00,00),HX_("<=",81,34,00,00),HX_("===",dd,7e,2e,00),
};
static const ::String _hx_array_data_d7b9de09_9[] = {
	HX_("...",ee,0f,23,00),
};
static const ::String _hx_array_data_d7b9de09_10[] = {
	HX_("&&",40,21,00,00),
};
static const ::String _hx_array_data_d7b9de09_11[] = {
	HX_("||",80,6c,00,00),
};
static const ::String _hx_array_data_d7b9de09_12[] = {
	HX_("=",3d,00,00,00),HX_("+=",b2,25,00,00),HX_("-=",70,27,00,00),HX_("*=",d3,24,00,00),HX_("/=",2e,29,00,00),HX_("%=",78,20,00,00),HX_("<<=",bd,bb,2d,00),HX_(">>=",fd,41,2f,00),HX_(">>>=",7f,7c,2a,29),HX_("|=",41,6c,00,00),HX_("&=",57,21,00,00),HX_("^=",1f,52,00,00),HX_("=>",61,35,00,00),
};
static const ::String _hx_array_data_d7b9de09_13[] = {
	HX_("->",71,27,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_93_setIntrp,"hscriptBase.Parser","setIntrp",0xf36eaa70,"hscriptBase.Parser.setIntrp","hscriptBase/Parser.hx",93,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_156_error,"hscriptBase.Parser","error",0xd349efa3,"hscriptBase.Parser.error","hscriptBase/Parser.hx",156,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_167_invalidChar,"hscriptBase.Parser","invalidChar",0xe407a788,"hscriptBase.Parser.invalidChar","hscriptBase/Parser.hx",167,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_170_initParser,"hscriptBase.Parser","initParser",0x2b76fa54,"hscriptBase.Parser.initParser","hscriptBase/Parser.hx",170,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_193_parseString,"hscriptBase.Parser","parseString",0xc6a5cf7f,"hscriptBase.Parser.parseString","hscriptBase/Parser.hx",193,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_207_unexpected,"hscriptBase.Parser","unexpected",0xff9d1816,"hscriptBase.Parser.unexpected","hscriptBase/Parser.hx",207,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_212_push,"hscriptBase.Parser","push",0x23c7625f,"hscriptBase.Parser.push","hscriptBase/Parser.hx",212,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_222_ensure,"hscriptBase.Parser","ensure",0xc07b3183,"hscriptBase.Parser.ensure","hscriptBase/Parser.hx",222,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_227_ensureToken,"hscriptBase.Parser","ensureToken",0x266c6676,"hscriptBase.Parser.ensureToken","hscriptBase/Parser.hx",227,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_232_maybe,"hscriptBase.Parser","maybe",0x63473783,"hscriptBase.Parser.maybe","hscriptBase/Parser.hx",232,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_240_getIdent,"hscriptBase.Parser","getIdent",0x3e69c97f,"hscriptBase.Parser.getIdent","hscriptBase/Parser.hx",240,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_253_expr,"hscriptBase.Parser","expr",0x1c844dba,"hscriptBase.Parser.expr","hscriptBase/Parser.hx",253,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_261_pmin,"hscriptBase.Parser","pmin",0x23c147a7,"hscriptBase.Parser.pmin","hscriptBase/Parser.hx",261,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_269_pmax,"hscriptBase.Parser","pmax",0x23c140b9,"hscriptBase.Parser.pmax","hscriptBase/Parser.hx",269,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_275_mk,"hscriptBase.Parser","mk",0xc55b14a3,"hscriptBase.Parser.mk","hscriptBase/Parser.hx",275,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_286_isBlock,"hscriptBase.Parser","isBlock",0x14d7299e,"hscriptBase.Parser.isBlock","hscriptBase/Parser.hx",286,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_305_parseFullExpr,"hscriptBase.Parser","parseFullExpr",0x9260b492,"hscriptBase.Parser.parseFullExpr","hscriptBase/Parser.hx",305,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_325_parseObject,"hscriptBase.Parser","parseObject",0xcab5256d,"hscriptBase.Parser.parseObject","hscriptBase/Parser.hx",325,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_360_interpolate,"hscriptBase.Parser","interpolate",0x596bcedc,"hscriptBase.Parser.interpolate","hscriptBase/Parser.hx",360,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_424_parseExpr,"hscriptBase.Parser","parseExpr",0xd9f2fc63,"hscriptBase.Parser.parseExpr","hscriptBase/Parser.hx",424,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_576_parseLambda,"hscriptBase.Parser","parseLambda",0x0635d9b5,"hscriptBase.Parser.parseLambda","hscriptBase/Parser.hx",576,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_596_parseMetaArgs,"hscriptBase.Parser","parseMetaArgs",0x643378f0,"hscriptBase.Parser.parseMetaArgs","hscriptBase/Parser.hx",596,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_620_mapCompr,"hscriptBase.Parser","mapCompr",0xe8b91b4c,"hscriptBase.Parser.mapCompr","hscriptBase/Parser.hx",620,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_641_makeUnop,"hscriptBase.Parser","makeUnop",0x6b613bcd,"hscriptBase.Parser.makeUnop","hscriptBase/Parser.hx",641,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_651_makeBinop,"hscriptBase.Parser","makeBinop",0x95c73e35,"hscriptBase.Parser.makeBinop","hscriptBase/Parser.hx",651,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_670_parseStructure,"hscriptBase.Parser","parseStructure",0xd5688e45,"hscriptBase.Parser.parseStructure","hscriptBase/Parser.hx",670,0x85a58834)
static const ::String _hx_array_data_d7b9de09_76[] = {
	HX_("function",18,ab,52,14),HX_("var",e7,de,59,00),HX_("final",76,5f,9a,00),
};
static const ::String _hx_array_data_d7b9de09_77[] = {
	HX_("var",e7,de,59,00),HX_("final",76,5f,9a,00),HX_("function",18,ab,52,14),
};
static const ::String _hx_array_data_d7b9de09_78[] = {
	HX_("default",c1,d8,c3,9b),HX_("null",87,9e,0e,49),HX_("get",96,80,4e,00),HX_("set",a2,9b,57,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_1206_parseExprNext,"hscriptBase.Parser","parseExprNext",0xe9a81af6,"hscriptBase.Parser.parseExprNext","hscriptBase/Parser.hx",1206,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_1274_parseFunctionArgs,"hscriptBase.Parser","parseFunctionArgs",0x113cadc3,"hscriptBase.Parser.parseFunctionArgs","hscriptBase/Parser.hx",1274,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_1316_parseFunctionDecl,"hscriptBase.Parser","parseFunctionDecl",0x132e70d0,"hscriptBase.Parser.parseFunctionDecl","hscriptBase/Parser.hx",1316,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_1330_parsePath,"hscriptBase.Parser","parsePath",0xe126e4d3,"hscriptBase.Parser.parsePath","hscriptBase/Parser.hx",1330,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_1343_parseType,"hscriptBase.Parser","parseType",0xe3ddf1e8,"hscriptBase.Parser.parseType","hscriptBase/Parser.hx",1343,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_1390_parseType,"hscriptBase.Parser","parseType",0xe3ddf1e8,"hscriptBase.Parser.parseType","hscriptBase/Parser.hx",1390,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_1467_parseTypeNext,"hscriptBase.Parser","parseTypeNext",0xf0fcb6fb,"hscriptBase.Parser.parseTypeNext","hscriptBase/Parser.hx",1467,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_1489_parseExprList,"hscriptBase.Parser","parseExprList",0xe858b261,"hscriptBase.Parser.parseExprList","hscriptBase/Parser.hx",1489,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_1511_parseModule,"hscriptBase.Parser","parseModule",0x7648db5a,"hscriptBase.Parser.parseModule","hscriptBase/Parser.hx",1511,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_1527_parseMetadata,"hscriptBase.Parser","parseMetadata",0x7b49159d,"hscriptBase.Parser.parseMetadata","hscriptBase/Parser.hx",1527,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_1542_parseParams,"hscriptBase.Parser","parseParams",0xa2f0a1f4,"hscriptBase.Parser.parseParams","hscriptBase/Parser.hx",1542,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_1548_parseModuleDecl,"hscriptBase.Parser","parseModuleDecl",0xfaa20ce4,"hscriptBase.Parser.parseModuleDecl","hscriptBase/Parser.hx",1548,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_1652_parseField,"hscriptBase.Parser","parseField",0x641dddcc,"hscriptBase.Parser.parseField","hscriptBase/Parser.hx",1652,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_1727_readChar,"hscriptBase.Parser","readChar",0x90d0b051,"hscriptBase.Parser.readChar","hscriptBase/Parser.hx",1727,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_1730_readString,"hscriptBase.Parser","readString",0x44550f0c,"hscriptBase.Parser.readString","hscriptBase/Parser.hx",1730,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_1790_token,"hscriptBase.Parser","token",0x744ba6d4,"hscriptBase.Parser.token","hscriptBase/Parser.hx",1790,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_1811__token,"hscriptBase.Parser","_token",0xcc1205ff,"hscriptBase.Parser._token","hscriptBase/Parser.hx",1811,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_2042_parsePreproCond,"hscriptBase.Parser","parsePreproCond",0x4521309a,"hscriptBase.Parser.parsePreproCond","hscriptBase/Parser.hx",2042,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_2059_evalPreproCond,"hscriptBase.Parser","evalPreproCond",0xfa4a2e6d,"hscriptBase.Parser.evalPreproCond","hscriptBase/Parser.hx",2059,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_2057_evalPreproCond,"hscriptBase.Parser","evalPreproCond",0xfa4a2e6d,"hscriptBase.Parser.evalPreproCond","hscriptBase/Parser.hx",2057,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_2200_preprocess,"hscriptBase.Parser","preprocess",0xcbefdef1,"hscriptBase.Parser.preprocess","hscriptBase/Parser.hx",2200,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_2198_preprocess,"hscriptBase.Parser","preprocess",0xcbefdef1,"hscriptBase.Parser.preprocess","hscriptBase/Parser.hx",2198,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_2250_skipTokens,"hscriptBase.Parser","skipTokens",0x33940d7e,"hscriptBase.Parser.skipTokens","hscriptBase/Parser.hx",2250,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_2265_tokenComment,"hscriptBase.Parser","tokenComment",0xdd9d3deb,"hscriptBase.Parser.tokenComment","hscriptBase/Parser.hx",2265,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_2308_constString,"hscriptBase.Parser","constString",0xe3693caf,"hscriptBase.Parser.constString","hscriptBase/Parser.hx",2308,0x85a58834)
HX_LOCAL_STACK_FRAME(_hx_pos_948055e9f9c336b1_2319_tokenString,"hscriptBase.Parser","tokenString",0xdf171ac5,"hscriptBase.Parser.tokenString","hscriptBase/Parser.hx",2319,0x85a58834)
namespace hscriptBase{

void Parser_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_948055e9f9c336b1_52_new)
HXLINE(2197)		this->poppedStack = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 102)		this->uid = 0;
HXLINE(  88)		this->resumeErrors = false;
HXLINE(  83)		this->allowMetadata = false;
HXLINE(  78)		this->allowTypes = true;
HXLINE(  73)		this->allowJSON = false;
HXLINE(  68)		this->packaged = false;
HXLINE(  55)		this->line = 0;
HXLINE( 124)		this->line = 1;
HXLINE( 125)		this->opChars = HX_("+*/-=!><&|^%~",e2,ec,c4,dc);
HXLINE( 126)		this->identChars = HX_("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_",e0,b5,3b,15);
HXLINE( 127)		::Array< ::Dynamic> priorities = ::Array_obj< ::Dynamic>::__new(11)->init(0,::Array_obj< ::String >::fromData( _hx_array_data_d7b9de09_3,1))->init(1,::Array_obj< ::String >::fromData( _hx_array_data_d7b9de09_4,2))->init(2,::Array_obj< ::String >::fromData( _hx_array_data_d7b9de09_5,2))->init(3,::Array_obj< ::String >::fromData( _hx_array_data_d7b9de09_6,3))->init(4,::Array_obj< ::String >::fromData( _hx_array_data_d7b9de09_7,3))->init(5,::Array_obj< ::String >::fromData( _hx_array_data_d7b9de09_8,7))->init(6,::Array_obj< ::String >::fromData( _hx_array_data_d7b9de09_9,1))->init(7,::Array_obj< ::String >::fromData( _hx_array_data_d7b9de09_10,1))->init(8,::Array_obj< ::String >::fromData( _hx_array_data_d7b9de09_11,1))->init(9,::Array_obj< ::String >::fromData( _hx_array_data_d7b9de09_12,13))->init(10,::Array_obj< ::String >::fromData( _hx_array_data_d7b9de09_13,1));
HXLINE( 141)		this->opPriority =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 142)		this->opRightAssoc =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 147)		{
HXLINE( 147)			int _g = 0;
HXDLIN( 147)			int _g1 = priorities->length;
HXDLIN( 147)			while((_g < _g1)){
HXLINE( 147)				_g = (_g + 1);
HXDLIN( 147)				int i = (_g - 1);
HXLINE( 148)				{
HXLINE( 148)					int _g1 = 0;
HXDLIN( 148)					::Array< ::String > _g2 = priorities->__get(i).StaticCast< ::Array< ::String > >();
HXDLIN( 148)					while((_g1 < _g2->length)){
HXLINE( 148)						::String x = _g2->__get(_g1);
HXDLIN( 148)						_g1 = (_g1 + 1);
HXLINE( 149)						this->opPriority->set(x,i);
HXLINE( 150)						if ((i == 9)) {
HXLINE( 150)							this->opRightAssoc->set(x,true);
            						}
            					}
            				}
            			}
            		}
HXLINE( 152)		{
HXLINE( 152)			{
HXLINE( 152)				::String x = HX_("!",21,00,00,00);
HXLINE( 153)				{
HXLINE( 153)					int _hx_tmp;
HXDLIN( 153)					bool _hx_tmp1;
HXDLIN( 153)					if ((x != HX_("++",a0,25,00,00))) {
HXLINE( 153)						_hx_tmp1 = (x == HX_("--",60,27,00,00));
            					}
            					else {
HXLINE( 153)						_hx_tmp1 = true;
            					}
HXDLIN( 153)					if (_hx_tmp1) {
HXLINE( 153)						_hx_tmp = -1;
            					}
            					else {
HXLINE( 153)						_hx_tmp = -2;
            					}
HXDLIN( 153)					this->opPriority->set(x,_hx_tmp);
            				}
            			}
HXLINE( 152)			{
HXLINE( 152)				::String x1 = HX_("++",a0,25,00,00);
HXLINE( 153)				{
HXLINE( 153)					int _hx_tmp2;
HXDLIN( 153)					bool _hx_tmp3;
HXDLIN( 153)					if ((x1 != HX_("++",a0,25,00,00))) {
HXLINE( 153)						_hx_tmp3 = (x1 == HX_("--",60,27,00,00));
            					}
            					else {
HXLINE( 153)						_hx_tmp3 = true;
            					}
HXDLIN( 153)					if (_hx_tmp3) {
HXLINE( 153)						_hx_tmp2 = -1;
            					}
            					else {
HXLINE( 153)						_hx_tmp2 = -2;
            					}
HXDLIN( 153)					this->opPriority->set(x1,_hx_tmp2);
            				}
            			}
HXLINE( 152)			{
HXLINE( 152)				::String x2 = HX_("--",60,27,00,00);
HXLINE( 153)				{
HXLINE( 153)					int _hx_tmp4;
HXDLIN( 153)					bool _hx_tmp5;
HXDLIN( 153)					if ((x2 != HX_("++",a0,25,00,00))) {
HXLINE( 153)						_hx_tmp5 = (x2 == HX_("--",60,27,00,00));
            					}
            					else {
HXLINE( 153)						_hx_tmp5 = true;
            					}
HXDLIN( 153)					if (_hx_tmp5) {
HXLINE( 153)						_hx_tmp4 = -1;
            					}
            					else {
HXLINE( 153)						_hx_tmp4 = -2;
            					}
HXDLIN( 153)					this->opPriority->set(x2,_hx_tmp4);
            				}
            			}
HXLINE( 152)			{
HXLINE( 152)				::String x3 = HX_("~",7e,00,00,00);
HXLINE( 153)				{
HXLINE( 153)					int _hx_tmp6;
HXDLIN( 153)					bool _hx_tmp7;
HXDLIN( 153)					if ((x3 != HX_("++",a0,25,00,00))) {
HXLINE( 153)						_hx_tmp7 = (x3 == HX_("--",60,27,00,00));
            					}
            					else {
HXLINE( 153)						_hx_tmp7 = true;
            					}
HXDLIN( 153)					if (_hx_tmp7) {
HXLINE( 153)						_hx_tmp6 = -1;
            					}
            					else {
HXLINE( 153)						_hx_tmp6 = -2;
            					}
HXDLIN( 153)					this->opPriority->set(x3,_hx_tmp6);
            				}
            			}
HXLINE( 152)			{
HXLINE( 152)				::String x4 = HX_("cast",bf,1e,ba,41);
HXLINE( 153)				{
HXLINE( 153)					int _hx_tmp8;
HXDLIN( 153)					bool _hx_tmp9;
HXDLIN( 153)					if ((x4 != HX_("++",a0,25,00,00))) {
HXLINE( 153)						_hx_tmp9 = (x4 == HX_("--",60,27,00,00));
            					}
            					else {
HXLINE( 153)						_hx_tmp9 = true;
            					}
HXDLIN( 153)					if (_hx_tmp9) {
HXLINE( 153)						_hx_tmp8 = -1;
            					}
            					else {
HXLINE( 153)						_hx_tmp8 = -2;
            					}
HXDLIN( 153)					this->opPriority->set(x4,_hx_tmp8);
            				}
            			}
HXLINE( 152)			{
HXLINE( 152)				::String x5 = HX_("untyped",71,67,5c,17);
HXLINE( 153)				{
HXLINE( 153)					int _hx_tmp10;
HXDLIN( 153)					bool _hx_tmp11;
HXDLIN( 153)					if ((x5 != HX_("++",a0,25,00,00))) {
HXLINE( 153)						_hx_tmp11 = (x5 == HX_("--",60,27,00,00));
            					}
            					else {
HXLINE( 153)						_hx_tmp11 = true;
            					}
HXDLIN( 153)					if (_hx_tmp11) {
HXLINE( 153)						_hx_tmp10 = -1;
            					}
            					else {
HXLINE( 153)						_hx_tmp10 = -2;
            					}
HXDLIN( 153)					this->opPriority->set(x5,_hx_tmp10);
            				}
            			}
            		}
            	}

Dynamic Parser_obj::__CreateEmpty() { return new Parser_obj; }

void *Parser_obj::_hx_vtable = 0;

Dynamic Parser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Parser_obj > _hx_result = new Parser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Parser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x40ba8d5b;
}

 ::hscriptBase::Interp Parser_obj::setIntrp( ::hscriptBase::Interp interp){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_93_setIntrp)
HXDLIN(  93)		return (this->interp = interp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,setIntrp,return )

void Parser_obj::error( ::hscriptBase::ErrorDef err, ::Dynamic pmin, ::Dynamic pmax){
            	HX_GC_STACKFRAME(&_hx_pos_948055e9f9c336b1_156_error)
HXLINE( 157)		 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line);
HXLINE( 158)		if (!(this->resumeErrors)) {
HXLINE( 160)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,error,(void))

void Parser_obj::invalidChar(int c){
            	HX_GC_STACKFRAME(&_hx_pos_948055e9f9c336b1_167_invalidChar)
HXDLIN( 167)		 ::hscriptBase::ErrorDef err = ::hscriptBase::ErrorDef_obj::EInvalidChar(c);
HXDLIN( 167)		 ::Dynamic pmin = (this->readPos - 1);
HXDLIN( 167)		 ::Dynamic pmax = (this->readPos - 1);
HXDLIN( 167)		 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line);
HXDLIN( 167)		if (!(this->resumeErrors)) {
HXDLIN( 167)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,invalidChar,(void))

void Parser_obj::initParser(::String origin){
            	HX_GC_STACKFRAME(&_hx_pos_948055e9f9c336b1_170_initParser)
HXLINE( 171)		this->preprocStack = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 173)		this->origin = origin;
HXLINE( 174)		this->readPos = 0;
HXLINE( 175)		this->tokenMin = (this->oldTokenMin = 0);
HXLINE( 176)		this->tokenMax = (this->oldTokenMax = 0);
HXLINE( 177)		this->tokens =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE( 183)		this->_hx_char = -1;
HXLINE( 184)		this->ops = ::Array_obj< bool >::__new();
HXLINE( 185)		this->idents = ::Array_obj< bool >::__new();
HXLINE( 186)		this->uid = 0;
HXLINE( 187)		{
HXLINE( 187)			int _g = 0;
HXDLIN( 187)			int _g1 = this->opChars.length;
HXDLIN( 187)			while((_g < _g1)){
HXLINE( 187)				_g = (_g + 1);
HXDLIN( 187)				int i = (_g - 1);
HXLINE( 188)				this->ops[( (int)(this->opChars.charCodeAt(i)) )] = true;
            			}
            		}
HXLINE( 189)		{
HXLINE( 189)			int _g2 = 0;
HXDLIN( 189)			int _g3 = this->identChars.length;
HXDLIN( 189)			while((_g2 < _g3)){
HXLINE( 189)				_g2 = (_g2 + 1);
HXDLIN( 189)				int i = (_g2 - 1);
HXLINE( 190)				this->idents[( (int)(this->identChars.charCodeAt(i)) )] = true;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,initParser,(void))

 ::Dynamic Parser_obj::parseString(::String s,::String __o_origin){
            		::String origin = __o_origin;
            		if (::hx::IsNull(__o_origin)) origin = HX_("hscript",73,8c,18,2c);
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_193_parseString)
HXLINE( 194)		this->initParser(origin);
HXLINE( 195)		this->input = s;
HXLINE( 196)		this->readPos = 0;
HXLINE( 197)		::Array< ::Dynamic> a = ::Array_obj< ::Dynamic>::__new();
HXLINE( 198)		while(true){
HXLINE( 199)			 ::hscriptBase::Token tk = this->token();
HXLINE( 200)			if (::hx::IsPointerEq( tk,::hscriptBase::Token_obj::TEof_dyn() )) {
HXLINE( 200)				goto _hx_goto_20;
            			}
HXLINE( 201)			{
HXLINE( 201)				this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("t",74,00,00,00),tk)
            					->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            					->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 201)				this->tokenMin = this->oldTokenMin;
HXDLIN( 201)				this->tokenMax = this->oldTokenMax;
            			}
HXLINE( 202)			this->parseFullExpr(a);
            		}
            		_hx_goto_20:;
HXLINE( 204)		if ((a->length == 1)) {
HXLINE( 204)			return a->__get(0);
            		}
            		else {
HXLINE( 204)			 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EBlock(a);
HXDLIN( 204)			 ::Dynamic pmin = 0;
HXDLIN( 204)			 ::Dynamic pmax = null();
HXDLIN( 204)			if (::hx::IsNull( e )) {
HXLINE( 204)				return null();
            			}
            			else {
HXLINE( 204)				if (::hx::IsNull( pmin )) {
HXLINE( 204)					pmin = this->tokenMin;
            				}
HXDLIN( 204)				if (::hx::IsNull( pmax )) {
HXLINE( 204)					pmax = this->tokenMax;
            				}
HXDLIN( 204)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
            		}
HXDLIN( 204)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,parseString,return )

 ::Dynamic Parser_obj::unexpected( ::hscriptBase::Token tk){
            	HX_GC_STACKFRAME(&_hx_pos_948055e9f9c336b1_207_unexpected)
HXLINE( 208)		{
HXLINE( 208)			 ::hscriptBase::ErrorDef err = ::hscriptBase::ErrorDef_obj::EUnexpected(this->tokenString(tk));
HXDLIN( 208)			 ::Dynamic pmin = this->tokenMin;
HXDLIN( 208)			 ::Dynamic pmax = this->tokenMax;
HXDLIN( 208)			 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line);
HXDLIN( 208)			if (!(this->resumeErrors)) {
HXLINE( 208)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line)));
            			}
            		}
HXLINE( 209)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,unexpected,return )

void Parser_obj::push( ::hscriptBase::Token tk){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_212_push)
HXLINE( 214)		this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("t",74,00,00,00),tk)
            			->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            			->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXLINE( 215)		this->tokenMin = this->oldTokenMin;
HXLINE( 216)		this->tokenMax = this->oldTokenMax;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,push,(void))

void Parser_obj::ensure( ::hscriptBase::Token tk){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_222_ensure)
HXLINE( 223)		 ::hscriptBase::Token t = this->token();
HXLINE( 224)		if (::hx::IsPointerNotEq( t,tk )) {
HXLINE( 224)			this->unexpected(t);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,ensure,(void))

void Parser_obj::ensureToken( ::hscriptBase::Token tk){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_227_ensureToken)
HXLINE( 228)		 ::hscriptBase::Token t = this->token();
HXLINE( 229)		if (!(__hxcpp_enum_eq(t,tk))) {
HXLINE( 229)			this->unexpected(t);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,ensureToken,(void))

bool Parser_obj::maybe( ::hscriptBase::Token tk){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_232_maybe)
HXLINE( 233)		 ::hscriptBase::Token t = this->token();
HXLINE( 234)		if (__hxcpp_enum_eq(t,tk)) {
HXLINE( 235)			return true;
            		}
HXLINE( 236)		{
HXLINE( 236)			this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("t",74,00,00,00),t)
            				->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            				->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 236)			this->tokenMin = this->oldTokenMin;
HXDLIN( 236)			this->tokenMax = this->oldTokenMax;
            		}
HXLINE( 237)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,maybe,return )

::String Parser_obj::getIdent( ::Dynamic __o_thr){
            		 ::Dynamic thr = __o_thr;
            		if (::hx::IsNull(__o_thr)) thr = true;
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_240_getIdent)
HXLINE( 241)		 ::hscriptBase::Token tk = this->token();
HXLINE( 242)		if ((tk->_hx_getIndex() == 2)) {
HXLINE( 243)			::String id = tk->_hx_getString(0);
HXDLIN( 243)			return id;
            		}
            		else {
HXLINE( 245)			if (( (bool)(thr) )) {
HXLINE( 246)				this->unexpected(tk);
            			}
HXLINE( 247)			return null();
            		}
HXLINE( 242)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,getIdent,return )

 ::hscriptBase::ExprDef Parser_obj::expr( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_253_expr)
HXDLIN( 253)		return e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,expr,return )

int Parser_obj::pmin( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_261_pmin)
HXDLIN( 261)		if (::hx::IsNull( e )) {
HXDLIN( 261)			return 0;
            		}
            		else {
HXDLIN( 261)			return ( (int)(e->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) );
            		}
HXDLIN( 261)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,pmin,return )

int Parser_obj::pmax( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_269_pmax)
HXDLIN( 269)		if (::hx::IsNull( e )) {
HXDLIN( 269)			return 0;
            		}
            		else {
HXDLIN( 269)			return ( (int)(e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic)) );
            		}
HXDLIN( 269)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,pmax,return )

 ::Dynamic Parser_obj::mk( ::hscriptBase::ExprDef e, ::Dynamic pmin, ::Dynamic pmax){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_275_mk)
HXLINE( 277)		if (::hx::IsNull( e )) {
HXLINE( 277)			return null();
            		}
HXLINE( 278)		if (::hx::IsNull( pmin )) {
HXLINE( 278)			pmin = this->tokenMin;
            		}
HXLINE( 279)		if (::hx::IsNull( pmax )) {
HXLINE( 279)			pmax = this->tokenMax;
            		}
HXLINE( 280)		return  ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("e",65,00,00,00),e)
            			->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            			->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            			->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            			->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            	}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,mk,return )

bool Parser_obj::isBlock( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_286_isBlock)
HXLINE( 287)		if (::hx::IsNull( e )) {
HXLINE( 287)			return false;
            		}
HXLINE( 288)		 ::hscriptBase::ExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 288)		switch((int)(_g->_hx_getIndex())){
            			case (int)2: {
HXLINE( 291)				::String _g1 = _g->_hx_getString(0);
HXDLIN( 291)				 ::Dynamic _g2 = _g->_hx_getObject(3);
HXDLIN( 291)				::Array< ::String > _g3 = _g->_hx_getObject(4).StaticCast< ::Array< ::String > >();
HXDLIN( 291)				 ::hscriptBase::CType t = _g->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 291)				 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN( 291)				if (::hx::IsNotNull( e )) {
HXLINE( 291)					return this->isBlock(e);
            				}
            				else {
HXLINE( 291)					if (::hx::IsNotNull( t )) {
HXLINE( 291)						if (::hx::IsNull( t )) {
HXLINE( 291)							return false;
            						}
            						else {
HXLINE( 291)							if ((t->_hx_getIndex() == 2)) {
HXLINE( 291)								::Array< ::Dynamic> _g = t->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 291)								return true;
            							}
            							else {
HXLINE( 291)								return false;
            							}
            						}
            					}
            					else {
HXLINE( 291)						return false;
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 289)				::Array< ::Dynamic> _g1 = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 289)				return true;
            			}
            			break;
            			case (int)7: {
HXLINE( 293)				::String _g1 = _g->_hx_getString(0);
HXDLIN( 293)				 ::Dynamic _g2 = _g->_hx_getObject(1);
HXDLIN( 293)				 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN( 293)				return this->isBlock(e);
            			}
            			break;
            			case (int)8: {
HXLINE( 294)				::String _g1 = _g->_hx_getString(0);
HXDLIN( 294)				bool prefix = _g->_hx_getBool(1);
HXDLIN( 294)				 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN( 294)				if (!(prefix)) {
HXLINE( 294)					return this->isBlock(e);
            				}
            				else {
HXLINE( 294)					return false;
            				}
            			}
            			break;
            			case (int)10: {
HXLINE( 292)				 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 292)				 ::Dynamic e1 = _g->_hx_getObject(1);
HXDLIN( 292)				 ::Dynamic e2 = _g->_hx_getObject(2);
HXDLIN( 292)				if (::hx::IsNotNull( e2 )) {
HXLINE( 292)					return this->isBlock(e2);
            				}
            				else {
HXLINE( 292)					return this->isBlock(e1);
            				}
            			}
            			break;
            			case (int)11: {
HXLINE( 295)				 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 295)				 ::Dynamic e = _g->_hx_getObject(1);
HXDLIN( 295)				return this->isBlock(e);
            			}
            			break;
            			case (int)12: {
HXLINE( 297)				::String _g1 = _g->_hx_getString(0);
HXDLIN( 297)				 ::Dynamic _g2 = _g->_hx_getObject(1);
HXDLIN( 297)				 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN( 297)				return this->isBlock(e);
            			}
            			break;
            			case (int)16: {
HXLINE( 290)				::Array< ::Dynamic> _g1 = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 290)				::String _g2 = _g->_hx_getString(2);
HXDLIN( 290)				 ::hscriptBase::CType _g3 = _g->_hx_getObject(3).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 290)				 ::Dynamic _g4 = _g->_hx_getObject(4);
HXDLIN( 290)				 ::Dynamic _g5 = _g->_hx_getObject(5);
HXDLIN( 290)				 ::Dynamic e = _g->_hx_getObject(1);
HXDLIN( 290)				return this->isBlock(e);
            			}
            			break;
            			case (int)17: {
HXLINE( 298)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 298)				if (::hx::IsNotNull( e )) {
HXLINE( 298)					return this->isBlock(e);
            				}
            				else {
HXLINE( 298)					return false;
            				}
            			}
            			break;
            			case (int)22: {
HXLINE( 299)				 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 299)				::String _g2 = _g->_hx_getString(1);
HXDLIN( 299)				 ::hscriptBase::CType _g3 = _g->_hx_getObject(2).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 299)				 ::Dynamic e = _g->_hx_getObject(3);
HXDLIN( 299)				return this->isBlock(e);
            			}
            			break;
            			case (int)23: {
HXLINE( 289)				::Array< ::Dynamic> _g1 = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 289)				return true;
            			}
            			break;
            			case (int)25: {
HXLINE( 289)				 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 289)				::Array< ::Dynamic> _g2 = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 289)				 ::Dynamic _g3 = _g->_hx_getObject(2);
HXDLIN( 289)				return true;
            			}
            			break;
            			case (int)26: {
HXLINE( 296)				 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 296)				 ::Dynamic e = _g->_hx_getObject(1);
HXDLIN( 296)				return this->isBlock(e);
            			}
            			break;
            			case (int)30: {
HXLINE( 300)				::String _g1 = _g->_hx_getString(0);
HXDLIN( 300)				::Array< ::Dynamic> _g2 = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 300)				 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN( 300)				return this->isBlock(e);
            			}
            			break;
            			default:{
HXLINE( 301)				return false;
            			}
            		}
HXLINE( 288)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,isBlock,return )

void Parser_obj::parseFullExpr(::Array< ::Dynamic> exprs){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_305_parseFullExpr)
HXLINE( 306)		 ::Dynamic e = this->parseExpr();
HXLINE( 307)		exprs->push(e);
HXLINE( 309)		 ::hscriptBase::Token tk = this->token();
HXLINE( 311)		while(true){
HXLINE( 311)			bool _hx_tmp;
HXDLIN( 311)			bool _hx_tmp1;
HXDLIN( 311)			if (::hx::IsPointerEq( tk,::hscriptBase::Token_obj::TComma_dyn() )) {
HXLINE( 311)				_hx_tmp1 = ::hx::IsNotNull( e );
            			}
            			else {
HXLINE( 311)				_hx_tmp1 = false;
            			}
HXDLIN( 311)			if (_hx_tmp1) {
HXLINE( 311)				 ::hscriptBase::ExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 311)				if ((_g->_hx_getIndex() == 2)) {
HXLINE( 311)					::String _g1 = _g->_hx_getString(0);
HXDLIN( 311)					 ::hscriptBase::CType _g2 = _g->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN( 311)					 ::Dynamic _g3 = _g->_hx_getObject(2);
HXDLIN( 311)					 ::Dynamic _g4 = _g->_hx_getObject(3);
HXDLIN( 311)					::Array< ::String > _g5 = _g->_hx_getObject(4).StaticCast< ::Array< ::String > >();
HXDLIN( 311)					_hx_tmp = true;
            				}
            				else {
HXLINE( 311)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE( 311)				_hx_tmp = false;
            			}
HXDLIN( 311)			if (!(_hx_tmp)) {
HXLINE( 311)				goto _hx_goto_33;
            			}
HXLINE( 312)			e = this->parseStructure(HX_("var",e7,de,59,00),null(),null());
HXLINE( 313)			exprs->push(e);
HXLINE( 314)			tk = this->token();
            		}
            		_hx_goto_33:;
HXLINE( 317)		bool _hx_tmp;
HXDLIN( 317)		if (::hx::IsPointerNotEq( tk,::hscriptBase::Token_obj::TStatement_dyn() )) {
HXLINE( 317)			_hx_tmp = ::hx::IsPointerNotEq( tk,::hscriptBase::Token_obj::TEof_dyn() );
            		}
            		else {
HXLINE( 317)			_hx_tmp = false;
            		}
HXDLIN( 317)		if (_hx_tmp) {
HXLINE( 318)			if (this->isBlock(e)) {
HXLINE( 319)				this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("t",74,00,00,00),tk)
            					->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            					->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 319)				this->tokenMin = this->oldTokenMin;
HXDLIN( 319)				this->tokenMax = this->oldTokenMax;
            			}
            			else {
HXLINE( 321)				this->unexpected(tk);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseFullExpr,(void))

 ::Dynamic Parser_obj::parseObject( ::Dynamic p1){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_325_parseObject)
HXLINE( 327)		::Array< ::Dynamic> fl = ::Array_obj< ::Dynamic>::__new();
HXLINE( 328)		while(true){
HXLINE( 329)			 ::hscriptBase::Token tk = this->token();
HXLINE( 330)			::String id = null();
HXLINE( 331)			switch((int)(tk->_hx_getIndex())){
            				case (int)1: {
HXLINE( 333)					 ::hscriptBase::Const c = tk->_hx_getObject(0).StaticCast<  ::hscriptBase::Const >();
HXDLIN( 333)					{
HXLINE( 334)						if (!(this->allowJSON)) {
HXLINE( 335)							this->unexpected(tk);
            						}
HXLINE( 336)						if ((c->_hx_getIndex() == 2)) {
HXLINE( 337)							 ::Dynamic _g = c->_hx_getObject(1);
HXDLIN( 337)							{
HXLINE( 337)								::String s = c->_hx_getString(0);
HXDLIN( 337)								id = s;
            							}
            						}
            						else {
HXLINE( 338)							this->unexpected(tk);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 332)					::String i = tk->_hx_getString(0);
HXDLIN( 332)					id = i;
            				}
            				break;
            				case (int)7: {
HXLINE( 341)					goto _hx_goto_35;
            				}
            				break;
            				default:{
HXLINE( 343)					this->unexpected(tk);
HXLINE( 344)					goto _hx_goto_35;
            				}
            			}
HXLINE( 346)			{
HXLINE( 346)				 ::hscriptBase::Token t = this->token();
HXDLIN( 346)				if (::hx::IsPointerNotEq( t,::hscriptBase::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 346)					this->unexpected(t);
            				}
            			}
HXLINE( 347)			fl->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("e",65,00,00,00),this->parseExpr())
            				->setFixed(1,HX_("name",4b,72,ff,48),id)));
HXLINE( 348)			tk = this->token();
HXLINE( 349)			switch((int)(tk->_hx_getIndex())){
            				case (int)7: {
HXLINE( 351)					goto _hx_goto_35;
            				}
            				break;
            				case (int)9: {
            				}
            				break;
            				default:{
HXLINE( 354)					this->unexpected(tk);
            				}
            			}
            		}
            		_hx_goto_35:;
HXLINE( 357)		 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EObject(fl);
HXDLIN( 357)		 ::Dynamic pmin = p1;
HXDLIN( 357)		 ::Dynamic pmax = null();
HXDLIN( 357)		 ::Dynamic _hx_tmp;
HXDLIN( 357)		if (::hx::IsNull( e )) {
HXLINE( 357)			_hx_tmp = null();
            		}
            		else {
HXLINE( 357)			if (::hx::IsNull( pmin )) {
HXLINE( 357)				pmin = this->tokenMin;
            			}
HXDLIN( 357)			if (::hx::IsNull( pmax )) {
HXLINE( 357)				pmax = this->tokenMax;
            			}
HXDLIN( 357)			_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("e",65,00,00,00),e)
            				->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            				->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            				->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            				->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            		}
HXDLIN( 357)		return this->parseExprNext(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseObject,return )

 ::Dynamic Parser_obj::interpolate(::String s){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_360_interpolate)
HXLINE( 361)		::Array< ::Dynamic> exprs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 362)		int dollarIndex = s.indexOf(HX_("$",24,00,00,00),null());
HXLINE( 364)		while((dollarIndex > -1)){
HXLINE( 365)			int i = dollarIndex;
HXLINE( 366)			i = (i + 1);
HXDLIN( 366)			::String _hx_char = s.charAt(i);
HXLINE( 367)			::String _hx_switch_0 = _hx_char;
            			if (  (_hx_switch_0==HX_("$",24,00,00,00)) ){
HXLINE( 369)				::String s1 = s.substring(0,i);
HXDLIN( 369)				s = (s1 + s.substr((i + 1),null()));
HXDLIN( 369)				goto _hx_goto_39;
            			}
            			if (  (_hx_switch_0==HX_("{",7b,00,00,00)) ){
HXLINE( 371)				::String expr = HX_("",00,00,00,00);
HXLINE( 372)				int depth = 0;
HXLINE( 374)				::String precedingSub = s.substring(0,(i - 1));
HXLINE( 375)				if ((precedingSub != HX_("",00,00,00,00))) {
HXLINE( 376)					 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EConst(::hscriptBase::Const_obj::CString(precedingSub,null()));
HXDLIN( 376)					 ::Dynamic pmin = null();
HXDLIN( 376)					 ::Dynamic pmax = null();
HXDLIN( 376)					 ::Dynamic _hx_tmp;
HXDLIN( 376)					if (::hx::IsNull( e )) {
HXLINE( 376)						_hx_tmp = null();
            					}
            					else {
HXLINE( 376)						if (::hx::IsNull( pmin )) {
HXLINE( 376)							pmin = this->tokenMin;
            						}
HXDLIN( 376)						if (::hx::IsNull( pmax )) {
HXLINE( 376)							pmax = this->tokenMax;
            						}
HXDLIN( 376)						_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
HXDLIN( 376)					exprs->push(_hx_tmp);
            				}
HXLINE( 378)				while((i < s.length)){
HXLINE( 379)					i = (i + 1);
HXDLIN( 379)					_hx_char = s.charAt(i);
HXLINE( 380)					if ((_hx_char == HX_("{",7b,00,00,00))) {
HXLINE( 381)						depth = (depth + 1);
            					}
            					else {
HXLINE( 382)						if ((_hx_char == HX_("}",7d,00,00,00))) {
HXLINE( 383)							depth = (depth - 1);
HXLINE( 384)							if ((depth < 0)) {
HXLINE( 385)								goto _hx_goto_40;
            							}
            						}
            					}
HXLINE( 387)					expr = (expr + _hx_char);
            				}
            				_hx_goto_40:;
HXLINE( 390)				exprs->push(this->parseString(expr,this->origin));
HXLINE( 391)				s = s.substr((i + 1),null());
HXLINE( 370)				goto _hx_goto_39;
            			}
            			/* default */{
HXLINE( 392)				::String c = _hx_char;
HXDLIN( 392)				bool _hx_tmp;
HXDLIN( 392)				bool _hx_tmp1;
HXDLIN( 392)				if ((c != HX_("_",5f,00,00,00))) {
HXLINE( 392)					if ((c >= HX_("a",61,00,00,00))) {
HXLINE( 392)						_hx_tmp1 = (c <= HX_("z",7a,00,00,00));
            					}
            					else {
HXLINE( 392)						_hx_tmp1 = false;
            					}
            				}
            				else {
HXLINE( 392)					_hx_tmp1 = true;
            				}
HXDLIN( 392)				if (!(_hx_tmp1)) {
HXLINE( 392)					if ((c >= HX_("A",41,00,00,00))) {
HXLINE( 392)						_hx_tmp = (c <= HX_("Z",5a,00,00,00));
            					}
            					else {
HXLINE( 392)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 392)					_hx_tmp = true;
            				}
HXDLIN( 392)				if (_hx_tmp) {
HXLINE( 393)					::String ident = c;
HXLINE( 394)					::String precedingSub = s.substring(0,(i - 1));
HXLINE( 395)					if ((precedingSub != HX_("",00,00,00,00))) {
HXLINE( 396)						 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EConst(::hscriptBase::Const_obj::CString(precedingSub,null()));
HXDLIN( 396)						 ::Dynamic pmin = null();
HXDLIN( 396)						 ::Dynamic pmax = null();
HXDLIN( 396)						 ::Dynamic _hx_tmp;
HXDLIN( 396)						if (::hx::IsNull( e )) {
HXLINE( 396)							_hx_tmp = null();
            						}
            						else {
HXLINE( 396)							if (::hx::IsNull( pmin )) {
HXLINE( 396)								pmin = this->tokenMin;
            							}
HXDLIN( 396)							if (::hx::IsNull( pmax )) {
HXLINE( 396)								pmax = this->tokenMax;
            							}
HXDLIN( 396)							_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(5)
            								->setFixed(0,HX_("e",65,00,00,00),e)
            								->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            								->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            								->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            								->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            						}
HXDLIN( 396)						exprs->push(_hx_tmp);
            					}
HXLINE( 397)					while(true){
HXLINE( 398)						i = (i + 1);
HXDLIN( 398)						_hx_char = s.charAt(i);
HXLINE( 399)						bool _hx_tmp;
HXDLIN( 399)						bool _hx_tmp1;
HXDLIN( 399)						bool _hx_tmp2;
HXDLIN( 399)						if ((_hx_char != HX_("_",5f,00,00,00))) {
HXLINE( 400)							if ((_hx_char >= HX_("a",61,00,00,00))) {
HXLINE( 399)								_hx_tmp2 = (_hx_char <= HX_("z",7a,00,00,00));
            							}
            							else {
HXLINE( 399)								_hx_tmp2 = false;
            							}
            						}
            						else {
HXLINE( 399)							_hx_tmp2 = true;
            						}
HXDLIN( 399)						if (!(_hx_tmp2)) {
HXLINE( 401)							if ((_hx_char >= HX_("A",41,00,00,00))) {
HXLINE( 399)								_hx_tmp1 = (_hx_char <= HX_("Z",5a,00,00,00));
            							}
            							else {
HXLINE( 399)								_hx_tmp1 = false;
            							}
            						}
            						else {
HXLINE( 399)							_hx_tmp1 = true;
            						}
HXDLIN( 399)						if (!(_hx_tmp1)) {
HXLINE( 402)							if ((_hx_char >= HX_("0",30,00,00,00))) {
HXLINE( 399)								_hx_tmp = (_hx_char <= HX_("9",39,00,00,00));
            							}
            							else {
HXLINE( 399)								_hx_tmp = false;
            							}
            						}
            						else {
HXLINE( 399)							_hx_tmp = true;
            						}
HXDLIN( 399)						if (_hx_tmp) {
HXLINE( 403)							ident = (ident + _hx_char);
            						}
            						else {
HXLINE( 404)							goto _hx_goto_38;
            						}
            					}
            					_hx_goto_38:;
HXLINE( 406)					 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EIdent(ident,null());
HXDLIN( 406)					 ::Dynamic pmin = null();
HXDLIN( 406)					 ::Dynamic pmax = null();
HXDLIN( 406)					 ::Dynamic _hx_tmp;
HXDLIN( 406)					if (::hx::IsNull( e )) {
HXLINE( 406)						_hx_tmp = null();
            					}
            					else {
HXLINE( 406)						if (::hx::IsNull( pmin )) {
HXLINE( 406)							pmin = this->tokenMin;
            						}
HXDLIN( 406)						if (::hx::IsNull( pmax )) {
HXLINE( 406)							pmax = this->tokenMax;
            						}
HXDLIN( 406)						_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
HXDLIN( 406)					exprs->push(_hx_tmp);
HXLINE( 407)					s = s.substr(i,null());
            				}
            			}
            			_hx_goto_39:;
HXLINE( 409)			dollarIndex = s.indexOf(HX_("$",24,00,00,00),i);
            		}
HXLINE( 412)		if ((exprs->length == 0)) {
HXLINE( 413)			 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EConst(::hscriptBase::Const_obj::CString(s,null()));
HXDLIN( 413)			 ::Dynamic pmin = null();
HXDLIN( 413)			 ::Dynamic pmax = null();
HXDLIN( 413)			 ::Dynamic _hx_tmp;
HXDLIN( 413)			if (::hx::IsNull( e )) {
HXLINE( 413)				_hx_tmp = null();
            			}
            			else {
HXLINE( 413)				if (::hx::IsNull( pmin )) {
HXLINE( 413)					pmin = this->tokenMin;
            				}
HXDLIN( 413)				if (::hx::IsNull( pmax )) {
HXLINE( 413)					pmax = this->tokenMax;
            				}
HXDLIN( 413)				_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXDLIN( 413)			exprs->push(_hx_tmp);
            		}
HXLINE( 415)		 ::Dynamic expr = exprs->__get(0);
HXLINE( 416)		{
HXLINE( 416)			int _g = 1;
HXDLIN( 416)			int _g1 = exprs->length;
HXDLIN( 416)			while((_g < _g1)){
HXLINE( 416)				_g = (_g + 1);
HXDLIN( 416)				int i = (_g - 1);
HXLINE( 417)				 ::Dynamic nextExpr = exprs->__get(i);
HXLINE( 418)				 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EBinop(HX_("+",2b,00,00,00),expr,nextExpr);
HXDLIN( 418)				 ::Dynamic pmin = null();
HXDLIN( 418)				 ::Dynamic pmax = null();
HXDLIN( 418)				if (::hx::IsNull( e )) {
HXLINE( 418)					expr = null();
            				}
            				else {
HXLINE( 418)					if (::hx::IsNull( pmin )) {
HXLINE( 418)						pmin = this->tokenMin;
            					}
HXDLIN( 418)					if (::hx::IsNull( pmax )) {
HXLINE( 418)						pmax = this->tokenMax;
            					}
HXDLIN( 418)					expr =  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
            			}
            		}
HXLINE( 421)		return expr;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,interpolate,return )

 ::Dynamic Parser_obj::parseExpr(){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_424_parseExpr)
HXLINE( 425)		int oldPos = this->readPos;
HXLINE( 426)		 ::hscriptBase::Token tk = this->token();
HXLINE( 428)		int p1 = this->tokenMin;
HXLINE( 430)		switch((int)(tk->_hx_getIndex())){
            			case (int)1: {
HXLINE( 440)				 ::hscriptBase::Const c = tk->_hx_getObject(0).StaticCast<  ::hscriptBase::Const >();
HXLINE( 441)				if ((c->_hx_getIndex() == 2)) {
HXLINE( 442)					::String s = c->_hx_getString(0);
HXDLIN( 442)					 ::Dynamic interpolated = c->_hx_getObject(1);
HXLINE( 443)					if (( (bool)(interpolated) )) {
HXLINE( 444)						return this->parseExprNext(this->interpolate(s));
            					}
            				}
HXLINE( 448)				 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EConst(c);
HXDLIN( 448)				 ::Dynamic pmin = null();
HXDLIN( 448)				 ::Dynamic pmax = null();
HXDLIN( 448)				 ::Dynamic _hx_tmp;
HXDLIN( 448)				if (::hx::IsNull( e )) {
HXLINE( 448)					_hx_tmp = null();
            				}
            				else {
HXLINE( 448)					if (::hx::IsNull( pmin )) {
HXLINE( 448)						pmin = this->tokenMin;
            					}
HXDLIN( 448)					if (::hx::IsNull( pmax )) {
HXLINE( 448)						pmax = this->tokenMax;
            					}
HXDLIN( 448)					_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
HXDLIN( 448)				return this->parseExprNext(_hx_tmp);
            			}
            			break;
            			case (int)2: {
HXLINE( 434)				::String id = tk->_hx_getString(0);
HXLINE( 435)				 ::Dynamic e = this->parseStructure(id,null(),null());
HXLINE( 436)				if (::hx::IsNull( e )) {
HXLINE( 437)					 ::hscriptBase::ExprDef e1 = ::hscriptBase::ExprDef_obj::EIdent(id,(id == HX_("final",76,5f,9a,00)));
HXDLIN( 437)					 ::Dynamic pmin = null();
HXDLIN( 437)					 ::Dynamic pmax = null();
HXDLIN( 437)					if (::hx::IsNull( e1 )) {
HXLINE( 437)						e = null();
            					}
            					else {
HXLINE( 437)						if (::hx::IsNull( pmin )) {
HXLINE( 437)							pmin = this->tokenMin;
            						}
HXDLIN( 437)						if (::hx::IsNull( pmax )) {
HXLINE( 437)							pmax = this->tokenMax;
            						}
HXDLIN( 437)						e =  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e1)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
            				}
HXLINE( 439)				return this->parseExprNext(e);
            			}
            			break;
            			case (int)3: {
HXLINE( 527)				::String op = tk->_hx_getString(0);
HXLINE( 528)				if ((op == HX_("-",2d,00,00,00))) {
HXLINE( 529)					int start = this->tokenMin;
HXLINE( 530)					 ::Dynamic e = this->parseExpr();
HXLINE( 531)					if (::hx::IsNull( e )) {
HXLINE( 532)						return this->makeUnop(op,e);
            					}
HXLINE( 533)					 ::hscriptBase::ExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 533)					if ((_g->_hx_getIndex() == 0)) {
HXLINE( 536)						 ::hscriptBase::Const _g1 = _g->_hx_getObject(0).StaticCast<  ::hscriptBase::Const >();
HXDLIN( 536)						switch((int)(_g1->_hx_getIndex())){
            							case (int)0: {
HXLINE( 534)								int i = _g1->_hx_getInt(0);
HXLINE( 535)								 ::hscriptBase::ExprDef e1 = ::hscriptBase::ExprDef_obj::EConst(::hscriptBase::Const_obj::CInt(-(i)));
HXDLIN( 535)								 ::Dynamic pmin = start;
HXDLIN( 535)								 ::Dynamic pmax;
HXDLIN( 535)								if (::hx::IsNull( e )) {
HXLINE( 535)									pmax = 0;
            								}
            								else {
HXLINE( 535)									pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            								}
HXDLIN( 535)								if (::hx::IsNull( e1 )) {
HXLINE( 535)									return null();
            								}
            								else {
HXLINE( 535)									if (::hx::IsNull( pmin )) {
HXLINE( 535)										pmin = this->tokenMin;
            									}
HXDLIN( 535)									if (::hx::IsNull( pmax )) {
HXLINE( 535)										pmax = this->tokenMax;
            									}
HXDLIN( 535)									return  ::Dynamic(::hx::Anon_obj::Create(5)
            										->setFixed(0,HX_("e",65,00,00,00),e1)
            										->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            										->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            										->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            										->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 536)								Float f = _g1->_hx_getFloat(0);
HXLINE( 537)								 ::hscriptBase::ExprDef e1 = ::hscriptBase::ExprDef_obj::EConst(::hscriptBase::Const_obj::CFloat(-(f)));
HXDLIN( 537)								 ::Dynamic pmin = start;
HXDLIN( 537)								 ::Dynamic pmax;
HXDLIN( 537)								if (::hx::IsNull( e )) {
HXLINE( 537)									pmax = 0;
            								}
            								else {
HXLINE( 537)									pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            								}
HXDLIN( 537)								if (::hx::IsNull( e1 )) {
HXLINE( 537)									return null();
            								}
            								else {
HXLINE( 537)									if (::hx::IsNull( pmin )) {
HXLINE( 537)										pmin = this->tokenMin;
            									}
HXDLIN( 537)									if (::hx::IsNull( pmax )) {
HXLINE( 537)										pmax = this->tokenMax;
            									}
HXDLIN( 537)									return  ::Dynamic(::hx::Anon_obj::Create(5)
            										->setFixed(0,HX_("e",65,00,00,00),e1)
            										->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            										->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            										->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            										->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            								}
            							}
            							break;
            							default:{
HXLINE( 539)								return this->makeUnop(op,e);
            							}
            						}
            					}
            					else {
HXLINE( 539)						return this->makeUnop(op,e);
            					}
            				}
HXLINE( 542)				if (::hx::IsLess( this->opPriority->get(op),0 )) {
HXLINE( 543)					return this->makeUnop(op,this->parseExpr());
            				}
HXLINE( 544)				return this->unexpected(tk);
            			}
            			break;
            			case (int)4: {
HXLINE( 450)				tk = this->token();
HXLINE( 451)				if (::hx::IsPointerEq( tk,::hscriptBase::Token_obj::TPClose_dyn() )) {
HXLINE( 452)					{
HXLINE( 452)						 ::hscriptBase::Token t = this->token();
HXDLIN( 452)						if (!(__hxcpp_enum_eq(t,::hscriptBase::Token_obj::TOp(HX_("->",71,27,00,00))))) {
HXLINE( 452)							this->unexpected(t);
            						}
            					}
HXLINE( 453)					 ::Dynamic eret = this->parseExpr();
HXLINE( 454)					 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EReturn(eret);
HXDLIN( 454)					 ::Dynamic pmin = p1;
HXDLIN( 454)					 ::Dynamic pmax = null();
HXDLIN( 454)					 ::Dynamic e1;
HXDLIN( 454)					if (::hx::IsNull( e )) {
HXLINE( 454)						e1 = null();
            					}
            					else {
HXLINE( 454)						if (::hx::IsNull( pmin )) {
HXLINE( 454)							pmin = this->tokenMin;
            						}
HXDLIN( 454)						if (::hx::IsNull( pmax )) {
HXLINE( 454)							pmax = this->tokenMax;
            						}
HXDLIN( 454)						e1 =  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
HXDLIN( 454)					 ::hscriptBase::ExprDef e2 = ::hscriptBase::ExprDef_obj::EFunction(::Array_obj< ::Dynamic>::__new(0),e1,null(),null(),null(),null());
HXDLIN( 454)					 ::Dynamic pmin1 = p1;
HXDLIN( 454)					 ::Dynamic pmax1 = null();
HXDLIN( 454)					if (::hx::IsNull( e2 )) {
HXLINE( 454)						return null();
            					}
            					else {
HXLINE( 454)						if (::hx::IsNull( pmin1 )) {
HXLINE( 454)							pmin1 = this->tokenMin;
            						}
HXDLIN( 454)						if (::hx::IsNull( pmax1 )) {
HXLINE( 454)							pmax1 = this->tokenMax;
            						}
HXDLIN( 454)						return  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e2)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax1)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin1)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
            				}
HXLINE( 456)				{
HXLINE( 456)					this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("t",74,00,00,00),tk)
            						->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            						->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 456)					this->tokenMin = this->oldTokenMin;
HXDLIN( 456)					this->tokenMax = this->oldTokenMax;
            				}
HXLINE( 457)				 ::Dynamic e = this->parseExpr();
HXLINE( 458)				tk = this->token();
HXLINE( 459)				switch((int)(tk->_hx_getIndex())){
            					case (int)5: {
HXLINE( 461)						 ::hscriptBase::ExprDef e1 = ::hscriptBase::ExprDef_obj::EParent(e);
HXDLIN( 461)						 ::Dynamic pmin = p1;
HXDLIN( 461)						 ::Dynamic pmax = this->tokenMax;
HXDLIN( 461)						 ::Dynamic _hx_tmp;
HXDLIN( 461)						if (::hx::IsNull( e1 )) {
HXLINE( 461)							_hx_tmp = null();
            						}
            						else {
HXLINE( 461)							if (::hx::IsNull( pmin )) {
HXLINE( 461)								pmin = this->tokenMin;
            							}
HXDLIN( 461)							if (::hx::IsNull( pmax )) {
HXLINE( 461)								pmax = this->tokenMax;
            							}
HXDLIN( 461)							_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(5)
            								->setFixed(0,HX_("e",65,00,00,00),e1)
            								->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            								->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            								->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            								->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            						}
HXDLIN( 461)						return this->parseExprNext(_hx_tmp);
            					}
            					break;
            					case (int)9: {
HXLINE( 476)						 ::hscriptBase::ExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 476)						if ((_g->_hx_getIndex() == 1)) {
HXLINE( 477)							 ::Dynamic _g1 = _g->_hx_getObject(1);
HXDLIN( 477)							::String v = _g->_hx_getString(0);
HXDLIN( 477)							int _hx_tmp;
HXDLIN( 477)							if (::hx::IsNull( e )) {
HXLINE( 477)								_hx_tmp = 0;
            							}
            							else {
HXLINE( 477)								_hx_tmp = ( (int)(e->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) );
            							}
HXDLIN( 477)							return this->parseLambda(::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("name",4b,72,ff,48),v))),_hx_tmp);
            						}
            					}
            					break;
            					case (int)15: {
HXLINE( 463)						 ::hscriptBase::CType t = this->parseType();
HXLINE( 464)						tk = this->token();
HXLINE( 465)						switch((int)(tk->_hx_getIndex())){
            							case (int)5: {
HXLINE( 467)								 ::hscriptBase::ExprDef e1 = ::hscriptBase::ExprDef_obj::ECheckType(e,t);
HXDLIN( 467)								 ::Dynamic pmin = p1;
HXDLIN( 467)								 ::Dynamic pmax = this->tokenMax;
HXDLIN( 467)								 ::Dynamic _hx_tmp;
HXDLIN( 467)								if (::hx::IsNull( e1 )) {
HXLINE( 467)									_hx_tmp = null();
            								}
            								else {
HXLINE( 467)									if (::hx::IsNull( pmin )) {
HXLINE( 467)										pmin = this->tokenMin;
            									}
HXDLIN( 467)									if (::hx::IsNull( pmax )) {
HXLINE( 467)										pmax = this->tokenMax;
            									}
HXDLIN( 467)									_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(5)
            										->setFixed(0,HX_("e",65,00,00,00),e1)
            										->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            										->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            										->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            										->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            								}
HXDLIN( 467)								return this->parseExprNext(_hx_tmp);
            							}
            							break;
            							case (int)9: {
HXLINE( 469)								 ::hscriptBase::ExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 469)								if ((_g->_hx_getIndex() == 1)) {
HXLINE( 470)									 ::Dynamic _g1 = _g->_hx_getObject(1);
HXDLIN( 470)									::String v = _g->_hx_getString(0);
HXDLIN( 470)									int _hx_tmp;
HXDLIN( 470)									if (::hx::IsNull( e )) {
HXLINE( 470)										_hx_tmp = 0;
            									}
            									else {
HXLINE( 470)										_hx_tmp = ( (int)(e->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic)) );
            									}
HXDLIN( 470)									return this->parseLambda(::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(2)
            										->setFixed(0,HX_("t",74,00,00,00),t)
            										->setFixed(1,HX_("name",4b,72,ff,48),v))),_hx_tmp);
            								}
            							}
            							break;
            							default:{
            							}
            						}
            					}
            					break;
            					default:{
            					}
            				}
HXLINE( 483)				return this->unexpected(tk);
            			}
            			break;
            			case (int)6: {
HXLINE( 485)				tk = this->token();
HXLINE( 486)				switch((int)(tk->_hx_getIndex())){
            					case (int)1: {
HXLINE( 498)						 ::hscriptBase::Const c = tk->_hx_getObject(0).StaticCast<  ::hscriptBase::Const >();
HXLINE( 499)						if (this->allowJSON) {
HXLINE( 500)							if ((c->_hx_getIndex() == 2)) {
HXLINE( 501)								::String _g = c->_hx_getString(0);
HXDLIN( 501)								 ::Dynamic _g1 = c->_hx_getObject(1);
HXDLIN( 501)								{
HXLINE( 502)									 ::hscriptBase::Token tk2 = this->token();
HXLINE( 503)									{
HXLINE( 503)										this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            											->setFixed(0,HX_("t",74,00,00,00),tk2)
            											->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            											->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 503)										this->tokenMin = this->oldTokenMin;
HXDLIN( 503)										this->tokenMax = this->oldTokenMax;
            									}
HXLINE( 504)									{
HXLINE( 504)										this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            											->setFixed(0,HX_("t",74,00,00,00),tk)
            											->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            											->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 504)										this->tokenMin = this->oldTokenMin;
HXDLIN( 504)										this->tokenMax = this->oldTokenMax;
            									}
HXLINE( 505)									if ((tk2->_hx_getIndex() == 15)) {
HXLINE( 507)										return this->parseExprNext(this->parseObject(p1));
            									}
            								}
            							}
            							else {
HXLINE( 511)								this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("t",74,00,00,00),tk)
            									->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            									->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 511)								this->tokenMin = this->oldTokenMin;
HXDLIN( 511)								this->tokenMax = this->oldTokenMax;
            							}
            						}
            						else {
HXLINE( 514)							this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("t",74,00,00,00),tk)
            								->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            								->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 514)							this->tokenMin = this->oldTokenMin;
HXDLIN( 514)							this->tokenMax = this->oldTokenMax;
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 489)						::String _g = tk->_hx_getString(0);
HXDLIN( 489)						{
HXLINE( 490)							 ::hscriptBase::Token tk2 = this->token();
HXLINE( 491)							{
HXLINE( 491)								this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("t",74,00,00,00),tk2)
            									->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            									->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 491)								this->tokenMin = this->oldTokenMin;
HXDLIN( 491)								this->tokenMax = this->oldTokenMax;
            							}
HXLINE( 492)							{
HXLINE( 492)								this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("t",74,00,00,00),tk)
            									->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            									->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 492)								this->tokenMin = this->oldTokenMin;
HXDLIN( 492)								this->tokenMax = this->oldTokenMax;
            							}
HXLINE( 493)							if ((tk2->_hx_getIndex() == 15)) {
HXLINE( 495)								return this->parseExprNext(this->parseObject(p1));
            							}
            						}
            					}
            					break;
            					case (int)7: {
HXLINE( 488)						 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EObject(::Array_obj< ::Dynamic>::__new(0));
HXDLIN( 488)						 ::Dynamic pmin = p1;
HXDLIN( 488)						 ::Dynamic pmax = null();
HXDLIN( 488)						 ::Dynamic _hx_tmp;
HXDLIN( 488)						if (::hx::IsNull( e )) {
HXLINE( 488)							_hx_tmp = null();
            						}
            						else {
HXLINE( 488)							if (::hx::IsNull( pmin )) {
HXLINE( 488)								pmin = this->tokenMin;
            							}
HXDLIN( 488)							if (::hx::IsNull( pmax )) {
HXLINE( 488)								pmax = this->tokenMax;
            							}
HXDLIN( 488)							_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(5)
            								->setFixed(0,HX_("e",65,00,00,00),e)
            								->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            								->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            								->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            								->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            						}
HXDLIN( 488)						return this->parseExprNext(_hx_tmp);
            					}
            					break;
            					default:{
HXLINE( 516)						this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("t",74,00,00,00),tk)
            							->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            							->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 516)						this->tokenMin = this->oldTokenMin;
HXDLIN( 516)						this->tokenMax = this->oldTokenMax;
            					}
            				}
HXLINE( 518)				::Array< ::Dynamic> a = ::Array_obj< ::Dynamic>::__new();
HXLINE( 519)				while(true){
HXLINE( 520)					this->parseFullExpr(a);
HXLINE( 521)					tk = this->token();
HXLINE( 522)					bool _hx_tmp;
HXDLIN( 522)					if (::hx::IsPointerNotEq( tk,::hscriptBase::Token_obj::TBrClose_dyn() )) {
HXLINE( 522)						if (this->resumeErrors) {
HXLINE( 522)							_hx_tmp = ::hx::IsPointerEq( tk,::hscriptBase::Token_obj::TEof_dyn() );
            						}
            						else {
HXLINE( 522)							_hx_tmp = false;
            						}
            					}
            					else {
HXLINE( 522)						_hx_tmp = true;
            					}
HXDLIN( 522)					if (_hx_tmp) {
HXLINE( 523)						goto _hx_goto_43;
            					}
HXLINE( 524)					{
HXLINE( 524)						this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("t",74,00,00,00),tk)
            							->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            							->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 524)						this->tokenMin = this->oldTokenMin;
HXDLIN( 524)						this->tokenMax = this->oldTokenMax;
            					}
            				}
            				_hx_goto_43:;
HXLINE( 526)				 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EBlock(a);
HXDLIN( 526)				 ::Dynamic pmin = p1;
HXDLIN( 526)				 ::Dynamic pmax = null();
HXDLIN( 526)				if (::hx::IsNull( e )) {
HXLINE( 526)					return null();
            				}
            				else {
HXLINE( 526)					if (::hx::IsNull( pmin )) {
HXLINE( 526)						pmin = this->tokenMin;
            					}
HXDLIN( 526)					if (::hx::IsNull( pmax )) {
HXLINE( 526)						pmax = this->tokenMax;
            					}
HXDLIN( 526)					return  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
            			}
            			break;
            			case (int)12: {
HXLINE( 546)				::Array< ::Dynamic> a = ::Array_obj< ::Dynamic>::__new();
HXLINE( 547)				tk = this->token();
HXLINE( 548)				while(true){
HXLINE( 548)					bool _hx_tmp;
HXDLIN( 548)					if (::hx::IsPointerNotEq( tk,::hscriptBase::Token_obj::TBkClose_dyn() )) {
HXLINE( 548)						if (this->resumeErrors) {
HXLINE( 548)							_hx_tmp = ::hx::IsPointerNotEq( tk,::hscriptBase::Token_obj::TEof_dyn() );
            						}
            						else {
HXLINE( 548)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE( 548)						_hx_tmp = false;
            					}
HXDLIN( 548)					if (!(_hx_tmp)) {
HXLINE( 548)						goto _hx_goto_44;
            					}
HXLINE( 549)					{
HXLINE( 549)						this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("t",74,00,00,00),tk)
            							->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            							->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 549)						this->tokenMin = this->oldTokenMin;
HXDLIN( 549)						this->tokenMax = this->oldTokenMax;
            					}
HXLINE( 550)					a->push(this->parseExpr());
HXLINE( 551)					tk = this->token();
HXLINE( 552)					if (::hx::IsPointerEq( tk,::hscriptBase::Token_obj::TComma_dyn() )) {
HXLINE( 553)						tk = this->token();
            					}
            				}
            				_hx_goto_44:;
HXLINE( 555)				bool _hx_tmp;
HXDLIN( 555)				if ((a->length == 1)) {
HXLINE( 555)					_hx_tmp = ::hx::IsNotNull( a->__get(0) );
            				}
            				else {
HXLINE( 555)					_hx_tmp = false;
            				}
HXDLIN( 555)				if (_hx_tmp) {
HXLINE( 556)					 ::hscriptBase::ExprDef _g = a->__get(0)->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 556)					switch((int)(_g->_hx_getIndex())){
            						case (int)11: {
HXLINE( 557)							 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 557)							 ::Dynamic _g2 = _g->_hx_getObject(1);
HXLINE( 558)							::String tmp = (HX_("__a_",fe,af,13,3f) + this->uid++);
HXLINE( 560)							 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EArrayDecl(::Array_obj< ::Dynamic>::__new(0));
HXDLIN( 560)							 ::Dynamic pmin = p1;
HXDLIN( 560)							 ::Dynamic pmax = null();
HXDLIN( 560)							 ::Dynamic e1;
HXDLIN( 560)							if (::hx::IsNull( e )) {
HXLINE( 560)								e1 = null();
            							}
            							else {
HXLINE( 560)								if (::hx::IsNull( pmin )) {
HXLINE( 560)									pmin = this->tokenMin;
            								}
HXDLIN( 560)								if (::hx::IsNull( pmax )) {
HXLINE( 560)									pmax = this->tokenMax;
            								}
HXDLIN( 560)								e1 =  ::Dynamic(::hx::Anon_obj::Create(5)
            									->setFixed(0,HX_("e",65,00,00,00),e)
            									->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            									->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            									->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            									->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            							}
HXDLIN( 560)							 ::hscriptBase::ExprDef e2 = ::hscriptBase::ExprDef_obj::EVar(tmp,null(),e1,null(),null());
HXDLIN( 560)							 ::Dynamic pmin1 = p1;
HXDLIN( 560)							 ::Dynamic pmax1 = null();
HXDLIN( 560)							 ::Dynamic e3;
HXDLIN( 560)							if (::hx::IsNull( e2 )) {
HXLINE( 560)								e3 = null();
            							}
            							else {
HXLINE( 560)								if (::hx::IsNull( pmin1 )) {
HXLINE( 560)									pmin1 = this->tokenMin;
            								}
HXDLIN( 560)								if (::hx::IsNull( pmax1 )) {
HXLINE( 560)									pmax1 = this->tokenMax;
            								}
HXDLIN( 560)								e3 =  ::Dynamic(::hx::Anon_obj::Create(5)
            									->setFixed(0,HX_("e",65,00,00,00),e2)
            									->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            									->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax1)
            									->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin1)
            									->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            							}
HXLINE( 561)							 ::Dynamic e4 = this->mapCompr(tmp,a->__get(0));
HXLINE( 562)							 ::hscriptBase::ExprDef e5 = ::hscriptBase::ExprDef_obj::EIdent(tmp,null());
HXDLIN( 562)							 ::Dynamic pmin2 = p1;
HXDLIN( 562)							 ::Dynamic pmax2 = null();
HXDLIN( 562)							 ::Dynamic e6;
HXDLIN( 562)							if (::hx::IsNull( e5 )) {
HXLINE( 562)								e6 = null();
            							}
            							else {
HXLINE( 562)								if (::hx::IsNull( pmin2 )) {
HXLINE( 562)									pmin2 = this->tokenMin;
            								}
HXDLIN( 562)								if (::hx::IsNull( pmax2 )) {
HXLINE( 562)									pmax2 = this->tokenMax;
            								}
HXDLIN( 562)								e6 =  ::Dynamic(::hx::Anon_obj::Create(5)
            									->setFixed(0,HX_("e",65,00,00,00),e5)
            									->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            									->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax2)
            									->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin2)
            									->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            							}
HXLINE( 559)							 ::hscriptBase::ExprDef e7 = ::hscriptBase::ExprDef_obj::EBlock(::Array_obj< ::Dynamic>::__new(3)->init(0,e3)->init(1,e4)->init(2,e6));
HXDLIN( 559)							 ::Dynamic pmin3 = p1;
HXDLIN( 559)							 ::Dynamic pmax3 = null();
HXDLIN( 559)							 ::Dynamic e8;
HXDLIN( 559)							if (::hx::IsNull( e7 )) {
HXLINE( 559)								e8 = null();
            							}
            							else {
HXLINE( 559)								if (::hx::IsNull( pmin3 )) {
HXLINE( 559)									pmin3 = this->tokenMin;
            								}
HXDLIN( 559)								if (::hx::IsNull( pmax3 )) {
HXLINE( 559)									pmax3 = this->tokenMax;
            								}
HXDLIN( 559)								e8 =  ::Dynamic(::hx::Anon_obj::Create(5)
            									->setFixed(0,HX_("e",65,00,00,00),e7)
            									->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            									->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax3)
            									->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin3)
            									->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            							}
HXLINE( 564)							return this->parseExprNext(e8);
            						}
            						break;
            						case (int)12: {
HXLINE( 557)							::String _g1 = _g->_hx_getString(0);
HXDLIN( 557)							 ::Dynamic _g2 = _g->_hx_getObject(1);
HXDLIN( 557)							 ::Dynamic _g3 = _g->_hx_getObject(2);
HXLINE( 558)							::String tmp = (HX_("__a_",fe,af,13,3f) + this->uid++);
HXLINE( 560)							 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EArrayDecl(::Array_obj< ::Dynamic>::__new(0));
HXDLIN( 560)							 ::Dynamic pmin = p1;
HXDLIN( 560)							 ::Dynamic pmax = null();
HXDLIN( 560)							 ::Dynamic e1;
HXDLIN( 560)							if (::hx::IsNull( e )) {
HXLINE( 560)								e1 = null();
            							}
            							else {
HXLINE( 560)								if (::hx::IsNull( pmin )) {
HXLINE( 560)									pmin = this->tokenMin;
            								}
HXDLIN( 560)								if (::hx::IsNull( pmax )) {
HXLINE( 560)									pmax = this->tokenMax;
            								}
HXDLIN( 560)								e1 =  ::Dynamic(::hx::Anon_obj::Create(5)
            									->setFixed(0,HX_("e",65,00,00,00),e)
            									->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            									->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            									->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            									->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            							}
HXDLIN( 560)							 ::hscriptBase::ExprDef e2 = ::hscriptBase::ExprDef_obj::EVar(tmp,null(),e1,null(),null());
HXDLIN( 560)							 ::Dynamic pmin1 = p1;
HXDLIN( 560)							 ::Dynamic pmax1 = null();
HXDLIN( 560)							 ::Dynamic e3;
HXDLIN( 560)							if (::hx::IsNull( e2 )) {
HXLINE( 560)								e3 = null();
            							}
            							else {
HXLINE( 560)								if (::hx::IsNull( pmin1 )) {
HXLINE( 560)									pmin1 = this->tokenMin;
            								}
HXDLIN( 560)								if (::hx::IsNull( pmax1 )) {
HXLINE( 560)									pmax1 = this->tokenMax;
            								}
HXDLIN( 560)								e3 =  ::Dynamic(::hx::Anon_obj::Create(5)
            									->setFixed(0,HX_("e",65,00,00,00),e2)
            									->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            									->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax1)
            									->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin1)
            									->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            							}
HXLINE( 561)							 ::Dynamic e4 = this->mapCompr(tmp,a->__get(0));
HXLINE( 562)							 ::hscriptBase::ExprDef e5 = ::hscriptBase::ExprDef_obj::EIdent(tmp,null());
HXDLIN( 562)							 ::Dynamic pmin2 = p1;
HXDLIN( 562)							 ::Dynamic pmax2 = null();
HXDLIN( 562)							 ::Dynamic e6;
HXDLIN( 562)							if (::hx::IsNull( e5 )) {
HXLINE( 562)								e6 = null();
            							}
            							else {
HXLINE( 562)								if (::hx::IsNull( pmin2 )) {
HXLINE( 562)									pmin2 = this->tokenMin;
            								}
HXDLIN( 562)								if (::hx::IsNull( pmax2 )) {
HXLINE( 562)									pmax2 = this->tokenMax;
            								}
HXDLIN( 562)								e6 =  ::Dynamic(::hx::Anon_obj::Create(5)
            									->setFixed(0,HX_("e",65,00,00,00),e5)
            									->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            									->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax2)
            									->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin2)
            									->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            							}
HXLINE( 559)							 ::hscriptBase::ExprDef e7 = ::hscriptBase::ExprDef_obj::EBlock(::Array_obj< ::Dynamic>::__new(3)->init(0,e3)->init(1,e4)->init(2,e6));
HXDLIN( 559)							 ::Dynamic pmin3 = p1;
HXDLIN( 559)							 ::Dynamic pmax3 = null();
HXDLIN( 559)							 ::Dynamic e8;
HXDLIN( 559)							if (::hx::IsNull( e7 )) {
HXLINE( 559)								e8 = null();
            							}
            							else {
HXLINE( 559)								if (::hx::IsNull( pmin3 )) {
HXLINE( 559)									pmin3 = this->tokenMin;
            								}
HXDLIN( 559)								if (::hx::IsNull( pmax3 )) {
HXLINE( 559)									pmax3 = this->tokenMax;
            								}
HXDLIN( 559)								e8 =  ::Dynamic(::hx::Anon_obj::Create(5)
            									->setFixed(0,HX_("e",65,00,00,00),e7)
            									->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            									->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax3)
            									->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin3)
            									->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            							}
HXLINE( 564)							return this->parseExprNext(e8);
            						}
            						break;
            						case (int)26: {
HXLINE( 557)							 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 557)							 ::Dynamic _g2 = _g->_hx_getObject(1);
HXLINE( 558)							::String tmp = (HX_("__a_",fe,af,13,3f) + this->uid++);
HXLINE( 560)							 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EArrayDecl(::Array_obj< ::Dynamic>::__new(0));
HXDLIN( 560)							 ::Dynamic pmin = p1;
HXDLIN( 560)							 ::Dynamic pmax = null();
HXDLIN( 560)							 ::Dynamic e1;
HXDLIN( 560)							if (::hx::IsNull( e )) {
HXLINE( 560)								e1 = null();
            							}
            							else {
HXLINE( 560)								if (::hx::IsNull( pmin )) {
HXLINE( 560)									pmin = this->tokenMin;
            								}
HXDLIN( 560)								if (::hx::IsNull( pmax )) {
HXLINE( 560)									pmax = this->tokenMax;
            								}
HXDLIN( 560)								e1 =  ::Dynamic(::hx::Anon_obj::Create(5)
            									->setFixed(0,HX_("e",65,00,00,00),e)
            									->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            									->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            									->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            									->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            							}
HXDLIN( 560)							 ::hscriptBase::ExprDef e2 = ::hscriptBase::ExprDef_obj::EVar(tmp,null(),e1,null(),null());
HXDLIN( 560)							 ::Dynamic pmin1 = p1;
HXDLIN( 560)							 ::Dynamic pmax1 = null();
HXDLIN( 560)							 ::Dynamic e3;
HXDLIN( 560)							if (::hx::IsNull( e2 )) {
HXLINE( 560)								e3 = null();
            							}
            							else {
HXLINE( 560)								if (::hx::IsNull( pmin1 )) {
HXLINE( 560)									pmin1 = this->tokenMin;
            								}
HXDLIN( 560)								if (::hx::IsNull( pmax1 )) {
HXLINE( 560)									pmax1 = this->tokenMax;
            								}
HXDLIN( 560)								e3 =  ::Dynamic(::hx::Anon_obj::Create(5)
            									->setFixed(0,HX_("e",65,00,00,00),e2)
            									->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            									->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax1)
            									->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin1)
            									->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            							}
HXLINE( 561)							 ::Dynamic e4 = this->mapCompr(tmp,a->__get(0));
HXLINE( 562)							 ::hscriptBase::ExprDef e5 = ::hscriptBase::ExprDef_obj::EIdent(tmp,null());
HXDLIN( 562)							 ::Dynamic pmin2 = p1;
HXDLIN( 562)							 ::Dynamic pmax2 = null();
HXDLIN( 562)							 ::Dynamic e6;
HXDLIN( 562)							if (::hx::IsNull( e5 )) {
HXLINE( 562)								e6 = null();
            							}
            							else {
HXLINE( 562)								if (::hx::IsNull( pmin2 )) {
HXLINE( 562)									pmin2 = this->tokenMin;
            								}
HXDLIN( 562)								if (::hx::IsNull( pmax2 )) {
HXLINE( 562)									pmax2 = this->tokenMax;
            								}
HXDLIN( 562)								e6 =  ::Dynamic(::hx::Anon_obj::Create(5)
            									->setFixed(0,HX_("e",65,00,00,00),e5)
            									->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            									->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax2)
            									->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin2)
            									->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            							}
HXLINE( 559)							 ::hscriptBase::ExprDef e7 = ::hscriptBase::ExprDef_obj::EBlock(::Array_obj< ::Dynamic>::__new(3)->init(0,e3)->init(1,e4)->init(2,e6));
HXDLIN( 559)							 ::Dynamic pmin3 = p1;
HXDLIN( 559)							 ::Dynamic pmax3 = null();
HXDLIN( 559)							 ::Dynamic e8;
HXDLIN( 559)							if (::hx::IsNull( e7 )) {
HXLINE( 559)								e8 = null();
            							}
            							else {
HXLINE( 559)								if (::hx::IsNull( pmin3 )) {
HXLINE( 559)									pmin3 = this->tokenMin;
            								}
HXDLIN( 559)								if (::hx::IsNull( pmax3 )) {
HXLINE( 559)									pmax3 = this->tokenMax;
            								}
HXDLIN( 559)								e8 =  ::Dynamic(::hx::Anon_obj::Create(5)
            									->setFixed(0,HX_("e",65,00,00,00),e7)
            									->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            									->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax3)
            									->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin3)
            									->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            							}
HXLINE( 564)							return this->parseExprNext(e8);
            						}
            						break;
            						default:{
            						}
            					}
            				}
HXLINE( 567)				 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EArrayDecl(a);
HXDLIN( 567)				 ::Dynamic pmin = p1;
HXDLIN( 567)				 ::Dynamic pmax = null();
HXDLIN( 567)				 ::Dynamic _hx_tmp1;
HXDLIN( 567)				if (::hx::IsNull( e )) {
HXLINE( 567)					_hx_tmp1 = null();
            				}
            				else {
HXLINE( 567)					if (::hx::IsNull( pmin )) {
HXLINE( 567)						pmin = this->tokenMin;
            					}
HXDLIN( 567)					if (::hx::IsNull( pmax )) {
HXLINE( 567)						pmax = this->tokenMax;
            					}
HXDLIN( 567)					_hx_tmp1 =  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
HXDLIN( 567)				return this->parseExprNext(_hx_tmp1);
            			}
            			break;
            			case (int)16: {
HXLINE( 568)				::String id = tk->_hx_getString(0);
HXDLIN( 568)				if (this->allowMetadata) {
HXLINE( 569)					::Array< ::Dynamic> args = this->parseMetaArgs();
HXLINE( 570)					 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EMeta(id,args,this->parseExpr());
HXDLIN( 570)					 ::Dynamic pmin = p1;
HXDLIN( 570)					 ::Dynamic pmax = null();
HXDLIN( 570)					if (::hx::IsNull( e )) {
HXLINE( 570)						return null();
            					}
            					else {
HXLINE( 570)						if (::hx::IsNull( pmin )) {
HXLINE( 570)							pmin = this->tokenMin;
            						}
HXDLIN( 570)						if (::hx::IsNull( pmax )) {
HXLINE( 570)							pmax = this->tokenMax;
            						}
HXDLIN( 570)						return  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
            				}
            				else {
HXLINE( 572)					return this->unexpected(tk);
            				}
            			}
            			break;
            			case (int)17: {
HXLINE( 431)				if ((tk->_hx_getString(0) == HX_("end",db,03,4d,00))) {
HXLINE( 432)					{
HXLINE( 432)						 ::hscriptBase::Token tk = ::hscriptBase::Token_obj::TConst(::hscriptBase::Const_obj::CInt(::Std_obj::_hx_int(::Math_obj::NaN)));
HXDLIN( 432)						this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("t",74,00,00,00),tk)
            							->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            							->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 432)						this->tokenMin = this->oldTokenMin;
HXDLIN( 432)						this->tokenMax = this->oldTokenMax;
            					}
HXLINE( 433)					return this->parseExpr();
            				}
            				else {
HXLINE( 572)					return this->unexpected(tk);
            				}
            			}
            			break;
            			default:{
HXLINE( 572)				return this->unexpected(tk);
            			}
            		}
HXLINE( 430)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseExpr,return )

 ::Dynamic Parser_obj::parseLambda(::Array< ::Dynamic> args, ::Dynamic pmin){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_576_parseLambda)
HXLINE( 577)		while(true){
HXLINE( 578)			::String id = this->getIdent(null());
HXLINE( 579)			 ::hscriptBase::CType t;
HXDLIN( 579)			if (this->maybe(::hscriptBase::Token_obj::TDoubleDot_dyn())) {
HXLINE( 579)				t = this->parseType();
            			}
            			else {
HXLINE( 579)				t = null();
            			}
HXLINE( 580)			args->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("t",74,00,00,00),t)
            				->setFixed(1,HX_("name",4b,72,ff,48),id)));
HXLINE( 581)			 ::hscriptBase::Token tk = this->token();
HXLINE( 582)			switch((int)(tk->_hx_getIndex())){
            				case (int)5: {
HXLINE( 585)					goto _hx_goto_46;
            				}
            				break;
            				case (int)9: {
            				}
            				break;
            				default:{
HXLINE( 587)					this->unexpected(tk);
HXLINE( 588)					goto _hx_goto_46;
            				}
            			}
            		}
            		_hx_goto_46:;
HXLINE( 591)		{
HXLINE( 591)			 ::hscriptBase::Token t = this->token();
HXDLIN( 591)			if (!(__hxcpp_enum_eq(t,::hscriptBase::Token_obj::TOp(HX_("->",71,27,00,00))))) {
HXLINE( 591)				this->unexpected(t);
            			}
            		}
HXLINE( 592)		 ::Dynamic eret = this->parseExpr();
HXLINE( 593)		 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EReturn(eret);
HXDLIN( 593)		 ::Dynamic pmin1 = pmin;
HXDLIN( 593)		 ::Dynamic pmax = null();
HXDLIN( 593)		 ::Dynamic e1;
HXDLIN( 593)		if (::hx::IsNull( e )) {
HXLINE( 593)			e1 = null();
            		}
            		else {
HXLINE( 593)			if (::hx::IsNull( pmin1 )) {
HXLINE( 593)				pmin1 = this->tokenMin;
            			}
HXDLIN( 593)			if (::hx::IsNull( pmax )) {
HXLINE( 593)				pmax = this->tokenMax;
            			}
HXDLIN( 593)			e1 =  ::Dynamic(::hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("e",65,00,00,00),e)
            				->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            				->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            				->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin1)
            				->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            		}
HXDLIN( 593)		 ::hscriptBase::ExprDef e2 = ::hscriptBase::ExprDef_obj::EFunction(args,e1,null(),null(),null(),null());
HXDLIN( 593)		 ::Dynamic pmin2 = pmin;
HXDLIN( 593)		 ::Dynamic pmax1 = null();
HXDLIN( 593)		if (::hx::IsNull( e2 )) {
HXLINE( 593)			return null();
            		}
            		else {
HXLINE( 593)			if (::hx::IsNull( pmin2 )) {
HXLINE( 593)				pmin2 = this->tokenMin;
            			}
HXDLIN( 593)			if (::hx::IsNull( pmax1 )) {
HXLINE( 593)				pmax1 = this->tokenMax;
            			}
HXDLIN( 593)			return  ::Dynamic(::hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("e",65,00,00,00),e2)
            				->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            				->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax1)
            				->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin2)
            				->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            		}
HXDLIN( 593)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,parseLambda,return )

::Array< ::Dynamic> Parser_obj::parseMetaArgs(){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_596_parseMetaArgs)
HXLINE( 597)		 ::hscriptBase::Token tk = this->token();
HXLINE( 598)		if (::hx::IsPointerNotEq( tk,::hscriptBase::Token_obj::TPOpen_dyn() )) {
HXLINE( 599)			{
HXLINE( 599)				this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("t",74,00,00,00),tk)
            					->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            					->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 599)				this->tokenMin = this->oldTokenMin;
HXDLIN( 599)				this->tokenMax = this->oldTokenMax;
            			}
HXLINE( 600)			return null();
            		}
HXLINE( 602)		::Array< ::Dynamic> args = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 603)		tk = this->token();
HXLINE( 604)		if (::hx::IsPointerNotEq( tk,::hscriptBase::Token_obj::TPClose_dyn() )) {
HXLINE( 605)			{
HXLINE( 605)				this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("t",74,00,00,00),tk)
            					->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            					->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 605)				this->tokenMin = this->oldTokenMin;
HXDLIN( 605)				this->tokenMax = this->oldTokenMax;
            			}
HXLINE( 606)			while(true){
HXLINE( 607)				args->push(this->parseExpr());
HXLINE( 608)				{
HXLINE( 608)					 ::hscriptBase::Token _g = this->token();
HXDLIN( 608)					switch((int)(_g->_hx_getIndex())){
            						case (int)5: {
HXLINE( 611)							goto _hx_goto_48;
            						}
            						break;
            						case (int)9: {
            						}
            						break;
            						default:{
HXLINE( 612)							 ::hscriptBase::Token tk = _g;
HXLINE( 613)							this->unexpected(tk);
            						}
            					}
            				}
            			}
            			_hx_goto_48:;
            		}
HXLINE( 617)		return args;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseMetaArgs,return )

 ::Dynamic Parser_obj::mapCompr(::String tmp, ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_620_mapCompr)
HXLINE( 621)		if (::hx::IsNull( e )) {
HXLINE( 621)			return null();
            		}
HXLINE( 622)		 ::hscriptBase::ExprDef edef;
HXDLIN( 622)		 ::hscriptBase::ExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 622)		switch((int)(_g->_hx_getIndex())){
            			case (int)4: {
HXLINE( 633)				 ::Dynamic e2 = _g->_hx_getObject(0);
HXLINE( 622)				edef = ::hscriptBase::ExprDef_obj::EParent(this->mapCompr(tmp,e2));
            			}
            			break;
            			case (int)5: {
HXLINE( 631)				::Array< ::Dynamic> _g1 = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 631)				if ((_g1->length == 1)) {
HXLINE( 631)					 ::Dynamic e = _g1->__get(0);
HXLINE( 622)					edef = ::hscriptBase::ExprDef_obj::EBlock(::Array_obj< ::Dynamic>::__new(1)->init(0,this->mapCompr(tmp,e)));
            				}
            				else {
HXLINE( 636)					 ::hscriptBase::ExprDef e1 = ::hscriptBase::ExprDef_obj::EIdent(tmp,null());
HXDLIN( 636)					 ::Dynamic pmin;
HXDLIN( 636)					if (::hx::IsNull( e )) {
HXLINE( 636)						pmin = 0;
            					}
            					else {
HXLINE( 636)						pmin = e->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 636)					 ::Dynamic pmax;
HXDLIN( 636)					if (::hx::IsNull( e )) {
HXLINE( 636)						pmax = 0;
            					}
            					else {
HXLINE( 636)						pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 636)					 ::Dynamic e2;
HXDLIN( 636)					if (::hx::IsNull( e1 )) {
HXLINE( 636)						e2 = null();
            					}
            					else {
HXLINE( 636)						if (::hx::IsNull( pmin )) {
HXLINE( 636)							pmin = this->tokenMin;
            						}
HXDLIN( 636)						if (::hx::IsNull( pmax )) {
HXLINE( 636)							pmax = this->tokenMax;
            						}
HXDLIN( 636)						e2 =  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e1)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
HXDLIN( 636)					 ::hscriptBase::ExprDef e3 = ::hscriptBase::ExprDef_obj::EField(e2,HX_("push",da,11,61,4a));
HXDLIN( 636)					 ::Dynamic pmin1;
HXDLIN( 636)					if (::hx::IsNull( e )) {
HXLINE( 636)						pmin1 = 0;
            					}
            					else {
HXLINE( 636)						pmin1 = e->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 636)					 ::Dynamic pmax1;
HXDLIN( 636)					if (::hx::IsNull( e )) {
HXLINE( 636)						pmax1 = 0;
            					}
            					else {
HXLINE( 636)						pmax1 = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 636)					 ::Dynamic edef1;
HXDLIN( 636)					if (::hx::IsNull( e3 )) {
HXLINE( 636)						edef1 = null();
            					}
            					else {
HXLINE( 636)						if (::hx::IsNull( pmin1 )) {
HXLINE( 636)							pmin1 = this->tokenMin;
            						}
HXDLIN( 636)						if (::hx::IsNull( pmax1 )) {
HXLINE( 636)							pmax1 = this->tokenMax;
            						}
HXDLIN( 636)						edef1 =  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e3)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax1)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin1)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
HXLINE( 622)					edef = ::hscriptBase::ExprDef_obj::ECall(edef1,::Array_obj< ::Dynamic>::__new(1)->init(0,e));
            				}
            			}
            			break;
            			case (int)10: {
HXLINE( 629)				 ::Dynamic cond = _g->_hx_getObject(0);
HXDLIN( 629)				 ::Dynamic e1 = _g->_hx_getObject(1);
HXDLIN( 629)				 ::Dynamic e2 = _g->_hx_getObject(2);
HXDLIN( 629)				if (::hx::IsNull( e2 )) {
HXLINE( 622)					edef = ::hscriptBase::ExprDef_obj::EIf(cond,this->mapCompr(tmp,e1),null());
            				}
            				else {
HXLINE( 636)					 ::hscriptBase::ExprDef e1 = ::hscriptBase::ExprDef_obj::EIdent(tmp,null());
HXDLIN( 636)					 ::Dynamic pmin;
HXDLIN( 636)					if (::hx::IsNull( e )) {
HXLINE( 636)						pmin = 0;
            					}
            					else {
HXLINE( 636)						pmin = e->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 636)					 ::Dynamic pmax;
HXDLIN( 636)					if (::hx::IsNull( e )) {
HXLINE( 636)						pmax = 0;
            					}
            					else {
HXLINE( 636)						pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 636)					 ::Dynamic e2;
HXDLIN( 636)					if (::hx::IsNull( e1 )) {
HXLINE( 636)						e2 = null();
            					}
            					else {
HXLINE( 636)						if (::hx::IsNull( pmin )) {
HXLINE( 636)							pmin = this->tokenMin;
            						}
HXDLIN( 636)						if (::hx::IsNull( pmax )) {
HXLINE( 636)							pmax = this->tokenMax;
            						}
HXDLIN( 636)						e2 =  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e1)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
HXDLIN( 636)					 ::hscriptBase::ExprDef e3 = ::hscriptBase::ExprDef_obj::EField(e2,HX_("push",da,11,61,4a));
HXDLIN( 636)					 ::Dynamic pmin1;
HXDLIN( 636)					if (::hx::IsNull( e )) {
HXLINE( 636)						pmin1 = 0;
            					}
            					else {
HXLINE( 636)						pmin1 = e->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 636)					 ::Dynamic pmax1;
HXDLIN( 636)					if (::hx::IsNull( e )) {
HXLINE( 636)						pmax1 = 0;
            					}
            					else {
HXLINE( 636)						pmax1 = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 636)					 ::Dynamic edef1;
HXDLIN( 636)					if (::hx::IsNull( e3 )) {
HXLINE( 636)						edef1 = null();
            					}
            					else {
HXLINE( 636)						if (::hx::IsNull( pmin1 )) {
HXLINE( 636)							pmin1 = this->tokenMin;
            						}
HXDLIN( 636)						if (::hx::IsNull( pmax1 )) {
HXLINE( 636)							pmax1 = this->tokenMax;
            						}
HXDLIN( 636)						edef1 =  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e3)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax1)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin1)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
HXLINE( 622)					edef = ::hscriptBase::ExprDef_obj::ECall(edef1,::Array_obj< ::Dynamic>::__new(1)->init(0,e));
            				}
            			}
            			break;
            			case (int)11: {
HXLINE( 625)				 ::Dynamic cond = _g->_hx_getObject(0);
HXDLIN( 625)				 ::Dynamic e2 = _g->_hx_getObject(1);
HXLINE( 622)				edef = ::hscriptBase::ExprDef_obj::EWhile(cond,this->mapCompr(tmp,e2));
            			}
            			break;
            			case (int)12: {
HXLINE( 623)				::String v = _g->_hx_getString(0);
HXDLIN( 623)				 ::Dynamic it = _g->_hx_getObject(1);
HXDLIN( 623)				 ::Dynamic e2 = _g->_hx_getObject(2);
HXLINE( 622)				edef = ::hscriptBase::ExprDef_obj::EFor(v,it,this->mapCompr(tmp,e2));
            			}
            			break;
            			case (int)26: {
HXLINE( 627)				 ::Dynamic cond = _g->_hx_getObject(0);
HXDLIN( 627)				 ::Dynamic e2 = _g->_hx_getObject(1);
HXLINE( 622)				edef = ::hscriptBase::ExprDef_obj::EDoWhile(cond,this->mapCompr(tmp,e2));
            			}
            			break;
            			default:{
HXLINE( 636)				 ::hscriptBase::ExprDef e1 = ::hscriptBase::ExprDef_obj::EIdent(tmp,null());
HXDLIN( 636)				 ::Dynamic pmin;
HXDLIN( 636)				if (::hx::IsNull( e )) {
HXLINE( 636)					pmin = 0;
            				}
            				else {
HXLINE( 636)					pmin = e->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 636)				 ::Dynamic pmax;
HXDLIN( 636)				if (::hx::IsNull( e )) {
HXLINE( 636)					pmax = 0;
            				}
            				else {
HXLINE( 636)					pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 636)				 ::Dynamic e2;
HXDLIN( 636)				if (::hx::IsNull( e1 )) {
HXLINE( 636)					e2 = null();
            				}
            				else {
HXLINE( 636)					if (::hx::IsNull( pmin )) {
HXLINE( 636)						pmin = this->tokenMin;
            					}
HXDLIN( 636)					if (::hx::IsNull( pmax )) {
HXLINE( 636)						pmax = this->tokenMax;
            					}
HXDLIN( 636)					e2 =  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e1)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
HXDLIN( 636)				 ::hscriptBase::ExprDef e3 = ::hscriptBase::ExprDef_obj::EField(e2,HX_("push",da,11,61,4a));
HXDLIN( 636)				 ::Dynamic pmin1;
HXDLIN( 636)				if (::hx::IsNull( e )) {
HXLINE( 636)					pmin1 = 0;
            				}
            				else {
HXLINE( 636)					pmin1 = e->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 636)				 ::Dynamic pmax1;
HXDLIN( 636)				if (::hx::IsNull( e )) {
HXLINE( 636)					pmax1 = 0;
            				}
            				else {
HXLINE( 636)					pmax1 = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 636)				 ::Dynamic edef1;
HXDLIN( 636)				if (::hx::IsNull( e3 )) {
HXLINE( 636)					edef1 = null();
            				}
            				else {
HXLINE( 636)					if (::hx::IsNull( pmin1 )) {
HXLINE( 636)						pmin1 = this->tokenMin;
            					}
HXDLIN( 636)					if (::hx::IsNull( pmax1 )) {
HXLINE( 636)						pmax1 = this->tokenMax;
            					}
HXDLIN( 636)					edef1 =  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e3)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax1)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin1)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
HXLINE( 622)				edef = ::hscriptBase::ExprDef_obj::ECall(edef1,::Array_obj< ::Dynamic>::__new(1)->init(0,e));
            			}
            		}
HXLINE( 638)		 ::Dynamic pmin;
HXDLIN( 638)		if (::hx::IsNull( e )) {
HXLINE( 638)			pmin = 0;
            		}
            		else {
HXLINE( 638)			pmin = e->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            		}
HXDLIN( 638)		 ::Dynamic pmax;
HXDLIN( 638)		if (::hx::IsNull( e )) {
HXLINE( 638)			pmax = 0;
            		}
            		else {
HXLINE( 638)			pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            		}
HXDLIN( 638)		if (::hx::IsNull( edef )) {
HXLINE( 638)			return null();
            		}
            		else {
HXLINE( 638)			if (::hx::IsNull( pmin )) {
HXLINE( 638)				pmin = this->tokenMin;
            			}
HXDLIN( 638)			if (::hx::IsNull( pmax )) {
HXLINE( 638)				pmax = this->tokenMax;
            			}
HXDLIN( 638)			return  ::Dynamic(::hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("e",65,00,00,00),edef)
            				->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            				->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            				->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            				->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            		}
HXDLIN( 638)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,mapCompr,return )

 ::Dynamic Parser_obj::makeUnop(::String op, ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_641_makeUnop)
HXLINE( 642)		bool _hx_tmp;
HXDLIN( 642)		if (::hx::IsNull( e )) {
HXLINE( 642)			_hx_tmp = this->resumeErrors;
            		}
            		else {
HXLINE( 642)			_hx_tmp = false;
            		}
HXDLIN( 642)		if (_hx_tmp) {
HXLINE( 643)			return null();
            		}
HXLINE( 644)		 ::hscriptBase::ExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 644)		switch((int)(_g->_hx_getIndex())){
            			case (int)7: {
HXLINE( 645)				::String bop = _g->_hx_getString(0);
HXDLIN( 645)				 ::Dynamic e1 = _g->_hx_getObject(1);
HXDLIN( 645)				 ::Dynamic e2 = _g->_hx_getObject(2);
HXDLIN( 645)				 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EBinop(bop,this->makeUnop(op,e1),e2);
HXDLIN( 645)				 ::Dynamic pmin;
HXDLIN( 645)				if (::hx::IsNull( e1 )) {
HXLINE( 645)					pmin = 0;
            				}
            				else {
HXLINE( 645)					pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 645)				 ::Dynamic pmax;
HXDLIN( 645)				if (::hx::IsNull( e2 )) {
HXLINE( 645)					pmax = 0;
            				}
            				else {
HXLINE( 645)					pmax = e2->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 645)				if (::hx::IsNull( e )) {
HXLINE( 645)					return null();
            				}
            				else {
HXLINE( 645)					if (::hx::IsNull( pmin )) {
HXLINE( 645)						pmin = this->tokenMin;
            					}
HXDLIN( 645)					if (::hx::IsNull( pmax )) {
HXLINE( 645)						pmax = this->tokenMax;
            					}
HXDLIN( 645)					return  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
            			}
            			break;
            			case (int)24: {
HXLINE( 646)				 ::Dynamic e1 = _g->_hx_getObject(0);
HXDLIN( 646)				 ::Dynamic e2 = _g->_hx_getObject(1);
HXDLIN( 646)				 ::Dynamic e3 = _g->_hx_getObject(2);
HXDLIN( 646)				 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::ETernary(this->makeUnop(op,e1),e2,e3);
HXDLIN( 646)				 ::Dynamic pmin;
HXDLIN( 646)				if (::hx::IsNull( e1 )) {
HXLINE( 646)					pmin = 0;
            				}
            				else {
HXLINE( 646)					pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 646)				 ::Dynamic pmax;
HXDLIN( 646)				if (::hx::IsNull( e3 )) {
HXLINE( 646)					pmax = 0;
            				}
            				else {
HXLINE( 646)					pmax = e3->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 646)				if (::hx::IsNull( e )) {
HXLINE( 646)					return null();
            				}
            				else {
HXLINE( 646)					if (::hx::IsNull( pmin )) {
HXLINE( 646)						pmin = this->tokenMin;
            					}
HXDLIN( 646)					if (::hx::IsNull( pmax )) {
HXLINE( 646)						pmax = this->tokenMax;
            					}
HXDLIN( 646)					return  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
            			}
            			break;
            			default:{
HXLINE( 647)				 ::hscriptBase::ExprDef e1 = ::hscriptBase::ExprDef_obj::EUnop(op,true,e);
HXDLIN( 647)				 ::Dynamic pmin;
HXDLIN( 647)				if (::hx::IsNull( e )) {
HXLINE( 647)					pmin = 0;
            				}
            				else {
HXLINE( 647)					pmin = e->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 647)				 ::Dynamic pmax;
HXDLIN( 647)				if (::hx::IsNull( e )) {
HXLINE( 647)					pmax = 0;
            				}
            				else {
HXLINE( 647)					pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 647)				if (::hx::IsNull( e1 )) {
HXLINE( 647)					return null();
            				}
            				else {
HXLINE( 647)					if (::hx::IsNull( pmin )) {
HXLINE( 647)						pmin = this->tokenMin;
            					}
HXDLIN( 647)					if (::hx::IsNull( pmax )) {
HXLINE( 647)						pmax = this->tokenMax;
            					}
HXDLIN( 647)					return  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e1)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
            			}
            		}
HXLINE( 644)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,makeUnop,return )

 ::Dynamic Parser_obj::makeBinop(::String op, ::Dynamic e1, ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_651_makeBinop)
HXLINE( 652)		bool _hx_tmp;
HXDLIN( 652)		if (::hx::IsNull( e )) {
HXLINE( 652)			_hx_tmp = this->resumeErrors;
            		}
            		else {
HXLINE( 652)			_hx_tmp = false;
            		}
HXDLIN( 652)		if (_hx_tmp) {
HXLINE( 653)			 ::hscriptBase::ExprDef e2 = ::hscriptBase::ExprDef_obj::EBinop(op,e1,e);
HXDLIN( 653)			 ::Dynamic pmin;
HXDLIN( 653)			if (::hx::IsNull( e1 )) {
HXLINE( 653)				pmin = 0;
            			}
            			else {
HXLINE( 653)				pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            			}
HXDLIN( 653)			 ::Dynamic pmax;
HXDLIN( 653)			if (::hx::IsNull( e1 )) {
HXLINE( 653)				pmax = 0;
            			}
            			else {
HXLINE( 653)				pmax = e1->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            			}
HXDLIN( 653)			if (::hx::IsNull( e2 )) {
HXLINE( 653)				return null();
            			}
            			else {
HXLINE( 653)				if (::hx::IsNull( pmin )) {
HXLINE( 653)					pmin = this->tokenMin;
            				}
HXDLIN( 653)				if (::hx::IsNull( pmax )) {
HXLINE( 653)					pmax = this->tokenMax;
            				}
HXDLIN( 653)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e2)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
            		}
HXLINE( 654)		 ::hscriptBase::ExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 654)		switch((int)(_g->_hx_getIndex())){
            			case (int)7: {
HXLINE( 655)				::String op2 = _g->_hx_getString(0);
HXDLIN( 655)				 ::Dynamic e2 = _g->_hx_getObject(1);
HXDLIN( 655)				 ::Dynamic e3 = _g->_hx_getObject(2);
HXLINE( 656)				bool _hx_tmp;
HXDLIN( 656)				 ::Dynamic _hx_tmp1 = this->opPriority->get(op);
HXDLIN( 656)				if (::hx::IsLessEq( _hx_tmp1,this->opPriority->get(op2) )) {
HXLINE( 656)					_hx_tmp = !(this->opRightAssoc->exists(op));
            				}
            				else {
HXLINE( 656)					_hx_tmp = false;
            				}
HXDLIN( 656)				if (_hx_tmp) {
HXLINE( 657)					 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EBinop(op2,this->makeBinop(op,e1,e2),e3);
HXDLIN( 657)					 ::Dynamic pmin;
HXDLIN( 657)					if (::hx::IsNull( e1 )) {
HXLINE( 657)						pmin = 0;
            					}
            					else {
HXLINE( 657)						pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 657)					 ::Dynamic pmax;
HXDLIN( 657)					if (::hx::IsNull( e3 )) {
HXLINE( 657)						pmax = 0;
            					}
            					else {
HXLINE( 657)						pmax = e3->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 657)					if (::hx::IsNull( e )) {
HXLINE( 657)						return null();
            					}
            					else {
HXLINE( 657)						if (::hx::IsNull( pmin )) {
HXLINE( 657)							pmin = this->tokenMin;
            						}
HXDLIN( 657)						if (::hx::IsNull( pmax )) {
HXLINE( 657)							pmax = this->tokenMax;
            						}
HXDLIN( 657)						return  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
            				}
            				else {
HXLINE( 659)					 ::hscriptBase::ExprDef e2 = ::hscriptBase::ExprDef_obj::EBinop(op,e1,e);
HXDLIN( 659)					 ::Dynamic pmin;
HXDLIN( 659)					if (::hx::IsNull( e1 )) {
HXLINE( 659)						pmin = 0;
            					}
            					else {
HXLINE( 659)						pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 659)					 ::Dynamic pmax;
HXDLIN( 659)					if (::hx::IsNull( e )) {
HXLINE( 659)						pmax = 0;
            					}
            					else {
HXLINE( 659)						pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 659)					if (::hx::IsNull( e2 )) {
HXLINE( 659)						return null();
            					}
            					else {
HXLINE( 659)						if (::hx::IsNull( pmin )) {
HXLINE( 659)							pmin = this->tokenMin;
            						}
HXDLIN( 659)						if (::hx::IsNull( pmax )) {
HXLINE( 659)							pmax = this->tokenMax;
            						}
HXDLIN( 659)						return  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e2)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
            				}
            			}
            			break;
            			case (int)24: {
HXLINE( 660)				 ::Dynamic e2 = _g->_hx_getObject(0);
HXDLIN( 660)				 ::Dynamic e3 = _g->_hx_getObject(1);
HXDLIN( 660)				 ::Dynamic e4 = _g->_hx_getObject(2);
HXLINE( 661)				if (this->opRightAssoc->exists(op)) {
HXLINE( 662)					 ::hscriptBase::ExprDef e2 = ::hscriptBase::ExprDef_obj::EBinop(op,e1,e);
HXDLIN( 662)					 ::Dynamic pmin;
HXDLIN( 662)					if (::hx::IsNull( e1 )) {
HXLINE( 662)						pmin = 0;
            					}
            					else {
HXLINE( 662)						pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 662)					 ::Dynamic pmax;
HXDLIN( 662)					if (::hx::IsNull( e )) {
HXLINE( 662)						pmax = 0;
            					}
            					else {
HXLINE( 662)						pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 662)					if (::hx::IsNull( e2 )) {
HXLINE( 662)						return null();
            					}
            					else {
HXLINE( 662)						if (::hx::IsNull( pmin )) {
HXLINE( 662)							pmin = this->tokenMin;
            						}
HXDLIN( 662)						if (::hx::IsNull( pmax )) {
HXLINE( 662)							pmax = this->tokenMax;
            						}
HXDLIN( 662)						return  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e2)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
            				}
            				else {
HXLINE( 664)					 ::hscriptBase::ExprDef e5 = ::hscriptBase::ExprDef_obj::ETernary(this->makeBinop(op,e1,e2),e3,e4);
HXDLIN( 664)					 ::Dynamic pmin;
HXDLIN( 664)					if (::hx::IsNull( e1 )) {
HXLINE( 664)						pmin = 0;
            					}
            					else {
HXLINE( 664)						pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 664)					 ::Dynamic pmax;
HXDLIN( 664)					if (::hx::IsNull( e )) {
HXLINE( 664)						pmax = 0;
            					}
            					else {
HXLINE( 664)						pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            					}
HXDLIN( 664)					if (::hx::IsNull( e5 )) {
HXLINE( 664)						return null();
            					}
            					else {
HXLINE( 664)						if (::hx::IsNull( pmin )) {
HXLINE( 664)							pmin = this->tokenMin;
            						}
HXDLIN( 664)						if (::hx::IsNull( pmax )) {
HXLINE( 664)							pmax = this->tokenMax;
            						}
HXDLIN( 664)						return  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e5)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
            				}
            			}
            			break;
            			default:{
HXLINE( 666)				 ::hscriptBase::ExprDef e2 = ::hscriptBase::ExprDef_obj::EBinop(op,e1,e);
HXDLIN( 666)				 ::Dynamic pmin;
HXDLIN( 666)				if (::hx::IsNull( e1 )) {
HXLINE( 666)					pmin = 0;
            				}
            				else {
HXLINE( 666)					pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 666)				 ::Dynamic pmax;
HXDLIN( 666)				if (::hx::IsNull( e )) {
HXLINE( 666)					pmax = 0;
            				}
            				else {
HXLINE( 666)					pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            				}
HXDLIN( 666)				if (::hx::IsNull( e2 )) {
HXLINE( 666)					return null();
            				}
            				else {
HXLINE( 666)					if (::hx::IsNull( pmin )) {
HXLINE( 666)						pmin = this->tokenMin;
            					}
HXDLIN( 666)					if (::hx::IsNull( pmax )) {
HXLINE( 666)						pmax = this->tokenMax;
            					}
HXDLIN( 666)					return  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e2)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
            			}
            		}
HXLINE( 654)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,makeBinop,return )

 ::Dynamic Parser_obj::parseStructure(::String id, ::Dynamic t, ::Dynamic d){
            	HX_GC_STACKFRAME(&_hx_pos_948055e9f9c336b1_670_parseStructure)
HXLINE( 672)		int p1 = this->tokenMin;
HXLINE( 674)		::String _hx_switch_0 = id;
            		if (  (_hx_switch_0==HX_("break",bf,24,ec,b8)) ){
HXLINE( 816)			 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EBreak_dyn();
HXDLIN( 816)			 ::Dynamic pmin = null();
HXDLIN( 816)			 ::Dynamic pmax = null();
HXDLIN( 816)			if (::hx::IsNull( e )) {
HXLINE( 816)				return null();
            			}
            			else {
HXLINE( 816)				if (::hx::IsNull( pmin )) {
HXLINE( 816)					pmin = this->tokenMin;
            				}
HXDLIN( 816)				if (::hx::IsNull( pmax )) {
HXLINE( 816)					pmax = this->tokenMax;
            				}
HXDLIN( 816)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXDLIN( 816)			goto _hx_goto_53;
            		}
            		if (  (_hx_switch_0==HX_("continue",67,e0,c8,31)) ){
HXLINE( 817)			 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EContinue_dyn();
HXDLIN( 817)			 ::Dynamic pmin = null();
HXDLIN( 817)			 ::Dynamic pmax = null();
HXDLIN( 817)			if (::hx::IsNull( e )) {
HXLINE( 817)				return null();
            			}
            			else {
HXLINE( 817)				if (::hx::IsNull( pmin )) {
HXLINE( 817)					pmin = this->tokenMin;
            				}
HXDLIN( 817)				if (::hx::IsNull( pmax )) {
HXLINE( 817)					pmax = this->tokenMax;
            				}
HXDLIN( 817)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXDLIN( 817)			goto _hx_goto_53;
            		}
            		if (  (_hx_switch_0==HX_("do",8b,57,00,00)) ){
HXLINE( 799)			 ::Dynamic e = this->parseExpr();
HXLINE( 800)			 ::hscriptBase::Token tk = this->token();
HXLINE( 801)			if ((tk->_hx_getIndex() == 2)) {
HXLINE( 803)				if ((tk->_hx_getString(0) != HX_("while",b1,43,bd,c9))) {
HXLINE( 804)					this->unexpected(tk);
            				}
            			}
            			else {
HXLINE( 804)				this->unexpected(tk);
            			}
HXLINE( 806)			 ::Dynamic econd = this->parseExpr();
HXLINE( 807)			 ::hscriptBase::ExprDef e1 = ::hscriptBase::ExprDef_obj::EDoWhile(econd,e);
HXDLIN( 807)			 ::Dynamic pmin = p1;
HXDLIN( 807)			 ::Dynamic pmax;
HXDLIN( 807)			if (::hx::IsNull( econd )) {
HXLINE( 807)				pmax = 0;
            			}
            			else {
HXLINE( 807)				pmax = econd->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            			}
HXDLIN( 807)			if (::hx::IsNull( e1 )) {
HXLINE( 807)				return null();
            			}
            			else {
HXLINE( 807)				if (::hx::IsNull( pmin )) {
HXLINE( 807)					pmin = this->tokenMin;
            				}
HXDLIN( 807)				if (::hx::IsNull( pmax )) {
HXLINE( 807)					pmax = this->tokenMax;
            				}
HXDLIN( 807)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e1)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXLINE( 798)			goto _hx_goto_53;
            		}
            		if (  (_hx_switch_0==HX_("dynamic",7f,9f,15,36)) ){
HXLINE( 820)			bool maybe = this->maybe(::hscriptBase::Token_obj::TId(HX_("function",18,ab,52,14)));
HXLINE( 821)			if (!(maybe)) {
HXLINE( 822)				 ::hscriptBase::ErrorDef err = ::hscriptBase::ErrorDef_obj::EExpectedField(HX_("function",18,ab,52,14));
HXDLIN( 822)				 ::Dynamic pmin = null();
HXDLIN( 822)				 ::Dynamic pmax = null();
HXDLIN( 822)				 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line);
HXDLIN( 822)				if (!(this->resumeErrors)) {
HXLINE( 822)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line)));
            				}
            			}
HXLINE( 823)			return this->parseStructure(HX_("function",18,ab,52,14),null(), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("v",76,00,00,00),true)));
HXLINE( 819)			goto _hx_goto_53;
            		}
            		if (  (_hx_switch_0==HX_("else",b9,e4,14,43)) ){
HXLINE( 818)			return this->unexpected(::hscriptBase::Token_obj::TId(id));
HXDLIN( 818)			goto _hx_goto_53;
            		}
            		if (  (_hx_switch_0==HX_("final",76,5f,9a,00)) ){
HXLINE( 761)			::String ident = this->getIdent(null());
HXLINE( 762)			 ::hscriptBase::Token tk = this->token();
HXLINE( 763)			 ::hscriptBase::CType tp = null();
HXLINE( 764)			bool _hx_tmp;
HXDLIN( 764)			if (::hx::IsPointerEq( tk,::hscriptBase::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 764)				_hx_tmp = this->allowTypes;
            			}
            			else {
HXLINE( 764)				_hx_tmp = false;
            			}
HXDLIN( 764)			if (_hx_tmp) {
HXLINE( 765)				tp = this->parseType();
HXLINE( 766)				tk = this->token();
            			}
HXLINE( 768)			 ::Dynamic e = null();
HXLINE( 769)			switch((int)(tk->_hx_getIndex())){
            				case (int)3: {
HXLINE( 771)					if ((tk->_hx_getString(0) == HX_("=",3d,00,00,00))) {
HXLINE( 771)						e = this->parseExpr();
            					}
            					else {
HXLINE( 791)						this->unexpected(tk);
            					}
            				}
            				break;
            				case (int)9: case (int)10: {
HXLINE( 778)					{
HXLINE( 778)						this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("t",74,00,00,00),tk)
            							->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            							->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 778)						this->tokenMin = this->oldTokenMin;
HXDLIN( 778)						this->tokenMax = this->oldTokenMax;
            					}
HXLINE( 779)					if ((tp->_hx_getIndex() == 0)) {
HXLINE( 780)						::Array< ::String > p = tp->_hx_getObject(0).StaticCast< ::Array< ::String > >();
HXDLIN( 780)						::Array< ::Dynamic> pr = tp->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 781)						::String _hx_switch_1 = p->__get(0);
            						if (  (_hx_switch_1==HX_("Bool",4a,b0,f4,2b)) ){
HXLINE( 785)							 ::hscriptBase::ExprDef e1 = ::hscriptBase::ExprDef_obj::EIdent(HX_("false",a3,35,4f,fb),false);
HXDLIN( 785)							 ::Dynamic pmin = null();
HXDLIN( 785)							 ::Dynamic pmax = null();
HXDLIN( 785)							if (::hx::IsNull( e1 )) {
HXLINE( 785)								e = null();
            							}
            							else {
HXLINE( 785)								if (::hx::IsNull( pmin )) {
HXLINE( 785)									pmin = this->tokenMin;
            								}
HXDLIN( 785)								if (::hx::IsNull( pmax )) {
HXLINE( 785)									pmax = this->tokenMax;
            								}
HXDLIN( 785)								e =  ::Dynamic(::hx::Anon_obj::Create(5)
            									->setFixed(0,HX_("e",65,00,00,00),e1)
            									->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            									->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            									->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            									->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            							}
HXDLIN( 785)							goto _hx_goto_54;
            						}
            						if (  (_hx_switch_1==HX_("Float",7c,35,c4,95)) ){
HXLINE( 787)							 ::hscriptBase::ExprDef e1 = ::hscriptBase::ExprDef_obj::EConst(::hscriptBase::Const_obj::CFloat(((Float)0.0)));
HXDLIN( 787)							 ::Dynamic pmin = null();
HXDLIN( 787)							 ::Dynamic pmax = null();
HXDLIN( 787)							if (::hx::IsNull( e1 )) {
HXLINE( 787)								e = null();
            							}
            							else {
HXLINE( 787)								if (::hx::IsNull( pmin )) {
HXLINE( 787)									pmin = this->tokenMin;
            								}
HXDLIN( 787)								if (::hx::IsNull( pmax )) {
HXLINE( 787)									pmax = this->tokenMax;
            								}
HXDLIN( 787)								e =  ::Dynamic(::hx::Anon_obj::Create(5)
            									->setFixed(0,HX_("e",65,00,00,00),e1)
            									->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            									->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            									->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            									->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            							}
HXDLIN( 787)							goto _hx_goto_54;
            						}
            						if (  (_hx_switch_1==HX_("Int",cf,c4,37,00)) ){
HXLINE( 783)							 ::hscriptBase::ExprDef e1 = ::hscriptBase::ExprDef_obj::EConst(::hscriptBase::Const_obj::CInt(0));
HXDLIN( 783)							 ::Dynamic pmin = null();
HXDLIN( 783)							 ::Dynamic pmax = null();
HXDLIN( 783)							if (::hx::IsNull( e1 )) {
HXLINE( 783)								e = null();
            							}
            							else {
HXLINE( 783)								if (::hx::IsNull( pmin )) {
HXLINE( 783)									pmin = this->tokenMin;
            								}
HXDLIN( 783)								if (::hx::IsNull( pmax )) {
HXLINE( 783)									pmax = this->tokenMax;
            								}
HXDLIN( 783)								e =  ::Dynamic(::hx::Anon_obj::Create(5)
            									->setFixed(0,HX_("e",65,00,00,00),e1)
            									->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            									->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            									->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            									->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            							}
HXDLIN( 783)							goto _hx_goto_54;
            						}
            						_hx_goto_54:;
            					}
            				}
            				break;
            				default:{
HXLINE( 791)					this->unexpected(tk);
            				}
            			}
HXLINE( 793)			 ::hscriptBase::ExprDef e1 = ::hscriptBase::ExprDef_obj::EFinal(ident,tp,e,t);
HXDLIN( 793)			 ::Dynamic pmin = p1;
HXDLIN( 793)			 ::Dynamic pmax;
HXDLIN( 793)			if (::hx::IsNull( e )) {
HXLINE( 793)				pmax = this->tokenMax;
            			}
            			else {
HXLINE( 793)				if (::hx::IsNull( e )) {
HXLINE( 793)					pmax = 0;
            				}
            				else {
HXLINE( 793)					pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            				}
            			}
HXDLIN( 793)			if (::hx::IsNull( e1 )) {
HXLINE( 793)				return null();
            			}
            			else {
HXLINE( 793)				if (::hx::IsNull( pmin )) {
HXLINE( 793)					pmin = this->tokenMin;
            				}
HXDLIN( 793)				if (::hx::IsNull( pmax )) {
HXLINE( 793)					pmax = this->tokenMax;
            				}
HXDLIN( 793)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e1)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXLINE( 760)			goto _hx_goto_53;
            		}
            		if (  (_hx_switch_0==HX_("for",09,c7,4d,00)) ){
HXLINE( 809)			{
HXLINE( 809)				 ::hscriptBase::Token t = this->token();
HXDLIN( 809)				if (::hx::IsPointerNotEq( t,::hscriptBase::Token_obj::TPOpen_dyn() )) {
HXLINE( 809)					this->unexpected(t);
            				}
            			}
HXLINE( 810)			::String vname = this->getIdent(null());
HXLINE( 811)			{
HXLINE( 811)				 ::hscriptBase::Token t1 = this->token();
HXDLIN( 811)				if (!(__hxcpp_enum_eq(t1,::hscriptBase::Token_obj::TId(HX_("in",e5,5b,00,00))))) {
HXLINE( 811)					this->unexpected(t1);
            				}
            			}
HXLINE( 812)			 ::Dynamic eiter = this->parseExpr();
HXLINE( 813)			{
HXLINE( 813)				 ::hscriptBase::Token t2 = this->token();
HXDLIN( 813)				if (::hx::IsPointerNotEq( t2,::hscriptBase::Token_obj::TPClose_dyn() )) {
HXLINE( 813)					this->unexpected(t2);
            				}
            			}
HXLINE( 814)			 ::Dynamic e = this->parseExpr();
HXLINE( 815)			 ::hscriptBase::ExprDef e1 = ::hscriptBase::ExprDef_obj::EFor(vname,eiter,e);
HXDLIN( 815)			 ::Dynamic pmin = p1;
HXDLIN( 815)			 ::Dynamic pmax;
HXDLIN( 815)			if (::hx::IsNull( e )) {
HXLINE( 815)				pmax = 0;
            			}
            			else {
HXLINE( 815)				pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            			}
HXDLIN( 815)			if (::hx::IsNull( e1 )) {
HXLINE( 815)				return null();
            			}
            			else {
HXLINE( 815)				if (::hx::IsNull( pmin )) {
HXLINE( 815)					pmin = this->tokenMin;
            				}
HXDLIN( 815)				if (::hx::IsNull( pmax )) {
HXLINE( 815)					pmax = this->tokenMax;
            				}
HXDLIN( 815)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e1)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXLINE( 808)			goto _hx_goto_53;
            		}
            		if (  (_hx_switch_0==HX_("function",18,ab,52,14)) ){
HXLINE( 908)			 ::hscriptBase::Token tk = this->token();
HXLINE( 909)			::String name = null();
HXLINE( 910)			if ((tk->_hx_getIndex() == 2)) {
HXLINE( 911)				::String id = tk->_hx_getString(0);
HXDLIN( 911)				name = id;
            			}
            			else {
HXLINE( 912)				this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("t",74,00,00,00),tk)
            					->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            					->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 912)				this->tokenMin = this->oldTokenMin;
HXDLIN( 912)				this->tokenMax = this->oldTokenMax;
            			}
HXLINE( 914)			 ::Dynamic inf = this->parseFunctionDecl();
HXLINE( 915)			 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EFunction( ::Dynamic(inf->__Field(HX_("args",5d,8d,74,40),::hx::paccDynamic)), ::Dynamic(inf->__Field(HX_("body",a2,7a,1b,41),::hx::paccDynamic)),name, ::Dynamic(inf->__Field(HX_("ret",61,d9,56,00),::hx::paccDynamic)),t,d);
HXDLIN( 915)			 ::Dynamic pmin = p1;
HXDLIN( 915)			 ::Dynamic e1 = inf->__Field(HX_("body",a2,7a,1b,41),::hx::paccDynamic);
HXDLIN( 915)			 ::Dynamic pmax;
HXDLIN( 915)			if (::hx::IsNull( e1 )) {
HXLINE( 915)				pmax = 0;
            			}
            			else {
HXLINE( 915)				pmax = e1->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            			}
HXDLIN( 915)			if (::hx::IsNull( e )) {
HXLINE( 915)				return null();
            			}
            			else {
HXLINE( 915)				if (::hx::IsNull( pmin )) {
HXLINE( 915)					pmin = this->tokenMin;
            				}
HXDLIN( 915)				if (::hx::IsNull( pmax )) {
HXLINE( 915)					pmax = this->tokenMax;
            				}
HXDLIN( 915)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXLINE( 907)			goto _hx_goto_53;
            		}
            		if (  (_hx_switch_0==HX_("if",dd,5b,00,00)) ){
HXLINE( 676)			{
HXLINE( 676)				 ::hscriptBase::Token t = this->token();
HXDLIN( 676)				if (::hx::IsPointerNotEq( t,::hscriptBase::Token_obj::TPOpen_dyn() )) {
HXLINE( 676)					this->unexpected(t);
            				}
            			}
HXLINE( 677)			 ::Dynamic cond = this->parseExpr();
HXLINE( 678)			{
HXLINE( 678)				 ::hscriptBase::Token t1 = this->token();
HXDLIN( 678)				if (::hx::IsPointerNotEq( t1,::hscriptBase::Token_obj::TPClose_dyn() )) {
HXLINE( 678)					this->unexpected(t1);
            				}
            			}
HXLINE( 679)			 ::Dynamic e1 = this->parseExpr();
HXLINE( 680)			 ::Dynamic e2 = null();
HXLINE( 681)			bool semic = false;
HXLINE( 682)			 ::hscriptBase::Token tk = this->token();
HXLINE( 683)			if (::hx::IsPointerEq( tk,::hscriptBase::Token_obj::TStatement_dyn() )) {
HXLINE( 684)				semic = true;
HXLINE( 685)				tk = this->token();
            			}
HXLINE( 687)			if (__hxcpp_enum_eq(tk,::hscriptBase::Token_obj::TId(HX_("else",b9,e4,14,43)))) {
HXLINE( 688)				e2 = this->parseExpr();
            			}
            			else {
HXLINE( 690)				{
HXLINE( 690)					this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("t",74,00,00,00),tk)
            						->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            						->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 690)					this->tokenMin = this->oldTokenMin;
HXDLIN( 690)					this->tokenMax = this->oldTokenMax;
            				}
HXLINE( 691)				if (semic) {
HXLINE( 691)					this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("t",74,00,00,00),::hscriptBase::Token_obj::TStatement_dyn())
            						->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            						->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 691)					this->tokenMin = this->oldTokenMin;
HXDLIN( 691)					this->tokenMax = this->oldTokenMax;
            				}
            			}
HXLINE( 693)			 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EIf(cond,e1,e2);
HXDLIN( 693)			 ::Dynamic pmin = p1;
HXDLIN( 693)			 ::Dynamic pmax;
HXDLIN( 693)			if (::hx::IsNull( e2 )) {
HXLINE( 693)				pmax = this->tokenMax;
            			}
            			else {
HXLINE( 693)				if (::hx::IsNull( e2 )) {
HXLINE( 693)					pmax = 0;
            				}
            				else {
HXLINE( 693)					pmax = e2->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            				}
            			}
HXDLIN( 693)			if (::hx::IsNull( e )) {
HXLINE( 693)				return null();
            			}
            			else {
HXLINE( 693)				if (::hx::IsNull( pmin )) {
HXLINE( 693)					pmin = this->tokenMin;
            				}
HXDLIN( 693)				if (::hx::IsNull( pmax )) {
HXLINE( 693)					pmax = this->tokenMax;
            				}
HXDLIN( 693)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXLINE( 675)			goto _hx_goto_53;
            		}
            		if (  (_hx_switch_0==HX_("import",65,a1,82,08)) ){
HXLINE(1036)			::Array< ::String > path = ::Array_obj< ::String >::__new(1)->init(0,this->getIdent(null()));
HXLINE(1037)			bool isStar = false;
HXLINE(1039)			while(true){
HXLINE(1040)				 ::hscriptBase::Token t = this->token();
HXLINE(1041)				if (::hx::IsPointerNotEq( t,::hscriptBase::Token_obj::TDot_dyn() )) {
HXLINE(1042)					{
HXLINE(1042)						this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("t",74,00,00,00),t)
            							->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            							->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1042)						this->tokenMin = this->oldTokenMin;
HXDLIN(1042)						this->tokenMax = this->oldTokenMax;
            					}
HXLINE(1043)					goto _hx_goto_55;
            				}
HXLINE(1045)				t = this->token();
HXLINE(1046)				switch((int)(t->_hx_getIndex())){
            					case (int)2: {
HXLINE(1047)						::String id = t->_hx_getString(0);
HXLINE(1048)						path->push(id);
            					}
            					break;
            					case (int)3: {
HXLINE(1049)						if ((t->_hx_getString(0) == HX_("*",2a,00,00,00))) {
HXLINE(1050)							isStar = true;
HXLINE(1051)							goto _hx_goto_55;
            						}
            						else {
HXLINE(1053)							this->unexpected(t);
            						}
            					}
            					break;
            					default:{
HXLINE(1053)						this->unexpected(t);
            					}
            				}
            			}
            			_hx_goto_55:;
HXLINE(1059)			::Array< ::String > anPath = ::Array_obj< ::String >::__new(0);
HXLINE(1060)			int _hx_int = 0;
HXLINE(1061)			{
HXLINE(1061)				int _g = 0;
HXDLIN(1061)				while((_g < path->length)){
HXLINE(1061)					::String i = path->__get(_g);
HXDLIN(1061)					_g = (_g + 1);
HXLINE(1063)					bool _hx_tmp;
HXDLIN(1063)					if ((i == i.toLowerCase())) {
HXLINE(1063)						_hx_tmp = (path->indexOf(i,null()) == 0);
            					}
            					else {
HXLINE(1063)						_hx_tmp = false;
            					}
HXDLIN(1063)					if (_hx_tmp) {
HXLINE(1065)						anPath->insert(0,((HX_("",00,00,00,00) + i) + HX_(".",2e,00,00,00)));
HXLINE(1067)						_hx_int = (_hx_int + 1);
            					}
            					else {
HXLINE(1069)						bool _hx_tmp;
HXDLIN(1069)						if ((i == i.toLowerCase())) {
HXLINE(1069)							_hx_tmp = (path->indexOf(i,null()) == _hx_int);
            						}
            						else {
HXLINE(1069)							_hx_tmp = false;
            						}
HXDLIN(1069)						if (_hx_tmp) {
HXLINE(1071)							::Array< ::String > anPath1 = anPath;
HXDLIN(1071)							int _hx_tmp = 0;
HXDLIN(1071)							anPath1[_hx_tmp] = (anPath1->__get(_hx_tmp) + ((HX_("",00,00,00,00) + i) + HX_(".",2e,00,00,00)));
HXLINE(1073)							_hx_int = (_hx_int + 1);
            						}
            						else {
HXLINE(1075)							bool _hx_tmp;
HXDLIN(1075)							if ((path->indexOf(i,null()) == _hx_int)) {
HXLINE(1075)								_hx_tmp = (path->indexOf(i,null()) != 0);
            							}
            							else {
HXLINE(1075)								_hx_tmp = false;
            							}
HXDLIN(1075)							if (_hx_tmp) {
HXLINE(1077)								::Array< ::String > anPath1 = anPath;
HXDLIN(1077)								int _hx_tmp = 0;
HXDLIN(1077)								anPath1[_hx_tmp] = (anPath1->__get(_hx_tmp) + i);
            							}
            							else {
HXLINE(1080)								bool _hx_tmp;
HXDLIN(1080)								if ((path->indexOf(i,null()) == _hx_int)) {
HXLINE(1080)									_hx_tmp = (_hx_int == 0);
            								}
            								else {
HXLINE(1080)									_hx_tmp = false;
            								}
HXDLIN(1080)								if (_hx_tmp) {
HXLINE(1082)									anPath[0] = HX_("",00,00,00,00);
HXLINE(1083)									::Array< ::String > anPath1 = anPath;
HXDLIN(1083)									int _hx_tmp = 0;
HXDLIN(1083)									anPath1[_hx_tmp] = (anPath1->__get(_hx_tmp) + i);
            								}
            							}
            						}
            					}
            				}
            			}
HXLINE(1087)			::Array< ::String > nulls = anPath->__get(0).split(HX_(".",2e,00,00,00));
HXLINE(1089)			{
HXLINE(1089)				int _g1 = 0;
HXDLIN(1089)				while((_g1 < nulls->length)){
HXLINE(1089)					::String i = nulls->__get(_g1);
HXDLIN(1089)					_g1 = (_g1 + 1);
HXLINE(1090)					if (path->contains(i)) {
HXLINE(1091)						path->remove(i);
            					}
            				}
            			}
HXLINE(1093)			bool maybe = this->maybe(::hscriptBase::Token_obj::TId(HX_("as",f2,54,00,00)));
HXLINE(1094)			::String asIdent = null();
HXLINE(1096)			if (maybe) {
HXLINE(1096)				asIdent = this->getIdent(null());
            			}
HXLINE(1098)			bool _hx_tmp;
HXDLIN(1098)			bool _hx_tmp1;
HXDLIN(1098)			if (maybe) {
HXLINE(1098)				_hx_tmp1 = ((HX_("",00,00,00,00) + asIdent) == HX_("null",87,9e,0e,49));
            			}
            			else {
HXLINE(1098)				_hx_tmp1 = false;
            			}
HXDLIN(1098)			if (_hx_tmp1) {
HXLINE(1098)				_hx_tmp = isStar;
            			}
            			else {
HXLINE(1098)				_hx_tmp = false;
            			}
HXDLIN(1098)			if (_hx_tmp) {
HXLINE(1099)				this->unexpected(::hscriptBase::Token_obj::TId(HX_("as",f2,54,00,00)));
            			}
HXLINE(1101)			::String cl = null();
HXLINE(1102)			 ::Dynamic eclass = null();
HXLINE(1103)			if ((path->length > 1)) {
HXLINE(1105)				::hx::Class c = ::Type_obj::resolveClass(anPath->__get(0));
HXLINE(1106)				 ::Dynamic property = ::Reflect_obj::getProperty(c,path->__get(0));
HXLINE(1108)				{
HXLINE(1108)					int _g = 1;
HXDLIN(1108)					int _g1 = (path->length - 1);
HXDLIN(1108)					while((_g < _g1)){
HXLINE(1108)						_g = (_g + 1);
HXDLIN(1108)						int i = (_g - 1);
HXLINE(1110)						property = ::Reflect_obj::getProperty(property,path->__get(i));
            					}
            				}
HXLINE(1113)				cl = path->__get((path->length - 1));
HXLINE(1114)				property = ::Reflect_obj::getProperty(property,cl);
HXLINE(1115)				bool _hx_tmp;
HXDLIN(1115)				if (maybe) {
HXLINE(1115)					_hx_tmp = ((HX_("",00,00,00,00) + asIdent) != HX_("null",87,9e,0e,49));
            				}
            				else {
HXLINE(1115)					_hx_tmp = false;
            				}
HXDLIN(1115)				if (_hx_tmp) {
HXLINE(1116)					cl = asIdent;
            				}
HXLINE(1117)				::cpp::VirtualArray ps = ::cpp::VirtualArray_obj::__new();
HXLINE(1118)				if (isStar) {
HXLINE(1119)					::Array< ::String > prop = ::Reflect_obj::fields(property);
HXLINE(1120)					{
HXLINE(1120)						int _g = 0;
HXDLIN(1120)						while((_g < prop->length)){
HXLINE(1120)							::String eprop = prop->__get(_g);
HXDLIN(1120)							_g = (_g + 1);
HXLINE(1121)							ps->push(::Reflect_obj::field(property,eprop));
            						}
            					}
            				}
            			}
            			else {
HXLINE(1128)				if ((path->length == 0)) {
HXLINE(1130)					eclass = ::Type_obj::resolveClass(anPath->__get(0));
HXLINE(1131)					if (::hx::IsNull( eclass )) {
HXLINE(1131)						eclass = ::Type_obj::resolveEnum(anPath->__get(0));
            					}
HXLINE(1132)					cl = nulls->__get((nulls->length - 1));
HXLINE(1133)					bool _hx_tmp;
HXDLIN(1133)					if (maybe) {
HXLINE(1133)						_hx_tmp = ((HX_("",00,00,00,00) + asIdent) != HX_("null",87,9e,0e,49));
            					}
            					else {
HXLINE(1133)						_hx_tmp = false;
            					}
HXDLIN(1133)					if (_hx_tmp) {
HXLINE(1134)						cl = asIdent;
            					}
            				}
            				else {
HXLINE(1138)					::String path1 = path->__get(0);
HXDLIN(1138)					if (::StringTools_obj::startsWith(path1,path->__get(0).substring(0,1).toLowerCase())) {
HXLINE(1140)						eclass = ::Type_obj::resolveClass(anPath->__get(0));
HXLINE(1141)						if (::hx::IsNull( eclass )) {
HXLINE(1141)							eclass = ::Type_obj::resolveEnum(anPath->__get(0));
            						}
HXLINE(1142)						 ::Dynamic prop = ::Reflect_obj::getProperty(eclass,path->__get(0));
HXLINE(1143)						eclass = prop;
HXLINE(1144)						cl = path->__get(0);
HXLINE(1145)						bool _hx_tmp;
HXDLIN(1145)						if (maybe) {
HXLINE(1145)							_hx_tmp = ((HX_("",00,00,00,00) + asIdent) != HX_("null",87,9e,0e,49));
            						}
            						else {
HXLINE(1145)							_hx_tmp = false;
            						}
HXDLIN(1145)						if (_hx_tmp) {
HXLINE(1146)							cl = asIdent;
            						}
            					}
HXLINE(1148)					::String path2 = path->__get(0);
HXDLIN(1148)					if (::StringTools_obj::startsWith(path2,path->__get(0).substring(0,1).toUpperCase())) {
HXLINE(1150)						try {
            							HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(1151)							eclass = ::Type_obj::resolveClass(anPath->__get(0));
HXLINE(1152)							if (::hx::IsNull( eclass )) {
HXLINE(1152)								eclass = ::Type_obj::resolveEnum(anPath->__get(0));
            							}
HXLINE(1153)							 ::Dynamic prop = ::Reflect_obj::getProperty(eclass,path->__get(0));
HXLINE(1154)							eclass = prop;
HXLINE(1155)							cl = path->__get(0);
HXLINE(1156)							bool _hx_tmp;
HXDLIN(1156)							if (maybe) {
HXLINE(1156)								_hx_tmp = ((HX_("",00,00,00,00) + asIdent) != HX_("null",87,9e,0e,49));
            							}
            							else {
HXLINE(1156)								_hx_tmp = false;
            							}
HXDLIN(1156)							if (_hx_tmp) {
HXLINE(1157)								cl = asIdent;
            							}
            						} catch( ::Dynamic _hx_e) {
            							if (_hx_e.IsClass<  ::Dynamic >() ){
            								HX_STACK_BEGIN_CATCH
            								 ::Dynamic _g = _hx_e;
HXLINE(1159)								try {
            									HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(1160)									cl = path->__get(0);
HXLINE(1161)									eclass = ::Type_obj::resolveClass(cl);
HXLINE(1162)									if (::hx::IsNull( eclass )) {
HXLINE(1162)										eclass = ::Type_obj::resolveEnum(anPath->__get(0));
            									}
HXLINE(1163)									bool _hx_tmp;
HXDLIN(1163)									if (maybe) {
HXLINE(1163)										_hx_tmp = ((HX_("",00,00,00,00) + asIdent) != HX_("null",87,9e,0e,49));
            									}
            									else {
HXLINE(1163)										_hx_tmp = false;
            									}
HXDLIN(1163)									if (_hx_tmp) {
HXLINE(1164)										cl = asIdent;
            									}
            								} catch( ::Dynamic _hx_e) {
            									if (_hx_e.IsClass<  ::Dynamic >() ){
            										HX_STACK_BEGIN_CATCH
            										 ::Dynamic _g = _hx_e;
HXLINE(1166)										 ::haxe::Exception ec = ::haxe::Exception_obj::caught(_g);
HXLINE(1167)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(ec));
            									}
            									else {
            										HX_STACK_DO_THROW(_hx_e);
            									}
            								}
            							}
            							else {
            								HX_STACK_DO_THROW(_hx_e);
            							}
            						}
            					}
            				}
            			}
HXLINE(1173)			 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EImport(eclass,cl,null());
HXDLIN(1173)			 ::Dynamic pmin = null();
HXDLIN(1173)			 ::Dynamic pmax = null();
HXDLIN(1173)			if (::hx::IsNull( e )) {
HXLINE(1173)				return null();
            			}
            			else {
HXLINE(1173)				if (::hx::IsNull( pmin )) {
HXLINE(1173)					pmin = this->tokenMin;
            				}
HXDLIN(1173)				if (::hx::IsNull( pmax )) {
HXLINE(1173)					pmax = this->tokenMax;
            				}
HXDLIN(1173)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXLINE(1035)			goto _hx_goto_53;
            		}
            		if (  (_hx_switch_0==HX_("inline",59,ca,3f,99)) ){
HXLINE( 902)			if (this->maybe(::hscriptBase::Token_obj::TId(HX_("public",a9,80,f3,66)))) {
HXLINE( 903)				return this->parseStructure(HX_("public",a9,80,f3,66),null(),null());
            			}
            			else {
HXLINE( 905)				if (!(this->maybe(::hscriptBase::Token_obj::TId(HX_("function",18,ab,52,14))))) {
HXLINE( 905)					this->unexpected(::hscriptBase::Token_obj::TId(HX_("inline",59,ca,3f,99)));
            				}
HXLINE( 906)				return this->parseStructure(HX_("function",18,ab,52,14),null(),null());
            			}
HXLINE( 902)			goto _hx_goto_53;
            		}
            		if (  (_hx_switch_0==HX_("new",60,d0,53,00)) ){
HXLINE( 922)			::Array< ::String > a = ::Array_obj< ::String >::__new();
HXLINE( 923)			a->push(this->getIdent(null()));
HXLINE( 924)			while(true){
HXLINE( 925)				 ::hscriptBase::Token tk = this->token();
HXLINE( 926)				switch((int)(tk->_hx_getIndex())){
            					case (int)4: {
HXLINE( 930)						goto _hx_goto_60;
            					}
            					break;
            					case (int)8: {
HXLINE( 928)						a->push(this->getIdent(null()));
            					}
            					break;
            					default:{
HXLINE( 932)						this->unexpected(tk);
HXLINE( 933)						goto _hx_goto_60;
            					}
            				}
            			}
            			_hx_goto_60:;
HXLINE( 936)			::Array< ::Dynamic> args = this->parseExprList(::hscriptBase::Token_obj::TPClose_dyn());
HXLINE( 937)			 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::ENew(a->join(HX_(".",2e,00,00,00)),args);
HXDLIN( 937)			 ::Dynamic pmin = p1;
HXDLIN( 937)			 ::Dynamic pmax = null();
HXDLIN( 937)			if (::hx::IsNull( e )) {
HXLINE( 937)				return null();
            			}
            			else {
HXLINE( 937)				if (::hx::IsNull( pmin )) {
HXLINE( 937)					pmin = this->tokenMin;
            				}
HXDLIN( 937)				if (::hx::IsNull( pmax )) {
HXLINE( 937)					pmax = this->tokenMax;
            				}
HXDLIN( 937)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXLINE( 921)			goto _hx_goto_53;
            		}
            		if (  (_hx_switch_0==HX_("package",86,2b,b1,41)) ){
HXLINE(1175)			::Array< ::String > path = ::Array_obj< ::String >::__new(1)->init(0,this->getIdent(false));
HXLINE(1176)			if (!(path->contains(null()))) {
HXLINE(1177)				while(true){
HXLINE(1178)					 ::hscriptBase::Token t = this->token();
HXLINE(1179)					if (::hx::IsPointerNotEq( t,::hscriptBase::Token_obj::TDot_dyn() )) {
HXLINE(1180)						{
HXLINE(1180)							this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("t",74,00,00,00),t)
            								->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            								->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1180)							this->tokenMin = this->oldTokenMin;
HXDLIN(1180)							this->tokenMax = this->oldTokenMax;
            						}
HXLINE(1181)						goto _hx_goto_61;
            					}
HXLINE(1183)					t = this->token();
HXLINE(1184)					if ((t->_hx_getIndex() == 2)) {
HXLINE(1185)						::String id = t->_hx_getString(0);
HXLINE(1186)						path->push(id);
            					}
            					else {
HXLINE(1188)						this->unexpected(t);
            					}
            				}
            				_hx_goto_61:;
            			}
            			else {
HXLINE(1191)				this->readPos--;
            			}
HXLINE(1193)			::String ppath = HX_("",00,00,00,00);
HXLINE(1194)			if ((path->length > 1)) {
HXLINE(1194)				int _g = 0;
HXDLIN(1194)				while((_g < path->length)){
HXLINE(1194)					::String i = path->__get(_g);
HXDLIN(1194)					_g = (_g + 1);
HXLINE(1196)					ppath = (ppath + (i + HX_(".",2e,00,00,00)));
            				}
            			}
            			else {
HXLINE(1197)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(1197)					ppath = path->__get(0);
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE(1197)						ppath = HX_("",00,00,00,00);
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
HXLINE(1198)			::Array< ::String > spath = ppath.split(HX_("",00,00,00,00));
HXLINE(1199)			spath[(spath->length - 1)] = ::StringTools_obj::replace(spath->__get((spath->length - 1)),HX_(".",2e,00,00,00),HX_("",00,00,00,00));
HXLINE(1200)			 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EPackage(spath->join(HX_("",00,00,00,00)));
HXDLIN(1200)			 ::Dynamic pmin = null();
HXDLIN(1200)			 ::Dynamic pmax = null();
HXDLIN(1200)			if (::hx::IsNull( e )) {
HXLINE(1200)				return null();
            			}
            			else {
HXLINE(1200)				if (::hx::IsNull( pmin )) {
HXLINE(1200)					pmin = this->tokenMin;
            				}
HXDLIN(1200)				if (::hx::IsNull( pmax )) {
HXLINE(1200)					pmax = this->tokenMax;
            				}
HXDLIN(1200)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXLINE(1174)			goto _hx_goto_53;
            		}
            		if (  (_hx_switch_0==HX_("private",03,2d,6f,89)) ){
HXLINE( 825)			::String maybeIdent = HX_("inline",59,ca,3f,99);
HXLINE( 826)			bool maybe = this->maybe(::hscriptBase::Token_obj::TId(maybeIdent));
HXLINE( 827)			::Array< ::String > maybes = ::Array_obj< ::String >::fromData( _hx_array_data_d7b9de09_76,3);
HXLINE( 828)			if (!(maybe)) {
HXLINE( 829)				{
HXLINE( 829)					int _g = 0;
HXDLIN( 829)					int _g1 = maybes->length;
HXDLIN( 829)					while((_g < _g1)){
HXLINE( 829)						_g = (_g + 1);
HXDLIN( 829)						int _hx_int = (_g - 1);
HXLINE( 830)						maybeIdent = maybes->__get(_hx_int);
HXLINE( 831)						maybe = this->maybe(::hscriptBase::Token_obj::TId(maybeIdent));
HXLINE( 832)						if (maybe) {
HXLINE( 832)							goto _hx_goto_63;
            						}
            					}
            					_hx_goto_63:;
            				}
HXLINE( 834)				if (!(maybe)) {
HXLINE( 834)					this->unexpected(::hscriptBase::Token_obj::TId(HX_("private",03,2d,6f,89)));
            				}
            			}
HXLINE( 837)			if ((maybeIdent == HX_("inline",59,ca,3f,99))) {
HXLINE( 839)				 ::hscriptBase::Token tk = this->token();
HXLINE( 840)				::String t;
HXDLIN( 840)				if ((tk->_hx_getIndex() == 2)) {
HXLINE( 841)					::String s = tk->_hx_getString(0);
HXLINE( 840)					t = s;
            				}
            				else {
HXLINE( 840)					t = null();
            				}
HXLINE( 844)				 ::Dynamic trk =  ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("f",66,00,00,00),HX_("inlineFunc",3d,82,34,03))
            					->setFixed(1,HX_("n",6e,00,00,00),id)
            					->setFixed(2,HX_("v",76,00,00,00),true));
HXLINE( 845)				if (::hx::IsNull( t )) {
HXLINE( 852)					return this->unexpected(::hscriptBase::Token_obj::TId(HX_("public",a9,80,f3,66)));
            				}
            				else {
HXLINE( 845)					::String _hx_switch_2 = t;
            					if (  (_hx_switch_2==HX_("function",18,ab,52,14)) ){
HXLINE( 847)						return this->parseStructure(HX_("function",18,ab,52,14),trk,null());
HXDLIN( 847)						goto _hx_goto_64;
            					}
            					if (  (_hx_switch_2==HX_("final",76,5f,9a,00)) ||  (_hx_switch_2==HX_("var",e7,de,59,00)) ){
HXLINE( 849)						::String _hx_tmp;
HXDLIN( 849)						if ((t == HX_("final",76,5f,9a,00))) {
HXLINE( 849)							_hx_tmp = HX_("inlineFinal",5d,e2,ce,c2);
            						}
            						else {
HXLINE( 849)							_hx_tmp = HX_("inlineVar",0e,0a,50,38);
            						}
HXDLIN( 849)						trk->__SetField(HX_("f",66,00,00,00),_hx_tmp,::hx::paccDynamic);
HXLINE( 850)						return this->parseStructure(t,trk,null());
HXLINE( 848)						goto _hx_goto_64;
            					}
            					/* default */{
HXLINE( 852)						return this->unexpected(::hscriptBase::Token_obj::TId(HX_("public",a9,80,f3,66)));
            					}
            					_hx_goto_64:;
            				}
            			}
            			else {
HXLINE( 855)				if (!(maybes->contains(maybeIdent))) {
HXLINE( 856)					return this->unexpected(::hscriptBase::Token_obj::TId(maybeIdent));
            				}
            				else {
HXLINE( 858)					return this->parseStructure(maybeIdent, ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("f",66,00,00,00),HX_("privateField",b7,cc,40,ba))
            						->setFixed(1,HX_("n",6e,00,00,00),id)
            						->setFixed(2,HX_("v",76,00,00,00),true)),null());
            				}
            			}
HXLINE( 824)			goto _hx_goto_53;
            		}
            		if (  (_hx_switch_0==HX_("public",a9,80,f3,66)) ){
HXLINE( 862)			::String maybeID = HX_("inline",59,ca,3f,99);
HXLINE( 863)			bool maybe = this->maybe(::hscriptBase::Token_obj::TId(maybeID));
HXLINE( 865)			::Array< ::String > maybes = ::Array_obj< ::String >::fromData( _hx_array_data_d7b9de09_77,3);
HXLINE( 866)			if (!(maybe)) {
HXLINE( 868)				{
HXLINE( 868)					int _g = 0;
HXDLIN( 868)					int _g1 = maybes->length;
HXDLIN( 868)					while((_g < _g1)){
HXLINE( 868)						_g = (_g + 1);
HXDLIN( 868)						int _hx_int = (_g - 1);
HXLINE( 869)						maybeID = maybes->__get(_hx_int);
HXLINE( 870)						maybe = this->maybe(::hscriptBase::Token_obj::TId(maybeID));
HXLINE( 871)						if (maybe) {
HXLINE( 872)							goto _hx_goto_65;
            						}
            					}
            					_hx_goto_65:;
            				}
HXLINE( 874)				if (!(maybe)) {
HXLINE( 875)					this->unexpected(::hscriptBase::Token_obj::TId(HX_("public",a9,80,f3,66)));
            				}
            			}
HXLINE( 877)			if ((maybeID == HX_("inline",59,ca,3f,99))) {
HXLINE( 879)				 ::hscriptBase::Token tk = this->token();
HXLINE( 880)				::String t = null();
HXLINE( 881)				if ((tk->_hx_getIndex() == 2)) {
HXLINE( 882)					::String s = tk->_hx_getString(0);
HXDLIN( 882)					t = s;
            				}
            				else {
HXLINE( 883)					t = null();
            				}
HXLINE( 885)				::String _hx_switch_3 = t;
            				if (  (_hx_switch_3==HX_("function",18,ab,52,14)) ){
HXLINE( 887)					return this->parseStructure(t, ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("f",66,00,00,00),HX_("inlineFunc",3d,82,34,03))
            						->setFixed(1,HX_("n",6e,00,00,00),id)
            						->setFixed(2,HX_("v",76,00,00,00),true)),null());
HXDLIN( 887)					goto _hx_goto_66;
            				}
            				if (  (_hx_switch_3==HX_("final",76,5f,9a,00)) ||  (_hx_switch_3==HX_("var",e7,de,59,00)) ){
HXLINE( 889)					::String _hx_tmp;
HXDLIN( 889)					if ((t == HX_("final",76,5f,9a,00))) {
HXLINE( 889)						_hx_tmp = HX_("inlineFinal",5d,e2,ce,c2);
            					}
            					else {
HXLINE( 889)						_hx_tmp = HX_("inlineVar",0e,0a,50,38);
            					}
HXDLIN( 889)					return this->parseStructure(t, ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("f",66,00,00,00),_hx_tmp)
            						->setFixed(1,HX_("n",6e,00,00,00),id)
            						->setFixed(2,HX_("v",76,00,00,00),true)),null());
HXDLIN( 889)					goto _hx_goto_66;
            				}
            				/* default */{
HXLINE( 891)					return this->unexpected(::hscriptBase::Token_obj::TId(HX_("public",a9,80,f3,66)));
            				}
            				_hx_goto_66:;
            			}
            			else {
HXLINE( 894)				if (!(maybes->contains(maybeID))) {
HXLINE( 895)					return this->unexpected(::hscriptBase::Token_obj::TId(maybeID));
            				}
            				else {
HXLINE( 897)					 ::Dynamic e = this->parseStructure(maybeID, ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("f",66,00,00,00),HX_("publicField",51,7f,6d,5c))
            						->setFixed(1,HX_("n",6e,00,00,00),id)
            						->setFixed(2,HX_("v",76,00,00,00),true)),null());
HXLINE( 898)					return e;
            				}
            			}
HXLINE( 861)			goto _hx_goto_53;
            		}
            		if (  (_hx_switch_0==HX_("return",b0,a4,2d,09)) ){
HXLINE( 917)			 ::hscriptBase::Token tk = this->token();
HXLINE( 918)			{
HXLINE( 918)				this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("t",74,00,00,00),tk)
            					->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            					->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 918)				this->tokenMin = this->oldTokenMin;
HXDLIN( 918)				this->tokenMax = this->oldTokenMax;
            			}
HXLINE( 919)			 ::Dynamic e;
HXDLIN( 919)			if (::hx::IsPointerEq( tk,::hscriptBase::Token_obj::TStatement_dyn() )) {
HXLINE( 919)				e = null();
            			}
            			else {
HXLINE( 919)				e = this->parseExpr();
            			}
HXLINE( 920)			 ::hscriptBase::ExprDef e1 = ::hscriptBase::ExprDef_obj::EReturn(e);
HXDLIN( 920)			 ::Dynamic pmin = p1;
HXDLIN( 920)			 ::Dynamic pmax;
HXDLIN( 920)			if (::hx::IsNull( e )) {
HXLINE( 920)				pmax = this->tokenMax;
            			}
            			else {
HXLINE( 920)				if (::hx::IsNull( e )) {
HXLINE( 920)					pmax = 0;
            				}
            				else {
HXLINE( 920)					pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            				}
            			}
HXDLIN( 920)			if (::hx::IsNull( e1 )) {
HXLINE( 920)				return null();
            			}
            			else {
HXLINE( 920)				if (::hx::IsNull( pmin )) {
HXLINE( 920)					pmin = this->tokenMin;
            				}
HXDLIN( 920)				if (::hx::IsNull( pmax )) {
HXLINE( 920)					pmax = this->tokenMax;
            				}
HXDLIN( 920)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e1)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXLINE( 916)			goto _hx_goto_53;
            		}
            		if (  (_hx_switch_0==HX_("switch",f4,49,79,c5)) ){
HXLINE( 960)			 ::Dynamic e = this->parseExpr();
HXLINE( 961)			 ::Dynamic def = null();
HXDLIN( 961)			::Array< ::Dynamic> cases = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 962)			{
HXLINE( 962)				 ::hscriptBase::Token t = this->token();
HXDLIN( 962)				if (::hx::IsPointerNotEq( t,::hscriptBase::Token_obj::TBrOpen_dyn() )) {
HXLINE( 962)					this->unexpected(t);
            				}
            			}
HXLINE( 963)			while(true){
HXLINE( 964)				 ::hscriptBase::Token tk = this->token();
HXLINE( 965)				switch((int)(tk->_hx_getIndex())){
            					case (int)2: {
HXLINE(1002)						::String _hx_switch_4 = tk->_hx_getString(0);
            						if (  (_hx_switch_4==HX_("case",b0,1e,ba,41)) ){
HXLINE( 967)							 ::Dynamic c =  ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("expr",35,fd,1d,43),null())
            								->setFixed(1,HX_("values",e2,03,b7,4f),::Array_obj< ::Dynamic>::__new(0)));
HXLINE( 968)							cases->push(c);
HXLINE( 969)							while(true){
HXLINE( 970)								 ::Dynamic e = this->parseExpr();
HXLINE( 971)								( (::Array< ::Dynamic>)(c->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) )->push(e);
HXLINE( 972)								tk = this->token();
HXLINE( 973)								switch((int)(tk->_hx_getIndex())){
            									case (int)9: {
            									}
            									break;
            									case (int)15: {
HXLINE( 977)										goto _hx_goto_69;
            									}
            									break;
            									default:{
HXLINE( 979)										this->unexpected(tk);
HXLINE( 980)										goto _hx_goto_69;
            									}
            								}
            							}
            							_hx_goto_69:;
HXLINE( 983)							::Array< ::Dynamic> exprs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 984)							while(true){
HXLINE( 985)								tk = this->token();
HXLINE( 986)								{
HXLINE( 986)									this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            										->setFixed(0,HX_("t",74,00,00,00),tk)
            										->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            										->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 986)									this->tokenMin = this->oldTokenMin;
HXDLIN( 986)									this->tokenMax = this->oldTokenMax;
            								}
HXLINE( 987)								switch((int)(tk->_hx_getIndex())){
            									case (int)0: {
HXLINE( 990)										if (this->resumeErrors) {
HXLINE( 991)											goto _hx_goto_70;
            										}
            										else {
HXLINE( 993)											this->parseFullExpr(exprs);
            										}
            									}
            									break;
            									case (int)2: {
HXLINE( 988)										::String _hx_switch_5 = tk->_hx_getString(0);
            										if (  (_hx_switch_5==HX_("case",b0,1e,ba,41)) ||  (_hx_switch_5==HX_("default",c1,d8,c3,9b)) ){
HXLINE( 989)											goto _hx_goto_70;
HXDLIN( 989)											goto _hx_goto_71;
            										}
            										/* default */{
HXLINE( 993)											this->parseFullExpr(exprs);
            										}
            										_hx_goto_71:;
            									}
            									break;
            									case (int)7: {
HXLINE( 989)										goto _hx_goto_70;
            									}
            									break;
            									default:{
HXLINE( 993)										this->parseFullExpr(exprs);
            									}
            								}
            							}
            							_hx_goto_70:;
HXLINE( 996)							 ::Dynamic _hx_tmp;
HXDLIN( 996)							if ((exprs->length == 1)) {
HXLINE( 996)								_hx_tmp = exprs->__get(0);
            							}
            							else {
HXLINE( 998)								if ((exprs->length == 0)) {
HXLINE( 999)									 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EBlock(::Array_obj< ::Dynamic>::__new(0));
HXDLIN( 999)									 ::Dynamic pmin = this->tokenMin;
HXDLIN( 999)									 ::Dynamic pmax = this->tokenMin;
HXDLIN( 999)									if (::hx::IsNull( e )) {
HXLINE( 996)										_hx_tmp = null();
            									}
            									else {
HXLINE( 999)										if (::hx::IsNull( pmin )) {
HXLINE( 999)											pmin = this->tokenMin;
            										}
HXDLIN( 999)										if (::hx::IsNull( pmax )) {
HXLINE( 999)											pmax = this->tokenMax;
            										}
HXLINE( 996)										_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(5)
            											->setFixed(0,HX_("e",65,00,00,00),e)
            											->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            											->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            											->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            											->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            									}
            								}
            								else {
HXLINE(1001)									 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EBlock(exprs);
HXDLIN(1001)									 ::Dynamic e1 = exprs->__get(0);
HXDLIN(1001)									 ::Dynamic pmin;
HXDLIN(1001)									if (::hx::IsNull( e1 )) {
HXLINE(1001)										pmin = 0;
            									}
            									else {
HXLINE(1001)										pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            									}
HXDLIN(1001)									 ::Dynamic e2 = exprs->__get((exprs->length - 1));
HXDLIN(1001)									 ::Dynamic pmax;
HXDLIN(1001)									if (::hx::IsNull( e2 )) {
HXLINE(1001)										pmax = 0;
            									}
            									else {
HXLINE(1001)										pmax = e2->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            									}
HXDLIN(1001)									if (::hx::IsNull( e )) {
HXLINE( 996)										_hx_tmp = null();
            									}
            									else {
HXLINE(1001)										if (::hx::IsNull( pmin )) {
HXLINE(1001)											pmin = this->tokenMin;
            										}
HXDLIN(1001)										if (::hx::IsNull( pmax )) {
HXLINE(1001)											pmax = this->tokenMax;
            										}
HXLINE( 996)										_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(5)
            											->setFixed(0,HX_("e",65,00,00,00),e)
            											->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            											->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            											->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            											->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            									}
            								}
            							}
HXDLIN( 996)							c->__SetField(HX_("expr",35,fd,1d,43),_hx_tmp,::hx::paccDynamic);
HXLINE( 966)							goto _hx_goto_68;
            						}
            						if (  (_hx_switch_4==HX_("default",c1,d8,c3,9b)) ){
HXLINE(1003)							if (::hx::IsNotNull( def )) {
HXLINE(1003)								this->unexpected(tk);
            							}
HXLINE(1004)							{
HXLINE(1004)								 ::hscriptBase::Token t = this->token();
HXDLIN(1004)								if (::hx::IsPointerNotEq( t,::hscriptBase::Token_obj::TDoubleDot_dyn() )) {
HXLINE(1004)									this->unexpected(t);
            								}
            							}
HXLINE(1005)							::Array< ::Dynamic> exprs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1006)							while(true){
HXLINE(1007)								tk = this->token();
HXLINE(1008)								{
HXLINE(1008)									this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            										->setFixed(0,HX_("t",74,00,00,00),tk)
            										->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            										->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1008)									this->tokenMin = this->oldTokenMin;
HXDLIN(1008)									this->tokenMax = this->oldTokenMax;
            								}
HXLINE(1009)								switch((int)(tk->_hx_getIndex())){
            									case (int)0: {
HXLINE(1012)										if (this->resumeErrors) {
HXLINE(1013)											goto _hx_goto_72;
            										}
            										else {
HXLINE(1015)											this->parseFullExpr(exprs);
            										}
            									}
            									break;
            									case (int)2: {
HXLINE(1010)										::String _hx_switch_6 = tk->_hx_getString(0);
            										if (  (_hx_switch_6==HX_("case",b0,1e,ba,41)) ||  (_hx_switch_6==HX_("default",c1,d8,c3,9b)) ){
HXLINE(1011)											goto _hx_goto_72;
HXDLIN(1011)											goto _hx_goto_73;
            										}
            										/* default */{
HXLINE(1015)											this->parseFullExpr(exprs);
            										}
            										_hx_goto_73:;
            									}
            									break;
            									case (int)7: {
HXLINE(1011)										goto _hx_goto_72;
            									}
            									break;
            									default:{
HXLINE(1015)										this->parseFullExpr(exprs);
            									}
            								}
            							}
            							_hx_goto_72:;
HXLINE(1018)							if ((exprs->length == 1)) {
HXLINE(1019)								def = exprs->__get(0);
            							}
            							else {
HXLINE(1020)								if ((exprs->length == 0)) {
HXLINE(1021)									 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EBlock(::Array_obj< ::Dynamic>::__new(0));
HXDLIN(1021)									 ::Dynamic pmin = this->tokenMin;
HXDLIN(1021)									 ::Dynamic pmax = this->tokenMin;
HXDLIN(1021)									if (::hx::IsNull( e )) {
HXLINE(1021)										def = null();
            									}
            									else {
HXLINE(1021)										if (::hx::IsNull( pmin )) {
HXLINE(1021)											pmin = this->tokenMin;
            										}
HXDLIN(1021)										if (::hx::IsNull( pmax )) {
HXLINE(1021)											pmax = this->tokenMax;
            										}
HXDLIN(1021)										def =  ::Dynamic(::hx::Anon_obj::Create(5)
            											->setFixed(0,HX_("e",65,00,00,00),e)
            											->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            											->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            											->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            											->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            									}
            								}
            								else {
HXLINE(1023)									 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EBlock(exprs);
HXDLIN(1023)									 ::Dynamic e1 = exprs->__get(0);
HXDLIN(1023)									 ::Dynamic pmin;
HXDLIN(1023)									if (::hx::IsNull( e1 )) {
HXLINE(1023)										pmin = 0;
            									}
            									else {
HXLINE(1023)										pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            									}
HXDLIN(1023)									 ::Dynamic e2 = exprs->__get((exprs->length - 1));
HXDLIN(1023)									 ::Dynamic pmax;
HXDLIN(1023)									if (::hx::IsNull( e2 )) {
HXLINE(1023)										pmax = 0;
            									}
            									else {
HXLINE(1023)										pmax = e2->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            									}
HXDLIN(1023)									if (::hx::IsNull( e )) {
HXLINE(1023)										def = null();
            									}
            									else {
HXLINE(1023)										if (::hx::IsNull( pmin )) {
HXLINE(1023)											pmin = this->tokenMin;
            										}
HXDLIN(1023)										if (::hx::IsNull( pmax )) {
HXLINE(1023)											pmax = this->tokenMax;
            										}
HXDLIN(1023)										def =  ::Dynamic(::hx::Anon_obj::Create(5)
            											->setFixed(0,HX_("e",65,00,00,00),e)
            											->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            											->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            											->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            											->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            									}
            								}
            							}
HXLINE(1002)							goto _hx_goto_68;
            						}
            						/* default */{
HXLINE(1027)							this->unexpected(tk);
HXLINE(1028)							goto _hx_goto_67;
            						}
            						_hx_goto_68:;
            					}
            					break;
            					case (int)7: {
HXLINE(1025)						goto _hx_goto_67;
            					}
            					break;
            					default:{
HXLINE(1027)						this->unexpected(tk);
HXLINE(1028)						goto _hx_goto_67;
            					}
            				}
            			}
            			_hx_goto_67:;
HXLINE(1031)			 ::hscriptBase::ExprDef e1 = ::hscriptBase::ExprDef_obj::ESwitch(e,cases,def);
HXDLIN(1031)			 ::Dynamic pmin = p1;
HXDLIN(1031)			 ::Dynamic pmax = this->tokenMax;
HXDLIN(1031)			if (::hx::IsNull( e1 )) {
HXLINE(1031)				return null();
            			}
            			else {
HXLINE(1031)				if (::hx::IsNull( pmin )) {
HXLINE(1031)					pmin = this->tokenMin;
            				}
HXDLIN(1031)				if (::hx::IsNull( pmax )) {
HXLINE(1031)					pmax = this->tokenMax;
            				}
HXDLIN(1031)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e1)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXLINE( 959)			goto _hx_goto_53;
            		}
            		if (  (_hx_switch_0==HX_("throw",26,5d,90,0f)) ){
HXLINE( 939)			 ::Dynamic e = this->parseExpr();
HXLINE( 940)			 ::hscriptBase::ExprDef e1 = ::hscriptBase::ExprDef_obj::EThrow(e);
HXDLIN( 940)			 ::Dynamic pmin = p1;
HXDLIN( 940)			 ::Dynamic pmax;
HXDLIN( 940)			if (::hx::IsNull( e )) {
HXLINE( 940)				pmax = 0;
            			}
            			else {
HXLINE( 940)				pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            			}
HXDLIN( 940)			if (::hx::IsNull( e1 )) {
HXLINE( 940)				return null();
            			}
            			else {
HXLINE( 940)				if (::hx::IsNull( pmin )) {
HXLINE( 940)					pmin = this->tokenMin;
            				}
HXDLIN( 940)				if (::hx::IsNull( pmax )) {
HXLINE( 940)					pmax = this->tokenMax;
            				}
HXDLIN( 940)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e1)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXLINE( 938)			goto _hx_goto_53;
            		}
            		if (  (_hx_switch_0==HX_("try",3b,69,58,00)) ){
HXLINE( 942)			 ::Dynamic e = this->parseExpr();
HXLINE( 943)			{
HXLINE( 943)				 ::hscriptBase::Token t = this->token();
HXDLIN( 943)				if (!(__hxcpp_enum_eq(t,::hscriptBase::Token_obj::TId(HX_("catch",3b,7c,21,41))))) {
HXLINE( 943)					this->unexpected(t);
            				}
            			}
HXLINE( 944)			{
HXLINE( 944)				 ::hscriptBase::Token t1 = this->token();
HXDLIN( 944)				if (::hx::IsPointerNotEq( t1,::hscriptBase::Token_obj::TPOpen_dyn() )) {
HXLINE( 944)					this->unexpected(t1);
            				}
            			}
HXLINE( 945)			::String cname = this->getIdent(null());
HXLINE( 946)			 ::hscriptBase::CType t2 = null();
HXLINE( 947)			bool canensure = true;
HXLINE( 948)			 ::hscriptBase::Token tk = this->token();
HXLINE( 949)			bool _hx_tmp;
HXDLIN( 949)			if (::hx::IsPointerEq( tk,::hscriptBase::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 949)				_hx_tmp = this->allowTypes;
            			}
            			else {
HXLINE( 949)				_hx_tmp = false;
            			}
HXDLIN( 949)			if (_hx_tmp) {
HXLINE( 951)				t2 = this->parseType();
            			}
            			else {
HXLINE( 954)				canensure = false;
            			}
HXLINE( 956)			if (canensure) {
HXLINE( 956)				 ::hscriptBase::Token t = this->token();
HXDLIN( 956)				if (::hx::IsPointerNotEq( t,::hscriptBase::Token_obj::TPClose_dyn() )) {
HXLINE( 956)					this->unexpected(t);
            				}
            			}
HXLINE( 957)			 ::Dynamic ce = this->parseExpr();
HXLINE( 958)			 ::hscriptBase::ExprDef e1 = ::hscriptBase::ExprDef_obj::ETry(e,cname,t2,ce);
HXDLIN( 958)			 ::Dynamic pmin = p1;
HXDLIN( 958)			 ::Dynamic pmax;
HXDLIN( 958)			if (::hx::IsNull( ce )) {
HXLINE( 958)				pmax = 0;
            			}
            			else {
HXLINE( 958)				pmax = ce->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            			}
HXDLIN( 958)			if (::hx::IsNull( e1 )) {
HXLINE( 958)				return null();
            			}
            			else {
HXLINE( 958)				if (::hx::IsNull( pmin )) {
HXLINE( 958)					pmin = this->tokenMin;
            				}
HXDLIN( 958)				if (::hx::IsNull( pmax )) {
HXLINE( 958)					pmax = this->tokenMax;
            				}
HXDLIN( 958)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e1)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXLINE( 941)			goto _hx_goto_53;
            		}
            		if (  (_hx_switch_0==HX_("using",44,75,35,aa)) ){
HXLINE(1034)			return this->parseStructure(HX_("import",65,a1,82,08),null(),null());
HXDLIN(1034)			goto _hx_goto_53;
            		}
            		if (  (_hx_switch_0==HX_("var",e7,de,59,00)) ){
HXLINE( 695)			::String ident = this->getIdent(null());
HXLINE( 696)			 ::hscriptBase::Token tk = this->token();
HXLINE( 697)			::String getter = null();
HXLINE( 698)			::String setter = null();
HXLINE( 699)			if (::hx::IsPointerEq( tk,::hscriptBase::Token_obj::TPOpen_dyn() )) {
HXLINE( 701)				if (::hx::IsNull( t )) {
HXLINE( 702)					 ::hscriptBase::ErrorDef err = ::hscriptBase::ErrorDef_obj::EExpectedField(ident);
HXDLIN( 702)					 ::Dynamic pmin = null();
HXDLIN( 702)					 ::Dynamic pmax = null();
HXDLIN( 702)					 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line);
HXDLIN( 702)					if (!(this->resumeErrors)) {
HXLINE( 702)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line)));
            					}
            				}
HXLINE( 704)				 ::hscriptBase::Token tk2 = this->token();
HXLINE( 705)				::Array< ::String > nulls = ::Array_obj< ::String >::fromData( _hx_array_data_d7b9de09_78,4);
HXLINE( 706)				if ((tk2->_hx_getIndex() == 2)) {
HXLINE( 707)					::String s = tk2->_hx_getString(0);
HXDLIN( 707)					{
HXLINE( 707)						if (!(nulls->copy()->contains((HX_("",00,00,00,00) + s)))) {
HXLINE( 707)							this->unexpected(tk2);
            						}
HXLINE( 708)						getter = s;
            					}
            				}
            				else {
HXLINE( 709)					this->unexpected(tk2);
            				}
HXLINE( 711)				 ::hscriptBase::Token tk21 = this->token();
HXLINE( 712)				if ((tk21->_hx_getIndex() != 9)) {
HXLINE( 714)					this->unexpected(tk21);
            				}
HXLINE( 716)				 ::hscriptBase::Token tk22 = this->token();
HXLINE( 717)				if ((tk22->_hx_getIndex() == 2)) {
HXLINE( 718)					::String s = tk22->_hx_getString(0);
HXDLIN( 718)					{
HXLINE( 718)						if (!(nulls->copy()->contains((HX_("",00,00,00,00) + s)))) {
HXLINE( 718)							this->unexpected(tk22);
            						}
HXLINE( 719)						setter = s;
            					}
            				}
            				else {
HXLINE( 720)					this->unexpected(tk22);
            				}
HXLINE( 722)				 ::hscriptBase::Token tk23 = this->token();
HXLINE( 723)				if ((tk23->_hx_getIndex() != 5)) {
HXLINE( 725)					this->unexpected(tk23);
            				}
HXLINE( 727)				tk = this->token();
            			}
HXLINE( 729)			 ::hscriptBase::CType tp = null();
HXLINE( 730)			bool _hx_tmp;
HXDLIN( 730)			if (::hx::IsPointerEq( tk,::hscriptBase::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 730)				_hx_tmp = this->allowTypes;
            			}
            			else {
HXLINE( 730)				_hx_tmp = false;
            			}
HXDLIN( 730)			if (_hx_tmp) {
HXLINE( 731)				tp = this->parseType();
HXLINE( 732)				tk = this->token();
            			}
HXLINE( 734)			 ::Dynamic e = null();
HXLINE( 735)			switch((int)(tk->_hx_getIndex())){
            				case (int)3: {
HXLINE( 737)					if ((tk->_hx_getString(0) == HX_("=",3d,00,00,00))) {
HXLINE( 737)						e = this->parseExpr();
HXLINE( 739)						bool _hx_tmp = ::hx::IsNotNull( tp );
            					}
            					else {
HXLINE( 757)						this->unexpected(tk);
            					}
            				}
            				break;
            				case (int)9: case (int)10: {
HXLINE( 744)					{
HXLINE( 744)						this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("t",74,00,00,00),tk)
            							->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            							->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN( 744)						this->tokenMin = this->oldTokenMin;
HXDLIN( 744)						this->tokenMax = this->oldTokenMax;
            					}
HXLINE( 745)					if (::hx::IsNotNull( tp )) {
HXLINE( 745)						if ((tp->_hx_getIndex() == 0)) {
HXLINE( 746)							::Array< ::String > p = tp->_hx_getObject(0).StaticCast< ::Array< ::String > >();
HXDLIN( 746)							::Array< ::Dynamic> pr = tp->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 747)							::String _hx_switch_7 = p->__get(0);
            							if (  (_hx_switch_7==HX_("Bool",4a,b0,f4,2b)) ){
HXLINE( 751)								 ::hscriptBase::ExprDef e1 = ::hscriptBase::ExprDef_obj::EIdent(HX_("false",a3,35,4f,fb),false);
HXDLIN( 751)								 ::Dynamic pmin = null();
HXDLIN( 751)								 ::Dynamic pmax = null();
HXDLIN( 751)								if (::hx::IsNull( e1 )) {
HXLINE( 751)									e = null();
            								}
            								else {
HXLINE( 751)									if (::hx::IsNull( pmin )) {
HXLINE( 751)										pmin = this->tokenMin;
            									}
HXDLIN( 751)									if (::hx::IsNull( pmax )) {
HXLINE( 751)										pmax = this->tokenMax;
            									}
HXDLIN( 751)									e =  ::Dynamic(::hx::Anon_obj::Create(5)
            										->setFixed(0,HX_("e",65,00,00,00),e1)
            										->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            										->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            										->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            										->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            								}
HXDLIN( 751)								goto _hx_goto_74;
            							}
            							if (  (_hx_switch_7==HX_("Float",7c,35,c4,95)) ){
HXLINE( 753)								 ::hscriptBase::ExprDef e1 = ::hscriptBase::ExprDef_obj::EConst(::hscriptBase::Const_obj::CFloat(((Float)0.0)));
HXDLIN( 753)								 ::Dynamic pmin = null();
HXDLIN( 753)								 ::Dynamic pmax = null();
HXDLIN( 753)								if (::hx::IsNull( e1 )) {
HXLINE( 753)									e = null();
            								}
            								else {
HXLINE( 753)									if (::hx::IsNull( pmin )) {
HXLINE( 753)										pmin = this->tokenMin;
            									}
HXDLIN( 753)									if (::hx::IsNull( pmax )) {
HXLINE( 753)										pmax = this->tokenMax;
            									}
HXDLIN( 753)									e =  ::Dynamic(::hx::Anon_obj::Create(5)
            										->setFixed(0,HX_("e",65,00,00,00),e1)
            										->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            										->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            										->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            										->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            								}
HXDLIN( 753)								goto _hx_goto_74;
            							}
            							if (  (_hx_switch_7==HX_("Int",cf,c4,37,00)) ){
HXLINE( 749)								 ::hscriptBase::ExprDef e1 = ::hscriptBase::ExprDef_obj::EConst(::hscriptBase::Const_obj::CInt(0));
HXDLIN( 749)								 ::Dynamic pmin = null();
HXDLIN( 749)								 ::Dynamic pmax = null();
HXDLIN( 749)								if (::hx::IsNull( e1 )) {
HXLINE( 749)									e = null();
            								}
            								else {
HXLINE( 749)									if (::hx::IsNull( pmin )) {
HXLINE( 749)										pmin = this->tokenMin;
            									}
HXDLIN( 749)									if (::hx::IsNull( pmax )) {
HXLINE( 749)										pmax = this->tokenMax;
            									}
HXDLIN( 749)									e =  ::Dynamic(::hx::Anon_obj::Create(5)
            										->setFixed(0,HX_("e",65,00,00,00),e1)
            										->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            										->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            										->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            										->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            								}
HXDLIN( 749)								goto _hx_goto_74;
            							}
            							_hx_goto_74:;
            						}
            					}
            				}
            				break;
            				default:{
HXLINE( 757)					this->unexpected(tk);
            				}
            			}
HXLINE( 759)			 ::hscriptBase::ExprDef e1 = ::hscriptBase::ExprDef_obj::EVar(ident,tp,e,t,::Array_obj< ::String >::__new(2)->init(0,getter)->init(1,setter));
HXDLIN( 759)			 ::Dynamic pmin = p1;
HXDLIN( 759)			 ::Dynamic pmax;
HXDLIN( 759)			if (::hx::IsNull( e )) {
HXLINE( 759)				pmax = this->tokenMax;
            			}
            			else {
HXLINE( 759)				if (::hx::IsNull( e )) {
HXLINE( 759)					pmax = 0;
            				}
            				else {
HXLINE( 759)					pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            				}
            			}
HXDLIN( 759)			if (::hx::IsNull( e1 )) {
HXLINE( 759)				return null();
            			}
            			else {
HXLINE( 759)				if (::hx::IsNull( pmin )) {
HXLINE( 759)					pmin = this->tokenMin;
            				}
HXDLIN( 759)				if (::hx::IsNull( pmax )) {
HXLINE( 759)					pmax = this->tokenMax;
            				}
HXDLIN( 759)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e1)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXLINE( 694)			goto _hx_goto_53;
            		}
            		if (  (_hx_switch_0==HX_("while",b1,43,bd,c9)) ){
HXLINE( 795)			 ::Dynamic econd = this->parseExpr();
HXLINE( 796)			 ::Dynamic e = this->parseExpr();
HXLINE( 797)			 ::hscriptBase::ExprDef e1 = ::hscriptBase::ExprDef_obj::EWhile(econd,e);
HXDLIN( 797)			 ::Dynamic pmin = p1;
HXDLIN( 797)			 ::Dynamic pmax;
HXDLIN( 797)			if (::hx::IsNull( e )) {
HXLINE( 797)				pmax = 0;
            			}
            			else {
HXLINE( 797)				pmax = e->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            			}
HXDLIN( 797)			if (::hx::IsNull( e1 )) {
HXLINE( 797)				return null();
            			}
            			else {
HXLINE( 797)				if (::hx::IsNull( pmin )) {
HXLINE( 797)					pmin = this->tokenMin;
            				}
HXDLIN( 797)				if (::hx::IsNull( pmax )) {
HXLINE( 797)					pmax = this->tokenMax;
            				}
HXDLIN( 797)				return  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("e",65,00,00,00),e1)
            					->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            					->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            					->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            					->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            			}
HXLINE( 794)			goto _hx_goto_53;
            		}
            		/* default */{
HXLINE(1202)			return null();
            		}
            		_hx_goto_53:;
HXLINE( 674)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,parseStructure,return )

 ::Dynamic Parser_obj::parseExprNext( ::Dynamic e1){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_1206_parseExprNext)
HXLINE(1207)		 ::hscriptBase::Token tk = this->token();
HXLINE(1208)		switch((int)(tk->_hx_getIndex())){
            			case (int)3: {
HXLINE(1209)				::String op = tk->_hx_getString(0);
HXLINE(1210)				if ((op == HX_("->",71,27,00,00))) {
HXLINE(1212)					{
HXLINE(1212)						 ::hscriptBase::ExprDef _g = e1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN(1212)						switch((int)(_g->_hx_getIndex())){
            							case (int)1: {
HXLINE(1213)								 ::Dynamic _g1 = _g->_hx_getObject(1);
HXDLIN(1213)								::String i = _g->_hx_getString(0);
HXLINE(1214)								 ::Dynamic eret = this->parseExpr();
HXLINE(1215)								 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EReturn(eret);
HXDLIN(1215)								 ::Dynamic pmin;
HXDLIN(1215)								if (::hx::IsNull( eret )) {
HXLINE(1215)									pmin = 0;
            								}
            								else {
HXLINE(1215)									pmin = eret->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            								}
HXDLIN(1215)								 ::Dynamic pmax = null();
HXDLIN(1215)								 ::Dynamic e2;
HXDLIN(1215)								if (::hx::IsNull( e )) {
HXLINE(1215)									e2 = null();
            								}
            								else {
HXLINE(1215)									if (::hx::IsNull( pmin )) {
HXLINE(1215)										pmin = this->tokenMin;
            									}
HXDLIN(1215)									if (::hx::IsNull( pmax )) {
HXLINE(1215)										pmax = this->tokenMax;
            									}
HXDLIN(1215)									e2 =  ::Dynamic(::hx::Anon_obj::Create(5)
            										->setFixed(0,HX_("e",65,00,00,00),e)
            										->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            										->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            										->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            										->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            								}
HXDLIN(1215)								 ::hscriptBase::ExprDef e3 = ::hscriptBase::ExprDef_obj::EFunction(::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(1)
            									->setFixed(0,HX_("name",4b,72,ff,48),i))),e2,null(),null(),null(),null());
HXDLIN(1215)								 ::Dynamic pmin1;
HXDLIN(1215)								if (::hx::IsNull( e1 )) {
HXLINE(1215)									pmin1 = 0;
            								}
            								else {
HXLINE(1215)									pmin1 = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            								}
HXDLIN(1215)								 ::Dynamic pmax1 = null();
HXDLIN(1215)								if (::hx::IsNull( e3 )) {
HXLINE(1215)									return null();
            								}
            								else {
HXLINE(1215)									if (::hx::IsNull( pmin1 )) {
HXLINE(1215)										pmin1 = this->tokenMin;
            									}
HXDLIN(1215)									if (::hx::IsNull( pmax1 )) {
HXLINE(1215)										pmax1 = this->tokenMax;
            									}
HXDLIN(1215)									return  ::Dynamic(::hx::Anon_obj::Create(5)
            										->setFixed(0,HX_("e",65,00,00,00),e3)
            										->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            										->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax1)
            										->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin1)
            										->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            								}
            							}
            							break;
            							case (int)4: {
HXLINE(1213)								 ::hscriptBase::ExprDef _hx_tmp = _g->_hx_getObject(0)->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN(1213)								if ((_hx_tmp->_hx_getIndex() == 1)) {
HXLINE(1213)									 ::Dynamic _g = _hx_tmp->_hx_getObject(1);
HXDLIN(1213)									::String i = _hx_tmp->_hx_getString(0);
HXLINE(1214)									 ::Dynamic eret = this->parseExpr();
HXLINE(1215)									 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EReturn(eret);
HXDLIN(1215)									 ::Dynamic pmin;
HXDLIN(1215)									if (::hx::IsNull( eret )) {
HXLINE(1215)										pmin = 0;
            									}
            									else {
HXLINE(1215)										pmin = eret->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            									}
HXDLIN(1215)									 ::Dynamic pmax = null();
HXDLIN(1215)									 ::Dynamic e2;
HXDLIN(1215)									if (::hx::IsNull( e )) {
HXLINE(1215)										e2 = null();
            									}
            									else {
HXLINE(1215)										if (::hx::IsNull( pmin )) {
HXLINE(1215)											pmin = this->tokenMin;
            										}
HXDLIN(1215)										if (::hx::IsNull( pmax )) {
HXLINE(1215)											pmax = this->tokenMax;
            										}
HXDLIN(1215)										e2 =  ::Dynamic(::hx::Anon_obj::Create(5)
            											->setFixed(0,HX_("e",65,00,00,00),e)
            											->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            											->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            											->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            											->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            									}
HXDLIN(1215)									 ::hscriptBase::ExprDef e3 = ::hscriptBase::ExprDef_obj::EFunction(::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(1)
            										->setFixed(0,HX_("name",4b,72,ff,48),i))),e2,null(),null(),null(),null());
HXDLIN(1215)									 ::Dynamic pmin1;
HXDLIN(1215)									if (::hx::IsNull( e1 )) {
HXLINE(1215)										pmin1 = 0;
            									}
            									else {
HXLINE(1215)										pmin1 = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            									}
HXDLIN(1215)									 ::Dynamic pmax1 = null();
HXDLIN(1215)									if (::hx::IsNull( e3 )) {
HXLINE(1215)										return null();
            									}
            									else {
HXLINE(1215)										if (::hx::IsNull( pmin1 )) {
HXLINE(1215)											pmin1 = this->tokenMin;
            										}
HXDLIN(1215)										if (::hx::IsNull( pmax1 )) {
HXLINE(1215)											pmax1 = this->tokenMax;
            										}
HXDLIN(1215)										return  ::Dynamic(::hx::Anon_obj::Create(5)
            											->setFixed(0,HX_("e",65,00,00,00),e3)
            											->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            											->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax1)
            											->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin1)
            											->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            									}
            								}
            							}
            							break;
            							case (int)31: {
HXLINE(1216)								 ::hscriptBase::ExprDef _hx_tmp = _g->_hx_getObject(0)->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN(1216)								if ((_hx_tmp->_hx_getIndex() == 1)) {
HXLINE(1216)									 ::Dynamic _g1 = _hx_tmp->_hx_getObject(1);
HXDLIN(1216)									::String i = _hx_tmp->_hx_getString(0);
HXDLIN(1216)									 ::hscriptBase::CType t = _g->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXLINE(1217)									 ::Dynamic eret = this->parseExpr();
HXLINE(1218)									 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EReturn(eret);
HXDLIN(1218)									 ::Dynamic pmin;
HXDLIN(1218)									if (::hx::IsNull( eret )) {
HXLINE(1218)										pmin = 0;
            									}
            									else {
HXLINE(1218)										pmin = eret->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            									}
HXDLIN(1218)									 ::Dynamic pmax = null();
HXDLIN(1218)									 ::Dynamic e2;
HXDLIN(1218)									if (::hx::IsNull( e )) {
HXLINE(1218)										e2 = null();
            									}
            									else {
HXLINE(1218)										if (::hx::IsNull( pmin )) {
HXLINE(1218)											pmin = this->tokenMin;
            										}
HXDLIN(1218)										if (::hx::IsNull( pmax )) {
HXLINE(1218)											pmax = this->tokenMax;
            										}
HXDLIN(1218)										e2 =  ::Dynamic(::hx::Anon_obj::Create(5)
            											->setFixed(0,HX_("e",65,00,00,00),e)
            											->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            											->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            											->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            											->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            									}
HXDLIN(1218)									 ::hscriptBase::ExprDef e3 = ::hscriptBase::ExprDef_obj::EFunction(::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(2)
            										->setFixed(0,HX_("t",74,00,00,00),t)
            										->setFixed(1,HX_("name",4b,72,ff,48),i))),e2,null(),null(),null(),null());
HXDLIN(1218)									 ::Dynamic pmin1;
HXDLIN(1218)									if (::hx::IsNull( e1 )) {
HXLINE(1218)										pmin1 = 0;
            									}
            									else {
HXLINE(1218)										pmin1 = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            									}
HXDLIN(1218)									 ::Dynamic pmax1 = null();
HXDLIN(1218)									if (::hx::IsNull( e3 )) {
HXLINE(1218)										return null();
            									}
            									else {
HXLINE(1218)										if (::hx::IsNull( pmin1 )) {
HXLINE(1218)											pmin1 = this->tokenMin;
            										}
HXDLIN(1218)										if (::hx::IsNull( pmax1 )) {
HXLINE(1218)											pmax1 = this->tokenMax;
            										}
HXDLIN(1218)										return  ::Dynamic(::hx::Anon_obj::Create(5)
            											->setFixed(0,HX_("e",65,00,00,00),e3)
            											->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            											->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax1)
            											->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin1)
            											->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            									}
            								}
            							}
            							break;
            							default:{
            							}
            						}
            					}
HXLINE(1221)					this->unexpected(tk);
            				}
HXLINE(1224)				if (::hx::IsEq( this->opPriority->get(op),-1 )) {
HXLINE(1225)					bool _hx_tmp;
HXDLIN(1225)					if (!(this->isBlock(e1))) {
HXLINE(1225)						 ::hscriptBase::ExprDef _g = e1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN(1225)						if ((_g->_hx_getIndex() == 4)) {
HXLINE(1225)							 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN(1225)							_hx_tmp = true;
            						}
            						else {
HXLINE(1225)							_hx_tmp = false;
            						}
            					}
            					else {
HXLINE(1225)						_hx_tmp = true;
            					}
HXDLIN(1225)					if (_hx_tmp) {
HXLINE(1226)						{
HXLINE(1226)							this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("t",74,00,00,00),tk)
            								->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            								->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1226)							this->tokenMin = this->oldTokenMin;
HXDLIN(1226)							this->tokenMax = this->oldTokenMax;
            						}
HXLINE(1227)						return e1;
            					}
HXLINE(1229)					 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EUnop(op,false,e1);
HXDLIN(1229)					 ::Dynamic pmin;
HXDLIN(1229)					if (::hx::IsNull( e1 )) {
HXLINE(1229)						pmin = 0;
            					}
            					else {
HXLINE(1229)						pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            					}
HXDLIN(1229)					 ::Dynamic pmax = null();
HXDLIN(1229)					 ::Dynamic _hx_tmp1;
HXDLIN(1229)					if (::hx::IsNull( e )) {
HXLINE(1229)						_hx_tmp1 = null();
            					}
            					else {
HXLINE(1229)						if (::hx::IsNull( pmin )) {
HXLINE(1229)							pmin = this->tokenMin;
            						}
HXDLIN(1229)						if (::hx::IsNull( pmax )) {
HXLINE(1229)							pmax = this->tokenMax;
            						}
HXDLIN(1229)						_hx_tmp1 =  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
HXDLIN(1229)					return this->parseExprNext(_hx_tmp1);
            				}
HXLINE(1231)				return this->makeBinop(op,e1,this->parseExpr());
            			}
            			break;
            			case (int)4: {
HXLINE(1236)				 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::ECall(e1,this->parseExprList(::hscriptBase::Token_obj::TPClose_dyn()));
HXDLIN(1236)				 ::Dynamic pmin;
HXDLIN(1236)				if (::hx::IsNull( e1 )) {
HXLINE(1236)					pmin = 0;
            				}
            				else {
HXLINE(1236)					pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            				}
HXDLIN(1236)				 ::Dynamic pmax = null();
HXDLIN(1236)				 ::Dynamic _hx_tmp;
HXDLIN(1236)				if (::hx::IsNull( e )) {
HXLINE(1236)					_hx_tmp = null();
            				}
            				else {
HXLINE(1236)					if (::hx::IsNull( pmin )) {
HXLINE(1236)						pmin = this->tokenMin;
            					}
HXDLIN(1236)					if (::hx::IsNull( pmax )) {
HXLINE(1236)						pmax = this->tokenMax;
            					}
HXDLIN(1236)					_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
HXDLIN(1236)				return this->parseExprNext(_hx_tmp);
            			}
            			break;
            			case (int)8: {
HXLINE(1233)				::String field = this->getIdent(null());
HXLINE(1234)				 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EField(e1,field);
HXDLIN(1234)				 ::Dynamic pmin;
HXDLIN(1234)				if (::hx::IsNull( e1 )) {
HXLINE(1234)					pmin = 0;
            				}
            				else {
HXLINE(1234)					pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            				}
HXDLIN(1234)				 ::Dynamic pmax = null();
HXDLIN(1234)				 ::Dynamic _hx_tmp;
HXDLIN(1234)				if (::hx::IsNull( e )) {
HXLINE(1234)					_hx_tmp = null();
            				}
            				else {
HXLINE(1234)					if (::hx::IsNull( pmin )) {
HXLINE(1234)						pmin = this->tokenMin;
            					}
HXDLIN(1234)					if (::hx::IsNull( pmax )) {
HXLINE(1234)						pmax = this->tokenMax;
            					}
HXDLIN(1234)					_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
HXDLIN(1234)				return this->parseExprNext(_hx_tmp);
            			}
            			break;
            			case (int)12: {
HXLINE(1238)				 ::Dynamic e2 = this->parseExpr();
HXLINE(1239)				{
HXLINE(1239)					 ::hscriptBase::Token t = this->token();
HXDLIN(1239)					if (::hx::IsPointerNotEq( t,::hscriptBase::Token_obj::TBkClose_dyn() )) {
HXLINE(1239)						this->unexpected(t);
            					}
            				}
HXLINE(1240)				 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EArray(e1,e2);
HXDLIN(1240)				 ::Dynamic pmin;
HXDLIN(1240)				if (::hx::IsNull( e1 )) {
HXLINE(1240)					pmin = 0;
            				}
            				else {
HXLINE(1240)					pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            				}
HXDLIN(1240)				 ::Dynamic pmax = null();
HXDLIN(1240)				 ::Dynamic _hx_tmp;
HXDLIN(1240)				if (::hx::IsNull( e )) {
HXLINE(1240)					_hx_tmp = null();
            				}
            				else {
HXLINE(1240)					if (::hx::IsNull( pmin )) {
HXLINE(1240)						pmin = this->tokenMin;
            					}
HXDLIN(1240)					if (::hx::IsNull( pmax )) {
HXLINE(1240)						pmax = this->tokenMax;
            					}
HXDLIN(1240)					_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
HXDLIN(1240)				return this->parseExprNext(_hx_tmp);
            			}
            			break;
            			case (int)14: {
HXLINE(1242)				int oldPos_ = this->readPos;
HXLINE(1243)				 ::hscriptBase::Token tk2 = this->token();
HXLINE(1244)				if ((tk2->_hx_getIndex() == 14)) {
HXLINE(1247)					int oldPos = this->readPos;
HXLINE(1248)					 ::hscriptBase::Token tk1 = this->token();
HXLINE(1249)					bool assign = false;
HXLINE(1251)					if (__hxcpp_enum_eq(tk1,::hscriptBase::Token_obj::TOp(HX_("=",3d,00,00,00)))) {
HXLINE(1252)						assign = true;
            					}
HXLINE(1253)					if (!(assign)) {
HXLINE(1253)						this->readPos = (oldPos - 1);
HXDLIN(1253)						while(true){
HXLINE(1253)							tk1 = this->token();
HXDLIN(1253)							if (::hx::IsPointerEq( tk1,::hscriptBase::Token_obj::TQuestion_dyn() )) {
HXLINE(1253)								goto _hx_goto_79;
            							}
            						}
            						_hx_goto_79:;
            					}
HXLINE(1250)					 ::Dynamic e2 = this->parseExpr();
HXLINE(1255)					 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::ECoalesce(e1,e2,assign);
HXDLIN(1255)					 ::Dynamic pmin = null();
HXDLIN(1255)					 ::Dynamic pmax = null();
HXDLIN(1255)					if (::hx::IsNull( e )) {
HXLINE(1255)						return null();
            					}
            					else {
HXLINE(1255)						if (::hx::IsNull( pmin )) {
HXLINE(1255)							pmin = this->tokenMin;
            						}
HXDLIN(1255)						if (::hx::IsNull( pmax )) {
HXLINE(1255)							pmax = this->tokenMax;
            						}
HXDLIN(1255)						return  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
            				}
            				else {
HXLINE(1257)					this->readPos = (oldPos_ - 1);
HXLINE(1258)					while(true){
HXLINE(1260)						tk2 = this->token();
HXLINE(1261)						if (::hx::IsPointerEq( tk2,::hscriptBase::Token_obj::TQuestion_dyn() )) {
HXLINE(1261)							goto _hx_goto_80;
            						}
            					}
            					_hx_goto_80:;
HXLINE(1263)					 ::Dynamic e2 = this->parseExpr();
HXLINE(1264)					{
HXLINE(1264)						 ::hscriptBase::Token t = this->token();
HXDLIN(1264)						if (::hx::IsPointerNotEq( t,::hscriptBase::Token_obj::TDoubleDot_dyn() )) {
HXLINE(1264)							this->unexpected(t);
            						}
            					}
HXLINE(1265)					 ::Dynamic e3 = this->parseExpr();
HXLINE(1266)					 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::ETernary(e1,e2,e3);
HXDLIN(1266)					 ::Dynamic pmin;
HXDLIN(1266)					if (::hx::IsNull( e1 )) {
HXLINE(1266)						pmin = 0;
            					}
            					else {
HXLINE(1266)						pmin = e1->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
            					}
HXDLIN(1266)					 ::Dynamic pmax;
HXDLIN(1266)					if (::hx::IsNull( e3 )) {
HXLINE(1266)						pmax = 0;
            					}
            					else {
HXLINE(1266)						pmax = e3->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
            					}
HXDLIN(1266)					if (::hx::IsNull( e )) {
HXLINE(1266)						return null();
            					}
            					else {
HXLINE(1266)						if (::hx::IsNull( pmin )) {
HXLINE(1266)							pmin = this->tokenMin;
            						}
HXDLIN(1266)						if (::hx::IsNull( pmax )) {
HXLINE(1266)							pmax = this->tokenMax;
            						}
HXDLIN(1266)						return  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
            				}
            			}
            			break;
            			default:{
HXLINE(1269)				{
HXLINE(1269)					this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("t",74,00,00,00),tk)
            						->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            						->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1269)					this->tokenMin = this->oldTokenMin;
HXDLIN(1269)					this->tokenMax = this->oldTokenMax;
            				}
HXLINE(1270)				return e1;
            			}
            		}
HXLINE(1208)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseExprNext,return )

::Array< ::Dynamic> Parser_obj::parseFunctionArgs(){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_1274_parseFunctionArgs)
HXLINE(1275)		::Array< ::Dynamic> args = ::Array_obj< ::Dynamic>::__new();
HXLINE(1276)		 ::hscriptBase::Token tk = this->token();
HXLINE(1277)		if (::hx::IsPointerNotEq( tk,::hscriptBase::Token_obj::TPClose_dyn() )) {
HXLINE(1278)			bool done = false;
HXLINE(1279)			while(!(done)){
HXLINE(1280)				::String name = null();
HXDLIN(1280)				bool opt = false;
HXLINE(1281)				if ((tk->_hx_getIndex() == 14)) {
HXLINE(1283)					opt = true;
HXLINE(1284)					tk = this->token();
            				}
HXLINE(1287)				if ((tk->_hx_getIndex() == 2)) {
HXLINE(1288)					::String id = tk->_hx_getString(0);
HXDLIN(1288)					name = id;
            				}
            				else {
HXLINE(1290)					this->unexpected(tk);
HXLINE(1291)					goto _hx_goto_82;
            				}
HXLINE(1293)				 ::Dynamic arg =  ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("name",4b,72,ff,48),name));
HXLINE(1294)				args->push(arg);
HXLINE(1295)				if (opt) {
HXLINE(1295)					arg->__SetField(HX_("opt",33,9c,54,00),true,::hx::paccDynamic);
            				}
HXLINE(1296)				if (this->allowTypes) {
HXLINE(1297)					if (this->maybe(::hscriptBase::Token_obj::TDoubleDot_dyn())) {
HXLINE(1298)						arg->__SetField(HX_("t",74,00,00,00),this->parseType(),::hx::paccDynamic);
            					}
HXLINE(1299)					if (this->maybe(::hscriptBase::Token_obj::TOp(HX_("=",3d,00,00,00)))) {
HXLINE(1300)						arg->__SetField(HX_("value",71,7f,b8,31),this->parseExpr(),::hx::paccDynamic);
            					}
            				}
HXLINE(1302)				tk = this->token();
HXLINE(1303)				switch((int)(tk->_hx_getIndex())){
            					case (int)5: {
HXLINE(1307)						done = true;
            					}
            					break;
            					case (int)9: {
HXLINE(1305)						tk = this->token();
            					}
            					break;
            					default:{
HXLINE(1309)						this->unexpected(tk);
            					}
            				}
            			}
            			_hx_goto_82:;
            		}
HXLINE(1313)		return args;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseFunctionArgs,return )

 ::Dynamic Parser_obj::parseFunctionDecl(){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_1316_parseFunctionDecl)
HXLINE(1317)		{
HXLINE(1317)			 ::hscriptBase::Token t = this->token();
HXDLIN(1317)			if (::hx::IsPointerNotEq( t,::hscriptBase::Token_obj::TPOpen_dyn() )) {
HXLINE(1317)				this->unexpected(t);
            			}
            		}
HXLINE(1318)		::Array< ::Dynamic> args = this->parseFunctionArgs();
HXLINE(1319)		 ::hscriptBase::CType ret = null();
HXLINE(1320)		if (this->allowTypes) {
HXLINE(1321)			 ::hscriptBase::Token tk = this->token();
HXLINE(1322)			if (::hx::IsPointerNotEq( tk,::hscriptBase::Token_obj::TDoubleDot_dyn() )) {
HXLINE(1323)				this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("t",74,00,00,00),tk)
            					->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            					->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1323)				this->tokenMin = this->oldTokenMin;
HXDLIN(1323)				this->tokenMax = this->oldTokenMax;
            			}
            			else {
HXLINE(1325)				ret = this->parseType();
            			}
            		}
HXLINE(1327)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("ret",61,d9,56,00),ret)
            			->setFixed(1,HX_("args",5d,8d,74,40),args)
            			->setFixed(2,HX_("body",a2,7a,1b,41),this->parseExpr()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseFunctionDecl,return )

::Array< ::String > Parser_obj::parsePath(){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_1330_parsePath)
HXLINE(1331)		::Array< ::String > path = ::Array_obj< ::String >::__new(1)->init(0,this->getIdent(null()));
HXLINE(1332)		while(true){
HXLINE(1333)			 ::hscriptBase::Token t = this->token();
HXLINE(1334)			if (::hx::IsPointerNotEq( t,::hscriptBase::Token_obj::TDot_dyn() )) {
HXLINE(1335)				{
HXLINE(1335)					this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("t",74,00,00,00),t)
            						->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            						->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1335)					this->tokenMin = this->oldTokenMin;
HXDLIN(1335)					this->tokenMax = this->oldTokenMax;
            				}
HXLINE(1336)				goto _hx_goto_85;
            			}
HXLINE(1338)			path->push(this->getIdent(null()));
            		}
            		_hx_goto_85:;
HXLINE(1340)		return path;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parsePath,return )

 ::hscriptBase::CType Parser_obj::parseType(){
            	HX_GC_STACKFRAME(&_hx_pos_948055e9f9c336b1_1343_parseType)
HXDLIN(1343)		 ::hscriptBase::Parser _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1344)		 ::hscriptBase::Token t = this->token();
HXLINE(1345)		switch((int)(t->_hx_getIndex())){
            			case (int)2: {
HXLINE(1346)				::String v = t->_hx_getString(0);
HXLINE(1347)				{
HXLINE(1347)					this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("t",74,00,00,00),t)
            						->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            						->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1347)					this->tokenMin = this->oldTokenMin;
HXDLIN(1347)					this->tokenMax = this->oldTokenMax;
            				}
HXLINE(1348)				::Array< ::String > path = this->parsePath();
HXLINE(1349)				::Array< ::Dynamic> params = null();
HXLINE(1350)				t = this->token();
HXLINE(1351)				if ((t->_hx_getIndex() == 3)) {
HXLINE(1352)					::String op = t->_hx_getString(0);
HXLINE(1353)					if ((op == HX_("<",3c,00,00,00))) {
HXLINE(1354)						params = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1355)						while(true){
HXLINE(1356)							params->push(this->parseType());
HXLINE(1357)							t = this->token();
HXLINE(1358)							switch((int)(t->_hx_getIndex())){
            								case (int)3: {
HXLINE(1360)									::String op = t->_hx_getString(0);
HXDLIN(1360)									{
HXLINE(1361)										if ((op == HX_(">",3e,00,00,00))) {
HXLINE(1361)											goto _hx_goto_87;
            										}
HXLINE(1362)										if (::hx::IsEq( op.charCodeAt(0),62 )) {
HXLINE(1364)											 ::haxe::ds::List _hx_tmp = this->tokens;
HXDLIN(1364)											 ::hscriptBase::Token _hx_tmp1 = ::hscriptBase::Token_obj::TOp(op.substr(1,null()));
HXDLIN(1364)											_hx_tmp->add( ::Dynamic(::hx::Anon_obj::Create(3)
            												->setFixed(0,HX_("t",74,00,00,00),_hx_tmp1)
            												->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            												->setFixed(2,HX_("min",92,11,53,00),((this->tokenMax - op.length) - 1))));
HXLINE(1368)											goto _hx_goto_87;
            										}
            									}
            								}
            								break;
            								case (int)9: {
HXLINE(1359)									continue;
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1372)							this->unexpected(t);
HXLINE(1373)							goto _hx_goto_87;
            						}
            						_hx_goto_87:;
            					}
            					else {
HXLINE(1377)						this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("t",74,00,00,00),t)
            							->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            							->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1377)						this->tokenMin = this->oldTokenMin;
HXDLIN(1377)						this->tokenMax = this->oldTokenMax;
            					}
            				}
            				else {
HXLINE(1380)					this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("t",74,00,00,00),t)
            						->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            						->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1380)					this->tokenMin = this->oldTokenMin;
HXDLIN(1380)					this->tokenMax = this->oldTokenMax;
            				}
HXLINE(1382)				return this->parseTypeNext(::hscriptBase::CType_obj::CTPath(path,params));
            			}
            			break;
            			case (int)4: {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::hscriptBase::Parser,_gthis) HXARGC(1)
            				 ::hscriptBase::CType _hx_run(::Array< ::Dynamic> args){
            					HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_1390_parseType)
HXLINE(1391)					{
HXLINE(1391)						 ::hscriptBase::Token _g = _gthis->token();
HXDLIN(1391)						if ((_g->_hx_getIndex() == 3)) {
HXLINE(1392)							if ((_g->_hx_getString(0) != HX_("->",71,27,00,00))) {
HXLINE(1393)								 ::hscriptBase::Token t = _g;
HXDLIN(1393)								_gthis->unexpected(t);
            							}
            						}
            						else {
HXLINE(1393)							 ::hscriptBase::Token t = _g;
HXDLIN(1393)							_gthis->unexpected(t);
            						}
            					}
HXLINE(1396)					return ::hscriptBase::CType_obj::CTFun(args,_gthis->parseType());
            				}
            				HX_END_LOCAL_FUNC1(return)

HXLINE(1384)				 ::hscriptBase::Token a = this->token();
HXDLIN(1384)				 ::hscriptBase::Token b = this->token();
HXLINE(1387)				{
HXLINE(1387)					this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("t",74,00,00,00),b)
            						->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            						->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1387)					this->tokenMin = this->oldTokenMin;
HXDLIN(1387)					this->tokenMax = this->oldTokenMax;
            				}
HXLINE(1388)				{
HXLINE(1388)					this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("t",74,00,00,00),a)
            						->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            						->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1388)					this->tokenMin = this->oldTokenMin;
HXDLIN(1388)					this->tokenMax = this->oldTokenMax;
            				}
HXLINE(1390)				 ::Dynamic withReturn =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE(1399)				switch((int)(a->_hx_getIndex())){
            					case (int)2: {
HXLINE(1400)						::String _g = a->_hx_getString(0);
HXLINE(1399)						if ((b->_hx_getIndex() == 15)) {
HXLINE(1402)							::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1402)							{
HXLINE(1402)								int _g1 = 0;
HXDLIN(1402)								::Array< ::Dynamic> _g2 = this->parseFunctionArgs();
HXDLIN(1402)								while((_g1 < _g2->length)){
HXLINE(1402)									 ::Dynamic arg = _g2->__get(_g1);
HXDLIN(1402)									_g1 = (_g1 + 1);
HXLINE(1403)									{
HXLINE(1403)										 ::Dynamic _g3 = arg->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic);
HXLINE(1404)										if (::hx::IsNotNull( _g3 )) {
HXLINE(1405)											 ::Dynamic v = _g3;
HXLINE(1406)											{
HXLINE(1406)												 ::hscriptBase::ErrorDef err = ::hscriptBase::ErrorDef_obj::ECustom(HX_("Default values not allowed in function types",28,46,7a,e6));
HXDLIN(1406)												 ::Dynamic pmin = v->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
HXDLIN(1406)												 ::Dynamic pmax = v->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
HXDLIN(1406)												 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line);
HXDLIN(1406)												if (!(this->resumeErrors)) {
HXLINE(1406)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line)));
            												}
            											}
            										}
            									}
HXLINE(1409)									 ::hscriptBase::CType _hx_tmp;
HXDLIN(1409)									if (( (bool)(arg->__Field(HX_("opt",33,9c,54,00),::hx::paccDynamic)) )) {
HXLINE(1409)										_hx_tmp = ::hscriptBase::CType_obj::CTOpt( ::Dynamic(arg->__Field(HX_("t",74,00,00,00),::hx::paccDynamic)));
            									}
            									else {
HXLINE(1409)										_hx_tmp = arg->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
            									}
HXDLIN(1409)									_g->push(::hscriptBase::CType_obj::CTNamed( ::Dynamic(arg->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)),_hx_tmp));
            								}
            							}
HXLINE(1402)							::Array< ::Dynamic> args = _g;
HXLINE(1412)							return withReturn(args);
            						}
            						else {
HXLINE(1415)							 ::hscriptBase::CType t = this->parseType();
HXLINE(1416)							 ::hscriptBase::Token _g = this->token();
HXDLIN(1416)							switch((int)(_g->_hx_getIndex())){
            								case (int)5: {
HXLINE(1427)									return this->parseTypeNext(::hscriptBase::CType_obj::CTParent(t));
            								}
            								break;
            								case (int)9: {
HXLINE(1418)									::Array< ::Dynamic> args = ::Array_obj< ::Dynamic>::__new(1)->init(0,t);
HXLINE(1420)									while(true){
HXLINE(1421)										args->push(this->parseType());
HXLINE(1422)										if (!(this->maybe(::hscriptBase::Token_obj::TComma_dyn()))) {
HXLINE(1422)											goto _hx_goto_90;
            										}
            									}
            									_hx_goto_90:;
HXLINE(1424)									{
HXLINE(1424)										 ::hscriptBase::Token t1 = this->token();
HXDLIN(1424)										if (::hx::IsPointerNotEq( t1,::hscriptBase::Token_obj::TPClose_dyn() )) {
HXLINE(1424)											this->unexpected(t1);
            										}
            									}
HXLINE(1425)									return withReturn(args);
            								}
            								break;
            								default:{
HXLINE(1428)									 ::hscriptBase::Token t = _g;
HXDLIN(1428)									return this->unexpected(t);
            								}
            							}
            						}
            					}
            					break;
            					case (int)5: {
HXLINE(1402)						::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1402)						{
HXLINE(1402)							int _g1 = 0;
HXDLIN(1402)							::Array< ::Dynamic> _g2 = this->parseFunctionArgs();
HXDLIN(1402)							while((_g1 < _g2->length)){
HXLINE(1402)								 ::Dynamic arg = _g2->__get(_g1);
HXDLIN(1402)								_g1 = (_g1 + 1);
HXLINE(1403)								{
HXLINE(1403)									 ::Dynamic _g3 = arg->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic);
HXLINE(1404)									if (::hx::IsNotNull( _g3 )) {
HXLINE(1405)										 ::Dynamic v = _g3;
HXLINE(1406)										{
HXLINE(1406)											 ::hscriptBase::ErrorDef err = ::hscriptBase::ErrorDef_obj::ECustom(HX_("Default values not allowed in function types",28,46,7a,e6));
HXDLIN(1406)											 ::Dynamic pmin = v->__Field(HX_("pmin",22,f7,5a,4a),::hx::paccDynamic);
HXDLIN(1406)											 ::Dynamic pmax = v->__Field(HX_("pmax",34,f0,5a,4a),::hx::paccDynamic);
HXDLIN(1406)											 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line);
HXDLIN(1406)											if (!(this->resumeErrors)) {
HXLINE(1406)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line)));
            											}
            										}
            									}
            								}
HXLINE(1409)								 ::hscriptBase::CType _hx_tmp;
HXDLIN(1409)								if (( (bool)(arg->__Field(HX_("opt",33,9c,54,00),::hx::paccDynamic)) )) {
HXLINE(1409)									_hx_tmp = ::hscriptBase::CType_obj::CTOpt( ::Dynamic(arg->__Field(HX_("t",74,00,00,00),::hx::paccDynamic)));
            								}
            								else {
HXLINE(1409)									_hx_tmp = arg->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
            								}
HXDLIN(1409)								_g->push(::hscriptBase::CType_obj::CTNamed( ::Dynamic(arg->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)),_hx_tmp));
            							}
            						}
HXLINE(1402)						::Array< ::Dynamic> args = _g;
HXLINE(1412)						return withReturn(args);
            					}
            					break;
            					default:{
HXLINE(1415)						 ::hscriptBase::CType t = this->parseType();
HXLINE(1416)						 ::hscriptBase::Token _g = this->token();
HXDLIN(1416)						switch((int)(_g->_hx_getIndex())){
            							case (int)5: {
HXLINE(1427)								return this->parseTypeNext(::hscriptBase::CType_obj::CTParent(t));
            							}
            							break;
            							case (int)9: {
HXLINE(1418)								::Array< ::Dynamic> args = ::Array_obj< ::Dynamic>::__new(1)->init(0,t);
HXLINE(1420)								while(true){
HXLINE(1421)									args->push(this->parseType());
HXLINE(1422)									if (!(this->maybe(::hscriptBase::Token_obj::TComma_dyn()))) {
HXLINE(1422)										goto _hx_goto_88;
            									}
            								}
            								_hx_goto_88:;
HXLINE(1424)								{
HXLINE(1424)									 ::hscriptBase::Token t1 = this->token();
HXDLIN(1424)									if (::hx::IsPointerNotEq( t1,::hscriptBase::Token_obj::TPClose_dyn() )) {
HXLINE(1424)										this->unexpected(t1);
            									}
            								}
HXLINE(1425)								return withReturn(args);
            							}
            							break;
            							default:{
HXLINE(1428)								 ::hscriptBase::Token t = _g;
HXDLIN(1428)								return this->unexpected(t);
            							}
            						}
            					}
            				}
            			}
            			break;
            			case (int)6: {
HXLINE(1432)				::Array< ::Dynamic> fields = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1433)				::Array< ::Dynamic> meta = null();
HXLINE(1434)				while(true){
HXLINE(1435)					t = this->token();
HXLINE(1436)					switch((int)(t->_hx_getIndex())){
            						case (int)2: {
HXLINE(1444)							::String _g = t->_hx_getString(0);
HXDLIN(1444)							if ((_g == HX_("var",e7,de,59,00))) {
HXLINE(1439)								::String name = this->getIdent(null());
HXLINE(1440)								{
HXLINE(1440)									 ::hscriptBase::Token t = this->token();
HXDLIN(1440)									if (::hx::IsPointerNotEq( t,::hscriptBase::Token_obj::TDoubleDot_dyn() )) {
HXLINE(1440)										this->unexpected(t);
            									}
            								}
HXLINE(1441)								fields->push( ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("t",74,00,00,00),this->parseType())
            									->setFixed(1,HX_("meta",c5,4a,59,48),meta)
            									->setFixed(2,HX_("name",4b,72,ff,48),name)));
HXLINE(1442)								meta = null();
HXLINE(1443)								{
HXLINE(1443)									 ::hscriptBase::Token t1 = this->token();
HXDLIN(1443)									if (::hx::IsPointerNotEq( t1,::hscriptBase::Token_obj::TStatement_dyn() )) {
HXLINE(1443)										this->unexpected(t1);
            									}
            								}
            							}
            							else {
HXLINE(1444)								::String name = _g;
HXDLIN(1444)								{
HXLINE(1445)									{
HXLINE(1445)										 ::hscriptBase::Token t1 = this->token();
HXDLIN(1445)										if (::hx::IsPointerNotEq( t1,::hscriptBase::Token_obj::TDoubleDot_dyn() )) {
HXLINE(1445)											this->unexpected(t1);
            										}
            									}
HXLINE(1446)									fields->push( ::Dynamic(::hx::Anon_obj::Create(3)
            										->setFixed(0,HX_("t",74,00,00,00),this->parseType())
            										->setFixed(1,HX_("meta",c5,4a,59,48),meta)
            										->setFixed(2,HX_("name",4b,72,ff,48),name)));
HXLINE(1447)									t = this->token();
HXLINE(1448)									switch((int)(t->_hx_getIndex())){
            										case (int)7: {
HXLINE(1450)											goto _hx_goto_92;
            										}
            										break;
            										case (int)9: {
            										}
            										break;
            										default:{
HXLINE(1451)											this->unexpected(t);
            										}
            									}
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE(1437)							goto _hx_goto_92;
            						}
            						break;
            						case (int)16: {
HXLINE(1453)							::String name = t->_hx_getString(0);
HXDLIN(1453)							{
HXLINE(1454)								if (::hx::IsNull( meta )) {
HXLINE(1454)									meta = ::Array_obj< ::Dynamic>::__new(0);
            								}
HXLINE(1455)								meta->push( ::Dynamic(::hx::Anon_obj::Create(2)
            									->setFixed(0,HX_("params",46,fb,7a,ed),this->parseMetaArgs())
            									->setFixed(1,HX_("name",4b,72,ff,48),name)));
            							}
            						}
            						break;
            						default:{
HXLINE(1457)							this->unexpected(t);
HXLINE(1458)							goto _hx_goto_92;
            						}
            					}
            				}
            				_hx_goto_92:;
HXLINE(1461)				return this->parseTypeNext(::hscriptBase::CType_obj::CTAnon(fields));
            			}
            			break;
            			default:{
HXLINE(1463)				return this->unexpected(t);
            			}
            		}
HXLINE(1345)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseType,return )

 ::hscriptBase::CType Parser_obj::parseTypeNext( ::hscriptBase::CType t){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_1467_parseTypeNext)
HXLINE(1468)		 ::hscriptBase::Token tk = this->token();
HXLINE(1469)		if ((tk->_hx_getIndex() == 3)) {
HXLINE(1470)			::String op = tk->_hx_getString(0);
HXLINE(1471)			if ((op != HX_("->",71,27,00,00))) {
HXLINE(1472)				{
HXLINE(1472)					this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("t",74,00,00,00),tk)
            						->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            						->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1472)					this->tokenMin = this->oldTokenMin;
HXDLIN(1472)					this->tokenMax = this->oldTokenMax;
            				}
HXLINE(1473)				return t;
            			}
            		}
            		else {
HXLINE(1476)			{
HXLINE(1476)				this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("t",74,00,00,00),tk)
            					->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            					->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1476)				this->tokenMin = this->oldTokenMin;
HXDLIN(1476)				this->tokenMax = this->oldTokenMax;
            			}
HXLINE(1477)			return t;
            		}
HXLINE(1479)		 ::hscriptBase::CType t2 = this->parseType();
HXLINE(1480)		if ((t2->_hx_getIndex() == 1)) {
HXLINE(1481)			 ::hscriptBase::CType _g = t2->_hx_getObject(1).StaticCast<  ::hscriptBase::CType >();
HXDLIN(1481)			::Array< ::Dynamic> args = t2->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(1482)			args->unshift(t);
HXLINE(1483)			return t2;
            		}
            		else {
HXLINE(1485)			return ::hscriptBase::CType_obj::CTFun(::Array_obj< ::Dynamic>::__new(1)->init(0,t),t2);
            		}
HXLINE(1480)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseTypeNext,return )

::Array< ::Dynamic> Parser_obj::parseExprList( ::hscriptBase::Token etk){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_1489_parseExprList)
HXLINE(1490)		::Array< ::Dynamic> args = ::Array_obj< ::Dynamic>::__new();
HXLINE(1491)		 ::hscriptBase::Token tk = this->token();
HXLINE(1492)		if (::hx::IsPointerEq( tk,etk )) {
HXLINE(1493)			return args;
            		}
HXLINE(1494)		{
HXLINE(1494)			this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("t",74,00,00,00),tk)
            				->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            				->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1494)			this->tokenMin = this->oldTokenMin;
HXDLIN(1494)			this->tokenMax = this->oldTokenMax;
            		}
HXLINE(1495)		while(true){
HXLINE(1496)			args->push(this->parseExpr());
HXLINE(1497)			tk = this->token();
HXLINE(1498)			if ((tk->_hx_getIndex() != 9)) {
HXLINE(1501)				if (::hx::IsPointerEq( tk,etk )) {
HXLINE(1501)					goto _hx_goto_96;
            				}
HXLINE(1502)				this->unexpected(tk);
HXLINE(1503)				goto _hx_goto_96;
            			}
            		}
            		_hx_goto_96:;
HXLINE(1506)		return args;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseExprList,return )

::Array< ::Dynamic> Parser_obj::parseModule(::String content,::String origin){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_1511_parseModule)
HXLINE(1512)		this->initParser(origin);
HXLINE(1513)		this->input = content;
HXLINE(1514)		this->readPos = 0;
HXLINE(1515)		this->allowTypes = true;
HXLINE(1516)		this->allowMetadata = true;
HXLINE(1517)		::Array< ::Dynamic> decls = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1518)		while(true){
HXLINE(1519)			 ::hscriptBase::Token tk = this->token();
HXLINE(1520)			if (::hx::IsPointerEq( tk,::hscriptBase::Token_obj::TEof_dyn() )) {
HXLINE(1520)				goto _hx_goto_98;
            			}
HXLINE(1521)			{
HXLINE(1521)				this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("t",74,00,00,00),tk)
            					->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            					->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1521)				this->tokenMin = this->oldTokenMin;
HXDLIN(1521)				this->tokenMax = this->oldTokenMax;
            			}
HXLINE(1522)			decls->push(this->parseModuleDecl());
            		}
            		_hx_goto_98:;
HXLINE(1524)		return decls;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,parseModule,return )

::Array< ::Dynamic> Parser_obj::parseMetadata(){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_1527_parseMetadata)
HXLINE(1528)		::Array< ::Dynamic> meta = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1529)		while(true){
HXLINE(1530)			 ::hscriptBase::Token tk = this->token();
HXLINE(1531)			if ((tk->_hx_getIndex() == 16)) {
HXLINE(1532)				::String name = tk->_hx_getString(0);
HXLINE(1533)				meta->push( ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("params",46,fb,7a,ed),this->parseMetaArgs())
            					->setFixed(1,HX_("name",4b,72,ff,48),name)));
            			}
            			else {
HXLINE(1535)				{
HXLINE(1535)					this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("t",74,00,00,00),tk)
            						->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            						->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1535)					this->tokenMin = this->oldTokenMin;
HXDLIN(1535)					this->tokenMax = this->oldTokenMax;
            				}
HXLINE(1536)				goto _hx_goto_100;
            			}
            		}
            		_hx_goto_100:;
HXLINE(1539)		return meta;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseMetadata,return )

 ::Dynamic Parser_obj::parseParams(){
            	HX_GC_STACKFRAME(&_hx_pos_948055e9f9c336b1_1542_parseParams)
HXLINE(1543)		if (this->maybe(::hscriptBase::Token_obj::TOp(HX_("<",3c,00,00,00)))) {
HXLINE(1544)			 ::hscriptBase::ErrorDef err = ::hscriptBase::ErrorDef_obj::EInvalidOp(HX_("Unsupported class type parameters",9d,ae,a3,50));
HXDLIN(1544)			 ::Dynamic pmin = this->readPos;
HXDLIN(1544)			 ::Dynamic pmax = this->readPos;
HXDLIN(1544)			 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line);
HXDLIN(1544)			if (!(this->resumeErrors)) {
HXLINE(1544)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line)));
            			}
            		}
HXLINE(1545)		return  ::Dynamic(::hx::Anon_obj::Create(0));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseParams,return )

 ::hscriptBase::ModuleDecl Parser_obj::parseModuleDecl(){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_1548_parseModuleDecl)
HXLINE(1549)		::Array< ::Dynamic> meta = this->parseMetadata();
HXLINE(1550)		::String ident = this->getIdent(null());
HXLINE(1551)		bool isPrivate = false;
HXDLIN(1551)		bool isExtern = false;
HXLINE(1552)		while(true){
HXLINE(1553)			::String _hx_switch_0 = ident;
            			if (  (_hx_switch_0==HX_("extern",60,d5,1a,c7)) ){
HXLINE(1557)				isExtern = true;
HXDLIN(1557)				goto _hx_goto_104;
            			}
            			if (  (_hx_switch_0==HX_("private",03,2d,6f,89)) ){
HXLINE(1555)				isPrivate = true;
HXDLIN(1555)				goto _hx_goto_104;
            			}
            			/* default */{
HXLINE(1559)				goto _hx_goto_103;
            			}
            			_hx_goto_104:;
HXLINE(1561)			ident = this->getIdent(null());
            		}
            		_hx_goto_103:;
HXLINE(1563)		::String _hx_switch_1 = ident;
            		if (  (_hx_switch_1==HX_("class",38,78,58,48)) ){
HXLINE(1600)			::String name = this->getIdent(null());
HXLINE(1601)			 ::Dynamic params = this->parseParams();
HXLINE(1602)			 ::hscriptBase::CType extend = null();
HXLINE(1603)			::Array< ::Dynamic> implement = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1605)			while(true){
HXLINE(1606)				 ::hscriptBase::Token t = this->token();
HXLINE(1607)				if ((t->_hx_getIndex() == 2)) {
HXLINE(1610)					::String _hx_switch_2 = t->_hx_getString(0);
            					if (  (_hx_switch_2==HX_("extends",59,cd,5c,70)) ){
HXLINE(1609)						extend = this->parseType();
HXDLIN(1609)						goto _hx_goto_107;
            					}
            					if (  (_hx_switch_2==HX_("implements",70,fd,43,a8)) ){
HXLINE(1611)						implement->push(this->parseType());
HXDLIN(1611)						goto _hx_goto_107;
            					}
            					/* default */{
HXLINE(1613)						{
HXLINE(1613)							this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("t",74,00,00,00),t)
            								->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            								->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1613)							this->tokenMin = this->oldTokenMin;
HXDLIN(1613)							this->tokenMax = this->oldTokenMax;
            						}
HXLINE(1614)						goto _hx_goto_106;
            					}
            					_hx_goto_107:;
            				}
            				else {
HXLINE(1613)					{
HXLINE(1613)						this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("t",74,00,00,00),t)
            							->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            							->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1613)						this->tokenMin = this->oldTokenMin;
HXDLIN(1613)						this->tokenMax = this->oldTokenMax;
            					}
HXLINE(1614)					goto _hx_goto_106;
            				}
            			}
            			_hx_goto_106:;
HXLINE(1618)			::Array< ::Dynamic> fields = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1619)			{
HXLINE(1619)				 ::hscriptBase::Token t = this->token();
HXDLIN(1619)				if (::hx::IsPointerNotEq( t,::hscriptBase::Token_obj::TBrOpen_dyn() )) {
HXLINE(1619)					this->unexpected(t);
            				}
            			}
HXLINE(1620)			while(!(this->maybe(::hscriptBase::Token_obj::TBrClose_dyn()))){
HXLINE(1621)				fields->push(this->parseField());
            			}
HXLINE(1623)			return ::hscriptBase::ModuleDecl_obj::DClass( ::Dynamic(::hx::Anon_obj::Create(8)
            				->setFixed(0,HX_("fields",79,8e,8e,80),fields)
            				->setFixed(1,HX_("isPrivate",39,aa,6d,8d),isPrivate)
            				->setFixed(2,HX_("implement",a3,71,3f,af),implement)
            				->setFixed(3,HX_("extend",da,d1,1a,c7),extend)
            				->setFixed(4,HX_("params",46,fb,7a,ed),params)
            				->setFixed(5,HX_("isExtern",ea,70,84,1f),isExtern)
            				->setFixed(6,HX_("meta",c5,4a,59,48),meta)
            				->setFixed(7,HX_("name",4b,72,ff,48),name)));
HXLINE(1599)			goto _hx_goto_105;
            		}
            		if (  (_hx_switch_1==HX_("import",65,a1,82,08)) ){
HXLINE(1569)			::Array< ::String > path = ::Array_obj< ::String >::__new(1)->init(0,this->getIdent(null()));
HXLINE(1570)			bool star = false;
HXLINE(1571)			while(true){
HXLINE(1572)				 ::hscriptBase::Token t = this->token();
HXLINE(1573)				if (::hx::IsPointerNotEq( t,::hscriptBase::Token_obj::TDot_dyn() )) {
HXLINE(1574)					{
HXLINE(1574)						this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("t",74,00,00,00),t)
            							->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            							->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1574)						this->tokenMin = this->oldTokenMin;
HXDLIN(1574)						this->tokenMax = this->oldTokenMax;
            					}
HXLINE(1575)					goto _hx_goto_109;
            				}
HXLINE(1577)				t = this->token();
HXLINE(1578)				switch((int)(t->_hx_getIndex())){
            					case (int)2: {
HXLINE(1579)						::String id = t->_hx_getString(0);
HXLINE(1580)						path->push(id);
            					}
            					break;
            					case (int)3: {
HXLINE(1581)						if ((t->_hx_getString(0) == HX_("*",2a,00,00,00))) {
HXLINE(1582)							star = true;
            						}
            						else {
HXLINE(1584)							this->unexpected(t);
            						}
            					}
            					break;
            					default:{
HXLINE(1584)						this->unexpected(t);
            					}
            				}
            			}
            			_hx_goto_109:;
HXLINE(1587)			::String id = null();
HXLINE(1597)			{
HXLINE(1597)				 ::hscriptBase::Token t = this->token();
HXDLIN(1597)				if (!(__hxcpp_enum_eq(t,::hscriptBase::Token_obj::TStatement_dyn()))) {
HXLINE(1597)					this->unexpected(t);
            				}
            			}
HXLINE(1598)			return ::hscriptBase::ModuleDecl_obj::DImport(path,star,id);
HXLINE(1568)			goto _hx_goto_105;
            		}
            		if (  (_hx_switch_1==HX_("package",86,2b,b1,41)) ){
HXLINE(1565)			::Array< ::String > path = this->parsePath();
HXLINE(1566)			{
HXLINE(1566)				 ::hscriptBase::Token t = this->token();
HXDLIN(1566)				if (::hx::IsPointerNotEq( t,::hscriptBase::Token_obj::TStatement_dyn() )) {
HXLINE(1566)					this->unexpected(t);
            				}
            			}
HXLINE(1567)			return ::hscriptBase::ModuleDecl_obj::DPackage(path);
HXLINE(1564)			goto _hx_goto_105;
            		}
            		if (  (_hx_switch_1==HX_("typedef",4b,37,d8,f8)) ){
HXLINE(1634)			::String name = this->getIdent(null());
HXLINE(1635)			 ::Dynamic params = this->parseParams();
HXLINE(1636)			{
HXLINE(1636)				 ::hscriptBase::Token t = this->token();
HXDLIN(1636)				if (!(__hxcpp_enum_eq(t,::hscriptBase::Token_obj::TOp(HX_("=",3d,00,00,00))))) {
HXLINE(1636)					this->unexpected(t);
            				}
            			}
HXLINE(1637)			 ::hscriptBase::CType t1 = this->parseType();
HXLINE(1638)			return ::hscriptBase::ModuleDecl_obj::DTypedef( ::Dynamic(::hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("isPrivate",39,aa,6d,8d),isPrivate)
            				->setFixed(1,HX_("params",46,fb,7a,ed),params)
            				->setFixed(2,HX_("t",74,00,00,00),t1)
            				->setFixed(3,HX_("meta",c5,4a,59,48),meta)
            				->setFixed(4,HX_("name",4b,72,ff,48),name)));
HXLINE(1633)			goto _hx_goto_105;
            		}
            		/* default */{
HXLINE(1647)			this->unexpected(::hscriptBase::Token_obj::TId(ident));
            		}
            		_hx_goto_105:;
HXLINE(1649)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseModuleDecl,return )

 ::Dynamic Parser_obj::parseField(){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_1652_parseField)
HXLINE(1653)		::Array< ::Dynamic> meta = this->parseMetadata();
HXLINE(1654)		::Array< ::Dynamic> access = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1655)		while(true){
HXLINE(1656)			::String id = this->getIdent(null());
HXLINE(1657)			::String _hx_switch_0 = id;
            			if (  (_hx_switch_0==HX_("function",18,ab,52,14)) ){
HXLINE(1671)				::String name = this->getIdent(null());
HXLINE(1672)				 ::Dynamic inf = this->parseFunctionDecl();
HXLINE(1673)				return  ::Dynamic(::hx::Anon_obj::Create(4)
            					->setFixed(0,HX_("access",a4,95,06,0b),access)
            					->setFixed(1,HX_("kind",54,e1,09,47),::hscriptBase::FieldKind_obj::KFunction( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("ret",61,d9,56,00), ::Dynamic(inf->__Field(HX_("ret",61,d9,56,00),::hx::paccDynamic)))
            						->setFixed(1,HX_("args",5d,8d,74,40), ::Dynamic(inf->__Field(HX_("args",5d,8d,74,40),::hx::paccDynamic)))
            						->setFixed(2,HX_("expr",35,fd,1d,43), ::Dynamic(inf->__Field(HX_("body",a2,7a,1b,41),::hx::paccDynamic))))))
            					->setFixed(2,HX_("meta",c5,4a,59,48),meta)
            					->setFixed(3,HX_("name",4b,72,ff,48),name));
HXLINE(1670)				goto _hx_goto_112;
            			}
            			if (  (_hx_switch_0==HX_("inline",59,ca,3f,99)) ){
HXLINE(1665)				access->push(::hscriptBase::FieldAccess_obj::AInline_dyn());
HXDLIN(1665)				goto _hx_goto_112;
            			}
            			if (  (_hx_switch_0==HX_("macro",0c,70,16,03)) ){
HXLINE(1669)				access->push(::hscriptBase::FieldAccess_obj::AMacro_dyn());
HXDLIN(1669)				goto _hx_goto_112;
            			}
            			if (  (_hx_switch_0==HX_("override",4c,22,28,49)) ){
HXLINE(1659)				access->push(::hscriptBase::FieldAccess_obj::AOverride_dyn());
HXDLIN(1659)				goto _hx_goto_112;
            			}
            			if (  (_hx_switch_0==HX_("private",03,2d,6f,89)) ){
HXLINE(1663)				access->push(::hscriptBase::FieldAccess_obj::APrivate_dyn());
HXDLIN(1663)				goto _hx_goto_112;
            			}
            			if (  (_hx_switch_0==HX_("public",a9,80,f3,66)) ){
HXLINE(1661)				access->push(::hscriptBase::FieldAccess_obj::APublic_dyn());
HXDLIN(1661)				goto _hx_goto_112;
            			}
            			if (  (_hx_switch_0==HX_("static",ae,dc,fb,05)) ){
HXLINE(1667)				access->push(::hscriptBase::FieldAccess_obj::AStatic_dyn());
HXDLIN(1667)				goto _hx_goto_112;
            			}
            			if (  (_hx_switch_0==HX_("var",e7,de,59,00)) ){
HXLINE(1684)				::String name = this->getIdent(null());
HXLINE(1685)				::String get = null();
HXDLIN(1685)				::String set = null();
HXLINE(1686)				if (this->maybe(::hscriptBase::Token_obj::TPOpen_dyn())) {
HXLINE(1687)					get = this->getIdent(null());
HXLINE(1688)					{
HXLINE(1688)						 ::hscriptBase::Token t = this->token();
HXDLIN(1688)						if (::hx::IsPointerNotEq( t,::hscriptBase::Token_obj::TComma_dyn() )) {
HXLINE(1688)							this->unexpected(t);
            						}
            					}
HXLINE(1689)					set = this->getIdent(null());
HXLINE(1690)					{
HXLINE(1690)						 ::hscriptBase::Token t1 = this->token();
HXDLIN(1690)						if (::hx::IsPointerNotEq( t1,::hscriptBase::Token_obj::TPClose_dyn() )) {
HXLINE(1690)							this->unexpected(t1);
            						}
            					}
            				}
HXLINE(1692)				 ::hscriptBase::CType type;
HXDLIN(1692)				if (this->maybe(::hscriptBase::Token_obj::TDoubleDot_dyn())) {
HXLINE(1692)					type = this->parseType();
            				}
            				else {
HXLINE(1692)					type = null();
            				}
HXLINE(1693)				 ::Dynamic expr;
HXDLIN(1693)				if (this->maybe(::hscriptBase::Token_obj::TOp(HX_("=",3d,00,00,00)))) {
HXLINE(1693)					expr = this->parseExpr();
            				}
            				else {
HXLINE(1693)					expr = null();
            				}
HXLINE(1695)				if (::hx::IsNotNull( expr )) {
HXLINE(1696)					if (this->isBlock(expr)) {
HXLINE(1697)						this->maybe(::hscriptBase::Token_obj::TStatement_dyn());
            					}
            					else {
HXLINE(1699)						 ::hscriptBase::Token t = this->token();
HXDLIN(1699)						if (::hx::IsPointerNotEq( t,::hscriptBase::Token_obj::TStatement_dyn() )) {
HXLINE(1699)							this->unexpected(t);
            						}
            					}
            				}
            				else {
HXLINE(1700)					bool _hx_tmp;
HXDLIN(1700)					if (::hx::IsNotNull( type )) {
HXLINE(1700)						if (::hx::IsNull( type )) {
HXLINE(1700)							_hx_tmp = false;
            						}
            						else {
HXLINE(1700)							if ((type->_hx_getIndex() == 2)) {
HXLINE(1700)								::Array< ::Dynamic> _g = type->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(1700)								_hx_tmp = true;
            							}
            							else {
HXLINE(1700)								_hx_tmp = false;
            							}
            						}
            					}
            					else {
HXLINE(1700)						_hx_tmp = false;
            					}
HXDLIN(1700)					if (_hx_tmp) {
HXLINE(1701)						this->maybe(::hscriptBase::Token_obj::TStatement_dyn());
            					}
            					else {
HXLINE(1703)						 ::hscriptBase::Token t = this->token();
HXDLIN(1703)						if (::hx::IsPointerNotEq( t,::hscriptBase::Token_obj::TStatement_dyn() )) {
HXLINE(1703)							this->unexpected(t);
            						}
            					}
            				}
HXLINE(1705)				return  ::Dynamic(::hx::Anon_obj::Create(4)
            					->setFixed(0,HX_("access",a4,95,06,0b),access)
            					->setFixed(1,HX_("kind",54,e1,09,47),::hscriptBase::FieldKind_obj::KVar( ::Dynamic(::hx::Anon_obj::Create(4)
            						->setFixed(0,HX_("get",96,80,4e,00),get)
            						->setFixed(1,HX_("set",a2,9b,57,00),set)
            						->setFixed(2,HX_("expr",35,fd,1d,43),expr)
            						->setFixed(3,HX_("type",ba,f2,08,4d),type))))
            					->setFixed(2,HX_("meta",c5,4a,59,48),meta)
            					->setFixed(3,HX_("name",4b,72,ff,48),name));
HXLINE(1683)				goto _hx_goto_112;
            			}
            			/* default */{
HXLINE(1717)				this->unexpected(::hscriptBase::Token_obj::TId(id));
HXLINE(1718)				goto _hx_goto_111;
            			}
            			_hx_goto_112:;
            		}
            		_hx_goto_111:;
HXLINE(1721)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseField,return )

int Parser_obj::readChar(){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_1727_readChar)
HXDLIN(1727)		return this->input.cca(this->readPos++);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,readChar,return )

::String Parser_obj::readString(int until){
            	HX_GC_STACKFRAME(&_hx_pos_948055e9f9c336b1_1730_readString)
HXLINE(1731)		int c = 0;
HXLINE(1732)		 ::StringBuf b =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(1733)		bool esc = false;
HXLINE(1734)		int old = this->line;
HXLINE(1735)		::String s = this->input;
HXLINE(1737)		int p1 = (this->readPos - 1);
HXLINE(1739)		while(true){
HXLINE(1740)			int c = this->input.cca(this->readPos++);
HXLINE(1741)			if ((c == 0)) {
HXLINE(1742)				this->line = old;
HXLINE(1743)				{
HXLINE(1743)					 ::hscriptBase::ErrorDef err = ::hscriptBase::ErrorDef_obj::EUnterminatedString_dyn();
HXDLIN(1743)					 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,p1,p1,this->origin,this->line);
HXDLIN(1743)					if (!(this->resumeErrors)) {
HXLINE(1743)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,p1,p1,this->origin,this->line)));
            					}
            				}
HXLINE(1744)				goto _hx_goto_115;
            			}
HXLINE(1746)			if (esc) {
HXLINE(1747)				esc = false;
HXLINE(1748)				switch((int)(c)){
            					case (int)34: case (int)39: case (int)92: {
HXLINE(1752)						if ((c >= 127)) {
HXLINE(1752)							::String x = ::String::fromCharCode(c);
HXDLIN(1752)							if (::hx::IsNotNull( b->charBuf )) {
HXLINE(1752)								b->flush();
            							}
HXDLIN(1752)							if (::hx::IsNull( b->b )) {
HXLINE(1752)								b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE(1752)								::Array< ::String > b1 = b->b;
HXDLIN(1752)								b1->push(::Std_obj::string(x));
            							}
            						}
            						else {
HXLINE(1752)							if (::hx::IsNull( b->charBuf )) {
HXLINE(1752)								b->charBuf = ::Array_obj< char >::__new();
            							}
HXDLIN(1752)							b->charBuf->push(c);
            						}
            					}
            					break;
            					case (int)47: {
HXLINE(1753)						if (this->allowJSON) {
HXLINE(1753)							if ((c >= 127)) {
HXLINE(1753)								::String x = ::String::fromCharCode(c);
HXDLIN(1753)								if (::hx::IsNotNull( b->charBuf )) {
HXLINE(1753)									b->flush();
            								}
HXDLIN(1753)								if (::hx::IsNull( b->b )) {
HXLINE(1753)									b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            								}
            								else {
HXLINE(1753)									::Array< ::String > b1 = b->b;
HXDLIN(1753)									b1->push(::Std_obj::string(x));
            								}
            							}
            							else {
HXLINE(1753)								if (::hx::IsNull( b->charBuf )) {
HXLINE(1753)									b->charBuf = ::Array_obj< char >::__new();
            								}
HXDLIN(1753)								b->charBuf->push(c);
            							}
            						}
            						else {
HXLINE(1753)							this->invalidChar(c);
            						}
            					}
            					break;
            					case (int)110: {
HXLINE(1749)						if (::hx::IsNull( b->charBuf )) {
HXLINE(1749)							b->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN(1749)						b->charBuf->push(10);
            					}
            					break;
            					case (int)114: {
HXLINE(1750)						if (::hx::IsNull( b->charBuf )) {
HXLINE(1750)							b->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN(1750)						b->charBuf->push(13);
            					}
            					break;
            					case (int)116: {
HXLINE(1751)						if (::hx::IsNull( b->charBuf )) {
HXLINE(1751)							b->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN(1751)						b->charBuf->push(9);
            					}
            					break;
            					case (int)117: {
HXLINE(1755)						if (!(this->allowJSON)) {
HXLINE(1755)							this->invalidChar(c);
            						}
HXLINE(1756)						int k = 0;
HXLINE(1757)						{
HXLINE(1757)							int _g = 0;
HXDLIN(1757)							while((_g < 4)){
HXLINE(1757)								_g = (_g + 1);
HXDLIN(1757)								int i = (_g - 1);
HXLINE(1758)								k = (k << 4);
HXLINE(1759)								int _hx_char = this->input.cca(this->readPos++);
HXLINE(1760)								switch((int)(_hx_char)){
            									case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(1762)										k = (k + (_hx_char - 48));
            									}
            									break;
            									case (int)65: case (int)66: case (int)67: case (int)68: case (int)69: case (int)70: {
HXLINE(1764)										k = (k + (_hx_char - 55));
            									}
            									break;
            									case (int)97: case (int)98: case (int)99: case (int)100: case (int)101: case (int)102: {
HXLINE(1766)										k = (k + (_hx_char - 87));
            									}
            									break;
            									default:{
HXLINE(1768)										if ((_hx_char == 0)) {
HXLINE(1769)											this->line = old;
HXLINE(1770)											{
HXLINE(1770)												 ::hscriptBase::ErrorDef err = ::hscriptBase::ErrorDef_obj::EUnterminatedString_dyn();
HXDLIN(1770)												 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,p1,p1,this->origin,this->line);
HXDLIN(1770)												if (!(this->resumeErrors)) {
HXLINE(1770)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,p1,p1,this->origin,this->line)));
            												}
            											}
            										}
HXLINE(1772)										this->invalidChar(_hx_char);
            									}
            								}
            							}
            						}
HXLINE(1775)						if ((k >= 127)) {
HXLINE(1775)							::String x = ::String::fromCharCode(k);
HXDLIN(1775)							if (::hx::IsNotNull( b->charBuf )) {
HXLINE(1775)								b->flush();
            							}
HXDLIN(1775)							if (::hx::IsNull( b->b )) {
HXLINE(1775)								b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE(1775)								::Array< ::String > b1 = b->b;
HXDLIN(1775)								b1->push(::Std_obj::string(x));
            							}
            						}
            						else {
HXLINE(1775)							if (::hx::IsNull( b->charBuf )) {
HXLINE(1775)								b->charBuf = ::Array_obj< char >::__new();
            							}
HXDLIN(1775)							b->charBuf->push(k);
            						}
            					}
            					break;
            					default:{
HXLINE(1776)						this->invalidChar(c);
            					}
            				}
            			}
            			else {
HXLINE(1778)				if ((c == 92)) {
HXLINE(1779)					esc = true;
            				}
            				else {
HXLINE(1780)					if ((c == until)) {
HXLINE(1781)						goto _hx_goto_115;
            					}
            					else {
HXLINE(1783)						if ((c == 10)) {
HXLINE(1783)							this->line++;
            						}
HXLINE(1784)						if ((c >= 127)) {
HXLINE(1784)							::String x = ::String::fromCharCode(c);
HXDLIN(1784)							if (::hx::IsNotNull( b->charBuf )) {
HXLINE(1784)								b->flush();
            							}
HXDLIN(1784)							if (::hx::IsNull( b->b )) {
HXLINE(1784)								b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE(1784)								::Array< ::String > b1 = b->b;
HXDLIN(1784)								b1->push(::Std_obj::string(x));
            							}
            						}
            						else {
HXLINE(1784)							if (::hx::IsNull( b->charBuf )) {
HXLINE(1784)								b->charBuf = ::Array_obj< char >::__new();
            							}
HXDLIN(1784)							b->charBuf->push(c);
            						}
            					}
            				}
            			}
            		}
            		_hx_goto_115:;
HXLINE(1787)		return b->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,readString,return )

 ::hscriptBase::Token Parser_obj::token(){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_1790_token)
HXLINE(1792)		 ::Dynamic t = this->tokens->pop();
HXLINE(1793)		if (::hx::IsNotNull( t )) {
HXLINE(1794)			this->tokenMin = ( (int)(t->__Field(HX_("min",92,11,53,00),::hx::paccDynamic)) );
HXLINE(1795)			this->tokenMax = ( (int)(t->__Field(HX_("max",a4,0a,53,00),::hx::paccDynamic)) );
HXLINE(1796)			return t->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
            		}
HXLINE(1798)		this->oldTokenMin = this->tokenMin;
HXLINE(1799)		this->oldTokenMax = this->tokenMax;
HXLINE(1800)		int _hx_tmp;
HXDLIN(1800)		if ((this->_hx_char < 0)) {
HXLINE(1800)			_hx_tmp = this->readPos;
            		}
            		else {
HXLINE(1800)			_hx_tmp = (this->readPos - 1);
            		}
HXDLIN(1800)		this->tokenMin = _hx_tmp;
HXLINE(1801)		 ::hscriptBase::Token t1 = this->_token();
HXLINE(1802)		if ((t1->_hx_getIndex() == 2)) {
HXLINE(1804)			::String s = t1->_hx_getString(0);
HXDLIN(1804)			bool _hx_tmp;
HXDLIN(1804)			if ((s != HX_("cast",bf,1e,ba,41))) {
HXLINE(1804)				_hx_tmp = (s == HX_("untyped",71,67,5c,17));
            			}
            			else {
HXLINE(1804)				_hx_tmp = true;
            			}
HXDLIN(1804)			if (_hx_tmp) {
HXLINE(1804)				t1 = ::hscriptBase::Token_obj::TOp(s);
            			}
            		}
HXLINE(1807)		int _hx_tmp1;
HXDLIN(1807)		if ((this->_hx_char < 0)) {
HXLINE(1807)			_hx_tmp1 = (this->readPos - 1);
            		}
            		else {
HXLINE(1807)			_hx_tmp1 = (this->readPos - 2);
            		}
HXDLIN(1807)		this->tokenMax = _hx_tmp1;
HXLINE(1808)		return t1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,token,return )

 ::hscriptBase::Token Parser_obj::_token(){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_1811__token)
HXLINE(1816)		int _hx_char;
HXLINE(1817)		if ((this->_hx_char < 0)) {
HXLINE(1818)			_hx_char = this->input.cca(this->readPos++);
            		}
            		else {
HXLINE(1820)			_hx_char = this->_hx_char;
HXLINE(1821)			this->_hx_char = -1;
            		}
HXLINE(1823)		while(true){
HXLINE(1824)			if ((_hx_char == 0)) {
HXLINE(1825)				this->_hx_char = _hx_char;
HXLINE(1826)				return ::hscriptBase::Token_obj::TEof_dyn();
            			}
HXLINE(1828)			switch((int)(_hx_char)){
            				case (int)0: {
HXLINE(1830)					return ::hscriptBase::Token_obj::TEof_dyn();
            				}
            				break;
            				case (int)10: {
HXLINE(1835)					this->line++;
HXLINE(1837)					this->tokenMin++;
            				}
            				break;
            				case (int)9: case (int)13: case (int)32: {
HXLINE(1833)					this->tokenMin++;
            				}
            				break;
            				case (int)35: {
HXLINE(1988)					_hx_char = this->input.cca(this->readPos++);
HXLINE(1989)					if (this->idents->__get(_hx_char)) {
HXLINE(1990)						::String id = ::String::fromCharCode(_hx_char);
HXLINE(1991)						while(true){
HXLINE(1992)							_hx_char = this->input.cca(this->readPos++);
HXLINE(1993)							if (!(this->idents->__get(_hx_char))) {
HXLINE(1994)								this->_hx_char = _hx_char;
HXLINE(1995)								return this->preprocess(id);
            							}
HXLINE(1997)							id = (id + ::String::fromCharCode(_hx_char));
            						}
            					}
HXLINE(2000)					this->invalidChar(_hx_char);
            				}
            				break;
            				case (int)34: case (int)39: {
HXLINE(1958)					return ::hscriptBase::Token_obj::TConst(::hscriptBase::Const_obj::CString(this->readString(_hx_char),true));
            				}
            				break;
            				case (int)40: {
HXLINE(1925)					return ::hscriptBase::Token_obj::TPOpen_dyn();
            				}
            				break;
            				case (int)41: {
HXLINE(1926)					return ::hscriptBase::Token_obj::TPClose_dyn();
            				}
            				break;
            				case (int)44: {
HXLINE(1927)					return ::hscriptBase::Token_obj::TComma_dyn();
            				}
            				break;
            				case (int)46: {
HXLINE(1929)					_hx_char = this->input.cca(this->readPos++);
HXLINE(1930)					switch((int)(_hx_char)){
            						case (int)46: {
HXLINE(1946)							_hx_char = this->input.cca(this->readPos++);
HXLINE(1947)							if ((_hx_char != 46)) {
HXLINE(1948)								this->invalidChar(_hx_char);
            							}
HXLINE(1949)							return ::hscriptBase::Token_obj::TOp(HX_("...",ee,0f,23,00));
            						}
            						break;
            						case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(1932)							int n = (_hx_char - 48);
HXLINE(1933)							int exp = 1;
HXLINE(1934)							while(true){
HXLINE(1935)								_hx_char = this->input.cca(this->readPos++);
HXLINE(1936)								exp = (exp * 10);
HXLINE(1937)								switch((int)(_hx_char)){
            									case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(1939)										n = ((n * 10) + (_hx_char - 48));
            									}
            									break;
            									default:{
HXLINE(1941)										this->_hx_char = _hx_char;
HXLINE(1942)										return ::hscriptBase::Token_obj::TConst(::hscriptBase::Const_obj::CFloat((( (Float)(n) ) / ( (Float)(exp) ))));
            									}
            								}
            							}
            						}
            						break;
            						default:{
HXLINE(1951)							this->_hx_char = _hx_char;
HXLINE(1952)							return ::hscriptBase::Token_obj::TDot_dyn();
            						}
            					}
            				}
            				break;
            				case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(1840)					Float n = (( (Float)((_hx_char - 48)) ) * ((Float)1.0));
HXLINE(1841)					Float exp = ((Float)0.);
HXLINE(1842)					while(true){
HXLINE(1843)						_hx_char = this->input.cca(this->readPos++);
HXLINE(1844)						exp = (exp * ( (Float)(10) ));
HXLINE(1845)						switch((int)(_hx_char)){
            							case (int)46: {
HXLINE(1866)								if ((exp > 0)) {
HXLINE(1868)									bool _hx_tmp;
HXDLIN(1868)									if ((exp == 10)) {
HXLINE(1868)										_hx_tmp = (this->input.cca(this->readPos++) == 46);
            									}
            									else {
HXLINE(1868)										_hx_tmp = false;
            									}
HXDLIN(1868)									if (_hx_tmp) {
HXLINE(1869)										{
HXLINE(1869)											this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            												->setFixed(0,HX_("t",74,00,00,00),::hscriptBase::Token_obj::TOp(HX_("...",ee,0f,23,00)))
            												->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            												->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1869)											this->tokenMin = this->oldTokenMin;
HXDLIN(1869)											this->tokenMax = this->oldTokenMax;
            										}
HXLINE(1870)										int i = (::Std_obj::_hx_int(n) & -1);
HXLINE(1871)										 ::hscriptBase::Const _hx_tmp;
HXDLIN(1871)										if ((i == n)) {
HXLINE(1871)											_hx_tmp = ::hscriptBase::Const_obj::CInt(i);
            										}
            										else {
HXLINE(1871)											_hx_tmp = ::hscriptBase::Const_obj::CFloat(n);
            										}
HXDLIN(1871)										return ::hscriptBase::Token_obj::TConst(_hx_tmp);
            									}
HXLINE(1873)									this->invalidChar(_hx_char);
            								}
HXLINE(1875)								exp = ((Float)1.);
            							}
            							break;
            							case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(1847)								n = ((n * ( (Float)(10) )) + (_hx_char - 48));
            							}
            							break;
            							case (int)69: case (int)101: {
HXLINE(1849)								 ::hscriptBase::Token tk = this->token();
HXLINE(1850)								 ::Dynamic pow = null();
HXLINE(1851)								switch((int)(tk->_hx_getIndex())){
            									case (int)1: {
HXLINE(1852)										 ::hscriptBase::Const _g = tk->_hx_getObject(0).StaticCast<  ::hscriptBase::Const >();
HXDLIN(1852)										if ((_g->_hx_getIndex() == 0)) {
HXLINE(1852)											int e = _g->_hx_getInt(0);
HXDLIN(1852)											pow = e;
            										}
            										else {
HXLINE(1860)											this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            												->setFixed(0,HX_("t",74,00,00,00),tk)
            												->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            												->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1860)											this->tokenMin = this->oldTokenMin;
HXDLIN(1860)											this->tokenMax = this->oldTokenMax;
            										}
            									}
            									break;
            									case (int)3: {
HXLINE(1853)										if ((tk->_hx_getString(0) == HX_("-",2d,00,00,00))) {
HXLINE(1854)											tk = this->token();
HXLINE(1855)											if ((tk->_hx_getIndex() == 1)) {
HXLINE(1856)												 ::hscriptBase::Const _g = tk->_hx_getObject(0).StaticCast<  ::hscriptBase::Const >();
HXDLIN(1856)												if ((_g->_hx_getIndex() == 0)) {
HXLINE(1856)													int e = _g->_hx_getInt(0);
HXDLIN(1856)													pow = -(e);
            												}
            												else {
HXLINE(1857)													this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            														->setFixed(0,HX_("t",74,00,00,00),tk)
            														->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            														->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1857)													this->tokenMin = this->oldTokenMin;
HXDLIN(1857)													this->tokenMax = this->oldTokenMax;
            												}
            											}
            											else {
HXLINE(1857)												this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            													->setFixed(0,HX_("t",74,00,00,00),tk)
            													->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            													->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1857)												this->tokenMin = this->oldTokenMin;
HXDLIN(1857)												this->tokenMax = this->oldTokenMax;
            											}
            										}
            										else {
HXLINE(1860)											this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            												->setFixed(0,HX_("t",74,00,00,00),tk)
            												->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            												->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1860)											this->tokenMin = this->oldTokenMin;
HXDLIN(1860)											this->tokenMax = this->oldTokenMax;
            										}
            									}
            									break;
            									default:{
HXLINE(1860)										this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            											->setFixed(0,HX_("t",74,00,00,00),tk)
            											->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            											->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(1860)										this->tokenMin = this->oldTokenMin;
HXDLIN(1860)										this->tokenMax = this->oldTokenMax;
            									}
            								}
HXLINE(1862)								if (::hx::IsNull( pow )) {
HXLINE(1863)									this->invalidChar(_hx_char);
            								}
HXLINE(1864)								return ::hscriptBase::Token_obj::TConst(::hscriptBase::Const_obj::CFloat((((::Math_obj::pow(( (Float)(10) ),( (Float)(pow) )) / exp) * n) * ( (Float)(10) ))));
            							}
            							break;
            							case (int)120: {
HXLINE(1877)								bool _hx_tmp;
HXDLIN(1877)								if (!((n > 0))) {
HXLINE(1877)									_hx_tmp = (exp > 0);
            								}
            								else {
HXLINE(1877)									_hx_tmp = true;
            								}
HXDLIN(1877)								if (_hx_tmp) {
HXLINE(1878)									this->invalidChar(_hx_char);
            								}
HXLINE(1881)								int n1 = 0;
HXLINE(1882)								while(true){
HXLINE(1883)									_hx_char = this->input.cca(this->readPos++);
HXLINE(1884)									switch((int)(_hx_char)){
            										case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(1886)											n1 = (((n1 << 4) + _hx_char) - 48);
            										}
            										break;
            										case (int)65: case (int)66: case (int)67: case (int)68: case (int)69: case (int)70: {
HXLINE(1888)											n1 = ((n1 << 4) + (_hx_char - 55));
            										}
            										break;
            										case (int)97: case (int)98: case (int)99: case (int)100: case (int)101: case (int)102: {
HXLINE(1890)											n1 = ((n1 << 4) + (_hx_char - 87));
            										}
            										break;
            										default:{
HXLINE(1892)											this->_hx_char = _hx_char;
HXLINE(1893)											return ::hscriptBase::Token_obj::TConst(::hscriptBase::Const_obj::CInt((n1 & -1)));
            										}
            									}
            								}
            							}
            							break;
            							default:{
HXLINE(1918)								this->_hx_char = _hx_char;
HXLINE(1919)								int i = ::Std_obj::_hx_int(n);
HXLINE(1920)								 ::hscriptBase::Const _hx_tmp;
HXDLIN(1920)								if ((exp > 0)) {
HXLINE(1920)									_hx_tmp = ::hscriptBase::Const_obj::CFloat(((n * ( (Float)(10) )) / exp));
            								}
            								else {
HXLINE(1920)									if ((i == n)) {
HXLINE(1920)										_hx_tmp = ::hscriptBase::Const_obj::CInt(i);
            									}
            									else {
HXLINE(1920)										_hx_tmp = ::hscriptBase::Const_obj::CFloat(n);
            									}
            								}
HXDLIN(1920)								return ::hscriptBase::Token_obj::TConst(_hx_tmp);
            							}
            						}
            					}
            				}
            				break;
            				case (int)58: {
HXLINE(1960)					return ::hscriptBase::Token_obj::TDoubleDot_dyn();
            				}
            				break;
            				case (int)59: {
HXLINE(1924)					return ::hscriptBase::Token_obj::TStatement_dyn();
            				}
            				break;
            				case (int)61: {
HXLINE(1962)					_hx_char = this->input.cca(this->readPos++);
HXLINE(1963)					if ((_hx_char == 61)) {
HXLINE(1964)						return ::hscriptBase::Token_obj::TOp(HX_("==",60,35,00,00));
            					}
            					else {
HXLINE(1965)						if ((_hx_char == 62)) {
HXLINE(1966)							return ::hscriptBase::Token_obj::TOp(HX_("=>",61,35,00,00));
            						}
            					}
HXLINE(1967)					_hx_char = this->input.cca(this->readPos++);
HXLINE(1968)					if ((_hx_char == 61)) {
HXLINE(1969)						return ::hscriptBase::Token_obj::TOp(HX_("===",dd,7e,2e,00));
            					}
HXLINE(1971)					this->_hx_char = _hx_char;
HXLINE(1972)					return ::hscriptBase::Token_obj::TOp(HX_("=",3d,00,00,00));
            				}
            				break;
            				case (int)63: {
HXLINE(1959)					return ::hscriptBase::Token_obj::TQuestion_dyn();
            				}
            				break;
            				case (int)64: {
HXLINE(1974)					_hx_char = this->input.cca(this->readPos++);
HXLINE(1975)					bool _hx_tmp;
HXDLIN(1975)					if (!(this->idents->__get(_hx_char))) {
HXLINE(1975)						_hx_tmp = (_hx_char == 58);
            					}
            					else {
HXLINE(1975)						_hx_tmp = true;
            					}
HXDLIN(1975)					if (_hx_tmp) {
HXLINE(1976)						::String id = ::String::fromCharCode(_hx_char);
HXLINE(1977)						while(true){
HXLINE(1978)							_hx_char = this->input.cca(this->readPos++);
HXLINE(1979)							if (!(this->idents->__get(_hx_char))) {
HXLINE(1980)								this->_hx_char = _hx_char;
HXLINE(1981)								return ::hscriptBase::Token_obj::TMeta(id);
            							}
HXLINE(1983)							id = (id + ::String::fromCharCode(_hx_char));
            						}
            					}
HXLINE(1986)					this->invalidChar(_hx_char);
            				}
            				break;
            				case (int)91: {
HXLINE(1956)					return ::hscriptBase::Token_obj::TBkOpen_dyn();
            				}
            				break;
            				case (int)93: {
HXLINE(1957)					return ::hscriptBase::Token_obj::TBkClose_dyn();
            				}
            				break;
            				case (int)123: {
HXLINE(1954)					return ::hscriptBase::Token_obj::TBrOpen_dyn();
            				}
            				break;
            				case (int)125: {
HXLINE(1955)					return ::hscriptBase::Token_obj::TBrClose_dyn();
            				}
            				break;
            				default:{
HXLINE(2002)					if (this->ops->__get(_hx_char)) {
HXLINE(2003)						::String op = ::String::fromCharCode(_hx_char);
HXLINE(2004)						while(true){
HXLINE(2005)							_hx_char = this->input.cca(this->readPos++);
HXLINE(2006)							if ((_hx_char == 0)) {
HXLINE(2006)								_hx_char = 0;
            							}
HXLINE(2007)							if (!(this->ops->__get(_hx_char))) {
HXLINE(2008)								this->_hx_char = _hx_char;
HXLINE(2009)								return ::hscriptBase::Token_obj::TOp(op);
            							}
HXLINE(2011)							::String pop = op;
HXLINE(2012)							op = (op + ::String::fromCharCode(_hx_char));
HXLINE(2013)							bool _hx_tmp;
HXDLIN(2013)							if (!(this->opPriority->exists(op))) {
HXLINE(2013)								_hx_tmp = this->opPriority->exists(pop);
            							}
            							else {
HXLINE(2013)								_hx_tmp = false;
            							}
HXDLIN(2013)							if (_hx_tmp) {
HXLINE(2014)								bool _hx_tmp;
HXDLIN(2014)								if ((op != HX_("//",20,29,00,00))) {
HXLINE(2014)									_hx_tmp = (op == HX_("/*",1b,29,00,00));
            								}
            								else {
HXLINE(2014)									_hx_tmp = true;
            								}
HXDLIN(2014)								if (_hx_tmp) {
HXLINE(2015)									return this->tokenComment(op,_hx_char);
            								}
HXLINE(2016)								this->_hx_char = _hx_char;
HXLINE(2017)								return ::hscriptBase::Token_obj::TOp(pop);
            							}
            						}
            					}
HXLINE(2021)					if (this->idents->__get(_hx_char)) {
HXLINE(2022)						::String id = ::String::fromCharCode(_hx_char);
HXLINE(2023)						while(true){
HXLINE(2024)							_hx_char = this->input.cca(this->readPos++);
HXLINE(2025)							if ((_hx_char == 0)) {
HXLINE(2025)								_hx_char = 0;
            							}
HXLINE(2026)							if (!(this->idents->__get(_hx_char))) {
HXLINE(2027)								this->_hx_char = _hx_char;
HXLINE(2028)								return ::hscriptBase::Token_obj::TId(id);
            							}
HXLINE(2030)							id = (id + ::String::fromCharCode(_hx_char));
            						}
            					}
HXLINE(2033)					this->invalidChar(_hx_char);
            				}
            			}
HXLINE(2035)			_hx_char = this->input.cca(this->readPos++);
            		}
HXLINE(1823)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,_token,return )

 ::Dynamic Parser_obj::parsePreproCond(){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_2042_parsePreproCond)
HXLINE(2043)		 ::hscriptBase::Token tk = this->token();
HXLINE(2044)		switch((int)(tk->_hx_getIndex())){
            			case (int)2: {
HXLINE(2048)				::String id = tk->_hx_getString(0);
HXLINE(2049)				 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EIdent(id,null());
HXDLIN(2049)				 ::Dynamic pmin = this->tokenMin;
HXDLIN(2049)				 ::Dynamic pmax = this->tokenMax;
HXDLIN(2049)				if (::hx::IsNull( e )) {
HXLINE(2049)					return null();
            				}
            				else {
HXLINE(2049)					if (::hx::IsNull( pmin )) {
HXLINE(2049)						pmin = this->tokenMin;
            					}
HXDLIN(2049)					if (::hx::IsNull( pmax )) {
HXLINE(2049)						pmax = this->tokenMax;
            					}
HXDLIN(2049)					return  ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("e",65,00,00,00),e)
            						->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            						->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            						->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            						->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            				}
            			}
            			break;
            			case (int)3: {
HXLINE(2050)				if ((tk->_hx_getString(0) == HX_("!",21,00,00,00))) {
HXLINE(2051)					 ::hscriptBase::ExprDef e = ::hscriptBase::ExprDef_obj::EUnop(HX_("!",21,00,00,00),true,this->parsePreproCond());
HXDLIN(2051)					 ::Dynamic pmin = this->tokenMin;
HXDLIN(2051)					 ::Dynamic pmax = this->tokenMax;
HXDLIN(2051)					if (::hx::IsNull( e )) {
HXLINE(2051)						return null();
            					}
            					else {
HXLINE(2051)						if (::hx::IsNull( pmin )) {
HXLINE(2051)							pmin = this->tokenMin;
            						}
HXDLIN(2051)						if (::hx::IsNull( pmax )) {
HXLINE(2051)							pmax = this->tokenMax;
            						}
HXDLIN(2051)						return  ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("e",65,00,00,00),e)
            							->setFixed(1,HX_("line",f4,17,b3,47),this->line)
            							->setFixed(2,HX_("pmax",34,f0,5a,4a),pmax)
            							->setFixed(3,HX_("pmin",22,f7,5a,4a),pmin)
            							->setFixed(4,HX_("origin",e6,19,01,4b),this->origin));
            					}
            				}
            				else {
HXLINE(2053)					return this->unexpected(tk);
            				}
            			}
            			break;
            			case (int)4: {
HXLINE(2046)				{
HXLINE(2046)					this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("t",74,00,00,00),tk)
            						->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            						->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(2046)					this->tokenMin = this->oldTokenMin;
HXDLIN(2046)					this->tokenMax = this->oldTokenMax;
            				}
HXLINE(2047)				return this->parseExpr();
            			}
            			break;
            			default:{
HXLINE(2053)				return this->unexpected(tk);
            			}
            		}
HXLINE(2044)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parsePreproCond,return )

bool Parser_obj::evalPreproCond( ::Dynamic e){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		bool _hx_run( ::hscriptBase::ExprDef eexpr){
            			HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_2059_evalPreproCond)
HXLINE(2060)			if ((eexpr->_hx_getIndex() == 7)) {
HXLINE(2061)				::String v = eexpr->_hx_getString(0);
HXDLIN(2061)				 ::Dynamic e1 = eexpr->_hx_getObject(1);
HXDLIN(2061)				 ::Dynamic e2 = eexpr->_hx_getObject(2);
HXDLIN(2061)				{
HXLINE(2062)					::String id1 = null();
HXDLIN(2062)					::String id2 = null();
HXLINE(2063)					{
HXLINE(2063)						 ::hscriptBase::ExprDef _g = e1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN(2063)						switch((int)(_g->_hx_getIndex())){
            							case (int)0: {
HXLINE(2066)								 ::hscriptBase::Const c = _g->_hx_getObject(0).StaticCast<  ::hscriptBase::Const >();
HXLINE(2067)								switch((int)(c->_hx_getIndex())){
            									case (int)0: {
HXLINE(2070)										int v = c->_hx_getInt(0);
HXLINE(2071)										id1 = ::Std_obj::string(v);
            									}
            									break;
            									case (int)1: {
HXLINE(2072)										Float f = c->_hx_getFloat(0);
HXLINE(2073)										id1 = ::Std_obj::string(f);
            									}
            									break;
            									case (int)2: {
HXLINE(2068)										 ::Dynamic _g = c->_hx_getObject(1);
HXDLIN(2068)										{
HXLINE(2068)											::String s = c->_hx_getString(0);
HXLINE(2069)											id1 = s;
            										}
            									}
            									break;
            								}
            							}
            							break;
            							case (int)1: {
HXLINE(2064)								 ::Dynamic _g1 = _g->_hx_getObject(1);
HXDLIN(2064)								{
HXLINE(2064)									::String e = _g->_hx_getString(0);
HXLINE(2065)									id1 = e;
            								}
            							}
            							break;
            							default:{
            							}
            						}
            					}
HXLINE(2078)					{
HXLINE(2078)						 ::hscriptBase::ExprDef _g1 = e2->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN(2078)						switch((int)(_g1->_hx_getIndex())){
            							case (int)0: {
HXLINE(2081)								 ::hscriptBase::Const c = _g1->_hx_getObject(0).StaticCast<  ::hscriptBase::Const >();
HXLINE(2082)								switch((int)(c->_hx_getIndex())){
            									case (int)0: {
HXLINE(2085)										int v = c->_hx_getInt(0);
HXLINE(2086)										id2 = ::Std_obj::string(v);
            									}
            									break;
            									case (int)1: {
HXLINE(2087)										Float f = c->_hx_getFloat(0);
HXLINE(2088)										id2 = ::Std_obj::string(f);
            									}
            									break;
            									case (int)2: {
HXLINE(2083)										 ::Dynamic _g = c->_hx_getObject(1);
HXDLIN(2083)										{
HXLINE(2083)											::String s = c->_hx_getString(0);
HXLINE(2084)											id2 = s;
            										}
            									}
            									break;
            								}
            							}
            							break;
            							case (int)1: {
HXLINE(2079)								 ::Dynamic _g = _g1->_hx_getObject(1);
HXDLIN(2079)								{
HXLINE(2079)									::String e = _g1->_hx_getString(0);
HXLINE(2080)									id2 = e;
            								}
            							}
            							break;
            							default:{
            							}
            						}
            					}
HXLINE(2093)					if (::hx::IsNotNull( id1 )) {
HXLINE(2095)						::String definedValue = ::tea::SScript_obj::defines->get_string(id1);
HXLINE(2096)						if (::hx::IsNull( definedValue )) {
HXLINE(2097)							definedValue = id1;
            						}
HXLINE(2098)						bool evalBinop;
HXDLIN(2098)						bool evalBinop1;
HXDLIN(2098)						bool evalBinop2;
HXDLIN(2098)						if (::hx::IsNotNull( definedValue )) {
HXLINE(2098)							evalBinop2 = ::hx::IsNotNull( id2 );
            						}
            						else {
HXLINE(2098)							evalBinop2 = false;
            						}
HXDLIN(2098)						if (evalBinop2) {
HXLINE(2100)							if ((definedValue.indexOf(HX_(".",2e,00,00,00),null()) == -1)) {
HXLINE(2098)								evalBinop1 = (definedValue.indexOf(HX_("-",2d,00,00,00),null()) != -1);
            							}
            							else {
HXLINE(2098)								evalBinop1 = true;
            							}
            						}
            						else {
HXLINE(2098)							evalBinop1 = false;
            						}
HXDLIN(2098)						if (evalBinop1) {
HXLINE(2101)							if ((id2.indexOf(HX_(".",2e,00,00,00),null()) == -1)) {
HXLINE(2098)								evalBinop = (id2.indexOf(HX_("-",2d,00,00,00),null()) != -1);
            							}
            							else {
HXLINE(2098)								evalBinop = true;
            							}
            						}
            						else {
HXLINE(2098)							evalBinop = false;
            						}
HXDLIN(2098)						if (evalBinop) {
HXLINE(2103)							definedValue = definedValue.split(HX_(".",2e,00,00,00))->join(HX_("",00,00,00,00));
HXLINE(2104)							definedValue = definedValue.split(HX_("-",2d,00,00,00))->join(HX_("",00,00,00,00));
HXLINE(2105)							id2 = id2.split(HX_(".",2e,00,00,00))->join(HX_("",00,00,00,00));
HXLINE(2106)							id2 = id2.split(HX_("-",2d,00,00,00))->join(HX_("",00,00,00,00));
HXLINE(2108)							if ((definedValue.length != id2.length)) {
HXLINE(2110)								if ((id2.length < definedValue.length)) {
HXLINE(2111)									while((id2.length < definedValue.length)){
HXLINE(2112)										id2 = (id2 + HX_("0",30,00,00,00));
            									}
            								}
            								else {
HXLINE(2114)									while((definedValue.length < id2.length)){
HXLINE(2115)										id2 = (id2 + HX_("0",30,00,00,00));
            									}
            								}
            							}
            						}
HXLINE(2118)						if (::hx::IsNotNull( definedValue )) {
HXLINE(2120)							 ::Dynamic float2 = ::Std_obj::parseFloat(definedValue);
HXDLIN(2120)							 ::Dynamic float3 = ::Std_obj::parseFloat(id2);
HXLINE(2121)							 ::Dynamic int2 = ::Std_obj::parseInt(definedValue);
HXDLIN(2121)							 ::Dynamic int3 = ::Std_obj::parseInt(id2);
HXLINE(2122)							::String _hx_switch_0 = v;
            							if (  (_hx_switch_0==HX_("!=",fc,1c,00,00)) ){
HXLINE(2131)								if ((id2 != definedValue)) {
HXLINE(2132)									return true;
            								}
            								else {
HXLINE(2133)									bool evalBinop;
HXDLIN(2133)									bool evalBinop1;
HXDLIN(2133)									if (::hx::IsNotNull( float2 )) {
HXLINE(2133)										evalBinop1 = ::hx::IsNotNull( float3 );
            									}
            									else {
HXLINE(2133)										evalBinop1 = false;
            									}
HXDLIN(2133)									if (evalBinop1) {
HXLINE(2133)										evalBinop = ::hx::IsNotEq( float2,float3 );
            									}
            									else {
HXLINE(2133)										evalBinop = false;
            									}
HXDLIN(2133)									if (evalBinop) {
HXLINE(2134)										return true;
            									}
            									else {
HXLINE(2135)										bool evalBinop;
HXDLIN(2135)										bool evalBinop1;
HXDLIN(2135)										if (::hx::IsNotNull( int2 )) {
HXLINE(2135)											evalBinop1 = ::hx::IsNotNull( int3 );
            										}
            										else {
HXLINE(2135)											evalBinop1 = false;
            										}
HXDLIN(2135)										if (evalBinop1) {
HXLINE(2135)											evalBinop = ::hx::IsNotEq( int2,int3 );
            										}
            										else {
HXLINE(2135)											evalBinop = false;
            										}
HXDLIN(2135)										if (evalBinop) {
HXLINE(2136)											return true;
            										}
            									}
            								}
HXLINE(2131)								goto _hx_goto_131;
            							}
            							if (  (_hx_switch_0==HX_("<",3c,00,00,00)) ){
HXLINE(2148)								bool evalBinop;
HXDLIN(2148)								bool evalBinop1;
HXDLIN(2148)								if (::hx::IsNotNull( float2 )) {
HXLINE(2148)									evalBinop1 = ::hx::IsNotNull( float3 );
            								}
            								else {
HXLINE(2148)									evalBinop1 = false;
            								}
HXDLIN(2148)								if (evalBinop1) {
HXLINE(2148)									evalBinop = ::hx::IsLess( float2,float3 );
            								}
            								else {
HXLINE(2148)									evalBinop = false;
            								}
HXDLIN(2148)								if (evalBinop) {
HXLINE(2149)									return true;
            								}
            								else {
HXLINE(2150)									bool evalBinop;
HXDLIN(2150)									bool evalBinop1;
HXDLIN(2150)									if (::hx::IsNotNull( int2 )) {
HXLINE(2150)										evalBinop1 = ::hx::IsNotNull( int3 );
            									}
            									else {
HXLINE(2150)										evalBinop1 = false;
            									}
HXDLIN(2150)									if (evalBinop1) {
HXLINE(2150)										evalBinop = ::hx::IsLess( int2,int3 );
            									}
            									else {
HXLINE(2150)										evalBinop = false;
            									}
HXDLIN(2150)									if (evalBinop) {
HXLINE(2151)										return true;
            									}
            								}
HXLINE(2148)								goto _hx_goto_131;
            							}
            							if (  (_hx_switch_0==HX_("<=",81,34,00,00)) ){
HXLINE(2143)								bool evalBinop;
HXDLIN(2143)								bool evalBinop1;
HXDLIN(2143)								if (::hx::IsNotNull( float2 )) {
HXLINE(2143)									evalBinop1 = ::hx::IsNotNull( float3 );
            								}
            								else {
HXLINE(2143)									evalBinop1 = false;
            								}
HXDLIN(2143)								if (evalBinop1) {
HXLINE(2143)									evalBinop = ::hx::IsLessEq( float2,float3 );
            								}
            								else {
HXLINE(2143)									evalBinop = false;
            								}
HXDLIN(2143)								if (evalBinop) {
HXLINE(2144)									return true;
            								}
            								else {
HXLINE(2145)									bool evalBinop;
HXDLIN(2145)									bool evalBinop1;
HXDLIN(2145)									if (::hx::IsNotNull( int2 )) {
HXLINE(2145)										evalBinop1 = ::hx::IsNotNull( int3 );
            									}
            									else {
HXLINE(2145)										evalBinop1 = false;
            									}
HXDLIN(2145)									if (evalBinop1) {
HXLINE(2145)										evalBinop = ::hx::IsLessEq( int2,int3 );
            									}
            									else {
HXLINE(2145)										evalBinop = false;
            									}
HXDLIN(2145)									if (evalBinop) {
HXLINE(2146)										return true;
            									}
            								}
HXLINE(2143)								goto _hx_goto_131;
            							}
            							if (  (_hx_switch_0==HX_("==",60,35,00,00)) ){
HXLINE(2124)								if ((id2 == definedValue)) {
HXLINE(2125)									return true;
            								}
            								else {
HXLINE(2126)									bool evalBinop;
HXDLIN(2126)									bool evalBinop1;
HXDLIN(2126)									if (::hx::IsNotNull( float2 )) {
HXLINE(2126)										evalBinop1 = ::hx::IsNotNull( float3 );
            									}
            									else {
HXLINE(2126)										evalBinop1 = false;
            									}
HXDLIN(2126)									if (evalBinop1) {
HXLINE(2126)										evalBinop = ::hx::IsEq( float2,float3 );
            									}
            									else {
HXLINE(2126)										evalBinop = false;
            									}
HXDLIN(2126)									if (evalBinop) {
HXLINE(2127)										return true;
            									}
            									else {
HXLINE(2128)										bool evalBinop;
HXDLIN(2128)										bool evalBinop1;
HXDLIN(2128)										if (::hx::IsNotNull( int2 )) {
HXLINE(2128)											evalBinop1 = ::hx::IsNotNull( int3 );
            										}
            										else {
HXLINE(2128)											evalBinop1 = false;
            										}
HXDLIN(2128)										if (evalBinop1) {
HXLINE(2128)											evalBinop = ::hx::IsEq( int2,int3 );
            										}
            										else {
HXLINE(2128)											evalBinop = false;
            										}
HXDLIN(2128)										if (evalBinop) {
HXLINE(2129)											return true;
            										}
            									}
            								}
HXLINE(2124)								goto _hx_goto_131;
            							}
            							if (  (_hx_switch_0==HX_(">",3e,00,00,00)) ){
HXLINE(2153)								bool evalBinop;
HXDLIN(2153)								bool evalBinop1;
HXDLIN(2153)								if (::hx::IsNotNull( float2 )) {
HXLINE(2153)									evalBinop1 = ::hx::IsNotNull( float3 );
            								}
            								else {
HXLINE(2153)									evalBinop1 = false;
            								}
HXDLIN(2153)								if (evalBinop1) {
HXLINE(2153)									evalBinop = ::hx::IsGreater( float2,float3 );
            								}
            								else {
HXLINE(2153)									evalBinop = false;
            								}
HXDLIN(2153)								if (evalBinop) {
HXLINE(2154)									return true;
            								}
            								else {
HXLINE(2155)									bool evalBinop;
HXDLIN(2155)									bool evalBinop1;
HXDLIN(2155)									if (::hx::IsNotNull( int2 )) {
HXLINE(2155)										evalBinop1 = ::hx::IsNotNull( int3 );
            									}
            									else {
HXLINE(2155)										evalBinop1 = false;
            									}
HXDLIN(2155)									if (evalBinop1) {
HXLINE(2155)										evalBinop = ::hx::IsGreater( int2,int3 );
            									}
            									else {
HXLINE(2155)										evalBinop = false;
            									}
HXDLIN(2155)									if (evalBinop) {
HXLINE(2156)										return true;
            									}
            								}
HXLINE(2153)								goto _hx_goto_131;
            							}
            							if (  (_hx_switch_0==HX_(">=",3f,36,00,00)) ){
HXLINE(2138)								bool evalBinop;
HXDLIN(2138)								bool evalBinop1;
HXDLIN(2138)								if (::hx::IsNotNull( float2 )) {
HXLINE(2138)									evalBinop1 = ::hx::IsNotNull( float3 );
            								}
            								else {
HXLINE(2138)									evalBinop1 = false;
            								}
HXDLIN(2138)								if (evalBinop1) {
HXLINE(2138)									evalBinop = ::hx::IsGreaterEq( float2,float3 );
            								}
            								else {
HXLINE(2138)									evalBinop = false;
            								}
HXDLIN(2138)								if (evalBinop) {
HXLINE(2139)									return true;
            								}
            								else {
HXLINE(2140)									bool evalBinop;
HXDLIN(2140)									bool evalBinop1;
HXDLIN(2140)									if (::hx::IsNotNull( int2 )) {
HXLINE(2140)										evalBinop1 = ::hx::IsNotNull( int3 );
            									}
            									else {
HXLINE(2140)										evalBinop1 = false;
            									}
HXDLIN(2140)									if (evalBinop1) {
HXLINE(2140)										evalBinop = ::hx::IsGreaterEq( int2,int3 );
            									}
            									else {
HXLINE(2140)										evalBinop = false;
            									}
HXDLIN(2140)									if (evalBinop) {
HXLINE(2141)										return true;
            									}
            								}
HXLINE(2138)								goto _hx_goto_131;
            							}
            							_hx_goto_131:;
            						}
            					}
            				}
            			}
HXLINE(2164)			return false;
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_948055e9f9c336b1_2057_evalPreproCond)
HXLINE(2058)		 ::Dynamic evalBinop =  ::Dynamic(new _hx_Closure_0());
HXLINE(2167)		 ::hscriptBase::ExprDef expr1 = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXLINE(2168)		switch((int)(expr1->_hx_getIndex())){
            			case (int)1: {
HXLINE(2169)				 ::Dynamic _g = expr1->_hx_getObject(1);
HXDLIN(2169)				::String id = expr1->_hx_getString(0);
HXLINE(2170)				return ::tea::SScript_obj::defines->exists(id);
            			}
            			break;
            			case (int)4: {
HXLINE(2173)				 ::Dynamic e = expr1->_hx_getObject(0);
HXLINE(2174)				return this->evalPreproCond(e);
            			}
            			break;
            			case (int)7: {
HXLINE(2189)				 ::Dynamic _g = expr1->_hx_getObject(1);
HXDLIN(2189)				 ::Dynamic _g1 = expr1->_hx_getObject(2);
HXDLIN(2189)				::String _hx_switch_1 = expr1->_hx_getString(0);
            				if (  (_hx_switch_1==HX_("!=",fc,1c,00,00)) ){
HXLINE(2185)					 ::Dynamic e1 = _g;
HXDLIN(2185)					 ::Dynamic e2 = _g1;
HXLINE(2186)					return ( (bool)(evalBinop(expr1)) );
HXLINE(2185)					goto _hx_goto_132;
            				}
            				if (  (_hx_switch_1==HX_("&&",40,21,00,00)) ){
HXLINE(2187)					 ::Dynamic e1 = _g;
HXDLIN(2187)					 ::Dynamic e2 = _g1;
HXLINE(2188)					if (this->evalPreproCond(e1)) {
HXLINE(2188)						return this->evalPreproCond(e2);
            					}
            					else {
HXLINE(2188)						return false;
            					}
HXLINE(2187)					goto _hx_goto_132;
            				}
            				if (  (_hx_switch_1==HX_("<",3c,00,00,00)) ){
HXLINE(2181)					 ::Dynamic e1 = _g;
HXDLIN(2181)					 ::Dynamic e2 = _g1;
HXLINE(2182)					return ( (bool)(evalBinop(expr1)) );
HXLINE(2181)					goto _hx_goto_132;
            				}
            				if (  (_hx_switch_1==HX_("<=",81,34,00,00)) ){
HXLINE(2179)					 ::Dynamic e1 = _g;
HXDLIN(2179)					 ::Dynamic e2 = _g1;
HXLINE(2180)					return ( (bool)(evalBinop(expr1)) );
HXLINE(2179)					goto _hx_goto_132;
            				}
            				if (  (_hx_switch_1==HX_("==",60,35,00,00)) ){
HXLINE(2175)					 ::Dynamic e1 = _g;
HXDLIN(2175)					 ::Dynamic e2 = _g1;
HXLINE(2176)					return ( (bool)(evalBinop(expr1)) );
HXLINE(2175)					goto _hx_goto_132;
            				}
            				if (  (_hx_switch_1==HX_(">",3e,00,00,00)) ){
HXLINE(2183)					 ::Dynamic e1 = _g;
HXDLIN(2183)					 ::Dynamic e2 = _g1;
HXLINE(2184)					return ( (bool)(evalBinop(expr1)) );
HXLINE(2183)					goto _hx_goto_132;
            				}
            				if (  (_hx_switch_1==HX_(">=",3f,36,00,00)) ){
HXLINE(2177)					 ::Dynamic e1 = _g;
HXDLIN(2177)					 ::Dynamic e2 = _g1;
HXLINE(2178)					return ( (bool)(evalBinop(expr1)) );
HXLINE(2177)					goto _hx_goto_132;
            				}
            				if (  (_hx_switch_1==HX_("||",80,6c,00,00)) ){
HXLINE(2189)					 ::Dynamic e1 = _g;
HXDLIN(2189)					 ::Dynamic e2 = _g1;
HXLINE(2190)					if (!(this->evalPreproCond(e1))) {
HXLINE(2190)						return this->evalPreproCond(e2);
            					}
            					else {
HXLINE(2190)						return true;
            					}
HXLINE(2189)					goto _hx_goto_132;
            				}
            				/* default */{
HXLINE(2192)					{
HXLINE(2192)						 ::hscriptBase::ErrorDef err = ::hscriptBase::ErrorDef_obj::EInvalidPreprocessor((HX_("Can't eval ",01,17,bf,09) + ::Type_obj::enumConstructor(e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic))));
HXDLIN(2192)						 ::Dynamic pmin = this->readPos;
HXDLIN(2192)						 ::Dynamic pmax = this->readPos;
HXDLIN(2192)						 ::hscriptBase::Error e1 =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line);
HXDLIN(2192)						if (!(this->resumeErrors)) {
HXLINE(2192)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line)));
            						}
            					}
HXLINE(2193)					return false;
            				}
            				_hx_goto_132:;
            			}
            			break;
            			case (int)8: {
HXLINE(2171)				bool _g = expr1->_hx_getBool(1);
HXDLIN(2171)				if ((expr1->_hx_getString(0) == HX_("!",21,00,00,00))) {
HXLINE(2171)					 ::Dynamic e = expr1->_hx_getObject(2);
HXLINE(2172)					return !(this->evalPreproCond(e));
            				}
            				else {
HXLINE(2192)					{
HXLINE(2192)						 ::hscriptBase::ErrorDef err = ::hscriptBase::ErrorDef_obj::EInvalidPreprocessor((HX_("Can't eval ",01,17,bf,09) + ::Type_obj::enumConstructor(e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic))));
HXDLIN(2192)						 ::Dynamic pmin = this->readPos;
HXDLIN(2192)						 ::Dynamic pmax = this->readPos;
HXDLIN(2192)						 ::hscriptBase::Error e1 =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line);
HXDLIN(2192)						if (!(this->resumeErrors)) {
HXLINE(2192)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line)));
            						}
            					}
HXLINE(2193)					return false;
            				}
            			}
            			break;
            			default:{
HXLINE(2192)				{
HXLINE(2192)					 ::hscriptBase::ErrorDef err = ::hscriptBase::ErrorDef_obj::EInvalidPreprocessor((HX_("Can't eval ",01,17,bf,09) + ::Type_obj::enumConstructor(e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic))));
HXDLIN(2192)					 ::Dynamic pmin = this->readPos;
HXDLIN(2192)					 ::Dynamic pmax = this->readPos;
HXDLIN(2192)					 ::hscriptBase::Error e1 =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line);
HXDLIN(2192)					if (!(this->resumeErrors)) {
HXLINE(2192)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line)));
            					}
            				}
HXLINE(2193)				return false;
            			}
            		}
HXLINE(2168)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,evalPreproCond,return )

 ::hscriptBase::Token Parser_obj::preprocess(::String id){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::hscriptBase::Parser,_gthis) HXARGC(0)
            		bool _hx_run(){
            			HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_2200_preprocess)
HXLINE(2201)			{
HXLINE(2201)				int _g = 0;
HXDLIN(2201)				::Array< ::Dynamic> _g1 = _gthis->poppedStack;
HXDLIN(2201)				while((_g < _g1->length)){
HXLINE(2201)					 ::Dynamic i = _g1->__get(_g);
HXDLIN(2201)					_g = (_g + 1);
HXLINE(2202)					if (( (bool)(i->__Field(HX_("r",72,00,00,00),::hx::paccDynamic)) )) {
HXLINE(2202)						return true;
            					}
            				}
            			}
HXLINE(2204)			return false;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_GC_STACKFRAME(&_hx_pos_948055e9f9c336b1_2198_preprocess)
HXDLIN(2198)		 ::hscriptBase::Parser _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(2199)		 ::Dynamic containsTrue =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE(2206)		::String _hx_switch_0 = id;
            		if (  (_hx_switch_0==HX_("else",b9,e4,14,43)) ||  (_hx_switch_0==HX_("elseif",d6,a0,a2,dd)) ){
HXLINE(2219)			if ((this->preprocStack->length > 0)) {
HXLINE(2220)				if (( (bool)(this->preprocStack->__get((this->preprocStack->length - 1))->__Field(HX_("r",72,00,00,00),::hx::paccDynamic)) )) {
HXLINE(2221)					this->preprocStack->__get((this->preprocStack->length - 1))->__SetField(HX_("r",72,00,00,00),false,::hx::paccDynamic);
HXLINE(2222)					this->skipTokens();
HXLINE(2223)					return this->token();
            				}
            				else {
HXLINE(2224)					if ((id == HX_("else",b9,e4,14,43))) {
HXLINE(2225)						if (!(( (bool)(containsTrue()) ))) {
HXLINE(2227)							::Array< ::Dynamic> _hx_tmp = this->poppedStack;
HXDLIN(2227)							_hx_tmp->push(this->preprocStack->pop());
HXLINE(2228)							this->preprocStack->push( ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("r",72,00,00,00),true)));
            						}
HXLINE(2230)						return this->token();
            					}
            					else {
HXLINE(2233)						this->preprocStack->pop();
HXLINE(2234)						 ::hscriptBase::Token t = this->preprocess(HX_("if",dd,5b,00,00));
HXLINE(2235)						return t;
            					}
            				}
            			}
            			else {
HXLINE(2245)				{
HXLINE(2245)					 ::hscriptBase::ErrorDef err = ::hscriptBase::ErrorDef_obj::ECustom((HX_("Unexpected ",0f,99,d1,53) + id));
HXDLIN(2245)					 ::Dynamic pmin = null();
HXDLIN(2245)					 ::Dynamic pmax = null();
HXDLIN(2245)					 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line);
HXDLIN(2245)					if (!(this->resumeErrors)) {
HXLINE(2245)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line)));
            					}
            				}
HXLINE(2246)				return null();
            			}
HXLINE(2219)			goto _hx_goto_136;
            		}
            		if (  (_hx_switch_0==HX_("end",db,03,4d,00)) ){
HXLINE(2237)			if ((this->preprocStack->length > 0)) {
HXLINE(2238)				while((this->poppedStack->length > 0)){
HXLINE(2239)					this->poppedStack->pop();
            				}
HXLINE(2241)				this->preprocStack->pop();
HXLINE(2242)				 ::hscriptBase::Token t = this->token();
HXLINE(2243)				return t;
            			}
            			else {
HXLINE(2245)				{
HXLINE(2245)					 ::hscriptBase::ErrorDef err = ::hscriptBase::ErrorDef_obj::ECustom((HX_("Unexpected ",0f,99,d1,53) + id));
HXDLIN(2245)					 ::Dynamic pmin = null();
HXDLIN(2245)					 ::Dynamic pmax = null();
HXDLIN(2245)					 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line);
HXDLIN(2245)					if (!(this->resumeErrors)) {
HXLINE(2245)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line)));
            					}
            				}
HXLINE(2246)				return null();
            			}
HXLINE(2237)			goto _hx_goto_136;
            		}
            		if (  (_hx_switch_0==HX_("if",dd,5b,00,00)) ){
HXLINE(2208)			 ::Dynamic e = this->parsePreproCond();
HXLINE(2209)			if (this->evalPreproCond(e)) {
HXLINE(2210)				this->preprocStack->push( ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("r",72,00,00,00),true)));
HXLINE(2211)				this->poppedStack->push( ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("r",72,00,00,00),true)));
HXLINE(2212)				 ::hscriptBase::Token t = this->token();
HXLINE(2213)				return t;
            			}
HXLINE(2215)			this->preprocStack->push( ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("r",72,00,00,00),false)));
HXLINE(2216)			this->poppedStack->push( ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("r",72,00,00,00),false)));
HXLINE(2217)			this->skipTokens();
HXLINE(2218)			return this->token();
HXLINE(2207)			goto _hx_goto_136;
            		}
            		/* default */{
HXLINE(2245)			{
HXLINE(2245)				 ::hscriptBase::ErrorDef err = ::hscriptBase::ErrorDef_obj::ECustom((HX_("Unexpected ",0f,99,d1,53) + id));
HXDLIN(2245)				 ::Dynamic pmin = null();
HXDLIN(2245)				 ::Dynamic pmax = null();
HXDLIN(2245)				 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line);
HXDLIN(2245)				if (!(this->resumeErrors)) {
HXLINE(2245)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line)));
            				}
            			}
HXLINE(2246)			return null();
            		}
            		_hx_goto_136:;
HXLINE(2206)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,preprocess,return )

void Parser_obj::skipTokens(){
            	HX_GC_STACKFRAME(&_hx_pos_948055e9f9c336b1_2250_skipTokens)
HXLINE(2251)		int spos = (this->preprocStack->length - 1);
HXLINE(2252)		 ::Dynamic obj = this->preprocStack->__get(spos);
HXLINE(2253)		int pos = this->readPos;
HXLINE(2254)		while(true){
HXLINE(2255)			 ::hscriptBase::Token tk = this->token();
HXLINE(2256)			bool _hx_tmp;
HXDLIN(2256)			if (::hx::IsPointerEq( tk,::hscriptBase::Token_obj::TEof_dyn() )) {
HXLINE(2256)				_hx_tmp = (this->preprocStack->length >= 1);
            			}
            			else {
HXLINE(2256)				_hx_tmp = false;
            			}
HXDLIN(2256)			if (_hx_tmp) {
HXLINE(2257)				 ::hscriptBase::ErrorDef err = ::hscriptBase::ErrorDef_obj::EInvalidPreprocessor(HX_("Unclosed",e5,94,4a,ea));
HXDLIN(2257)				 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,pos,pos,this->origin,this->line);
HXDLIN(2257)				if (!(this->resumeErrors)) {
HXLINE(2257)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,pos,pos,this->origin,this->line)));
            				}
            			}
HXLINE(2258)			if (::hx::IsNotEq( this->preprocStack->__get(spos),obj )) {
HXLINE(2259)				{
HXLINE(2259)					this->tokens->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("t",74,00,00,00),tk)
            						->setFixed(1,HX_("max",a4,0a,53,00),this->tokenMax)
            						->setFixed(2,HX_("min",92,11,53,00),this->tokenMin)));
HXDLIN(2259)					this->tokenMin = this->oldTokenMin;
HXDLIN(2259)					this->tokenMax = this->oldTokenMax;
            				}
HXLINE(2260)				goto _hx_goto_140;
            			}
            		}
            		_hx_goto_140:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,skipTokens,(void))

 ::hscriptBase::Token Parser_obj::tokenComment(::String op,int _hx_char){
            	HX_GC_STACKFRAME(&_hx_pos_948055e9f9c336b1_2265_tokenComment)
HXLINE(2266)		 ::Dynamic c = op.charCodeAt(1);
HXLINE(2267)		::String s = this->input;
HXLINE(2268)		if (::hx::IsEq( c,47 )) {
HXLINE(2269)			while(true){
HXLINE(2269)				bool _hx_tmp;
HXDLIN(2269)				if ((_hx_char != 13)) {
HXLINE(2269)					_hx_tmp = (_hx_char != 10);
            				}
            				else {
HXLINE(2269)					_hx_tmp = false;
            				}
HXDLIN(2269)				if (!(_hx_tmp)) {
HXLINE(2269)					goto _hx_goto_142;
            				}
HXLINE(2270)				_hx_char = this->input.cca(this->readPos++);
HXLINE(2271)				if ((_hx_char == 0)) {
HXLINE(2271)					goto _hx_goto_142;
            				}
            			}
            			_hx_goto_142:;
HXLINE(2273)			this->_hx_char = _hx_char;
HXLINE(2274)			return this->token();
            		}
HXLINE(2276)		if (::hx::IsEq( c,42 )) {
HXLINE(2277)			int old = this->line;
HXLINE(2278)			if ((op == HX_("/**/",a0,0a,31,1f))) {
HXLINE(2279)				this->_hx_char = _hx_char;
HXLINE(2280)				return this->token();
            			}
HXLINE(2282)			while(true){
HXLINE(2283)				while((_hx_char != 42)){
HXLINE(2284)					if ((_hx_char == 10)) {
HXLINE(2284)						this->line++;
            					}
HXLINE(2285)					_hx_char = this->input.cca(this->readPos++);
HXLINE(2286)					if ((_hx_char == 0)) {
HXLINE(2287)						this->line = old;
HXLINE(2288)						{
HXLINE(2288)							 ::hscriptBase::ErrorDef err = ::hscriptBase::ErrorDef_obj::EUnterminatedComment_dyn();
HXDLIN(2288)							 ::Dynamic pmin = this->tokenMin;
HXDLIN(2288)							 ::Dynamic pmax = this->tokenMin;
HXDLIN(2288)							 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line);
HXDLIN(2288)							if (!(this->resumeErrors)) {
HXLINE(2288)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line)));
            							}
            						}
HXLINE(2289)						goto _hx_goto_144;
            					}
            				}
            				_hx_goto_144:;
HXLINE(2292)				_hx_char = this->input.cca(this->readPos++);
HXLINE(2293)				if ((_hx_char == 0)) {
HXLINE(2294)					this->line = old;
HXLINE(2295)					{
HXLINE(2295)						 ::hscriptBase::ErrorDef err = ::hscriptBase::ErrorDef_obj::EUnterminatedComment_dyn();
HXDLIN(2295)						 ::Dynamic pmin = this->tokenMin;
HXDLIN(2295)						 ::Dynamic pmax = this->tokenMin;
HXDLIN(2295)						 ::hscriptBase::Error e =  ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line);
HXDLIN(2295)						if (!(this->resumeErrors)) {
HXLINE(2295)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hscriptBase::Error_obj::__alloc( HX_CTX ,err,( (int)(pmin) ),( (int)(pmax) ),this->origin,this->line)));
            						}
            					}
HXLINE(2296)					goto _hx_goto_143;
            				}
HXLINE(2298)				if ((_hx_char == 47)) {
HXLINE(2299)					goto _hx_goto_143;
            				}
            			}
            			_hx_goto_143:;
HXLINE(2301)			return this->token();
            		}
HXLINE(2303)		this->_hx_char = _hx_char;
HXLINE(2304)		return ::hscriptBase::Token_obj::TOp(op);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,tokenComment,return )

::String Parser_obj::constString( ::hscriptBase::Const c){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_2308_constString)
HXDLIN(2308)		switch((int)(c->_hx_getIndex())){
            			case (int)0: {
HXLINE(2309)				int v = c->_hx_getInt(0);
HXDLIN(2309)				return ::Std_obj::string(v);
            			}
            			break;
            			case (int)1: {
HXLINE(2310)				Float f = c->_hx_getFloat(0);
HXDLIN(2310)				return ::Std_obj::string(f);
            			}
            			break;
            			case (int)2: {
HXLINE(2311)				 ::Dynamic _g = c->_hx_getObject(1);
HXDLIN(2311)				::String s = c->_hx_getString(0);
HXDLIN(2311)				return s;
            			}
            			break;
            		}
HXLINE(2308)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,constString,return )

::String Parser_obj::tokenString( ::hscriptBase::Token t){
            	HX_STACKFRAME(&_hx_pos_948055e9f9c336b1_2319_tokenString)
HXDLIN(2319)		switch((int)(t->_hx_getIndex())){
            			case (int)0: {
HXLINE(2320)				return HX_("<eof>",3e,ee,21,cf);
            			}
            			break;
            			case (int)1: {
HXLINE(2321)				 ::hscriptBase::Const c = t->_hx_getObject(0).StaticCast<  ::hscriptBase::Const >();
HXDLIN(2321)				return this->constString(c);
            			}
            			break;
            			case (int)2: {
HXLINE(2322)				::String s = t->_hx_getString(0);
HXDLIN(2322)				return s;
            			}
            			break;
            			case (int)3: {
HXLINE(2323)				::String s = t->_hx_getString(0);
HXDLIN(2323)				return s;
            			}
            			break;
            			case (int)4: {
HXLINE(2324)				return HX_("(",28,00,00,00);
            			}
            			break;
            			case (int)5: {
HXLINE(2325)				return HX_(")",29,00,00,00);
            			}
            			break;
            			case (int)6: {
HXLINE(2326)				return HX_("{",7b,00,00,00);
            			}
            			break;
            			case (int)7: {
HXLINE(2327)				return HX_("}",7d,00,00,00);
            			}
            			break;
            			case (int)8: {
HXLINE(2328)				return HX_(".",2e,00,00,00);
            			}
            			break;
            			case (int)9: {
HXLINE(2329)				return HX_(",",2c,00,00,00);
            			}
            			break;
            			case (int)10: {
HXLINE(2330)				return HX_(";",3b,00,00,00);
            			}
            			break;
            			case (int)11: {
HXLINE(2337)				return null();
            			}
            			break;
            			case (int)12: {
HXLINE(2331)				return HX_("[",5b,00,00,00);
            			}
            			break;
            			case (int)13: {
HXLINE(2332)				return HX_("]",5d,00,00,00);
            			}
            			break;
            			case (int)14: {
HXLINE(2333)				return HX_("?",3f,00,00,00);
            			}
            			break;
            			case (int)15: {
HXLINE(2334)				return HX_(":",3a,00,00,00);
            			}
            			break;
            			case (int)16: {
HXLINE(2335)				::String id = t->_hx_getString(0);
HXDLIN(2335)				return (HX_("@",40,00,00,00) + id);
            			}
            			break;
            			case (int)17: {
HXLINE(2336)				::String id = t->_hx_getString(0);
HXDLIN(2336)				return (HX_("#",23,00,00,00) + id);
            			}
            			break;
            		}
HXLINE(2319)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,tokenString,return )


::hx::ObjectPtr< Parser_obj > Parser_obj::__new() {
	::hx::ObjectPtr< Parser_obj > __this = new Parser_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Parser_obj > Parser_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Parser_obj *__this = (Parser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Parser_obj), true, "hscriptBase.Parser"));
	*(void **)__this = Parser_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Parser_obj::Parser_obj()
{
}

void Parser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Parser);
	HX_MARK_MEMBER_NAME(line,"line");
	HX_MARK_MEMBER_NAME(opChars,"opChars");
	HX_MARK_MEMBER_NAME(identChars,"identChars");
	HX_MARK_MEMBER_NAME(opPriority,"opPriority");
	HX_MARK_MEMBER_NAME(opRightAssoc,"opRightAssoc");
	HX_MARK_MEMBER_NAME(script,"script");
	HX_MARK_MEMBER_NAME(packaged,"packaged");
	HX_MARK_MEMBER_NAME(allowJSON,"allowJSON");
	HX_MARK_MEMBER_NAME(allowTypes,"allowTypes");
	HX_MARK_MEMBER_NAME(allowMetadata,"allowMetadata");
	HX_MARK_MEMBER_NAME(resumeErrors,"resumeErrors");
	HX_MARK_MEMBER_NAME(interp,"interp");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(readPos,"readPos");
	HX_MARK_MEMBER_NAME(_hx_char,"char");
	HX_MARK_MEMBER_NAME(ops,"ops");
	HX_MARK_MEMBER_NAME(idents,"idents");
	HX_MARK_MEMBER_NAME(uid,"uid");
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(tokenMin,"tokenMin");
	HX_MARK_MEMBER_NAME(tokenMax,"tokenMax");
	HX_MARK_MEMBER_NAME(oldTokenMin,"oldTokenMin");
	HX_MARK_MEMBER_NAME(oldTokenMax,"oldTokenMax");
	HX_MARK_MEMBER_NAME(tokens,"tokens");
	HX_MARK_MEMBER_NAME(preprocStack,"preprocStack");
	HX_MARK_MEMBER_NAME(poppedStack,"poppedStack");
	HX_MARK_END_CLASS();
}

void Parser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(line,"line");
	HX_VISIT_MEMBER_NAME(opChars,"opChars");
	HX_VISIT_MEMBER_NAME(identChars,"identChars");
	HX_VISIT_MEMBER_NAME(opPriority,"opPriority");
	HX_VISIT_MEMBER_NAME(opRightAssoc,"opRightAssoc");
	HX_VISIT_MEMBER_NAME(script,"script");
	HX_VISIT_MEMBER_NAME(packaged,"packaged");
	HX_VISIT_MEMBER_NAME(allowJSON,"allowJSON");
	HX_VISIT_MEMBER_NAME(allowTypes,"allowTypes");
	HX_VISIT_MEMBER_NAME(allowMetadata,"allowMetadata");
	HX_VISIT_MEMBER_NAME(resumeErrors,"resumeErrors");
	HX_VISIT_MEMBER_NAME(interp,"interp");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(readPos,"readPos");
	HX_VISIT_MEMBER_NAME(_hx_char,"char");
	HX_VISIT_MEMBER_NAME(ops,"ops");
	HX_VISIT_MEMBER_NAME(idents,"idents");
	HX_VISIT_MEMBER_NAME(uid,"uid");
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(tokenMin,"tokenMin");
	HX_VISIT_MEMBER_NAME(tokenMax,"tokenMax");
	HX_VISIT_MEMBER_NAME(oldTokenMin,"oldTokenMin");
	HX_VISIT_MEMBER_NAME(oldTokenMax,"oldTokenMax");
	HX_VISIT_MEMBER_NAME(tokens,"tokens");
	HX_VISIT_MEMBER_NAME(preprocStack,"preprocStack");
	HX_VISIT_MEMBER_NAME(poppedStack,"poppedStack");
}

::hx::Val Parser_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"mk") ) { return ::hx::Val( mk_dyn() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ops") ) { return ::hx::Val( ops ); }
		if (HX_FIELD_EQ(inName,"uid") ) { return ::hx::Val( uid ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return ::hx::Val( line ); }
		if (HX_FIELD_EQ(inName,"char") ) { return ::hx::Val( _hx_char ); }
		if (HX_FIELD_EQ(inName,"push") ) { return ::hx::Val( push_dyn() ); }
		if (HX_FIELD_EQ(inName,"expr") ) { return ::hx::Val( expr_dyn() ); }
		if (HX_FIELD_EQ(inName,"pmin") ) { return ::hx::Val( pmin_dyn() ); }
		if (HX_FIELD_EQ(inName,"pmax") ) { return ::hx::Val( pmax_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return ::hx::Val( input ); }
		if (HX_FIELD_EQ(inName,"error") ) { return ::hx::Val( error_dyn() ); }
		if (HX_FIELD_EQ(inName,"maybe") ) { return ::hx::Val( maybe_dyn() ); }
		if (HX_FIELD_EQ(inName,"token") ) { return ::hx::Val( token_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"script") ) { return ::hx::Val( script ); }
		if (HX_FIELD_EQ(inName,"interp") ) { return ::hx::Val( interp ); }
		if (HX_FIELD_EQ(inName,"idents") ) { return ::hx::Val( idents ); }
		if (HX_FIELD_EQ(inName,"origin") ) { return ::hx::Val( origin ); }
		if (HX_FIELD_EQ(inName,"tokens") ) { return ::hx::Val( tokens ); }
		if (HX_FIELD_EQ(inName,"ensure") ) { return ::hx::Val( ensure_dyn() ); }
		if (HX_FIELD_EQ(inName,"_token") ) { return ::hx::Val( _token_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opChars") ) { return ::hx::Val( opChars ); }
		if (HX_FIELD_EQ(inName,"readPos") ) { return ::hx::Val( readPos ); }
		if (HX_FIELD_EQ(inName,"isBlock") ) { return ::hx::Val( isBlock_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"packaged") ) { return ::hx::Val( packaged ); }
		if (HX_FIELD_EQ(inName,"setIntrp") ) { return ::hx::Val( setIntrp_dyn() ); }
		if (HX_FIELD_EQ(inName,"tokenMin") ) { return ::hx::Val( tokenMin ); }
		if (HX_FIELD_EQ(inName,"tokenMax") ) { return ::hx::Val( tokenMax ); }
		if (HX_FIELD_EQ(inName,"getIdent") ) { return ::hx::Val( getIdent_dyn() ); }
		if (HX_FIELD_EQ(inName,"mapCompr") ) { return ::hx::Val( mapCompr_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeUnop") ) { return ::hx::Val( makeUnop_dyn() ); }
		if (HX_FIELD_EQ(inName,"readChar") ) { return ::hx::Val( readChar_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allowJSON") ) { return ::hx::Val( allowJSON ); }
		if (HX_FIELD_EQ(inName,"parseExpr") ) { return ::hx::Val( parseExpr_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeBinop") ) { return ::hx::Val( makeBinop_dyn() ); }
		if (HX_FIELD_EQ(inName,"parsePath") ) { return ::hx::Val( parsePath_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseType") ) { return ::hx::Val( parseType_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"identChars") ) { return ::hx::Val( identChars ); }
		if (HX_FIELD_EQ(inName,"opPriority") ) { return ::hx::Val( opPriority ); }
		if (HX_FIELD_EQ(inName,"allowTypes") ) { return ::hx::Val( allowTypes ); }
		if (HX_FIELD_EQ(inName,"initParser") ) { return ::hx::Val( initParser_dyn() ); }
		if (HX_FIELD_EQ(inName,"unexpected") ) { return ::hx::Val( unexpected_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseField") ) { return ::hx::Val( parseField_dyn() ); }
		if (HX_FIELD_EQ(inName,"readString") ) { return ::hx::Val( readString_dyn() ); }
		if (HX_FIELD_EQ(inName,"preprocess") ) { return ::hx::Val( preprocess_dyn() ); }
		if (HX_FIELD_EQ(inName,"skipTokens") ) { return ::hx::Val( skipTokens_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"oldTokenMin") ) { return ::hx::Val( oldTokenMin ); }
		if (HX_FIELD_EQ(inName,"oldTokenMax") ) { return ::hx::Val( oldTokenMax ); }
		if (HX_FIELD_EQ(inName,"invalidChar") ) { return ::hx::Val( invalidChar_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseString") ) { return ::hx::Val( parseString_dyn() ); }
		if (HX_FIELD_EQ(inName,"ensureToken") ) { return ::hx::Val( ensureToken_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseObject") ) { return ::hx::Val( parseObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"interpolate") ) { return ::hx::Val( interpolate_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseLambda") ) { return ::hx::Val( parseLambda_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseModule") ) { return ::hx::Val( parseModule_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseParams") ) { return ::hx::Val( parseParams_dyn() ); }
		if (HX_FIELD_EQ(inName,"poppedStack") ) { return ::hx::Val( poppedStack ); }
		if (HX_FIELD_EQ(inName,"constString") ) { return ::hx::Val( constString_dyn() ); }
		if (HX_FIELD_EQ(inName,"tokenString") ) { return ::hx::Val( tokenString_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"opRightAssoc") ) { return ::hx::Val( opRightAssoc ); }
		if (HX_FIELD_EQ(inName,"resumeErrors") ) { return ::hx::Val( resumeErrors ); }
		if (HX_FIELD_EQ(inName,"preprocStack") ) { return ::hx::Val( preprocStack ); }
		if (HX_FIELD_EQ(inName,"tokenComment") ) { return ::hx::Val( tokenComment_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"allowMetadata") ) { return ::hx::Val( allowMetadata ); }
		if (HX_FIELD_EQ(inName,"parseFullExpr") ) { return ::hx::Val( parseFullExpr_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseMetaArgs") ) { return ::hx::Val( parseMetaArgs_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseExprNext") ) { return ::hx::Val( parseExprNext_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseTypeNext") ) { return ::hx::Val( parseTypeNext_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseExprList") ) { return ::hx::Val( parseExprList_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseMetadata") ) { return ::hx::Val( parseMetadata_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"parseStructure") ) { return ::hx::Val( parseStructure_dyn() ); }
		if (HX_FIELD_EQ(inName,"evalPreproCond") ) { return ::hx::Val( evalPreproCond_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"parseModuleDecl") ) { return ::hx::Val( parseModuleDecl_dyn() ); }
		if (HX_FIELD_EQ(inName,"parsePreproCond") ) { return ::hx::Val( parsePreproCond_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"parseFunctionArgs") ) { return ::hx::Val( parseFunctionArgs_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseFunctionDecl") ) { return ::hx::Val( parseFunctionDecl_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Parser_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ops") ) { ops=inValue.Cast< ::Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uid") ) { uid=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { line=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"char") ) { _hx_char=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"script") ) { script=inValue.Cast<  ::tea::SScript >(); return inValue; }
		if (HX_FIELD_EQ(inName,"interp") ) { interp=inValue.Cast<  ::hscriptBase::Interp >(); return inValue; }
		if (HX_FIELD_EQ(inName,"idents") ) { idents=inValue.Cast< ::Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tokens") ) { tokens=inValue.Cast<  ::haxe::ds::List >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opChars") ) { opChars=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"readPos") ) { readPos=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"packaged") ) { packaged=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tokenMin") ) { tokenMin=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tokenMax") ) { tokenMax=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allowJSON") ) { allowJSON=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"identChars") ) { identChars=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"opPriority") ) { opPriority=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowTypes") ) { allowTypes=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"oldTokenMin") ) { oldTokenMin=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oldTokenMax") ) { oldTokenMax=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"poppedStack") ) { poppedStack=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"opRightAssoc") ) { opRightAssoc=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resumeErrors") ) { resumeErrors=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"preprocStack") ) { preprocStack=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"allowMetadata") ) { allowMetadata=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Parser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("line",f4,17,b3,47));
	outFields->push(HX_("opChars",fc,f3,a7,a8));
	outFields->push(HX_("identChars",cd,23,3f,ee));
	outFields->push(HX_("opPriority",a5,21,d8,3e));
	outFields->push(HX_("opRightAssoc",9a,d1,fe,02));
	outFields->push(HX_("script",0b,4e,60,47));
	outFields->push(HX_("packaged",1e,ea,54,39));
	outFields->push(HX_("allowJSON",31,27,44,b1));
	outFields->push(HX_("allowTypes",30,2b,97,45));
	outFields->push(HX_("allowMetadata",18,79,d4,10));
	outFields->push(HX_("resumeErrors",38,61,37,31));
	outFields->push(HX_("interp",d4,79,86,9e));
	outFields->push(HX_("input",0a,c4,1d,be));
	outFields->push(HX_("readPos",de,03,cf,02));
	outFields->push(HX_("char",d6,5e,bf,41));
	outFields->push(HX_("ops",32,9c,54,00));
	outFields->push(HX_("idents",83,4f,a1,d2));
	outFields->push(HX_("uid",90,23,59,00));
	outFields->push(HX_("origin",e6,19,01,4b));
	outFields->push(HX_("tokenMin",19,a8,42,2b));
	outFields->push(HX_("tokenMax",2b,a1,42,2b));
	outFields->push(HX_("oldTokenMin",e0,7b,1c,6b));
	outFields->push(HX_("oldTokenMax",f2,74,1c,6b));
	outFields->push(HX_("tokens",5a,17,e7,91));
	outFields->push(HX_("preprocStack",4f,d3,9d,7a));
	outFields->push(HX_("poppedStack",8a,8a,29,8c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Parser_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Parser_obj,line),HX_("line",f4,17,b3,47)},
	{::hx::fsString,(int)offsetof(Parser_obj,opChars),HX_("opChars",fc,f3,a7,a8)},
	{::hx::fsString,(int)offsetof(Parser_obj,identChars),HX_("identChars",cd,23,3f,ee)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Parser_obj,opPriority),HX_("opPriority",a5,21,d8,3e)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Parser_obj,opRightAssoc),HX_("opRightAssoc",9a,d1,fe,02)},
	{::hx::fsObject /*  ::tea::SScript */ ,(int)offsetof(Parser_obj,script),HX_("script",0b,4e,60,47)},
	{::hx::fsBool,(int)offsetof(Parser_obj,packaged),HX_("packaged",1e,ea,54,39)},
	{::hx::fsBool,(int)offsetof(Parser_obj,allowJSON),HX_("allowJSON",31,27,44,b1)},
	{::hx::fsBool,(int)offsetof(Parser_obj,allowTypes),HX_("allowTypes",30,2b,97,45)},
	{::hx::fsBool,(int)offsetof(Parser_obj,allowMetadata),HX_("allowMetadata",18,79,d4,10)},
	{::hx::fsBool,(int)offsetof(Parser_obj,resumeErrors),HX_("resumeErrors",38,61,37,31)},
	{::hx::fsObject /*  ::hscriptBase::Interp */ ,(int)offsetof(Parser_obj,interp),HX_("interp",d4,79,86,9e)},
	{::hx::fsString,(int)offsetof(Parser_obj,input),HX_("input",0a,c4,1d,be)},
	{::hx::fsInt,(int)offsetof(Parser_obj,readPos),HX_("readPos",de,03,cf,02)},
	{::hx::fsInt,(int)offsetof(Parser_obj,_hx_char),HX_("char",d6,5e,bf,41)},
	{::hx::fsObject /* ::Array< bool > */ ,(int)offsetof(Parser_obj,ops),HX_("ops",32,9c,54,00)},
	{::hx::fsObject /* ::Array< bool > */ ,(int)offsetof(Parser_obj,idents),HX_("idents",83,4f,a1,d2)},
	{::hx::fsInt,(int)offsetof(Parser_obj,uid),HX_("uid",90,23,59,00)},
	{::hx::fsString,(int)offsetof(Parser_obj,origin),HX_("origin",e6,19,01,4b)},
	{::hx::fsInt,(int)offsetof(Parser_obj,tokenMin),HX_("tokenMin",19,a8,42,2b)},
	{::hx::fsInt,(int)offsetof(Parser_obj,tokenMax),HX_("tokenMax",2b,a1,42,2b)},
	{::hx::fsInt,(int)offsetof(Parser_obj,oldTokenMin),HX_("oldTokenMin",e0,7b,1c,6b)},
	{::hx::fsInt,(int)offsetof(Parser_obj,oldTokenMax),HX_("oldTokenMax",f2,74,1c,6b)},
	{::hx::fsObject /*  ::haxe::ds::List */ ,(int)offsetof(Parser_obj,tokens),HX_("tokens",5a,17,e7,91)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Parser_obj,preprocStack),HX_("preprocStack",4f,d3,9d,7a)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Parser_obj,poppedStack),HX_("poppedStack",8a,8a,29,8c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Parser_obj_sStaticStorageInfo = 0;
#endif

static ::String Parser_obj_sMemberFields[] = {
	HX_("line",f4,17,b3,47),
	HX_("opChars",fc,f3,a7,a8),
	HX_("identChars",cd,23,3f,ee),
	HX_("opPriority",a5,21,d8,3e),
	HX_("opRightAssoc",9a,d1,fe,02),
	HX_("script",0b,4e,60,47),
	HX_("packaged",1e,ea,54,39),
	HX_("allowJSON",31,27,44,b1),
	HX_("allowTypes",30,2b,97,45),
	HX_("allowMetadata",18,79,d4,10),
	HX_("resumeErrors",38,61,37,31),
	HX_("interp",d4,79,86,9e),
	HX_("setIntrp",6b,33,55,cc),
	HX_("input",0a,c4,1d,be),
	HX_("readPos",de,03,cf,02),
	HX_("char",d6,5e,bf,41),
	HX_("ops",32,9c,54,00),
	HX_("idents",83,4f,a1,d2),
	HX_("uid",90,23,59,00),
	HX_("origin",e6,19,01,4b),
	HX_("tokenMin",19,a8,42,2b),
	HX_("tokenMax",2b,a1,42,2b),
	HX_("oldTokenMin",e0,7b,1c,6b),
	HX_("oldTokenMax",f2,74,1c,6b),
	HX_("tokens",5a,17,e7,91),
	HX_("error",c8,cb,29,73),
	HX_("invalidChar",6d,ad,ce,a9),
	HX_("initParser",0f,f8,cd,f1),
	HX_("parseString",64,d5,6c,8c),
	HX_("unexpected",d1,15,f4,c5),
	HX_("push",da,11,61,4a),
	HX_("ensure",be,f5,7b,04),
	HX_("ensureToken",5b,6c,33,ec),
	HX_("maybe",a8,13,27,03),
	HX_("getIdent",7a,52,50,17),
	HX_("expr",35,fd,1d,43),
	HX_("pmin",22,f7,5a,4a),
	HX_("pmax",34,f0,5a,4a),
	HX_("mk",5e,5f,00,00),
	HX_("isBlock",03,19,82,51),
	HX_("parseFullExpr",b7,bd,60,9c),
	HX_("parseObject",52,2b,7c,90),
	HX_("interpolate",c1,d4,32,1f),
	HX_("parseExpr",08,4f,c4,ca),
	HX_("parseLambda",9a,df,fc,cb),
	HX_("parseMetaArgs",15,82,33,6e),
	HX_("mapCompr",47,a4,9f,c1),
	HX_("makeUnop",c8,c4,47,44),
	HX_("makeBinop",da,90,98,86),
	HX_("parseStructure",80,85,70,8b),
	HX_("parseExprNext",1b,24,a8,f3),
	HX_("parseFunctionArgs",68,ad,48,04),
	HX_("parseFunctionDecl",75,70,3a,06),
	HX_("parsePath",78,37,f8,d1),
	HX_("parseType",8d,44,af,d4),
	HX_("parseTypeNext",20,c0,fc,fa),
	HX_("parseExprList",86,bb,58,f2),
	HX_("parseModule",3f,e1,0f,3c),
	HX_("parseMetadata",c2,1e,49,85),
	HX_("parseParams",d9,a7,b7,68),
	HX_("parseModuleDecl",49,69,92,8b),
	HX_("parseField",87,db,74,2a),
	HX_("readChar",4c,39,b7,69),
	HX_("readString",c7,0c,ac,0a),
	HX_("token",f9,82,2b,14),
	HX_("_token",3a,ca,12,10),
	HX_("preprocStack",4f,d3,9d,7a),
	HX_("parsePreproCond",ff,8c,11,d6),
	HX_("evalPreproCond",a8,25,52,b0),
	HX_("poppedStack",8a,8a,29,8c),
	HX_("preprocess",ac,dc,46,92),
	HX_("skipTokens",39,0b,eb,f9),
	HX_("tokenComment",66,60,fb,25),
	HX_("constString",94,42,30,a9),
	HX_("tokenString",aa,20,de,a4),
	::String(null()) };

::hx::Class Parser_obj::__mClass;

void Parser_obj::__register()
{
	Parser_obj _hx_dummy;
	Parser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hscriptBase.Parser",09,de,b9,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Parser_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Parser_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Parser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Parser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hscriptBase
