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
#ifndef INCLUDED_openfl_display_ShaderParameter_Bool
#include <openfl/display/ShaderParameter_Bool.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_shaders_ScanlineShader
#include <shaders/ScanlineShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7def9cb757446422_211_new,"shaders.ScanlineShader","new",0x6a3ef4c8,"shaders.ScanlineShader.new","shaders/Shaders.hx",211,0x7800d7f1)
namespace shaders{

void ScanlineShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7def9cb757446422_211_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n        varying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n            \n        uniform float strength;\n        uniform float pixelsBetweenEachLine;\n        uniform bool smoothVar;\n\n        float m(float a, float b) //was having an issue with mod so i did this to try and fix it\n        {\n            return a - (b * floor(a/b));\n        }\n\n        void main()\n        {\t\n            vec2 iResolution = vec2(1280.0,720.0);\n            vec2 uv = openfl_TextureCoordv.xy;\n            vec2 fragCoordShit = iResolution*uv;\n\n            vec4 col = flixel_texture2D(bitmap, uv);\n\n            if (smoothVar)\n            {\n                float apply = abs(sin(fragCoordShit.y)*0.5*pixelsBetweenEachLine);\n                vec3 finalCol = mix(col.rgb, vec3(0.0, 0.0, 0.0), apply);\n                vec4 scanline = vec4(finalCol.r, finalCol.g, finalCol.b, col.a);\n    \t        gl_FragColor = mix(col, scanline, strength);\n                return;\n            }\n\n            vec4 scanline = flixel_texture2D(bitmap, uv);\n            if (m(floor(fragCoordShit.y), pixelsBetweenEachLine) == 0.0)\n            {\n                scanline = vec4(0.0,0.0,0.0,1.0);\n            }\n            \n            gl_FragColor = mix(col, scanline, strength);\n        }\n\n        ",3b,0f,4d,fc);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE( 212)		super::__construct();
HXLINE( 169)		this->_hx___isGenerated = true;
HXDLIN( 169)		this->_hx___initGL();
            	}

Dynamic ScanlineShader_obj::__CreateEmpty() { return new ScanlineShader_obj; }

void *ScanlineShader_obj::_hx_vtable = 0;

Dynamic ScanlineShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScanlineShader_obj > _hx_result = new ScanlineShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ScanlineShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1efca5b6;
		}
	} else {
		return inClassId==(int)0x6ff0cfc4 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< ScanlineShader_obj > ScanlineShader_obj::__new() {
	::hx::ObjectPtr< ScanlineShader_obj > __this = new ScanlineShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ScanlineShader_obj > ScanlineShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ScanlineShader_obj *__this = (ScanlineShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScanlineShader_obj), true, "shaders.ScanlineShader"));
	*(void **)__this = ScanlineShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ScanlineShader_obj::ScanlineShader_obj()
{
}

void ScanlineShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScanlineShader);
	HX_MARK_MEMBER_NAME(strength,"strength");
	HX_MARK_MEMBER_NAME(pixelsBetweenEachLine,"pixelsBetweenEachLine");
	HX_MARK_MEMBER_NAME(smoothVar,"smoothVar");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScanlineShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(strength,"strength");
	HX_VISIT_MEMBER_NAME(pixelsBetweenEachLine,"pixelsBetweenEachLine");
	HX_VISIT_MEMBER_NAME(smoothVar,"smoothVar");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ScanlineShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { return ::hx::Val( strength ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothVar") ) { return ::hx::Val( smoothVar ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"pixelsBetweenEachLine") ) { return ::hx::Val( pixelsBetweenEachLine ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScanlineShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { strength=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothVar") ) { smoothVar=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"pixelsBetweenEachLine") ) { pixelsBetweenEachLine=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScanlineShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("strength",81,d2,8e,8e));
	outFields->push(HX_("pixelsBetweenEachLine",d0,df,6c,a4));
	outFields->push(HX_("smoothVar",59,5f,d3,95));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScanlineShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(ScanlineShader_obj,strength),HX_("strength",81,d2,8e,8e)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(ScanlineShader_obj,pixelsBetweenEachLine),HX_("pixelsBetweenEachLine",d0,df,6c,a4)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Bool */ ,(int)offsetof(ScanlineShader_obj,smoothVar),HX_("smoothVar",59,5f,d3,95)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScanlineShader_obj_sStaticStorageInfo = 0;
#endif

static ::String ScanlineShader_obj_sMemberFields[] = {
	HX_("strength",81,d2,8e,8e),
	HX_("pixelsBetweenEachLine",d0,df,6c,a4),
	HX_("smoothVar",59,5f,d3,95),
	::String(null()) };

::hx::Class ScanlineShader_obj::__mClass;

void ScanlineShader_obj::__register()
{
	ScanlineShader_obj _hx_dummy;
	ScanlineShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.ScanlineShader",d6,30,6b,c6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScanlineShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScanlineShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScanlineShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScanlineShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
