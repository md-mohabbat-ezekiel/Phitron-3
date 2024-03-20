#include<stdio.h>
#include<math.h>

int main()
{
   int n;
   scanf("%d",&n);
   int sum1=0;
   int sum2=0;
   int a[n][n];
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<n;j++)
     {
       scanf("%d",&a[i][j]);
      }
    }
  for(int i=0;i<n;i++)
   {
      for(int j=0;j<n;j++)
     {
       if(i=j)
       {
       sum1=sum1+a[i][j];
       sum1++;
       }

       else if(i+j==n-1)
       {
       sum2=sum2+a[i][j];
       sum2++;
       }
      }
    }
int diff = abs(sum1 - sum2);
   printf("%d\n", diff);
   int diff = abs(sum1 - sum2);
   printf("%d\n", diff);
    return 0;
}