#include<stdio.h>
#include<limits.h>
int main()
{
   int n;
   scanf("%d",&n);
   int ar[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d",&ar[i]);
   }
   int mn=INT_MAX,position;
   for(int i=0;i<n;i++)
{
if(ar[i]<mn)
{
    mn=ar[i];
    position=i+1;
}
}
printf("%d %d",mn,position);
    return 0;
}
//  min=INT_MAX;
//  max=INT_MIN;