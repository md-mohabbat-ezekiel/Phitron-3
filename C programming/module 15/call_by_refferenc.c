#include<stdio.h>
void fun(int*ptr)
{
*ptr=200;
printf("p er value-%p\n",ptr);
printf("x er value-%d\n",*ptr);
}
int main()
{
  int x=100;
  fun(&x);
  printf("%d\n",x);
printf("x er adress-%p\n",&x);

   
    return 0;
}