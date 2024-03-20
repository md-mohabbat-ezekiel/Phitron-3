#include<stdio.h>
int count_odd(int a[],int n)
{
int odd=0;
for(int i=0;i<n;i++)
{
if(a[i]%2!=0)
{
odd++;
}
}
return odd;
}
int main()
{
int n;
scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   {
   scanf("%d",&a[i]);
   }
  int s=count_odd(a,n);
  printf("%d\n",s);
    return 0;
}