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

int count_node(node* root) 
{
if(root==NULL) return 0;
return 1+count_node(root->left) + count_node(root->right);
}

bool perfect_binary_tree(node* root) 
{
if(root==NULL) return true;
int h= log2(count_node(root) + 1);
return count_node(root)==pow(2,h)- 1;
}

int main() 
{
int value;
node* root=NULL;
queue<node**> q;
q.push(&root);
while(!q.empty()) 
{
node** p=q.front();
q.pop();
cin >> value;

if(value!=-1) 
{
*p=new node(value);
q.push(&((*p)->left));
q.push(&((*p)->right));
}
}
bool perfect = perfect_binary_tree(root);
if(perfect) 
{
cout<<"YES"<<endl;
} 
else 
{
cout<<"NO"<<endl;
}
return 0;
}