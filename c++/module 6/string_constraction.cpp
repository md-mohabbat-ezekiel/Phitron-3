#include<bits/stdc++.h>
using namespace std;
int main()
{
//   string s="hello world"; //1
  string s("hello world");//2
  string a("hello world",4);//3
  cout<<s<<endl;
  cout<<a<<endl;
  string b("gello world");//3
  string c(b,4);//3
  cout<<c<<endl;
  string e(4,'y');
  cout<<e<<endl;

return 0;
}