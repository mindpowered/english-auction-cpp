// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_16d41c6fc5b8bf5d
#define INCLUDED_16d41c6fc5b8bf5d
#include "maglev/MagLev.h"
#endif
#ifndef INCLUDED_869a921fcf5bba54
#define INCLUDED_869a921fcf5bba54
#include "maglev/MagLevAny.h"
#endif
#ifndef INCLUDED_20db69a30a45e926
#define INCLUDED_20db69a30a45e926
#include "maglev/MagLevArray.h"
#endif
#ifndef INCLUDED_d8a74f90a5c0b964
#define INCLUDED_d8a74f90a5c0b964
#include "maglev/MagLevError.h"
#endif
#ifndef INCLUDED_ba46386e6aba7150
#define INCLUDED_ba46386e6aba7150
#include "maglev/MagLevNull.h"
#endif
#ifndef INCLUDED_95fa5e9194badcf5
#define INCLUDED_95fa5e9194badcf5
#include "maglev/MagLevNumber.h"
#endif
#ifndef INCLUDED_f4da16f85a617f60
#define INCLUDED_f4da16f85a617f60
#include "maglev/MagLevObject.h"
#endif
#ifndef INCLUDED_65acb6100057af6e
#define INCLUDED_65acb6100057af6e
#include "maglev/MagLevResult.h"
#endif
#ifndef INCLUDED_c859d2752ef86c43
#define INCLUDED_c859d2752ef86c43
#include "maglev/MagLevString.h"
#endif
#ifndef INCLUDED_englishauction_BidModel
#include <englishauction/BidModel.h>
#endif
#ifndef INCLUDED_englishauction_BidRepository
#include <englishauction/BidRepository.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_15d4c0743c64d545_10_new,"englishauction.BidRepository","new",0x55a628de,"englishauction.BidRepository.new","englishauction/BidRepository.hx",10,0xf18aee53)
HX_LOCAL_STACK_FRAME(_hx_pos_15d4c0743c64d545_25_Add,"englishauction.BidRepository","Add",0x5584027f,"englishauction.BidRepository.Add","englishauction/BidRepository.hx",25,0xf18aee53)
HX_LOCAL_STACK_FRAME(_hx_pos_15d4c0743c64d545_30_Add,"englishauction.BidRepository","Add",0x5584027f,"englishauction.BidRepository.Add","englishauction/BidRepository.hx",30,0xf18aee53)
HX_LOCAL_STACK_FRAME(_hx_pos_15d4c0743c64d545_13_Add,"englishauction.BidRepository","Add",0x5584027f,"englishauction.BidRepository.Add","englishauction/BidRepository.hx",13,0xf18aee53)
HX_LOCAL_STACK_FRAME(_hx_pos_15d4c0743c64d545_34_Edit,"englishauction.BidRepository","Edit",0x80a30bec,"englishauction.BidRepository.Edit","englishauction/BidRepository.hx",34,0xf18aee53)
HX_LOCAL_STACK_FRAME(_hx_pos_15d4c0743c64d545_38_Remove,"englishauction.BidRepository","Remove",0x011a9aa6,"englishauction.BidRepository.Remove","englishauction/BidRepository.hx",38,0xf18aee53)
HX_LOCAL_STACK_FRAME(_hx_pos_15d4c0743c64d545_44_FindById,"englishauction.BidRepository","FindById",0x578ee14d,"englishauction.BidRepository.FindById","englishauction/BidRepository.hx",44,0xf18aee53)
HX_LOCAL_STACK_FRAME(_hx_pos_15d4c0743c64d545_56_GetNumberOfBids,"englishauction.BidRepository","GetNumberOfBids",0x6428848a,"englishauction.BidRepository.GetNumberOfBids","englishauction/BidRepository.hx",56,0xf18aee53)
HX_LOCAL_STACK_FRAME(_hx_pos_15d4c0743c64d545_61_GetNumberOfBids,"englishauction.BidRepository","GetNumberOfBids",0x6428848a,"englishauction.BidRepository.GetNumberOfBids","englishauction/BidRepository.hx",61,0xf18aee53)
HX_LOCAL_STACK_FRAME(_hx_pos_15d4c0743c64d545_47_GetNumberOfBids,"englishauction.BidRepository","GetNumberOfBids",0x6428848a,"englishauction.BidRepository.GetNumberOfBids","englishauction/BidRepository.hx",47,0xf18aee53)
HX_LOCAL_STACK_FRAME(_hx_pos_15d4c0743c64d545_75_GetHighestBids,"englishauction.BidRepository","GetHighestBids",0xf1bc98c6,"englishauction.BidRepository.GetHighestBids","englishauction/BidRepository.hx",75,0xf18aee53)
HX_LOCAL_STACK_FRAME(_hx_pos_15d4c0743c64d545_77_GetHighestBids,"englishauction.BidRepository","GetHighestBids",0xf1bc98c6,"englishauction.BidRepository.GetHighestBids","englishauction/BidRepository.hx",77,0xf18aee53)
HX_LOCAL_STACK_FRAME(_hx_pos_15d4c0743c64d545_65_GetHighestBids,"englishauction.BidRepository","GetHighestBids",0xf1bc98c6,"englishauction.BidRepository.GetHighestBids","englishauction/BidRepository.hx",65,0xf18aee53)
namespace englishauction{

void BidRepository_obj::__construct( ::maglev::MagLev bus){
            	HX_STACKFRAME(&_hx_pos_15d4c0743c64d545_10_new)
HXDLIN(  10)		this->bus = bus;
            	}

Dynamic BidRepository_obj::__CreateEmpty() { return new BidRepository_obj; }

void *BidRepository_obj::_hx_vtable = 0;

Dynamic BidRepository_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BidRepository_obj > _hx_result = new BidRepository_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BidRepository_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6217c154;
}

void BidRepository_obj::Add( ::englishauction::BidModel bid, ::Dynamic callback){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,callback) HXARGC(1)
            		 ::maglev::MagLevResult _hx_run( ::maglev::MagLevAny ret){
            			HX_STACKFRAME(&_hx_pos_15d4c0743c64d545_25_Add)
HXLINE(  26)			 ::Dynamic callback1 = callback;
HXDLIN(  26)			callback1(::hx::TCast<  ::maglev::MagLevString >::cast(ret)->getString());
HXLINE(  27)			return ::maglev::MagLevResult_obj::fromResult(::maglev::MagLevNull_obj::create());
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		 ::maglev::MagLevResult _hx_run( ::maglev::MagLevError err){
            			HX_STACKFRAME(&_hx_pos_15d4c0743c64d545_30_Add)
HXLINE(  30)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(err->getMessage()));
HXDLIN(  30)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_15d4c0743c64d545_13_Add)
HXLINE(  14)		 ::maglev::MagLevObject data = ::maglev::MagLevObject_obj::create();
HXLINE(  15)		data->set(HX_("auctionId",fe,08,7f,46),::maglev::MagLevString_obj::fromString(bid->auctionId));
HXLINE(  16)		data->set(HX_("userId",06,3b,ef,41),::maglev::MagLevString_obj::fromString(bid->userId));
HXLINE(  17)		data->set(HX_("price",89,4e,8b,c8),::maglev::MagLevNumber_obj::fromFloat(bid->price));
HXLINE(  18)		 ::maglev::MagLevArray args = ::maglev::MagLevArray_obj::create();
HXLINE(  19)		args->push(::maglev::MagLevString_obj::fromString(HX_("EnglishAuction.Bid",c2,d3,e1,19)));
HXLINE(  20)		args->push(::maglev::MagLevString_obj::fromString(HX_("New",40,88,3b,00)));
HXLINE(  21)		 ::maglev::MagLevArray arr = ::maglev::MagLevArray_obj::create();
HXLINE(  22)		arr->push(data);
HXLINE(  23)		args->push(arr);
HXLINE(  24)		 ::maglev::MagLevResult res = this->bus->call(HX_("Persistence.Mutate",f5,04,66,8c),args);
HXLINE(  25)		res->onResult( ::Dynamic(new _hx_Closure_0(callback)));
HXLINE(  29)		res->onError( ::Dynamic(new _hx_Closure_1()));
            	}


HX_DEFINE_DYNAMIC_FUNC2(BidRepository_obj,Add,(void))

void BidRepository_obj::Edit( ::englishauction::BidModel bid){
            	HX_STACKFRAME(&_hx_pos_15d4c0743c64d545_34_Edit)
            	}


HX_DEFINE_DYNAMIC_FUNC1(BidRepository_obj,Edit,(void))

void BidRepository_obj::Remove(::String bidId){
            	HX_STACKFRAME(&_hx_pos_15d4c0743c64d545_38_Remove)
            	}


HX_DEFINE_DYNAMIC_FUNC1(BidRepository_obj,Remove,(void))

 ::englishauction::BidModel BidRepository_obj::FindById(::String bidId){
            	HX_STACKFRAME(&_hx_pos_15d4c0743c64d545_44_FindById)
HXDLIN(  44)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BidRepository_obj,FindById,return )

void BidRepository_obj::GetNumberOfBids(::String auctionId, ::Dynamic callback){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,callback) HXARGC(1)
            		 ::maglev::MagLevResult _hx_run( ::maglev::MagLevAny result){
            			HX_STACKFRAME(&_hx_pos_15d4c0743c64d545_56_GetNumberOfBids)
HXLINE(  57)			 ::Dynamic callback1 = callback;
HXDLIN(  57)			callback1(::hx::TCast<  ::maglev::MagLevNumber >::cast(result)->getInt());
HXLINE(  58)			return ::maglev::MagLevResult_obj::fromResult(::maglev::MagLevNull_obj::create());
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		 ::maglev::MagLevResult _hx_run( ::maglev::MagLevError error){
            			HX_STACKFRAME(&_hx_pos_15d4c0743c64d545_61_GetNumberOfBids)
HXLINE(  61)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(error->getMessage()));
HXDLIN(  61)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_15d4c0743c64d545_47_GetNumberOfBids)
HXLINE(  48)		 ::maglev::MagLevArray pargs = ::maglev::MagLevArray_obj::create();
HXLINE(  49)		pargs->push(::maglev::MagLevString_obj::fromString(HX_("EnglishAuction.Bid",c2,d3,e1,19)));
HXLINE(  50)		pargs->push(::maglev::MagLevString_obj::fromString(HX_("CountForAuction",c9,bf,e1,14)));
HXLINE(  51)		 ::maglev::MagLevArray parr = ::maglev::MagLevArray_obj::create();
HXLINE(  52)		parr->push(::maglev::MagLevString_obj::fromString(auctionId));
HXLINE(  53)		pargs->push(parr);
HXLINE(  54)		 ::maglev::MagLevResult ret = this->bus->call(HX_("Persistence.Get",c7,c3,56,12),pargs);
HXLINE(  55)		int count = 0;
HXLINE(  56)		ret->onResult( ::Dynamic(new _hx_Closure_0(callback)));
HXLINE(  60)		ret->onError( ::Dynamic(new _hx_Closure_1()));
            	}


HX_DEFINE_DYNAMIC_FUNC2(BidRepository_obj,GetNumberOfBids,(void))

void BidRepository_obj::GetHighestBids(::String auctionId,int numBids, ::Dynamic callback){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::maglev::MagLevResult _hx_run( ::maglev::MagLevError error){
            			HX_STACKFRAME(&_hx_pos_15d4c0743c64d545_75_GetHighestBids)
HXLINE(  75)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(error->getMessage()));
HXDLIN(  75)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,::String,auctionId, ::Dynamic,callback) HXARGC(1)
            		 ::maglev::MagLevResult _hx_run( ::maglev::MagLevAny onres){
            			HX_GC_STACKFRAME(&_hx_pos_15d4c0743c64d545_77_GetHighestBids)
HXLINE(  78)			 ::maglev::MagLevArray arr = ::hx::TCast<  ::maglev::MagLevArray >::cast(onres);
HXLINE(  79)			::Array< ::Dynamic> bids = ::Array_obj< ::Dynamic>::__new();
HXLINE(  80)			int i = 0;
HXLINE(  81)			while((i < arr->size())){
HXLINE(  82)				 ::englishauction::BidModel model =  ::englishauction::BidModel_obj::__alloc( HX_CTX );
HXLINE(  83)				 ::maglev::MagLevObject resobj = ::hx::TCast<  ::maglev::MagLevObject >::cast(arr->get(i));
HXLINE(  84)				model->id = ::hx::TCast<  ::maglev::MagLevString >::cast(resobj->get(HX_("bidId",f8,61,f8,b2)))->getString();
HXLINE(  85)				if (resobj->exists(HX_("auctionId",fe,08,7f,46))) {
HXLINE(  86)					model->auctionId = ::hx::TCast<  ::maglev::MagLevString >::cast(resobj->get(HX_("auctionId",fe,08,7f,46)))->getString();
            				}
            				else {
HXLINE(  88)					model->auctionId = auctionId;
            				}
HXLINE(  90)				model->userId = ::hx::TCast<  ::maglev::MagLevString >::cast(resobj->get(HX_("userId",06,3b,ef,41)))->getString();
HXLINE(  91)				model->price = ::hx::TCast<  ::maglev::MagLevNumber >::cast(resobj->get(HX_("price",89,4e,8b,c8)))->getFloat();
HXLINE(  92)				bids->push(model);
HXLINE(  93)				i = (i + 1);
            			}
HXLINE(  95)			callback(bids);
HXLINE(  96)			return ::maglev::MagLevResult_obj::fromResult(::maglev::MagLevNull_obj::create());
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_15d4c0743c64d545_65_GetHighestBids)
HXLINE(  66)		 ::maglev::MagLevArray myargs = ::maglev::MagLevArray_obj::create();
HXLINE(  67)		myargs->push(::maglev::MagLevString_obj::fromString(auctionId));
HXLINE(  68)		myargs->push(::maglev::MagLevNumber_obj::fromInt(numBids));
HXLINE(  69)		 ::maglev::MagLevArray myargs2 = ::maglev::MagLevArray_obj::create();
HXLINE(  70)		myargs2->push(::maglev::MagLevString_obj::fromString(HX_("EnglishAuction.Bid",c2,d3,e1,19)));
HXLINE(  71)		myargs2->push(::maglev::MagLevString_obj::fromString(HX_("FindByHighestPriceForAuction",0f,c3,2f,00)));
HXLINE(  72)		myargs2->push(myargs);
HXLINE(  73)		 ::maglev::MagLevResult res = this->bus->call(HX_("Persistence.Get",c7,c3,56,12),myargs2);
HXLINE(  74)		res->onError( ::Dynamic(new _hx_Closure_0()));
HXLINE(  77)		res->onResult( ::Dynamic(new _hx_Closure_1(auctionId,callback)));
            	}


HX_DEFINE_DYNAMIC_FUNC3(BidRepository_obj,GetHighestBids,(void))


::hx::ObjectPtr< BidRepository_obj > BidRepository_obj::__new( ::maglev::MagLev bus) {
	::hx::ObjectPtr< BidRepository_obj > __this = new BidRepository_obj();
	__this->__construct(bus);
	return __this;
}

::hx::ObjectPtr< BidRepository_obj > BidRepository_obj::__alloc(::hx::Ctx *_hx_ctx, ::maglev::MagLev bus) {
	BidRepository_obj *__this = (BidRepository_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BidRepository_obj), true, "englishauction.BidRepository"));
	*(void **)__this = BidRepository_obj::_hx_vtable;
	__this->__construct(bus);
	return __this;
}

BidRepository_obj::BidRepository_obj()
{
}

void BidRepository_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BidRepository);
	HX_MARK_MEMBER_NAME(bus,"bus");
	HX_MARK_END_CLASS();
}

void BidRepository_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bus,"bus");
}

::hx::Val BidRepository_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bus") ) { return ::hx::Val( bus ); }
		if (HX_FIELD_EQ(inName,"Add") ) { return ::hx::Val( Add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"Edit") ) { return ::hx::Val( Edit_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Remove") ) { return ::hx::Val( Remove_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"FindById") ) { return ::hx::Val( FindById_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"GetHighestBids") ) { return ::hx::Val( GetHighestBids_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"GetNumberOfBids") ) { return ::hx::Val( GetNumberOfBids_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BidRepository_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bus") ) { bus=inValue.Cast<  ::maglev::MagLev >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BidRepository_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bus",40,c3,4a,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BidRepository_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /*  ::maglev::MagLev */ ,(int)offsetof(BidRepository_obj,bus),HX_("bus",40,c3,4a,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BidRepository_obj_sStaticStorageInfo = 0;
#endif

static ::String BidRepository_obj_sMemberFields[] = {
	HX_("bus",40,c3,4a,00),
	HX_("Add",01,aa,31,00),
	HX_("Edit",2a,f6,e7,2d),
	HX_("Remove",64,10,1d,39),
	HX_("FindById",8b,c2,68,6d),
	HX_("GetNumberOfBids",0c,67,f4,db),
	HX_("GetHighestBids",84,fc,e7,df),
	::String(null()) };

::hx::Class BidRepository_obj::__mClass;

void BidRepository_obj::__register()
{
	BidRepository_obj _hx_dummy;
	BidRepository_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("englishauction.BidRepository",ec,21,b5,1c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BidRepository_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BidRepository_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BidRepository_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BidRepository_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace englishauction
