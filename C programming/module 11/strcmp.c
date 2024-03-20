#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
   scanf("%s %s",&a,&b);
   int v=strcmp(a,b);
   if(v>0)
   {
   printf("b small");
   }
   else if(v<0)
   {
   printf("a small");
   }
    else
    {
    printf("same");
    }


    return 0;
}
// strcmp(-1,0,1)