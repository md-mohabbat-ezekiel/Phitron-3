#include<bits/stdc++.h>
using namespace std;
class student
{
  public:
    char name[100];
    int roll;
    int clas;
    int section;
    student(int r,int c,int s,char*n)
    {
    cout<<"I am busy"<<endl;
    roll=r;
    clas=c;
    section=s;
    strcpy(name,n);
    }
};

student fun()
{
char name[100]="sefat";
student rahim(29,9,'A',name);
  return rahim ;
}
int main()
{
  student rahim=fun();


  cout<<rahim.roll<<endl;
  cout<<rahim.clas<<endl;
  cout<<rahim.section<<endl;
  cout<<rahim.roll<<endl;
return 0;
}