#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertTail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

bool areListsEqual(Node* head1, Node* head2) {
    while (head1 != NULL && head2 != NULL) {
        if (head1->val != head2->val)
            return false;

        head1 = head1->next;
        head2 = head2->next;
    }

    if (head1 != NULL || head2 != NULL)
        return false;

    return true;
}

int main() {
    Node* head1 = NULL;
    Node* head2 = NULL;
    Node* tail1 = NULL;
    Node* tail2 = NULL;
    int val1, val2;

    while (true) {
        cin >> val1;
        if (val1 == -1)
            break;

        insertTail(head1, tail1, val1);
    }

    while (true) {
        cin >> val2;
        if (val2 == -1)
            break;

        insertTail(head2, tail2, val2);
    }

    bool equal = areListsEqual(head1, head2);

    if (equal) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
