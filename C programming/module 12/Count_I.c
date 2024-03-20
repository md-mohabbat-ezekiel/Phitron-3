#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int a[n];
   int sum_even=0,sum_odd=0;
   for(int i=0;i<n;i++)
   {
   scanf("%d",&a[i]);
   if(a[i]%2==0)
   {
   sum_even++;
   }
   else
   {
   sum_odd++;
   }
   }
   printf("%d %d\n",sum_even,sum_odd);
   
    return 0;
}