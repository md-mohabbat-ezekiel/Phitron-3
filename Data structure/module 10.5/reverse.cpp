#include<bits/stdc++.h>
using namespace std;
class node
{
public:
int val;
node*next;
node*prev;
 node(int val)
 {
 this->val=val;
 this->next=NULL;
 this->prev=NULL;
 }
};


void insertTail(node*& head, node*& tail, int val) 
{
    node* newNode = new node(val);
    if (head == NULL) 
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void reverse(node*head,node*tail)
{
node*i=head;
node*j=tail;
while(i!=j && i->next!=j)
{
swap(i->val,j->val);
i=i->next;
j=j->prev;
}
swap(i->val,j->val);
}


void print(node*head) 
{
while(head!=NULL) 
{
cout << head->val << " ";
head = head->next;
}
cout << endl;
}


int main() 
{
    node* head = NULL;
    node* tail = NULL;
    int val;

    while (true) 
    {
        cin >> val;
        if (val == -1)
            break;

        insertTail(head, tail, val);
    }
reverse(head,tail);
print(head);
return 0;
}    