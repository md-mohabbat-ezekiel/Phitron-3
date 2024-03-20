#include <iostream>
using namespace std;

// Node definition
struct Node 
{
    int data;
    Node* next;

    // Constructor
    Node(int value) : data(value), next(nullptr) {}
};

// Function to calculate the length of the linked list
int getLength(Node* head) 
{
    int length = 0;
    while (head != nullptr) 
    {
        length++;
        head = head->next;
    }
    return length;
}

// Function to find and print the middle element(s) of the linked list
void printMiddle(Node* head) 
{
    int length = getLength(head);
    Node* mid = head;
    Node* midNext = nullptr;

    for (int i = 0; i < length / 2; i++) 
    {
        midNext = mid;
        mid = mid->next;
    }

    if (length % 2 == 0) {
        cout <<  mid->data << " " << midNext->data << endl;
    } else {
        cout << mid->data << endl;
    }
}

int main() {
    Node* head = nullptr;
    int value;

    // Taking input from the user
    while (cin >> value && value != -1) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Finding and printing the middle element(s) of the linked list
    printMiddle(head);

    // Clean up the memory by deleting the linked list
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
