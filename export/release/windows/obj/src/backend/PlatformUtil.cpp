#include <hxcpp.h>

#ifndef INCLUDED_backend_PlatformUtil
#include <backend/PlatformUtil.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4daf048b157244f2_68_getWindowsTransparent,"backend.PlatformUtil","getWindowsTransparent",0x586f4d26,"backend.PlatformUtil.getWindowsTransparent","backend/PlatformUtil.hx",68,0x6c95922e)
HX_LOCAL_STACK_FRAME(_hx_pos_4daf048b157244f2_114_sendWindowsNotification,"backend.PlatformUtil","sendWindowsNotification",0x5e2c9947,"backend.PlatformUtil.sendWindowsNotification","backend/PlatformUtil.hx",114,0x6c95922e)
HX_LOCAL_STACK_FRAME(_hx_pos_4daf048b157244f2_131_sendFakeMsgBox,"backend.PlatformUtil","sendFakeMsgBox",0x90ac93a6,"backend.PlatformUtil.sendFakeMsgBox","backend/PlatformUtil.hx",131,0x6c95922e)
HX_LOCAL_STACK_FRAME(_hx_pos_4daf048b157244f2_146_getWindowsbackward,"backend.PlatformUtil","getWindowsbackward",0xf2d7516f,"backend.PlatformUtil.getWindowsbackward","backend/PlatformUtil.hx",146,0x6c95922e)
HX_LOCAL_STACK_FRAME(_hx_pos_4daf048b157244f2_158_updateWallpaper,"backend.PlatformUtil","updateWallpaper",0x5829cd9a,"backend.PlatformUtil.updateWallpaper","backend/PlatformUtil.hx",158,0x6c95922e)
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <winuser.h>
#include <dwmapi.h>
#include <strsafe.h>
#include <shellapi.h>
#include <iostream>
#include <string>

#pragma comment(lib, "Dwmapi")
#pragma comment(lib, "Shell32.lib")
namespace backend{

void PlatformUtil_obj::__construct() { }

Dynamic PlatformUtil_obj::__CreateEmpty() { return new PlatformUtil_obj; }

void *PlatformUtil_obj::_hx_vtable = 0;

Dynamic PlatformUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlatformUtil_obj > _hx_result = new PlatformUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PlatformUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x11ef3789;
}

int PlatformUtil_obj::getWindowsTransparent(::hx::Null< int >  __o_res){
            		int res = __o_res.Default(0);
            	HX_STACKFRAME(&_hx_pos_4daf048b157244f2_68_getWindowsTransparent)
            	
        HWND hWnd = GetActiveWindow();
        res = SetWindowLong(hWnd, GWL_EXSTYLE, GetWindowLong(hWnd, GWL_EXSTYLE) | WS_EX_LAYERED);
        if (res)
        {
            SetLayeredWindowAttributes(hWnd, RGB(1, 1, 1), 0, LWA_COLORKEY);
        }
    

HXDLIN(  68)		return res;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PlatformUtil_obj,getWindowsTransparent,return )

int PlatformUtil_obj::sendWindowsNotification(::String __o_title,::String __o_desc,::hx::Null< int >  __o_res){
            		::String title = __o_title;
            		if (::hx::IsNull(__o_title)) title = HX_("",00,00,00,00);
            		::String desc = __o_desc;
            		if (::hx::IsNull(__o_desc)) desc = HX_("",00,00,00,00);
            		int res = __o_res.Default(0);
            	HX_STACKFRAME(&_hx_pos_4daf048b157244f2_114_sendWindowsNotification)
            	
        NOTIFYICONDATA m_NID;

        memset(&m_NID, 0, sizeof(m_NID));
        m_NID.cbSize = sizeof(m_NID);
        m_NID.hWnd = GetForegroundWindow();
        m_NID.uFlags = NIF_MESSAGE | NIIF_WARNING | NIS_HIDDEN;

        m_NID.uVersion = NOTIFYICON_VERSION_4;

        if (!Shell_NotifyIcon(NIM_ADD, &m_NID))
            return FALSE;
    
        Shell_NotifyIcon(NIM_SETVERSION, &m_NID);

        m_NID.uFlags |= NIF_INFO;
        m_NID.uTimeout = 1000;
        m_NID.dwInfoFlags = NULL;

        LPCTSTR lTitle = title.c_str();
        LPCTSTR lDesc = desc.c_str();

        if (StringCchCopy(m_NID.szInfoTitle, sizeof(m_NID.szInfoTitle), lTitle) != S_OK)
            return FALSE;

        if (StringCchCopy(m_NID.szInfo, sizeof(m_NID.szInfo), lDesc) != S_OK)
            return FALSE;

        return Shell_NotifyIcon(NIM_MODIFY, &m_NID);
    

HXDLIN( 114)		return res;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(PlatformUtil_obj,sendWindowsNotification,return )

int PlatformUtil_obj::sendFakeMsgBox(::String __o_desc,::hx::Null< int >  __o_res){
            		::String desc = __o_desc;
            		if (::hx::IsNull(__o_desc)) desc = HX_("",00,00,00,00);
            		int res = __o_res.Default(0);
            	HX_STACKFRAME(&_hx_pos_4daf048b157244f2_131_sendFakeMsgBox)
            	
        LPCSTR lwDesc = desc.c_str();

        res = MessageBox(
            NULL,
            lwDesc,
            NULL,
            MB_OK
        );
    

HXDLIN( 131)		return res;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PlatformUtil_obj,sendFakeMsgBox,return )

int PlatformUtil_obj::getWindowsbackward(::hx::Null< int >  __o_res){
            		int res = __o_res.Default(0);
            	HX_STACKFRAME(&_hx_pos_4daf048b157244f2_146_getWindowsbackward)
            	
        HWND hWnd = GetActiveWindow();
        res = SetWindowLong(hWnd, GWL_EXSTYLE, GetWindowLong(hWnd, GWL_EXSTYLE) ^ WS_EX_LAYERED);
        if (res)
        {
            SetLayeredWindowAttributes(hWnd, RGB(1, 1, 1), 1, LWA_COLORKEY);
        }
    

HXDLIN( 146)		return res;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PlatformUtil_obj,getWindowsbackward,return )

 ::Dynamic PlatformUtil_obj::updateWallpaper(){
            	HX_STACKFRAME(&_hx_pos_4daf048b157244f2_158_updateWallpaper)
            	
        std::string p(getenv("APPDATA"));
        p.append("\\Microsoft\\Windows\\Themes\\TranscodedWallpaper");

        SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (PVOID)p.c_str(), SPIF_UPDATEINIFILE);
    

HXDLIN( 158)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PlatformUtil_obj,updateWallpaper,return )


PlatformUtil_obj::PlatformUtil_obj()
{
}

bool PlatformUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"sendFakeMsgBox") ) { outValue = sendFakeMsgBox_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateWallpaper") ) { outValue = updateWallpaper_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getWindowsbackward") ) { outValue = getWindowsbackward_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getWindowsTransparent") ) { outValue = getWindowsTransparent_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"sendWindowsNotification") ) { outValue = sendWindowsNotification_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PlatformUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PlatformUtil_obj_sStaticStorageInfo = 0;
#endif

::hx::Class PlatformUtil_obj::__mClass;

static ::String PlatformUtil_obj_sStaticFields[] = {
	HX_("getWindowsTransparent",c5,3f,18,d0),
	HX_("sendWindowsNotification",a6,b1,ee,c7),
	HX_("sendFakeMsgBox",27,03,ab,a6),
	HX_("getWindowsbackward",70,15,ea,a0),
	HX_("updateWallpaper",f9,ee,cc,80),
	::String(null())
};

void PlatformUtil_obj::__register()
{
	PlatformUtil_obj _hx_dummy;
	PlatformUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.PlatformUtil",0f,2d,82,e0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PlatformUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PlatformUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< PlatformUtil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlatformUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlatformUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace backend
