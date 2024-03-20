#include<bits/stdc++.h>
using namespace std;

const int N=1e3+5;
vector<int>graph[N];
int D[N];

void bfs(int source,int n)
{
queue<int>q;
q.push(source);
D[source]=0;

  while(!q.empty())
  {
   int node =q.front();
   q.pop();

     for(int neighbor: graph[node]) 
     {
       if(D[neighbor]==-1)
       {
       D[neighbor]=D[node]+1;
       q.push(neighbor);
       }
     }
  }
}

int main()
{
  int N,E;
  cin>>N>>E;
  for(int i=0;i<E;i++)
  {
  int a,b;
  cin>>a>>b;
  graph[a].push_back(b);
  graph[b].push_back(a);
  }

  int Q; cin>>Q;
  for(int i=0;i<Q;i++)
  {
  int s,d; cin>>s>>d;
  memset(D, -1, sizeof(D));
  bfs(s,N);
  cout<<D[d]<<endl;
  }
    
return 0;
}