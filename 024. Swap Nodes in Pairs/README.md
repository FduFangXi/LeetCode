# swap nodes in pairs
```c++
class Solution {
    public:
        ListNode* swapPairs(ListNode* head) {
    		//很重要，malloc(sizeof一定要加上，表示创建一个结点，而不是链表指针
            ListNode* self = (struct ListNode *)malloc(sizeof(struct ListNode)); 
            ListNode* prev = self;
            prev->next = head;
            while(prev->next != NULL && prev->next->next != NULL) {
                ListNode* curr = prev->next;
                ListNode* prov = curr->next;
                ListNode* temp = prov->next;
                prev->next = prov;
                curr->next = temp;
                prov->next = curr;
                prev = curr;
            }
            return self->next;
        }
    };
```