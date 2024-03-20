#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
   cin>>a[i];
   }
   int min1=INT_MAX;
   for(int i=0;i<n;i++)
   {
     for(int j=i+1;j<n;j++)
     {
     int value=a[i]+a[j]+j-i;
      min1=min(min1,value);
     }
   
   }

 cout<<min1<<endl;

  }
  

return 0;
}