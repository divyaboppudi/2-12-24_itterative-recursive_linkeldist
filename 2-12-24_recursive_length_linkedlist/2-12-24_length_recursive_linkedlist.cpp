#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

int findLengthRecursive(Node* head) {
    // Base case: if head is null, return 0
    if (head == nullptr)
        return 0;
    // Recursive call to find length of the rest of the list
    return 1 + findLengthRecursive(head->next);
}

int main() {
    // Create a linked list
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Find the length of the linked list recursively
    int length = findLengthRecursive(head);
    std::cout << "Length of the linked list: " << length << std::endl;

    return 0;
}

//changes1
