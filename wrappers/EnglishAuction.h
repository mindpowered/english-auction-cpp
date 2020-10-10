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
	std::string Create(std::string start, std::string end, double startingPrice, double reservePrice, double priceIncrement) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		::maglev::CppAny param0;
		param0.setStdString(start);
		myargs.push_back(param0);
		::maglev::CppAny param1;
		param1.setStdString(end);
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
	 * @return {number} true if auction has ended, false otherwise
	*/
	double GetEnd(std::string auctionId) {
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
	 * @return {number} true if auction started, false otherwise
	*/
	double HasStarted(std::string auctionId) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		::maglev::CppAny param0;
		param0.setStdString(auctionId);
		myargs.push_back(param0);
		::maglev::CppAny ret = bus->call("EnglishAuction.HasStarted", myargs);
		return ret;
	}

};

