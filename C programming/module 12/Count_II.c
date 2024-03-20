#include<stdio.h>
#include<string.h>
int main()
{
   char n[1001];
   scanf("%s",&n);
   int vowel=0;
   for(int i=0;i<strlen(n);i++)
   {
   if(n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' ||n[i]=='u')
   {
   vowel++;
   }
   }
   printf("%d",vowel);
    return 0;
}