#include<stdio.h>
int main()
{
   {int i=10,x;
   x=i--;
   printf("x-%d i-%d\n",x,i);}
  {int i=10,x;
   x=--i;
   printf("x-%d i-%d\n",x,i);}
    return 0;
}
// for x=i--(x=10 i=9)post x decrement to i
// for x=--i(x=9 i=9) pre x decrement to same i