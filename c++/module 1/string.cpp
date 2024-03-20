#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char a[100];
// cin>>a;
// fgets(a,100,stdin); strlen space counting number
cin.getline(a,100);
//strlen space not counting number
cout<<a;
cout<<strlen(a)<<endl;
return 0;
}