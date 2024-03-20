#include<bits/stdc++.h>
using namespace std;
int dx[]={-2,-2,-1,-1,1,1,2,2};
int dy[]={-1,1,-2,2,-2,2,-1,1};

bool isValid(int x,int y,int n,int m) 
{
 return x>=0 && x<n && y>=0 && y<m;
}

int min_knight_step(int n,int m,int Ki,int Kj,int qi,int qj) 
{
vector<vector<int>> dis(n,vector<int>(m,-1));
queue<pair<int,int>>q;
q.push({Ki,Kj});
dis[Ki][Kj] = 0;

while(!q.empty()) 
{
int x=q.front().first;
int y=q.front().second;
q.pop();
  if(x==qi && y == qj) return dis[qi][qj];
  for (int i=0;i<8;i++) 
  {
    int X=x+dx[i];
    int Y=y+dy[i];
      if(isValid(X,Y,n,m) && dis[X][Y]==-1) 
      {
        dis[X][Y]=dis[x][y] + 1;
        q.push({X,Y});
      }
  }
}
return -1;
}

int main() 
{
int t;
cin>>t;
while (t--) 
{
int n,q,ki,kj,qi,qj;
cin>>n>>q>>ki>>kj>>qi>>qj;
int result = min_knight_step(n,q,ki,kj,qi,qj);
cout<<result<<endl;
 }
return 0;
}
