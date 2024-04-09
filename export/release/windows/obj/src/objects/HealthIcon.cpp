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
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_objects_HealthIcon
#include <objects/HealthIcon.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ac81527997e0445c_12_new,"objects.HealthIcon","new",0x53da0821,"objects.HealthIcon.new","objects/HealthIcon.hx",12,0x9d2b69ce)
static const Float _hx_array_data_ea1163af_1[] = {
	(Float)0,(Float)0,
};
static const ::String _hx_array_data_ea1163af_2[] = {
	HX_("bambi3d",26,73,99,b7),HX_("bambi3dUnfair",83,88,00,d7),HX_("trueexpunged",5e,97,e5,c6),HX_("404",38,9f,27,00),HX_("god-expunged-1",25,60,94,3a),HX_("Godly_Goober_2",11,a7,b4,6a),HX_("bambiGod",27,85,ba,ee),HX_("bambiGod-2",4c,84,43,f6),HX_("hell1",d4,32,c1,24),HX_("icon-bambi3d",12,0b,04,97),HX_("hell2",d5,32,c1,24),HX_("bamburg",16,c5,a2,b7),HX_("bamburg_crazy",e8,c6,93,fc),HX_("homo",29,ca,12,45),HX_("bombu",d3,93,f6,b6),HX_("complexdave",1c,96,bb,54),HX_("bombuExpunged",03,cd,c1,70),HX_("crusti",82,79,b0,86),HX_("crusturn",ca,dc,ec,ee),HX_("dave3d",bd,57,da,23),HX_("crimsondave",4b,11,e4,fe),HX_("minion",76,c3,fe,52),HX_("doubleee",b1,29,39,dc),HX_("ohfuck",50,43,0e,87),HX_("bambiGod3d",b8,89,43,f6),
};
HX_LOCAL_STACK_FRAME(_hx_pos_ac81527997e0445c_64_update,"objects.HealthIcon","update",0x858ddce8,"objects.HealthIcon.update","objects/HealthIcon.hx",64,0x9d2b69ce)
HX_LOCAL_STACK_FRAME(_hx_pos_ac81527997e0445c_156_swapOldIcon,"objects.HealthIcon","swapOldIcon",0x3170b22e,"objects.HealthIcon.swapOldIcon","objects/HealthIcon.hx",156,0x9d2b69ce)
HX_LOCAL_STACK_FRAME(_hx_pos_ac81527997e0445c_162_changeIcon,"objects.HealthIcon","changeIcon",0xdec2cf68,"objects.HealthIcon.changeIcon","objects/HealthIcon.hx",162,0x9d2b69ce)
static const int _hx_array_data_ea1163af_11[] = {
	(int)0,(int)1,(int)2,
};
HX_LOCAL_STACK_FRAME(_hx_pos_ac81527997e0445c_260_changeIconStatus,"objects.HealthIcon","changeIconStatus",0x5690a8ba,"objects.HealthIcon.changeIconStatus","objects/HealthIcon.hx",260,0x9d2b69ce)
HX_LOCAL_STACK_FRAME(_hx_pos_ac81527997e0445c_275_updateHitboxPE,"objects.HealthIcon","updateHitboxPE",0x38738a95,"objects.HealthIcon.updateHitboxPE","objects/HealthIcon.hx",275,0x9d2b69ce)
HX_LOCAL_STACK_FRAME(_hx_pos_ac81527997e0445c_282_getCharacter,"objects.HealthIcon","getCharacter",0x54c7c052,"objects.HealthIcon.getCharacter","objects/HealthIcon.hx",282,0x9d2b69ce)
namespace objects{

void HealthIcon_obj::__construct(::String __o__hx_char,::hx::Null< bool >  __o_isPlayer, ::Dynamic __o_allowGPU){
            		::String _hx_char = __o__hx_char;
            		if (::hx::IsNull(__o__hx_char)) _hx_char = HX_("bf",c4,55,00,00);
            		bool isPlayer = __o_isPlayer.Default(false);
            		 ::Dynamic allowGPU = __o_allowGPU;
            		if (::hx::IsNull(__o_allowGPU)) allowGPU = true;
            	HX_STACKFRAME(&_hx_pos_ac81527997e0445c_12_new)
HXLINE( 160)		this->iconOffsets = ::Array_obj< Float >::fromData( _hx_array_data_ea1163af_1,2);
HXLINE(  20)		this->noAntialiasing = ::Array_obj< ::String >::fromData( _hx_array_data_ea1163af_2,25);
HXLINE(  18)		this->_hx_char = HX_("",00,00,00,00);
HXLINE(  17)		this->isAnim = false;
HXLINE(  16)		this->isPlayer = false;
HXLINE(  15)		this->isOldIcon = false;
HXLINE(  53)		super::__construct(null(),null(),null());
HXLINE(  54)		this->isOldIcon = (_hx_char == HX_("bf-old",5e,ba,eb,07));
HXLINE(  55)		this->isPlayer = isPlayer;
HXLINE(  56)		this->changeIcon(_hx_char,null());
HXLINE(  57)		{
HXLINE(  57)			 ::flixel::math::FlxBasePoint this1 = this->scrollFactor;
HXDLIN(  57)			this1->set_x(( (Float)(0) ));
HXDLIN(  57)			this1->set_y(( (Float)(0) ));
            		}
            	}

Dynamic HealthIcon_obj::__CreateEmpty() { return new HealthIcon_obj; }

void *HealthIcon_obj::_hx_vtable = 0;

Dynamic HealthIcon_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HealthIcon_obj > _hx_result = new HealthIcon_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool HealthIcon_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6627ca45) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x6627ca45;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void HealthIcon_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_ac81527997e0445c_64_update)
HXLINE(  65)		this->super::update(elapsed);
HXLINE(  69)		{
HXLINE(  69)			 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN(  69)			Float Value = (this->get_width() - ( (Float)(150) ));
HXDLIN(  69)			 ::Dynamic Max = null();
HXDLIN(  69)			Float lowerBound;
HXDLIN(  69)			if ((Value < 0)) {
HXLINE(  69)				lowerBound = ( (Float)(0) );
            			}
            			else {
HXLINE(  69)				lowerBound = Value;
            			}
HXDLIN(  69)			Float x;
HXDLIN(  69)			bool x1;
HXDLIN(  69)			if (::hx::IsNotNull( Max )) {
HXLINE(  69)				x1 = ::hx::IsGreater( lowerBound,Max );
            			}
            			else {
HXLINE(  69)				x1 = false;
            			}
HXDLIN(  69)			if (x1) {
HXLINE(  69)				x = ( (Float)(Max) );
            			}
            			else {
HXLINE(  69)				x = lowerBound;
            			}
HXDLIN(  69)			Float x2 = ( (Float)(::Std_obj::_hx_int(x)) );
HXDLIN(  69)			Float Value1 = (this->get_height() - ( (Float)(150) ));
HXDLIN(  69)			 ::Dynamic Max1 = null();
HXDLIN(  69)			Float lowerBound1;
HXDLIN(  69)			if ((Value1 < 0)) {
HXLINE(  69)				lowerBound1 = ( (Float)(0) );
            			}
            			else {
HXLINE(  69)				lowerBound1 = Value1;
            			}
HXDLIN(  69)			Float y;
HXDLIN(  69)			bool y1;
HXDLIN(  69)			if (::hx::IsNotNull( Max1 )) {
HXLINE(  69)				y1 = ::hx::IsGreater( lowerBound1,Max1 );
            			}
            			else {
HXLINE(  69)				y1 = false;
            			}
HXDLIN(  69)			if (y1) {
HXLINE(  69)				y = ( (Float)(Max1) );
            			}
            			else {
HXLINE(  69)				y = lowerBound1;
            			}
HXDLIN(  69)			Float y2 = ( (Float)(::Std_obj::_hx_int(y)) );
HXDLIN(  69)			this1->set_x(x2);
HXDLIN(  69)			this1->set_y(y2);
            		}
HXLINE(  71)		if ((this->_hx_char == HX_("bambiGod2d",d9,88,43,f6))) {
HXLINE(  74)			::String _hx_switch_0 = this->animation->_curAnim->name;
            			if (  (_hx_switch_0==HX_("defeat",f3,67,e1,66)) ){
HXLINE(  81)				this->offset->set_x((this->offset->x + 40));
HXLINE(  82)				this->offset->set_y((this->offset->y + 130));
HXLINE(  83)				{
HXLINE(  83)					 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN(  83)					Float x = this->offset->x;
HXDLIN(  83)					this1->set_x((x + ::flixel::FlxG_obj::random->_hx_int(-3,3,null())));
            				}
HXLINE(  84)				{
HXLINE(  84)					 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN(  84)					Float y = this->offset->y;
HXDLIN(  84)					this2->set_y((y + ::flixel::FlxG_obj::random->_hx_int(-3,3,null())));
            				}
HXLINE(  85)				this->set_angle(( (Float)(::flixel::FlxG_obj::random->_hx_int(-3,3,null())) ));
HXLINE(  80)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("neutral",47,ed,29,eb)) ){
HXLINE(  76)				this->offset->set_y((this->offset->y + 140));
HXLINE(  77)				{
HXLINE(  77)					 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN(  77)					Float x = this->offset->x;
HXDLIN(  77)					this1->set_x((x + ::flixel::FlxG_obj::random->_hx_int(-2,2,null())));
            				}
HXLINE(  78)				{
HXLINE(  78)					 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN(  78)					Float y = this->offset->y;
HXDLIN(  78)					this2->set_y((y + ::flixel::FlxG_obj::random->_hx_int(-2,2,null())));
            				}
HXLINE(  79)				this->set_angle(( (Float)(::flixel::FlxG_obj::random->_hx_int(-2,2,null())) ));
HXLINE(  75)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("winning",50,6b,0c,ef)) ){
HXLINE(  87)				this->offset->set_x((this->offset->x + -50));
HXLINE(  88)				this->offset->set_y((this->offset->y + 130));
HXLINE(  89)				{
HXLINE(  89)					 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN(  89)					Float x = this->offset->x;
HXDLIN(  89)					this1->set_x((x + ::flixel::FlxG_obj::random->_hx_int(-1,1,null())));
            				}
HXLINE(  90)				{
HXLINE(  90)					 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN(  90)					Float y = this->offset->y;
HXDLIN(  90)					this2->set_y((y + ::flixel::FlxG_obj::random->_hx_int(-1,1,null())));
            				}
HXLINE(  91)				this->set_angle(( (Float)(::flixel::FlxG_obj::random->_hx_int(-1,1,null())) ));
HXLINE(  86)				goto _hx_goto_3;
            			}
            			_hx_goto_3:;
            		}
HXLINE(  94)		if ((this->_hx_char == HX_("bf",c4,55,00,00))) {
HXLINE(  96)			::String _hx_switch_1 = this->animation->_curAnim->name;
            			if (  (_hx_switch_1==HX_("defeat",f3,67,e1,66)) ){
HXLINE( 101)				this->offset->set_y((this->offset->y + 240));
HXLINE( 102)				this->offset->set_x((this->offset->x + 230));
HXLINE( 100)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_1==HX_("neutral",47,ed,29,eb)) ){
HXLINE(  98)				this->offset->set_y((this->offset->y + 240));
HXLINE(  99)				this->offset->set_x((this->offset->x + 230));
HXLINE(  97)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_1==HX_("winning",50,6b,0c,ef)) ){
HXLINE( 104)				this->offset->set_y((this->offset->y + 230));
HXLINE( 105)				this->offset->set_x((this->offset->x + 210));
HXLINE( 103)				goto _hx_goto_4;
            			}
            			_hx_goto_4:;
            		}
HXLINE( 108)		if ((this->_hx_char == HX_("pissed",78,77,66,89))) {
HXLINE( 110)			::String _hx_switch_2 = this->animation->_curAnim->name;
            			if (  (_hx_switch_2==HX_("defeat",f3,67,e1,66)) ){
HXLINE( 115)				this->offset->set_y((this->offset->y + 240));
HXLINE( 116)				this->offset->set_x((this->offset->x + 230));
HXLINE( 114)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_2==HX_("neutral",47,ed,29,eb)) ){
HXLINE( 112)				this->offset->set_y((this->offset->y + 240));
HXLINE( 113)				this->offset->set_x((this->offset->x + 230));
HXLINE( 111)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_2==HX_("winning",50,6b,0c,ef)) ){
HXLINE( 118)				this->offset->set_y((this->offset->y + 240));
HXLINE( 119)				this->offset->set_x((this->offset->x + 230));
HXLINE( 117)				goto _hx_goto_5;
            			}
            			_hx_goto_5:;
            		}
HXLINE( 122)		if ((this->_hx_char == HX_("chaos",40,9a,b3,45))) {
HXLINE( 123)			::String _hx_switch_3 = this->animation->_curAnim->name;
            			if (  (_hx_switch_3==HX_("defeat",f3,67,e1,66)) ){
HXLINE( 128)				this->offset->set_y((this->offset->y + 520));
HXLINE( 129)				this->offset->set_x((this->offset->x + 410));
HXLINE( 127)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_3==HX_("neutral",47,ed,29,eb)) ){
HXLINE( 125)				this->offset->set_y((this->offset->y + 520));
HXLINE( 126)				this->offset->set_x((this->offset->x + 410));
HXLINE( 124)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_3==HX_("winning",50,6b,0c,ef)) ){
HXLINE( 131)				this->offset->set_y((this->offset->y + 520));
HXLINE( 132)				this->offset->set_x((this->offset->x + 410));
HXLINE( 130)				goto _hx_goto_6;
            			}
            			_hx_goto_6:;
HXLINE( 134)			this->offset->set_x((this->offset->x - ( (Float)(20) )));
HXLINE( 136)			{
HXLINE( 136)				 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN( 136)				Float x = this->offset->x;
HXDLIN( 136)				this1->set_x((x + ::flixel::FlxG_obj::random->_hx_int(-3,3,null())));
            			}
HXLINE( 137)			{
HXLINE( 137)				 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN( 137)				Float y = this->offset->y;
HXDLIN( 137)				this2->set_y((y + ::flixel::FlxG_obj::random->_hx_int(-3,3,null())));
            			}
HXLINE( 138)			this->set_angle(( (Float)(::flixel::FlxG_obj::random->_hx_int(-2,2,null())) ));
            		}
HXLINE( 140)		if ((this->_hx_char == HX_("god-expunged-1",25,60,94,3a))) {
HXLINE( 142)			this->offset->set_x((this->offset->x - ( (Float)(20) )));
HXLINE( 144)			{
HXLINE( 144)				 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN( 144)				Float x = this->offset->x;
HXDLIN( 144)				this1->set_x((x + ::flixel::FlxG_obj::random->_hx_int(-2,2,null())));
            			}
HXLINE( 145)			{
HXLINE( 145)				 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN( 145)				Float y = this->offset->y;
HXDLIN( 145)				this2->set_y((y + ::flixel::FlxG_obj::random->_hx_int(-2,2,null())));
            			}
HXLINE( 146)			this->set_angle(( (Float)(::flixel::FlxG_obj::random->_hx_int(-2,2,null())) ));
            		}
HXLINE( 151)		if (::hx::IsNotNull( this->sprTracker )) {
HXLINE( 152)			Float _hx_tmp = this->sprTracker->x;
HXDLIN( 152)			Float _hx_tmp1 = ((_hx_tmp + this->sprTracker->get_width()) + 10);
HXDLIN( 152)			this->setPosition(_hx_tmp1,(this->sprTracker->y - ( (Float)(30) )));
            		}
            	}


void HealthIcon_obj::swapOldIcon(){
            	HX_STACKFRAME(&_hx_pos_ac81527997e0445c_156_swapOldIcon)
HXDLIN( 156)		if ((this->isOldIcon = !(this->isOldIcon))) {
HXDLIN( 156)			this->changeIcon(HX_("bf-old",5e,ba,eb,07),null());
            		}
            		else {
HXLINE( 157)			this->changeIcon(HX_("bf",c4,55,00,00),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(HealthIcon_obj,swapOldIcon,(void))

void HealthIcon_obj::changeIcon(::String _hx_char, ::Dynamic __o_allowGPU){
            		 ::Dynamic allowGPU = __o_allowGPU;
            		if (::hx::IsNull(__o_allowGPU)) allowGPU = true;
            	HX_STACKFRAME(&_hx_pos_ac81527997e0445c_162_changeIcon)
HXDLIN( 162)		if ((this->_hx_char != _hx_char)) {
HXLINE( 163)			::String _hx_switch_0 = _hx_char;
            			if (  (_hx_switch_0==HX_("bambiGod2d",d9,88,43,f6)) ){
HXLINE( 165)				::String name = HX_("icons/icon-bambiGod2d",f8,af,83,f5);
HXLINE( 166)				::String library = null();
HXDLIN( 166)				 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(name,null(),true);
HXDLIN( 166)				bool xmlExists = false;
HXDLIN( 166)				::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 166)				if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 166)					xmlExists = true;
            				}
HXDLIN( 166)				 ::Dynamic _hx_tmp;
HXDLIN( 166)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 166)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE( 166)					_hx_tmp = ::backend::Paths_obj::image(name,library,true);
            				}
HXDLIN( 166)				::String _hx_tmp1;
HXDLIN( 166)				if (xmlExists) {
HXLINE( 166)					_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            				}
            				else {
HXLINE( 166)					_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            				}
HXDLIN( 166)				this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 167)				{
HXLINE( 167)					 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN( 167)					this1->set_x(((Float)0.5));
HXDLIN( 167)					this1->set_y(((Float)0.5));
            				}
HXLINE( 169)				this->animation->addByPrefix(HX_("neutral",47,ed,29,eb),HX_("Neutral",27,15,7b,b8),12,true,this->isPlayer,null());
HXLINE( 170)				this->animation->addByPrefix(HX_("defeat",f3,67,e1,66),HX_("Defeat",13,dc,75,9b),12,true,this->isPlayer,null());
HXLINE( 171)				this->animation->addByPrefix(HX_("winning",50,6b,0c,ef),HX_("Winning",30,93,5d,bc),12,true,this->isPlayer,null());
HXLINE( 172)				this->animation->play(HX_("neutral",47,ed,29,eb),null(),null(),null());
HXLINE( 174)				this->updateHitbox();
HXLINE( 175)				this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 176)				{
HXLINE( 176)					 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN( 176)					Float Value = (this->get_width() - ( (Float)(150) ));
HXDLIN( 176)					 ::Dynamic Max = null();
HXDLIN( 176)					Float lowerBound;
HXDLIN( 176)					if ((Value < 0)) {
HXLINE( 176)						lowerBound = ( (Float)(0) );
            					}
            					else {
HXLINE( 176)						lowerBound = Value;
            					}
HXDLIN( 176)					Float x;
HXDLIN( 176)					bool x1;
HXDLIN( 176)					if (::hx::IsNotNull( Max )) {
HXLINE( 176)						x1 = ::hx::IsGreater( lowerBound,Max );
            					}
            					else {
HXLINE( 176)						x1 = false;
            					}
HXDLIN( 176)					if (x1) {
HXLINE( 176)						x = ( (Float)(Max) );
            					}
            					else {
HXLINE( 176)						x = lowerBound;
            					}
HXDLIN( 176)					this2->set_x(( (Float)(::Std_obj::_hx_int(x)) ));
HXDLIN( 176)					this2->set_y(( (Float)(175) ));
            				}
HXLINE( 177)				this->isAnim = true;
HXLINE( 164)				goto _hx_goto_9;
            			}
            			if (  (_hx_switch_0==HX_("bf",c4,55,00,00)) ||  (_hx_switch_0==HX_("icon-bf",58,c5,f4,d5)) ){
HXLINE( 179)				::String name = HX_("icons/icon-bf",e3,c5,14,a2);
HXLINE( 180)				::String library = null();
HXDLIN( 180)				 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(name,null(),true);
HXDLIN( 180)				bool xmlExists = false;
HXDLIN( 180)				::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 180)				if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 180)					xmlExists = true;
            				}
HXDLIN( 180)				 ::Dynamic _hx_tmp;
HXDLIN( 180)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 180)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE( 180)					_hx_tmp = ::backend::Paths_obj::image(name,library,true);
            				}
HXDLIN( 180)				::String _hx_tmp1;
HXDLIN( 180)				if (xmlExists) {
HXLINE( 180)					_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            				}
            				else {
HXLINE( 180)					_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            				}
HXDLIN( 180)				this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 181)				{
HXLINE( 181)					 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN( 181)					this1->set_x(((Float)0.25));
HXDLIN( 181)					this1->set_y(((Float)0.25));
            				}
HXLINE( 183)				this->animation->addByPrefix(HX_("neutral",47,ed,29,eb),HX_("Neutral",27,15,7b,b8),20,true,this->isPlayer,null());
HXLINE( 184)				this->animation->addByPrefix(HX_("defeat",f3,67,e1,66),HX_("Defeat",13,dc,75,9b),20,true,this->isPlayer,null());
HXLINE( 185)				this->animation->addByPrefix(HX_("winning",50,6b,0c,ef),HX_("Winning",30,93,5d,bc),20,true,this->isPlayer,null());
HXLINE( 186)				this->animation->play(HX_("neutral",47,ed,29,eb),null(),null(),null());
HXLINE( 188)				this->updateHitbox();
HXLINE( 189)				this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 190)				{
HXLINE( 190)					 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN( 190)					Float Value = (this->get_width() - ( (Float)(150) ));
HXDLIN( 190)					 ::Dynamic Max = null();
HXDLIN( 190)					Float lowerBound;
HXDLIN( 190)					if ((Value < 0)) {
HXLINE( 190)						lowerBound = ( (Float)(0) );
            					}
            					else {
HXLINE( 190)						lowerBound = Value;
            					}
HXDLIN( 190)					Float x;
HXDLIN( 190)					bool x1;
HXDLIN( 190)					if (::hx::IsNotNull( Max )) {
HXLINE( 190)						x1 = ::hx::IsGreater( lowerBound,Max );
            					}
            					else {
HXLINE( 190)						x1 = false;
            					}
HXDLIN( 190)					if (x1) {
HXLINE( 190)						x = ( (Float)(Max) );
            					}
            					else {
HXLINE( 190)						x = lowerBound;
            					}
HXDLIN( 190)					this2->set_x(( (Float)(::Std_obj::_hx_int(x)) ));
HXDLIN( 190)					this2->set_y(( (Float)(175) ));
            				}
HXLINE( 191)				this->isAnim = true;
HXLINE( 178)				goto _hx_goto_9;
            			}
            			if (  (_hx_switch_0==HX_("chaos",40,9a,b3,45)) ){
HXLINE( 207)				::String name = HX_("icons/icon-chaos",81,c7,82,44);
HXLINE( 208)				::String library = null();
HXDLIN( 208)				 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(name,null(),true);
HXDLIN( 208)				bool xmlExists = false;
HXDLIN( 208)				::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 208)				if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 208)					xmlExists = true;
            				}
HXDLIN( 208)				 ::Dynamic _hx_tmp;
HXDLIN( 208)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 208)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE( 208)					_hx_tmp = ::backend::Paths_obj::image(name,library,true);
            				}
HXDLIN( 208)				::String _hx_tmp1;
HXDLIN( 208)				if (xmlExists) {
HXLINE( 208)					_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            				}
            				else {
HXLINE( 208)					_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            				}
HXDLIN( 208)				this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 209)				{
HXLINE( 209)					 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN( 209)					this1->set_x(((Float)0.2));
HXDLIN( 209)					this1->set_y(((Float)0.2));
            				}
HXLINE( 211)				this->animation->addByPrefix(HX_("neutral",47,ed,29,eb),HX_("Neutral",27,15,7b,b8),12,true,this->isPlayer,null());
HXLINE( 212)				this->animation->addByPrefix(HX_("defeat",f3,67,e1,66),HX_("Defeat",13,dc,75,9b),12,true,this->isPlayer,null());
HXLINE( 213)				this->animation->addByPrefix(HX_("winning",50,6b,0c,ef),HX_("Winning",30,93,5d,bc),12,true,this->isPlayer,null());
HXLINE( 214)				this->animation->play(HX_("neutral",47,ed,29,eb),null(),null(),null());
HXLINE( 216)				this->updateHitbox();
HXLINE( 217)				this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 218)				{
HXLINE( 218)					 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN( 218)					Float Value = (this->get_width() - ( (Float)(150) ));
HXDLIN( 218)					 ::Dynamic Max = null();
HXDLIN( 218)					Float lowerBound;
HXDLIN( 218)					if ((Value < 0)) {
HXLINE( 218)						lowerBound = ( (Float)(0) );
            					}
            					else {
HXLINE( 218)						lowerBound = Value;
            					}
HXDLIN( 218)					Float x;
HXDLIN( 218)					bool x1;
HXDLIN( 218)					if (::hx::IsNotNull( Max )) {
HXLINE( 218)						x1 = ::hx::IsGreater( lowerBound,Max );
            					}
            					else {
HXLINE( 218)						x1 = false;
            					}
HXDLIN( 218)					if (x1) {
HXLINE( 218)						x = ( (Float)(Max) );
            					}
            					else {
HXLINE( 218)						x = lowerBound;
            					}
HXDLIN( 218)					this2->set_x(( (Float)(::Std_obj::_hx_int(x)) ));
HXDLIN( 218)					this2->set_y(( (Float)(175) ));
            				}
HXLINE( 219)				this->isAnim = true;
HXLINE( 206)				goto _hx_goto_9;
            			}
            			if (  (_hx_switch_0==HX_("god-expunged-1",25,60,94,3a)) ){
HXLINE( 221)				::String name = HX_("icons/icon-god-expunged-1",c4,02,e0,53);
HXLINE( 222)				::String library = null();
HXDLIN( 222)				 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(name,null(),true);
HXDLIN( 222)				bool xmlExists = false;
HXDLIN( 222)				::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 222)				if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 222)					xmlExists = true;
            				}
HXDLIN( 222)				 ::Dynamic _hx_tmp;
HXDLIN( 222)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 222)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE( 222)					_hx_tmp = ::backend::Paths_obj::image(name,library,true);
            				}
HXDLIN( 222)				::String _hx_tmp1;
HXDLIN( 222)				if (xmlExists) {
HXLINE( 222)					_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            				}
            				else {
HXLINE( 222)					_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            				}
HXDLIN( 222)				this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 224)				this->animation->addByPrefix(HX_("neutral",47,ed,29,eb),HX_("Normal",47,e6,fd,64),12,true,this->isPlayer,null());
HXLINE( 225)				this->animation->addByPrefix(HX_("defeat",f3,67,e1,66),HX_("Dead",c4,7a,3f,2d),12,true,this->isPlayer,null());
HXLINE( 226)				this->animation->addByPrefix(HX_("winning",50,6b,0c,ef),HX_("Win",fc,5f,42,00),12,true,this->isPlayer,null());
HXLINE( 227)				this->animation->play(HX_("neutral",47,ed,29,eb),null(),null(),null());
HXLINE( 228)				this->updateHitbox();
HXLINE( 230)				this->isAnim = true;
HXLINE( 220)				goto _hx_goto_9;
            			}
            			if (  (_hx_switch_0==HX_("icon-pissed",0c,41,0c,1b)) ||  (_hx_switch_0==HX_("pissed",78,77,66,89)) ){
HXLINE( 193)				::String name = HX_("icons/icon-pissed",17,e3,de,7f);
HXLINE( 194)				::String library = null();
HXDLIN( 194)				 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(name,null(),true);
HXDLIN( 194)				bool xmlExists = false;
HXDLIN( 194)				::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 194)				if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 194)					xmlExists = true;
            				}
HXDLIN( 194)				 ::Dynamic _hx_tmp;
HXDLIN( 194)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 194)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE( 194)					_hx_tmp = ::backend::Paths_obj::image(name,library,true);
            				}
HXDLIN( 194)				::String _hx_tmp1;
HXDLIN( 194)				if (xmlExists) {
HXLINE( 194)					_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            				}
            				else {
HXLINE( 194)					_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            				}
HXDLIN( 194)				this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 195)				{
HXLINE( 195)					 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN( 195)					this1->set_x(((Float)0.25));
HXDLIN( 195)					this1->set_y(((Float)0.25));
            				}
HXLINE( 197)				this->animation->addByPrefix(HX_("neutral",47,ed,29,eb),HX_("Neutral",27,15,7b,b8),20,true,this->isPlayer,null());
HXLINE( 198)				this->animation->addByPrefix(HX_("defeat",f3,67,e1,66),HX_("Defeat",13,dc,75,9b),20,true,this->isPlayer,null());
HXLINE( 199)				this->animation->addByPrefix(HX_("winning",50,6b,0c,ef),HX_("Winning",30,93,5d,bc),20,true,this->isPlayer,null());
HXLINE( 200)				this->animation->play(HX_("neutral",47,ed,29,eb),null(),null(),null());
HXLINE( 202)				this->updateHitbox();
HXLINE( 203)				this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 204)				{
HXLINE( 204)					 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN( 204)					Float Value = (this->get_width() - ( (Float)(150) ));
HXDLIN( 204)					 ::Dynamic Max = null();
HXDLIN( 204)					Float lowerBound;
HXDLIN( 204)					if ((Value < 0)) {
HXLINE( 204)						lowerBound = ( (Float)(0) );
            					}
            					else {
HXLINE( 204)						lowerBound = Value;
            					}
HXDLIN( 204)					Float x;
HXDLIN( 204)					bool x1;
HXDLIN( 204)					if (::hx::IsNotNull( Max )) {
HXLINE( 204)						x1 = ::hx::IsGreater( lowerBound,Max );
            					}
            					else {
HXLINE( 204)						x1 = false;
            					}
HXDLIN( 204)					if (x1) {
HXLINE( 204)						x = ( (Float)(Max) );
            					}
            					else {
HXLINE( 204)						x = lowerBound;
            					}
HXDLIN( 204)					this2->set_x(( (Float)(::Std_obj::_hx_int(x)) ));
HXDLIN( 204)					this2->set_y(( (Float)(175) ));
            				}
HXLINE( 205)				this->isAnim = true;
HXLINE( 192)				goto _hx_goto_9;
            			}
            			/* default */{
HXLINE( 232)				::String name = (HX_("icons/",15,dc,d6,45) + _hx_char);
HXLINE( 233)				if (!(::backend::Paths_obj::fileExists(((HX_("images/",77,50,74,c1) + name) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),null(),null()))) {
HXLINE( 233)					name = (HX_("icons/icon-",5f,da,21,72) + _hx_char);
            				}
HXLINE( 234)				if (!(::backend::Paths_obj::fileExists(((HX_("images/",77,50,74,c1) + name) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),null(),null()))) {
HXLINE( 234)					name = HX_("icons/icon-face",7c,aa,dd,e7);
            				}
HXLINE( 235)				 ::Dynamic file = ::backend::Paths_obj::image(name,null(),null());
HXLINE( 237)				{
HXLINE( 237)					 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN( 237)					this1->set_x(( (Float)(1) ));
HXDLIN( 237)					this1->set_y(( (Float)(1) ));
            				}
HXLINE( 239)				this->loadGraphic(file,null(),null(),null(),null(),null());
HXLINE( 240)				int _hx_tmp = ::Math_obj::floor((this->get_width() / ( (Float)(3) )));
HXDLIN( 240)				this->loadGraphic(file,true,_hx_tmp,::Math_obj::floor(this->get_height()),null(),null());
HXLINE( 241)				this->iconOffsets[0] = ((this->get_width() - ( (Float)(150) )) / ( (Float)(2) ));
HXLINE( 242)				this->iconOffsets[1] = ((this->get_width() - ( (Float)(150) )) / ( (Float)(2) ));
HXLINE( 243)				this->iconOffsets[2] = ((this->get_width() - ( (Float)(150) )) / ( (Float)(2) ));
HXLINE( 244)				this->updateHitbox();
HXLINE( 246)				this->animation->add(_hx_char,::Array_obj< int >::fromData( _hx_array_data_ea1163af_11,3),0,false,this->isPlayer,null());
HXLINE( 247)				this->animation->play(_hx_char,null(),null(),null());
HXLINE( 248)				this->isAnim = false;
            			}
            			_hx_goto_9:;
HXLINE( 250)			this->_hx_char = _hx_char;
HXLINE( 252)			this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 253)			bool _hx_tmp;
HXDLIN( 253)			if (!(::StringTools_obj::endsWith(_hx_char,HX_("-pixel",39,03,b3,c0)))) {
HXLINE( 253)				_hx_tmp = this->noAntialiasing->contains(_hx_char);
            			}
            			else {
HXLINE( 253)				_hx_tmp = true;
            			}
HXDLIN( 253)			if (_hx_tmp) {
HXLINE( 254)				this->set_antialiasing(false);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(HealthIcon_obj,changeIcon,(void))

void HealthIcon_obj::changeIconStatus(int status){
            	HX_STACKFRAME(&_hx_pos_ac81527997e0445c_260_changeIconStatus)
HXDLIN( 260)		if (!(this->isAnim)) {
HXLINE( 261)			this->animation->_curAnim->set_curFrame(status);
            		}
            		else {
HXLINE( 263)			switch((int)(status)){
            				case (int)1: {
HXLINE( 265)					this->animation->play(HX_("defeat",f3,67,e1,66),false,null(),null());
            				}
            				break;
            				case (int)2: {
HXLINE( 267)					this->animation->play(HX_("winning",50,6b,0c,ef),false,null(),null());
            				}
            				break;
            				default:{
HXLINE( 269)					this->animation->play(HX_("neutral",47,ed,29,eb),false,null(),null());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(HealthIcon_obj,changeIconStatus,(void))

void HealthIcon_obj::updateHitboxPE(){
            	HX_STACKFRAME(&_hx_pos_ac81527997e0445c_275_updateHitboxPE)
HXLINE( 276)		this->super::updateHitbox();
HXLINE( 277)		this->offset->set_x(this->iconOffsets->__get(0));
HXLINE( 278)		this->offset->set_y(this->iconOffsets->__get(1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(HealthIcon_obj,updateHitboxPE,(void))

::String HealthIcon_obj::getCharacter(){
            	HX_STACKFRAME(&_hx_pos_ac81527997e0445c_282_getCharacter)
HXDLIN( 282)		return this->_hx_char;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HealthIcon_obj,getCharacter,return )


::hx::ObjectPtr< HealthIcon_obj > HealthIcon_obj::__new(::String __o__hx_char,::hx::Null< bool >  __o_isPlayer, ::Dynamic __o_allowGPU) {
	::hx::ObjectPtr< HealthIcon_obj > __this = new HealthIcon_obj();
	__this->__construct(__o__hx_char,__o_isPlayer,__o_allowGPU);
	return __this;
}

::hx::ObjectPtr< HealthIcon_obj > HealthIcon_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o__hx_char,::hx::Null< bool >  __o_isPlayer, ::Dynamic __o_allowGPU) {
	HealthIcon_obj *__this = (HealthIcon_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HealthIcon_obj), true, "objects.HealthIcon"));
	*(void **)__this = HealthIcon_obj::_hx_vtable;
	__this->__construct(__o__hx_char,__o_isPlayer,__o_allowGPU);
	return __this;
}

HealthIcon_obj::HealthIcon_obj()
{
}

void HealthIcon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HealthIcon);
	HX_MARK_MEMBER_NAME(sprTracker,"sprTracker");
	HX_MARK_MEMBER_NAME(isOldIcon,"isOldIcon");
	HX_MARK_MEMBER_NAME(isPlayer,"isPlayer");
	HX_MARK_MEMBER_NAME(isAnim,"isAnim");
	HX_MARK_MEMBER_NAME(_hx_char,"char");
	HX_MARK_MEMBER_NAME(noAntialiasing,"noAntialiasing");
	HX_MARK_MEMBER_NAME(iconOffsets,"iconOffsets");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HealthIcon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprTracker,"sprTracker");
	HX_VISIT_MEMBER_NAME(isOldIcon,"isOldIcon");
	HX_VISIT_MEMBER_NAME(isPlayer,"isPlayer");
	HX_VISIT_MEMBER_NAME(isAnim,"isAnim");
	HX_VISIT_MEMBER_NAME(_hx_char,"char");
	HX_VISIT_MEMBER_NAME(noAntialiasing,"noAntialiasing");
	HX_VISIT_MEMBER_NAME(iconOffsets,"iconOffsets");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HealthIcon_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"char") ) { return ::hx::Val( _hx_char ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isAnim") ) { return ::hx::Val( isAnim ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { return ::hx::Val( isPlayer ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isOldIcon") ) { return ::hx::Val( isOldIcon ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { return ::hx::Val( sprTracker ); }
		if (HX_FIELD_EQ(inName,"changeIcon") ) { return ::hx::Val( changeIcon_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"swapOldIcon") ) { return ::hx::Val( swapOldIcon_dyn() ); }
		if (HX_FIELD_EQ(inName,"iconOffsets") ) { return ::hx::Val( iconOffsets ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getCharacter") ) { return ::hx::Val( getCharacter_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"noAntialiasing") ) { return ::hx::Val( noAntialiasing ); }
		if (HX_FIELD_EQ(inName,"updateHitboxPE") ) { return ::hx::Val( updateHitboxPE_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"changeIconStatus") ) { return ::hx::Val( changeIconStatus_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HealthIcon_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"char") ) { _hx_char=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isAnim") ) { isAnim=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { isPlayer=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isOldIcon") ) { isOldIcon=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { sprTracker=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"iconOffsets") ) { iconOffsets=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"noAntialiasing") ) { noAntialiasing=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HealthIcon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sprTracker",03,a3,e2,78));
	outFields->push(HX_("isOldIcon",f6,08,f6,fe));
	outFields->push(HX_("isPlayer",eb,86,22,90));
	outFields->push(HX_("isAnim",1b,4b,d8,5d));
	outFields->push(HX_("char",d6,5e,bf,41));
	outFields->push(HX_("noAntialiasing",d5,a0,b5,f5));
	outFields->push(HX_("iconOffsets",07,1b,16,e7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HealthIcon_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(HealthIcon_obj,sprTracker),HX_("sprTracker",03,a3,e2,78)},
	{::hx::fsBool,(int)offsetof(HealthIcon_obj,isOldIcon),HX_("isOldIcon",f6,08,f6,fe)},
	{::hx::fsBool,(int)offsetof(HealthIcon_obj,isPlayer),HX_("isPlayer",eb,86,22,90)},
	{::hx::fsBool,(int)offsetof(HealthIcon_obj,isAnim),HX_("isAnim",1b,4b,d8,5d)},
	{::hx::fsString,(int)offsetof(HealthIcon_obj,_hx_char),HX_("char",d6,5e,bf,41)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(HealthIcon_obj,noAntialiasing),HX_("noAntialiasing",d5,a0,b5,f5)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(HealthIcon_obj,iconOffsets),HX_("iconOffsets",07,1b,16,e7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HealthIcon_obj_sStaticStorageInfo = 0;
#endif

static ::String HealthIcon_obj_sMemberFields[] = {
	HX_("sprTracker",03,a3,e2,78),
	HX_("isOldIcon",f6,08,f6,fe),
	HX_("isPlayer",eb,86,22,90),
	HX_("isAnim",1b,4b,d8,5d),
	HX_("char",d6,5e,bf,41),
	HX_("noAntialiasing",d5,a0,b5,f5),
	HX_("update",09,86,05,87),
	HX_("swapOldIcon",6d,51,5b,02),
	HX_("iconOffsets",07,1b,16,e7),
	HX_("changeIcon",09,1d,fc,1f),
	HX_("changeIconStatus",1b,65,41,e4),
	HX_("updateHitboxPE",b6,bc,5a,98),
	HX_("getCharacter",33,78,28,51),
	::String(null()) };

::hx::Class HealthIcon_obj::__mClass;

void HealthIcon_obj::__register()
{
	HealthIcon_obj _hx_dummy;
	HealthIcon_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.HealthIcon",af,63,11,ea);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HealthIcon_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HealthIcon_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HealthIcon_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HealthIcon_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace objects
