#include <hxcpp.h>

#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_shaders_Tiltshift
#include <shaders/Tiltshift.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_575fb3ed186126a5_673_new,"shaders.Tiltshift","new",0x60ce7cb7,"shaders.Tiltshift.new","shaders/Shaders.hx",673,0x7800d7f1)
namespace shaders{

void Tiltshift_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_575fb3ed186126a5_673_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n\n\t\t// Modified version of a tilt shift shader from Martin Jonasson (http://grapefrukt.com/)\n\t\t// Read http://notes.underscorediscovery.com/ for context on shaders and this file\n\t\t// License : MIT\n\t\t \n\t\t\t/*\n\t\t\t\tTake note that blurring in a single pass (the two for loops below) is more expensive than separating\n\t\t\t\tthe x and the y blur into different passes. This was used where bleeding edge performance\n\t\t\t\twas not crucial and is to illustrate a point. \n\t\t \n\t\t\t\tThe reason two passes is cheaper? \n\t\t\t\t   texture2D is a fairly high cost call, sampling a texture.\n\t\t \n\t\t\t\t   So, in a single pass, like below, there are 3 steps, per x and y. \n\t\t \n\t\t\t\t   That means a total of 9 \"taps\", it touches the texture to sample 9 times.\n\t\t \n\t\t\t\t   Now imagine we apply this to some geometry, that is equal to 16 pixels on screen (tiny)\n\t\t\t\t   (16 * 16) * 9 = 2304 samples taken, for width * height number of pixels, * 9 taps\n\t\t\t\t   Now, if you split them up, it becomes 3 for x, and 3 for y, a total of 6 taps\n\t\t\t\t   (16 * 16) * 6 = 1536 samples\n\t\t\t\n\t\t\t\t   That's on a *tiny* sprite, let's scale that up to 128x128 sprite...\n\t\t\t\t   (128 * 128) * 9 = 147,456\n\t\t\t\t   (128 * 128) * 6 =  98,304\n\t\t \n\t\t\t\t   That's 33.33..% cheaper for splitting them up.\n\t\t\t\t   That's with 3 steps, with higher steps (more taps per pass...)\n\t\t \n\t\t\t\t   A really smooth, 6 steps, 6*6 = 36 taps for one pass, 12 taps for two pass\n\t\t\t\t   You will notice, the curve is not linear, at 12 steps it's 144 vs 24 taps\n\t\t\t\t   It becomes orders of magnitude slower to do single pass!\n\t\t\t\t   Therefore, you split them up into two passes, one for x, one for y.\n\t\t\t*/\n\t\t \n\t\t// I am hardcoding the constants like a jerk\n\t\t\t\n\t\tuniform float bluramount  = 1.0;\n\t\tuniform float center      = 1.0;\n\t\tconst float stepSize    = 0.004;\n\t\tconst float steps       = 3.0;\n\t\t \n\t\tconst float minOffs     = (float(steps-1.0)) / -2.0;\n\t\tconst float maxOffs     = (float(steps-1.0)) / +2.0;\n\t\t \n\t\tvoid main() {\n\t\t\tfloat amount;\n\t\t\tvec4 blurred;\n\t\t\t\t\n\t\t\t// Work out how much to blur based on the mid point \n\t\t\tamount = pow((openfl_TextureCoordv.y * center) * 2.0 - 1.0, 2.0) * bluramount;\n\t\t\t\t\n\t\t\t// This is the accumulation of color from the surrounding pixels in the texture\n\t\t\tblurred = vec4(0.0, 0.0, 0.0, 1.0);\n\t\t\t\t\n\t\t\t// From minimum offset to maximum offset\n\t\t\tfor (float offsX = minOffs; offsX <= maxOffs; ++offsX) {\n\t\t\t\tfor (float offsY = minOffs; offsY <= maxOffs; ++offsY) {\n\t\t \n\t\t\t\t\t// copy the coord so we can mess with it\n\t\t\t\t\tvec2 temp_tcoord = openfl_TextureCoordv.xy;\n\t\t \n\t\t\t\t\t//work out which uv we want to sample now\n\t\t\t\t\ttemp_tcoord.x += offsX * amount * stepSize;\n\t\t\t\t\ttemp_tcoord.y += offsY * amount * stepSize;\n\t\t \n\t\t\t\t\t// accumulate the sample \n\t\t\t\t\tblurred += texture2D(bitmap, temp_tcoord);\n\t\t\t\t}\n\t\t\t} \n\t\t\t\t\n\t\t\t// because we are doing an average, we divide by the amount (x AND y, hence steps * steps)\n\t\t\tblurred /= float(steps * steps);\n\t\t \n\t\t\t// return the final blurred color\n\t\t\tgl_FragColor = blurred;\n\t\t}",e1,b1,92,1d);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE( 674)		super::__construct();
HXLINE( 591)		this->_hx___isGenerated = true;
HXDLIN( 591)		this->_hx___initGL();
            	}

Dynamic Tiltshift_obj::__CreateEmpty() { return new Tiltshift_obj; }

void *Tiltshift_obj::_hx_vtable = 0;

Dynamic Tiltshift_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tiltshift_obj > _hx_result = new Tiltshift_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Tiltshift_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1efca5b6;
		}
	} else {
		return inClassId==(int)0x200d277b || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< Tiltshift_obj > Tiltshift_obj::__new() {
	::hx::ObjectPtr< Tiltshift_obj > __this = new Tiltshift_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Tiltshift_obj > Tiltshift_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Tiltshift_obj *__this = (Tiltshift_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tiltshift_obj), true, "shaders.Tiltshift"));
	*(void **)__this = Tiltshift_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Tiltshift_obj::Tiltshift_obj()
{
}

void Tiltshift_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tiltshift);
	HX_MARK_MEMBER_NAME(bluramount,"bluramount");
	HX_MARK_MEMBER_NAME(center,"center");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Tiltshift_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bluramount,"bluramount");
	HX_VISIT_MEMBER_NAME(center,"center");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Tiltshift_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { return ::hx::Val( center ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bluramount") ) { return ::hx::Val( bluramount ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Tiltshift_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { center=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bluramount") ) { bluramount=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tiltshift_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bluramount",bf,4b,fa,17));
	outFields->push(HX_("center",d5,25,db,05));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Tiltshift_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Tiltshift_obj,bluramount),HX_("bluramount",bf,4b,fa,17)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Tiltshift_obj,center),HX_("center",d5,25,db,05)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Tiltshift_obj_sStaticStorageInfo = 0;
#endif

static ::String Tiltshift_obj_sMemberFields[] = {
	HX_("bluramount",bf,4b,fa,17),
	HX_("center",d5,25,db,05),
	::String(null()) };

::hx::Class Tiltshift_obj::__mClass;

void Tiltshift_obj::__register()
{
	Tiltshift_obj _hx_dummy;
	Tiltshift_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.Tiltshift",45,55,1e,91);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Tiltshift_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Tiltshift_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tiltshift_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tiltshift_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
