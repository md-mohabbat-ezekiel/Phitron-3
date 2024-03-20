#include<stdio.h>
int main ()
{
int tk;
scanf("%d",&tk);
if(tk>=100)
{
printf(" we eat burger.\n");
if(tk>=500){
    printf("we eat pizza.\n");
}
else{
    printf("back");
}
// nested if greater then if
}
else if(tk>=50)
{

    printf(" we take coffe.\n");
}
// else less then if
else
{
    printf("we don't eat\n");
}

    return 0;
}

// if & else condition