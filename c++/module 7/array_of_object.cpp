#include<bits/stdc++.h>
using namespace std;
class student 
{
public:
string name;
int roll;
int marks;
//  student(string name,int roll,int marks)
//  {
//  this->name=name;
//  this->roll=roll;
//  this->marks;
//  }
};
int main()
{
  student a[5];
  for(int i=0;i<5;i++)
  {
  getline(cin,a[i].name);
  cin>>a[i].roll>>a[i].marks;
  cin.ignore();
  }
  for(int i=0;i<5;i++)
  {
    cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks;
  }
return 0;
}