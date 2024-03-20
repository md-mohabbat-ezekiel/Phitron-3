#include<stdio.h>

int main()
{
   char a[100],b[100];
   scanf("%s %s",&a,&b);
   int i=0;
   while (1)
   {
    if(a[i]=='\0' && b[i]=='\0')
    {
    printf("same\n");
    break;
    }
    else if(a[i]=='\0')
    {
    printf("a less\n");
     break;
    }
    else if(b[i]='\0')
    {
    printf("b less\n");
     break;
    }
    if(a[i]==b[i])
    {
    i++;
    }
    else if(a[i]<b[i])
    {
    printf("a less\n");
    break;
    }
    else
    {
    printf("b less\n");
    break;
    }
   }
   
    return 0;
}
// two string same charecter(==)
// two string somethig same charecter but grather or lessthen numbers(> ||<)
// two string somethig same charecter but last charector position grather or less(> || <)
// infinity loop for(int i=0;  ;i++)  or while(1){break;}=true(1)