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
int main()
{
 node*head= new node(10);
node*a= new node(20);
node*b= new node(30);
node*c= new node(40);

head->next=a;
a->next=b;
b->next=c;
// c->next=a;
c->next=NULL;

node*slow=head;
node*fast=head;
bool flag=false;
while(fast==NULL && fast->next==NULL)
{
slow=slow->next;
fast=fast->next->next;
if(fast==slow)
{
flag=true;
break;
}
if(flag==true) cout<<"cycle detect"<<endl;
else cout<<"not cycle detect"<<endl;
}
return 0;
}