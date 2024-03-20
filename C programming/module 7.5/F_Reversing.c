#include<stdio.h>
#include<limits.h>
int main()
{
long long int n;
   scanf("%lld", &n);
 long long int ar[n];
   for(long long int i=0;i<n;i++)
   {
    scanf("%lld ",&ar[i]);
   }
for( long long int i=n-1;i >= 0;i--)
{
    printf("%lld ",ar[i]);
}
    return 0;
}