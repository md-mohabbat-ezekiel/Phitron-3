#include<stdio.h>
int main()
{
   int n,m,k;
   scanf("%d",&n);
   while(n--)
   {
scanf("%d %d",&m,&k);
if(m==k)
{
printf("Square\n");
}
else
{
printf("Rectangle\n");
}
}
    return 0;
}