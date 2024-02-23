#ifndef INCLUDED_hxcodec_flixel_ScaleType
#define INCLUDED_hxcodec_flixel_ScaleType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxcodec,flixel,ScaleType)
namespace hxcodec{
namespace flixel{


class ScaleType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ScaleType_obj OBJ_;

	public:
		ScaleType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxcodec.flixel.ScaleType",9a,75,c5,16); }
		::String __ToString() const { return HX_("ScaleType.",6a,21,b0,32) + _hx_tag; }

		static ::hxcodec::flixel::ScaleType GAME;
		static inline ::hxcodec::flixel::ScaleType GAME_dyn() { return GAME; }
		static ::hxcodec::flixel::ScaleType VIDEO;
		static inline ::hxcodec::flixel::ScaleType VIDEO_dyn() { return VIDEO; }
};

} // end namespace hxcodec
} // end namespace flixel

#endif /* INCLUDED_hxcodec_flixel_ScaleType */ 
