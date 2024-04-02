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
#ifndef INCLUDED_shaders_BloomShader2
#include <shaders/BloomShader2.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4d54a1c7b6c8a36e_1310_new,"shaders.BloomShader2","new",0x187c28bc,"shaders.BloomShader2.new","shaders/Shaders.hx",1310,0x7800d7f1)
namespace shaders{

void BloomShader2_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4d54a1c7b6c8a36e_1310_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n\t\n\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n\t\n\tuniform float intensity;\n\tuniform float blurSize;\nvoid main()\n{\n   vec4 sum = vec4(0);\n   vec2 texcoord = openfl_TextureCoordv;\n   int j;\n   int i;\n\n   //thank you! http://www.gamerendering.com/2008/10/11/gaussian-blur-filter-shader/ for the \n   //blur tutorial\n   // blur in y (vertical)\n   // take nine samples, with the distance blurSize between them\n   sum += flixel_texture2D(bitmap, vec2(texcoord.x - 4.0*blurSize, texcoord.y)) * 0.05;\n   sum += flixel_texture2D(bitmap, vec2(texcoord.x - 3.0*blurSize, texcoord.y)) * 0.09;\n   sum += flixel_texture2D(bitmap, vec2(texcoord.x - 2.0*blurSize, texcoord.y)) * 0.12;\n   sum += flixel_texture2D(bitmap, vec2(texcoord.x - blurSize, texcoord.y)) * 0.15;\n   sum += flixel_texture2D(bitmap, vec2(texcoord.x, texcoord.y)) * 0.16;\n   sum += flixel_texture2D(bitmap, vec2(texcoord.x + blurSize, texcoord.y)) * 0.15;\n   sum += flixel_texture2D(bitmap, vec2(texcoord.x + 2.0*blurSize, texcoord.y)) * 0.12;\n   sum += flixel_texture2D(bitmap, vec2(texcoord.x + 3.0*blurSize, texcoord.y)) * 0.09;\n   sum += flixel_texture2D(bitmap, vec2(texcoord.x + 4.0*blurSize, texcoord.y)) * 0.05;\n\t\n\t// blur in y (vertical)\n   // take nine samples, with the distance blurSize between them\n   sum += flixel_texture2D(bitmap, vec2(texcoord.x, texcoord.y - 4.0*blurSize)) * 0.05;\n   sum += flixel_texture2D(bitmap, vec2(texcoord.x, texcoord.y - 3.0*blurSize)) * 0.09;\n   sum += flixel_texture2D(bitmap, vec2(texcoord.x, texcoord.y - 2.0*blurSize)) * 0.12;\n   sum += flixel_texture2D(bitmap, vec2(texcoord.x, texcoord.y - blurSize)) * 0.15;\n   sum += flixel_texture2D(bitmap, vec2(texcoord.x, texcoord.y)) * 0.16;\n   sum += flixel_texture2D(bitmap, vec2(texcoord.x, texcoord.y + blurSize)) * 0.15;\n   sum += flixel_texture2D(bitmap, vec2(texcoord.x, texcoord.y + 2.0*blurSize)) * 0.12;\n   sum += flixel_texture2D(bitmap, vec2(texcoord.x, texcoord.y + 3.0*blurSize)) * 0.09;\n   sum += flixel_texture2D(bitmap, vec2(texcoord.x, texcoord.y + 4.0*blurSize)) * 0.05;\n\n   //increase blur with intensity!\n  gl_FragColor = sum*intensity + flixel_texture2D(bitmap, texcoord); \n  // if(sin(iTime) > 0.0)\n   //    fragColor = sum * sin(iTime)+ texture(iChannel0, texcoord);\n  // else\n\t//   fragColor = sum * -sin(iTime)+ texture(iChannel0, texcoord);\n}\n\t\n\t",08,58,ed,a5);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE(1311)		super::__construct();
HXLINE(1259)		this->_hx___isGenerated = true;
HXDLIN(1259)		this->_hx___initGL();
            	}

Dynamic BloomShader2_obj::__CreateEmpty() { return new BloomShader2_obj; }

void *BloomShader2_obj::_hx_vtable = 0;

Dynamic BloomShader2_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BloomShader2_obj > _hx_result = new BloomShader2_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BloomShader2_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1efca5b6;
		}
	} else {
		return inClassId==(int)0x6a24c238 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< BloomShader2_obj > BloomShader2_obj::__new() {
	::hx::ObjectPtr< BloomShader2_obj > __this = new BloomShader2_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BloomShader2_obj > BloomShader2_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BloomShader2_obj *__this = (BloomShader2_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BloomShader2_obj), true, "shaders.BloomShader2"));
	*(void **)__this = BloomShader2_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BloomShader2_obj::BloomShader2_obj()
{
}

void BloomShader2_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BloomShader2);
	HX_MARK_MEMBER_NAME(intensity,"intensity");
	HX_MARK_MEMBER_NAME(blurSize,"blurSize");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BloomShader2_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(intensity,"intensity");
	HX_VISIT_MEMBER_NAME(blurSize,"blurSize");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BloomShader2_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"blurSize") ) { return ::hx::Val( blurSize ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intensity") ) { return ::hx::Val( intensity ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BloomShader2_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"blurSize") ) { blurSize=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intensity") ) { intensity=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BloomShader2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("intensity",b3,c6,dd,f4));
	outFields->push(HX_("blurSize",08,ef,f9,12));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BloomShader2_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(BloomShader2_obj,intensity),HX_("intensity",b3,c6,dd,f4)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(BloomShader2_obj,blurSize),HX_("blurSize",08,ef,f9,12)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BloomShader2_obj_sStaticStorageInfo = 0;
#endif

static ::String BloomShader2_obj_sMemberFields[] = {
	HX_("intensity",b3,c6,dd,f4),
	HX_("blurSize",08,ef,f9,12),
	::String(null()) };

::hx::Class BloomShader2_obj::__mClass;

void BloomShader2_obj::__register()
{
	BloomShader2_obj _hx_dummy;
	BloomShader2_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.BloomShader2",ca,5a,9a,c5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BloomShader2_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BloomShader2_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BloomShader2_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BloomShader2_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
