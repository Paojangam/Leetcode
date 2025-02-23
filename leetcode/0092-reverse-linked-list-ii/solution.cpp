class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head; // No need to reverse

        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        
        // Step 1: Move `prev` to the node before `left`
        for (int i = 1; i < left; i++) {
            prev = prev->next;
        }

        // Step 2: Reverse the sublist
        ListNode* curr = prev->next; // First node in the sublist
        ListNode* nextNode = nullptr;
        ListNode* leftNode = curr; // Store left node to reconnect later

        for (int i = 0; i < (right - left + 1); i++) {
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        // Step 3: Reconnect the reversed part
        leftNode->next = curr;
        if (left > 1) {
            ListNode* beforeLeft = dummy;
            for (int i = 1; i < left; i++) {
                beforeLeft = beforeLeft->next;
            }
            beforeLeft->next = prev;
        } else {
            head = prev; // If left == 1, update head
        }

        return head;
    }
};

