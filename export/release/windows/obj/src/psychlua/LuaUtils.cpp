#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_MusicBeatSubstate
#include <backend/MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_psychlua_LuaUtils
#include <psychlua/LuaUtils.h>
#endif
#ifndef INCLUDED_psychlua_ModchartSprite
#include <psychlua/ModchartSprite.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_substates_GameOverSubstate
#include <substates/GameOverSubstate.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9a11087af2501d00_26_getLuaTween,"psychlua.LuaUtils","getLuaTween",0xfcb23685,"psychlua.LuaUtils.getLuaTween","psychlua/LuaUtils.hx",26,0x035b91f3)
HX_LOCAL_STACK_FRAME(_hx_pos_9a11087af2501d00_38_setVarInArray,"psychlua.LuaUtils","setVarInArray",0x3b887acb,"psychlua.LuaUtils.setVarInArray","psychlua/LuaUtils.hx",38,0x035b91f3)
HX_LOCAL_STACK_FRAME(_hx_pos_9a11087af2501d00_78_getVarInArray,"psychlua.LuaUtils","getVarInArray",0xf68298bf,"psychlua.LuaUtils.getVarInArray","psychlua/LuaUtils.hx",78,0x035b91f3)
HX_LOCAL_STACK_FRAME(_hx_pos_9a11087af2501d00_116_isMap,"psychlua.LuaUtils","isMap",0xbb6b8e0e,"psychlua.LuaUtils.isMap","psychlua/LuaUtils.hx",116,0x035b91f3)
HX_LOCAL_STACK_FRAME(_hx_pos_9a11087af2501d00_129_setGroupStuff,"psychlua.LuaUtils","setGroupStuff",0x9e8e62b3,"psychlua.LuaUtils.setGroupStuff","psychlua/LuaUtils.hx",129,0x035b91f3)
HX_LOCAL_STACK_FRAME(_hx_pos_9a11087af2501d00_143_getGroupStuff,"psychlua.LuaUtils","getGroupStuff",0x598880a7,"psychlua.LuaUtils.getGroupStuff","psychlua/LuaUtils.hx",143,0x035b91f3)
HX_LOCAL_STACK_FRAME(_hx_pos_9a11087af2501d00_159_getPropertyLoop,"psychlua.LuaUtils","getPropertyLoop",0x2e8b7b4b,"psychlua.LuaUtils.getPropertyLoop","psychlua/LuaUtils.hx",159,0x035b91f3)
HX_LOCAL_STACK_FRAME(_hx_pos_9a11087af2501d00_170_getObjectDirectly,"psychlua.LuaUtils","getObjectDirectly",0xcdfc0a47,"psychlua.LuaUtils.getObjectDirectly","psychlua/LuaUtils.hx",170,0x035b91f3)
HX_LOCAL_STACK_FRAME(_hx_pos_9a11087af2501d00_184_getTextObject,"psychlua.LuaUtils","getTextObject",0xaad250be,"psychlua.LuaUtils.getTextObject","psychlua/LuaUtils.hx",184,0x035b91f3)
HX_LOCAL_STACK_FRAME(_hx_pos_9a11087af2501d00_188_isOfTypes,"psychlua.LuaUtils","isOfTypes",0xc6f25054,"psychlua.LuaUtils.isOfTypes","psychlua/LuaUtils.hx",188,0x035b91f3)
HX_LOCAL_STACK_FRAME(_hx_pos_9a11087af2501d00_198_getTargetInstance,"psychlua.LuaUtils","getTargetInstance",0xdbd9fa78,"psychlua.LuaUtils.getTargetInstance","psychlua/LuaUtils.hx",198,0x035b91f3)
HX_LOCAL_STACK_FRAME(_hx_pos_9a11087af2501d00_202_getLowestCharacterGroup,"psychlua.LuaUtils","getLowestCharacterGroup",0x30e7469a,"psychlua.LuaUtils.getLowestCharacterGroup","psychlua/LuaUtils.hx",202,0x035b91f3)
HX_LOCAL_STACK_FRAME(_hx_pos_9a11087af2501d00_223_addAnimByIndices,"psychlua.LuaUtils","addAnimByIndices",0xe228f722,"psychlua.LuaUtils.addAnimByIndices","psychlua/LuaUtils.hx",223,0x035b91f3)
HX_LOCAL_STACK_FRAME(_hx_pos_9a11087af2501d00_251_loadFrames,"psychlua.LuaUtils","loadFrames",0x49dd8bb0,"psychlua.LuaUtils.loadFrames","psychlua/LuaUtils.hx",251,0x035b91f3)
HX_LOCAL_STACK_FRAME(_hx_pos_9a11087af2501d00_267_resetTextTag,"psychlua.LuaUtils","resetTextTag",0xdf4b7be2,"psychlua.LuaUtils.resetTextTag","psychlua/LuaUtils.hx",267,0x035b91f3)
HX_LOCAL_STACK_FRAME(_hx_pos_9a11087af2501d00_281_resetSpriteTag,"psychlua.LuaUtils","resetSpriteTag",0x9840caca,"psychlua.LuaUtils.resetSpriteTag","psychlua/LuaUtils.hx",281,0x035b91f3)
HX_LOCAL_STACK_FRAME(_hx_pos_9a11087af2501d00_297_cancelTween,"psychlua.LuaUtils","cancelTween",0xf68400cd,"psychlua.LuaUtils.cancelTween","psychlua/LuaUtils.hx",297,0x035b91f3)
HX_LOCAL_STACK_FRAME(_hx_pos_9a11087af2501d00_305_tweenPrepare,"psychlua.LuaUtils","tweenPrepare",0x304288a0,"psychlua.LuaUtils.tweenPrepare","psychlua/LuaUtils.hx",305,0x035b91f3)
HX_LOCAL_STACK_FRAME(_hx_pos_9a11087af2501d00_315_cancelTimer,"psychlua.LuaUtils","cancelTimer",0xed491627,"psychlua.LuaUtils.cancelTimer","psychlua/LuaUtils.hx",315,0x035b91f3)
HX_LOCAL_STACK_FRAME(_hx_pos_9a11087af2501d00_325_getTweenTypeByString,"psychlua.LuaUtils","getTweenTypeByString",0x069b72bb,"psychlua.LuaUtils.getTweenTypeByString","psychlua/LuaUtils.hx",325,0x035b91f3)
HX_LOCAL_STACK_FRAME(_hx_pos_9a11087af2501d00_336_getTweenEaseByString,"psychlua.LuaUtils","getTweenEaseByString",0x58695fef,"psychlua.LuaUtils.getTweenEaseByString","psychlua/LuaUtils.hx",336,0x035b91f3)
HX_LOCAL_STACK_FRAME(_hx_pos_9a11087af2501d00_378_blendModeFromString,"psychlua.LuaUtils","blendModeFromString",0xdbbad18b,"psychlua.LuaUtils.blendModeFromString","psychlua/LuaUtils.hx",378,0x035b91f3)
HX_LOCAL_STACK_FRAME(_hx_pos_9a11087af2501d00_398_typeToString,"psychlua.LuaUtils","typeToString",0xee774fca,"psychlua.LuaUtils.typeToString","psychlua/LuaUtils.hx",398,0x035b91f3)
HX_LOCAL_STACK_FRAME(_hx_pos_9a11087af2501d00_412_cameraFromString,"psychlua.LuaUtils","cameraFromString",0xa8801124,"psychlua.LuaUtils.cameraFromString","psychlua/LuaUtils.hx",412,0x035b91f3)
namespace psychlua{

void LuaUtils_obj::__construct() { }

Dynamic LuaUtils_obj::__CreateEmpty() { return new LuaUtils_obj; }

void *LuaUtils_obj::_hx_vtable = 0;

Dynamic LuaUtils_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LuaUtils_obj > _hx_result = new LuaUtils_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LuaUtils_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x23f0befa;
}

 ::Dynamic LuaUtils_obj::getLuaTween( ::Dynamic options){
            	HX_STACKFRAME(&_hx_pos_9a11087af2501d00_26_getLuaTween)
HXLINE(  27)		int _hx_tmp = ::psychlua::LuaUtils_obj::getTweenTypeByString(( (::String)(options->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)) ));
HXLINE(  28)		 ::Dynamic options1 =  ::Dynamic(options->__Field(HX_("startDelay",c1,af,3d,f3),::hx::paccDynamic));
HXLINE(  29)		 ::Dynamic options2 =  ::Dynamic(options->__Field(HX_("onUpdate",88,7c,b2,66),::hx::paccDynamic));
HXLINE(  30)		 ::Dynamic options3 =  ::Dynamic(options->__Field(HX_("onStart",c3,12,49,1a),::hx::paccDynamic));
HXLINE(  31)		 ::Dynamic options4 =  ::Dynamic(options->__Field(HX_("onComplete",f8,d4,7e,5d),::hx::paccDynamic));
HXLINE(  32)		 ::Dynamic options5 =  ::Dynamic(options->__Field(HX_("loopDelay",7f,f6,d2,04),::hx::paccDynamic));
HXLINE(  26)		return  ::Dynamic(::hx::Anon_obj::Create(7)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),options1)
            			->setFixed(1,HX_("loopDelay",7f,f6,d2,04),options5)
            			->setFixed(2,HX_("onStart",c3,12,49,1a),options3)
            			->setFixed(3,HX_("ease",ee,8b,0c,43),::psychlua::LuaUtils_obj::getTweenEaseByString(( (::String)(options->__Field(HX_("ease",ee,8b,0c,43),::hx::paccDynamic)) )))
            			->setFixed(4,HX_("type",ba,f2,08,4d),_hx_tmp)
            			->setFixed(5,HX_("onComplete",f8,d4,7e,5d),options4)
            			->setFixed(6,HX_("onUpdate",88,7c,b2,66),options2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LuaUtils_obj,getLuaTween,return )

 ::Dynamic LuaUtils_obj::setVarInArray( ::Dynamic instance,::String variable, ::Dynamic value,::hx::Null< bool >  __o_allowMaps){
            		bool allowMaps = __o_allowMaps.Default(false);
            	HX_STACKFRAME(&_hx_pos_9a11087af2501d00_38_setVarInArray)
HXLINE(  39)		::Array< ::String > splitProps = variable.split(HX_("[",5b,00,00,00));
HXLINE(  40)		if ((splitProps->length > 1)) {
HXLINE(  42)			 ::Dynamic target = null();
HXLINE(  43)			if (::states::PlayState_obj::instance->variables->exists(splitProps->__get(0))) {
HXLINE(  45)				 ::Dynamic retVal = ::states::PlayState_obj::instance->variables->get(splitProps->__get(0));
HXLINE(  46)				if (::hx::IsNotNull( retVal )) {
HXLINE(  47)					target = retVal;
            				}
            			}
            			else {
HXLINE(  49)				target = ::Reflect_obj::getProperty(instance,splitProps->__get(0));
            			}
HXLINE(  51)			{
HXLINE(  51)				int _g = 1;
HXDLIN(  51)				int _g1 = splitProps->length;
HXDLIN(  51)				while((_g < _g1)){
HXLINE(  51)					_g = (_g + 1);
HXDLIN(  51)					int i = (_g - 1);
HXLINE(  53)					 ::Dynamic j = splitProps->__get(i).substr(0,(splitProps->__get(i).length - 1));
HXLINE(  54)					if ((i >= (splitProps->length - 1))) {
HXLINE(  55)						target->__SetItem(( (int)(j) ),value);
            					}
            					else {
HXLINE(  57)						target = target->__GetItem(( (int)(j) ));
            					}
            				}
            			}
HXLINE(  59)			return target;
            		}
HXLINE(  62)		bool _hx_tmp;
HXDLIN(  62)		if (allowMaps) {
HXLINE(  62)			_hx_tmp = ::psychlua::LuaUtils_obj::isMap(instance);
            		}
            		else {
HXLINE(  62)			_hx_tmp = false;
            		}
HXDLIN(  62)		if (_hx_tmp) {
HXLINE(  65)			instance->__Field(HX_("set",a2,9b,57,00),::hx::paccDynamic)(variable,value);
HXLINE(  66)			return value;
            		}
HXLINE(  69)		if (::states::PlayState_obj::instance->variables->exists(variable)) {
HXLINE(  71)			::states::PlayState_obj::instance->variables->set(variable,value);
HXLINE(  72)			return value;
            		}
HXLINE(  74)		::Reflect_obj::setProperty(instance,variable,value);
HXLINE(  75)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(LuaUtils_obj,setVarInArray,return )

 ::Dynamic LuaUtils_obj::getVarInArray( ::Dynamic instance,::String variable,::hx::Null< bool >  __o_allowMaps){
            		bool allowMaps = __o_allowMaps.Default(false);
            	HX_STACKFRAME(&_hx_pos_9a11087af2501d00_78_getVarInArray)
HXLINE(  79)		::Array< ::String > splitProps = variable.split(HX_("[",5b,00,00,00));
HXLINE(  80)		if ((splitProps->length > 1)) {
HXLINE(  82)			 ::Dynamic target = null();
HXLINE(  83)			if (::states::PlayState_obj::instance->variables->exists(splitProps->__get(0))) {
HXLINE(  85)				 ::Dynamic retVal = ::states::PlayState_obj::instance->variables->get(splitProps->__get(0));
HXLINE(  86)				if (::hx::IsNotNull( retVal )) {
HXLINE(  87)					target = retVal;
            				}
            			}
            			else {
HXLINE(  90)				target = ::Reflect_obj::getProperty(instance,splitProps->__get(0));
            			}
HXLINE(  92)			{
HXLINE(  92)				int _g = 1;
HXDLIN(  92)				int _g1 = splitProps->length;
HXDLIN(  92)				while((_g < _g1)){
HXLINE(  92)					_g = (_g + 1);
HXDLIN(  92)					int i = (_g - 1);
HXLINE(  94)					 ::Dynamic j = splitProps->__get(i).substr(0,(splitProps->__get(i).length - 1));
HXLINE(  95)					target = target->__GetItem(( (int)(j) ));
            				}
            			}
HXLINE(  97)			return target;
            		}
HXLINE( 100)		bool _hx_tmp;
HXDLIN( 100)		if (allowMaps) {
HXLINE( 100)			_hx_tmp = ::psychlua::LuaUtils_obj::isMap(instance);
            		}
            		else {
HXLINE( 100)			_hx_tmp = false;
            		}
HXDLIN( 100)		if (_hx_tmp) {
HXLINE( 103)			return instance->__Field(HX_("get",96,80,4e,00),::hx::paccDynamic)(variable);
            		}
HXLINE( 106)		if (::states::PlayState_obj::instance->variables->exists(variable)) {
HXLINE( 108)			 ::Dynamic retVal = ::states::PlayState_obj::instance->variables->get(variable);
HXLINE( 109)			if (::hx::IsNotNull( retVal )) {
HXLINE( 110)				return retVal;
            			}
            		}
HXLINE( 112)		return ::Reflect_obj::getProperty(instance,variable);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(LuaUtils_obj,getVarInArray,return )

bool LuaUtils_obj::isMap( ::Dynamic variable){
            	HX_STACKFRAME(&_hx_pos_9a11087af2501d00_116_isMap)
HXLINE( 125)		bool _hx_tmp;
HXDLIN( 125)		if (::hx::IsNotNull( variable->__Field(HX_("exists",dc,1d,e0,bf),::hx::paccDynamic) )) {
HXLINE( 125)			_hx_tmp = ::hx::IsNotNull( variable->__Field(HX_("keyValueIterator",60,cd,ee,4a),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 125)			_hx_tmp = false;
            		}
HXDLIN( 125)		if (_hx_tmp) {
HXLINE( 125)			return true;
            		}
HXLINE( 126)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LuaUtils_obj,isMap,return )

 ::Dynamic LuaUtils_obj::setGroupStuff( ::Dynamic leArray,::String variable, ::Dynamic value, ::Dynamic __o_allowMaps){
            		 ::Dynamic allowMaps = __o_allowMaps;
            		if (::hx::IsNull(__o_allowMaps)) allowMaps = false;
            	HX_STACKFRAME(&_hx_pos_9a11087af2501d00_129_setGroupStuff)
HXLINE( 130)		::Array< ::String > split = variable.split(HX_(".",2e,00,00,00));
HXLINE( 131)		if ((split->length > 1)) {
HXLINE( 132)			 ::Dynamic obj = ::Reflect_obj::getProperty(leArray,split->__get(0));
HXLINE( 133)			{
HXLINE( 133)				int _g = 1;
HXDLIN( 133)				int _g1 = (split->length - 1);
HXDLIN( 133)				while((_g < _g1)){
HXLINE( 133)					_g = (_g + 1);
HXDLIN( 133)					int i = (_g - 1);
HXLINE( 134)					obj = ::Reflect_obj::getProperty(obj,split->__get(i));
            				}
            			}
HXLINE( 136)			leArray = obj;
HXLINE( 137)			variable = split->__get((split->length - 1));
            		}
HXLINE( 139)		bool _hx_tmp;
HXDLIN( 139)		if (( (bool)(allowMaps) )) {
HXLINE( 139)			_hx_tmp = ::psychlua::LuaUtils_obj::isMap(leArray);
            		}
            		else {
HXLINE( 139)			_hx_tmp = false;
            		}
HXDLIN( 139)		if (_hx_tmp) {
HXLINE( 139)			leArray->__Field(HX_("set",a2,9b,57,00),::hx::paccDynamic)(variable,value);
            		}
            		else {
HXLINE( 140)			::Reflect_obj::setProperty(leArray,variable,value);
            		}
HXLINE( 141)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(LuaUtils_obj,setGroupStuff,return )

 ::Dynamic LuaUtils_obj::getGroupStuff( ::Dynamic leArray,::String variable, ::Dynamic __o_allowMaps){
            		 ::Dynamic allowMaps = __o_allowMaps;
            		if (::hx::IsNull(__o_allowMaps)) allowMaps = false;
            	HX_STACKFRAME(&_hx_pos_9a11087af2501d00_143_getGroupStuff)
HXLINE( 144)		::Array< ::String > split = variable.split(HX_(".",2e,00,00,00));
HXLINE( 145)		if ((split->length > 1)) {
HXLINE( 146)			 ::Dynamic obj = ::Reflect_obj::getProperty(leArray,split->__get(0));
HXLINE( 147)			{
HXLINE( 147)				int _g = 1;
HXDLIN( 147)				int _g1 = (split->length - 1);
HXDLIN( 147)				while((_g < _g1)){
HXLINE( 147)					_g = (_g + 1);
HXDLIN( 147)					int i = (_g - 1);
HXLINE( 148)					obj = ::Reflect_obj::getProperty(obj,split->__get(i));
            				}
            			}
HXLINE( 150)			leArray = obj;
HXLINE( 151)			variable = split->__get((split->length - 1));
            		}
HXLINE( 154)		bool _hx_tmp;
HXDLIN( 154)		if (( (bool)(allowMaps) )) {
HXLINE( 154)			_hx_tmp = ::psychlua::LuaUtils_obj::isMap(leArray);
            		}
            		else {
HXLINE( 154)			_hx_tmp = false;
            		}
HXDLIN( 154)		if (_hx_tmp) {
HXLINE( 154)			return leArray->__Field(HX_("get",96,80,4e,00),::hx::paccDynamic)(variable);
            		}
HXLINE( 155)		return ::Reflect_obj::getProperty(leArray,variable);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(LuaUtils_obj,getGroupStuff,return )

 ::Dynamic LuaUtils_obj::getPropertyLoop(::Array< ::String > split, ::Dynamic __o_checkForTextsToo, ::Dynamic __o_getProperty, ::Dynamic __o_allowMaps){
            		 ::Dynamic checkForTextsToo = __o_checkForTextsToo;
            		if (::hx::IsNull(__o_checkForTextsToo)) checkForTextsToo = true;
            		 ::Dynamic getProperty = __o_getProperty;
            		if (::hx::IsNull(__o_getProperty)) getProperty = true;
            		 ::Dynamic allowMaps = __o_allowMaps;
            		if (::hx::IsNull(__o_allowMaps)) allowMaps = false;
            	HX_STACKFRAME(&_hx_pos_9a11087af2501d00_159_getPropertyLoop)
HXLINE( 160)		 ::Dynamic obj = ::psychlua::LuaUtils_obj::getObjectDirectly(split->__get(0),checkForTextsToo,null());
HXLINE( 161)		int end = split->length;
HXLINE( 162)		if (( (bool)(getProperty) )) {
HXLINE( 162)			end = (split->length - 1);
            		}
HXLINE( 164)		{
HXLINE( 164)			int _g = 1;
HXDLIN( 164)			int _g1 = end;
HXDLIN( 164)			while((_g < _g1)){
HXLINE( 164)				_g = (_g + 1);
HXDLIN( 164)				int i = (_g - 1);
HXDLIN( 164)				obj = ::psychlua::LuaUtils_obj::getVarInArray(obj,split->__get(i),allowMaps);
            			}
            		}
HXLINE( 165)		return obj;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(LuaUtils_obj,getPropertyLoop,return )

 ::Dynamic LuaUtils_obj::getObjectDirectly(::String objectName, ::Dynamic __o_checkForTextsToo, ::Dynamic __o_allowMaps){
            		 ::Dynamic checkForTextsToo = __o_checkForTextsToo;
            		if (::hx::IsNull(__o_checkForTextsToo)) checkForTextsToo = true;
            		 ::Dynamic allowMaps = __o_allowMaps;
            		if (::hx::IsNull(__o_allowMaps)) allowMaps = false;
            	HX_STACKFRAME(&_hx_pos_9a11087af2501d00_170_getObjectDirectly)
HXDLIN( 170)		::String _hx_switch_0 = objectName;
            		if (  (_hx_switch_0==HX_("game",f2,f3,5e,44)) ||  (_hx_switch_0==HX_("instance",95,1f,e1,59)) ||  (_hx_switch_0==HX_("this",5e,06,fc,4c)) ){
HXLINE( 173)			return ::states::PlayState_obj::instance;
HXDLIN( 173)			goto _hx_goto_12;
            		}
            		/* default */{
HXLINE( 176)			 ::Dynamic obj = ::states::PlayState_obj::instance->getLuaObject(objectName,checkForTextsToo);
HXLINE( 177)			if (::hx::IsNull( obj )) {
HXLINE( 177)				 ::flixel::FlxState obj1;
HXDLIN( 177)				if (::states::PlayState_obj::instance->isDead) {
HXLINE( 177)					obj1 = ::substates::GameOverSubstate_obj::instance;
            				}
            				else {
HXLINE( 177)					obj1 = ::states::PlayState_obj::instance;
            				}
HXDLIN( 177)				obj = ::psychlua::LuaUtils_obj::getVarInArray(obj1,objectName,allowMaps);
            			}
HXLINE( 178)			return obj;
            		}
            		_hx_goto_12:;
HXLINE( 170)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(LuaUtils_obj,getObjectDirectly,return )

 ::flixel::text::FlxText LuaUtils_obj::getTextObject(::String name){
            	HX_STACKFRAME(&_hx_pos_9a11087af2501d00_184_getTextObject)
HXDLIN( 184)		if (::states::PlayState_obj::instance->modchartTexts->exists(name)) {
HXDLIN( 184)			return ( ( ::flixel::text::FlxText)(::states::PlayState_obj::instance->modchartTexts->get(name)) );
            		}
            		else {
HXDLIN( 184)			return ( ( ::flixel::text::FlxText)(::Reflect_obj::getProperty(::states::PlayState_obj::instance,name)) );
            		}
HXDLIN( 184)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LuaUtils_obj,getTextObject,return )

bool LuaUtils_obj::isOfTypes( ::Dynamic value,::cpp::VirtualArray types){
            	HX_STACKFRAME(&_hx_pos_9a11087af2501d00_188_isOfTypes)
HXLINE( 189)		{
HXLINE( 189)			int _g = 0;
HXDLIN( 189)			while((_g < types->get_length())){
HXLINE( 189)				 ::Dynamic type = types->__get(_g);
HXDLIN( 189)				_g = (_g + 1);
HXLINE( 191)				if (::Std_obj::isOfType(value,type)) {
HXLINE( 191)					return true;
            				}
            			}
            		}
HXLINE( 193)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LuaUtils_obj,isOfTypes,return )

 ::flixel::FlxState LuaUtils_obj::getTargetInstance(){
            	HX_STACKFRAME(&_hx_pos_9a11087af2501d00_198_getTargetInstance)
HXDLIN( 198)		if (::states::PlayState_obj::instance->isDead) {
HXDLIN( 198)			return ::substates::GameOverSubstate_obj::instance;
            		}
            		else {
HXDLIN( 198)			return ::states::PlayState_obj::instance;
            		}
HXDLIN( 198)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LuaUtils_obj,getTargetInstance,return )

 ::flixel::group::FlxTypedSpriteGroup LuaUtils_obj::getLowestCharacterGroup(){
            	HX_STACKFRAME(&_hx_pos_9a11087af2501d00_202_getLowestCharacterGroup)
HXLINE( 203)		 ::flixel::group::FlxTypedSpriteGroup group = ::states::PlayState_obj::instance->gfGroup;
HXLINE( 204)		int pos = ::states::PlayState_obj::instance->members->indexOf(group,null());
HXLINE( 206)		int newPos = ::states::PlayState_obj::instance->members->indexOf(::states::PlayState_obj::instance->boyfriendGroup,null());
HXLINE( 207)		if ((newPos < pos)) {
HXLINE( 209)			group = ::states::PlayState_obj::instance->boyfriendGroup;
HXLINE( 210)			pos = newPos;
            		}
HXLINE( 213)		newPos = ::states::PlayState_obj::instance->members->indexOf(::states::PlayState_obj::instance->dadGroup,null());
HXLINE( 214)		if ((newPos < pos)) {
HXLINE( 216)			group = ::states::PlayState_obj::instance->dadGroup;
HXLINE( 217)			pos = newPos;
            		}
HXLINE( 219)		return group;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LuaUtils_obj,getLowestCharacterGroup,return )

bool LuaUtils_obj::addAnimByIndices(::String obj,::String name,::String prefix, ::Dynamic indices,::hx::Null< int >  __o_framerate,::hx::Null< bool >  __o_loop){
            		int framerate = __o_framerate.Default(24);
            		bool loop = __o_loop.Default(false);
            	HX_STACKFRAME(&_hx_pos_9a11087af2501d00_223_addAnimByIndices)
HXLINE( 224)		 ::Dynamic obj1 = ::psychlua::LuaUtils_obj::getObjectDirectly(obj,false,null());
HXLINE( 225)		bool _hx_tmp;
HXDLIN( 225)		if (::hx::IsNotNull( obj1 )) {
HXLINE( 225)			_hx_tmp = ::hx::IsNotNull( obj1->__Field(HX_("animation",04,ef,34,4b),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 225)			_hx_tmp = false;
            		}
HXDLIN( 225)		if (_hx_tmp) {
HXLINE( 227)			if (::hx::IsNull( indices )) {
HXLINE( 227)				indices = ::cpp::VirtualArray_obj::__new(0);
            			}
HXLINE( 228)			if (::Std_obj::isOfType(indices,::hx::ClassOf< ::String >())) {
HXLINE( 230)				::Array< ::String > strIndices = ::StringTools_obj::trim(::hx::TCast< ::String >::cast(indices)).split(HX_(",",2c,00,00,00));
HXLINE( 231)				::Array< int > myIndices = ::Array_obj< int >::__new(0);
HXLINE( 232)				{
HXLINE( 232)					int _g = 0;
HXDLIN( 232)					int _g1 = strIndices->length;
HXDLIN( 232)					while((_g < _g1)){
HXLINE( 232)						_g = (_g + 1);
HXDLIN( 232)						int i = (_g - 1);
HXLINE( 233)						myIndices->push(::Std_obj::parseInt(strIndices->__get(i)));
            					}
            				}
HXLINE( 235)				indices = myIndices;
            			}
HXLINE( 238)			 ::Dynamic(obj1->__Field(HX_("animation",04,ef,34,4b),::hx::paccDynamic))->__Field(HX_("addByIndices",af,b3,3b,79),::hx::paccDynamic)(name,prefix,indices,HX_("",00,00,00,00),framerate,loop);
HXLINE( 239)			if (::hx::IsNull(  ::Dynamic(obj1->__Field(HX_("animation",04,ef,34,4b),::hx::paccDynamic))->__Field(HX_("curAnim",b1,f7,86,ab),::hx::paccDynamic) )) {
HXLINE( 241)				if (::hx::IsNotNull( obj1->__Field(HX_("playAnim",25,ea,84,30),::hx::paccDynamic) )) {
HXLINE( 241)					obj1->__Field(HX_("playAnim",25,ea,84,30),::hx::paccDynamic)(name,true);
            				}
            				else {
HXLINE( 242)					 ::Dynamic(obj1->__Field(HX_("animation",04,ef,34,4b),::hx::paccDynamic))->__Field(HX_("play",f4,2d,5a,4a),::hx::paccDynamic)(name,true);
            				}
            			}
HXLINE( 244)			return true;
            		}
HXLINE( 246)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(LuaUtils_obj,addAnimByIndices,return )

void LuaUtils_obj::loadFrames( ::flixel::FlxSprite spr,::String image,::String spriteType){
            	HX_STACKFRAME(&_hx_pos_9a11087af2501d00_251_loadFrames)
HXDLIN( 251)		::String _hx_switch_0 = ::StringTools_obj::trim(spriteType.toLowerCase());
            		if (  (_hx_switch_0==HX_("pac",52,51,55,00)) ||  (_hx_switch_0==HX_("packer",86,57,98,e3)) ||  (_hx_switch_0==HX_("packeratlas",05,f0,7b,dc)) ){
HXLINE( 260)			::String library = null();
HXDLIN( 260)			 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(image,null(),true);
HXDLIN( 260)			bool txtExists = false;
HXDLIN( 260)			::String txt = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + image) + HX_(".txt",02,3f,c0,1e)));
HXDLIN( 260)			if (::sys::FileSystem_obj::exists(txt)) {
HXLINE( 260)				txtExists = true;
            			}
HXDLIN( 260)			 ::Dynamic _hx_tmp;
HXDLIN( 260)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 260)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE( 260)				_hx_tmp = ::backend::Paths_obj::image(image,library,true);
            			}
HXDLIN( 260)			::String _hx_tmp1;
HXDLIN( 260)			if (txtExists) {
HXLINE( 260)				_hx_tmp1 = ::sys::io::File_obj::getContent(txt);
            			}
            			else {
HXLINE( 260)				_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + image) + HX_(".txt",02,3f,c0,1e)),null(),library,null());
            			}
HXDLIN( 260)			spr->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSpriteSheetPacker(_hx_tmp,_hx_tmp1));
HXDLIN( 260)			goto _hx_goto_21;
            		}
            		if (  (_hx_switch_0==HX_("tex",e7,5d,58,00)) ||  (_hx_switch_0==HX_("texture",db,c8,e0,9e)) ||  (_hx_switch_0==HX_("textureatlas",90,8a,4f,8c)) ){
HXLINE( 254)			spr->set_frames(::animateatlas::AtlasFrameMaker_obj::construct(image,null(),null()));
HXDLIN( 254)			goto _hx_goto_21;
            		}
            		if (  (_hx_switch_0==HX_("tex_noaa",f9,ff,c1,49)) ||  (_hx_switch_0==HX_("texture_noaa",85,60,8d,61)) ||  (_hx_switch_0==HX_("textureatlas_noaa",b0,4e,9b,44)) ){
HXLINE( 257)			spr->set_frames(::animateatlas::AtlasFrameMaker_obj::construct(image,null(),true));
HXDLIN( 257)			goto _hx_goto_21;
            		}
            		/* default */{
HXLINE( 263)			::String library = null();
HXDLIN( 263)			 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(image,null(),true);
HXDLIN( 263)			bool xmlExists = false;
HXDLIN( 263)			::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + image) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 263)			if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 263)				xmlExists = true;
            			}
HXDLIN( 263)			 ::Dynamic _hx_tmp;
HXDLIN( 263)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 263)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE( 263)				_hx_tmp = ::backend::Paths_obj::image(image,library,true);
            			}
HXDLIN( 263)			::String _hx_tmp1;
HXDLIN( 263)			if (xmlExists) {
HXLINE( 263)				_hx_tmp1 = ::sys::io::File_obj::getContent(xml);
            			}
            			else {
HXLINE( 263)				_hx_tmp1 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + image) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            			}
HXDLIN( 263)			spr->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
            		}
            		_hx_goto_21:;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(LuaUtils_obj,loadFrames,(void))

void LuaUtils_obj::resetTextTag(::String tag){
            	HX_STACKFRAME(&_hx_pos_9a11087af2501d00_267_resetTextTag)
HXLINE( 269)		if (!(::states::PlayState_obj::instance->modchartTexts->exists(tag))) {
HXLINE( 270)			return;
            		}
HXLINE( 273)		 ::flixel::text::FlxText target = ( ( ::flixel::text::FlxText)(::states::PlayState_obj::instance->modchartTexts->get(tag)) );
HXLINE( 274)		target->kill();
HXLINE( 275)		::states::PlayState_obj::instance->remove(target,true).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 276)		target->destroy();
HXLINE( 277)		::states::PlayState_obj::instance->modchartTexts->remove(tag);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LuaUtils_obj,resetTextTag,(void))

void LuaUtils_obj::resetSpriteTag(::String tag){
            	HX_STACKFRAME(&_hx_pos_9a11087af2501d00_281_resetSpriteTag)
HXLINE( 283)		if (!(::states::PlayState_obj::instance->modchartSprites->exists(tag))) {
HXLINE( 284)			return;
            		}
HXLINE( 287)		 ::psychlua::ModchartSprite target = ( ( ::psychlua::ModchartSprite)(::states::PlayState_obj::instance->modchartSprites->get(tag)) );
HXLINE( 288)		target->kill();
HXLINE( 289)		::states::PlayState_obj::instance->remove(target,true).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 290)		target->destroy();
HXLINE( 291)		::states::PlayState_obj::instance->modchartSprites->remove(tag);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LuaUtils_obj,resetSpriteTag,(void))

void LuaUtils_obj::cancelTween(::String tag){
            	HX_STACKFRAME(&_hx_pos_9a11087af2501d00_297_cancelTween)
HXDLIN( 297)		if (::states::PlayState_obj::instance->modchartTweens->exists(tag)) {
HXLINE( 298)			( ( ::flixel::tweens::FlxTween)(::states::PlayState_obj::instance->modchartTweens->get(tag)) )->cancel();
HXLINE( 299)			( ( ::flixel::tweens::FlxTween)(::states::PlayState_obj::instance->modchartTweens->get(tag)) )->destroy();
HXLINE( 300)			::states::PlayState_obj::instance->modchartTweens->remove(tag);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LuaUtils_obj,cancelTween,(void))

 ::Dynamic LuaUtils_obj::tweenPrepare(::String tag,::String vars){
            	HX_STACKFRAME(&_hx_pos_9a11087af2501d00_305_tweenPrepare)
HXLINE( 306)		::psychlua::LuaUtils_obj::cancelTween(tag);
HXLINE( 307)		::Array< ::String > variables = vars.split(HX_(".",2e,00,00,00));
HXLINE( 308)		 ::Dynamic sexyProp = ::psychlua::LuaUtils_obj::getObjectDirectly(variables->__get(0),null(),null());
HXLINE( 309)		if ((variables->length > 1)) {
HXLINE( 309)			 ::Dynamic sexyProp1 = ::psychlua::LuaUtils_obj::getPropertyLoop(variables,null(),null(),null());
HXDLIN( 309)			sexyProp = ::psychlua::LuaUtils_obj::getVarInArray(sexyProp1,variables->__get((variables->length - 1)),null());
            		}
HXLINE( 310)		return sexyProp;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LuaUtils_obj,tweenPrepare,return )

void LuaUtils_obj::cancelTimer(::String tag){
            	HX_STACKFRAME(&_hx_pos_9a11087af2501d00_315_cancelTimer)
HXDLIN( 315)		if (::states::PlayState_obj::instance->modchartTimers->exists(tag)) {
HXLINE( 316)			 ::flixel::util::FlxTimer theTimer = ( ( ::flixel::util::FlxTimer)(::states::PlayState_obj::instance->modchartTimers->get(tag)) );
HXLINE( 317)			theTimer->cancel();
HXLINE( 318)			theTimer->destroy();
HXLINE( 319)			::states::PlayState_obj::instance->modchartTimers->remove(tag);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LuaUtils_obj,cancelTimer,(void))

int LuaUtils_obj::getTweenTypeByString(::String __o_type){
            		::String type = __o_type;
            		if (::hx::IsNull(__o_type)) type = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_9a11087af2501d00_325_getTweenTypeByString)
HXLINE( 326)		::String _hx_switch_0 = ::StringTools_obj::trim(type.toLowerCase());
            		if (  (_hx_switch_0==HX_("backward",e3,db,18,27)) ){
HXLINE( 328)			return 16;
HXDLIN( 328)			goto _hx_goto_28;
            		}
            		if (  (_hx_switch_0==HX_("loop",64,a6,b7,47)) ||  (_hx_switch_0==HX_("looping",fe,7c,7d,20)) ){
HXLINE( 329)			return 2;
HXDLIN( 329)			goto _hx_goto_28;
            		}
            		if (  (_hx_switch_0==HX_("persist",14,22,71,83)) ){
HXLINE( 330)			return 1;
HXDLIN( 330)			goto _hx_goto_28;
            		}
            		if (  (_hx_switch_0==HX_("pingpong",6a,93,43,a8)) ){
HXLINE( 331)			return 4;
HXDLIN( 331)			goto _hx_goto_28;
            		}
            		_hx_goto_28:;
HXLINE( 333)		return 8;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LuaUtils_obj,getTweenTypeByString,return )

 ::Dynamic LuaUtils_obj::getTweenEaseByString(::String __o_ease){
            		::String ease = __o_ease;
            		if (::hx::IsNull(__o_ease)) ease = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_9a11087af2501d00_336_getTweenEaseByString)
HXLINE( 337)		::String _hx_switch_0 = ::StringTools_obj::trim(ease.toLowerCase());
            		if (  (_hx_switch_0==HX_("backin",cc,4d,99,4a)) ){
HXLINE( 338)			return ::flixel::tweens::FlxEase_obj::backIn_dyn();
HXDLIN( 338)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("backinout",42,fa,a0,07)) ){
HXLINE( 339)			return ::flixel::tweens::FlxEase_obj::backInOut_dyn();
HXDLIN( 339)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("backout",c7,58,8f,fb)) ){
HXLINE( 340)			return ::flixel::tweens::FlxEase_obj::backOut_dyn();
HXDLIN( 340)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("bouncein",6d,53,b0,4c)) ){
HXLINE( 341)			return ::flixel::tweens::FlxEase_obj::bounceIn_dyn();
HXDLIN( 341)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("bounceinout",41,6f,66,e6)) ){
HXLINE( 342)			return ::flixel::tweens::FlxEase_obj::bounceInOut_dyn();
HXDLIN( 342)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("bounceout",06,40,9d,cd)) ){
HXLINE( 343)			return ::flixel::tweens::FlxEase_obj::bounceOut_dyn();
HXDLIN( 343)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("circin",7c,6f,0d,56)) ){
HXLINE( 344)			return ::flixel::tweens::FlxEase_obj::circIn_dyn();
HXDLIN( 344)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("circinout",92,06,0d,e1)) ){
HXLINE( 345)			return ::flixel::tweens::FlxEase_obj::circInOut_dyn();
HXDLIN( 345)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("circout",17,b1,b8,f5)) ){
HXLINE( 346)			return ::flixel::tweens::FlxEase_obj::circOut_dyn();
HXDLIN( 346)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("cubein",1a,80,4a,34)) ){
HXLINE( 347)			return ::flixel::tweens::FlxEase_obj::cubeIn_dyn();
HXDLIN( 347)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("cubeinout",b4,ac,c9,c2)) ){
HXLINE( 348)			return ::flixel::tweens::FlxEase_obj::cubeInOut_dyn();
HXDLIN( 348)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("cubeout",b9,2a,ea,8c)) ){
HXLINE( 349)			return ::flixel::tweens::FlxEase_obj::cubeOut_dyn();
HXDLIN( 349)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("elasticin",fa,3c,61,27)) ){
HXLINE( 350)			return ::flixel::tweens::FlxEase_obj::elasticIn_dyn();
HXDLIN( 350)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("elasticinout",d4,3b,a0,39)) ){
HXLINE( 351)			return ::flixel::tweens::FlxEase_obj::elasticInOut_dyn();
HXDLIN( 351)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("elasticout",d9,b1,b8,4d)) ){
HXLINE( 352)			return ::flixel::tweens::FlxEase_obj::elasticOut_dyn();
HXDLIN( 352)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("expoin",97,89,7d,c4)) ){
HXLINE( 353)			return ::flixel::tweens::FlxEase_obj::expoIn_dyn();
HXDLIN( 353)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("expoinout",57,ef,01,5a)) ){
HXLINE( 354)			return ::flixel::tweens::FlxEase_obj::expoInOut_dyn();
HXDLIN( 354)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("expoout",9c,6e,5f,29)) ){
HXLINE( 355)			return ::flixel::tweens::FlxEase_obj::expoOut_dyn();
HXDLIN( 355)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("quadin",6c,94,9f,cc)) ){
HXLINE( 356)			return ::flixel::tweens::FlxEase_obj::quadIn_dyn();
HXDLIN( 356)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("quadinout",a2,97,0c,bc)) ){
HXLINE( 357)			return ::flixel::tweens::FlxEase_obj::quadInOut_dyn();
HXDLIN( 357)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("quadout",27,de,06,3f)) ){
HXLINE( 358)			return ::flixel::tweens::FlxEase_obj::quadOut_dyn();
HXDLIN( 358)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("quartin",a4,9b,4b,48)) ){
HXLINE( 359)			return ::flixel::tweens::FlxEase_obj::quartIn_dyn();
HXDLIN( 359)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("quartinout",6a,e3,62,99)) ){
HXLINE( 360)			return ::flixel::tweens::FlxEase_obj::quartInOut_dyn();
HXDLIN( 360)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("quartout",ef,27,e1,f9)) ){
HXLINE( 361)			return ::flixel::tweens::FlxEase_obj::quartOut_dyn();
HXDLIN( 361)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("quintin",30,65,db,e0)) ){
HXLINE( 362)			return ::flixel::tweens::FlxEase_obj::quintIn_dyn();
HXDLIN( 362)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("quintinout",5e,99,a0,bc)) ){
HXLINE( 363)			return ::flixel::tweens::FlxEase_obj::quintInOut_dyn();
HXDLIN( 363)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("quintout",e3,b8,21,df)) ){
HXLINE( 364)			return ::flixel::tweens::FlxEase_obj::quintOut_dyn();
HXDLIN( 364)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("sinein",72,df,1f,b9)) ){
HXLINE( 365)			return ::flixel::tweens::FlxEase_obj::sineIn_dyn();
HXDLIN( 365)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("sineinout",5c,74,84,36)) ){
HXLINE( 366)			return ::flixel::tweens::FlxEase_obj::sineInOut_dyn();
HXDLIN( 366)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("sineout",61,38,c8,42)) ){
HXLINE( 367)			return ::flixel::tweens::FlxEase_obj::sineOut_dyn();
HXDLIN( 367)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("smootherstepin",8c,7c,27,7b)) ){
HXLINE( 371)			return ::flixel::tweens::FlxEase_obj::smootherStepIn_dyn();
HXDLIN( 371)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("smootherstepinout",82,83,8c,0a)) ){
HXLINE( 372)			return ::flixel::tweens::FlxEase_obj::smootherStepInOut_dyn();
HXDLIN( 372)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("smootherstepout",07,12,6a,47)) ){
HXLINE( 373)			return ::flixel::tweens::FlxEase_obj::smootherStepOut_dyn();
HXDLIN( 373)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("smoothstepin",df,0c,da,16)) ){
HXLINE( 368)			return ::flixel::tweens::FlxEase_obj::smoothStepIn_dyn();
HXDLIN( 368)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("smoothstepinout",0f,a9,b0,af)) ){
HXLINE( 369)			return ::flixel::tweens::FlxEase_obj::smoothStepInOut_dyn();
HXDLIN( 369)			goto _hx_goto_30;
            		}
            		if (  (_hx_switch_0==HX_("smoothstepout",54,ca,f5,e7)) ){
HXLINE( 370)			return ::flixel::tweens::FlxEase_obj::smoothStepInOut_dyn();
HXDLIN( 370)			goto _hx_goto_30;
            		}
            		_hx_goto_30:;
HXLINE( 375)		return ::flixel::tweens::FlxEase_obj::linear_dyn();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LuaUtils_obj,getTweenEaseByString,return )

 ::Dynamic LuaUtils_obj::blendModeFromString(::String blend){
            	HX_STACKFRAME(&_hx_pos_9a11087af2501d00_378_blendModeFromString)
HXLINE( 379)		::String _hx_switch_0 = ::StringTools_obj::trim(blend.toLowerCase());
            		if (  (_hx_switch_0==HX_("add",21,f2,49,00)) ){
HXLINE( 380)			return 0;
HXDLIN( 380)			goto _hx_goto_32;
            		}
            		if (  (_hx_switch_0==HX_("alpha",5e,a7,96,21)) ){
HXLINE( 381)			return 1;
HXDLIN( 381)			goto _hx_goto_32;
            		}
            		if (  (_hx_switch_0==HX_("darken",5f,36,3a,21)) ){
HXLINE( 382)			return 2;
HXDLIN( 382)			goto _hx_goto_32;
            		}
            		if (  (_hx_switch_0==HX_("difference",fd,9b,91,46)) ){
HXLINE( 383)			return 3;
HXDLIN( 383)			goto _hx_goto_32;
            		}
            		if (  (_hx_switch_0==HX_("erase",e6,e8,1c,73)) ){
HXLINE( 384)			return 4;
HXDLIN( 384)			goto _hx_goto_32;
            		}
            		if (  (_hx_switch_0==HX_("hardlight",0b,6e,6b,53)) ){
HXLINE( 385)			return 5;
HXDLIN( 385)			goto _hx_goto_32;
            		}
            		if (  (_hx_switch_0==HX_("invert",16,e7,d8,9f)) ){
HXLINE( 386)			return 6;
HXDLIN( 386)			goto _hx_goto_32;
            		}
            		if (  (_hx_switch_0==HX_("layer",d1,81,c0,6f)) ){
HXLINE( 387)			return 7;
HXDLIN( 387)			goto _hx_goto_32;
            		}
            		if (  (_hx_switch_0==HX_("lighten",bf,4a,e3,19)) ){
HXLINE( 388)			return 8;
HXDLIN( 388)			goto _hx_goto_32;
            		}
            		if (  (_hx_switch_0==HX_("multiply",24,e2,8c,9a)) ){
HXLINE( 389)			return 9;
HXDLIN( 389)			goto _hx_goto_32;
            		}
            		if (  (_hx_switch_0==HX_("overlay",90,43,10,a9)) ){
HXLINE( 390)			return 11;
HXDLIN( 390)			goto _hx_goto_32;
            		}
            		if (  (_hx_switch_0==HX_("screen",6c,3b,5d,47)) ){
HXLINE( 391)			return 12;
HXDLIN( 391)			goto _hx_goto_32;
            		}
            		if (  (_hx_switch_0==HX_("shader",25,bf,20,1d)) ){
HXLINE( 392)			return 13;
HXDLIN( 392)			goto _hx_goto_32;
            		}
            		if (  (_hx_switch_0==HX_("subtract",14,75,11,f8)) ){
HXLINE( 393)			return 14;
HXDLIN( 393)			goto _hx_goto_32;
            		}
            		_hx_goto_32:;
HXLINE( 395)		return 10;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LuaUtils_obj,blendModeFromString,return )

::String LuaUtils_obj::typeToString(int type){
            	HX_STACKFRAME(&_hx_pos_9a11087af2501d00_398_typeToString)
HXLINE( 400)		switch((int)(type)){
            			case (int)1: {
HXLINE( 401)				return HX_("boolean",a8,ea,fe,7d);
            			}
            			break;
            			case (int)3: {
HXLINE( 402)				return HX_("number",c9,86,7a,a1);
            			}
            			break;
            			case (int)4: {
HXLINE( 403)				return HX_("string",d1,28,30,11);
            			}
            			break;
            			case (int)5: {
HXLINE( 404)				return HX_("table",0e,b8,e3,0a);
            			}
            			break;
            			case (int)6: {
HXLINE( 405)				return HX_("function",18,ab,52,14);
            			}
            			break;
            		}
HXLINE( 407)		if ((type <= 0)) {
HXLINE( 407)			return HX_("nil",d1,d3,53,00);
            		}
HXLINE( 409)		return HX_("unknown",8a,23,7b,e1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LuaUtils_obj,typeToString,return )

 ::flixel::FlxCamera LuaUtils_obj::cameraFromString(::String cam){
            	HX_STACKFRAME(&_hx_pos_9a11087af2501d00_412_cameraFromString)
HXLINE( 413)		::String _hx_switch_0 = cam.toLowerCase();
            		if (  (_hx_switch_0==HX_("camgame",81,1b,77,e4)) ||  (_hx_switch_0==HX_("game",f2,f3,5e,44)) ){
HXLINE( 415)			return ::states::PlayState_obj::instance->camGame;
HXDLIN( 415)			goto _hx_goto_35;
            		}
            		if (  (_hx_switch_0==HX_("camhud",08,90,8e,b7)) ||  (_hx_switch_0==HX_("hud",b7,50,4f,00)) ){
HXLINE( 414)			return ::states::PlayState_obj::instance->camHUD;
HXDLIN( 414)			goto _hx_goto_35;
            		}
            		if (  (_hx_switch_0==HX_("camother",61,dc,80,ab)) ||  (_hx_switch_0==HX_("other",d0,66,76,36)) ){
HXLINE( 416)			return ::states::PlayState_obj::instance->camOther;
HXDLIN( 416)			goto _hx_goto_35;
            		}
            		_hx_goto_35:;
HXLINE( 418)		return ::states::PlayState_obj::instance->camGame;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LuaUtils_obj,cameraFromString,return )


LuaUtils_obj::LuaUtils_obj()
{
}

bool LuaUtils_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"isMap") ) { outValue = isMap_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isOfTypes") ) { outValue = isOfTypes_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadFrames") ) { outValue = loadFrames_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getLuaTween") ) { outValue = getLuaTween_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"cancelTween") ) { outValue = cancelTween_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"cancelTimer") ) { outValue = cancelTimer_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resetTextTag") ) { outValue = resetTextTag_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"tweenPrepare") ) { outValue = tweenPrepare_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"typeToString") ) { outValue = typeToString_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setVarInArray") ) { outValue = setVarInArray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getVarInArray") ) { outValue = getVarInArray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setGroupStuff") ) { outValue = setGroupStuff_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getGroupStuff") ) { outValue = getGroupStuff_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getTextObject") ) { outValue = getTextObject_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resetSpriteTag") ) { outValue = resetSpriteTag_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getPropertyLoop") ) { outValue = getPropertyLoop_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addAnimByIndices") ) { outValue = addAnimByIndices_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"cameraFromString") ) { outValue = cameraFromString_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getObjectDirectly") ) { outValue = getObjectDirectly_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getTargetInstance") ) { outValue = getTargetInstance_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"blendModeFromString") ) { outValue = blendModeFromString_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getTweenTypeByString") ) { outValue = getTweenTypeByString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getTweenEaseByString") ) { outValue = getTweenEaseByString_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getLowestCharacterGroup") ) { outValue = getLowestCharacterGroup_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *LuaUtils_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *LuaUtils_obj_sStaticStorageInfo = 0;
#endif

::hx::Class LuaUtils_obj::__mClass;

static ::String LuaUtils_obj_sStaticFields[] = {
	HX_("getLuaTween",49,48,c7,bd),
	HX_("setVarInArray",8f,85,58,39),
	HX_("getVarInArray",83,a3,52,f4),
	HX_("isMap",d2,34,51,c1),
	HX_("setGroupStuff",77,6d,5e,9c),
	HX_("getGroupStuff",6b,8b,58,57),
	HX_("getPropertyLoop",0f,bf,86,48),
	HX_("getObjectDirectly",0b,c7,22,d0),
	HX_("getTextObject",82,5b,a2,a8),
	HX_("isOfTypes",18,a9,2c,82),
	HX_("getTargetInstance",3c,b7,00,de),
	HX_("getLowestCharacterGroup",5e,ee,31,ed),
	HX_("addAnimByIndices",de,fe,08,84),
	HX_("loadFrames",6c,de,b0,61),
	HX_("resetTextTag",9e,f5,a5,10),
	HX_("resetSpriteTag",86,2b,7a,b0),
	HX_("cancelTween",91,12,99,b7),
	HX_("tweenPrepare",5c,02,9d,61),
	HX_("cancelTimer",eb,27,5e,ae),
	HX_("getTweenTypeByString",77,08,e0,25),
	HX_("getTweenEaseByString",ab,f5,ad,77),
	HX_("blendModeFromString",4f,47,9d,c2),
	HX_("typeToString",86,c9,d1,1f),
	HX_("cameraFromString",e0,18,60,4a),
	::String(null())
};

void LuaUtils_obj::__register()
{
	LuaUtils_obj _hx_dummy;
	LuaUtils_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("psychlua.LuaUtils",aa,e4,6b,38);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LuaUtils_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LuaUtils_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< LuaUtils_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LuaUtils_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LuaUtils_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace psychlua
