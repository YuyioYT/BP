#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_objects_Alignment
#include <objects/Alignment.h>
#endif
#ifndef INCLUDED_objects_AlphaCharacter
#include <objects/AlphaCharacter.h>
#endif
#ifndef INCLUDED_objects_Alphabet
#include <objects/Alphabet.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_25c23e7e07a93d18_12_new,"objects.Alphabet","new",0xe6fd6f1f,"objects.Alphabet.new","objects/Alphabet.hx",12,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_25c23e7e07a93d18_54_setAlignmentFromString,"objects.Alphabet","setAlignmentFromString",0xf8f58cbd,"objects.Alphabet.setAlignmentFromString","objects/Alphabet.hx",54,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_25c23e7e07a93d18_66_set_alignment,"objects.Alphabet","set_alignment",0x90b4bc45,"objects.Alphabet.set_alignment","objects/Alphabet.hx",66,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_25c23e7e07a93d18_74_updateAlignment,"objects.Alphabet","updateAlignment",0xd204f4d9,"objects.Alphabet.updateAlignment","objects/Alphabet.hx",74,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_25c23e7e07a93d18_94_set_text,"objects.Alphabet","set_text",0x90f56e8b,"objects.Alphabet.set_text","objects/Alphabet.hx",94,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_25c23e7e07a93d18_104_clearLetters,"objects.Alphabet","clearLetters",0xc9cf6021,"objects.Alphabet.clearLetters","objects/Alphabet.hx",104,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_25c23e7e07a93d18_122_setScale,"objects.Alphabet","setScale",0x9ce6c469,"objects.Alphabet.setScale","objects/Alphabet.hx",122,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_25c23e7e07a93d18_137_set_scaleX,"objects.Alphabet","set_scaleX",0x2fb43fec,"objects.Alphabet.set_scaleX","objects/Alphabet.hx",137,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_25c23e7e07a93d18_148_set_scaleY,"objects.Alphabet","set_scaleY",0x2fb43fed,"objects.Alphabet.set_scaleY","objects/Alphabet.hx",148,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_25c23e7e07a93d18_159_softReloadLetters,"objects.Alphabet","softReloadLetters",0x324db629,"objects.Alphabet.softReloadLetters","objects/Alphabet.hx",159,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_25c23e7e07a93d18_175_update,"objects.Alphabet","update",0x5df268aa,"objects.Alphabet.update","objects/Alphabet.hx",175,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_25c23e7e07a93d18_232_snapToPosition,"objects.Alphabet","snapToPosition",0x56a3fbcf,"objects.Alphabet.snapToPosition","objects/Alphabet.hx",232,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_25c23e7e07a93d18_244_createLetters,"objects.Alphabet","createLetters",0x8cde98b0,"objects.Alphabet.createLetters","objects/Alphabet.hx",244,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_25c23e7e07a93d18_241_boot,"objects.Alphabet","boot",0x2edccc93,"objects.Alphabet.boot","objects/Alphabet.hx",241,0x083c86d0)
namespace objects{

void Alphabet_obj::__construct(Float x,Float y,::String __o_text, ::Dynamic __o_bold){
            		::String text = __o_text;
            		if (::hx::IsNull(__o_text)) text = HX_("",00,00,00,00);
            		 ::Dynamic bold = __o_bold;
            		if (::hx::IsNull(__o_bold)) bold = true;
            	HX_GC_STACKFRAME(&_hx_pos_25c23e7e07a93d18_12_new)
HXLINE(  40)		 ::flixel::math::FlxBasePoint this1 =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,0,0);
HXDLIN(  40)		this->startPosition = this1;
HXLINE(  39)		 ::flixel::math::FlxBasePoint this11 =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,20,120);
HXDLIN(  39)		this->distancePerItem = this11;
HXLINE(  37)		this->rows = 0;
HXLINE(  36)		this->scaleY = ((Float)1);
HXLINE(  35)		this->scaleX = ((Float)1);
HXLINE(  34)		this->alignment = ::objects::Alignment_obj::LEFT_dyn();
HXLINE(  32)		this->isPauseItem = false;
HXLINE(  30)		this->selected = false;
HXLINE(  29)		this->wasChoosed = false;
HXLINE(  28)		this->isOptionItem = false;
HXLINE(  26)		this->yAdd = ((Float)0);
HXLINE(  25)		this->xAdd = ((Float)0);
HXLINE(  24)		this->changeY = true;
HXLINE(  23)		this->changeX = true;
HXLINE(  22)		this->itemType = HX_("",00,00,00,00);
HXLINE(  21)		this->targetX = ((Float)0);
HXLINE(  20)		this->targetY = 0;
HXLINE(  19)		this->isMenuItem = false;
HXLINE(  17)		this->letters = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  16)		this->bold = false;
HXLINE(  44)		super::__construct(x,y,null());
HXLINE(  46)		this->startPosition->set_x(x);
HXLINE(  47)		this->startPosition->set_y(y);
HXLINE(  48)		this->bold = ( (bool)(bold) );
HXLINE(  49)		this->set_text(text);
            	}

Dynamic Alphabet_obj::__CreateEmpty() { return new Alphabet_obj; }

void *Alphabet_obj::_hx_vtable = 0;

Dynamic Alphabet_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Alphabet_obj > _hx_result = new Alphabet_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Alphabet_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7dab0655 || inClassId==(int)0x7fcdf037;
	}
}

void Alphabet_obj::setAlignmentFromString(::String align){
            	HX_STACKFRAME(&_hx_pos_25c23e7e07a93d18_54_setAlignmentFromString)
HXDLIN(  54)		::String _hx_switch_0 = ::StringTools_obj::trim(align.toLowerCase());
            		if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ||  (_hx_switch_0==HX_("centered",74,5d,50,8f)) ){
HXLINE(  59)			this->set_alignment(::objects::Alignment_obj::CENTERED_dyn());
HXDLIN(  59)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE(  57)			this->set_alignment(::objects::Alignment_obj::RIGHT_dyn());
HXDLIN(  57)			goto _hx_goto_1;
            		}
            		/* default */{
HXLINE(  61)			this->set_alignment(::objects::Alignment_obj::LEFT_dyn());
            		}
            		_hx_goto_1:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alphabet_obj,setAlignmentFromString,(void))

 ::objects::Alignment Alphabet_obj::set_alignment( ::objects::Alignment align){
            	HX_STACKFRAME(&_hx_pos_25c23e7e07a93d18_66_set_alignment)
HXLINE(  67)		this->alignment = align;
HXLINE(  68)		this->updateAlignment();
HXLINE(  69)		return align;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alphabet_obj,set_alignment,return )

void Alphabet_obj::updateAlignment(){
            	HX_STACKFRAME(&_hx_pos_25c23e7e07a93d18_74_updateAlignment)
HXDLIN(  74)		int _g = 0;
HXDLIN(  74)		::Array< ::Dynamic> _g1 = this->letters;
HXDLIN(  74)		while((_g < _g1->length)){
HXDLIN(  74)			 ::objects::AlphaCharacter letter = _g1->__get(_g).StaticCast<  ::objects::AlphaCharacter >();
HXDLIN(  74)			_g = (_g + 1);
HXLINE(  76)			Float newOffset = ( (Float)(0) );
HXLINE(  77)			switch((int)(this->alignment->_hx_getIndex())){
            				case (int)1: {
HXLINE(  80)					newOffset = (letter->rowWidth / ( (Float)(2) ));
            				}
            				break;
            				case (int)2: {
HXLINE(  82)					newOffset = letter->rowWidth;
            				}
            				break;
            				default:{
HXLINE(  84)					newOffset = ( (Float)(0) );
            				}
            			}
HXLINE(  87)			letter->offset->set_x((letter->offset->x - letter->alignOffset));
HXLINE(  88)			letter->alignOffset = (newOffset * this->scale->x);
HXLINE(  89)			letter->offset->set_x((letter->offset->x + letter->alignOffset));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,updateAlignment,(void))

::String Alphabet_obj::set_text(::String newText){
            	HX_STACKFRAME(&_hx_pos_25c23e7e07a93d18_94_set_text)
HXLINE(  95)		newText = ::StringTools_obj::replace(newText,HX_("\\n",92,50,00,00),HX_("\n",0a,00,00,00));
HXLINE(  96)		this->clearLetters();
HXLINE(  97)		this->createLetters(newText);
HXLINE(  98)		this->updateAlignment();
HXLINE(  99)		this->text = newText;
HXLINE( 100)		return newText;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alphabet_obj,set_text,return )

void Alphabet_obj::clearLetters(){
            	HX_STACKFRAME(&_hx_pos_25c23e7e07a93d18_104_clearLetters)
HXLINE( 105)		int i = this->letters->length;
HXLINE( 106)		while((i > 0)){
HXLINE( 108)			i = (i - 1);
HXLINE( 109)			 ::objects::AlphaCharacter letter = this->letters->__get(i).StaticCast<  ::objects::AlphaCharacter >();
HXLINE( 110)			if (::hx::IsNotNull( letter )) {
HXLINE( 112)				letter->kill();
HXLINE( 113)				this->letters->remove(letter);
HXLINE( 114)				this->remove(letter,null());
            			}
            		}
HXLINE( 117)		this->letters = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 118)		this->rows = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,clearLetters,(void))

void Alphabet_obj::setScale(Float newX, ::Dynamic newY){
            	HX_STACKFRAME(&_hx_pos_25c23e7e07a93d18_122_setScale)
HXLINE( 123)		Float lastX = this->scale->x;
HXLINE( 124)		Float lastY = this->scale->y;
HXLINE( 125)		if (::hx::IsNull( newY )) {
HXLINE( 125)			newY = newX;
            		}
HXLINE( 127)		this->scaleX = newX;
HXLINE( 129)		this->scaleY = ( (Float)(newY) );
HXLINE( 131)		this->scale->set_x(newX);
HXLINE( 132)		this->scale->set_y(( (Float)(newY) ));
HXLINE( 133)		this->softReloadLetters((newX / lastX),(( (Float)(newY) ) / lastY));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Alphabet_obj,setScale,(void))

Float Alphabet_obj::set_scaleX(Float value){
            	HX_STACKFRAME(&_hx_pos_25c23e7e07a93d18_137_set_scaleX)
HXLINE( 138)		if ((value == this->scaleX)) {
HXLINE( 138)			return value;
            		}
HXLINE( 140)		Float ratio = (value / this->scale->x);
HXLINE( 141)		this->scale->set_x(value);
HXLINE( 142)		this->scaleX = value;
HXLINE( 143)		this->softReloadLetters(ratio,1);
HXLINE( 144)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alphabet_obj,set_scaleX,return )

Float Alphabet_obj::set_scaleY(Float value){
            	HX_STACKFRAME(&_hx_pos_25c23e7e07a93d18_148_set_scaleY)
HXLINE( 149)		if ((value == this->scaleY)) {
HXLINE( 149)			return value;
            		}
HXLINE( 151)		Float ratio = (value / this->scale->y);
HXLINE( 152)		this->scale->set_y(value);
HXLINE( 153)		this->scaleY = value;
HXLINE( 154)		this->softReloadLetters(1,ratio);
HXLINE( 155)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alphabet_obj,set_scaleY,return )

void Alphabet_obj::softReloadLetters(::hx::Null< Float >  __o_ratioX, ::Dynamic ratioY){
            		Float ratioX = __o_ratioX.Default(1);
            	HX_STACKFRAME(&_hx_pos_25c23e7e07a93d18_159_softReloadLetters)
HXLINE( 160)		if (::hx::IsNull( ratioY )) {
HXLINE( 160)			ratioY = ratioX;
            		}
HXLINE( 162)		{
HXLINE( 162)			int _g = 0;
HXDLIN( 162)			::Array< ::Dynamic> _g1 = this->letters;
HXDLIN( 162)			while((_g < _g1->length)){
HXLINE( 162)				 ::objects::AlphaCharacter letter = _g1->__get(_g).StaticCast<  ::objects::AlphaCharacter >();
HXDLIN( 162)				_g = (_g + 1);
HXLINE( 164)				if (::hx::IsNotNull( letter )) {
HXLINE( 166)					letter->setupAlphaCharacter((((letter->x - this->x) * ratioX) + this->x),(((letter->y - this->y) * ( (Float)(ratioY) )) + this->y),null(),null());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Alphabet_obj,softReloadLetters,(void))

void Alphabet_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_25c23e7e07a93d18_175_update)
HXLINE( 176)		Float scaledY = ::flixel::math::FlxMath_obj::remapToRange(( (Float)(this->targetY) ),( (Float)(0) ),( (Float)(1) ),( (Float)(0) ),((Float)1.3));
HXLINE( 178)		if (this->isMenuItem) {
HXLINE( 180)			Float Value = (elapsed * ((Float)9.6));
HXDLIN( 180)			Float lowerBound;
HXDLIN( 180)			if ((Value < 0)) {
HXLINE( 180)				lowerBound = ( (Float)(0) );
            			}
            			else {
HXLINE( 180)				lowerBound = Value;
            			}
HXDLIN( 180)			Float lerpVal;
HXDLIN( 180)			if ((lowerBound > 1)) {
HXLINE( 180)				lerpVal = ( (Float)(1) );
            			}
            			else {
HXLINE( 180)				lerpVal = lowerBound;
            			}
HXLINE( 181)			if (this->changeX) {
HXLINE( 182)				Float a = this->x;
HXDLIN( 182)				this->set_x((a + (lerpVal * (((( (Float)(this->targetY) ) * this->distancePerItem->x) + this->startPosition->x) - a))));
            			}
HXLINE( 183)			if (this->changeY) {
HXLINE( 184)				Float a = this->y;
HXDLIN( 184)				this->set_y((a + (lerpVal * ((((( (Float)(this->targetY) ) * ((Float)1.3)) * this->distancePerItem->y) + this->startPosition->y) - a))));
            			}
            		}
HXLINE( 187)		if (this->isPauseItem) {
HXLINE( 189)			Float scaledY = ::flixel::math::FlxMath_obj::remapToRange(( (Float)(this->targetY) ),( (Float)(0) ),( (Float)(1) ),( (Float)(0) ),((Float)1.3));
HXLINE( 191)			{
HXLINE( 191)				int axes = 1;
HXDLIN( 191)				bool _hx_tmp;
HXDLIN( 191)				if ((axes != 1)) {
HXLINE( 191)					_hx_tmp = (axes == 17);
            				}
            				else {
HXLINE( 191)					_hx_tmp = true;
            				}
HXDLIN( 191)				if (_hx_tmp) {
HXLINE( 191)					int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 191)					this->set_x(((( (Float)(_hx_tmp) ) - this->get_width()) / ( (Float)(2) )));
            				}
HXDLIN( 191)				bool _hx_tmp1;
HXDLIN( 191)				if ((axes != 16)) {
HXLINE( 191)					_hx_tmp1 = (axes == 17);
            				}
            				else {
HXLINE( 191)					_hx_tmp1 = true;
            				}
HXDLIN( 191)				if (_hx_tmp1) {
HXLINE( 191)					int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 191)					this->set_y(((( (Float)(_hx_tmp) ) - this->get_height()) / ( (Float)(2) )));
            				}
            			}
HXLINE( 193)			Float a = this->y;
HXDLIN( 193)			this->set_y((a + (((Float)0.30) * (((scaledY * ( (Float)(120) )) + (( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.48))) - a))));
            		}
HXLINE( 197)		::String _hx_switch_0 = this->itemType;
            		if (  (_hx_switch_0==HX_("C-Shape",37,a4,77,ef)) ){
HXLINE( 209)			Float a = this->y;
HXDLIN( 209)			this->set_y((a + (((Float)0.16) * (((scaledY * ( (Float)(65) )) + (( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.39))) - a))));
HXLINE( 211)			Float a1 = this->x;
HXDLIN( 211)			this->set_x((a1 + (((Float)0.16) * (((::Math_obj::exp((scaledY * ((Float)0.8))) * ( (Float)(70) )) + (( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.1))) - a1))));
HXLINE( 212)			if ((scaledY < 0)) {
HXLINE( 213)				Float a = this->x;
HXDLIN( 213)				this->set_x((a + (((Float)0.16) * (((::Math_obj::exp((scaledY * ((Float)-0.8))) * ( (Float)(70) )) + (( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.1))) - a))));
            			}
HXLINE( 215)			if ((this->x > (::flixel::FlxG_obj::width + 30))) {
HXLINE( 216)				this->set_x(( (Float)((::flixel::FlxG_obj::width + 30)) ));
            			}
HXLINE( 208)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Classic",f2,79,e2,36)) ){
HXLINE( 200)			Float a = this->y;
HXDLIN( 200)			this->set_y((a + (((Float)0.16) * (((scaledY * ( (Float)(120) )) + (( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.48))) - a))));
HXLINE( 201)			Float a1 = this->x;
HXDLIN( 201)			this->set_x((a1 + (((Float)0.16) * (( (Float)(((this->targetY * 20) + 90)) ) - a1))));
HXLINE( 199)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("D-Shape",f8,1a,0d,19)) ){
HXLINE( 218)			Float a = this->y;
HXDLIN( 218)			this->set_y((a + (((Float)0.16) * (((scaledY * ( (Float)(90) )) + (( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.45))) - a))));
HXLINE( 220)			Float a1 = this->x;
HXDLIN( 220)			this->set_x((a1 + (((Float)0.16) * (((::Math_obj::exp((scaledY * ((Float)0.8))) * ( (Float)(-70) )) + (( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.35))) - a1))));
HXLINE( 221)			if ((scaledY < 0)) {
HXLINE( 222)				Float a = this->x;
HXDLIN( 222)				this->set_x((a + (((Float)0.16) * (((::Math_obj::exp((scaledY * ((Float)-0.8))) * ( (Float)(-70) )) + (( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.35))) - a))));
            			}
HXLINE( 224)			if ((this->x < -900)) {
HXLINE( 225)				this->set_x(( (Float)(-900) ));
            			}
HXLINE( 217)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Vertical",96,78,c7,43)) ){
HXLINE( 204)			Float a = this->y;
HXDLIN( 204)			this->set_y((a + (((Float)0.16) * (((scaledY * ( (Float)(120) )) + (( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.5))) - a))));
HXLINE( 205)			Float a1 = this->x;
HXDLIN( 205)			this->set_x((a1 + (((Float)0.16) * (( (Float)(((this->targetY * 0) + 308)) ) - a1))));
HXLINE( 206)			this->set_x((this->x + this->targetX));
HXLINE( 203)			goto _hx_goto_14;
            		}
            		_hx_goto_14:;
HXLINE( 227)		this->super::update(elapsed);
            	}


void Alphabet_obj::snapToPosition(){
            	HX_STACKFRAME(&_hx_pos_25c23e7e07a93d18_232_snapToPosition)
HXDLIN( 232)		if (this->isMenuItem) {
HXLINE( 234)			if (this->changeX) {
HXLINE( 235)				this->set_x(((( (Float)(this->targetY) ) * this->distancePerItem->x) + this->startPosition->x));
            			}
HXLINE( 236)			if (this->changeY) {
HXLINE( 237)				this->set_y((((( (Float)(this->targetY) ) * ((Float)1.3)) * this->distancePerItem->y) + this->startPosition->y));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,snapToPosition,(void))

void Alphabet_obj::createLetters(::String newText){
            	HX_STACKFRAME(&_hx_pos_25c23e7e07a93d18_244_createLetters)
HXLINE( 245)		int consecutiveSpaces = 0;
HXLINE( 247)		Float xPos = ( (Float)(0) );
HXLINE( 248)		::Array< Float > rowData = ::Array_obj< Float >::__new(0);
HXLINE( 249)		this->rows = 0;
HXLINE( 250)		{
HXLINE( 250)			int _g = 0;
HXDLIN( 250)			::Array< ::String > _g1 = newText.split(HX_("",00,00,00,00));
HXDLIN( 250)			while((_g < _g1->length)){
HXLINE( 250)				::String character = _g1->__get(_g);
HXDLIN( 250)				_g = (_g + 1);
HXLINE( 253)				if ((character != HX_("\n",0a,00,00,00))) {
HXLINE( 255)					bool spaceChar;
HXDLIN( 255)					if ((character != HX_(" ",20,00,00,00))) {
HXLINE( 255)						if (this->bold) {
HXLINE( 255)							spaceChar = (character == HX_("_",5f,00,00,00));
            						}
            						else {
HXLINE( 255)							spaceChar = false;
            						}
            					}
            					else {
HXLINE( 255)						spaceChar = true;
            					}
HXLINE( 256)					if (spaceChar) {
HXLINE( 256)						consecutiveSpaces = (consecutiveSpaces + 1);
            					}
HXLINE( 258)					bool isAlphabet = ::objects::AlphaCharacter_obj::isTypeAlphabet(character.toLowerCase());
HXLINE( 259)					bool _hx_tmp;
HXDLIN( 259)					::Dynamic this1 = ::objects::AlphaCharacter_obj::allLetters;
HXDLIN( 259)					if (( ( ::haxe::ds::StringMap)(this1) )->exists(character.toLowerCase())) {
HXLINE( 259)						if (this->bold) {
HXLINE( 259)							_hx_tmp = !(spaceChar);
            						}
            						else {
HXLINE( 259)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE( 259)						_hx_tmp = false;
            					}
HXDLIN( 259)					if (_hx_tmp) {
HXLINE( 261)						if ((consecutiveSpaces > 0)) {
HXLINE( 263)							xPos = (xPos + (( (Float)((28 * consecutiveSpaces)) ) * this->scaleX));
HXLINE( 264)							bool _hx_tmp;
HXDLIN( 264)							if (!(this->bold)) {
HXLINE( 264)								_hx_tmp = (xPos >= (( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.65)));
            							}
            							else {
HXLINE( 264)								_hx_tmp = false;
            							}
HXDLIN( 264)							if (_hx_tmp) {
HXLINE( 266)								xPos = ( (Float)(0) );
HXLINE( 267)								this->rows++;
            							}
            						}
HXLINE( 270)						consecutiveSpaces = 0;
HXLINE( 272)						 ::Dynamic ObjectFactory = null();
HXDLIN( 272)						 ::objects::AlphaCharacter letter = ( ( ::objects::AlphaCharacter)(this->group->recycle(::hx::ClassOf< ::objects::AlphaCharacter >(),ObjectFactory,true,true).StaticCast<  ::flixel::FlxSprite >()) );
HXLINE( 273)						letter->scale->set_x(this->scaleX);
HXLINE( 274)						letter->scale->set_y(this->scaleY);
HXLINE( 276)						letter->setupAlphaCharacter(xPos,((( (Float)(this->rows) ) * ::objects::Alphabet_obj::Y_PER_ROW) * this->scale->y),character,this->bold);
HXLINE( 277)						letter->parent = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 279)						letter->row = this->rows;
HXLINE( 280)						Float off = ( (Float)(0) );
HXLINE( 281)						if (!(this->bold)) {
HXLINE( 281)							off = ( (Float)(2) );
            						}
HXLINE( 282)						Float xPos1 = letter->get_width();
HXDLIN( 282)						xPos = (xPos + (xPos1 + ((letter->letterOffset->__get(0) + off) * this->scale->x)));
HXLINE( 283)						rowData[this->rows] = xPos;
HXLINE( 285)						this->add(letter);
HXLINE( 286)						this->letters->push(letter);
            					}
            				}
            				else {
HXLINE( 291)					xPos = ( (Float)(0) );
HXLINE( 292)					this->rows++;
            				}
            			}
            		}
HXLINE( 296)		{
HXLINE( 296)			int _g2 = 0;
HXDLIN( 296)			::Array< ::Dynamic> _g3 = this->letters;
HXDLIN( 296)			while((_g2 < _g3->length)){
HXLINE( 296)				 ::objects::AlphaCharacter letter = _g3->__get(_g2).StaticCast<  ::objects::AlphaCharacter >();
HXDLIN( 296)				_g2 = (_g2 + 1);
HXLINE( 298)				letter->rowWidth = rowData->__get(letter->row);
            			}
            		}
HXLINE( 301)		if ((this->letters->length > 0)) {
HXLINE( 301)			this->rows++;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alphabet_obj,createLetters,(void))

Float Alphabet_obj::Y_PER_ROW;


::hx::ObjectPtr< Alphabet_obj > Alphabet_obj::__new(Float x,Float y,::String __o_text, ::Dynamic __o_bold) {
	::hx::ObjectPtr< Alphabet_obj > __this = new Alphabet_obj();
	__this->__construct(x,y,__o_text,__o_bold);
	return __this;
}

::hx::ObjectPtr< Alphabet_obj > Alphabet_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_text, ::Dynamic __o_bold) {
	Alphabet_obj *__this = (Alphabet_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Alphabet_obj), true, "objects.Alphabet"));
	*(void **)__this = Alphabet_obj::_hx_vtable;
	__this->__construct(x,y,__o_text,__o_bold);
	return __this;
}

Alphabet_obj::Alphabet_obj()
{
}

void Alphabet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Alphabet);
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(bold,"bold");
	HX_MARK_MEMBER_NAME(letters,"letters");
	HX_MARK_MEMBER_NAME(isMenuItem,"isMenuItem");
	HX_MARK_MEMBER_NAME(targetY,"targetY");
	HX_MARK_MEMBER_NAME(targetX,"targetX");
	HX_MARK_MEMBER_NAME(itemType,"itemType");
	HX_MARK_MEMBER_NAME(changeX,"changeX");
	HX_MARK_MEMBER_NAME(changeY,"changeY");
	HX_MARK_MEMBER_NAME(xAdd,"xAdd");
	HX_MARK_MEMBER_NAME(yAdd,"yAdd");
	HX_MARK_MEMBER_NAME(isOptionItem,"isOptionItem");
	HX_MARK_MEMBER_NAME(wasChoosed,"wasChoosed");
	HX_MARK_MEMBER_NAME(selected,"selected");
	HX_MARK_MEMBER_NAME(isPauseItem,"isPauseItem");
	HX_MARK_MEMBER_NAME(alignment,"alignment");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(distancePerItem,"distancePerItem");
	HX_MARK_MEMBER_NAME(startPosition,"startPosition");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Alphabet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(bold,"bold");
	HX_VISIT_MEMBER_NAME(letters,"letters");
	HX_VISIT_MEMBER_NAME(isMenuItem,"isMenuItem");
	HX_VISIT_MEMBER_NAME(targetY,"targetY");
	HX_VISIT_MEMBER_NAME(targetX,"targetX");
	HX_VISIT_MEMBER_NAME(itemType,"itemType");
	HX_VISIT_MEMBER_NAME(changeX,"changeX");
	HX_VISIT_MEMBER_NAME(changeY,"changeY");
	HX_VISIT_MEMBER_NAME(xAdd,"xAdd");
	HX_VISIT_MEMBER_NAME(yAdd,"yAdd");
	HX_VISIT_MEMBER_NAME(isOptionItem,"isOptionItem");
	HX_VISIT_MEMBER_NAME(wasChoosed,"wasChoosed");
	HX_VISIT_MEMBER_NAME(selected,"selected");
	HX_VISIT_MEMBER_NAME(isPauseItem,"isPauseItem");
	HX_VISIT_MEMBER_NAME(alignment,"alignment");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(distancePerItem,"distancePerItem");
	HX_VISIT_MEMBER_NAME(startPosition,"startPosition");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Alphabet_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		if (HX_FIELD_EQ(inName,"bold") ) { return ::hx::Val( bold ); }
		if (HX_FIELD_EQ(inName,"xAdd") ) { return ::hx::Val( xAdd ); }
		if (HX_FIELD_EQ(inName,"yAdd") ) { return ::hx::Val( yAdd ); }
		if (HX_FIELD_EQ(inName,"rows") ) { return ::hx::Val( rows ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { return ::hx::Val( scaleX ); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return ::hx::Val( scaleY ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"letters") ) { return ::hx::Val( letters ); }
		if (HX_FIELD_EQ(inName,"targetY") ) { return ::hx::Val( targetY ); }
		if (HX_FIELD_EQ(inName,"targetX") ) { return ::hx::Val( targetX ); }
		if (HX_FIELD_EQ(inName,"changeX") ) { return ::hx::Val( changeX ); }
		if (HX_FIELD_EQ(inName,"changeY") ) { return ::hx::Val( changeY ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"itemType") ) { return ::hx::Val( itemType ); }
		if (HX_FIELD_EQ(inName,"selected") ) { return ::hx::Val( selected ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"setScale") ) { return ::hx::Val( setScale_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { return ::hx::Val( alignment ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isMenuItem") ) { return ::hx::Val( isMenuItem ); }
		if (HX_FIELD_EQ(inName,"wasChoosed") ) { return ::hx::Val( wasChoosed ); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return ::hx::Val( set_scaleX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return ::hx::Val( set_scaleY_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isPauseItem") ) { return ::hx::Val( isPauseItem ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isOptionItem") ) { return ::hx::Val( isOptionItem ); }
		if (HX_FIELD_EQ(inName,"clearLetters") ) { return ::hx::Val( clearLetters_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startPosition") ) { return ::hx::Val( startPosition ); }
		if (HX_FIELD_EQ(inName,"set_alignment") ) { return ::hx::Val( set_alignment_dyn() ); }
		if (HX_FIELD_EQ(inName,"createLetters") ) { return ::hx::Val( createLetters_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"snapToPosition") ) { return ::hx::Val( snapToPosition_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"distancePerItem") ) { return ::hx::Val( distancePerItem ); }
		if (HX_FIELD_EQ(inName,"updateAlignment") ) { return ::hx::Val( updateAlignment_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"softReloadLetters") ) { return ::hx::Val( softReloadLetters_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"setAlignmentFromString") ) { return ::hx::Val( setAlignmentFromString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Alphabet_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"Y_PER_ROW") ) { outValue = ( Y_PER_ROW ); return true; }
	}
	return false;
}

::hx::Val Alphabet_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) );text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bold") ) { bold=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xAdd") ) { xAdd=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yAdd") ) { yAdd=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleX(inValue.Cast< Float >()) );scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleY(inValue.Cast< Float >()) );scaleY=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"letters") ) { letters=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"targetY") ) { targetY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"targetX") ) { targetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"changeX") ) { changeX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"changeY") ) { changeY=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"itemType") ) { itemType=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selected") ) { selected=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alignment(inValue.Cast<  ::objects::Alignment >()) );alignment=inValue.Cast<  ::objects::Alignment >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isMenuItem") ) { isMenuItem=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wasChoosed") ) { wasChoosed=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isPauseItem") ) { isPauseItem=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isOptionItem") ) { isOptionItem=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startPosition") ) { startPosition=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"distancePerItem") ) { distancePerItem=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Alphabet_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"Y_PER_ROW") ) { Y_PER_ROW=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

void Alphabet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("bold",85,81,1b,41));
	outFields->push(HX_("letters",cd,9c,8e,04));
	outFields->push(HX_("isMenuItem",5c,04,de,c6));
	outFields->push(HX_("targetY",e8,f3,67,88));
	outFields->push(HX_("targetX",e7,f3,67,88));
	outFields->push(HX_("itemType",6d,69,05,aa));
	outFields->push(HX_("changeX",e8,b0,cc,cc));
	outFields->push(HX_("changeY",e9,b0,cc,cc));
	outFields->push(HX_("xAdd",89,44,83,4f));
	outFields->push(HX_("yAdd",28,7b,2c,50));
	outFields->push(HX_("isOptionItem",b2,4b,7a,5d));
	outFields->push(HX_("wasChoosed",84,0f,2c,ac));
	outFields->push(HX_("selected",5b,2a,6d,b1));
	outFields->push(HX_("isPauseItem",df,31,a7,28));
	outFields->push(HX_("alignment",e3,e2,3d,ea));
	outFields->push(HX_("scaleX",8e,ea,25,3c));
	outFields->push(HX_("scaleY",8f,ea,25,3c));
	outFields->push(HX_("rows",19,f5,ae,4b));
	outFields->push(HX_("distancePerItem",db,0d,28,f9));
	outFields->push(HX_("startPosition",2b,03,b6,cf));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Alphabet_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Alphabet_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,bold),HX_("bold",85,81,1b,41)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Alphabet_obj,letters),HX_("letters",cd,9c,8e,04)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,isMenuItem),HX_("isMenuItem",5c,04,de,c6)},
	{::hx::fsInt,(int)offsetof(Alphabet_obj,targetY),HX_("targetY",e8,f3,67,88)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,targetX),HX_("targetX",e7,f3,67,88)},
	{::hx::fsString,(int)offsetof(Alphabet_obj,itemType),HX_("itemType",6d,69,05,aa)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,changeX),HX_("changeX",e8,b0,cc,cc)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,changeY),HX_("changeY",e9,b0,cc,cc)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,xAdd),HX_("xAdd",89,44,83,4f)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,yAdd),HX_("yAdd",28,7b,2c,50)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,isOptionItem),HX_("isOptionItem",b2,4b,7a,5d)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,wasChoosed),HX_("wasChoosed",84,0f,2c,ac)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,selected),HX_("selected",5b,2a,6d,b1)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,isPauseItem),HX_("isPauseItem",df,31,a7,28)},
	{::hx::fsObject /*  ::objects::Alignment */ ,(int)offsetof(Alphabet_obj,alignment),HX_("alignment",e3,e2,3d,ea)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,scaleX),HX_("scaleX",8e,ea,25,3c)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,scaleY),HX_("scaleY",8f,ea,25,3c)},
	{::hx::fsInt,(int)offsetof(Alphabet_obj,rows),HX_("rows",19,f5,ae,4b)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(Alphabet_obj,distancePerItem),HX_("distancePerItem",db,0d,28,f9)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(Alphabet_obj,startPosition),HX_("startPosition",2b,03,b6,cf)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Alphabet_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Alphabet_obj::Y_PER_ROW,HX_("Y_PER_ROW",12,31,e0,9a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Alphabet_obj_sMemberFields[] = {
	HX_("text",ad,cc,f9,4c),
	HX_("bold",85,81,1b,41),
	HX_("letters",cd,9c,8e,04),
	HX_("isMenuItem",5c,04,de,c6),
	HX_("targetY",e8,f3,67,88),
	HX_("targetX",e7,f3,67,88),
	HX_("itemType",6d,69,05,aa),
	HX_("changeX",e8,b0,cc,cc),
	HX_("changeY",e9,b0,cc,cc),
	HX_("xAdd",89,44,83,4f),
	HX_("yAdd",28,7b,2c,50),
	HX_("isOptionItem",b2,4b,7a,5d),
	HX_("wasChoosed",84,0f,2c,ac),
	HX_("selected",5b,2a,6d,b1),
	HX_("isPauseItem",df,31,a7,28),
	HX_("alignment",e3,e2,3d,ea),
	HX_("scaleX",8e,ea,25,3c),
	HX_("scaleY",8f,ea,25,3c),
	HX_("rows",19,f5,ae,4b),
	HX_("distancePerItem",db,0d,28,f9),
	HX_("startPosition",2b,03,b6,cf),
	HX_("setAlignmentFromString",1c,98,4d,ef),
	HX_("set_alignment",c6,98,a7,f0),
	HX_("updateAlignment",9a,b3,c8,39),
	HX_("set_text",aa,e1,11,7b),
	HX_("clearLetters",c0,4e,0d,e0),
	HX_("setScale",88,37,03,87),
	HX_("set_scaleX",cb,f8,2a,30),
	HX_("set_scaleY",cc,f8,2a,30),
	HX_("softReloadLetters",2a,67,8f,e1),
	HX_("update",09,86,05,87),
	HX_("snapToPosition",2e,10,32,eb),
	HX_("createLetters",31,75,d1,ec),
	::String(null()) };

static void Alphabet_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Alphabet_obj::Y_PER_ROW,"Y_PER_ROW");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Alphabet_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Alphabet_obj::Y_PER_ROW,"Y_PER_ROW");
};

#endif

::hx::Class Alphabet_obj::__mClass;

static ::String Alphabet_obj_sStaticFields[] = {
	HX_("Y_PER_ROW",12,31,e0,9a),
	::String(null())
};

void Alphabet_obj::__register()
{
	Alphabet_obj _hx_dummy;
	Alphabet_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.Alphabet",ad,f3,79,9c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Alphabet_obj::__GetStatic;
	__mClass->mSetStaticField = &Alphabet_obj::__SetStatic;
	__mClass->mMarkFunc = Alphabet_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Alphabet_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Alphabet_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Alphabet_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Alphabet_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Alphabet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Alphabet_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Alphabet_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_25c23e7e07a93d18_241_boot)
HXDLIN( 241)		Y_PER_ROW = ((Float)85);
            	}
}

} // end namespace objects
