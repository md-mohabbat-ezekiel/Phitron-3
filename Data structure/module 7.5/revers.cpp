#include <bits/stdc++.h>
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

void insert_tail(Node*& head, Node*& tail, int val) 
{
    Node* new_node = new Node(val);
    if (head == nullptr) 
    {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    tail = new_node;
}

void print_reverse(Node* n) 
{
    if (n == nullptr)
        return;
    print_reverse(n->next);
    cout << n->val << " ";
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    int val;
    while (true) {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }

    print_reverse(head);
    cout << endl;

    // Deallocate memory
    Node* current = head;
    while (current != nullptr) 
    {
        Node* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}

