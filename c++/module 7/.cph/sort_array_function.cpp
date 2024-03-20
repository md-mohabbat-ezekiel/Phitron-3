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
bool cmp(student a,student b)
{
 if(a.marks>b.marks)return true;//ascending
 else return false;
}
int main()
{
  student a[3];
  for(int i=0;i<3;i++)
  {
  getline(cin,a[i].name);
  cin>>a[i].roll>>a[i].marks;
  cin.ignore();//second decleration input
  }
//   sort function
sort(a,a+3,cmp);



  for(int i=0;i<3;i++)
  {
    cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
  }
return 0;
}