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
#ifndef INCLUDED_shaders_ChromBlockedShader
#include <shaders/ChromBlockedShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_80d7f37fa062850c_2945_new,"shaders.ChromBlockedShader","new",0x7a2ae278,"shaders.ChromBlockedShader.new","shaders/Shaders.hx",2945,0x7800d7f1)
namespace shaders{

void ChromBlockedShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_80d7f37fa062850c_2945_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n    varying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n    /*\n    https://www.shadertoy.com/view/4dXBW2\n    */\n    \n    uniform float floatGlitch;\n    \n    float sat( float t ) {\n        return clamp( t, 0.0, 1.0 );\n    }\n    \n    vec2 sat( vec2 t ) {\n        return clamp( t, 0.0, 1.0 );\n    }\n    \n    //remaps inteval [a;b] to [0;1]\n    float remap  ( float t, float a, float b ) {\n        return sat( (t - a) / (b - a) );\n    }\n    \n    //note: / t=[0;0.5;1], y=[0;1;0]\n    float linterp( float t ) {\n        return sat( 1.0 - abs( 2.0*t - 1.0 ) );\n    }\n    \n    vec3 spectrum_offset( float t ) {\n        vec3 ret;\n        float lo = step(t,0.5);\n        float hi = 1.0-lo;\n        float w = linterp( remap( t, 1.0/6.0, 5.0/6.0 ) );\n        float neg_w = 1.0-w;\n        ret = vec3(lo,1.0,hi) * vec3(neg_w, w, neg_w);\n        return pow( ret, vec3(1.0/2.2) );\n    }\n    \n    //note: [0;1]\n    float rand( vec2 n ) {\n      return fract(sin(dot(n.xy, vec2(12.9898, 78.233)))* 43758.5453);\n    }\n    \n    //note: [-1;1]\n    float srand( vec2 n ) {\n        return rand(n) * 2.0 - 1.0;\n    }\n    \n    float mytrunc( float x, float num_levels )\n    {\n        return floor(x*num_levels) / num_levels;\n    }\n    vec2 mytrunc( vec2 x, float num_levels )\n    {\n        return floor(x*num_levels) / num_levels;\n    }\n    \n    void mainImage( out vec4 fragColor, in vec2 fragCoord )\n    {\n        vec2 uv = fragCoord.xy / iResolution.xy;\n        uv.y = uv.y;\n        \n        float time = mod(iTime*100.0, 32.0)/110.0; // + modelmat[0].x + modelmat[0].z;\n    \n        float GLITCH = 0.1 + floatGlitch / iResolution.x;\n        \n        float gnm = sat( GLITCH );\n        float rnd0 = rand( mytrunc( vec2(time, time), 6.0 ) );\n        float r0 = sat((1.0-gnm)*0.7 + rnd0);\n        float rnd1 = rand( vec2(mytrunc( uv.x, 10.0*r0 ), time) ); //horz\n        //float r1 = 1.0f - sat( (1.0f-gnm)*0.5f + rnd1 );\n        float r1 = 0.5 - 0.5 * gnm + rnd1;\n        r1 = 1.0 - max( 0.0, ((r1<1.0) ? r1 : 0.9999999) ); //note: weird ass bug on old drivers\n        float rnd2 = rand( vec2(mytrunc( uv.y, 40.0*r1 ), time) ); //vert\n        float r2 = sat( rnd2 );\n    \n        float rnd3 = rand( vec2(mytrunc( uv.y, 10.0*r0 ), time) );\n        float r3 = (1.0-sat(rnd3+0.8)) - 0.1;\n    \n        float pxrnd = rand( uv + time );\n    \n        float ofs = 0.05 * r2 * GLITCH * ( rnd0 > 0.5 ? 1.0 : -1.0 );\n        ofs += 0.5 * pxrnd * ofs;\n    \n        uv.y += 0.1 * r3 * GLITCH;\n    \n        const int NUM_SAMPLES = 20;\n        const float RCP_NUM_SAMPLES_F = 1.0 / float(NUM_SAMPLES);\n        \n        vec4 sum = vec4(0.0);\n        vec3 wsum = vec3(0.0);\n        for( int i=0; i<NUM_SAMPLES; ++i )\n        {\n            float t = float(i) * RCP_NUM_SAMPLES_F;\n            uv.x = sat( uv.x + ofs * t );\n            vec4 samplecol = texture( iChannel0, uv, -10.0 );\n            vec3 s = spectrum_offset( t );\n            samplecol.rgb = samplecol.rgb * s;\n            sum += samplecol;\n            wsum += s;\n        }\n        sum.rgb /= wsum;\n        sum.a *= RCP_NUM_SAMPLES_F;\n    \n        fragColor.a = sum.a;\n        fragColor.rgb = sum.rgb; // * outcol0.a;\n    }",c4,2b,cb,2c);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE(2946)		super::__construct();
HXLINE(2837)		this->_hx___isGenerated = true;
HXDLIN(2837)		this->_hx___initGL();
            	}

Dynamic ChromBlockedShader_obj::__CreateEmpty() { return new ChromBlockedShader_obj; }

void *ChromBlockedShader_obj::_hx_vtable = 0;

Dynamic ChromBlockedShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChromBlockedShader_obj > _hx_result = new ChromBlockedShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ChromBlockedShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x04f93fcd) {
		if (inClassId<=(int)0x035358e4) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x035358e4;
		} else {
			return inClassId==(int)0x04f93fcd;
		}
	} else {
		return inClassId==(int)0x1efca5b6 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< ChromBlockedShader_obj > ChromBlockedShader_obj::__new() {
	::hx::ObjectPtr< ChromBlockedShader_obj > __this = new ChromBlockedShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ChromBlockedShader_obj > ChromBlockedShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ChromBlockedShader_obj *__this = (ChromBlockedShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChromBlockedShader_obj), true, "shaders.ChromBlockedShader"));
	*(void **)__this = ChromBlockedShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ChromBlockedShader_obj::ChromBlockedShader_obj()
{
}

void ChromBlockedShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ChromBlockedShader);
	HX_MARK_MEMBER_NAME(floatGlitch,"floatGlitch");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ChromBlockedShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(floatGlitch,"floatGlitch");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ChromBlockedShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"floatGlitch") ) { return ::hx::Val( floatGlitch ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ChromBlockedShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"floatGlitch") ) { floatGlitch=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ChromBlockedShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("floatGlitch",b1,ea,e9,4a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ChromBlockedShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(ChromBlockedShader_obj,floatGlitch),HX_("floatGlitch",b1,ea,e9,4a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ChromBlockedShader_obj_sStaticStorageInfo = 0;
#endif

static ::String ChromBlockedShader_obj_sMemberFields[] = {
	HX_("floatGlitch",b1,ea,e9,4a),
	::String(null()) };

::hx::Class ChromBlockedShader_obj::__mClass;

void ChromBlockedShader_obj::__register()
{
	ChromBlockedShader_obj _hx_dummy;
	ChromBlockedShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.ChromBlockedShader",86,86,02,d9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChromBlockedShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ChromBlockedShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChromBlockedShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChromBlockedShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
