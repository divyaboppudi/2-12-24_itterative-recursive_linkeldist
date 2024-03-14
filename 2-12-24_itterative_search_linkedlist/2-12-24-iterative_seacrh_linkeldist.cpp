#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

bool searchIterative(Node* head, int target) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == target)
            return true;
        current = current->next;
    }
    return false;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    int target = 2;
    if (searchIterative(head, target))
        std::cout << "Element " << target << " is present in the linked list." << std::endl;
    else
        std::cout << "Element " << target << " is not present in the linked list." << std::endl;

    return 0;
}


//changes2
