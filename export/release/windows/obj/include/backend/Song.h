#ifndef INCLUDED_backend_Song
#define INCLUDED_backend_Song

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_db09ff2b98ac40f1_48_new)
HX_DECLARE_CLASS1(backend,Song)

namespace backend{


class HXCPP_CLASS_ATTRIBUTES Song_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Song_obj OBJ_;
		Song_obj();

	public:
		enum { _hx_ClassId = 0x55e30b25 };

		void __construct(::String song,::Array< ::Dynamic> notes,Float bpm);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="backend.Song")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"backend.Song"); }

		inline static ::hx::ObjectPtr< Song_obj > __new(::String song,::Array< ::Dynamic> notes,Float bpm) {
			::hx::ObjectPtr< Song_obj > __this = new Song_obj();
			__this->__construct(song,notes,bpm);
			return __this;
		}

		inline static ::hx::ObjectPtr< Song_obj > __alloc(::hx::Ctx *_hx_ctx,::String song,::Array< ::Dynamic> notes,Float bpm) {
			Song_obj *__this = (Song_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Song_obj), true, "backend.Song"));
			*(void **)__this = Song_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_db09ff2b98ac40f1_48_new)
HXLINE(  78)		( ( ::backend::Song)(__this) )->songInstVolume = ((Float)1);
HXLINE(  77)		( ( ::backend::Song)(__this) )->gfVersion = HX_("gf",1f,5a,00,00);
HXLINE(  76)		( ( ::backend::Song)(__this) )->player3 = HX_("dad",47,36,4c,00);
HXLINE(  75)		( ( ::backend::Song)(__this) )->player2 = HX_("dad",47,36,4c,00);
HXLINE(  74)		( ( ::backend::Song)(__this) )->player1 = HX_("bf",c4,55,00,00);
HXLINE(  72)		( ( ::backend::Song)(__this) )->speed = ((Float)1);
HXLINE(  71)		( ( ::backend::Song)(__this) )->disableNoteRGB = false;
HXLINE(  69)		( ( ::backend::Song)(__this) )->swapStrumLines = false;
HXLINE(  68)		( ( ::backend::Song)(__this) )->disableDebugButtons = false;
HXLINE(  67)		( ( ::backend::Song)(__this) )->disableAntiMash = false;
HXLINE(  66)		( ( ::backend::Song)(__this) )->healthdrainKill = false;
HXLINE(  65)		( ( ::backend::Song)(__this) )->canFly = false;
HXLINE(  64)		( ( ::backend::Song)(__this) )->cameraMoveOnNotes = false;
HXLINE(  62)		( ( ::backend::Song)(__this) )->healthdrain = ((Float)0);
HXLINE(  54)		( ( ::backend::Song)(__this) )->needsVoices = true;
HXLINE( 122)		( ( ::backend::Song)(__this) )->song = song;
HXLINE( 123)		( ( ::backend::Song)(__this) )->notes = notes;
HXLINE( 124)		( ( ::backend::Song)(__this) )->bpm = bpm;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Song_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Song",f5,4f,31,37); }

		static void onLoadJson( ::Dynamic songJson);
		static ::Dynamic onLoadJson_dyn();

		static  ::Dynamic loadFromJson(::String jsonInput,::String folder);
		static ::Dynamic loadFromJson_dyn();

		static  ::Dynamic parseJSONshit(::String rawJson);
		static ::Dynamic parseJSONshit_dyn();

		::String song;
		::Array< ::Dynamic> notes;
		::cpp::VirtualArray events;
		Float bpm;
		bool needsVoices;
		::String arrowSkin;
		::String splashSkin;
		::String gameOverChar;
		::String gameOverSound;
		::String gameOverLoop;
		::String gameOverEnd;
		Float healthdrain;
		bool cameraMoveOnNotes;
		bool canFly;
		bool healthdrainKill;
		bool disableAntiMash;
		bool disableDebugButtons;
		bool swapStrumLines;
		bool disableNoteRGB;
		Float speed;
		::String stage;
		::String player1;
		::String player2;
		::String player3;
		::String gfVersion;
		Float songInstVolume;
};

} // end namespace backend

#endif /* INCLUDED_backend_Song */ 
