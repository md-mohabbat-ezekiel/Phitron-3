#include<stdio.h>
int main()
{
   long long int N;
   scanf("%lld",&N);
   long long int ar[N];
   long long int even_sum=0;
   long long int odd_sum=0;
   for(long long int i=0;i<N;i++)
   {
    scanf("%lld",&ar[i]);
    if(ar[i]%2==0)
    {
    even_sum+=ar[i];  
    }
    else
    {
    odd_sum+=ar[i]; 
    }
   }

   printf("%lld %lld\n", even_sum, odd_sum);
    return 0;
}