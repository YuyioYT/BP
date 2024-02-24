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
#ifndef INCLUDED_flixel_addons_effects_FlxTrail
#include <flixel/addons/effects/FlxTrail.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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
HX_LOCAL_STACK_FRAME(_hx_pos_ac81527997e0445c_61_update,"objects.HealthIcon","update",0x858ddce8,"objects.HealthIcon.update","objects/HealthIcon.hx",61,0x9d2b69ce)
HX_LOCAL_STACK_FRAME(_hx_pos_ac81527997e0445c_148_swapOldIcon,"objects.HealthIcon","swapOldIcon",0x3170b22e,"objects.HealthIcon.swapOldIcon","objects/HealthIcon.hx",148,0x9d2b69ce)
HX_LOCAL_STACK_FRAME(_hx_pos_ac81527997e0445c_154_changeIcon,"objects.HealthIcon","changeIcon",0xdec2cf68,"objects.HealthIcon.changeIcon","objects/HealthIcon.hx",154,0x9d2b69ce)
static const int _hx_array_data_ea1163af_11[] = {
	(int)0,(int)1,(int)2,
};
HX_LOCAL_STACK_FRAME(_hx_pos_ac81527997e0445c_252_changeIconStatus,"objects.HealthIcon","changeIconStatus",0x5690a8ba,"objects.HealthIcon.changeIconStatus","objects/HealthIcon.hx",252,0x9d2b69ce)
HX_LOCAL_STACK_FRAME(_hx_pos_ac81527997e0445c_267_updateHitboxPE,"objects.HealthIcon","updateHitboxPE",0x38738a95,"objects.HealthIcon.updateHitboxPE","objects/HealthIcon.hx",267,0x9d2b69ce)
HX_LOCAL_STACK_FRAME(_hx_pos_ac81527997e0445c_274_getCharacter,"objects.HealthIcon","getCharacter",0x54c7c052,"objects.HealthIcon.getCharacter","objects/HealthIcon.hx",274,0x9d2b69ce)
namespace objects{

void HealthIcon_obj::__construct(::String __o__hx_char,::hx::Null< bool >  __o_isPlayer, ::Dynamic __o_allowGPU){
            		::String _hx_char = __o__hx_char;
            		if (::hx::IsNull(__o__hx_char)) _hx_char = HX_("bf",c4,55,00,00);
            		bool isPlayer = __o_isPlayer.Default(false);
            		 ::Dynamic allowGPU = __o_allowGPU;
            		if (::hx::IsNull(__o_allowGPU)) allowGPU = true;
            	HX_STACKFRAME(&_hx_pos_ac81527997e0445c_12_new)
HXLINE( 152)		this->iconOffsets = ::Array_obj< Float >::fromData( _hx_array_data_ea1163af_1,2);
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
            	HX_GC_STACKFRAME(&_hx_pos_ac81527997e0445c_61_update)
HXLINE(  62)		this->super::update(elapsed);
HXLINE(  63)		{
HXLINE(  63)			 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN(  63)			Float Value = (this->get_width() - ( (Float)(150) ));
HXDLIN(  63)			 ::Dynamic Max = null();
HXDLIN(  63)			Float lowerBound;
HXDLIN(  63)			if ((Value < 0)) {
HXLINE(  63)				lowerBound = ( (Float)(0) );
            			}
            			else {
HXLINE(  63)				lowerBound = Value;
            			}
HXDLIN(  63)			Float x;
HXDLIN(  63)			bool x1;
HXDLIN(  63)			if (::hx::IsNotNull( Max )) {
HXLINE(  63)				x1 = ::hx::IsGreater( lowerBound,Max );
            			}
            			else {
HXLINE(  63)				x1 = false;
            			}
HXDLIN(  63)			if (x1) {
HXLINE(  63)				x = ( (Float)(Max) );
            			}
            			else {
HXLINE(  63)				x = lowerBound;
            			}
HXDLIN(  63)			Float x2 = ( (Float)(::Std_obj::_hx_int(x)) );
HXDLIN(  63)			Float Value1 = (this->get_height() - ( (Float)(150) ));
HXDLIN(  63)			 ::Dynamic Max1 = null();
HXDLIN(  63)			Float lowerBound1;
HXDLIN(  63)			if ((Value1 < 0)) {
HXLINE(  63)				lowerBound1 = ( (Float)(0) );
            			}
            			else {
HXLINE(  63)				lowerBound1 = Value1;
            			}
HXDLIN(  63)			Float y;
HXDLIN(  63)			bool y1;
HXDLIN(  63)			if (::hx::IsNotNull( Max1 )) {
HXLINE(  63)				y1 = ::hx::IsGreater( lowerBound1,Max1 );
            			}
            			else {
HXLINE(  63)				y1 = false;
            			}
HXDLIN(  63)			if (y1) {
HXLINE(  63)				y = ( (Float)(Max1) );
            			}
            			else {
HXLINE(  63)				y = lowerBound1;
            			}
HXDLIN(  63)			Float y2 = ( (Float)(::Std_obj::_hx_int(y)) );
HXDLIN(  63)			this1->set_x(x2);
HXDLIN(  63)			this1->set_y(y2);
            		}
HXLINE(  65)		if ((this->_hx_char == HX_("bambiGod2d",d9,88,43,f6))) {
HXLINE(  67)			::String _hx_switch_0 = this->animation->_curAnim->name;
            			if (  (_hx_switch_0==HX_("defeat",f3,67,e1,66)) ){
HXLINE(  74)				this->offset->set_x((this->offset->x + 40));
HXLINE(  75)				this->offset->set_y((this->offset->y + 130));
HXLINE(  76)				{
HXLINE(  76)					 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN(  76)					Float x = this->offset->x;
HXDLIN(  76)					this1->set_x((x + ::flixel::FlxG_obj::random->_hx_int(-3,3,null())));
            				}
HXLINE(  77)				{
HXLINE(  77)					 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN(  77)					Float y = this->offset->y;
HXDLIN(  77)					this2->set_y((y + ::flixel::FlxG_obj::random->_hx_int(-3,3,null())));
            				}
HXLINE(  78)				this->set_angle(( (Float)(::flixel::FlxG_obj::random->_hx_int(-3,3,null())) ));
HXLINE(  73)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("neutral",47,ed,29,eb)) ){
HXLINE(  69)				this->offset->set_y((this->offset->y + 140));
HXLINE(  70)				{
HXLINE(  70)					 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN(  70)					Float x = this->offset->x;
HXDLIN(  70)					this1->set_x((x + ::flixel::FlxG_obj::random->_hx_int(-2,2,null())));
            				}
HXLINE(  71)				{
HXLINE(  71)					 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN(  71)					Float y = this->offset->y;
HXDLIN(  71)					this2->set_y((y + ::flixel::FlxG_obj::random->_hx_int(-2,2,null())));
            				}
HXLINE(  72)				this->set_angle(( (Float)(::flixel::FlxG_obj::random->_hx_int(-2,2,null())) ));
HXLINE(  68)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("winning",50,6b,0c,ef)) ){
HXLINE(  80)				this->offset->set_x((this->offset->x + -50));
HXLINE(  81)				this->offset->set_y((this->offset->y + 130));
HXLINE(  82)				{
HXLINE(  82)					 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN(  82)					Float x = this->offset->x;
HXDLIN(  82)					this1->set_x((x + ::flixel::FlxG_obj::random->_hx_int(-1,1,null())));
            				}
HXLINE(  83)				{
HXLINE(  83)					 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN(  83)					Float y = this->offset->y;
HXDLIN(  83)					this2->set_y((y + ::flixel::FlxG_obj::random->_hx_int(-1,1,null())));
            				}
HXLINE(  84)				this->set_angle(( (Float)(::flixel::FlxG_obj::random->_hx_int(-1,1,null())) ));
HXLINE(  79)				goto _hx_goto_3;
            			}
            			_hx_goto_3:;
HXLINE(  86)			this->scaryTrail =  ::flixel::addons::effects::FlxTrail_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),null(),10,3,((Float)0.3),((Float)0.02));
            		}
HXLINE(  88)		if ((this->_hx_char == HX_("bf",c4,55,00,00))) {
HXLINE(  90)			::String _hx_switch_1 = this->animation->_curAnim->name;
            			if (  (_hx_switch_1==HX_("defeat",f3,67,e1,66)) ){
HXLINE(  95)				this->offset->set_y((this->offset->y + 240));
HXLINE(  96)				this->offset->set_x((this->offset->x + 230));
HXLINE(  94)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_1==HX_("neutral",47,ed,29,eb)) ){
HXLINE(  92)				this->offset->set_y((this->offset->y + 240));
HXLINE(  93)				this->offset->set_x((this->offset->x + 230));
HXLINE(  91)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_1==HX_("winning",50,6b,0c,ef)) ){
HXLINE(  98)				this->offset->set_y((this->offset->y + 230));
HXLINE(  99)				this->offset->set_x((this->offset->x + 210));
HXLINE(  97)				goto _hx_goto_4;
            			}
            			_hx_goto_4:;
            		}
HXLINE( 102)		if ((this->_hx_char == HX_("pissed",78,77,66,89))) {
HXLINE( 104)			::String _hx_switch_2 = this->animation->_curAnim->name;
            			if (  (_hx_switch_2==HX_("defeat",f3,67,e1,66)) ){
HXLINE( 109)				this->offset->set_y((this->offset->y + 240));
HXLINE( 110)				this->offset->set_x((this->offset->x + 230));
HXLINE( 108)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_2==HX_("neutral",47,ed,29,eb)) ){
HXLINE( 106)				this->offset->set_y((this->offset->y + 240));
HXLINE( 107)				this->offset->set_x((this->offset->x + 230));
HXLINE( 105)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_2==HX_("winning",50,6b,0c,ef)) ){
HXLINE( 112)				this->offset->set_y((this->offset->y + 240));
HXLINE( 113)				this->offset->set_x((this->offset->x + 230));
HXLINE( 111)				goto _hx_goto_5;
            			}
            			_hx_goto_5:;
            		}
HXLINE( 116)		if ((this->_hx_char == HX_("chaos",40,9a,b3,45))) {
HXLINE( 117)			::String _hx_switch_3 = this->animation->_curAnim->name;
            			if (  (_hx_switch_3==HX_("defeat",f3,67,e1,66)) ){
HXLINE( 122)				this->offset->set_y((this->offset->y + 520));
HXLINE( 123)				this->offset->set_x((this->offset->x + 410));
HXLINE( 121)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_3==HX_("neutral",47,ed,29,eb)) ){
HXLINE( 119)				this->offset->set_y((this->offset->y + 520));
HXLINE( 120)				this->offset->set_x((this->offset->x + 410));
HXLINE( 118)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_3==HX_("winning",50,6b,0c,ef)) ){
HXLINE( 125)				this->offset->set_y((this->offset->y + 520));
HXLINE( 126)				this->offset->set_x((this->offset->x + 410));
HXLINE( 124)				goto _hx_goto_6;
            			}
            			_hx_goto_6:;
HXLINE( 128)			this->offset->set_x((this->offset->x - ( (Float)(20) )));
HXLINE( 130)			{
HXLINE( 130)				 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN( 130)				Float x = this->offset->x;
HXDLIN( 130)				this1->set_x((x + ::flixel::FlxG_obj::random->_hx_int(-3,3,null())));
            			}
HXLINE( 131)			{
HXLINE( 131)				 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN( 131)				Float y = this->offset->y;
HXDLIN( 131)				this2->set_y((y + ::flixel::FlxG_obj::random->_hx_int(-3,3,null())));
            			}
HXLINE( 132)			this->set_angle(( (Float)(::flixel::FlxG_obj::random->_hx_int(-2,2,null())) ));
            		}
HXLINE( 134)		if ((this->_hx_char == HX_("god-expunged-1",25,60,94,3a))) {
HXLINE( 136)			this->offset->set_x((this->offset->x - ( (Float)(20) )));
HXLINE( 138)			{
HXLINE( 138)				 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN( 138)				Float x = this->offset->x;
HXDLIN( 138)				this1->set_x((x + ::flixel::FlxG_obj::random->_hx_int(-2,2,null())));
            			}
HXLINE( 139)			{
HXLINE( 139)				 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN( 139)				Float y = this->offset->y;
HXDLIN( 139)				this2->set_y((y + ::flixel::FlxG_obj::random->_hx_int(-2,2,null())));
            			}
HXLINE( 140)			this->set_angle(( (Float)(::flixel::FlxG_obj::random->_hx_int(-2,2,null())) ));
            		}
HXLINE( 143)		if (::hx::IsNotNull( this->sprTracker )) {
HXLINE( 144)			Float _hx_tmp = this->sprTracker->x;
HXDLIN( 144)			Float _hx_tmp1 = ((_hx_tmp + this->sprTracker->get_width()) + 10);
HXDLIN( 144)			this->setPosition(_hx_tmp1,(this->sprTracker->y - ( (Float)(30) )));
            		}
            	}


void HealthIcon_obj::swapOldIcon(){
            	HX_STACKFRAME(&_hx_pos_ac81527997e0445c_148_swapOldIcon)
HXDLIN( 148)		if ((this->isOldIcon = !(this->isOldIcon))) {
HXDLIN( 148)			this->changeIcon(HX_("bf-old",5e,ba,eb,07),null());
            		}
            		else {
HXLINE( 149)			this->changeIcon(HX_("bf",c4,55,00,00),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(HealthIcon_obj,swapOldIcon,(void))

void HealthIcon_obj::changeIcon(::String _hx_char, ::Dynamic __o_allowGPU){
            		 ::Dynamic allowGPU = __o_allowGPU;
            		if (::hx::IsNull(__o_allowGPU)) allowGPU = true;
            	HX_STACKFRAME(&_hx_pos_ac81527997e0445c_154_changeIcon)
HXDLIN( 154)		if ((this->_hx_char != _hx_char)) {
HXLINE( 155)			::String _hx_switch_0 = _hx_char;
            			if (  (_hx_switch_0==HX_("bambiGod2d",d9,88,43,f6)) ){
HXLINE( 157)				::String name = HX_("icons/icon-bambiGod2d",f8,af,83,f5);
HXLINE( 158)				::String library = null();
HXDLIN( 158)				 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(name,null(),true);
HXDLIN( 158)				bool xmlExists = false;
HXDLIN( 158)				::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 158)				if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 158)					xmlExists = true;
            				}
HXDLIN( 158)				 ::Dynamic _hx_tmp;
HXDLIN( 158)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 158)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE( 158)					_hx_tmp = ::backend::Paths_obj::image(name,library,true);
            				}
HXDLIN( 158)				::String _hx_tmp1;
HXDLIN( 158)				if (xmlExists) {
HXLINE( 158)					_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            				}
            				else {
HXLINE( 158)					_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            				}
HXDLIN( 158)				this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 159)				{
HXLINE( 159)					 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN( 159)					this1->set_x(((Float)0.5));
HXDLIN( 159)					this1->set_y(((Float)0.5));
            				}
HXLINE( 161)				this->animation->addByPrefix(HX_("neutral",47,ed,29,eb),HX_("Neutral",27,15,7b,b8),12,true,this->isPlayer,null());
HXLINE( 162)				this->animation->addByPrefix(HX_("defeat",f3,67,e1,66),HX_("Defeat",13,dc,75,9b),12,true,this->isPlayer,null());
HXLINE( 163)				this->animation->addByPrefix(HX_("winning",50,6b,0c,ef),HX_("Winning",30,93,5d,bc),12,true,this->isPlayer,null());
HXLINE( 164)				this->animation->play(HX_("neutral",47,ed,29,eb),null(),null(),null());
HXLINE( 166)				this->updateHitbox();
HXLINE( 167)				this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 168)				{
HXLINE( 168)					 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN( 168)					Float Value = (this->get_width() - ( (Float)(150) ));
HXDLIN( 168)					 ::Dynamic Max = null();
HXDLIN( 168)					Float lowerBound;
HXDLIN( 168)					if ((Value < 0)) {
HXLINE( 168)						lowerBound = ( (Float)(0) );
            					}
            					else {
HXLINE( 168)						lowerBound = Value;
            					}
HXDLIN( 168)					Float x;
HXDLIN( 168)					bool x1;
HXDLIN( 168)					if (::hx::IsNotNull( Max )) {
HXLINE( 168)						x1 = ::hx::IsGreater( lowerBound,Max );
            					}
            					else {
HXLINE( 168)						x1 = false;
            					}
HXDLIN( 168)					if (x1) {
HXLINE( 168)						x = ( (Float)(Max) );
            					}
            					else {
HXLINE( 168)						x = lowerBound;
            					}
HXDLIN( 168)					this2->set_x(( (Float)(::Std_obj::_hx_int(x)) ));
HXDLIN( 168)					this2->set_y(( (Float)(175) ));
            				}
HXLINE( 169)				this->isAnim = true;
HXLINE( 156)				goto _hx_goto_9;
            			}
            			if (  (_hx_switch_0==HX_("bf",c4,55,00,00)) ||  (_hx_switch_0==HX_("icon-bf",58,c5,f4,d5)) ){
HXLINE( 171)				::String name = HX_("icons/icon-bf",e3,c5,14,a2);
HXLINE( 172)				::String library = null();
HXDLIN( 172)				 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(name,null(),true);
HXDLIN( 172)				bool xmlExists = false;
HXDLIN( 172)				::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 172)				if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 172)					xmlExists = true;
            				}
HXDLIN( 172)				 ::Dynamic _hx_tmp;
HXDLIN( 172)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 172)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE( 172)					_hx_tmp = ::backend::Paths_obj::image(name,library,true);
            				}
HXDLIN( 172)				::String _hx_tmp1;
HXDLIN( 172)				if (xmlExists) {
HXLINE( 172)					_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            				}
            				else {
HXLINE( 172)					_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            				}
HXDLIN( 172)				this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 173)				{
HXLINE( 173)					 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN( 173)					this1->set_x(((Float)0.25));
HXDLIN( 173)					this1->set_y(((Float)0.25));
            				}
HXLINE( 175)				this->animation->addByPrefix(HX_("neutral",47,ed,29,eb),HX_("Neutral",27,15,7b,b8),20,true,this->isPlayer,null());
HXLINE( 176)				this->animation->addByPrefix(HX_("defeat",f3,67,e1,66),HX_("Defeat",13,dc,75,9b),20,true,this->isPlayer,null());
HXLINE( 177)				this->animation->addByPrefix(HX_("winning",50,6b,0c,ef),HX_("Winning",30,93,5d,bc),20,true,this->isPlayer,null());
HXLINE( 178)				this->animation->play(HX_("neutral",47,ed,29,eb),null(),null(),null());
HXLINE( 180)				this->updateHitbox();
HXLINE( 181)				this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 182)				{
HXLINE( 182)					 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN( 182)					Float Value = (this->get_width() - ( (Float)(150) ));
HXDLIN( 182)					 ::Dynamic Max = null();
HXDLIN( 182)					Float lowerBound;
HXDLIN( 182)					if ((Value < 0)) {
HXLINE( 182)						lowerBound = ( (Float)(0) );
            					}
            					else {
HXLINE( 182)						lowerBound = Value;
            					}
HXDLIN( 182)					Float x;
HXDLIN( 182)					bool x1;
HXDLIN( 182)					if (::hx::IsNotNull( Max )) {
HXLINE( 182)						x1 = ::hx::IsGreater( lowerBound,Max );
            					}
            					else {
HXLINE( 182)						x1 = false;
            					}
HXDLIN( 182)					if (x1) {
HXLINE( 182)						x = ( (Float)(Max) );
            					}
            					else {
HXLINE( 182)						x = lowerBound;
            					}
HXDLIN( 182)					this2->set_x(( (Float)(::Std_obj::_hx_int(x)) ));
HXDLIN( 182)					this2->set_y(( (Float)(175) ));
            				}
HXLINE( 183)				this->isAnim = true;
HXLINE( 170)				goto _hx_goto_9;
            			}
            			if (  (_hx_switch_0==HX_("chaos",40,9a,b3,45)) ){
HXLINE( 199)				::String name = HX_("icons/icon-chaos",81,c7,82,44);
HXLINE( 200)				::String library = null();
HXDLIN( 200)				 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(name,null(),true);
HXDLIN( 200)				bool xmlExists = false;
HXDLIN( 200)				::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 200)				if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 200)					xmlExists = true;
            				}
HXDLIN( 200)				 ::Dynamic _hx_tmp;
HXDLIN( 200)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 200)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE( 200)					_hx_tmp = ::backend::Paths_obj::image(name,library,true);
            				}
HXDLIN( 200)				::String _hx_tmp1;
HXDLIN( 200)				if (xmlExists) {
HXLINE( 200)					_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            				}
            				else {
HXLINE( 200)					_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            				}
HXDLIN( 200)				this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 201)				{
HXLINE( 201)					 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN( 201)					this1->set_x(((Float)0.2));
HXDLIN( 201)					this1->set_y(((Float)0.2));
            				}
HXLINE( 203)				this->animation->addByPrefix(HX_("neutral",47,ed,29,eb),HX_("Neutral",27,15,7b,b8),12,true,this->isPlayer,null());
HXLINE( 204)				this->animation->addByPrefix(HX_("defeat",f3,67,e1,66),HX_("Defeat",13,dc,75,9b),12,true,this->isPlayer,null());
HXLINE( 205)				this->animation->addByPrefix(HX_("winning",50,6b,0c,ef),HX_("Winning",30,93,5d,bc),12,true,this->isPlayer,null());
HXLINE( 206)				this->animation->play(HX_("neutral",47,ed,29,eb),null(),null(),null());
HXLINE( 208)				this->updateHitbox();
HXLINE( 209)				this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 210)				{
HXLINE( 210)					 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN( 210)					Float Value = (this->get_width() - ( (Float)(150) ));
HXDLIN( 210)					 ::Dynamic Max = null();
HXDLIN( 210)					Float lowerBound;
HXDLIN( 210)					if ((Value < 0)) {
HXLINE( 210)						lowerBound = ( (Float)(0) );
            					}
            					else {
HXLINE( 210)						lowerBound = Value;
            					}
HXDLIN( 210)					Float x;
HXDLIN( 210)					bool x1;
HXDLIN( 210)					if (::hx::IsNotNull( Max )) {
HXLINE( 210)						x1 = ::hx::IsGreater( lowerBound,Max );
            					}
            					else {
HXLINE( 210)						x1 = false;
            					}
HXDLIN( 210)					if (x1) {
HXLINE( 210)						x = ( (Float)(Max) );
            					}
            					else {
HXLINE( 210)						x = lowerBound;
            					}
HXDLIN( 210)					this2->set_x(( (Float)(::Std_obj::_hx_int(x)) ));
HXDLIN( 210)					this2->set_y(( (Float)(175) ));
            				}
HXLINE( 211)				this->isAnim = true;
HXLINE( 198)				goto _hx_goto_9;
            			}
            			if (  (_hx_switch_0==HX_("god-expunged-1",25,60,94,3a)) ){
HXLINE( 213)				::String name = HX_("icons/icon-god-expunged-1",c4,02,e0,53);
HXLINE( 214)				::String library = null();
HXDLIN( 214)				 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(name,null(),true);
HXDLIN( 214)				bool xmlExists = false;
HXDLIN( 214)				::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 214)				if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 214)					xmlExists = true;
            				}
HXDLIN( 214)				 ::Dynamic _hx_tmp;
HXDLIN( 214)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 214)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE( 214)					_hx_tmp = ::backend::Paths_obj::image(name,library,true);
            				}
HXDLIN( 214)				::String _hx_tmp1;
HXDLIN( 214)				if (xmlExists) {
HXLINE( 214)					_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            				}
            				else {
HXLINE( 214)					_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            				}
HXDLIN( 214)				this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 216)				this->animation->addByPrefix(HX_("neutral",47,ed,29,eb),HX_("Normal",47,e6,fd,64),12,true,this->isPlayer,null());
HXLINE( 217)				this->animation->addByPrefix(HX_("defeat",f3,67,e1,66),HX_("Dead",c4,7a,3f,2d),12,true,this->isPlayer,null());
HXLINE( 218)				this->animation->addByPrefix(HX_("winning",50,6b,0c,ef),HX_("Win",fc,5f,42,00),12,true,this->isPlayer,null());
HXLINE( 219)				this->animation->play(HX_("neutral",47,ed,29,eb),null(),null(),null());
HXLINE( 220)				this->updateHitbox();
HXLINE( 222)				this->isAnim = true;
HXLINE( 212)				goto _hx_goto_9;
            			}
            			if (  (_hx_switch_0==HX_("icon-pissed",0c,41,0c,1b)) ||  (_hx_switch_0==HX_("pissed",78,77,66,89)) ){
HXLINE( 185)				::String name = HX_("icons/icon-pissed",17,e3,de,7f);
HXLINE( 186)				::String library = null();
HXDLIN( 186)				 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(name,null(),true);
HXDLIN( 186)				bool xmlExists = false;
HXDLIN( 186)				::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 186)				if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 186)					xmlExists = true;
            				}
HXDLIN( 186)				 ::Dynamic _hx_tmp;
HXDLIN( 186)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 186)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE( 186)					_hx_tmp = ::backend::Paths_obj::image(name,library,true);
            				}
HXDLIN( 186)				::String _hx_tmp1;
HXDLIN( 186)				if (xmlExists) {
HXLINE( 186)					_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            				}
            				else {
HXLINE( 186)					_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            				}
HXDLIN( 186)				this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 187)				{
HXLINE( 187)					 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN( 187)					this1->set_x(((Float)0.25));
HXDLIN( 187)					this1->set_y(((Float)0.25));
            				}
HXLINE( 189)				this->animation->addByPrefix(HX_("neutral",47,ed,29,eb),HX_("Neutral",27,15,7b,b8),20,true,this->isPlayer,null());
HXLINE( 190)				this->animation->addByPrefix(HX_("defeat",f3,67,e1,66),HX_("Defeat",13,dc,75,9b),20,true,this->isPlayer,null());
HXLINE( 191)				this->animation->addByPrefix(HX_("winning",50,6b,0c,ef),HX_("Winning",30,93,5d,bc),20,true,this->isPlayer,null());
HXLINE( 192)				this->animation->play(HX_("neutral",47,ed,29,eb),null(),null(),null());
HXLINE( 194)				this->updateHitbox();
HXLINE( 195)				this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 196)				{
HXLINE( 196)					 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN( 196)					Float Value = (this->get_width() - ( (Float)(150) ));
HXDLIN( 196)					 ::Dynamic Max = null();
HXDLIN( 196)					Float lowerBound;
HXDLIN( 196)					if ((Value < 0)) {
HXLINE( 196)						lowerBound = ( (Float)(0) );
            					}
            					else {
HXLINE( 196)						lowerBound = Value;
            					}
HXDLIN( 196)					Float x;
HXDLIN( 196)					bool x1;
HXDLIN( 196)					if (::hx::IsNotNull( Max )) {
HXLINE( 196)						x1 = ::hx::IsGreater( lowerBound,Max );
            					}
            					else {
HXLINE( 196)						x1 = false;
            					}
HXDLIN( 196)					if (x1) {
HXLINE( 196)						x = ( (Float)(Max) );
            					}
            					else {
HXLINE( 196)						x = lowerBound;
            					}
HXDLIN( 196)					this2->set_x(( (Float)(::Std_obj::_hx_int(x)) ));
HXDLIN( 196)					this2->set_y(( (Float)(175) ));
            				}
HXLINE( 197)				this->isAnim = true;
HXLINE( 184)				goto _hx_goto_9;
            			}
            			/* default */{
HXLINE( 224)				::String name = (HX_("icons/",15,dc,d6,45) + _hx_char);
HXLINE( 225)				if (!(::backend::Paths_obj::fileExists(((HX_("images/",77,50,74,c1) + name) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),null(),null()))) {
HXLINE( 225)					name = (HX_("icons/icon-",5f,da,21,72) + _hx_char);
            				}
HXLINE( 226)				if (!(::backend::Paths_obj::fileExists(((HX_("images/",77,50,74,c1) + name) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),null(),null()))) {
HXLINE( 226)					name = HX_("icons/icon-face",7c,aa,dd,e7);
            				}
HXLINE( 227)				 ::Dynamic file = ::backend::Paths_obj::image(name,null(),null());
HXLINE( 229)				{
HXLINE( 229)					 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN( 229)					this1->set_x(( (Float)(1) ));
HXDLIN( 229)					this1->set_y(( (Float)(1) ));
            				}
HXLINE( 231)				this->loadGraphic(file,null(),null(),null(),null(),null());
HXLINE( 232)				int _hx_tmp = ::Math_obj::floor((this->get_width() / ( (Float)(3) )));
HXDLIN( 232)				this->loadGraphic(file,true,_hx_tmp,::Math_obj::floor(this->get_height()),null(),null());
HXLINE( 233)				this->iconOffsets[0] = ((this->get_width() - ( (Float)(150) )) / ( (Float)(2) ));
HXLINE( 234)				this->iconOffsets[1] = ((this->get_width() - ( (Float)(150) )) / ( (Float)(2) ));
HXLINE( 235)				this->iconOffsets[2] = ((this->get_width() - ( (Float)(150) )) / ( (Float)(2) ));
HXLINE( 236)				this->updateHitbox();
HXLINE( 238)				this->animation->add(_hx_char,::Array_obj< int >::fromData( _hx_array_data_ea1163af_11,3),0,false,this->isPlayer,null());
HXLINE( 239)				this->animation->play(_hx_char,null(),null(),null());
HXLINE( 240)				this->isAnim = false;
            			}
            			_hx_goto_9:;
HXLINE( 242)			this->_hx_char = _hx_char;
HXLINE( 244)			this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 245)			bool _hx_tmp;
HXDLIN( 245)			if (!(::StringTools_obj::endsWith(_hx_char,HX_("-pixel",39,03,b3,c0)))) {
HXLINE( 245)				_hx_tmp = this->noAntialiasing->contains(_hx_char);
            			}
            			else {
HXLINE( 245)				_hx_tmp = true;
            			}
HXDLIN( 245)			if (_hx_tmp) {
HXLINE( 246)				this->set_antialiasing(false);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(HealthIcon_obj,changeIcon,(void))

void HealthIcon_obj::changeIconStatus(int status){
            	HX_STACKFRAME(&_hx_pos_ac81527997e0445c_252_changeIconStatus)
HXDLIN( 252)		if (!(this->isAnim)) {
HXLINE( 253)			this->animation->_curAnim->set_curFrame(status);
            		}
            		else {
HXLINE( 255)			switch((int)(status)){
            				case (int)1: {
HXLINE( 257)					this->animation->play(HX_("defeat",f3,67,e1,66),false,null(),null());
            				}
            				break;
            				case (int)2: {
HXLINE( 259)					this->animation->play(HX_("winning",50,6b,0c,ef),false,null(),null());
            				}
            				break;
            				default:{
HXLINE( 261)					this->animation->play(HX_("neutral",47,ed,29,eb),false,null(),null());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(HealthIcon_obj,changeIconStatus,(void))

void HealthIcon_obj::updateHitboxPE(){
            	HX_STACKFRAME(&_hx_pos_ac81527997e0445c_267_updateHitboxPE)
HXLINE( 268)		this->super::updateHitbox();
HXLINE( 269)		this->offset->set_x(this->iconOffsets->__get(0));
HXLINE( 270)		this->offset->set_y(this->iconOffsets->__get(1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(HealthIcon_obj,updateHitboxPE,(void))

::String HealthIcon_obj::getCharacter(){
            	HX_STACKFRAME(&_hx_pos_ac81527997e0445c_274_getCharacter)
HXDLIN( 274)		return this->_hx_char;
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
	HX_MARK_MEMBER_NAME(scaryTrail,"scaryTrail");
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
	HX_VISIT_MEMBER_NAME(scaryTrail,"scaryTrail");
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
		if (HX_FIELD_EQ(inName,"scaryTrail") ) { return ::hx::Val( scaryTrail ); }
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
		if (HX_FIELD_EQ(inName,"scaryTrail") ) { scaryTrail=inValue.Cast<  ::flixel::addons::effects::FlxTrail >(); return inValue; }
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
	outFields->push(HX_("scaryTrail",ce,40,f7,2f));
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
	{::hx::fsObject /*  ::flixel::addons::effects::FlxTrail */ ,(int)offsetof(HealthIcon_obj,scaryTrail),HX_("scaryTrail",ce,40,f7,2f)},
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
	HX_("scaryTrail",ce,40,f7,2f),
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
