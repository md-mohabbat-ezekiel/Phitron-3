class solution 
{
public:
int n,m;
bool vis[100][100];

vector<pair<int,int>> path={{-1,0},{1,0},{0,-1},{0,1}};

bool isValid(int cI,int cJ)
{
  if(cI>=0 && cI<n && cJ>=0 && cJ<m ) return true;
  else return false;
}

int cnt;
void dfs(int si,int sj,vector<vector<int>>& grid)
{
 vis[si][sj]=true;
 cnt++;
 for(int i=1;i<4;i++)
 {
   pair<int ,int> p= path[i];
   int ci=si+p.first;
   int cj=sj+p.second;
  if(isValid(ci,cj) && !vis[ci][cj] && gird[ci][cj]==1)
  {
   dfs(ci,cj,grid);
  }
 }
}

    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
      n=grid.size();
      m=grid[0].size();
      int mx=0;
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
          if(!vis[i][j] && gird[i][j]==1)
          {
          cnt++;
          dfs(i,j,gird);
          mx=max(cnt,mx);
          }
        }

      } 
      return mx; 
    }
};










}