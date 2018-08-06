//
//  test.cpp
//  000. Two Sum
//
//  Created by fangxi on 2018/8/6.
//  Copyright © 2018年 fangxi. All rights reserved.
//

#define CATCH_CONFIG_MAIN
#include "../Catch/catch.hpp"
#include "Solution.h"

TEST_CASE("Two Sum", "twoSum") {
    Solution s;
    
    std::vector<int> v1{2,7,5,11};
    REQUIRE( (s.twoSum(v1, 9) == std::vector<int>{0, 1}) );
    
    std::vector<int> v2{0,4,3,0};
    REQUIRE( (s.twoSum(v2, 0) == std::vector<int>{0, 3}) );
    
    std::vector<int> v3{-3,4,3,90};
    REQUIRE( (s.twoSum(v3, 0) == std::vector<int>{0, 2}) );
}
