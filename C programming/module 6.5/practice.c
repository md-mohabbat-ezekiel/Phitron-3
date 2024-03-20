#include<stdio.h>
int main()
{
int n,m,k;
scanf("%d%d%d",&n,&m,&k);
int count=0;
int mouth=m;
if(n<=m && n<=k)
{
    for(int i=0;i<=n;i++)
    {
        if(n>=1 && m>=1 && k>=1)
       { count++;}
    }
}
else if(m<=n && m<=k)
{
    for(int i=0;i<=m;i++)
    {
        if(n>=1 && m>=1 && k>=1)
        {
            count++;
        }
    }
}

else
{
   for(int i=0;i<=k;i++)
    {
        if(n>=1 && m>=1 && k>=1)
        {count++;}
    }  
}
n=n-count;
m=m-count;
k=k-count;
if(n>=1 && k>=1)
{
if(n/2<=k)
{
    count=count+(n/2);
}
else
{ 
    count =count+k;
}
}
printf("%d\n", count);
 return 0;
}