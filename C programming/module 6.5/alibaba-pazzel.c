#include<stdio.h>
int main()
{
   int a,b,c,d;
   scanf("%d%d%d%d",&a,&b,&c,&d);
  
   if(a+b*c==d	|| a+b-c==d || a-b+c==d || a-b*c==d || a*b+c==d || a*b-c==d)
   {
   printf("YES");
   }
   else
   {
    printf("NO");
   }
    return 0;
}
// One day, Ali Baba had an easy puzzle that he couldn't solve. The puzzle consisted of 4
//  numbers and his task was to check whether he could get the fourth number using arithmetic operators (+,−,×
//  between the other three numbers; so that each operator is used only once.