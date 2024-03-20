#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

void insert_tail(Node*& head, Node*& tail, int val) {
    Node* new_node = new Node(val);
    if (head == nullptr) {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    tail = new_node;
}

int getLength(Node* head) {
    int length = 0;
    while (head != nullptr) {
        length++;
        head = head->next;
    }
    return length;
}

void printMiddle(Node* head) {
    int length = getLength(head);
    Node* mid = head;
    Node* midNext = nullptr;

    for (int i = 0; i < length / 2; i++) {
        midNext = mid;
        mid = mid->next;
    }

    if (length % 2 == 0) {
        cout <<midNext->val<< " " <<  mid->val  << endl;
    } else {
        cout << mid->val << endl;
    }
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
    printMiddle(head);

    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    return 0;
}
