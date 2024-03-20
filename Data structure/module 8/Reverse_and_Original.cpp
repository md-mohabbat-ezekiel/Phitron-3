#include<bits/stdc++.h>
using namespace std;
class node 
{
public:
int val;
node*next;
node(int val) 
{
this->val = val;
this->next = NULL;
}
};

void insert_tail(node*& head, node*& tail, int val) 
{
node*newnode=new node(val);
if (head==NULL) 
{
head=newnode;
tail=newnode;
return;
}
tail->next=newnode;
tail=newnode;
}

void print_reverse(node* head) 
{
if(head==NULL)
return;
print_reverse(head->next);
cout << head->val << " ";
}

void print_original(node* head) 
{
if(head==NULL)
return;
cout<<head->val<<" ";
print_original(head->next);
}

int main() 
{
node*head=NULL;
node*tail=NULL;
int val;
while(true) 
{
cin>>val;
if(val==-1)
break;
insert_tail(head, tail, val);
}

print_reverse(head);
cout << endl;
print_original(head);
cout << endl;
    return 0;
}
