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

void print_normal(node*head)
{
node*tmp=head;
while(tmp!=NULL)
{
cout<<tmp->val<<" ";
tmp=tmp->next;
}
cout<<endl;
}

void print_reverse(node*tail)
{
node*tmp=tail;
while(tmp!=NULL)
{
cout<<tmp->val<<" ";
tmp=tmp->prev;
}
cout<<endl;
}

void delete_at_position(node*head,int pos)
{
node*tmp=head;
for(int i=0;i<pos-1;i++)
{
tmp=tmp->next;
}
node*deletenode=tmp->next;
tmp->next=tmp->next->next;
tmp->next->prev=tmp;
delete deletenode;

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

// void delete_tail(node*&tail)
// {
// node*deletenode=tail;
// tail=tail->prev;
// delete deletenode;
// tail->next=NULL;
// }

void delete_tail_2(node*&head,node*&tail)
{
node*deletenode=tail;
tail=tail->prev;
delete deletenode;
if(tail==NULL)
{
head==NULL;
return;
}
tail->next=NULL;
}

// void delete_head(node*&head)
// {
// node*deletenode=head;
// head=head->next;
// delete deletenode;
// head->prev=NULL;
// }

void delete_head_2(node*&head,node*&tail)
{
node*deletenode=head;
head=head->next;
delete deletenode;
if(head==NULL)
{
tail==NULL;
return;
}
head->prev=NULL;
}


int main()
{
node*head= new node(10);
node*a= new node(20);
node*b= new node(30);
node*c= new node(40);
node*tail=c;


head->next=a;
a->prev=head;
a->next=b;
b->prev=a;
b->next=c;
c->prev=b;
int pos;
cin>>pos;
if(pos>=size(head))
{
cout<<"invalid"<<endl;
}

if(pos==0)
{
// delete_head(head);
delete_head_2(head,tail);
}

if(pos==size(head)-1)
{
// delete_tail(tail);
delete_tail_2(head,tail);
}
else
{
delete_at_position(head,pos);
}

print_normal(head);  
print_reverse(tail);
return 0;
}