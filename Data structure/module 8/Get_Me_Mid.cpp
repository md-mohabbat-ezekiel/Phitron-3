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


int find_length(node*head)
{
int length=0;
while(head!=NULL)
{
length++;
head=head->next;
}
return length;
}

void print_middle(node*head)
{
int length=find_length(head);
node*mid=head;
node*midnext=NULL;
for(int i=0;i<length/2;i++)
{
midnext=mid;
mid=mid->next;
}
if(length%2==0)
{
cout<<mid->val<<" "<<midnext->val<<endl;
}
else
{
cout<<mid->val<<endl;
}
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

 for(node*i=head;i->next!=NULL;i=i->next) 
 {
  for(node*j=i->next;j!=NULL;j=j->next) 
  {
  if(i->val > j->val) 
   {
   swap(i->val,j->val);
   }
  }
 }
  print_middle(head);
return 0;
}