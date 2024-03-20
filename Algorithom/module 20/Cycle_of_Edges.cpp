#include<bits/stdc++.h>
using namespace std;
class union_find 
{
public:
vector<int>p,r;
 union_find(int n) 
 {
  p.resize(n);
  r.resize(n,0);
  for(int i=0;i<n;i++) 
  {
    p[i] = i;
  }
 }

 int find(int x) 
 {
   if(p[x]!=x) 
   {
    p[x]=find(p[x]);
   }
   return p[x];
 }

 void union_set(int x,int y)  
 {
   int r_x = find(x);
   int r_y = find(y);   
   if (r_x != r_y) 
   {
    if (r[r_x] < r[r_y]) 
    {
        swap(r_x,r_y);
    }
    p[r_y] = r_x;
    if(r[r_x] == r[r_y]) 
    {
        r[r_x]++;
    }
   }
 }
};

int count_cycle_edge(int n,const vector<pair<int,int>>& edges) 
{
  union_find uf(n);
  int cycle_edges=0;

  for (const auto& edge : edges) 
  {
    int u=edge.first-1; 
    int v=edge.second-1;
    if(uf.find(u) == uf.find(v)) 
    {
     cycle_edges++;
    } 
    else 
    {
      uf.union_set(u,v);
    }
  }
return cycle_edges;
}

int main()
{
int n,e;
cin>>n>>e;
vector<pair<int,int>>edges;
  for (int i=0;i<e;i++) 
  {
    int a,b;
    cin>>a>>b;
    edges.push_back({a,b});
  }
int result=count_cycle_edge(n, edges);
cout<<result<<endl;
 return 0;
}
