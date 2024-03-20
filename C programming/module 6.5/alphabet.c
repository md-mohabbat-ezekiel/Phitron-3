#include <stdio.h>
 
int main() {
    char ch;
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z') 
    {
        if (ch == 'z') 
        {
            printf("a\n");
        }
        
        else 
        {
            printf("%c\n", ch + 1);
        }
    }
  
    else {
        printf("\n");
    }
 
    return 0;
}

// Given a lowercase alphabet character. You have to print the next character in the alphabet.Note
// The next letter to z is a. using c programming  