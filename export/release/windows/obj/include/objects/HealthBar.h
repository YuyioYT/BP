#ifndef INCLUDED_objects_HealthBar
#define INCLUDED_objects_HealthBar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(objects,HealthBar)

namespace objects{


class HXCPP_CLASS_ATTRIBUTES HealthBar_obj : public  ::flixel::group::FlxTypedSpriteGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedSpriteGroup_obj super;
		typedef HealthBar_obj OBJ_;
		HealthBar_obj();

	public:
		enum { _hx_ClassId = 0x2f812c87 };

		void __construct(Float x,Float y,::String __o_image, ::Dynamic valueFunction,::hx::Null< Float >  __o_boundX,::hx::Null< Float >  __o_boundY);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="objects.HealthBar")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"objects.HealthBar"); }
		static ::hx::ObjectPtr< HealthBar_obj > __new(Float x,Float y,::String __o_image, ::Dynamic valueFunction,::hx::Null< Float >  __o_boundX,::hx::Null< Float >  __o_boundY);
		static ::hx::ObjectPtr< HealthBar_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_image, ::Dynamic valueFunction,::hx::Null< Float >  __o_boundX,::hx::Null< Float >  __o_boundY);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HealthBar_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HealthBar",77,6a,65,e4); }

		 ::flixel::FlxSprite leftBar;
		 ::flixel::FlxSprite rightBar;
		 ::flixel::FlxSprite bg;
		 ::Dynamic valueFunction;
		Dynamic valueFunction_dyn() { return valueFunction;}
		Float percent;
		 ::Dynamic bounds;
		bool leftToRight;
		Float barCenter;
		int barWidth;
		int barHeight;
		 ::flixel::math::FlxBasePoint barOffset;
		void update(Float elapsed);

		void setBounds(Float min,Float max);
		::Dynamic setBounds_dyn();

		void setColors(int left,int right);
		::Dynamic setColors_dyn();

		void updateBar();
		::Dynamic updateBar_dyn();

		void regenerateClips();
		::Dynamic regenerateClips_dyn();

		Float set_percent(Float value);
		::Dynamic set_percent_dyn();

		bool set_leftToRight(bool value);
		::Dynamic set_leftToRight_dyn();

		int set_barWidth(int value);
		::Dynamic set_barWidth_dyn();

		int set_barHeight(int value);
		::Dynamic set_barHeight_dyn();

};

} // end namespace objects

#endif /* INCLUDED_objects_HealthBar */ 
