#include<bits/stdc++.h>
using namespace std;

void init_code()
{
//  #ifndef ONLINE_JUDGE
//  freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
// #endif //ONLINE_JUDGE
}

const int N=1e5+10;
vector<bool>visited(N,false);
vector<int>g[N];
vector<int> level(N,0);
vector<int>parent(N,-1);

void bfs(int source)
{
queue<int>q;
q.push(source);
level[source]=0;
visited[source]=true;

 while(!q.empty())
 {
  int u=q.front();
  q.pop();
    
   for(int v:g[u])
   {
     if(visited[v]) continue;
     q.push(v);
     parent[v]=u;
     level[v]=level[u]+1;
   } 
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
  g[u].push_back(v);
  g[v].push_back(u);
  }

bfs(1);

cout<<level[n]<< endl;

int curr=n;
vector<int>path;
while(curr!=-1)
{
 path.push_back(curr);
 curr=parent[curr];
}

reverse(path.begin(),path.end());
 for(auto p:path)
 {
 cout<<p<<" ";
 }
return 0;
}