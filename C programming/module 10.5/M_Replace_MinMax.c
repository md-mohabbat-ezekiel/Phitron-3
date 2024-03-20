#include<stdio.h>
#include<limits.h> // Include limits.h for INT_MIN and INT_MAX

int main()
{
   int n;
   scanf("%d", &n);
   int a[n];
   for(int i = 0; i < n; i++)
   {
      scanf("%d", &a[i]);
   }
   int min = INT_MAX;
   int max = INT_MIN;
   int min_index, max_index;
   for(int i = 0; i < n; i++)
   {
      if(a[i] < min)
      {
         min = a[i];
         min_index = i;
      }
      if(a[i] > max)
      {
         max = a[i];
         max_index = i;
      }
   }
   int tmp = a[min_index];
   a[min_index] = a[max_index];
   a[max_index] = tmp;
   for(int i = 0; i < n; i++)
   {
      printf("%d ", a[i]);
   }
   
   return 0;
}
// Given a number N and an array A of N numbers. Print the array after doing the following operations:

// Find minimum number in these numbers.
// Find maximum number in these numbers.
// Swap minimum number with maximum number.