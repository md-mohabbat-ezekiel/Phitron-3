#include<bits/stdc++.h>
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
node* root;
if(val==-1) root=NULL;
else root= new node (val);
queue<node*> q;
if(root) q.push(root);

while(!q.empty())
{
node* p=q.front();
q.pop();
int l,r;
cin>>l>>r;
node*my_left;
node*my_right;

if(l==-1) my_left=NULL;
else my_left=new node(l);
if(r==-1) my_right=NULL;
else my_right=new node(r);

p->left=my_left;
p->right=my_right;

if(p->left) q.push(p->left);
if(p->right) q.push(p->right);
}
return root;
}

void level_order(node* root)
{
if(root==NULL) cout<<"tree don't exist"<<endl; return;
queue<node*> q;
if(root) q.push(root);

while(!q.empty())
{
node* f=q.front();
q.pop();
cout<<f->val<<" ";

if(f->left) q.push(f->left);
if(f->right) q.push(f->right);
}

}

bool search(node*root,int x)
{
if(root==NULL) return false;
if(root->val==x) return true;

if(x < root->val)
{
return search(root->left,x);
}
else
{
return search(root->right,x);
}

}

int main()
{
 node* root=input_tree();
//  level_order(root); 
 if(search(root,6)) cout<<"yes found"<<endl;
 else cout<<"not found"<<endl;
return 0;
}

// perfect tee =best=log(n)
// left to left=worst=n