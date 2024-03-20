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

void insert_tail(node*head,node*tail,node val)
{
node*newnode=new node(val);
if(head==NULL)
{
head=newnode;
tail=newnode;
return;
}
tail->next=newnode;
tail=newnode;

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

int main()
{
node*head=NULL;
node*tail=NULL;
int val;
while(true)
{
cin>>val;
if(val==-1)break;
insert_tail(head,tail,val);
}
print_link_list(head);
return 0;
}