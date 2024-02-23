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

HX_DEFINE_STACK_FRAME(_hx_pos_ac81527997e0445c_10_new,"objects.HealthIcon","new",0x53da0821,"objects.HealthIcon.new","objects/HealthIcon.hx",10,0x9d2b69ce)
static const Float _hx_array_data_ea1163af_1[] = {
	(Float)0,(Float)0,
};
static const ::String _hx_array_data_ea1163af_2[] = {
	HX_("bambi3d",26,73,99,b7),HX_("bambi3dUnfair",83,88,00,d7),HX_("trueexpunged",5e,97,e5,c6),HX_("404",38,9f,27,00),HX_("god-expunged-1",25,60,94,3a),HX_("Godly_Goober_2",11,a7,b4,6a),HX_("bambiGod",27,85,ba,ee),HX_("bambiGod-2",4c,84,43,f6),HX_("hell1",d4,32,c1,24),HX_("icon-bambi3d",12,0b,04,97),HX_("hell2",d5,32,c1,24),HX_("bamburg",16,c5,a2,b7),HX_("bamburg_crazy",e8,c6,93,fc),HX_("homo",29,ca,12,45),HX_("bombu",d3,93,f6,b6),HX_("complexdave",1c,96,bb,54),HX_("bombuExpunged",03,cd,c1,70),HX_("crusti",82,79,b0,86),HX_("crusturn",ca,dc,ec,ee),HX_("dave3d",bd,57,da,23),HX_("crimsondave",4b,11,e4,fe),HX_("minion",76,c3,fe,52),HX_("doubleee",b1,29,39,dc),HX_("ohfuck",50,43,0e,87),HX_("bambiGod3d",b8,89,43,f6),
};
HX_LOCAL_STACK_FRAME(_hx_pos_ac81527997e0445c_56_update,"objects.HealthIcon","update",0x858ddce8,"objects.HealthIcon.update","objects/HealthIcon.hx",56,0x9d2b69ce)
HX_LOCAL_STACK_FRAME(_hx_pos_ac81527997e0445c_136_swapOldIcon,"objects.HealthIcon","swapOldIcon",0x3170b22e,"objects.HealthIcon.swapOldIcon","objects/HealthIcon.hx",136,0x9d2b69ce)
HX_LOCAL_STACK_FRAME(_hx_pos_ac81527997e0445c_142_changeIcon,"objects.HealthIcon","changeIcon",0xdec2cf68,"objects.HealthIcon.changeIcon","objects/HealthIcon.hx",142,0x9d2b69ce)
static const int _hx_array_data_ea1163af_11[] = {
	(int)0,(int)1,(int)2,
};
HX_LOCAL_STACK_FRAME(_hx_pos_ac81527997e0445c_240_changeIconStatus,"objects.HealthIcon","changeIconStatus",0x5690a8ba,"objects.HealthIcon.changeIconStatus","objects/HealthIcon.hx",240,0x9d2b69ce)
HX_LOCAL_STACK_FRAME(_hx_pos_ac81527997e0445c_255_updateHitboxPE,"objects.HealthIcon","updateHitboxPE",0x38738a95,"objects.HealthIcon.updateHitboxPE","objects/HealthIcon.hx",255,0x9d2b69ce)
HX_LOCAL_STACK_FRAME(_hx_pos_ac81527997e0445c_262_getCharacter,"objects.HealthIcon","getCharacter",0x54c7c052,"objects.HealthIcon.getCharacter","objects/HealthIcon.hx",262,0x9d2b69ce)
namespace objects{

void HealthIcon_obj::__construct(::String __o__hx_char,::hx::Null< bool >  __o_isPlayer, ::Dynamic __o_allowGPU){
            		::String _hx_char = __o__hx_char;
            		if (::hx::IsNull(__o__hx_char)) _hx_char = HX_("bf",c4,55,00,00);
            		bool isPlayer = __o_isPlayer.Default(false);
            		 ::Dynamic allowGPU = __o_allowGPU;
            		if (::hx::IsNull(__o_allowGPU)) allowGPU = true;
            	HX_STACKFRAME(&_hx_pos_ac81527997e0445c_10_new)
HXLINE( 140)		this->iconOffsets = ::Array_obj< Float >::fromData( _hx_array_data_ea1163af_1,2);
HXLINE(  18)		this->noAntialiasing = ::Array_obj< ::String >::fromData( _hx_array_data_ea1163af_2,25);
HXLINE(  16)		this->_hx_char = HX_("",00,00,00,00);
HXLINE(  15)		this->isAnim = false;
HXLINE(  14)		this->isPlayer = false;
HXLINE(  13)		this->isOldIcon = false;
HXLINE(  48)		super::__construct(null(),null(),null());
HXLINE(  49)		this->isOldIcon = (_hx_char == HX_("bf-old",5e,ba,eb,07));
HXLINE(  50)		this->isPlayer = isPlayer;
HXLINE(  51)		this->changeIcon(_hx_char,null());
HXLINE(  52)		{
HXLINE(  52)			 ::flixel::math::FlxBasePoint this1 = this->scrollFactor;
HXDLIN(  52)			this1->set_x(( (Float)(0) ));
HXDLIN(  52)			this1->set_y(( (Float)(0) ));
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
            	HX_STACKFRAME(&_hx_pos_ac81527997e0445c_56_update)
HXLINE(  57)		this->super::update(elapsed);
HXLINE(  58)		{
HXLINE(  58)			 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN(  58)			Float Value = (this->get_width() - ( (Float)(150) ));
HXDLIN(  58)			 ::Dynamic Max = null();
HXDLIN(  58)			Float lowerBound;
HXDLIN(  58)			if ((Value < 0)) {
HXLINE(  58)				lowerBound = ( (Float)(0) );
            			}
            			else {
HXLINE(  58)				lowerBound = Value;
            			}
HXDLIN(  58)			Float x;
HXDLIN(  58)			bool x1;
HXDLIN(  58)			if (::hx::IsNotNull( Max )) {
HXLINE(  58)				x1 = ::hx::IsGreater( lowerBound,Max );
            			}
            			else {
HXLINE(  58)				x1 = false;
            			}
HXDLIN(  58)			if (x1) {
HXLINE(  58)				x = ( (Float)(Max) );
            			}
            			else {
HXLINE(  58)				x = lowerBound;
            			}
HXDLIN(  58)			Float x2 = ( (Float)(::Std_obj::_hx_int(x)) );
HXDLIN(  58)			Float Value1 = (this->get_height() - ( (Float)(150) ));
HXDLIN(  58)			 ::Dynamic Max1 = null();
HXDLIN(  58)			Float lowerBound1;
HXDLIN(  58)			if ((Value1 < 0)) {
HXLINE(  58)				lowerBound1 = ( (Float)(0) );
            			}
            			else {
HXLINE(  58)				lowerBound1 = Value1;
            			}
HXDLIN(  58)			Float y;
HXDLIN(  58)			bool y1;
HXDLIN(  58)			if (::hx::IsNotNull( Max1 )) {
HXLINE(  58)				y1 = ::hx::IsGreater( lowerBound1,Max1 );
            			}
            			else {
HXLINE(  58)				y1 = false;
            			}
HXDLIN(  58)			if (y1) {
HXLINE(  58)				y = ( (Float)(Max1) );
            			}
            			else {
HXLINE(  58)				y = lowerBound1;
            			}
HXDLIN(  58)			Float y2 = ( (Float)(::Std_obj::_hx_int(y)) );
HXDLIN(  58)			this1->set_x(x2);
HXDLIN(  58)			this1->set_y(y2);
            		}
HXLINE(  60)		if ((this->_hx_char == HX_("bambiGod2d",d9,88,43,f6))) {
HXLINE(  62)			::String _hx_switch_0 = this->animation->_curAnim->name;
            			if (  (_hx_switch_0==HX_("defeat",f3,67,e1,66)) ){
HXLINE(  66)				this->offset->set_x((this->offset->x + 40));
HXLINE(  67)				this->offset->set_y((this->offset->y + 130));
HXLINE(  65)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("neutral",47,ed,29,eb)) ){
HXLINE(  64)				this->offset->set_y((this->offset->y + 140));
HXDLIN(  64)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("winning",50,6b,0c,ef)) ){
HXLINE(  69)				this->offset->set_x((this->offset->x + -50));
HXLINE(  70)				this->offset->set_y((this->offset->y + 130));
HXLINE(  68)				goto _hx_goto_3;
            			}
            			_hx_goto_3:;
HXLINE(  72)			{
HXLINE(  72)				 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN(  72)				Float x = this->offset->x;
HXDLIN(  72)				this1->set_x((x + ::flixel::FlxG_obj::random->_hx_int(-2,2,null())));
            			}
HXLINE(  73)			{
HXLINE(  73)				 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN(  73)				Float y = this->offset->y;
HXDLIN(  73)				this2->set_y((y + ::flixel::FlxG_obj::random->_hx_int(-2,2,null())));
            			}
HXLINE(  74)			this->set_angle(( (Float)(::flixel::FlxG_obj::random->_hx_int(-2,2,null())) ));
            		}
HXLINE(  76)		if ((this->_hx_char == HX_("bf",c4,55,00,00))) {
HXLINE(  78)			::String _hx_switch_1 = this->animation->_curAnim->name;
            			if (  (_hx_switch_1==HX_("defeat",f3,67,e1,66)) ){
HXLINE(  83)				this->offset->set_y((this->offset->y + 240));
HXLINE(  84)				this->offset->set_x((this->offset->x + 230));
HXLINE(  82)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_1==HX_("neutral",47,ed,29,eb)) ){
HXLINE(  80)				this->offset->set_y((this->offset->y + 240));
HXLINE(  81)				this->offset->set_x((this->offset->x + 230));
HXLINE(  79)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_1==HX_("winning",50,6b,0c,ef)) ){
HXLINE(  86)				this->offset->set_y((this->offset->y + 230));
HXLINE(  87)				this->offset->set_x((this->offset->x + 210));
HXLINE(  85)				goto _hx_goto_4;
            			}
            			_hx_goto_4:;
            		}
HXLINE(  90)		if ((this->_hx_char == HX_("pissed",78,77,66,89))) {
HXLINE(  92)			::String _hx_switch_2 = this->animation->_curAnim->name;
            			if (  (_hx_switch_2==HX_("defeat",f3,67,e1,66)) ){
HXLINE(  97)				this->offset->set_y((this->offset->y + 240));
HXLINE(  98)				this->offset->set_x((this->offset->x + 230));
HXLINE(  96)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_2==HX_("neutral",47,ed,29,eb)) ){
HXLINE(  94)				this->offset->set_y((this->offset->y + 240));
HXLINE(  95)				this->offset->set_x((this->offset->x + 230));
HXLINE(  93)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_2==HX_("winning",50,6b,0c,ef)) ){
HXLINE( 100)				this->offset->set_y((this->offset->y + 240));
HXLINE( 101)				this->offset->set_x((this->offset->x + 230));
HXLINE(  99)				goto _hx_goto_5;
            			}
            			_hx_goto_5:;
            		}
HXLINE( 104)		if ((this->_hx_char == HX_("chaos",40,9a,b3,45))) {
HXLINE( 105)			::String _hx_switch_3 = this->animation->_curAnim->name;
            			if (  (_hx_switch_3==HX_("defeat",f3,67,e1,66)) ){
HXLINE( 110)				this->offset->set_y((this->offset->y + 520));
HXLINE( 111)				this->offset->set_x((this->offset->x + 410));
HXLINE( 109)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_3==HX_("neutral",47,ed,29,eb)) ){
HXLINE( 107)				this->offset->set_y((this->offset->y + 520));
HXLINE( 108)				this->offset->set_x((this->offset->x + 410));
HXLINE( 106)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_3==HX_("winning",50,6b,0c,ef)) ){
HXLINE( 113)				this->offset->set_y((this->offset->y + 520));
HXLINE( 114)				this->offset->set_x((this->offset->x + 410));
HXLINE( 112)				goto _hx_goto_6;
            			}
            			_hx_goto_6:;
HXLINE( 116)			this->offset->set_x((this->offset->x - ( (Float)(20) )));
HXLINE( 118)			{
HXLINE( 118)				 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN( 118)				Float x = this->offset->x;
HXDLIN( 118)				this1->set_x((x + ::flixel::FlxG_obj::random->_hx_int(-3,3,null())));
            			}
HXLINE( 119)			{
HXLINE( 119)				 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN( 119)				Float y = this->offset->y;
HXDLIN( 119)				this2->set_y((y + ::flixel::FlxG_obj::random->_hx_int(-3,3,null())));
            			}
HXLINE( 120)			this->set_angle(( (Float)(::flixel::FlxG_obj::random->_hx_int(-2,2,null())) ));
            		}
HXLINE( 122)		if ((this->_hx_char == HX_("god-expunged-1",25,60,94,3a))) {
HXLINE( 124)			this->offset->set_x((this->offset->x - ( (Float)(20) )));
HXLINE( 126)			{
HXLINE( 126)				 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN( 126)				Float x = this->offset->x;
HXDLIN( 126)				this1->set_x((x + ::flixel::FlxG_obj::random->_hx_int(-2,2,null())));
            			}
HXLINE( 127)			{
HXLINE( 127)				 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN( 127)				Float y = this->offset->y;
HXDLIN( 127)				this2->set_y((y + ::flixel::FlxG_obj::random->_hx_int(-2,2,null())));
            			}
HXLINE( 128)			this->set_angle(( (Float)(::flixel::FlxG_obj::random->_hx_int(-2,2,null())) ));
            		}
HXLINE( 131)		if (::hx::IsNotNull( this->sprTracker )) {
HXLINE( 132)			Float _hx_tmp = this->sprTracker->x;
HXDLIN( 132)			Float _hx_tmp1 = ((_hx_tmp + this->sprTracker->get_width()) + 10);
HXDLIN( 132)			this->setPosition(_hx_tmp1,(this->sprTracker->y - ( (Float)(30) )));
            		}
            	}


void HealthIcon_obj::swapOldIcon(){
            	HX_STACKFRAME(&_hx_pos_ac81527997e0445c_136_swapOldIcon)
HXDLIN( 136)		if ((this->isOldIcon = !(this->isOldIcon))) {
HXDLIN( 136)			this->changeIcon(HX_("bf-old",5e,ba,eb,07),null());
            		}
            		else {
HXLINE( 137)			this->changeIcon(HX_("bf",c4,55,00,00),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(HealthIcon_obj,swapOldIcon,(void))

void HealthIcon_obj::changeIcon(::String _hx_char, ::Dynamic __o_allowGPU){
            		 ::Dynamic allowGPU = __o_allowGPU;
            		if (::hx::IsNull(__o_allowGPU)) allowGPU = true;
            	HX_STACKFRAME(&_hx_pos_ac81527997e0445c_142_changeIcon)
HXDLIN( 142)		if ((this->_hx_char != _hx_char)) {
HXLINE( 143)			::String _hx_switch_0 = _hx_char;
            			if (  (_hx_switch_0==HX_("bambiGod2d",d9,88,43,f6)) ){
HXLINE( 145)				::String name = HX_("icons/icon-bambiGod2d",f8,af,83,f5);
HXLINE( 146)				::String library = null();
HXDLIN( 146)				 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(name,null(),true);
HXDLIN( 146)				bool xmlExists = false;
HXDLIN( 146)				::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 146)				if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 146)					xmlExists = true;
            				}
HXDLIN( 146)				 ::Dynamic _hx_tmp;
HXDLIN( 146)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 146)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE( 146)					_hx_tmp = ::backend::Paths_obj::image(name,library,true);
            				}
HXDLIN( 146)				::String _hx_tmp1;
HXDLIN( 146)				if (xmlExists) {
HXLINE( 146)					_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            				}
            				else {
HXLINE( 146)					_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            				}
HXDLIN( 146)				this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 147)				{
HXLINE( 147)					 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN( 147)					this1->set_x(((Float)0.5));
HXDLIN( 147)					this1->set_y(((Float)0.5));
            				}
HXLINE( 149)				this->animation->addByPrefix(HX_("neutral",47,ed,29,eb),HX_("Neutral",27,15,7b,b8),12,true,this->isPlayer,null());
HXLINE( 150)				this->animation->addByPrefix(HX_("defeat",f3,67,e1,66),HX_("Defeat",13,dc,75,9b),12,true,this->isPlayer,null());
HXLINE( 151)				this->animation->addByPrefix(HX_("winning",50,6b,0c,ef),HX_("Winning",30,93,5d,bc),12,true,this->isPlayer,null());
HXLINE( 152)				this->animation->play(HX_("neutral",47,ed,29,eb),null(),null(),null());
HXLINE( 154)				this->updateHitbox();
HXLINE( 155)				this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 156)				{
HXLINE( 156)					 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN( 156)					Float Value = (this->get_width() - ( (Float)(150) ));
HXDLIN( 156)					 ::Dynamic Max = null();
HXDLIN( 156)					Float lowerBound;
HXDLIN( 156)					if ((Value < 0)) {
HXLINE( 156)						lowerBound = ( (Float)(0) );
            					}
            					else {
HXLINE( 156)						lowerBound = Value;
            					}
HXDLIN( 156)					Float x;
HXDLIN( 156)					bool x1;
HXDLIN( 156)					if (::hx::IsNotNull( Max )) {
HXLINE( 156)						x1 = ::hx::IsGreater( lowerBound,Max );
            					}
            					else {
HXLINE( 156)						x1 = false;
            					}
HXDLIN( 156)					if (x1) {
HXLINE( 156)						x = ( (Float)(Max) );
            					}
            					else {
HXLINE( 156)						x = lowerBound;
            					}
HXDLIN( 156)					this2->set_x(( (Float)(::Std_obj::_hx_int(x)) ));
HXDLIN( 156)					this2->set_y(( (Float)(175) ));
            				}
HXLINE( 157)				this->isAnim = true;
HXLINE( 144)				goto _hx_goto_9;
            			}
            			if (  (_hx_switch_0==HX_("bf",c4,55,00,00)) ||  (_hx_switch_0==HX_("icon-bf",58,c5,f4,d5)) ){
HXLINE( 159)				::String name = HX_("icons/icon-bf",e3,c5,14,a2);
HXLINE( 160)				::String library = null();
HXDLIN( 160)				 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(name,null(),true);
HXDLIN( 160)				bool xmlExists = false;
HXDLIN( 160)				::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 160)				if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 160)					xmlExists = true;
            				}
HXDLIN( 160)				 ::Dynamic _hx_tmp;
HXDLIN( 160)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 160)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE( 160)					_hx_tmp = ::backend::Paths_obj::image(name,library,true);
            				}
HXDLIN( 160)				::String _hx_tmp1;
HXDLIN( 160)				if (xmlExists) {
HXLINE( 160)					_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            				}
            				else {
HXLINE( 160)					_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            				}
HXDLIN( 160)				this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 161)				{
HXLINE( 161)					 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN( 161)					this1->set_x(((Float)0.25));
HXDLIN( 161)					this1->set_y(((Float)0.25));
            				}
HXLINE( 163)				this->animation->addByPrefix(HX_("neutral",47,ed,29,eb),HX_("Neutral",27,15,7b,b8),20,true,this->isPlayer,null());
HXLINE( 164)				this->animation->addByPrefix(HX_("defeat",f3,67,e1,66),HX_("Defeat",13,dc,75,9b),20,true,this->isPlayer,null());
HXLINE( 165)				this->animation->addByPrefix(HX_("winning",50,6b,0c,ef),HX_("Winning",30,93,5d,bc),20,true,this->isPlayer,null());
HXLINE( 166)				this->animation->play(HX_("neutral",47,ed,29,eb),null(),null(),null());
HXLINE( 168)				this->updateHitbox();
HXLINE( 169)				this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 170)				{
HXLINE( 170)					 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN( 170)					Float Value = (this->get_width() - ( (Float)(150) ));
HXDLIN( 170)					 ::Dynamic Max = null();
HXDLIN( 170)					Float lowerBound;
HXDLIN( 170)					if ((Value < 0)) {
HXLINE( 170)						lowerBound = ( (Float)(0) );
            					}
            					else {
HXLINE( 170)						lowerBound = Value;
            					}
HXDLIN( 170)					Float x;
HXDLIN( 170)					bool x1;
HXDLIN( 170)					if (::hx::IsNotNull( Max )) {
HXLINE( 170)						x1 = ::hx::IsGreater( lowerBound,Max );
            					}
            					else {
HXLINE( 170)						x1 = false;
            					}
HXDLIN( 170)					if (x1) {
HXLINE( 170)						x = ( (Float)(Max) );
            					}
            					else {
HXLINE( 170)						x = lowerBound;
            					}
HXDLIN( 170)					this2->set_x(( (Float)(::Std_obj::_hx_int(x)) ));
HXDLIN( 170)					this2->set_y(( (Float)(175) ));
            				}
HXLINE( 171)				this->isAnim = true;
HXLINE( 158)				goto _hx_goto_9;
            			}
            			if (  (_hx_switch_0==HX_("chaos",40,9a,b3,45)) ){
HXLINE( 187)				::String name = HX_("icons/icon-chaos",81,c7,82,44);
HXLINE( 188)				::String library = null();
HXDLIN( 188)				 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(name,null(),true);
HXDLIN( 188)				bool xmlExists = false;
HXDLIN( 188)				::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 188)				if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 188)					xmlExists = true;
            				}
HXDLIN( 188)				 ::Dynamic _hx_tmp;
HXDLIN( 188)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 188)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE( 188)					_hx_tmp = ::backend::Paths_obj::image(name,library,true);
            				}
HXDLIN( 188)				::String _hx_tmp1;
HXDLIN( 188)				if (xmlExists) {
HXLINE( 188)					_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            				}
            				else {
HXLINE( 188)					_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            				}
HXDLIN( 188)				this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 189)				{
HXLINE( 189)					 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN( 189)					this1->set_x(((Float)0.2));
HXDLIN( 189)					this1->set_y(((Float)0.2));
            				}
HXLINE( 191)				this->animation->addByPrefix(HX_("neutral",47,ed,29,eb),HX_("Neutral",27,15,7b,b8),12,true,this->isPlayer,null());
HXLINE( 192)				this->animation->addByPrefix(HX_("defeat",f3,67,e1,66),HX_("Defeat",13,dc,75,9b),12,true,this->isPlayer,null());
HXLINE( 193)				this->animation->addByPrefix(HX_("winning",50,6b,0c,ef),HX_("Winning",30,93,5d,bc),12,true,this->isPlayer,null());
HXLINE( 194)				this->animation->play(HX_("neutral",47,ed,29,eb),null(),null(),null());
HXLINE( 196)				this->updateHitbox();
HXLINE( 197)				this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 198)				{
HXLINE( 198)					 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN( 198)					Float Value = (this->get_width() - ( (Float)(150) ));
HXDLIN( 198)					 ::Dynamic Max = null();
HXDLIN( 198)					Float lowerBound;
HXDLIN( 198)					if ((Value < 0)) {
HXLINE( 198)						lowerBound = ( (Float)(0) );
            					}
            					else {
HXLINE( 198)						lowerBound = Value;
            					}
HXDLIN( 198)					Float x;
HXDLIN( 198)					bool x1;
HXDLIN( 198)					if (::hx::IsNotNull( Max )) {
HXLINE( 198)						x1 = ::hx::IsGreater( lowerBound,Max );
            					}
            					else {
HXLINE( 198)						x1 = false;
            					}
HXDLIN( 198)					if (x1) {
HXLINE( 198)						x = ( (Float)(Max) );
            					}
            					else {
HXLINE( 198)						x = lowerBound;
            					}
HXDLIN( 198)					this2->set_x(( (Float)(::Std_obj::_hx_int(x)) ));
HXDLIN( 198)					this2->set_y(( (Float)(175) ));
            				}
HXLINE( 199)				this->isAnim = true;
HXLINE( 186)				goto _hx_goto_9;
            			}
            			if (  (_hx_switch_0==HX_("god-expunged-1",25,60,94,3a)) ){
HXLINE( 201)				::String name = HX_("icons/icon-god-expunged-1",c4,02,e0,53);
HXLINE( 202)				::String library = null();
HXDLIN( 202)				 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(name,null(),true);
HXDLIN( 202)				bool xmlExists = false;
HXDLIN( 202)				::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 202)				if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 202)					xmlExists = true;
            				}
HXDLIN( 202)				 ::Dynamic _hx_tmp;
HXDLIN( 202)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 202)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE( 202)					_hx_tmp = ::backend::Paths_obj::image(name,library,true);
            				}
HXDLIN( 202)				::String _hx_tmp1;
HXDLIN( 202)				if (xmlExists) {
HXLINE( 202)					_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            				}
            				else {
HXLINE( 202)					_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            				}
HXDLIN( 202)				this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 204)				this->animation->addByPrefix(HX_("neutral",47,ed,29,eb),HX_("Normal",47,e6,fd,64),12,true,this->isPlayer,null());
HXLINE( 205)				this->animation->addByPrefix(HX_("defeat",f3,67,e1,66),HX_("Dead",c4,7a,3f,2d),12,true,this->isPlayer,null());
HXLINE( 206)				this->animation->addByPrefix(HX_("winning",50,6b,0c,ef),HX_("Win",fc,5f,42,00),12,true,this->isPlayer,null());
HXLINE( 207)				this->animation->play(HX_("neutral",47,ed,29,eb),null(),null(),null());
HXLINE( 208)				this->updateHitbox();
HXLINE( 210)				this->isAnim = true;
HXLINE( 200)				goto _hx_goto_9;
            			}
            			if (  (_hx_switch_0==HX_("icon-pissed",0c,41,0c,1b)) ||  (_hx_switch_0==HX_("pissed",78,77,66,89)) ){
HXLINE( 173)				::String name = HX_("icons/icon-pissed",17,e3,de,7f);
HXLINE( 174)				::String library = null();
HXDLIN( 174)				 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(name,null(),true);
HXDLIN( 174)				bool xmlExists = false;
HXDLIN( 174)				::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 174)				if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 174)					xmlExists = true;
            				}
HXDLIN( 174)				 ::Dynamic _hx_tmp;
HXDLIN( 174)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 174)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE( 174)					_hx_tmp = ::backend::Paths_obj::image(name,library,true);
            				}
HXDLIN( 174)				::String _hx_tmp1;
HXDLIN( 174)				if (xmlExists) {
HXLINE( 174)					_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            				}
            				else {
HXLINE( 174)					_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            				}
HXDLIN( 174)				this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 175)				{
HXLINE( 175)					 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN( 175)					this1->set_x(((Float)0.25));
HXDLIN( 175)					this1->set_y(((Float)0.25));
            				}
HXLINE( 177)				this->animation->addByPrefix(HX_("neutral",47,ed,29,eb),HX_("Neutral",27,15,7b,b8),20,true,this->isPlayer,null());
HXLINE( 178)				this->animation->addByPrefix(HX_("defeat",f3,67,e1,66),HX_("Defeat",13,dc,75,9b),20,true,this->isPlayer,null());
HXLINE( 179)				this->animation->addByPrefix(HX_("winning",50,6b,0c,ef),HX_("Winning",30,93,5d,bc),20,true,this->isPlayer,null());
HXLINE( 180)				this->animation->play(HX_("neutral",47,ed,29,eb),null(),null(),null());
HXLINE( 182)				this->updateHitbox();
HXLINE( 183)				this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 184)				{
HXLINE( 184)					 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN( 184)					Float Value = (this->get_width() - ( (Float)(150) ));
HXDLIN( 184)					 ::Dynamic Max = null();
HXDLIN( 184)					Float lowerBound;
HXDLIN( 184)					if ((Value < 0)) {
HXLINE( 184)						lowerBound = ( (Float)(0) );
            					}
            					else {
HXLINE( 184)						lowerBound = Value;
            					}
HXDLIN( 184)					Float x;
HXDLIN( 184)					bool x1;
HXDLIN( 184)					if (::hx::IsNotNull( Max )) {
HXLINE( 184)						x1 = ::hx::IsGreater( lowerBound,Max );
            					}
            					else {
HXLINE( 184)						x1 = false;
            					}
HXDLIN( 184)					if (x1) {
HXLINE( 184)						x = ( (Float)(Max) );
            					}
            					else {
HXLINE( 184)						x = lowerBound;
            					}
HXDLIN( 184)					this2->set_x(( (Float)(::Std_obj::_hx_int(x)) ));
HXDLIN( 184)					this2->set_y(( (Float)(175) ));
            				}
HXLINE( 185)				this->isAnim = true;
HXLINE( 172)				goto _hx_goto_9;
            			}
            			/* default */{
HXLINE( 212)				::String name = (HX_("icons/",15,dc,d6,45) + _hx_char);
HXLINE( 213)				if (!(::backend::Paths_obj::fileExists(((HX_("images/",77,50,74,c1) + name) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),null(),null()))) {
HXLINE( 213)					name = (HX_("icons/icon-",5f,da,21,72) + _hx_char);
            				}
HXLINE( 214)				if (!(::backend::Paths_obj::fileExists(((HX_("images/",77,50,74,c1) + name) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),null(),null()))) {
HXLINE( 214)					name = HX_("icons/icon-face",7c,aa,dd,e7);
            				}
HXLINE( 215)				 ::Dynamic file = ::backend::Paths_obj::image(name,null(),null());
HXLINE( 217)				{
HXLINE( 217)					 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN( 217)					this1->set_x(( (Float)(1) ));
HXDLIN( 217)					this1->set_y(( (Float)(1) ));
            				}
HXLINE( 219)				this->loadGraphic(file,null(),null(),null(),null(),null());
HXLINE( 220)				int _hx_tmp = ::Math_obj::floor((this->get_width() / ( (Float)(3) )));
HXDLIN( 220)				this->loadGraphic(file,true,_hx_tmp,::Math_obj::floor(this->get_height()),null(),null());
HXLINE( 221)				this->iconOffsets[0] = ((this->get_width() - ( (Float)(150) )) / ( (Float)(2) ));
HXLINE( 222)				this->iconOffsets[1] = ((this->get_width() - ( (Float)(150) )) / ( (Float)(2) ));
HXLINE( 223)				this->iconOffsets[2] = ((this->get_width() - ( (Float)(150) )) / ( (Float)(2) ));
HXLINE( 224)				this->updateHitbox();
HXLINE( 226)				this->animation->add(_hx_char,::Array_obj< int >::fromData( _hx_array_data_ea1163af_11,3),0,false,this->isPlayer,null());
HXLINE( 227)				this->animation->play(_hx_char,null(),null(),null());
HXLINE( 228)				this->isAnim = false;
            			}
            			_hx_goto_9:;
HXLINE( 230)			this->_hx_char = _hx_char;
HXLINE( 232)			this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 233)			bool _hx_tmp;
HXDLIN( 233)			if (!(::StringTools_obj::endsWith(_hx_char,HX_("-pixel",39,03,b3,c0)))) {
HXLINE( 233)				_hx_tmp = this->noAntialiasing->contains(_hx_char);
            			}
            			else {
HXLINE( 233)				_hx_tmp = true;
            			}
HXDLIN( 233)			if (_hx_tmp) {
HXLINE( 234)				this->set_antialiasing(false);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(HealthIcon_obj,changeIcon,(void))

void HealthIcon_obj::changeIconStatus(int status){
            	HX_STACKFRAME(&_hx_pos_ac81527997e0445c_240_changeIconStatus)
HXDLIN( 240)		if (!(this->isAnim)) {
HXLINE( 241)			this->animation->_curAnim->set_curFrame(status);
            		}
            		else {
HXLINE( 243)			switch((int)(status)){
            				case (int)1: {
HXLINE( 245)					this->animation->play(HX_("defeat",f3,67,e1,66),false,null(),null());
            				}
            				break;
            				case (int)2: {
HXLINE( 247)					this->animation->play(HX_("winning",50,6b,0c,ef),false,null(),null());
            				}
            				break;
            				default:{
HXLINE( 249)					this->animation->play(HX_("neutral",47,ed,29,eb),false,null(),null());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(HealthIcon_obj,changeIconStatus,(void))

void HealthIcon_obj::updateHitboxPE(){
            	HX_STACKFRAME(&_hx_pos_ac81527997e0445c_255_updateHitboxPE)
HXLINE( 256)		this->super::updateHitbox();
HXLINE( 257)		this->offset->set_x(this->iconOffsets->__get(0));
HXLINE( 258)		this->offset->set_y(this->iconOffsets->__get(1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(HealthIcon_obj,updateHitboxPE,(void))

::String HealthIcon_obj::getCharacter(){
            	HX_STACKFRAME(&_hx_pos_ac81527997e0445c_262_getCharacter)
HXDLIN( 262)		return this->_hx_char;
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
