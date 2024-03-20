#include<stdio.h>
int main()
{
   int a,b;
   scanf("%d%d",&a,&b);
   int n=a-b;
   if(n>=0)
   {
    printf("%d\n",n);
   }
   else
   {
    printf("0");
   }
    return 0;
}