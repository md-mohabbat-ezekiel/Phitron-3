#include<bits/stdc++.h>
using namespace std;
class Node
 {
 public:
    int data;
    Node* next;
};

int main() 
{
    Node* head = NULL;
    int value;
    int size = 0;

    // Taking input from the user
    while (cin >> value && value != -1) 
    {
        // head = new Node{value, head};
        size++;
    }
    cout << size << endl;

    return 0;
}