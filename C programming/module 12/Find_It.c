#include<stdio.h>
int main()
{
   int n,x;
   scanf("%d",&n);
   int value=0;
   int a[n];
   for(int i=0;i<n;i++)
   {
   scanf("%d",&a[i]);
   }
   scanf("%d",&x);
   for(int i=0;i<n;i++)
   {
   if(a[i]==x)
   {
   value++;
   }
   }
   printf("%d",value);

    return 0;
}
// You will given an integer array A and the size N.
//  You will also be given an integer value X.
//  You need to tell how many times X was appeared in the array.