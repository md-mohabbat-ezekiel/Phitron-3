#include<stdio.h>
int main()
{
   char a[1000000];
   fgets(a,1000001,stdin);
   for( int i=0;a[i]!='\\';i++)
   printf("%c",a[i]);

    return 0;
}
// Given a string S. Print the string S from the beginning to the first '\' character without printing the '\'.

// Hint: use function getline(cin, s).