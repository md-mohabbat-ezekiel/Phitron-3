#include <stdio.h>

int fun(int A[], int N) 
{
    if(N==0)return 0;
    return A[N-1] + fun(A, N-1);
}


int main() {
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
   
   int sum=fun(A,N);
    printf("%d\n",sum); // print newline at the end
    return 0;
}