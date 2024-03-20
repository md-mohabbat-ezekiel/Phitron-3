#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   for(int i=1;i<=12;i++)
   {
    printf("%d * %d = %d\n",n,i,n*i);
   }

    return 0;
}

// Given a number N. Print the maltiplication table of the number from 1 to 12