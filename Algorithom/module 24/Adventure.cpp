#include<bits/stdc++.h>
using namespace std;

int knapsack(int n,int W,vector<int>& weight,vector<int>& value) 
{
vector<vector<int>>dp(n+1,vector<int>(W+1,0));
for(int i=1;i<=n;i++) 
{
  for(int w=1;w<=W;w++) 
  {
    if(weight[i-1]<=w) 
    {
     dp[i][w]=max(dp[i-1][w],dp[i-1][w-weight[i-1]]+value[i-1]);
    } 
    else 
    {
     dp[i][w]=dp[i-1][w];
    }
  }
}

    return dp[n][W];
}

int main() 
{
 int t;
 cin>>t;

 while(t--) 
 {
  int n, w;
  cin>>n>>w;
  vector<int>weight(n);
  vector<int>value(n); 
  for(int i=0;i<n;i++) 
  {
   cin>>weight[i];
  } 
  for(int i=0;i<n;i++) 
  {
   cin>>value[i];
  } 
  int mx_total=knapsack(n,w,weight,value);
  cout<<mx_total<<endl;
 }

 return 0;
}
