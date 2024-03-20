#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)  //o(n)
 {
    int x=0;
    while(x>0) //o(log n)
    {
    int digit=x%10;
    cout<<digit<<endl;
    x/=10;
// o(nlog n)
    }
    cout<<endl;
 }
  return 0;
}

// n
