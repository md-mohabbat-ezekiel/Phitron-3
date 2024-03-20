// return type + parameter
#include<stdio.h>
int sum(int x,int y)
{
int sum=x+y;
return 0;

}


int main()
{
printf("%d",sum(100,200));
    return 0;
}
// return type + no parameter
#include<stdio.h>
int sum()
{
int x,y;
scanf("%d %d",&x,&y);
int s=x+y;
return s;

}
int main()
{
  int s=sum();

   printf("%d",s);
    return 0;
}
//no return type + parameter
#include<stdio.h>
void sum(int x,int y)
{
int s=x+y;
return s;
}
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  sum(a,b) ;
    return 0;
}
//no return type + no parameter
#include<stdio.h>
void sum(void)
{
int a,b;
scanf("%d %d",&a,&b);
int s=a+b;
printf("%d",s);
}
int main()
{
   sum();
    return 0;
}
// pointer
#include<stdio.h>
int main()
{
   int x;
   int*p=&x;
   printf("%p\n",p);
    return 0;
}