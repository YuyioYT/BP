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
#ifndef INCLUDED_shaders_DoChromaticAberrationShader
#include <shaders/DoChromaticAberrationShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7541b181296736a4_126_new,"shaders.DoChromaticAberrationShader","new",0x4eb8b355,"shaders.DoChromaticAberrationShader.new","shaders/Shaders.hx",126,0x7800d7f1)
namespace shaders{

void DoChromaticAberrationShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7541b181296736a4_126_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\r\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\r\n\r\n\t\tuniform float rOffset;\r\n\t\tuniform float gOffset;\r\n\t\tuniform float bOffset;\r\n\r\n\t\tvoid main()\r\n\t\t{\r\n\t\t\tvec4 col1 = texture2D(bitmap, openfl_TextureCoordv.st - vec2(rOffset, 0.0));\r\n\t\t\tvec4 col2 = texture2D(bitmap, openfl_TextureCoordv.st - vec2(gOffset, 0.0));\r\n\t\t\tvec4 col3 = texture2D(bitmap, openfl_TextureCoordv.st - vec2(bOffset, 0.0));\r\n\t\t\tvec4 toUse = texture2D(bitmap, openfl_TextureCoordv);\r\n\t\t\ttoUse.r = col1.r;\r\n\t\t\ttoUse.g = col2.g;\r\n\t\t\ttoUse.b = col3.b;\r\n\t\t\t//float someshit = col4.r + col4.g + col4.b;\r\n\r\n\t\t\tgl_FragColor = toUse;\r\n\t\t}",ac,74,b8,9c);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE( 127)		super::__construct();
HXLINE( 103)		this->_hx___isGenerated = true;
HXDLIN( 103)		this->_hx___initGL();
            	}

Dynamic DoChromaticAberrationShader_obj::__CreateEmpty() { return new DoChromaticAberrationShader_obj; }

void *DoChromaticAberrationShader_obj::_hx_vtable = 0;

Dynamic DoChromaticAberrationShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DoChromaticAberrationShader_obj > _hx_result = new DoChromaticAberrationShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DoChromaticAberrationShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1efca5b6;
		}
	} else {
		return inClassId==(int)0x7152fc99 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< DoChromaticAberrationShader_obj > DoChromaticAberrationShader_obj::__new() {
	::hx::ObjectPtr< DoChromaticAberrationShader_obj > __this = new DoChromaticAberrationShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DoChromaticAberrationShader_obj > DoChromaticAberrationShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DoChromaticAberrationShader_obj *__this = (DoChromaticAberrationShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DoChromaticAberrationShader_obj), true, "shaders.DoChromaticAberrationShader"));
	*(void **)__this = DoChromaticAberrationShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DoChromaticAberrationShader_obj::DoChromaticAberrationShader_obj()
{
}

void DoChromaticAberrationShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DoChromaticAberrationShader);
	HX_MARK_MEMBER_NAME(rOffset,"rOffset");
	HX_MARK_MEMBER_NAME(gOffset,"gOffset");
	HX_MARK_MEMBER_NAME(bOffset,"bOffset");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DoChromaticAberrationShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rOffset,"rOffset");
	HX_VISIT_MEMBER_NAME(gOffset,"gOffset");
	HX_VISIT_MEMBER_NAME(bOffset,"bOffset");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DoChromaticAberrationShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"rOffset") ) { return ::hx::Val( rOffset ); }
		if (HX_FIELD_EQ(inName,"gOffset") ) { return ::hx::Val( gOffset ); }
		if (HX_FIELD_EQ(inName,"bOffset") ) { return ::hx::Val( bOffset ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DoChromaticAberrationShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"rOffset") ) { rOffset=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gOffset") ) { gOffset=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bOffset") ) { bOffset=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DoChromaticAberrationShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("rOffset",a5,ed,62,19));
	outFields->push(HX_("gOffset",5a,d3,f6,4f));
	outFields->push(HX_("bOffset",95,81,0b,80));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DoChromaticAberrationShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(DoChromaticAberrationShader_obj,rOffset),HX_("rOffset",a5,ed,62,19)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(DoChromaticAberrationShader_obj,gOffset),HX_("gOffset",5a,d3,f6,4f)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(DoChromaticAberrationShader_obj,bOffset),HX_("bOffset",95,81,0b,80)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DoChromaticAberrationShader_obj_sStaticStorageInfo = 0;
#endif

static ::String DoChromaticAberrationShader_obj_sMemberFields[] = {
	HX_("rOffset",a5,ed,62,19),
	HX_("gOffset",5a,d3,f6,4f),
	HX_("bOffset",95,81,0b,80),
	::String(null()) };

::hx::Class DoChromaticAberrationShader_obj::__mClass;

void DoChromaticAberrationShader_obj::__register()
{
	DoChromaticAberrationShader_obj _hx_dummy;
	DoChromaticAberrationShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.DoChromaticAberrationShader",e3,64,85,c3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DoChromaticAberrationShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DoChromaticAberrationShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DoChromaticAberrationShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DoChromaticAberrationShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
