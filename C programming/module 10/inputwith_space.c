#include<stdio.h>
#include<string.h>
int main()
{
   char a[18];
   
//null with size or greather  than more
//    gets(a);
    fgets(a,10,stdin);
   //   a[17]='\0';
// size will be not grather then 
   printf("%s",a);
    return 0;
}