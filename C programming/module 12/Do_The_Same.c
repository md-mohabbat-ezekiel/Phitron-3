#include<stdio.h>
int main()
{
  int n,k;
  scanf("%d %d",&n,&k);
  for(int i=0;i<k;i++)
  {
  for(int j=1;j<=n;j++)
  {
  printf("%d ",j);
  }
   printf("\n");
  }
    return 0;
}
// You will be given two positive integer N and K.
//  You need to print from 1 to N, and you need to do this K times.

// Please look at the sample input output.