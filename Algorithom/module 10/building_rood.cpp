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

void dfs(int u)
{
visited[u]=true;

 for(int v:g[u])
 {
  if(visited[v]) continue;
  dfs(v);
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

vector<int>leader;

 for(int i=1;i<=n;i++)
 {
  if(visited[i])continue;
  leader.push_back(i);
  dfs(i);
 }

//  for(auto l:leader) cout<<l<<" ";

 cout<<leader.size()-1<<endl;
 for(int i=1;i<leader.size();i++)
 {
 cout<<leader[i-1]<<" "<<leader[i]<<endl;
 }
return 0;
}