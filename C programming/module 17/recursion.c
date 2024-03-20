#include<stdio.h>
void fun()
{
printf("fun\n");
fun();
}
int main()
{
   fun();
    return 0;
}
// infinity program off cntrl+c