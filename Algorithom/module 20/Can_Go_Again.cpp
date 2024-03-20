#include<bits/stdc++.h>
using namespace std;
const long long INF = numeric_limits<long long>::max();

struct Edge 
{
  int from,to;
  long long weight;
};

int main() 
{
int n,e;
cin>>n>>e;
vector<Edge>edges(e);

for (int i=0;i<e;i++) 
{
cin>>edges[i].from>>edges[i].to>>edges[i].weight;
}

int s;
cin>>s;
int t;
cin>>t;
vector<long long> distance(n,INF);
distance[s-1]=0;
for (int i=0;i<n-1;i++) 
{
  for (const Edge& edge : edges) 
  {
    if (distance[edge.from - 1] != INF && distance[edge.from - 1] + edge.weight < distance[edge.to - 1]) 
    {
      distance[edge.to - 1] = distance[edge.from - 1] + edge.weight;
    }
  }
}

vector<bool>n_ycle(n, false);
for (int i=0;i<n;i++) 
{
 for (const Edge& edge : edges) 
  {
     if (distance[edge.from - 1] != INF && distance[edge.from - 1] + edge.weight < distance[edge.to - 1]) 
     {
      n_ycle[edge.to - 1] = true;
     }
  }
}
    
for (int i=0;i<t;i++) 
{
int dest;
cin>>dest;
    
 if (n_ycle[dest-1]) 
 {
 cout << "Negative Cycle Detected" << endl;
 } 
 else if (distance[dest-1] == INF) 
 {
 cout << "Not Possible" << endl;
 } 
 
 else 
 {
 cout << distance[dest-1]<<endl;
 }
}
    
    return 0;
}
