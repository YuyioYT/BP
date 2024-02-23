#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Controls
#include <backend/Controls.h>
#endif
#ifndef INCLUDED_backend_DiscordClient
#include <backend/DiscordClient.h>
#endif
#ifndef INCLUDED_backend_MusicBeatSubstate
#include <backend/MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
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
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
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
#ifndef INCLUDED_objects_Alphabet
#include <objects/Alphabet.h>
#endif
#ifndef INCLUDED_objects_AttachedText
#include <objects/AttachedText.h>
#endif
#ifndef INCLUDED_objects_CheckboxThingie
#include <objects/CheckboxThingie.h>
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
#ifndef INCLUDED_options_BaseOptionsMenu
#include <options/BaseOptionsMenu.h>
#endif
#ifndef INCLUDED_options_Option
#include <options/Option.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_11861b212311743c_7_new,"options.BaseOptionsMenu","new",0x99505d4e,"options.BaseOptionsMenu.new","options/BaseOptionsMenu.hx",7,0x82de5a23)
HX_LOCAL_STACK_FRAME(_hx_pos_11861b212311743c_138_addOption,"options.BaseOptionsMenu","addOption",0xc780fbe4,"options.BaseOptionsMenu.addOption","options/BaseOptionsMenu.hx",138,0x82de5a23)
HX_LOCAL_STACK_FRAME(_hx_pos_11861b212311743c_147_update,"options.BaseOptionsMenu","update",0xdab941db,"options.BaseOptionsMenu.update","options/BaseOptionsMenu.hx",147,0x82de5a23)
HX_LOCAL_STACK_FRAME(_hx_pos_11861b212311743c_306_updateTextFrom,"options.BaseOptionsMenu","updateTextFrom",0x9c56c9b2,"options.BaseOptionsMenu.updateTextFrom","options/BaseOptionsMenu.hx",306,0x82de5a23)
HX_LOCAL_STACK_FRAME(_hx_pos_11861b212311743c_315_clearHold,"options.BaseOptionsMenu","clearHold",0x9cb5a4da,"options.BaseOptionsMenu.clearHold","options/BaseOptionsMenu.hx",315,0x82de5a23)
HX_LOCAL_STACK_FRAME(_hx_pos_11861b212311743c_323_changeSelection,"options.BaseOptionsMenu","changeSelection",0x8948d2aa,"options.BaseOptionsMenu.changeSelection","options/BaseOptionsMenu.hx",323,0x82de5a23)
HX_LOCAL_STACK_FRAME(_hx_pos_11861b212311743c_361_reloadCheckboxes,"options.BaseOptionsMenu","reloadCheckboxes",0x856a587c,"options.BaseOptionsMenu.reloadCheckboxes","options/BaseOptionsMenu.hx",361,0x82de5a23)
HX_LOCAL_STACK_FRAME(_hx_pos_11861b212311743c_54_randomizeBG,"options.BaseOptionsMenu","randomizeBG",0xb443ac24,"options.BaseOptionsMenu.randomizeBG","options/BaseOptionsMenu.hx",54,0x82de5a23)
HX_LOCAL_STACK_FRAME(_hx_pos_11861b212311743c_24_boot,"options.BaseOptionsMenu","boot",0x851a4784,"options.BaseOptionsMenu.boot","options/BaseOptionsMenu.hx",24,0x82de5a23)
static const ::String _hx_array_data_7f305e5c_18[] = {
	HX_("backgrounds/arandomguy",31,6c,0a,74),HX_("backgrounds/cesars",bb,1a,0d,24),HX_("backgrounds/cheesedjelly",5b,15,9d,3e),HX_("backgrounds/darealmatt",f9,e0,af,1b),HX_("backgrounds/darlyboxman",87,4f,03,cb),HX_("backgrounds/doodoofeces",a8,45,49,64),HX_("backgrounds/expunged",da,1b,56,ec),HX_("backgrounds/eyes",ac,b2,00,e4),HX_("backgrounds/fast_f00d",77,24,fc,00),HX_("backgrounds/ion",3e,38,33,86),HX_("backgrounds/isaaclul",54,0f,95,76),HX_("backgrounds/kanandraw",7f,8a,e2,58),HX_("backgrounds/mmimim",72,4b,40,b8),HX_("backgrounds/morpho",f1,a5,02,e5),HX_("backgrounds/osp",42,c9,37,86),HX_("backgrounds/Senza_titolo_200_20230711092018",e7,33,2e,cd),HX_("backgrounds/Senza_titolo_201_20230711093117",e5,55,08,95),HX_("backgrounds/slushX",31,fd,f0,92),HX_("backgrounds/spitz",a8,e1,47,a6),HX_("backgrounds/tamrika",e3,04,b8,27),HX_("backgrounds/ultimate poop",05,be,ab,12),HX_("backgrounds/ultimate poop2",8d,86,9a,43),HX_("backgrounds/voltrex",7a,a7,d4,81),HX_("backgrounds/watch_out",54,36,b3,8a),HX_("backgrounds/whatisthis",d6,bd,87,08),HX_("backgrounds/zevisly",58,23,56,e3),
};
namespace options{

void BaseOptionsMenu_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_11861b212311743c_7_new)
HXLINE( 145)		this->holdValue = ((Float)0);
HXLINE( 144)		this->holdTime = ((Float)0);
HXLINE( 143)		this->nextAccept = 5;
HXLINE(  10)		this->curSelected = 0;
HXLINE(   9)		this->curOption = null();
HXLINE(  61)		super::__construct();
HXLINE(  63)		if (::hx::IsNull( this->title )) {
HXLINE(  63)			this->title = HX_("Options",3e,5b,4f,ad);
            		}
HXLINE(  64)		if (::hx::IsNull( this->rpcTitle )) {
HXLINE(  64)			this->rpcTitle = HX_("Options Menu",e1,25,4c,98);
            		}
HXLINE(  67)		::backend::DiscordClient_obj::changePresence(this->rpcTitle,null(),null(),null(),null());
HXLINE(  70)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  72)		::String typografy = HX_("comic-sans.ttf",bd,08,d7,96);
HXLINE(  75)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  75)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(::options::BaseOptionsMenu_obj::randomizeBG(),null(),null(),null(),null(),null());
HXLINE(  76)		{
HXLINE(  76)			int axes = 17;
HXDLIN(  76)			bool _hx_tmp;
HXDLIN(  76)			if ((axes != 1)) {
HXLINE(  76)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  76)				_hx_tmp = true;
            			}
HXDLIN(  76)			if (_hx_tmp) {
HXLINE(  76)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  76)				bg1->set_x(((( (Float)(_hx_tmp) ) - bg1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  76)			bool _hx_tmp1;
HXDLIN(  76)			if ((axes != 16)) {
HXLINE(  76)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  76)				_hx_tmp1 = true;
            			}
HXDLIN(  76)			if (_hx_tmp1) {
HXLINE(  76)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  76)				bg1->set_y(((( (Float)(_hx_tmp) ) - bg1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  77)		bg1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  78)		this->add(bg1);
HXLINE(  81)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  82)		this->add(this->grpOptions);
HXLINE(  84)		this->grpTexts =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  85)		this->add(this->grpTexts);
HXLINE(  87)		this->checkboxGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  88)		this->add(this->checkboxGroup);
HXLINE(  90)		this->descBox =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(1,1,-65536,null(),null());
HXLINE(  91)		this->descBox->set_alpha(((Float)0.6));
HXLINE(  92)		this->add(this->descBox);
HXLINE(  94)		 ::objects::Alphabet titleText =  ::objects::Alphabet_obj::__alloc( HX_CTX ,( (Float)(75) ),( (Float)(45) ),this->title,true);
HXLINE(  95)		titleText->setScale(((Float)0.6),null());
HXLINE(  96)		titleText->set_alpha(((Float)0.4));
HXLINE(  97)		this->add(titleText);
HXLINE(  99)		this->descText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,50,600,1180,HX_("",00,00,00,00),32,null());
HXLINE( 100)		 ::flixel::text::FlxText _hx_tmp2 = this->descText;
HXDLIN( 100)		::String file = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + typografy));
HXDLIN( 100)		::String _hx_tmp3;
HXDLIN( 100)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 100)			_hx_tmp3 = file;
            		}
            		else {
HXLINE( 100)			_hx_tmp3 = (HX_("assets/fonts/",37,ff,a5,9c) + typografy);
            		}
HXDLIN( 100)		_hx_tmp2->setFormat(_hx_tmp3,32,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 101)		{
HXLINE( 101)			 ::flixel::math::FlxBasePoint this1 = this->descText->scrollFactor;
HXDLIN( 101)			this1->set_x(( (Float)(0) ));
HXDLIN( 101)			this1->set_y(( (Float)(0) ));
            		}
HXLINE( 102)		this->descText->set_borderSize(((Float)2.4));
HXLINE( 103)		this->add(this->descText);
HXLINE( 105)		{
HXLINE( 105)			int _g = 0;
HXDLIN( 105)			int _g1 = this->optionsArray->length;
HXDLIN( 105)			while((_g < _g1)){
HXLINE( 105)				_g = (_g + 1);
HXDLIN( 105)				int i = (_g - 1);
HXLINE( 107)				 ::objects::Alphabet optionText =  ::objects::Alphabet_obj::__alloc( HX_CTX ,( (Float)(290) ),( (Float)(260) ),this->optionsArray->__get(i).StaticCast<  ::options::Option >()->name,false);
HXLINE( 108)				optionText->isMenuItem = true;
HXLINE( 111)				optionText->targetY = i;
HXLINE( 112)				this->grpOptions->add(optionText).StaticCast<  ::objects::Alphabet >();
HXLINE( 114)				if ((this->optionsArray->__get(i).StaticCast<  ::options::Option >()->get_type() == HX_("bool",2a,84,1b,41))) {
HXLINE( 115)					Float checkbox = (optionText->x - ( (Float)(105) ));
HXDLIN( 115)					Float optionText1 = optionText->y;
HXDLIN( 115)					 ::objects::CheckboxThingie checkbox1 =  ::objects::CheckboxThingie_obj::__alloc( HX_CTX ,checkbox,optionText1,::hx::IsEq( this->optionsArray->__get(i).StaticCast<  ::options::Option >()->getValue(),true ));
HXLINE( 116)					checkbox1->sprTracker = optionText;
HXLINE( 117)					checkbox1->ID = i;
HXLINE( 118)					this->checkboxGroup->add(checkbox1).StaticCast<  ::objects::CheckboxThingie >();
            				}
            				else {
HXLINE( 120)					optionText->set_x((optionText->x - ( (Float)(80) )));
HXLINE( 121)					optionText->startPosition->set_x((optionText->startPosition->x - ( (Float)(80) )));
HXLINE( 123)					::String valueText = (HX_("",00,00,00,00) + ::Std_obj::string(this->optionsArray->__get(i).StaticCast<  ::options::Option >()->getValue()));
HXDLIN( 123)					 ::objects::AttachedText valueText1 =  ::objects::AttachedText_obj::__alloc( HX_CTX ,valueText,(optionText->get_width() + 60),null(),null(),null());
HXLINE( 124)					valueText1->sprTracker = optionText;
HXLINE( 125)					valueText1->copyAlpha = true;
HXLINE( 126)					valueText1->ID = i;
HXLINE( 127)					this->grpTexts->add(valueText1).StaticCast<  ::objects::AttachedText >();
HXLINE( 128)					this->optionsArray->__get(i).StaticCast<  ::options::Option >()->child = valueText1;
            				}
HXLINE( 131)				this->updateTextFrom(this->optionsArray->__get(i).StaticCast<  ::options::Option >());
            			}
            		}
HXLINE( 134)		this->changeSelection(null());
HXLINE( 135)		this->reloadCheckboxes();
            	}

Dynamic BaseOptionsMenu_obj::__CreateEmpty() { return new BaseOptionsMenu_obj; }

void *BaseOptionsMenu_obj::_hx_vtable = 0;

Dynamic BaseOptionsMenu_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BaseOptionsMenu_obj > _hx_result = new BaseOptionsMenu_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BaseOptionsMenu_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5661ffbf) {
		if (inClassId<=(int)0x3c0818b8) {
			if (inClassId<=(int)0x0cc50116) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0cc50116;
			} else {
				return inClassId==(int)0x3c0818b8;
			}
		} else {
			return inClassId==(int)0x5661ffbf;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void BaseOptionsMenu_obj::addOption( ::options::Option option){
            	HX_STACKFRAME(&_hx_pos_11861b212311743c_138_addOption)
HXLINE( 139)		bool _hx_tmp;
HXDLIN( 139)		if (::hx::IsNotNull( this->optionsArray )) {
HXLINE( 139)			_hx_tmp = (this->optionsArray->length < 1);
            		}
            		else {
HXLINE( 139)			_hx_tmp = true;
            		}
HXDLIN( 139)		if (_hx_tmp) {
HXLINE( 139)			this->optionsArray = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 140)		this->optionsArray->push(option);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseOptionsMenu_obj,addOption,(void))

void BaseOptionsMenu_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_11861b212311743c_147_update)
HXLINE( 148)		if (::backend::Controls_obj::instance->get_UI_UP_P()) {
HXLINE( 150)			this->changeSelection(-1);
            		}
HXLINE( 152)		if (::backend::Controls_obj::instance->get_UI_DOWN_P()) {
HXLINE( 154)			this->changeSelection(1);
            		}
HXLINE( 157)		if (::backend::Controls_obj::instance->get_BACK()) {
HXLINE( 158)			this->close();
HXLINE( 159)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 159)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("Menu/cancelMenu",c9,4d,5d,03),null()),null(),null(),null(),null(),null());
            		}
HXLINE( 162)		 ::flixel::input::mouse::FlxMouse _this = ::flixel::FlxG_obj::mouse;
HXDLIN( 162)		bool _hx_tmp;
HXDLIN( 162)		if ((_this->_prevX == _this->x)) {
HXLINE( 162)			_hx_tmp = (_this->_prevY != _this->y);
            		}
            		else {
HXLINE( 162)			_hx_tmp = true;
            		}
HXDLIN( 162)		if (_hx_tmp) {
HXLINE( 164)			int _g = 0;
HXDLIN( 164)			int _g1 = this->grpOptions->members->get_length();
HXDLIN( 164)			while((_g < _g1)){
HXLINE( 164)				_g = (_g + 1);
HXDLIN( 164)				int i = (_g - 1);
HXLINE( 166)				 ::objects::Alphabet optionText = Dynamic( this->grpOptions->members->__get(i)).StaticCast<  ::objects::Alphabet >();
HXLINE( 167)				if (::flixel::FlxG_obj::mouse->overlaps(optionText,null())) {
HXLINE( 169)					if ((this->curSelected != i)) {
HXLINE( 171)						this->curSelected = i;
HXLINE( 172)						this->changeSelection(null());
HXLINE( 173)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 173)						_hx_tmp->play(::backend::Paths_obj::sound(HX_("Menu/scrollMenu",dc,7d,32,52),null()),null(),null(),null(),null(),null());
            					}
HXLINE( 175)					goto _hx_goto_3;
            				}
            			}
            			_hx_goto_3:;
            		}
HXLINE( 180)		if ((this->nextAccept <= 0)) {
HXLINE( 182)			bool usesCheckbox = true;
HXLINE( 183)			if ((this->curOption->get_type() != HX_("bool",2a,84,1b,41))) {
HXLINE( 185)				usesCheckbox = false;
            			}
HXLINE( 188)			if (usesCheckbox) {
HXLINE( 190)				bool _hx_tmp;
HXDLIN( 190)				if (!(::backend::Controls_obj::instance->get_ACCEPT())) {
HXLINE( 190)					_hx_tmp = (::flixel::FlxG_obj::mouse->_leftButton->current == 2);
            				}
            				else {
HXLINE( 190)					_hx_tmp = true;
            				}
HXDLIN( 190)				if (_hx_tmp) {
HXLINE( 191)					if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 193)						bool clickCheck = false;
HXLINE( 194)						{
HXLINE( 194)							 ::Dynamic filter = null();
HXDLIN( 194)							 ::flixel::group::FlxTypedGroupIterator checkboxGroup =  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->checkboxGroup->members,filter);
HXDLIN( 194)							while(checkboxGroup->hasNext()){
HXLINE( 194)								 ::objects::CheckboxThingie checkboxGroup1 = checkboxGroup->next().StaticCast<  ::objects::CheckboxThingie >();
HXLINE( 196)								if (::flixel::FlxG_obj::mouse->overlaps(checkboxGroup1,null())) {
HXLINE( 198)									clickCheck = true;
HXLINE( 199)									goto _hx_goto_4;
            								}
            							}
            							_hx_goto_4:;
            						}
HXLINE( 202)						if (!(clickCheck)) {
HXLINE( 204)							return;
            						}
            					}
HXLINE( 207)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 207)					_hx_tmp->play(::backend::Paths_obj::sound(HX_("Menu/scrollMenu",dc,7d,32,52),null()),null(),null(),null(),null(),null());
HXLINE( 209)					 ::options::Option _hx_tmp1 = this->curOption;
HXDLIN( 209)					_hx_tmp1->setValue(!(( (bool)(this->curOption->getValue()) )));
HXLINE( 210)					this->curOption->change();
HXLINE( 211)					this->reloadCheckboxes();
            				}
            			}
            			else {
HXLINE( 214)				bool _hx_tmp;
HXDLIN( 214)				if (!(::backend::Controls_obj::instance->get_UI_LEFT())) {
HXLINE( 214)					_hx_tmp = ::backend::Controls_obj::instance->get_UI_RIGHT();
            				}
            				else {
HXLINE( 214)					_hx_tmp = true;
            				}
HXDLIN( 214)				if (_hx_tmp) {
HXLINE( 215)					bool pressed;
HXDLIN( 215)					if (!(::backend::Controls_obj::instance->get_UI_LEFT_P())) {
HXLINE( 215)						pressed = ::backend::Controls_obj::instance->get_UI_RIGHT_P();
            					}
            					else {
HXLINE( 215)						pressed = true;
            					}
HXLINE( 216)					bool _hx_tmp;
HXDLIN( 216)					if (!((this->holdTime > ((Float)0.5)))) {
HXLINE( 216)						_hx_tmp = pressed;
            					}
            					else {
HXLINE( 216)						_hx_tmp = true;
            					}
HXDLIN( 216)					if (_hx_tmp) {
HXLINE( 217)						if (pressed) {
HXLINE( 218)							 ::Dynamic add = null();
HXLINE( 219)							if ((this->curOption->get_type() != HX_("string",d1,28,30,11))) {
HXLINE( 220)								if (::backend::Controls_obj::instance->get_UI_LEFT()) {
HXLINE( 220)									add = -(this->curOption->changeValue);
            								}
            								else {
HXLINE( 220)									add = this->curOption->changeValue;
            								}
            							}
HXLINE( 223)							::String _hx_switch_0 = this->curOption->get_type();
            							if (  (_hx_switch_0==HX_("float",9c,c5,96,02)) ||  (_hx_switch_0==HX_("int",ef,0c,50,00)) ||  (_hx_switch_0==HX_("percent",c5,aa,da,78)) ){
HXLINE( 226)								this->holdValue = ( (Float)((this->curOption->getValue() + add)) );
HXLINE( 227)								if (::hx::IsLess( this->holdValue,this->curOption->minValue )) {
HXLINE( 227)									this->holdValue = ( (Float)(this->curOption->minValue) );
            								}
            								else {
HXLINE( 228)									if (::hx::IsGreater( this->holdValue,this->curOption->maxValue )) {
HXLINE( 228)										this->holdValue = ( (Float)(this->curOption->maxValue) );
            									}
            								}
HXLINE( 230)								::String _hx_switch_1 = this->curOption->get_type();
            								if (  (_hx_switch_1==HX_("int",ef,0c,50,00)) ){
HXLINE( 233)									this->holdValue = ( (Float)(::Math_obj::round(this->holdValue)) );
HXLINE( 234)									this->curOption->setValue(this->holdValue);
HXLINE( 232)									goto _hx_goto_6;
            								}
            								if (  (_hx_switch_1==HX_("float",9c,c5,96,02)) ||  (_hx_switch_1==HX_("percent",c5,aa,da,78)) ){
HXLINE( 237)									this->holdValue = ::flixel::math::FlxMath_obj::roundDecimal(this->holdValue,this->curOption->decimals);
HXLINE( 238)									this->curOption->setValue(this->holdValue);
HXLINE( 236)									goto _hx_goto_6;
            								}
            								_hx_goto_6:;
HXLINE( 225)								goto _hx_goto_5;
            							}
            							if (  (_hx_switch_0==HX_("string",d1,28,30,11)) ){
HXLINE( 242)								int num = this->curOption->curOption;
HXLINE( 243)								if (::backend::Controls_obj::instance->get_UI_LEFT_P()) {
HXLINE( 243)									num = (num - 1);
            								}
            								else {
HXLINE( 244)									num = (num + 1);
            								}
HXLINE( 246)								if ((num < 0)) {
HXLINE( 247)									num = (this->curOption->options->length - 1);
            								}
            								else {
HXLINE( 248)									if ((num >= this->curOption->options->length)) {
HXLINE( 249)										num = 0;
            									}
            								}
HXLINE( 252)								this->curOption->curOption = num;
HXLINE( 253)								this->curOption->setValue(this->curOption->options->__get(num));
HXLINE( 241)								goto _hx_goto_5;
            							}
            							_hx_goto_5:;
HXLINE( 256)							this->updateTextFrom(this->curOption);
HXLINE( 257)							this->curOption->change();
HXLINE( 258)							 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 258)							_hx_tmp->play(::backend::Paths_obj::sound(HX_("Menu/scrollMenu",dc,7d,32,52),null()),null(),null(),null(),null(),null());
            						}
            						else {
HXLINE( 259)							if ((this->curOption->get_type() != HX_("string",d1,28,30,11))) {
HXLINE( 260)								 ::options::BaseOptionsMenu _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)								Float _hx_tmp1 = _hx_tmp->holdValue;
HXDLIN( 260)								Float _hx_tmp2 = (this->curOption->scrollSpeed * elapsed);
HXDLIN( 260)								int _hx_tmp3;
HXDLIN( 260)								if (::backend::Controls_obj::instance->get_UI_LEFT()) {
HXLINE( 260)									_hx_tmp3 = -1;
            								}
            								else {
HXLINE( 260)									_hx_tmp3 = 1;
            								}
HXDLIN( 260)								_hx_tmp->holdValue = (_hx_tmp1 + (_hx_tmp2 * ( (Float)(_hx_tmp3) )));
HXLINE( 261)								if (::hx::IsLess( this->holdValue,this->curOption->minValue )) {
HXLINE( 261)									this->holdValue = ( (Float)(this->curOption->minValue) );
            								}
            								else {
HXLINE( 262)									if (::hx::IsGreater( this->holdValue,this->curOption->maxValue )) {
HXLINE( 262)										this->holdValue = ( (Float)(this->curOption->maxValue) );
            									}
            								}
HXLINE( 264)								::String _hx_switch_2 = this->curOption->get_type();
            								if (  (_hx_switch_2==HX_("int",ef,0c,50,00)) ){
HXLINE( 267)									this->curOption->setValue(::Math_obj::round(this->holdValue));
HXDLIN( 267)									goto _hx_goto_7;
            								}
            								if (  (_hx_switch_2==HX_("float",9c,c5,96,02)) ||  (_hx_switch_2==HX_("percent",c5,aa,da,78)) ){
HXLINE( 270)									 ::options::Option _hx_tmp = this->curOption;
HXDLIN( 270)									_hx_tmp->setValue(::flixel::math::FlxMath_obj::roundDecimal(this->holdValue,this->curOption->decimals));
HXDLIN( 270)									goto _hx_goto_7;
            								}
            								_hx_goto_7:;
HXLINE( 272)								this->updateTextFrom(this->curOption);
HXLINE( 273)								this->curOption->change();
            							}
            						}
            					}
HXLINE( 277)					if ((this->curOption->get_type() != HX_("string",d1,28,30,11))) {
HXLINE( 278)						 ::options::BaseOptionsMenu _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 278)						_hx_tmp->holdTime = (_hx_tmp->holdTime + elapsed);
            					}
            				}
            				else {
HXLINE( 280)					bool _hx_tmp;
HXDLIN( 280)					if (!(::backend::Controls_obj::instance->get_UI_LEFT_R())) {
HXLINE( 280)						_hx_tmp = ::backend::Controls_obj::instance->get_UI_RIGHT_R();
            					}
            					else {
HXLINE( 280)						_hx_tmp = true;
            					}
HXDLIN( 280)					if (_hx_tmp) {
HXLINE( 281)						this->clearHold();
            					}
            				}
            			}
HXLINE( 285)			if (::backend::Controls_obj::instance->get_RESET()) {
HXLINE( 287)				 ::options::Option leOption = this->optionsArray->__get(this->curSelected).StaticCast<  ::options::Option >();
HXLINE( 288)				leOption->setValue(leOption->defaultValue);
HXLINE( 289)				if ((leOption->get_type() != HX_("bool",2a,84,1b,41))) {
HXLINE( 291)					if ((leOption->get_type() == HX_("string",d1,28,30,11))) {
HXLINE( 291)						::Array< ::String > leOption1 = leOption->options;
HXDLIN( 291)						leOption->curOption = leOption1->indexOf(leOption->getValue(),null());
            					}
HXLINE( 292)					this->updateTextFrom(leOption);
            				}
HXLINE( 294)				leOption->change();
HXLINE( 295)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 295)				_hx_tmp->play(::backend::Paths_obj::sound(HX_("Menu/cancelMenu",c9,4d,5d,03),null()),null(),null(),null(),null(),null());
HXLINE( 296)				this->reloadCheckboxes();
            			}
            		}
HXLINE( 300)		if ((this->nextAccept > 0)) {
HXLINE( 301)			 ::options::BaseOptionsMenu _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)			_hx_tmp->nextAccept = (_hx_tmp->nextAccept - 1);
            		}
HXLINE( 303)		this->super::update(elapsed);
            	}


void BaseOptionsMenu_obj::updateTextFrom( ::options::Option option){
            	HX_STACKFRAME(&_hx_pos_11861b212311743c_306_updateTextFrom)
HXLINE( 307)		::String text = option->displayFormat;
HXLINE( 308)		 ::Dynamic val = option->getValue();
HXLINE( 309)		if ((option->get_type() == HX_("percent",c5,aa,da,78))) {
HXLINE( 309)			val = (val * 100);
            		}
HXLINE( 310)		 ::Dynamic def = option->defaultValue;
HXLINE( 311)		option->set_text(::StringTools_obj::replace(::StringTools_obj::replace(text,HX_("%v",b1,20,00,00),( (::String)(val) )),HX_("%d",9f,20,00,00),( (::String)(def) )));
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseOptionsMenu_obj,updateTextFrom,(void))

void BaseOptionsMenu_obj::clearHold(){
            	HX_STACKFRAME(&_hx_pos_11861b212311743c_315_clearHold)
HXLINE( 316)		if ((this->holdTime > ((Float)0.5))) {
HXLINE( 317)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 317)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("Menu/scrollMenu",dc,7d,32,52),null()),null(),null(),null(),null(),null());
            		}
HXLINE( 319)		this->holdTime = ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseOptionsMenu_obj,clearHold,(void))

void BaseOptionsMenu_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_11861b212311743c_323_changeSelection)
HXLINE( 324)		 ::options::BaseOptionsMenu _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 324)		_hx_tmp->curSelected = (_hx_tmp->curSelected + change);
HXLINE( 325)		if ((this->curSelected < 0)) {
HXLINE( 326)			this->curSelected = (this->optionsArray->length - 1);
            		}
HXLINE( 327)		if ((this->curSelected >= this->optionsArray->length)) {
HXLINE( 328)			this->curSelected = 0;
            		}
HXLINE( 330)		this->descText->set_text(this->optionsArray->__get(this->curSelected).StaticCast<  ::options::Option >()->description);
HXLINE( 331)		{
HXLINE( 331)			 ::flixel::text::FlxText _this = this->descText;
HXDLIN( 331)			int axes = 16;
HXDLIN( 331)			bool _hx_tmp1;
HXDLIN( 331)			if ((axes != 1)) {
HXLINE( 331)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE( 331)				_hx_tmp1 = true;
            			}
HXDLIN( 331)			if (_hx_tmp1) {
HXLINE( 331)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 331)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 331)			bool _hx_tmp2;
HXDLIN( 331)			if ((axes != 16)) {
HXLINE( 331)				_hx_tmp2 = (axes == 17);
            			}
            			else {
HXLINE( 331)				_hx_tmp2 = true;
            			}
HXDLIN( 331)			if (_hx_tmp2) {
HXLINE( 331)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 331)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 332)		 ::flixel::text::FlxText fh = this->descText;
HXDLIN( 332)		fh->set_y((fh->y + 270));
HXLINE( 334)		int bullShit = 0;
HXLINE( 336)		{
HXLINE( 336)			int _g = 0;
HXDLIN( 336)			::Array< ::Dynamic> _g1 = this->grpOptions->members;
HXDLIN( 336)			while((_g < _g1->length)){
HXLINE( 336)				 ::objects::Alphabet item = _g1->__get(_g).StaticCast<  ::objects::Alphabet >();
HXDLIN( 336)				_g = (_g + 1);
HXLINE( 337)				item->targetY = (bullShit - this->curSelected);
HXLINE( 338)				bullShit = (bullShit + 1);
HXLINE( 340)				item->set_alpha(((Float)0.6));
HXLINE( 341)				if ((item->targetY == 0)) {
HXLINE( 342)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 345)		{
HXLINE( 345)			 ::Dynamic filter = null();
HXDLIN( 345)			 ::flixel::group::FlxTypedGroupIterator text =  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->grpTexts->members,filter);
HXDLIN( 345)			while(text->hasNext()){
HXLINE( 345)				 ::objects::AttachedText text1 = text->next().StaticCast<  ::objects::AttachedText >();
HXLINE( 346)				text1->set_alpha(((Float)0.6));
HXLINE( 347)				if ((text1->ID == this->curSelected)) {
HXLINE( 348)					text1->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 352)		this->descBox->setPosition((this->descText->x - ( (Float)(10) )),(this->descText->y - ( (Float)(10) )));
HXLINE( 353)		 ::flixel::FlxSprite _hx_tmp3 = this->descBox;
HXDLIN( 353)		int _hx_tmp4 = ::Std_obj::_hx_int((this->descText->get_width() + 20));
HXDLIN( 353)		_hx_tmp3->setGraphicSize(_hx_tmp4,::Std_obj::_hx_int((this->descText->get_height() + 25)));
HXLINE( 354)		this->descBox->updateHitbox();
HXLINE( 356)		this->curOption = this->optionsArray->__get(this->curSelected).StaticCast<  ::options::Option >();
HXLINE( 357)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp5 = ::flixel::FlxG_obj::sound;
HXDLIN( 357)		_hx_tmp5->play(::backend::Paths_obj::sound(HX_("Menu/scrollMenu",dc,7d,32,52),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseOptionsMenu_obj,changeSelection,(void))

void BaseOptionsMenu_obj::reloadCheckboxes(){
            	HX_GC_STACKFRAME(&_hx_pos_11861b212311743c_361_reloadCheckboxes)
HXDLIN( 361)		 ::Dynamic filter = null();
HXDLIN( 361)		 ::flixel::group::FlxTypedGroupIterator checkbox =  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->checkboxGroup->members,filter);
HXDLIN( 361)		while(checkbox->hasNext()){
HXDLIN( 361)			 ::objects::CheckboxThingie checkbox1 = checkbox->next().StaticCast<  ::objects::CheckboxThingie >();
HXLINE( 362)			checkbox1->set_daValue(::hx::IsEq( this->optionsArray->__get(checkbox1->ID).StaticCast<  ::options::Option >()->getValue(),true ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseOptionsMenu_obj,reloadCheckboxes,(void))

::Array< ::String > BaseOptionsMenu_obj::bgPaths;

 ::Dynamic BaseOptionsMenu_obj::randomizeBG(){
            	HX_STACKFRAME(&_hx_pos_11861b212311743c_54_randomizeBG)
HXLINE(  55)		int chance = ::flixel::FlxG_obj::random->_hx_int(0,(::options::BaseOptionsMenu_obj::bgPaths->length - 1),null());
HXLINE(  56)		return ::backend::Paths_obj::image(::options::BaseOptionsMenu_obj::bgPaths->__get(chance),null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BaseOptionsMenu_obj,randomizeBG,return )


::hx::ObjectPtr< BaseOptionsMenu_obj > BaseOptionsMenu_obj::__new() {
	::hx::ObjectPtr< BaseOptionsMenu_obj > __this = new BaseOptionsMenu_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BaseOptionsMenu_obj > BaseOptionsMenu_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BaseOptionsMenu_obj *__this = (BaseOptionsMenu_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BaseOptionsMenu_obj), true, "options.BaseOptionsMenu"));
	*(void **)__this = BaseOptionsMenu_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BaseOptionsMenu_obj::BaseOptionsMenu_obj()
{
}

void BaseOptionsMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseOptionsMenu);
	HX_MARK_MEMBER_NAME(curOption,"curOption");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(optionsArray,"optionsArray");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(checkboxGroup,"checkboxGroup");
	HX_MARK_MEMBER_NAME(grpTexts,"grpTexts");
	HX_MARK_MEMBER_NAME(descBox,"descBox");
	HX_MARK_MEMBER_NAME(descText,"descText");
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(rpcTitle,"rpcTitle");
	HX_MARK_MEMBER_NAME(nextAccept,"nextAccept");
	HX_MARK_MEMBER_NAME(holdTime,"holdTime");
	HX_MARK_MEMBER_NAME(holdValue,"holdValue");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BaseOptionsMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(curOption,"curOption");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(optionsArray,"optionsArray");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(checkboxGroup,"checkboxGroup");
	HX_VISIT_MEMBER_NAME(grpTexts,"grpTexts");
	HX_VISIT_MEMBER_NAME(descBox,"descBox");
	HX_VISIT_MEMBER_NAME(descText,"descText");
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(rpcTitle,"rpcTitle");
	HX_VISIT_MEMBER_NAME(nextAccept,"nextAccept");
	HX_VISIT_MEMBER_NAME(holdTime,"holdTime");
	HX_VISIT_MEMBER_NAME(holdValue,"holdValue");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BaseOptionsMenu_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return ::hx::Val( title ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descBox") ) { return ::hx::Val( descBox ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpTexts") ) { return ::hx::Val( grpTexts ); }
		if (HX_FIELD_EQ(inName,"descText") ) { return ::hx::Val( descText ); }
		if (HX_FIELD_EQ(inName,"rpcTitle") ) { return ::hx::Val( rpcTitle ); }
		if (HX_FIELD_EQ(inName,"holdTime") ) { return ::hx::Val( holdTime ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"curOption") ) { return ::hx::Val( curOption ); }
		if (HX_FIELD_EQ(inName,"addOption") ) { return ::hx::Val( addOption_dyn() ); }
		if (HX_FIELD_EQ(inName,"holdValue") ) { return ::hx::Val( holdValue ); }
		if (HX_FIELD_EQ(inName,"clearHold") ) { return ::hx::Val( clearHold_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { return ::hx::Val( nextAccept ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"optionsArray") ) { return ::hx::Val( optionsArray ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkboxGroup") ) { return ::hx::Val( checkboxGroup ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateTextFrom") ) { return ::hx::Val( updateTextFrom_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"reloadCheckboxes") ) { return ::hx::Val( reloadCheckboxes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BaseOptionsMenu_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"bgPaths") ) { outValue = ( bgPaths ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"randomizeBG") ) { outValue = randomizeBG_dyn(); return true; }
	}
	return false;
}

::hx::Val BaseOptionsMenu_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descBox") ) { descBox=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpTexts") ) { grpTexts=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"descText") ) { descText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rpcTitle") ) { rpcTitle=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdTime") ) { holdTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"curOption") ) { curOption=inValue.Cast<  ::options::Option >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdValue") ) { holdValue=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { nextAccept=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"optionsArray") ) { optionsArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkboxGroup") ) { checkboxGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BaseOptionsMenu_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"bgPaths") ) { bgPaths=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

void BaseOptionsMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curOption",15,ed,07,9c));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("optionsArray",5b,b5,f1,e8));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("checkboxGroup",fc,3d,bc,23));
	outFields->push(HX_("grpTexts",01,f1,99,f0));
	outFields->push(HX_("descBox",3a,20,25,19));
	outFields->push(HX_("descText",9e,53,35,f3));
	outFields->push(HX_("title",98,15,3b,10));
	outFields->push(HX_("rpcTitle",73,04,98,e2));
	outFields->push(HX_("nextAccept",5b,44,38,c0));
	outFields->push(HX_("holdTime",ec,cc,bf,3e));
	outFields->push(HX_("holdValue",b2,41,96,ca));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BaseOptionsMenu_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::options::Option */ ,(int)offsetof(BaseOptionsMenu_obj,curOption),HX_("curOption",15,ed,07,9c)},
	{::hx::fsInt,(int)offsetof(BaseOptionsMenu_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(BaseOptionsMenu_obj,optionsArray),HX_("optionsArray",5b,b5,f1,e8)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(BaseOptionsMenu_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(BaseOptionsMenu_obj,checkboxGroup),HX_("checkboxGroup",fc,3d,bc,23)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(BaseOptionsMenu_obj,grpTexts),HX_("grpTexts",01,f1,99,f0)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(BaseOptionsMenu_obj,descBox),HX_("descBox",3a,20,25,19)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(BaseOptionsMenu_obj,descText),HX_("descText",9e,53,35,f3)},
	{::hx::fsString,(int)offsetof(BaseOptionsMenu_obj,title),HX_("title",98,15,3b,10)},
	{::hx::fsString,(int)offsetof(BaseOptionsMenu_obj,rpcTitle),HX_("rpcTitle",73,04,98,e2)},
	{::hx::fsInt,(int)offsetof(BaseOptionsMenu_obj,nextAccept),HX_("nextAccept",5b,44,38,c0)},
	{::hx::fsFloat,(int)offsetof(BaseOptionsMenu_obj,holdTime),HX_("holdTime",ec,cc,bf,3e)},
	{::hx::fsFloat,(int)offsetof(BaseOptionsMenu_obj,holdValue),HX_("holdValue",b2,41,96,ca)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo BaseOptionsMenu_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &BaseOptionsMenu_obj::bgPaths,HX_("bgPaths",29,1b,7e,6a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String BaseOptionsMenu_obj_sMemberFields[] = {
	HX_("curOption",15,ed,07,9c),
	HX_("curSelected",fb,eb,ab,32),
	HX_("optionsArray",5b,b5,f1,e8),
	HX_("grpOptions",f9,45,d8,00),
	HX_("checkboxGroup",fc,3d,bc,23),
	HX_("grpTexts",01,f1,99,f0),
	HX_("descBox",3a,20,25,19),
	HX_("descText",9e,53,35,f3),
	HX_("title",98,15,3b,10),
	HX_("rpcTitle",73,04,98,e2),
	HX_("addOption",76,08,9f,e3),
	HX_("nextAccept",5b,44,38,c0),
	HX_("holdTime",ec,cc,bf,3e),
	HX_("holdValue",b2,41,96,ca),
	HX_("update",09,86,05,87),
	HX_("updateTextFrom",e0,eb,e7,7b),
	HX_("clearHold",6c,b1,d3,b8),
	HX_("changeSelection",bc,98,b5,48),
	HX_("reloadCheckboxes",2a,e2,2a,45),
	::String(null()) };

static void BaseOptionsMenu_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BaseOptionsMenu_obj::bgPaths,"bgPaths");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BaseOptionsMenu_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BaseOptionsMenu_obj::bgPaths,"bgPaths");
};

#endif

::hx::Class BaseOptionsMenu_obj::__mClass;

static ::String BaseOptionsMenu_obj_sStaticFields[] = {
	HX_("bgPaths",29,1b,7e,6a),
	HX_("randomizeBG",36,81,6b,9d),
	::String(null())
};

void BaseOptionsMenu_obj::__register()
{
	BaseOptionsMenu_obj _hx_dummy;
	BaseOptionsMenu_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.BaseOptionsMenu",5c,5e,30,7f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BaseOptionsMenu_obj::__GetStatic;
	__mClass->mSetStaticField = &BaseOptionsMenu_obj::__SetStatic;
	__mClass->mMarkFunc = BaseOptionsMenu_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BaseOptionsMenu_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BaseOptionsMenu_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BaseOptionsMenu_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BaseOptionsMenu_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BaseOptionsMenu_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BaseOptionsMenu_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void BaseOptionsMenu_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_11861b212311743c_24_boot)
HXDLIN(  24)		bgPaths = ::Array_obj< ::String >::fromData( _hx_array_data_7f305e5c_18,26);
            	}
}

} // end namespace options
