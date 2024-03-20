#include<stdio.h>
#include<string.h>
int main()
{
   char a[1001];
   int cnt[26]={0};
   scanf("%s",&a);
   
   for(int i=0;i<strlen(a);i++)
   {
    cnt[a[i]-'a']++;   
   }
   for( int i=0;i<26;i++)
   {
   printf("%c - %d\n",i+'a',cnt[i]);
   }
    return 0;
}