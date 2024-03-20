#include <stdio.h>

void fun(int A[], int N, int index) {
    if(index<0)return;
    if(index%2==0)
    {
    printf("%d ",A[index]);
    }
    fun(A, N, index-1); // recursive call
}

int main() {
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    fun(A, N, N-1);
    printf("\n"); // print newline at the end
    return 0;
}
