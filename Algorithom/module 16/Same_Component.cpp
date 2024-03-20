#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<vector<char>>grid;
vector<vector<bool>>vis;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool isValid(int x,int y) 
{
 return x>=0 && x<n && y>=0 && y<m && grid[x][y]=='.';
}

void dfs(int x,int y) 
{
vis[x][y]=true;
 for (int i=0;i<4;i++) 
 {
  int X=x+dx[i];
  int Y=y+dy[i];
  if(isValid(X,Y) && !vis[X][Y]) 
  {
    dfs(X,Y);
  }
 }
}

int main() 
{
cin>>n>>m;
grid.resize(n,vector<char>(m));
vis.resize(n,vector<bool>(m,false));

for (int i=0;i<n;i++) 
{
  for (int j=0;j<m;j++) 
  {
    cin >> grid[i][j];
  }
}

int si,sj,di,dj;
cin>>si>>sj>>di>>dj;
dfs(si,sj);
if(vis[di][dj]) 
{
 cout<<"YES"<<endl;
} 
else 
{
 cout<<"NO"<<endl;
}

    return 0;
}
