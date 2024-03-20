#include <stdio.h>

int main() {
    int N, X, V;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &A[i]);
    }
    scanf("%d %d", &X,&V);

    // Update the value at X'th index
    A[X] = V;

    for (int i = N - 1; i >= 0; i--) 
    {
        printf("%d ", A[i]);
    }

    return 0;
}



// You will given a positive integer N and an array A of size N. Also you will be given two values X and V. You need to change the value of X'th index to V and then print the array in reverse way.