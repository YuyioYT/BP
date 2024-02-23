#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
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
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_objects_HealthBar
#include <objects/HealthBar.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c500d6381e2639bc_11_new,"objects.HealthBar","new",0x7ac7c1cf,"objects.HealthBar.new","objects/HealthBar.hx",11,0xf0342a02)
HX_DEFINE_STACK_FRAME(_hx_pos_c500d6381e2639bc_6_new,"objects.HealthBar","new",0x7ac7c1cf,"objects.HealthBar.new","objects/HealthBar.hx",6,0xf0342a02)
HX_LOCAL_STACK_FRAME(_hx_pos_c500d6381e2639bc_48_update,"objects.HealthBar","update",0x6c3ce3fa,"objects.HealthBar.update","objects/HealthBar.hx",48,0xf0342a02)
HX_LOCAL_STACK_FRAME(_hx_pos_c500d6381e2639bc_55_setBounds,"objects.HealthBar","setBounds",0xd5122a66,"objects.HealthBar.setBounds","objects/HealthBar.hx",55,0xf0342a02)
HX_LOCAL_STACK_FRAME(_hx_pos_c500d6381e2639bc_61_setColors,"objects.HealthBar","setColors",0x357b69a1,"objects.HealthBar.setColors","objects/HealthBar.hx",61,0xf0342a02)
HX_LOCAL_STACK_FRAME(_hx_pos_c500d6381e2639bc_67_updateBar,"objects.HealthBar","updateBar",0x9224bdf9,"objects.HealthBar.updateBar","objects/HealthBar.hx",67,0xf0342a02)
HX_LOCAL_STACK_FRAME(_hx_pos_c500d6381e2639bc_95_regenerateClips,"objects.HealthBar","regenerateClips",0x64da3c8a,"objects.HealthBar.regenerateClips","objects/HealthBar.hx",95,0xf0342a02)
HX_LOCAL_STACK_FRAME(_hx_pos_c500d6381e2639bc_112_set_percent,"objects.HealthBar","set_percent",0x693b8a57,"objects.HealthBar.set_percent","objects/HealthBar.hx",112,0xf0342a02)
HX_LOCAL_STACK_FRAME(_hx_pos_c500d6381e2639bc_122_set_leftToRight,"objects.HealthBar","set_leftToRight",0xc1b8a7ac,"objects.HealthBar.set_leftToRight","objects/HealthBar.hx",122,0xf0342a02)
HX_LOCAL_STACK_FRAME(_hx_pos_c500d6381e2639bc_129_set_barWidth,"objects.HealthBar","set_barWidth",0xfd93b761,"objects.HealthBar.set_barWidth","objects/HealthBar.hx",129,0xf0342a02)
HX_LOCAL_STACK_FRAME(_hx_pos_c500d6381e2639bc_136_set_barHeight,"objects.HealthBar","set_barHeight",0x99fc362c,"objects.HealthBar.set_barHeight","objects/HealthBar.hx",136,0xf0342a02)
namespace objects{

void HealthBar_obj::__construct(Float x,Float y,::String __o_image, ::Dynamic valueFunction,::hx::Null< Float >  __o_boundX,::hx::Null< Float >  __o_boundY){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		Float _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_c500d6381e2639bc_11_new)
HXLINE(  11)			return ( (Float)(0) );
            		}
            		HX_END_LOCAL_FUNC0(return)

            		::String image = __o_image;
            		if (::hx::IsNull(__o_image)) image = HX_("hud/bars/healthBarCircle",90,9b,39,2f);
            		Float boundX = __o_boundX.Default(0);
            		Float boundY = __o_boundY.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_c500d6381e2639bc_6_new)
HXLINE(  20)		 ::flixel::math::FlxBasePoint this1 =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,3,3);
HXDLIN(  20)		this->barOffset = this1;
HXLINE(  19)		this->barHeight = 1;
HXLINE(  18)		this->barWidth = 1;
HXLINE(  15)		this->barCenter = ((Float)0);
HXLINE(  14)		this->leftToRight = true;
HXLINE(  13)		this->bounds =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("max",a4,0a,53,00),1)
            			->setFixed(1,HX_("min",92,11,53,00),0));
HXLINE(  12)		this->percent = ((Float)0);
HXLINE(  11)		this->valueFunction =  ::Dynamic(new _hx_Closure_0());
HXLINE(  24)		super::__construct(x,y,null());
HXLINE(  26)		if (::hx::IsNotNull( valueFunction )) {
HXLINE(  26)			this->valueFunction = valueFunction;
            		}
HXLINE(  27)		this->setBounds(boundX,boundY);
HXLINE(  29)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  29)		this->bg = _hx_tmp->loadGraphic(::backend::Paths_obj::image(image,null(),null()),null(),null(),null(),null(),null());
HXLINE(  30)		this->bg->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  31)		this->set_barWidth(::Std_obj::_hx_int((this->bg->get_width() - ( (Float)(6) ))));
HXLINE(  32)		this->set_barHeight(::Std_obj::_hx_int((this->bg->get_height() - ( (Float)(6) ))));
HXLINE(  34)		 ::flixel::FlxSprite _hx_tmp1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  34)		int _hx_tmp2 = ::Std_obj::_hx_int(this->bg->get_width());
HXDLIN(  34)		this->leftBar = _hx_tmp1->makeGraphic(_hx_tmp2,::Std_obj::_hx_int(this->bg->get_height()),-1,null(),null());
HXLINE(  36)		 ::flixel::FlxSprite _hx_tmp3 = this->leftBar;
HXDLIN(  36)		_hx_tmp3->set_antialiasing(this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing));
HXLINE(  38)		 ::flixel::FlxSprite _hx_tmp4 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  38)		int _hx_tmp5 = ::Std_obj::_hx_int(this->bg->get_width());
HXDLIN(  38)		this->rightBar = _hx_tmp4->makeGraphic(_hx_tmp5,::Std_obj::_hx_int(this->bg->get_height()),-1,null(),null());
HXLINE(  39)		this->rightBar->set_color(-16777216);
HXLINE(  40)		this->rightBar->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  42)		this->add(this->leftBar);
HXLINE(  43)		this->add(this->rightBar);
HXLINE(  44)		this->add(this->bg);
HXLINE(  45)		this->regenerateClips();
            	}

Dynamic HealthBar_obj::__CreateEmpty() { return new HealthBar_obj; }

void *HealthBar_obj::_hx_vtable = 0;

Dynamic HealthBar_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HealthBar_obj > _hx_result = new HealthBar_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool HealthBar_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2f812c87) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x2f812c87;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void HealthBar_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_c500d6381e2639bc_48_update)
HXLINE(  49)		Float Value = ( (Float)(this->valueFunction()) );
HXDLIN(  49)		 ::Dynamic Min = this->bounds->__Field(HX_("min",92,11,53,00),::hx::paccDynamic);
HXDLIN(  49)		 ::Dynamic Max = this->bounds->__Field(HX_("max",a4,0a,53,00),::hx::paccDynamic);
HXDLIN(  49)		Float lowerBound;
HXDLIN(  49)		bool lowerBound1;
HXDLIN(  49)		if (::hx::IsNotNull( Min )) {
HXLINE(  49)			lowerBound1 = ::hx::IsLess( Value,Min );
            		}
            		else {
HXLINE(  49)			lowerBound1 = false;
            		}
HXDLIN(  49)		if (lowerBound1) {
HXLINE(  49)			lowerBound = ( (Float)(Min) );
            		}
            		else {
HXLINE(  49)			lowerBound = Value;
            		}
HXDLIN(  49)		Float value;
HXDLIN(  49)		bool value1;
HXDLIN(  49)		if (::hx::IsNotNull( Max )) {
HXLINE(  49)			value1 = ::hx::IsGreater( lowerBound,Max );
            		}
            		else {
HXLINE(  49)			value1 = false;
            		}
HXDLIN(  49)		if (value1) {
HXLINE(  49)			value = ( (Float)(Max) );
            		}
            		else {
HXLINE(  49)			value = lowerBound;
            		}
HXDLIN(  49)		 ::Dynamic value2 = ::flixel::math::FlxMath_obj::remapToRange(value,( (Float)(this->bounds->__Field(HX_("min",92,11,53,00),::hx::paccDynamic)) ),( (Float)(this->bounds->__Field(HX_("max",a4,0a,53,00),::hx::paccDynamic)) ),( (Float)(0) ),( (Float)(100) ));
HXLINE(  50)		Float _hx_tmp;
HXDLIN(  50)		if (::hx::IsNotNull( value2 )) {
HXLINE(  50)			_hx_tmp = ( (Float)(value2) );
            		}
            		else {
HXLINE(  50)			_hx_tmp = ( (Float)(0) );
            		}
HXDLIN(  50)		this->set_percent(_hx_tmp);
HXLINE(  51)		this->super::update(elapsed);
            	}


void HealthBar_obj::setBounds(Float min,Float max){
            	HX_STACKFRAME(&_hx_pos_c500d6381e2639bc_55_setBounds)
HXLINE(  56)		this->bounds->__SetField(HX_("min",92,11,53,00),min,::hx::paccDynamic);
HXLINE(  57)		this->bounds->__SetField(HX_("max",a4,0a,53,00),max,::hx::paccDynamic);
            	}


HX_DEFINE_DYNAMIC_FUNC2(HealthBar_obj,setBounds,(void))

void HealthBar_obj::setColors(int left,int right){
            	HX_STACKFRAME(&_hx_pos_c500d6381e2639bc_61_setColors)
HXLINE(  62)		this->leftBar->set_color(left);
HXLINE(  63)		this->rightBar->set_color(right);
            	}


HX_DEFINE_DYNAMIC_FUNC2(HealthBar_obj,setColors,(void))

void HealthBar_obj::updateBar(){
            	HX_STACKFRAME(&_hx_pos_c500d6381e2639bc_67_updateBar)
HXLINE(  68)		bool _hx_tmp;
HXDLIN(  68)		if (::hx::IsNotNull( this->leftBar )) {
HXLINE(  68)			_hx_tmp = ::hx::IsNull( this->rightBar );
            		}
            		else {
HXLINE(  68)			_hx_tmp = true;
            		}
HXDLIN(  68)		if (_hx_tmp) {
HXLINE(  68)			return;
            		}
HXLINE(  70)		this->leftBar->setPosition(this->bg->x,this->bg->y);
HXLINE(  71)		this->rightBar->setPosition(this->bg->x,this->bg->y);
HXLINE(  73)		Float leftSize = ( (Float)(0) );
HXLINE(  74)		if (this->leftToRight) {
HXLINE(  74)			leftSize = ((this->percent / ( (Float)(100) )) * ( (Float)(this->barWidth) ));
            		}
            		else {
HXLINE(  75)			leftSize = ((( (Float)(1) ) - (this->percent / ( (Float)(100) ))) * ( (Float)(this->barWidth) ));
            		}
HXLINE(  77)		this->leftBar->clipRect->width = leftSize;
HXLINE(  78)		this->leftBar->clipRect->height = ( (Float)(this->barHeight) );
HXLINE(  79)		this->leftBar->clipRect->x = this->barOffset->x;
HXLINE(  80)		this->leftBar->clipRect->y = this->barOffset->y;
HXLINE(  82)		this->rightBar->clipRect->width = (( (Float)(this->barWidth) ) - leftSize);
HXLINE(  83)		this->rightBar->clipRect->height = ( (Float)(this->barHeight) );
HXLINE(  84)		this->rightBar->clipRect->x = (this->barOffset->x + leftSize);
HXLINE(  85)		this->rightBar->clipRect->y = this->barOffset->y;
HXLINE(  87)		this->barCenter = ((this->leftBar->x + leftSize) + this->barOffset->x);
HXLINE(  90)		this->leftBar->set_clipRect(this->leftBar->clipRect);
HXLINE(  91)		this->rightBar->set_clipRect(this->rightBar->clipRect);
            	}


HX_DEFINE_DYNAMIC_FUNC0(HealthBar_obj,updateBar,(void))

void HealthBar_obj::regenerateClips(){
            	HX_GC_STACKFRAME(&_hx_pos_c500d6381e2639bc_95_regenerateClips)
HXLINE(  96)		if (::hx::IsNotNull( this->leftBar )) {
HXLINE(  98)			 ::flixel::FlxSprite _hx_tmp = this->leftBar;
HXDLIN(  98)			int _hx_tmp1 = ::Std_obj::_hx_int(this->bg->get_width());
HXDLIN(  98)			_hx_tmp->setGraphicSize(_hx_tmp1,::Std_obj::_hx_int(this->bg->get_height()));
HXLINE(  99)			this->leftBar->updateHitbox();
HXLINE( 100)			 ::flixel::FlxSprite _hx_tmp2 = this->leftBar;
HXDLIN( 100)			int _hx_tmp3 = ::Std_obj::_hx_int(this->bg->get_width());
HXDLIN( 100)			_hx_tmp2->set_clipRect( ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,0,0,_hx_tmp3,::Std_obj::_hx_int(this->bg->get_height())));
            		}
HXLINE( 102)		if (::hx::IsNotNull( this->rightBar )) {
HXLINE( 104)			 ::flixel::FlxSprite _hx_tmp = this->rightBar;
HXDLIN( 104)			int _hx_tmp1 = ::Std_obj::_hx_int(this->bg->get_width());
HXDLIN( 104)			_hx_tmp->setGraphicSize(_hx_tmp1,::Std_obj::_hx_int(this->bg->get_height()));
HXLINE( 105)			this->rightBar->updateHitbox();
HXLINE( 106)			 ::flixel::FlxSprite _hx_tmp2 = this->rightBar;
HXDLIN( 106)			int _hx_tmp3 = ::Std_obj::_hx_int(this->bg->get_width());
HXDLIN( 106)			_hx_tmp2->set_clipRect( ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,0,0,_hx_tmp3,::Std_obj::_hx_int(this->bg->get_height())));
            		}
HXLINE( 108)		this->updateBar();
            	}


HX_DEFINE_DYNAMIC_FUNC0(HealthBar_obj,regenerateClips,(void))

Float HealthBar_obj::set_percent(Float value){
            	HX_STACKFRAME(&_hx_pos_c500d6381e2639bc_112_set_percent)
HXLINE( 113)		bool doUpdate = false;
HXLINE( 114)		if ((value != this->percent)) {
HXLINE( 114)			doUpdate = true;
            		}
HXLINE( 115)		this->percent = value;
HXLINE( 117)		if (doUpdate) {
HXLINE( 117)			this->updateBar();
            		}
HXLINE( 118)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HealthBar_obj,set_percent,return )

bool HealthBar_obj::set_leftToRight(bool value){
            	HX_STACKFRAME(&_hx_pos_c500d6381e2639bc_122_set_leftToRight)
HXLINE( 123)		this->leftToRight = value;
HXLINE( 124)		this->updateBar();
HXLINE( 125)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HealthBar_obj,set_leftToRight,return )

int HealthBar_obj::set_barWidth(int value){
            	HX_STACKFRAME(&_hx_pos_c500d6381e2639bc_129_set_barWidth)
HXLINE( 130)		this->barWidth = value;
HXLINE( 131)		this->regenerateClips();
HXLINE( 132)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HealthBar_obj,set_barWidth,return )

int HealthBar_obj::set_barHeight(int value){
            	HX_STACKFRAME(&_hx_pos_c500d6381e2639bc_136_set_barHeight)
HXLINE( 137)		this->barHeight = value;
HXLINE( 138)		this->regenerateClips();
HXLINE( 139)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HealthBar_obj,set_barHeight,return )


::hx::ObjectPtr< HealthBar_obj > HealthBar_obj::__new(Float x,Float y,::String __o_image, ::Dynamic valueFunction,::hx::Null< Float >  __o_boundX,::hx::Null< Float >  __o_boundY) {
	::hx::ObjectPtr< HealthBar_obj > __this = new HealthBar_obj();
	__this->__construct(x,y,__o_image,valueFunction,__o_boundX,__o_boundY);
	return __this;
}

::hx::ObjectPtr< HealthBar_obj > HealthBar_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_image, ::Dynamic valueFunction,::hx::Null< Float >  __o_boundX,::hx::Null< Float >  __o_boundY) {
	HealthBar_obj *__this = (HealthBar_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HealthBar_obj), true, "objects.HealthBar"));
	*(void **)__this = HealthBar_obj::_hx_vtable;
	__this->__construct(x,y,__o_image,valueFunction,__o_boundX,__o_boundY);
	return __this;
}

HealthBar_obj::HealthBar_obj()
{
}

void HealthBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HealthBar);
	HX_MARK_MEMBER_NAME(leftBar,"leftBar");
	HX_MARK_MEMBER_NAME(rightBar,"rightBar");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(valueFunction,"valueFunction");
	HX_MARK_MEMBER_NAME(percent,"percent");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(leftToRight,"leftToRight");
	HX_MARK_MEMBER_NAME(barCenter,"barCenter");
	HX_MARK_MEMBER_NAME(barWidth,"barWidth");
	HX_MARK_MEMBER_NAME(barHeight,"barHeight");
	HX_MARK_MEMBER_NAME(barOffset,"barOffset");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HealthBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(leftBar,"leftBar");
	HX_VISIT_MEMBER_NAME(rightBar,"rightBar");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(valueFunction,"valueFunction");
	HX_VISIT_MEMBER_NAME(percent,"percent");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(leftToRight,"leftToRight");
	HX_VISIT_MEMBER_NAME(barCenter,"barCenter");
	HX_VISIT_MEMBER_NAME(barWidth,"barWidth");
	HX_VISIT_MEMBER_NAME(barHeight,"barHeight");
	HX_VISIT_MEMBER_NAME(barOffset,"barOffset");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HealthBar_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { return ::hx::Val( bounds ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"leftBar") ) { return ::hx::Val( leftBar ); }
		if (HX_FIELD_EQ(inName,"percent") ) { return ::hx::Val( percent ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rightBar") ) { return ::hx::Val( rightBar ); }
		if (HX_FIELD_EQ(inName,"barWidth") ) { return ::hx::Val( barWidth ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"barCenter") ) { return ::hx::Val( barCenter ); }
		if (HX_FIELD_EQ(inName,"barHeight") ) { return ::hx::Val( barHeight ); }
		if (HX_FIELD_EQ(inName,"barOffset") ) { return ::hx::Val( barOffset ); }
		if (HX_FIELD_EQ(inName,"setBounds") ) { return ::hx::Val( setBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"setColors") ) { return ::hx::Val( setColors_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateBar") ) { return ::hx::Val( updateBar_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"leftToRight") ) { return ::hx::Val( leftToRight ); }
		if (HX_FIELD_EQ(inName,"set_percent") ) { return ::hx::Val( set_percent_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_barWidth") ) { return ::hx::Val( set_barWidth_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"valueFunction") ) { return ::hx::Val( valueFunction ); }
		if (HX_FIELD_EQ(inName,"set_barHeight") ) { return ::hx::Val( set_barHeight_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"regenerateClips") ) { return ::hx::Val( regenerateClips_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_leftToRight") ) { return ::hx::Val( set_leftToRight_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HealthBar_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"leftBar") ) { leftBar=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"percent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_percent(inValue.Cast< Float >()) );percent=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rightBar") ) { rightBar=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"barWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_barWidth(inValue.Cast< int >()) );barWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"barCenter") ) { barCenter=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"barHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_barHeight(inValue.Cast< int >()) );barHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"barOffset") ) { barOffset=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"leftToRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_leftToRight(inValue.Cast< bool >()) );leftToRight=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"valueFunction") ) { valueFunction=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HealthBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("leftBar",0c,e0,d7,f4));
	outFields->push(HX_("rightBar",57,2f,12,e4));
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("percent",c5,aa,da,78));
	outFields->push(HX_("bounds",75,86,1d,66));
	outFields->push(HX_("leftToRight",1a,97,7b,b5));
	outFields->push(HX_("barCenter",08,ec,85,2b));
	outFields->push(HX_("barWidth",33,f7,30,99));
	outFields->push(HX_("barHeight",1a,ce,f6,27));
	outFields->push(HX_("barOffset",c6,5d,ea,85));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HealthBar_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(HealthBar_obj,leftBar),HX_("leftBar",0c,e0,d7,f4)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(HealthBar_obj,rightBar),HX_("rightBar",57,2f,12,e4)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(HealthBar_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(HealthBar_obj,valueFunction),HX_("valueFunction",a9,3f,63,77)},
	{::hx::fsFloat,(int)offsetof(HealthBar_obj,percent),HX_("percent",c5,aa,da,78)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(HealthBar_obj,bounds),HX_("bounds",75,86,1d,66)},
	{::hx::fsBool,(int)offsetof(HealthBar_obj,leftToRight),HX_("leftToRight",1a,97,7b,b5)},
	{::hx::fsFloat,(int)offsetof(HealthBar_obj,barCenter),HX_("barCenter",08,ec,85,2b)},
	{::hx::fsInt,(int)offsetof(HealthBar_obj,barWidth),HX_("barWidth",33,f7,30,99)},
	{::hx::fsInt,(int)offsetof(HealthBar_obj,barHeight),HX_("barHeight",1a,ce,f6,27)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(HealthBar_obj,barOffset),HX_("barOffset",c6,5d,ea,85)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HealthBar_obj_sStaticStorageInfo = 0;
#endif

static ::String HealthBar_obj_sMemberFields[] = {
	HX_("leftBar",0c,e0,d7,f4),
	HX_("rightBar",57,2f,12,e4),
	HX_("bg",c5,55,00,00),
	HX_("valueFunction",a9,3f,63,77),
	HX_("percent",c5,aa,da,78),
	HX_("bounds",75,86,1d,66),
	HX_("leftToRight",1a,97,7b,b5),
	HX_("barCenter",08,ec,85,2b),
	HX_("barWidth",33,f7,30,99),
	HX_("barHeight",1a,ce,f6,27),
	HX_("barOffset",c6,5d,ea,85),
	HX_("update",09,86,05,87),
	HX_("setBounds",b7,fb,c4,c5),
	HX_("setColors",f2,3a,2e,26),
	HX_("updateBar",4a,8f,d7,82),
	HX_("regenerateClips",9b,60,4a,15),
	HX_("set_percent",e8,11,42,09),
	HX_("set_leftToRight",bd,cb,28,72),
	HX_("set_barWidth",b0,ce,43,63),
	HX_("set_barHeight",fd,83,60,2e),
	::String(null()) };

::hx::Class HealthBar_obj::__mClass;

void HealthBar_obj::__register()
{
	HealthBar_obj _hx_dummy;
	HealthBar_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.HealthBar",5d,2e,99,a0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HealthBar_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HealthBar_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HealthBar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HealthBar_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace objects
