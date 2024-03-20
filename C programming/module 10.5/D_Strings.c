#include<stdio.h>
#include<string.h>
int main()
{
   char a[11];
   scanf("%s",&a);
   char b[11];
   scanf("%s",&b);
   int len1=strlen(a);
   int len2=strlen(b);
   printf("%d %d\n",len1,len2);
   printf("%s%s\n",a,b);
   int tmp=a[0];
   a[0]=b[0];
   b[0]=tmp;
   printf("%s %s\n",a,b);

    return 0;
}


// Given two strings A and B. Print three lines contain the following:

// The size of the string A and size of the string B separated by a space
// The string produced by concatenating A and B (A + B).
// The two strings separated by a single space respectively, after swapping their first character.