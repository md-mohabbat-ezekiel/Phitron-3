#include<bits/stdc++.h>
using namespace std;
class node
{
public:
 int val;
 node* next;
  node(int val)
  {
  this->val=val;
  this->next=NULL;
  }
};
int main()
{
node* head=new node(10);
node* a=new node(20);
node* b=new node(20);
node* c=new node(20);
node* d=new node(20);
head->next=a;
a->next=b;
b->next=c;
c->next=d;

// cout<<head->val<<endl;
// cout<<head->next->val<<endl;
// cout<<head->next->next->val<<endl;
// cout<<head->next->next->next->val<<endl;

//shortcut
// while(head!=NULL)
// {
// cout<<head->val<<endl;
// head=head->next;
// }
node*tmp=head;
while(tmp!=NULL)
{
cout<<tmp->val<<endl;
tmp=tmp->next;
}
return 0;
}