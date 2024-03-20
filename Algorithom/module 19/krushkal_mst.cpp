#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int parent[N];
int parentSize[N];
void dsu_set(int n)
{
 for(int i=1;i<=n;i++)
 {
 parent[i]=-1;
 parentSize[i]=1;
 }
}

int dsu_find(int node)
{
 while(parent[node]!=-1)
 {
 node=parent[node];
 }
return node;
}

void dsu_union(int a,int b)
{
 int leaderA=dsu_find(a);
 int leaderB=dsu_find(b);
  if(leaderA!=leaderB)
  {
   if(parentSize[leaderA]>parentSize[leaderB])
   {
   parent[leaderB]=leaderA;
   parentSize[leaderA]+=parentSize[leaderB];
   }
   
   else
   {
   parent[leaderA]=leaderB;
   parentSize[leaderA]+=parentSize[leaderB];
   }
  }
}

class edge
{
public:
int a,b,w;
 edge(int a,int b,int w)
 {
  this->a=a;
  this->b=b;
  this->w=w;
 }
};

bool cmp(edge a,edge b)
{
return a.w > b.w;
}

int main()
{
  int n,e;
cin>>n>>e;
vector<edge>v;
vector<edge>ans;
dsu_set(n);
while(e--)
{
int a,b,w;
cin>>a>>b>>w;
v.push_back(edge{a,b,w});
}
sort(v.begin(),v.end(),cmp);
for(edge val:v)
{
 int a=val.a;
 int b=val.b;
 int w=val.w;
 int leaderA=dsu_find(a);
 int leaderB=dsu_find(b);
 if(leaderA==leaderB)continue;
 ans.push_back(val);
 dsu_union(a,b);
}
for(edge val:ans)
{
cout<<val.a<<" "<<val.b<<" "<<val.w<<endl;
}
return 0;
}