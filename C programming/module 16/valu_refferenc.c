// pass by value
#include<stdio.h>
void fun(int a)
{
printf("n er address-%p\n",&a);

}
int main()
{
int a;
printf("n er address-%p\n",&a);
   fun(a);
    return 0;
}
// pass by reference
#include<stdio.h>
void fun(int*a)
{
*a=500;
  printf("%d",*a);
  printf("a er value-%p",a);
}
int main()
{
  int a=100;
  fun(&a);
  printf("%d",a);
  printf("a er value-%p",&a);
    return 0;
}