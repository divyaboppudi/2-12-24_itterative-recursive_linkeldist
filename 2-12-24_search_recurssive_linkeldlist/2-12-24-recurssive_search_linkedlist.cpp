#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

bool searchRecursive(Node* head, int target) {
    if (head == nullptr)
        return false;
    if (head->data == target)
        return true;
    return searchRecursive(head->next, target);
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    int target = 2;
    if (searchRecursive(head, target))
        std::cout << "Element " << target << " is present in the linked list." << std::endl;
    else
        std::cout << "Element " << target << " is not present in the linked list." << std::endl;

    return 0;
}

//changes1
