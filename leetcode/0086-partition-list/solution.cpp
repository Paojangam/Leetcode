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
    ListNode* partition(ListNode* head, int x) {
        ListNode*beforeHead=new ListNode(0);
        ListNode*afterHead=new ListNode(0);

      ListNode*smaller=beforeHead;
      ListNode*bigger=afterHead;
      ListNode*curr=head;
      while(curr){
        if(curr->val<x){
            smaller->next=curr;
            smaller=smaller->next;
        }
        else{
        bigger->next=curr;
        bigger=bigger->next;
        }
        curr=curr->next;
      }
bigger->next=nullptr;
smaller->next=afterHead->next;    

       return beforeHead->next;; 
    }
};
