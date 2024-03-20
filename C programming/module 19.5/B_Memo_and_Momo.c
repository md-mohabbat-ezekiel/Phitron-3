#include<stdio.h>
int main()
{
   long long n, m, k;
   scanf("%lld %lld %lld", &n, &m, &k);
   if (n % k == 0 && m % k == 0)
   {
       printf("Both");
   }
   else if (n % k == 0)
   {
       printf("Memo");
   }
   else if (m % k == 0)
   {
       printf("Momo");
   }
   else
   {
       printf("No One");
   }
   return 0;
}
