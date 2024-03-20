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

void delete_node(node* head,int pos)
{
node*tmp=head;
for(int i=1;i<pos-1;i++)
{
tmp=tmp->next;
}
node*deletenode=tmp->next;
tmp->next=tmp->next->next;
delete deletenode;
}

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

int size(node* head)
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

void delete_head(node*&head)
{
node * nodedelete=head;
head=head->next;
delete nodedelete;
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

print_link_list(head);
int pos;
cin>>pos;

if(pos >=size(head))
{
cout<<"invalid "<<endl;
}

else if(pos==0)
{
delete_head(head);
}
else
{
delete_node(head,pos);
}

print_link_list(head);
}