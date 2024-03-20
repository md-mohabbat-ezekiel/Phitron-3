#include<bits/stdc++.h>
using namespace std;
const long long INF = numeric_limits<long long>::max();
struct Edge 
{
 int to;
 long long weight;
}; 

void dijkstra(int start,vector<vector<Edge>>& graph,vector<long long>& min_dist) 
{
int n=graph.size();
min_dist.assign(n,INF);
min_dist[start]=0;
priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>> pq;
pq.push({0,start});

while (!pq.empty()) 
{
 int u = pq.top().second;
 long long dist = pq.top().first;
 pq.pop();
 
 if (dist> min_dist[u]) 
 {
  continue;
 }
 
 for(const Edge& edge : graph[u]) 
 {
  int v = edge.to;
  long long w=edge.weight;
  
  if (min_dist[u]+w < min_dist[v]) 
  {
    min_dist[v]=min_dist[u]+w;
    pq.push({min_dist[v],v});
  }
 }
}
}

int main() 
{
int n,e;
cin>>n>>e;
vector<vector<Edge>> graph(n);
for (int i=0;i<e;i++) 
{
  int a,b;;
  long long w;
  cin>>a>>b>>w;
  graph[a-1].push_back({b-1,w});
}

int q;
cin>>q;
for (int i=0;i<q;i++) 
 {
  int x,y;
  cin>>x>>y;
  vector<long long> min_dist;
  dijkstra(x-1,graph,min_dist);
  
  if (min_dist[y-1]==INF) 
  {
  cout<<-1<<endl;
  }

  else 
  {
   cout<<min_dist[y-1]<<endl;
  }

 } 

    return 0;
}
