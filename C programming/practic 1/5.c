#include<stdio.h>
int main()
{
int tk;
scanf("%d",&tk);
if(tk>=10000){
    printf("gucci bag");
    if(tk>=20000){
        printf("gucci belt");
    }
}
else if (tk>=5000){
    printf("levis bag");
}
else
printf("somthing");
    return 0;
}