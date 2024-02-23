#include <hxcpp.h>

#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_states_FixedSongMetadata
#include <states/FixedSongMetadata.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_43820593a43f9dbc_544_new,"states.FixedSongMetadata","new",0x5a07ac9e,"states.FixedSongMetadata.new","states/FreeplayState.hx",544,0x1b2e20da)
namespace states{

void FixedSongMetadata_obj::__construct(::String song,int week,::String songCharacter,int color){
            	HX_STACKFRAME(&_hx_pos_43820593a43f9dbc_544_new)
HXLINE( 550)		this->folder = HX_("",00,00,00,00);
HXLINE( 549)		this->color = -7179779;
HXLINE( 548)		this->songCharacter = HX_("",00,00,00,00);
HXLINE( 547)		this->week = 0;
HXLINE( 546)		this->songName = HX_("",00,00,00,00);
HXLINE( 554)		this->songName = song;
HXLINE( 555)		this->week = week;
HXLINE( 556)		this->songCharacter = songCharacter;
HXLINE( 557)		this->color = color;
HXLINE( 558)		this->folder = ::backend::Paths_obj::currentModDirectory;
HXLINE( 559)		if (::hx::IsNull( this->folder )) {
HXLINE( 559)			this->folder = HX_("",00,00,00,00);
            		}
            	}

Dynamic FixedSongMetadata_obj::__CreateEmpty() { return new FixedSongMetadata_obj; }

void *FixedSongMetadata_obj::_hx_vtable = 0;

Dynamic FixedSongMetadata_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FixedSongMetadata_obj > _hx_result = new FixedSongMetadata_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FixedSongMetadata_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0c443472;
}


::hx::ObjectPtr< FixedSongMetadata_obj > FixedSongMetadata_obj::__new(::String song,int week,::String songCharacter,int color) {
	::hx::ObjectPtr< FixedSongMetadata_obj > __this = new FixedSongMetadata_obj();
	__this->__construct(song,week,songCharacter,color);
	return __this;
}

::hx::ObjectPtr< FixedSongMetadata_obj > FixedSongMetadata_obj::__alloc(::hx::Ctx *_hx_ctx,::String song,int week,::String songCharacter,int color) {
	FixedSongMetadata_obj *__this = (FixedSongMetadata_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FixedSongMetadata_obj), true, "states.FixedSongMetadata"));
	*(void **)__this = FixedSongMetadata_obj::_hx_vtable;
	__this->__construct(song,week,songCharacter,color);
	return __this;
}

FixedSongMetadata_obj::FixedSongMetadata_obj()
{
}

void FixedSongMetadata_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FixedSongMetadata);
	HX_MARK_MEMBER_NAME(songName,"songName");
	HX_MARK_MEMBER_NAME(week,"week");
	HX_MARK_MEMBER_NAME(songCharacter,"songCharacter");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(folder,"folder");
	HX_MARK_END_CLASS();
}

void FixedSongMetadata_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(songName,"songName");
	HX_VISIT_MEMBER_NAME(week,"week");
	HX_VISIT_MEMBER_NAME(songCharacter,"songCharacter");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(folder,"folder");
}

::hx::Val FixedSongMetadata_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"week") ) { return ::hx::Val( week ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"folder") ) { return ::hx::Val( folder ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"songName") ) { return ::hx::Val( songName ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"songCharacter") ) { return ::hx::Val( songCharacter ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FixedSongMetadata_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"week") ) { week=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"folder") ) { folder=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"songName") ) { songName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"songCharacter") ) { songCharacter=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FixedSongMetadata_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("songName",c0,d0,d7,36));
	outFields->push(HX_("week",f4,5f,f5,4e));
	outFields->push(HX_("songCharacter",14,f5,a5,78));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("folder",ae,76,90,f9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FixedSongMetadata_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(FixedSongMetadata_obj,songName),HX_("songName",c0,d0,d7,36)},
	{::hx::fsInt,(int)offsetof(FixedSongMetadata_obj,week),HX_("week",f4,5f,f5,4e)},
	{::hx::fsString,(int)offsetof(FixedSongMetadata_obj,songCharacter),HX_("songCharacter",14,f5,a5,78)},
	{::hx::fsInt,(int)offsetof(FixedSongMetadata_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsString,(int)offsetof(FixedSongMetadata_obj,folder),HX_("folder",ae,76,90,f9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FixedSongMetadata_obj_sStaticStorageInfo = 0;
#endif

static ::String FixedSongMetadata_obj_sMemberFields[] = {
	HX_("songName",c0,d0,d7,36),
	HX_("week",f4,5f,f5,4e),
	HX_("songCharacter",14,f5,a5,78),
	HX_("color",63,71,5c,4a),
	HX_("folder",ae,76,90,f9),
	::String(null()) };

::hx::Class FixedSongMetadata_obj::__mClass;

void FixedSongMetadata_obj::__register()
{
	FixedSongMetadata_obj _hx_dummy;
	FixedSongMetadata_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.FixedSongMetadata",ac,c5,99,01);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FixedSongMetadata_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FixedSongMetadata_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FixedSongMetadata_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FixedSongMetadata_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
