#include <hxcpp.h>

#ifndef INCLUDED_backend_Controls
#include <backend/Controls.h>
#endif
#ifndef INCLUDED_backend_DiscordClient
#include <backend/DiscordClient.h>
#endif
#ifndef INCLUDED_backend_Mods
#include <backend/Mods.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_backend_WeekData
#include <backend/WeekData.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSound
#include <flixel/sound/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_objects_Alphabet
#include <objects/Alphabet.h>
#endif
#ifndef INCLUDED_objects_Character
#include <objects/Character.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_states_FreeplayState
#include <states/FreeplayState.h>
#endif
#ifndef INCLUDED_states_LoadingState
#include <states/LoadingState.h>
#endif
#ifndef INCLUDED_states_MainMenuState
#include <states/MainMenuState.h>
#endif
#ifndef INCLUDED_states_ModsMenuState
#include <states/ModsMenuState.h>
#endif
#ifndef INCLUDED_states_editors_CharacterEditorState
#include <states/editors/CharacterEditorState.h>
#endif
#ifndef INCLUDED_states_editors_ChartingState
#include <states/editors/ChartingState.h>
#endif
#ifndef INCLUDED_states_editors_CreditsEditorState
#include <states/editors/CreditsEditorState.h>
#endif
#ifndef INCLUDED_states_editors_DialogueCharacterEditorState
#include <states/editors/DialogueCharacterEditorState.h>
#endif
#ifndef INCLUDED_states_editors_DialogueEditorState
#include <states/editors/DialogueEditorState.h>
#endif
#ifndef INCLUDED_states_editors_MasterEditorMenu
#include <states/editors/MasterEditorMenu.h>
#endif
#ifndef INCLUDED_states_editors_MenuCharacterEditorState
#include <states/editors/MenuCharacterEditorState.h>
#endif
#ifndef INCLUDED_states_editors_NoteSplashDebugState
#include <states/editors/NoteSplashDebugState.h>
#endif
#ifndef INCLUDED_states_editors_WeekEditorState
#include <states/editors/WeekEditorState.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2474f81768c26797_14_new,"states.editors.MasterEditorMenu","new",0xf6355734,"states.editors.MasterEditorMenu.new","states/editors/MasterEditorMenu.hx",14,0xa5460afa)
static const ::String _hx_array_data_298ced42_1[] = {
	HX_("Chart Editor",ef,b4,29,e9),HX_("Character Editor",84,45,58,b1),HX_("Week Editor",59,6c,6c,6d),HX_("Credits Editor",33,6b,35,13),HX_("Menu Character Editor",05,2d,60,f9),HX_("Dialogue Editor",b5,bb,62,71),HX_("Dialogue Portrait Editor",ea,22,45,b5),HX_("Note Splash Debug",a8,6b,fe,d7),HX_("Mods Debug",64,d0,a3,88),
};
HX_LOCAL_STACK_FRAME(_hx_pos_2474f81768c26797_35_create,"states.editors.MasterEditorMenu","create",0xc786dca8,"states.editors.MasterEditorMenu.create","states/editors/MasterEditorMenu.hx",35,0xa5460afa)
HX_LOCAL_STACK_FRAME(_hx_pos_2474f81768c26797_85_update,"states.editors.MasterEditorMenu","update",0xd27cfbb5,"states.editors.MasterEditorMenu.update","states/editors/MasterEditorMenu.hx",85,0xa5460afa)
HX_LOCAL_STACK_FRAME(_hx_pos_2474f81768c26797_157_changeSelection,"states.editors.MasterEditorMenu","changeSelection",0x91300d90,"states.editors.MasterEditorMenu.changeSelection","states/editors/MasterEditorMenu.hx",157,0xa5460afa)
HX_LOCAL_STACK_FRAME(_hx_pos_2474f81768c26797_170_changeDirectory,"states.editors.MasterEditorMenu","changeDirectory",0x135a07b1,"states.editors.MasterEditorMenu.changeDirectory","states/editors/MasterEditorMenu.hx",170,0xa5460afa)
namespace states{
namespace editors{

void MasterEditorMenu_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_2474f81768c26797_14_new)
HXLINE(  31)		this->curDirectory = 0;
HXLINE(  30)		this->curSelected = 0;
HXLINE(  28)		this->directories = ::Array_obj< ::String >::__new(1)->init(0,null());
HXLINE(  16)		this->options = ::Array_obj< ::String >::fromData( _hx_array_data_298ced42_1,9);
HXLINE(  14)		super::__construct(TransIn,TransOut);
            	}

Dynamic MasterEditorMenu_obj::__CreateEmpty() { return new MasterEditorMenu_obj; }

void *MasterEditorMenu_obj::_hx_vtable = 0;

Dynamic MasterEditorMenu_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MasterEditorMenu_obj > _hx_result = new MasterEditorMenu_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MasterEditorMenu_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5949c832) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x53aaab8a || inClassId==(int)0x5949c832;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void MasterEditorMenu_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_2474f81768c26797_35_create)
HXLINE(  36)		::flixel::FlxG_obj::camera->bgColor = -16777216;
HXLINE(  39)		::backend::DiscordClient_obj::changePresence(HX_("Editors Main Menu",4c,98,82,a7),null(),null(),null(),null());
HXLINE(  42)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  42)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(::backend::Paths_obj::image(HX_("menuBG/menuDesat",3b,4d,f5,8e),null(),null()),null(),null(),null(),null(),null());
HXLINE(  43)		{
HXLINE(  43)			 ::flixel::math::FlxBasePoint this1 = bg1->scrollFactor;
HXDLIN(  43)			this1->set_x(( (Float)(0) ));
HXDLIN(  43)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  44)		bg1->set_color(-13290187);
HXLINE(  45)		this->add(bg1);
HXLINE(  47)		this->grpTexts =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  48)		this->add(this->grpTexts);
HXLINE(  50)		{
HXLINE(  50)			int _g = 0;
HXDLIN(  50)			int _g1 = this->options->length;
HXDLIN(  50)			while((_g < _g1)){
HXLINE(  50)				_g = (_g + 1);
HXDLIN(  50)				int i = (_g - 1);
HXLINE(  52)				 ::objects::Alphabet leText =  ::objects::Alphabet_obj::__alloc( HX_CTX ,( (Float)(90) ),( (Float)(320) ),this->options->__get(i),true);
HXLINE(  53)				leText->isMenuItem = true;
HXLINE(  54)				leText->targetY = i;
HXLINE(  55)				this->grpTexts->add(leText).StaticCast<  ::objects::Alphabet >();
HXLINE(  56)				leText->snapToPosition();
            			}
            		}
HXLINE(  60)		 ::flixel::FlxSprite textBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,(::flixel::FlxG_obj::height - 42),null())->makeGraphic(::flixel::FlxG_obj::width,42,-16777216,null(),null());
HXLINE(  61)		textBG->set_alpha(((Float)0.6));
HXLINE(  62)		this->add(textBG);
HXLINE(  64)		this->directoryTxt =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,textBG->x,(textBG->y + 4),::flixel::FlxG_obj::width,HX_("",00,00,00,00),32,null());
HXLINE(  65)		 ::flixel::text::FlxText _hx_tmp = this->directoryTxt;
HXDLIN(  65)		::String file = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  65)		::String _hx_tmp1;
HXDLIN(  65)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  65)			_hx_tmp1 = file;
            		}
            		else {
HXLINE(  65)			_hx_tmp1 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  65)		_hx_tmp->setFormat(_hx_tmp1,32,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  66)		{
HXLINE(  66)			 ::flixel::math::FlxBasePoint this2 = this->directoryTxt->scrollFactor;
HXDLIN(  66)			this2->set_x(( (Float)(0) ));
HXDLIN(  66)			this2->set_y(( (Float)(0) ));
            		}
HXLINE(  67)		this->add(this->directoryTxt);
HXLINE(  69)		{
HXLINE(  69)			int _g2 = 0;
HXDLIN(  69)			::Array< ::String > list = ::Array_obj< ::String >::__new(0);
HXDLIN(  69)			::String modsFolder = HX_("mods/",9e,2f,58,0c);
HXDLIN(  69)			if (::sys::FileSystem_obj::exists(modsFolder)) {
HXLINE(  69)				int _g = 0;
HXDLIN(  69)				::Array< ::String > _g1 = ::sys::FileSystem_obj::readDirectory(modsFolder);
HXDLIN(  69)				while((_g < _g1->length)){
HXLINE(  69)					::String folder = _g1->__get(_g);
HXDLIN(  69)					_g = (_g + 1);
HXDLIN(  69)					::String path = ::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,modsFolder)->init(1,folder));
HXDLIN(  69)					bool _hx_tmp;
HXDLIN(  69)					bool _hx_tmp1;
HXDLIN(  69)					if (::sys::FileSystem_obj::isDirectory(path)) {
HXLINE(  69)						::Array< ::String > _hx_tmp = ::backend::Mods_obj::ignoreModFolders;
HXDLIN(  69)						_hx_tmp1 = !(_hx_tmp->contains(folder.toLowerCase()));
            					}
            					else {
HXLINE(  69)						_hx_tmp1 = false;
            					}
HXDLIN(  69)					if (_hx_tmp1) {
HXLINE(  69)						_hx_tmp = !(list->contains(folder));
            					}
            					else {
HXLINE(  69)						_hx_tmp = false;
            					}
HXDLIN(  69)					if (_hx_tmp) {
HXLINE(  69)						list->push(folder);
            					}
            				}
            			}
HXDLIN(  69)			::Array< ::String > _g3 = list;
HXDLIN(  69)			while((_g2 < _g3->length)){
HXLINE(  69)				::String folder = _g3->__get(_g2);
HXDLIN(  69)				_g2 = (_g2 + 1);
HXLINE(  71)				this->directories->push(folder);
            			}
            		}
HXLINE(  74)		int found = this->directories->indexOf(::backend::Mods_obj::currentModDirectory,null());
HXLINE(  75)		if ((found > -1)) {
HXLINE(  75)			this->curDirectory = found;
            		}
HXLINE(  76)		this->changeDirectory(null());
HXLINE(  78)		this->changeSelection(null());
HXLINE(  80)		::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE(  81)		this->super::create();
            	}


void MasterEditorMenu_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_2474f81768c26797_85_update)
HXLINE(  86)		if (this->get_controls()->get_UI_UP_P()) {
HXLINE(  88)			this->changeSelection(-1);
            		}
HXLINE(  90)		if (this->get_controls()->get_UI_DOWN_P()) {
HXLINE(  92)			this->changeSelection(1);
            		}
HXLINE(  95)		if (this->get_controls()->get_UI_LEFT_P()) {
HXLINE(  97)			this->changeDirectory(-1);
            		}
HXLINE(  99)		if (this->get_controls()->get_UI_RIGHT_P()) {
HXLINE( 101)			this->changeDirectory(1);
            		}
HXLINE( 105)		if (this->get_controls()->get_BACK()) {
HXLINE( 107)			::backend::MusicBeatState_obj::switchState( ::states::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE( 110)		if (this->get_controls()->get_ACCEPT()) {
HXLINE( 112)			::String _hx_switch_0 = this->options->__get(this->curSelected);
            			if (  (_hx_switch_0==HX_("Character Editor",84,45,58,b1)) ){
HXLINE( 116)				::backend::MusicBeatState_obj::switchState(::states::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::states::editors::CharacterEditorState_obj::__alloc( HX_CTX ,::objects::Character_obj::DEFAULT_CHARACTER,false)) ),false));
HXDLIN( 116)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("Chart Editor",ef,b4,29,e9)) ){
HXLINE( 114)				::backend::MusicBeatState_obj::switchState(::states::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::states::editors::ChartingState_obj::__alloc( HX_CTX ,null(),null())) ),false));
HXDLIN( 114)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("Credits Editor",33,6b,35,13)) ){
HXLINE( 120)				::backend::MusicBeatState_obj::switchState( ::states::editors::CreditsEditorState_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN( 120)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("Dialogue Editor",b5,bb,62,71)) ){
HXLINE( 124)				::backend::MusicBeatState_obj::switchState(::states::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::states::editors::DialogueEditorState_obj::__alloc( HX_CTX ,null(),null())) ),false));
HXDLIN( 124)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("Dialogue Portrait Editor",ea,22,45,b5)) ){
HXLINE( 126)				::backend::MusicBeatState_obj::switchState(::states::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::states::editors::DialogueCharacterEditorState_obj::__alloc( HX_CTX ,null(),null())) ),false));
HXDLIN( 126)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("Menu Character Editor",05,2d,60,f9)) ){
HXLINE( 122)				::backend::MusicBeatState_obj::switchState( ::states::editors::MenuCharacterEditorState_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN( 122)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("Mods Debug",64,d0,a3,88)) ){
HXLINE( 130)				::backend::MusicBeatState_obj::switchState( ::states::ModsMenuState_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN( 130)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("Note Splash Debug",a8,6b,fe,d7)) ){
HXLINE( 128)				::backend::MusicBeatState_obj::switchState(::states::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::states::editors::NoteSplashDebugState_obj::__alloc( HX_CTX ,null(),null())) ),false));
HXDLIN( 128)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("Week Editor",59,6c,6c,6d)) ){
HXLINE( 118)				::backend::MusicBeatState_obj::switchState( ::states::editors::WeekEditorState_obj::__alloc( HX_CTX ,null()));
HXDLIN( 118)				goto _hx_goto_6;
            			}
            			_hx_goto_6:;
HXLINE( 132)			::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
HXLINE( 134)			::states::FreeplayState_obj::destroyFreeplayVocals();
            		}
HXLINE( 138)		int bullShit = 0;
HXLINE( 139)		{
HXLINE( 139)			int _g = 0;
HXDLIN( 139)			::Array< ::Dynamic> _g1 = this->grpTexts->members;
HXDLIN( 139)			while((_g < _g1->length)){
HXLINE( 139)				 ::objects::Alphabet item = _g1->__get(_g).StaticCast<  ::objects::Alphabet >();
HXDLIN( 139)				_g = (_g + 1);
HXLINE( 141)				item->targetY = (bullShit - this->curSelected);
HXLINE( 142)				bullShit = (bullShit + 1);
HXLINE( 144)				item->set_alpha(((Float)0.6));
HXLINE( 147)				if ((item->targetY == 0)) {
HXLINE( 149)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 153)		this->super::update(elapsed);
            	}


void MasterEditorMenu_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_2474f81768c26797_157_changeSelection)
HXLINE( 158)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 158)		_hx_tmp->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 160)		 ::states::editors::MasterEditorMenu _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 160)		_hx_tmp1->curSelected = (_hx_tmp1->curSelected + change);
HXLINE( 162)		if ((this->curSelected < 0)) {
HXLINE( 163)			this->curSelected = (this->options->length - 1);
            		}
HXLINE( 164)		if ((this->curSelected >= this->options->length)) {
HXLINE( 165)			this->curSelected = 0;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MasterEditorMenu_obj,changeSelection,(void))

void MasterEditorMenu_obj::changeDirectory(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_2474f81768c26797_170_changeDirectory)
HXLINE( 171)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 171)		_hx_tmp->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 173)		 ::states::editors::MasterEditorMenu _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 173)		_hx_tmp1->curDirectory = (_hx_tmp1->curDirectory + change);
HXLINE( 175)		if ((this->curDirectory < 0)) {
HXLINE( 176)			this->curDirectory = (this->directories->length - 1);
            		}
HXLINE( 177)		if ((this->curDirectory >= this->directories->length)) {
HXLINE( 178)			this->curDirectory = 0;
            		}
HXLINE( 180)		::backend::WeekData_obj::setDirectoryFromWeek(null());
HXLINE( 181)		bool _hx_tmp2;
HXDLIN( 181)		if (::hx::IsNotNull( this->directories->__get(this->curDirectory) )) {
HXLINE( 181)			_hx_tmp2 = (this->directories->__get(this->curDirectory).length < 1);
            		}
            		else {
HXLINE( 181)			_hx_tmp2 = true;
            		}
HXDLIN( 181)		if (_hx_tmp2) {
HXLINE( 182)			this->directoryTxt->set_text(HX_("< No Mod Directory Loaded >",6f,05,c4,e1));
            		}
            		else {
HXLINE( 185)			::backend::Mods_obj::currentModDirectory = this->directories->__get(this->curDirectory);
HXLINE( 186)			this->directoryTxt->set_text(((HX_("< Loaded Mod Directory: ",1e,b9,7b,3e) + ::backend::Mods_obj::currentModDirectory) + HX_(" >",1e,1c,00,00)));
            		}
HXLINE( 188)		 ::flixel::text::FlxText _hx_tmp3 = this->directoryTxt;
HXDLIN( 188)		_hx_tmp3->set_text(this->directoryTxt->text.toUpperCase());
            	}


HX_DEFINE_DYNAMIC_FUNC1(MasterEditorMenu_obj,changeDirectory,(void))


::hx::ObjectPtr< MasterEditorMenu_obj > MasterEditorMenu_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< MasterEditorMenu_obj > __this = new MasterEditorMenu_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< MasterEditorMenu_obj > MasterEditorMenu_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	MasterEditorMenu_obj *__this = (MasterEditorMenu_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MasterEditorMenu_obj), true, "states.editors.MasterEditorMenu"));
	*(void **)__this = MasterEditorMenu_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

MasterEditorMenu_obj::MasterEditorMenu_obj()
{
}

void MasterEditorMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MasterEditorMenu);
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(grpTexts,"grpTexts");
	HX_MARK_MEMBER_NAME(directories,"directories");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(curDirectory,"curDirectory");
	HX_MARK_MEMBER_NAME(directoryTxt,"directoryTxt");
	 ::backend::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MasterEditorMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(grpTexts,"grpTexts");
	HX_VISIT_MEMBER_NAME(directories,"directories");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(curDirectory,"curDirectory");
	HX_VISIT_MEMBER_NAME(directoryTxt,"directoryTxt");
	 ::backend::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MasterEditorMenu_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return ::hx::Val( options ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpTexts") ) { return ::hx::Val( grpTexts ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"directories") ) { return ::hx::Val( directories ); }
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curDirectory") ) { return ::hx::Val( curDirectory ); }
		if (HX_FIELD_EQ(inName,"directoryTxt") ) { return ::hx::Val( directoryTxt ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		if (HX_FIELD_EQ(inName,"changeDirectory") ) { return ::hx::Val( changeDirectory_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MasterEditorMenu_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpTexts") ) { grpTexts=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"directories") ) { directories=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curDirectory") ) { curDirectory=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"directoryTxt") ) { directoryTxt=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MasterEditorMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("grpTexts",01,f1,99,f0));
	outFields->push(HX_("directories",0b,5c,2c,61));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("curDirectory",cd,9c,ef,a5));
	outFields->push(HX_("directoryTxt",03,b6,2a,b0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MasterEditorMenu_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(MasterEditorMenu_obj,options),HX_("options",5e,33,fe,df)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(MasterEditorMenu_obj,grpTexts),HX_("grpTexts",01,f1,99,f0)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(MasterEditorMenu_obj,directories),HX_("directories",0b,5c,2c,61)},
	{::hx::fsInt,(int)offsetof(MasterEditorMenu_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsInt,(int)offsetof(MasterEditorMenu_obj,curDirectory),HX_("curDirectory",cd,9c,ef,a5)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(MasterEditorMenu_obj,directoryTxt),HX_("directoryTxt",03,b6,2a,b0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MasterEditorMenu_obj_sStaticStorageInfo = 0;
#endif

static ::String MasterEditorMenu_obj_sMemberFields[] = {
	HX_("options",5e,33,fe,df),
	HX_("grpTexts",01,f1,99,f0),
	HX_("directories",0b,5c,2c,61),
	HX_("curSelected",fb,eb,ab,32),
	HX_("curDirectory",cd,9c,ef,a5),
	HX_("directoryTxt",03,b6,2a,b0),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	HX_("changeDirectory",dd,92,df,ca),
	::String(null()) };

::hx::Class MasterEditorMenu_obj::__mClass;

void MasterEditorMenu_obj::__register()
{
	MasterEditorMenu_obj _hx_dummy;
	MasterEditorMenu_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.editors.MasterEditorMenu",42,ed,8c,29);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MasterEditorMenu_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MasterEditorMenu_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MasterEditorMenu_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MasterEditorMenu_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
} // end namespace editors
