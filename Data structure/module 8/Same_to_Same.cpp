#include <bits/stdc++.h>
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

void insert_tail(node*& head,node*& tail,int val) 
{
node*newnode=new node(val);
if (head == NULL) 
{
head=newnode;
tail=newnode;
return;
}
tail->next=newnode;
tail=newnode;
}

bool find_same(node* head1, node* head2) 
{
while(head1!=NULL && head2!=NULL) 
{
if(head1->val!=head2->val)
{
return false;
}
head1=head1->next;
head2=head2->next;
}
return(head1 == NULL && head2 == NULL);
}

int main() 
{
node*head1=NULL;
node*tail1=NULL;
node*head2=NULL;
node*tail2=NULL;

int val1;
while(cin>>val1) 
{
if(val1==-1) 
{
break;
}
insert_tail(head1,tail1,val1);
}

int val2;
while(cin>>val2) 
{
if(val2==-1) 
{
break;
}
insert_tail(head2,tail2,val2);
}


bool same=find_same(head1,head2);

if(same)
{
cout<<"YES"<<endl;
} 
else 
{
cout<<"NO"<<endl;
}


    return 0;
}

