
englishauction
==============
Online auctions with ascending price and time limit

![Build Status](https://mindpowered.dev/assets/images/github-badges/build-passing.svg)

Contents
========

* [Source Code and Documentation](#source-code-and-documentation)
* [Licensing](#licensing)
* [About](#about)
* [Requirements](#requirements)
* [Installation](#installation)
* [Usage](#usage)
* [Support](#support)

# Source Code and Documentation
- Source Code: [https://github.com/mindpowered/english-auction-cpp](https://github.com/mindpowered/english-auction-cpp)
- Documentation: [https://mindpowered.github.io/english-auction-cpp](https://mindpowered.github.io/english-auction-cpp)

# Licensing
To obtain a version of this package under the MIT License, follow the instructions to [get a license][purchase]. The MIT License has no restrictions on commercial use and permits reuse within proprietary software.

# About
An English auction is the most common form of auction. When an auction opens, the price starts low and increases as buyers bid for the item. Live auctions usually end when there is no new highest bid for a period of time. For online auctions, an end time is usually set. To prevent items selling for a loss, sometimes the seller will place a reserve." A reserve is the least amount to sell the item for, although the auction may start at a lower price than this. Another common feature of online auctions is the ability to pay a set price to win and end the auction.

This package aims to provide functionality of online English auctions.

# Requirements
- Bazel - https://www.bazel.build/
- Haxe 4.1.1
- Neko
- hxcpp - https://lib.haxe.org/p/hxcpp/
- g++


Third-party dependencies may have additional requirements.

# Installation
Add rules to WORKSPACE file ...

```
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

git_repository(
  name = 'maglev',
  remote = 'https://github.com/mindpowered/maglev-cpp.git',
  branch = 'master',
)
git_repository(
  name = 'haxecpp',
  remote = 'https://github.com/mindpowered/haxecpp-cpp.git',
  branch = 'master',
)
git_repository(
  name = 'englishauction',
  remote = 'https://github.com/mindpowered/english-auction-cpp.git',
  branch = 'master',
)
```

Reference dependency in BUILD file ...

```
    deps = [
        ...
        "@englishauction//:englishauction"
        ...
    ],
```


# Usage
```cpp
#include <mindpowered/englishauction/EnglishAuction.h>

{
    auto ea = new EnglishAuction();
    ea->GetOpenAuctions(0, 10, "start", true);
    delete ea;
}

```


# Support
We are here to support using this package. If it doesn't do what you're looking for, isn't working, or you just need help, please [Contact us][contact].

There is also a public [Issue Tracker][bugs] available for this package.



[bugs]: https://github.com/mindpowered/english-auction-cpp/issues
[contact]: https://mindpowered.dev/support.html?ref=english-auction-cpp/
[docs]: https://mindpowered.github.io/english-auction-cpp/
[licensing]: https://mindpowered.dev/?ref=english-auction-cpp
[purchase]: https://mindpowered.dev/purchase/
