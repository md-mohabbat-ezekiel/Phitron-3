#include<stdio.h>
#include<string.h>
int main()
{
   char s[1001],t[1001];
   scanf("%s %s",&s,&t);
   int st1=strlen(s);
   int st2=strlen(t);
   printf("%d %d\n",st1,st2);
   printf("%s %s",s,t);
    return 0;
}
// Given two strings S and T. Print 2 lines that contain the following in the same order:

// Print the length of S and T separated by space.
// Print a new string that contains S and T separated by a space.