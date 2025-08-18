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
  ListNode* findNthNode(ListNode* head, int n) {
        while (--n && head != nullptr) {
            head = head->next;
        }
        return head;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;
        int len=1;
        ListNode*tailNode=head;
        while(tailNode->next!=nullptr){
            tailNode=tailNode->next;
            len =len+1;
        }
        if(k%len==0) return head;
        k=k%len;
        ListNode*newLastNode=findNthNode(   head, len-k);
                        tailNode->next=head;
                        head=newLastNode->next;

        newLastNode->next=nullptr;


     return head;   
    }
};
