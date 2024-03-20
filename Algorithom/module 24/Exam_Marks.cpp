// #include<bits/stdc++.h>
// using namespace std;
// bool obtain_score(int N,int M,vector<int>& marks) 
// {
//   vector<bool> dp(1001, false);
//   dp[0] = true; 
//   for(int i=0;i<N;i++) 
//   {
//     for(int j=1000;j>=marks[i];j--) 
//     {
//      dp[j]=dp[j]+dp[j-marks[i]];
//     }
//   }

//     return dp[1000] && dp[M];
// }

// int main() 
// {
//  int t;
//  cin >> t; 
//  while (t--) 
//  {
//    int n,m;
//    cin>>n>>m;
//    vector<int>marks(n);  
//    for (int i=0;i<n;i++) 
//    {
//     cin>>marks[i];
//    }  
//    if (obtain_score(n,m,marks)) 
//    {
//     cout<<"YES"<<endl;
//    } 
//    else 
//    {
//     cout<<"NO"<<endl;
//    }
//  } 
//  return 0;
// } 

#include<bits/stdc++.h>
using namespace std;
bool obtain_score(int N,int M,vector<int>& marks) 
{
  vector<bool> dp(1001, false);
  dp[0] = true; 
  for(int i=0;i<N;i++) 
  {
    for(int j=1000;j>=marks[i];j--) 
    {
      if(dp[j]<=M) return true;
      else return false;
    }
  }
   return dp[1000] && dp[M];
}

int main() 
{
 int t;
 cin >> t; 
 while (t--) 
 {
   int n,m;
   cin>>n>>m;
   vector<int>marks(n);  
   for (int i=0;i<n;i++) 
   {
    cin>>marks[i];
   }  
   if (obtain_score(n,m,marks)) 
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