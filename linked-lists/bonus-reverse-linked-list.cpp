#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseList(ListNode* head) {
    ListNode* previous = nullptr;
    ListNode* current = head;

    while (current != nullptr) {
        ListNode* nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
    }

    return previous;
}

void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) cout << " -> ";
        head = head->next;
    }
    cout << "\n";
}

int main() {
    // Test 1: multiple nodes
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(3);

    head1 = reverseList(head1);
    cout << "Test 1: ";
    printList(head1);

    // Test 2: single node
    ListNode* head2 = new ListNode(5);
    head2 = reverseList(head2);
    cout << "Test 2: ";
    printList(head2);

    return 0;
}
