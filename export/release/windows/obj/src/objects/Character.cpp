#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_animateatlas_AtlasFrameMaker
#include <animateatlas/AtlasFrameMaker.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Conductor
#include <backend/Conductor.h>
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
#ifndef INCLUDED_backend_Song
#include <backend/Song.h>
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
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSound
#include <flixel/sound/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
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
#ifndef INCLUDED_objects_Character
#include <objects/Character.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
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
#ifndef INCLUDED_tjson_TJSON
#include <tjson/TJSON.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3e0631c319a33378_42_new,"objects.Character","new",0x57ba03e1,"objects.Character.new","objects/Character.hx",42,0x58835030)
static const int _hx_array_data_9fd87f6f_2[] = {
	(int)255,(int)0,(int)0,
};
static const Float _hx_array_data_9fd87f6f_3[] = {
	(Float)0,(Float)0,
};
static const Float _hx_array_data_9fd87f6f_4[] = {
	(Float)0,(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_3e0631c319a33378_218_update,"objects.Character","update",0x5e85b928,"objects.Character.update","objects/Character.hx",218,0x58835030)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0631c319a33378_284_dance,"objects.Character","dance",0x787e58f4,"objects.Character.dance","objects/Character.hx",284,0x58835030)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0631c319a33378_302_playAnim,"objects.Character","playAnim",0x0ecf6304,"objects.Character.playAnim","objects/Character.hx",302,0x58835030)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0631c319a33378_333_loadMappedAnims,"objects.Character","loadMappedAnims",0xbff1910a,"objects.Character.loadMappedAnims","objects/Character.hx",333,0x58835030)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0631c319a33378_346_sortAnims,"objects.Character","sortAnims",0xce36e745,"objects.Character.sortAnims","objects/Character.hx",346,0x58835030)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0631c319a33378_351_recalculateDanceIdle,"objects.Character","recalculateDanceIdle",0x2c5cf173,"objects.Character.recalculateDanceIdle","objects/Character.hx",351,0x58835030)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0631c319a33378_374_addOffset,"objects.Character","addOffset",0xbb4316d5,"objects.Character.addOffset","objects/Character.hx",374,0x58835030)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0631c319a33378_379_quickAnimAdd,"objects.Character","quickAnimAdd",0xd3ea6182,"objects.Character.quickAnimAdd","objects/Character.hx",379,0x58835030)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0631c319a33378_76_boot,"objects.Character","boot",0x63226191,"objects.Character.boot","objects/Character.hx",76,0x58835030)
namespace objects{

void Character_obj::__construct(Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer){
            		::String character = __o_character;
            		if (::hx::IsNull(__o_character)) character = HX_("bf",c4,55,00,00);
            		 ::Dynamic isPlayer = __o_isPlayer;
            		if (::hx::IsNull(__o_isPlayer)) isPlayer = false;
            	HX_GC_STACKFRAME(&_hx_pos_3e0631c319a33378_42_new)
HXLINE( 350)		this->settingCharacterUp = true;
HXLINE( 349)		this->danceEveryNumBeats = 2;
HXLINE( 277)		this->danced = false;
HXLINE(  74)		this->healthColorArray = ::Array_obj< int >::fromData( _hx_array_data_9fd87f6f_2,3);
HXLINE(  73)		this->originalFlipX = false;
HXLINE(  72)		this->noAntialiasing = false;
HXLINE(  71)		this->jsonScale = ((Float)1);
HXLINE(  70)		this->imageFile = HX_("",00,00,00,00);
HXLINE(  67)		this->hasMissAnimations = false;
HXLINE(  65)		this->cameraPosition = ::Array_obj< Float >::fromData( _hx_array_data_9fd87f6f_3,2);
HXLINE(  64)		this->positionArray = ::Array_obj< Float >::fromData( _hx_array_data_9fd87f6f_4,2);
HXLINE(  62)		this->animationsArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  61)		this->healthIcon = HX_("face",9d,b4,b5,43);
HXLINE(  59)		this->skipDance = false;
HXLINE(  58)		this->danceIdle = false;
HXLINE(  57)		this->idleSuffix = HX_("",00,00,00,00);
HXLINE(  56)		this->singDuration = ((Float)4);
HXLINE(  55)		this->stunned = false;
HXLINE(  54)		this->animationNotes = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  53)		this->specialAnim = false;
HXLINE(  52)		this->heyTimer = ((Float)0);
HXLINE(  51)		this->holdTimer = ((Float)0);
HXLINE(  48)		this->curCharacter = ::objects::Character_obj::DEFAULT_CHARACTER;
HXLINE(  47)		this->isPlayer = false;
HXLINE(  45)		this->debugMode = false;
HXLINE(  79)		super::__construct(x,y,null());
HXLINE(  81)		this->animOffsets =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  82)		this->curCharacter = character;
HXLINE(  83)		this->isPlayer = ( (bool)(isPlayer) );
HXLINE(  84)		::String library = null();
HXLINE(  85)		{
HXLINE(  85)			::String _g = this->curCharacter;
HXLINE(  89)			{
HXLINE(  90)				::String characterPath = ((HX_("characters/",45,3c,bf,be) + this->curCharacter) + HX_(".json",56,f1,d6,c2));
HXLINE(  93)				::String path = ::backend::Paths_obj::modFolders(characterPath);
HXLINE(  94)				if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE(  95)					::String file = characterPath;
HXDLIN(  95)					if (::hx::IsNull( file )) {
HXLINE(  95)						file = HX_("",00,00,00,00);
            					}
HXDLIN(  95)					path = (HX_("assets/",4c,2a,dc,36) + file);
            				}
HXLINE(  98)				if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE( 104)					::String file = ((HX_("characters/",45,3c,bf,be) + ::objects::Character_obj::DEFAULT_CHARACTER) + HX_(".json",56,f1,d6,c2));
HXDLIN( 104)					if (::hx::IsNull( file )) {
HXLINE( 104)						file = HX_("",00,00,00,00);
            					}
HXDLIN( 104)					path = (HX_("assets/",4c,2a,dc,36) + file);
            				}
HXLINE( 108)				::String rawJson = ::sys::io::File_obj::getContent(path);
HXLINE( 113)				 ::Dynamic json = ::tjson::TJSON_obj::parse(rawJson,null(),null());
HXLINE( 114)				bool useAtlas = false;
HXLINE( 117)				::String modAnimToFind = ::backend::Paths_obj::modFolders(( (::String)(((HX_("images/",77,50,74,c1) + json->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic)) + HX_("/Animation.json",61,fc,54,44))) ));
HXLINE( 118)				::String animToFind = ::backend::Paths_obj::getPath(( (::String)(((HX_("images/",77,50,74,c1) + json->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic)) + HX_("/Animation.json",61,fc,54,44))) ),HX_("TEXT",ad,94,ba,37),null(),null());
HXLINE( 119)				bool _hx_tmp;
HXDLIN( 119)				bool _hx_tmp1;
HXDLIN( 119)				if (!(::sys::FileSystem_obj::exists(modAnimToFind))) {
HXLINE( 119)					_hx_tmp1 = ::sys::FileSystem_obj::exists(animToFind);
            				}
            				else {
HXLINE( 119)					_hx_tmp1 = true;
            				}
HXDLIN( 119)				if (!(_hx_tmp1)) {
HXLINE( 119)					_hx_tmp = ::openfl::utils::Assets_obj::exists(animToFind,null());
            				}
            				else {
HXLINE( 119)					_hx_tmp = true;
            				}
HXDLIN( 119)				if (_hx_tmp) {
HXLINE( 123)					useAtlas = true;
            				}
HXLINE( 125)				if (!(useAtlas)) {
HXLINE( 126)					this->set_frames(::backend::Paths_obj::getAtlas(( (::String)(json->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic)) ),null()));
            				}
            				else {
HXLINE( 128)					this->set_frames(::animateatlas::AtlasFrameMaker_obj::construct(( (::String)(json->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic)) ),null(),null()));
            				}
HXLINE( 130)				this->imageFile = ( (::String)(json->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic)) );
HXLINE( 131)				if (::hx::IsNotEq( json->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic),1 )) {
HXLINE( 132)					this->jsonScale = ( (Float)(json->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic)) );
HXLINE( 133)					Float _hx_tmp = this->get_width();
HXDLIN( 133)					this->setGraphicSize(::Std_obj::_hx_int((_hx_tmp * this->jsonScale)),null());
HXLINE( 134)					this->updateHitbox();
            				}
HXLINE( 138)				this->positionArray = ( (::Array< Float >)(json->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic)) );
HXLINE( 139)				this->cameraPosition = ( (::Array< Float >)(json->__Field(HX_("camera_position",c3,d4,4a,56),::hx::paccDynamic)) );
HXLINE( 142)				this->healthIcon = ( (::String)(json->__Field(HX_("healthicon",15,8e,6f,17),::hx::paccDynamic)) );
HXLINE( 143)				this->singDuration = ( (Float)(json->__Field(HX_("sing_duration",84,ae,a8,66),::hx::paccDynamic)) );
HXLINE( 144)				this->set_flipX(::hx::IsEq( json->__Field(HX_("flip_x",26,2b,6a,3d),::hx::paccDynamic),true ));
HXLINE( 146)				bool _hx_tmp2;
HXDLIN( 146)				if (::hx::IsNotNull( json->__Field(HX_("healthbar_colors",78,d9,40,40),::hx::paccDynamic) )) {
HXLINE( 146)					_hx_tmp2 = (( (::Array< int >)(json->__Field(HX_("healthbar_colors",78,d9,40,40),::hx::paccDynamic)) )->length > 2);
            				}
            				else {
HXLINE( 146)					_hx_tmp2 = false;
            				}
HXDLIN( 146)				if (_hx_tmp2) {
HXLINE( 147)					this->healthColorArray = ( (::Array< int >)(json->__Field(HX_("healthbar_colors",78,d9,40,40),::hx::paccDynamic)) );
            				}
HXLINE( 150)				this->noAntialiasing = ::hx::IsEq( json->__Field(HX_("no_antialiasing",f2,74,67,98),::hx::paccDynamic),true );
HXLINE( 151)				bool _hx_tmp3;
HXDLIN( 151)				if (::backend::ClientPrefs_obj::data->antialiasing) {
HXLINE( 151)					_hx_tmp3 = !(this->noAntialiasing);
            				}
            				else {
HXLINE( 151)					_hx_tmp3 = false;
            				}
HXDLIN( 151)				this->set_antialiasing(_hx_tmp3);
HXLINE( 154)				this->animationsArray = ( (::Array< ::Dynamic>)(json->__Field(HX_("animations",ef,34,1c,83),::hx::paccDynamic)) );
HXLINE( 155)				bool _hx_tmp4;
HXDLIN( 155)				if (::hx::IsNotNull( this->animationsArray )) {
HXLINE( 155)					_hx_tmp4 = (this->animationsArray->length > 0);
            				}
            				else {
HXLINE( 155)					_hx_tmp4 = false;
            				}
HXDLIN( 155)				if (_hx_tmp4) {
HXLINE( 156)					int _g = 0;
HXDLIN( 156)					::Array< ::Dynamic> _g1 = this->animationsArray;
HXDLIN( 156)					while((_g < _g1->length)){
HXLINE( 156)						 ::Dynamic anim = _g1->__get(_g);
HXDLIN( 156)						_g = (_g + 1);
HXLINE( 157)						::String animAnim = ( (::String)((HX_("",00,00,00,00) + anim->__Field(HX_("anim",11,86,71,40),::hx::paccDynamic))) );
HXLINE( 158)						::String animName = ( (::String)((HX_("",00,00,00,00) + anim->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic))) );
HXLINE( 159)						int animFps = ( (int)(anim->__Field(HX_("fps",e9,c7,4d,00),::hx::paccDynamic)) );
HXLINE( 160)						bool animLoop = ( (bool)(anim->__Field(HX_("loop",64,a6,b7,47),::hx::paccDynamic)) );
HXLINE( 161)						::Array< int > animIndices = ( (::Array< int >)(anim->__Field(HX_("indices",27,47,54,e3),::hx::paccDynamic)) );
HXLINE( 162)						bool _hx_tmp;
HXDLIN( 162)						if (::hx::IsNotNull( animIndices )) {
HXLINE( 162)							_hx_tmp = (animIndices->length > 0);
            						}
            						else {
HXLINE( 162)							_hx_tmp = false;
            						}
HXDLIN( 162)						if (_hx_tmp) {
HXLINE( 163)							this->animation->addByIndices(animAnim,animName,animIndices,HX_("",00,00,00,00),animFps,animLoop,null(),null());
            						}
            						else {
HXLINE( 165)							this->animation->addByPrefix(animAnim,animName,animFps,animLoop,null(),null());
            						}
HXLINE( 168)						bool _hx_tmp1;
HXDLIN( 168)						if (::hx::IsNotNull( anim->__Field(HX_("offsets",80,09,65,d7),::hx::paccDynamic) )) {
HXLINE( 168)							_hx_tmp1 = (( (::Array< int >)(anim->__Field(HX_("offsets",80,09,65,d7),::hx::paccDynamic)) )->length > 1);
            						}
            						else {
HXLINE( 168)							_hx_tmp1 = false;
            						}
HXDLIN( 168)						if (_hx_tmp1) {
HXLINE( 169)							this->addOffset(( (::String)(anim->__Field(HX_("anim",11,86,71,40),::hx::paccDynamic)) ), ::Dynamic(anim->__Field(HX_("offsets",80,09,65,d7),::hx::paccDynamic))->__GetItem(0), ::Dynamic(anim->__Field(HX_("offsets",80,09,65,d7),::hx::paccDynamic))->__GetItem(1));
            						}
            					}
            				}
            				else {
HXLINE( 173)					this->quickAnimAdd(HX_("idle",14,a7,b3,45),HX_("BF idle dance",03,fa,cc,7f));
            				}
            			}
            		}
HXLINE( 177)		this->originalFlipX = this->flipX;
HXLINE( 179)		bool _hx_tmp5;
HXDLIN( 179)		bool _hx_tmp6;
HXDLIN( 179)		bool _hx_tmp7;
HXDLIN( 179)		if (!(this->animOffsets->exists(HX_("singLEFTmiss",d2,2f,9c,b6)))) {
HXLINE( 179)			_hx_tmp7 = this->animOffsets->exists(HX_("singDOWNmiss",ad,e9,88,e4));
            		}
            		else {
HXLINE( 179)			_hx_tmp7 = true;
            		}
HXDLIN( 179)		if (!(_hx_tmp7)) {
HXLINE( 179)			_hx_tmp6 = this->animOffsets->exists(HX_("singUPmiss",66,22,08,8a));
            		}
            		else {
HXLINE( 179)			_hx_tmp6 = true;
            		}
HXDLIN( 179)		if (!(_hx_tmp6)) {
HXLINE( 179)			_hx_tmp5 = this->animOffsets->exists(HX_("singRIGHTmiss",89,cc,65,e3));
            		}
            		else {
HXLINE( 179)			_hx_tmp5 = true;
            		}
HXDLIN( 179)		if (_hx_tmp5) {
HXLINE( 179)			this->hasMissAnimations = true;
            		}
HXLINE( 180)		this->recalculateDanceIdle();
HXLINE( 181)		this->dance();
HXLINE( 183)		if (( (bool)(isPlayer) )) {
HXLINE( 185)			this->set_flipX(!(this->flipX));
            		}
HXLINE( 208)		if ((this->curCharacter == HX_("pico-speaker",57,7a,55,5e))) {
HXLINE( 211)			this->skipDance = true;
HXLINE( 212)			this->loadMappedAnims();
HXLINE( 213)			this->playAnim(HX_("shoot1",72,21,6a,26),null(),null(),null());
            		}
            	}

Dynamic Character_obj::__CreateEmpty() { return new Character_obj; }

void *Character_obj::_hx_vtable = 0;

Dynamic Character_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Character_obj > _hx_result = new Character_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Character_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2ec07d99) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x2ec07d99;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Character_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_3e0631c319a33378_218_update)
HXLINE( 219)		bool _hx_tmp;
HXDLIN( 219)		if (!(this->debugMode)) {
HXLINE( 219)			_hx_tmp = ::hx::IsNotNull( this->animation->_curAnim );
            		}
            		else {
HXLINE( 219)			_hx_tmp = false;
            		}
HXDLIN( 219)		if (_hx_tmp) {
HXLINE( 221)			if ((this->heyTimer > 0)) {
HXLINE( 223)				 ::objects::Character _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 223)				_hx_tmp->heyTimer = (_hx_tmp->heyTimer - (elapsed * ::states::PlayState_obj::instance->playbackRate));
HXLINE( 224)				if ((this->heyTimer <= 0)) {
HXLINE( 226)					bool _hx_tmp;
HXDLIN( 226)					bool _hx_tmp1;
HXDLIN( 226)					if (this->specialAnim) {
HXLINE( 226)						_hx_tmp1 = (this->animation->_curAnim->name == HX_("hey",dc,42,4f,00));
            					}
            					else {
HXLINE( 226)						_hx_tmp1 = false;
            					}
HXDLIN( 226)					if (!(_hx_tmp1)) {
HXLINE( 226)						_hx_tmp = (this->animation->_curAnim->name == HX_("cheer",8d,9a,b6,45));
            					}
            					else {
HXLINE( 226)						_hx_tmp = true;
            					}
HXDLIN( 226)					if (_hx_tmp) {
HXLINE( 228)						this->specialAnim = false;
HXLINE( 229)						this->dance();
            					}
HXLINE( 231)					this->heyTimer = ( (Float)(0) );
            				}
            			}
            			else {
HXLINE( 234)				bool _hx_tmp;
HXDLIN( 234)				if (this->specialAnim) {
HXLINE( 234)					_hx_tmp = this->animation->_curAnim->finished;
            				}
            				else {
HXLINE( 234)					_hx_tmp = false;
            				}
HXDLIN( 234)				if (_hx_tmp) {
HXLINE( 236)					this->specialAnim = false;
HXLINE( 237)					this->dance();
            				}
            				else {
HXLINE( 239)					bool _hx_tmp;
HXDLIN( 239)					if (::StringTools_obj::endsWith(this->animation->_curAnim->name,HX_("miss",fc,52,5c,48))) {
HXLINE( 239)						_hx_tmp = this->animation->_curAnim->finished;
            					}
            					else {
HXLINE( 239)						_hx_tmp = false;
            					}
HXDLIN( 239)					if (_hx_tmp) {
HXLINE( 241)						this->dance();
HXLINE( 242)						this->animation->finish();
            					}
            				}
            			}
HXLINE( 245)			if ((this->curCharacter == HX_("pico-speaker",57,7a,55,5e))) {
HXLINE( 248)				bool _hx_tmp;
HXDLIN( 248)				if ((this->animationNotes->get_length() > 0)) {
HXLINE( 248)					_hx_tmp = ::hx::IsGreater( ::backend::Conductor_obj::songPosition,this->animationNotes->__get(0)->__GetItem(0) );
            				}
            				else {
HXLINE( 248)					_hx_tmp = false;
            				}
HXDLIN( 248)				if (_hx_tmp) {
HXLINE( 250)					int noteData = 1;
HXLINE( 251)					if (::hx::IsGreater( this->animationNotes->__get(0)->__GetItem(1),2 )) {
HXLINE( 251)						noteData = 3;
            					}
HXLINE( 253)					noteData = (noteData + ::flixel::FlxG_obj::random->_hx_int(0,1,null()));
HXLINE( 254)					this->playAnim((HX_("shoot",df,81,27,7c) + noteData),true,null(),null());
HXLINE( 255)					this->animationNotes->shift();
            				}
HXLINE( 257)				if (this->animation->_curAnim->finished) {
HXLINE( 257)					this->playAnim(this->animation->_curAnim->name,false,false,(this->animation->_curAnim->frames->length - 3));
            				}
            			}
HXLINE( 260)			if (::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("sing",4f,96,53,4c))) {
HXLINE( 261)				 ::objects::Character _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp->holdTimer = (_hx_tmp->holdTimer + elapsed);
            			}
            			else {
HXLINE( 262)				if (this->isPlayer) {
HXLINE( 263)					this->holdTimer = ( (Float)(0) );
            				}
            			}
HXLINE( 265)			bool _hx_tmp;
HXDLIN( 265)			if (!(this->isPlayer)) {
HXLINE( 265)				Float _hx_tmp1;
HXDLIN( 265)				if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 265)					_hx_tmp1 = ::flixel::FlxG_obj::sound->music->_pitch;
            				}
            				else {
HXLINE( 265)					_hx_tmp1 = ( (Float)(1) );
            				}
HXDLIN( 265)				_hx_tmp = (this->holdTimer >= ((::backend::Conductor_obj::stepCrochet * (((Float)0.0011) / _hx_tmp1)) * this->singDuration));
            			}
            			else {
HXLINE( 265)				_hx_tmp = false;
            			}
HXDLIN( 265)			if (_hx_tmp) {
HXLINE( 267)				this->dance();
HXLINE( 268)				this->holdTimer = ( (Float)(0) );
            			}
HXLINE( 271)			bool _hx_tmp1;
HXDLIN( 271)			if (this->animation->_curAnim->finished) {
HXLINE( 271)				_hx_tmp1 = ::hx::IsNotNull( this->animation->_animations->get((this->animation->_curAnim->name + HX_("-loop",11,c1,bf,30))) );
            			}
            			else {
HXLINE( 271)				_hx_tmp1 = false;
            			}
HXDLIN( 271)			if (_hx_tmp1) {
HXLINE( 272)				this->playAnim((this->animation->_curAnim->name + HX_("-loop",11,c1,bf,30)),null(),null(),null());
            			}
            		}
HXLINE( 274)		this->super::update(elapsed);
            	}


void Character_obj::dance(){
            	HX_STACKFRAME(&_hx_pos_3e0631c319a33378_284_dance)
HXDLIN( 284)		bool _hx_tmp;
HXDLIN( 284)		bool _hx_tmp1;
HXDLIN( 284)		if (!(this->debugMode)) {
HXDLIN( 284)			_hx_tmp1 = !(this->skipDance);
            		}
            		else {
HXDLIN( 284)			_hx_tmp1 = false;
            		}
HXDLIN( 284)		if (_hx_tmp1) {
HXDLIN( 284)			_hx_tmp = !(this->specialAnim);
            		}
            		else {
HXDLIN( 284)			_hx_tmp = false;
            		}
HXDLIN( 284)		if (_hx_tmp) {
HXLINE( 286)			if (this->danceIdle) {
HXLINE( 288)				this->danced = !(this->danced);
HXLINE( 290)				if (this->danced) {
HXLINE( 291)					this->playAnim((HX_("danceRight",a9,7f,a6,91) + this->idleSuffix),null(),null(),null());
            				}
            				else {
HXLINE( 293)					this->playAnim((HX_("danceLeft",da,cc,f9,df) + this->idleSuffix),null(),null(),null());
            				}
            			}
            			else {
HXLINE( 295)				if (::hx::IsNotNull( this->animation->_animations->get((HX_("idle",14,a7,b3,45) + this->idleSuffix)) )) {
HXLINE( 296)					this->playAnim((HX_("idle",14,a7,b3,45) + this->idleSuffix),null(),null(),null());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Character_obj,dance,(void))

void Character_obj::playAnim(::String AnimName,::hx::Null< bool >  __o_Force,::hx::Null< bool >  __o_Reversed,::hx::Null< int >  __o_Frame){
            		bool Force = __o_Force.Default(false);
            		bool Reversed = __o_Reversed.Default(false);
            		int Frame = __o_Frame.Default(0);
            	HX_STACKFRAME(&_hx_pos_3e0631c319a33378_302_playAnim)
HXLINE( 303)		this->specialAnim = false;
HXLINE( 304)		this->animation->play(AnimName,Force,Reversed,Frame);
HXLINE( 306)		::cpp::VirtualArray daOffset = ( (::cpp::VirtualArray)(this->animOffsets->get(AnimName)) );
HXLINE( 307)		if (this->animOffsets->exists(AnimName)) {
HXLINE( 309)			 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN( 309)			this1->set_x(( (Float)(daOffset->__get(0)) ));
HXDLIN( 309)			this1->set_y(( (Float)(daOffset->__get(1)) ));
            		}
            		else {
HXLINE( 312)			 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN( 312)			this1->set_x(( (Float)(0) ));
HXDLIN( 312)			this1->set_y(( (Float)(0) ));
            		}
HXLINE( 314)		if (::StringTools_obj::startsWith(this->curCharacter,HX_("gf",1f,5a,00,00))) {
HXLINE( 316)			if ((AnimName == HX_("singLEFT",d6,39,ef,3b))) {
HXLINE( 318)				this->danced = true;
            			}
            			else {
HXLINE( 320)				if ((AnimName == HX_("singRIGHT",0d,6f,70,ac))) {
HXLINE( 322)					this->danced = false;
            				}
            			}
HXLINE( 325)			bool _hx_tmp;
HXDLIN( 325)			if ((AnimName != HX_("singUP",6a,52,21,b9))) {
HXLINE( 325)				_hx_tmp = (AnimName == HX_("singDOWN",31,2a,ad,36));
            			}
            			else {
HXLINE( 325)				_hx_tmp = true;
            			}
HXDLIN( 325)			if (_hx_tmp) {
HXLINE( 327)				this->danced = !(this->danced);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Character_obj,playAnim,(void))

void Character_obj::loadMappedAnims(){
            	HX_GC_STACKFRAME(&_hx_pos_3e0631c319a33378_333_loadMappedAnims)
HXLINE( 334)		::String path = ( (::String)(::states::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) );
HXDLIN( 334)		 ::EReg invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXDLIN( 334)		 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXDLIN( 334)		::String path1 = invalidChars->split(::StringTools_obj::replace(path,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXDLIN( 334)		::Array< ::Dynamic> noteData = ( (::Array< ::Dynamic>)(::backend::Song_obj::loadFromJson(HX_("picospeaker",ba,c2,19,7e),hideChars->split(path1)->join(HX_("",00,00,00,00)).toLowerCase())->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic)) );
HXLINE( 335)		{
HXLINE( 335)			int _g = 0;
HXDLIN( 335)			while((_g < noteData->length)){
HXLINE( 335)				 ::Dynamic section = noteData->__get(_g);
HXDLIN( 335)				_g = (_g + 1);
HXLINE( 336)				{
HXLINE( 336)					int _g1 = 0;
HXDLIN( 336)					::cpp::VirtualArray _g2 = ( (::cpp::VirtualArray)(section->__Field(HX_("sectionNotes",1c,c8,a7,fe),::hx::paccDynamic)) );
HXDLIN( 336)					while((_g1 < _g2->get_length())){
HXLINE( 336)						 ::Dynamic songNotes = _g2->__get(_g1);
HXDLIN( 336)						_g1 = (_g1 + 1);
HXLINE( 337)						this->animationNotes->push(songNotes);
            					}
            				}
            			}
            		}
HXLINE( 341)		this->animationNotes->sort(this->sortAnims_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Character_obj,loadMappedAnims,(void))

int Character_obj::sortAnims(::cpp::VirtualArray Obj1,::cpp::VirtualArray Obj2){
            	HX_STACKFRAME(&_hx_pos_3e0631c319a33378_346_sortAnims)
HXDLIN( 346)		Float Value1 = ( (Float)(Obj1->__get(0)) );
HXDLIN( 346)		Float Value2 = ( (Float)(Obj2->__get(0)) );
HXDLIN( 346)		int result = 0;
HXDLIN( 346)		if ((Value1 < Value2)) {
HXDLIN( 346)			result = -1;
            		}
            		else {
HXDLIN( 346)			if ((Value1 > Value2)) {
HXDLIN( 346)				result = 1;
            			}
            		}
HXDLIN( 346)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Character_obj,sortAnims,return )

void Character_obj::recalculateDanceIdle(){
            	HX_STACKFRAME(&_hx_pos_3e0631c319a33378_351_recalculateDanceIdle)
HXLINE( 352)		bool lastDanceIdle = this->danceIdle;
HXLINE( 353)		bool _hx_tmp;
HXDLIN( 353)		if (::hx::IsNotNull( this->animation->_animations->get((HX_("danceLeft",da,cc,f9,df) + this->idleSuffix)) )) {
HXLINE( 353)			_hx_tmp = ::hx::IsNotNull( this->animation->_animations->get((HX_("danceRight",a9,7f,a6,91) + this->idleSuffix)) );
            		}
            		else {
HXLINE( 353)			_hx_tmp = false;
            		}
HXDLIN( 353)		this->danceIdle = _hx_tmp;
HXLINE( 355)		if (this->settingCharacterUp) {
HXLINE( 357)			int _hx_tmp;
HXDLIN( 357)			if (this->danceIdle) {
HXLINE( 357)				_hx_tmp = 1;
            			}
            			else {
HXLINE( 357)				_hx_tmp = 2;
            			}
HXDLIN( 357)			this->danceEveryNumBeats = _hx_tmp;
            		}
            		else {
HXLINE( 359)			if ((lastDanceIdle != this->danceIdle)) {
HXLINE( 361)				Float calc = ( (Float)(this->danceEveryNumBeats) );
HXLINE( 362)				if (this->danceIdle) {
HXLINE( 363)					calc = (calc / ( (Float)(2) ));
            				}
            				else {
HXLINE( 365)					calc = (calc * ( (Float)(2) ));
            				}
HXLINE( 367)				this->danceEveryNumBeats = ::Math_obj::round(::Math_obj::max(calc,( (Float)(1) )));
            			}
            		}
HXLINE( 369)		this->settingCharacterUp = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Character_obj,recalculateDanceIdle,(void))

void Character_obj::addOffset(::String name,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_3e0631c319a33378_374_addOffset)
HXDLIN( 374)		::cpp::VirtualArray v = ::Array_obj< Float >::__new(2)->init(0,x)->init(1,y);
HXDLIN( 374)		this->animOffsets->set(name,v);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Character_obj,addOffset,(void))

void Character_obj::quickAnimAdd(::String name,::String anim){
            	HX_STACKFRAME(&_hx_pos_3e0631c319a33378_379_quickAnimAdd)
HXDLIN( 379)		this->animation->addByPrefix(name,anim,24,false,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Character_obj,quickAnimAdd,(void))

::String Character_obj::DEFAULT_CHARACTER;


::hx::ObjectPtr< Character_obj > Character_obj::__new(Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer) {
	::hx::ObjectPtr< Character_obj > __this = new Character_obj();
	__this->__construct(x,y,__o_character,__o_isPlayer);
	return __this;
}

::hx::ObjectPtr< Character_obj > Character_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer) {
	Character_obj *__this = (Character_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Character_obj), true, "objects.Character"));
	*(void **)__this = Character_obj::_hx_vtable;
	__this->__construct(x,y,__o_character,__o_isPlayer);
	return __this;
}

Character_obj::Character_obj()
{
}

void Character_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Character);
	HX_MARK_MEMBER_NAME(animOffsets,"animOffsets");
	HX_MARK_MEMBER_NAME(debugMode,"debugMode");
	HX_MARK_MEMBER_NAME(isPlayer,"isPlayer");
	HX_MARK_MEMBER_NAME(curCharacter,"curCharacter");
	HX_MARK_MEMBER_NAME(colorTween,"colorTween");
	HX_MARK_MEMBER_NAME(holdTimer,"holdTimer");
	HX_MARK_MEMBER_NAME(heyTimer,"heyTimer");
	HX_MARK_MEMBER_NAME(specialAnim,"specialAnim");
	HX_MARK_MEMBER_NAME(animationNotes,"animationNotes");
	HX_MARK_MEMBER_NAME(stunned,"stunned");
	HX_MARK_MEMBER_NAME(singDuration,"singDuration");
	HX_MARK_MEMBER_NAME(idleSuffix,"idleSuffix");
	HX_MARK_MEMBER_NAME(danceIdle,"danceIdle");
	HX_MARK_MEMBER_NAME(skipDance,"skipDance");
	HX_MARK_MEMBER_NAME(healthIcon,"healthIcon");
	HX_MARK_MEMBER_NAME(animationsArray,"animationsArray");
	HX_MARK_MEMBER_NAME(positionArray,"positionArray");
	HX_MARK_MEMBER_NAME(cameraPosition,"cameraPosition");
	HX_MARK_MEMBER_NAME(hasMissAnimations,"hasMissAnimations");
	HX_MARK_MEMBER_NAME(imageFile,"imageFile");
	HX_MARK_MEMBER_NAME(jsonScale,"jsonScale");
	HX_MARK_MEMBER_NAME(noAntialiasing,"noAntialiasing");
	HX_MARK_MEMBER_NAME(originalFlipX,"originalFlipX");
	HX_MARK_MEMBER_NAME(healthColorArray,"healthColorArray");
	HX_MARK_MEMBER_NAME(danced,"danced");
	HX_MARK_MEMBER_NAME(danceEveryNumBeats,"danceEveryNumBeats");
	HX_MARK_MEMBER_NAME(settingCharacterUp,"settingCharacterUp");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Character_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animOffsets,"animOffsets");
	HX_VISIT_MEMBER_NAME(debugMode,"debugMode");
	HX_VISIT_MEMBER_NAME(isPlayer,"isPlayer");
	HX_VISIT_MEMBER_NAME(curCharacter,"curCharacter");
	HX_VISIT_MEMBER_NAME(colorTween,"colorTween");
	HX_VISIT_MEMBER_NAME(holdTimer,"holdTimer");
	HX_VISIT_MEMBER_NAME(heyTimer,"heyTimer");
	HX_VISIT_MEMBER_NAME(specialAnim,"specialAnim");
	HX_VISIT_MEMBER_NAME(animationNotes,"animationNotes");
	HX_VISIT_MEMBER_NAME(stunned,"stunned");
	HX_VISIT_MEMBER_NAME(singDuration,"singDuration");
	HX_VISIT_MEMBER_NAME(idleSuffix,"idleSuffix");
	HX_VISIT_MEMBER_NAME(danceIdle,"danceIdle");
	HX_VISIT_MEMBER_NAME(skipDance,"skipDance");
	HX_VISIT_MEMBER_NAME(healthIcon,"healthIcon");
	HX_VISIT_MEMBER_NAME(animationsArray,"animationsArray");
	HX_VISIT_MEMBER_NAME(positionArray,"positionArray");
	HX_VISIT_MEMBER_NAME(cameraPosition,"cameraPosition");
	HX_VISIT_MEMBER_NAME(hasMissAnimations,"hasMissAnimations");
	HX_VISIT_MEMBER_NAME(imageFile,"imageFile");
	HX_VISIT_MEMBER_NAME(jsonScale,"jsonScale");
	HX_VISIT_MEMBER_NAME(noAntialiasing,"noAntialiasing");
	HX_VISIT_MEMBER_NAME(originalFlipX,"originalFlipX");
	HX_VISIT_MEMBER_NAME(healthColorArray,"healthColorArray");
	HX_VISIT_MEMBER_NAME(danced,"danced");
	HX_VISIT_MEMBER_NAME(danceEveryNumBeats,"danceEveryNumBeats");
	HX_VISIT_MEMBER_NAME(settingCharacterUp,"settingCharacterUp");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Character_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"dance") ) { return ::hx::Val( dance_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"danced") ) { return ::hx::Val( danced ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"stunned") ) { return ::hx::Val( stunned ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { return ::hx::Val( isPlayer ); }
		if (HX_FIELD_EQ(inName,"heyTimer") ) { return ::hx::Val( heyTimer ); }
		if (HX_FIELD_EQ(inName,"playAnim") ) { return ::hx::Val( playAnim_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugMode") ) { return ::hx::Val( debugMode ); }
		if (HX_FIELD_EQ(inName,"holdTimer") ) { return ::hx::Val( holdTimer ); }
		if (HX_FIELD_EQ(inName,"danceIdle") ) { return ::hx::Val( danceIdle ); }
		if (HX_FIELD_EQ(inName,"skipDance") ) { return ::hx::Val( skipDance ); }
		if (HX_FIELD_EQ(inName,"imageFile") ) { return ::hx::Val( imageFile ); }
		if (HX_FIELD_EQ(inName,"jsonScale") ) { return ::hx::Val( jsonScale ); }
		if (HX_FIELD_EQ(inName,"sortAnims") ) { return ::hx::Val( sortAnims_dyn() ); }
		if (HX_FIELD_EQ(inName,"addOffset") ) { return ::hx::Val( addOffset_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"colorTween") ) { return ::hx::Val( colorTween ); }
		if (HX_FIELD_EQ(inName,"idleSuffix") ) { return ::hx::Val( idleSuffix ); }
		if (HX_FIELD_EQ(inName,"healthIcon") ) { return ::hx::Val( healthIcon ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"animOffsets") ) { return ::hx::Val( animOffsets ); }
		if (HX_FIELD_EQ(inName,"specialAnim") ) { return ::hx::Val( specialAnim ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { return ::hx::Val( curCharacter ); }
		if (HX_FIELD_EQ(inName,"singDuration") ) { return ::hx::Val( singDuration ); }
		if (HX_FIELD_EQ(inName,"quickAnimAdd") ) { return ::hx::Val( quickAnimAdd_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"positionArray") ) { return ::hx::Val( positionArray ); }
		if (HX_FIELD_EQ(inName,"originalFlipX") ) { return ::hx::Val( originalFlipX ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"animationNotes") ) { return ::hx::Val( animationNotes ); }
		if (HX_FIELD_EQ(inName,"cameraPosition") ) { return ::hx::Val( cameraPosition ); }
		if (HX_FIELD_EQ(inName,"noAntialiasing") ) { return ::hx::Val( noAntialiasing ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"animationsArray") ) { return ::hx::Val( animationsArray ); }
		if (HX_FIELD_EQ(inName,"loadMappedAnims") ) { return ::hx::Val( loadMappedAnims_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"healthColorArray") ) { return ::hx::Val( healthColorArray ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hasMissAnimations") ) { return ::hx::Val( hasMissAnimations ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"danceEveryNumBeats") ) { return ::hx::Val( danceEveryNumBeats ); }
		if (HX_FIELD_EQ(inName,"settingCharacterUp") ) { return ::hx::Val( settingCharacterUp ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"recalculateDanceIdle") ) { return ::hx::Val( recalculateDanceIdle_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Character_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"DEFAULT_CHARACTER") ) { outValue = ( DEFAULT_CHARACTER ); return true; }
	}
	return false;
}

::hx::Val Character_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"danced") ) { danced=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"stunned") ) { stunned=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { isPlayer=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"heyTimer") ) { heyTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugMode") ) { debugMode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdTimer") ) { holdTimer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"danceIdle") ) { danceIdle=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skipDance") ) { skipDance=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imageFile") ) { imageFile=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jsonScale") ) { jsonScale=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"colorTween") ) { colorTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		if (HX_FIELD_EQ(inName,"idleSuffix") ) { idleSuffix=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"healthIcon") ) { healthIcon=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"animOffsets") ) { animOffsets=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"specialAnim") ) { specialAnim=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { curCharacter=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"singDuration") ) { singDuration=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"positionArray") ) { positionArray=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originalFlipX") ) { originalFlipX=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"animationNotes") ) { animationNotes=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameraPosition") ) { cameraPosition=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noAntialiasing") ) { noAntialiasing=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"animationsArray") ) { animationsArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"healthColorArray") ) { healthColorArray=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hasMissAnimations") ) { hasMissAnimations=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"danceEveryNumBeats") ) { danceEveryNumBeats=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"settingCharacterUp") ) { settingCharacterUp=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Character_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"DEFAULT_CHARACTER") ) { DEFAULT_CHARACTER=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void Character_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("animOffsets",6f,ff,7a,f8));
	outFields->push(HX_("debugMode",56,77,ac,2b));
	outFields->push(HX_("isPlayer",eb,86,22,90));
	outFields->push(HX_("curCharacter",09,86,7c,d7));
	outFields->push(HX_("colorTween",08,c2,dc,3d));
	outFields->push(HX_("holdTimer",06,82,13,a9));
	outFields->push(HX_("heyTimer",49,0f,08,a9));
	outFields->push(HX_("specialAnim",ea,3c,bc,8d));
	outFields->push(HX_("animationNotes",9d,6e,ee,af));
	outFields->push(HX_("stunned",53,5b,75,b6));
	outFields->push(HX_("singDuration",c3,c8,98,d1));
	outFields->push(HX_("idleSuffix",05,85,52,9f));
	outFields->push(HX_("danceIdle",e7,6b,fd,dd));
	outFields->push(HX_("skipDance",34,f0,7e,e8));
	outFields->push(HX_("healthIcon",35,ba,48,02));
	outFields->push(HX_("animationsArray",2a,66,2f,8e));
	outFields->push(HX_("positionArray",30,38,8e,8f));
	outFields->push(HX_("cameraPosition",6e,50,87,c0));
	outFields->push(HX_("hasMissAnimations",05,dc,20,aa));
	outFields->push(HX_("imageFile",77,63,f0,25));
	outFields->push(HX_("jsonScale",42,2b,ab,18));
	outFields->push(HX_("noAntialiasing",d5,a0,b5,f5));
	outFields->push(HX_("originalFlipX",fa,3a,83,5d));
	outFields->push(HX_("healthColorArray",f2,0c,7e,49));
	outFields->push(HX_("danced",d1,49,8f,1e));
	outFields->push(HX_("danceEveryNumBeats",9f,1d,04,5f));
	outFields->push(HX_("settingCharacterUp",b4,22,b1,99));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Character_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Character_obj,animOffsets),HX_("animOffsets",6f,ff,7a,f8)},
	{::hx::fsBool,(int)offsetof(Character_obj,debugMode),HX_("debugMode",56,77,ac,2b)},
	{::hx::fsBool,(int)offsetof(Character_obj,isPlayer),HX_("isPlayer",eb,86,22,90)},
	{::hx::fsString,(int)offsetof(Character_obj,curCharacter),HX_("curCharacter",09,86,7c,d7)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(Character_obj,colorTween),HX_("colorTween",08,c2,dc,3d)},
	{::hx::fsFloat,(int)offsetof(Character_obj,holdTimer),HX_("holdTimer",06,82,13,a9)},
	{::hx::fsFloat,(int)offsetof(Character_obj,heyTimer),HX_("heyTimer",49,0f,08,a9)},
	{::hx::fsBool,(int)offsetof(Character_obj,specialAnim),HX_("specialAnim",ea,3c,bc,8d)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(Character_obj,animationNotes),HX_("animationNotes",9d,6e,ee,af)},
	{::hx::fsBool,(int)offsetof(Character_obj,stunned),HX_("stunned",53,5b,75,b6)},
	{::hx::fsFloat,(int)offsetof(Character_obj,singDuration),HX_("singDuration",c3,c8,98,d1)},
	{::hx::fsString,(int)offsetof(Character_obj,idleSuffix),HX_("idleSuffix",05,85,52,9f)},
	{::hx::fsBool,(int)offsetof(Character_obj,danceIdle),HX_("danceIdle",e7,6b,fd,dd)},
	{::hx::fsBool,(int)offsetof(Character_obj,skipDance),HX_("skipDance",34,f0,7e,e8)},
	{::hx::fsString,(int)offsetof(Character_obj,healthIcon),HX_("healthIcon",35,ba,48,02)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Character_obj,animationsArray),HX_("animationsArray",2a,66,2f,8e)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Character_obj,positionArray),HX_("positionArray",30,38,8e,8f)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Character_obj,cameraPosition),HX_("cameraPosition",6e,50,87,c0)},
	{::hx::fsBool,(int)offsetof(Character_obj,hasMissAnimations),HX_("hasMissAnimations",05,dc,20,aa)},
	{::hx::fsString,(int)offsetof(Character_obj,imageFile),HX_("imageFile",77,63,f0,25)},
	{::hx::fsFloat,(int)offsetof(Character_obj,jsonScale),HX_("jsonScale",42,2b,ab,18)},
	{::hx::fsBool,(int)offsetof(Character_obj,noAntialiasing),HX_("noAntialiasing",d5,a0,b5,f5)},
	{::hx::fsBool,(int)offsetof(Character_obj,originalFlipX),HX_("originalFlipX",fa,3a,83,5d)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Character_obj,healthColorArray),HX_("healthColorArray",f2,0c,7e,49)},
	{::hx::fsBool,(int)offsetof(Character_obj,danced),HX_("danced",d1,49,8f,1e)},
	{::hx::fsInt,(int)offsetof(Character_obj,danceEveryNumBeats),HX_("danceEveryNumBeats",9f,1d,04,5f)},
	{::hx::fsBool,(int)offsetof(Character_obj,settingCharacterUp),HX_("settingCharacterUp",b4,22,b1,99)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Character_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Character_obj::DEFAULT_CHARACTER,HX_("DEFAULT_CHARACTER",2b,e7,14,33)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Character_obj_sMemberFields[] = {
	HX_("animOffsets",6f,ff,7a,f8),
	HX_("debugMode",56,77,ac,2b),
	HX_("isPlayer",eb,86,22,90),
	HX_("curCharacter",09,86,7c,d7),
	HX_("colorTween",08,c2,dc,3d),
	HX_("holdTimer",06,82,13,a9),
	HX_("heyTimer",49,0f,08,a9),
	HX_("specialAnim",ea,3c,bc,8d),
	HX_("animationNotes",9d,6e,ee,af),
	HX_("stunned",53,5b,75,b6),
	HX_("singDuration",c3,c8,98,d1),
	HX_("idleSuffix",05,85,52,9f),
	HX_("danceIdle",e7,6b,fd,dd),
	HX_("skipDance",34,f0,7e,e8),
	HX_("healthIcon",35,ba,48,02),
	HX_("animationsArray",2a,66,2f,8e),
	HX_("positionArray",30,38,8e,8f),
	HX_("cameraPosition",6e,50,87,c0),
	HX_("hasMissAnimations",05,dc,20,aa),
	HX_("imageFile",77,63,f0,25),
	HX_("jsonScale",42,2b,ab,18),
	HX_("noAntialiasing",d5,a0,b5,f5),
	HX_("originalFlipX",fa,3a,83,5d),
	HX_("healthColorArray",f2,0c,7e,49),
	HX_("update",09,86,05,87),
	HX_("danced",d1,49,8f,1e),
	HX_("dance",33,83,83,d4),
	HX_("playAnim",25,ea,84,30),
	HX_("loadMappedAnims",09,a0,8b,68),
	HX_("sortAnims",04,9d,57,2b),
	HX_("danceEveryNumBeats",9f,1d,04,5f),
	HX_("settingCharacterUp",b4,22,b1,99),
	HX_("recalculateDanceIdle",14,26,91,09),
	HX_("addOffset",94,cc,63,18),
	HX_("quickAnimAdd",23,8d,a8,8c),
	::String(null()) };

static void Character_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Character_obj::DEFAULT_CHARACTER,"DEFAULT_CHARACTER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Character_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Character_obj::DEFAULT_CHARACTER,"DEFAULT_CHARACTER");
};

#endif

::hx::Class Character_obj::__mClass;

static ::String Character_obj_sStaticFields[] = {
	HX_("DEFAULT_CHARACTER",2b,e7,14,33),
	::String(null())
};

void Character_obj::__register()
{
	Character_obj _hx_dummy;
	Character_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.Character",6f,7f,d8,9f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Character_obj::__GetStatic;
	__mClass->mSetStaticField = &Character_obj::__SetStatic;
	__mClass->mMarkFunc = Character_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Character_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Character_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Character_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Character_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Character_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Character_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Character_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3e0631c319a33378_76_boot)
HXDLIN(  76)		DEFAULT_CHARACTER = HX_("bf",c4,55,00,00);
            	}
}

} // end namespace objects
