#ifndef INCLUDED_backend_PlatformUtil
#define INCLUDED_backend_PlatformUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(backend,PlatformUtil)

namespace backend{


class HXCPP_CLASS_ATTRIBUTES PlatformUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PlatformUtil_obj OBJ_;
		PlatformUtil_obj();

	public:
		enum { _hx_ClassId = 0x11ef3789 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="backend.PlatformUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"backend.PlatformUtil"); }

		inline static ::hx::ObjectPtr< PlatformUtil_obj > __new() {
			::hx::ObjectPtr< PlatformUtil_obj > __this = new PlatformUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PlatformUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			PlatformUtil_obj *__this = (PlatformUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlatformUtil_obj), false, "backend.PlatformUtil"));
			*(void **)__this = PlatformUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PlatformUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PlatformUtil",75,58,0e,bd); }

		static int getWindowsTransparent(::hx::Null< int >  res);
		static ::Dynamic getWindowsTransparent_dyn();

		static int sendWindowsNotification(::String title,::String desc,::hx::Null< int >  res);
		static ::Dynamic sendWindowsNotification_dyn();

		static int sendFakeMsgBox(::String desc,::hx::Null< int >  res);
		static ::Dynamic sendFakeMsgBox_dyn();

		static int getWindowsbackward(::hx::Null< int >  res);
		static ::Dynamic getWindowsbackward_dyn();

		static  ::Dynamic updateWallpaper();
		static ::Dynamic updateWallpaper_dyn();

};

} // end namespace backend

#endif /* INCLUDED_backend_PlatformUtil */ 
