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
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_shaders_BlurShader
#include <shaders/BlurShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_01ddfc126b662569_2471_new,"shaders.BlurShader","new",0x9a7eeefe,"shaders.BlurShader.new","shaders/Shaders.hx",2471,0x7800d7f1)
namespace shaders{

void BlurShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_01ddfc126b662569_2471_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n\t\t\n\t\tuniform float strength;\n        uniform float strengthY;\n        //uniform bool vertical;\n\n\t\tvoid main()\n\t\t{\n            //https://github.com/Jam3/glsl-fast-gaussian-blur/blob/master/5.glsl\n\n            vec4 color = vec4(0.0,0.0,0.0,0.0);\n            vec2 uv = openfl_TextureCoordv;\n            vec2 resolution = vec2(1280.0,720.0);\n            vec2 direction = vec2(strength, strengthY);\n            //if (vertical)\n            //{\n            //    direction = vec2(0.0, 1.0);\n            //}\n            vec2 off1 = vec2(1.3333333333333333, 1.3333333333333333) * direction;\n            color += flixel_texture2D(bitmap, uv) * 0.29411764705882354;\n            color += flixel_texture2D(bitmap, uv + (off1 / resolution)) * 0.35294117647058826;\n            color += flixel_texture2D(bitmap, uv - (off1 / resolution)) * 0.35294117647058826;\n            \n\t\t\tgl_FragColor = color;\n\t\t}",85,bd,63,bb);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE(2472)		super::__construct();
HXLINE(2442)		this->_hx___isGenerated = true;
HXDLIN(2442)		this->_hx___initGL();
            	}

Dynamic BlurShader_obj::__CreateEmpty() { return new BlurShader_obj; }

void *BlurShader_obj::_hx_vtable = 0;

Dynamic BlurShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BlurShader_obj > _hx_result = new BlurShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BlurShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0f5c67fa) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x0f5c67fa;
		}
	} else {
		return inClassId==(int)0x1efca5b6 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< BlurShader_obj > BlurShader_obj::__new() {
	::hx::ObjectPtr< BlurShader_obj > __this = new BlurShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BlurShader_obj > BlurShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BlurShader_obj *__this = (BlurShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BlurShader_obj), true, "shaders.BlurShader"));
	*(void **)__this = BlurShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BlurShader_obj::BlurShader_obj()
{
}

void BlurShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BlurShader);
	HX_MARK_MEMBER_NAME(strength,"strength");
	HX_MARK_MEMBER_NAME(strengthY,"strengthY");
	HX_MARK_MEMBER_NAME(vertical,"vertical");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BlurShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(strength,"strength");
	HX_VISIT_MEMBER_NAME(strengthY,"strengthY");
	HX_VISIT_MEMBER_NAME(vertical,"vertical");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BlurShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { return ::hx::Val( strength ); }
		if (HX_FIELD_EQ(inName,"vertical") ) { return ::hx::Val( vertical ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"strengthY") ) { return ::hx::Val( strengthY ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BlurShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { strength=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertical") ) { vertical=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"strengthY") ) { strengthY=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BlurShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("strength",81,d2,8e,8e));
	outFields->push(HX_("strengthY",b8,5e,69,2e));
	outFields->push(HX_("vertical",76,bc,15,6a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BlurShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(BlurShader_obj,strength),HX_("strength",81,d2,8e,8e)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(BlurShader_obj,strengthY),HX_("strengthY",b8,5e,69,2e)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Bool */ ,(int)offsetof(BlurShader_obj,vertical),HX_("vertical",76,bc,15,6a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BlurShader_obj_sStaticStorageInfo = 0;
#endif

static ::String BlurShader_obj_sMemberFields[] = {
	HX_("strength",81,d2,8e,8e),
	HX_("strengthY",b8,5e,69,2e),
	HX_("vertical",76,bc,15,6a),
	::String(null()) };

::hx::Class BlurShader_obj::__mClass;

void BlurShader_obj::__register()
{
	BlurShader_obj _hx_dummy;
	BlurShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.BlurShader",0c,58,e8,3b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BlurShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BlurShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BlurShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BlurShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
