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
int main()
{
  student rahim(29,9,'A',"sefat");
  student karim(29,9,'A',"saba");
  cout<<rahim.roll<<endl;
  cout<<karim.clas<<endl;
  cout<<rahim.section<<endl;
  cout<<rahim.roll<<endl;
return 0;
}