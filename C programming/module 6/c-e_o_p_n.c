#include <stdio.h>
 
int main() {
    int N, num;
    int even_count = 0;
    int odd_count = 0;
    int positive_count = 0;
    int negative_count = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) { // Check if the number is even
            even_count++;
        } else { // Number is odd
            odd_count++;
        }
 
        if (num > 0) {
            positive_count++;
        } else if (num < 0) {
            negative_count++;
        }
    }
 
    printf("Even: %d\n", even_count);
    printf("Odd: %d\n", odd_count);
    printf("Positive: %d\n", positive_count);
    printf("Negative: %d\n", negative_count);
 
    return 0;
}