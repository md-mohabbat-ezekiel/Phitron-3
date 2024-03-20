#include<stdio.h>
#include<string.h>
int is_palindrome(char a[])
{
int i,j;
int len=strlen(a);
 for(i=0,j=len-1;i<j;i++,j--)
{
if(a[i]!=a[j])
{
return 0;//not palindrom
}
return 1;
}

}
int main()
{
   char a[100];
   scanf("%s",&a);
 if (is_palindrome(a)) 
 {
  printf("Palindrome\n");
 }
 else 
 {
  printf("Not Palindrome\n");
 }
    return 0;
}