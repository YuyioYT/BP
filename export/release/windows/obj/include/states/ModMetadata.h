#ifndef INCLUDED_states_ModMetadata
#define INCLUDED_states_ModMetadata

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,Alphabet)
HX_DECLARE_CLASS1(objects,AttachedSprite)
HX_DECLARE_CLASS1(states,ModMetadata)

namespace states{


class HXCPP_CLASS_ATTRIBUTES ModMetadata_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ModMetadata_obj OBJ_;
		ModMetadata_obj();

	public:
		enum { _hx_ClassId = 0x7f66b42f };

		void __construct(::String folder);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.ModMetadata")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.ModMetadata"); }
		static ::hx::ObjectPtr< ModMetadata_obj > __new(::String folder);
		static ::hx::ObjectPtr< ModMetadata_obj > __alloc(::hx::Ctx *_hx_ctx,::String folder);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ModMetadata_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ModMetadata",31,e4,48,a3); }

		::String folder;
		::String name;
		::String description;
		int color;
		bool restart;
		 ::objects::Alphabet alphabet;
		 ::objects::AttachedSprite icon;
};

} // end namespace states

#endif /* INCLUDED_states_ModMetadata */ 
