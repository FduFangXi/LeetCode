# Linked list cycle

1. 用unordered_set记录访问过的结点地址，后续再进行查询

    class Solution {
    public:
        bool hasCycle(ListNode *head) {
            unordered_set<ListNode *> myset;
            while(head) {
                if (myset.find(head) != myset.end())
                    return true;
                myset.insert(head);
                head = head->next;
            }
            return false;
        }
    };

 2. 用龟兔赛跑的形式，一种每次加2指针，一种每次加1指针，判断是否会相遇

    class Solution { 
    public: 
    		bool hasCycle(ListNode *head) { 
    				ListNode *fast, *slow; 
    				fast = slow = head; 
    				while(fast && fast->next) { 
    						fast = fast->next->next; 
    						slow = slow->next; 
    						if (fast == slow) return true; 
    				} 
    				return false; 
    		} 
    };