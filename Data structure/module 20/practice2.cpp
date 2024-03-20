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

void print_level(node* root, int level) 
{
if(root==NULL) 
{
cout<<"Invalid"<<endl;
return;
}
queue<node*> q;
q.push(root);
int count_level=0;
while(!q.empty()) 
{
int size=q.size();

for(int i=0;i<size;i++) 
{
node*f= q.front();
q.pop();

if(count_level == level) 
{
cout<<f->val<<" ";
}
if(f->left) q.push(f->left);
if(f->right) q.push(f->right);
}

count_level++;
if (count_level > level) break;
}

if(count_level <= level) 
{
cout<<"Invalid"<<endl;
}
}


int main()
{
int value;
node* root = NULL;
queue<node**> q;
q.push(&root);
while (!q.empty()) 
{
node** current=q.front();
q.pop();
cin >> value;
if(value!=-1) 
{
*current = new node(value);
q.push(&((*current)->left));
q.push(&((*current)->right));
}
}
int level;
cin >> level;
print_level(root, level);
return 0;
}