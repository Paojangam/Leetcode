class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*prev=nullptr;
        ListNode*cur=head;
        while(cur!=nullptr){
            ListNode*nextnode=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nextnode;
        }
        return prev;
    }
};

