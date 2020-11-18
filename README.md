
englishauction
==============

Contents
========

* [About](#about)
* [Requirements](#requirements)
* [Installation](#installation)
* [Configuration](#configuration)
* [Usage](#usage)
* [Licensing](#licensing)
* [Support](#support)

# About
A Timed Auction library starting at a low price and increasing until the auction ends.

# Requirements
Bazel - https://www.bazel.build/
Haxe 4.1.1
Neko
hxcpp - https://lib.haxe.org/p/hxcpp/
g++


Third-party dependencies may have additional requirements.

# Installation
Add to WORKSPACE ...
Reference in BUILD ...


# Configuration
You must configure the storage and retrieval of auctions and bids. Before we can make use of englishauction's functions, we have to create Callback functions for englishauction to use whenever it needs to use any persistent data regarding auctions and bids. A common way of storing persistent data is using SQL. Each setup function bridges the gap between your auction data and the englishauction package's functionality.

# Usage
You are using C++


More examples to come

# Licensing
Additional [licensing options][licensing] are available.

# Support
For bug fixes, please raise an issue in the [Issue Tracker][bugs].

For feature requests, and general support, please [Contact us][contact].



[bugs]: https://github.com/mindpowered/english-auction-cpp/issues
[contact]: https://mindpowered.dev/support.html?ref=english-auction-cpp/
[docs]: https://mindpowered.github.io/english-auction-cpp/
[licensing]: https://mindpowered.dev/?ref=english-auction-cpp
