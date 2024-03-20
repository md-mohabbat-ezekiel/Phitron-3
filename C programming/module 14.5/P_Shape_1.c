#include<stdio.h>
int main()
{
   int n,s;
   scanf("%d",&n);
   s=n;
   
   for(int i=1;i<=n;i++)
   {
   for(int j=1;j<=s;j++)
   {
   printf("*");
   }
   s=s-1;
   printf("\n");
   }
    return 0;
}