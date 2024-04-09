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
#ifndef INCLUDED_shaders_Grey2Shader
#include <shaders/Grey2Shader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8f434a54f5661cf6_833_new,"shaders.Grey2Shader","new",0xd4bab18a,"shaders.Grey2Shader.new","shaders/Shaders.hx",833,0x7800d7f1)
namespace shaders{

void Grey2Shader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8f434a54f5661cf6_833_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n    varying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n\n    uniform float iStrength;\n                                                                            \n    void main()                                                             \n    {\n        float intensity = iStrength;\n        if (intensity > 1.0) {\n            intensity = 1.0;\n        }\n        if (intensity < 0.0) {\n            intensity = 0.0;\n        }\n        vec4 toUse=texture2D(bitmap,openfl_TextureCoordv);\n        float grey = (toUse.r + toUse.g + toUse.b) / 3;\n        toUse.r=(toUse.r*(1.0-iStrength) + grey*(iStrength));\n        toUse.g=(toUse.g*(1.0-iStrength) + grey*(iStrength));\n        toUse.b=(toUse.b*(1.0-iStrength) + grey*(iStrength));\n        \n        gl_FragColor=toUse;\n    }   \n\t",8c,a3,72,26);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE( 834)		super::__construct();
HXLINE( 809)		this->_hx___isGenerated = true;
HXDLIN( 809)		this->_hx___initGL();
            	}

Dynamic Grey2Shader_obj::__CreateEmpty() { return new Grey2Shader_obj; }

void *Grey2Shader_obj::_hx_vtable = 0;

Dynamic Grey2Shader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Grey2Shader_obj > _hx_result = new Grey2Shader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Grey2Shader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0ceec4ea) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x0ceec4ea;
		}
	} else {
		return inClassId==(int)0x1efca5b6 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< Grey2Shader_obj > Grey2Shader_obj::__new() {
	::hx::ObjectPtr< Grey2Shader_obj > __this = new Grey2Shader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Grey2Shader_obj > Grey2Shader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Grey2Shader_obj *__this = (Grey2Shader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Grey2Shader_obj), true, "shaders.Grey2Shader"));
	*(void **)__this = Grey2Shader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Grey2Shader_obj::Grey2Shader_obj()
{
}

void Grey2Shader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Grey2Shader);
	HX_MARK_MEMBER_NAME(iStrength,"iStrength");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Grey2Shader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(iStrength,"iStrength");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Grey2Shader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"iStrength") ) { return ::hx::Val( iStrength ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Grey2Shader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"iStrength") ) { iStrength=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Grey2Shader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("iStrength",0a,a0,44,ed));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Grey2Shader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Grey2Shader_obj,iStrength),HX_("iStrength",0a,a0,44,ed)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Grey2Shader_obj_sStaticStorageInfo = 0;
#endif

static ::String Grey2Shader_obj_sMemberFields[] = {
	HX_("iStrength",0a,a0,44,ed),
	::String(null()) };

::hx::Class Grey2Shader_obj::__mClass;

void Grey2Shader_obj::__register()
{
	Grey2Shader_obj _hx_dummy;
	Grey2Shader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.Grey2Shader",98,e4,d4,da);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Grey2Shader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Grey2Shader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Grey2Shader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Grey2Shader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
