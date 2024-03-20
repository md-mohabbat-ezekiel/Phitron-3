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

  int m;
  cin>>m;
  int b[m];
  for(int i=0;i<m;i++)
  {
  cin>>b[i];
  }

  int x;
  cin>>x;
  int r[n+m];

  for(int i=0;i<x;i++)
  {
  r[i]=a[i];
  }

  for(int i=0;i<m;i++)
  {
   r[x+i]=b[i];
  }

  for(int i=x;i<n;i++)
  {
   r[m+i]=a[i];
  }
 
  for(int i=0;i<n+m;i++)
  {
  cout<<r[i]<<" ";
  } 
  cout<<endl;
return 0;
}
//mark 20
