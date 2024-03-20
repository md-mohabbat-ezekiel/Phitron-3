#include<bits/stdc++.h>
using namespace std;
void init_code()
{
}

const int N=1e5+5;
vector<int>adj[N];
bool visited[N];

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
  dfs(v);
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

cout<<"visiting araay\n";
for(int i=1;i<=n;i++)
{
  cout<<"node"<<" "<<i<<"status: "<<visited[i]<<endl;;
}
return 0;
}