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
#ifndef INCLUDED_shaders_BetterBlurShader
#include <shaders/BetterBlurShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cb0365bb3230d335_2234_new,"shaders.BetterBlurShader","new",0x20bcb04e,"shaders.BetterBlurShader.new","shaders/Shaders.hx",2234,0x7800d7f1)
namespace shaders{

void BetterBlurShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cb0365bb3230d335_2234_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n\t\t//https://www.shadertoy.com/view/Xltfzj\n        //https://xorshaders.weebly.com/tutorials/blur-shaders-5-part-2\n\n\t\tuniform float strength;\n        uniform float loops;\n        uniform float quality;\n        float Pi = 6.28318530718; // Pi*2\n\n\t\tvoid main()\n\t\t{\n            vec2 uv = openfl_TextureCoordv;\n            vec4 color = flixel_texture2D(bitmap, uv);\n            vec2 resolution = vec2(1280.0,720.0);\n            \n            vec2 rad = strength/openfl_TextureSize;\n\n            for( float d=0.0; d<Pi; d+=Pi/loops)\n            {\n                for(float i=1.0/quality; i<=1.0; i+=1.0/quality)\n                {\n                    color += flixel_texture2D( bitmap, uv+vec2(cos(d),sin(d))*rad*i);\t\t\n                }\n            }\n            \n            color /= quality * loops - 15.0;\n\t\t\tgl_FragColor = color;\n\t\t}",f2,26,a7,c6);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE(2235)		super::__construct();
HXLINE(2202)		this->_hx___isGenerated = true;
HXDLIN(2202)		this->_hx___initGL();
            	}

Dynamic BetterBlurShader_obj::__CreateEmpty() { return new BetterBlurShader_obj; }

void *BetterBlurShader_obj::_hx_vtable = 0;

Dynamic BetterBlurShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BetterBlurShader_obj > _hx_result = new BetterBlurShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BetterBlurShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1efca5b6;
		}
	} else {
		return inClassId==(int)0x4c94e7ca || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< BetterBlurShader_obj > BetterBlurShader_obj::__new() {
	::hx::ObjectPtr< BetterBlurShader_obj > __this = new BetterBlurShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BetterBlurShader_obj > BetterBlurShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BetterBlurShader_obj *__this = (BetterBlurShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BetterBlurShader_obj), true, "shaders.BetterBlurShader"));
	*(void **)__this = BetterBlurShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BetterBlurShader_obj::BetterBlurShader_obj()
{
}

void BetterBlurShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BetterBlurShader);
	HX_MARK_MEMBER_NAME(strength,"strength");
	HX_MARK_MEMBER_NAME(loops,"loops");
	HX_MARK_MEMBER_NAME(quality,"quality");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BetterBlurShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(strength,"strength");
	HX_VISIT_MEMBER_NAME(loops,"loops");
	HX_VISIT_MEMBER_NAME(quality,"quality");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BetterBlurShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { return ::hx::Val( loops ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { return ::hx::Val( quality ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { return ::hx::Val( strength ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BetterBlurShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { loops=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { quality=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { strength=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BetterBlurShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("strength",81,d2,8e,8e));
	outFields->push(HX_("loops",8f,f1,f9,78));
	outFields->push(HX_("quality",bf,04,4c,44));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BetterBlurShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(BetterBlurShader_obj,strength),HX_("strength",81,d2,8e,8e)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(BetterBlurShader_obj,loops),HX_("loops",8f,f1,f9,78)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(BetterBlurShader_obj,quality),HX_("quality",bf,04,4c,44)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BetterBlurShader_obj_sStaticStorageInfo = 0;
#endif

static ::String BetterBlurShader_obj_sMemberFields[] = {
	HX_("strength",81,d2,8e,8e),
	HX_("loops",8f,f1,f9,78),
	HX_("quality",bf,04,4c,44),
	::String(null()) };

::hx::Class BetterBlurShader_obj::__mClass;

void BetterBlurShader_obj::__register()
{
	BetterBlurShader_obj _hx_dummy;
	BetterBlurShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.BetterBlurShader",5c,31,37,ff);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BetterBlurShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BetterBlurShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BetterBlurShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BetterBlurShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
