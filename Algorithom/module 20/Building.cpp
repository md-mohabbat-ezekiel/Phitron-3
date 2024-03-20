#include<bits/stdc++.h>
using namespace std;

struct Edge 
{
int from,to;
long long weight;
bool operator<(const Edge& other) const 
 {
 return weight < other.weight;
 }
};

class union_find 
{
public:
vector<int> p,r;

union_find(int n) 
{
p.resize(n);
r.resize(n,0);
 for (int i=0;i<n;i++) 
 {
   p[i]=i;
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

void union_sets(int x, int y) 
{
int r_x=find(x);
int r_y=find(y);

  if (r_x!=r_y) 
  {
    if (r[r_x] < r[r_y]) 
    {
     swap(r_x, r_y);
    }
    p[r_y] = r_x;

    if (r[r_x] == r[r_y]) 
    {
     r[r_x]++;
    }
  }
}
};

int main() 
{
int n,e;
cin>>n>>e;
vector<Edge>edges(e);
for(int i=0;i<e;i++) 
{
 cin>>edges[i].from>>edges[i].to>>edges[i].weight;
}
sort(edges.begin(),edges.end());
union_find uf(n);
long long total_cost = 0;
int edgesInMST = 0;
for (int i=0;i<e;i++) 
{
int u = edges[i].from - 1;
int v = edges[i].to - 1;
  if (uf.find(u) != uf.find(v)) 
  {
      uf.union_sets(u, v);
      total_cost += edges[i].weight;
      edgesInMST++;
  }

  if (edgesInMST==n-1) 
  {
    break;
  }
}

if (edgesInMST == n-1) 
{
 cout<<total_cost<<endl;
} 
else 
{
    cout<<-1<<endl;
}

    return 0;
}
