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
#ifndef INCLUDED_35ec03520fbb0747
#define INCLUDED_35ec03520fbb0747
#include "maglev/MagLevBoolean.h"
#endif
#ifndef INCLUDED_d8a74f90a5c0b964
#define INCLUDED_d8a74f90a5c0b964
#include "maglev/MagLevError.h"
#endif
#ifndef INCLUDED_7f9204b932c8d809
#define INCLUDED_7f9204b932c8d809
#include "maglev/MagLevFunction.h"
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
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_englishauction_EnglishAuction
#include <englishauction/EnglishAuction.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f704f8914f7b4676_14_new,"englishauction.EnglishAuction","new",0x16125e00,"englishauction.EnglishAuction.new","englishauction/EnglishAuction.hx",14,0xd6cb504f)
HX_LOCAL_STACK_FRAME(_hx_pos_f704f8914f7b4676_21_registerMyMethods,"englishauction.EnglishAuction","registerMyMethods",0xd389d723,"englishauction.EnglishAuction.registerMyMethods","englishauction/EnglishAuction.hx",21,0xd6cb504f)
HX_LOCAL_STACK_FRAME(_hx_pos_f704f8914f7b4676_27_registerMyMethods,"englishauction.EnglishAuction","registerMyMethods",0xd389d723,"englishauction.EnglishAuction.registerMyMethods","englishauction/EnglishAuction.hx",27,0xd6cb504f)
HX_LOCAL_STACK_FRAME(_hx_pos_f704f8914f7b4676_40_registerMyMethods,"englishauction.EnglishAuction","registerMyMethods",0xd389d723,"englishauction.EnglishAuction.registerMyMethods","englishauction/EnglishAuction.hx",40,0xd6cb504f)
HX_LOCAL_STACK_FRAME(_hx_pos_f704f8914f7b4676_53_registerMyMethods,"englishauction.EnglishAuction","registerMyMethods",0xd389d723,"englishauction.EnglishAuction.registerMyMethods","englishauction/EnglishAuction.hx",53,0xd6cb504f)
HX_LOCAL_STACK_FRAME(_hx_pos_f704f8914f7b4676_81_registerMyMethods,"englishauction.EnglishAuction","registerMyMethods",0xd389d723,"englishauction.EnglishAuction.registerMyMethods","englishauction/EnglishAuction.hx",81,0xd6cb504f)
HX_LOCAL_STACK_FRAME(_hx_pos_f704f8914f7b4676_96_registerMyMethods,"englishauction.EnglishAuction","registerMyMethods",0xd389d723,"englishauction.EnglishAuction.registerMyMethods","englishauction/EnglishAuction.hx",96,0xd6cb504f)
HX_LOCAL_STACK_FRAME(_hx_pos_f704f8914f7b4676_19_registerMyMethods,"englishauction.EnglishAuction","registerMyMethods",0xd389d723,"englishauction.EnglishAuction.registerMyMethods","englishauction/EnglishAuction.hx",19,0xd6cb504f)
HX_LOCAL_STACK_FRAME(_hx_pos_f704f8914f7b4676_172_convertToHaxe,"englishauction.EnglishAuction","convertToHaxe",0xb16f5f34,"englishauction.EnglishAuction.convertToHaxe","englishauction/EnglishAuction.hx",172,0xd6cb504f)
HX_LOCAL_STACK_FRAME(_hx_pos_f704f8914f7b4676_213_convertToMagLev,"englishauction.EnglishAuction","convertToMagLev",0x67e62198,"englishauction.EnglishAuction.convertToMagLev","englishauction/EnglishAuction.hx",213,0xd6cb504f)
HX_LOCAL_STACK_FRAME(_hx_pos_f704f8914f7b4676_11_boot,"englishauction.EnglishAuction","boot",0x3218e292,"englishauction.EnglishAuction.boot","englishauction/EnglishAuction.hx",11,0xd6cb504f)
namespace englishauction{

void EnglishAuction_obj::__construct( ::maglev::MagLev maglev){
            	HX_STACKFRAME(&_hx_pos_f704f8914f7b4676_14_new)
HXLINE(  15)		this->maglev = maglev;
HXLINE(  16)		this->registerMyMethods();
            	}

Dynamic EnglishAuction_obj::__CreateEmpty() { return new EnglishAuction_obj; }

void *EnglishAuction_obj::_hx_vtable = 0;

Dynamic EnglishAuction_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EnglishAuction_obj > _hx_result = new EnglishAuction_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool EnglishAuction_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x55949a6e;
}

void EnglishAuction_obj::registerMyMethods(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::maglev::MagLevResult _hx_run( ::maglev::MagLevArray args){
            			HX_STACKFRAME(&_hx_pos_f704f8914f7b4676_21_registerMyMethods)
HXLINE(  24)			::String ret = HX_("still_id_here",bd,60,85,54);
HXLINE(  25)			return ::maglev::MagLevResult_obj::fromResult(::maglev::MagLevString_obj::fromString(ret));
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::englishauction::EnglishAuction,_gthis, ::maglev::MagLev,bus) HXARGC(1)
            		 ::maglev::MagLevResult _hx_run( ::maglev::MagLevArray args){
            			HX_STACKFRAME(&_hx_pos_f704f8914f7b4676_27_registerMyMethods)
HXLINE(  28)			::String id = ::hx::TCast<  ::maglev::MagLevString >::cast(args->get(0))->getString();
HXLINE(  29)			::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(3)->init(0,HX_("EnglishAuction.Auction",c8,f3,cc,ba))->init(1,HX_("FindById",8b,c2,68,6d))->init(2,::cpp::VirtualArray_obj::__new(1)->init(0,id));
HXLINE(  30)			 ::englishauction::EnglishAuction _gthis1 = _gthis;
HXDLIN(  30)			 ::maglev::MagLev bus1 = bus;
HXDLIN(  30)			 ::haxe::ds::StringMap auction = ( ( ::haxe::ds::StringMap)(_gthis1->convertToHaxe(bus1->call(HX_("Persistence.Get",c7,c3,56,12),::hx::TCast<  ::maglev::MagLevArray >::cast(_gthis->convertToMagLev(arr)))->getResult())) );
HXLINE(  31)			Float start = ( (Float)(0) );
HXLINE(  32)			if (::Std_obj::isOfType(auction->get(HX_("start",62,74,0b,84)),( ( ::Dynamic)(::hx::ClassOf< ::String >()) ))) {
HXLINE(  33)				start = ::Date_obj::fromString(( (::String)(auction->get(HX_("start",62,74,0b,84))) ))->getTime();
            			}
            			else {
HXLINE(  35)				start = ( (Float)(auction->get(HX_("start",62,74,0b,84))) );
            			}
HXLINE(  37)			Float result = start;
HXLINE(  38)			return ::maglev::MagLevResult_obj::fromResult(::maglev::MagLevNumber_obj::fromFloat(result));
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2, ::englishauction::EnglishAuction,_gthis, ::maglev::MagLev,bus) HXARGC(1)
            		 ::maglev::MagLevResult _hx_run( ::maglev::MagLevArray args){
            			HX_STACKFRAME(&_hx_pos_f704f8914f7b4676_40_registerMyMethods)
HXLINE(  41)			::String id = ::hx::TCast<  ::maglev::MagLevString >::cast(args->get(0))->getString();
HXLINE(  42)			::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(3)->init(0,HX_("EnglishAuction.Auction",c8,f3,cc,ba))->init(1,HX_("FindById",8b,c2,68,6d))->init(2,::cpp::VirtualArray_obj::__new(1)->init(0,id));
HXLINE(  43)			 ::englishauction::EnglishAuction _gthis1 = _gthis;
HXDLIN(  43)			 ::maglev::MagLev bus1 = bus;
HXDLIN(  43)			 ::haxe::ds::StringMap auction = ( ( ::haxe::ds::StringMap)(_gthis1->convertToHaxe(bus1->call(HX_("Persistence.Get",c7,c3,56,12),::hx::TCast<  ::maglev::MagLevArray >::cast(_gthis->convertToMagLev(arr)))->getResult())) );
HXLINE(  44)			Float end = ( (Float)(0) );
HXLINE(  45)			if (::Std_obj::isOfType(auction->get(HX_("end",db,03,4d,00)),( ( ::Dynamic)(::hx::ClassOf< ::String >()) ))) {
HXLINE(  46)				end = ::Date_obj::fromString(( (::String)(auction->get(HX_("end",db,03,4d,00))) ))->getTime();
            			}
            			else {
HXLINE(  48)				end = ( (Float)(auction->get(HX_("end",db,03,4d,00))) );
            			}
HXLINE(  50)			Float result = end;
HXLINE(  51)			return ::maglev::MagLevResult_obj::fromResult(::maglev::MagLevNumber_obj::fromFloat(result));
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_3, ::englishauction::EnglishAuction,_gthis, ::maglev::MagLev,bus) HXARGC(1)
            		 ::maglev::MagLevResult _hx_run( ::maglev::MagLevArray args){
            			HX_STACKFRAME(&_hx_pos_f704f8914f7b4676_53_registerMyMethods)
HXLINE(  54)			::String id = ::hx::TCast<  ::maglev::MagLevString >::cast(args->get(0))->getString();
HXLINE(  55)			::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(3)->init(0,HX_("EnglishAuction.Auction",c8,f3,cc,ba))->init(1,HX_("FindById",8b,c2,68,6d))->init(2,::cpp::VirtualArray_obj::__new(1)->init(0,id));
HXLINE(  56)			 ::englishauction::EnglishAuction _gthis1 = _gthis;
HXDLIN(  56)			 ::maglev::MagLev bus1 = bus;
HXDLIN(  56)			 ::haxe::ds::StringMap auction = ( ( ::haxe::ds::StringMap)(_gthis1->convertToHaxe(bus1->call(HX_("Persistence.Get",c7,c3,56,12),::hx::TCast<  ::maglev::MagLevArray >::cast(_gthis->convertToMagLev(arr)))->getResult())) );
HXLINE(  57)			Float start = ( (Float)(0) );
HXLINE(  58)			if (::Std_obj::isOfType(auction->get(HX_("start",62,74,0b,84)),( ( ::Dynamic)(::hx::ClassOf< ::String >()) ))) {
HXLINE(  59)				start = ::Date_obj::fromString(( (::String)(auction->get(HX_("start",62,74,0b,84))) ))->getTime();
            			}
            			else {
HXLINE(  61)				start = ( (Float)(auction->get(HX_("start",62,74,0b,84))) );
            			}
HXLINE(  63)			Float now = ::Date_obj::now()->getTime();
HXLINE(  64)			bool result = (start <= now);
HXLINE(  65)			return ::maglev::MagLevResult_obj::fromResult(::maglev::MagLevBoolean_obj::fromBool(result));
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_4, ::maglev::MagLev,bus) HXARGC(1)
            		 ::maglev::MagLevResult _hx_run( ::maglev::MagLevArray args){
            			HX_STACKFRAME(&_hx_pos_f704f8914f7b4676_81_registerMyMethods)
HXLINE(  82)			 ::maglev::MagLevString auctionId = ::hx::TCast<  ::maglev::MagLevString >::cast(args->get(0));
HXLINE(  83)			 ::maglev::MagLevString userId = ::hx::TCast<  ::maglev::MagLevString >::cast(args->get(1));
HXLINE(  84)			 ::maglev::MagLevNumber price = ::hx::TCast<  ::maglev::MagLevNumber >::cast(args->get(2));
HXLINE(  85)			 ::maglev::MagLevObject data = ::maglev::MagLevObject_obj::create();
HXLINE(  86)			data->set(HX_("auctionId",fe,08,7f,46),auctionId);
HXLINE(  87)			data->set(HX_("userId",06,3b,ef,41),userId);
HXLINE(  88)			data->set(HX_("price",89,4e,8b,c8),price);
HXLINE(  89)			 ::maglev::MagLevArray args1 = ::maglev::MagLevArray_obj::create();
HXLINE(  90)			args1->push(::maglev::MagLevString_obj::fromString(HX_("EnglishAuction.Bid",c2,d3,e1,19)));
HXLINE(  91)			args1->push(::maglev::MagLevString_obj::fromString(HX_("New",40,88,3b,00)));
HXLINE(  92)			args1->push(data);
HXLINE(  93)			bus->call(HX_("Persistence.Mutate",f5,04,66,8c),args1);
HXLINE(  94)			return ::maglev::MagLevResult_obj::fromResult(::maglev::MagLevBoolean_obj::fromBool(true));
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_5, ::maglev::MagLev,bus) HXARGC(1)
            		 ::maglev::MagLevResult _hx_run( ::maglev::MagLevArray args){
            			HX_STACKFRAME(&_hx_pos_f704f8914f7b4676_96_registerMyMethods)
HXLINE(  97)			 ::maglev::MagLevString auctionId = ::hx::TCast<  ::maglev::MagLevString >::cast(args->get(0));
HXLINE(  98)			 ::maglev::MagLevArray myargs = ::maglev::MagLevArray_obj::create();
HXLINE(  99)			myargs->push(auctionId);
HXLINE( 100)			myargs->push(::maglev::MagLevNumber_obj::fromInt(1));
HXLINE( 101)			 ::maglev::MagLevArray myargs2 = ::maglev::MagLevArray_obj::create();
HXLINE( 102)			myargs2->push(::maglev::MagLevString_obj::fromString(HX_("EnglishAuction.Bid",c2,d3,e1,19)));
HXLINE( 103)			myargs2->push(::maglev::MagLevString_obj::fromString(HX_("FindByHighestPriceForAuction",0f,c3,2f,00)));
HXLINE( 104)			myargs2->push(myargs);
HXLINE( 105)			 ::maglev::MagLevResult ret = bus->call(HX_("Persistence.Get",c7,c3,56,12),myargs2);
HXLINE( 106)			if (ret->isError()) {
HXLINE( 106)				return ret;
            			}
HXLINE( 107)			 ::maglev::MagLevAny res = ret->getResult();
HXLINE( 109)			if (::Std_obj::isOfType(res,( ( ::Dynamic)(::hx::ClassOf< ::maglev::MagLevArray >()) ))) {
HXLINE( 110)				 ::maglev::MagLevArray resarr = ::hx::TCast<  ::maglev::MagLevArray >::cast(res);
HXLINE( 111)				if ((resarr->size() > 0)) {
HXLINE( 112)					 ::maglev::MagLevObject row = ( ( ::maglev::MagLevObject)(resarr->get(0)) );
HXLINE( 113)					 ::maglev::MagLevObject row2 = ::maglev::MagLevObject_obj::create();
HXLINE( 114)					row2->set(HX_("userId",06,3b,ef,41),row->get(HX_("userId",06,3b,ef,41)));
HXLINE( 115)					row2->set(HX_("price",89,4e,8b,c8),row->get(HX_("price",89,4e,8b,c8)));
HXLINE( 116)					return ::maglev::MagLevResult_obj::fromResult(row2);
            				}
            				else {
HXLINE( 118)					return ::maglev::MagLevResult_obj::fromResult(::maglev::MagLevNull_obj::create());
            				}
            			}
            			else {
HXLINE( 122)				 ::maglev::MagLevError error = ::maglev::MagLevError_obj::create(0,HX_("persistence getter did not return array",4b,24,e2,1e),::maglev::MagLevNull_obj::create());
HXLINE( 123)				return ::maglev::MagLevResult_obj::fromError(error);
            			}
HXLINE( 109)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_f704f8914f7b4676_19_registerMyMethods)
HXDLIN(  19)		 ::englishauction::EnglishAuction _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  20)		 ::maglev::MagLev bus = this->maglev;
HXLINE(  21)		 ::maglev::MagLev _hx_tmp = this->maglev;
HXDLIN(  21)		_hx_tmp->_hx_register(HX_("EnglishAuction.Create",17,3d,e9,16),::maglev::MagLevFunction_obj::fromFunction( ::Dynamic(new _hx_Closure_0())));
HXLINE(  27)		 ::maglev::MagLev _hx_tmp1 = this->maglev;
HXDLIN(  27)		_hx_tmp1->_hx_register(HX_("EnglishAuction.GetStart",c7,56,72,49),::maglev::MagLevFunction_obj::fromFunction( ::Dynamic(new _hx_Closure_1(_gthis,bus))));
HXLINE(  40)		 ::maglev::MagLev _hx_tmp2 = this->maglev;
HXDLIN(  40)		_hx_tmp2->_hx_register(HX_("EnglishAuction.GetEnd",00,13,f6,3d),::maglev::MagLevFunction_obj::fromFunction( ::Dynamic(new _hx_Closure_2(_gthis,bus))));
HXLINE(  53)		 ::maglev::MagLev _hx_tmp3 = this->maglev;
HXDLIN(  53)		_hx_tmp3->_hx_register(HX_("EnglishAuction.HasStarted",a2,90,1d,87),::maglev::MagLevFunction_obj::fromFunction( ::Dynamic(new _hx_Closure_3(_gthis,bus))));
HXLINE(  81)		 ::maglev::MagLev _hx_tmp4 = this->maglev;
HXDLIN(  81)		_hx_tmp4->_hx_register(HX_("EnglishAuction.Bid",c2,d3,e1,19),::maglev::MagLevFunction_obj::fromFunction( ::Dynamic(new _hx_Closure_4(bus))));
HXLINE(  96)		 ::maglev::MagLev _hx_tmp5 = this->maglev;
HXDLIN(  96)		_hx_tmp5->_hx_register(HX_("EnglishAuction.GetHighestBidder",dd,e5,73,16),::maglev::MagLevFunction_obj::fromFunction( ::Dynamic(new _hx_Closure_5(bus))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(EnglishAuction_obj,registerMyMethods,(void))

 ::Dynamic EnglishAuction_obj::convertToHaxe( ::maglev::MagLevAny x){
            	HX_GC_STACKFRAME(&_hx_pos_f704f8914f7b4676_172_convertToHaxe)
HXDLIN( 172)		int _hx_tmp = x->getType();
HXDLIN( 172)		if ((_hx_tmp == ::maglev::MagLevNull_obj::getStaticType())) {
HXLINE( 173)			return null();
            		}
            		else {
HXLINE( 175)			int _hx_tmp = x->getType();
HXDLIN( 175)			if ((_hx_tmp == ::maglev::MagLevBoolean_obj::getStaticType())) {
HXLINE( 176)				 ::maglev::MagLevBoolean y = ::hx::TCast<  ::maglev::MagLevBoolean >::cast(x);
HXLINE( 177)				return y->getBool();
            			}
            			else {
HXLINE( 179)				int _hx_tmp = x->getType();
HXDLIN( 179)				if ((_hx_tmp == ::maglev::MagLevString_obj::getStaticType())) {
HXLINE( 180)					 ::maglev::MagLevString y = ::hx::TCast<  ::maglev::MagLevString >::cast(x);
HXLINE( 181)					return y->getString();
            				}
            				else {
HXLINE( 183)					int _hx_tmp = x->getType();
HXDLIN( 183)					if ((_hx_tmp == ::maglev::MagLevNumber_obj::getStaticType())) {
HXLINE( 184)						 ::maglev::MagLevNumber y = ::hx::TCast<  ::maglev::MagLevNumber >::cast(x);
HXLINE( 185)						return y->getFloat();
            					}
            					else {
HXLINE( 187)						int _hx_tmp = x->getType();
HXDLIN( 187)						if ((_hx_tmp == ::maglev::MagLevArray_obj::getStaticType())) {
HXLINE( 188)							 ::maglev::MagLevArray y = ::hx::TCast<  ::maglev::MagLevArray >::cast(x);
HXLINE( 189)							::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new();
HXLINE( 190)							int i = 0;
HXLINE( 191)							while((i < y->size())){
HXLINE( 192)								arr->push(y->get(i));
            							}
HXLINE( 194)							return arr;
            						}
            						else {
HXLINE( 196)							int _hx_tmp = x->getType();
HXDLIN( 196)							if ((_hx_tmp == ::maglev::MagLevObject_obj::getStaticType())) {
HXLINE( 197)								 ::maglev::MagLevObject y = ::hx::TCast<  ::maglev::MagLevObject >::cast(x);
HXLINE( 198)								 ::haxe::ds::StringMap map =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 199)								 ::maglev::MagLevArray keys = y->keys();
HXLINE( 200)								int i = 0;
HXLINE( 201)								while((i < keys->size())){
HXLINE( 202)									::String key = ::hx::TCast<  ::maglev::MagLevString >::cast(keys->get(i))->getString();
HXLINE( 203)									map->set(key,y->get(key));
            								}
HXLINE( 205)								return map;
            							}
            							else {
HXLINE( 208)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("convertToHaxe: unknown type",4a,83,07,f2)));
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 172)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(EnglishAuction_obj,convertToHaxe,return )

 ::maglev::MagLevAny EnglishAuction_obj::convertToMagLev( ::Dynamic x){
            	HX_STACKFRAME(&_hx_pos_f704f8914f7b4676_213_convertToMagLev)
HXDLIN( 213)		if (::hx::IsNull( x )) {
HXLINE( 214)			return ::maglev::MagLevNull_obj::create();
            		}
            		else {
HXLINE( 216)			if (::Std_obj::isOfType(x,( ( ::Dynamic)(::hx::ClassOf< bool >()) ))) {
HXLINE( 217)				return ::maglev::MagLevBoolean_obj::fromBool(::hx::TCast< bool >::cast(x));
            			}
            			else {
HXLINE( 219)				if (::Std_obj::isOfType(x,( ( ::Dynamic)(::hx::ClassOf< ::String >()) ))) {
HXLINE( 220)					return ::maglev::MagLevString_obj::fromString(::hx::TCast< ::String >::cast(x));
            				}
            				else {
HXLINE( 222)					if (::Std_obj::isOfType(x,( ( ::Dynamic)(::hx::ClassOf< int >()) ))) {
HXLINE( 223)						return ::maglev::MagLevNumber_obj::fromInt(::hx::TCast< int >::cast(x));
            					}
            					else {
HXLINE( 225)						if (::Std_obj::isOfType(x,( ( ::Dynamic)(::hx::ClassOf< ::Float >()) ))) {
HXLINE( 226)							return ::maglev::MagLevNumber_obj::fromFloat(( (Float)(x) ));
            						}
            						else {
HXLINE( 228)							if (::Std_obj::isOfType(x,( ( ::Dynamic)(::hx::ArrayBase::__mClass) ))) {
HXLINE( 229)								 ::maglev::MagLevArray arr = ::maglev::MagLevArray_obj::create();
HXLINE( 230)								::cpp::VirtualArray y = ( (::cpp::VirtualArray)(x) );
HXLINE( 231)								{
HXLINE( 231)									int _g = 0;
HXDLIN( 231)									while((_g < y->get_length())){
HXLINE( 231)										 ::Dynamic item = y->__get(_g);
HXDLIN( 231)										_g = (_g + 1);
HXLINE( 232)										arr->push(this->convertToMagLev(item));
            									}
            								}
HXLINE( 234)								return arr;
            							}
            							else {
HXLINE( 236)								if (::Std_obj::isOfType(x,( ( ::Dynamic)(::hx::ClassOf< ::haxe::ds::StringMap >()) ))) {
HXLINE( 237)									 ::haxe::ds::StringMap map = ( ( ::haxe::ds::StringMap)(x) );
HXLINE( 238)									 ::maglev::MagLevObject obj = ::maglev::MagLevObject_obj::create();
HXLINE( 239)									{
HXLINE( 239)										 ::Dynamic key = map->keys();
HXDLIN( 239)										while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 239)											::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 240)											obj->set(key1,this->convertToMagLev(map->get(key1)));
            										}
            									}
HXLINE( 242)									return obj;
            								}
            								else {
HXLINE( 244)									if (::Reflect_obj::isObject(x)) {
HXLINE( 245)										 ::maglev::MagLevObject obj = ::maglev::MagLevObject_obj::create();
HXLINE( 246)										{
HXLINE( 246)											int _g = 0;
HXDLIN( 246)											::Array< ::String > _g1 = ::Reflect_obj::fields(x);
HXDLIN( 246)											while((_g < _g1->length)){
HXLINE( 246)												::String field = _g1->__get(_g);
HXDLIN( 246)												_g = (_g + 1);
HXLINE( 247)												 ::Dynamic val = ::Reflect_obj::getProperty(x,field);
HXLINE( 248)												obj->set(field,this->convertToMagLev(val));
            											}
            										}
HXLINE( 250)										return obj;
            									}
            									else {
HXLINE( 252)										if (::Reflect_obj::isFunction(x)) {
HXLINE( 253)											 ::Dynamic f = x;
HXLINE( 254)											return ::maglev::MagLevFunction_obj::fromFunction(f);
            										}
            										else {
HXLINE( 257)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("convertToMagLev: unknown type",ae,84,a9,64)));
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 213)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(EnglishAuction_obj,convertToMagLev,return )


::hx::ObjectPtr< EnglishAuction_obj > EnglishAuction_obj::__new( ::maglev::MagLev maglev) {
	::hx::ObjectPtr< EnglishAuction_obj > __this = new EnglishAuction_obj();
	__this->__construct(maglev);
	return __this;
}

::hx::ObjectPtr< EnglishAuction_obj > EnglishAuction_obj::__alloc(::hx::Ctx *_hx_ctx, ::maglev::MagLev maglev) {
	EnglishAuction_obj *__this = (EnglishAuction_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EnglishAuction_obj), true, "englishauction.EnglishAuction"));
	*(void **)__this = EnglishAuction_obj::_hx_vtable;
	__this->__construct(maglev);
	return __this;
}

EnglishAuction_obj::EnglishAuction_obj()
{
}

void EnglishAuction_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EnglishAuction);
	HX_MARK_MEMBER_NAME(maglev,"maglev");
	HX_MARK_END_CLASS();
}

void EnglishAuction_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(maglev,"maglev");
}

::hx::Val EnglishAuction_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"maglev") ) { return ::hx::Val( maglev ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"convertToHaxe") ) { return ::hx::Val( convertToHaxe_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"convertToMagLev") ) { return ::hx::Val( convertToMagLev_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerMyMethods") ) { return ::hx::Val( registerMyMethods_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EnglishAuction_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"maglev") ) { maglev=inValue.Cast<  ::maglev::MagLev >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EnglishAuction_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("maglev",2a,df,2b,b3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EnglishAuction_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /*  ::maglev::MagLev */ ,(int)offsetof(EnglishAuction_obj,maglev),HX_("maglev",2a,df,2b,b3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EnglishAuction_obj_sStaticStorageInfo = 0;
#endif

static ::String EnglishAuction_obj_sMemberFields[] = {
	HX_("maglev",2a,df,2b,b3),
	HX_("registerMyMethods",83,b1,0a,b9),
	HX_("convertToHaxe",94,89,1b,b6),
	HX_("convertToMagLev",f8,a3,b9,0f),
	::String(null()) };

::hx::Class EnglishAuction_obj::__mClass;

void EnglishAuction_obj::__register()
{
	EnglishAuction_obj _hx_dummy;
	EnglishAuction_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("englishauction.EnglishAuction",0e,9e,93,52);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EnglishAuction_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EnglishAuction_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EnglishAuction_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EnglishAuction_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void EnglishAuction_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f704f8914f7b4676_11_boot)
HXDLIN(  11)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))->init(1,HX_("checkstyle:LocalVariableName",c1,ac,a3,03))->init(2,HX_("checkstyle:MultipleStringLiterals",d6,ed,13,79))->init(3,HX_("checkstyle:MagicNumber",a5,aa,f4,8b)))))));
            	}
}

} // end namespace englishauction
