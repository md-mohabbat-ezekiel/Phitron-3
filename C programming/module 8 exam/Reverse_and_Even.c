#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int ar[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &ar[i]);
    }
    if(N%2!=0)
    {
    for (int i = N - 1; i >= 0; i=i-2) {
        printf("%d ", ar[i]);
    }
    }
    else
    {
      for (int i = N-2; i >= 0; i=i-2) 
        printf("%d ", ar[i]);  
    }
        printf("\n");
 return 0;
}






/*You will be given a positive integer N and an array A of size N. Suppose, the index starts from 0, then you need to print all the values at even indexes in reverse way.

*/