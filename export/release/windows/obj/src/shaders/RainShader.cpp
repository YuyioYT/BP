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
#ifndef INCLUDED_shaders_RainShader
#include <shaders/RainShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cdcd0790cc20dc40_2125_new,"shaders.RainShader","new",0xad9befeb,"shaders.RainShader.new","shaders/Shaders.hx",2125,0x7800d7f1)
namespace shaders{

void RainShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cdcd0790cc20dc40_2125_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n        varying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n            \n        uniform float iTime;\n\n        vec2 rand(vec2 c){\n            mat2 m = mat2(12.9898,.16180,78.233,.31415);\n            return fract(sin(m * c) * vec2(43758.5453, 14142.1));\n        }\n\n        vec2 noise(vec2 p){\n            vec2 co = floor(p);\n            vec2 mu = fract(p);\n            mu = 3.*mu*mu-2.*mu*mu*mu;\n            vec2 a = rand((co+vec2(0.,0.)));\n            vec2 b = rand((co+vec2(1.,0.)));\n            vec2 c = rand((co+vec2(0.,1.)));\n            vec2 d = rand((co+vec2(1.,1.)));\n            return mix(mix(a, b, mu.x), mix(c, d, mu.x), mu.y);\n        }\n\n        vec2 round(vec2 num)\n        {\n            num.x = floor(num.x + 0.5);\n            num.y = floor(num.y + 0.5);\n            return num;\n        }\n\n\n\n\n        void main()\n        {\t\n            vec2 iResolution = vec2(1280,720);\n            vec2 c = openfl_TextureCoordv.xy;\n\n            vec2 u = c,\n                    v = (c*.1),\n                    n = noise(v*200.); // Displacement\n            \n            vec4 f = flixel_texture2D(bitmap, openfl_TextureCoordv.xy);\n            \n            // Loop through the different inverse sizes of drops\n            for (float r = 4. ; r > 0. ; r--) {\n                vec2 x = iResolution.xy * r * .015,  // Number of potential drops (in a grid)\n                        p = 6.28 * u * x + (n - .5) * 2.,\n                        s = sin(p);\n                \n                // Current drop properties. Coordinates are rounded to ensure a\n                // consistent value among the fragment of a given drop.\n                vec2 v = round(u * x - 0.25) / x;\n                vec4 d = vec4(noise(v*200.), noise(v));\n                \n                // Drop shape and fading\n                float t = (s.x+s.y) * max(0., 1. - fract(iTime * (d.b + .1) + d.g) * 2.);;\n                \n                // d.r -> only x% of drops are kept on, with x depending on the size of drops\n                if (d.r < (5.-r)*.08 && t > .5) {\n                    // Drop normal\n                    vec3 v = normalize(-vec3(cos(p), mix(.2, 2., t-.5)));\n                    // fragColor = vec4(v * 0.5 + 0.5, 1.0);  // show normals\n                    \n                    // Poor mans refraction (no visual need to do more)\n                    f = flixel_texture2D(bitmap, u - v.xy * .3);\n                }\n            }\n            gl_FragColor = f;\n        }\n\n        ",05,84,81,d4);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE(2126)		super::__construct();
HXLINE(2052)		this->_hx___isGenerated = true;
HXDLIN(2052)		this->_hx___initGL();
            	}

Dynamic RainShader_obj::__CreateEmpty() { return new RainShader_obj; }

void *RainShader_obj::_hx_vtable = 0;

Dynamic RainShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RainShader_obj > _hx_result = new RainShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RainShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1efca5b6;
		}
	} else {
		return inClassId==(int)0x5d863b83 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< RainShader_obj > RainShader_obj::__new() {
	::hx::ObjectPtr< RainShader_obj > __this = new RainShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< RainShader_obj > RainShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	RainShader_obj *__this = (RainShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RainShader_obj), true, "shaders.RainShader"));
	*(void **)__this = RainShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

RainShader_obj::RainShader_obj()
{
}

void RainShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RainShader);
	HX_MARK_MEMBER_NAME(iTime,"iTime");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RainShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(iTime,"iTime");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val RainShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"iTime") ) { return ::hx::Val( iTime ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RainShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"iTime") ) { iTime=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RainShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("iTime",16,e1,e8,ac));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RainShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(RainShader_obj,iTime),HX_("iTime",16,e1,e8,ac)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RainShader_obj_sStaticStorageInfo = 0;
#endif

static ::String RainShader_obj_sMemberFields[] = {
	HX_("iTime",16,e1,e8,ac),
	::String(null()) };

::hx::Class RainShader_obj::__mClass;

void RainShader_obj::__register()
{
	RainShader_obj _hx_dummy;
	RainShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.RainShader",79,1e,7d,db);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RainShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RainShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RainShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RainShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
