#include<bits/stdc++.h>
using namespace std;
using namespace std;
class node
{
public:
int val;
node * left;
node * right;
node(int val)
{
this->val=val;
this->left=NULL;
this->right=NULL;
}
};

node* input_tree()
{
int val;
cin>>val;
node * root;
if(val==-1) root=NULL;
else root=new node(val);
queue<node*>q;
if(root) q.push(root);

while(!q.empty())
{
//1.ber kore ana;
node*p=q.front();
q.pop();
//2.jabotio ja kaj ase
int l,r;
cin>>l>>r;
node*my_left;
node*my_right;

if(l==-1) my_left=NULL;
else
{
my_left=new node(l);
}

if(r==-1) my_right=NULL;
else
{
my_right=new node(r);
}
p->left=my_left;
p->right=my_right;

//3.tar children gula ke rakha
if(p->left) q.push(p->left);
if(p->right) q.push(p->right);
}
return root;
}

void level_order(node*root)
{
if(root==NULL)
{
cout<<"tree nai"<<endl;
return ;
}
queue<node*>q;
q.push(root);
while(!q.empty())
{
//1.ber kore ana;
node*f=q.front();
q.pop();
//2.jabotio ja kaj ase
cout<<f->val<<" ";
//3.tar children gula ke rakha
if(f->left!=NULL) q.push(f->left);
if(f->right!=NULL) q.push(f->right);
}

}


int main()
{
node*root=input_tree();
level_order(root);
return 0;
}