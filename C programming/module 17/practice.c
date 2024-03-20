#include <stdio.h>

void fun(char a[], int i)
{
    if (a[i] == '\0') {
        return;
    }
    fun(a, i + 1);
}

int main()
{
    char a[6] = "hello";
    int length = 0;
    fun(a, 0);
    while (a[length] != '\0') {
        length++;
    }
    printf("%d\n", length);
    return 0;
}
