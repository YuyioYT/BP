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
#ifndef INCLUDED_shaders_ChromAberrationBlueSwapShader
#include <shaders/ChromAberrationBlueSwapShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a829a74ffe1f6a68_2763_new,"shaders.ChromAberrationBlueSwapShader","new",0xa326ab00,"shaders.ChromAberrationBlueSwapShader.new","shaders/Shaders.hx",2763,0x7800d7f1)
namespace shaders{

void ChromAberrationBlueSwapShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a829a74ffe1f6a68_2763_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n        varying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n        \n        uniform float strength;\n\n        void main()\n        {\n            vec2 uv = openfl_TextureCoordv;\n            vec4 col = flixel_texture2D(bitmap, uv);\n\n            // Desplazamiento de los canales rojo y verde\n            col.r = flixel_texture2D(bitmap, vec2(uv.x + strength, uv.y)).r;\n            col.g = flixel_texture2D(bitmap, vec2(uv.x - strength, uv.y)).g;\n\n            // Ajuste del color\n            col = col * (1.0 - strength * 0.5);\n\n            gl_FragColor = col;\n        }",00,2e,3d,99);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE(2764)		super::__construct();
HXLINE(2741)		this->_hx___isGenerated = true;
HXDLIN(2741)		this->_hx___initGL();
            	}

Dynamic ChromAberrationBlueSwapShader_obj::__CreateEmpty() { return new ChromAberrationBlueSwapShader_obj; }

void *ChromAberrationBlueSwapShader_obj::_hx_vtable = 0;

Dynamic ChromAberrationBlueSwapShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChromAberrationBlueSwapShader_obj > _hx_result = new ChromAberrationBlueSwapShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ChromAberrationBlueSwapShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1efca5b6;
		}
	} else {
		return inClassId==(int)0x2068dc44 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< ChromAberrationBlueSwapShader_obj > ChromAberrationBlueSwapShader_obj::__new() {
	::hx::ObjectPtr< ChromAberrationBlueSwapShader_obj > __this = new ChromAberrationBlueSwapShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ChromAberrationBlueSwapShader_obj > ChromAberrationBlueSwapShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ChromAberrationBlueSwapShader_obj *__this = (ChromAberrationBlueSwapShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChromAberrationBlueSwapShader_obj), true, "shaders.ChromAberrationBlueSwapShader"));
	*(void **)__this = ChromAberrationBlueSwapShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ChromAberrationBlueSwapShader_obj::ChromAberrationBlueSwapShader_obj()
{
}

void ChromAberrationBlueSwapShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ChromAberrationBlueSwapShader);
	HX_MARK_MEMBER_NAME(strength,"strength");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ChromAberrationBlueSwapShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(strength,"strength");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ChromAberrationBlueSwapShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { return ::hx::Val( strength ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ChromAberrationBlueSwapShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { strength=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ChromAberrationBlueSwapShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("strength",81,d2,8e,8e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ChromAberrationBlueSwapShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(ChromAberrationBlueSwapShader_obj,strength),HX_("strength",81,d2,8e,8e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ChromAberrationBlueSwapShader_obj_sStaticStorageInfo = 0;
#endif

static ::String ChromAberrationBlueSwapShader_obj_sMemberFields[] = {
	HX_("strength",81,d2,8e,8e),
	::String(null()) };

::hx::Class ChromAberrationBlueSwapShader_obj::__mClass;

void ChromAberrationBlueSwapShader_obj::__register()
{
	ChromAberrationBlueSwapShader_obj _hx_dummy;
	ChromAberrationBlueSwapShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.ChromAberrationBlueSwapShader",0e,6b,3d,32);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChromAberrationBlueSwapShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ChromAberrationBlueSwapShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChromAberrationBlueSwapShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChromAberrationBlueSwapShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
