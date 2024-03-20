#include <stdio.h>
#include <string.h>

int main() 
{
    char s[1001];
    int count[26] = {0};

    scanf("%s", s);
   
    for (int i = 0; i < strlen(s); i++)
    {
        count[s[i] - 'a']++;
    }

   for (int i = 0; i < 26; i++) 
    {
        printf("%c - %d\n",i + 'a', count[i]);
    }

    return 0;
}
