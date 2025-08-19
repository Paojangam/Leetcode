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
ListNode*reverseit(ListNode*head){
    ListNode*prenode=nullptr;
    ListNode*cur=head;
    while(cur!=nullptr){
        ListNode*nextnode=cur->next;
        cur->next=prenode;
        prenode=cur;
        cur=nextnode;
    }
    return prenode;
}
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true; 
        ListNode* slow=head;
        ListNode*fast=head;
        while(fast->next&& fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
    ListNode*secondhalf=reverseit(slow->next);
     ListNode* first = head;
        ListNode* second = secondhalf;
        while (second) { 
            if (first->val != second->val) return false;
            first = first->next;
            second = second->next;
        }

        
        return true;
        
    }
};
