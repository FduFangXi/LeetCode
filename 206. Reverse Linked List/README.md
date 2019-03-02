# Reverse Linked List

普通实现版本
```c++
    class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            ListNode* p;
            ListNode* q;
            ListNode* r;
            if (head == NULL)
                return head;
            p = head;
            q = head->next;
            head->next = NULL;
            while(q != NULL) {
                r = q->next;
                q->next = p;
                p = q;
                q = r;
            }
            head = p;
            return head;
        }
    };
```
优化—用prev和curr来指向当前结点和前驱结点，将上面代码简洁化：
```c++
    class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            ListNode* prev = NULL;
            ListNode* curr = head;
            while(curr != NULL) {
                ListNode* temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
            }
            return prev;
        }
    };
```
递归的方法—将其看成只有右子树或左子树的树形结构，就可以用递归方法
```c++
    class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            if (head == NULL || head->next == NULL)
                return head;
            ListNode* p = reverseList(head->next);
            head->next->next = head;
            head->next = NULL;
        }
    };
```