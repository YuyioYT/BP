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
#ifndef INCLUDED_shaders_Grain
#include <shaders/Grain.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_00e6091a87126c63_1101_new,"shaders.Grain","new",0xa6f574cd,"shaders.Grain.new","shaders/Shaders.hx",1101,0x7800d7f1)
namespace shaders{

void Grain_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_00e6091a87126c63_1101_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n\n\t\t/*\n\t\tFilm Grain post-process shader v1.1\n\t\tMartins Upitis (martinsh) devlog-martinsh.blogspot.com\n\t\t2013\n\n\t\t--------------------------\n\t\tThis work is licensed under a Creative Commons Attribution 3.0 Unported License.\n\t\tSo you are free to share, modify and adapt it for your needs, and even use it for commercial use.\n\t\tI would also love to hear about a project you are using it.\n\n\t\tHave fun,\n\t\tMartins\n\t\t--------------------------\n\n\t\tPerlin noise shader by toneburst:\n\t\thttp://machinesdontcare.wordpress.com/2009/06/25/3d-perlin-noise-sphere-vertex-shader-sourcecode/\n\t\t*/\n\t\tuniform float uTime;\n\n\t\tconst float permTexUnit = 1.0/256.0;        // Perm texture texel-size\n\t\tconst float permTexUnitHalf = 0.5/256.0;    // Half perm texture texel-size\n\n\t\tfloat width = openfl_TextureSize.x;\n\t\tfloat height = openfl_TextureSize.y;\n\n\t\tconst float grainamount = 0.05; //grain amount\n\t\tbool colored = false; //colored noise?\n\t\tuniform float coloramount;\n\t\tuniform float grainsize; //grain particle size (1.5 - 2.5)\n\t\tuniform float lumamount; //\n\tuniform bool lockAlpha;\n\n\t\t//a random texture generator, but you can also use a pre-computed perturbation texture\n\t\n\t\tvec4 rnm(in vec2 tc)\n\t\t{\n\t\t\tfloat noise =  sin(dot(tc + vec2(uTime,uTime),vec2(12.9898,78.233))) * 43758.5453;\n\n\t\t\tfloat noiseR =  fract(noise)*2.0-1.0;\n\t\t\tfloat noiseG =  fract(noise*1.2154)*2.0-1.0;\n\t\t\tfloat noiseB =  fract(noise * 1.3453) * 2.0 - 1.0;\n\t\t\t\n\t\t\t\t\n\t\t\tfloat noiseA =  (fract(noise * 1.3647) * 2.0 - 1.0);\n\n\t\t\treturn vec4(noiseR,noiseG,noiseB,noiseA);\n\t\t}\n\n\t\tfloat fade(in float t) {\n\t\t\treturn t*t*t*(t*(t*6.0-15.0)+10.0);\n\t\t}\n\n\t\tfloat pnoise3D(in vec3 p)\n\t\t{\n\t\t\tvec3 pi = permTexUnit*floor(p)+permTexUnitHalf; // Integer part, scaled so +1 moves permTexUnit texel\n\t\t\t// and offset 1/2 texel to sample texel centers\n\t\t\tvec3 pf = fract(p);     // Fractional part for interpolation\n\n\t\t\t// Noise contributions from (x=0, y=0), z=0 and z=1\n\t\t\tfloat perm00 = rnm(pi.xy).a ;\n\t\t\tvec3  grad000 = rnm(vec2(perm00, pi.z)).rgb * 4.0 - 1.0;\n\t\t\tfloat n000 = dot(grad000, pf);\n\t\t\tvec3  grad001 = rnm(vec2(perm00, pi.z + permTexUnit)).rgb * 4.0 - 1.0;\n\t\t\tfloat n001 = dot(grad001, pf - vec3(0.0, 0.0, 1.0));\n\n\t\t\t// Noise contributions from (x=0, y=1), z=0 and z=1\n\t\t\tfloat perm01 = rnm(pi.xy + vec2(0.0, permTexUnit)).a ;\n\t\t\tvec3  grad010 = rnm(vec2(perm01, pi.z)).rgb * 4.0 - 1.0;\n\t\t\tfloat n010 = dot(grad010, pf - vec3(0.0, 1.0, 0.0));\n\t\t\tvec3  grad011 = rnm(vec2(perm01, pi.z + permTexUnit)).rgb * 4.0 - 1.0;\n\t\t\tfloat n011 = dot(grad011, pf - vec3(0.0, 1.0, 1.0));\n\n\t\t\t// Noise contributions from (x=1, y=0), z=0 and z=1\n\t\t\tfloat perm10 = rnm(pi.xy + vec2(permTexUnit, 0.0)).a ;\n\t\t\tvec3  grad100 = rnm(vec2(perm10, pi.z)).rgb * 4.0 - 1.0;\n\t\t\tfloat n100 = dot(grad100, pf - vec3(1.0, 0.0, 0.0));\n\t\t\tvec3  grad101 = rnm(vec2(perm10, pi.z + permTexUnit)).rgb * 4.0 - 1.0;\n\t\t\tfloat n101 = dot(grad101, pf - vec3(1.0, 0.0, 1.0));\n\n\t\t\t// Noise contributions from (x=1, y=1), z=0 and z=1\n\t\t\tfloat perm11 = rnm(pi.xy + vec2(permTexUnit, permTexUnit)).a ;\n\t\t\tvec3  grad110 = rnm(vec2(perm11, pi.z)).rgb * 4.0 - 1.0;\n\t\t\tfloat n110 = dot(grad110, pf - vec3(1.0, 1.0, 0.0));\n\t\t\tvec3  grad111 = rnm(vec2(perm11, pi.z + permTexUnit)).rgb * 4.0 - 1.0;\n\t\t\tfloat n111 = dot(grad111, pf - vec3(1.0, 1.0, 1.0));\n\n\t\t\t// Blend contributions along x\n\t\t\tvec4 n_x = mix(vec4(n000, n001, n010, n011), vec4(n100, n101, n110, n111), fade(pf.x));\n\n\t\t\t// Blend contributions along y\n\t\t\tvec2 n_xy = mix(n_x.xy, n_x.zw, fade(pf.y));\n\n\t\t\t// Blend contributions along z\n\t\t\tfloat n_xyz = mix(n_xy.x, n_xy.y, fade(pf.z));\n\n\t\t\t// We are done, return the final noise value.\n\t\t\treturn n_xyz;\n\t\t}\n\n\t\t//2d coordinate orientation thing\n\t\tvec2 coordRot(in vec2 tc, in float angle)\n\t\t{\n\t\t\tfloat aspect = width/height;\n\t\t\tfloat rotX = ((tc.x*2.0-1.0)*aspect*cos(angle)) - ((tc.y*2.0-1.0)*sin(angle));\n\t\t\tfloat rotY = ((tc.y*2.0-1.0)*cos(angle)) + ((tc.x*2.0-1.0)*aspect*sin(angle));\n\t\t\trotX = ((rotX/aspect)*0.5+0.5);\n\t\t\trotY = rotY*0.5+0.5;\n\t\t\treturn vec2(rotX,rotY);\n\t\t}\n\n\t\tvoid main()\n\t\t{\n\t\t\tvec2 texCoord = openfl_TextureCoordv.st;\n\n\t\t\tvec3 rotOffset = vec3(1.425,3.892,5.835); //rotation offset values\n\t\t\tvec2 rotCoordsR = coordRot(texCoord, uTime + rotOffset.x);\n\t\t\tvec3 noise = vec3(pnoise3D(vec3(rotCoordsR*vec2(width/grainsize,height/grainsize),0.0)));\n\n\t\t\tif (colored)\n\t\t\t{\n\t\t\t\tvec2 rotCoordsG = coordRot(texCoord, uTime + rotOffset.y);\n\t\t\t\tvec2 rotCoordsB = coordRot(texCoord, uTime + rotOffset.z);\n\t\t\t\tnoise.g = mix(noise.r,pnoise3D(vec3(rotCoordsG*vec2(width/grainsize,height/grainsize),1.0)),coloramount);\n\t\t\t\tnoise.b = mix(noise.r,pnoise3D(vec3(rotCoordsB*vec2(width/grainsize,height/grainsize),2.0)),coloramount);\n\t\t\t}\n\n\t\t\tvec3 col = texture2D(bitmap, openfl_TextureCoordv).rgb;\n\n\t\t\t//noisiness response curve based on scene luminance\n\t\t\tvec3 lumcoeff = vec3(0.299,0.587,0.114);\n\t\t\tfloat luminance = mix(0.0,dot(col, lumcoeff),lumamount);\n\t\t\tfloat lum = smoothstep(0.2,0.0,luminance);\n\t\t\tlum += luminance;\n\n\n\t\t\tnoise = mix(noise,vec3(0.0),pow(lum,4.0));\n\t\t\tcol = col+noise*grainamount;\n\n\t\t\t\tfloat bitch = 1.0;\n\t\t\tvec4 texColor = texture2D(bitmap, openfl_TextureCoordv);\n\t\t\t\tif (lockAlpha) bitch = texColor.a;\n\t\t\tgl_FragColor =  vec4(col,bitch);\n\t\t}",b0,8f,8b,46);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE(1102)		super::__construct();
HXLINE( 952)		this->_hx___isGenerated = true;
HXDLIN( 952)		this->_hx___initGL();
            	}

Dynamic Grain_obj::__CreateEmpty() { return new Grain_obj; }

void *Grain_obj::_hx_vtable = 0;

Dynamic Grain_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Grain_obj > _hx_result = new Grain_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Grain_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1efca5b6;
		}
	} else {
		return inClassId==(int)0x3498012d || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< Grain_obj > Grain_obj::__new() {
	::hx::ObjectPtr< Grain_obj > __this = new Grain_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Grain_obj > Grain_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Grain_obj *__this = (Grain_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Grain_obj), true, "shaders.Grain"));
	*(void **)__this = Grain_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Grain_obj::Grain_obj()
{
}

void Grain_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Grain);
	HX_MARK_MEMBER_NAME(uTime,"uTime");
	HX_MARK_MEMBER_NAME(coloramount,"coloramount");
	HX_MARK_MEMBER_NAME(grainsize,"grainsize");
	HX_MARK_MEMBER_NAME(lumamount,"lumamount");
	HX_MARK_MEMBER_NAME(lockAlpha,"lockAlpha");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Grain_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(uTime,"uTime");
	HX_VISIT_MEMBER_NAME(coloramount,"coloramount");
	HX_VISIT_MEMBER_NAME(grainsize,"grainsize");
	HX_VISIT_MEMBER_NAME(lumamount,"lumamount");
	HX_VISIT_MEMBER_NAME(lockAlpha,"lockAlpha");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Grain_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"uTime") ) { return ::hx::Val( uTime ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"grainsize") ) { return ::hx::Val( grainsize ); }
		if (HX_FIELD_EQ(inName,"lumamount") ) { return ::hx::Val( lumamount ); }
		if (HX_FIELD_EQ(inName,"lockAlpha") ) { return ::hx::Val( lockAlpha ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"coloramount") ) { return ::hx::Val( coloramount ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Grain_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"uTime") ) { uTime=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"grainsize") ) { grainsize=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lumamount") ) { lumamount=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lockAlpha") ) { lockAlpha=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"coloramount") ) { coloramount=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Grain_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("uTime",22,d7,b7,95));
	outFields->push(HX_("coloramount",7b,2f,97,5a));
	outFields->push(HX_("grainsize",7c,63,1a,b7));
	outFields->push(HX_("lumamount",9c,16,8d,ab));
	outFields->push(HX_("lockAlpha",73,67,78,5c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Grain_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Grain_obj,uTime),HX_("uTime",22,d7,b7,95)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Grain_obj,coloramount),HX_("coloramount",7b,2f,97,5a)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Grain_obj,grainsize),HX_("grainsize",7c,63,1a,b7)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Grain_obj,lumamount),HX_("lumamount",9c,16,8d,ab)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Bool */ ,(int)offsetof(Grain_obj,lockAlpha),HX_("lockAlpha",73,67,78,5c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Grain_obj_sStaticStorageInfo = 0;
#endif

static ::String Grain_obj_sMemberFields[] = {
	HX_("uTime",22,d7,b7,95),
	HX_("coloramount",7b,2f,97,5a),
	HX_("grainsize",7c,63,1a,b7),
	HX_("lumamount",9c,16,8d,ab),
	HX_("lockAlpha",73,67,78,5c),
	::String(null()) };

::hx::Class Grain_obj::__mClass;

void Grain_obj::__register()
{
	Grain_obj _hx_dummy;
	Grain_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.Grain",5b,0a,f6,ed);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Grain_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Grain_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Grain_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Grain_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
