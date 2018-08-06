//
//  Solution.h
//  000. Two Sum
//
//  Created by fangxi on 2018/8/6.
//  Copyright © 2018年 fangxi. All rights reserved.
//

#ifndef Solution_h
#define Solution_h

#include <vector>
#include <unordered_map>
using std::vector;
using std::unordered_map;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            int numTofind = target - nums[i];
            
            if (hash.find(numTofind) != hash.end()) {
                result.push_back(hash[numTofind]);
                result.push_back(i);
                return result;
            }
            
            hash[nums[i]] = i;
        }
        return {-1, -1};
    }
};

#endif /* Solution_h */
