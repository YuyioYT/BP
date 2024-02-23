#ifndef INCLUDED_states_editors_CreditsEditorState
#define INCLUDED_states_editors_CreditsEditorState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
HX_DECLARE_CLASS1(backend,MusicBeatState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,display,FlxBackdrop)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxInputText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUICheckBox)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIInputText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITabMenu)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ILabeled)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,AttachedSprite)
HX_DECLARE_CLASS1(objects,HealthIcon)
HX_DECLARE_CLASS2(openfl,events,ErrorEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IOErrorEvent)
HX_DECLARE_CLASS2(openfl,events,TextEvent)
HX_DECLARE_CLASS2(openfl,net,FileReference)
HX_DECLARE_CLASS2(states,editors,CreditsEditorState)

namespace states{
namespace editors{


class HXCPP_CLASS_ATTRIBUTES CreditsEditorState_obj : public  ::backend::MusicBeatState_obj
{
	public:
		typedef  ::backend::MusicBeatState_obj super;
		typedef CreditsEditorState_obj OBJ_;
		CreditsEditorState_obj();

	public:
		enum { _hx_ClassId = 0x685a7d2e };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.editors.CreditsEditorState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.editors.CreditsEditorState"); }
		static ::hx::ObjectPtr< CreditsEditorState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< CreditsEditorState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CreditsEditorState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CreditsEditorState",4a,01,f4,e2); }

		int currentlySelected;
		 ::flixel::group::FlxTypedGroup groupOptions;
		::Array< ::Dynamic> iconArray;
		::Array< ::Dynamic> creditsStuff;
		::Array< ::Dynamic> blockPressWhileTypingOn;
		bool ignoreWarnings;
		 ::flixel::FlxCamera camGame;
		 ::flixel::FlxCamera camUI;
		 ::flixel::FlxCamera camOther;
		 ::flixel::FlxSprite background;
		 ::flixel::addons::display::FlxBackdrop velocityBackground;
		 ::flixel::text::FlxText descriptionText;
		int intendedColor;
		 ::flixel::tweens::FlxTween colorTween;
		 ::objects::AttachedSprite descriptionBox;
		 ::flixel::addons::ui::FlxUITabMenu UI_box;
		Float offsetThing;
		::String text;
		void create();

		 ::flixel::addons::ui::FlxUIInputText titleInput;
		 ::flixel::addons::ui::FlxUICheckBox titleJump;
		 ::flixel::addons::ui::FlxUIInputText creditNameInput;
		 ::flixel::addons::ui::FlxUIInputText iconInput;
		 ::flixel::FlxSprite iconExistCheck;
		 ::flixel::addons::ui::FlxUIInputText descInput;
		 ::flixel::addons::ui::FlxUIInputText linkInput;
		 ::flixel::addons::ui::FlxUIInputText colorInput;
		 ::flixel::FlxSprite colorSquare;
		void addCreditsUI();
		::Dynamic addCreditsUI_dyn();

		void updateCreditObjects();
		::Dynamic updateCreditObjects_dyn();

		void addCredit();
		::Dynamic addCredit_dyn();

		void addTitle();
		::Dynamic addTitle_dyn();

		void dataGoToInputs();
		::Dynamic dataGoToInputs_dyn();

		void cleanInputs();
		::Dynamic cleanInputs_dyn();

		void setItemData();
		::Dynamic setItemData_dyn();

		void deleteSelItem();
		::Dynamic deleteSelItem_dyn();

		::Array< ::Dynamic> templateArray();
		::Dynamic templateArray_dyn();

		void pushAtPos(int pos,::Array< ::String > data);
		::Dynamic pushAtPos_dyn();

		bool quitting;
		Float holdTime;
		void update(Float elapsed);

		 ::flixel::tweens::FlxTween moveTween;
		bool curSelIsTitle;
		void changeSelection(::hx::Null< int >  change,::hx::Null< bool >  playSound);
		::Dynamic changeSelection_dyn();

		bool unselectableCheck(int num);
		::Dynamic unselectableCheck_dyn();

		bool nullCheck(int num);
		::Dynamic nullCheck_dyn();

		 ::Dynamic getCurrentBGColor();
		::Dynamic getCurrentBGColor_dyn();

		 ::flixel::FlxSprite makeSquareBorder( ::flixel::FlxSprite object,int size);
		::Dynamic makeSquareBorder_dyn();

		void showIconExist(::String text);
		::Dynamic showIconExist_dyn();

		void iconColorShow();
		::Dynamic iconColorShow_dyn();

		void getEvent(::String id, ::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params);

		 ::openfl::net::FileReference _file;
		void onSaveComplete( ::openfl::events::Event _);
		::Dynamic onSaveComplete_dyn();

		void onSaveCancel( ::openfl::events::Event _);
		::Dynamic onSaveCancel_dyn();

		void onSaveError( ::openfl::events::IOErrorEvent _);
		::Dynamic onSaveError_dyn();

		void saveCredits();
		::Dynamic saveCredits_dyn();

		void loadCredits();
		::Dynamic loadCredits_dyn();

		bool loadError;
		void onLoadComplete( ::openfl::events::Event _);
		::Dynamic onLoadComplete_dyn();

		void onLoadCancel( ::openfl::events::Event _);
		::Dynamic onLoadCancel_dyn();

		void onLoadError( ::openfl::events::IOErrorEvent _);
		::Dynamic onLoadError_dyn();

};

} // end namespace states
} // end namespace editors

#endif /* INCLUDED_states_editors_CreditsEditorState */ 
