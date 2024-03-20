#include<stdio.h>
int main()
{
  int x=100;
int*ptr=&x;
printf("x er address-%p\n",&x);
printf("ptr er address-%p\n",ptr);
printf("ptr er address-%p\n",&ptr);
printf("ptr er memory size-%d\n",sizeof(ptr));
// int x=200;
// ptr=200;
// printf("y er value-%d\n",x);
// printf("y er value-%d\n",*ptr);

   
    return 0;
}
// alt+shift+down
// x =*ptr  // &x=ptr