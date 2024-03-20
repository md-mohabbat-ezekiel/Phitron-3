#include<stdio.h>
int main()
{
   int n,s,k;
   scanf("%d",&n);
   s=(2*n-1);
   k=0;
   for(int i=1;i<=n;i++)
   {
    for(int j=1;j<=k;j++)
    {
    printf(" ");
    }
    for(int j=1;j<=s;j++)
    {
    printf("*");
    }
    s=s-2;
    k++;


    printf("\n");
   }
    return 0;
}