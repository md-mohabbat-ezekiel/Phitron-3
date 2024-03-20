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


int size(node*head)
{
node*tmp=head;
int cnt=0;
while(tmp!=NULL)
{
cnt++;
tmp=tmp->next;
}
return cnt;
}



void insert(node*head,int pos,int val)
{
node* newnode=new node(val);
node * tmp=head;
for(int i=0;i<pos-1;i++)
{
tmp = tmp->next;
}
// cout<<tmp->val<<endl;
newnode->next=tmp->next;
tmp->next=newnode;
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
int pos,val;
cin>>pos>>val;
if(pos> size(head))
{
cout<<"invalid index"<<endl;;
}
else
{
insert(head,pos,val);
}
// cout<<(*a).val<<endl;
// cout<<a->val<<endl;
// cout<<a->next->val<<endl;

// print_link_list(head);
// insert(head,2,100);
print_link_list(head);
return 0;
}