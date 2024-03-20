// #include <iostream>

// using namespace std;

// // Node definition
// struct Node {
//     int data;
//     Node* next;

//     // Constructor
//     Node(int value) : data(value), next(nullptr) {}
// };

// // Function to check if the linked list is sorted in ascending order
// bool isLinkedListSorted(Node* head) {
//     if (head == nullptr || head->next == nullptr) {
//         // Empty list or single node list is considered sorted
//         return true;
//     }

//     Node* current = head;

//     while (current->next != nullptr) {
//         if (current->data > current->next->data) {
//             // Found a pair of nodes that are not in ascending order
//             return false;
//         }
//         current = current->next;
//     }

//     // All nodes are in ascending order
//     return true;
// }

// int main() {
//     Node* head = nullptr;
//     int value;

//     // Taking input for the linked list
//     while (cin >> value && value != -1) {
//         Node* newNode = new Node(value);
//         newNode->next = head;
//         head = newNode;
//     }

//     // Checking if the linked list is sorted
//     bool isSorted = isLinkedListSorted(head);

//     // Printing the result
//     if (isSorted) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }

//     // Clean up the memory by deleting the linked list
//     Node* current = head;
//     while (current != nullptr) {
//         Node* temp = current;
//         current = current->next;
//         delete temp;
//     }

//     return 0;
// }



#include <iostream>

using namespace std;

// Node definition
struct Node {
    int data;
    Node* next;

    // Constructor
    Node(int value) : data(value), next(nullptr) {}
};

// Function to check if the linked list is sorted in ascending order
bool isLinkedListSorted(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        // Empty list or single node list is considered sorted
        return true;
    }

    Node* current = head;
    int prevData = current->data;

    while (current != nullptr) {
        if (current->data < prevData) {
            // Found a node that is not in ascending order
            return false;
        }
        prevData = current->data;
        current = current->next;
    }

    // All nodes are in ascending order
    return true;
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

    // Checking if the linked list is sorted
    bool isSorted = isLinkedListSorted(head);

    // Printing the result
    if (isSorted) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // Clean up the memory by deleting the linked list
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}

