#include<stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];

    // Read the matrix
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Print the last row
    for(int j=0; j<m; j++) {
        printf("%d ", a[n-1][j]);
    }
    printf("\n");

    // Print the last column
    for(int i=0; i<n; i++) {
        printf("%d ", a[i][m-1]);
    }
     printf("\n");

    return 0;
}
// solved and correct accepted
