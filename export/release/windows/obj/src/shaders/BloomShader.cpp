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
#ifndef INCLUDED_shaders_BloomShader
#include <shaders/BloomShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_95f7754fb0cd81b3_2335_new,"shaders.BloomShader","new",0x370df55a,"shaders.BloomShader.new","shaders/Shaders.hx",2335,0x7800d7f1)
namespace shaders{

void BloomShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_95f7754fb0cd81b3_2335_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n    varying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n\n    uniform float effect;\n    uniform float strength;\n\n\n    uniform float contrast;\n    uniform float brightness;\n\n    uniform vec2 iResolution;\n\n    void main()\n    {\n        vec2 uv = openfl_TextureCoordv;\n\n\n\t\tvec4 color = flixel_texture2D(bitmap,uv);\n        //float brightness = dot(color.rgb, vec3(0.2126, 0.7152, 0.0722));\n\n        //vec4 newColor = vec4(color.rgb * brightness * strength * color.a, color.a);\n\n        //got some stuff from here: https://github.com/amilajack/gaussian-blur/blob/master/src/9.glsl\n        //this also helped to understand: https://learnopengl.com/Advanced-Lighting/Bloom\n\n\n        color.rgb *= contrast;\n        color.rgb += vec3(brightness,brightness,brightness);\n\n        if (effect <= 0)\n        {\n            gl_FragColor = color;\n            return;\n        }\n\n\n        vec2 off1 = vec2(1.3846153846) * effect;\n        vec2 off2 = vec2(3.2307692308) * effect;\n\n        color += flixel_texture2D(bitmap, uv) * 0.2270270270 * strength;\n        color += flixel_texture2D(bitmap, uv + (off1 / iResolution)) * 0.3162162162 * strength;\n        color += flixel_texture2D(bitmap, uv - (off1 / iResolution)) * 0.3162162162 * strength;\n        color += flixel_texture2D(bitmap, uv + (off2 / iResolution)) * 0.0702702703 * strength;\n        color += flixel_texture2D(bitmap, uv - (off2 / iResolution)) * 0.0702702703 * strength;\n\n\t\tgl_FragColor = color;\n    }",d6,dc,82,48);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE(2336)		super::__construct();
HXLINE(2285)		this->_hx___isGenerated = true;
HXDLIN(2285)		this->_hx___initGL();
            	}

Dynamic BloomShader_obj::__CreateEmpty() { return new BloomShader_obj; }

void *BloomShader_obj::_hx_vtable = 0;

Dynamic BloomShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BloomShader_obj > _hx_result = new BloomShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BloomShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x04f93fcd) {
		if (inClassId<=(int)0x00eff9ae) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x00eff9ae;
		} else {
			return inClassId==(int)0x04f93fcd;
		}
	} else {
		return inClassId==(int)0x1efca5b6 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< BloomShader_obj > BloomShader_obj::__new() {
	::hx::ObjectPtr< BloomShader_obj > __this = new BloomShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BloomShader_obj > BloomShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BloomShader_obj *__this = (BloomShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BloomShader_obj), true, "shaders.BloomShader"));
	*(void **)__this = BloomShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BloomShader_obj::BloomShader_obj()
{
}

void BloomShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BloomShader);
	HX_MARK_MEMBER_NAME(effect,"effect");
	HX_MARK_MEMBER_NAME(strength,"strength");
	HX_MARK_MEMBER_NAME(contrast,"contrast");
	HX_MARK_MEMBER_NAME(brightness,"brightness");
	HX_MARK_MEMBER_NAME(iResolution,"iResolution");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BloomShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(effect,"effect");
	HX_VISIT_MEMBER_NAME(strength,"strength");
	HX_VISIT_MEMBER_NAME(contrast,"contrast");
	HX_VISIT_MEMBER_NAME(brightness,"brightness");
	HX_VISIT_MEMBER_NAME(iResolution,"iResolution");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BloomShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"effect") ) { return ::hx::Val( effect ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { return ::hx::Val( strength ); }
		if (HX_FIELD_EQ(inName,"contrast") ) { return ::hx::Val( contrast ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"brightness") ) { return ::hx::Val( brightness ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"iResolution") ) { return ::hx::Val( iResolution ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BloomShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"effect") ) { effect=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { strength=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contrast") ) { contrast=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"brightness") ) { brightness=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"iResolution") ) { iResolution=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BloomShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("effect",91,5a,a3,60));
	outFields->push(HX_("strength",81,d2,8e,8e));
	outFields->push(HX_("contrast",02,ed,b1,37));
	outFields->push(HX_("brightness",d1,8d,71,65));
	outFields->push(HX_("iResolution",f5,36,34,3f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BloomShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(BloomShader_obj,effect),HX_("effect",91,5a,a3,60)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(BloomShader_obj,strength),HX_("strength",81,d2,8e,8e)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(BloomShader_obj,contrast),HX_("contrast",02,ed,b1,37)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(BloomShader_obj,brightness),HX_("brightness",d1,8d,71,65)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(BloomShader_obj,iResolution),HX_("iResolution",f5,36,34,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BloomShader_obj_sStaticStorageInfo = 0;
#endif

static ::String BloomShader_obj_sMemberFields[] = {
	HX_("effect",91,5a,a3,60),
	HX_("strength",81,d2,8e,8e),
	HX_("contrast",02,ed,b1,37),
	HX_("brightness",d1,8d,71,65),
	HX_("iResolution",f5,36,34,3f),
	::String(null()) };

::hx::Class BloomShader_obj::__mClass;

void BloomShader_obj::__register()
{
	BloomShader_obj _hx_dummy;
	BloomShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.BloomShader",68,00,a6,6b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BloomShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BloomShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BloomShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BloomShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
