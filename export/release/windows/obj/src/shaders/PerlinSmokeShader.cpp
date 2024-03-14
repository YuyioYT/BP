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
#ifndef INCLUDED_shaders_PerlinSmokeShader
#include <shaders/PerlinSmokeShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_55cc4097af946a93_3135_new,"shaders.PerlinSmokeShader","new",0xc97fd7d2,"shaders.PerlinSmokeShader.new","shaders/Shaders.hx",3135,0x7800d7f1)
namespace shaders{

void PerlinSmokeShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_55cc4097af946a93_3135_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n    varying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n\t\t\n    uniform float iTime;\n    uniform float waveStrength;\n    uniform float smokeStrength;\n    \n    \n    //https://gist.github.com/patriciogonzalezvivo/670c22f3966e662d2f83\n    //\tClassic Perlin 3D Noise \n    //\tby Stefan Gustavson\n    //\n    vec4 permute(vec4 x){return mod(((x*34.0)+1.0)*x, 289.0);}\n    vec4 taylorInvSqrt(vec4 r){return 1.79284291400159 - 0.85373472095314 * r;}\n    vec3 fade(vec3 t) {return t*t*t*(t*(t*6.0-15.0)+10.0);}\n    \n    float cnoise(vec3 P){\n      vec3 Pi0 = floor(P); // Integer part for indexing\n      vec3 Pi1 = Pi0 + vec3(1.0); // Integer part + 1\n      Pi0 = mod(Pi0, 289.0);\n      Pi1 = mod(Pi1, 289.0);\n      vec3 Pf0 = fract(P); // Fractional part for interpolation\n      vec3 Pf1 = Pf0 - vec3(1.0); // Fractional part - 1.0\n      vec4 ix = vec4(Pi0.x, Pi1.x, Pi0.x, Pi1.x);\n      vec4 iy = vec4(Pi0.yy, Pi1.yy);\n      vec4 iz0 = Pi0.zzzz;\n      vec4 iz1 = Pi1.zzzz;\n    \n      vec4 ixy = permute(permute(ix) + iy);\n      vec4 ixy0 = permute(ixy + iz0);\n      vec4 ixy1 = permute(ixy + iz1);\n    \n      vec4 gx0 = ixy0 / 7.0;\n      vec4 gy0 = fract(floor(gx0) / 7.0) - 0.5;\n      gx0 = fract(gx0);\n      vec4 gz0 = vec4(0.5) - abs(gx0) - abs(gy0);\n      vec4 sz0 = step(gz0, vec4(0.0));\n      gx0 -= sz0 * (step(0.0, gx0) - 0.5);\n      gy0 -= sz0 * (step(0.0, gy0) - 0.5);\n    \n      vec4 gx1 = ixy1 / 7.0;\n      vec4 gy1 = fract(floor(gx1) / 7.0) - 0.5;\n      gx1 = fract(gx1);\n      vec4 gz1 = vec4(0.5) - abs(gx1) - abs(gy1);\n      vec4 sz1 = step(gz1, vec4(0.0));\n      gx1 -= sz1 * (step(0.0, gx1) - 0.5);\n      gy1 -= sz1 * (step(0.0, gy1) - 0.5);\n    \n      vec3 g000 = vec3(gx0.x,gy0.x,gz0.x);\n      vec3 g100 = vec3(gx0.y,gy0.y,gz0.y);\n      vec3 g010 = vec3(gx0.z,gy0.z,gz0.z);\n      vec3 g110 = vec3(gx0.w,gy0.w,gz0.w);\n      vec3 g001 = vec3(gx1.x,gy1.x,gz1.x);\n      vec3 g101 = vec3(gx1.y,gy1.y,gz1.y);\n      vec3 g011 = vec3(gx1.z,gy1.z,gz1.z);\n      vec3 g111 = vec3(gx1.w,gy1.w,gz1.w);\n    \n      vec4 norm0 = taylorInvSqrt(vec4(dot(g000, g000), dot(g010, g010), dot(g100, g100), dot(g110, g110)));\n      g000 *= norm0.x;\n      g010 *= norm0.y;\n      g100 *= norm0.z;\n      g110 *= norm0.w;\n      vec4 norm1 = taylorInvSqrt(vec4(dot(g001, g001), dot(g011, g011), dot(g101, g101), dot(g111, g111)));\n      g001 *= norm1.x;\n      g011 *= norm1.y;\n      g101 *= norm1.z;\n      g111 *= norm1.w;\n    \n      float n000 = dot(g000, Pf0);\n      float n100 = dot(g100, vec3(Pf1.x, Pf0.yz));\n      float n010 = dot(g010, vec3(Pf0.x, Pf1.y, Pf0.z));\n      float n110 = dot(g110, vec3(Pf1.xy, Pf0.z));\n      float n001 = dot(g001, vec3(Pf0.xy, Pf1.z));\n      float n101 = dot(g101, vec3(Pf1.x, Pf0.y, Pf1.z));\n      float n011 = dot(g011, vec3(Pf0.x, Pf1.yz));\n      float n111 = dot(g111, Pf1);\n    \n      vec3 fade_xyz = fade(Pf0);\n      vec4 n_z = mix(vec4(n000, n100, n010, n110), vec4(n001, n101, n011, n111), fade_xyz.z);\n      vec2 n_yz = mix(n_z.xy, n_z.zw, fade_xyz.y);\n      float n_xyz = mix(n_yz.x, n_yz.y, fade_xyz.x); \n      return 2.2 * n_xyz;\n    }\n    \n    float generateSmoke(vec2 uv, vec2 offset, float scale, float speed)\n    {\n        return cnoise(vec3((uv.x+offset.x)*scale, (uv.y+offset.y)*scale, iTime*speed));\n    }\n    \n    float getSmoke(vec2 uv)\n    {\n      float smoke = 0.0;\n      if (smokeStrength == 0.0)\n        return smoke;\n    \n      float smoke1 = generateSmoke(uv, vec2(0.0-(iTime*0.5),0.0+sin(iTime*0.1)+(iTime*0.1)), 1.0, 0.5*0.1);\n      float smoke2 = generateSmoke(uv, vec2(200.0-(iTime*0.2),200.0+sin(iTime*0.1)+(iTime*0.05)), 4.0, 0.3*0.1);\n      float smoke3 = generateSmoke(uv, vec2(700.0-(iTime*0.1),700.0+sin(iTime*0.1)+(iTime*0.1)), 6.0, 0.7*0.1);\n      smoke = smoke1*smoke2*smoke3*2.0;\n    \n      return smoke*smokeStrength;\n    }\n        \n    void main()\n    {\t\n        \n        vec2 uv = openfl_TextureCoordv.xy + vec2(sin(cnoise(vec3(0.0,openfl_TextureCoordv.y*2.5,iTime))), 0.0)*waveStrength;\n        vec2 smokeUV = uv;\n        float smokeFactor = getSmoke(uv);\n        if (smokeFactor < 0.0)\n          smokeFactor = 0.0;\n        \n        vec3 finalCol = flixel_texture2D( bitmap, uv ).rgb + smokeFactor;\n        \n        gl_FragColor = vec4(finalCol.r, finalCol.g, finalCol.b, flixel_texture2D( bitmap, uv ).a);\n    }\n\n        ",80,89,d5,09);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE(3136)		super::__construct();
HXLINE(3014)		this->_hx___isGenerated = true;
HXDLIN(3014)		this->_hx___initGL();
            	}

Dynamic PerlinSmokeShader_obj::__CreateEmpty() { return new PerlinSmokeShader_obj; }

void *PerlinSmokeShader_obj::_hx_vtable = 0;

Dynamic PerlinSmokeShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PerlinSmokeShader_obj > _hx_result = new PerlinSmokeShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PerlinSmokeShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x098930b2) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x098930b2;
		}
	} else {
		return inClassId==(int)0x1efca5b6 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< PerlinSmokeShader_obj > PerlinSmokeShader_obj::__new() {
	::hx::ObjectPtr< PerlinSmokeShader_obj > __this = new PerlinSmokeShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PerlinSmokeShader_obj > PerlinSmokeShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PerlinSmokeShader_obj *__this = (PerlinSmokeShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PerlinSmokeShader_obj), true, "shaders.PerlinSmokeShader"));
	*(void **)__this = PerlinSmokeShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PerlinSmokeShader_obj::PerlinSmokeShader_obj()
{
}

void PerlinSmokeShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PerlinSmokeShader);
	HX_MARK_MEMBER_NAME(iTime,"iTime");
	HX_MARK_MEMBER_NAME(waveStrength,"waveStrength");
	HX_MARK_MEMBER_NAME(smokeStrength,"smokeStrength");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PerlinSmokeShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(iTime,"iTime");
	HX_VISIT_MEMBER_NAME(waveStrength,"waveStrength");
	HX_VISIT_MEMBER_NAME(smokeStrength,"smokeStrength");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PerlinSmokeShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"iTime") ) { return ::hx::Val( iTime ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"waveStrength") ) { return ::hx::Val( waveStrength ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"smokeStrength") ) { return ::hx::Val( smokeStrength ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PerlinSmokeShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"iTime") ) { iTime=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"waveStrength") ) { waveStrength=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"smokeStrength") ) { smokeStrength=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PerlinSmokeShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("iTime",16,e1,e8,ac));
	outFields->push(HX_("waveStrength",5a,d5,14,a8));
	outFields->push(HX_("smokeStrength",10,a5,09,35));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PerlinSmokeShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(PerlinSmokeShader_obj,iTime),HX_("iTime",16,e1,e8,ac)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(PerlinSmokeShader_obj,waveStrength),HX_("waveStrength",5a,d5,14,a8)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(PerlinSmokeShader_obj,smokeStrength),HX_("smokeStrength",10,a5,09,35)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PerlinSmokeShader_obj_sStaticStorageInfo = 0;
#endif

static ::String PerlinSmokeShader_obj_sMemberFields[] = {
	HX_("iTime",16,e1,e8,ac),
	HX_("waveStrength",5a,d5,14,a8),
	HX_("smokeStrength",10,a5,09,35),
	::String(null()) };

::hx::Class PerlinSmokeShader_obj::__mClass;

void PerlinSmokeShader_obj::__register()
{
	PerlinSmokeShader_obj _hx_dummy;
	PerlinSmokeShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.PerlinSmokeShader",e0,46,e7,a4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PerlinSmokeShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PerlinSmokeShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PerlinSmokeShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PerlinSmokeShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
