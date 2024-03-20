#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int dis[N];
int vis[N];
vector<int>v[N];

void bfs(int src)
{
queue<int>q;
q.push(src);
vis[src]=0;

  while(!q.empty())
  {
  int parent =q.front();
  q.pop();
  cout<<parent<<endl;
    for(int i=0;i<v[parent].size();i++)
    {
     int child=v[parent][i];
     if(vis[child]==false)
     {
       q.push(child);
       dis[child]=dis[parent]+1;
       vis[child]=true;
     }
    }
  }

}


int main()
{
  int n,e;
  cin>>n>>e;
  vector<int>v[n+1];
  while(e--)
  {
  int a,b;
  cin>>a>>b;
  v[a].push_back(a);
  v[b].push_back(a);
  }

  bfs(1);
for(int i=0;i<=n;i++)
{
cout<<"node "<<i<<":"<<dis[i]<<endl;
}
return 0;
}