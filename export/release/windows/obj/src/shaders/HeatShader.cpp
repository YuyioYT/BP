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
#ifndef INCLUDED_shaders_HeatShader
#include <shaders/HeatShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f95c67ed0a872d7c_2138_new,"shaders.HeatShader","new",0x2113bac7,"shaders.HeatShader.new","shaders/Shaders.hx",2138,0x7800d7f1)
namespace shaders{

void HeatShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f95c67ed0a872d7c_2138_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n\t\t\n        uniform float strength;\n        uniform float iTime;\n        \n        float rand(vec2 n) { return fract(sin(dot(n, vec2(12.9898, 4.1414))) * 43758.5453);}\n        float noise(vec2 n) \n        {\n            const vec2 d = vec2(0.0, 1.0);\n            vec2 b = floor(n), f = smoothstep(vec2(0.0), vec2(1.0), fract(n));\n            return mix(mix(rand(b), rand(b + d.yx), f.x), mix(rand(b + d.xy), rand(b + d.yy), f.x), f.y);\n        }\n\n        //https://www.shadertoy.com/view/XsVSRd \n        //edited version of this\n        //partially using a version in the comments that doesnt use a texture and uses noise instead\n            \n        void main()\n        {\t\n            \n            vec2 uv = openfl_TextureCoordv.xy;\n            vec2 offsetUV = vec4(noise(vec2(uv.x,uv.y+(iTime*0.1)) * vec2(50))).xy;\n            offsetUV -= vec2(.5,.5);\n            offsetUV *= 2.;\n            offsetUV *= 0.01*0.1*strength;\n            offsetUV *= (1. + uv.y);\n            \n            gl_FragColor = flixel_texture2D( bitmap, uv+offsetUV );\n        }\n\n        ",ae,4e,33,2f);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE(2139)		super::__construct();
HXLINE(2103)		this->_hx___isGenerated = true;
HXDLIN(2103)		this->_hx___initGL();
            	}

Dynamic HeatShader_obj::__CreateEmpty() { return new HeatShader_obj; }

void *HeatShader_obj::_hx_vtable = 0;

Dynamic HeatShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HeatShader_obj > _hx_result = new HeatShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HeatShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1efca5b6;
		}
	} else {
		return inClassId==(int)0x5650685f || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< HeatShader_obj > HeatShader_obj::__new() {
	::hx::ObjectPtr< HeatShader_obj > __this = new HeatShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HeatShader_obj > HeatShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HeatShader_obj *__this = (HeatShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HeatShader_obj), true, "shaders.HeatShader"));
	*(void **)__this = HeatShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HeatShader_obj::HeatShader_obj()
{
}

void HeatShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HeatShader);
	HX_MARK_MEMBER_NAME(strength,"strength");
	HX_MARK_MEMBER_NAME(iTime,"iTime");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HeatShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(strength,"strength");
	HX_VISIT_MEMBER_NAME(iTime,"iTime");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HeatShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

::hx::Val HeatShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
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

void HeatShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("strength",81,d2,8e,8e));
	outFields->push(HX_("iTime",16,e1,e8,ac));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HeatShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(HeatShader_obj,strength),HX_("strength",81,d2,8e,8e)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(HeatShader_obj,iTime),HX_("iTime",16,e1,e8,ac)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HeatShader_obj_sStaticStorageInfo = 0;
#endif

static ::String HeatShader_obj_sMemberFields[] = {
	HX_("strength",81,d2,8e,8e),
	HX_("iTime",16,e1,e8,ac),
	::String(null()) };

::hx::Class HeatShader_obj::__mClass;

void HeatShader_obj::__register()
{
	HeatShader_obj _hx_dummy;
	HeatShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.HeatShader",55,4b,47,d4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HeatShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HeatShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HeatShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HeatShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
