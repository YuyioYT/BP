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
#ifndef INCLUDED_shaders_ScanlineShader2
#include <shaders/ScanlineShader2.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_28e0add52e044482_151_new,"shaders.ScanlineShader2","new",0xb02aa98e,"shaders.ScanlineShader2.new","shaders/Shaders.hx",151,0x7800d7f1)
namespace shaders{

void ScanlineShader2_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_28e0add52e044482_151_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n\tconst float scale = 1.0;\n\tuniform bool lockAlpha;\n\t\tvoid main()\n\t\t{\n\t\t\tif (mod(floor(openfl_TextureCoordv.y * openfl_TextureSize.y / scale), 2.0) == 0.0 ){\n\t\t\t\tfloat bitch = 1.0;\n\t\n\t\t\t\tvec4 texColor = texture2D(bitmap, openfl_TextureCoordv);\n\t\t\t\tif (lockAlpha) bitch = texColor.a;\n\t\t\t\tgl_FragColor = vec4(0.0, 0.0, 0.0, bitch);\n\t\t\t}else{\n\t\t\t\tgl_FragColor = texture2D(bitmap, openfl_TextureCoordv);\n\t\t\t}\n\t\t}",12,38,96,5f);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE( 152)		super::__construct();
HXLINE( 132)		this->_hx___isGenerated = true;
HXDLIN( 132)		this->_hx___initGL();
            	}

Dynamic ScanlineShader2_obj::__CreateEmpty() { return new ScanlineShader2_obj; }

void *ScanlineShader2_obj::_hx_vtable = 0;

Dynamic ScanlineShader2_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScanlineShader2_obj > _hx_result = new ScanlineShader2_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ScanlineShader2_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x04f93fcd) {
		if (inClassId<=(int)0x03b2c41a) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x03b2c41a;
		} else {
			return inClassId==(int)0x04f93fcd;
		}
	} else {
		return inClassId==(int)0x1efca5b6 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< ScanlineShader2_obj > ScanlineShader2_obj::__new() {
	::hx::ObjectPtr< ScanlineShader2_obj > __this = new ScanlineShader2_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ScanlineShader2_obj > ScanlineShader2_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ScanlineShader2_obj *__this = (ScanlineShader2_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScanlineShader2_obj), true, "shaders.ScanlineShader2"));
	*(void **)__this = ScanlineShader2_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ScanlineShader2_obj::ScanlineShader2_obj()
{
}

void ScanlineShader2_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScanlineShader2);
	HX_MARK_MEMBER_NAME(lockAlpha,"lockAlpha");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScanlineShader2_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lockAlpha,"lockAlpha");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ScanlineShader2_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"lockAlpha") ) { return ::hx::Val( lockAlpha ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScanlineShader2_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"lockAlpha") ) { lockAlpha=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScanlineShader2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lockAlpha",73,67,78,5c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScanlineShader2_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Bool */ ,(int)offsetof(ScanlineShader2_obj,lockAlpha),HX_("lockAlpha",73,67,78,5c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScanlineShader2_obj_sStaticStorageInfo = 0;
#endif

static ::String ScanlineShader2_obj_sMemberFields[] = {
	HX_("lockAlpha",73,67,78,5c),
	::String(null()) };

::hx::Class ScanlineShader2_obj::__mClass;

void ScanlineShader2_obj::__register()
{
	ScanlineShader2_obj _hx_dummy;
	ScanlineShader2_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.ScanlineShader2",9c,8a,5f,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScanlineShader2_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScanlineShader2_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScanlineShader2_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScanlineShader2_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
