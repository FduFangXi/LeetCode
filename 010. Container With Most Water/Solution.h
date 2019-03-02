//
//  Solution.h
//  010. Container With Most Water
//
//  Created by fangxi on 2018/11/9.
//  Copyright © 2018 fangxi. All rights reserved.
//

#ifndef Solution_h
#define Solution_h
#include <algorithm>
#include <vector>
using std::vector;
using std::prev;
using std::max;
using std::min;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int ret{0};
        for (auto beg = height.begin(), end = prev(height.end()); beg < end; *beg < *end ? ++beg : --end){
            ret = max(ret, static_cast<int>(end-beg)*min(*beg, *end));
        }
        return ret;
    }
};

#endif /* Solution_h */
