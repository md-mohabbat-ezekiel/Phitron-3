#include <stdio.h>
#include <limits.h>

void findMinMax(int ar[], int n, int* min, int* max)
{
    *min = INT_MAX;
    *max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (ar[i] < *min)
        {
            *min = ar[i];
        }
        if (ar[i] > *max)
        {
            *max = ar[i];
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int min, max;
    findMinMax(ar, n, &min, &max);

    printf("%d %d", min, max);
    return 0;
}
