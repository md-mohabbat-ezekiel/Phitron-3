#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b;
  char s;
  cin>>a>>s>>b;
  int result;
   if(s=='>')
   {
   result=(a>b);
   }
   else if(s=='<')
   {
   result=(a<b);
   }
   else if(s=='=')
   {
   result=(a=b);
   }

   if(result)
  {
  cout<<"Right"<<endl;
  }
  else
  {
  cout<<"Wrong"<<endl;
  }

return 0;
}