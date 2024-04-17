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
#ifndef INCLUDED_shaders_ChromBordesEffectShader
#include <shaders/ChromBordesEffectShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0656696410aee26d_3107_new,"shaders.ChromBordesEffectShader","new",0x657d95a0,"shaders.ChromBordesEffectShader.new","shaders/Shaders.hx",3107,0x7800d7f1)
namespace shaders{

void ChromBordesEffectShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0656696410aee26d_3107_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n    varying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n    /*\n    https://www.shadertoy.com/view/wtt3z2\n    */\n    \n    uniform float aberration;\n    uniform float effectTime;\n    \n    vec3 tex2D(sampler2D _tex,vec2 _p)\n    {\n        vec3 col=texture2D(_tex,_p).xyz;\n        if(.5<abs(_p.x-.5)){\n            col=vec3(.1);\n        }\n        return col;\n    }\n    \n    void main() {\n        vec2 uv = openfl_TextureCoordv; //openfl_TextureCoordv.xy*2. / openfl_TextureSize.xy-vec2(1.);\n        vec2 ndcPos = uv * 2.0 - 1.0;\n        float aspect = openfl_TextureSize.x / openfl_TextureSize.y;\n        \n        //float u_angle = -2.4;\n        \n        float u_angle = -2.4 * sin(effectTime * 2.0);\n        \n        float eye_angle = abs(u_angle);\n        float half_angle = eye_angle/2.0;\n        float half_dist = tan(half_angle);\n    \n        vec2  vp_scale = vec2(aspect, 1.0);\n        vec2  P = ndcPos * vp_scale; \n        \n        float vp_dia = length(vp_scale);\n        vec2  rel_P = normalize(P) / normalize(vp_scale);\n    \n        vec2 pos_prj = ndcPos;\n    \n        float beta = abs(atan((length(P) / vp_dia) * half_dist) * -abs(cos(effectTime - 0.25 + 0.5)));\n        pos_prj = rel_P * beta / half_angle;\n    \n        vec2 uv_prj = (pos_prj * 0.5 + 0.5);\n    \n        vec2 trueAberration = aberration * pow((uv_prj.st - 0.5), vec2(3.0, 3.0));\n        // vec4 texColor = tex2D(bitmap, uv_prj.st);\n        gl_FragColor = vec4(\n            texture2D(bitmap, uv_prj.st + trueAberration).r, \n            texture2D(bitmap, uv_prj.st).g, \n            texture2D(bitmap, uv_prj.st - trueAberration).b, \n            1.0\n        );\n    }",e1,b5,63,dc);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE(3108)		super::__construct();
HXLINE(3051)		this->_hx___isGenerated = true;
HXDLIN(3051)		this->_hx___initGL();
            	}

Dynamic ChromBordesEffectShader_obj::__CreateEmpty() { return new ChromBordesEffectShader_obj; }

void *ChromBordesEffectShader_obj::_hx_vtable = 0;

Dynamic ChromBordesEffectShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChromBordesEffectShader_obj > _hx_result = new ChromBordesEffectShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ChromBordesEffectShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1c708a64) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1c708a64;
		}
	} else {
		return inClassId==(int)0x1efca5b6 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< ChromBordesEffectShader_obj > ChromBordesEffectShader_obj::__new() {
	::hx::ObjectPtr< ChromBordesEffectShader_obj > __this = new ChromBordesEffectShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ChromBordesEffectShader_obj > ChromBordesEffectShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ChromBordesEffectShader_obj *__this = (ChromBordesEffectShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChromBordesEffectShader_obj), true, "shaders.ChromBordesEffectShader"));
	*(void **)__this = ChromBordesEffectShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ChromBordesEffectShader_obj::ChromBordesEffectShader_obj()
{
}

void ChromBordesEffectShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ChromBordesEffectShader);
	HX_MARK_MEMBER_NAME(aberration,"aberration");
	HX_MARK_MEMBER_NAME(effectTime,"effectTime");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ChromBordesEffectShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(aberration,"aberration");
	HX_VISIT_MEMBER_NAME(effectTime,"effectTime");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ChromBordesEffectShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"aberration") ) { return ::hx::Val( aberration ); }
		if (HX_FIELD_EQ(inName,"effectTime") ) { return ::hx::Val( effectTime ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ChromBordesEffectShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"aberration") ) { aberration=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"effectTime") ) { effectTime=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ChromBordesEffectShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("aberration",11,bb,a1,6d));
	outFields->push(HX_("effectTime",3e,6f,48,b3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ChromBordesEffectShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(ChromBordesEffectShader_obj,aberration),HX_("aberration",11,bb,a1,6d)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(ChromBordesEffectShader_obj,effectTime),HX_("effectTime",3e,6f,48,b3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ChromBordesEffectShader_obj_sStaticStorageInfo = 0;
#endif

static ::String ChromBordesEffectShader_obj_sMemberFields[] = {
	HX_("aberration",11,bb,a1,6d),
	HX_("effectTime",3e,6f,48,b3),
	::String(null()) };

::hx::Class ChromBordesEffectShader_obj::__mClass;

void ChromBordesEffectShader_obj::__register()
{
	ChromBordesEffectShader_obj _hx_dummy;
	ChromBordesEffectShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.ChromBordesEffectShader",ae,85,e2,b2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChromBordesEffectShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ChromBordesEffectShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChromBordesEffectShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChromBordesEffectShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
