#include<stdio.h>
int main ()
{
int i;
for(i=1;i<=10;i=i+1)
{
   
    if(i==5)
    {
        continue;
        // ignore 5 but print then all number
    }
    printf("%d\n",i);
}


    return 0;
}