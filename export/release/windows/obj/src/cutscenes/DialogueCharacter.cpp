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
#ifndef INCLUDED_cutscenes_DialogueCharacter
#include <cutscenes/DialogueCharacter.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_tjson_TJSON
#include <tjson/TJSON.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_620defbb6d5a68e8_29_new,"cutscenes.DialogueCharacter","new",0xa872c93e,"cutscenes.DialogueCharacter.new","cutscenes/DialogueCharacter.hx",29,0x39500e73)
HX_LOCAL_STACK_FRAME(_hx_pos_620defbb6d5a68e8_58_reloadCharacterJson,"cutscenes.DialogueCharacter","reloadCharacterJson",0x2b4f0036,"cutscenes.DialogueCharacter.reloadCharacterJson","cutscenes/DialogueCharacter.hx",58,0x39500e73)
HX_LOCAL_STACK_FRAME(_hx_pos_620defbb6d5a68e8_81_reloadAnimations,"cutscenes.DialogueCharacter","reloadAnimations",0x6cb9ea0a,"cutscenes.DialogueCharacter.reloadAnimations","cutscenes/DialogueCharacter.hx",81,0x39500e73)
HX_LOCAL_STACK_FRAME(_hx_pos_620defbb6d5a68e8_92_playAnim,"cutscenes.DialogueCharacter","playAnim",0xa05d0c87,"cutscenes.DialogueCharacter.playAnim","cutscenes/DialogueCharacter.hx",92,0x39500e73)
HX_LOCAL_STACK_FRAME(_hx_pos_620defbb6d5a68e8_127_animationIsLoop,"cutscenes.DialogueCharacter","animationIsLoop",0xc7bab770,"cutscenes.DialogueCharacter.animationIsLoop","cutscenes/DialogueCharacter.hx",127,0x39500e73)
HX_LOCAL_STACK_FRAME(_hx_pos_620defbb6d5a68e8_31_boot,"cutscenes.DialogueCharacter","boot",0xb4164d94,"cutscenes.DialogueCharacter.boot","cutscenes/DialogueCharacter.hx",31,0x39500e73)
HX_LOCAL_STACK_FRAME(_hx_pos_620defbb6d5a68e8_32_boot,"cutscenes.DialogueCharacter","boot",0xb4164d94,"cutscenes.DialogueCharacter.boot","cutscenes/DialogueCharacter.hx",32,0x39500e73)
HX_LOCAL_STACK_FRAME(_hx_pos_620defbb6d5a68e8_33_boot,"cutscenes.DialogueCharacter","boot",0xb4164d94,"cutscenes.DialogueCharacter.boot","cutscenes/DialogueCharacter.hx",33,0x39500e73)
namespace cutscenes{

void DialogueCharacter_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String character){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_620defbb6d5a68e8_29_new)
HXLINE(  42)		this->skipping = 0;
HXLINE(  41)		this->skiptimer = 0;
HXLINE(  40)		this->curCharacter = HX_("bf",c4,55,00,00);
HXLINE(  39)		this->isGhost = false;
HXLINE(  38)		this->startingPos = ((Float)0);
HXLINE(  36)		this->dialogueAnimations =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  35)		this->jsonFile = null();
HXLINE(  45)		super::__construct(x,y,null());
HXLINE(  47)		if (::hx::IsNull( character )) {
HXLINE(  47)			character = ::cutscenes::DialogueCharacter_obj::DEFAULT_CHARACTER;
            		}
HXLINE(  48)		this->curCharacter = character;
HXLINE(  50)		this->reloadCharacterJson(character);
HXLINE(  51)		::String key = ( (::String)((HX_("dialogue/",17,48,13,fa) + this->jsonFile->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic))) );
HXDLIN(  51)		::String library = null();
HXDLIN(  51)		 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(key,null(),true);
HXDLIN(  51)		bool xmlExists = false;
HXDLIN(  51)		::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)));
HXDLIN(  51)		if (::sys::FileSystem_obj::exists(xml)) {
HXLINE(  51)			xmlExists = true;
            		}
HXDLIN(  51)		 ::Dynamic _hx_tmp;
HXDLIN(  51)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  51)			_hx_tmp = imageLoaded;
            		}
            		else {
HXLINE(  51)			_hx_tmp = ::backend::Paths_obj::image(key,library,true);
            		}
HXDLIN(  51)		::String _hx_tmp1;
HXDLIN(  51)		if (xmlExists) {
HXLINE(  51)			_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            		}
            		else {
HXLINE(  51)			_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            		}
HXDLIN(  51)		this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  52)		this->reloadAnimations();
HXLINE(  54)		this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  55)		if (::hx::IsEq( this->jsonFile->__Field(HX_("no_antialiasing",f2,74,67,98),::hx::paccDynamic),true )) {
HXLINE(  55)			this->set_antialiasing(false);
            		}
            	}

Dynamic DialogueCharacter_obj::__CreateEmpty() { return new DialogueCharacter_obj; }

void *DialogueCharacter_obj::_hx_vtable = 0;

Dynamic DialogueCharacter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DialogueCharacter_obj > _hx_result = new DialogueCharacter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool DialogueCharacter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x122f1274) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x122f1274;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void DialogueCharacter_obj::reloadCharacterJson(::String character){
            	HX_STACKFRAME(&_hx_pos_620defbb6d5a68e8_58_reloadCharacterJson)
HXLINE(  59)		::String characterPath = ((HX_("images/dialogue/",c0,b0,32,12) + character) + HX_(".json",56,f1,d6,c2));
HXLINE(  60)		::String rawJson = null();
HXLINE(  63)		::String path = ::backend::Paths_obj::modFolders(characterPath);
HXLINE(  64)		if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE(  65)			::String file = characterPath;
HXDLIN(  65)			if (::hx::IsNull( file )) {
HXLINE(  65)				file = HX_("",00,00,00,00);
            			}
HXDLIN(  65)			path = (HX_("assets/",4c,2a,dc,36) + file);
            		}
HXLINE(  68)		if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE(  69)			::String file = ((HX_("images/dialogue/",c0,b0,32,12) + ::cutscenes::DialogueCharacter_obj::DEFAULT_CHARACTER) + HX_(".json",56,f1,d6,c2));
HXDLIN(  69)			if (::hx::IsNull( file )) {
HXLINE(  69)				file = HX_("",00,00,00,00);
            			}
HXDLIN(  69)			path = (HX_("assets/",4c,2a,dc,36) + file);
            		}
HXLINE(  71)		rawJson = ::sys::io::File_obj::getContent(path);
HXLINE(  78)		this->jsonFile = ::tjson::TJSON_obj::parse(rawJson,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(DialogueCharacter_obj,reloadCharacterJson,(void))

void DialogueCharacter_obj::reloadAnimations(){
            	HX_STACKFRAME(&_hx_pos_620defbb6d5a68e8_81_reloadAnimations)
HXLINE(  82)		this->dialogueAnimations->clear();
HXLINE(  83)		bool _hx_tmp;
HXDLIN(  83)		if (::hx::IsNotNull( this->jsonFile->__Field(HX_("animations",ef,34,1c,83),::hx::paccDynamic) )) {
HXLINE(  83)			_hx_tmp = (( (::Array< ::Dynamic>)(this->jsonFile->__Field(HX_("animations",ef,34,1c,83),::hx::paccDynamic)) )->length > 0);
            		}
            		else {
HXLINE(  83)			_hx_tmp = false;
            		}
HXDLIN(  83)		if (_hx_tmp) {
HXLINE(  84)			int _g = 0;
HXDLIN(  84)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(this->jsonFile->__Field(HX_("animations",ef,34,1c,83),::hx::paccDynamic)) );
HXDLIN(  84)			while((_g < _g1->length)){
HXLINE(  84)				 ::Dynamic anim = _g1->__get(_g);
HXDLIN(  84)				_g = (_g + 1);
HXLINE(  85)				this->animation->addByPrefix(( (::String)(anim->__Field(HX_("anim",11,86,71,40),::hx::paccDynamic)) ),( (::String)(anim->__Field(HX_("loop_name",46,3d,8f,96),::hx::paccDynamic)) ),24,this->isGhost,null(),null());
HXLINE(  86)				this->animation->addByPrefix(( (::String)((anim->__Field(HX_("anim",11,86,71,40),::hx::paccDynamic) + ::cutscenes::DialogueCharacter_obj::IDLE_SUFFIX)) ),( (::String)(anim->__Field(HX_("idle_name",96,be,e2,c5),::hx::paccDynamic)) ),24,true,null(),null());
HXLINE(  87)				this->dialogueAnimations->set(( (::String)(anim->__Field(HX_("anim",11,86,71,40),::hx::paccDynamic)) ),anim);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueCharacter_obj,reloadAnimations,(void))

void DialogueCharacter_obj::playAnim(::String animName,::hx::Null< bool >  __o_playIdle){
            		bool playIdle = __o_playIdle.Default(false);
            	HX_STACKFRAME(&_hx_pos_620defbb6d5a68e8_92_playAnim)
HXLINE(  93)		::String leAnim = animName;
HXLINE(  94)		bool _hx_tmp;
HXDLIN(  94)		if (::hx::IsNotNull( animName )) {
HXLINE(  94)			_hx_tmp = !(this->dialogueAnimations->exists(animName));
            		}
            		else {
HXLINE(  94)			_hx_tmp = true;
            		}
HXDLIN(  94)		if (_hx_tmp) {
HXLINE(  95)			::Array< ::String > arrayAnims = ::Array_obj< ::String >::__new(0);
HXLINE(  96)			{
HXLINE(  96)				 ::Dynamic anim = this->dialogueAnimations->iterator();
HXDLIN(  96)				while(( (bool)(anim->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  96)					 ::Dynamic anim1 = anim->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE(  97)					arrayAnims->push( ::Dynamic(anim1->__Field(HX_("anim",11,86,71,40),::hx::paccDynamic)));
            				}
            			}
HXLINE(  99)			if ((arrayAnims->length > 0)) {
HXLINE( 100)				leAnim = arrayAnims->__get(::flixel::FlxG_obj::random->_hx_int(0,(arrayAnims->length - 1),null()));
            			}
            		}
HXLINE( 104)		bool _hx_tmp1;
HXDLIN( 104)		if (this->dialogueAnimations->exists(leAnim)) {
HXLINE( 105)			bool _hx_tmp;
HXDLIN( 105)			if (::hx::IsNotNull( this->dialogueAnimations->get(leAnim)->__Field(HX_("loop_name",46,3d,8f,96),::hx::paccDynamic) )) {
HXLINE( 105)				_hx_tmp = (( (::String)(this->dialogueAnimations->get(leAnim)->__Field(HX_("loop_name",46,3d,8f,96),::hx::paccDynamic)) ).length < 1);
            			}
            			else {
HXLINE( 105)				_hx_tmp = true;
            			}
HXDLIN( 105)			if (!(_hx_tmp)) {
HXLINE( 107)				::String _hx_tmp = ( (::String)(this->dialogueAnimations->get(leAnim)->__Field(HX_("loop_name",46,3d,8f,96),::hx::paccDynamic)) );
HXLINE( 104)				_hx_tmp1 = ::hx::IsEq( _hx_tmp,this->dialogueAnimations->get(leAnim)->__Field(HX_("idle_name",96,be,e2,c5),::hx::paccDynamic) );
            			}
            			else {
HXLINE( 104)				_hx_tmp1 = true;
            			}
            		}
            		else {
HXLINE( 104)			_hx_tmp1 = false;
            		}
HXDLIN( 104)		if (_hx_tmp1) {
HXLINE( 108)			playIdle = true;
            		}
HXLINE( 110)		::String _hx_tmp2;
HXDLIN( 110)		if (playIdle) {
HXLINE( 110)			_hx_tmp2 = (leAnim + ::cutscenes::DialogueCharacter_obj::IDLE_SUFFIX);
            		}
            		else {
HXLINE( 110)			_hx_tmp2 = leAnim;
            		}
HXDLIN( 110)		this->animation->play(_hx_tmp2,false,null(),null());
HXLINE( 112)		if (this->dialogueAnimations->exists(leAnim)) {
HXLINE( 113)			 ::Dynamic anim = this->dialogueAnimations->get(leAnim);
HXLINE( 114)			if (playIdle) {
HXLINE( 115)				 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN( 115)				Float y = ( (Float)( ::Dynamic(anim->__Field(HX_("idle_offsets",15,3e,2c,b8),::hx::paccDynamic))->__GetItem(1)) );
HXDLIN( 115)				this1->set_x(( (Float)( ::Dynamic(anim->__Field(HX_("idle_offsets",15,3e,2c,b8),::hx::paccDynamic))->__GetItem(0)) ));
HXDLIN( 115)				this1->set_y(y);
            			}
            			else {
HXLINE( 118)				 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN( 118)				Float y = ( (Float)( ::Dynamic(anim->__Field(HX_("loop_offsets",65,0d,38,58),::hx::paccDynamic))->__GetItem(1)) );
HXDLIN( 118)				this1->set_x(( (Float)( ::Dynamic(anim->__Field(HX_("loop_offsets",65,0d,38,58),::hx::paccDynamic))->__GetItem(0)) ));
HXDLIN( 118)				this1->set_y(y);
            			}
            		}
            		else {
HXLINE( 122)			{
HXLINE( 122)				 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN( 122)				this1->set_x(( (Float)(0) ));
HXDLIN( 122)				this1->set_y(( (Float)(0) ));
            			}
HXLINE( 123)			::String _hx_tmp;
HXDLIN( 123)			if (playIdle) {
HXLINE( 123)				_hx_tmp = HX_("idle anim",9d,46,16,77);
            			}
            			else {
HXLINE( 123)				_hx_tmp = HX_("loop anim",4d,c5,c2,47);
            			}
HXDLIN( 123)			::haxe::Log_obj::trace((((HX_("Offsets not found! Dialogue character is badly formatted, anim: ",ce,cc,78,b6) + leAnim) + HX_(", ",74,26,00,00)) + _hx_tmp),::hx::SourceInfo(HX_("source/cutscenes/DialogueCharacter.hx",67,08,c0,63),123,HX_("cutscenes.DialogueCharacter",4c,12,d2,3f),HX_("playAnim",25,ea,84,30)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DialogueCharacter_obj,playAnim,(void))

bool DialogueCharacter_obj::animationIsLoop(){
            	HX_STACKFRAME(&_hx_pos_620defbb6d5a68e8_127_animationIsLoop)
HXLINE( 128)		if (::hx::IsNull( this->animation->_curAnim )) {
HXLINE( 128)			return false;
            		}
HXLINE( 129)		return !(::StringTools_obj::endsWith(this->animation->_curAnim->name,::cutscenes::DialogueCharacter_obj::IDLE_SUFFIX));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueCharacter_obj,animationIsLoop,return )

::String DialogueCharacter_obj::IDLE_SUFFIX;

::String DialogueCharacter_obj::DEFAULT_CHARACTER;

Float DialogueCharacter_obj::DEFAULT_SCALE;


::hx::ObjectPtr< DialogueCharacter_obj > DialogueCharacter_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String character) {
	::hx::ObjectPtr< DialogueCharacter_obj > __this = new DialogueCharacter_obj();
	__this->__construct(__o_x,__o_y,character);
	return __this;
}

::hx::ObjectPtr< DialogueCharacter_obj > DialogueCharacter_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String character) {
	DialogueCharacter_obj *__this = (DialogueCharacter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DialogueCharacter_obj), true, "cutscenes.DialogueCharacter"));
	*(void **)__this = DialogueCharacter_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,character);
	return __this;
}

DialogueCharacter_obj::DialogueCharacter_obj()
{
}

void DialogueCharacter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DialogueCharacter);
	HX_MARK_MEMBER_NAME(jsonFile,"jsonFile");
	HX_MARK_MEMBER_NAME(dialogueAnimations,"dialogueAnimations");
	HX_MARK_MEMBER_NAME(startingPos,"startingPos");
	HX_MARK_MEMBER_NAME(isGhost,"isGhost");
	HX_MARK_MEMBER_NAME(curCharacter,"curCharacter");
	HX_MARK_MEMBER_NAME(skiptimer,"skiptimer");
	HX_MARK_MEMBER_NAME(skipping,"skipping");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DialogueCharacter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(jsonFile,"jsonFile");
	HX_VISIT_MEMBER_NAME(dialogueAnimations,"dialogueAnimations");
	HX_VISIT_MEMBER_NAME(startingPos,"startingPos");
	HX_VISIT_MEMBER_NAME(isGhost,"isGhost");
	HX_VISIT_MEMBER_NAME(curCharacter,"curCharacter");
	HX_VISIT_MEMBER_NAME(skiptimer,"skiptimer");
	HX_VISIT_MEMBER_NAME(skipping,"skipping");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DialogueCharacter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"isGhost") ) { return ::hx::Val( isGhost ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"jsonFile") ) { return ::hx::Val( jsonFile ); }
		if (HX_FIELD_EQ(inName,"skipping") ) { return ::hx::Val( skipping ); }
		if (HX_FIELD_EQ(inName,"playAnim") ) { return ::hx::Val( playAnim_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"skiptimer") ) { return ::hx::Val( skiptimer ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"startingPos") ) { return ::hx::Val( startingPos ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { return ::hx::Val( curCharacter ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"animationIsLoop") ) { return ::hx::Val( animationIsLoop_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"reloadAnimations") ) { return ::hx::Val( reloadAnimations_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"dialogueAnimations") ) { return ::hx::Val( dialogueAnimations ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"reloadCharacterJson") ) { return ::hx::Val( reloadCharacterJson_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DialogueCharacter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"IDLE_SUFFIX") ) { outValue = ( IDLE_SUFFIX ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"DEFAULT_SCALE") ) { outValue = ( DEFAULT_SCALE ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"DEFAULT_CHARACTER") ) { outValue = ( DEFAULT_CHARACTER ); return true; }
	}
	return false;
}

::hx::Val DialogueCharacter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"isGhost") ) { isGhost=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"jsonFile") ) { jsonFile=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skipping") ) { skipping=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"skiptimer") ) { skiptimer=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"startingPos") ) { startingPos=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { curCharacter=inValue.Cast< ::String >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"dialogueAnimations") ) { dialogueAnimations=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DialogueCharacter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"IDLE_SUFFIX") ) { IDLE_SUFFIX=ioValue.Cast< ::String >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"DEFAULT_SCALE") ) { DEFAULT_SCALE=ioValue.Cast< Float >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"DEFAULT_CHARACTER") ) { DEFAULT_CHARACTER=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void DialogueCharacter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("jsonFile",c4,70,4d,43));
	outFields->push(HX_("dialogueAnimations",27,b4,15,10));
	outFields->push(HX_("startingPos",b4,ab,30,d9));
	outFields->push(HX_("isGhost",05,33,de,2f));
	outFields->push(HX_("curCharacter",09,86,7c,d7));
	outFields->push(HX_("skiptimer",e6,bc,03,91));
	outFields->push(HX_("skipping",71,b4,d3,d5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DialogueCharacter_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueCharacter_obj,jsonFile),HX_("jsonFile",c4,70,4d,43)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(DialogueCharacter_obj,dialogueAnimations),HX_("dialogueAnimations",27,b4,15,10)},
	{::hx::fsFloat,(int)offsetof(DialogueCharacter_obj,startingPos),HX_("startingPos",b4,ab,30,d9)},
	{::hx::fsBool,(int)offsetof(DialogueCharacter_obj,isGhost),HX_("isGhost",05,33,de,2f)},
	{::hx::fsString,(int)offsetof(DialogueCharacter_obj,curCharacter),HX_("curCharacter",09,86,7c,d7)},
	{::hx::fsInt,(int)offsetof(DialogueCharacter_obj,skiptimer),HX_("skiptimer",e6,bc,03,91)},
	{::hx::fsInt,(int)offsetof(DialogueCharacter_obj,skipping),HX_("skipping",71,b4,d3,d5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo DialogueCharacter_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &DialogueCharacter_obj::IDLE_SUFFIX,HX_("IDLE_SUFFIX",dc,fb,17,9b)},
	{::hx::fsString,(void *) &DialogueCharacter_obj::DEFAULT_CHARACTER,HX_("DEFAULT_CHARACTER",2b,e7,14,33)},
	{::hx::fsFloat,(void *) &DialogueCharacter_obj::DEFAULT_SCALE,HX_("DEFAULT_SCALE",0c,a9,44,ec)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DialogueCharacter_obj_sMemberFields[] = {
	HX_("jsonFile",c4,70,4d,43),
	HX_("dialogueAnimations",27,b4,15,10),
	HX_("startingPos",b4,ab,30,d9),
	HX_("isGhost",05,33,de,2f),
	HX_("curCharacter",09,86,7c,d7),
	HX_("skiptimer",e6,bc,03,91),
	HX_("skipping",71,b4,d3,d5),
	HX_("reloadCharacterJson",58,eb,4f,24),
	HX_("reloadAnimations",a8,95,85,94),
	HX_("playAnim",25,ea,84,30),
	HX_("animationIsLoop",92,e9,1a,74),
	::String(null()) };

static void DialogueCharacter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DialogueCharacter_obj::IDLE_SUFFIX,"IDLE_SUFFIX");
	HX_MARK_MEMBER_NAME(DialogueCharacter_obj::DEFAULT_CHARACTER,"DEFAULT_CHARACTER");
	HX_MARK_MEMBER_NAME(DialogueCharacter_obj::DEFAULT_SCALE,"DEFAULT_SCALE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DialogueCharacter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DialogueCharacter_obj::IDLE_SUFFIX,"IDLE_SUFFIX");
	HX_VISIT_MEMBER_NAME(DialogueCharacter_obj::DEFAULT_CHARACTER,"DEFAULT_CHARACTER");
	HX_VISIT_MEMBER_NAME(DialogueCharacter_obj::DEFAULT_SCALE,"DEFAULT_SCALE");
};

#endif

::hx::Class DialogueCharacter_obj::__mClass;

static ::String DialogueCharacter_obj_sStaticFields[] = {
	HX_("IDLE_SUFFIX",dc,fb,17,9b),
	HX_("DEFAULT_CHARACTER",2b,e7,14,33),
	HX_("DEFAULT_SCALE",0c,a9,44,ec),
	::String(null())
};

void DialogueCharacter_obj::__register()
{
	DialogueCharacter_obj _hx_dummy;
	DialogueCharacter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("cutscenes.DialogueCharacter",4c,12,d2,3f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DialogueCharacter_obj::__GetStatic;
	__mClass->mSetStaticField = &DialogueCharacter_obj::__SetStatic;
	__mClass->mMarkFunc = DialogueCharacter_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DialogueCharacter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DialogueCharacter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DialogueCharacter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DialogueCharacter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DialogueCharacter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DialogueCharacter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DialogueCharacter_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_620defbb6d5a68e8_31_boot)
HXDLIN(  31)		IDLE_SUFFIX = HX_("-IDLE",c1,89,7c,19);
            	}
{
            	HX_STACKFRAME(&_hx_pos_620defbb6d5a68e8_32_boot)
HXDLIN(  32)		DEFAULT_CHARACTER = HX_("bf",c4,55,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_620defbb6d5a68e8_33_boot)
HXDLIN(  33)		DEFAULT_SCALE = ((Float)0.7);
            	}
}

} // end namespace cutscenes
