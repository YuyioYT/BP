#ifndef INCLUDED_hscriptBase_Parser
#define INCLUDED_hscriptBase_Parser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,List)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(hscriptBase,CType)
HX_DECLARE_CLASS1(hscriptBase,Const)
HX_DECLARE_CLASS1(hscriptBase,ErrorDef)
HX_DECLARE_CLASS1(hscriptBase,ExprDef)
HX_DECLARE_CLASS1(hscriptBase,Interp)
HX_DECLARE_CLASS1(hscriptBase,ModuleDecl)
HX_DECLARE_CLASS1(hscriptBase,Parser)
HX_DECLARE_CLASS1(hscriptBase,Token)
HX_DECLARE_CLASS1(tea,SScript)

namespace hscriptBase{


class HXCPP_CLASS_ATTRIBUTES Parser_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Parser_obj OBJ_;
		Parser_obj();

	public:
		enum { _hx_ClassId = 0x40ba8d5b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hscriptBase.Parser")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hscriptBase.Parser"); }
		static ::hx::ObjectPtr< Parser_obj > __new();
		static ::hx::ObjectPtr< Parser_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Parser_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Parser",ff,10,1d,22); }

		int line;
		::String opChars;
		::String identChars;
		 ::haxe::ds::StringMap opPriority;
		 ::haxe::ds::StringMap opRightAssoc;
		 ::tea::SScript script;
		bool packaged;
		bool allowJSON;
		bool allowTypes;
		bool allowMetadata;
		bool resumeErrors;
		 ::hscriptBase::Interp interp;
		 ::hscriptBase::Interp setIntrp( ::hscriptBase::Interp interp);
		::Dynamic setIntrp_dyn();

		::String input;
		int readPos;
		int _hx_char;
		::Array< bool > ops;
		::Array< bool > idents;
		int uid;
		::String origin;
		int tokenMin;
		int tokenMax;
		int oldTokenMin;
		int oldTokenMax;
		 ::haxe::ds::List tokens;
		void error( ::hscriptBase::ErrorDef err, ::Dynamic pmin, ::Dynamic pmax);
		::Dynamic error_dyn();

		void invalidChar(int c);
		::Dynamic invalidChar_dyn();

		void initParser(::String origin);
		::Dynamic initParser_dyn();

		 ::Dynamic parseString(::String s,::String origin);
		::Dynamic parseString_dyn();

		 ::Dynamic unexpected( ::hscriptBase::Token tk);
		::Dynamic unexpected_dyn();

		void push( ::hscriptBase::Token tk);
		::Dynamic push_dyn();

		void ensure( ::hscriptBase::Token tk);
		::Dynamic ensure_dyn();

		void ensureToken( ::hscriptBase::Token tk);
		::Dynamic ensureToken_dyn();

		bool maybe( ::hscriptBase::Token tk);
		::Dynamic maybe_dyn();

		::String getIdent( ::Dynamic thr);
		::Dynamic getIdent_dyn();

		 ::hscriptBase::ExprDef expr( ::Dynamic e);
		::Dynamic expr_dyn();

		int pmin( ::Dynamic e);
		::Dynamic pmin_dyn();

		int pmax( ::Dynamic e);
		::Dynamic pmax_dyn();

		 ::Dynamic mk( ::hscriptBase::ExprDef e, ::Dynamic pmin, ::Dynamic pmax);
		::Dynamic mk_dyn();

		bool isBlock( ::Dynamic e);
		::Dynamic isBlock_dyn();

		void parseFullExpr(::Array< ::Dynamic> exprs);
		::Dynamic parseFullExpr_dyn();

		 ::Dynamic parseObject( ::Dynamic p1);
		::Dynamic parseObject_dyn();

		 ::Dynamic interpolate(::String s);
		::Dynamic interpolate_dyn();

		 ::Dynamic parseExpr();
		::Dynamic parseExpr_dyn();

		 ::Dynamic parseLambda(::Array< ::Dynamic> args, ::Dynamic pmin);
		::Dynamic parseLambda_dyn();

		::Array< ::Dynamic> parseMetaArgs();
		::Dynamic parseMetaArgs_dyn();

		 ::Dynamic mapCompr(::String tmp, ::Dynamic e);
		::Dynamic mapCompr_dyn();

		 ::Dynamic makeUnop(::String op, ::Dynamic e);
		::Dynamic makeUnop_dyn();

		 ::Dynamic makeBinop(::String op, ::Dynamic e1, ::Dynamic e);
		::Dynamic makeBinop_dyn();

		 ::Dynamic parseStructure(::String id, ::Dynamic t, ::Dynamic d);
		::Dynamic parseStructure_dyn();

		 ::Dynamic parseExprNext( ::Dynamic e1);
		::Dynamic parseExprNext_dyn();

		::Array< ::Dynamic> parseFunctionArgs();
		::Dynamic parseFunctionArgs_dyn();

		 ::Dynamic parseFunctionDecl();
		::Dynamic parseFunctionDecl_dyn();

		::Array< ::String > parsePath();
		::Dynamic parsePath_dyn();

		 ::hscriptBase::CType parseType();
		::Dynamic parseType_dyn();

		 ::hscriptBase::CType parseTypeNext( ::hscriptBase::CType t);
		::Dynamic parseTypeNext_dyn();

		::Array< ::Dynamic> parseExprList( ::hscriptBase::Token etk);
		::Dynamic parseExprList_dyn();

		::Array< ::Dynamic> parseModule(::String content,::String origin);
		::Dynamic parseModule_dyn();

		::Array< ::Dynamic> parseMetadata();
		::Dynamic parseMetadata_dyn();

		 ::Dynamic parseParams();
		::Dynamic parseParams_dyn();

		 ::hscriptBase::ModuleDecl parseModuleDecl();
		::Dynamic parseModuleDecl_dyn();

		 ::Dynamic parseField();
		::Dynamic parseField_dyn();

		int readChar();
		::Dynamic readChar_dyn();

		::String readString(int until);
		::Dynamic readString_dyn();

		 ::hscriptBase::Token token();
		::Dynamic token_dyn();

		 ::hscriptBase::Token _token();
		::Dynamic _token_dyn();

		::Array< ::Dynamic> preprocStack;
		 ::Dynamic parsePreproCond();
		::Dynamic parsePreproCond_dyn();

		bool evalPreproCond( ::Dynamic e);
		::Dynamic evalPreproCond_dyn();

		::Array< ::Dynamic> poppedStack;
		 ::hscriptBase::Token preprocess(::String id);
		::Dynamic preprocess_dyn();

		void skipTokens();
		::Dynamic skipTokens_dyn();

		 ::hscriptBase::Token tokenComment(::String op,int _hx_char);
		::Dynamic tokenComment_dyn();

		::String constString( ::hscriptBase::Const c);
		::Dynamic constString_dyn();

		::String tokenString( ::hscriptBase::Token t);
		::Dynamic tokenString_dyn();

};

} // end namespace hscriptBase

#endif /* INCLUDED_hscriptBase_Parser */ 
