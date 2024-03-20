#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node*& head, Node*& tail, int val) {
    Node* new_node = new Node(val);
    if (head == NULL) {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    tail = new_node;
}

bool check_same_size(Node* head1, Node* head2) {
    int count1 = 0, count2 = 0;
    Node* curr1 = head1;
    Node* curr2 = head2;

    while (curr1 != NULL) {
        count1++;
        curr1 = curr1->next;
    }

    while (curr2 != NULL) {
        count2++;
        curr2 = curr2->next;
    }

    return count1 == count2;
}

int main() {
    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;

    int val1, val2;
    while (true) {
        cin >> val1;
        if (val1 == -1)
            break;
        cin >> val2;
        if (val2 == -1)
            break;
        insert_tail(head1, tail1, val1);
        insert_tail(head2, tail2, val2);
    }

    bool result = check_same_size(head1, head2);

    if (result)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}


