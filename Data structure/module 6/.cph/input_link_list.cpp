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
cout<<endl<<endl;;

}


int main()
{

int val;
node*head=new node(val);
while(true)
{
cin>>val;
if(val==-1)break;
tail(head,val);


}
print_link_list(head);




};