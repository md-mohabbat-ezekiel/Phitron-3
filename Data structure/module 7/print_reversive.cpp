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


void print_recursion(node*n)
{
if(n==NULL) return;
cout<<n->val<<" "<<endl;;
print_recursion(n->next);
}

void print_revers(node*n)
{
if(n==NULL) return;
print_recursion(n->next);
cout<<n->val<<" "<<endl;

}

int main()
{
  node*head=new node(10);
node*a=new node(20);
node*b=new node(30);
node*c=new node(40);
node*d=new node(50);

head->next=a;
a->next=b;
b->next=c;
c->next=d;

print_recursion(head);
print_revers(head);
return 0;
}