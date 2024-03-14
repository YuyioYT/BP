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
#ifndef INCLUDED_shaders_RayMarchShader
#include <shaders/RayMarchShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_589544e5829e40b7_3425_new,"shaders.RayMarchShader","new",0x8fbb0550,"shaders.RayMarchShader.new","shaders/Shaders.hx",3425,0x7800d7f1)
namespace shaders{

void RayMarchShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_589544e5829e40b7_3425_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n    varying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n\n    // \"RayMarching starting point\" \n    // by Martijn Steinrucken aka The Art of Code/BigWings - 2020\n    // The MIT License\n    // Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the \"Software\"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions: The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software. THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.\n    // Email: countfrolic@gmail.com\n    // Twitter: @The_ArtOfCode\n    // YouTube: youtube.com/TheArtOfCodeIsCool\n    // Facebook: https://www.facebook.com/groups/theartofcode/\n    //\n    // You can use this shader as a template for ray marching shaders\n\n    #define MAX_STEPS 100\n    #define MAX_DIST 100.\n    #define SURF_DIST .001\n\n    #define S smoothstep\n    #define T iTime\n\n    uniform vec3 rotation;\n    uniform vec3 iResolution;\n    uniform float zoom;\n\n    // Rotation matrix around the X axis.\n    mat3 rotateX(float theta) {\n        float c = cos(theta);\n        float s = sin(theta);\n        return mat3(\n            vec3(1, 0, 0),\n            vec3(0, c, -s),\n            vec3(0, s, c)\n        );\n    }\n\n    // Rotation matrix around the Y axis.\n    mat3 rotateY(float theta) {\n        float c = cos(theta);\n        float s = sin(theta);\n        return mat3(\n            vec3(c, 0, s),\n            vec3(0, 1, 0),\n            vec3(-s, 0, c)\n        );\n    }\n\n    // Rotation matrix around the Z axis.\n    mat3 rotateZ(float theta) {\n        float c = cos(theta);\n        float s = sin(theta);\n        return mat3(\n            vec3(c, -s, 0),\n            vec3(s, c, 0),\n            vec3(0, 0, 1)\n        );\n    }\n\n    mat2 Rot(float a) {\n        float s=sin(a), c=cos(a);\n        return mat2(c, -s, s, c);\n    }\n\n    float sdBox(vec3 p, vec3 s) {\n        //p = p * rotateX(rotation.x) * rotateY(rotation.y) * rotateZ(rotation.z);\n        p = abs(p)-s;\n        return length(max(p, 0.))+min(max(p.x, max(p.y, p.z)), 0.);\n    }\n    float plane(vec3 p, vec3 offset) {\n        float d = p.z;\n        return d;\n    }\n\n\n    float GetDist(vec3 p) {\n        float d = plane(p, vec3(0.0,0.0,0.0));\n        \n        return d;\n    }\n\n    float RayMarch(vec3 ro, vec3 rd) {\n        float dO=0.;\n        \n        for(int i=0; i<MAX_STEPS; i++) {\n            vec3 p = ro + rd*dO;\n            float dS = GetDist(p);\n            dO += dS;\n            if(dO>MAX_DIST || abs(dS)<SURF_DIST) break;\n        }\n        \n        return dO;\n    }\n\n    vec3 GetNormal(vec3 p) {\n        float d = GetDist(p);\n        vec2 e = vec2(.001, 0.0);\n        \n        vec3 n = d - vec3(\n            GetDist(p-e.xyy),\n            GetDist(p-e.yxy),\n            GetDist(p-e.yyx));\n        \n        return normalize(n);\n    }\n\n    vec3 GetRayDir(vec2 uv, vec3 p, vec3 l, float z) {\n        vec3 f = normalize(l-p),\n            r = normalize(cross(vec3(0.0,1.0,0.0), f)),\n            u = cross(f,r),\n            c = f*z,\n            i = c + uv.x*r + uv.y*u,\n            d = normalize(i);\n        return d;\n    }\n\n    vec2 repeat(vec2 uv)\n    {\n        return vec2(abs(mod(uv.x, 1.0)), abs(mod(uv.y, 1.0)));\n    }\n\n    void main() //this shader is pain\n    {\n        vec2 center = vec2(0.5, 0.5);\n        vec2 uv = openfl_TextureCoordv.xy - center;\n\n        uv.x = 0-uv.x;\n\n        vec3 ro = vec3(0.0, 0.0, zoom);\n\n        ro = ro * rotateX(rotation.x) * rotateY(rotation.y) * rotateZ(rotation.z);\n\n        //ro.yz *= Rot(ShaderPointShit.y); //rotation shit\n        //ro.xz *= Rot(ShaderPointShit.x);\n        \n        vec3 rd = GetRayDir(uv, ro, vec3(0.0,0.,0.0), 1.0);\n        vec4 col = vec4(0.0);\n    \n        float d = RayMarch(ro, rd);\n\n        if(d<MAX_DIST) {\n            vec3 p = ro + rd * d;\n            uv = vec2(p.x,p.y) * 0.5;\n            uv += center; //move coords from top left to center\n            col = flixel_texture2D(bitmap, repeat(uv)); //shadertoy to haxe bullshit i barely understand\n        }        \n        gl_FragColor = col;\n    }",8b,7a,26,9b);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE(3426)		super::__construct();
HXLINE(3275)		this->_hx___isGenerated = true;
HXDLIN(3275)		this->_hx___initGL();
            	}

Dynamic RayMarchShader_obj::__CreateEmpty() { return new RayMarchShader_obj; }

void *RayMarchShader_obj::_hx_vtable = 0;

Dynamic RayMarchShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RayMarchShader_obj > _hx_result = new RayMarchShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RayMarchShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1efca5b6;
		}
	} else {
		return inClassId==(int)0x4fbfc768 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< RayMarchShader_obj > RayMarchShader_obj::__new() {
	::hx::ObjectPtr< RayMarchShader_obj > __this = new RayMarchShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< RayMarchShader_obj > RayMarchShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	RayMarchShader_obj *__this = (RayMarchShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RayMarchShader_obj), true, "shaders.RayMarchShader"));
	*(void **)__this = RayMarchShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

RayMarchShader_obj::RayMarchShader_obj()
{
}

void RayMarchShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RayMarchShader);
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(iResolution,"iResolution");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RayMarchShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(iResolution,"iResolution");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val RayMarchShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { return ::hx::Val( zoom ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return ::hx::Val( rotation ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"iResolution") ) { return ::hx::Val( iResolution ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RayMarchShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { zoom=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"iResolution") ) { iResolution=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RayMarchShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("rotation",3e,3d,86,08));
	outFields->push(HX_("iResolution",f5,36,34,3f));
	outFields->push(HX_("zoom",13,a3,f8,50));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RayMarchShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(RayMarchShader_obj,rotation),HX_("rotation",3e,3d,86,08)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(RayMarchShader_obj,iResolution),HX_("iResolution",f5,36,34,3f)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(RayMarchShader_obj,zoom),HX_("zoom",13,a3,f8,50)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RayMarchShader_obj_sStaticStorageInfo = 0;
#endif

static ::String RayMarchShader_obj_sMemberFields[] = {
	HX_("rotation",3e,3d,86,08),
	HX_("iResolution",f5,36,34,3f),
	HX_("zoom",13,a3,f8,50),
	::String(null()) };

::hx::Class RayMarchShader_obj::__mClass;

void RayMarchShader_obj::__register()
{
	RayMarchShader_obj _hx_dummy;
	RayMarchShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.RayMarchShader",5e,5d,62,34);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RayMarchShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RayMarchShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RayMarchShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RayMarchShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
