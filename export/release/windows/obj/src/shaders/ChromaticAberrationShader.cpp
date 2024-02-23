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
#ifndef INCLUDED_shaders_ChromaticAberrationShader
#include <shaders/ChromaticAberrationShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_189aa63cee7486f5_73_new,"shaders.ChromaticAberrationShader","new",0x526b53e0,"shaders.ChromaticAberrationShader.new","shaders/Shaders.hx",73,0x7800d7f1)
namespace shaders{

void ChromaticAberrationShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_189aa63cee7486f5_73_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n\n\t\tuniform float rOffset;\n\t\tuniform float gOffset;\n\t\tuniform float bOffset;\n\n\t\tvoid main()\n\t\t{\n\t\t\tvec4 col1 = texture2D(bitmap, openfl_TextureCoordv.st - vec2(rOffset, 0.0));\n\t\t\tvec4 col2 = texture2D(bitmap, openfl_TextureCoordv.st - vec2(gOffset, 0.0));\n\t\t\tvec4 col3 = texture2D(bitmap, openfl_TextureCoordv.st - vec2(bOffset, 0.0));\n\t\t\tvec4 toUse = texture2D(bitmap, openfl_TextureCoordv);\n\t\t\ttoUse.r = col1.r;\n\t\t\ttoUse.g = col2.g;\n\t\t\ttoUse.b = col3.b;\n\t\t\t//float someshit = col4.r + col4.g + col4.b;\n\n\t\t\tgl_FragColor = toUse;\n\t\t}",3d,40,0a,0d);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE(  74)		super::__construct();
HXLINE(  50)		this->_hx___isGenerated = true;
HXDLIN(  50)		this->_hx___initGL();
            	}

Dynamic ChromaticAberrationShader_obj::__CreateEmpty() { return new ChromaticAberrationShader_obj; }

void *ChromaticAberrationShader_obj::_hx_vtable = 0;

Dynamic ChromaticAberrationShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChromaticAberrationShader_obj > _hx_result = new ChromaticAberrationShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ChromaticAberrationShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x04f93fcd) {
		if (inClassId<=(int)0x023f2fc0) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x023f2fc0;
		} else {
			return inClassId==(int)0x04f93fcd;
		}
	} else {
		return inClassId==(int)0x1efca5b6 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< ChromaticAberrationShader_obj > ChromaticAberrationShader_obj::__new() {
	::hx::ObjectPtr< ChromaticAberrationShader_obj > __this = new ChromaticAberrationShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ChromaticAberrationShader_obj > ChromaticAberrationShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ChromaticAberrationShader_obj *__this = (ChromaticAberrationShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChromaticAberrationShader_obj), true, "shaders.ChromaticAberrationShader"));
	*(void **)__this = ChromaticAberrationShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ChromaticAberrationShader_obj::ChromaticAberrationShader_obj()
{
}

void ChromaticAberrationShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ChromaticAberrationShader);
	HX_MARK_MEMBER_NAME(rOffset,"rOffset");
	HX_MARK_MEMBER_NAME(gOffset,"gOffset");
	HX_MARK_MEMBER_NAME(bOffset,"bOffset");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ChromaticAberrationShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rOffset,"rOffset");
	HX_VISIT_MEMBER_NAME(gOffset,"gOffset");
	HX_VISIT_MEMBER_NAME(bOffset,"bOffset");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ChromaticAberrationShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"rOffset") ) { return ::hx::Val( rOffset ); }
		if (HX_FIELD_EQ(inName,"gOffset") ) { return ::hx::Val( gOffset ); }
		if (HX_FIELD_EQ(inName,"bOffset") ) { return ::hx::Val( bOffset ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ChromaticAberrationShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"rOffset") ) { rOffset=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gOffset") ) { gOffset=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bOffset") ) { bOffset=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ChromaticAberrationShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("rOffset",a5,ed,62,19));
	outFields->push(HX_("gOffset",5a,d3,f6,4f));
	outFields->push(HX_("bOffset",95,81,0b,80));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ChromaticAberrationShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(ChromaticAberrationShader_obj,rOffset),HX_("rOffset",a5,ed,62,19)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(ChromaticAberrationShader_obj,gOffset),HX_("gOffset",5a,d3,f6,4f)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(ChromaticAberrationShader_obj,bOffset),HX_("bOffset",95,81,0b,80)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ChromaticAberrationShader_obj_sStaticStorageInfo = 0;
#endif

static ::String ChromaticAberrationShader_obj_sMemberFields[] = {
	HX_("rOffset",a5,ed,62,19),
	HX_("gOffset",5a,d3,f6,4f),
	HX_("bOffset",95,81,0b,80),
	::String(null()) };

::hx::Class ChromaticAberrationShader_obj::__mClass;

void ChromaticAberrationShader_obj::__register()
{
	ChromaticAberrationShader_obj _hx_dummy;
	ChromaticAberrationShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.ChromaticAberrationShader",ee,23,04,d2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChromaticAberrationShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ChromaticAberrationShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChromaticAberrationShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChromaticAberrationShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
