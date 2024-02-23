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
#ifndef INCLUDED_shaders_ThreeDShader
#include <shaders/ThreeDShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bfec691c287e0dd9_1087_new,"shaders.ThreeDShader","new",0x89c2973d,"shaders.ThreeDShader.new","shaders/Shaders.hx",1087,0x7800d7f1)
namespace shaders{

void ThreeDShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_bfec691c287e0dd9_1087_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n\tuniform float xrot = 0.0;\n\tuniform float yrot = 0.0;\n\tuniform float zrot = 0.0;\n\tuniform float dept = 0.0;\n\tfloat alph = 0;\nfloat plane( in vec3 norm, in vec3 po, in vec3 ro, in vec3 rd ) {\n    float de = dot(norm, rd);\n    de = sign(de)*max( abs(de), 0.001);\n    return dot(norm, po-ro)/de;\n}\n\nvec2 raytraceTexturedQuad(in vec3 rayOrigin, in vec3 rayDirection, in vec3 quadCenter, in vec3 quadRotation, in vec2 quadDimensions) {\n    //Rotations ------------------\n    float a = sin(quadRotation.x); float b = cos(quadRotation.x); \n    float c = sin(quadRotation.y); float d = cos(quadRotation.y); \n    float e = sin(quadRotation.z); float f = cos(quadRotation.z); \n    float ac = a*c;   float bc = b*c;\n\t\n\tmat3 RotationMatrix  = \n\t\t\tmat3(\t  d*f,      d*e,  -c,\n                 ac*f-b*e, ac*e+b*f, a*d,\n                 bc*f+a*e, bc*e-a*f, b*d );\n    //--------------------------------------\n    \n    vec3 right = RotationMatrix * vec3(quadDimensions.x, 0.0, 0.0);\n    vec3 up = RotationMatrix * vec3(0, quadDimensions.y, 0);\n    vec3 normal = cross(right, up);\n    normal /= length(normal);\n    \n    //Find the plane hit point in space\n    vec3 pos = (rayDirection * plane(normal, quadCenter, rayOrigin, rayDirection)) - quadCenter;\n    \n    //Find the texture UV by projecting the hit point along the plane dirs\n    return vec2(dot(pos, right) / dot(right, right),\n                dot(pos, up)    / dot(up,    up)) + 0.5;\n}\n\nvoid main() {\n\tvec4 texColor = texture2D(bitmap, openfl_TextureCoordv);\n    //Screen UV goes from 0 - 1 along each axis\n    vec2 screenUV = openfl_TextureCoordv;\n    vec2 p = (2.0 * screenUV) - 1.0;\n    float screenAspect = 1280/720;\n    p.x *= screenAspect;\n    \n    //Normalized Ray Dir\n    vec3 dir = vec3(p.x, p.y, 1.0);\n    dir /= length(dir);\n    \n    //Define the plane\n    vec3 planePosition = vec3(0.0, 0.0, dept);\n    vec3 planeRotation = vec3(xrot, yrot, zrot);//this the shit you needa change\n    vec2 planeDimension = vec2(-screenAspect, 1.0);\n    \n    vec2 uv = raytraceTexturedQuad(vec3(0), dir, planePosition, planeRotation, planeDimension);\n\t\n    //If we hit the rectangle, sample the texture\n    if (abs(uv.x - 0.5) < 0.5 && abs(uv.y - 0.5) < 0.5) {\n\t\t\n\t\tvec3 tex = flixel_texture2D(bitmap, uv).xyz;\n\t\tfloat bitch = 1.0;\n\t\tif (tex.z == 0.0){\n\t\t\tbitch = 0.0;\n\t\t}\n\t\t\n\t  gl_FragColor = vec4(flixel_texture2D(bitmap, uv).xyz, bitch);\n    }\n}\n\n\n\t",22,46,31,29);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE(1088)		super::__construct();
HXLINE(1012)		this->_hx___isGenerated = true;
HXDLIN(1012)		this->_hx___initGL();
            	}

Dynamic ThreeDShader_obj::__CreateEmpty() { return new ThreeDShader_obj; }

void *ThreeDShader_obj::_hx_vtable = 0;

Dynamic ThreeDShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ThreeDShader_obj > _hx_result = new ThreeDShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ThreeDShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1efca5b6;
		}
	} else {
		return inClassId==(int)0x708f9c39 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< ThreeDShader_obj > ThreeDShader_obj::__new() {
	::hx::ObjectPtr< ThreeDShader_obj > __this = new ThreeDShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ThreeDShader_obj > ThreeDShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ThreeDShader_obj *__this = (ThreeDShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ThreeDShader_obj), true, "shaders.ThreeDShader"));
	*(void **)__this = ThreeDShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ThreeDShader_obj::ThreeDShader_obj()
{
}

void ThreeDShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ThreeDShader);
	HX_MARK_MEMBER_NAME(xrot,"xrot");
	HX_MARK_MEMBER_NAME(yrot,"yrot");
	HX_MARK_MEMBER_NAME(zrot,"zrot");
	HX_MARK_MEMBER_NAME(dept,"dept");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ThreeDShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(xrot,"xrot");
	HX_VISIT_MEMBER_NAME(yrot,"yrot");
	HX_VISIT_MEMBER_NAME(zrot,"zrot");
	HX_VISIT_MEMBER_NAME(dept,"dept");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ThreeDShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xrot") ) { return ::hx::Val( xrot ); }
		if (HX_FIELD_EQ(inName,"yrot") ) { return ::hx::Val( yrot ); }
		if (HX_FIELD_EQ(inName,"zrot") ) { return ::hx::Val( zrot ); }
		if (HX_FIELD_EQ(inName,"dept") ) { return ::hx::Val( dept ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ThreeDShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xrot") ) { xrot=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yrot") ) { yrot=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zrot") ) { zrot=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dept") ) { dept=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ThreeDShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("xrot",9f,7c,a8,4f));
	outFields->push(HX_("yrot",3e,b3,51,50));
	outFields->push(HX_("zrot",dd,e9,fa,50));
	outFields->push(HX_("dept",c5,5b,66,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ThreeDShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(ThreeDShader_obj,xrot),HX_("xrot",9f,7c,a8,4f)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(ThreeDShader_obj,yrot),HX_("yrot",3e,b3,51,50)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(ThreeDShader_obj,zrot),HX_("zrot",dd,e9,fa,50)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(ThreeDShader_obj,dept),HX_("dept",c5,5b,66,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ThreeDShader_obj_sStaticStorageInfo = 0;
#endif

static ::String ThreeDShader_obj_sMemberFields[] = {
	HX_("xrot",9f,7c,a8,4f),
	HX_("yrot",3e,b3,51,50),
	HX_("zrot",dd,e9,fa,50),
	HX_("dept",c5,5b,66,42),
	::String(null()) };

::hx::Class ThreeDShader_obj::__mClass;

void ThreeDShader_obj::__register()
{
	ThreeDShader_obj _hx_dummy;
	ThreeDShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.ThreeDShader",cb,34,05,cc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ThreeDShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ThreeDShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ThreeDShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ThreeDShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
