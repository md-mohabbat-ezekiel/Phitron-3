#include<bits/stdc++.h>
using namespace std;
bool div_choc(int N,vector<int>& chocolate) 
{
  int sum=accumulate(chocolate.begin(),chocolate.end(), 0);
  if(sum%2!=0)return false;
  int tgt=sum/2;
  vector<bool>dp(tgt+1,false);
  dp[0]=true;

  for(int i=0;i<N;i++) 
  {
    for(int j=tgt;j>=chocolate[i];j--) 
    {
      dp[j]=dp[j] || dp[j-chocolate[i]];
    }
  }

  return dp[tgt];
}

int main() 
{
  int t;cin>>t;  
  while(t--) 
  {
    int n;
    cin>>n; 
    vector<int>choc(n);
    for(int i=0;i<n;i++) 
    {
    cin>>choc[i];
    }

    if(div_choc(n,choc)) 
    {
    cout<<"YES"<<endl;
    } 
    else 
    {
    cout<<"NO"<<endl;
    }
  }

    return 0;
}
