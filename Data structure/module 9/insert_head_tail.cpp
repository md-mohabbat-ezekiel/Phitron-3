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

void  insert_at_position(node*head,int pos,int val)
{
node*newnode=new node(val);
node*tmp=head;
for(int i=0;i<pos-1;i++)
{
tmp=tmp->next;
}
// cout<<tmp->val<<" "<<endl;
newnode->next=tmp->next;//100->30
tmp->next=newnode;//20->100
newnode->next->prev=newnode;//100<-30
newnode->prev=tmp;//20<-100;
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

void insert_head(node*&head,node*&tail,int val)
{
node*newnode=new node(val);
if(head==NULL)
{
head=newnode;
tail=newnode;
return;
}
newnode->next=head;
head->prev=newnode;
head=newnode;
}

void insert_tail(node*&head,node*&tail,int val)
{
node*newnode=new node(val);
if(tail==NULL)
{
head=newnode;
tail=newnode;
return;
}
tail->next=newnode;
newnode->prev=tail;
tail=tail->next;
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
int pos,val;
cin>>pos>>val;
if(pos==0)
{
insert_head(head,tail,val);
}
else if(pos==size(head))
{
insert_tail(tail,tail,val);
}
else if(pos>=size(head))
{
cout<<"invalid"<<endl;
}
else
{
insert_at_position(head,pos,val);
}

print_normal(head);  
print_reverse(tail);
return 0;
}