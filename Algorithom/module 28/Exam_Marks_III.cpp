#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001];

bool subset_sum(int n,int marks[],int s)
{
 if(n==0)
 {
  if(s==0) return true;
  else return false;
 }
 if(dp[n][s]!=-1) return dp[n][s];
 if(marks[n-1] <= s)
 {
   bool op1=subset_sum(n,marks,s-marks[n-1]);
   bool op2=subset_sum(n-1,marks,s);
   return dp[n][s]=op1||op2;
 }
 else
 {
   return dp[n][s] = subset_sum(n-1,marks,s);
 }
} 

int solve(vector<int>& mark,int amount) 
{
  int n=mark.size();
  int s=amount;
  int dp[n+1][s+1];
  dp[0][0]=0;
  for(int i=1;i<=s;i++)dp[0][i]=INT_MAX-1;
  for(int i=1;i<=n;i++)
  {
    for(int j=0;j<=s;j++)
    {
      if(mark[i-1]<=j)
      {
       dp[i][j]=min(1+dp[i][j-mark[i-1]],dp[i-1][j]);
      }
      else
      {
       dp[i][j]=dp[i-1][j];
      }
    }
  } 
  if(dp[n][s]==INT_MAX-1) return -1;
  else return dp[n][s];   
}

int main()
{
  int t;
  cin >> t;  
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
     cout<<solve(marks,sum)<<endl;
  }
  return 0;
}
