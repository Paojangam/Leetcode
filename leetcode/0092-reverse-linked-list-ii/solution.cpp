class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head; // No need to reverse

        ListNode* dummy = new ListNode(0, head);
        ListNode* leftpre = dummy;
        ListNode*curNode=head;
        for(int i=0;i<left-1;i++){
            leftpre=leftpre->next;
            curNode=curNode->next;
        }
        ListNode*preNode=nullptr;
        ListNode*sub=curNode;
        for(int i=0;i<(right -left+1);i++){
            ListNode*nextNode=curNode->next;
            curNode->next=preNode;
            preNode=curNode;
            
            curNode=nextNode;

        }
        leftpre->next=preNode;
        sub->next=curNode;

        
       return dummy->next;
    }
};

