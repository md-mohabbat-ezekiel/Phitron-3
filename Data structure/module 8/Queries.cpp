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


void insert_head(node*& head,node*& tail,int val) 
{
node*newnode = new node(val);
if(head==NULL) 
{
head=newnode;
tail=newnode;
} 
else 
{
newnode->next=head;
head=newnode;
}
}


void insert_tail(node*& head,node*& tail,int val) 
{
node*newnode=new node(val);
if(head==NULL) 
{
head=newnode;
tail=newnode;
} 
else 
{
tail->next=newnode;
tail=newnode;
}
}


void print_head_tail(node*head,node*tail) 
{
if(head==NULL||tail==NULL) 
{
cout<<"Empty List"<<endl;
}
else 
{
cout<<head->val<<" "<<tail->val<<endl;
}
}

int main() 
{
node*head=NULL;
node*tail=NULL;
int q;
cin>>q;
for(int i=0;i<q;i++) 
{
int x,v;
cin>>x>>v;
if(x==0) 
{
insert_head(head, tail,v);
} 
else if(x==1) 
{
insert_tail(head,tail,v);
}
print_head_tail(head, tail);
}
 return 0;
}
