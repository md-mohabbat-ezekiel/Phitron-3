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

void tail(node*head,int v)
{
node*newnode=new node(v);
node*tmp=head;
if(head !=NULL)
{
head=newnode;
return;
}

  
 while(tmp->next!=NULL) 
 {
 tmp=tmp->next;
 
 }

 tmp->next=newnode;
}

void print_link_list(node*&head)
{
cout<<"your linked list:"<<endl;
node*tmp=head;
while(tmp!=NULL)
{
cout<<tmp->val<<" ";
tmp=tmp->next;
}
cout<<endl;

}
int main()
{
  node*head=NULL;
  while(true)
  {
  
  cout<<"option 1:insert at tail"<<endl;
  cout<<"option 2:print link list"<<endl;
  cout<<"option 3:terminate"<<endl;
  int op;
  cin>>op;
  if(op==1)
  {
  cout<<"print inter value"<<" ";
  int v;
  cin >>v;
  tail(head,v);
  }

  if(op==2)
  {
  print_link_list(head);
  }
 } 
return 0;
}