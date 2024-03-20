#include<stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
int sum=a+b;
int sub=a-b;
int mul=a*b;
float div=a*1.0/b;
printf("%d+%d=%d\n",a,b,sum);
printf("%d-%d=%d\n",a,b,sub);
printf("%d*%d=%d\n",a,b,mul);
printf("%d/%d=%0.4f\n",a,b,div);

    return 0;
}