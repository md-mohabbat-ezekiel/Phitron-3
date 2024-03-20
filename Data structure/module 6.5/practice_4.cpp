#include <iostream>

using namespace std;

// Node definition
struct Node {
    int data;
    Node* next;

    // Constructor
    Node(int value) : data(value), next(nullptr) {}
};

// Function to insert a node at a given index
void insertAtIndex(Node* &head, int index, int value) {
    if (index < 0) {
        cout << "Invalid" << endl;
        return;
    }

    Node* newNode = new Node(value);

    if (index == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* current = head;
    int count = 0;

    while (current != nullptr && count < index - 1) {
        current = current->next;
        count++;
    }

    if (current == nullptr) {
        cout << "Invalid" << endl;
        return;
    }

    newNode->next = current->next;
    current->next = newNode;
}

// Function to print the linked list
void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int value;

    // Taking input for the linked list
    while (cin >> value && value != -1) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    int q;
    cin >> q;

    // Performing the queries
    for (int i = 0; i < q; i++) {
        int index, value;
        cin >> index >> value;
        insertAtIndex(head, index, value);
    }

    // Printing the updated linked list
    printLinkedList(head);

    // Clean up the memory by deleting the linked list
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
