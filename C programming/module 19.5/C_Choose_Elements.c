#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Sort the array in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    // Calculate the sum of the first k elements
    long long int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += a[i];
    }

    // Output the sum
    printf("%lld\n", sum);

    return 0;
}
