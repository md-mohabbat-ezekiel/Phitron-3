#include<bits/stdc++.h>
using namespace std;
class student
{
  public:
    char name[100];
    int roll;
    int clas;
    int section;

};
int main()
{
  student rahim;
   rahim.clas=9;
   rahim.roll=29;
   rahim.section='A';
   char nm1[100]="rahim";
   strcpy(rahim.name,nm1);


   student karim;
   karim.clas=10;
   karim.roll=21;
   char nm2[100];
   strcpy(karim.name,nm2);
   cout<<rahim.roll;
return 0;
}