#include<stdio.h>
// global
int x=500;
void fun(void)
{
int s=100;
// printf(" fun er s er address - %p\n",&s);
printf("%d\n",x);
}
int main()
{
//    int s=200;
//    printf("main er s er address - %p\n",&s);
printf("%d\n",x);
fun();
    return 0;
}