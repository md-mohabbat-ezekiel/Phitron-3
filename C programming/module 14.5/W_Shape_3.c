#include<stdio.h>
int main()
{
   int n,s,k;
   scanf("%d",&n);
   s=n-1;
   k=1;
   for(int i=1;i<=(n*2);i++)
   {
   for(int j=1;j<=s;j++)
   {
   printf(" ");
   }
   for(int j=1;j<=k;j++)
   {
   printf("*");
   }
   if(i<n)
   {
   s--;
   k+=2;
   }
   else if(n+1<=i && n*2>=i)
   {
   s++;
   k-=2;
   }
   printf("\n");
   }
    return 0;
}