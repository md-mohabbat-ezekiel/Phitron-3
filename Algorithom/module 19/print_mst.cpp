#include<bits/stdc++.h>
#define pi pair<int,int>
using namespace std;
const int N=1e5+5;
vector<pi>v[N];
bool vis[N];

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

class cmp
{
public:
bool operator() (edge a,edge b)
{
return a.w > b.w;
}

};

void prims(int s)
{
priority_queue<edge,vector<edge>,cmp>pq;
vector<edge>edgeList;
pq.push(edge(s,s,0));
while(!pq.empty())
{
edge parent=pq.top();
pq.pop();
int a=parent.a;
int b=parent.b;
int w=parent.w;
if(vis[b])continue;
vis[b]=true;
edgeList.push_back(parent);
 for(int i=0;i<v[b].size();i++)
 {
   pi child=v[b][i];
   if(!vis[child.first])
   {
   pq.push(edge(b,child.first,child.second));
   }
 }
}

edgeList.erase(edgeList.begin());
for(edge val:edgeList)
{
cout<<val.a<<" "<<val.b<<" "<<val.w<<endl;

}
}

int main()
{
int n,e;
cin>>n>>e;
while(e--)
{
int a,b,w;
cin>>a>>b>>w;
v[a].push_back({b,w});
v[b].push_back({a,w});


}
  
return 0;
}