#include<bits/stdc++.h>
using namespace std;
class person
{
  public:
    string name;
    float height;
    int age;
   
    person(string n,float h,int a)
    {
    name=n;
    height=h;
    age=a;
    }
};
int main()
{
  person rahim("rahim",6.7,8);
  person karim("karim",7.7,8);
  
//   cout<<rahim.name<<endl;
//   cout<<rahim.height<<endl;
//   cout<<rahim.age<<endl;

//   cout<<karim.name<<endl;
//   cout<<karim.height<<endl;
//   cout<<karim.age<<endl;
// int mx=max(rahim.height,karim.height);
//   cout<<mx.name<<endl;
  
    person& olderPerson = (rahim.age > karim.age) ? rahim : karim;
    cout << olderPerson.name<< endl;

return 0;
}


// Create a class named Person where the class will have properties name(string), 
// height(float) and age(int). 
// Make a constructor and create a dynamic object of that class 
// and finally pass proper values using the constructor.


// Create two objects of the Person class from question 2-c
//  and initialize them with proper value.
//   Now compare whose age is greater, and print his/her name