#include <stdio.h>

int main() {
    int N, num, max;
    scanf("%d", &N);
    scanf("%d", &max);

    for (int i = 1; i < N; i++) {
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    }

    printf("%d\n", max);

    return 0;
}
// Given a number N, and N numbers, find maximum number in these N numbers.

// Input
// First line contains a number N (1 ≤ N ≤ 103).

// Second line contains N numbers Xi (0 ≤ Xi ≤ 109).