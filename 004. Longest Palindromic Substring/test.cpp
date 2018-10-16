//
//  test.cpp
//  004. Longest Palindromic Substring
//
//  Created by fangxi on 2018/9/6.
//  Copyright © 2018年 fangxi. All rights reserved.
//

#define CATCH_CONFIG_MAIN
#include "../Catch/catch.hpp"
#include "Solution.h"

TEST_CASE("Longest Palindromic Substring", "longestPalindrome") {
    Solution s;
    REQUIRE( s.longestPalindrome("abbabbua") == "bbabb" );
}
