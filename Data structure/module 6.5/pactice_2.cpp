#include<bits/stdc++.h>
using namespace std;

// Node definition
struct Node 
{
    int data;
    Node* next;

    // Constructor
    Node(int value) : data(value), next(nullptr) {}
};

// Function to check for duplicate values in the linked list
bool hasDuplicates(Node* head)
{
    unordered_set<int> visited;

    Node* current = head;
    while (current != nullptr) 
    {
        if (visited.find(current->data) != visited.end()) 
        {
            return true; // Duplicate found
        }
        visited.insert(current->data);
        current = current->next;
    }

    return false; // No duplicates found
}

int main() 
{
    Node* head = nullptr;
    int value;

    // Taking input from the user
    while (cin >> value && value != -1) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Checking if the linked list has duplicates
    bool hasDuplicatesFlag = hasDuplicates(head);

    // Printing the result
    if (hasDuplicatesFlag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
