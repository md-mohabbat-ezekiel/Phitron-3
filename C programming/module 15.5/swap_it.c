#include<stdio.h>
int swap_it(int*a,int* b)
{
int tmp=*a;
*a=*b;
*b=tmp;
return tmp;
}
int main()
{
int a,b;
scanf("%d %d",&a,&b);

   swap_it(&a,&b);

   printf("%d %d",a,b);
    return 0;
}