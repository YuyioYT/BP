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
#ifndef INCLUDED_shaders_StaticShader
#include <shaders/StaticShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c6854b1da2e68947_727_new,"shaders.StaticShader","new",0x890f6fc5,"shaders.StaticShader.new","shaders/Shaders.hx",727,0x7800d7f1)
namespace shaders{

void StaticShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c6854b1da2e68947_727_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n\n    //SHADERTOY PORT FIX\n    varying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n    vec2 uv = openfl_TextureCoordv.xy;\n    vec2 fragCoord = openfl_TextureCoordv*openfl_TextureSize;\n    vec2 iResolution = openfl_TextureSize;\n    \n    #define iChannel0 bitmap\n    #define texture flixel_texture2D\n    #define fragColor gl_FragColor\n    #define mainImage main\n    //****MAKE SURE TO remove the parameters from mainImage.\n    //SHADERTOY PORT FIX\n    \n    uniform float iTime;\n    uniform float strength;\n    \n    float speed = 10.00;\n    \n    float random (vec2 noise)\n    {\n        //--- Noise: Low Static (X axis) ---\n        //return fract(sin(dot(noise.yx,vec2(0.000128,0.233)))*804818480.159265359);\n        \n        //--- Noise: Low Static (Y axis) ---\n        //return fract(sin(dot(noise.xy,vec2(0.000128,0.233)))*804818480.159265359);\n        \n          //--- Noise: Low Static Scanlines (X axis) ---\n        //return fract(sin(dot(noise.xy,vec2(98.233,0.0001)))*925895933.14159265359);\n        \n           //--- Noise: Low Static Scanlines (Y axis) ---\n        //return fract(sin(dot(noise.xy,vec2(0.0001,98.233)))*925895933.14159265359);\n        \n        //--- Noise: High Static Scanlines (X axis) ---\n        //return fract(sin(dot(noise.xy,vec2(0.0001,98.233)))*12073103.285);\n        \n        //--- Noise: High Static Scanlines (Y axis) ---\n        //return fract(sin(dot(noise.xy,vec2(98.233,0.0001)))*12073103.285);\n        \n        //--- Noise: Full Static ---\n        return fract(sin(dot(noise.xy,vec2(10.998,98.233)))*12433.14159265359);\n    }\n    \n    /*\n    float random_colour (float noise)\n    {\n        return fract(sin(noise));   \n    }\n    */\n    \n    void mainImage()\n    {\n        \n        vec2 uv = fragCoord.xy / iResolution.xy;\n        vec2 uv2 = fract(fragCoord.xy/iResolution.xy*fract(sin(iTime*speed)));\n        \n        //--- Strength animate ---\n        // maxStrength = clamp(sin(iTime/2.0),minStrength,maxStrength);\n        float maxStrength = strength;\n        //-----------------------\n        \n        //--- Black and white ---\n        vec3 colour = vec3(random(uv2.xy))*maxStrength;\n        //-----------------------\n            \n        /*\n        //--- Colour ---\n        colour.r *= random_colour(sin(iTime*speed));\n        colour.g *= random_colour(cos(iTime*speed));\n        colour.b *= random_colour(tan(iTime*speed));\n        //--------------\n        */\n        \n        //--- Background ---\n        vec3 background = vec3(texture(iChannel0, uv));\n        //--------------\n        \n        gl_FragColor = vec4(background-colour,1.0);\n    }\n\n\t",ef,a3,05,15);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE( 728)		super::__construct();
HXLINE( 644)		this->_hx___isGenerated = true;
HXDLIN( 644)		this->_hx___initGL();
            	}

Dynamic StaticShader_obj::__CreateEmpty() { return new StaticShader_obj; }

void *StaticShader_obj::_hx_vtable = 0;

Dynamic StaticShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StaticShader_obj > _hx_result = new StaticShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StaticShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x061b1cdd) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x061b1cdd;
		}
	} else {
		return inClassId==(int)0x1efca5b6 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< StaticShader_obj > StaticShader_obj::__new() {
	::hx::ObjectPtr< StaticShader_obj > __this = new StaticShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< StaticShader_obj > StaticShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	StaticShader_obj *__this = (StaticShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StaticShader_obj), true, "shaders.StaticShader"));
	*(void **)__this = StaticShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

StaticShader_obj::StaticShader_obj()
{
}

void StaticShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StaticShader);
	HX_MARK_MEMBER_NAME(iTime,"iTime");
	HX_MARK_MEMBER_NAME(strength,"strength");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StaticShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(iTime,"iTime");
	HX_VISIT_MEMBER_NAME(strength,"strength");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val StaticShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"iTime") ) { return ::hx::Val( iTime ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { return ::hx::Val( strength ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StaticShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"iTime") ) { iTime=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { strength=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StaticShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("iTime",16,e1,e8,ac));
	outFields->push(HX_("strength",81,d2,8e,8e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StaticShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(StaticShader_obj,iTime),HX_("iTime",16,e1,e8,ac)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(StaticShader_obj,strength),HX_("strength",81,d2,8e,8e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StaticShader_obj_sStaticStorageInfo = 0;
#endif

static ::String StaticShader_obj_sMemberFields[] = {
	HX_("iTime",16,e1,e8,ac),
	HX_("strength",81,d2,8e,8e),
	::String(null()) };

::hx::Class StaticShader_obj::__mClass;

void StaticShader_obj::__register()
{
	StaticShader_obj _hx_dummy;
	StaticShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.StaticShader",53,29,c9,19);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StaticShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StaticShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StaticShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StaticShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
