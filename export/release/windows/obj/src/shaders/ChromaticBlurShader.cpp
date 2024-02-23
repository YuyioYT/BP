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
#ifndef INCLUDED_shaders_ChromaticBlurShader
#include <shaders/ChromaticBlurShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4fa78a6682adcd5b_1223_new,"shaders.ChromaticBlurShader","new",0xb8bf40f6,"shaders.ChromaticBlurShader.new","shaders/Shaders.hx",1223,0x7800d7f1)
namespace shaders{

void ChromaticBlurShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4fa78a6682adcd5b_1223_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n\n    varying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\nvec2 uv = openfl_TextureCoordv.xy;\nvec2 fragCoord = openfl_TextureCoordv*openfl_TextureSize;\nvec2 iResolution = openfl_TextureSize;\nuniform float iTime;\n#define iChannel0 bitmap\n#define texture flixel_texture2D\n#define fragColor gl_FragColor\n#define mainImage main\n/*\n\tTransverse Chromatic Aberration\n\n\tBased on https://github.com/FlexMonkey/Filterpedia/blob/7a0d4a7070894eb77b9d1831f689f9d8765c12ca/Filterpedia/customFilters/TransverseChromaticAberration.swift\n\n\tSimon Gladman | http://flexmonkey.blogspot.co.uk | September 2017\n*/\n\nint sampleCount = 50;\nfloat blur = 0.25; \nfloat falloff = 3.0; \n\n// use iChannel0 for video, iChannel1 for test grid\n#define INPUT iChannel0\n\nvoid mainImage( out vec4 fragColor, in vec2 fragCoord )\n{\n    vec2 destCoord = fragCoord.xy / iResolution.xy;\n\n    vec2 direction = normalize(destCoord - 0.5); \n    vec2 velocity = direction * blur * pow(length(destCoord - 0.5), falloff);\n\tfloat inverseSampleCount = 1.0 / float(sampleCount); \n    \n    mat3x2 increments = mat3x2(velocity * 1.0 * inverseSampleCount,\n                               velocity * 2.0 * inverseSampleCount,\n                               velocity * 4.0 * inverseSampleCount);\n\n    vec3 accumulator = vec3(0);\n    mat3x2 offsets = mat3x2(0); \n    \n    for (int i = 0; i < sampleCount; i++) {\n        accumulator.r += texture(INPUT, destCoord + offsets[0]).r; \n        accumulator.g += texture(INPUT, destCoord + offsets[1]).g; \n        accumulator.b += texture(INPUT, destCoord + offsets[2]).b; \n        \n        offsets -= increments;\n    }\n\n\tfragColor = vec4(accumulator / float(sampleCount), 1.0);\n}\n    ",ac,e2,ab,30);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE(1224)		super::__construct();
HXLINE(1168)		this->_hx___isGenerated = true;
HXDLIN(1168)		this->_hx___initGL();
            	}

Dynamic ChromaticBlurShader_obj::__CreateEmpty() { return new ChromaticBlurShader_obj; }

void *ChromaticBlurShader_obj::_hx_vtable = 0;

Dynamic ChromaticBlurShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChromaticBlurShader_obj > _hx_result = new ChromaticBlurShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ChromaticBlurShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x157e3fba) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x157e3fba;
		}
	} else {
		return inClassId==(int)0x1efca5b6 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< ChromaticBlurShader_obj > ChromaticBlurShader_obj::__new() {
	::hx::ObjectPtr< ChromaticBlurShader_obj > __this = new ChromaticBlurShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ChromaticBlurShader_obj > ChromaticBlurShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ChromaticBlurShader_obj *__this = (ChromaticBlurShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChromaticBlurShader_obj), true, "shaders.ChromaticBlurShader"));
	*(void **)__this = ChromaticBlurShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ChromaticBlurShader_obj::ChromaticBlurShader_obj()
{
}

void ChromaticBlurShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ChromaticBlurShader);
	HX_MARK_MEMBER_NAME(iTime,"iTime");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ChromaticBlurShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(iTime,"iTime");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ChromaticBlurShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"iTime") ) { return ::hx::Val( iTime ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ChromaticBlurShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"iTime") ) { iTime=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ChromaticBlurShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("iTime",16,e1,e8,ac));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ChromaticBlurShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(ChromaticBlurShader_obj,iTime),HX_("iTime",16,e1,e8,ac)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ChromaticBlurShader_obj_sStaticStorageInfo = 0;
#endif

static ::String ChromaticBlurShader_obj_sMemberFields[] = {
	HX_("iTime",16,e1,e8,ac),
	::String(null()) };

::hx::Class ChromaticBlurShader_obj::__mClass;

void ChromaticBlurShader_obj::__register()
{
	ChromaticBlurShader_obj _hx_dummy;
	ChromaticBlurShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.ChromaticBlurShader",04,4e,2a,ae);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChromaticBlurShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ChromaticBlurShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChromaticBlurShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChromaticBlurShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
