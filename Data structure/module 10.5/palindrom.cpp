#include<bits/stdc++.h>
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

bool isPalindrome(Node* head, Node* tail) {
    while (head != NULL && tail != NULL) {
        if (head->val != tail->val)
            return false;
        head = head->next;
        tail = tail->prev;
    }
    return true;
}


int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int val;

    while (true) {
        cin >> val;
        if (val == -1)
            break;

        insertTail(head, tail, val);
    }

    bool palindrome = isPalindrome(head, tail);

    if (palindrome)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
