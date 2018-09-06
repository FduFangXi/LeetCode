//
//  test.cpp
//  003. Median of Two Sorted Arrays
//
//  Created by fangxi on 2018/8/7.
//  Copyright © 2018年 fangxi. All rights reserved.
//

#define CATCH_CONFIG_MAIN
#include "../Catch/catch.hpp"
#include "Solution.h"

TEST_CASE("Median of Two Sorted Arrays","[findMedianSortedArrays]") {
    Solution s;
    
    std::vector<int> nums11{1,2,3,4}, nums21{5,6,7,8,9};
    REQUIRE( s.findMedianSortedArrays(nums11, nums21) == 5 );
    
    std::vector<int> nums12{1,3}, nums22{2};
    REQUIRE( s.findMedianSortedArrays(nums12, nums22) == 2 );
    
    std::vector<int> nums13{1,2}, nums23{3,4};
    REQUIRE( s.findMedianSortedArrays(nums13, nums23) == 2.5 );
}
