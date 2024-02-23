#ifndef INCLUDED_hxcodec_flixel_VideoHandler
#define INCLUDED_hxcodec_flixel_VideoHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxcodec_openfl_VideoBitmap
#include <hxcodec/openfl/VideoBitmap.h>
#endif
HX_DECLARE_CLASS2(hxcodec,flixel,ScaleType)
HX_DECLARE_CLASS2(hxcodec,flixel,VideoHandler)
HX_DECLARE_CLASS2(hxcodec,openfl,VideoBitmap)
HX_DECLARE_CLASS2(hxcodec,vlc,VLCBitmap)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace hxcodec{
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES VideoHandler_obj : public  ::hxcodec::openfl::VideoBitmap_obj
{
	public:
		typedef  ::hxcodec::openfl::VideoBitmap_obj super;
		typedef VideoHandler_obj OBJ_;
		VideoHandler_obj();

	public:
		enum { _hx_ClassId = 0x058240d1 };

		void __construct(::hx::Null< int >  __o_IndexModifier);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxcodec.flixel.VideoHandler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxcodec.flixel.VideoHandler"); }
		static ::hx::ObjectPtr< VideoHandler_obj > __new(::hx::Null< int >  __o_IndexModifier);
		static ::hx::ObjectPtr< VideoHandler_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_IndexModifier);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VideoHandler_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VideoHandler",af,64,e4,27); }

		::Array< int > skipKeys;
		bool canSkip;
		bool canUseSound;
		bool canUseAutoResize;
		bool maintainAspectRatio;
		 ::hxcodec::flixel::ScaleType useScaleBy;
		 ::Dynamic openingCallback;
		Dynamic openingCallback_dyn() { return openingCallback;}
		 ::Dynamic finishCallback;
		Dynamic finishCallback_dyn() { return finishCallback;}
		bool _hx___pauseMusic;
		void onVLCOpening();
		::Dynamic onVLCOpening_dyn();

		void onVLCEncounteredError(::String msg);
		::Dynamic onVLCEncounteredError_dyn();

		void onVLCEndReached();
		::Dynamic onVLCEndReached_dyn();

		int playVideo(::String Path,::hx::Null< bool >  Loop,::hx::Null< bool >  PauseMusic);
		::Dynamic playVideo_dyn();

		void update( ::openfl::events::Event E);
		::Dynamic update_dyn();

};

} // end namespace hxcodec
} // end namespace flixel

#endif /* INCLUDED_hxcodec_flixel_VideoHandler */ 
