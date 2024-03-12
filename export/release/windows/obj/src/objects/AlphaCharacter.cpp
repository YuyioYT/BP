#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_objects_AlphaCharacter
#include <objects/AlphaCharacter.h>
#endif
#ifndef INCLUDED_objects_Alphabet
#include <objects/Alphabet.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0ebe4a949189dc15_362_new,"objects.AlphaCharacter","new",0xef969e57,"objects.AlphaCharacter.new","objects/Alphabet.hx",362,0x083c86d0)
static const Float _hx_array_data_718d26e5_1[] = {
	(Float)0,(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_0ebe4a949189dc15_447_setupAlphaCharacter,"objects.AlphaCharacter","setupAlphaCharacter",0x78bc67bf,"objects.AlphaCharacter.setupAlphaCharacter","objects/Alphabet.hx",447,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_0ebe4a949189dc15_509_set_image,"objects.AlphaCharacter","set_image",0x807388f5,"objects.AlphaCharacter.set_image","objects/Alphabet.hx",509,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_0ebe4a949189dc15_539_updateLetterOffset,"objects.AlphaCharacter","updateLetterOffset",0xb95f24ab,"objects.AlphaCharacter.updateLetterOffset","objects/Alphabet.hx",539,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_0ebe4a949189dc15_570_updateHitbox,"objects.AlphaCharacter","updateHitbox",0x9940cfaa,"objects.AlphaCharacter.updateHitbox","objects/Alphabet.hx",570,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_0ebe4a949189dc15_499_isTypeAlphabet,"objects.AlphaCharacter","isTypeAlphabet",0x6db66c00,"objects.AlphaCharacter.isTypeAlphabet","objects/Alphabet.hx",499,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_0ebe4a949189dc15_370_boot,"objects.AlphaCharacter","boot",0xac4cee5b,"objects.AlphaCharacter.boot","objects/Alphabet.hx",370,0x083c86d0)
static const Float _hx_array_data_718d26e5_8[] = {
	(Float)0,(Float)-11,
};
static const Float _hx_array_data_718d26e5_9[] = {
	(Float)0,(Float)2,
};
static const Float _hx_array_data_718d26e5_10[] = {
	(Float)0,(Float)0,
};
static const Float _hx_array_data_718d26e5_11[] = {
	(Float)0,(Float)0,
};
static const Float _hx_array_data_718d26e5_12[] = {
	(Float)0,(Float)-1,
};
static const Float _hx_array_data_718d26e5_13[] = {
	(Float)0,(Float)28,
};
static const Float _hx_array_data_718d26e5_14[] = {
	(Float)0,(Float)40,
};
static const Float _hx_array_data_718d26e5_15[] = {
	(Float)0,(Float)7,
};
static const Float _hx_array_data_718d26e5_16[] = {
	(Float)0,(Float)12,
};
static const Float _hx_array_data_718d26e5_17[] = {
	(Float)0,(Float)16,
};
static const Float _hx_array_data_718d26e5_18[] = {
	(Float)0,(Float)16,
};
static const Float _hx_array_data_718d26e5_19[] = {
	(Float)0,(Float)-2,
};
static const Float _hx_array_data_718d26e5_20[] = {
	(Float)0,(Float)-2,
};
static const Float _hx_array_data_718d26e5_21[] = {
	(Float)0,(Float)32,
};
static const Float _hx_array_data_718d26e5_22[] = {
	(Float)0,(Float)40,
};
static const Float _hx_array_data_718d26e5_23[] = {
	(Float)0,(Float)32,
};
static const Float _hx_array_data_718d26e5_24[] = {
	(Float)0,(Float)40,
};
static const Float _hx_array_data_718d26e5_25[] = {
	(Float)0,(Float)24,
};
static const Float _hx_array_data_718d26e5_26[] = {
	(Float)0,(Float)40,
};
static const Float _hx_array_data_718d26e5_27[] = {
	(Float)0,(Float)24,
};
static const Float _hx_array_data_718d26e5_28[] = {
	(Float)0,(Float)40,
};
static const Float _hx_array_data_718d26e5_29[] = {
	(Float)0,(Float)2,
};
static const Float _hx_array_data_718d26e5_30[] = {
	(Float)0,(Float)8,
};
static const Float _hx_array_data_718d26e5_31[] = {
	(Float)0,(Float)-2,
};
static const Float _hx_array_data_718d26e5_32[] = {
	(Float)0,(Float)4,
};
static const Float _hx_array_data_718d26e5_33[] = {
	(Float)0,(Float)28,
};
static const Float _hx_array_data_718d26e5_34[] = {
	(Float)0,(Float)38,
};
static const Float _hx_array_data_718d26e5_35[] = {
	(Float)0,(Float)-6,
};
static const Float _hx_array_data_718d26e5_36[] = {
	(Float)0,(Float)-4,
};
static const Float _hx_array_data_718d26e5_37[] = {
	(Float)0,(Float)0,
};
static const Float _hx_array_data_718d26e5_38[] = {
	(Float)0,(Float)0,
};
static const Float _hx_array_data_718d26e5_39[] = {
	(Float)0,(Float)16,
};
static const Float _hx_array_data_718d26e5_40[] = {
	(Float)0,(Float)20,
};
static const Float _hx_array_data_718d26e5_41[] = {
	(Float)0,(Float)-20,
};
static const Float _hx_array_data_718d26e5_42[] = {
	(Float)0,(Float)-20,
};
static const Float _hx_array_data_718d26e5_43[] = {
	(Float)0,(Float)-20,
};
static const Float _hx_array_data_718d26e5_44[] = {
	(Float)0,(Float)-20,
};
static const Float _hx_array_data_718d26e5_45[] = {
	(Float)0,(Float)18,
};
static const Float _hx_array_data_718d26e5_46[] = {
	(Float)0,(Float)20,
};
namespace objects{

void AlphaCharacter_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0ebe4a949189dc15_362_new)
HXLINE( 445)		this->curLetter = null();
HXLINE( 437)		this->character = HX_("?",3f,00,00,00);
HXLINE( 436)		this->rowWidth = ((Float)0);
HXLINE( 435)		this->row = 0;
HXLINE( 433)		this->letterOffset = ::Array_obj< Float >::fromData( _hx_array_data_718d26e5_1,2);
HXLINE( 432)		this->alignOffset = ((Float)0);
HXLINE( 440)		super::__construct(this->x,this->y,null());
HXLINE( 441)		this->set_image(HX_("alphabet",b3,7c,38,21));
HXLINE( 442)		this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
            	}

Dynamic AlphaCharacter_obj::__CreateEmpty() { return new AlphaCharacter_obj; }

void *AlphaCharacter_obj::_hx_vtable = 0;

Dynamic AlphaCharacter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AlphaCharacter_obj > _hx_result = new AlphaCharacter_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AlphaCharacter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7c11c55f) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x7c11c55f;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void AlphaCharacter_obj::setupAlphaCharacter(Float x,Float y,::String character, ::Dynamic bold){
            	HX_STACKFRAME(&_hx_pos_0ebe4a949189dc15_447_setupAlphaCharacter)
HXLINE( 448)		this->set_x(x);
HXLINE( 449)		this->set_y(y);
HXLINE( 451)		if (::hx::IsNotNull( this->parent )) {
HXLINE( 453)			if (::hx::IsNull( bold )) {
HXLINE( 454)				bold = this->parent->bold;
            			}
HXLINE( 455)			this->scale->set_x(this->parent->scaleX);
HXLINE( 456)			this->scale->set_y(this->parent->scaleY);
            		}
HXLINE( 459)		if (::hx::IsNotNull( character )) {
HXLINE( 461)			this->character = character;
HXLINE( 462)			this->curLetter = null();
HXLINE( 463)			::String lowercase = this->character.toLowerCase();
HXLINE( 464)			if (::objects::AlphaCharacter_obj::allLetters->exists(lowercase)) {
HXLINE( 464)				this->curLetter = ::objects::AlphaCharacter_obj::allLetters->get(lowercase);
            			}
            			else {
HXLINE( 465)				this->curLetter = ::objects::AlphaCharacter_obj::allLetters->get(HX_("?",3f,00,00,00));
            			}
HXLINE( 467)			::String suffix = HX_("",00,00,00,00);
HXLINE( 468)			if (!(( (bool)(bold) ))) {
HXLINE( 470)				if (::objects::AlphaCharacter_obj::isTypeAlphabet(lowercase)) {
HXLINE( 472)					if ((lowercase != this->character)) {
HXLINE( 473)						suffix = HX_(" uppercase",f2,8c,8d,f0);
            					}
            					else {
HXLINE( 475)						suffix = HX_(" lowercase",11,a9,f4,6f);
            					}
            				}
            				else {
HXLINE( 477)					suffix = HX_(" normal",47,4a,18,63);
            				}
            			}
            			else {
HXLINE( 479)				suffix = HX_(" bold",a5,11,ee,ad);
            			}
HXLINE( 481)			::String alphaAnim = lowercase;
HXLINE( 482)			bool _hx_tmp;
HXDLIN( 482)			if (::hx::IsNotNull( this->curLetter )) {
HXLINE( 482)				_hx_tmp = ::hx::IsNotNull( this->curLetter->__Field(HX_("anim",11,86,71,40),::hx::paccDynamic) );
            			}
            			else {
HXLINE( 482)				_hx_tmp = false;
            			}
HXDLIN( 482)			if (_hx_tmp) {
HXLINE( 482)				alphaAnim = ( (::String)(this->curLetter->__Field(HX_("anim",11,86,71,40),::hx::paccDynamic)) );
            			}
HXLINE( 484)			::String anim = (alphaAnim + suffix);
HXLINE( 485)			this->animation->addByPrefix(anim,anim,24,null(),null(),null());
HXLINE( 486)			this->animation->play(anim,true,null(),null());
HXLINE( 487)			if (::hx::IsNull( this->animation->_curAnim )) {
HXLINE( 489)				if ((suffix != HX_(" bold",a5,11,ee,ad))) {
HXLINE( 489)					suffix = HX_(" normal",47,4a,18,63);
            				}
HXLINE( 490)				anim = (HX_("question",26,9b,b0,26) + suffix);
HXLINE( 491)				this->animation->addByPrefix(anim,anim,24,null(),null(),null());
HXLINE( 492)				this->animation->play(anim,true,null(),null());
            			}
            		}
HXLINE( 495)		this->updateHitbox();
            	}


HX_DEFINE_DYNAMIC_FUNC4(AlphaCharacter_obj,setupAlphaCharacter,(void))

::String AlphaCharacter_obj::set_image(::String name){
            	HX_STACKFRAME(&_hx_pos_0ebe4a949189dc15_509_set_image)
HXLINE( 510)		if (::hx::IsNull( this->frames )) {
HXLINE( 512)			this->image = name;
HXLINE( 513)			::String library = null();
HXDLIN( 513)			 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(name,null(),true);
HXDLIN( 513)			bool xmlExists = false;
HXDLIN( 513)			::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 513)			if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 513)				xmlExists = true;
            			}
HXDLIN( 513)			 ::Dynamic _hx_tmp;
HXDLIN( 513)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 513)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE( 513)				_hx_tmp = ::backend::Paths_obj::image(name,library,true);
            			}
HXDLIN( 513)			::String _hx_tmp1;
HXDLIN( 513)			if (xmlExists) {
HXLINE( 513)				_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            			}
            			else {
HXLINE( 513)				_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            			}
HXDLIN( 513)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 514)			return name;
            		}
HXLINE( 517)		::String lastAnim = null();
HXLINE( 518)		if (::hx::IsNotNull( this->animation )) {
HXLINE( 520)			lastAnim = this->animation->get_name();
            		}
HXLINE( 522)		this->image = name;
HXLINE( 523)		::String library = null();
HXDLIN( 523)		 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(name,null(),true);
HXDLIN( 523)		bool xmlExists = false;
HXDLIN( 523)		::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 523)		if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 523)			xmlExists = true;
            		}
HXDLIN( 523)		 ::Dynamic _hx_tmp;
HXDLIN( 523)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 523)			_hx_tmp = imageLoaded;
            		}
            		else {
HXLINE( 523)			_hx_tmp = ::backend::Paths_obj::image(name,library,true);
            		}
HXDLIN( 523)		::String _hx_tmp1;
HXDLIN( 523)		if (xmlExists) {
HXLINE( 523)			_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            		}
            		else {
HXLINE( 523)			_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            		}
HXDLIN( 523)		this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 524)		this->scale->set_x(this->parent->scaleX);
HXLINE( 525)		this->scale->set_y(this->parent->scaleY);
HXLINE( 526)		this->alignOffset = ( (Float)(0) );
HXLINE( 528)		if (::hx::IsNotNull( lastAnim )) {
HXLINE( 530)			this->animation->addByPrefix(lastAnim,lastAnim,24,null(),null(),null());
HXLINE( 531)			this->animation->play(lastAnim,true,null(),null());
HXLINE( 533)			this->updateHitbox();
            		}
HXLINE( 535)		return name;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AlphaCharacter_obj,set_image,return )

void AlphaCharacter_obj::updateLetterOffset(){
            	HX_STACKFRAME(&_hx_pos_0ebe4a949189dc15_539_updateLetterOffset)
HXLINE( 540)		if (::hx::IsNull( this->animation->_curAnim )) {
HXLINE( 542)			::haxe::Log_obj::trace(this->character,::hx::SourceInfo(HX_("source/objects/Alphabet.hx",5c,20,81,f9),542,HX_("objects.AlphaCharacter",e5,26,8d,71),HX_("updateLetterOffset",c2,a4,fb,6d)));
HXLINE( 543)			return;
            		}
HXLINE( 546)		Float add = ( (Float)(110) );
HXLINE( 547)		if (::StringTools_obj::endsWith(this->animation->_curAnim->name,HX_("bold",85,81,1b,41))) {
HXLINE( 549)			bool _hx_tmp;
HXDLIN( 549)			if (::hx::IsNotNull( this->curLetter )) {
HXLINE( 549)				_hx_tmp = ::hx::IsNotNull( this->curLetter->__Field(HX_("offsetsBold",25,77,5c,68),::hx::paccDynamic) );
            			}
            			else {
HXLINE( 549)				_hx_tmp = false;
            			}
HXDLIN( 549)			if (_hx_tmp) {
HXLINE( 551)				this->letterOffset[0] = ( (Float)( ::Dynamic(this->curLetter->__Field(HX_("offsetsBold",25,77,5c,68),::hx::paccDynamic))->__GetItem(0)) );
HXLINE( 552)				this->letterOffset[1] = ( (Float)( ::Dynamic(this->curLetter->__Field(HX_("offsetsBold",25,77,5c,68),::hx::paccDynamic))->__GetItem(1)) );
            			}
HXLINE( 554)			add = ( (Float)(70) );
            		}
            		else {
HXLINE( 558)			bool _hx_tmp;
HXDLIN( 558)			if (::hx::IsNotNull( this->curLetter )) {
HXLINE( 558)				_hx_tmp = ::hx::IsNotNull( this->curLetter->__Field(HX_("offsets",80,09,65,d7),::hx::paccDynamic) );
            			}
            			else {
HXLINE( 558)				_hx_tmp = false;
            			}
HXDLIN( 558)			if (_hx_tmp) {
HXLINE( 560)				this->letterOffset[0] = ( (Float)( ::Dynamic(this->curLetter->__Field(HX_("offsets",80,09,65,d7),::hx::paccDynamic))->__GetItem(0)) );
HXLINE( 561)				this->letterOffset[1] = ( (Float)( ::Dynamic(this->curLetter->__Field(HX_("offsets",80,09,65,d7),::hx::paccDynamic))->__GetItem(1)) );
            			}
            		}
HXLINE( 564)		add = (add * this->scale->y);
HXLINE( 565)		this->offset->set_x((this->offset->x + (this->letterOffset->__get(0) * this->scale->x)));
HXLINE( 566)		{
HXLINE( 566)			 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN( 566)			Float y = this->offset->y;
HXDLIN( 566)			Float y1 = (this->letterOffset->__get(1) * this->scale->y);
HXDLIN( 566)			this1->set_y((y + (y1 - (add - this->get_height()))));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(AlphaCharacter_obj,updateLetterOffset,(void))

void AlphaCharacter_obj::updateHitbox(){
            	HX_STACKFRAME(&_hx_pos_0ebe4a949189dc15_570_updateHitbox)
HXLINE( 571)		this->super::updateHitbox();
HXLINE( 572)		this->updateLetterOffset();
            	}


 ::haxe::ds::StringMap AlphaCharacter_obj::allLetters;

bool AlphaCharacter_obj::isTypeAlphabet(::String c){
            	HX_STACKFRAME(&_hx_pos_0ebe4a949189dc15_499_isTypeAlphabet)
HXLINE( 500)		int ascii = c.cca(0);
HXLINE( 501)		bool _hx_tmp;
HXDLIN( 501)		bool _hx_tmp1;
HXDLIN( 501)		bool _hx_tmp2;
HXDLIN( 501)		bool _hx_tmp3;
HXDLIN( 501)		if ((ascii >= 65)) {
HXLINE( 501)			_hx_tmp3 = (ascii <= 90);
            		}
            		else {
HXLINE( 501)			_hx_tmp3 = false;
            		}
HXDLIN( 501)		if (!(_hx_tmp3)) {
HXLINE( 502)			if ((ascii >= 97)) {
HXLINE( 501)				_hx_tmp2 = (ascii <= 122);
            			}
            			else {
HXLINE( 501)				_hx_tmp2 = false;
            			}
            		}
            		else {
HXLINE( 501)			_hx_tmp2 = true;
            		}
HXDLIN( 501)		if (!(_hx_tmp2)) {
HXLINE( 503)			if ((ascii >= 192)) {
HXLINE( 501)				_hx_tmp1 = (ascii <= 214);
            			}
            			else {
HXLINE( 501)				_hx_tmp1 = false;
            			}
            		}
            		else {
HXLINE( 501)			_hx_tmp1 = true;
            		}
HXDLIN( 501)		if (!(_hx_tmp1)) {
HXLINE( 504)			if ((ascii >= 216)) {
HXLINE( 501)				_hx_tmp = (ascii <= 246);
            			}
            			else {
HXLINE( 501)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 501)			_hx_tmp = true;
            		}
HXDLIN( 501)		if (!(_hx_tmp)) {
HXLINE( 505)			if ((ascii >= 248)) {
HXLINE( 505)				return (ascii <= 255);
            			}
            			else {
HXLINE( 505)				return false;
            			}
            		}
            		else {
HXLINE( 501)			return true;
            		}
HXDLIN( 501)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AlphaCharacter_obj,isTypeAlphabet,return )


::hx::ObjectPtr< AlphaCharacter_obj > AlphaCharacter_obj::__new() {
	::hx::ObjectPtr< AlphaCharacter_obj > __this = new AlphaCharacter_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AlphaCharacter_obj > AlphaCharacter_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AlphaCharacter_obj *__this = (AlphaCharacter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AlphaCharacter_obj), true, "objects.AlphaCharacter"));
	*(void **)__this = AlphaCharacter_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AlphaCharacter_obj::AlphaCharacter_obj()
{
}

void AlphaCharacter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AlphaCharacter);
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(alignOffset,"alignOffset");
	HX_MARK_MEMBER_NAME(letterOffset,"letterOffset");
	HX_MARK_MEMBER_NAME(row,"row");
	HX_MARK_MEMBER_NAME(rowWidth,"rowWidth");
	HX_MARK_MEMBER_NAME(character,"character");
	HX_MARK_MEMBER_NAME(curLetter,"curLetter");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AlphaCharacter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(alignOffset,"alignOffset");
	HX_VISIT_MEMBER_NAME(letterOffset,"letterOffset");
	HX_VISIT_MEMBER_NAME(row,"row");
	HX_VISIT_MEMBER_NAME(rowWidth,"rowWidth");
	HX_VISIT_MEMBER_NAME(character,"character");
	HX_VISIT_MEMBER_NAME(curLetter,"curLetter");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AlphaCharacter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"row") ) { return ::hx::Val( row ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return ::hx::Val( image ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rowWidth") ) { return ::hx::Val( rowWidth ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"character") ) { return ::hx::Val( character ); }
		if (HX_FIELD_EQ(inName,"curLetter") ) { return ::hx::Val( curLetter ); }
		if (HX_FIELD_EQ(inName,"set_image") ) { return ::hx::Val( set_image_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alignOffset") ) { return ::hx::Val( alignOffset ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"letterOffset") ) { return ::hx::Val( letterOffset ); }
		if (HX_FIELD_EQ(inName,"updateHitbox") ) { return ::hx::Val( updateHitbox_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"updateLetterOffset") ) { return ::hx::Val( updateLetterOffset_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setupAlphaCharacter") ) { return ::hx::Val( setupAlphaCharacter_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AlphaCharacter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"allLetters") ) { outValue = ( allLetters ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"isTypeAlphabet") ) { outValue = isTypeAlphabet_dyn(); return true; }
	}
	return false;
}

::hx::Val AlphaCharacter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"row") ) { row=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_image(inValue.Cast< ::String >()) );image=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::objects::Alphabet >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rowWidth") ) { rowWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"character") ) { character=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curLetter") ) { curLetter=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alignOffset") ) { alignOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"letterOffset") ) { letterOffset=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AlphaCharacter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"allLetters") ) { allLetters=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void AlphaCharacter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("image",5b,1f,69,bd));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("alignOffset",38,44,0e,ef));
	outFields->push(HX_("letterOffset",19,69,ee,f5));
	outFields->push(HX_("row",1a,e2,56,00));
	outFields->push(HX_("rowWidth",8c,65,4d,72));
	outFields->push(HX_("character",a9,db,d1,41));
	outFields->push(HX_("curLetter",86,c6,95,13));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AlphaCharacter_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(AlphaCharacter_obj,image),HX_("image",5b,1f,69,bd)},
	{::hx::fsObject /*  ::objects::Alphabet */ ,(int)offsetof(AlphaCharacter_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsFloat,(int)offsetof(AlphaCharacter_obj,alignOffset),HX_("alignOffset",38,44,0e,ef)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(AlphaCharacter_obj,letterOffset),HX_("letterOffset",19,69,ee,f5)},
	{::hx::fsInt,(int)offsetof(AlphaCharacter_obj,row),HX_("row",1a,e2,56,00)},
	{::hx::fsFloat,(int)offsetof(AlphaCharacter_obj,rowWidth),HX_("rowWidth",8c,65,4d,72)},
	{::hx::fsString,(int)offsetof(AlphaCharacter_obj,character),HX_("character",a9,db,d1,41)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AlphaCharacter_obj,curLetter),HX_("curLetter",86,c6,95,13)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo AlphaCharacter_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &AlphaCharacter_obj::allLetters,HX_("allLetters",ac,a1,37,cd)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String AlphaCharacter_obj_sMemberFields[] = {
	HX_("image",5b,1f,69,bd),
	HX_("parent",2a,05,7e,ed),
	HX_("alignOffset",38,44,0e,ef),
	HX_("letterOffset",19,69,ee,f5),
	HX_("row",1a,e2,56,00),
	HX_("rowWidth",8c,65,4d,72),
	HX_("character",a9,db,d1,41),
	HX_("curLetter",86,c6,95,13),
	HX_("setupAlphaCharacter",c8,fb,0f,cd),
	HX_("set_image",be,67,63,e4),
	HX_("updateLetterOffset",c2,a4,fb,6d),
	HX_("updateHitbox",81,94,eb,56),
	::String(null()) };

static void AlphaCharacter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AlphaCharacter_obj::allLetters,"allLetters");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AlphaCharacter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AlphaCharacter_obj::allLetters,"allLetters");
};

#endif

::hx::Class AlphaCharacter_obj::__mClass;

static ::String AlphaCharacter_obj_sStaticFields[] = {
	HX_("allLetters",ac,a1,37,cd),
	HX_("isTypeAlphabet",97,54,3d,ff),
	::String(null())
};

void AlphaCharacter_obj::__register()
{
	AlphaCharacter_obj _hx_dummy;
	AlphaCharacter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.AlphaCharacter",e5,26,8d,71);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AlphaCharacter_obj::__GetStatic;
	__mClass->mSetStaticField = &AlphaCharacter_obj::__SetStatic;
	__mClass->mMarkFunc = AlphaCharacter_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AlphaCharacter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AlphaCharacter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AlphaCharacter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AlphaCharacter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AlphaCharacter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AlphaCharacter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AlphaCharacter_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::haxe::ds::StringMap _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_0ebe4a949189dc15_370_boot)
HXDLIN( 370)			 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value = null();
HXDLIN( 370)				_g->set(HX_("a",61,00,00,00),value);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value1 = null();
HXDLIN( 370)				_g->set(HX_("b",62,00,00,00),value1);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value2 = null();
HXDLIN( 370)				_g->set(HX_("c",63,00,00,00),value2);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value3 = null();
HXDLIN( 370)				_g->set(HX_("d",64,00,00,00),value3);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value4 = null();
HXDLIN( 370)				_g->set(HX_("e",65,00,00,00),value4);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value5 = null();
HXDLIN( 370)				_g->set(HX_("f",66,00,00,00),value5);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value6 = null();
HXDLIN( 370)				_g->set(HX_("g",67,00,00,00),value6);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value7 = null();
HXDLIN( 370)				_g->set(HX_("h",68,00,00,00),value7);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value8 = null();
HXDLIN( 370)				_g->set(HX_("i",69,00,00,00),value8);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value9 = null();
HXDLIN( 370)				_g->set(HX_("j",6a,00,00,00),value9);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value10 = null();
HXDLIN( 370)				_g->set(HX_("k",6b,00,00,00),value10);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value11 = null();
HXDLIN( 370)				_g->set(HX_("l",6c,00,00,00),value11);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value12 = null();
HXDLIN( 370)				_g->set(HX_("m",6d,00,00,00),value12);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value13 = null();
HXDLIN( 370)				_g->set(HX_("n",6e,00,00,00),value13);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value14 = null();
HXDLIN( 370)				_g->set(HX_("o",6f,00,00,00),value14);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value15 = null();
HXDLIN( 370)				_g->set(HX_("p",70,00,00,00),value15);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value16 = null();
HXDLIN( 370)				_g->set(HX_("q",71,00,00,00),value16);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value17 = null();
HXDLIN( 370)				_g->set(HX_("r",72,00,00,00),value17);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value18 = null();
HXDLIN( 370)				_g->set(HX_("s",73,00,00,00),value18);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value19 = null();
HXDLIN( 370)				_g->set(HX_("t",74,00,00,00),value19);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value20 = null();
HXDLIN( 370)				_g->set(HX_("u",75,00,00,00),value20);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value21 = null();
HXDLIN( 370)				_g->set(HX_("v",76,00,00,00),value21);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value22 = null();
HXDLIN( 370)				_g->set(HX_("w",77,00,00,00),value22);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value23 = null();
HXDLIN( 370)				_g->set(HX_("x",78,00,00,00),value23);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value24 = null();
HXDLIN( 370)				_g->set(HX_("y",79,00,00,00),value24);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value25 = null();
HXDLIN( 370)				_g->set(HX_("z",7a,00,00,00),value25);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value26 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00e1",aa7e,0000),value26);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value27 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00e9",aa86,0000),value27);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value28 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00ed",aa8a,0000),value28);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value29 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00f3",aa90,0000),value29);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value30 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00fa",aa97,0000),value30);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value31 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00e0",aa7d,0000),value31);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value32 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00e8",aa85,0000),value32);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value33 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00ec",aa89,0000),value33);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value34 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00f2",aa8f,0000),value34);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value35 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00f9",aa96,0000),value35);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value36 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00e2",aa7f,0000),value36);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value37 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00ea",aa87,0000),value37);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value38 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00ee",aa8b,0000),value38);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value39 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00f4",aa91,0000),value39);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value40 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00fb",aa98,0000),value40);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value41 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00e3",aa80,0000),value41);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value42 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00eb",aa88,0000),value42);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value43 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00ef",aa8c,0000),value43);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value44 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00f5",aa92,0000),value44);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value45 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00fc",aa99,0000),value45);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value46 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00e4",aa81,0000),value46);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value47 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00f6",aa93,0000),value47);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value48 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00e5",aa82,0000),value48);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value49 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00f8",aa95,0000),value49);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value50 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00e6",aa83,0000),value50);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value51 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00f1",aa8e,0000),value51);
            			}
HXDLIN( 370)			_g->set(HX_W(u"\u00e7",aa84,0000), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_8,2))));
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value52 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u0161",ac3c,0000),value52);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value53 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u017e",ac59,0000),value53);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value54 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00fd",aa9a,0000),value54);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value55 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00ff",aa9c,0000),value55);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value56 = null();
HXDLIN( 370)				_g->set(HX_W(u"\u00df",aa7c,0000),value56);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value57 = null();
HXDLIN( 370)				_g->set(HX_("0",30,00,00,00),value57);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value58 = null();
HXDLIN( 370)				_g->set(HX_("1",31,00,00,00),value58);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value59 = null();
HXDLIN( 370)				_g->set(HX_("2",32,00,00,00),value59);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value60 = null();
HXDLIN( 370)				_g->set(HX_("3",33,00,00,00),value60);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value61 = null();
HXDLIN( 370)				_g->set(HX_("4",34,00,00,00),value61);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value62 = null();
HXDLIN( 370)				_g->set(HX_("5",35,00,00,00),value62);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value63 = null();
HXDLIN( 370)				_g->set(HX_("6",36,00,00,00),value63);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value64 = null();
HXDLIN( 370)				_g->set(HX_("7",37,00,00,00),value64);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value65 = null();
HXDLIN( 370)				_g->set(HX_("8",38,00,00,00),value65);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value66 = null();
HXDLIN( 370)				_g->set(HX_("9",39,00,00,00),value66);
            			}
HXDLIN( 370)			_g->set(HX_("&",26,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_9,2))));
HXDLIN( 370)			_g->set(HX_("(",28,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_10,2))));
HXDLIN( 370)			_g->set(HX_(")",29,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_11,2))));
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value67 = null();
HXDLIN( 370)				_g->set(HX_("[",5b,00,00,00),value67);
            			}
HXDLIN( 370)			_g->set(HX_("]",5d,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_12,2))));
HXDLIN( 370)			_g->set(HX_("*",2a,00,00,00), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_13,2))
            				->setFixed(1,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_14,2))));
HXDLIN( 370)			_g->set(HX_("+",2b,00,00,00), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_15,2))
            				->setFixed(1,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_16,2))));
HXDLIN( 370)			_g->set(HX_("-",2d,00,00,00), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_17,2))
            				->setFixed(1,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_18,2))));
HXDLIN( 370)			_g->set(HX_("<",3c,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_19,2))));
HXDLIN( 370)			_g->set(HX_(">",3e,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_20,2))));
HXDLIN( 370)			_g->set(HX_("'",27,00,00,00), ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_21,2))
            				->setFixed(1,HX_("anim",11,86,71,40),HX_("apostrophe",ef,32,a1,ef))
            				->setFixed(2,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_22,2))));
HXDLIN( 370)			_g->set(HX_("\"",22,00,00,00), ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_23,2))
            				->setFixed(1,HX_("anim",11,86,71,40),HX_("quote",3c,23,f2,5d))
            				->setFixed(2,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_24,2))));
HXDLIN( 370)			_g->set(HX_("!",21,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("anim",11,86,71,40),HX_("exclamation",ed,a7,af,2c))));
HXDLIN( 370)			_g->set(HX_("?",3f,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("anim",11,86,71,40),HX_("question",26,9b,b0,26))));
HXDLIN( 370)			_g->set(HX_(".",2e,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("anim",11,86,71,40),HX_("period",01,61,1b,3b))));
HXDLIN( 370)			_g->set(HX_W(u"\u275d",06c2,00ac), ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_25,2))
            				->setFixed(1,HX_("anim",11,86,71,40),HX_("start quote",fe,98,af,6c))
            				->setFixed(2,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_26,2))));
HXDLIN( 370)			_g->set(HX_W(u"\u275e",06c3,00ac), ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_27,2))
            				->setFixed(1,HX_("anim",11,86,71,40),HX_("end quote",37,89,ab,34))
            				->setFixed(2,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_28,2))));
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value68 = null();
HXDLIN( 370)				_g->set(HX_("_",5f,00,00,00),value68);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value69 = null();
HXDLIN( 370)				_g->set(HX_("#",23,00,00,00),value69);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value70 = null();
HXDLIN( 370)				_g->set(HX_("$",24,00,00,00),value70);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value71 = null();
HXDLIN( 370)				_g->set(HX_("%",25,00,00,00),value71);
            			}
HXDLIN( 370)			_g->set(HX_(":",3a,00,00,00), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_29,2))
            				->setFixed(1,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_30,2))));
HXDLIN( 370)			_g->set(HX_(";",3b,00,00,00), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_31,2))
            				->setFixed(1,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_32,2))));
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value72 = null();
HXDLIN( 370)				_g->set(HX_("@",40,00,00,00),value72);
            			}
HXDLIN( 370)			_g->set(HX_("^",5e,00,00,00), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_33,2))
            				->setFixed(1,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_34,2))));
HXDLIN( 370)			_g->set(HX_(",",2c,00,00,00), ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_35,2))
            				->setFixed(1,HX_("anim",11,86,71,40),HX_("comma",d5,31,5d,4a))
            				->setFixed(2,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_36,2))));
HXDLIN( 370)			_g->set(HX_("\\",5c,00,00,00), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_37,2))
            				->setFixed(1,HX_("anim",11,86,71,40),HX_("back slash",84,bd,22,54))));
HXDLIN( 370)			_g->set(HX_("/",2f,00,00,00), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_38,2))
            				->setFixed(1,HX_("anim",11,86,71,40),HX_("forward slash",a2,4f,db,00))));
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value73 = null();
HXDLIN( 370)				_g->set(HX_("|",7c,00,00,00),value73);
            			}
HXDLIN( 370)			_g->set(HX_("~",7e,00,00,00), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_39,2))
            				->setFixed(1,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_40,2))));
HXDLIN( 370)			_g->set(HX_W(u"\u00a1",a99f,0000), ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_41,2))
            				->setFixed(1,HX_("anim",11,86,71,40),HX_("inverted exclamation",42,28,cf,f6))
            				->setFixed(2,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_42,2))));
HXDLIN( 370)			_g->set(HX_W(u"\u00bf",a9bd,0000), ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_43,2))
            				->setFixed(1,HX_("anim",11,86,71,40),HX_("inverted question",b1,c3,3a,1b))
            				->setFixed(2,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_44,2))));
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value74 = null();
HXDLIN( 370)				_g->set(HX_("{",7b,00,00,00),value74);
            			}
HXDLIN( 370)			{
HXDLIN( 370)				 ::Dynamic value75 = null();
HXDLIN( 370)				_g->set(HX_("}",7d,00,00,00),value75);
            			}
HXDLIN( 370)			_g->set(HX_W(u"\u2022",ed84,00ab), ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_45,2))
            				->setFixed(1,HX_("anim",11,86,71,40),HX_("bullet",42,92,90,d4))
            				->setFixed(2,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_718d26e5_46,2))));
HXDLIN( 370)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_0ebe4a949189dc15_370_boot)
HXDLIN( 370)		allLetters = ( ( ::haxe::ds::StringMap)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace objects
