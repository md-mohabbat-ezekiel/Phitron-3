#include <stdio.h>

int main() {
    int t, s, a, b, c;
    scanf("%d", &t); // Read the number of test cases

    while (t--) {
        scanf("%d %d %d %d", &s, &a, &b, &c); // Read input values
        int d = s - (a + b + c); // Calculate the missing number
        printf("%d\n", d); // Print the missing number
    }

    return 0;
}
