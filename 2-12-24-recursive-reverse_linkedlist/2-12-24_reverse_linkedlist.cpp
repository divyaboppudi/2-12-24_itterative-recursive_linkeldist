#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

Node* reverseLinkedListRecursive(Node* head) {
    // Base case: if the current node is nullptr or the last node in the list, return it
    if (head == nullptr || head->next == nullptr)
        return head;

    // Recursively reverse the sublist starting from the next node
    Node* newHead = reverseLinkedListRecursive(head->next);

    // Reverse the links between the current node and the next node
    head->next->next = head;
    head->next = nullptr;

    // Return the new head of the reversed sublist
    return newHead;
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

    // Reverse the linked list recursively
    head = reverseLinkedListRecursive(head);

    std::cout << "Reversed linked list: ";
    printLinkedList(head);

    return 0;
}

//changes1
