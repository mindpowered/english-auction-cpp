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

/*!
 * An Auction Library
 * Timed auction starting at a low price and increasing until no more bids are made.
 * Also supports reserve price and automatic bidding.
 */
class EnglishAuction {
public:

	/*!
	 * Create a new auction
	 * @param start start time of auction
	 * @param end end time of auction
	 * @param startingPrice starting price of auction
	 * @param reservePrice reserve price for the auction (0 = none)
	 * @param priceIncrement price increments for bids in the auction
	 * @return {string} auctionId
	*/
	std::string Create(double start, double end, double startingPrice, double reservePrice, double priceIncrement) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		//????
		myargs.push_back(param0);
		//????
		myargs.push_back(param1);
		//????
		myargs.push_back(param2);
		//????
		myargs.push_back(param3);
		//????
		myargs.push_back(param4);
		::maglev::CppAny ret = bus->call("EnglishAuction.Create", myargs);
		return ret;
	}

	/*!
	 * Get the start of an auction
	 * Will return a timestamp in milliseconds
	 * @param auctionId auction id
	 * @return {number} start of auction
	*/
	double GetStart(std::string auctionId) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		::maglev::CppAny param0;
		param0.setStdString(auctionId);
		myargs.push_back(param0);
		::maglev::CppAny ret = bus->call("EnglishAuction.GetStart", myargs);
		return ret;
	}

	/*!
	 * Check if auction has ended
	 * @param auctionId auction id
	 * @return {bool} true if auction has ended, false otherwise
	*/
	bool GetEnd(std::string auctionId) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		::maglev::CppAny param0;
		param0.setStdString(auctionId);
		myargs.push_back(param0);
		::maglev::CppAny ret = bus->call("EnglishAuction.GetEnd", myargs);
		return ret;
	}

	/*!
	 * Check if an auction has started yet
	 * @param auctionId auction id
	 * @return {bool} true if auction has started, false otherwise
	*/
	bool HasStarted(std::string auctionId) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		::maglev::CppAny param0;
		param0.setStdString(auctionId);
		myargs.push_back(param0);
		::maglev::CppAny ret = bus->call("EnglishAuction.HasStarted", myargs);
		return ret;
	}

	/*!
	 * Check if an auction has ended yet
	 * @param auctionId auction id
	 * @return {bool} true if auction has ended, false otherwise
	*/
	bool HasEnded(std::string auctionId) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		::maglev::CppAny param0;
		param0.setStdString(auctionId);
		myargs.push_back(param0);
		::maglev::CppAny ret = bus->call("EnglishAuction.HasEnded", myargs);
		return ret;
	}

	/*!
	 * Create a bid in an auction
	 * @param auctionId auction id
	 * @param userId user id
	 * @param price price bud
	*/
	void Bid(std::string auctionId, std::string userId, double price) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		::maglev::CppAny param0;
		param0.setStdString(auctionId);
		myargs.push_back(param0);
		::maglev::CppAny param1;
		param1.setStdString(userId);
		myargs.push_back(param1);
		//????
		myargs.push_back(param2);
		bus->call("EnglishAuction.Bid", args);
	}

	/*!
	 * Get the highest bidder in an auction
	 * @param auctionId auction id
	 * @return {mixed} 
	*/
	::maglev::CppAny GetHighestBidder(std::string auctionId) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		::maglev::CppAny param0;
		param0.setStdString(auctionId);
		myargs.push_back(param0);
		::maglev::CppAny ret = bus->call("EnglishAuction.GetHighestBidder", myargs);
		return ret;
	}

	/*!
	 * Get the highest bids in an auction
	 * @param auctionId auction id
	 * @param numBids max number of highest bids to return
	 * @return {array} Highest bids for the specified auction
	*/
	std::vector<::maglev::CppAny> GetHighestBids(std::string auctionId, double numBids) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		::maglev::CppAny param0;
		param0.setStdString(auctionId);
		myargs.push_back(param0);
		//????
		myargs.push_back(param1);
		::maglev::CppAny ret = bus->call("EnglishAuction.GetHighestBids", myargs);
		return ret;
	}

	/*!
	 * Get the number of bids in an auction
	 * @param auctionId auction id
	 * @return {number} Number of bids placed in the specified auction
	*/
	double GetNumberOfBids(std::string auctionId) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		::maglev::CppAny param0;
		param0.setStdString(auctionId);
		myargs.push_back(param0);
		::maglev::CppAny ret = bus->call("EnglishAuction.GetNumberOfBids", myargs);
		return ret;
	}

	/*!
	 * Get the price increment for the specified auction
	 * @param auctionId auction id
	 * @return {number} Price increment
	*/
	double GetPriceIncrement(std::string auctionId) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		::maglev::CppAny param0;
		param0.setStdString(auctionId);
		myargs.push_back(param0);
		::maglev::CppAny ret = bus->call("EnglishAuction.GetPriceIncrement", myargs);
		return ret;
	}

	/*!
	 * Get the reserve price for the specified auction
	 * @param auctionId auction id
	 * @return {number} Reserve price
	*/
	double GetReservePrice(std::string auctionId) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		::maglev::CppAny param0;
		param0.setStdString(auctionId);
		myargs.push_back(param0);
		::maglev::CppAny ret = bus->call("EnglishAuction.GetReservePrice", myargs);
		return ret;
	}

	/*!
	 * Get the starting price for the specified auction
	 * @param auctionId auction id
	 * @return {number} Starting price
	*/
	double GetStartingPrice(std::string auctionId) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		::maglev::CppAny param0;
		param0.setStdString(auctionId);
		myargs.push_back(param0);
		::maglev::CppAny ret = bus->call("EnglishAuction.GetStartingPrice", myargs);
		return ret;
	}

	/*!
	 * Get the time remaining for the specified auction
	 * @param auctionId auction id
	 * @param now current unix timestamp
	 * @return {number} Time remaining in seconds
	*/
	double CalcTimeRemaining(std::string auctionId, double now) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		::maglev::CppAny param0;
		param0.setStdString(auctionId);
		myargs.push_back(param0);
		//????
		myargs.push_back(param1);
		::maglev::CppAny ret = bus->call("EnglishAuction.CalcTimeRemaining", myargs);
		return ret;
	}

	/*!
	 * Get the minimum next bid for the specified auction
	 * @param auctionId auction id
	 * @return {number} Minimum bid price
	*/
	double CalcMinimumBid(std::string auctionId) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		::maglev::CppAny param0;
		param0.setStdString(auctionId);
		myargs.push_back(param0);
		::maglev::CppAny ret = bus->call("EnglishAuction.CalcMinimumBid", myargs);
		return ret;
	}

	/*!
	 * Get a list of auctions based on their end time
	 * @param endfrom end from
	 * @param endto end to
	 * @param page 
	 * @param perpage number of auctions per page
	 * @param sort field to sort by
	 * @param asc ascending (true) or descending (false)
	 * @return {array} List of auctions ending in the specified period
	*/
	std::vector<::maglev::CppAny> GetAuctionsEnding(double endfrom, double endto, double page, double perpage, std::string sort, bool asc) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		//????
		myargs.push_back(param0);
		//????
		myargs.push_back(param1);
		//????
		myargs.push_back(param2);
		//????
		myargs.push_back(param3);
		::maglev::CppAny param4;
		param4.setStdString(sort);
		myargs.push_back(param4);
		::maglev::CppAny param5;
		param5.setBool(asc);
		myargs.push_back(param5);
		::maglev::CppAny ret = bus->call("EnglishAuction.GetAuctionsEnding", myargs);
		return ret;
	}

	/*!
	 * Get a list of auctions based on their start time
	 * @param startfrom start from
	 * @param startto start to
	 * @param page 
	 * @param perpage number of auctions per page
	 * @param sort field to sort by
	 * @param asc ascending (true) or descending (false)
	 * @return {array} List of auctions starting in the specified period
	*/
	std::vector<::maglev::CppAny> GetAuctionsStarting(double startfrom, double startto, double page, double perpage, std::string sort, bool asc) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		//????
		myargs.push_back(param0);
		//????
		myargs.push_back(param1);
		//????
		myargs.push_back(param2);
		//????
		myargs.push_back(param3);
		::maglev::CppAny param4;
		param4.setStdString(sort);
		myargs.push_back(param4);
		::maglev::CppAny param5;
		param5.setBool(asc);
		myargs.push_back(param5);
		::maglev::CppAny ret = bus->call("EnglishAuction.GetAuctionsStarting", myargs);
		return ret;
	}

	/*!
	 * Get a list of currently running auctions
	 * @param page 
	 * @param perpage number of auctions per page
	 * @param sort field to sort by
	 * @param asc ascending (true) or descending (false)
	 * @return {array} List of open auctions
	*/
	std::vector<::maglev::CppAny> GetOpenAuctions(double page, double perpage, std::string sort, bool asc) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		//????
		myargs.push_back(param0);
		//????
		myargs.push_back(param1);
		::maglev::CppAny param2;
		param2.setStdString(sort);
		myargs.push_back(param2);
		::maglev::CppAny param3;
		param3.setBool(asc);
		myargs.push_back(param3);
		::maglev::CppAny ret = bus->call("EnglishAuction.GetOpenAuctions", myargs);
		return ret;
	}

};

