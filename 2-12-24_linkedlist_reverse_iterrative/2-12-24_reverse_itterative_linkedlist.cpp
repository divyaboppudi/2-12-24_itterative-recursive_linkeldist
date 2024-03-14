#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

Node* reverseLinkedListIterative(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        // Store the next node in the list
        next = current->next;
        // Reverse the link of the current node
        current->next = prev;
        // Move prev and current pointers one step forward
        prev = current;
        current = next;
    }

    // After the loop, 'prev' will be pointing to the new head of the reversed list
    return prev;
}

void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    // Create a linked list
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    std::cout << "Original linked list: ";
    printLinkedList(head);

    // Reverse the linked list iteratively
    head = reverseLinkedListIterative(head);

    std::cout << "Reversed linked list: ";
    printLinkedList(head);

    return 0;
}

//chnages1
