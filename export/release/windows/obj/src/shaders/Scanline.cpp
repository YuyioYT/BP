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
#ifndef INCLUDED_shaders_Scanline
#include <shaders/Scanline.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4c35cfe2e77cb470_182_new,"shaders.Scanline","new",0x2e346843,"shaders.Scanline.new","shaders/Shaders.hx",182,0x7800d7f1)
namespace shaders{

void Scanline_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4c35cfe2e77cb470_182_new)
HXDLIN( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\r\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\r\n\t\tconst float scale = 1.0;\r\n\tuniform bool lockAlpha = false;\r\n\t\tvoid main()\r\n\t\t{\r\n\t\t\tif (mod(floor(openfl_TextureCoordv.y * openfl_TextureSize.y / scale), 2.0) == 0.0 ){\r\n\t\t\t\tfloat bitch = 1.0;\r\n\t\r\n\t\t\t\tvec4 texColor = texture2D(bitmap, openfl_TextureCoordv);\r\n\t\t\t\tif (lockAlpha) bitch = texColor.a;\r\n\t\t\t\tgl_FragColor = vec4(0.0, 0.0, 0.0, bitch);\r\n\t\t\t}else{\r\n\t\t\t\tgl_FragColor = texture2D(bitmap, openfl_TextureCoordv);\r\n\t\t\t}\r\n\t\t}",ce,44,86,a4);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE( 183)		super::__construct();
HXLINE( 163)		this->_hx___isGenerated = true;
HXDLIN( 163)		this->_hx___initGL();
            	}

Dynamic Scanline_obj::__CreateEmpty() { return new Scanline_obj; }

void *Scanline_obj::_hx_vtable = 0;

Dynamic Scanline_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Scanline_obj > _hx_result = new Scanline_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Scanline_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1efca5b6;
		}
	} else {
		return inClassId==(int)0x78d8d737 || inClassId==(int)0x7fb57a63;
	}
}


::hx::ObjectPtr< Scanline_obj > Scanline_obj::__new() {
	::hx::ObjectPtr< Scanline_obj > __this = new Scanline_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Scanline_obj > Scanline_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Scanline_obj *__this = (Scanline_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Scanline_obj), true, "shaders.Scanline"));
	*(void **)__this = Scanline_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Scanline_obj::Scanline_obj()
{
}

void Scanline_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scanline);
	HX_MARK_MEMBER_NAME(lockAlpha,"lockAlpha");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Scanline_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lockAlpha,"lockAlpha");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Scanline_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"lockAlpha") ) { return ::hx::Val( lockAlpha ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Scanline_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"lockAlpha") ) { lockAlpha=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Scanline_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lockAlpha",73,67,78,5c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Scanline_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Bool */ ,(int)offsetof(Scanline_obj,lockAlpha),HX_("lockAlpha",73,67,78,5c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Scanline_obj_sStaticStorageInfo = 0;
#endif

static ::String Scanline_obj_sMemberFields[] = {
	HX_("lockAlpha",73,67,78,5c),
	::String(null()) };

::hx::Class Scanline_obj::__mClass;

void Scanline_obj::__register()
{
	Scanline_obj _hx_dummy;
	Scanline_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.Scanline",d1,8a,ac,a6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Scanline_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Scanline_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Scanline_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Scanline_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
