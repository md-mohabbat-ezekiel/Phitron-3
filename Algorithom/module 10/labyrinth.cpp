#include<bits/stdc++.h>
using namespace std;

void init_code()
{
//  #ifndef ONLINE_JUDGE
//  freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
// #endif //ONLINE_JUDGE
}
typedef pair<int,int>pii;
const int N=1e3+10;
vector<string>g;
int visited[N][N];
int level[N][N];
pii parent[N][N];
int n,m;
vector<pii> direc={{0,-1},{0,1 },{-1,0 },{1,0} }

bool isValid(int i,int j)
{
return(i>=0 && i<n && j>=0 && j<m );
}

void bfs(int si,int sj)
{
queue<pii>q;
q.push({si,sj});
visited[si][sj]=true;
level[si][sj]=0;

 while(!q.empty())
 {
 pii unpair=q.front();
 int i=unpair.first;
 int j=unpair.second;
 q.pop();
 
   for(auto:direc)
   {
   int ni=i+d.first;
   int nj=j+d.second;

   if(isValid(ni,nj) && !visited[ni][nj]) && g[ni][nj]!='#')
   {
   q.push({ni,nj});
   visited[ni][nj]=true;
   level[ni][nj]=level[i][j]+1;
   parent[ni][nj]={i,j};
   }
 }
}

// void dfs(int i,int j)
// { //node u(i,j)
// if(!isValid(i,j)) return; 
// if(visited[i][j]) return;
// if(g[i][j])=='#') return;

// visited[i][j]=true;

//  for(auto:direc)
//  {
//  dfs(i+d.first,j+d.second);
//  }
// }

int main()
{
init_code();
int si,sj,di,dj;
cin>>n>>m;
  for(int i=0;i<n;i++)
  {
  string x;
  cin>>x;

    for(int j=0;j<m;j++)
    {
     if(x[j]=='A') si=i,sj=j;
     if(x[j]=="B") di=i,dj=j;
    }
  g.push_back(x);
  }

bfs(si,sj);
if(level[di][dj]!=0)
{
cout<<"YES\n";
cout<<level[di][dj]<<endl;
}
 else cout<<"NO\n";

 vector<pii>path;
 pii cur={dj,dj};
 while(!(curr.first==si && curr.second==sj))
 {
 path.push(curr);
 curr=pare[curr.first][curr.second];
 }


 path.push.back({si,sj});
 reverse(path.begin(),path.end());
 for(auto p:path)
 {
 cout<<p.first<< " "<<p.second<<" ";
 }
return 0;
}