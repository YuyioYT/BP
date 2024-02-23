#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxInputText
#include <flixel/addons/ui/FlxInputText.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_text__FlxText_FlxTextAlign_Impl_
#include <flixel/text/_FlxText/FlxTextAlign_Impl_.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxBasePoint
#include <flixel/util/FlxPool_flixel_math_FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_system_Clipboard
#include <lime/system/Clipboard.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_75fddae7e64ce41a_28_new,"flixel.addons.ui.FlxInputText","new",0xf37b21c8,"flixel.addons.ui.FlxInputText.new","flixel/addons/ui/FlxInputText.hx",28,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_55_set_customFilterPattern,"flixel.addons.ui.FlxInputText","set_customFilterPattern",0x8ca18812,"flixel.addons.ui.FlxInputText.set_customFilterPattern","flixel/addons/ui/FlxInputText.hx",55,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_77_set_caretColor,"flixel.addons.ui.FlxInputText","set_caretColor",0xe765d535,"flixel.addons.ui.FlxInputText.set_caretColor","flixel/addons/ui/FlxInputText.hx",77,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_86_set_caretWidth,"flixel.addons.ui.FlxInputText","set_caretWidth",0x676c19d8,"flixel.addons.ui.FlxInputText.set_caretWidth","flixel/addons/ui/FlxInputText.hx",86,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_244_destroy,"flixel.addons.ui.FlxInputText","destroy",0x8dd65262,"flixel.addons.ui.FlxInputText.destroy","flixel/addons/ui/FlxInputText.hx",244,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_269_draw,"flixel.addons.ui.FlxInputText","draw",0x11b0159c,"flixel.addons.ui.FlxInputText.draw","flixel/addons/ui/FlxInputText.hx",269,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_290_drawSprite,"flixel.addons.ui.FlxInputText","drawSprite",0x07ac82c1,"flixel.addons.ui.FlxInputText.drawSprite","flixel/addons/ui/FlxInputText.hx",290,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_302_update,"flixel.addons.ui.FlxInputText","update",0x954505a1,"flixel.addons.ui.FlxInputText.update","flixel/addons/ui/FlxInputText.hx",302,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_328_mouseOverlapping,"flixel.addons.ui.FlxInputText","mouseOverlapping",0xa9a60cec,"flixel.addons.ui.FlxInputText.mouseOverlapping","flixel/addons/ui/FlxInputText.hx",328,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_343_onKeyDown,"flixel.addons.ui.FlxInputText","onKeyDown",0xeda471aa,"flixel.addons.ui.FlxInputText.onKeyDown","flixel/addons/ui/FlxInputText.hx",343,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_482_onChange,"flixel.addons.ui.FlxInputText","onChange",0x53f01d87,"flixel.addons.ui.FlxInputText.onChange","flixel/addons/ui/FlxInputText.hx",482,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_497_insertSubstring,"flixel.addons.ui.FlxInputText","insertSubstring",0xe0c1ad40,"flixel.addons.ui.FlxInputText.insertSubstring","flixel/addons/ui/FlxInputText.hx",497,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_515_getCaretIndex,"flixel.addons.ui.FlxInputText","getCaretIndex",0xfe00362d,"flixel.addons.ui.FlxInputText.getCaretIndex","flixel/addons/ui/FlxInputText.hx",515,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_525_getCharBoundaries,"flixel.addons.ui.FlxInputText","getCharBoundaries",0x38cd7cdc,"flixel.addons.ui.FlxInputText.getCharBoundaries","flixel/addons/ui/FlxInputText.hx",525,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_543_set_text,"flixel.addons.ui.FlxInputText","set_text",0x37e27742,"flixel.addons.ui.FlxInputText.set_text","flixel/addons/ui/FlxInputText.hx",543,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_590_getCharIndexAtPoint,"flixel.addons.ui.FlxInputText","getCharIndexAtPoint",0xf4438f7f,"flixel.addons.ui.FlxInputText.getCharIndexAtPoint","flixel/addons/ui/FlxInputText.hx",590,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_641_prepareCharBoundaries,"flixel.addons.ui.FlxInputText","prepareCharBoundaries",0x33edc58d,"flixel.addons.ui.FlxInputText.prepareCharBoundaries","flixel/addons/ui/FlxInputText.hx",641,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_669_onSetTextCheck,"flixel.addons.ui.FlxInputText","onSetTextCheck",0x14902030,"flixel.addons.ui.FlxInputText.onSetTextCheck","flixel/addons/ui/FlxInputText.hx",669,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_713_calcFrame,"flixel.addons.ui.FlxInputText","calcFrame",0x733ee2c0,"flixel.addons.ui.FlxInputText.calcFrame","flixel/addons/ui/FlxInputText.hx",713,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_799_toggleCaret,"flixel.addons.ui.FlxInputText","toggleCaret",0x6f59aab7,"flixel.addons.ui.FlxInputText.toggleCaret","flixel/addons/ui/FlxInputText.hx",799,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_807_filter,"flixel.addons.ui.FlxInputText","filter",0x93749f50,"flixel.addons.ui.FlxInputText.filter","flixel/addons/ui/FlxInputText.hx",807,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_839_set_params,"flixel.addons.ui.FlxInputText","set_params",0xe3d3351b,"flixel.addons.ui.FlxInputText.set_params","flixel/addons/ui/FlxInputText.hx",839,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_851_set_x,"flixel.addons.ui.FlxInputText","set_x",0x02dc16c3,"flixel.addons.ui.FlxInputText.set_x","flixel/addons/ui/FlxInputText.hx",851,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_864_set_y,"flixel.addons.ui.FlxInputText","set_y",0x02dc16c4,"flixel.addons.ui.FlxInputText.set_y","flixel/addons/ui/FlxInputText.hx",864,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_877_set_hasFocus,"flixel.addons.ui.FlxInputText","set_hasFocus",0xf91bc333,"flixel.addons.ui.FlxInputText.set_hasFocus","flixel/addons/ui/FlxInputText.hx",877,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_905_getAlignStr,"flixel.addons.ui.FlxInputText","getAlignStr",0xf6458f0a,"flixel.addons.ui.FlxInputText.getAlignStr","flixel/addons/ui/FlxInputText.hx",905,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_915_set_caretIndex,"flixel.addons.ui.FlxInputText","set_caretIndex",0x5b1dfee4,"flixel.addons.ui.FlxInputText.set_caretIndex","flixel/addons/ui/FlxInputText.hx",915,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_994_set_forceCase,"flixel.addons.ui.FlxInputText","set_forceCase",0x119aa786,"flixel.addons.ui.FlxInputText.set_forceCase","flixel/addons/ui/FlxInputText.hx",994,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_1001_set_size,"flixel.addons.ui.FlxInputText","set_size",0x373c4b56,"flixel.addons.ui.FlxInputText.set_size","flixel/addons/ui/FlxInputText.hx",1001,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_1008_set_maxLength,"flixel.addons.ui.FlxInputText","set_maxLength",0x992e7ff5,"flixel.addons.ui.FlxInputText.set_maxLength","flixel/addons/ui/FlxInputText.hx",1008,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_1018_set_lines,"flixel.addons.ui.FlxInputText","set_lines",0x15ae75ca,"flixel.addons.ui.FlxInputText.set_lines","flixel/addons/ui/FlxInputText.hx",1018,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_1040_get_passwordMode,"flixel.addons.ui.FlxInputText","get_passwordMode",0x890c263f,"flixel.addons.ui.FlxInputText.get_passwordMode","flixel/addons/ui/FlxInputText.hx",1040,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_1044_set_passwordMode,"flixel.addons.ui.FlxInputText","set_passwordMode",0xdf4e13b3,"flixel.addons.ui.FlxInputText.set_passwordMode","flixel/addons/ui/FlxInputText.hx",1044,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_1051_set_filterMode,"flixel.addons.ui.FlxInputText","set_filterMode",0xd267a390,"flixel.addons.ui.FlxInputText.set_filterMode","flixel/addons/ui/FlxInputText.hx",1051,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_1058_set_fieldBorderColor,"flixel.addons.ui.FlxInputText","set_fieldBorderColor",0x31131c52,"flixel.addons.ui.FlxInputText.set_fieldBorderColor","flixel/addons/ui/FlxInputText.hx",1058,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_1065_set_fieldBorderThickness,"flixel.addons.ui.FlxInputText","set_fieldBorderThickness",0x8f7f3fe3,"flixel.addons.ui.FlxInputText.set_fieldBorderThickness","flixel/addons/ui/FlxInputText.hx",1065,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_1072_set_backgroundColor,"flixel.addons.ui.FlxInputText","set_backgroundColor",0x1e95b220,"flixel.addons.ui.FlxInputText.set_backgroundColor","flixel/addons/ui/FlxInputText.hx",1072,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_30_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",30,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_31_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",31,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_32_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",32,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_33_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",33,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_34_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",34,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_36_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",36,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_37_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",37,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_38_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",38,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_40_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",40,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_41_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",41,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_42_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",42,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_43_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",43,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_44_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",44,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_45_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",45,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_46_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",46,0x19fbd1e7)
namespace flixel{
namespace addons{
namespace ui{

void FlxInputText_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_Width,::String Text,::hx::Null< int >  __o_size,::hx::Null< int >  __o_TextColor,::hx::Null< int >  __o_BackgroundColor,::hx::Null< bool >  __o_EmbeddedFont){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		int Width = __o_Width.Default(150);
            		int size = __o_size.Default(8);
            		int TextColor = __o_TextColor.Default(-16777216);
            		int BackgroundColor = __o_BackgroundColor.Default(-1);
            		bool EmbeddedFont = __o_EmbeddedFont.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_75fddae7e64ce41a_28_new)
HXLINE( 181)		this->_scrollBoundIndeces =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("right",dc,0b,64,e9),0)
            			->setFixed(1,HX_("left",07,08,b0,47),0));
HXLINE( 156)		this->backgroundColor = -1;
HXLINE( 151)		this->fieldBorderThickness = 1;
HXLINE( 146)		this->fieldBorderColor = -16777216;
HXLINE( 141)		this->filterMode = 0;
HXLINE( 130)		this->maxLength = 0;
HXLINE( 124)		this->forceCase = 0;
HXLINE( 107)		this->caretIndex = 0;
HXLINE( 102)		this->hasFocus = false;
HXLINE(  83)		this->caretWidth = 1;
HXLINE(  69)		this->background = false;
HXLINE( 204)		super::__construct(X,Y,Width,Text,size,EmbeddedFont);
HXLINE( 205)		this->set_backgroundColor(BackgroundColor);
HXLINE( 207)		if ((BackgroundColor != 0)) {
HXLINE( 209)			this->background = true;
            		}
HXLINE( 212)		this->set_color(TextColor);
HXLINE( 213)		this->set_caretColor(TextColor);
HXLINE( 215)		this->caret =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 216)		 ::flixel::FlxSprite _hx_tmp = this->caret;
HXDLIN( 216)		int _hx_tmp1 = this->caretWidth;
HXDLIN( 216)		_hx_tmp->makeGraphic(_hx_tmp1,::Std_obj::_hx_int(( (Float)((size + 2)) )),null(),null(),null());
HXLINE( 217)		this->_caretTimer =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null());
HXLINE( 219)		this->set_caretIndex(0);
HXLINE( 220)		this->set_hasFocus(false);
HXLINE( 221)		if (this->background) {
HXLINE( 223)			this->fieldBorderSprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,X,Y,null());
HXLINE( 224)			this->backgroundSprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,X,Y,null());
            		}
HXLINE( 227)		this->set_lines(1);
HXLINE( 228)		::openfl::Lib_obj::get_current()->stage->addEventListener(HX_("keyDown",a1,69,47,9c),this->onKeyDown_dyn(),null(),null(),null());
HXLINE( 230)		if (::hx::IsNull( Text )) {
HXLINE( 232)			Text = HX_("",00,00,00,00);
            		}
HXLINE( 235)		this->set_text(Text);
HXLINE( 237)		this->calcFrame(null());
            	}

Dynamic FlxInputText_obj::__CreateEmpty() { return new FlxInputText_obj; }

void *FlxInputText_obj::_hx_vtable = 0;

Dynamic FlxInputText_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxInputText_obj > _hx_result = new FlxInputText_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool FlxInputText_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x752f90b6) {
		if (inClassId<=(int)0x2e702350) {
			if (inClassId<=(int)0x2c01639b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
			} else {
				return inClassId==(int)0x2e702350;
			}
		} else {
			return inClassId==(int)0x752f90b6;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

 ::EReg FlxInputText_obj::set_customFilterPattern( ::EReg cfp){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_55_set_customFilterPattern)
HXLINE(  56)		this->customFilterPattern = cfp;
HXLINE(  57)		this->set_filterMode(4);
HXLINE(  58)		return this->customFilterPattern;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_customFilterPattern,return )

int FlxInputText_obj::set_caretColor(int i){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_77_set_caretColor)
HXLINE(  78)		this->caretColor = i;
HXLINE(  79)		this->dirty = true;
HXLINE(  80)		return this->caretColor;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_caretColor,return )

int FlxInputText_obj::set_caretWidth(int i){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_86_set_caretWidth)
HXLINE(  87)		this->caretWidth = i;
HXLINE(  88)		this->dirty = true;
HXLINE(  89)		return this->caretWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_caretWidth,return )

void FlxInputText_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_244_destroy)
HXLINE( 245)		::openfl::Lib_obj::get_current()->stage->removeEventListener(HX_("keyDown",a1,69,47,9c),this->onKeyDown_dyn(),null());
HXLINE( 247)		this->backgroundSprite = ( ( ::flixel::FlxSprite)(::flixel::util::FlxDestroyUtil_obj::destroy(this->backgroundSprite)) );
HXLINE( 248)		this->fieldBorderSprite = ( ( ::flixel::FlxSprite)(::flixel::util::FlxDestroyUtil_obj::destroy(this->fieldBorderSprite)) );
HXLINE( 249)		this->callback = null();
HXLINE( 252)		if (::hx::IsNotNull( this->_charBoundaries )) {
HXLINE( 254)			while((this->_charBoundaries->length > 0)){
HXLINE( 256)				this->_charBoundaries->pop().StaticCast<  ::flixel::math::FlxRect >();
            			}
HXLINE( 258)			this->_charBoundaries = null();
            		}
HXLINE( 262)		this->super::destroy();
            	}


void FlxInputText_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_269_draw)
HXLINE( 270)		this->drawSprite(this->fieldBorderSprite);
HXLINE( 271)		this->drawSprite(this->backgroundSprite);
HXLINE( 273)		this->super::draw();
HXLINE( 276)		bool _hx_tmp;
HXDLIN( 276)		if ((this->caretColor == this->caret->color)) {
HXLINE( 276)			Float _hx_tmp1 = this->caret->get_height();
HXDLIN( 276)			_hx_tmp = (_hx_tmp1 != (::Std_obj::_hx_int(( (Float)(this->_defaultFormat->size) )) + 2));
            		}
            		else {
HXLINE( 276)			_hx_tmp = true;
            		}
HXDLIN( 276)		if (_hx_tmp) {
HXLINE( 278)			this->caret->set_color(this->caretColor);
            		}
HXLINE( 281)		this->drawSprite(this->caret);
            	}


void FlxInputText_obj::drawSprite( ::flixel::FlxSprite Sprite){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_290_drawSprite)
HXDLIN( 290)		bool _hx_tmp;
HXDLIN( 290)		if (::hx::IsNotNull( Sprite )) {
HXDLIN( 290)			_hx_tmp = Sprite->visible;
            		}
            		else {
HXDLIN( 290)			_hx_tmp = false;
            		}
HXDLIN( 290)		if (_hx_tmp) {
HXLINE( 292)			Sprite->scrollFactor = this->scrollFactor;
HXLINE( 293)			Sprite->set_cameras(this->get_cameras());
HXLINE( 294)			Sprite->draw();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,drawSprite,(void))

void FlxInputText_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_302_update)
HXLINE( 303)		this->super::update(elapsed);
HXLINE( 307)		if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 309)			bool hadFocus = this->hasFocus;
HXLINE( 310)			if (this->mouseOverlapping()) {
HXLINE( 312)				this->set_caretIndex(this->getCaretIndex());
HXLINE( 313)				this->set_hasFocus(true);
HXLINE( 314)				bool _hx_tmp;
HXDLIN( 314)				if (!(hadFocus)) {
HXLINE( 314)					_hx_tmp = ::hx::IsNotNull( this->focusGained );
            				}
            				else {
HXLINE( 314)					_hx_tmp = false;
            				}
HXDLIN( 314)				if (_hx_tmp) {
HXLINE( 315)					this->focusGained();
            				}
            			}
            			else {
HXLINE( 319)				this->set_hasFocus(false);
HXLINE( 320)				bool _hx_tmp;
HXDLIN( 320)				if (hadFocus) {
HXLINE( 320)					_hx_tmp = ::hx::IsNotNull( this->focusLost );
            				}
            				else {
HXLINE( 320)					_hx_tmp = false;
            				}
HXDLIN( 320)				if (_hx_tmp) {
HXLINE( 321)					this->focusLost();
            				}
            			}
            		}
            	}


bool FlxInputText_obj::mouseOverlapping(){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_328_mouseOverlapping)
HXLINE( 329)		 ::flixel::input::mouse::FlxMouse mousePoint = ::flixel::FlxG_obj::mouse;
HXDLIN( 329)		 ::flixel::math::FlxBasePoint mousePoint1 = mousePoint->getScreenPosition(this->get_camera(),null());
HXLINE( 330)		 ::flixel::math::FlxBasePoint objPoint = this->getScreenPosition(null(),this->get_camera());
HXLINE( 331)		bool _hx_tmp;
HXDLIN( 331)		bool _hx_tmp1;
HXDLIN( 331)		bool _hx_tmp2;
HXDLIN( 331)		if ((mousePoint1->x >= objPoint->x)) {
HXLINE( 331)			_hx_tmp2 = (mousePoint1->y >= objPoint->y);
            		}
            		else {
HXLINE( 331)			_hx_tmp2 = false;
            		}
HXDLIN( 331)		if (_hx_tmp2) {
HXLINE( 332)			Float mousePoint = mousePoint1->x;
HXDLIN( 332)			Float objPoint1 = objPoint->x;
HXLINE( 331)			_hx_tmp1 = (mousePoint < (objPoint1 + this->get_width()));
            		}
            		else {
HXLINE( 331)			_hx_tmp1 = false;
            		}
HXDLIN( 331)		if (_hx_tmp1) {
HXLINE( 332)			Float mousePoint = mousePoint1->y;
HXDLIN( 332)			Float objPoint1 = objPoint->y;
HXLINE( 331)			_hx_tmp = (mousePoint < (objPoint1 + this->get_height()));
            		}
            		else {
HXLINE( 331)			_hx_tmp = false;
            		}
HXDLIN( 331)		if (_hx_tmp) {
HXLINE( 334)			return true;
            		}
HXLINE( 336)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInputText_obj,mouseOverlapping,return )

void FlxInputText_obj::onKeyDown( ::openfl::events::KeyboardEvent e){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_343_onKeyDown)
HXLINE( 344)		int key = e->keyCode;
HXLINE( 346)		if (this->hasFocus) {
HXLINE( 355)			bool _hx_tmp;
HXDLIN( 355)			if ((key == 67)) {
HXLINE( 355)				_hx_tmp = e->ctrlKey;
            			}
            			else {
HXLINE( 355)				_hx_tmp = false;
            			}
HXDLIN( 355)			if (_hx_tmp) {
HXLINE( 357)				::lime::_hx_system::Clipboard_obj::set_text(this->text);
HXLINE( 359)				this->onChange(HX_("copy",b5,bb,c4,41));
HXLINE( 362)				return;
            			}
HXLINE( 369)			bool _hx_tmp1;
HXDLIN( 369)			if ((key == 86)) {
HXLINE( 369)				_hx_tmp1 = e->ctrlKey;
            			}
            			else {
HXLINE( 369)				_hx_tmp1 = false;
            			}
HXDLIN( 369)			if (_hx_tmp1) {
HXLINE( 371)				::String newText = this->filter(::lime::_hx_system::Clipboard_obj::get_text());
HXLINE( 373)				bool _hx_tmp;
HXDLIN( 373)				if ((newText.length > 0)) {
HXLINE( 373)					if ((this->maxLength != 0)) {
HXLINE( 373)						_hx_tmp = ((this->text.length + newText.length) < this->maxLength);
            					}
            					else {
HXLINE( 373)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 373)					_hx_tmp = false;
            				}
HXDLIN( 373)				if (_hx_tmp) {
HXLINE( 374)					this->set_text(this->insertSubstring(this->text,newText,this->caretIndex));
HXLINE( 375)					this->set_caretIndex((this->caretIndex + newText.length));
HXLINE( 376)					this->onChange(HX_("input",0a,c4,1d,be));
HXLINE( 377)					this->onChange(HX_("paste",53,53,56,bd));
            				}
HXLINE( 381)				return;
            			}
HXLINE( 389)			bool _hx_tmp2;
HXDLIN( 389)			if ((key == 88)) {
HXLINE( 389)				_hx_tmp2 = e->ctrlKey;
            			}
            			else {
HXLINE( 389)				_hx_tmp2 = false;
            			}
HXDLIN( 389)			if (_hx_tmp2) {
HXLINE( 391)				::lime::_hx_system::Clipboard_obj::set_text(this->text);
HXLINE( 392)				this->set_text(HX_("",00,00,00,00));
HXLINE( 393)				this->set_caretIndex(0);
HXLINE( 395)				this->onChange(HX_("input",0a,c4,1d,be));
HXLINE( 396)				this->onChange(HX_("cut",82,85,4b,00));
HXLINE( 399)				return;
            			}
HXLINE( 403)			bool _hx_tmp3;
HXDLIN( 403)			bool _hx_tmp4;
HXDLIN( 403)			bool _hx_tmp5;
HXDLIN( 403)			if ((key != 16)) {
HXLINE( 403)				_hx_tmp5 = (key == 17);
            			}
            			else {
HXLINE( 403)				_hx_tmp5 = true;
            			}
HXDLIN( 403)			if (!(_hx_tmp5)) {
HXLINE( 403)				_hx_tmp4 = (key == 220);
            			}
            			else {
HXLINE( 403)				_hx_tmp4 = true;
            			}
HXDLIN( 403)			if (!(_hx_tmp4)) {
HXLINE( 403)				_hx_tmp3 = (key == 27);
            			}
            			else {
HXLINE( 403)				_hx_tmp3 = true;
            			}
HXDLIN( 403)			if (_hx_tmp3) {
HXLINE( 405)				return;
            			}
            			else {
HXLINE( 408)				if ((key == 37)) {
HXLINE( 410)					if ((this->caretIndex > 0)) {
HXLINE( 412)						this->set_caretIndex((this->caretIndex - 1));
HXLINE( 413)						this->set_text(this->text);
            					}
            				}
            				else {
HXLINE( 417)					if ((key == 39)) {
HXLINE( 419)						if ((this->caretIndex < this->text.length)) {
HXLINE( 421)							this->set_caretIndex((this->caretIndex + 1));
HXLINE( 422)							this->set_text(this->text);
            						}
            					}
            					else {
HXLINE( 426)						if ((key == 35)) {
HXLINE( 428)							this->set_caretIndex(this->text.length);
HXLINE( 429)							this->set_text(this->text);
            						}
            						else {
HXLINE( 432)							if ((key == 36)) {
HXLINE( 434)								this->set_caretIndex(0);
HXLINE( 435)								this->set_text(this->text);
            							}
            							else {
HXLINE( 438)								if ((key == 8)) {
HXLINE( 440)									if ((this->caretIndex > 0)) {
HXLINE( 442)										this->set_caretIndex((this->caretIndex - 1));
HXLINE( 443)										::String _hx_tmp = this->text.substring(0,this->caretIndex);
HXDLIN( 443)										this->set_text((_hx_tmp + this->text.substring((this->caretIndex + 1),null())));
HXLINE( 444)										this->onChange(HX_("backspace",3f,85,ea,ca));
            									}
            								}
            								else {
HXLINE( 448)									if ((key == 46)) {
HXLINE( 450)										bool _hx_tmp;
HXDLIN( 450)										if ((this->text.length > 0)) {
HXLINE( 450)											_hx_tmp = (this->caretIndex < this->text.length);
            										}
            										else {
HXLINE( 450)											_hx_tmp = false;
            										}
HXDLIN( 450)										if (_hx_tmp) {
HXLINE( 452)											::String _hx_tmp = this->text.substring(0,this->caretIndex);
HXDLIN( 452)											this->set_text((_hx_tmp + this->text.substring((this->caretIndex + 1),null())));
HXLINE( 453)											this->onChange(HX_("delete",2b,c0,d8,6a));
            										}
            									}
            									else {
HXLINE( 457)										if ((key == 13)) {
HXLINE( 459)											this->onChange(HX_("enter",18,6d,86,70));
            										}
            										else {
HXLINE( 464)											if ((e->charCode == 0)) {
HXLINE( 466)												return;
            											}
HXLINE( 468)											::String newText = this->filter(::String::fromCharCode(e->charCode));
HXLINE( 470)											bool _hx_tmp;
HXDLIN( 470)											if ((newText.length > 0)) {
HXLINE( 470)												if ((this->maxLength != 0)) {
HXLINE( 470)													_hx_tmp = ((this->text.length + newText.length) < this->maxLength);
            												}
            												else {
HXLINE( 470)													_hx_tmp = true;
            												}
            											}
            											else {
HXLINE( 470)												_hx_tmp = false;
            											}
HXDLIN( 470)											if (_hx_tmp) {
HXLINE( 472)												this->set_text(this->insertSubstring(this->text,newText,this->caretIndex));
HXLINE( 473)												this->set_caretIndex((this->caretIndex + 1));
HXLINE( 474)												this->onChange(HX_("input",0a,c4,1d,be));
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,onKeyDown,(void))

void FlxInputText_obj::onChange(::String action){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_482_onChange)
HXDLIN( 482)		if (::hx::IsNotNull( this->callback )) {
HXLINE( 484)			this->callback(this->text,action);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,onChange,(void))

::String FlxInputText_obj::insertSubstring(::String Original,::String Insert,int Index){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_497_insertSubstring)
HXLINE( 498)		if ((Index != Original.length)) {
HXLINE( 500)			::String Original1 = (Original.substring(0,Index) + Insert);
HXDLIN( 500)			Original = (Original1 + Original.substring(Index,null()));
            		}
            		else {
HXLINE( 504)			Original = (Original + Insert);
            		}
HXLINE( 506)		return Original;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxInputText_obj,insertSubstring,return )

int FlxInputText_obj::getCaretIndex(){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_515_getCaretIndex)
HXLINE( 517)		Float x = (( (Float)(::flixel::FlxG_obj::mouse->x) ) - this->x);
HXDLIN( 517)		Float y = (( (Float)(::flixel::FlxG_obj::mouse->y) ) - this->y);
HXDLIN( 517)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x,y);
HXDLIN( 517)		point->_inPool = false;
HXDLIN( 517)		 ::flixel::math::FlxBasePoint hit = point;
HXLINE( 518)		return this->getCharIndexAtPoint(hit->x,hit->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInputText_obj,getCaretIndex,return )

 ::openfl::geom::Rectangle FlxInputText_obj::getCharBoundaries(int charIndex){
            	HX_GC_STACKFRAME(&_hx_pos_75fddae7e64ce41a_525_getCharBoundaries)
HXLINE( 526)		bool _hx_tmp;
HXDLIN( 526)		bool _hx_tmp1;
HXDLIN( 526)		if (::hx::IsNotNull( this->_charBoundaries )) {
HXLINE( 526)			_hx_tmp1 = (charIndex >= 0);
            		}
            		else {
HXLINE( 526)			_hx_tmp1 = false;
            		}
HXDLIN( 526)		if (_hx_tmp1) {
HXLINE( 526)			_hx_tmp = (this->_charBoundaries->length > 0);
            		}
            		else {
HXLINE( 526)			_hx_tmp = false;
            		}
HXDLIN( 526)		if (_hx_tmp) {
HXLINE( 528)			 ::openfl::geom::Rectangle r =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 529)			if ((charIndex >= this->_charBoundaries->length)) {
HXLINE( 531)				 ::flixel::math::FlxRect _this = this->_charBoundaries->__get((this->_charBoundaries->length - 1)).StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 531)				 ::openfl::geom::Rectangle FlashRect = r;
HXDLIN( 531)				if (::hx::IsNull( FlashRect )) {
HXLINE( 531)					FlashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            				}
HXDLIN( 531)				FlashRect->x = _this->x;
HXDLIN( 531)				FlashRect->y = _this->y;
HXDLIN( 531)				FlashRect->width = _this->width;
HXDLIN( 531)				FlashRect->height = _this->height;
            			}
            			else {
HXLINE( 535)				 ::flixel::math::FlxRect _this = this->_charBoundaries->__get(charIndex).StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 535)				 ::openfl::geom::Rectangle FlashRect = r;
HXDLIN( 535)				if (::hx::IsNull( FlashRect )) {
HXLINE( 535)					FlashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            				}
HXDLIN( 535)				FlashRect->x = _this->x;
HXDLIN( 535)				FlashRect->y = _this->y;
HXDLIN( 535)				FlashRect->width = _this->width;
HXDLIN( 535)				FlashRect->height = _this->height;
            			}
HXLINE( 537)			return r;
            		}
HXLINE( 539)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,getCharBoundaries,return )

::String FlxInputText_obj::set_text(::String Text){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_543_set_text)
HXLINE( 545)		if (::hx::IsNotNull( this->textField )) {
HXLINE( 547)			this->lastScroll = this->textField->get_scrollH();
            		}
HXLINE( 550)		::String return_text = this->super::set_text(Text);
HXLINE( 552)		if (::hx::IsNull( this->textField )) {
HXLINE( 554)			return return_text;
            		}
HXLINE( 557)		int numChars = Text.length;
HXLINE( 558)		this->prepareCharBoundaries(numChars);
HXLINE( 559)		this->textField->set_text(HX_("",00,00,00,00));
HXLINE( 560)		Float textH = ( (Float)(0) );
HXLINE( 561)		Float textW = ( (Float)(0) );
HXLINE( 562)		Float lastW = ( (Float)(0) );
HXLINE( 567)		Float magicX = ( (Float)(2) );
HXLINE( 568)		Float magicY = ( (Float)(2) );
HXLINE( 570)		{
HXLINE( 570)			int _g = 0;
HXDLIN( 570)			int _g1 = numChars;
HXDLIN( 570)			while((_g < _g1)){
HXLINE( 570)				_g = (_g + 1);
HXDLIN( 570)				int i = (_g - 1);
HXLINE( 572)				 ::openfl::text::TextField _hx_tmp = this->textField;
HXDLIN( 572)				_hx_tmp->appendText(Text.substr(i,1));
HXLINE( 573)				textW = this->textField->get_textWidth();
HXLINE( 574)				if ((i == 0)) {
HXLINE( 576)					textH = this->textField->get_textHeight();
            				}
HXLINE( 578)				this->_charBoundaries->__get(i).StaticCast<  ::flixel::math::FlxRect >()->x = (magicX + lastW);
HXLINE( 579)				this->_charBoundaries->__get(i).StaticCast<  ::flixel::math::FlxRect >()->y = magicY;
HXLINE( 580)				this->_charBoundaries->__get(i).StaticCast<  ::flixel::math::FlxRect >()->width = (textW - lastW);
HXLINE( 581)				this->_charBoundaries->__get(i).StaticCast<  ::flixel::math::FlxRect >()->height = textH;
HXLINE( 582)				lastW = textW;
            			}
            		}
HXLINE( 584)		this->textField->set_text(Text);
HXLINE( 585)		this->onSetTextCheck();
HXLINE( 586)		return return_text;
            	}


int FlxInputText_obj::getCharIndexAtPoint(Float X,Float Y){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_590_getCharIndexAtPoint)
HXLINE( 591)		int i = 0;
HXLINE( 593)		X = (X + (this->textField->get_scrollH() + 2));
HXLINE( 597)		bool _hx_tmp;
HXDLIN( 597)		if (::hx::IsNotNull( this->_charBoundaries )) {
HXLINE( 597)			_hx_tmp = (this->_charBoundaries->length > 0);
            		}
            		else {
HXLINE( 597)			_hx_tmp = false;
            		}
HXDLIN( 597)		if (_hx_tmp) {
HXLINE( 599)			Float _hx_tmp = this->textField->get_textWidth();
HXDLIN( 599)			if ((_hx_tmp <= this->textField->get_width())) {
HXLINE( 601)				::String _hx_switch_0 = this->getAlignStr();
            				if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 607)					Float X1 = (X - (this->textField->get_width() / ( (Float)(2) )));
HXDLIN( 607)					X = (X1 + (this->textField->get_textWidth() / ( (Float)(2) )));
HXDLIN( 607)					goto _hx_goto_17;
            				}
            				if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 604)					Float X1 = (X - this->textField->get_width());
HXDLIN( 604)					X = (X1 + this->textField->get_textWidth());
HXDLIN( 604)					goto _hx_goto_17;
            				}
            				/* default */{
            				}
            				_hx_goto_17:;
            			}
            		}
HXLINE( 615)		if (::hx::IsNotNull( this->_charBoundaries )) {
HXLINE( 617)			int _g = 0;
HXDLIN( 617)			::Array< ::Dynamic> _g1 = this->_charBoundaries;
HXDLIN( 617)			while((_g < _g1->length)){
HXLINE( 617)				 ::flixel::math::FlxRect r = _g1->__get(_g).StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 617)				_g = (_g + 1);
HXLINE( 619)				bool _hx_tmp;
HXDLIN( 619)				if ((X >= r->x)) {
HXLINE( 619)					_hx_tmp = (X <= (r->x + r->width));
            				}
            				else {
HXLINE( 619)					_hx_tmp = false;
            				}
HXDLIN( 619)				if (_hx_tmp) {
HXLINE( 621)					return i;
            				}
HXLINE( 623)				i = (i + 1);
            			}
            		}
HXLINE( 628)		bool _hx_tmp1;
HXDLIN( 628)		if (::hx::IsNotNull( this->_charBoundaries )) {
HXLINE( 628)			_hx_tmp1 = (this->_charBoundaries->length > 0);
            		}
            		else {
HXLINE( 628)			_hx_tmp1 = false;
            		}
HXDLIN( 628)		if (_hx_tmp1) {
HXLINE( 630)			if ((X > this->textField->get_textWidth())) {
HXLINE( 632)				return this->_charBoundaries->length;
            			}
            		}
HXLINE( 637)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxInputText_obj,getCharIndexAtPoint,return )

void FlxInputText_obj::prepareCharBoundaries(int numChars){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_641_prepareCharBoundaries)
HXLINE( 642)		if (::hx::IsNull( this->_charBoundaries )) {
HXLINE( 644)			this->_charBoundaries = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 647)		if ((this->_charBoundaries->length > numChars)) {
HXLINE( 649)			int diff = (this->_charBoundaries->length - numChars);
HXLINE( 650)			{
HXLINE( 650)				int _g = 0;
HXDLIN( 650)				int _g1 = diff;
HXDLIN( 650)				while((_g < _g1)){
HXLINE( 650)					_g = (_g + 1);
HXDLIN( 650)					int i = (_g - 1);
HXLINE( 652)					this->_charBoundaries->pop().StaticCast<  ::flixel::math::FlxRect >();
            				}
            			}
            		}
HXLINE( 656)		{
HXLINE( 656)			int _g = 0;
HXDLIN( 656)			int _g1 = numChars;
HXDLIN( 656)			while((_g < _g1)){
HXLINE( 656)				_g = (_g + 1);
HXDLIN( 656)				int i = (_g - 1);
HXLINE( 658)				if (((this->_charBoundaries->length - 1) < i)) {
HXLINE( 660)					::Array< ::Dynamic> _hx_tmp = this->_charBoundaries;
HXDLIN( 660)					 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 660)					_this->x = ( (Float)(0) );
HXDLIN( 660)					_this->y = ( (Float)(0) );
HXDLIN( 660)					_this->width = ( (Float)(0) );
HXDLIN( 660)					_this->height = ( (Float)(0) );
HXDLIN( 660)					 ::flixel::math::FlxRect rect = _this;
HXDLIN( 660)					rect->_inPool = false;
HXDLIN( 660)					_hx_tmp->push(rect);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,prepareCharBoundaries,(void))

void FlxInputText_obj::onSetTextCheck(){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_669_onSetTextCheck)
HXLINE( 671)		 ::openfl::geom::Rectangle boundary = null();
HXLINE( 672)		if ((this->caretIndex == -1)) {
HXLINE( 674)			boundary = this->getCharBoundaries((this->text.length - 1));
            		}
            		else {
HXLINE( 678)			boundary = this->getCharBoundaries(this->caretIndex);
            		}
HXLINE( 681)		if (::hx::IsNotNull( boundary )) {
HXLINE( 685)			int diffW = 0;
HXLINE( 686)			Float _hx_tmp = boundary->get_right();
HXDLIN( 686)			int _hx_tmp1 = this->lastScroll;
HXDLIN( 686)			if ((_hx_tmp > ((_hx_tmp1 + this->textField->get_width()) - ( (Float)(2) )))) {
HXLINE( 688)				Float diffW1 = (this->textField->get_width() - ( (Float)(2) ));
HXDLIN( 688)				diffW = -(::Std_obj::_hx_int((diffW1 - boundary->get_right())));
            			}
            			else {
HXLINE( 690)				Float _hx_tmp = boundary->get_left();
HXDLIN( 690)				if ((_hx_tmp < this->lastScroll)) {
HXLINE( 692)					diffW = (::Std_obj::_hx_int(boundary->get_left()) - 2);
            				}
            				else {
HXLINE( 696)					diffW = this->lastScroll;
            				}
            			}
HXLINE( 700)			this->textField->set_scrollH(diffW);
HXLINE( 702)			this->calcFrame(null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInputText_obj,onSetTextCheck,(void))

void FlxInputText_obj::calcFrame(::hx::Null< bool >  __o_RunOnCpp){
            		bool RunOnCpp = __o_RunOnCpp.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_75fddae7e64ce41a_713_calcFrame)
HXLINE( 714)		this->super::calcFrame(RunOnCpp);
HXLINE( 716)		if (::hx::IsNotNull( this->fieldBorderSprite )) {
HXLINE( 718)			if ((this->fieldBorderThickness > 0)) {
HXLINE( 720)				 ::flixel::FlxSprite _hx_tmp = this->fieldBorderSprite;
HXDLIN( 720)				Float _hx_tmp1 = this->get_width();
HXDLIN( 720)				int _hx_tmp2 = ::Std_obj::_hx_int((_hx_tmp1 + (this->fieldBorderThickness * 2)));
HXDLIN( 720)				Float _hx_tmp3 = this->get_height();
HXDLIN( 720)				int _hx_tmp4 = ::Std_obj::_hx_int((_hx_tmp3 + (this->fieldBorderThickness * 2)));
HXDLIN( 720)				_hx_tmp->makeGraphic(_hx_tmp2,_hx_tmp4,this->fieldBorderColor,null(),null());
HXLINE( 721)				this->fieldBorderSprite->set_x((this->x - ( (Float)(this->fieldBorderThickness) )));
HXLINE( 722)				this->fieldBorderSprite->set_y((this->y - ( (Float)(this->fieldBorderThickness) )));
            			}
            			else {
HXLINE( 724)				if ((this->fieldBorderThickness == 0)) {
HXLINE( 726)					this->fieldBorderSprite->set_visible(false);
            				}
            			}
            		}
HXLINE( 730)		if (::hx::IsNotNull( this->backgroundSprite )) {
HXLINE( 732)			if (this->background) {
HXLINE( 734)				 ::flixel::FlxSprite _hx_tmp = this->backgroundSprite;
HXDLIN( 734)				int _hx_tmp1 = ::Std_obj::_hx_int(this->get_width());
HXDLIN( 734)				int _hx_tmp2 = ::Std_obj::_hx_int(this->get_height());
HXDLIN( 734)				_hx_tmp->makeGraphic(_hx_tmp1,_hx_tmp2,this->backgroundColor,null(),null());
HXLINE( 735)				this->backgroundSprite->set_x(this->x);
HXLINE( 736)				this->backgroundSprite->set_y(this->y);
            			}
            			else {
HXLINE( 740)				this->backgroundSprite->set_visible(false);
            			}
            		}
HXLINE( 744)		if (::hx::IsNotNull( this->caret )) {
HXLINE( 749)			int cw = this->caretWidth;
HXLINE( 750)			int ch = ::Std_obj::_hx_int(( (Float)((::Std_obj::_hx_int(( (Float)(this->_defaultFormat->size) )) + 2)) ));
HXLINE( 753)			int borderC = (-16777216 | (this->borderColor & 16777215));
HXLINE( 754)			int caretC = (-16777216 | (this->caretColor & 16777215));
HXLINE( 757)			::String caretKey = ((((((((HX_("caret",83,f9,1f,41) + cw) + HX_("x",78,00,00,00)) + ch) + HX_("c:",77,56,00,00)) + caretC) + HX_("b:",98,55,00,00)) + ::Std_obj::string(this->borderStyle)) + HX_(",",2c,00,00,00));
HXDLIN( 757)			::String caretKey1 = (((caretKey + this->borderSize) + HX_(",",2c,00,00,00)) + borderC);
HXLINE( 758)			switch((int)(this->borderStyle->_hx_getIndex())){
            				case (int)0: {
HXLINE( 762)					this->caret->makeGraphic(cw,ch,caretC,false,caretKey1);
HXLINE( 763)					{
HXLINE( 763)						 ::flixel::math::FlxBasePoint this1 = this->caret->offset;
HXDLIN( 763)						this1->set_x(this->caret->offset->set_y(( (Float)(0) )));
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 767)					cw = (cw + ::Std_obj::_hx_int(this->borderSize));
HXLINE( 768)					ch = (ch + ::Std_obj::_hx_int(this->borderSize));
HXLINE( 769)					this->caret->makeGraphic(cw,ch,0,false,caretKey1);
HXLINE( 770)					Float r = this->borderSize;
HXDLIN( 770)					Float r1 = this->borderSize;
HXDLIN( 770)					int r2 = this->caretWidth;
HXDLIN( 770)					 ::openfl::geom::Rectangle r3 =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,r,r1,r2,::Std_obj::_hx_int(( (Float)((::Std_obj::_hx_int(( (Float)(this->_defaultFormat->size) )) + 2)) )));
HXLINE( 771)					this->caret->get_pixels()->fillRect(r3,borderC);
HXLINE( 772)					r3->x = (r3->y = ( (Float)(0) ));
HXLINE( 773)					this->caret->get_pixels()->fillRect(r3,caretC);
HXLINE( 774)					{
HXLINE( 774)						 ::flixel::math::FlxBasePoint this1 = this->caret->offset;
HXDLIN( 774)						this1->set_x(this->caret->offset->set_y(( (Float)(0) )));
            					}
            				}
            				break;
            				case (int)2: case (int)3: {
HXLINE( 778)					cw = (cw + ::Std_obj::_hx_int((this->borderSize * ( (Float)(2) ))));
HXLINE( 779)					ch = (ch + ::Std_obj::_hx_int((this->borderSize * ( (Float)(2) ))));
HXLINE( 780)					this->caret->makeGraphic(cw,ch,borderC,false,caretKey1);
HXLINE( 781)					Float r = this->borderSize;
HXDLIN( 781)					Float r1 = this->borderSize;
HXDLIN( 781)					int r2 = this->caretWidth;
HXDLIN( 781)					 ::openfl::geom::Rectangle r3 =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,r,r1,r2,::Std_obj::_hx_int(( (Float)((::Std_obj::_hx_int(( (Float)(this->_defaultFormat->size) )) + 2)) )));
HXLINE( 782)					this->caret->get_pixels()->fillRect(r3,caretC);
HXLINE( 784)					{
HXLINE( 784)						 ::flixel::math::FlxBasePoint this1 = this->caret->offset;
HXDLIN( 784)						this1->set_x(this->caret->offset->set_y(this->borderSize));
            					}
            				}
            				break;
            			}
HXLINE( 787)			this->caret->set_width(( (Float)(cw) ));
HXLINE( 788)			this->caret->set_height(( (Float)(ch) ));
HXLINE( 790)			this->set_caretIndex(this->caretIndex);
            		}
            	}


void FlxInputText_obj::toggleCaret( ::flixel::util::FlxTimer timer){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_799_toggleCaret)
HXDLIN( 799)		this->caret->set_visible(!(this->caret->visible));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,toggleCaret,(void))

::String FlxInputText_obj::filter(::String text){
            	HX_GC_STACKFRAME(&_hx_pos_75fddae7e64ce41a_807_filter)
HXLINE( 808)		if ((this->forceCase == 1)) {
HXLINE( 810)			text = text.toUpperCase();
            		}
            		else {
HXLINE( 812)			if ((this->forceCase == 2)) {
HXLINE( 814)				text = text.toLowerCase();
            			}
            		}
HXLINE( 817)		if ((this->filterMode != 0)) {
HXLINE( 819)			 ::EReg pattern;
HXLINE( 820)			switch((int)(this->filterMode)){
            				case (int)1: {
HXLINE( 823)					pattern =  ::EReg_obj::__alloc( HX_CTX ,HX_("[^a-zA-Z]*",50,38,19,1d),HX_("g",67,00,00,00));
            				}
            				break;
            				case (int)2: {
HXLINE( 825)					pattern =  ::EReg_obj::__alloc( HX_CTX ,HX_("[^0-9]*",46,25,d3,1e),HX_("g",67,00,00,00));
            				}
            				break;
            				case (int)3: {
HXLINE( 827)					pattern =  ::EReg_obj::__alloc( HX_CTX ,HX_("[^a-zA-Z0-9]*",86,f4,79,aa),HX_("g",67,00,00,00));
            				}
            				break;
            				case (int)4: {
HXLINE( 829)					pattern = this->customFilterPattern;
            				}
            				break;
            				default:{
HXLINE( 831)					HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,((HX_("FlxInputText: Unknown filterMode (",04,c7,17,56) + this->filterMode) + HX_(")",29,00,00,00)),null()));
            				}
            			}
HXLINE( 833)			text = pattern->replace(text,HX_("",00,00,00,00));
            		}
HXLINE( 835)		return text;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,filter,return )

::cpp::VirtualArray FlxInputText_obj::set_params(::cpp::VirtualArray p){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_839_set_params)
HXLINE( 840)		this->params = p;
HXLINE( 841)		if (::hx::IsNull( this->params )) {
HXLINE( 843)			this->params = ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE( 845)		 ::Dynamic namedValue =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("value",71,7f,b8,31),this->text)
            			->setFixed(1,HX_("name",4b,72,ff,48),HX_("value",71,7f,b8,31)));
HXLINE( 846)		this->params->push(namedValue);
HXLINE( 847)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_params,return )

Float FlxInputText_obj::set_x(Float X){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_851_set_x)
HXLINE( 852)		bool _hx_tmp;
HXDLIN( 852)		if (::hx::IsNotNull( this->fieldBorderSprite )) {
HXLINE( 852)			_hx_tmp = (this->fieldBorderThickness > 0);
            		}
            		else {
HXLINE( 852)			_hx_tmp = false;
            		}
HXDLIN( 852)		if (_hx_tmp) {
HXLINE( 854)			this->fieldBorderSprite->set_x((X - ( (Float)(this->fieldBorderThickness) )));
            		}
HXLINE( 856)		bool _hx_tmp1;
HXDLIN( 856)		if (::hx::IsNotNull( this->backgroundSprite )) {
HXLINE( 856)			_hx_tmp1 = this->background;
            		}
            		else {
HXLINE( 856)			_hx_tmp1 = false;
            		}
HXDLIN( 856)		if (_hx_tmp1) {
HXLINE( 858)			this->backgroundSprite->set_x(X);
            		}
HXLINE( 860)		return this->super::set_x(X);
            	}


Float FlxInputText_obj::set_y(Float Y){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_864_set_y)
HXLINE( 865)		bool _hx_tmp;
HXDLIN( 865)		if (::hx::IsNotNull( this->fieldBorderSprite )) {
HXLINE( 865)			_hx_tmp = (this->fieldBorderThickness > 0);
            		}
            		else {
HXLINE( 865)			_hx_tmp = false;
            		}
HXDLIN( 865)		if (_hx_tmp) {
HXLINE( 867)			this->fieldBorderSprite->set_y((Y - ( (Float)(this->fieldBorderThickness) )));
            		}
HXLINE( 869)		bool _hx_tmp1;
HXDLIN( 869)		if (::hx::IsNotNull( this->backgroundSprite )) {
HXLINE( 869)			_hx_tmp1 = this->background;
            		}
            		else {
HXLINE( 869)			_hx_tmp1 = false;
            		}
HXDLIN( 869)		if (_hx_tmp1) {
HXLINE( 871)			this->backgroundSprite->set_y(Y);
            		}
HXLINE( 873)		return this->super::set_y(Y);
            	}


bool FlxInputText_obj::set_hasFocus(bool newFocus){
            	HX_GC_STACKFRAME(&_hx_pos_75fddae7e64ce41a_877_set_hasFocus)
HXLINE( 878)		if (newFocus) {
HXLINE( 880)			if ((this->hasFocus != newFocus)) {
HXLINE( 882)				this->_caretTimer =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.5),this->toggleCaret_dyn(),0);
HXLINE( 883)				this->caret->set_visible(true);
HXLINE( 884)				this->set_caretIndex(this->text.length);
            			}
            		}
            		else {
HXLINE( 890)			this->caret->set_visible(false);
HXLINE( 891)			if (::hx::IsNotNull( this->_caretTimer )) {
HXLINE( 893)				this->_caretTimer->cancel();
            			}
            		}
HXLINE( 897)		if ((newFocus != this->hasFocus)) {
HXLINE( 899)			this->calcFrame(null());
            		}
HXLINE( 901)		return (this->hasFocus = newFocus);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_hasFocus,return )

::String FlxInputText_obj::getAlignStr(){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_905_getAlignStr)
HXLINE( 906)		::String alignStr = HX_("left",07,08,b0,47);
HXLINE( 907)		bool _hx_tmp;
HXDLIN( 907)		if (::hx::IsNotNull( this->_defaultFormat )) {
HXLINE( 907)			_hx_tmp = ::hx::IsNotNull( this->_defaultFormat->align );
            		}
            		else {
HXLINE( 907)			_hx_tmp = false;
            		}
HXDLIN( 907)		if (_hx_tmp) {
HXLINE( 909)			alignStr = ::flixel::text::_FlxText::FlxTextAlign_Impl__obj::fromOpenFL(this->_defaultFormat->align);
            		}
HXLINE( 911)		return alignStr;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInputText_obj,getAlignStr,return )

int FlxInputText_obj::set_caretIndex(int newCaretIndex){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_915_set_caretIndex)
HXLINE( 916)		Float offx = ( (Float)(0) );
HXLINE( 918)		::String alignStr = this->getAlignStr();
HXLINE( 920)		::String _hx_switch_0 = alignStr;
            		if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 929)			Float offx1 = (this->textField->get_width() - ( (Float)(2) ));
HXDLIN( 929)			Float offx2 = ((offx1 - this->textField->get_textWidth()) / ( (Float)(2) ));
HXDLIN( 929)			offx = (offx2 + (( (Float)(this->textField->get_scrollH()) ) / ( (Float)(2) )));
HXLINE( 931)			if ((offx <= 1)) {
HXLINE( 932)				offx = ( (Float)(0) );
            			}
HXLINE( 927)			goto _hx_goto_32;
            		}
            		if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 923)			Float offx1 = (this->textField->get_width() - ( (Float)(2) ));
HXDLIN( 923)			offx = ((offx1 - this->textField->get_textWidth()) - ( (Float)(2) ));
HXLINE( 924)			if ((offx < 0)) {
HXLINE( 925)				offx = ( (Float)(0) );
            			}
HXLINE( 922)			goto _hx_goto_32;
            		}
            		/* default */{
HXLINE( 935)			offx = ( (Float)(0) );
            		}
            		_hx_goto_32:;
HXLINE( 938)		this->caretIndex = newCaretIndex;
HXLINE( 941)		if ((this->caretIndex > (this->text.length + 1))) {
HXLINE( 943)			this->caretIndex = -1;
            		}
HXLINE( 947)		if ((this->caretIndex != -1)) {
HXLINE( 949)			 ::openfl::geom::Rectangle boundaries = null();
HXLINE( 952)			if ((this->caretIndex < this->text.length)) {
HXLINE( 954)				boundaries = this->getCharBoundaries(this->caretIndex);
HXLINE( 955)				if (::hx::IsNotNull( boundaries )) {
HXLINE( 957)					 ::flixel::FlxSprite _hx_tmp = this->caret;
HXDLIN( 957)					Float _hx_tmp1 = (offx + boundaries->get_left());
HXDLIN( 957)					_hx_tmp->set_x((_hx_tmp1 + this->x));
HXLINE( 958)					 ::flixel::FlxSprite _hx_tmp2 = this->caret;
HXDLIN( 958)					Float _hx_tmp3 = boundaries->get_top();
HXDLIN( 958)					_hx_tmp2->set_y((_hx_tmp3 + this->y));
            				}
            			}
            			else {
HXLINE( 964)				boundaries = this->getCharBoundaries((this->caretIndex - 1));
HXLINE( 965)				if (::hx::IsNotNull( boundaries )) {
HXLINE( 967)					 ::flixel::FlxSprite _hx_tmp = this->caret;
HXDLIN( 967)					Float _hx_tmp1 = (offx + boundaries->get_right());
HXDLIN( 967)					_hx_tmp->set_x((_hx_tmp1 + this->x));
HXLINE( 968)					 ::flixel::FlxSprite _hx_tmp2 = this->caret;
HXDLIN( 968)					Float _hx_tmp3 = boundaries->get_top();
HXDLIN( 968)					_hx_tmp2->set_y((_hx_tmp3 + this->y));
            				}
            				else {
HXLINE( 971)					if ((this->text.length == 0)) {
HXLINE( 974)						this->caret->set_x(((this->x + offx) + 2));
HXLINE( 975)						this->caret->set_y((this->y + 2));
            					}
            				}
            			}
            		}
HXLINE( 981)		 ::flixel::FlxSprite fh = this->caret;
HXDLIN( 981)		Float fh1 = fh->x;
HXDLIN( 981)		fh->set_x((fh1 - ( (Float)(this->textField->get_scrollH()) )));
HXLINE( 985)		bool _hx_tmp;
HXDLIN( 985)		if ((this->lines == 1)) {
HXLINE( 985)			Float _hx_tmp1 = this->caret->x;
HXDLIN( 985)			Float _hx_tmp2 = (_hx_tmp1 + this->caret->get_width());
HXDLIN( 985)			Float _hx_tmp3 = this->x;
HXDLIN( 985)			_hx_tmp = (_hx_tmp2 > (_hx_tmp3 + this->get_width()));
            		}
            		else {
HXLINE( 985)			_hx_tmp = false;
            		}
HXDLIN( 985)		if (_hx_tmp) {
HXLINE( 987)			 ::flixel::FlxSprite _hx_tmp = this->caret;
HXDLIN( 987)			Float _hx_tmp1 = this->x;
HXDLIN( 987)			_hx_tmp->set_x(((_hx_tmp1 + this->get_width()) - ( (Float)(2) )));
            		}
HXLINE( 990)		return this->caretIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_caretIndex,return )

int FlxInputText_obj::set_forceCase(int Value){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_994_set_forceCase)
HXLINE( 995)		this->forceCase = Value;
HXLINE( 996)		this->set_text(this->filter(this->text));
HXLINE( 997)		return this->forceCase;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_forceCase,return )

int FlxInputText_obj::set_size(int Value){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_1001_set_size)
HXLINE(1002)		this->super::set_size(Value);
HXLINE(1003)		 ::flixel::FlxSprite _hx_tmp = this->caret;
HXDLIN(1003)		_hx_tmp->makeGraphic(1,::Std_obj::_hx_int(( (Float)((::Std_obj::_hx_int(( (Float)(this->_defaultFormat->size) )) + 2)) )),null(),null(),null());
HXLINE(1004)		return Value;
            	}


int FlxInputText_obj::set_maxLength(int Value){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_1008_set_maxLength)
HXLINE(1009)		this->maxLength = Value;
HXLINE(1010)		if ((this->text.length > this->maxLength)) {
HXLINE(1012)			this->set_text(this->text.substring(0,this->maxLength));
            		}
HXLINE(1014)		return this->maxLength;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_maxLength,return )

int FlxInputText_obj::set_lines(int Value){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_1018_set_lines)
HXLINE(1019)		if ((Value == 0)) {
HXLINE(1020)			return 0;
            		}
HXLINE(1022)		if ((Value > 1)) {
HXLINE(1024)			this->textField->set_wordWrap(true);
HXLINE(1025)			this->textField->set_multiline(true);
            		}
            		else {
HXLINE(1029)			this->textField->set_wordWrap(false);
HXLINE(1030)			this->textField->set_multiline(false);
            		}
HXLINE(1033)		this->lines = Value;
HXLINE(1034)		this->calcFrame(null());
HXLINE(1035)		return this->lines;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_lines,return )

bool FlxInputText_obj::get_passwordMode(){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_1040_get_passwordMode)
HXDLIN(1040)		return this->textField->get_displayAsPassword();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInputText_obj,get_passwordMode,return )

bool FlxInputText_obj::set_passwordMode(bool value){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_1044_set_passwordMode)
HXLINE(1045)		this->textField->set_displayAsPassword(value);
HXLINE(1046)		this->calcFrame(null());
HXLINE(1047)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_passwordMode,return )

int FlxInputText_obj::set_filterMode(int Value){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_1051_set_filterMode)
HXLINE(1052)		this->filterMode = Value;
HXLINE(1053)		this->set_text(this->filter(this->text));
HXLINE(1054)		return this->filterMode;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_filterMode,return )

int FlxInputText_obj::set_fieldBorderColor(int Value){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_1058_set_fieldBorderColor)
HXLINE(1059)		this->fieldBorderColor = Value;
HXLINE(1060)		this->calcFrame(null());
HXLINE(1061)		return this->fieldBorderColor;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_fieldBorderColor,return )

int FlxInputText_obj::set_fieldBorderThickness(int Value){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_1065_set_fieldBorderThickness)
HXLINE(1066)		this->fieldBorderThickness = Value;
HXLINE(1067)		this->calcFrame(null());
HXLINE(1068)		return this->fieldBorderThickness;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_fieldBorderThickness,return )

int FlxInputText_obj::set_backgroundColor(int Value){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_1072_set_backgroundColor)
HXLINE(1073)		this->backgroundColor = Value;
HXLINE(1074)		this->calcFrame(null());
HXLINE(1075)		return this->backgroundColor;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_backgroundColor,return )

int FlxInputText_obj::NO_FILTER;

int FlxInputText_obj::ONLY_ALPHA;

int FlxInputText_obj::ONLY_NUMERIC;

int FlxInputText_obj::ONLY_ALPHANUMERIC;

int FlxInputText_obj::CUSTOM_FILTER;

int FlxInputText_obj::ALL_CASES;

int FlxInputText_obj::UPPER_CASE;

int FlxInputText_obj::LOWER_CASE;

::String FlxInputText_obj::BACKSPACE_ACTION;

::String FlxInputText_obj::DELETE_ACTION;

::String FlxInputText_obj::ENTER_ACTION;

::String FlxInputText_obj::INPUT_ACTION;

::String FlxInputText_obj::PASTE_ACTION;

::String FlxInputText_obj::COPY_ACTION;

::String FlxInputText_obj::CUT_ACTION;


::hx::ObjectPtr< FlxInputText_obj > FlxInputText_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_Width,::String Text,::hx::Null< int >  __o_size,::hx::Null< int >  __o_TextColor,::hx::Null< int >  __o_BackgroundColor,::hx::Null< bool >  __o_EmbeddedFont) {
	::hx::ObjectPtr< FlxInputText_obj > __this = new FlxInputText_obj();
	__this->__construct(__o_X,__o_Y,__o_Width,Text,__o_size,__o_TextColor,__o_BackgroundColor,__o_EmbeddedFont);
	return __this;
}

::hx::ObjectPtr< FlxInputText_obj > FlxInputText_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_Width,::String Text,::hx::Null< int >  __o_size,::hx::Null< int >  __o_TextColor,::hx::Null< int >  __o_BackgroundColor,::hx::Null< bool >  __o_EmbeddedFont) {
	FlxInputText_obj *__this = (FlxInputText_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxInputText_obj), true, "flixel.addons.ui.FlxInputText"));
	*(void **)__this = FlxInputText_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,__o_Width,Text,__o_size,__o_TextColor,__o_BackgroundColor,__o_EmbeddedFont);
	return __this;
}

FlxInputText_obj::FlxInputText_obj()
{
}

void FlxInputText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxInputText);
	HX_MARK_MEMBER_NAME(customFilterPattern,"customFilterPattern");
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(caretColor,"caretColor");
	HX_MARK_MEMBER_NAME(caretWidth,"caretWidth");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(hasFocus,"hasFocus");
	HX_MARK_MEMBER_NAME(caretIndex,"caretIndex");
	HX_MARK_MEMBER_NAME(focusGained,"focusGained");
	HX_MARK_MEMBER_NAME(focusLost,"focusLost");
	HX_MARK_MEMBER_NAME(forceCase,"forceCase");
	HX_MARK_MEMBER_NAME(maxLength,"maxLength");
	HX_MARK_MEMBER_NAME(lines,"lines");
	HX_MARK_MEMBER_NAME(filterMode,"filterMode");
	HX_MARK_MEMBER_NAME(fieldBorderColor,"fieldBorderColor");
	HX_MARK_MEMBER_NAME(fieldBorderThickness,"fieldBorderThickness");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(backgroundSprite,"backgroundSprite");
	HX_MARK_MEMBER_NAME(_caretTimer,"_caretTimer");
	HX_MARK_MEMBER_NAME(caret,"caret");
	HX_MARK_MEMBER_NAME(fieldBorderSprite,"fieldBorderSprite");
	HX_MARK_MEMBER_NAME(_scrollBoundIndeces,"_scrollBoundIndeces");
	HX_MARK_MEMBER_NAME(_charBoundaries,"_charBoundaries");
	HX_MARK_MEMBER_NAME(lastScroll,"lastScroll");
	 ::flixel::text::FlxText_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxInputText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(customFilterPattern,"customFilterPattern");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(caretColor,"caretColor");
	HX_VISIT_MEMBER_NAME(caretWidth,"caretWidth");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(hasFocus,"hasFocus");
	HX_VISIT_MEMBER_NAME(caretIndex,"caretIndex");
	HX_VISIT_MEMBER_NAME(focusGained,"focusGained");
	HX_VISIT_MEMBER_NAME(focusLost,"focusLost");
	HX_VISIT_MEMBER_NAME(forceCase,"forceCase");
	HX_VISIT_MEMBER_NAME(maxLength,"maxLength");
	HX_VISIT_MEMBER_NAME(lines,"lines");
	HX_VISIT_MEMBER_NAME(filterMode,"filterMode");
	HX_VISIT_MEMBER_NAME(fieldBorderColor,"fieldBorderColor");
	HX_VISIT_MEMBER_NAME(fieldBorderThickness,"fieldBorderThickness");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(backgroundSprite,"backgroundSprite");
	HX_VISIT_MEMBER_NAME(_caretTimer,"_caretTimer");
	HX_VISIT_MEMBER_NAME(caret,"caret");
	HX_VISIT_MEMBER_NAME(fieldBorderSprite,"fieldBorderSprite");
	HX_VISIT_MEMBER_NAME(_scrollBoundIndeces,"_scrollBoundIndeces");
	HX_VISIT_MEMBER_NAME(_charBoundaries,"_charBoundaries");
	HX_VISIT_MEMBER_NAME(lastScroll,"lastScroll");
	 ::flixel::text::FlxText_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxInputText_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { return ::hx::Val( lines ); }
		if (HX_FIELD_EQ(inName,"caret") ) { return ::hx::Val( caret ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return ::hx::Val( params ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"filter") ) { return ::hx::Val( filter_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return ::hx::Val( callback ); }
		if (HX_FIELD_EQ(inName,"hasFocus") ) { return ::hx::Val( hasFocus ); }
		if (HX_FIELD_EQ(inName,"onChange") ) { return ::hx::Val( onChange_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return ::hx::Val( set_size_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"focusLost") ) { return ::hx::Val( focusLost ); }
		if (HX_FIELD_EQ(inName,"forceCase") ) { return ::hx::Val( forceCase ); }
		if (HX_FIELD_EQ(inName,"maxLength") ) { return ::hx::Val( maxLength ); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return ::hx::Val( onKeyDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return ::hx::Val( calcFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_lines") ) { return ::hx::Val( set_lines_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return ::hx::Val( background ); }
		if (HX_FIELD_EQ(inName,"caretColor") ) { return ::hx::Val( caretColor ); }
		if (HX_FIELD_EQ(inName,"caretWidth") ) { return ::hx::Val( caretWidth ); }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { return ::hx::Val( caretIndex ); }
		if (HX_FIELD_EQ(inName,"filterMode") ) { return ::hx::Val( filterMode ); }
		if (HX_FIELD_EQ(inName,"lastScroll") ) { return ::hx::Val( lastScroll ); }
		if (HX_FIELD_EQ(inName,"drawSprite") ) { return ::hx::Val( drawSprite_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_params") ) { return ::hx::Val( set_params_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"focusGained") ) { return ::hx::Val( focusGained ); }
		if (HX_FIELD_EQ(inName,"_caretTimer") ) { return ::hx::Val( _caretTimer ); }
		if (HX_FIELD_EQ(inName,"toggleCaret") ) { return ::hx::Val( toggleCaret_dyn() ); }
		if (HX_FIELD_EQ(inName,"getAlignStr") ) { return ::hx::Val( getAlignStr_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"passwordMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_passwordMode() ); }
		if (HX_FIELD_EQ(inName,"set_hasFocus") ) { return ::hx::Val( set_hasFocus_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getCaretIndex") ) { return ::hx::Val( getCaretIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_forceCase") ) { return ::hx::Val( set_forceCase_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxLength") ) { return ::hx::Val( set_maxLength_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_caretColor") ) { return ::hx::Val( set_caretColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_caretWidth") ) { return ::hx::Val( set_caretWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"onSetTextCheck") ) { return ::hx::Val( onSetTextCheck_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_caretIndex") ) { return ::hx::Val( set_caretIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_filterMode") ) { return ::hx::Val( set_filterMode_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return ::hx::Val( backgroundColor ); }
		if (HX_FIELD_EQ(inName,"_charBoundaries") ) { return ::hx::Val( _charBoundaries ); }
		if (HX_FIELD_EQ(inName,"insertSubstring") ) { return ::hx::Val( insertSubstring_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fieldBorderColor") ) { return ::hx::Val( fieldBorderColor ); }
		if (HX_FIELD_EQ(inName,"backgroundSprite") ) { return ::hx::Val( backgroundSprite ); }
		if (HX_FIELD_EQ(inName,"mouseOverlapping") ) { return ::hx::Val( mouseOverlapping_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_passwordMode") ) { return ::hx::Val( get_passwordMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_passwordMode") ) { return ::hx::Val( set_passwordMode_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fieldBorderSprite") ) { return ::hx::Val( fieldBorderSprite ); }
		if (HX_FIELD_EQ(inName,"getCharBoundaries") ) { return ::hx::Val( getCharBoundaries_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"customFilterPattern") ) { return ::hx::Val( customFilterPattern ); }
		if (HX_FIELD_EQ(inName,"_scrollBoundIndeces") ) { return ::hx::Val( _scrollBoundIndeces ); }
		if (HX_FIELD_EQ(inName,"getCharIndexAtPoint") ) { return ::hx::Val( getCharIndexAtPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return ::hx::Val( set_backgroundColor_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fieldBorderThickness") ) { return ::hx::Val( fieldBorderThickness ); }
		if (HX_FIELD_EQ(inName,"set_fieldBorderColor") ) { return ::hx::Val( set_fieldBorderColor_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"prepareCharBoundaries") ) { return ::hx::Val( prepareCharBoundaries_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"set_customFilterPattern") ) { return ::hx::Val( set_customFilterPattern_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"set_fieldBorderThickness") ) { return ::hx::Val( set_fieldBorderThickness_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxInputText_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_lines(inValue.Cast< int >()) );lines=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caret") ) { caret=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_params(inValue.Cast< ::cpp::VirtualArray >()) );params=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasFocus") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_hasFocus(inValue.Cast< bool >()) );hasFocus=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"focusLost") ) { focusLost=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"forceCase") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_forceCase(inValue.Cast< int >()) );forceCase=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxLength") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxLength(inValue.Cast< int >()) );maxLength=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_caretColor(inValue.Cast< int >()) );caretColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_caretWidth(inValue.Cast< int >()) );caretWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_caretIndex(inValue.Cast< int >()) );caretIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filterMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_filterMode(inValue.Cast< int >()) );filterMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastScroll") ) { lastScroll=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"focusGained") ) { focusGained=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_caretTimer") ) { _caretTimer=inValue.Cast<  ::flixel::util::FlxTimer >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"passwordMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_passwordMode(inValue.Cast< bool >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backgroundColor(inValue.Cast< int >()) );backgroundColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_charBoundaries") ) { _charBoundaries=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fieldBorderColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_fieldBorderColor(inValue.Cast< int >()) );fieldBorderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundSprite") ) { backgroundSprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fieldBorderSprite") ) { fieldBorderSprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"customFilterPattern") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_customFilterPattern(inValue.Cast<  ::EReg >()) );customFilterPattern=inValue.Cast<  ::EReg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollBoundIndeces") ) { _scrollBoundIndeces=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fieldBorderThickness") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_fieldBorderThickness(inValue.Cast< int >()) );fieldBorderThickness=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxInputText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("customFilterPattern",07,03,33,08));
	outFields->push(HX_("background",ee,93,1d,26));
	outFields->push(HX_("caretColor",e0,8c,a3,69));
	outFields->push(HX_("caretWidth",83,d1,a9,e9));
	outFields->push(HX_("params",46,fb,7a,ed));
	outFields->push(HX_("passwordMode",1e,4c,29,b6));
	outFields->push(HX_("hasFocus",1e,aa,e1,90));
	outFields->push(HX_("caretIndex",8f,b6,5b,dd));
	outFields->push(HX_("forceCase",3b,ce,fe,46));
	outFields->push(HX_("maxLength",aa,a6,92,ce));
	outFields->push(HX_("lines",ff,dd,01,75));
	outFields->push(HX_("filterMode",3b,5b,a5,54));
	outFields->push(HX_("fieldBorderColor",3d,66,ca,1d));
	outFields->push(HX_("fieldBorderThickness",4e,5b,39,33));
	outFields->push(HX_("backgroundColor",95,4e,47,0d));
	outFields->push(HX_("backgroundSprite",93,8a,2c,8e));
	outFields->push(HX_("_caretTimer",61,a8,06,02));
	outFields->push(HX_("caret",83,f9,1f,41));
	outFields->push(HX_("fieldBorderSprite",eb,25,5e,f0));
	outFields->push(HX_("_scrollBoundIndeces",d9,8f,2d,01));
	outFields->push(HX_("_charBoundaries",dd,1e,8e,62));
	outFields->push(HX_("lastScroll",03,bb,3f,12));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxInputText_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::EReg */ ,(int)offsetof(FlxInputText_obj,customFilterPattern),HX_("customFilterPattern",07,03,33,08)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxInputText_obj,callback),HX_("callback",c5,99,06,7f)},
	{::hx::fsBool,(int)offsetof(FlxInputText_obj,background),HX_("background",ee,93,1d,26)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,caretColor),HX_("caretColor",e0,8c,a3,69)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,caretWidth),HX_("caretWidth",83,d1,a9,e9)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(FlxInputText_obj,params),HX_("params",46,fb,7a,ed)},
	{::hx::fsBool,(int)offsetof(FlxInputText_obj,hasFocus),HX_("hasFocus",1e,aa,e1,90)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,caretIndex),HX_("caretIndex",8f,b6,5b,dd)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxInputText_obj,focusGained),HX_("focusGained",96,ec,66,a1)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxInputText_obj,focusLost),HX_("focusLost",dc,01,43,1f)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,forceCase),HX_("forceCase",3b,ce,fe,46)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,maxLength),HX_("maxLength",aa,a6,92,ce)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,lines),HX_("lines",ff,dd,01,75)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,filterMode),HX_("filterMode",3b,5b,a5,54)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,fieldBorderColor),HX_("fieldBorderColor",3d,66,ca,1d)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,fieldBorderThickness),HX_("fieldBorderThickness",4e,5b,39,33)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,backgroundColor),HX_("backgroundColor",95,4e,47,0d)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxInputText_obj,backgroundSprite),HX_("backgroundSprite",93,8a,2c,8e)},
	{::hx::fsObject /*  ::flixel::util::FlxTimer */ ,(int)offsetof(FlxInputText_obj,_caretTimer),HX_("_caretTimer",61,a8,06,02)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxInputText_obj,caret),HX_("caret",83,f9,1f,41)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxInputText_obj,fieldBorderSprite),HX_("fieldBorderSprite",eb,25,5e,f0)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxInputText_obj,_scrollBoundIndeces),HX_("_scrollBoundIndeces",d9,8f,2d,01)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxInputText_obj,_charBoundaries),HX_("_charBoundaries",dd,1e,8e,62)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,lastScroll),HX_("lastScroll",03,bb,3f,12)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxInputText_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxInputText_obj::NO_FILTER,HX_("NO_FILTER",36,13,4e,92)},
	{::hx::fsInt,(void *) &FlxInputText_obj::ONLY_ALPHA,HX_("ONLY_ALPHA",eb,4c,e5,a7)},
	{::hx::fsInt,(void *) &FlxInputText_obj::ONLY_NUMERIC,HX_("ONLY_NUMERIC",9a,a9,2d,5f)},
	{::hx::fsInt,(void *) &FlxInputText_obj::ONLY_ALPHANUMERIC,HX_("ONLY_ALPHANUMERIC",22,ad,7f,f5)},
	{::hx::fsInt,(void *) &FlxInputText_obj::CUSTOM_FILTER,HX_("CUSTOM_FILTER",c6,f1,56,e9)},
	{::hx::fsInt,(void *) &FlxInputText_obj::ALL_CASES,HX_("ALL_CASES",a5,06,9b,9d)},
	{::hx::fsInt,(void *) &FlxInputText_obj::UPPER_CASE,HX_("UPPER_CASE",0d,e2,06,82)},
	{::hx::fsInt,(void *) &FlxInputText_obj::LOWER_CASE,HX_("LOWER_CASE",0e,61,d8,7c)},
	{::hx::fsString,(void *) &FlxInputText_obj::BACKSPACE_ACTION,HX_("BACKSPACE_ACTION",16,76,91,d1)},
	{::hx::fsString,(void *) &FlxInputText_obj::DELETE_ACTION,HX_("DELETE_ACTION",8a,38,e3,2e)},
	{::hx::fsString,(void *) &FlxInputText_obj::ENTER_ACTION,HX_("ENTER_ACTION",5d,63,46,79)},
	{::hx::fsString,(void *) &FlxInputText_obj::INPUT_ACTION,HX_("INPUT_ACTION",ab,ae,95,20)},
	{::hx::fsString,(void *) &FlxInputText_obj::PASTE_ACTION,HX_("PASTE_ACTION",82,8a,7f,75)},
	{::hx::fsString,(void *) &FlxInputText_obj::COPY_ACTION,HX_("COPY_ACTION",40,86,6b,16)},
	{::hx::fsString,(void *) &FlxInputText_obj::CUT_ACTION,HX_("CUT_ACTION",33,a8,72,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxInputText_obj_sMemberFields[] = {
	HX_("customFilterPattern",07,03,33,08),
	HX_("set_customFilterPattern",aa,12,ea,12),
	HX_("callback",c5,99,06,7f),
	HX_("background",ee,93,1d,26),
	HX_("caretColor",e0,8c,a3,69),
	HX_("set_caretColor",9d,fd,b8,ff),
	HX_("caretWidth",83,d1,a9,e9),
	HX_("set_caretWidth",40,42,bf,7f),
	HX_("params",46,fb,7a,ed),
	HX_("hasFocus",1e,aa,e1,90),
	HX_("caretIndex",8f,b6,5b,dd),
	HX_("focusGained",96,ec,66,a1),
	HX_("focusLost",dc,01,43,1f),
	HX_("forceCase",3b,ce,fe,46),
	HX_("maxLength",aa,a6,92,ce),
	HX_("lines",ff,dd,01,75),
	HX_("filterMode",3b,5b,a5,54),
	HX_("fieldBorderColor",3d,66,ca,1d),
	HX_("fieldBorderThickness",4e,5b,39,33),
	HX_("backgroundColor",95,4e,47,0d),
	HX_("backgroundSprite",93,8a,2c,8e),
	HX_("_caretTimer",61,a8,06,02),
	HX_("caret",83,f9,1f,41),
	HX_("fieldBorderSprite",eb,25,5e,f0),
	HX_("_scrollBoundIndeces",d9,8f,2d,01),
	HX_("_charBoundaries",dd,1e,8e,62),
	HX_("lastScroll",03,bb,3f,12),
	HX_("destroy",fa,2c,86,24),
	HX_("draw",04,2c,70,42),
	HX_("drawSprite",29,57,59,05),
	HX_("update",09,86,05,87),
	HX_("mouseOverlapping",54,1f,62,db),
	HX_("onKeyDown",42,22,f2,73),
	HX_("onChange",ef,87,1f,97),
	HX_("insertSubstring",d8,df,31,11),
	HX_("getCaretIndex",c5,12,ce,39),
	HX_("getCharBoundaries",74,85,a1,8b),
	HX_("set_text",aa,e1,11,7b),
	HX_("getCharIndexAtPoint",17,ee,9c,aa),
	HX_("prepareCharBoundaries",25,fa,4d,3a),
	HX_("onSetTextCheck",98,48,e3,2c),
	HX_("calcFrame",58,93,8c,f9),
	HX_("toggleCaret",4f,b1,e6,68),
	HX_("filter",b8,1f,35,85),
	HX_("set_params",83,09,80,e1),
	HX_("set_x",5b,9b,2f,7a),
	HX_("set_y",5c,9b,2f,7a),
	HX_("set_hasFocus",9b,81,f4,5a),
	HX_("getAlignStr",a2,95,d2,ef),
	HX_("set_caretIndex",4c,27,71,73),
	HX_("set_forceCase",1e,84,68,4d),
	HX_("set_size",be,b5,6b,7a),
	HX_("set_maxLength",8d,5c,fc,d4),
	HX_("set_lines",62,26,fc,9b),
	HX_("get_passwordMode",a7,38,c8,ba),
	HX_("set_passwordMode",1b,26,0a,11),
	HX_("set_filterMode",f8,cb,ba,ea),
	HX_("set_fieldBorderColor",ba,82,ec,08),
	HX_("set_fieldBorderThickness",4b,fa,af,88),
	HX_("set_backgroundColor",b8,10,ef,d4),
	::String(null()) };

static void FlxInputText_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxInputText_obj::NO_FILTER,"NO_FILTER");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ONLY_ALPHA,"ONLY_ALPHA");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ONLY_NUMERIC,"ONLY_NUMERIC");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ONLY_ALPHANUMERIC,"ONLY_ALPHANUMERIC");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::CUSTOM_FILTER,"CUSTOM_FILTER");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ALL_CASES,"ALL_CASES");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::UPPER_CASE,"UPPER_CASE");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::LOWER_CASE,"LOWER_CASE");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::BACKSPACE_ACTION,"BACKSPACE_ACTION");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::DELETE_ACTION,"DELETE_ACTION");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ENTER_ACTION,"ENTER_ACTION");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::INPUT_ACTION,"INPUT_ACTION");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::PASTE_ACTION,"PASTE_ACTION");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::COPY_ACTION,"COPY_ACTION");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::CUT_ACTION,"CUT_ACTION");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxInputText_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::NO_FILTER,"NO_FILTER");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ONLY_ALPHA,"ONLY_ALPHA");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ONLY_NUMERIC,"ONLY_NUMERIC");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ONLY_ALPHANUMERIC,"ONLY_ALPHANUMERIC");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::CUSTOM_FILTER,"CUSTOM_FILTER");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ALL_CASES,"ALL_CASES");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::UPPER_CASE,"UPPER_CASE");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::LOWER_CASE,"LOWER_CASE");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::BACKSPACE_ACTION,"BACKSPACE_ACTION");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::DELETE_ACTION,"DELETE_ACTION");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ENTER_ACTION,"ENTER_ACTION");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::INPUT_ACTION,"INPUT_ACTION");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::PASTE_ACTION,"PASTE_ACTION");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::COPY_ACTION,"COPY_ACTION");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::CUT_ACTION,"CUT_ACTION");
};

#endif

::hx::Class FlxInputText_obj::__mClass;

static ::String FlxInputText_obj_sStaticFields[] = {
	HX_("NO_FILTER",36,13,4e,92),
	HX_("ONLY_ALPHA",eb,4c,e5,a7),
	HX_("ONLY_NUMERIC",9a,a9,2d,5f),
	HX_("ONLY_ALPHANUMERIC",22,ad,7f,f5),
	HX_("CUSTOM_FILTER",c6,f1,56,e9),
	HX_("ALL_CASES",a5,06,9b,9d),
	HX_("UPPER_CASE",0d,e2,06,82),
	HX_("LOWER_CASE",0e,61,d8,7c),
	HX_("BACKSPACE_ACTION",16,76,91,d1),
	HX_("DELETE_ACTION",8a,38,e3,2e),
	HX_("ENTER_ACTION",5d,63,46,79),
	HX_("INPUT_ACTION",ab,ae,95,20),
	HX_("PASTE_ACTION",82,8a,7f,75),
	HX_("COPY_ACTION",40,86,6b,16),
	HX_("CUT_ACTION",33,a8,72,59),
	::String(null())
};

void FlxInputText_obj::__register()
{
	FlxInputText_obj _hx_dummy;
	FlxInputText_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxInputText",d6,dd,cc,b8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxInputText_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxInputText_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxInputText_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxInputText_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxInputText_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxInputText_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxInputText_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxInputText_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_30_boot)
HXDLIN(  30)		NO_FILTER = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_31_boot)
HXDLIN(  31)		ONLY_ALPHA = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_32_boot)
HXDLIN(  32)		ONLY_NUMERIC = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_33_boot)
HXDLIN(  33)		ONLY_ALPHANUMERIC = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_34_boot)
HXDLIN(  34)		CUSTOM_FILTER = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_36_boot)
HXDLIN(  36)		ALL_CASES = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_37_boot)
HXDLIN(  37)		UPPER_CASE = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_38_boot)
HXDLIN(  38)		LOWER_CASE = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_40_boot)
HXDLIN(  40)		BACKSPACE_ACTION = HX_("backspace",3f,85,ea,ca);
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_41_boot)
HXDLIN(  41)		DELETE_ACTION = HX_("delete",2b,c0,d8,6a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_42_boot)
HXDLIN(  42)		ENTER_ACTION = HX_("enter",18,6d,86,70);
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_43_boot)
HXDLIN(  43)		INPUT_ACTION = HX_("input",0a,c4,1d,be);
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_44_boot)
HXDLIN(  44)		PASTE_ACTION = HX_("paste",53,53,56,bd);
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_45_boot)
HXDLIN(  45)		COPY_ACTION = HX_("copy",b5,bb,c4,41);
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_46_boot)
HXDLIN(  46)		CUT_ACTION = HX_("cut",82,85,4b,00);
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
