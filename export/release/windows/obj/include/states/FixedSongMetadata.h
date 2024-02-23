#ifndef INCLUDED_states_FixedSongMetadata
#define INCLUDED_states_FixedSongMetadata

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(states,FixedSongMetadata)

namespace states{


class HXCPP_CLASS_ATTRIBUTES FixedSongMetadata_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FixedSongMetadata_obj OBJ_;
		FixedSongMetadata_obj();

	public:
		enum { _hx_ClassId = 0x0c443472 };

		void __construct(::String song,int week,::String songCharacter,int color);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.FixedSongMetadata")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.FixedSongMetadata"); }
		static ::hx::ObjectPtr< FixedSongMetadata_obj > __new(::String song,int week,::String songCharacter,int color);
		static ::hx::ObjectPtr< FixedSongMetadata_obj > __alloc(::hx::Ctx *_hx_ctx,::String song,int week,::String songCharacter,int color);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FixedSongMetadata_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FixedSongMetadata",d8,87,5f,2f); }

		::String songName;
		int week;
		::String songCharacter;
		int color;
		::String folder;
};

} // end namespace states

#endif /* INCLUDED_states_FixedSongMetadata */ 
