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
#ifndef INCLUDED_shaders_PaletteShader
#include <shaders/PaletteShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_12203c1e75830caf_3256_new,"shaders.PaletteShader","new",0x71f12612,"shaders.PaletteShader.new","shaders/Shaders.hx",3256,0x7800d7f1)
namespace shaders{

void PaletteShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_12203c1e75830caf_3256_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n    varying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n\n    uniform float strength;\n    uniform float paletteSize;\n\n    float palette(float val, float size)\n    {\n        float f = floor(val * (size-1.0) + 0.5);\n        return f / (size-1.0);\n    }\n    void main()\n    {\n        vec2 uv = openfl_TextureCoordv;\n        vec4 col = flixel_texture2D(bitmap, uv);\n       \n        vec4 reducedCol = vec4(col.r,col.g,col.b,col.a);\n \n        reducedCol.r = palette(reducedCol.r, 8.0);\n        reducedCol.g = palette(reducedCol.g, 8.0);\n        reducedCol.b = palette(reducedCol.b, 8.0);\n        gl_FragColor = mix(col, reducedCol, strength);\n    }\n\n        ",90,e6,f5,78);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE(3257)		super::__construct();
HXLINE(3228)		this->_hx___isGenerated = true;
HXDLIN(3228)		this->_hx___initGL();
            	}

Dynamic PaletteShader_obj::__CreateEmpty() { return new PaletteShader_obj; }

void *PaletteShader_obj::_hx_vtable = 0;

Dynamic PaletteShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PaletteShader_obj > _hx_result = new PaletteShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PaletteShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1efca5b6;
		}
	} else {
		return inClassId==(int)0x4de79a56 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< PaletteShader_obj > PaletteShader_obj::__new() {
	::hx::ObjectPtr< PaletteShader_obj > __this = new PaletteShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PaletteShader_obj > PaletteShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PaletteShader_obj *__this = (PaletteShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PaletteShader_obj), true, "shaders.PaletteShader"));
	*(void **)__this = PaletteShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PaletteShader_obj::PaletteShader_obj()
{
}

void PaletteShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PaletteShader);
	HX_MARK_MEMBER_NAME(strength,"strength");
	HX_MARK_MEMBER_NAME(paletteSize,"paletteSize");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PaletteShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(strength,"strength");
	HX_VISIT_MEMBER_NAME(paletteSize,"paletteSize");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PaletteShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { return ::hx::Val( strength ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"paletteSize") ) { return ::hx::Val( paletteSize ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PaletteShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { strength=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"paletteSize") ) { paletteSize=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PaletteShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("strength",81,d2,8e,8e));
	outFields->push(HX_("paletteSize",dc,b8,0a,64));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PaletteShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(PaletteShader_obj,strength),HX_("strength",81,d2,8e,8e)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(PaletteShader_obj,paletteSize),HX_("paletteSize",dc,b8,0a,64)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PaletteShader_obj_sStaticStorageInfo = 0;
#endif

static ::String PaletteShader_obj_sMemberFields[] = {
	HX_("strength",81,d2,8e,8e),
	HX_("paletteSize",dc,b8,0a,64),
	::String(null()) };

::hx::Class PaletteShader_obj::__mClass;

void PaletteShader_obj::__register()
{
	PaletteShader_obj _hx_dummy;
	PaletteShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.PaletteShader",20,75,84,72);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PaletteShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PaletteShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PaletteShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PaletteShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
