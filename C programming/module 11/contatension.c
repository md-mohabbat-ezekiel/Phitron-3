#include<stdio.h>
#include<string.h>
int main()
{
   char a[100],b[100];
   scanf("%s %s",&a,&b);
 int k=strlen(a);
for(int i=0;i<=strlen(b);i++)
{
 a[k]=b[i];
 k++;
 }
//  for(int i=0;i<=2;i++)
//  {
//  a[k]=b[i];
//  k++;
//  }
//  a[k]='\0';
// if print(appleora)b[2]

printf("%s",a);
    return 0;
}
// contatension= addition
//  starcat(a,b)= addition