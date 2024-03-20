


// #include<bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
// int val;
// node*next;
// node(int val)
// {
// this->val=val;
// this->next=NULL;
// }
// };



#include<bits/stdc++.h>
using namespace std;

// Node definition
struct Node 
{
    int data;
    Node* next;

    // Constructor
    Node(int value, Node* nextNode = nullptr)
        : data(value), next(nextNode) {}
};

int main() {
    Node* head = nullptr;
    int value;
    int size = 0;

    // Taking input from the user
    while (cin >> value && value != -1) {
        head = new Node(value, head);
        size++;
    }

    // Printing the size of the linked list
    cout << size << endl;

    return 0;
}
