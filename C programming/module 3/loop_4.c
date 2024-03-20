#include<stdio.h>
int main ()
{
int i;
for(i=1;i<=10;i=i+1)
{
    // if printf befor 5 print 1 then break because of print firt then check;
    if(i==5)
    {
        break;
    }
    printf("%d\n",i);
}


    return 0;
}