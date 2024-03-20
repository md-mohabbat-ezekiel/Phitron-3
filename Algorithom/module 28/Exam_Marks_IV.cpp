#include <bits/stdc++.h>
using namespace std;
const int N=1e9+7;
int dp[1001][1001];
int logic(int i,int sum,int n,vector<int>&mark)
{  
  if(sum<0) return 0;
  if(i==n)
  {
    if(sum==0)return 1;
    return 0;
  }
  if(dp[i][sum]!=-1) return dp[i][sum];
  int ans = logic(i,sum-mark[i],n,mark);
  ans += logic(i+1,sum,n,mark);
  return dp[i][sum]=ans%N;
}

int solve(vector<int>& mark,int sums)
{
 int n=mark.size();
 return logic(0,sums,n,mark);
}

int main()
{
  int t;
  cin>>t;  
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    vector<int>marks(n);  
    for(int i=0;i<n;i++)
    {
     cin>>marks[i];
    }
    int sum=1000-m;  
    for(int i=0;i<=n;i++)
    {
      for(int j=0;j<=sum;j++)
      {
        dp[i][j]=-1;
      }
    }
    cout<<solve(marks,sum)<<endl;
  }
 return 0;
 } 