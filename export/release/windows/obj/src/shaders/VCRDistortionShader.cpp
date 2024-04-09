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
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Bool
#include <openfl/display/ShaderParameter_Bool.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_shaders_VCRDistortionShader
#include <shaders/VCRDistortionShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c3695f1174aa6ae9_1335_new,"shaders.VCRDistortionShader","new",0x38334fb9,"shaders.VCRDistortionShader.new","shaders/Shaders.hx",1335,0x7800d7f1)
namespace shaders{

void VCRDistortionShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c3695f1174aa6ae9_1335_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n    varying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n\n    uniform float iTime;\n    uniform bool vignetteOn;\n    uniform bool perspectiveOn;\n    uniform bool distortionOn;\n    uniform bool scanlinesOn;\n    uniform bool vignetteMoving;\n   // uniform sampler2D noiseTex;\n    uniform float glitchModifier;\n    uniform vec3 iResolution;\n\n    float onOff(float a, float b, float c)\n    {\n    \treturn step(c, sin(iTime + a*cos(iTime*b)));\n    }\n\n    float ramp(float y, float start, float end)\n    {\n    \tfloat inside = step(start,y) - step(end,y);\n    \tfloat fact = (y-start)/(end-start)*inside;\n    \treturn (1.-fact) * inside;\n\n    }\n\n    vec4 getVideo(vec2 uv)\n      {\n      \tvec2 look = uv;\n        if(distortionOn){\n        \tfloat window = 1./(1.+20.*(look.y-mod(iTime/4.,1.))*(look.y-mod(iTime/4.,1.)));\n        \tlook.x = look.x + (sin(look.y*10. + iTime)/50.*onOff(4.,4.,.3)*(1.+cos(iTime*80.))*window)*(glitchModifier*2);\n        \tfloat vShift = 0.4*onOff(2.,3.,.9)*(sin(iTime)*sin(iTime*20.) +\n        \t\t\t\t\t\t\t\t\t\t (0.5 + 0.1*sin(iTime*200.)*cos(iTime)));\n        \tlook.y = mod(look.y + vShift*glitchModifier, 1.);\n        }\n      \tvec4 video = flixel_texture2D(bitmap,look);\n\n      \treturn video;\n      }\n\n    vec2 screenDistort(vec2 uv)\n    {\n      if(perspectiveOn){\n        uv = (uv - 0.5) * 2.0;\n      \tuv *= 1.1;\n      \tuv.x *= 1.0 + pow((abs(uv.y) / 5.0), 2.0);\n      \tuv.y *= 1.0 + pow((abs(uv.x) / 4.0), 2.0);\n      \tuv  = (uv / 2.0) + 0.5;\n      \tuv =  uv *0.92 + 0.04;\n      \treturn uv;\n      }\n    \treturn uv;\n    }\n    float random(vec2 uv)\n    {\n     \treturn fract(sin(dot(uv, vec2(15.5151, 42.2561))) * 12341.14122 * sin(iTime * 0.03));\n    }\n    float noise(vec2 uv)\n    {\n     \tvec2 i = floor(uv);\n        vec2 f = fract(uv);\n\n        float a = random(i);\n        float b = random(i + vec2(1.,0.));\n    \tfloat c = random(i + vec2(0., 1.));\n        float d = random(i + vec2(1.));\n\n        vec2 u = smoothstep(0., 1., f);\n\n        return mix(a,b, u.x) + (c - a) * u.y * (1. - u.x) + (d - b) * u.x * u.y;\n\n    }\n\n\n    vec2 scandistort(vec2 uv) {\n    \tfloat scan1 = clamp(cos(uv.y * 2.0 + iTime), 0.0, 1.0);\n    \tfloat scan2 = clamp(cos(uv.y * 2.0 + iTime + 4.0) * 10.0, 0.0, 1.0) ;\n    \tfloat amount = scan1 * scan2 * uv.x;\n\n    \t//uv.x -= 0.05 * mix(flixel_texture2D(noiseTex, vec2(uv.x, amount)).r * amount, amount, 0.9);\n\n    \treturn uv;\n\n    }\n    void main()\n    {\n    \tvec2 uv = openfl_TextureCoordv;\n      vec2 curUV = screenDistort(uv);\n    \tuv = scandistort(curUV);\n    \tvec4 video = getVideo(uv);\n      float vigAmt = 1.0;\n      float x =  0.;\n\n\n      video.r = getVideo(vec2(x+uv.x+0.001,uv.y+0.001)).x+0.05;\n      video.g = getVideo(vec2(x+uv.x+0.000,uv.y-0.002)).y+0.05;\n      video.b = getVideo(vec2(x+uv.x-0.002,uv.y+0.000)).z+0.05;\n      video.r += 0.08*getVideo(0.75*vec2(x+0.025, -0.027)+vec2(uv.x+0.001,uv.y+0.001)).x;\n      video.g += 0.05*getVideo(0.75*vec2(x+-0.022, -0.02)+vec2(uv.x+0.000,uv.y-0.002)).y;\n      video.b += 0.08*getVideo(0.75*vec2(x+-0.02, -0.018)+vec2(uv.x-0.002,uv.y+0.000)).z;\n\n      video = clamp(video*0.6+0.4*video*video*1.0,0.0,1.0);\n      if(vignetteMoving)\n    \t  vigAmt = 3.+.3*sin(iTime + 5.*cos(iTime*5.));\n\n    \tfloat vignette = (1.-vigAmt*(uv.y-.5)*(uv.y-.5))*(1.-vigAmt*(uv.x-.5)*(uv.x-.5));\n\n      if(vignetteOn)\n    \t video *= vignette;\n\n\n      gl_FragColor = mix(video,vec4(noise(uv * 75.)),.05);\n\n      if(curUV.x<0 || curUV.x>1 || curUV.y<0 || curUV.y>1){\n        gl_FragColor = vec4(0,0,0,0);\n      }\n\n    }\n  ",37,55,96,5b);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE(1336)		super::__construct();
HXLINE(1211)		this->_hx___isGenerated = true;
HXDLIN(1211)		this->_hx___initGL();
            	}

Dynamic VCRDistortionShader_obj::__CreateEmpty() { return new VCRDistortionShader_obj; }

void *VCRDistortionShader_obj::_hx_vtable = 0;

Dynamic VCRDistortionShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VCRDistortionShader_obj > _hx_result = new VCRDistortionShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VCRDistortionShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1efca5b6;
		}
	} else {
		return inClassId==(int)0x5e668199 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< VCRDistortionShader_obj > VCRDistortionShader_obj::__new() {
	::hx::ObjectPtr< VCRDistortionShader_obj > __this = new VCRDistortionShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< VCRDistortionShader_obj > VCRDistortionShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	VCRDistortionShader_obj *__this = (VCRDistortionShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VCRDistortionShader_obj), true, "shaders.VCRDistortionShader"));
	*(void **)__this = VCRDistortionShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VCRDistortionShader_obj::VCRDistortionShader_obj()
{
}

void VCRDistortionShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VCRDistortionShader);
	HX_MARK_MEMBER_NAME(iTime,"iTime");
	HX_MARK_MEMBER_NAME(vignetteOn,"vignetteOn");
	HX_MARK_MEMBER_NAME(perspectiveOn,"perspectiveOn");
	HX_MARK_MEMBER_NAME(distortionOn,"distortionOn");
	HX_MARK_MEMBER_NAME(scanlinesOn,"scanlinesOn");
	HX_MARK_MEMBER_NAME(vignetteMoving,"vignetteMoving");
	HX_MARK_MEMBER_NAME(noiseTex,"noiseTex");
	HX_MARK_MEMBER_NAME(glitchModifier,"glitchModifier");
	HX_MARK_MEMBER_NAME(iResolution,"iResolution");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VCRDistortionShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(iTime,"iTime");
	HX_VISIT_MEMBER_NAME(vignetteOn,"vignetteOn");
	HX_VISIT_MEMBER_NAME(perspectiveOn,"perspectiveOn");
	HX_VISIT_MEMBER_NAME(distortionOn,"distortionOn");
	HX_VISIT_MEMBER_NAME(scanlinesOn,"scanlinesOn");
	HX_VISIT_MEMBER_NAME(vignetteMoving,"vignetteMoving");
	HX_VISIT_MEMBER_NAME(noiseTex,"noiseTex");
	HX_VISIT_MEMBER_NAME(glitchModifier,"glitchModifier");
	HX_VISIT_MEMBER_NAME(iResolution,"iResolution");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val VCRDistortionShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"iTime") ) { return ::hx::Val( iTime ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noiseTex") ) { return ::hx::Val( noiseTex ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"vignetteOn") ) { return ::hx::Val( vignetteOn ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scanlinesOn") ) { return ::hx::Val( scanlinesOn ); }
		if (HX_FIELD_EQ(inName,"iResolution") ) { return ::hx::Val( iResolution ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"distortionOn") ) { return ::hx::Val( distortionOn ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"perspectiveOn") ) { return ::hx::Val( perspectiveOn ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"vignetteMoving") ) { return ::hx::Val( vignetteMoving ); }
		if (HX_FIELD_EQ(inName,"glitchModifier") ) { return ::hx::Val( glitchModifier ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VCRDistortionShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"iTime") ) { iTime=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noiseTex") ) { noiseTex=inValue.Cast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"vignetteOn") ) { vignetteOn=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scanlinesOn") ) { scanlinesOn=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iResolution") ) { iResolution=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"distortionOn") ) { distortionOn=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"perspectiveOn") ) { perspectiveOn=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"vignetteMoving") ) { vignetteMoving=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glitchModifier") ) { glitchModifier=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VCRDistortionShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("iTime",16,e1,e8,ac));
	outFields->push(HX_("vignetteOn",79,a8,5c,82));
	outFields->push(HX_("perspectiveOn",bb,81,53,4d));
	outFields->push(HX_("distortionOn",dc,ca,71,f2));
	outFields->push(HX_("scanlinesOn",21,3d,91,e1));
	outFields->push(HX_("vignetteMoving",e8,ee,4b,f2));
	outFields->push(HX_("noiseTex",6d,c2,0b,11));
	outFields->push(HX_("glitchModifier",6c,a8,96,1c));
	outFields->push(HX_("iResolution",f5,36,34,3f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VCRDistortionShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(VCRDistortionShader_obj,iTime),HX_("iTime",16,e1,e8,ac)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Bool */ ,(int)offsetof(VCRDistortionShader_obj,vignetteOn),HX_("vignetteOn",79,a8,5c,82)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Bool */ ,(int)offsetof(VCRDistortionShader_obj,perspectiveOn),HX_("perspectiveOn",bb,81,53,4d)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Bool */ ,(int)offsetof(VCRDistortionShader_obj,distortionOn),HX_("distortionOn",dc,ca,71,f2)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Bool */ ,(int)offsetof(VCRDistortionShader_obj,scanlinesOn),HX_("scanlinesOn",21,3d,91,e1)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Bool */ ,(int)offsetof(VCRDistortionShader_obj,vignetteMoving),HX_("vignetteMoving",e8,ee,4b,f2)},
	{::hx::fsObject /*  ::openfl::display::ShaderInput_openfl_display_BitmapData */ ,(int)offsetof(VCRDistortionShader_obj,noiseTex),HX_("noiseTex",6d,c2,0b,11)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(VCRDistortionShader_obj,glitchModifier),HX_("glitchModifier",6c,a8,96,1c)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(VCRDistortionShader_obj,iResolution),HX_("iResolution",f5,36,34,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VCRDistortionShader_obj_sStaticStorageInfo = 0;
#endif

static ::String VCRDistortionShader_obj_sMemberFields[] = {
	HX_("iTime",16,e1,e8,ac),
	HX_("vignetteOn",79,a8,5c,82),
	HX_("perspectiveOn",bb,81,53,4d),
	HX_("distortionOn",dc,ca,71,f2),
	HX_("scanlinesOn",21,3d,91,e1),
	HX_("vignetteMoving",e8,ee,4b,f2),
	HX_("noiseTex",6d,c2,0b,11),
	HX_("glitchModifier",6c,a8,96,1c),
	HX_("iResolution",f5,36,34,3f),
	::String(null()) };

::hx::Class VCRDistortionShader_obj::__mClass;

void VCRDistortionShader_obj::__register()
{
	VCRDistortionShader_obj _hx_dummy;
	VCRDistortionShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.VCRDistortionShader",47,ff,18,1e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VCRDistortionShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VCRDistortionShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VCRDistortionShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VCRDistortionShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
