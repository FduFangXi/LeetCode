//
//  test.cpp
//  010. Container With Most Water
//
//  Created by fangxi on 2018/11/9.
//  Copyright © 2018 fangxi. All rights reserved.
//

#define CATCH_CONFIG_MAIN
#include "../Catch/catch.hpp"
#include "Solution.h"

TEST_CASE("Container With Most Water","[maxArea]") {
    Solution s;
    
    std::vector<int> height{1,8,6,2,5,4,8,3,7};
    REQUIRE( s.maxArea(height) == 49 );
}

