#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s="hello world";
//   cout<<sizeof(s)<<endl;
  cout<<s.size()<<endl;
  cout<<s.max_size()<<endl;
  cout<<s.capacity()<<endl;//minimam capacity =15
  string a="adshgsfghgbhjkbkmjngfvjgvghjxcvhtfectsdvhuiyjh7vuyfuyhuhdk";
  cout<<a.capacity()<<endl;
string b="hello";
cout<<b<<endl;
b.clear();
cout<<b<<endl;
cout<<b.size()<<endl;
string c;
string c="helloo";
if(c.empty()==true) cout<<"Empty"<<endl;
else cout<<"Not empty"<<endl;
string d;
cin>>d;
cout<<d.size()<<endl;
d.resize(5);
d.resize(5,'x');
cout<<d.size()<<endl;



return 0;
}