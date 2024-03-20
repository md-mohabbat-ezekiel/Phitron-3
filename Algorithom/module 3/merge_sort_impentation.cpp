#include<bits/stdc++.h>
using namespace std;
const int n=1e5+7;
int a[n];
void merge(int l,int r,int mid)
{
int left_size=mid-l+1;
int L[left_size+1];
int right_size=r-mid;
int R[right_size+1];

for(int i=l,j=0;i<=mid;i++,j++)
{
L[j]=a[i];
}

for(int i=mid+1,j=0;i<=r;i++,j++)
{
R[j]=a[i];
}

L[left_size]=INT_MAX;
R[right_size]=INT_MAX;

int lp=0,rp=0;
for(int i=l;i<=r;i++)
{
  if(L[lp]<=R[rp])
  {
  a[i]=L[lp];
  lp++;
  }

  else
  {
  a[i]=R[rp];
  rp++;
  }
}

}
void merge_sort(int l,int r)
{
int mid=(l+r)/2;
merge_sort(l,mid);
merge_sort(mid+1,r);
merge(l,r,mid);

}
int main()
{
  int n;
  cin>>n;
//   int a[n];
  for(int i=0;i<n;i++)
  {
  cin>>a[i];
  }
 merge_sort(0,n-1);
//   sort(a,a+n);
  for(auto x:a)
  {
  cout<<x<<" ";
  }
return 0;
}