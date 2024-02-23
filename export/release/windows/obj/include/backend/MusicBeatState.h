#ifndef INCLUDED_backend_MusicBeatState
#define INCLUDED_backend_MusicBeatState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
HX_DECLARE_CLASS1(backend,BaseStage)
HX_DECLARE_CLASS1(backend,Controls)
HX_DECLARE_CLASS1(backend,MusicBeatState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace backend{


class HXCPP_CLASS_ATTRIBUTES MusicBeatState_obj : public  ::flixel::addons::ui::FlxUIState_obj
{
	public:
		typedef  ::flixel::addons::ui::FlxUIState_obj super;
		typedef MusicBeatState_obj OBJ_;
		MusicBeatState_obj();

	public:
		enum { _hx_ClassId = 0x53aaab8a };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="backend.MusicBeatState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"backend.MusicBeatState"); }
		static ::hx::ObjectPtr< MusicBeatState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< MusicBeatState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MusicBeatState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MusicBeatState",76,df,84,5d); }

		static void __boot();
		static  ::flixel::FlxCamera camBeat;
		static Float timePassedOnState;
		static void switchState( ::flixel::FlxState nextState);
		static ::Dynamic switchState_dyn();

		static void resetState();
		static ::Dynamic resetState_dyn();

		static void startTransition( ::flixel::FlxState nextState);
		static ::Dynamic startTransition_dyn();

		static  ::backend::MusicBeatState getState();
		static ::Dynamic getState_dyn();

		int curSection;
		int stepsToDo;
		int curStep;
		int curBeat;
		Float curDecStep;
		Float curDecBeat;
		 ::backend::Controls get_controls();
		::Dynamic get_controls_dyn();

		virtual void create();

		virtual void update(Float elapsed);

		void updateSection();
		::Dynamic updateSection_dyn();

		void rollbackSection();
		::Dynamic rollbackSection_dyn();

		void updateBeat();
		::Dynamic updateBeat_dyn();

		void updateCurStep();
		::Dynamic updateCurStep_dyn();

		virtual void stepHit();
		::Dynamic stepHit_dyn();

		::Array< ::Dynamic> stages;
		virtual void beatHit();
		::Dynamic beatHit_dyn();

		virtual void sectionHit();
		::Dynamic sectionHit_dyn();

		void stagesFunc( ::Dynamic func);
		::Dynamic stagesFunc_dyn();

		 ::Dynamic getBeatsOnSection();
		::Dynamic getBeatsOnSection_dyn();

};

} // end namespace backend

#endif /* INCLUDED_backend_MusicBeatState */ 
