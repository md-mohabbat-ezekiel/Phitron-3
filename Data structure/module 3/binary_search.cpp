#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
  cin>>a[i];
  }
int x;
cin>>x;
bool flag=false;
int l=0;
int r=n-1;
while (l<=r)
{
   int mid=(l+r)/2;
   if(a[mid]==x)
   {
   flag=true;
   break;
   }

   if(x>mid)
   {
   l=mid+1;
   }
   else
   {
   l=mid-1;
   }
}
if(flag==true)cout<<"yes"<<endl;
else cout<<"no"<<endl;


return 0;
}