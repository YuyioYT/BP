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
#ifndef INCLUDED_shaders_BarrelBlurShader
#include <shaders/BarrelBlurShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2726fde92e086366_2877_new,"shaders.BarrelBlurShader","new",0x63f31f04,"shaders.BarrelBlurShader.new","shaders/Shaders.hx",2877,0x7800d7f1)
namespace shaders{

void BarrelBlurShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2726fde92e086366_2877_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n\t\t\n        uniform float barrel;\n        uniform float zoom;\n        uniform bool doChroma;\n        uniform float angle;\n        uniform float iTime;\n\n        uniform float x;\n        uniform float y;\n\n        //edited version of this\n        //https://www.shadertoy.com/view/td2XDz\n\n        vec2 remap( vec2 t, vec2 a, vec2 b ) {\n            return clamp( (t - a) / (b - a), 0.0, 1.0 );\n        }\n\n        vec4 spectrum_offset_rgb( float t )\n        {\n            if (!doChroma)\n                return vec4(1.0,1.0,1.0,1.0); //turn off chroma\n            float t0 = 3.0 * t - 1.5;\n            vec3 ret = clamp( vec3( -t0, 1.0-abs(t0), t0), 0.0, 1.0);\n            return vec4(ret.r,ret.g,ret.b, 1.0);\n        }\n\n        vec2 brownConradyDistortion(vec2 uv, float dist)\n        {\n            uv = uv * 2.0 - 1.0;\n            float barrelDistortion1 = 0.1 * dist; // K1 in text books\n            float barrelDistortion2 = -0.025 * dist; // K2 in text books\n\n            float r2 = dot(uv,uv);\n            uv *= 1.0 + barrelDistortion1 * r2 + barrelDistortion2 * r2 * r2;\n            \n            return uv * 0.5 + 0.5;\n        }\n\n        vec2 distort( vec2 uv, float t, vec2 min_distort, vec2 max_distort )\n        {\n            vec2 dist = mix( min_distort, max_distort, t );\n            return brownConradyDistortion( uv, 75.0 * dist.x );\n        }\n\n        float nrand( vec2 n )\n        {\n            return fract(sin(dot(n.xy, vec2(12.9898, 78.233)))* 43758.5453);\n        }\n\n        vec4 render( vec2 uv )\n        {\n            uv.x += x;\n            uv.y += y;\n            \n            //funny mirroring shit\n            if ((uv.x > 1.0 || uv.x < 0.0) && abs(mod(uv.x, 2.0)) > 1.0)\n                uv.x = (0.0-uv.x)+1.0;\n            if ((uv.y > 1.0 || uv.y < 0.0) && abs(mod(uv.y, 2.0)) > 1.0)\n                uv.y = (0.0-uv.y)+1.0;\n\n\n\n            return flixel_texture2D( bitmap, vec2(abs(mod(uv.x, 1.0)), abs(mod(uv.y, 1.0))) );\n        }\n\n        void main()\n        {\t\n            vec2 iResolution = vec2(1280,720);\n            //rotation bullshit\n            vec2 center = vec2(0.5,0.5);\n            vec2 uv = openfl_TextureCoordv.xy;\n            \n\n\n            //uv = uv.xy - center; //move uv center point from center to top left\n\n            mat2 translation = mat2(\n                0, 0,\n                0, 0 );\n\n\n            mat2 scaling = mat2(\n                zoom, 0.0,\n                0.0, zoom );\n\n            //uv = uv * scaling;\n\n            float angInRad = radians(angle);\n            mat2 rotation = mat2(\n                cos(angInRad), -sin(angInRad),\n                sin(angInRad), cos(angInRad) );\n\n            //used to stretch back into 16:9\n            //0.5625 is from 9/16\n            mat2 aspectRatioShit = mat2(\n                0.5625, 0.0,\n                0.0, 1.0 );\n\n            vec2 fragCoordShit = iResolution*openfl_TextureCoordv.xy;\n            uv = ( fragCoordShit - .5*iResolution.xy ) / iResolution.y;\n            uv = uv * scaling;\n            uv = (aspectRatioShit) * (rotation * uv);\n            uv = uv.xy + center; //move back to center\n            \n            const float MAX_DIST_PX = 50.0;\n            float max_distort_px = MAX_DIST_PX * barrel;\n            vec2 max_distort = vec2(max_distort_px) / iResolution.xy;\n            vec2 min_distort = 0.5 * max_distort;\n            \n            vec2 oversiz = distort( vec2(1.0), 1.0, min_distort, max_distort );\n            uv = mix(uv,remap( uv, 1.0-oversiz, oversiz ),0.0);\n            \n            const int num_iter = 7;\n            const float stepsiz = 1.0 / (float(num_iter)-1.0);\n            float rnd = nrand( uv + fract(iTime) );\n            float t = rnd*stepsiz;\n            \n            vec4 sumcol = vec4(0.0);\n            vec3 sumw = vec3(0.0);\n            for ( int i=0; i<num_iter; ++i )\n            {\n                vec4 w = spectrum_offset_rgb( t );\n                sumw += w.rgb;\n                vec2 uvd = distort(uv, t, min_distort, max_distort);\n                sumcol += w * render( uvd );\n                t += stepsiz;\n            }\n            sumcol.rgb /= sumw;\n            \n            vec3 outcol = sumcol.rgb;\n            outcol =  outcol;\n            outcol += rnd/255.0;\n            \n            gl_FragColor = vec4( outcol, sumcol.a / num_iter);\n        }\n\n        ",91,9d,29,79);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE(2878)		super::__construct();
HXLINE(2735)		this->_hx___isGenerated = true;
HXDLIN(2735)		this->_hx___initGL();
            	}

Dynamic BarrelBlurShader_obj::__CreateEmpty() { return new BarrelBlurShader_obj; }

void *BarrelBlurShader_obj::_hx_vtable = 0;

Dynamic BarrelBlurShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BarrelBlurShader_obj > _hx_result = new BarrelBlurShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BarrelBlurShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1efca5b6;
		}
	} else {
		return inClassId==(int)0x524a0d9c || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< BarrelBlurShader_obj > BarrelBlurShader_obj::__new() {
	::hx::ObjectPtr< BarrelBlurShader_obj > __this = new BarrelBlurShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BarrelBlurShader_obj > BarrelBlurShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BarrelBlurShader_obj *__this = (BarrelBlurShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BarrelBlurShader_obj), true, "shaders.BarrelBlurShader"));
	*(void **)__this = BarrelBlurShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BarrelBlurShader_obj::BarrelBlurShader_obj()
{
}

void BarrelBlurShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BarrelBlurShader);
	HX_MARK_MEMBER_NAME(barrel,"barrel");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(doChroma,"doChroma");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(iTime,"iTime");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BarrelBlurShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(barrel,"barrel");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(doChroma,"doChroma");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(iTime,"iTime");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BarrelBlurShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { return ::hx::Val( zoom ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return ::hx::Val( angle ); }
		if (HX_FIELD_EQ(inName,"iTime") ) { return ::hx::Val( iTime ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"barrel") ) { return ::hx::Val( barrel ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"doChroma") ) { return ::hx::Val( doChroma ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BarrelBlurShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { zoom=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iTime") ) { iTime=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"barrel") ) { barrel=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"doChroma") ) { doChroma=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BarrelBlurShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("barrel",66,cd,88,54));
	outFields->push(HX_("zoom",13,a3,f8,50));
	outFields->push(HX_("doChroma",61,7f,c7,56));
	outFields->push(HX_("angle",d3,43,e2,22));
	outFields->push(HX_("iTime",16,e1,e8,ac));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BarrelBlurShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(BarrelBlurShader_obj,barrel),HX_("barrel",66,cd,88,54)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(BarrelBlurShader_obj,zoom),HX_("zoom",13,a3,f8,50)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Bool */ ,(int)offsetof(BarrelBlurShader_obj,doChroma),HX_("doChroma",61,7f,c7,56)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(BarrelBlurShader_obj,angle),HX_("angle",d3,43,e2,22)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(BarrelBlurShader_obj,iTime),HX_("iTime",16,e1,e8,ac)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(BarrelBlurShader_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(BarrelBlurShader_obj,y),HX_("y",79,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BarrelBlurShader_obj_sStaticStorageInfo = 0;
#endif

static ::String BarrelBlurShader_obj_sMemberFields[] = {
	HX_("barrel",66,cd,88,54),
	HX_("zoom",13,a3,f8,50),
	HX_("doChroma",61,7f,c7,56),
	HX_("angle",d3,43,e2,22),
	HX_("iTime",16,e1,e8,ac),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	::String(null()) };

::hx::Class BarrelBlurShader_obj::__mClass;

void BarrelBlurShader_obj::__register()
{
	BarrelBlurShader_obj _hx_dummy;
	BarrelBlurShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.BarrelBlurShader",12,8d,36,95);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BarrelBlurShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BarrelBlurShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BarrelBlurShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BarrelBlurShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
