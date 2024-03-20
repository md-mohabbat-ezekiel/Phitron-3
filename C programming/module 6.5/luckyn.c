#include<stdio.h>
int main()
{
   int number,value1,value2;
   scanf("%d",&number);
   value1=number/10;
   value2=number%10;

    if(value1 % value2==0 || value2 % value1==0)
    {
    printf("YES");
    }
    else
    {
    printf("NO");
    }
//    87/10=8.7 87%10=7
    return 0;
}