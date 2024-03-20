#include<bits/stdc++.h>
using namespace std;

void init_code()
{
//  #ifndef ONLINE_JUDGE
//  freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
// #endif //ONLINE_JUDGE
}

const int N=1e3+5;
vector<int>adj[N];
bool visited[N];
int level[N];

void dfs(int u)
{
 visited[u]=true;
  for(int v:adj[u])
  {
   if(visited[v]) continue;
   dfs(v);
  }
}

void bfs(int s)
{
queue<int>q;
q.push(s);
visited[s]=true;
level[s]=0;

while(!q.empty())
{
//pop a node from the queue and insert
//unvisited neigbours of that node
int u=q.front();
q.pop();
// section 1 a node is being processed
cout<<"visiting node: "<<u<<endl;
  for(int v:adj[u])
  {
//   section 2 child processing
    if(visited[v]==true) continue;
    q.push(v);
    visited[v]=true;
    level[v]=level[u]+1;
    // section 3 child processing
  }
//   section 4 same as section one
}
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


for(int i=1;i<=n;i++)
{
 cout<<"level of "<<i<<":"<<level[i]<<endl;
}

int cc=0;
for(int i=1;i<=n;i++)
{
 if(visited[i]) continue;
 bfs(i);
 cc++;
}

cout<<"number of connecting component: "<<cc<<endl;
return 0;
}