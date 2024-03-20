#include<bits/stdc++.h>
using namespace std;
class person
{
public:
string name;
int age;
//  person(string nm,int a)
//  {
//  name=nm;
//  age=a;
//  }
person(string name,int age)
{
this->name=name;
this->age=age;


}
void fun()
{
cout<<"hello"<<endl;

}

};
int main()
{
  person rakib("rakib ahsan",78);
  cout<<rakib.name<<" "<<rakib.age<<endl;
  rakib.fun();
return 0;
}