#include<stdio.h>
#include<string.h>
int main()
{
   char a[21],b[21];
   scanf("%s %s",&a,&b);
   int v=strcmp(a,b);
   if(v<=0)
   {
   printf("%s",a);
   }
   else
   {
   printf("%s",b);
   }
    return 0;
}