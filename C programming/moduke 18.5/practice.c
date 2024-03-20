#include <stdio.h>
#include <math.h>

int main()
{
   int n;
   scanf("%d", &n);

   int sum1 = 0;
   int sum2 = 0;
   int a[n][n];

   for(int i=0; i<n; i++)
   {
      for(int j=0; j<n; j++)
      {
         scanf("%d", &a[i][j]);
      }
   }

   for(int i=0; i<n; i++)
   {
      for(int j=0; j<n; j++)
      {
         if(i == j)
         {
            sum1 += a[i][j];
         }

         if(i+j == n-1)
         {
            sum2 += a[i][j];
         }
      }
   }
printf("%d\n",sum1);
printf("%d\n",sum2);
   
   return 0;
}
