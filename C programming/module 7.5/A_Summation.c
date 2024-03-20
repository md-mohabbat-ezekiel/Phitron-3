 #include<stdio.h>
 int main()
 {
    long long int n;
    scanf("%lld",&n);
 
    long long int ar[n];
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
   scanf("%lld",&ar[i]);
      sum=sum+ar[i];
    }
      if(sum>0)
         {
          printf("%lld\n",sum);
         }
      else
         {   
          sum=-1*sum;
          printf("%lld\n",sum);
         }
    
return 0;    
 }