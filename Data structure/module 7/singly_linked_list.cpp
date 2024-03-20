#include<bits/stdc++.h>
using namespace std;
class node
{
public:
int val;
node*next;
 node(int val)
 {
 this->val=val;
 this->next=NULL;
 }
};

void print_link_list(node * head)
{
node*tmp=head;
while(tmp!=NULL)
{
cout<< tmp->val<<" ";
tmp=tmp->next;

}
cout<<endl;
}


int main()
{
//  node a,b;
//  a.val=10;
//  b.val=20;
//  a.next=&b; 
node*head=new node(10);
node*a=new node(20);
node*b=new node(30);
node*c=new node(40);
node*d=new node(50);
head->next=a;
a->next=b;
b->next=c;
c->next=d;
// cout<<(*a).val<<endl;
// cout<<a->val<<endl;
// cout<<a->next->val<<endl;
print_link_list(head);

return 0;
}