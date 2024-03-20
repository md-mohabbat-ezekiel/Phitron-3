#include <stdio.h>
#include <string.h>

int main() {
    char a[1001];
    fgets(a, sizeof(a), stdin);
    
    int n = strlen(a);
    int capital = 0, small = 0, spaces = 0;
    
    for (int i = 0; i < n; i++) {
        if (a[i] >= 'a' && a[i] <= 'z') {
            small++;
        } else if (a[i] >= 'A' && a[i] <= 'Z') {
            capital++;
        } else if (a[i] == ' ') {
            spaces++;
        }
    }
    
    printf("Capital - %d\n", capital);
    printf("Small - %d\n", small);
    printf("Spaces - %d\n", spaces);

    return 0;
}
