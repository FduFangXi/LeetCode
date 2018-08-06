//
//  test.cpp
//  001. Add Two Numbers
//
//  Created by fangxi on 2018/8/6.
//  Copyright © 2018年 fangxi. All rights reserved.
//

#include "Solution.h"
#include <iostream>

using namespace std;

ListNode *create_linkedlist(std::initializer_list<int> lst) {
    auto iter = lst.begin();
    ListNode *head = lst.size() ? new ListNode(*iter++) : NULL;
    for (ListNode *cur = head; iter != lst.end(); cur = cur->next) {
        cur->next = new ListNode(*iter++);
    }
    return head;
}

int main() {
    Solution s;
    ListNode *l1 = create_linkedlist({2,4,3});
    ListNode *l2 = create_linkedlist({5,6,4});
    ListNode *ret = s.addTwoNumbers(l1, l2);
    
    for (ListNode *cur = ret; cur; cur = cur->next) {
        if (cur->next) {
            cout << cur->val << "->";
        } else {
            cout << cur->val;
        }
    }
    cout << "\b\b   " << endl;
    
    return 0;
}
