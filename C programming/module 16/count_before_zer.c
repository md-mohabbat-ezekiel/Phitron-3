#include<stdio.h>
int count_before_zero(int a[],int n)
{
int count=0;
for(int i=0;i<n;i++)
{
if(a[i]==0)
{
break;
}
count++;
}
return count;
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
  int count = count_before_zero(a, n);
   printf("%d",count);
    return 0;
}