#include <stdio.h>
#include <string.h>

int main() {
    char a[1001];
    scanf("%s", a); 
    int n = strlen(a);
    int i = 0, j = n - 1;
    while (i < j) {
        char tmp = a[i]; 
        a[i] = a[j];
        a[j] = tmp;
        i++;
        j--;
    }

    int isPalindrome = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] != a[n - i - 1]) {
            isPalindrome = 0; // 
            break; 
        }
    }

    if (isPalindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
