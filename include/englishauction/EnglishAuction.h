// Generated by Haxe 4.1.1
#ifndef INCLUDED_englishauction_EnglishAuction
#define INCLUDED_englishauction_EnglishAuction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_16d41c6fc5b8bf5d
#define INCLUDED_16d41c6fc5b8bf5d
#include "maglev/MagLev.h"
#endif
HX_DECLARE_CLASS1(englishauction,EnglishAuction)

namespace englishauction{


class HXCPP_CLASS_ATTRIBUTES EnglishAuction_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EnglishAuction_obj OBJ_;
		EnglishAuction_obj();

	public:
		enum { _hx_ClassId = 0x55949a6e };

		void __construct( ::maglev::MagLev maglev);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="englishauction.EnglishAuction")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"englishauction.EnglishAuction"); }
		static ::hx::ObjectPtr< EnglishAuction_obj > __new( ::maglev::MagLev maglev);
		static ::hx::ObjectPtr< EnglishAuction_obj > __alloc(::hx::Ctx *_hx_ctx, ::maglev::MagLev maglev);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EnglishAuction_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EnglishAuction",13,0d,20,c5); }

		static void __boot();
		static  ::Dynamic __meta__;
		 ::maglev::MagLev maglev;
		void registerMyMethods();
		::Dynamic registerMyMethods_dyn();

};

} // end namespace englishauction

#endif /* INCLUDED_englishauction_EnglishAuction */ 
