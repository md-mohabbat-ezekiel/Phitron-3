#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
//    for(int i=0;i*i<=n;i++)
  for(int i=0;i<=sqrt(n);i++)
  {
  if(n%i==0)
  {
//   cout<<i<<" "<<n/i<<endl;
  cout<<i<<" ";
  if(n/i!=0) cout<<n/i<<endl;
  }
  }
return 0;
}