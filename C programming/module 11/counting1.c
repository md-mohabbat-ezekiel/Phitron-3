#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   {
   scanf("%d",&a[i]);
   }
   
   int cnt[7]={0};
   for(int i=0;i<n;i++)
   {
  int v=a[i];
  cnt[v]++;
   }
   for(int i=0;i<=6;i++)
   {
    printf("%d-%d\n",i,cnt[i]);
    }
    return 0;
}
// alt+shift+down copy
// how much same valu=counting