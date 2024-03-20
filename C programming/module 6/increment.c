#include<stdio.h>
int main()
{
   {int i=10;
   int x=i++;
   printf("x-%d i-%d\n",x,i);}
   {int i=10;
   int x=++i;
   printf("x-%d i-%d\n",x,i);}
   
    return 0;
}
// for x=i++(x=10 i=11)post x increment to i
// for x=++i(x=11 i=11) pre x increment to same i