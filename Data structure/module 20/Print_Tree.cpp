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

void print_reverse(node* root) 
{
if(root==NULL) return;
queue<node*> q;
stack<int> s;
q.push(root);

while(!q.empty()) 
{
node* f=q.front();
q.pop();
s.push(f->val);
if(f->right) q.push(f->right);
if (f->left) q.push(f->left);
}

while(!s.empty()) 
{
cout<<s.top()<<" ";
s.pop();
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
print_reverse(root);
return 0;
}