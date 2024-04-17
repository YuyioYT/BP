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
#ifndef INCLUDED_shaders_FuckingTriangle
#include <shaders/FuckingTriangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_149a7d7ca9727c8b_1609_new,"shaders.FuckingTriangle","new",0x13fce505,"shaders.FuckingTriangle.new","shaders/Shaders.hx",1609,0x7800d7f1)
namespace shaders{

void FuckingTriangle_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_149a7d7ca9727c8b_1609_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n\t\n\t\n\t\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n\t\t\t\n\t\t\tconst vec3 vertices[18] = vec3[18] (\n\t\t\tvec3(-0.5, 0.0, -0.5),\n\t\t\tvec3( 0.5, 0.0, -0.5),\n\t\t\tvec3(-0.5, 0.0,  0.5),\n\t\t\t\n\t\t\tvec3(-0.5, 0.0,  0.5),\n\t\t\tvec3( 0.5, 0.0, -0.5),\n\t\t\tvec3( 0.5, 0.0,  0.5),\n\t\t\t\n\t\t\tvec3(-0.5, 0.0, -0.5),\n\t\t\tvec3( 0.5, 0.0, -0.5),\n\t\t\tvec3( 0.0, 1.0,  0.0),\n\t\t\t\n\t\t\tvec3(-0.5, 0.0,  0.5),\n\t\t\tvec3( 0.5, 0.0,  0.5),\n\t\t\tvec3( 0.0, 1.0,  0.0),\n\t\t\t\n\t\t\tvec3(-0.5, 0.0, -0.5),\n\t\t\tvec3(-0.5, 0.0,  0.5),\n\t\t\tvec3( 0.0, 1.0,  0.0),\n\t\t\t\n\t\t\tvec3( 0.5, 0.0, -0.5),\n\t\t\tvec3( 0.5, 0.0,  0.5),\n\t\t\tvec3( 0.0, 1.0,  0.0)\n\t\t);\n\n\t\tconst vec2 texCoords[18] = vec2[18] (\n\t\t\tvec2(0., 1.),\n\t\t\tvec2(1., 1.),\n\t\t\tvec2(0., 0.),\n\t\t\t\n\t\t\tvec2(0., 0.),\n\t\t\tvec2(1., 1.),\n\t\t\tvec2(1., 0.),\n\t\t\t\n\t\t\tvec2(0., 1.),\n\t\t\tvec2(1., 1.),\n\t\t\tvec2(.5, 0.),\n\t\t\t\n\t\t\tvec2(0., 1.),\n\t\t\tvec2(1., 1.),\n\t\t\tvec2(.5, 0.),\n\t\t\t\n\t\t\tvec2(0., 1.),\n\t\t\tvec2(1., 1.),\n\t\t\tvec2(.5, 0.),\n\t\t\t\n\t\t\tvec2(0., 1.),\n\t\t\tvec2(1., 1.),\n\t\t\tvec2(.5, 0.)\n\t\t);\n\n\t\tvec4 vertexShader(in vec3 vertex, in mat4 transform) {\n\t\t\treturn transform * vec4(vertex, 1.);\n\t\t}\n\n\t\tvec4 fragmentShader(in vec2 uv) {\n\t\t\treturn flixel_texture2D(bitmap, uv);\n\t\t}\n\n\n\t\tconst float fov  = 70.0;\n\t\tconst float near = 0.1;\n\t\tconst float far  = 10.;\n\n\t\tconst vec3 cameraPos = vec3(0., 0.3, 2.);\n\n\t\t\tuniform float rotX = -25.;\n\t\t\tuniform float rotY = 45.;\n\t\tvec4 pixel(in vec2 ndc, in float aspect, inout float depth, in int vertexIndex) {\n\n\t\t\t\n\t\t\t\n\n\t\t\tmat4 proj  = perspective(fov, aspect, near, far);\n\t\t\tmat4 view  = translate(-cameraPos);\n\t\t\tmat4 model = rotateX(rotX) * rotateY(rotY);\n\t\t\t\n\t\t\tmat4 mvp  = proj * view * model;\n\n\t\t\tvec4 v0 = vertexShader(vertices[vertexIndex  ], mvp);\n\t\t\tvec4 v1 = vertexShader(vertices[vertexIndex+1], mvp);\n\t\t\tvec4 v2 = vertexShader(vertices[vertexIndex+2], mvp);\n\t\t\t\n\t\t\tvec2 t0 = texCoords[vertexIndex  ] / v0.w; float oow0 = 1. / v0.w;\n\t\t\tvec2 t1 = texCoords[vertexIndex+1] / v1.w; float oow1 = 1. / v1.w;\n\t\t\tvec2 t2 = texCoords[vertexIndex+2] / v2.w; float oow2 = 1. / v2.w;\n\t\t\t\n\t\t\tv0 /= v0.w;\n\t\t\tv1 /= v1.w;\n\t\t\tv2 /= v2.w;\n\t\t\t\n\t\t\tvec3 tri = bary(v0.xy, v1.xy, v2.xy, ndc);\n\t\t\t\n\t\t\tif(tri.x < 0. || tri.x > 1. || tri.y < 0. || tri.y > 1. || tri.z < 0. || tri.z > 1.) {\n\t\t\t\treturn vec4(0.);\n\t\t\t}\n\t\t\t\n\t\t\tfloat triDepth = baryLerp(v0.z, v1.z, v2.z, tri);\n\t\t\tif(triDepth > depth || triDepth < -1. || triDepth > 1.) {\n\t\t\t\treturn vec4(0.);\n\t\t\t}\n\t\t\t\n\t\t\tdepth = triDepth;\n\t\t\t\n\t\t\tfloat oneOverW = baryLerp(oow0, oow1, oow2, tri);\n\t\t\tvec2 uv        = uvLerp(t0, t1, t2, tri) / oneOverW;\n\t\t\treturn fragmentShader(uv);\n\n\t\t}\n\n\nvoid main()\n{\n    vec2 ndc = ((gl_FragCoord.xy * 2.) / openfl_TextureSize.xy) - vec2(1.);\n    float aspect = openfl_TextureSize.x / openfl_TextureSize.y;\n    vec3 outColor = vec3(.4,.6,.9);\n    \n    float depth = 1.0;\n    for(int i = 0; i < 18; i += 3) {\n        vec4 tri = pixel(ndc, aspect, depth, i);\n        outColor = mix(outColor.rgb, tri.rgb, tri.a);\n    }\n    \n    gl_FragColor = vec4(outColor, 1.);\n}\n\t\n\t\n\t\n\t",b7,30,59,76);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE(1610)		super::__construct();
HXLINE(1470)		this->_hx___isGenerated = true;
HXDLIN(1470)		this->_hx___initGL();
            	}

Dynamic FuckingTriangle_obj::__CreateEmpty() { return new FuckingTriangle_obj; }

void *FuckingTriangle_obj::_hx_vtable = 0;

Dynamic FuckingTriangle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FuckingTriangle_obj > _hx_result = new FuckingTriangle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FuckingTriangle_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0d563811) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x0d563811;
		}
	} else {
		return inClassId==(int)0x1efca5b6 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< FuckingTriangle_obj > FuckingTriangle_obj::__new() {
	::hx::ObjectPtr< FuckingTriangle_obj > __this = new FuckingTriangle_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FuckingTriangle_obj > FuckingTriangle_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FuckingTriangle_obj *__this = (FuckingTriangle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FuckingTriangle_obj), true, "shaders.FuckingTriangle"));
	*(void **)__this = FuckingTriangle_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FuckingTriangle_obj::FuckingTriangle_obj()
{
}

void FuckingTriangle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FuckingTriangle);
	HX_MARK_MEMBER_NAME(rotX,"rotX");
	HX_MARK_MEMBER_NAME(rotY,"rotY");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FuckingTriangle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rotX,"rotX");
	HX_VISIT_MEMBER_NAME(rotY,"rotY");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FuckingTriangle_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rotX") ) { return ::hx::Val( rotX ); }
		if (HX_FIELD_EQ(inName,"rotY") ) { return ::hx::Val( rotY ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FuckingTriangle_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rotX") ) { rotX=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotY") ) { rotY=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FuckingTriangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("rotX",61,f2,ae,4b));
	outFields->push(HX_("rotY",62,f2,ae,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FuckingTriangle_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(FuckingTriangle_obj,rotX),HX_("rotX",61,f2,ae,4b)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(FuckingTriangle_obj,rotY),HX_("rotY",62,f2,ae,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FuckingTriangle_obj_sStaticStorageInfo = 0;
#endif

static ::String FuckingTriangle_obj_sMemberFields[] = {
	HX_("rotX",61,f2,ae,4b),
	HX_("rotY",62,f2,ae,4b),
	::String(null()) };

::hx::Class FuckingTriangle_obj::__mClass;

void FuckingTriangle_obj::__register()
{
	FuckingTriangle_obj _hx_dummy;
	FuckingTriangle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.FuckingTriangle",93,fe,02,e1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FuckingTriangle_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FuckingTriangle_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FuckingTriangle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FuckingTriangle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
