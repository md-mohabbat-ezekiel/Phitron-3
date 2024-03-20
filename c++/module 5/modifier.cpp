#include<bits/stdc++.h>
using namespace std;
int main()
{
  string a="hello";
  string b="world";
//   a=a+b;
//   a+=b;
a.append(b);
  cout<<a<<endl;
  cout<<b<<endl;
//   incorrect
//   a[5]='A';
//   cout<<a<<endl;
// correct way
// a="helloA";
// a=a+"A";
a.push_back('A');// add charecter in last position
a.pop_back();// remove charecter in last added position
cout<<a<<endl;
// a="gello";
a.assign("gello");
cout<<a<<endl;
string e="helloworld";
e.erase(4,3);// address 4 delete to 3 next adrees contain frrom 4
cout<<e<<endl; 
string f="mehmedmohabbatezekiel";
f.replace(4,3,"so");// address 4 delete to 3 next adrees contain frrom 4
cout<<f<<endl; 
string g="mehmedmohabbat";
g.insert(7,"rahat");// address 4 delete to 3 next adrees contain frrom 4
cout<<g<<endl;
return 0;
}
