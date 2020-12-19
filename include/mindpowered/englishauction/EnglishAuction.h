#pragma once
/*!
 * Copyright Mind Powered Corporation 2020
 * 
 * https://mindpowered.dev/
 */

#include <maglev/MagLev.h>
#include <maglev/MagLevCpp.h>
#include <maglev/CppCallbackPtr.h>
#include <maglev/CppAny.h>
#include <englishauction/EnglishAuction.h>
#include <haxecpp/haxe_thread.h>
#include <string>
#include <map>

void __boot_maglev();
void __boot_englishauction();

/*!
 * An Auction Library
 * Timed auction starting at a low price and increasing until no more bids are made.
 * Also supports reserve price and automatic bidding.
 */
class EnglishAuction {
public:
	EnglishAuction()
	{
		run_haxe([](){
			__boot_maglev();
			__boot_englishauction();
			::maglev::MagLev m0 = ::maglev::MagLev_obj::getInstance("default");
			auto o = new ::englishauction::EnglishAuction_obj();
			o->__construct(m0);
		});
	}
	~EnglishAuction()
	{
	}

	/*!
	 * Create a new auction
	 * @param start start time of auction
	 * @param end end time of auction
	 * @param startingPrice starting price of auction
	 * @param reservePrice reserve price for the auction (0 = none)
	 * @param priceIncrement price increments for bids in the auction
	 * @return {std::string} auctionId
	*/
	std::string Create(double start, double end, double startingPrice, double reservePrice, double priceIncrement)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,start,end,startingPrice,reservePrice,priceIncrement](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setDouble(start);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setDouble(end);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setDouble(startingPrice);
			myargs.push_back(param2);
			::maglev::CppAny param3 = new ::maglev::CppAny_obj();
			param3->setDouble(reservePrice);
			myargs.push_back(param3);
			::maglev::CppAny param4 = new ::maglev::CppAny_obj();
			param4->setDouble(priceIncrement);
			myargs.push_back(param4);
			bus->call("EnglishAuction.Create", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		return ret->getStdString();
	}

	/*!
	 * Get the start of an auction
	 * Will return a timestamp in milliseconds
	 * @param auctionId auction id
	 * @return {double} start of auction
	*/
	double GetStart(std::string auctionId)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,auctionId](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(auctionId);
			myargs.push_back(param0);
			bus->call("EnglishAuction.GetStart", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		return ret->getDouble();
	}

	/*!
	 * Check if auction has ended
	 * @param auctionId auction id
	 * @return {bool} true if auction has ended, false otherwise
	*/
	bool GetEnd(std::string auctionId)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,auctionId](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(auctionId);
			myargs.push_back(param0);
			bus->call("EnglishAuction.GetEnd", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		return ret->getBool();
	}

	/*!
	 * Check if an auction has started yet
	 * @param auctionId auction id
	 * @return {bool} true if auction has started, false otherwise
	*/
	bool HasStarted(std::string auctionId)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,auctionId](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(auctionId);
			myargs.push_back(param0);
			bus->call("EnglishAuction.HasStarted", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		return ret->getBool();
	}

	/*!
	 * Check if an auction has ended yet
	 * @param auctionId auction id
	 * @return {bool} true if auction has ended, false otherwise
	*/
	bool HasEnded(std::string auctionId)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,auctionId](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(auctionId);
			myargs.push_back(param0);
			bus->call("EnglishAuction.HasEnded", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		return ret->getBool();
	}

	/*!
	 * Create a bid in an auction
	 * @param auctionId auction id
	 * @param userId user id
	 * @param price price bud
	*/
	void Bid(std::string auctionId, std::string userId, double price)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,auctionId,userId,price](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(auctionId);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setStdString(userId);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setDouble(price);
			myargs.push_back(param2);
			bus->call("EnglishAuction.Bid", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
	}

	/*!
	 * Get the highest bidder in an auction
	 * @param auctionId auction id
	 * @return {::maglev::CppAny} 
	*/
	::maglev::CppAny GetHighestBidder(std::string auctionId)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,auctionId](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(auctionId);
			myargs.push_back(param0);
			bus->call("EnglishAuction.GetHighestBidder", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		return ret;
	}

	/*!
	 * Get the highest bids in an auction
	 * @param auctionId auction id
	 * @param numBids max number of highest bids to return
	 * @return {std::vector<::maglev::CppAny>} Highest bids for the specified auction
	*/
	std::vector<::maglev::CppAny> GetHighestBids(std::string auctionId, double numBids)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,auctionId,numBids](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(auctionId);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setDouble(numBids);
			myargs.push_back(param1);
			bus->call("EnglishAuction.GetHighestBids", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		std::vector<::maglev::CppAny> retarr;
		return retarr;
	}

	/*!
	 * Get the number of bids in an auction
	 * @param auctionId auction id
	 * @return {double} Number of bids placed in the specified auction
	*/
	double GetNumberOfBids(std::string auctionId)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,auctionId](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(auctionId);
			myargs.push_back(param0);
			bus->call("EnglishAuction.GetNumberOfBids", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		return ret->getDouble();
	}

	/*!
	 * Get the price increment for the specified auction
	 * @param auctionId auction id
	 * @return {double} Price increment
	*/
	double GetPriceIncrement(std::string auctionId)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,auctionId](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(auctionId);
			myargs.push_back(param0);
			bus->call("EnglishAuction.GetPriceIncrement", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		return ret->getDouble();
	}

	/*!
	 * Get the reserve price for the specified auction
	 * @param auctionId auction id
	 * @return {double} Reserve price
	*/
	double GetReservePrice(std::string auctionId)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,auctionId](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(auctionId);
			myargs.push_back(param0);
			bus->call("EnglishAuction.GetReservePrice", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		return ret->getDouble();
	}

	/*!
	 * Get the starting price for the specified auction
	 * @param auctionId auction id
	 * @return {double} Starting price
	*/
	double GetStartingPrice(std::string auctionId)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,auctionId](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(auctionId);
			myargs.push_back(param0);
			bus->call("EnglishAuction.GetStartingPrice", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		return ret->getDouble();
	}

	/*!
	 * Get the time remaining for the specified auction
	 * @param auctionId auction id
	 * @param now current unix timestamp
	 * @return {double} Time remaining in seconds
	*/
	double CalcTimeRemaining(std::string auctionId, double now)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,auctionId,now](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(auctionId);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setDouble(now);
			myargs.push_back(param1);
			bus->call("EnglishAuction.CalcTimeRemaining", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		return ret->getDouble();
	}

	/*!
	 * Get the minimum next bid for the specified auction
	 * @param auctionId auction id
	 * @return {double} Minimum bid price
	*/
	double CalcMinimumBid(std::string auctionId)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,auctionId](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(auctionId);
			myargs.push_back(param0);
			bus->call("EnglishAuction.CalcMinimumBid", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		return ret->getDouble();
	}

	/*!
	 * Get a list of auctions based on their end time
	 * @param endfrom end from
	 * @param endto end to
	 * @param page 
	 * @param perpage number of auctions per page
	 * @param sort field to sort by
	 * @param asc ascending (true) or descending (false)
	 * @return {std::vector<::maglev::CppAny>} List of auctions ending in the specified period
	*/
	std::vector<::maglev::CppAny> GetAuctionsEnding(double endfrom, double endto, double page, double perpage, std::string sort, bool asc)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,endfrom,endto,page,perpage,sort,asc](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setDouble(endfrom);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setDouble(endto);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setDouble(page);
			myargs.push_back(param2);
			::maglev::CppAny param3 = new ::maglev::CppAny_obj();
			param3->setDouble(perpage);
			myargs.push_back(param3);
			::maglev::CppAny param4 = new ::maglev::CppAny_obj();
			param4->setStdString(sort);
			myargs.push_back(param4);
			::maglev::CppAny param5 = new ::maglev::CppAny_obj();
			param5->setBool(asc);
			myargs.push_back(param5);
			bus->call("EnglishAuction.GetAuctionsEnding", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		std::vector<::maglev::CppAny> retarr;
		return retarr;
	}

	/*!
	 * Get a list of auctions based on their start time
	 * @param startfrom start from
	 * @param startto start to
	 * @param page 
	 * @param perpage number of auctions per page
	 * @param sort field to sort by
	 * @param asc ascending (true) or descending (false)
	 * @return {std::vector<::maglev::CppAny>} List of auctions starting in the specified period
	*/
	std::vector<::maglev::CppAny> GetAuctionsStarting(double startfrom, double startto, double page, double perpage, std::string sort, bool asc)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,startfrom,startto,page,perpage,sort,asc](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setDouble(startfrom);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setDouble(startto);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setDouble(page);
			myargs.push_back(param2);
			::maglev::CppAny param3 = new ::maglev::CppAny_obj();
			param3->setDouble(perpage);
			myargs.push_back(param3);
			::maglev::CppAny param4 = new ::maglev::CppAny_obj();
			param4->setStdString(sort);
			myargs.push_back(param4);
			::maglev::CppAny param5 = new ::maglev::CppAny_obj();
			param5->setBool(asc);
			myargs.push_back(param5);
			bus->call("EnglishAuction.GetAuctionsStarting", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		std::vector<::maglev::CppAny> retarr;
		return retarr;
	}

	/*!
	 * Get a list of currently running auctions
	 * @param page 
	 * @param perpage number of auctions per page
	 * @param sort field to sort by
	 * @param asc ascending (true) or descending (false)
	 * @return {std::vector<::maglev::CppAny>} List of open auctions
	*/
	std::vector<::maglev::CppAny> GetOpenAuctions(double page, double perpage, std::string sort, bool asc)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,page,perpage,sort,asc](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setDouble(page);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setDouble(perpage);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setStdString(sort);
			myargs.push_back(param2);
			::maglev::CppAny param3 = new ::maglev::CppAny_obj();
			param3->setBool(asc);
			myargs.push_back(param3);
			bus->call("EnglishAuction.GetOpenAuctions", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		std::vector<::maglev::CppAny> retarr;
		return retarr;
	}

};

