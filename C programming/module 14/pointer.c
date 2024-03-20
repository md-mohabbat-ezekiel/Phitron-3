// 
// int x;
// int * p=&x;
#include<stdio.h>
int main()
{
   int x;
//    printf("%p\n",&x);
   int*p=&x;
   printf("%p\n",p);
//    derefference
//  printf("%d\n",*p);
//  *p=500;
// printf("%d\n",x);


    return 0;
}