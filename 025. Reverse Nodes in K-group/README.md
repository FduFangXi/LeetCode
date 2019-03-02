# Reverse Nodes in k-group

思路：从题意可以简单理解成是进行k次的子链表反转。

首先排除特殊情况，!head,!head→next,k<2。

然后建立链表头节点prehead，利用front和back双指针开始循环，首先将back循环到长度为k的子链表尾部，以此确定下次逆转的子链表的起始位置，然后开始逆序。利用新建的next指针将front后的指针一个一个的按顺序挪到back指针后，直到front→next==back，而此时的head被挪到了这个子链表的尾部，下个子链表的头部，成为了下个子链表的prehead，将front、back重置为prehead，开始下一次循环。

    class Solution {
    public:
        ListNode* reverseKGroup(ListNode* head, int k) {
            if (!head || !head->next || k < 2)  return head;
            ListNode prehead(0);
            prehead.next = head;
            
            for (ListNode *front = &prehead, *back = &prehead;;front = head, back = head) {
                for (int count = k; count > 0; count --)
                    if (!(back=back->next)) return prehead.next;
                
                for (head = front->next; front->next != back;) {
                    ListNode *next = front->next;
                    front->next = next->next;
                    next->next = back->next;
                    back->next = next;
                }
            }
            return prehead.next;
        }
    };