// return type + no parameter
#include<stdio.h>
int sum()
{
int a,b;
scanf("%d %d",&a,&b);
int s=a+b;
return s;
}
// int sum()
// {
// printf("belive you input down");
// return 0;
// }
int main()
{
// printf("ami kintu call kortesi\n");
  int s=sum() ;
//   printf("dekhsi ki korle tmi\n");
  printf("%d",s);
    return 0;
}