#include <stdio.h>
#include <string.h>
#include <ctype.h> // for tolower() and toupper() functions

int main()
{
   char a[100001];
   scanf("%s", a); // Removed unnecessary & before a

   for(int i = 0; a[i] != '\0'; i++)
   {
       if(a[i] == ',')
       {
           a[i] = ' ';
       }
       else if(islower(a[i])) // Removed unnecessary semicolon after if condition
       {
           a[i] = toupper(a[i]); // Fixed to toggle case correctly
       }
       else if(isupper(a[i])) // Fixed to toggle case correctly
       {
           a[i] = tolower(a[i]); // Fixed to toggle case correctly
       }
   }

   printf("%s\n", a);

   return 0;
}
// Given a string S. Print the origin string after replacing the following:

// Replace every comma character ',' with a space character.
// Replace every capital character in S with its respective small character and Vice Versa.