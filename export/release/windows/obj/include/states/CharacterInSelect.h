#ifndef INCLUDED_states_CharacterInSelect
#define INCLUDED_states_CharacterInSelect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(states,CharacterForm)
HX_DECLARE_CLASS1(states,CharacterInSelect)

namespace states{


class HXCPP_CLASS_ATTRIBUTES CharacterInSelect_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CharacterInSelect_obj OBJ_;
		CharacterInSelect_obj();

	public:
		enum { _hx_ClassId = 0x0bd0ba04 };

		void __construct(::String name,::Array< Float > noteMs,::Array< ::Dynamic> forms);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.CharacterInSelect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.CharacterInSelect"); }
		static ::hx::ObjectPtr< CharacterInSelect_obj > __new(::String name,::Array< Float > noteMs,::Array< ::Dynamic> forms);
		static ::hx::ObjectPtr< CharacterInSelect_obj > __alloc(::hx::Ctx *_hx_ctx,::String name,::Array< Float > noteMs,::Array< ::Dynamic> forms);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CharacterInSelect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CharacterInSelect",6a,0d,ec,2e); }

		::String name;
		::Array< Float > noteMs;
		::Array< ::Dynamic> forms;
};

} // end namespace states

#endif /* INCLUDED_states_CharacterInSelect */ 
