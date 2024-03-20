#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Sort the ages in ascending order using selection sort
    for (int i = 0; i < n - 1; i++)
     {
        for (int j = i + 1; j < n; j++) 
        {
            if (a[j] < a[i]) 
            {
             int temp = a[i];
             a[i] = a[j];
             a[j] = temp;
            }
        }
    }

    // Determine the middle age(s) based on the number of people in the line
    if (n % 2 == 0) 
    {
        int middle1 = a[n/2 - 1];
        int middle2 = a[n/2];
        printf("%d %d\n", middle1, middle2);
    } 
    else
     {
        int middle = a[n/2];
        printf("%d\n", middle);
    }

    return 0;
}
