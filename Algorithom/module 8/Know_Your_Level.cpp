#include<bits/stdc++.h>
using namespace std;

const int N=1e3+5;
vector<int>graph[N];
bool visited[N];

vector<int>pizza_shop_level(int source,int level)
{
 queue<pair<int,int> >q;
 q.push({source,0});
 visited[source]=true;

 vector<int>piz_shop;
 while(!q.empty())
 {
  int node=q.front().first;
  int cur_level=q.front().second;
  q.pop();
  
  if(cur_level==level) piz_shop.push_back(node);

  for(int neighbor:graph[node])
  {
    if(!visited[neighbor])
    {
    q.push({neighbor,cur_level+1});
    visited[neighbor]=true;
    }
  }
 }
return piz_shop;
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
  
  int l;cin>>l;
  memset(visited,false,sizeof(visited));
  vector<int>piz_shop=pizza_shop_level(0,l);
  if(piz_shop.empty()) cout<<-1<<endl;
  else
  {
  sort(piz_shop.begin(),piz_shop.end());
  for(int shop:piz_shop) cout<<shop<<" ";
  }
    
return 0;
}