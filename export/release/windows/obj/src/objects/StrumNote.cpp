#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_objects_Note
#include <objects/Note.h>
#endif
#ifndef INCLUDED_objects_StrumNote
#include <objects/StrumNote.h>
#endif
#ifndef INCLUDED_shaders_RGBPalette
#include <shaders/RGBPalette.h>
#endif
#ifndef INCLUDED_shaders_RGBShaderReference
#include <shaders/RGBShaderReference.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cf63324388460f24_6_new,"objects.StrumNote","new",0x7dc6a313,"objects.StrumNote.new","objects/StrumNote.hx",6,0x9c6a1d3e)
HX_LOCAL_STACK_FRAME(_hx_pos_cf63324388460f24_17_set_texture,"objects.StrumNote","set_texture",0xf5a96db1,"objects.StrumNote.set_texture","objects/StrumNote.hx",17,0x9c6a1d3e)
HX_LOCAL_STACK_FRAME(_hx_pos_cf63324388460f24_61_reloadNote,"objects.StrumNote","reloadNote",0xe8c2f198,"objects.StrumNote.reloadNote","objects/StrumNote.hx",61,0x9c6a1d3e)
static const int _hx_array_data_4e351da1_5[] = {
	(int)6,
};
static const int _hx_array_data_4e351da1_6[] = {
	(int)7,
};
static const int _hx_array_data_4e351da1_7[] = {
	(int)5,
};
static const int _hx_array_data_4e351da1_8[] = {
	(int)4,
};
static const int _hx_array_data_4e351da1_9[] = {
	(int)0,
};
static const int _hx_array_data_4e351da1_10[] = {
	(int)4,(int)8,
};
static const int _hx_array_data_4e351da1_11[] = {
	(int)12,(int)16,
};
static const int _hx_array_data_4e351da1_12[] = {
	(int)1,
};
static const int _hx_array_data_4e351da1_13[] = {
	(int)5,(int)9,
};
static const int _hx_array_data_4e351da1_14[] = {
	(int)13,(int)17,
};
static const int _hx_array_data_4e351da1_15[] = {
	(int)2,
};
static const int _hx_array_data_4e351da1_16[] = {
	(int)6,(int)10,
};
static const int _hx_array_data_4e351da1_17[] = {
	(int)14,(int)18,
};
static const int _hx_array_data_4e351da1_18[] = {
	(int)3,
};
static const int _hx_array_data_4e351da1_19[] = {
	(int)7,(int)11,
};
static const int _hx_array_data_4e351da1_20[] = {
	(int)15,(int)19,
};
HX_LOCAL_STACK_FRAME(_hx_pos_cf63324388460f24_138_postAddedToGroup,"objects.StrumNote","postAddedToGroup",0x887584d1,"objects.StrumNote.postAddedToGroup","objects/StrumNote.hx",138,0x9c6a1d3e)
HX_LOCAL_STACK_FRAME(_hx_pos_cf63324388460f24_146_update,"objects.StrumNote","update",0xc1f32536,"objects.StrumNote.update","objects/StrumNote.hx",146,0x9c6a1d3e)
HX_LOCAL_STACK_FRAME(_hx_pos_cf63324388460f24_157_playAnim,"objects.StrumNote","playAnim",0x397a6e92,"objects.StrumNote.playAnim","objects/StrumNote.hx",157,0x9c6a1d3e)
namespace objects{

void StrumNote_obj::__construct(Float x,Float y,int leData,int player){
            	HX_GC_STACKFRAME(&_hx_pos_cf63324388460f24_6_new)
HXLINE(  25)		this->useRGBShader = true;
HXLINE(  16)		this->texture = null();
HXLINE(  13)		this->sustainReduce = true;
HXLINE(  12)		this->downScroll = false;
HXLINE(  11)		this->direction = ((Float)90);
HXLINE(  10)		this->noteData = 0;
HXLINE(   9)		this->resetAnim = ((Float)0);
HXLINE(  27)		this->rgbShader =  ::shaders::RGBShaderReference_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),::objects::Note_obj::initializeGlobalRGBShader(leData));
HXLINE(  28)		this->rgbShader->set_enabled(false);
HXLINE(  29)		bool _hx_tmp;
HXDLIN(  29)		if (::hx::IsNotNull( ::states::PlayState_obj::SONG )) {
HXLINE(  29)			_hx_tmp = ( (bool)(::states::PlayState_obj::SONG->__Field(HX_("disableNoteRGB",33,ad,d1,4a),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  29)			_hx_tmp = false;
            		}
HXDLIN(  29)		if (_hx_tmp) {
HXLINE(  29)			this->useRGBShader = false;
            		}
HXLINE(  31)		::Array< int > arr = ::backend::ClientPrefs_obj::data->arrowRGB->__get(leData).StaticCast< ::Array< int > >();
HXLINE(  32)		if (::states::PlayState_obj::get_isPixelStage()) {
HXLINE(  32)			arr = ::backend::ClientPrefs_obj::data->arrowRGBPixel->__get(leData).StaticCast< ::Array< int > >();
            		}
HXLINE(  34)		if ((leData <= arr->length)) {
HXLINE(  38)			this->rgbShader->set_r(arr->__get(0));
HXLINE(  39)			this->rgbShader->set_g(arr->__get(1));
HXLINE(  40)			this->rgbShader->set_b(arr->__get(2));
            		}
HXLINE(  44)		this->noteData = leData;
HXLINE(  45)		this->player = player;
HXLINE(  46)		this->noteData = leData;
HXLINE(  47)		super::__construct(x,y,null());
HXLINE(  49)		::String skin = null();
HXLINE(  50)		bool _hx_tmp1;
HXDLIN(  50)		bool _hx_tmp2;
HXDLIN(  50)		if (::hx::IsNotNull( ::states::PlayState_obj::SONG )) {
HXLINE(  50)			_hx_tmp2 = ::hx::IsNotNull( ::states::PlayState_obj::SONG->__Field(HX_("arrowSkin",e6,d4,f8,07),::hx::paccDynamic) );
            		}
            		else {
HXLINE(  50)			_hx_tmp2 = false;
            		}
HXDLIN(  50)		if (_hx_tmp2) {
HXLINE(  50)			_hx_tmp1 = (( (::String)(::states::PlayState_obj::SONG->__Field(HX_("arrowSkin",e6,d4,f8,07),::hx::paccDynamic)) ).length > 1);
            		}
            		else {
HXLINE(  50)			_hx_tmp1 = false;
            		}
HXDLIN(  50)		if (_hx_tmp1) {
HXLINE(  50)			skin = ( (::String)(::states::PlayState_obj::SONG->__Field(HX_("arrowSkin",e6,d4,f8,07),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  51)			skin = ::objects::Note_obj::defaultNoteSkin;
            		}
HXLINE(  53)		::String customSkin = (skin + ::objects::Note_obj::getNoteSkinPostfix());
HXLINE(  54)		if (::backend::Paths_obj::fileExists(((HX_("images/",77,50,74,c1) + customSkin) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),null(),null())) {
HXLINE(  54)			skin = customSkin;
            		}
HXLINE(  56)		this->set_texture(skin);
HXLINE(  57)		{
HXLINE(  57)			 ::flixel::math::FlxBasePoint this1 = this->scrollFactor;
HXDLIN(  57)			this1->set_x(( (Float)(0) ));
HXDLIN(  57)			this1->set_y(( (Float)(0) ));
            		}
            	}

Dynamic StrumNote_obj::__CreateEmpty() { return new StrumNote_obj; }

void *StrumNote_obj::_hx_vtable = 0;

Dynamic StrumNote_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StrumNote_obj > _hx_result = new StrumNote_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool StrumNote_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x76291167) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x76291167;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

::String StrumNote_obj::set_texture(::String value){
            	HX_STACKFRAME(&_hx_pos_cf63324388460f24_17_set_texture)
HXLINE(  18)		if ((this->texture != value)) {
HXLINE(  19)			this->texture = value;
HXLINE(  20)			this->reloadNote();
            		}
HXLINE(  22)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(StrumNote_obj,set_texture,return )

void StrumNote_obj::reloadNote(){
            	HX_STACKFRAME(&_hx_pos_cf63324388460f24_61_reloadNote)
HXLINE(  62)		::String lastAnim = null();
HXLINE(  63)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE(  63)			lastAnim = this->animation->_curAnim->name;
            		}
HXLINE(  65)		if (::states::PlayState_obj::get_isPixelStage()) {
HXLINE(  67)			this->loadGraphic(::backend::Paths_obj::image((HX_("pixelUI/",95,50,4f,7e) + this->texture),null(),null()),null(),null(),null(),null(),null());
HXLINE(  68)			this->set_width((this->get_width() / ( (Float)(4) )));
HXLINE(  69)			this->set_height((this->get_height() / ( (Float)(5) )));
HXLINE(  70)			 ::flixel::graphics::FlxGraphic _hx_tmp = ::backend::Paths_obj::image((HX_("pixelUI/",95,50,4f,7e) + this->texture),null(),null());
HXDLIN(  70)			int _hx_tmp1 = ::Math_obj::floor(this->get_width());
HXDLIN(  70)			this->loadGraphic(_hx_tmp,true,_hx_tmp1,::Math_obj::floor(this->get_height()),null(),null());
HXLINE(  72)			this->set_antialiasing(false);
HXLINE(  73)			Float _hx_tmp2 = this->get_width();
HXDLIN(  73)			this->setGraphicSize(::Std_obj::_hx_int((_hx_tmp2 * ::states::PlayState_obj::daPixelZoom)),null());
HXLINE(  75)			this->animation->add(HX_("green",c3,0e,ed,99),::Array_obj< int >::fromData( _hx_array_data_4e351da1_5,1),null(),null(),null(),null());
HXLINE(  76)			this->animation->add(HX_("red",51,d9,56,00),::Array_obj< int >::fromData( _hx_array_data_4e351da1_6,1),null(),null(),null(),null());
HXLINE(  77)			this->animation->add(HX_("blue",9a,42,19,41),::Array_obj< int >::fromData( _hx_array_data_4e351da1_7,1),null(),null(),null(),null());
HXLINE(  78)			this->animation->add(HX_("purple",3c,f6,89,71),::Array_obj< int >::fromData( _hx_array_data_4e351da1_8,1),null(),null(),null(),null());
HXLINE(  79)			Float _hx_switch_0 = ::hx::Mod(::Math_obj::abs(( (Float)(this->noteData) )),4);
            			if (  (_hx_switch_0==( (Float)(0) )) ){
HXLINE(  82)				this->animation->add(HX_("static",ae,dc,fb,05),::Array_obj< int >::fromData( _hx_array_data_4e351da1_9,1),null(),null(),null(),null());
HXLINE(  83)				this->animation->add(HX_("pressed",a2,d2,e6,39),::Array_obj< int >::fromData( _hx_array_data_4e351da1_10,2),12,false,null(),null());
HXLINE(  84)				this->animation->add(HX_("confirm",00,9d,39,10),::Array_obj< int >::fromData( _hx_array_data_4e351da1_11,2),24,false,null(),null());
HXLINE(  81)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==( (Float)(1) )) ){
HXLINE(  86)				this->animation->add(HX_("static",ae,dc,fb,05),::Array_obj< int >::fromData( _hx_array_data_4e351da1_12,1),null(),null(),null(),null());
HXLINE(  87)				this->animation->add(HX_("pressed",a2,d2,e6,39),::Array_obj< int >::fromData( _hx_array_data_4e351da1_13,2),12,false,null(),null());
HXLINE(  88)				this->animation->add(HX_("confirm",00,9d,39,10),::Array_obj< int >::fromData( _hx_array_data_4e351da1_14,2),24,false,null(),null());
HXLINE(  85)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==( (Float)(2) )) ){
HXLINE(  90)				this->animation->add(HX_("static",ae,dc,fb,05),::Array_obj< int >::fromData( _hx_array_data_4e351da1_15,1),null(),null(),null(),null());
HXLINE(  91)				this->animation->add(HX_("pressed",a2,d2,e6,39),::Array_obj< int >::fromData( _hx_array_data_4e351da1_16,2),12,false,null(),null());
HXLINE(  92)				this->animation->add(HX_("confirm",00,9d,39,10),::Array_obj< int >::fromData( _hx_array_data_4e351da1_17,2),12,false,null(),null());
HXLINE(  89)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==( (Float)(3) )) ){
HXLINE(  94)				this->animation->add(HX_("static",ae,dc,fb,05),::Array_obj< int >::fromData( _hx_array_data_4e351da1_18,1),null(),null(),null(),null());
HXLINE(  95)				this->animation->add(HX_("pressed",a2,d2,e6,39),::Array_obj< int >::fromData( _hx_array_data_4e351da1_19,2),12,false,null(),null());
HXLINE(  96)				this->animation->add(HX_("confirm",00,9d,39,10),::Array_obj< int >::fromData( _hx_array_data_4e351da1_20,2),24,false,null(),null());
HXLINE(  93)				goto _hx_goto_2;
            			}
            			_hx_goto_2:;
            		}
            		else {
HXLINE( 101)			::String key = this->texture;
HXDLIN( 101)			::String library = null();
HXDLIN( 101)			 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(key,null(),true);
HXDLIN( 101)			bool xmlExists = false;
HXDLIN( 101)			::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 101)			if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 101)				xmlExists = true;
            			}
HXDLIN( 101)			 ::Dynamic _hx_tmp;
HXDLIN( 101)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 101)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE( 101)				_hx_tmp = ::backend::Paths_obj::image(key,library,true);
            			}
HXDLIN( 101)			::String _hx_tmp1;
HXDLIN( 101)			if (xmlExists) {
HXLINE( 101)				_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            			}
            			else {
HXLINE( 101)				_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            			}
HXDLIN( 101)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 102)			this->animation->addByPrefix(HX_("green",c3,0e,ed,99),HX_("arrowUP",64,88,b8,43),null(),null(),null(),null());
HXLINE( 103)			this->animation->addByPrefix(HX_("blue",9a,42,19,41),HX_("arrowDOWN",ab,52,f9,fd),null(),null(),null(),null());
HXLINE( 104)			this->animation->addByPrefix(HX_("purple",3c,f6,89,71),HX_("arrowLEFT",50,62,3b,03),null(),null(),null(),null());
HXLINE( 105)			this->animation->addByPrefix(HX_("red",51,d9,56,00),HX_("arrowRIGHT",53,b1,c7,47),null(),null(),null(),null());
HXLINE( 107)			this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 108)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ((Float)0.7))),null());
HXLINE( 110)			Float _hx_switch_1 = ::hx::Mod(::Math_obj::abs(( (Float)(this->noteData) )),4);
            			if (  (_hx_switch_1==( (Float)(0) )) ){
HXLINE( 113)				this->animation->addByPrefix(HX_("static",ae,dc,fb,05),HX_("arrowLEFT",50,62,3b,03),null(),null(),null(),null());
HXLINE( 114)				this->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("left press",aa,26,70,8e),24,false,null(),null());
HXLINE( 115)				this->animation->addByPrefix(HX_("confirm",00,9d,39,10),HX_("left confirm",e7,c7,19,fe),24,false,null(),null());
HXLINE( 112)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_1==( (Float)(1) )) ){
HXLINE( 117)				this->animation->addByPrefix(HX_("static",ae,dc,fb,05),HX_("arrowDOWN",ab,52,f9,fd),null(),null(),null(),null());
HXLINE( 118)				this->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("down press",45,4d,63,9c),24,false,null(),null());
HXLINE( 119)				this->animation->addByPrefix(HX_("confirm",00,9d,39,10),HX_("down confirm",42,0b,18,cc),24,false,null(),null());
HXLINE( 116)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_1==( (Float)(2) )) ){
HXLINE( 121)				this->animation->addByPrefix(HX_("static",ae,dc,fb,05),HX_("arrowUP",64,88,b8,43),null(),null(),null(),null());
HXLINE( 122)				this->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("up press",fe,fb,65,e9),24,false,null(),null());
HXLINE( 123)				this->animation->addByPrefix(HX_("confirm",00,9d,39,10),HX_("up confirm",3b,9a,2e,62),24,false,null(),null());
HXLINE( 120)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_1==( (Float)(3) )) ){
HXLINE( 125)				this->animation->addByPrefix(HX_("static",ae,dc,fb,05),HX_("arrowRIGHT",53,b1,c7,47),null(),null(),null(),null());
HXLINE( 126)				this->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("right press",3f,38,e4,c8),24,false,null(),null());
HXLINE( 127)				this->animation->addByPrefix(HX_("confirm",00,9d,39,10),HX_("right confirm",bc,28,e5,ca),24,false,null(),null());
HXLINE( 124)				goto _hx_goto_3;
            			}
            			_hx_goto_3:;
            		}
HXLINE( 130)		this->updateHitbox();
HXLINE( 132)		if (::hx::IsNotNull( lastAnim )) {
HXLINE( 134)			this->playAnim(lastAnim,true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(StrumNote_obj,reloadNote,(void))

void StrumNote_obj::postAddedToGroup(){
            	HX_STACKFRAME(&_hx_pos_cf63324388460f24_138_postAddedToGroup)
HXLINE( 139)		this->playAnim(HX_("static",ae,dc,fb,05),null());
HXLINE( 140)		this->set_x((this->x + (::objects::Note_obj::swagWidth * ( (Float)(this->noteData) ))));
HXLINE( 141)		this->set_x((this->x + 50));
HXLINE( 142)		this->set_x((this->x + ((( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )) * ( (Float)(this->player) ))));
HXLINE( 143)		this->ID = this->noteData;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StrumNote_obj,postAddedToGroup,(void))

void StrumNote_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_cf63324388460f24_146_update)
HXLINE( 147)		if ((this->resetAnim > 0)) {
HXLINE( 148)			 ::objects::StrumNote _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 148)			_hx_tmp->resetAnim = (_hx_tmp->resetAnim - elapsed);
HXLINE( 149)			if ((this->resetAnim <= 0)) {
HXLINE( 150)				this->playAnim(HX_("static",ae,dc,fb,05),null());
HXLINE( 151)				this->resetAnim = ( (Float)(0) );
            			}
            		}
HXLINE( 154)		this->super::update(elapsed);
            	}


void StrumNote_obj::playAnim(::String anim, ::Dynamic __o_force){
            		 ::Dynamic force = __o_force;
            		if (::hx::IsNull(__o_force)) force = false;
            	HX_STACKFRAME(&_hx_pos_cf63324388460f24_157_playAnim)
HXLINE( 158)		this->animation->play(anim,force,null(),null());
HXLINE( 159)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE( 161)			this->centerOffsets(null());
HXLINE( 162)			{
HXLINE( 162)				 ::flixel::math::FlxBasePoint this1 = this->origin;
HXDLIN( 162)				Float y = (( (Float)(this->frameHeight) ) * ((Float)0.5));
HXDLIN( 162)				this1->set_x((( (Float)(this->frameWidth) ) * ((Float)0.5)));
HXDLIN( 162)				this1->set_y(y);
            			}
            		}
HXLINE( 164)		if (this->useRGBShader) {
HXLINE( 164)			bool _hx_tmp;
HXDLIN( 164)			if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE( 164)				_hx_tmp = (this->animation->_curAnim->name != HX_("static",ae,dc,fb,05));
            			}
            			else {
HXLINE( 164)				_hx_tmp = false;
            			}
HXDLIN( 164)			this->rgbShader->set_enabled(_hx_tmp);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(StrumNote_obj,playAnim,(void))


::hx::ObjectPtr< StrumNote_obj > StrumNote_obj::__new(Float x,Float y,int leData,int player) {
	::hx::ObjectPtr< StrumNote_obj > __this = new StrumNote_obj();
	__this->__construct(x,y,leData,player);
	return __this;
}

::hx::ObjectPtr< StrumNote_obj > StrumNote_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,int leData,int player) {
	StrumNote_obj *__this = (StrumNote_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StrumNote_obj), true, "objects.StrumNote"));
	*(void **)__this = StrumNote_obj::_hx_vtable;
	__this->__construct(x,y,leData,player);
	return __this;
}

StrumNote_obj::StrumNote_obj()
{
}

void StrumNote_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StrumNote);
	HX_MARK_MEMBER_NAME(rgbShader,"rgbShader");
	HX_MARK_MEMBER_NAME(resetAnim,"resetAnim");
	HX_MARK_MEMBER_NAME(noteData,"noteData");
	HX_MARK_MEMBER_NAME(direction,"direction");
	HX_MARK_MEMBER_NAME(downScroll,"downScroll");
	HX_MARK_MEMBER_NAME(sustainReduce,"sustainReduce");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(useRGBShader,"useRGBShader");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StrumNote_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rgbShader,"rgbShader");
	HX_VISIT_MEMBER_NAME(resetAnim,"resetAnim");
	HX_VISIT_MEMBER_NAME(noteData,"noteData");
	HX_VISIT_MEMBER_NAME(direction,"direction");
	HX_VISIT_MEMBER_NAME(downScroll,"downScroll");
	HX_VISIT_MEMBER_NAME(sustainReduce,"sustainReduce");
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(useRGBShader,"useRGBShader");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val StrumNote_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return ::hx::Val( player ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return ::hx::Val( texture ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noteData") ) { return ::hx::Val( noteData ); }
		if (HX_FIELD_EQ(inName,"playAnim") ) { return ::hx::Val( playAnim_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rgbShader") ) { return ::hx::Val( rgbShader ); }
		if (HX_FIELD_EQ(inName,"resetAnim") ) { return ::hx::Val( resetAnim ); }
		if (HX_FIELD_EQ(inName,"direction") ) { return ::hx::Val( direction ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"downScroll") ) { return ::hx::Val( downScroll ); }
		if (HX_FIELD_EQ(inName,"reloadNote") ) { return ::hx::Val( reloadNote_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_texture") ) { return ::hx::Val( set_texture_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"useRGBShader") ) { return ::hx::Val( useRGBShader ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sustainReduce") ) { return ::hx::Val( sustainReduce ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"postAddedToGroup") ) { return ::hx::Val( postAddedToGroup_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StrumNote_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_texture(inValue.Cast< ::String >()) );texture=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noteData") ) { noteData=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rgbShader") ) { rgbShader=inValue.Cast<  ::shaders::RGBShaderReference >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resetAnim") ) { resetAnim=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"direction") ) { direction=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"downScroll") ) { downScroll=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"useRGBShader") ) { useRGBShader=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sustainReduce") ) { sustainReduce=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StrumNote_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("rgbShader",12,56,b9,2f));
	outFields->push(HX_("resetAnim",80,8f,5d,86));
	outFields->push(HX_("noteData",3c,7b,96,51));
	outFields->push(HX_("direction",3f,62,40,10));
	outFields->push(HX_("downScroll",0f,ba,68,84));
	outFields->push(HX_("sustainReduce",a9,3a,2f,dc));
	outFields->push(HX_("player",61,eb,b8,37));
	outFields->push(HX_("texture",db,c8,e0,9e));
	outFields->push(HX_("useRGBShader",cb,ac,57,46));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StrumNote_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::RGBShaderReference */ ,(int)offsetof(StrumNote_obj,rgbShader),HX_("rgbShader",12,56,b9,2f)},
	{::hx::fsFloat,(int)offsetof(StrumNote_obj,resetAnim),HX_("resetAnim",80,8f,5d,86)},
	{::hx::fsInt,(int)offsetof(StrumNote_obj,noteData),HX_("noteData",3c,7b,96,51)},
	{::hx::fsFloat,(int)offsetof(StrumNote_obj,direction),HX_("direction",3f,62,40,10)},
	{::hx::fsBool,(int)offsetof(StrumNote_obj,downScroll),HX_("downScroll",0f,ba,68,84)},
	{::hx::fsBool,(int)offsetof(StrumNote_obj,sustainReduce),HX_("sustainReduce",a9,3a,2f,dc)},
	{::hx::fsInt,(int)offsetof(StrumNote_obj,player),HX_("player",61,eb,b8,37)},
	{::hx::fsString,(int)offsetof(StrumNote_obj,texture),HX_("texture",db,c8,e0,9e)},
	{::hx::fsBool,(int)offsetof(StrumNote_obj,useRGBShader),HX_("useRGBShader",cb,ac,57,46)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StrumNote_obj_sStaticStorageInfo = 0;
#endif

static ::String StrumNote_obj_sMemberFields[] = {
	HX_("rgbShader",12,56,b9,2f),
	HX_("resetAnim",80,8f,5d,86),
	HX_("noteData",3c,7b,96,51),
	HX_("direction",3f,62,40,10),
	HX_("downScroll",0f,ba,68,84),
	HX_("sustainReduce",a9,3a,2f,dc),
	HX_("player",61,eb,b8,37),
	HX_("texture",db,c8,e0,9e),
	HX_("set_texture",fe,2f,48,2f),
	HX_("useRGBShader",cb,ac,57,46),
	HX_("reloadNote",eb,b7,11,94),
	HX_("postAddedToGroup",64,4b,92,b7),
	HX_("update",09,86,05,87),
	HX_("playAnim",25,ea,84,30),
	::String(null()) };

::hx::Class StrumNote_obj::__mClass;

void StrumNote_obj::__register()
{
	StrumNote_obj _hx_dummy;
	StrumNote_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.StrumNote",a1,1d,35,4e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StrumNote_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StrumNote_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StrumNote_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StrumNote_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace objects
