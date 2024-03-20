#include<stdio.h>
int main()
{
   int ar[5]={10,20,30,40,50};
   printf("0th er address-%p\n",&ar[0]);
   printf("0th er address-%p\n",&ar);
   printf("0th er value-%d\n",ar[0]);
   printf("0th er value-%d\n",*ar);
printf("0th er value-%d\n",ar[1]);
printf("0th er value-%d\n",1[ar]);
printf("0th er value-%d\n",*(ar+1));
printf("%d\n",*(ar+3));
printf("%d\n",*(3+ar));
    return 0;
}
// ar[1]=1[ar] //ar