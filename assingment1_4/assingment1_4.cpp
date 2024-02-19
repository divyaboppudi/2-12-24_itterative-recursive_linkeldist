#include <iostream>  // Include the input/output stream library
#include <vector>    // Include the vector container library
#include <queue>     // Include the queue container library
using namespace std; // Allow the use of standard library entities without prefixing with std::

class DynamicDataStructureApp { // Define a class named DynamicDataStructureApp
public:
    void run(); // Declare a public member function named run()

private:
    // Declare private member functions for handling each data structure
    void handleList();
    void handleLinkedList();
    void handleArray();
    void handleStack();
    void handleQueue();
    void handleBinaryTree();
};

// Define the run() function
void DynamicDataStructureApp::run() {
    cout << "Choose a data structure:" << endl; // Output a message prompting the user to choose a data structure
    cout << "1. List" << endl;  // Output options for data structures
    cout << "2. Linked List" << endl;
    cout << "3. Array" << endl;
    cout << "4. Stack" << endl;
    cout << "5. Queue" << endl;
    cout << "6. Binary Tree" << endl;

    int choice; // Declare a variable to store the user's choice
    cin >> choice; // Read the user's choice from the standard input

    switch (choice) { // Start a switch statement based on the user's choice
    case 1: // If the choice is 1, call the handleList() function
        handleList();
        break;
    case 2: // If the choice is 2, call the handleLinkedList() function
        handleLinkedList();
        break;
    case 3: // If the choice is 3, call the handleArray() function
        handleArray();
        break;
    case 4: // If the choice is 4, call the handleStack() function
        handleStack();
        break;
    case 5: // If the choice is 5, call the handleQueue() function
        handleQueue();
        break;
    case 6: // If the choice is 6, call the handleBinaryTree() function
        handleBinaryTree();
        break;
    default: // If the choice is not in the range of 1 to 6, output an error message
        cout << "Invalid choice." << endl;
    }
}

// Define the handleList() function
void DynamicDataStructureApp::handleList() {
    vector<int> list; // Declare a vector to store the list
    int size; // Declare a variable to store the size of the list
    cout << "Enter the size of the list: "; // Output a message prompting the user to enter the size
    cin >> size; // Read the size from the standard input

    cout << "Enter data for the list (separated by spaces): "; // Output a message prompting the user to enter data
    for (int i = 0; i < size; ++i) { // Loop to read data from the user
        int data;
        cin >> data;
        list.push_back(data); // Add the data to the end of the list
    }

    cout << "List: "; // Output a message indicating the list
    for (int num : list) { // Loop to output the elements of the list
        cout << num << " ";
    }
    cout << endl; // Output a newline character
}

// Define the handleLinkedList() function (similar comments as handleList() function)
void DynamicDataStructureApp::handleLinkedList() {
    class Node { // Define a nested class named Node for representing nodes in a linked list
    public:
        int data; // Data of the node
        Node* next; // Pointer to the next node
        Node(int data) : data(data), next(nullptr) {} // Constructor to initialize data and next
    };

    Node* head = nullptr; // Declare a pointer to the head of the linked list
    int size; // Declare a variable to store the size of the linked list
    cout << "Enter the size of the linked list: ";
    cin >> size; // Read the size from the standard input

    cout << "Enter data for the linked list: "; // Output a message prompting the user to enter data
    for (int i = 0; i < size; ++i) { // Loop to read data from the user
        int data;
        cin >> data;
        Node* newNode = new Node(data); // Create a new node with the input data
        if (head == nullptr) { // If the list is empty, set the new node as the head
            head = newNode;
        }
        else { // Otherwise, traverse to the end of the list and append the new node
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    cout << "Linked List: "; // Output a message indicating the linked list
    Node* temp = head; // Initialize a temporary pointer to traverse the list
    while (temp != nullptr) { // Loop to traverse the list and output the elements
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl; // Output a newline character

    // Free memory by deleting all nodes of the linked list
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

// Define the handleArray() function (similar comments as handleList() function)
void DynamicDataStructureApp::handleArray() {
    int* arr; // Declare a pointer to store the array
    int size; // Declare a variable to store the size of the array
    cout << "Enter the size of the array: ";
    cin >> size; // Read the size from the standard input

    arr = new int[size]; // Dynamically allocate memory for the array

    cout << "Enter data for the array: "; // Output a message prompting the user to enter data
    for (int i = 0; i < size; ++i) { // Loop to read data from the user
        cin >> arr[i];
    }

    cout << "Array: "; // Output a message indicating the array
    for (int i = 0; i < size; ++i) { // Loop to output the elements of the array
        cout << arr[i] << " ";
    }
    cout << endl; // Output a newline character

    delete[] arr; // Free the dynamically allocated memory
}

// Define the handleStack() function (similar comments as handleList() function)
void DynamicDataStructureApp::handleStack() {
    vector<int> stack; // Declare a vector to store the stack
    int size; // Declare a variable to store the size of the stack
    cout << "Enter the size of the stack: ";
    cin >> size; // Read the size from the standard input

    cout << "Enter data for the stack (top to bottom): "; // Output a message prompting the user to enter data
    for (int i = 0;

