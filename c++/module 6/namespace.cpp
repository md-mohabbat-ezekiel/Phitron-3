#include<bits/stdc++.h>
using namespace std;
namespace rakib
{
 int age=20;
 void hello()
 {
 cout<<"rakib namespace"<<endl;
 }


}
namespace sakib
{
 int age2=25;
 void hello2()
 {
 cout<<"rakib namespace"<<endl;
 }


}
using namespace rakib;
using namespace sakib;
int main()
{
//   cout<<rakib::age<<endl;
//   cout<<sakib::age<<endl;
cout<<age<<endl;
cout<<age2<<endl;
;
return 0;
}