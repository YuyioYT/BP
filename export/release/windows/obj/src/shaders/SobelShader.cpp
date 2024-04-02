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
#ifndef INCLUDED_shaders_SobelShader
#include <shaders/SobelShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c520b24dace73c15_2801_new,"shaders.SobelShader","new",0xc6ac7844,"shaders.SobelShader.new","shaders/Shaders.hx",2801,0x7800d7f1)
namespace shaders{

void SobelShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c520b24dace73c15_2801_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n\t\t\n\t\tuniform float strength;\n        uniform float intensity;\n\n\t\tvoid main()\n\t\t{\n\t\t\tvec2 uv = openfl_TextureCoordv;\n\t\t\tvec4 col = flixel_texture2D(bitmap, uv);\n            vec2 resFactor = (1/openfl_TextureSize.xy)*intensity;\n\n            if (strength <= 0)\n            {\n                gl_FragColor = col;\n                return;\n            }\n\n            //https://en.wikipedia.org/wiki/Sobel_operator\n            //adsjklalskdfjhaslkdfhaslkdfhj\n\n            vec4 topLeft = flixel_texture2D(bitmap, vec2(uv.x-resFactor.x, uv.y-resFactor.y));\n            vec4 topMiddle = flixel_texture2D(bitmap, vec2(uv.x, uv.y-resFactor.y));\n            vec4 topRight = flixel_texture2D(bitmap, vec2(uv.x+resFactor.x, uv.y-resFactor.y));\n\n            vec4 midLeft = flixel_texture2D(bitmap, vec2(uv.x-resFactor.x, uv.y));\n            vec4 midRight = flixel_texture2D(bitmap, vec2(uv.x+resFactor.x, uv.y));\n\n            vec4 bottomLeft = flixel_texture2D(bitmap, vec2(uv.x-resFactor.x, uv.y+resFactor.y));\n            vec4 bottomMiddle = flixel_texture2D(bitmap, vec2(uv.x, uv.y+resFactor.y));\n            vec4 bottomRight = flixel_texture2D(bitmap, vec2(uv.x+resFactor.x, uv.y+resFactor.y));\n\n            vec4 Gx = (topLeft) + (2*midLeft) + (bottomLeft) - (topRight) - (2*midRight) - (bottomRight);\n            vec4 Gy = (topLeft) + (2*topMiddle) + (topRight) - (bottomLeft) - (2*bottomMiddle) - (bottomRight);\n            vec4 G = sqrt((Gx*Gx) + (Gy*Gy));\n\t\t\t\n\t\t\tgl_FragColor = mix(col, G, strength);\n\t\t}",d7,4d,6e,a0);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE(2802)		super::__construct();
HXLINE(2760)		this->_hx___isGenerated = true;
HXDLIN(2760)		this->_hx___initGL();
            	}

Dynamic SobelShader_obj::__CreateEmpty() { return new SobelShader_obj; }

void *SobelShader_obj::_hx_vtable = 0;

Dynamic SobelShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SobelShader_obj > _hx_result = new SobelShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SobelShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1efca5b6;
		}
	} else {
		return inClassId==(int)0x519426a4 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< SobelShader_obj > SobelShader_obj::__new() {
	::hx::ObjectPtr< SobelShader_obj > __this = new SobelShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SobelShader_obj > SobelShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SobelShader_obj *__this = (SobelShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SobelShader_obj), true, "shaders.SobelShader"));
	*(void **)__this = SobelShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SobelShader_obj::SobelShader_obj()
{
}

void SobelShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SobelShader);
	HX_MARK_MEMBER_NAME(strength,"strength");
	HX_MARK_MEMBER_NAME(intensity,"intensity");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SobelShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(strength,"strength");
	HX_VISIT_MEMBER_NAME(intensity,"intensity");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SobelShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { return ::hx::Val( strength ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intensity") ) { return ::hx::Val( intensity ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SobelShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { strength=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intensity") ) { intensity=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SobelShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("strength",81,d2,8e,8e));
	outFields->push(HX_("intensity",b3,c6,dd,f4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SobelShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(SobelShader_obj,strength),HX_("strength",81,d2,8e,8e)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(SobelShader_obj,intensity),HX_("intensity",b3,c6,dd,f4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SobelShader_obj_sStaticStorageInfo = 0;
#endif

static ::String SobelShader_obj_sMemberFields[] = {
	HX_("strength",81,d2,8e,8e),
	HX_("intensity",b3,c6,dd,f4),
	::String(null()) };

::hx::Class SobelShader_obj::__mClass;

void SobelShader_obj::__register()
{
	SobelShader_obj _hx_dummy;
	SobelShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.SobelShader",52,46,7a,1f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SobelShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SobelShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SobelShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SobelShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
