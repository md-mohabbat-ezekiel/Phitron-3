#include<bits/stdc++.h>
using namespace std;
int parent[1000];
int parent_level[1000];
void dsu_set(int n)
{
 for(int i=1;i<=n;i++)
 {
 parent[i]=-1;
 parent_level[i]=0;
 }
}

int dsu_find(int node)
{
 while(parent[node]!=-1)
 {
 node=parent[node];
 }
return node;
}

void dsu_union(int a,int b)
{
 int leaderA=dsu_find(a);
 int leaderB=dsu_find(b);
  if(leaderA!=leaderB)
  {
   if(parent_level[leaderA]>parent_level[leaderB])
   {
    parent[leaderB]=leaderA;
   }
   else if(parent_level[leaderB]>parent_level[leaderA])
   {
   parent[leaderA]=leaderB;
   }
   else
   {
   parent[leaderB]=leaderA;
   parent_level[leaderA]++;
   }
  } 
}

int main()
{
  int n,e;
  cin>>n>>e;
  dsu_set(n);
  while(e--)
  {
  int a,b;
  cin>>a>>b;
  int leaderA=dsu_find(a);
  int leaderB=dsu_find(b);
  cout<<leaderA<<" "<<leaderB<<endl;
  if(leaderA==leaderB)
  {
  cout<<"cycle detected in between "<<a<<" "<<b<<endl;
  }
  else
  {
  dsu_union(a,b);
  }
  }
return 0;
}