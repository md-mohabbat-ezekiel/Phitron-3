#include<bits/stdc++.h>
using namespace std;
class person
{
  public:
  string name;
  int age;
  person(string nm,int a)
  {
  name=nm;
  age=a;
  }
  void hallo()
  {
  cout<<"hello"<<endl;
  }

};
int main()
{
person rakib("rakib ahsan",28);
cout<<rakib.name<<" "<<rakib.age<<endl;
rakib.hallo();
return 0;
}