#include<bits/stdc++.h>
using namespace std;
const int INF = INT_MAX;

struct edg 
{
int to,weight;
};

vector<vector<edg>>g;
vector<int>dijkstra(int s,int n) 
{
vector<int>dis(n+1,INF);
dis[s]=0;
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
pq.push({0,s});

while(!pq.empty()) 
{
int u=pq.top().second;
int d=pq.top().first;
pq.pop();
  if (d>dis[u]) continue;
  for (const edg & edg:g[u]) 
  {
    int v=edg.to;
    int w=edg.weight;
     if (dis[u] + w < dis[v]) 
     {
       dis[v]=dis[u]+w;
       pq.push({dis[v],v});
     }
  }
}
return dis;
}

int main() 
{
int n,e;
cin>>n>>e;
g.resize(n+1);

for(int i=0;i<e;i++) 
{
int a,b,w;
cin>>a>>b>>w;
g[a].push_back({b,w});
g[b].push_back({a,w});
}

int s;
cin>>s;
int t;
cin>>t;
while(t--) 
{
int d,dw;
cin>>d>>dw;
vector<int>dis=dijkstra(s,n);
 if(dis[d]<=dw) 
 {
 cout<<"YES"<<endl;
 } 
 else 
 {
 cout<<"NO"<< endl;
 }
}

    return 0;
}
