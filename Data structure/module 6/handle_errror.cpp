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
 cout<<endl<<"insert at tail"<<endl<<endl;
return;
}

  
 while(tmp->next!=NULL) 
 {
 tmp=tmp->next;
 
 }

 tmp->next=newnode;
//  cout<<endl<<"insert at tail"<<endl<<endl;
}

void print_link_list(node*&head)
{
cout<<endl;
cout<<"your linked list:"<<endl;
node*tmp=head;
while(tmp!=NULL)
{
cout<<tmp->val<<" ";
tmp=tmp->next;
}
cout<<endl<<endl;

}

void position(node*head,int pos,int v)
{
node*newnode=new node(v);
node*tmp=head;
for(int i=0;i<pos-1;i++)
{
tmp=tmp->next;
if(tmp==NULL)
{
cout<<endl<<"index value"<<endl<<endl;
return;
}
}
newnode->next=tmp->next;
tmp->next=newnode;
cout<<endl<<endl<<"insert at position"<<pos<<endl<<endl;
}

void insert_head(node* &head,int v)
{
node* newnode=new node(v);
newnode->next=head;
head=newnode;
cout<<endl<<endl<<"insert head"<<endl<<endl;
}

 void delete_position(node*head,int pos)
 {
 node*tmp=head;
 for(int i=0;i<pos-1;i++)
 {
 tmp=tmp->next;
 if(tmp==NULL)
{
cout<<endl<<"index value"<<endl<<endl;
return;
}
 }
   node*deletenode=tmp->next;
   tmp->next=tmp->next;
   delete deletenode;
   cout<<endl<<" delete position"<<endl<<endl;
 }

void delete_head(node*&head)
{
 if(head == NULL)
{
cout<<endl<<"head is not avilable"<<endl<<endl;
return;
}

node*deletenode=head;
head=head->next;
delete deletenode;
cout<<endl<<" delete head"<<endl<<endl;
}


int main()
{
  node*head=NULL;
  while(true)
  {
  
  cout<<"option 1:insert at tail"<<endl;
  cout<<"option 2:print link list"<<endl;
  cout<<"option 3:inser at position"<<endl;
  cout<<"option 4:inser at head"<<endl;
  cout<<"option 5:delete position"<<endl;
  cout<<"option 6:delete head"<<endl;
  cout<<"option 7:terminate"<<endl;
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

  else if(op==3)
  {
   int pos,v;
   cout<<"enter pos"<<endl;
   cin>>pos;
   cout<<"enter value"<<endl;
   cin>>v;
   if(pos==0)
   {
   insert_head(head,v);
   }
   else
   {
   position(head,pos,v);
   }
  }

  else if(op=4)
  {
  int v;
  cout<<"enter value ";
  cin>>v;
  insert_head(head,v);
  }

  else if(op==5)
  {
  int pos;
  cout<<"enter position ";
  cin>>pos;
  if(pos==0)
  {
  delete_head(head);
  }
  else
  {
  delete_position(head,pos);
  }

  }

  else if(op==6)
  {
  delete_head(head);
  }
  else if(op==7)
  {
  break;
  }


} 
return 0;
}