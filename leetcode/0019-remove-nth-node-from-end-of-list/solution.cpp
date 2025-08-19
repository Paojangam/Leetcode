/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*cur=head;
        int size=0;
        while(cur!=0){
             
            cur=cur->next;
           size++;
        }
        if(n==size){
            return head->next;
        }
        int pos=size-n;
        ListNode*prenode=head;
        for(int i=1;i<pos;i++){
          prenode=prenode->next;
        }
        prenode->next=prenode->next->next;
        return head;
    }
};
