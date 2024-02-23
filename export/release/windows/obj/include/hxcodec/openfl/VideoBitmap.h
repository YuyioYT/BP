#ifndef INCLUDED_hxcodec_openfl_VideoBitmap
#define INCLUDED_hxcodec_openfl_VideoBitmap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxcodec_vlc_VLCBitmap
#include <hxcodec/vlc/VLCBitmap.h>
#endif
HX_DECLARE_CLASS2(hxcodec,openfl,VideoBitmap)
HX_DECLARE_CLASS2(hxcodec,vlc,VLCBitmap)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace hxcodec{
namespace openfl{


class HXCPP_CLASS_ATTRIBUTES VideoBitmap_obj : public  ::hxcodec::vlc::VLCBitmap_obj
{
	public:
		typedef  ::hxcodec::vlc::VLCBitmap_obj super;
		typedef VideoBitmap_obj OBJ_;
		VideoBitmap_obj();

	public:
		enum { _hx_ClassId = 0x5f06eb14 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxcodec.openfl.VideoBitmap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxcodec.openfl.VideoBitmap"); }
		static ::hx::ObjectPtr< VideoBitmap_obj > __new();
		static ::hx::ObjectPtr< VideoBitmap_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VideoBitmap_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VideoBitmap",aa,3e,e6,4d); }

		void onAddedToStage( ::openfl::events::Event e);
		::Dynamic onAddedToStage_dyn();

};

} // end namespace hxcodec
} // end namespace openfl

#endif /* INCLUDED_hxcodec_openfl_VideoBitmap */ 
