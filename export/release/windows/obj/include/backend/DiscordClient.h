#ifndef INCLUDED_backend_DiscordClient
#define INCLUDED_backend_DiscordClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
HX_DECLARE_CLASS1(backend,DiscordClient)

namespace backend{


class HXCPP_CLASS_ATTRIBUTES DiscordClient_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DiscordClient_obj OBJ_;
		DiscordClient_obj();

	public:
		enum { _hx_ClassId = 0x1ba82363 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="backend.DiscordClient")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"backend.DiscordClient"); }
		static ::hx::ObjectPtr< DiscordClient_obj > __new();
		static ::hx::ObjectPtr< DiscordClient_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DiscordClient_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DiscordClient",f7,d0,c5,2b); }

		static void __boot();
		static bool isInitialized;
		static ::String _defaultID;
		static ::String clientID;
		static  ::Dynamic _options;
		static void check();
		static ::Dynamic check_dyn();

		static void start();
		static ::Dynamic start_dyn();

		static void shutdown();
		static ::Dynamic shutdown_dyn();

		static void onReady();
		static ::Dynamic onReady_dyn();

		static ::String set_clientID(::String newID);
		static ::Dynamic set_clientID_dyn();

		static void onError(int _code,::String _message);
		static ::Dynamic onError_dyn();

		static void onDisconnected(int _code,::String _message);
		static ::Dynamic onDisconnected_dyn();

		static void initialize();
		static ::Dynamic initialize_dyn();

		static void changePresence(::String details,::String state,::String smallImageKey, ::Dynamic hasStartTimestamp, ::Dynamic endTimestamp);
		static ::Dynamic changePresence_dyn();

		static void resetClientID();
		static ::Dynamic resetClientID_dyn();

		static void loadModRPC();
		static ::Dynamic loadModRPC_dyn();

		static void addLuaCallbacks( cpp::Reference<lua_State> lua);
		static ::Dynamic addLuaCallbacks_dyn();

};

} // end namespace backend

#endif /* INCLUDED_backend_DiscordClient */ 
