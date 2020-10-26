// Generated by Haxe 4.1.1
#ifndef INCLUDED_englishauction_AuctionRepository
#define INCLUDED_englishauction_AuctionRepository

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_16d41c6fc5b8bf5d
#define INCLUDED_16d41c6fc5b8bf5d
#include "maglev/MagLev.h"
#endif
HX_DECLARE_CLASS1(englishauction,AuctionModel)
HX_DECLARE_CLASS1(englishauction,AuctionRepository)

namespace englishauction{


class HXCPP_CLASS_ATTRIBUTES AuctionRepository_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AuctionRepository_obj OBJ_;
		AuctionRepository_obj();

	public:
		enum { _hx_ClassId = 0x5dbb38da };

		void __construct( ::maglev::MagLev bus);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="englishauction.AuctionRepository")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"englishauction.AuctionRepository"); }
		static ::hx::ObjectPtr< AuctionRepository_obj > __new( ::maglev::MagLev bus);
		static ::hx::ObjectPtr< AuctionRepository_obj > __alloc(::hx::Ctx *_hx_ctx, ::maglev::MagLev bus);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AuctionRepository_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AuctionRepository",8d,c7,61,36); }

		 ::maglev::MagLev bus;
		void Add( ::englishauction::AuctionModel auction);
		::Dynamic Add_dyn();

		void Edit( ::englishauction::AuctionModel auction);
		::Dynamic Edit_dyn();

		void Remove(::String auctionId);
		::Dynamic Remove_dyn();

		 ::englishauction::AuctionModel FindById(::String auctionId);
		::Dynamic FindById_dyn();

		::Array< ::Dynamic> FindAuctionsEnding(int endfrom,int endto,int page,int perpage,::String sort,bool asc);
		::Dynamic FindAuctionsEnding_dyn();

};

} // end namespace englishauction

#endif /* INCLUDED_englishauction_AuctionRepository */ 
