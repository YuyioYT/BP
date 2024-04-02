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
#ifndef INCLUDED_shaders_BlockedGlitchShader
#include <shaders/BlockedGlitchShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_772ddcac94b385ec_1691_new,"shaders.BlockedGlitchShader","new",0xeefd0b18,"shaders.BlockedGlitchShader.new","shaders/Shaders.hx",1691,0x7800d7f1)
namespace shaders{

void BlockedGlitchShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_772ddcac94b385ec_1691_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n    varying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n\n    // ---- gllock required fields -----------------------------------------------------------------------------------------\n    #define RATE 0.75\n    \n    uniform float time;\n    uniform float end;\n    uniform bool enabled;\n    uniform sampler2D imageData;\n    uniform vec2 screenSize;\n    // ---------------------------------------------------------------------------------------------------------------------\n    \n    float rand(vec2 co){\n      return fract(sin(dot(co.xy ,vec2(12.9898,78.233))) * 43758.5453) * 2.0 - 1.0;\n    }\n    \n    float offset(float blocks, vec2 uv) {\n      float shaderTime = time*RATE;\n      return rand(vec2(shaderTime, floor(uv.y * blocks)));\n    }\n    \n    void main(void) {\n        vec2 uv = openfl_TextureCoordv;\n        gl_FragColor = texture(bitmap, uv);\n        if (enabled)\n        {\n          gl_FragColor.r = texture(bitmap, uv + vec2(offset(64.0, uv) * 0.03, 0.0)).r;\n          gl_FragColor.g = texture(bitmap, uv + vec2(offset(64.0, uv) * 0.03 * 0.16666666, 0.0)).g;\n          gl_FragColor.b = texture(bitmap, uv + vec2(offset(64.0, uv) * 0.03, 0.0)).b;\n        }\n    }\n    ",c2,39,f9,27);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE(1692)		super::__construct();
HXLINE(1653)		this->_hx___isGenerated = true;
HXDLIN(1653)		this->_hx___initGL();
            	}

Dynamic BlockedGlitchShader_obj::__CreateEmpty() { return new BlockedGlitchShader_obj; }

void *BlockedGlitchShader_obj::_hx_vtable = 0;

Dynamic BlockedGlitchShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BlockedGlitchShader_obj > _hx_result = new BlockedGlitchShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BlockedGlitchShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x097fd0dc) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x097fd0dc;
		}
	} else {
		return inClassId==(int)0x1efca5b6 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< BlockedGlitchShader_obj > BlockedGlitchShader_obj::__new() {
	::hx::ObjectPtr< BlockedGlitchShader_obj > __this = new BlockedGlitchShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BlockedGlitchShader_obj > BlockedGlitchShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BlockedGlitchShader_obj *__this = (BlockedGlitchShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BlockedGlitchShader_obj), true, "shaders.BlockedGlitchShader"));
	*(void **)__this = BlockedGlitchShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BlockedGlitchShader_obj::BlockedGlitchShader_obj()
{
}

void BlockedGlitchShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BlockedGlitchShader);
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(imageData,"imageData");
	HX_MARK_MEMBER_NAME(screenSize,"screenSize");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BlockedGlitchShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(imageData,"imageData");
	HX_VISIT_MEMBER_NAME(screenSize,"screenSize");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BlockedGlitchShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return ::hx::Val( end ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return ::hx::Val( time ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return ::hx::Val( enabled ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"imageData") ) { return ::hx::Val( imageData ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"screenSize") ) { return ::hx::Val( screenSize ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BlockedGlitchShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"imageData") ) { imageData=inValue.Cast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"screenSize") ) { screenSize=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BlockedGlitchShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("time",0d,cc,fc,4c));
	outFields->push(HX_("end",db,03,4d,00));
	outFields->push(HX_("enabled",81,04,31,7e));
	outFields->push(HX_("imageData",25,eb,97,24));
	outFields->push(HX_("screenSize",4d,2e,8a,c4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BlockedGlitchShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(BlockedGlitchShader_obj,time),HX_("time",0d,cc,fc,4c)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(BlockedGlitchShader_obj,end),HX_("end",db,03,4d,00)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Bool */ ,(int)offsetof(BlockedGlitchShader_obj,enabled),HX_("enabled",81,04,31,7e)},
	{::hx::fsObject /*  ::openfl::display::ShaderInput_openfl_display_BitmapData */ ,(int)offsetof(BlockedGlitchShader_obj,imageData),HX_("imageData",25,eb,97,24)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(BlockedGlitchShader_obj,screenSize),HX_("screenSize",4d,2e,8a,c4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BlockedGlitchShader_obj_sStaticStorageInfo = 0;
#endif

static ::String BlockedGlitchShader_obj_sMemberFields[] = {
	HX_("time",0d,cc,fc,4c),
	HX_("end",db,03,4d,00),
	HX_("enabled",81,04,31,7e),
	HX_("imageData",25,eb,97,24),
	HX_("screenSize",4d,2e,8a,c4),
	::String(null()) };

::hx::Class BlockedGlitchShader_obj::__mClass;

void BlockedGlitchShader_obj::__register()
{
	BlockedGlitchShader_obj _hx_dummy;
	BlockedGlitchShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.BlockedGlitchShader",26,df,2b,a2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BlockedGlitchShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BlockedGlitchShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BlockedGlitchShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BlockedGlitchShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
