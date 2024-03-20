//has return+parmetter
// This function takes two integers as input and returns their sum
int add(int a, int b) {
    int sum = a + b;
    return sum;
}
int main()
{
printf("%d\n",add(100,200));
return 0;
}
// Has Return + No Parameter
#include<stdio.h>
int multi()
{
int a,b;
scanf("%d %d",&a,&b);
int s=a*b;
return s;
}
int main()
{
// printf("ami kintu call kortesi\n");
  int s=multi() ;
//   printf("dekhsi ki korle tmi\n");
  printf("%d",s);
    return 0;
}

//No Return + Parameter:
#include<stdio.h>
void div(int x,int y)
{
int s=x/y;
printf("%d\n",s);
}
int main()
{
int a,b;
scanf("%d %d",&a,&b);
sum(a,b);
    return 0;
}
// No Return + No Parameter:
//no return type + no parameter
#include<stdio.h>
void min(void)
{
int a,b;
scanf("%d %d",&a,&b);
int s=a-b;
printf("%d\n",s);

}
int main()
{
   min();
    return 0;
}