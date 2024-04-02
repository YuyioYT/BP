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
#ifndef INCLUDED_shaders_MirrorRepeatShader
#include <shaders/MirrorRepeatShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0ed4a4662e73510d_2225_new,"shaders.MirrorRepeatShader","new",0x53068911,"shaders.MirrorRepeatShader.new","shaders/Shaders.hx",2225,0x7800d7f1)
namespace shaders{

void MirrorRepeatShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0ed4a4662e73510d_2225_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n\n        //written by TheZoroForce240\n\t\t\n        uniform float zoom;\n        uniform float angle;\n        uniform float iTime;\n\n        uniform float x;\n        uniform float y;\n\n        vec4 render( vec2 uv )\n        {\n            uv.x += x;\n            uv.y += y;\n            \n            //funny mirroring shit\n            if ((uv.x > 1.0 || uv.x < 0.0) && abs(mod(uv.x, 2.0)) > 1.0)\n                uv.x = (0.0-uv.x)+1.0;\n            if ((uv.y > 1.0 || uv.y < 0.0) && abs(mod(uv.y, 2.0)) > 1.0)\n                uv.y = (0.0-uv.y)+1.0;\n\n            return flixel_texture2D( bitmap, vec2(abs(mod(uv.x, 1.0)), abs(mod(uv.y, 1.0))) );\n        }\n\n        void main()\n        {\t\n            vec2 iResolution = vec2(1280,720);\n            //rotation bullshit\n            vec2 center = vec2(0.5,0.5);\n            vec2 uv = openfl_TextureCoordv.xy;\n\n            mat2 scaling = mat2(\n                zoom, 0.0,\n                0.0, zoom );\n\n            //uv = uv * scaling;\n\n            float angInRad = radians(angle);\n            mat2 rotation = mat2(\n                cos(angInRad), -sin(angInRad),\n                sin(angInRad), cos(angInRad) );\n\n            //used to stretch back into 16:9\n            //0.5625 is from 9/16\n            mat2 aspectRatioShit = mat2(\n                0.5625, 0.0,\n                0.0, 1.0 );\n\n            vec2 fragCoordShit = iResolution*openfl_TextureCoordv.xy;\n            uv = ( fragCoordShit - .5*iResolution.xy ) / iResolution.y; //this helped a little, specifically the guy in the comments: https://www.shadertoy.com/view/tsSXzt\n            uv = uv * scaling;\n            uv = (aspectRatioShit) * (rotation * uv);\n            uv = uv.xy + center; //move back to center\n            \n            gl_FragColor = render(uv);\n        }\n\n        ",79,4f,0c,70);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE(2226)		super::__construct();
HXLINE(2162)		this->_hx___isGenerated = true;
HXDLIN(2162)		this->_hx___initGL();
            	}

Dynamic MirrorRepeatShader_obj::__CreateEmpty() { return new MirrorRepeatShader_obj; }

void *MirrorRepeatShader_obj::_hx_vtable = 0;

Dynamic MirrorRepeatShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MirrorRepeatShader_obj > _hx_result = new MirrorRepeatShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MirrorRepeatShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x062ae3a9) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x062ae3a9;
		}
	} else {
		return inClassId==(int)0x1efca5b6 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< MirrorRepeatShader_obj > MirrorRepeatShader_obj::__new() {
	::hx::ObjectPtr< MirrorRepeatShader_obj > __this = new MirrorRepeatShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MirrorRepeatShader_obj > MirrorRepeatShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MirrorRepeatShader_obj *__this = (MirrorRepeatShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MirrorRepeatShader_obj), true, "shaders.MirrorRepeatShader"));
	*(void **)__this = MirrorRepeatShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MirrorRepeatShader_obj::MirrorRepeatShader_obj()
{
}

void MirrorRepeatShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MirrorRepeatShader);
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(iTime,"iTime");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MirrorRepeatShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(iTime,"iTime");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MirrorRepeatShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MirrorRepeatShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
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
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MirrorRepeatShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("zoom",13,a3,f8,50));
	outFields->push(HX_("angle",d3,43,e2,22));
	outFields->push(HX_("iTime",16,e1,e8,ac));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MirrorRepeatShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(MirrorRepeatShader_obj,zoom),HX_("zoom",13,a3,f8,50)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(MirrorRepeatShader_obj,angle),HX_("angle",d3,43,e2,22)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(MirrorRepeatShader_obj,iTime),HX_("iTime",16,e1,e8,ac)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(MirrorRepeatShader_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(MirrorRepeatShader_obj,y),HX_("y",79,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MirrorRepeatShader_obj_sStaticStorageInfo = 0;
#endif

static ::String MirrorRepeatShader_obj_sMemberFields[] = {
	HX_("zoom",13,a3,f8,50),
	HX_("angle",d3,43,e2,22),
	HX_("iTime",16,e1,e8,ac),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	::String(null()) };

::hx::Class MirrorRepeatShader_obj::__mClass;

void MirrorRepeatShader_obj::__register()
{
	MirrorRepeatShader_obj _hx_dummy;
	MirrorRepeatShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.MirrorRepeatShader",9f,ac,ce,3c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MirrorRepeatShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MirrorRepeatShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MirrorRepeatShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MirrorRepeatShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
