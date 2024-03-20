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
  student a[3];
  for(int i=0;i<3;i++)
  {
  getline(cin,a[i].name);
  cin>>a[i].roll>>a[i].marks;
  cin.ignore();//second decleration input
  }
student mx;
mx.marks=INT_MIN;
 for(int i=0;i<3;i++)
 {
    if(a[i].marks>mx.marks)
     {
       mx=a[i];
     }
 }
 cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks;

 student mn;
 mn.marks=INT_MAX;
 for(int i=0;i<3;i++)
 {
    if(a[i].marks<mn.marks)
     {
       mn=a[i];
     }
 }
 cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks;


//   for(int i=0;i<5;i++)
//   {
//     cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks;
//   }
return 0;
}