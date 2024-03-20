#include<bits/stdc++.h>
using namespace std;
int main()
{
  list<int>mylist={10,20,30,40,10,20,60,70};
  mylist.remove(10);
//   sort(mylist.begin,mylist.end(),greater<int>());//wrong process in list
//   mylist.sort();//ascending
//   mylist.sort(greater<int>());//descending
//   mylist.unique();
mylist.reverse();
  for(int val:mylist)
  {
  cout<<val<<endl;
  }
return 0;
}