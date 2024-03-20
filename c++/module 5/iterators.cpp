#include<bits/stdc++.h>
using namespace std;
int main()
{
  string a;
 cin>>a;
//   for(int i=0;i<a.size();i++)
//   {
//   cout<<a[i]<<endl;
//   }
cout<<*a.begin()<<endl;
cout<<*(a.end()-1)<<endl;
string b;
cin>>b;
// string::iterator it;
// for(it=b.begin();it<b.end();it++)
// {
// cout<<*it<<endl;
// }
// or
for(auto it=b.begin();it<b.end();it++)
{
cout<<*it<<endl;
}
return 0;
}
// pointer