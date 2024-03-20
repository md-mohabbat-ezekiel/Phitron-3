#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
   char a[1001];
   scanf("%s",&a);
   int capital=0,small=0;
  for(int i=0;i<strlen(a);i++)
   {
   if(islower(a[i]))
   {
   capital++;
   }
   else if(isupper(a[i]))
   {
   small++;
   }
   }
   printf("%d %d\n",small,capital);
    return 0;
}