#include<bits/stdc++.h>
using namespace std;
void init_code()
{
}

const int N=1e5+5;
vector<int>adj[N];
bool visited[N];
int depth[N];
int height[N];

void dfs(int u)
{
// section 1
// action just after entering a noden u
visited[u]=true;
cout<<"visiting node:"<<u<<endl;
  for(int v:adj[u])
  {
  //section 2
//   action before entering a new neighbor
   if(visited[v]==true) continue;
   depth[v]=depth[u]+1;
  dfs(v);
//   now we can determine height of u
if(height[v]+1 > height[u])
{
height[u]=height[v]+1;
}
// alternetive
// height[u]=max(height[u],height[v]+1);
//    section 3
// action after exiting a neighbour
  }
//   section 4
// action before exiting a noden u
}

int main()
{
  init_code();
  int n,m;
  cin>>n>>m;
  for(int i=0;i<m;i++)
  {
   int u,v;
   cin>>u>>v;
   adj[u].push_back(v);
   adj[v].push_back(u);
  }

dfs(1);

for(int i=1;i<=n;i++)
{
cout<<"depth of node:"<<i<<":"<<depth[i]<<endl;
}

for(int i=1;i<=n;i++)
{
cout<<"height of node:"<<i<<":"<<height[i]<<endl;
}

// cout<<"visiting araay\n";
// for(int i=1;i<=n;i++)
// {
//   cout<<"node"<<" "<<i<<"status: "<<visited[i]<<endl;;
// }
return 0;
}