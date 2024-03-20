#include<bits/stdc++.h>
using namespace std;
int fun(int n,int a[])
{
int c_even=0;
int c_odd=0;
for(int i=0;i<n;i++)
{
 if(a[i]%2==0)
 {
 c_even++;
 }
 else
 {
 c_odd++;
 }
}

if(c_even == c_odd) return 0;
else if((c_even + c_odd)%2!=0) return -1;
else return abs(c_even - c_odd) / 2;


}
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

    int result=fun(n,a);
    cout<<result<<endl;
  }
  
return 0;
}