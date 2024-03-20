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

int sum_node(node* root)
{
if(root==NULL) return 0;
int count=0;
queue<node*>q;
q.push(root);

while(!q.empty())
{
node* f=q.front();
q.pop();
count+=f->val;
if(f->left) q.push(f->left);
if(f->right) q.push(f->right);
}
return count;
}

int main()
{
 int val;
 node*root=NULL;
 queue<node**>q;
 q.push(&root); 

 while(!q.empty())
 {
 node**p=q.front();
 q.pop();
 cin>>val;

 if(val!=-1)
 {
 *p=new node(val);
  q.push(&((*p)->left));
  q.push(&((*p)->right));
 }
}
int sum=sum_node(root);
cout<<sum<<endl;
return 0;
}