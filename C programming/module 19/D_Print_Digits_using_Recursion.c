#include<stdio.h>
void fun(int n)
{
if(n==0)return;//base case
int x=n%10;//4
fun(n/10);
printf("%d ",x);
}
int main()
{
  int test;
  scanf("%d",&test);
  for(int i=0;i<test;i++)
  {
    int n;
    scanf("%d",&n);
    fun(n);
    if(n==0)
    {
    printf("0");
    }
    printf("\n");
  }
    return 0;
}