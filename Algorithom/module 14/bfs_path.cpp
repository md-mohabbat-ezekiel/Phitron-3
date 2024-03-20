#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int dis[N];
int par[N];
int vis[N];
int pair[N];
vector<int>v[N];

void bfs(int s)
{
queue<int>q;
q.push(s);
dis[s]=0;
par[s]=-1;
vis[s]=true;
 
  while(!q.empty())
  {
  int parent =q.front();
  q.pop();
    for(int i=0;i<v[parent].size();i++)
    {
    int child=v[parent][i];
      if(!vis[child])
      {
      q.push(child);
      par[child]=parent;
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
  while (e--)
  {
    int a,b;
    cin>>a>>b;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  bfs(1);

//   for(int i=0;i<=n;i++)
//   {
//   cout<<"Node "<<i<<": "<<par[i]<<endl;
//   }
int d;cin>>d;
if(vis[d])
{
  vector<int>path;
  int x=d;
   while(x!=-1)
   {
   cout<<x<<endl;
   x=par[x];
   }
  reverse(path.begin(),path.end());

  for(int val:path)
  {
   cout<<val<<" ";
  } 
}
else
{
cout<<"path nai"<<endl;
}

return 0;
}