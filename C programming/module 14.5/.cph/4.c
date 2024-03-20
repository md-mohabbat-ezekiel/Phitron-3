#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a>='a' && a<='z')
    {
        // small letter so print capital letter
        int ans=a-32;
        printf("%c",ans);
    } 
    else
    {
        // capital so small letter
        int ans=a+32;
        printf("%c",ans);
    }  
//    A=65,a=97 ASCII CODE hexa diffrent 32 
// 97 to 122 small leter
// 65 to 96 capital letter
    return 0;
}