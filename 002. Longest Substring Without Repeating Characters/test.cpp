//
//  test.cpp
//  002. Longest Substring Without Repeating Characters
//
//  Created by fangxi on 2018/8/7.
//  Copyright © 2018年 fangxi. All rights reserved.
//

#define CATCH_CONFIG_MAIN
#include "../Catch/catch.hpp"
#include "Solution.h"

TEST_CASE("Longest Substring Without Repeating Characters", "[lengthOfLongestSubstring]")
{
    Solution s;
    REQUIRE( s.lengthOfLongestSubstring("abcabcbb") == 3 );
    REQUIRE( s.lengthOfLongestSubstring("bbbbb") == 1 );
    REQUIRE( s.lengthOfLongestSubstring("a") == 1 );
    REQUIRE( s.lengthOfLongestSubstring("au") == 2 );
    REQUIRE( s.lengthOfLongestSubstring("bwt") == 3 );
    REQUIRE( s.lengthOfLongestSubstring("abba") == 2 );
}
