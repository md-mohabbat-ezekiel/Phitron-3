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

void insert_tail(node*&head,node*&tail,int val)
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

int find_max(node*head)
{
int max=INT_MIN;
while(head!=NULL)
{
if(head->val>max)
{
max=head->val;
}
head=head->next;
}
return max;
}

int find_min(node*head)
{
int min=INT_MAX;
while(head!=NULL)
{
if(head->val<min)
{
min=head->val;
}
head=head->next;
}
return min;
}

int main()
{
  node*head=NULL;
  node*tail=NULL;
  int val;
  while(true)
  {
  cin>>val;
  if(val==-1)
  {
  break;
  }
  insert_tail(head,tail,val);
  }

int printmax=find_max(head);
int printmin=find_min(head);
cout<<printmax<<" "<<printmin;

node*current=head;
while(current!=nullptr) 
{
node*temp=current;
current=current->next;
delete temp;
}
return 0;
}