#include<bits/stdc++.h>
using namespace std;

class Node 
{
public:
    int val;
    Node* next;

    Node(int val) 
    {
        this->val = val;
        this->next = nullptr;
    }
};

void insertTail(Node*& head, Node*& tail, int val) 
{
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int findMaximum(Node* head) {
    int maxVal = INT_MIN;  // Initialize maxVal to the smallest possible value

    while (head != nullptr) {
        if (head->val > maxVal) {
            maxVal = head->val;
        }
        head = head->next;
    }

    return maxVal;
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    int val;
    while (true) {
        cin >> val;
        if (val == -1)
            break;
        insertTail(head, tail, val);
    }

    int maximum = findMaximum(head);
    cout << maximum << endl;

    // Deallocate memory
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}

