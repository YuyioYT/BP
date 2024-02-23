#ifndef INCLUDED_states_CharacterForm
#define INCLUDED_states_CharacterForm

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_3ced9d5735fd4850_56_new)
HX_DECLARE_CLASS1(states,CharacterForm)

namespace states{


class HXCPP_CLASS_ATTRIBUTES CharacterForm_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CharacterForm_obj OBJ_;
		CharacterForm_obj();

	public:
		enum { _hx_ClassId = 0x47951907 };

		void __construct(::String name,::String polishedName,::Array< Float > noteMs,::String __o_noteType);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.CharacterForm")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.CharacterForm"); }

		inline static ::hx::ObjectPtr< CharacterForm_obj > __new(::String name,::String polishedName,::Array< Float > noteMs,::String __o_noteType) {
			::hx::ObjectPtr< CharacterForm_obj > __this = new CharacterForm_obj();
			__this->__construct(name,polishedName,noteMs,__o_noteType);
			return __this;
		}

		inline static ::hx::ObjectPtr< CharacterForm_obj > __alloc(::hx::Ctx *_hx_ctx,::String name,::String polishedName,::Array< Float > noteMs,::String __o_noteType) {
			CharacterForm_obj *__this = (CharacterForm_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CharacterForm_obj), true, "states.CharacterForm"));
			*(void **)__this = CharacterForm_obj::_hx_vtable;
{
            		::String noteType = __o_noteType;
            		if (::hx::IsNull(__o_noteType)) noteType = HX_("normal",27,72,69,30);
            	HX_STACKFRAME(&_hx_pos_3ced9d5735fd4850_56_new)
HXLINE(  57)		( ( ::states::CharacterForm)(__this) )->name = name;
HXLINE(  58)		( ( ::states::CharacterForm)(__this) )->polishedName = polishedName;
HXLINE(  59)		( ( ::states::CharacterForm)(__this) )->noteType = noteType;
HXLINE(  60)		( ( ::states::CharacterForm)(__this) )->noteMs = noteMs;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CharacterForm_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CharacterForm",6d,41,9d,84); }

		::String name;
		::String polishedName;
		::String noteType;
		::Array< Float > noteMs;
};

} // end namespace states

#endif /* INCLUDED_states_CharacterForm */ 
