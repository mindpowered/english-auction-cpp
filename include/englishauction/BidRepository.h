// Generated by Haxe 4.1.1
#ifndef INCLUDED_englishauction_BidRepository
#define INCLUDED_englishauction_BidRepository

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_16d41c6fc5b8bf5d
#define INCLUDED_16d41c6fc5b8bf5d
#include "maglev/MagLev.h"
#endif
HX_DECLARE_CLASS1(englishauction,BidModel)
HX_DECLARE_CLASS1(englishauction,BidRepository)

namespace englishauction{


class HXCPP_CLASS_ATTRIBUTES BidRepository_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BidRepository_obj OBJ_;
		BidRepository_obj();

	public:
		enum { _hx_ClassId = 0x6217c154 };

		void __construct( ::maglev::MagLev bus);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="englishauction.BidRepository")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"englishauction.BidRepository"); }
		static ::hx::ObjectPtr< BidRepository_obj > __new( ::maglev::MagLev bus);
		static ::hx::ObjectPtr< BidRepository_obj > __alloc(::hx::Ctx *_hx_ctx, ::maglev::MagLev bus);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BidRepository_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BidRepository",87,3a,1e,e6); }

		 ::maglev::MagLev bus;
		void Add( ::englishauction::BidModel bid, ::Dynamic callback);
		::Dynamic Add_dyn();

		void Edit( ::englishauction::BidModel bid);
		::Dynamic Edit_dyn();

		void Remove(::String bidId);
		::Dynamic Remove_dyn();

		 ::englishauction::BidModel FindById(::String bidId);
		::Dynamic FindById_dyn();

		void GetNumberOfBids(::String auctionId, ::Dynamic callback);
		::Dynamic GetNumberOfBids_dyn();

		void GetHighestBids(::String auctionId,int numBids, ::Dynamic callback);
		::Dynamic GetHighestBids_dyn();

};

} // end namespace englishauction

#endif /* INCLUDED_englishauction_BidRepository */ 
