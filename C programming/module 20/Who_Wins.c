#include <stdio.h>
#include <limits.h>

int main()
{
    int n, m, k;
    scanf("%d", &n);

    int Tiger = 0, Pathan = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &m, &k);
        int mx = (m > k) ? m : k;
        if (mx == m)
            Tiger++;
        else if (mx == k)
            Pathan++;
    }

    if (Tiger > Pathan)
        printf("Tiger\n");
    else if (Pathan > Tiger)
        printf("Pathan\n");
    else
        printf("Draw\n");

    return 0;
}
