#include<stdio.h>
int main(){
int n,positive,negetive,zero;
scanf("%d",&n);
if(n>=0){
    printf("%d=positive",n,positive);
}
else if (n<=0)
{
printf("%d=negetive",n,negetive);}
else
printf("%d=zero",n,zero);




    return 0;
}