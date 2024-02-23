#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_objects_Note
#include <objects/Note.h>
#endif
#ifndef INCLUDED_objects_NoteSplash
#include <objects/NoteSplash.h>
#endif
#ifndef INCLUDED_objects_PixelSplashShader
#include <objects/PixelSplashShader.h>
#endif
#ifndef INCLUDED_objects_PixelSplashShaderRef
#include <objects/PixelSplashShaderRef.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a3b2eb9b9f1b347d_14_new,"objects.NoteSplash","new",0x6a418ee5,"objects.NoteSplash.new","objects/NoteSplash.hx",14,0xe471e78a)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b2eb9b9f1b347d_40_destroy,"objects.NoteSplash","destroy",0x3f7611ff,"objects.NoteSplash.destroy","objects/NoteSplash.hx",40,0xe471e78a)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b2eb9b9f1b347d_46_setupNoteSplash,"objects.NoteSplash","setupNoteSplash",0x4c6111db,"objects.NoteSplash.setupNoteSplash","objects/NoteSplash.hx",46,0xe471e78a)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b2eb9b9f1b347d_119_loadAnims,"objects.NoteSplash","loadAnims",0xe0920581,"objects.NoteSplash.loadAnims","objects/NoteSplash.hx",119,0xe471e78a)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b2eb9b9f1b347d_179_addAnimAndCheck,"objects.NoteSplash","addAnimAndCheck",0xeaeefb68,"objects.NoteSplash.addAnimAndCheck","objects/NoteSplash.hx",179,0xe471e78a)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b2eb9b9f1b347d_186_update,"objects.NoteSplash","update",0x3dabe8a4,"objects.NoteSplash.update","objects/NoteSplash.hx",186,0xe471e78a)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b2eb9b9f1b347d_112_getSplashSkinPostfix,"objects.NoteSplash","getSplashSkinPostfix",0x421668b6,"objects.NoteSplash.getSplashSkinPostfix","objects/NoteSplash.hx",112,0xe471e78a)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b2eb9b9f1b347d_153_precacheConfig,"objects.NoteSplash","precacheConfig",0x018914fc,"objects.NoteSplash.precacheConfig","objects/NoteSplash.hx",153,0xe471e78a)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b2eb9b9f1b347d_21_boot,"objects.NoteSplash","boot",0x87347a0d,"objects.NoteSplash.boot","objects/NoteSplash.hx",21,0xe471e78a)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b2eb9b9f1b347d_22_boot,"objects.NoteSplash","boot",0x87347a0d,"objects.NoteSplash.boot","objects/NoteSplash.hx",22,0xe471e78a)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b2eb9b9f1b347d_184_boot,"objects.NoteSplash","boot",0x87347a0d,"objects.NoteSplash.boot","objects/NoteSplash.hx",184,0xe471e78a)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b2eb9b9f1b347d_185_boot,"objects.NoteSplash","boot",0x87347a0d,"objects.NoteSplash.boot","objects/NoteSplash.hx",185,0xe471e78a)
namespace objects{

void NoteSplash_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_a3b2eb9b9f1b347d_14_new)
HXLINE(  45)		this->maxAnims = 2;
HXLINE(  19)		this->_configLoaded = null();
HXLINE(  18)		this->_textureLoaded = null();
HXLINE(  25)		super::__construct(x,y,null());
HXLINE(  27)		::String skin = null();
HXLINE(  28)		bool _hx_tmp;
HXDLIN(  28)		if (::hx::IsNotNull( ::states::PlayState_obj::SONG->__Field(HX_("splashSkin",84,03,e1,a1),::hx::paccDynamic) )) {
HXLINE(  28)			_hx_tmp = (( (::String)(::states::PlayState_obj::SONG->__Field(HX_("splashSkin",84,03,e1,a1),::hx::paccDynamic)) ).length > 0);
            		}
            		else {
HXLINE(  28)			_hx_tmp = false;
            		}
HXDLIN(  28)		if (_hx_tmp) {
HXLINE(  28)			skin = ( (::String)(::states::PlayState_obj::SONG->__Field(HX_("splashSkin",84,03,e1,a1),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  29)			skin = (::objects::NoteSplash_obj::defaultNoteSplash + ::objects::NoteSplash_obj::getSplashSkinPostfix());
            		}
HXLINE(  31)		this->rgbShader =  ::objects::PixelSplashShaderRef_obj::__alloc( HX_CTX );
HXLINE(  32)		this->shader = this->rgbShader->shader;
HXLINE(  33)		::objects::NoteSplash_obj::precacheConfig(skin);
HXLINE(  34)		this->_configLoaded = skin;
HXLINE(  35)		{
HXLINE(  35)			 ::flixel::math::FlxBasePoint this1 = this->scrollFactor;
HXDLIN(  35)			this1->set_x(( (Float)(0) ));
HXDLIN(  35)			this1->set_y(( (Float)(0) ));
            		}
            	}

Dynamic NoteSplash_obj::__CreateEmpty() { return new NoteSplash_obj; }

void *NoteSplash_obj::_hx_vtable = 0;

Dynamic NoteSplash_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NoteSplash_obj > _hx_result = new NoteSplash_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool NoteSplash_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x12f691ed) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x12f691ed;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void NoteSplash_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_a3b2eb9b9f1b347d_40_destroy)
HXLINE(  41)		::objects::NoteSplash_obj::configs->clear();
HXLINE(  42)		this->super::destroy();
            	}


void NoteSplash_obj::setupNoteSplash(Float x,Float y,::hx::Null< int >  __o_direction, ::objects::Note note){
            		int direction = __o_direction.Default(0);
            	HX_STACKFRAME(&_hx_pos_a3b2eb9b9f1b347d_46_setupNoteSplash)
HXLINE(  47)		this->setPosition((x - (::objects::Note_obj::swagWidth * ((Float)0.95))),(y - ::objects::Note_obj::swagWidth));
HXLINE(  48)		::objects::NoteSplash_obj::aliveTime = ( (Float)(0) );
HXLINE(  50)		::String texture = null();
HXLINE(  51)		bool _hx_tmp;
HXDLIN(  51)		if (::hx::IsNotNull( note )) {
HXLINE(  51)			_hx_tmp = ::hx::IsNotNull( note->noteSplashData->__Field(HX_("texture",db,c8,e0,9e),::hx::paccDynamic) );
            		}
            		else {
HXLINE(  51)			_hx_tmp = false;
            		}
HXDLIN(  51)		if (_hx_tmp) {
HXLINE(  51)			texture = ( (::String)(note->noteSplashData->__Field(HX_("texture",db,c8,e0,9e),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  52)			bool _hx_tmp;
HXDLIN(  52)			if (::hx::IsNotNull( ::states::PlayState_obj::SONG->__Field(HX_("splashSkin",84,03,e1,a1),::hx::paccDynamic) )) {
HXLINE(  52)				_hx_tmp = (( (::String)(::states::PlayState_obj::SONG->__Field(HX_("splashSkin",84,03,e1,a1),::hx::paccDynamic)) ).length > 0);
            			}
            			else {
HXLINE(  52)				_hx_tmp = false;
            			}
HXDLIN(  52)			if (_hx_tmp) {
HXLINE(  52)				texture = ( (::String)(::states::PlayState_obj::SONG->__Field(HX_("splashSkin",84,03,e1,a1),::hx::paccDynamic)) );
            			}
            			else {
HXLINE(  53)				texture = (::objects::NoteSplash_obj::defaultNoteSplash + ::objects::NoteSplash_obj::getSplashSkinPostfix());
            			}
            		}
HXLINE(  55)		 ::Dynamic config = null();
HXLINE(  56)		if ((this->_textureLoaded != texture)) {
HXLINE(  57)			config = this->loadAnims(texture,null());
            		}
            		else {
HXLINE(  59)			config = ::objects::NoteSplash_obj::precacheConfig(this->_configLoaded);
            		}
HXLINE(  61)		 ::shaders::RGBPalette tempShader = null();
HXLINE(  62)		bool _hx_tmp1;
HXDLIN(  62)		bool _hx_tmp2;
HXDLIN(  62)		if (::hx::IsNotNull( note )) {
HXLINE(  62)			_hx_tmp2 = ( (bool)(note->noteSplashData->__Field(HX_("useRGBShader",cb,ac,57,46),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  62)			_hx_tmp2 = true;
            		}
HXDLIN(  62)		if (_hx_tmp2) {
HXLINE(  62)			if (::hx::IsNotNull( ::states::PlayState_obj::SONG )) {
HXLINE(  62)				_hx_tmp1 = !(( (bool)(::states::PlayState_obj::SONG->__Field(HX_("disableNoteRGB",33,ad,d1,4a),::hx::paccDynamic)) ));
            			}
            			else {
HXLINE(  62)				_hx_tmp1 = true;
            			}
            		}
            		else {
HXLINE(  62)			_hx_tmp1 = false;
            		}
HXDLIN(  62)		if (_hx_tmp1) {
HXLINE(  65)			bool _hx_tmp;
HXDLIN(  65)			if (::hx::IsNotNull( note )) {
HXLINE(  65)				_hx_tmp = !(( (bool)(note->noteSplashData->__Field(HX_("useGlobalShader",cf,57,4f,53),::hx::paccDynamic)) ));
            			}
            			else {
HXLINE(  65)				_hx_tmp = false;
            			}
HXDLIN(  65)			if (_hx_tmp) {
HXLINE(  68)				if (::hx::IsNotEq( note->noteSplashData->__Field(HX_("r",72,00,00,00),::hx::paccDynamic),-1 )) {
HXLINE(  68)					note->rgbShader->set_r(( (int)(note->noteSplashData->__Field(HX_("r",72,00,00,00),::hx::paccDynamic)) ));
            				}
HXLINE(  69)				if (::hx::IsNotEq( note->noteSplashData->__Field(HX_("g",67,00,00,00),::hx::paccDynamic),-1 )) {
HXLINE(  69)					note->rgbShader->set_g(( (int)(note->noteSplashData->__Field(HX_("g",67,00,00,00),::hx::paccDynamic)) ));
            				}
HXLINE(  70)				if (::hx::IsNotEq( note->noteSplashData->__Field(HX_("b",62,00,00,00),::hx::paccDynamic),-1 )) {
HXLINE(  70)					note->rgbShader->set_b(( (int)(note->noteSplashData->__Field(HX_("b",62,00,00,00),::hx::paccDynamic)) ));
            				}
HXLINE(  71)				tempShader = note->rgbShader->parent;
            			}
            			else {
HXLINE(  73)				tempShader = ::objects::Note_obj::globalRgbShaders->__get(direction).StaticCast<  ::shaders::RGBPalette >();
            			}
            		}
HXLINE(  76)		this->set_alpha(::backend::ClientPrefs_obj::data->splashAlpha);
HXLINE(  77)		if (::hx::IsNotNull( note )) {
HXLINE(  77)			this->set_alpha(( (Float)(note->noteSplashData->__Field(HX_("a",61,00,00,00),::hx::paccDynamic)) ));
            		}
HXLINE(  78)		this->rgbShader->copyValues(tempShader);
HXLINE(  80)		if (::hx::IsNotNull( note )) {
HXLINE(  80)			this->set_antialiasing(( (bool)(note->noteSplashData->__Field(HX_("antialiasing",f4,16,b3,48),::hx::paccDynamic)) ));
            		}
HXLINE(  81)		bool _hx_tmp3;
HXDLIN(  81)		if (!(::states::PlayState_obj::get_isPixelStage())) {
HXLINE(  81)			_hx_tmp3 = !(::backend::ClientPrefs_obj::data->antialiasing);
            		}
            		else {
HXLINE(  81)			_hx_tmp3 = true;
            		}
HXDLIN(  81)		if (_hx_tmp3) {
HXLINE(  81)			this->set_antialiasing(false);
            		}
HXLINE(  83)		this->_textureLoaded = texture;
HXLINE(  84)		{
HXLINE(  84)			 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN(  84)			this1->set_x(( (Float)(10) ));
HXDLIN(  84)			this1->set_y(( (Float)(10) ));
            		}
HXLINE(  86)		int animNum = ::flixel::FlxG_obj::random->_hx_int(1,this->maxAnims,null());
HXLINE(  87)		this->animation->play((((HX_("note",f2,17,0a,49) + direction) + HX_("-",2d,00,00,00)) + animNum),true,null(),null());
HXLINE(  89)		int minFps = 22;
HXLINE(  90)		int maxFps = 26;
HXLINE(  91)		if (::hx::IsNotNull( config )) {
HXLINE(  93)			int animID = (direction + ((animNum - 1) * ::objects::Note_obj::colArray->length));
HXLINE(  95)			::Array< Float > offs = ( (::Array< Float >)( ::Dynamic(config->__Field(HX_("offsets",80,09,65,d7),::hx::paccDynamic))->__GetItem(::flixel::math::FlxMath_obj::wrap(animID,0,(( (::Array< ::Dynamic>)(config->__Field(HX_("offsets",80,09,65,d7),::hx::paccDynamic)) )->length - 1)))) );
HXLINE(  96)			this->offset->set_x((this->offset->x + offs->__get(0)));
HXLINE(  97)			this->offset->set_y((this->offset->y + offs->__get(1)));
HXLINE(  98)			minFps = ( (int)(config->__Field(HX_("minFps",77,35,e4,52),::hx::paccDynamic)) );
HXLINE(  99)			maxFps = ( (int)(config->__Field(HX_("maxFps",a5,b3,4b,be),::hx::paccDynamic)) );
            		}
            		else {
HXLINE( 103)			this->offset->set_x((this->offset->x + -58));
HXLINE( 104)			this->offset->set_y((this->offset->y + -55));
            		}
HXLINE( 107)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE( 108)			 ::flixel::animation::FlxAnimation _hx_tmp = this->animation->_curAnim;
HXDLIN( 108)			_hx_tmp->set_frameRate(( (Float)(::flixel::FlxG_obj::random->_hx_int(minFps,maxFps,null())) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(NoteSplash_obj,setupNoteSplash,(void))

 ::Dynamic NoteSplash_obj::loadAnims(::String skin,::String animName){
            	HX_STACKFRAME(&_hx_pos_a3b2eb9b9f1b347d_119_loadAnims)
HXLINE( 120)		this->maxAnims = 0;
HXLINE( 121)		::String library = null();
HXDLIN( 121)		 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(skin,null(),true);
HXDLIN( 121)		bool xmlExists = false;
HXDLIN( 121)		::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + skin) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 121)		if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 121)			xmlExists = true;
            		}
HXDLIN( 121)		 ::Dynamic _hx_tmp;
HXDLIN( 121)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 121)			_hx_tmp = imageLoaded;
            		}
            		else {
HXLINE( 121)			_hx_tmp = ::backend::Paths_obj::image(skin,library,true);
            		}
HXDLIN( 121)		::String _hx_tmp1;
HXDLIN( 121)		if (xmlExists) {
HXLINE( 121)			_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            		}
            		else {
HXLINE( 121)			_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + skin) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            		}
HXDLIN( 121)		this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 122)		 ::Dynamic config = null();
HXLINE( 123)		if (::hx::IsNull( this->frames )) {
HXLINE( 125)			skin = (::objects::NoteSplash_obj::defaultNoteSplash + ::objects::NoteSplash_obj::getSplashSkinPostfix());
HXLINE( 126)			::String library = null();
HXDLIN( 126)			 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(skin,null(),true);
HXDLIN( 126)			bool xmlExists = false;
HXDLIN( 126)			::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + skin) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 126)			if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 126)				xmlExists = true;
            			}
HXDLIN( 126)			 ::Dynamic _hx_tmp;
HXDLIN( 126)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 126)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE( 126)				_hx_tmp = ::backend::Paths_obj::image(skin,library,true);
            			}
HXDLIN( 126)			::String _hx_tmp1;
HXDLIN( 126)			if (xmlExists) {
HXLINE( 126)				_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            			}
            			else {
HXLINE( 126)				_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + skin) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            			}
HXDLIN( 126)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 127)			if (::hx::IsNull( this->frames )) {
HXLINE( 129)				skin = ::objects::NoteSplash_obj::defaultNoteSplash;
HXLINE( 130)				::String library = null();
HXDLIN( 130)				 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(skin,null(),true);
HXDLIN( 130)				bool xmlExists = false;
HXDLIN( 130)				::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + skin) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 130)				if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 130)					xmlExists = true;
            				}
HXDLIN( 130)				 ::Dynamic _hx_tmp;
HXDLIN( 130)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 130)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE( 130)					_hx_tmp = ::backend::Paths_obj::image(skin,library,true);
            				}
HXDLIN( 130)				::String _hx_tmp1;
HXDLIN( 130)				if (xmlExists) {
HXLINE( 130)					_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            				}
            				else {
HXLINE( 130)					_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + skin) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            				}
HXDLIN( 130)				this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
            			}
            		}
HXLINE( 133)		config = ::objects::NoteSplash_obj::precacheConfig(skin);
HXLINE( 134)		this->_configLoaded = skin;
HXLINE( 136)		if (::hx::IsNull( animName )) {
HXLINE( 137)			if (::hx::IsNotNull( config )) {
HXLINE( 137)				animName = ( (::String)(config->__Field(HX_("anim",11,86,71,40),::hx::paccDynamic)) );
            			}
            			else {
HXLINE( 137)				animName = HX_("note splash",d5,03,6e,d8);
            			}
            		}
HXLINE( 139)		while(true){
HXLINE( 140)			int animID = (this->maxAnims + 1);
HXLINE( 141)			{
HXLINE( 141)				int _g = 0;
HXDLIN( 141)				int _g1 = ::objects::Note_obj::colArray->length;
HXDLIN( 141)				while((_g < _g1)){
HXLINE( 141)					_g = (_g + 1);
HXDLIN( 141)					int i = (_g - 1);
HXLINE( 142)					if (!(this->addAnimAndCheck((((HX_("note",f2,17,0a,49) + i) + HX_("-",2d,00,00,00)) + animID),(((((HX_("",00,00,00,00) + animName) + HX_(" ",20,00,00,00)) + ::objects::Note_obj::colArray->__get(i)) + HX_(" ",20,00,00,00)) + animID),24,false))) {
HXLINE( 144)						return config;
            					}
            				}
            			}
HXLINE( 147)			this->maxAnims++;
            		}
HXLINE( 139)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(NoteSplash_obj,loadAnims,return )

bool NoteSplash_obj::addAnimAndCheck(::String name,::String anim, ::Dynamic __o_framerate, ::Dynamic __o_loop){
            		 ::Dynamic framerate = __o_framerate;
            		if (::hx::IsNull(__o_framerate)) framerate = 24;
            		 ::Dynamic loop = __o_loop;
            		if (::hx::IsNull(__o_loop)) loop = false;
            	HX_STACKFRAME(&_hx_pos_a3b2eb9b9f1b347d_179_addAnimAndCheck)
HXLINE( 180)		this->animation->addByPrefix(name,anim,framerate,loop,null(),null());
HXLINE( 181)		return ::hx::IsNotNull( this->animation->_animations->get(name) );
            	}


HX_DEFINE_DYNAMIC_FUNC4(NoteSplash_obj,addAnimAndCheck,return )

void NoteSplash_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_a3b2eb9b9f1b347d_186_update)
HXLINE( 187)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::objects::NoteSplash >();
HXDLIN( 187)		::objects::NoteSplash_obj::aliveTime = (::objects::NoteSplash_obj::aliveTime + elapsed);
HXLINE( 188)		bool _hx_tmp1;
HXDLIN( 188)		bool _hx_tmp2;
HXDLIN( 188)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE( 188)			_hx_tmp2 = this->animation->_curAnim->finished;
            		}
            		else {
HXLINE( 188)			_hx_tmp2 = false;
            		}
HXDLIN( 188)		if (!(_hx_tmp2)) {
HXLINE( 189)			if (::hx::IsNull( this->animation->_curAnim )) {
HXLINE( 188)				_hx_tmp1 = (::objects::NoteSplash_obj::aliveTime >= ::objects::NoteSplash_obj::buggedKillTime);
            			}
            			else {
HXLINE( 188)				_hx_tmp1 = false;
            			}
            		}
            		else {
HXLINE( 188)			_hx_tmp1 = true;
            		}
HXDLIN( 188)		if (_hx_tmp1) {
HXLINE( 189)			this->kill();
            		}
HXLINE( 191)		this->super::update(elapsed);
            	}


::String NoteSplash_obj::defaultNoteSplash;

 ::haxe::ds::StringMap NoteSplash_obj::configs;

::String NoteSplash_obj::getSplashSkinPostfix(){
            	HX_STACKFRAME(&_hx_pos_a3b2eb9b9f1b347d_112_getSplashSkinPostfix)
HXLINE( 113)		::String skin = HX_("",00,00,00,00);
HXLINE( 114)		if ((::backend::ClientPrefs_obj::data->splashSkin != ::backend::ClientPrefs_obj::defaultData->splashSkin)) {
HXLINE( 115)			skin = (HX_("-",2d,00,00,00) + ::StringTools_obj::replace(::StringTools_obj::trim(::backend::ClientPrefs_obj::data->splashSkin).toLowerCase(),HX_(" ",20,00,00,00),HX_("_",5f,00,00,00)));
            		}
HXLINE( 116)		return skin;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NoteSplash_obj,getSplashSkinPostfix,return )

 ::Dynamic NoteSplash_obj::precacheConfig(::String skin){
            	HX_STACKFRAME(&_hx_pos_a3b2eb9b9f1b347d_153_precacheConfig)
HXLINE( 154)		if (::objects::NoteSplash_obj::configs->exists(skin)) {
HXLINE( 154)			return ::objects::NoteSplash_obj::configs->get(skin);
            		}
HXLINE( 156)		::String path = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + skin) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),null(),true);
HXLINE( 157)		::String path1 = path;
HXDLIN( 157)		::String daList = null();
HXDLIN( 157)		::Array< ::String > formatted = path1.split(HX_(":",3a,00,00,00));
HXDLIN( 157)		path1 = formatted->__get((formatted->length - 1));
HXDLIN( 157)		if (::sys::FileSystem_obj::exists(path1)) {
HXLINE( 157)			daList = ::sys::io::File_obj::getContent(path1);
            		}
HXDLIN( 157)		::Array< ::String > configFile;
HXDLIN( 157)		if (::hx::IsNotNull( daList )) {
HXLINE( 157)			::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXDLIN( 157)			daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXDLIN( 157)			{
HXLINE( 157)				int _g = 0;
HXDLIN( 157)				int _g1 = daList1->length;
HXDLIN( 157)				while((_g < _g1)){
HXLINE( 157)					_g = (_g + 1);
HXDLIN( 157)					int i = (_g - 1);
HXDLIN( 157)					daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            				}
            			}
HXDLIN( 157)			configFile = daList1;
            		}
            		else {
HXLINE( 157)			configFile = ::Array_obj< ::String >::__new(0);
            		}
HXLINE( 158)		if ((configFile->length < 1)) {
HXLINE( 158)			return null();
            		}
HXLINE( 160)		::Array< ::String > framerates = configFile->__get(1).split(HX_(" ",20,00,00,00));
HXLINE( 161)		::Array< ::Dynamic> offs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 162)		{
HXLINE( 162)			int _g = 2;
HXDLIN( 162)			int _g1 = configFile->length;
HXDLIN( 162)			while((_g < _g1)){
HXLINE( 162)				_g = (_g + 1);
HXDLIN( 162)				int i = (_g - 1);
HXLINE( 164)				::Array< ::String > animOffs = configFile->__get(i).split(HX_(" ",20,00,00,00));
HXLINE( 165)				Float _hx_tmp = ::Std_obj::parseFloat(animOffs->__get(0));
HXDLIN( 165)				offs->push(::Array_obj< Float >::__new(2)->init(0,_hx_tmp)->init(1,::Std_obj::parseFloat(animOffs->__get(1))));
            			}
            		}
HXLINE( 169)		::String configFile1 = configFile->__get(0);
HXLINE( 170)		 ::Dynamic config = ::Std_obj::parseInt(framerates->__get(0));
HXLINE( 168)		 ::Dynamic config1 =  ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("maxFps",a5,b3,4b,be),::Std_obj::parseInt(framerates->__get(1)))
            			->setFixed(1,HX_("offsets",80,09,65,d7),offs)
            			->setFixed(2,HX_("anim",11,86,71,40),configFile1)
            			->setFixed(3,HX_("minFps",77,35,e4,52),config));
HXLINE( 174)		::objects::NoteSplash_obj::configs->set(skin,config1);
HXLINE( 175)		return config1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NoteSplash_obj,precacheConfig,return )

Float NoteSplash_obj::aliveTime;

Float NoteSplash_obj::buggedKillTime;


::hx::ObjectPtr< NoteSplash_obj > NoteSplash_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	::hx::ObjectPtr< NoteSplash_obj > __this = new NoteSplash_obj();
	__this->__construct(__o_x,__o_y);
	return __this;
}

::hx::ObjectPtr< NoteSplash_obj > NoteSplash_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	NoteSplash_obj *__this = (NoteSplash_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NoteSplash_obj), true, "objects.NoteSplash"));
	*(void **)__this = NoteSplash_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y);
	return __this;
}

NoteSplash_obj::NoteSplash_obj()
{
}

void NoteSplash_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NoteSplash);
	HX_MARK_MEMBER_NAME(rgbShader,"rgbShader");
	HX_MARK_MEMBER_NAME(idleAnim,"idleAnim");
	HX_MARK_MEMBER_NAME(_textureLoaded,"_textureLoaded");
	HX_MARK_MEMBER_NAME(_configLoaded,"_configLoaded");
	HX_MARK_MEMBER_NAME(maxAnims,"maxAnims");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NoteSplash_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rgbShader,"rgbShader");
	HX_VISIT_MEMBER_NAME(idleAnim,"idleAnim");
	HX_VISIT_MEMBER_NAME(_textureLoaded,"_textureLoaded");
	HX_VISIT_MEMBER_NAME(_configLoaded,"_configLoaded");
	HX_VISIT_MEMBER_NAME(maxAnims,"maxAnims");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val NoteSplash_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"idleAnim") ) { return ::hx::Val( idleAnim ); }
		if (HX_FIELD_EQ(inName,"maxAnims") ) { return ::hx::Val( maxAnims ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rgbShader") ) { return ::hx::Val( rgbShader ); }
		if (HX_FIELD_EQ(inName,"loadAnims") ) { return ::hx::Val( loadAnims_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_configLoaded") ) { return ::hx::Val( _configLoaded ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_textureLoaded") ) { return ::hx::Val( _textureLoaded ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setupNoteSplash") ) { return ::hx::Val( setupNoteSplash_dyn() ); }
		if (HX_FIELD_EQ(inName,"addAnimAndCheck") ) { return ::hx::Val( addAnimAndCheck_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool NoteSplash_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"configs") ) { outValue = ( configs ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"aliveTime") ) { outValue = ( aliveTime ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"precacheConfig") ) { outValue = precacheConfig_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"buggedKillTime") ) { outValue = ( buggedKillTime ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultNoteSplash") ) { outValue = ( defaultNoteSplash ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getSplashSkinPostfix") ) { outValue = getSplashSkinPostfix_dyn(); return true; }
	}
	return false;
}

::hx::Val NoteSplash_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"idleAnim") ) { idleAnim=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxAnims") ) { maxAnims=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rgbShader") ) { rgbShader=inValue.Cast<  ::objects::PixelSplashShaderRef >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_configLoaded") ) { _configLoaded=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_textureLoaded") ) { _textureLoaded=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NoteSplash_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"configs") ) { configs=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"aliveTime") ) { aliveTime=ioValue.Cast< Float >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"buggedKillTime") ) { buggedKillTime=ioValue.Cast< Float >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultNoteSplash") ) { defaultNoteSplash=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void NoteSplash_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("rgbShader",12,56,b9,2f));
	outFields->push(HX_("idleAnim",45,73,61,35));
	outFields->push(HX_("_textureLoaded",81,0b,d9,29));
	outFields->push(HX_("_configLoaded",46,23,ed,99));
	outFields->push(HX_("maxAnims",fe,1b,01,cd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NoteSplash_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::objects::PixelSplashShaderRef */ ,(int)offsetof(NoteSplash_obj,rgbShader),HX_("rgbShader",12,56,b9,2f)},
	{::hx::fsString,(int)offsetof(NoteSplash_obj,idleAnim),HX_("idleAnim",45,73,61,35)},
	{::hx::fsString,(int)offsetof(NoteSplash_obj,_textureLoaded),HX_("_textureLoaded",81,0b,d9,29)},
	{::hx::fsString,(int)offsetof(NoteSplash_obj,_configLoaded),HX_("_configLoaded",46,23,ed,99)},
	{::hx::fsInt,(int)offsetof(NoteSplash_obj,maxAnims),HX_("maxAnims",fe,1b,01,cd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo NoteSplash_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &NoteSplash_obj::defaultNoteSplash,HX_("defaultNoteSplash",1a,47,0e,34)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &NoteSplash_obj::configs,HX_("configs",71,93,39,10)},
	{::hx::fsFloat,(void *) &NoteSplash_obj::aliveTime,HX_("aliveTime",7a,c6,79,aa)},
	{::hx::fsFloat,(void *) &NoteSplash_obj::buggedKillTime,HX_("buggedKillTime",bd,92,40,5e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String NoteSplash_obj_sMemberFields[] = {
	HX_("rgbShader",12,56,b9,2f),
	HX_("idleAnim",45,73,61,35),
	HX_("_textureLoaded",81,0b,d9,29),
	HX_("_configLoaded",46,23,ed,99),
	HX_("destroy",fa,2c,86,24),
	HX_("maxAnims",fe,1b,01,cd),
	HX_("setupNoteSplash",d6,1f,cd,18),
	HX_("loadAnims",3c,15,1b,3e),
	HX_("addAnimAndCheck",63,09,5b,b7),
	HX_("update",09,86,05,87),
	::String(null()) };

static void NoteSplash_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NoteSplash_obj::defaultNoteSplash,"defaultNoteSplash");
	HX_MARK_MEMBER_NAME(NoteSplash_obj::configs,"configs");
	HX_MARK_MEMBER_NAME(NoteSplash_obj::aliveTime,"aliveTime");
	HX_MARK_MEMBER_NAME(NoteSplash_obj::buggedKillTime,"buggedKillTime");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NoteSplash_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NoteSplash_obj::defaultNoteSplash,"defaultNoteSplash");
	HX_VISIT_MEMBER_NAME(NoteSplash_obj::configs,"configs");
	HX_VISIT_MEMBER_NAME(NoteSplash_obj::aliveTime,"aliveTime");
	HX_VISIT_MEMBER_NAME(NoteSplash_obj::buggedKillTime,"buggedKillTime");
};

#endif

::hx::Class NoteSplash_obj::__mClass;

static ::String NoteSplash_obj_sStaticFields[] = {
	HX_("defaultNoteSplash",1a,47,0e,34),
	HX_("configs",71,93,39,10),
	HX_("getSplashSkinPostfix",db,cc,6e,ed),
	HX_("precacheConfig",61,1f,86,12),
	HX_("aliveTime",7a,c6,79,aa),
	HX_("buggedKillTime",bd,92,40,5e),
	::String(null())
};

void NoteSplash_obj::__register()
{
	NoteSplash_obj _hx_dummy;
	NoteSplash_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.NoteSplash",73,38,75,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NoteSplash_obj::__GetStatic;
	__mClass->mSetStaticField = &NoteSplash_obj::__SetStatic;
	__mClass->mMarkFunc = NoteSplash_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NoteSplash_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NoteSplash_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NoteSplash_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NoteSplash_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NoteSplash_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NoteSplash_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NoteSplash_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a3b2eb9b9f1b347d_21_boot)
HXDLIN(  21)		defaultNoteSplash = HX_("noteSplashes/noteSplashes",4f,0e,1e,ef);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_a3b2eb9b9f1b347d_22_boot)
HXDLIN(  22)		configs =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_a3b2eb9b9f1b347d_184_boot)
HXDLIN( 184)		aliveTime = ((Float)0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a3b2eb9b9f1b347d_185_boot)
HXDLIN( 185)		buggedKillTime = ((Float)0.5);
            	}
}

} // end namespace objects
