#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_backend_Song
#include <backend/Song.h>
#endif
#ifndef INCLUDED_backend_StageData
#include <backend/StageData.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_tjson_TJSON
#include <tjson/TJSON.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_db09ff2b98ac40f1_46_new,"backend.Song","new",0x743f8f01,"backend.Song.new","backend/Song.hx",46,0x16217dae)
HX_LOCAL_STACK_FRAME(_hx_pos_db09ff2b98ac40f1_77_onLoadJson,"backend.Song","onLoadJson",0xada0af2c,"backend.Song.onLoadJson","backend/Song.hx",77,0x16217dae)
HX_LOCAL_STACK_FRAME(_hx_pos_db09ff2b98ac40f1_123_loadFromJson,"backend.Song","loadFromJson",0xc81ee237,"backend.Song.loadFromJson","backend/Song.hx",123,0x16217dae)
HX_LOCAL_STACK_FRAME(_hx_pos_db09ff2b98ac40f1_156_parseJSONshit,"backend.Song","parseJSONshit",0x02743afc,"backend.Song.parseJSONshit","backend/Song.hx",156,0x16217dae)
namespace backend{

void Song_obj::__construct(::String song,::Array< ::Dynamic> notes,Float bpm){
            	HX_STACKFRAME(&_hx_pos_db09ff2b98ac40f1_46_new)
HXLINE(  73)		this->songInstVolume = ((Float)1);
HXLINE(  72)		this->gfVersion = HX_("gf",1f,5a,00,00);
HXLINE(  71)		this->player3 = HX_("dad",47,36,4c,00);
HXLINE(  70)		this->player2 = HX_("dad",47,36,4c,00);
HXLINE(  69)		this->player1 = HX_("bf",c4,55,00,00);
HXLINE(  67)		this->speed = ((Float)1);
HXLINE(  66)		this->disableNoteRGB = false;
HXLINE(  64)		this->swapStrumLines = false;
HXLINE(  63)		this->disableDebugButtons = false;
HXLINE(  62)		this->disableAntiMash = false;
HXLINE(  61)		this->canFly = false;
HXLINE(  60)		this->cameraMoveOnNotes = false;
HXLINE(  52)		this->needsVoices = true;
HXLINE( 117)		this->song = song;
HXLINE( 118)		this->notes = notes;
HXLINE( 119)		this->bpm = bpm;
            	}

Dynamic Song_obj::__CreateEmpty() { return new Song_obj; }

void *Song_obj::_hx_vtable = 0;

Dynamic Song_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Song_obj > _hx_result = new Song_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Song_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x55e30b25;
}

void Song_obj::onLoadJson( ::Dynamic songJson){
            	HX_STACKFRAME(&_hx_pos_db09ff2b98ac40f1_77_onLoadJson)
HXLINE(  78)		if (::hx::IsNull( songJson->__Field(HX_("gfVersion",b9,c6,7d,f3),::hx::paccDynamic) )) {
HXLINE(  80)			songJson->__SetField(HX_("gfVersion",b9,c6,7d,f3),songJson->__Field(HX_("player3",b2,09,15,8a),::hx::paccDynamic),::hx::paccDynamic);
HXLINE(  81)			songJson->__SetField(HX_("player3",b2,09,15,8a),null(),::hx::paccDynamic);
            		}
HXLINE(  84)		if (::hx::IsNull( songJson->__Field(HX_("gfVersion",b9,c6,7d,f3),::hx::paccDynamic) )) {
HXLINE(  86)			songJson->__SetField(HX_("gfVersion",b9,c6,7d,f3),songJson->__Field(HX_("player3",b2,09,15,8a),::hx::paccDynamic),::hx::paccDynamic);
HXLINE(  87)			songJson->__SetField(HX_("player3",b2,09,15,8a),null(),::hx::paccDynamic);
            		}
HXLINE(  90)		if (::hx::IsNull( songJson->__Field(HX_("events",19,4f,6a,96),::hx::paccDynamic) )) {
HXLINE(  92)			songJson->__SetField(HX_("events",19,4f,6a,96),::cpp::VirtualArray_obj::__new(0),::hx::paccDynamic);
HXLINE(  93)			{
HXLINE(  93)				int _g = 0;
HXDLIN(  93)				int _g1 = ( (int)( ::Dynamic(songJson->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic)) );
HXDLIN(  93)				while((_g < _g1)){
HXLINE(  93)					_g = (_g + 1);
HXDLIN(  93)					int secNum = (_g - 1);
HXLINE(  95)					 ::Dynamic sec =  ::Dynamic(songJson->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(secNum);
HXLINE(  97)					int i = 0;
HXLINE(  98)					::cpp::VirtualArray notes = ( (::cpp::VirtualArray)(sec->__Field(HX_("sectionNotes",1c,c8,a7,fe),::hx::paccDynamic)) );
HXLINE(  99)					int len = notes->get_length();
HXLINE( 100)					while((i < len)){
HXLINE( 102)						::cpp::VirtualArray note = ( (::cpp::VirtualArray)(notes->__get(i)) );
HXLINE( 103)						if (::hx::IsLess( note->__get(1),0 )) {
HXLINE( 105)							 ::Dynamic(songJson->__Field(HX_("events",19,4f,6a,96),::hx::paccDynamic))->__Field(HX_("push",da,11,61,4a),::hx::paccDynamic)(::Array_obj< ::Dynamic>::__new(2)->init(0,note->__get(0))->init(1,::Array_obj< ::Dynamic>::__new(1)->init(0,::cpp::VirtualArray_obj::__new(3)->init(0,note->__get(2))->init(1,note->__get(3))->init(2,note->__get(4)))));
HXLINE( 106)							notes->remove(note);
HXLINE( 107)							len = notes->get_length();
            						}
            						else {
HXLINE( 109)							i = (i + 1);
            						}
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Song_obj,onLoadJson,(void))

 ::Dynamic Song_obj::loadFromJson(::String jsonInput,::String folder){
            	HX_GC_STACKFRAME(&_hx_pos_db09ff2b98ac40f1_123_loadFromJson)
HXLINE( 124)		::String rawJson = null();
HXLINE( 126)		 ::EReg invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXDLIN( 126)		 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXDLIN( 126)		::String path = invalidChars->split(::StringTools_obj::replace(folder,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXDLIN( 126)		::String formattedFolder = hideChars->split(path)->join(HX_("",00,00,00,00)).toLowerCase();
HXLINE( 127)		 ::EReg invalidChars1 =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXDLIN( 127)		 ::EReg hideChars1 =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXDLIN( 127)		::String path1 = invalidChars1->split(::StringTools_obj::replace(jsonInput,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXDLIN( 127)		::String formattedSong = hideChars1->split(path1)->join(HX_("",00,00,00,00)).toLowerCase();
HXLINE( 129)		::String moddyFile = ::backend::Paths_obj::modFolders(((HX_("data/",c5,0e,88,d4) + ((formattedFolder + HX_("/",2f,00,00,00)) + formattedSong)) + HX_(".json",56,f1,d6,c2)));
HXLINE( 130)		if (::sys::FileSystem_obj::exists(moddyFile)) {
HXLINE( 131)			rawJson = ::StringTools_obj::trim(::sys::io::File_obj::getContent(moddyFile));
            		}
HXLINE( 135)		if (::hx::IsNull( rawJson )) {
HXLINE( 137)			::String library = null();
HXDLIN( 137)			rawJson = ::StringTools_obj::trim(::sys::io::File_obj::getContent(::backend::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + ((formattedFolder + HX_("/",2f,00,00,00)) + formattedSong)) + HX_(".json",56,f1,d6,c2)),HX_("TEXT",ad,94,ba,37),library,null())));
            		}
HXLINE( 143)		while(!(::StringTools_obj::endsWith(rawJson,HX_("}",7d,00,00,00)))){
HXLINE( 145)			rawJson = rawJson.substr(0,(rawJson.length - 1));
            		}
HXLINE( 148)		 ::Dynamic songJson = ::backend::Song_obj::parseJSONshit(rawJson);
HXLINE( 149)		if ((jsonInput != HX_("events",19,4f,6a,96))) {
HXLINE( 149)			::backend::StageData_obj::loadDirectory(songJson);
            		}
HXLINE( 150)		::backend::Song_obj::onLoadJson(songJson);
HXLINE( 151)		return songJson;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Song_obj,loadFromJson,return )

 ::Dynamic Song_obj::parseJSONshit(::String rawJson){
            	HX_STACKFRAME(&_hx_pos_db09ff2b98ac40f1_156_parseJSONshit)
HXDLIN( 156)		return ::tjson::TJSON_obj::parse(rawJson,null(),null())->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Song_obj,parseJSONshit,return )


Song_obj::Song_obj()
{
}

void Song_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Song);
	HX_MARK_MEMBER_NAME(song,"song");
	HX_MARK_MEMBER_NAME(notes,"notes");
	HX_MARK_MEMBER_NAME(events,"events");
	HX_MARK_MEMBER_NAME(bpm,"bpm");
	HX_MARK_MEMBER_NAME(needsVoices,"needsVoices");
	HX_MARK_MEMBER_NAME(arrowSkin,"arrowSkin");
	HX_MARK_MEMBER_NAME(splashSkin,"splashSkin");
	HX_MARK_MEMBER_NAME(gameOverChar,"gameOverChar");
	HX_MARK_MEMBER_NAME(gameOverSound,"gameOverSound");
	HX_MARK_MEMBER_NAME(gameOverLoop,"gameOverLoop");
	HX_MARK_MEMBER_NAME(gameOverEnd,"gameOverEnd");
	HX_MARK_MEMBER_NAME(cameraMoveOnNotes,"cameraMoveOnNotes");
	HX_MARK_MEMBER_NAME(canFly,"canFly");
	HX_MARK_MEMBER_NAME(disableAntiMash,"disableAntiMash");
	HX_MARK_MEMBER_NAME(disableDebugButtons,"disableDebugButtons");
	HX_MARK_MEMBER_NAME(swapStrumLines,"swapStrumLines");
	HX_MARK_MEMBER_NAME(disableNoteRGB,"disableNoteRGB");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(stage,"stage");
	HX_MARK_MEMBER_NAME(player1,"player1");
	HX_MARK_MEMBER_NAME(player2,"player2");
	HX_MARK_MEMBER_NAME(player3,"player3");
	HX_MARK_MEMBER_NAME(gfVersion,"gfVersion");
	HX_MARK_MEMBER_NAME(songInstVolume,"songInstVolume");
	HX_MARK_END_CLASS();
}

void Song_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(song,"song");
	HX_VISIT_MEMBER_NAME(notes,"notes");
	HX_VISIT_MEMBER_NAME(events,"events");
	HX_VISIT_MEMBER_NAME(bpm,"bpm");
	HX_VISIT_MEMBER_NAME(needsVoices,"needsVoices");
	HX_VISIT_MEMBER_NAME(arrowSkin,"arrowSkin");
	HX_VISIT_MEMBER_NAME(splashSkin,"splashSkin");
	HX_VISIT_MEMBER_NAME(gameOverChar,"gameOverChar");
	HX_VISIT_MEMBER_NAME(gameOverSound,"gameOverSound");
	HX_VISIT_MEMBER_NAME(gameOverLoop,"gameOverLoop");
	HX_VISIT_MEMBER_NAME(gameOverEnd,"gameOverEnd");
	HX_VISIT_MEMBER_NAME(cameraMoveOnNotes,"cameraMoveOnNotes");
	HX_VISIT_MEMBER_NAME(canFly,"canFly");
	HX_VISIT_MEMBER_NAME(disableAntiMash,"disableAntiMash");
	HX_VISIT_MEMBER_NAME(disableDebugButtons,"disableDebugButtons");
	HX_VISIT_MEMBER_NAME(swapStrumLines,"swapStrumLines");
	HX_VISIT_MEMBER_NAME(disableNoteRGB,"disableNoteRGB");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(stage,"stage");
	HX_VISIT_MEMBER_NAME(player1,"player1");
	HX_VISIT_MEMBER_NAME(player2,"player2");
	HX_VISIT_MEMBER_NAME(player3,"player3");
	HX_VISIT_MEMBER_NAME(gfVersion,"gfVersion");
	HX_VISIT_MEMBER_NAME(songInstVolume,"songInstVolume");
}

::hx::Val Song_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bpm") ) { return ::hx::Val( bpm ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"song") ) { return ::hx::Val( song ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"notes") ) { return ::hx::Val( notes ); }
		if (HX_FIELD_EQ(inName,"speed") ) { return ::hx::Val( speed ); }
		if (HX_FIELD_EQ(inName,"stage") ) { return ::hx::Val( stage ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { return ::hx::Val( events ); }
		if (HX_FIELD_EQ(inName,"canFly") ) { return ::hx::Val( canFly ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"player1") ) { return ::hx::Val( player1 ); }
		if (HX_FIELD_EQ(inName,"player2") ) { return ::hx::Val( player2 ); }
		if (HX_FIELD_EQ(inName,"player3") ) { return ::hx::Val( player3 ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"arrowSkin") ) { return ::hx::Val( arrowSkin ); }
		if (HX_FIELD_EQ(inName,"gfVersion") ) { return ::hx::Val( gfVersion ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"splashSkin") ) { return ::hx::Val( splashSkin ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"needsVoices") ) { return ::hx::Val( needsVoices ); }
		if (HX_FIELD_EQ(inName,"gameOverEnd") ) { return ::hx::Val( gameOverEnd ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"gameOverChar") ) { return ::hx::Val( gameOverChar ); }
		if (HX_FIELD_EQ(inName,"gameOverLoop") ) { return ::hx::Val( gameOverLoop ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gameOverSound") ) { return ::hx::Val( gameOverSound ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"swapStrumLines") ) { return ::hx::Val( swapStrumLines ); }
		if (HX_FIELD_EQ(inName,"disableNoteRGB") ) { return ::hx::Val( disableNoteRGB ); }
		if (HX_FIELD_EQ(inName,"songInstVolume") ) { return ::hx::Val( songInstVolume ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"disableAntiMash") ) { return ::hx::Val( disableAntiMash ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"cameraMoveOnNotes") ) { return ::hx::Val( cameraMoveOnNotes ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"disableDebugButtons") ) { return ::hx::Val( disableDebugButtons ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Song_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"onLoadJson") ) { outValue = onLoadJson_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromJson") ) { outValue = loadFromJson_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"parseJSONshit") ) { outValue = parseJSONshit_dyn(); return true; }
	}
	return false;
}

::hx::Val Song_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bpm") ) { bpm=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"song") ) { song=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"notes") ) { notes=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { events=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canFly") ) { canFly=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"player1") ) { player1=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"player2") ) { player2=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"player3") ) { player3=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"arrowSkin") ) { arrowSkin=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gfVersion") ) { gfVersion=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"splashSkin") ) { splashSkin=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"needsVoices") ) { needsVoices=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gameOverEnd") ) { gameOverEnd=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"gameOverChar") ) { gameOverChar=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gameOverLoop") ) { gameOverLoop=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gameOverSound") ) { gameOverSound=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"swapStrumLines") ) { swapStrumLines=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"disableNoteRGB") ) { disableNoteRGB=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"songInstVolume") ) { songInstVolume=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"disableAntiMash") ) { disableAntiMash=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"cameraMoveOnNotes") ) { cameraMoveOnNotes=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"disableDebugButtons") ) { disableDebugButtons=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Song_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("song",d5,23,58,4c));
	outFields->push(HX_("notes",41,dc,ca,9f));
	outFields->push(HX_("events",19,4f,6a,96));
	outFields->push(HX_("bpm",df,be,4a,00));
	outFields->push(HX_("needsVoices",be,05,e9,0d));
	outFields->push(HX_("arrowSkin",e6,d4,f8,07));
	outFields->push(HX_("splashSkin",84,03,e1,a1));
	outFields->push(HX_("gameOverChar",5c,48,07,65));
	outFields->push(HX_("gameOverSound",89,f8,70,3c));
	outFields->push(HX_("gameOverLoop",ea,8f,ff,6a));
	outFields->push(HX_("gameOverEnd",15,2d,a9,8d));
	outFields->push(HX_("cameraMoveOnNotes",ec,6c,06,47));
	outFields->push(HX_("canFly",43,f2,1d,b8));
	outFields->push(HX_("disableAntiMash",b3,c3,e0,65));
	outFields->push(HX_("disableDebugButtons",36,5a,c6,6d));
	outFields->push(HX_("swapStrumLines",69,6c,92,2f));
	outFields->push(HX_("disableNoteRGB",33,ad,d1,4a));
	outFields->push(HX_("speed",87,97,69,81));
	outFields->push(HX_("stage",be,6a,0b,84));
	outFields->push(HX_("player1",b0,09,15,8a));
	outFields->push(HX_("player2",b1,09,15,8a));
	outFields->push(HX_("player3",b2,09,15,8a));
	outFields->push(HX_("gfVersion",b9,c6,7d,f3));
	outFields->push(HX_("songInstVolume",75,1e,53,62));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Song_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Song_obj,song),HX_("song",d5,23,58,4c)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Song_obj,notes),HX_("notes",41,dc,ca,9f)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(Song_obj,events),HX_("events",19,4f,6a,96)},
	{::hx::fsFloat,(int)offsetof(Song_obj,bpm),HX_("bpm",df,be,4a,00)},
	{::hx::fsBool,(int)offsetof(Song_obj,needsVoices),HX_("needsVoices",be,05,e9,0d)},
	{::hx::fsString,(int)offsetof(Song_obj,arrowSkin),HX_("arrowSkin",e6,d4,f8,07)},
	{::hx::fsString,(int)offsetof(Song_obj,splashSkin),HX_("splashSkin",84,03,e1,a1)},
	{::hx::fsString,(int)offsetof(Song_obj,gameOverChar),HX_("gameOverChar",5c,48,07,65)},
	{::hx::fsString,(int)offsetof(Song_obj,gameOverSound),HX_("gameOverSound",89,f8,70,3c)},
	{::hx::fsString,(int)offsetof(Song_obj,gameOverLoop),HX_("gameOverLoop",ea,8f,ff,6a)},
	{::hx::fsString,(int)offsetof(Song_obj,gameOverEnd),HX_("gameOverEnd",15,2d,a9,8d)},
	{::hx::fsBool,(int)offsetof(Song_obj,cameraMoveOnNotes),HX_("cameraMoveOnNotes",ec,6c,06,47)},
	{::hx::fsBool,(int)offsetof(Song_obj,canFly),HX_("canFly",43,f2,1d,b8)},
	{::hx::fsBool,(int)offsetof(Song_obj,disableAntiMash),HX_("disableAntiMash",b3,c3,e0,65)},
	{::hx::fsBool,(int)offsetof(Song_obj,disableDebugButtons),HX_("disableDebugButtons",36,5a,c6,6d)},
	{::hx::fsBool,(int)offsetof(Song_obj,swapStrumLines),HX_("swapStrumLines",69,6c,92,2f)},
	{::hx::fsBool,(int)offsetof(Song_obj,disableNoteRGB),HX_("disableNoteRGB",33,ad,d1,4a)},
	{::hx::fsFloat,(int)offsetof(Song_obj,speed),HX_("speed",87,97,69,81)},
	{::hx::fsString,(int)offsetof(Song_obj,stage),HX_("stage",be,6a,0b,84)},
	{::hx::fsString,(int)offsetof(Song_obj,player1),HX_("player1",b0,09,15,8a)},
	{::hx::fsString,(int)offsetof(Song_obj,player2),HX_("player2",b1,09,15,8a)},
	{::hx::fsString,(int)offsetof(Song_obj,player3),HX_("player3",b2,09,15,8a)},
	{::hx::fsString,(int)offsetof(Song_obj,gfVersion),HX_("gfVersion",b9,c6,7d,f3)},
	{::hx::fsFloat,(int)offsetof(Song_obj,songInstVolume),HX_("songInstVolume",75,1e,53,62)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Song_obj_sStaticStorageInfo = 0;
#endif

static ::String Song_obj_sMemberFields[] = {
	HX_("song",d5,23,58,4c),
	HX_("notes",41,dc,ca,9f),
	HX_("events",19,4f,6a,96),
	HX_("bpm",df,be,4a,00),
	HX_("needsVoices",be,05,e9,0d),
	HX_("arrowSkin",e6,d4,f8,07),
	HX_("splashSkin",84,03,e1,a1),
	HX_("gameOverChar",5c,48,07,65),
	HX_("gameOverSound",89,f8,70,3c),
	HX_("gameOverLoop",ea,8f,ff,6a),
	HX_("gameOverEnd",15,2d,a9,8d),
	HX_("cameraMoveOnNotes",ec,6c,06,47),
	HX_("canFly",43,f2,1d,b8),
	HX_("disableAntiMash",b3,c3,e0,65),
	HX_("disableDebugButtons",36,5a,c6,6d),
	HX_("swapStrumLines",69,6c,92,2f),
	HX_("disableNoteRGB",33,ad,d1,4a),
	HX_("speed",87,97,69,81),
	HX_("stage",be,6a,0b,84),
	HX_("player1",b0,09,15,8a),
	HX_("player2",b1,09,15,8a),
	HX_("player3",b2,09,15,8a),
	HX_("gfVersion",b9,c6,7d,f3),
	HX_("songInstVolume",75,1e,53,62),
	::String(null()) };

::hx::Class Song_obj::__mClass;

static ::String Song_obj_sStaticFields[] = {
	HX_("onLoadJson",ad,e7,be,94),
	HX_("loadFromJson",f8,fc,9c,5d),
	HX_("parseJSONshit",1b,89,4d,3b),
	::String(null())
};

void Song_obj::__register()
{
	Song_obj _hx_dummy;
	Song_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.Song",8f,fa,b1,a5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Song_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Song_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Song_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Song_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Song_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Song_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace backend
