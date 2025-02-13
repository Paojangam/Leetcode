class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;  // Previous pointer
        ListNode* curr = head;     // Current pointer

        while (curr != nullptr) {
            ListNode* nextNode = curr->next; // Store next node
            curr->next = prev;  // Reverse the link
            prev = curr;  // Move prev forward
            curr = nextNode;  // Move curr forward
        }

        return prev; // New head (last node in original list)
    }
};

