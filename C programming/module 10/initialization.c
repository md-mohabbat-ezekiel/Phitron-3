#include<stdio.h>
int main()
{
// char a[5]={'R','a','h','a','t');// no gurrante for null
   char a[6]="Rahat";//garantee for null
//    char a[5]="Rahat";a[5]!=5[char\0]=\0= null character
//    int sz=sizeof(a)/sizeof(char);
// printf("%d",sz);
//    for(int i=0;i<5;i++)
//    {printf("%c\n",a[i]);}
printf("%s",a);
    return 0;
}