class MyLinkedList {
private:
    struct Node {
        int val;
        Node* next;
        Node(int x) : val(x), next(nullptr) {}
    };
    Node* head;

public:
    MyLinkedList() : head(nullptr) {}

    int get(int index) {
        Node* curr = head;
        int i = 0;
        while (curr != nullptr) {
            if (i == index) return curr->val;
            curr = curr->next;
            i++;
        }
        return -1;
    }

    void addAtHead(int val) {
        Node* node = new Node(val);
        node->next = head;
        head = node;
    }

    void addAtTail(int val) {
        Node* node = new Node(val);
        if (!head) {
            head = node;
            return;
        }
        Node* curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = node;
    }

    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
            return;
        }
        Node* curr = head;
        int i = 0;
        while (curr != nullptr && i < index - 1) {
            curr = curr->next;
            i++;
        }
        if (curr == nullptr) return; // index > size
        Node* node = new Node(val);
        node->next = curr->next;
        curr->next = node;
    }

    void deleteAtIndex(int index) {
        if (!head) return;
        if (index == 0) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }
        Node* curr = head;
        int i = 0;
        while (curr->next != nullptr && i < index - 1) {
            curr = curr->next;
            i++;
        }
        if (curr->next == nullptr) return; // index out of bounds
        Node* toDelete = curr->next;
        curr->next = curr->next->next;
        delete toDelete;
    }
};

