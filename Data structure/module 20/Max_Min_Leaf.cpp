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

void leaf_mn_mx(node* root, int & mn, int & mx) 
{
if(root==NULL) return;
queue<node*> q;
q.push(root);

while(!q.empty()) 
 {
node* p=q.front();
q.pop();

if (p->left==NULL && p->right==NULL) 
{

 if(p->val < mn) 
 {
 mn=p->val;
 }
 if (p->val > mx) 
 {
 mx=p->val;
 }

}

if(p->left) q.push(p->left);

if(p->right) q.push(p->right);
 }
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

int min=numeric_limits<int>::max();
int max=numeric_limits<int>::min();
leaf_mn_mx(root,min,max);
cout<<max<<" "<<min<<endl;
return 0;
}
