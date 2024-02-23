#ifndef INCLUDED_options_TimeBarSettingsState
#define INCLUDED_options_TimeBarSettingsState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_options_BaseOptionsMenu
#include <options/BaseOptionsMenu.h>
#endif
HX_DECLARE_CLASS1(backend,MusicBeatSubstate)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(options,BaseOptionsMenu)
HX_DECLARE_CLASS1(options,TimeBarSettingsState)

namespace options{


class HXCPP_CLASS_ATTRIBUTES TimeBarSettingsState_obj : public  ::options::BaseOptionsMenu_obj
{
	public:
		typedef  ::options::BaseOptionsMenu_obj super;
		typedef TimeBarSettingsState_obj OBJ_;
		TimeBarSettingsState_obj();

	public:
		enum { _hx_ClassId = 0x7fcd4cae };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="options.TimeBarSettingsState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"options.TimeBarSettingsState"); }
		static ::hx::ObjectPtr< TimeBarSettingsState_obj > __new();
		static ::hx::ObjectPtr< TimeBarSettingsState_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TimeBarSettingsState_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TimeBarSettingsState",a8,46,a0,a3); }

};

} // end namespace options

#endif /* INCLUDED_options_TimeBarSettingsState */ 
