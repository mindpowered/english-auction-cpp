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
	 * @return {string} auctionId
	*/
	std::string Create(std::string start, std::string end, double startingPrice, double reservePrice) {
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
		::maglev::CppAny ret = bus->call("EnglishAuction.Create", myargs);
		return ret;
	}

	/*!
	 * Bid in an auction
	 * @param auctionId auction id to bid in
	 * @param userId user id that's bidding
	 * @param price bid price
	 * @return {bool} true on success, false on failure
	*/
	bool Bid(std::string auctionId, std::string userId, double price) {
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
		::maglev::CppAny ret = bus->call("EnglishAuction.Bid", myargs);
		return ret;
	}

	/*!
	 * Automatically bid against others in an auction (up to the specified amount)
	 * @param auctionId auction id to bid in
	 * @param userId user id that's bidding
	 * @param price bid price
	 * @return {bool} true on success, false on failure
	*/
	bool AutoBid(std::string auctionId, std::string userId, double price) {
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
		::maglev::CppAny ret = bus->call("EnglishAuction.AutoBid", myargs);
		return ret;
	}

	/*!
	 * Force an auction to close and specify the winning bid.
	 * @param auctionId auction id to bid in
	 * @param userId user id that's bidding
	 * @param price bid price
	 * @return {bool} true on success, false on failure
	*/
	bool ForceClose(std::string auctionId, std::string userId, double price) {
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
		::maglev::CppAny ret = bus->call("EnglishAuction.ForceClose", myargs);
		return ret;
	}

	/*!
	 * TBD
	*/
	void Status() {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		bus->call("EnglishAuction.Status", args);
	}

};

